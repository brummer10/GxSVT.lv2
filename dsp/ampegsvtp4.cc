// generated from file './/ampegsvtp4.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp4 {

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
	double 	fRec0[4];
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
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
	id = "ampegsvtp4";
	name = N_("ampegsvtp4");
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
	for (int i=0; i<4; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (9.03260452150878e-15 * fConst0);
	fConst2 = (7.78434486465914e-14 + (fConst0 * ((fConst0 * (4.62748013946049e-13 - fConst1)) - 6.11106079931121e-13)));
	fConst3 = (2.70978135645263e-14 * fConst0);
	fConst4 = (2.33530345939774e-13 + (fConst0 * ((fConst0 * (fConst3 - 4.62748013946049e-13)) - 6.11106079931121e-13)));
	fConst5 = (2.33530345939774e-13 + (fConst0 * (6.11106079931121e-13 + (fConst0 * (0 - (4.62748013946049e-13 + fConst3))))));
	fConst6 = (7.78434486465914e-14 + (fConst0 * (6.11106079931121e-13 + (fConst0 * (4.62748013946049e-13 + fConst1)))));
	fConst7 = (1.0 / fConst6);
	fConst8 = (7.80723837424484e-15 * fConst0);
	fConst9 = (2.43245870145431e-19 - fConst8);
	fConst10 = (2.34217151227345e-14 * fConst0);
	fConst11 = (fConst10 - 2.43245870145431e-19);
	fConst12 = (0 - (2.43245870145431e-19 + fConst10));
	fConst13 = (2.43245870145431e-19 + fConst8);
	fConst14 = (faustpower<2>(fConst0) / fConst6);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst7 * (((fConst5 * fRec0[1]) + (fConst4 * fRec0[2])) + (fConst2 * fRec0[3]))));
		output0[i] = (FAUSTFLOAT) (0.666 * (fConst14 * ((((fConst13 * fRec0[0]) + (fConst12 * fRec0[1])) + (fConst11 * fRec0[2])) + (fConst9 * fRec0[3]))));
		// post processing
		for (int i=3; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace ampegsvtp4
