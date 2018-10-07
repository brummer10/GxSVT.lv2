# GxSVT.lv2
Tube based Bass preamp simulation 


![GxSVT](https://raw.githubusercontent.com/brummer10/GxSVT.lv2/master/GxSVT.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxSVT:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

