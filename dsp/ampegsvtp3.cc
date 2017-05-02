// generated from file './/ampegsvtp3.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace ampegsvtp3 {

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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
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
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fRec2[7];
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
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
	id = "ampegsvtp3";
	name = N_("ampegsvtp3");
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
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<7; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (5.56765627665228e-40 * fConst0);
	fConst2 = (3.3731896516308e-11 + (fConst0 * (2.28302748547742e-14 + (fConst0 * (3.9669936338833e-18 + (fConst0 * (1.86994556862011e-22 + fConst1)))))));
	fConst3 = (3.97689734046592e-39 * fConst0);
	fConst4 = (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.29106592686004e-21 + fConst3))) - 2.97647192535571e-18)) - 1.15393017917114e-17));
	fConst5 = (1.10482676729151e-13 + (fConst0 * (2.85234988408716e-14 + (fConst0 * (1.5446573847895e-17 + (fConst0 * (1.32553010651771e-21 + fConst3)))))));
	fConst6 = (7.95379468093183e-41 * fConst0);
	fConst7 = (2.58213185372008e-23 + fConst6);
	fConst8 = (fConst0 * ((fConst0 * ((fConst0 * (0 - fConst7)) - 6.28540932969388e-20)) - 2.07707432250805e-19));
	fConst9 = (1.9656095775413e-15 + (fConst0 * (6.02076989712505e-16 + (fConst0 * (3.12047606054644e-19 + (fConst0 * (2.65106021303542e-23 + fConst6)))))));
	fConst10 = (fConst0 * (5.12344999551985e-20 + (fConst0 * fConst7)));
	fConst11 = ((fConst0 * ((fConst0 * (0 - (2.65106021303541e-23 + fConst6))) - 3.00117835095985e-19)) - 4.90750792109684e-16);
	fConst12 = (1.11353125533046e-41 * fConst0);
	fConst13 = (3.73989113724022e-24 + fConst12);
	fConst14 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - fConst13)) - 7.92725145807046e-20)) - 4.48823830827032e-16)) - 6.0734761151163e-13);
	fConst15 = (2.46117792628557e-12 + (fConst0 * (7.45654801881111e-13 + (fConst0 * (4.81185846378556e-16 + (fConst0 * (8.09554655924627e-20 + (fConst0 * fConst13))))))));
	fConst16 = (5.0058845340913e-18 * fConst0);
	fConst17 = (1.04830887378357e-11 + (fConst0 * (fConst16 - 2.98294955823821e-14)));
	fConst18 = (1.85257144175032e-21 * fConst0);
	fConst19 = (fConst0 * (fConst18 - 9.26285720875162e-19));
	fConst20 = (4.70553146204583e-21 * fConst0);
	fConst21 = ((fConst0 * (2.60689051647261e-17 - fConst20)) - 8.868693072209e-15);
	fConst22 = (3.70514288350065e-23 * fConst0);
	fConst23 = (fConst0 * ((fConst0 * (1.00880935782586e-19 - fConst22)) - 4.21038964034165e-17));
	fConst24 = (9.41106292409165e-23 * fConst0);
	fConst25 = ((fConst0 * (1.05842566434074e-15 + (fConst0 * (fConst24 - 6.29511014193631e-19)))) - 4.03122412373136e-13);
	fConst26 = (fConst0 * (fConst22 - 8.42077928068329e-20));
	fConst27 = ((fConst0 * (5.87161231035219e-19 - fConst24)) - 8.48348721149689e-16);
	fConst28 = (1.00117690681826e-19 * fConst0);
	fConst29 = (9.97799446228543e-13 + (fConst0 * (fConst28 - 6.66571962435618e-16)));
	fConst30 = (4.76504033537986e-10 + (fConst0 * ((fConst0 * (7.1162492324244e-16 - fConst28)) - 1.24015511573437e-12)));
	fConst31 = ((fConst0 * (2.28302748547742e-14 + (fConst0 * ((fConst0 * (1.86994556862011e-22 - fConst1)) - 3.9669936338833e-18)))) - 3.3731896516308e-11);
	fConst32 = (fConst0 * ((fConst0 * (2.97647192535571e-18 + (fConst0 * (fConst3 - 1.29106592686004e-21)))) - 1.15393017917114e-17));
	fConst33 = ((fConst0 * (2.85234988408716e-14 + (fConst0 * ((fConst0 * (1.32553010651771e-21 - fConst3)) - 1.5446573847895e-17)))) - 1.10482676729151e-13);
	fConst34 = (fConst0 * (2.07707432250805e-19 + (fConst0 * ((fConst0 * (2.58213185372008e-23 - fConst6)) - 6.28540932969388e-20))));
	fConst35 = (1.9656095775413e-15 + (fConst0 * ((fConst0 * (3.12047606054644e-19 + (fConst0 * (fConst6 - 2.65106021303542e-23)))) - 6.02076989712505e-16)));
	fConst36 = (fConst0 * (5.12344999551985e-20 + (fConst0 * (fConst6 - 2.58213185372008e-23))));
	fConst37 = (4.90750792109684e-16 + (fConst0 * ((fConst0 * (2.65106021303541e-23 - fConst6)) - 3.00117835095985e-19)));
	fConst38 = ((fConst0 * (4.48823830827032e-16 + (fConst0 * ((fConst0 * (3.73989113724022e-24 - fConst12)) - 7.92725145807046e-20)))) - 6.0734761151163e-13);
	fConst39 = ((fConst0 * (7.45654801881111e-13 + (fConst0 * ((fConst0 * (8.09554655924627e-20 + (fConst0 * (fConst12 - 3.73989113724022e-24)))) - 4.81185846378556e-16)))) - 2.46117792628557e-12);
	fConst40 = (2.22706251066091e-39 * fConst0);
	fConst41 = faustpower<2>(fConst0);
	fConst42 = ((fConst0 * (4.56605497095484e-14 + (fConst41 * (fConst40 - 3.73989113724022e-22)))) - 1.34927586065232e-10);
	fConst43 = (1.59075893618637e-38 * fConst0);
	fConst44 = (fConst0 * ((fConst41 * (2.58213185372008e-21 - fConst43)) - 2.30786035834228e-17));
	fConst45 = ((fConst0 * (5.70469976817432e-14 + (fConst41 * (fConst43 - 2.65106021303541e-21)))) - 4.41930706916606e-13);
	fConst46 = (4.7722768085591e-40 * fConst0);
	fConst47 = (fConst41 * (1.25708186593878e-19 + (fConst0 * (fConst46 - 1.03285274148803e-22))));
	fConst48 = (3.93121915508261e-15 + (fConst41 * ((fConst0 * (1.06042408521417e-22 - fConst46)) - 6.24095212109288e-19)));
	fConst49 = ((fConst0 * (1.03285274148803e-22 - fConst46)) - 1.02468999910397e-19);
	fConst50 = (6.0023567019197e-19 + (fConst0 * (fConst46 - 1.06042408521416e-22)));
	fConst51 = (6.68118753198274e-41 * fConst0);
	fConst52 = ((fConst41 * (1.58545029161409e-19 + (fConst0 * (fConst51 - 1.49595645489609e-23)))) - 1.21469522302326e-12);
	fConst53 = ((fConst0 * (1.49130960376222e-12 + (fConst41 * ((fConst0 * (1.49595645489609e-23 - fConst51)) - 1.61910931184925e-19)))) - 9.84471170514226e-12);
	fConst54 = (2.78382813832614e-39 * fConst0);
	fConst55 = ((fConst0 * ((fConst0 * (1.19009809016499e-17 + (fConst0 * (0 - (1.86994556862011e-22 + fConst54))))) - 2.28302748547742e-14)) - 1.6865948258154e-10);
	fConst56 = (1.98844867023296e-38 * fConst0);
	fConst57 = (fConst0 * (1.15393017917114e-17 + (fConst0 * ((fConst0 * (1.29106592686004e-21 + fConst56)) - 8.92941577606714e-18))));
	fConst58 = ((fConst0 * ((fConst0 * (4.63397215436849e-17 + (fConst0 * (0 - (1.32553010651771e-21 + fConst56))))) - 2.85234988408716e-14)) - 5.52413383645757e-13);
	fConst59 = (1.19306920213978e-39 * fConst0);
	fConst60 = (fConst0 * ((fConst0 * (6.28540932969388e-20 + (fConst0 * (1.29106592686004e-22 - fConst59)))) - 6.23122296752414e-19));
	fConst61 = ((fConst0 * (1.80623096913751e-15 + (fConst0 * ((fConst0 * (fConst59 - 1.32553010651771e-22)) - 3.12047606054644e-19)))) - 1.9656095775413e-15);
	fConst62 = (fConst0 * ((fConst0 * (fConst59 - 1.29106592686004e-22)) - 5.12344999551985e-20));
	fConst63 = ((fConst0 * (3.00117835095985e-19 + (fConst0 * (1.32553010651771e-22 - fConst59)))) - 1.47225237632905e-15);
	fConst64 = (1.67029688299569e-40 * fConst0);
	fConst65 = (6.0734761151163e-13 + (fConst0 * ((fConst0 * (7.92725145807046e-20 + (fConst0 * (1.86994556862011e-23 - fConst64)))) - 1.3464714924811e-15)));
	fConst66 = ((fConst0 * ((fConst0 * (1.44355753913567e-15 + (fConst0 * ((fConst0 * (fConst64 - 1.86994556862011e-23)) - 8.09554655924627e-20)))) - 7.45654801881111e-13)) - 1.23058896314278e-11);
	fConst67 = (4.61572071668455e-17 - (5.16426370744016e-21 * fConst41));
	fConst68 = ((5.30212042607083e-21 * fConst41) - 1.14093995363486e-13);
	fConst69 = (2.22706251066091e-40 * fConst41);
	fConst70 = ((fConst41 * (3.23821862369851e-19 - fConst69)) - 2.98261920752444e-12);
	fConst71 = (1.59075893618637e-39 * fConst41);
	fConst72 = (fConst41 * (fConst71 - 2.51416373187755e-19));
	fConst73 = ((fConst41 * (1.24819042421858e-18 - fConst71)) - 7.86243831016521e-15);
	fConst74 = (2.04937999820794e-19 - fConst71);
	fConst75 = (fConst71 - 1.20047134038394e-18);
	fConst76 = (2.42939044604652e-12 + (fConst41 * (fConst69 - 3.17090058322819e-19)));
	fConst77 = ((7.47978227448044e-22 * fConst41) - 9.13210994190969e-14);
	fConst78 = (1.6865948258154e-10 + (fConst0 * ((fConst0 * ((fConst0 * (fConst54 - 1.86994556862011e-22)) - 1.19009809016499e-17)) - 2.28302748547742e-14)));
	fConst79 = (fConst0 * (1.15393017917114e-17 + (fConst0 * (8.92941577606714e-18 + (fConst0 * (1.29106592686004e-21 - fConst56))))));
	fConst80 = (5.52413383645757e-13 + (fConst0 * ((fConst0 * ((fConst0 * (fConst56 - 1.32553010651771e-21)) - 4.63397215436849e-17)) - 2.85234988408716e-14)));
	fConst81 = (1.29106592686004e-22 + fConst59);
	fConst82 = (fConst0 * (6.23122296752414e-19 + (fConst0 * (6.28540932969388e-20 + (fConst0 * (0 - fConst81))))));
	fConst83 = (1.32553010651771e-22 + fConst59);
	fConst84 = ((fConst0 * ((fConst0 * ((fConst0 * fConst83) - 3.12047606054644e-19)) - 1.80623096913751e-15)) - 1.9656095775413e-15);
	fConst85 = (fConst0 * ((fConst0 * fConst81) - 5.12344999551985e-20));
	fConst86 = (1.47225237632905e-15 + (fConst0 * (3.00117835095985e-19 + (fConst0 * (0 - fConst83)))));
	fConst87 = (1.86994556862011e-23 + fConst64);
	fConst88 = (6.0734761151163e-13 + (fConst0 * (1.3464714924811e-15 + (fConst0 * (7.92725145807046e-20 + (fConst0 * (0 - fConst87)))))));
	fConst89 = (1.23058896314278e-11 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * fConst87) - 8.09554655924627e-20)) - 1.44355753913567e-15)) - 7.45654801881111e-13)));
	fConst90 = (1.34927586065232e-10 + (fConst0 * (4.56605497095484e-14 + (fConst41 * (0 - (3.73989113724022e-22 + fConst40))))));
	fConst91 = (fConst0 * ((fConst41 * (2.58213185372008e-21 + fConst43)) - 2.30786035834228e-17));
	fConst92 = (4.41930706916606e-13 + (fConst0 * (5.70469976817432e-14 + (fConst41 * (0 - (2.65106021303541e-21 + fConst43))))));
	fConst93 = (1.03285274148803e-22 + fConst46);
	fConst94 = (fConst41 * (1.25708186593878e-19 + (fConst0 * fConst93)));
	fConst95 = (3.93121915508261e-15 + (fConst41 * ((fConst0 * (0 - (1.06042408521417e-22 + fConst46))) - 6.24095212109288e-19)));
	fConst96 = ((fConst0 * (0 - fConst93)) - 1.02468999910397e-19);
	fConst97 = (6.0023567019197e-19 + (fConst0 * (1.06042408521416e-22 + fConst46)));
	fConst98 = (1.49595645489609e-23 + fConst51);
	fConst99 = ((fConst41 * (1.58545029161409e-19 + (fConst0 * fConst98))) - 1.21469522302326e-12);
	fConst100 = (9.84471170514226e-12 + (fConst0 * (1.49130960376222e-12 + (fConst41 * ((fConst0 * (0 - fConst98)) - 1.61910931184925e-19)))));
	fConst101 = (5.96589911647642e-14 * fConst0);
	fConst102 = (4.19323549513428e-11 - fConst101);
	fConst103 = (1.48205715340026e-22 * fConst0);
	fConst104 = (fConst41 * (fConst103 - 2.01761871565172e-19));
	fConst105 = (3.76442516963666e-22 * fConst0);
	fConst106 = ((fConst41 * (1.25902202838726e-18 - fConst105)) - 8.06244824746273e-13);
	fConst107 = (1.68415585613666e-19 - fConst103);
	fConst108 = (fConst105 - 1.17432246207044e-18);
	fConst109 = (2.00235381363652e-19 * fConst41);
	fConst110 = (1.99559889245709e-12 - fConst109);
	fConst111 = (fConst0 * (fConst109 - 2.48031023146873e-12));
	fConst112 = (1.90601613415195e-09 + fConst111);
	fConst113 = ((9.41106292409165e-21 * fConst41) - 1.7737386144418e-14);
	fConst114 = (1.50176536022739e-17 * fConst0);
	fConst115 = (5.24154436891785e-11 + (fConst0 * (2.98294955823821e-14 - fConst114)));
	fConst116 = (fConst0 * (2.77885716262549e-18 - fConst18));
	fConst117 = (8.868693072209e-15 + (fConst0 * (fConst20 - 7.82067154941782e-17)));
	fConst118 = (1.85257144175033e-22 * fConst0);
	fConst119 = (fConst0 * (1.26311689210249e-16 + (fConst0 * (0 - (1.00880935782586e-19 + fConst118)))));
	fConst120 = (4.70553146204583e-22 * fConst0);
	fConst121 = (4.03122412373136e-13 + (fConst0 * ((fConst0 * (6.29511014193631e-19 + fConst120)) - 3.17527699302223e-15)));
	fConst122 = (fConst0 * (8.42077928068329e-20 + fConst118));
	fConst123 = (2.54504616344907e-15 + (fConst0 * (0 - (5.87161231035219e-19 + fConst120))));
	fConst124 = ((fConst0 * (1.99971588730685e-15 - fConst28)) - 9.97799446228543e-13);
	fConst125 = (2.38252016768993e-09 + (fConst0 * (1.24015511573437e-12 + (fConst0 * (fConst28 - 2.13487476972732e-15)))));
	fConst126 = (7.4102857670013e-21 * fConst41);
	fConst127 = (3.5474772288836e-14 - (1.88221258481833e-20 * fConst41));
	fConst128 = (4.00470762727304e-19 * fConst41);
	fConst129 = (4.96062046293746e-12 - fConst128);
	fConst130 = (4.03523743130343e-19 * fConst41);
	fConst131 = (1.61248964949255e-12 - (2.51804405677453e-18 * fConst41));
	fConst132 = (fConst128 - 3.99119778491417e-12);
	fConst133 = ((fConst0 * (2.98294955823821e-14 + fConst114)) - 5.24154436891785e-11);
	fConst134 = (fConst0 * (0 - (2.77885716262549e-18 + fConst18)));
	fConst135 = (8.868693072209e-15 + (fConst0 * (7.82067154941782e-17 + fConst20)));
	fConst136 = (fConst0 * ((fConst0 * (fConst118 - 1.00880935782586e-19)) - 1.26311689210249e-16));
	fConst137 = (4.03122412373136e-13 + (fConst0 * (3.17527699302223e-15 + (fConst0 * (6.29511014193631e-19 - fConst120)))));
	fConst138 = (fConst0 * (8.42077928068329e-20 - fConst118));
	fConst139 = ((fConst0 * (fConst120 - 5.87161231035219e-19)) - 2.54504616344907e-15);
	fConst140 = ((fConst0 * (0 - (1.99971588730685e-15 + fConst28))) - 9.97799446228543e-13);
	fConst141 = ((fConst0 * (1.24015511573437e-12 + (fConst0 * (2.13487476972732e-15 + fConst28)))) - 2.38252016768993e-09);
	fConst142 = (0 - (4.19323549513428e-11 + fConst101));
	fConst143 = (fConst41 * (0 - (2.01761871565172e-19 + fConst103)));
	fConst144 = ((fConst41 * (1.25902202838726e-18 + fConst105)) - 8.06244824746273e-13);
	fConst145 = (1.68415585613666e-19 + fConst103);
	fConst146 = (0 - (1.17432246207044e-18 + fConst105));
	fConst147 = (fConst111 - 1.90601613415195e-09);
	fConst148 = ((fConst0 * (0 - (2.98294955823821e-14 + fConst16))) - 1.04830887378357e-11);
	fConst149 = (fConst0 * (9.26285720875162e-19 + fConst18));
	fConst150 = ((fConst0 * (0 - (2.60689051647261e-17 + fConst20))) - 8.868693072209e-15);
	fConst151 = (fConst0 * (4.21038964034165e-17 + (fConst0 * (1.00880935782586e-19 + fConst22))));
	fConst152 = ((fConst0 * ((fConst0 * (0 - (6.29511014193631e-19 + fConst24))) - 1.05842566434074e-15)) - 4.03122412373136e-13);
	fConst153 = (fConst0 * (0 - (8.42077928068329e-20 + fConst22)));
	fConst154 = (8.48348721149689e-16 + (fConst0 * (5.87161231035219e-19 + fConst24)));
	fConst155 = (9.97799446228543e-13 + (fConst0 * (6.66571962435618e-16 + fConst28)));
	fConst156 = ((fConst0 * ((fConst0 * (0 - (7.1162492324244e-16 + fConst28))) - 1.24015511573437e-12)) - 4.76504033537986e-10);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow1);
		double fTemp0 = (1.30594180530912e-10 + (fConst0 * (((fRec1[0] * (fConst15 + (fConst0 * ((fRec1[0] * (fConst14 + (fConst0 * (fRec0[0] * (fConst11 + (fConst10 * fRec0[0])))))) + (fRec0[0] * (fConst9 + (fConst8 * fRec0[0]))))))) + (fRec0[0] * (fConst5 + (fConst4 * fRec0[0])))) + fConst2)));
		fRec2[0] = ((double)input0[i] - (((((((fRec2[1] * (7.83565083185472e-10 + (fConst0 * (((fRec1[0] * (fConst100 + (fConst0 * ((fRec1[0] * (fConst99 + (fConst41 * (fRec0[0] * (fConst97 + (fConst96 * fRec0[0])))))) + (fRec0[0] * (fConst95 + (fConst94 * fRec0[0]))))))) + (fRec0[0] * (fConst92 + (fConst91 * fRec0[0])))) + fConst90)))) + (fRec2[2] * (1.95891270796368e-09 + (fConst0 * (((fRec1[0] * (fConst89 + (fConst0 * ((fRec1[0] * (fConst88 + (fConst0 * (fRec0[0] * (fConst86 + (fConst85 * fRec0[0])))))) + (fRec0[0] * (fConst84 + (fConst82 * fRec0[0]))))))) + (fRec0[0] * (fConst80 + (fConst79 * fRec0[0])))) + fConst78))))) + (fRec2[3] * (2.61188361061824e-09 + (fConst41 * (fConst77 + ((fRec1[0] * (((fRec1[0] * (fConst76 + (fConst41 * (fRec0[0] * (fConst75 + (fConst74 * fRec0[0])))))) + (fRec0[0] * (fConst73 + (fConst72 * fRec0[0])))) + fConst70)) + (fRec0[0] * (fConst68 + (fConst67 * fRec0[0]))))))))) + (fRec2[4] * (1.95891270796368e-09 + (fConst0 * (((fRec1[0] * (fConst66 + (fConst0 * ((fRec1[0] * (fConst65 + (fConst0 * (fRec0[0] * (fConst63 + (fConst62 * fRec0[0])))))) + (fRec0[0] * (fConst61 + (fConst60 * fRec0[0]))))))) + (fRec0[0] * (fConst58 + (fConst57 * fRec0[0])))) + fConst55))))) + (fRec2[5] * (7.83565083185472e-10 + (fConst0 * (((fRec1[0] * (fConst53 + (fConst0 * ((fRec1[0] * (fConst52 + (fConst41 * (fRec0[0] * (fConst50 + (fConst49 * fRec0[0])))))) + (fRec0[0] * (fConst48 + (fConst47 * fRec0[0]))))))) + (fRec0[0] * (fConst45 + (fConst44 * fRec0[0])))) + fConst42))))) + (fRec2[6] * (1.30594180530912e-10 + (fConst0 * (((fRec1[0] * (fConst39 + (fConst0 * ((fRec1[0] * (fConst38 + (fConst0 * (fRec0[0] * (fConst37 + (fConst36 * fRec0[0])))))) + (fRec0[0] * (fConst35 + (fConst34 * fRec0[0]))))))) + (fRec0[0] * (fConst33 + (fConst32 * fRec0[0])))) + fConst31))))) / fTemp0));
		double fTemp1 = (fConst0 * (fRec0[0] * (fConst113 + (fConst41 * (0 - (3.70514288350065e-21 * fRec0[0]))))));
		output0[i] = (FAUSTFLOAT)(fConst0 * ((((((((fRec2[0] * (((fRec1[0] * (fConst156 + (fConst0 * ((fRec1[0] * (fConst155 + (fConst0 * (fRec0[0] * (fConst154 + (fConst153 * fRec0[0])))))) + (fRec0[0] * (fConst152 + (fConst151 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst150 + (fConst149 * fRec0[0]))))) + fConst148)) + (fRec2[1] * (((fRec1[0] * (fConst147 + (fConst0 * ((fRec1[0] * (fConst110 + (fConst41 * (fRec0[0] * (fConst146 + (fConst145 * fRec0[0])))))) + (fRec0[0] * (fConst144 + (fConst143 * fRec0[0]))))))) + fTemp1) + fConst142))) + (fRec2[2] * (((fRec1[0] * (fConst141 + (fConst0 * ((fRec1[0] * (fConst140 + (fConst0 * (fRec0[0] * (fConst139 + (fConst138 * fRec0[0])))))) + (fRec0[0] * (fConst137 + (fConst136 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst135 + (fConst134 * fRec0[0]))))) + fConst133))) + (fConst0 * (fRec2[3] * (1.19317982329528e-13 + ((fRec1[0] * (((fRec1[0] * (fConst132 + (fConst41 * (fRec0[0] * (2.34864492414088e-18 + (0 - (3.36831171227332e-19 * fRec0[0]))))))) + (fRec0[0] * (fConst131 + (fConst130 * fRec0[0])))) + fConst129)) + (fRec0[0] * (fConst127 + (fConst126 * fRec0[0])))))))) + (fRec2[4] * (((fRec1[0] * (fConst125 + (fConst0 * ((fRec1[0] * (fConst124 + (fConst0 * (fRec0[0] * (fConst123 + (fConst122 * fRec0[0])))))) + (fRec0[0] * (fConst121 + (fConst119 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst117 + (fConst116 * fRec0[0]))))) + fConst115))) + (fRec2[5] * ((fTemp1 + (fRec1[0] * (fConst112 + (fConst0 * ((fRec1[0] * (fConst110 + (fConst41 * (fRec0[0] * (fConst108 + (fConst107 * fRec0[0])))))) + (fRec0[0] * (fConst106 + (fConst104 * fRec0[0])))))))) + fConst102))) + (fRec2[6] * (((fRec1[0] * (fConst30 + (fConst0 * ((fRec1[0] * (fConst29 + (fConst0 * (fRec0[0] * (fConst27 + (fConst26 * fRec0[0])))))) + (fRec0[0] * (fConst25 + (fConst23 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst21 + (fConst19 * fRec0[0]))))) + fConst17))) / fTemp0));
		// post processing
		for (int i=6; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
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
   BASS, 
   TREBLE, 
} PortIndex;
*/

} // end namespace ampegsvtp3
