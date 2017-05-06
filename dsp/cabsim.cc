// generated from file './/cabsim.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace cabsim {

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
	double 	fRec0[6];
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
	id = "cabsim";
	name = N_("cabsim");
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
	for (int i=0; i<6; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (3.00024537593036e-24 * fConst0);
	fConst2 = (2.66372814872745e-09 + (fConst0 * ((fConst0 * (1.82257632905173e-12 + (fConst0 * ((fConst0 * (3.57596855396244e-20 - fConst1)) - 3.74925610227761e-16)))) - 7.35307366856468e-10)));
	fConst3 = (1.50012268796518e-23 * fConst0);
	fConst4 = (1.33186407436372e-08 + (fConst0 * ((fConst0 * (1.82257632905173e-12 + (fConst0 * (3.74925610227761e-16 + (fConst0 * (fConst3 - 1.07279056618873e-19)))))) - 2.20592210056941e-09)));
	fConst5 = (3.00024537593036e-23 * fConst0);
	fConst6 = (2.66372814872745e-08 + (fConst0 * ((fConst0 * ((fConst0 * (7.49851220455522e-16 + (fConst0 * (7.15193710792488e-20 - fConst5)))) - 3.64515265810345e-12)) - 1.47061473371294e-09)));
	fConst7 = (2.66372814872745e-08 + (fConst0 * (1.47061473371294e-09 + (fConst0 * ((fConst0 * ((fConst0 * (7.15193710792488e-20 + fConst5)) - 7.49851220455522e-16)) - 3.64515265810345e-12)))));
	fConst8 = (1.33186407436372e-08 + (fConst0 * (2.20592210056941e-09 + (fConst0 * (1.82257632905173e-12 + (fConst0 * ((fConst0 * (0 - (1.07279056618873e-19 + fConst3))) - 3.74925610227761e-16)))))));
	fConst9 = (2.66372814872745e-09 + (fConst0 * (7.35307366856468e-10 + (fConst0 * (1.82257632905173e-12 + (fConst0 * (3.74925610227761e-16 + (fConst0 * (3.57596855396244e-20 + fConst1)))))))));
	fConst10 = (1.0 / fConst9);
	fConst11 = (1.47504219460396e-24 * fConst0);
	fConst12 = (3.34459495626051e-10 + (fConst0 * ((fConst0 * (1.88610414577134e-16 + fConst11)) - 3.1639842132994e-12)));
	fConst13 = (4.42512658381187e-24 * fConst0);
	fConst14 = (1.00337848687815e-09 + (fConst0 * ((fConst0 * (0 - (1.88610414577134e-16 + fConst13))) - 3.1639842132994e-12)));
	fConst15 = (2.95008438920791e-24 * fConst0);
	fConst16 = (6.68918991252102e-10 + (fConst0 * (6.32796842659881e-12 + (fConst0 * (fConst15 - 3.77220829154267e-16)))));
	fConst17 = ((fConst0 * (6.32796842659881e-12 + (fConst0 * (3.77220829154267e-16 + fConst15)))) - 6.68918991252102e-10);
	fConst18 = ((fConst0 * ((fConst0 * (1.88610414577134e-16 - fConst13)) - 3.1639842132994e-12)) - 1.00337848687815e-09);
	fConst19 = ((fConst0 * ((fConst0 * (fConst11 - 1.88610414577134e-16)) - 3.1639842132994e-12)) - 3.34459495626051e-10);
	fConst20 = (fConst0 / fConst9);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst10 * (((((fConst8 * fRec0[1]) + (fConst7 * fRec0[2])) + (fConst6 * fRec0[3])) + (fConst4 * fRec0[4])) + (fConst2 * fRec0[5]))));
		output0[i] = (FAUSTFLOAT)(fConst20 * ((((((fConst19 * fRec0[0]) + (fConst18 * fRec0[1])) + (fConst17 * fRec0[2])) + (fConst16 * fRec0[3])) + (fConst14 * fRec0[4])) + (fConst12 * fRec0[5])));
		// post processing
		for (int i=5; i>0; i--) fRec0[i] = fRec0[i-1];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
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
} PortIndex;
*/

} // end namespace cabsim
