	
	ECHO ?= echo
	STRIP ?= strip
	PKGCONFIG ?= pkg-config
	# check if user is root
	user = $(shell whoami)
	ifeq ($(user),root)
	INSTALL_DIR = /usr/lib/lv2
	else 
	INSTALL_DIR = ~/.lv2
	endif

	# check CPU and supported optimization flags
	ifneq ($(shell cat /proc/cpuinfo | grep sse3 ) , )
		SSE_CFLAGS = -msse3 -mfpmath=sse
	else ifneq ($(shell cat /proc/cpuinfo | grep sse2 ) , )
		SSE_CFLAGS = -msse2 -mfpmath=sse
	else ifneq ($(shell cat /proc/cpuinfo | grep sse ) , )
		SSE_CFLAGS = -msse -mfpmath=sse
		else ifneq ($(shell cat /proc/cpuinfo | grep ARM ) , )
		ifneq ($(shell cat /proc/cpuinfo | grep ARMv7 ) , )
			ifneq ($(shell cat /proc/cpuinfo | grep vfpd32 ) , )
				SSE_CFLAGS = -march=armv7-a -mfpu=vfpv3 
			else ifneq ($(shell cat /proc/cpuinfo | grep vfpv3 ) , )
				SSE_CFLAGS = -march=armv7-a -mfpu=vfpv3
			endif
		else
			ARMCPU = "YES"
		endif
	else
		SSE_CFLAGS =
	endif

	# set bundle name
	NAME = gx_ampegsvt
	BUNDLE = $(NAME).lv2
	VER = 0.1
	# check OS specific stuff
	OS := $(shell echo $$OS)
	UNAME_S := $(shell uname -s)
	GUI_PLATFORM_DIR = ./gui
	# cross compilation (e.g.: PKG_CONFIG_PATH=/usr/local/pkgconfig make CROSS=x86_64-w64-mingw32- mod)
	ifneq (,$(findstring mingw,$(CROSS)))
		# Found
		TARGET = Windows
		STRIP = $(CROSS)strip
		PKGCONFIG = $(CROSS)pkg-config
		CC = $(CROSS)cc
		CXX = $(CROSS)g++
		LD = $(CROSS)ld
	else
		# Not found
		ifeq ($(UNAME_S), Linux) #LINUX
			TARGET = Linux
		endif
		ifeq ($(OS), Windows_NT) #WINDOWS
			TARGET = Windows
		endif
		ifeq ($(UNAME_S), Darwin) #APPLE
			TARGET = Apple
		endif
	endif
	ifeq ($(TARGET), Linux)
		ABI_CFLAGS = -Wl,-z,nodelete
		ABI_CXXFLAGS = -Wl,-z,relro,-z,now
		ABI_LDFLAGS = -Wl,-z,noexecstack
		GUI_LIBS = -L/usr/X11/lib -lX11
		LIB_EXT = so
		GUI_PLATFORM_FILES = $(GUI_PLATFORM_DIR)/gx_platform_linux.c
	endif
	ifeq ($(TARGET), Windows)
		ECHO += -e
		ABI_LDFLAGS = -static -lpthread
		GUI_LIBS = -liconv -lstdc++
		PKGCONFIG_FLAGS = --static
		LIB_EXT = dll
		TTLUPDATE = sed -i '/lv2:binary/ s/\.so/\.dll/ ' $(BUNDLE)/manifest.ttl
		TTLUPDATEGUI = sed -i '/a guiext:X11UI/ s/X11UI/WindowsUI/ ; /guiext:binary/ s/\.so/\.dll/ ' $(BUNDLE)/$(NAME).ttl
		GUI_PLATFORM_FILES = $(GUI_PLATFORM_DIR)/gx_platform_mswin.c
	endif
	ifeq ($(TARGET), Apple)
		# insert magic here
		GUI_PLATFORM_FILES = $(GUI_PLATFORM_DIR)/gx_platform_apple.c
	endif
	# set compile flags
	CXXFLAGS += -D_FORTIFY_SOURCE=2 -I. -I./dsp -I./plugin -I./dsp/zita-resampler-1.1.0 -I./dsp/zita-resampler-1.1.0/zita-resampler \
	 -fPIC -DPIC -O2 -Wall -fstack-protector -funroll-loops -ffast-math -fomit-frame-pointer -fstrength-reduce \
	 -fdata-sections -Wl,--gc-sections $(ABI_CXXFLAGS) $(SSE_CFLAGS) `$(PKGCONFIG) $(PKGCONFIG_FLAGS) --cflags lv2`
	LDFLAGS += -I. -shared $(ABI_LDFLAGS) -lm
	GUI_LDFLAGS += -I./gui -shared $(ABI_LDFLAGS) -lm `$(PKGCONFIG) $(PKGCONFIG_FLAGS) --cflags --libs cairo` $(GUI_LIBS)
	# invoke build files
	OBJECTS = plugin/$(NAME).cpp
	GUI_OBJECTS = gui/$(NAME)_gui.c $(GUI_PLATFORM_FILES)
	RES_OBJECTS = gui/pedal.o gui/pswitch_on.o gui/pswitch_off.o
	## output style (bash colours)
	LGREEN = "\033[1;92m"
	BLUE = "\033[1;34m"
	RED =  "\033[1;31m"
	NONE = "\033[0m"

