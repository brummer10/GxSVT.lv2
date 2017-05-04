// generated from file './/simplecabsim3.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace simplecabsim3 {

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
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fRec0[10];
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
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
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
	id = "simplecabsim3";
	name = N_("simplecabsim3");
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
	for (int i=0; i<10; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (9.17853670031447e-45 * fConst0);
	fConst2 = (8.06064616923371e-18 + (fConst0 * ((fConst0 * (1.64468022374891e-17 + (fConst0 * ((fConst0 * (5.34806967500673e-22 + (fConst0 * ((fConst0 * (8.92782280355843e-30 + (fConst0 * ((fConst0 * (1.64049416277766e-38 - fConst1)) - 6.25889201446988e-34)))) - 1.79802228309258e-25)))) - 1.80783543951969e-19)))) - 7.92639658342572e-17)));
	fConst3 = (8.26068303028303e-44 * fConst0);
	fConst4 = (7.25458155231034e-17 + (fConst0 * ((fConst0 * (8.22340111874458e-17 + (fConst0 * ((fConst0 * (5.34806967500673e-22 + (fConst0 * (1.79802228309258e-25 + (fConst0 * ((fConst0 * (3.12944600723494e-33 + (fConst0 * (fConst3 - 1.14834591394436e-37)))) - 2.67834684106753e-29)))))) - 5.42350631855906e-19)))) - 5.54847760839801e-16)));
	fConst5 = (3.30427321211321e-43 * fConst0);
	fConst6 = faustpower<2>(fConst0);
	fConst7 = (2.90183262092414e-16 + (fConst0 * ((fConst0 * (1.31574417899913e-16 + (fConst6 * ((fConst0 * (7.19208913237033e-25 + (fConst6 * ((fConst0 * (3.28098832555532e-37 - fConst5)) - 5.0071136115759e-33)))) - 2.13922787000269e-21)))) - 1.58527931668514e-15)));
	fConst8 = (7.70997082826416e-43 * fConst0);
	fConst9 = (6.77094278215631e-16 + (fConst0 * ((fConst6 * (1.44626835161575e-18 + (fConst0 * ((fConst0 * ((fConst0 * (7.14225824284675e-29 + (fConst6 * (fConst8 - 4.59338365577744e-37)))) - 7.19208913237033e-25)) - 2.13922787000269e-21)))) - 2.2193910433592e-15)));
	fConst10 = (1.15649562423962e-42 * fConst0);
	fConst11 = (1.01564141732345e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.08470126371181e-18 + (fConst0 * (3.20884180500404e-21 + (fConst0 * ((fConst0 * ((fConst0 * (8.76244882025783e-33 + (fConst0 * (2.29669182788872e-37 - fConst10)))) - 5.35669368213506e-29)) - 1.07881336985555e-24)))))) - 2.30255231324848e-16)) - 1.1096955216796e-15)));
	fConst12 = (1.01564141732345e-15 + (fConst0 * (1.1096955216796e-15 + (fConst0 * ((fConst0 * ((fConst0 * (3.20884180500404e-21 + (fConst0 * (1.07881336985555e-24 + (fConst0 * ((fConst0 * ((fConst0 * (2.29669182788872e-37 + fConst10)) - 8.76244882025783e-33)) - 5.35669368213506e-29)))))) - 1.08470126371181e-18)) - 2.30255231324848e-16)))));
	fConst13 = (6.77094278215631e-16 + (fConst0 * (2.2193910433592e-15 + (fConst6 * ((fConst0 * ((fConst0 * (7.19208913237033e-25 + (fConst0 * (7.14225824284675e-29 + (fConst6 * (0 - (4.59338365577744e-37 + fConst8))))))) - 2.13922787000269e-21)) - 1.44626835161575e-18)))));
	fConst14 = (2.90183262092414e-16 + (fConst0 * (1.58527931668514e-15 + (fConst0 * (1.31574417899913e-16 + (fConst6 * ((fConst0 * ((fConst6 * (5.0071136115759e-33 + (fConst0 * (3.28098832555532e-37 + fConst5)))) - 7.19208913237033e-25)) - 2.13922787000269e-21)))))));
	fConst15 = (7.25458155231034e-17 + (fConst0 * (5.54847760839801e-16 + (fConst0 * (8.22340111874458e-17 + (fConst0 * (5.42350631855906e-19 + (fConst0 * (5.34806967500673e-22 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.14834591394436e-37 + fConst3))) - 3.12944600723494e-33)) - 2.67834684106753e-29)) - 1.79802228309258e-25)))))))))));
	fConst16 = (8.06064616923371e-18 + (fConst0 * (7.92639658342572e-17 + (fConst0 * (1.64468022374891e-17 + (fConst0 * (1.80783543951969e-19 + (fConst0 * (5.34806967500673e-22 + (fConst0 * (1.79802228309258e-25 + (fConst0 * (8.92782280355843e-30 + (fConst0 * (6.25889201446988e-34 + (fConst0 * (1.64049416277766e-38 + fConst1)))))))))))))))));
	fConst17 = (1.0 / fConst16);
	fConst18 = (2.29797198209804e-34 * fConst0);
	fConst19 = (7.59373206047071e-21 + (fConst0 * ((fConst0 * (4.51913715902162e-22 + (fConst0 * ((fConst0 * (1.54163770884978e-30 - fConst18)) - 1.43493721173486e-25)))) - 1.32158414554993e-22)));
	fConst20 = (1.14898599104902e-33 * fConst0);
	fConst21 = (3.79686603023535e-20 + (fConst0 * ((fConst0 * (4.51913715902162e-22 + (fConst0 * (1.43493721173486e-25 + (fConst0 * (fConst20 - 4.62491312654933e-30)))))) - 3.96475243664979e-22)));
	fConst22 = (1.83837758567843e-33 * fConst6);
	fConst23 = (6.07498564837656e-20 + (fConst6 * ((fConst0 * (5.73974884693942e-25 - fConst22)) - 1.80765486360865e-21)));
	fConst24 = (1.23331016707982e-29 * fConst0);
	fConst25 = (fConst0 * (1.05726731643994e-21 + (fConst0 * ((fConst0 * (fConst24 - 5.73974884693942e-25)) - 1.80765486360865e-21))));
	fConst26 = (3.21716077493726e-33 * fConst0);
	fConst27 = ((fConst0 * (7.92950487329959e-22 + (fConst0 * (2.71148229541297e-21 + (fConst0 * ((fConst0 * (fConst26 - 9.24982625309865e-30)) - 8.60962327040913e-25)))))) - 1.0631224884659e-19);
	fConst28 = ((fConst0 * ((fConst0 * (2.71148229541297e-21 + (fConst0 * (8.60962327040913e-25 + (fConst0 * (0 - (9.24982625309865e-30 + fConst26))))))) - 7.92950487329959e-22)) - 1.0631224884659e-19);
	fConst29 = (fConst0 * ((fConst0 * ((fConst0 * (5.73974884693942e-25 + fConst24)) - 1.80765486360865e-21)) - 1.05726731643994e-21));
	fConst30 = (6.07498564837656e-20 + (fConst6 * ((fConst0 * (fConst22 - 5.73974884693942e-25)) - 1.80765486360865e-21)));
	fConst31 = (3.79686603023535e-20 + (fConst0 * (3.96475243664979e-22 + (fConst0 * (4.51913715902162e-22 + (fConst0 * ((fConst0 * (0 - (4.62491312654933e-30 + fConst20))) - 1.43493721173486e-25)))))));
	fConst32 = (7.59373206047071e-21 + (fConst0 * (1.32158414554993e-22 + (fConst0 * (4.51913715902162e-22 + (fConst0 * (1.43493721173486e-25 + (fConst0 * (1.54163770884978e-30 + fConst18)))))))));
	fConst33 = (fConst6 / fConst16);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst17 * (((((((((fConst15 * fRec0[1]) + (fConst14 * fRec0[2])) + (fConst13 * fRec0[3])) + (fConst12 * fRec0[4])) + (fConst11 * fRec0[5])) + (fConst9 * fRec0[6])) + (fConst7 * fRec0[7])) + (fConst4 * fRec0[8])) + (fConst2 * fRec0[9]))));
		output0[i] = (FAUSTFLOAT)(fConst33 * ((((((((((fConst32 * fRec0[0]) + (fConst31 * fRec0[1])) + (fConst30 * fRec0[2])) + (fConst29 * fRec0[3])) + (fConst28 * fRec0[4])) + (fConst27 * fRec0[5])) + (fConst25 * fRec0[6])) + (fConst23 * fRec0[7])) + (fConst21 * fRec0[8])) + (fConst19 * fRec0[9])));
		// post processing
		for (int i=9; i>0; i--) fRec0[i] = fRec0[i-1];
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

} // end namespace simplecabsim3
