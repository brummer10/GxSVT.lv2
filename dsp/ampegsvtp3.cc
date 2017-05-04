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
	double 	fRec2[6];
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
	for (int i=0; i<6; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (2.51265356280367e-22 * fConst0);
	fConst2 = (4.5883882954155e-13 + (fConst0 * (1.30513996644285e-15 + (fConst0 * (1.06228834491247e-18 + fConst1)))));
	fConst3 = (1.73481060378334e-21 * fConst0);
	fConst4 = (fConst0 * ((fConst0 * (0 - (3.9994975860999e-18 + fConst3))) - 1.55054073475655e-17));
	fConst5 = (1.78112026394606e-21 * fConst0);
	fConst6 = (1.4845602779584e-14 + (fConst0 * (3.8633870848073e-15 + (fConst0 * (5.80672501972317e-18 + fConst5)))));
	fConst7 = (3.46962120756668e-23 * fConst0);
	fConst8 = (fConst0 * ((fConst0 * (0 - (8.44573040572409e-20 + fConst7))) - 2.79097332256179e-19));
	fConst9 = (3.56224052789212e-23 * fConst0);
	fConst10 = (2.36210035337381e-16 + (fConst0 * (8.1242944988778e-17 + (fConst0 * (1.20321655897005e-19 + fConst9)))));
	fConst11 = (fConst0 * (6.88440086231909e-20 + fConst7));
	fConst12 = ((fConst0 * (0 - (1.0429157352149e-19 + fConst9))) - 6.61935736736092e-17);
	fConst13 = (5.02530712560733e-24 * fConst0);
	fConst14 = ((fConst0 * ((fConst0 * (0 - (2.1155257545917e-20 + fConst13))) - 2.79417075810508e-17)) - 1.15017202482512e-14);
	fConst15 = (4.64319916723159e-14 + (fConst0 * (1.41997473340919e-14 + (fConst0 * (3.30130851080257e-17 + (fConst0 * (2.34166457524403e-20 + fConst13)))))));
	fConst16 = (6.72642766761394e-19 * fConst0);
	fConst17 = (fConst0 * (fConst16 - 1.47269109511873e-15));
	fConst18 = (1.40861695166986e-13 + fConst17);
	fConst19 = (2.48930787699098e-21 * fConst0);
	fConst20 = (fConst0 * (fConst19 - 1.24465393849549e-18));
	fConst21 = (6.3228420075571e-21 * fConst0);
	fConst22 = ((fConst0 * (1.35784763072021e-17 - fConst21)) - 1.19168994111271e-15);
	fConst23 = (4.97861575398197e-23 * fConst0);
	fConst24 = (fConst0 * ((fConst0 * (1.35554128937964e-19 - fConst23)) - 5.65751790225224e-17));
	fConst25 = (1.26456840151142e-22 * fConst0);
	fConst26 = ((fConst0 * (2.54138111623597e-16 + (fConst0 * (fConst25 - 4.16868163916846e-19)))) - 5.41677245960321e-14);
	fConst27 = (fConst0 * (fConst23 - 1.13150358045045e-19));
	fConst28 = ((fConst0 * (3.59962585848832e-19 - fConst25)) - 1.64910628214587e-16);
	fConst29 = (1.34528553352279e-20 * fConst0);
	fConst30 = (1.882424471777e-14 + (fConst0 * (fConst29 - 3.88573388922458e-17)));
	fConst31 = (6.40280432577211e-12 + (fConst0 * ((fConst0 * (4.49111237930983e-17 - fConst29)) - 2.85700812381143e-14)));
	fConst32 = ((fConst0 * (1.30513996644285e-15 + (fConst0 * (fConst1 - 1.06228834491247e-18)))) - 4.5883882954155e-13);
	fConst33 = (fConst0 * ((fConst0 * (3.9994975860999e-18 - fConst3)) - 1.55054073475655e-17));
	fConst34 = ((fConst0 * (3.8633870848073e-15 + (fConst0 * (fConst5 - 5.80672501972317e-18)))) - 1.4845602779584e-14);
	fConst35 = (fConst0 * (2.79097332256179e-19 + (fConst0 * (fConst7 - 8.44573040572409e-20))));
	fConst36 = (2.36210035337381e-16 + (fConst0 * ((fConst0 * (1.20321655897005e-19 - fConst9)) - 8.1242944988778e-17)));
	fConst37 = (fConst0 * (6.88440086231909e-20 - fConst7));
	fConst38 = (6.61935736736092e-17 + (fConst0 * (fConst9 - 1.0429157352149e-19)));
	fConst39 = ((fConst0 * (2.79417075810508e-17 + (fConst0 * (fConst13 - 2.1155257545917e-20)))) - 1.15017202482512e-14);
	fConst40 = ((fConst0 * (1.41997473340919e-14 + (fConst0 * ((fConst0 * (2.34166457524403e-20 - fConst13)) - 3.30130851080257e-17)))) - 4.64319916723159e-14);
	fConst41 = (7.537960688411e-22 * fConst0);
	fConst42 = ((fConst0 * (1.30513996644285e-15 + (fConst0 * (1.06228834491247e-18 - fConst41)))) - 1.37651648862465e-12);
	fConst43 = (5.20443181135002e-21 * fConst0);
	fConst44 = (fConst0 * ((fConst0 * (fConst43 - 3.9994975860999e-18)) - 1.55054073475655e-17));
	fConst45 = (5.34336079183818e-21 * fConst0);
	fConst46 = ((fConst0 * (3.8633870848073e-15 + (fConst0 * (5.80672501972317e-18 - fConst45)))) - 4.4536808338752e-14);
	fConst47 = (1.73481060378334e-22 * fConst0);
	fConst48 = (fConst0 * ((fConst0 * (2.53371912171723e-19 - fConst47)) - 2.79097332256179e-19));
	fConst49 = (1.78112026394606e-22 * fConst0);
	fConst50 = (2.36210035337381e-16 + (fConst0 * (8.1242944988778e-17 + (fConst0 * (fConst49 - 3.60964967691014e-19)))));
	fConst51 = (fConst0 * (fConst47 - 2.06532025869573e-19));
	fConst52 = ((fConst0 * (3.1287472056447e-19 - fConst49)) - 6.61935736736092e-17);
	fConst53 = (2.51265356280367e-23 * fConst0);
	fConst54 = ((fConst0 * ((fConst0 * (6.34657726377509e-20 - fConst53)) - 2.79417075810508e-17)) - 1.15017202482512e-14);
	fConst55 = ((fConst0 * (1.41997473340919e-14 + (fConst0 * (3.30130851080257e-17 + (fConst0 * (fConst53 - 7.02499372573208e-20)))))) - 1.39295975016948e-13);
	fConst56 = (5.02530712560733e-22 * fConst0);
	fConst57 = ((fConst0 * ((fConst0 * (2.12457668982495e-18 + fConst56)) - 2.6102799328857e-15)) - 9.17677659083101e-13);
	fConst58 = (3.46962120756668e-21 * fConst0);
	fConst59 = (fConst0 * (3.1010814695131e-17 + (fConst0 * (0 - (7.99899517219981e-18 + fConst58)))));
	fConst60 = (3.56224052789212e-21 * fConst0);
	fConst61 = ((fConst0 * ((fConst0 * (1.16134500394463e-17 + fConst60)) - 7.72677416961461e-15)) - 2.9691205559168e-14);
	fConst62 = (3.46962120756668e-22 * fConst0);
	fConst63 = (fConst0 * ((fConst0 * (fConst62 - 1.68914608114482e-19)) - 5.58194664512358e-19));
	fConst64 = (3.56224052789212e-22 * fConst0);
	fConst65 = ((fConst0 * (1.62485889977556e-16 + (fConst0 * (2.40643311794009e-19 - fConst64)))) - 4.72420070674762e-16);
	fConst66 = (fConst0 * (1.37688017246382e-19 - fConst62));
	fConst67 = ((fConst0 * (fConst64 - 2.0858314704298e-19)) - 1.32387147347218e-16);
	fConst68 = (5.02530712560733e-23 * fConst0);
	fConst69 = (2.30034404965025e-14 + (fConst0 * ((fConst0 * (fConst68 - 4.23105150918339e-20)) - 5.58834151621016e-17)));
	fConst70 = ((fConst0 * ((fConst0 * (6.60261702160514e-17 + (fConst0 * (4.68332915048805e-20 - fConst68)))) - 2.83994946681838e-14)) - 9.28639833446319e-14);
	fConst71 = (9.17677659083101e-13 + (fConst0 * ((fConst0 * (fConst56 - 2.12457668982495e-18)) - 2.6102799328857e-15)));
	fConst72 = (fConst0 * (3.1010814695131e-17 + (fConst0 * (7.99899517219981e-18 - fConst58))));
	fConst73 = (2.9691205559168e-14 + (fConst0 * ((fConst0 * (fConst60 - 1.16134500394463e-17)) - 7.72677416961461e-15)));
	fConst74 = (fConst0 * (5.58194664512358e-19 + (fConst0 * (0 - (1.68914608114482e-19 + fConst62)))));
	fConst75 = ((fConst0 * ((fConst0 * (2.40643311794009e-19 + fConst64)) - 1.62485889977556e-16)) - 4.72420070674762e-16);
	fConst76 = (fConst0 * (1.37688017246382e-19 + fConst62));
	fConst77 = (1.32387147347218e-16 + (fConst0 * (0 - (2.0858314704298e-19 + fConst64))));
	fConst78 = (2.30034404965025e-14 + (fConst0 * (5.58834151621016e-17 + (fConst0 * (0 - (4.23105150918339e-20 + fConst68))))));
	fConst79 = (9.28639833446319e-14 + (fConst0 * ((fConst0 * ((fConst0 * (4.68332915048805e-20 + fConst68)) - 6.60261702160514e-17)) - 2.83994946681838e-14)));
	fConst80 = (1.37651648862465e-12 + (fConst0 * (1.30513996644285e-15 + (fConst0 * (0 - (1.06228834491247e-18 + fConst41))))));
	fConst81 = (fConst0 * ((fConst0 * (3.9994975860999e-18 + fConst43)) - 1.55054073475655e-17));
	fConst82 = (4.4536808338752e-14 + (fConst0 * (3.8633870848073e-15 + (fConst0 * (0 - (5.80672501972317e-18 + fConst45))))));
	fConst83 = (fConst0 * (2.79097332256179e-19 + (fConst0 * (2.53371912171723e-19 + fConst47))));
	fConst84 = (2.36210035337381e-16 + (fConst0 * ((fConst0 * (0 - (3.60964967691014e-19 + fConst49))) - 8.1242944988778e-17)));
	fConst85 = (fConst0 * (0 - (2.06532025869573e-19 + fConst47)));
	fConst86 = (6.61935736736092e-17 + (fConst0 * (3.1287472056447e-19 + fConst49)));
	fConst87 = ((fConst0 * (2.79417075810508e-17 + (fConst0 * (6.34657726377509e-20 + fConst53)))) - 1.15017202482512e-14);
	fConst88 = (1.39295975016948e-13 + (fConst0 * (1.41997473340919e-14 + (fConst0 * ((fConst0 * (0 - (7.02499372573208e-20 + fConst53))) - 3.30130851080257e-17)))));
	fConst89 = (fConst0 * (0 - (1.47269109511873e-15 + fConst16)));
	fConst90 = (4.22585085500959e-13 + fConst89);
	fConst91 = (7.46792363097295e-21 * fConst0);
	fConst92 = (fConst0 * (1.24465393849549e-18 - fConst91));
	fConst93 = (1.89685260226713e-20 * fConst0);
	fConst94 = ((fConst0 * (fConst93 - 1.35784763072021e-17)) - 1.19168994111271e-15);
	fConst95 = (2.48930787699098e-22 * fConst0);
	fConst96 = (fConst0 * (5.65751790225224e-17 + (fConst0 * (fConst95 - 4.06662386813891e-19))));
	fConst97 = (6.3228420075571e-22 * fConst0);
	fConst98 = ((fConst0 * ((fConst0 * (1.25060449175054e-18 - fConst97)) - 2.54138111623597e-16)) - 5.41677245960321e-14);
	fConst99 = (fConst0 * (3.39451074135134e-19 - fConst95));
	fConst100 = (1.64910628214587e-16 + (fConst0 * (fConst97 - 1.0798877575465e-18)));
	fConst101 = (4.03585660056836e-20 * fConst0);
	fConst102 = (1.882424471777e-14 + (fConst0 * (3.88573388922458e-17 - fConst101)));
	fConst103 = (1.92084129773163e-11 + (fConst0 * ((fConst0 * (fConst101 - 4.49111237930983e-17)) - 2.85700812381143e-14)));
	fConst104 = (1.34528553352279e-18 * fConst0);
	fConst105 = (2.81723390333973e-13 + (fConst0 * (2.94538219023746e-15 - fConst104)));
	fConst106 = (4.97861575398197e-21 * fConst0);
	fConst107 = (fConst0 * (2.48930787699098e-18 + fConst106));
	fConst108 = (1.26456840151142e-20 * fConst0);
	fConst109 = (2.38337988222541e-15 + (fConst0 * (0 - (2.71569526144043e-17 + fConst108))));
	fConst110 = (4.97861575398197e-22 * fConst0);
	fConst111 = (fConst0 * (1.13150358045045e-16 + (fConst0 * (2.71108257875927e-19 - fConst110))));
	fConst112 = (1.26456840151142e-21 * fConst0);
	fConst113 = (1.08335449192064e-13 + (fConst0 * ((fConst0 * (fConst112 - 8.33736327833691e-19)) - 5.08276223247194e-16)));
	fConst114 = (fConst0 * (fConst110 - 2.2630071609009e-19));
	fConst115 = (3.29821256429173e-16 + (fConst0 * (7.19925171697663e-19 - fConst112)));
	fConst116 = (2.69057106704557e-20 * fConst0);
	fConst117 = ((fConst0 * (7.77146777844916e-17 + fConst116)) - 3.764848943554e-14);
	fConst118 = (1.28056086515442e-11 + (fConst0 * (5.71401624762285e-14 + (fConst0 * (0 - (8.98222475861967e-17 + fConst116))))));
	fConst119 = ((fConst0 * (2.94538219023746e-15 + fConst104)) - 2.81723390333973e-13);
	fConst120 = (fConst0 * (fConst106 - 2.48930787699098e-18));
	fConst121 = (2.38337988222541e-15 + (fConst0 * (2.71569526144043e-17 - fConst108)));
	fConst122 = (fConst0 * ((fConst0 * (2.71108257875927e-19 + fConst110)) - 1.13150358045045e-16));
	fConst123 = (1.08335449192064e-13 + (fConst0 * (5.08276223247194e-16 + (fConst0 * (0 - (8.33736327833691e-19 + fConst112))))));
	fConst124 = (fConst0 * (0 - (2.2630071609009e-19 + fConst110)));
	fConst125 = ((fConst0 * (7.19925171697663e-19 + fConst112)) - 3.29821256429173e-16);
	fConst126 = ((fConst0 * (fConst116 - 7.77146777844916e-17)) - 3.764848943554e-14);
	fConst127 = ((fConst0 * (5.71401624762285e-14 + (fConst0 * (8.98222475861967e-17 - fConst116)))) - 1.28056086515442e-11);
	fConst128 = (fConst0 * (0 - (1.24465393849549e-18 + fConst91)));
	fConst129 = ((fConst0 * (1.35784763072021e-17 + fConst93)) - 1.19168994111271e-15);
	fConst130 = (fConst0 * ((fConst0 * (0 - (4.06662386813891e-19 + fConst95))) - 5.65751790225224e-17));
	fConst131 = ((fConst0 * (2.54138111623597e-16 + (fConst0 * (1.25060449175054e-18 + fConst97)))) - 5.41677245960321e-14);
	fConst132 = (fConst0 * (3.39451074135134e-19 + fConst95));
	fConst133 = ((fConst0 * (0 - (1.0798877575465e-18 + fConst97))) - 1.64910628214587e-16);
	fConst134 = (1.882424471777e-14 + (fConst0 * (0 - (3.88573388922458e-17 + fConst101))));
	fConst135 = ((fConst0 * ((fConst0 * (4.49111237930983e-17 + fConst101)) - 2.85700812381143e-14)) - 1.92084129773163e-11);
	fConst136 = (fConst17 - 4.22585085500959e-13);
	fConst137 = (fConst89 - 1.40861695166986e-13);
	fConst138 = (fConst0 * (1.24465393849549e-18 + fConst19));
	fConst139 = ((fConst0 * (0 - (1.35784763072021e-17 + fConst21))) - 1.19168994111271e-15);
	fConst140 = (fConst0 * (5.65751790225224e-17 + (fConst0 * (1.35554128937964e-19 + fConst23))));
	fConst141 = ((fConst0 * ((fConst0 * (0 - (4.16868163916846e-19 + fConst25))) - 2.54138111623597e-16)) - 5.41677245960321e-14);
	fConst142 = (fConst0 * (0 - (1.13150358045045e-19 + fConst23)));
	fConst143 = (1.64910628214587e-16 + (fConst0 * (3.59962585848832e-19 + fConst25)));
	fConst144 = (1.882424471777e-14 + (fConst0 * (3.88573388922458e-17 + fConst29)));
	fConst145 = ((fConst0 * ((fConst0 * (0 - (4.49111237930983e-17 + fConst29))) - 2.85700812381143e-14)) - 6.40280432577211e-12);
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
	double 	fSlow0 = (4.748558434412966e-05 * (exp((5 * double(fslider0))) - 1));
	double 	fSlow1 = (4.748558434412966e-05 * (exp((5 * double(fslider1))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow1);
		double fTemp0 = (1.75479938292955e-12 + (fConst0 * (((fRec1[0] * (fConst15 + (fConst0 * ((fRec1[0] * (fConst14 + (fConst0 * (fRec0[0] * (fConst12 + (fConst11 * fRec0[0])))))) + (fRec0[0] * (fConst10 + (fConst8 * fRec0[0]))))))) + (fRec0[0] * (fConst6 + (fConst4 * fRec0[0])))) + fConst2)));
		fRec2[0] = ((double)input0[i] - ((((((fRec2[1] * (8.77399691464776e-12 + (fConst0 * (((fRec1[0] * (fConst88 + (fConst0 * ((fRec1[0] * (fConst87 + (fConst0 * (fRec0[0] * (fConst86 + (fConst85 * fRec0[0])))))) + (fRec0[0] * (fConst84 + (fConst83 * fRec0[0]))))))) + (fRec0[0] * (fConst82 + (fConst81 * fRec0[0])))) + fConst80)))) + (fRec2[2] * (1.75479938292955e-11 + (fConst0 * (((fRec1[0] * (fConst79 + (fConst0 * ((fRec1[0] * (fConst78 + (fConst0 * (fRec0[0] * (fConst77 + (fConst76 * fRec0[0])))))) + (fRec0[0] * (fConst75 + (fConst74 * fRec0[0]))))))) + (fRec0[0] * (fConst73 + (fConst72 * fRec0[0])))) + fConst71))))) + (fRec2[3] * (1.75479938292955e-11 + (fConst0 * (((fRec1[0] * (fConst70 + (fConst0 * ((fRec1[0] * (fConst69 + (fConst0 * (fRec0[0] * (fConst67 + (fConst66 * fRec0[0])))))) + (fRec0[0] * (fConst65 + (fConst63 * fRec0[0]))))))) + (fRec0[0] * (fConst61 + (fConst59 * fRec0[0])))) + fConst57))))) + (fRec2[4] * (8.77399691464776e-12 + (fConst0 * (((fRec1[0] * (fConst55 + (fConst0 * ((fRec1[0] * (fConst54 + (fConst0 * (fRec0[0] * (fConst52 + (fConst51 * fRec0[0])))))) + (fRec0[0] * (fConst50 + (fConst48 * fRec0[0]))))))) + (fRec0[0] * (fConst46 + (fConst44 * fRec0[0])))) + fConst42))))) + (fRec2[5] * (1.75479938292955e-12 + (fConst0 * (((fRec1[0] * (fConst40 + (fConst0 * ((fRec1[0] * (fConst39 + (fConst0 * (fRec0[0] * (fConst38 + (fConst37 * fRec0[0])))))) + (fRec0[0] * (fConst36 + (fConst35 * fRec0[0]))))))) + (fRec0[0] * (fConst34 + (fConst33 * fRec0[0])))) + fConst32))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst0 * (((((((fRec2[0] * (((fRec1[0] * (fConst145 + (fConst0 * ((fRec1[0] * (fConst144 + (fConst0 * (fRec0[0] * (fConst143 + (fConst142 * fRec0[0])))))) + (fRec0[0] * (fConst141 + (fConst140 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst139 + (fConst138 * fRec0[0]))))) + fConst137)) + (fRec2[1] * (fConst136 + ((fRec1[0] * (fConst135 + (fConst0 * ((fRec1[0] * (fConst134 + (fConst0 * (fRec0[0] * (fConst133 + (fConst132 * fRec0[0])))))) + (fRec0[0] * (fConst131 + (fConst130 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst129 + (fConst128 * fRec0[0])))))))) + (fRec2[2] * (((fRec1[0] * (fConst127 + (fConst0 * ((fRec1[0] * (fConst126 + (fConst0 * (fRec0[0] * (fConst125 + (fConst124 * fRec0[0])))))) + (fRec0[0] * (fConst123 + (fConst122 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst121 + (fConst120 * fRec0[0]))))) + fConst119))) + (fRec2[3] * (((fRec1[0] * (fConst118 + (fConst0 * ((fRec1[0] * (fConst117 + (fConst0 * (fRec0[0] * (fConst115 + (fConst114 * fRec0[0])))))) + (fRec0[0] * (fConst113 + (fConst111 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst109 + (fConst107 * fRec0[0]))))) + fConst105))) + (fRec2[4] * (((fRec1[0] * (fConst103 + (fConst0 * ((fRec1[0] * (fConst102 + (fConst0 * (fRec0[0] * (fConst100 + (fConst99 * fRec0[0])))))) + (fRec0[0] * (fConst98 + (fConst96 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst94 + (fConst92 * fRec0[0]))))) + fConst90))) + (fRec2[5] * (((fRec1[0] * (fConst31 + (fConst0 * ((fRec1[0] * (fConst30 + (fConst0 * (fRec0[0] * (fConst28 + (fConst27 * fRec0[0])))))) + (fRec0[0] * (fConst26 + (fConst24 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst22 + (fConst20 * fRec0[0]))))) + fConst18))) / fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec2[i] = fRec2[i-1];
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