.PHONY : mod all clean install uninstall 

all : check $(NAME)
	@mkdir -p ./$(BUNDLE)
	@cp ./plugin/*.ttl ./$(BUNDLE)
	@mv ./*.$(LIB_EXT) ./$(BUNDLE)
	$(TTLUPDATE)
	$(TTLUPDATEGUI)
	@if [ -f ./$(BUNDLE)/$(NAME).$(LIB_EXT) ]; then $(ECHO) $(BLUE)"build finish, now run make install"; \
	else $(ECHO) $(RED)"sorry, build failed"; fi
	@$(ECHO) $(NONE)

mod : nogui
	@mkdir -p ./$(BUNDLE)
	@cp -R ./MOD/* ./$(BUNDLE)
	@mv ./*.$(LIB_EXT) ./$(BUNDLE)
	$(TTLUPDATE)
	@if [ -f ./$(BUNDLE)/$(NAME).$(LIB_EXT) ]; then $(ECHO) $(BLUE)"build finish, now run make install"; \
	else $(ECHO) $(RED)"sorry, build failed"; fi
	@$(ECHO) $(NONE)

check :
ifdef ARMCPU
	@$(ECHO) $(RED)ARM CPU DEDECTED, please check the optimization flags
	@$(ECHO) $(NONE)
endif

   #@build resource object files
$(RES_OBJECTS) : gui/pedal.png gui/pswitch_on.png gui/pswitch_off.png
	@$(ECHO) $(LGREEN)"generate resource files,"$(NONE)
	-cd ./gui && $(LD) -r -b binary pedal.png -o pedal.o
	-cd ./gui && $(LD) -r -b binary pswitch_on.png -o pswitch_on.o
	-cd ./gui && $(LD) -r -b binary pswitch_off.png -o pswitch_off.o

clean :
	@rm -f $(NAME).$(LIB_EXT)
	@rm -rf ./$(BUNDLE)
	@$(ECHO) ". ." $(BLUE)", clean up"$(NONE)

dist-clean :
	@rm -f $(NAME).$(LIB_EXT)
	@rm -rf ./$(BUNDLE)
	@rm -rf ./$(RES_OBJECTS)
	@$(ECHO) ". ." $(BLUE)", clean up"$(NONE)

install :
ifneq ("$(wildcard ./$(BUNDLE))","")
	@mkdir -p $(DESTDIR)$(INSTALL_DIR)/$(BUNDLE)
	cp -r ./$(BUNDLE)/* $(DESTDIR)$(INSTALL_DIR)/$(BUNDLE)
	@$(ECHO) ". ." $(BLUE)", done"$(NONE)
else
	@$(ECHO) ". ." $(BLUE)", you must build first"$(NONE)
endif

uninstall :
	@rm -rf $(INSTALL_DIR)/$(BUNDLE)
	@$(ECHO) ". ." $(BLUE)", done"$(NONE)

$(NAME) : clean $(RES_OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LDFLAGS) -o $(NAME).$(LIB_EXT)
	$(CC) $(CXXFLAGS) $(ABI_CFLAGS) $(GUI_OBJECTS) $(RES_OBJECTS) $(GUI_LDFLAGS) -o $(NAME)_ui.$(LIB_EXT)
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME).$(LIB_EXT)
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME)_ui.$(LIB_EXT)

nogui : clean
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LDFLAGS) -o $(NAME).$(LIB_EXT)
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME).$(LIB_EXT)
