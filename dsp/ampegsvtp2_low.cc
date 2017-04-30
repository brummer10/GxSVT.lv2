// generated from file './/ampegsvtp2_low.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp2_low {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fRec0[5];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst16;
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
	id = "ampegsvtp2_low";
	name = N_("ampegsvtp2_low");
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
	for (int i=0; i<5; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (1.51658343972118e-19 * fConst0);
	fConst2 = (1.08415891319937e-07 + (fConst0 * ((fConst0 * (4.2037983075585e-12 + (fConst0 * (fConst1 - 1.67405535354556e-15)))) - 2.32564477268844e-09)));
	fConst3 = (6.06633375888472e-19 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (4.33663565279747e-07 + (fConst0 * ((fConst4 * (3.34811070709112e-15 - fConst3)) - 4.65128954537688e-09)));
	fConst6 = (9.09950063832707e-19 * fConst4);
	fConst7 = (6.50495347919621e-07 + (fConst4 * (fConst6 - 8.40759661511701e-12)));
	fConst8 = (4.33663565279747e-07 + (fConst0 * (4.65128954537688e-09 + (fConst4 * (0 - (3.34811070709112e-15 + fConst3))))));
	fConst9 = (1.08415891319937e-07 + (fConst0 * (2.32564477268844e-09 + (fConst0 * (4.2037983075585e-12 + (fConst0 * (1.67405535354556e-15 + fConst1)))))));
	fConst10 = (1.0 / fConst9);
	fConst11 = ((fConst0 * (8.42546355400655e-13 + (fConst0 * (fConst1 - 5.05527813240392e-16)))) - 1.54879844742767e-09);
	fConst12 = ((fConst4 * (1.01105562648078e-15 - fConst3)) - 3.09759689485535e-09);
	fConst13 = (fConst0 * (fConst6 - 1.68509271080131e-12));
	fConst14 = (3.09759689485535e-09 + (fConst4 * (0 - (1.01105562648078e-15 + fConst3))));
	fConst15 = (1.54879844742767e-09 + (fConst0 * (8.42546355400655e-13 + (fConst0 * (5.05527813240392e-16 + fConst1)))));
	fConst16 = (fConst0 / fConst9);
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
		fRec0[0] = ((double)input0[i] - (fConst10 * ((((fConst8 * fRec0[1]) + (fConst7 * fRec0[2])) + (fConst5 * fRec0[3])) + (fConst2 * fRec0[4]))));
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow0);
		output0[i] = (FAUSTFLOAT)(fConst16 * (fRec1[0] * (((((fConst15 * fRec0[0]) + (fConst14 * fRec0[1])) + (fConst13 * fRec0[2])) + (fConst12 * fRec0[3])) + (fConst11 * fRec0[4]))));
		// post processing
		fRec1[1] = fRec1[0];
		for (int i=4; i>0; i--) fRec0[i] = fRec0[i-1];
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
	case VOLUME: 
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
   VOLUME, 
} PortIndex;
*/

} // end namespace ampegsvtp2_low
