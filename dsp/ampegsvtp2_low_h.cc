// generated from file './/ampegsvtp2_low_h.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp2_low_h {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
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
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fRec1[6];
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
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
	id = "ampegsvtp2_low_h";
	name = N_("ampegsvtp2_low_h");
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
	for (int i=0; i<6; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (1.74059470813888e-20 * fConst0);
	fConst2 = (1.79715090222811e-10 + (fConst0 * (3.58893012350396e-13 + (fConst0 * (1.58455800645135e-16 + fConst1)))));
	fConst3 = (1.15654133431155e-23 * fConst0);
	fConst4 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.21822353880817e-19 + fConst3))) - 2.89787305408504e-16)) - 1.39040079529366e-13)) - 5.90554194399277e-12);
	fConst5 = (3.54332516639565e-12 + (fConst0 * (1.00727285613518e-13 + (fConst0 * (2.58994392382459e-16 + (fConst0 * (1.15981820142543e-19 + fConst3)))))));
	fConst6 = (fConst0 * ((fConst0 * (6.42522963506417e-17 + (fConst0 * (fConst3 - 3.85513778103849e-20)))) - 1.18110838879856e-13));
	fConst7 = ((fConst0 * (1.82363135230498e-13 + (fConst0 * ((fConst0 * (5.01167911535004e-20 - fConst3)) - 1.02803674161027e-16)))) - 1.18110838879856e-10);
	fConst8 = ((fConst0 * (3.58893012350396e-13 + (fConst0 * (fConst1 - 1.58455800645135e-16)))) - 1.79715090222811e-10);
	fConst9 = (5.90554194399277e-12 + (fConst0 * ((fConst0 * (2.89787305408504e-16 + (fConst0 * (fConst3 - 1.21822353880817e-19)))) - 1.39040079529366e-13)));
	fConst10 = ((fConst0 * (1.00727285613518e-13 + (fConst0 * ((fConst0 * (1.15981820142543e-19 - fConst3)) - 2.58994392382459e-16)))) - 3.54332516639565e-12);
	fConst11 = (5.22178412441665e-20 * fConst0);
	fConst12 = ((fConst0 * (3.58893012350396e-13 + (fConst0 * (1.58455800645135e-16 - fConst11)))) - 5.39145270668432e-10);
	fConst13 = (5.78270667155775e-23 * fConst0);
	fConst14 = (1.77166258319783e-11 + (fConst0 * ((fConst0 * ((fConst0 * (3.6546706164245e-19 - fConst13)) - 2.89787305408504e-16)) - 1.39040079529366e-13)));
	fConst15 = ((fConst0 * (1.00727285613518e-13 + (fConst0 * (2.58994392382459e-16 + (fConst0 * (fConst13 - 3.4794546042763e-19)))))) - 1.0629975499187e-11);
	fConst16 = (3.48118941627777e-20 * fConst0);
	fConst17 = ((fConst0 * ((fConst0 * (3.1691160129027e-16 + fConst16)) - 7.17786024700793e-13)) - 3.59430180445621e-10);
	fConst18 = (1.15654133431155e-22 * fConst0);
	fConst19 = (1.18110838879855e-11 + (fConst0 * (2.78080159058732e-13 + (fConst0 * ((fConst0 * (fConst18 - 2.43644707761633e-19)) - 5.79574610817008e-16)))));
	fConst20 = ((fConst0 * ((fConst0 * (5.17988784764918e-16 + (fConst0 * (2.31963640285086e-19 - fConst18)))) - 2.01454571227037e-13)) - 7.08665033279131e-12);
	fConst21 = (3.59430180445621e-10 + (fConst0 * ((fConst0 * (fConst16 - 3.1691160129027e-16)) - 7.17786024700793e-13)));
	fConst22 = ((fConst0 * (2.78080159058732e-13 + (fConst0 * (5.79574610817008e-16 + (fConst0 * (0 - (2.43644707761633e-19 + fConst18))))))) - 1.18110838879855e-11);
	fConst23 = (7.08665033279131e-12 + (fConst0 * ((fConst0 * ((fConst0 * (2.31963640285086e-19 + fConst18)) - 5.17988784764918e-16)) - 2.01454571227037e-13)));
	fConst24 = (5.39145270668432e-10 + (fConst0 * (3.58893012350396e-13 + (fConst0 * (0 - (1.58455800645135e-16 + fConst11))))));
	fConst25 = ((fConst0 * ((fConst0 * (2.89787305408504e-16 + (fConst0 * (3.6546706164245e-19 + fConst13)))) - 1.39040079529366e-13)) - 1.77166258319783e-11);
	fConst26 = (1.0629975499187e-11 + (fConst0 * (1.00727285613518e-13 + (fConst0 * ((fConst0 * (0 - (3.4794546042763e-19 + fConst13))) - 2.58994392382459e-16)))));
	fConst27 = (fConst0 * ((fConst0 * ((fConst0 * (1.15654133431155e-19 - fConst13)) - 6.42522963506417e-17)) - 1.18110838879856e-13));
	fConst28 = ((fConst0 * (1.82363135230498e-13 + (fConst0 * (1.02803674161027e-16 + (fConst0 * (fConst13 - 1.50350373460501e-19)))))) - 3.54332516639568e-10);
	fConst29 = (fConst0 * (2.36221677759712e-13 + (fConst0 * ((fConst0 * (fConst18 - 7.71027556207698e-20)) - 1.28504592701283e-16))));
	fConst30 = ((fConst0 * ((fConst0 * (2.05607348322053e-16 + (fConst0 * (1.00233582307001e-19 - fConst18)))) - 3.64726270460996e-13)) - 2.36221677759712e-10);
	fConst31 = (fConst0 * (2.36221677759712e-13 + (fConst0 * (1.28504592701283e-16 + (fConst0 * (0 - (7.71027556207698e-20 + fConst18)))))));
	fConst32 = (2.36221677759712e-10 + (fConst0 * ((fConst0 * ((fConst0 * (1.00233582307001e-19 + fConst18)) - 2.05607348322053e-16)) - 3.64726270460996e-13)));
	fConst33 = (fConst0 * ((fConst0 * (6.42522963506417e-17 + (fConst0 * (1.15654133431155e-19 + fConst13)))) - 1.18110838879856e-13));
	fConst34 = (3.54332516639568e-10 + (fConst0 * (1.82363135230498e-13 + (fConst0 * ((fConst0 * (0 - (1.50350373460501e-19 + fConst13))) - 1.02803674161027e-16)))));
	fConst35 = (fConst0 * ((fConst0 * ((fConst0 * (0 - (3.85513778103849e-20 + fConst3))) - 6.42522963506417e-17)) - 1.18110838879856e-13));
	fConst36 = (1.18110838879856e-10 + (fConst0 * (1.82363135230498e-13 + (fConst0 * (1.02803674161027e-16 + (fConst0 * (5.01167911535004e-20 + fConst3)))))));
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
		double fTemp0 = (8.26775872158989e-09 + (fConst0 * ((fRec0[0] * (fConst5 + (fConst4 * fRec0[0]))) + fConst2)));
		fRec1[0] = ((double)input0[i] - ((((((fRec1[1] * (4.13387936079495e-08 + (fConst0 * ((fRec0[0] * (fConst26 + (fConst25 * fRec0[0]))) + fConst24)))) + (fRec1[2] * (8.26775872158989e-08 + (fConst0 * ((fRec0[0] * (fConst23 + (fConst22 * fRec0[0]))) + fConst21))))) + (fRec1[3] * (8.26775872158989e-08 + (fConst0 * ((fRec0[0] * (fConst20 + (fConst19 * fRec0[0]))) + fConst17))))) + (fRec1[4] * (4.13387936079495e-08 + (fConst0 * ((fRec0[0] * (fConst15 + (fConst14 * fRec0[0]))) + fConst12))))) + (fRec1[5] * (8.26775872158989e-09 + (fConst0 * ((fRec0[0] * (fConst10 + (fConst9 * fRec0[0]))) + fConst8))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst0 * ((fRec0[0] * ((((((fRec1[0] * (fConst36 + (fConst35 * fRec0[0]))) + (fRec1[1] * (fConst34 + (fConst33 * fRec0[0])))) + (fRec1[2] * (fConst32 + (fConst31 * fRec0[0])))) + (fRec1[3] * (fConst30 + (fConst29 * fRec0[0])))) + (fRec1[4] * (fConst28 + (fConst27 * fRec0[0])))) + (fRec1[5] * (fConst7 + (fConst6 * fRec0[0]))))) / fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec1[i] = fRec1[i-1];
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

} // end namespace ampegsvtp2_low_h
