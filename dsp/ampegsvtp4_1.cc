// generated from file './/ampegsvtp4_1.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp4_1 {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fRec1[5];
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "ampegsvtp4_1";
	name = N_("ampegsvtp4_1");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<5; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (1.12964349996533e-21 * fConst0);
	fConst2 = (8.31455068977244e-13 + (fConst0 * (5.89470074502738e-12 + (fConst0 * (4.54930663895417e-13 + (fConst0 * (3.63433830715359e-15 + fConst1)))))));
	fConst3 = (2.45477556411778e-14 * fConst0);
	fConst4 = (1.88898370814696e-13 + (fConst0 * (1.33917663579871e-12 + (fConst0 * (1.0687867796836e-13 + fConst3)))));
	fConst5 = (2.77211933465947e-14 * fConst0);
	fConst6 = ((fConst0 * ((fConst0 * (0 - (9.39260441920244e-14 + fConst5))) - 1.28450892153998e-14)) - 6.33617143638274e-29);
	fConst7 = (9.86083647361778e-22 * fConst0);
	fConst8 = (1.61599481963932e-16 + (fConst0 * ((fConst0 * (4.11266562882231e-13 + (fConst0 * (fConst7 - 3.91346185112357e-16)))) - 5.18672080803734e-12)));
	fConst9 = (2.73624177386736e-14 * fConst0);
	fConst10 = (3.67138045174645e-17 + (fConst0 * ((fConst0 * (9.31800833230802e-14 - fConst9)) - 1.17837167686509e-12)));
	fConst11 = (2.4042191745521e-14 * fConst0);
	fConst12 = ((fConst0 * (2.49653870758285e-18 + (fConst0 * (fConst11 - 8.0129849630788e-14)))) - 1.23148208479096e-32);
	fConst13 = (8.31455068977244e-13 + (fConst0 * ((fConst0 * (4.54930663895417e-13 + (fConst0 * (fConst1 - 3.63433830715359e-15)))) - 5.89470074502738e-12)));
	fConst14 = (1.88898370814696e-13 + (fConst0 * ((fConst0 * (1.0687867796836e-13 - fConst3)) - 1.33917663579871e-12)));
	fConst15 = ((fConst0 * (1.28450892153998e-14 + (fConst0 * (fConst5 - 9.39260441920244e-14)))) - 6.33617143638274e-29);
	fConst16 = (4.51857399986133e-21 * fConst0);
	fConst17 = faustpower<2>(fConst0);
	fConst18 = (3.32582027590898e-12 + (fConst0 * ((fConst17 * (7.26867661430717e-15 - fConst16)) - 1.17894014900548e-11)));
	fConst19 = (4.90955112823557e-14 * fConst17);
	fConst20 = (7.55593483258782e-13 + (fConst0 * (fConst19 - 2.67835327159741e-12)));
	fConst21 = (5.54423866931895e-14 * fConst17);
	fConst22 = ((fConst0 * (2.56901784307996e-14 - fConst21)) - 2.5344685745531e-28);
	fConst23 = (4.98873041386346e-12 + (fConst17 * ((6.77786099979199e-21 * fConst17) - 9.09861327790834e-13)));
	fConst24 = (1.13339022488817e-12 - (2.13757355936719e-13 * fConst17));
	fConst25 = ((1.87852088384049e-13 * fConst17) - 3.80170286182964e-28);
	fConst26 = (3.32582027590898e-12 + (fConst0 * (1.17894014900548e-11 + (fConst17 * (0 - (7.26867661430717e-15 + fConst16))))));
	fConst27 = (7.55593483258782e-13 + (fConst0 * (2.67835327159741e-12 - fConst19)));
	fConst28 = ((fConst0 * (fConst21 - 2.56901784307996e-14)) - 2.5344685745531e-28);
	fConst29 = (3.94433458944711e-21 * fConst0);
	fConst30 = (6.46397927855727e-16 + (fConst0 * ((fConst17 * (7.82692370224713e-16 - fConst29)) - 1.03734416160747e-11)));
	fConst31 = (5.47248354773472e-14 * fConst17);
	fConst32 = (1.46855218069858e-16 + (fConst0 * (fConst31 - 2.35674335373018e-12)));
	fConst33 = (4.80843834910421e-14 * fConst17);
	fConst34 = ((fConst0 * (4.9930774151657e-18 - fConst33)) - 4.92592833916386e-32);
	fConst35 = (9.6959689178359e-16 + (fConst17 * ((5.91650188417067e-21 * fConst17) - 8.22533125764462e-13)));
	fConst36 = (2.20282827104787e-16 - (1.8636016664616e-13 * fConst17));
	fConst37 = ((1.60259699261576e-13 * fConst17) - 7.38889250874579e-32);
	fConst38 = (6.46397927855727e-16 + (fConst0 * (1.03734416160747e-11 + (fConst17 * (0 - (7.82692370224713e-16 + fConst29))))));
	fConst39 = (1.46855218069858e-16 + (fConst0 * (2.35674335373018e-12 - fConst31)));
	fConst40 = ((fConst0 * (fConst33 - 4.9930774151657e-18)) - 4.92592833916386e-32);
	fConst41 = (1.61599481963932e-16 + (fConst0 * (5.18672080803734e-12 + (fConst0 * (4.11266562882231e-13 + (fConst0 * (3.91346185112357e-16 + fConst7)))))));
	fConst42 = (3.67138045174645e-17 + (fConst0 * (1.17837167686509e-12 + (fConst0 * (9.31800833230802e-14 + fConst9)))));
	fConst43 = ((fConst0 * ((fConst0 * (0 - (8.0129849630788e-14 + fConst11))) - 2.49653870758285e-18)) - 1.23148208479096e-32);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		double fTemp0 = ((fRec0[0] * ((fConst6 * fRec0[0]) + fConst4)) + fConst2);
		fRec1[0] = ((double)input0[i] - (((((fRec1[1] * ((fRec0[0] * ((fConst28 * fRec0[0]) + fConst27)) + fConst26)) + (fRec1[2] * ((fRec0[0] * ((fConst25 * fRec0[0]) + fConst24)) + fConst23))) + (fRec1[3] * ((fRec0[0] * ((fConst22 * fRec0[0]) + fConst20)) + fConst18))) + (fRec1[4] * ((fRec0[0] * ((fConst15 * fRec0[0]) + fConst14)) + fConst13))) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((((fRec1[0] * ((fRec0[0] * ((fConst43 * fRec0[0]) + fConst42)) + fConst41)) + (fRec1[1] * ((fRec0[0] * ((fConst40 * fRec0[0]) + fConst39)) + fConst38))) + (fRec1[2] * ((fRec0[0] * ((fConst37 * fRec0[0]) + fConst36)) + fConst35))) + (fRec1[3] * ((fRec0[0] * ((fConst34 * fRec0[0]) + fConst32)) + fConst30))) + (fRec1[4] * ((fRec0[0] * ((fConst12 * fRec0[0]) + fConst10)) + fConst8))) / fTemp0);
		// post processing
		for (int i=4; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case MIDDLE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   MID, 
} PortIndex;
*/

} // end namespace ampegsvtp4_1
