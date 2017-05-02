// generated from file './/ampegsvtp4_2.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp4_2 {

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
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fRec1[6];
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
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
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
	id = "ampegsvtp4_2";
	name = N_("ampegsvtp4_2");
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
	fConst1 = (8.8593608943969e-27 * fConst0);
	fConst2 = (5.28656786527718e-16 + (fConst0 * (3.91010821863211e-15 + (fConst0 * (1.52126849174994e-15 + (fConst0 * (5.98397530429215e-17 + (fConst0 * (7.49010148468185e-20 + fConst1)))))))));
	fConst3 = (5.1339225240504e-19 * fConst0);
	fConst4 = (6.00739521711272e-17 + (fConst0 * (4.28333517287989e-16 + (fConst0 * (6.18804067937692e-17 + (fConst0 * (1.00142275582732e-17 + fConst3)))))));
	fConst5 = (5.7975176903412e-19 * fConst0);
	fConst6 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.07487557600203e-17 + fConst5))) - 3.0036855050004e-17)) - 4.08502874763681e-18)) - 2.01504575278056e-32);
	fConst7 = (7.73219422754342e-27 * fConst0);
	fConst8 = (1.09252802361896e-19 + (fConst0 * ((fConst0 * (1.35131026404947e-15 + (fConst0 * ((fConst0 * (7.21636787369035e-21 - fConst7)) - 5.16405749588806e-17)))) - 3.28539801958393e-15)));
	fConst9 = (5.72152265186325e-19 * fConst0);
	fConst10 = (1.24149500978856e-20 + (fConst0 * ((fConst0 * (5.41613055455539e-17 + (fConst0 * (fConst9 - 1.06173843060675e-17)))) - 3.73333136658694e-16)));
	fConst11 = (5.02725852693037e-19 * fConst0);
	fConst12 = ((fConst0 * (8.44216606781449e-22 + (fConst0 * ((fConst0 * (9.29258665990589e-18 - fConst11)) - 2.53868479360475e-17)))) - 4.1643160740389e-36);
	fConst13 = (5.28656786527718e-16 + (fConst0 * ((fConst0 * (1.52126849174994e-15 + (fConst0 * ((fConst0 * (7.49010148468185e-20 - fConst1)) - 5.98397530429215e-17)))) - 3.91010821863211e-15)));
	fConst14 = (6.00739521711272e-17 + (fConst0 * ((fConst0 * (6.18804067937692e-17 + (fConst0 * (fConst3 - 1.00142275582732e-17)))) - 4.28333517287989e-16)));
	fConst15 = ((fConst0 * (4.08502874763681e-18 + (fConst0 * ((fConst0 * (1.07487557600203e-17 - fConst5)) - 3.0036855050004e-17)))) - 2.01504575278056e-32);
	fConst16 = (4.42968044719845e-26 * fConst0);
	fConst17 = (2.64328393263859e-15 + (fConst0 * ((fConst0 * (1.52126849174994e-15 + (fConst0 * (5.98397530429215e-17 + (fConst0 * (fConst16 - 2.24703044540456e-19)))))) - 1.17303246558963e-14)));
	fConst18 = (1.54017675721512e-18 * fConst0);
	fConst19 = (3.00369760855636e-16 + (fConst0 * ((fConst0 * (6.18804067937692e-17 + (fConst0 * (1.00142275582732e-17 - fConst18)))) - 1.28500055186397e-15)));
	fConst20 = (1.73925530710236e-18 * fConst0);
	fConst21 = ((fConst0 * (1.22550862429104e-17 + (fConst0 * ((fConst0 * (fConst20 - 1.07487557600203e-17)) - 3.0036855050004e-17)))) - 1.00752287639028e-31);
	fConst22 = (8.85936089439691e-26 * fConst0);
	fConst23 = (5.28656786527718e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.19679506085843e-16 + (fConst0 * (1.49802029693637e-19 - fConst22)))) - 3.04253698349988e-15)) - 7.82021643726421e-15)));
	fConst24 = (1.02678450481008e-18 * fConst0);
	fConst25 = (6.00739521711272e-16 + (fConst0 * ((fConst0 * ((fConst0 * (2.00284551165464e-17 + fConst24)) - 1.23760813587538e-16)) - 8.56667034575978e-16)));
	fConst26 = (1.15950353806824e-18 * fConst0);
	fConst27 = ((fConst0 * (8.17005749527361e-18 + (fConst0 * (6.00737101000079e-17 + (fConst0 * (0 - (2.14975115200405e-17 + fConst26))))))) - 2.01504575278056e-31);
	fConst28 = (5.28656786527718e-15 + (fConst0 * (7.82021643726421e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.49802029693637e-19 + fConst22)) - 1.19679506085843e-16)) - 3.04253698349988e-15)))));
	fConst29 = (6.00739521711272e-16 + (fConst0 * (8.56667034575978e-16 + (fConst0 * ((fConst0 * (fConst24 - 2.00284551165464e-17)) - 1.23760813587538e-16)))));
	fConst30 = ((fConst0 * ((fConst0 * (6.00737101000079e-17 + (fConst0 * (2.14975115200405e-17 - fConst26)))) - 8.17005749527361e-18)) - 2.01504575278056e-31);
	fConst31 = (2.64328393263859e-15 + (fConst0 * (1.17303246558963e-14 + (fConst0 * (1.52126849174994e-15 + (fConst0 * ((fConst0 * (0 - (2.24703044540456e-19 + fConst16))) - 5.98397530429215e-17)))))));
	fConst32 = (3.00369760855636e-16 + (fConst0 * (1.28500055186397e-15 + (fConst0 * (6.18804067937692e-17 + (fConst0 * (0 - (1.00142275582732e-17 + fConst18))))))));
	fConst33 = ((fConst0 * ((fConst0 * ((fConst0 * (1.07487557600203e-17 + fConst20)) - 3.0036855050004e-17)) - 1.22550862429104e-17)) - 1.00752287639028e-31);
	fConst34 = (3.86609711377171e-26 * fConst0);
	fConst35 = (5.46264011809481e-19 + (fConst0 * ((fConst0 * (1.35131026404947e-15 + (fConst0 * (5.16405749588806e-17 + (fConst0 * (fConst34 - 2.1649103621071e-20)))))) - 9.85619405875178e-15)));
	fConst36 = (1.71645679555898e-18 * fConst0);
	fConst37 = (6.2074750489428e-20 + (fConst0 * ((fConst0 * (5.41613055455539e-17 + (fConst0 * (1.06173843060675e-17 - fConst36)))) - 1.11999940997608e-15)));
	fConst38 = (1.50817755807911e-18 * fConst0);
	fConst39 = ((fConst0 * (2.53264982034435e-21 + (fConst0 * ((fConst0 * (fConst38 - 9.29258665990589e-18)) - 2.53868479360475e-17)))) - 2.08215803701945e-35);
	fConst40 = (7.73219422754343e-26 * fConst0);
	fConst41 = (1.09252802361896e-18 + (fConst0 * ((fConst0 * ((fConst0 * (1.03281149917761e-16 + (fConst0 * (1.44327357473807e-20 - fConst40)))) - 2.70262052809893e-15)) - 6.57079603916785e-15)));
	fConst42 = (1.14430453037265e-18 * fConst0);
	fConst43 = (1.24149500978856e-19 + (fConst0 * ((fConst0 * ((fConst0 * (2.1234768612135e-17 + fConst42)) - 1.08322611091108e-16)) - 7.46666273317388e-16)));
	fConst44 = (1.00545170538607e-18 * fConst0);
	fConst45 = ((fConst0 * (1.6884332135629e-21 + (fConst0 * (5.07736958720949e-17 + (fConst0 * (0 - (1.85851733198118e-17 + fConst44))))))) - 4.1643160740389e-35);
	fConst46 = (1.09252802361896e-18 + (fConst0 * (6.57079603916785e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.44327357473807e-20 + fConst40)) - 1.03281149917761e-16)) - 2.70262052809893e-15)))));
	fConst47 = (1.24149500978856e-19 + (fConst0 * (7.46666273317388e-16 + (fConst0 * ((fConst0 * (fConst42 - 2.1234768612135e-17)) - 1.08322611091108e-16)))));
	fConst48 = ((fConst0 * ((fConst0 * (5.07736958720949e-17 + (fConst0 * (1.85851733198118e-17 - fConst44)))) - 1.6884332135629e-21)) - 4.1643160740389e-35);
	fConst49 = (5.46264011809481e-19 + (fConst0 * (9.85619405875178e-15 + (fConst0 * (1.35131026404947e-15 + (fConst0 * ((fConst0 * (0 - (2.1649103621071e-20 + fConst34))) - 5.16405749588806e-17)))))));
	fConst50 = (6.2074750489428e-20 + (fConst0 * (1.11999940997608e-15 + (fConst0 * (5.41613055455539e-17 + (fConst0 * (0 - (1.06173843060675e-17 + fConst36))))))));
	fConst51 = ((fConst0 * ((fConst0 * ((fConst0 * (9.29258665990589e-18 + fConst38)) - 2.53868479360475e-17)) - 2.53264982034435e-21)) - 2.08215803701945e-35);
	fConst52 = (1.09252802361896e-19 + (fConst0 * (3.28539801958393e-15 + (fConst0 * (1.35131026404947e-15 + (fConst0 * (5.16405749588806e-17 + (fConst0 * (7.21636787369035e-21 + fConst7)))))))));
	fConst53 = (1.24149500978856e-20 + (fConst0 * (3.73333136658694e-16 + (fConst0 * (5.41613055455539e-17 + (fConst0 * (1.06173843060675e-17 + fConst9)))))));
	fConst54 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (9.29258665990589e-18 + fConst11))) - 2.53868479360475e-17)) - 8.44216606781449e-22)) - 4.1643160740389e-36);
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
		fRec1[0] = ((double)input0[i] - ((((((fRec1[1] * ((fRec0[0] * ((fConst33 * fRec0[0]) + fConst32)) + fConst31)) + (fRec1[2] * ((fRec0[0] * ((fConst30 * fRec0[0]) + fConst29)) + fConst28))) + (fRec1[3] * ((fRec0[0] * ((fConst27 * fRec0[0]) + fConst25)) + fConst23))) + (fRec1[4] * ((fRec0[0] * ((fConst21 * fRec0[0]) + fConst19)) + fConst17))) + (fRec1[5] * ((fRec0[0] * ((fConst15 * fRec0[0]) + fConst14)) + fConst13))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(((((((fRec1[0] * ((fRec0[0] * ((fConst54 * fRec0[0]) + fConst53)) + fConst52)) + (fRec1[1] * ((fRec0[0] * ((fConst51 * fRec0[0]) + fConst50)) + fConst49))) + (fRec1[2] * ((fRec0[0] * ((fConst48 * fRec0[0]) + fConst47)) + fConst46))) + (fRec1[3] * ((fRec0[0] * ((fConst45 * fRec0[0]) + fConst43)) + fConst41))) + (fRec1[4] * ((fRec0[0] * ((fConst39 * fRec0[0]) + fConst37)) + fConst35))) + (fRec1[5] * ((fRec0[0] * ((fConst12 * fRec0[0]) + fConst10)) + fConst8))) / fTemp0);
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

} // end namespace ampegsvtp4_2
