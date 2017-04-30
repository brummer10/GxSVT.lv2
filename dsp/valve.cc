// generated from file './/valve.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace valve {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	void connect(uint32_t port,void* data);
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

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
	id = "valve";
	name = "?valve";
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = 0;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		double fTemp1 = (0 - (0.0010000000000000002 + fabs(fTemp0)));
		double fTemp2 = (1.2589254117941673 * fTemp1);
		double fTemp3 = max((double)-600, fTemp2);
		double fTemp4 = (0 - fTemp3);
		output0[i] = (FAUSTFLOAT)copysign((0 - (0.7943282347242815 * (((int((fabs(fTemp2) > 0.0001)))?((int((fTemp3 < -50)))?(fTemp4 * exp(fTemp3)):(fTemp3 / (1 - exp(fTemp4)))):(1 + (fTemp1 * (0.6294627058970836 + (0.1320744327050928 * fTemp1))))) - 0.9993706693685673))), fTemp0);
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

} // end namespace valve
