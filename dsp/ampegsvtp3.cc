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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
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
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec2[2];
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
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	double 	fConst189;
	double 	fConst190;
	double 	fConst191;
	double 	fConst192;
	double 	fConst193;
	double 	fConst194;
	double 	fRec3[7];
	double 	fConst195;
	double 	fConst196;
	double 	fConst197;
	double 	fConst198;
	double 	fConst199;
	double 	fConst200;
	double 	fConst201;
	double 	fConst202;
	double 	fConst203;
	double 	fConst204;
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	double 	fConst211;
	double 	fConst212;
	double 	fConst213;
	double 	fConst214;
	double 	fConst215;
	double 	fConst216;
	double 	fConst217;
	double 	fConst218;
	double 	fConst219;
	double 	fConst220;
	double 	fConst221;
	double 	fConst222;
	double 	fConst223;
	double 	fConst224;
	double 	fConst225;
	double 	fConst226;
	double 	fConst227;
	double 	fConst228;
	double 	fConst229;
	double 	fConst230;
	double 	fConst231;
	double 	fConst232;
	double 	fConst233;
	double 	fConst234;
	double 	fConst235;
	double 	fConst236;
	double 	fConst237;
	double 	fConst238;
	double 	fConst239;
	double 	fConst240;
	double 	fConst241;
	double 	fConst242;
	double 	fConst243;
	double 	fConst244;
	double 	fConst245;
	double 	fConst246;
	double 	fConst247;
	double 	fConst248;
	double 	fConst249;
	double 	fConst250;
	double 	fConst251;
	double 	fConst252;
	double 	fConst253;
	double 	fConst254;
	double 	fConst255;
	double 	fConst256;
	double 	fConst257;
	double 	fConst258;
	double 	fConst259;
	double 	fConst260;
	double 	fConst261;
	double 	fConst262;
	double 	fConst263;
	double 	fConst264;
	double 	fConst265;
	double 	fConst266;
	double 	fConst267;
	double 	fConst268;
	double 	fConst269;
	double 	fConst270;
	double 	fConst271;
	double 	fConst272;
	double 	fConst273;
	double 	fConst274;
	double 	fConst275;
	double 	fConst276;
	double 	fConst277;
	double 	fConst278;
	double 	fConst279;
	double 	fConst280;
	double 	fConst281;
	double 	fConst282;
	double 	fConst283;
	double 	fConst284;
	double 	fConst285;
	double 	fConst286;
	double 	fConst287;
	double 	fConst288;
	double 	fConst289;
	double 	fConst290;
	double 	fConst291;
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
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<7; i++) fRec3[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (6.6044641338194e-41 * fConst0);
	fConst2 = (5.04717303737819e-12 + (fConst0 * (3.16710190661464e-15 + (fConst0 * (5.08606954560009e-19 + (fConst0 * (2.24294349046464e-23 + fConst1)))))));
	fConst3 = (5.50372011151617e-40 * fConst0);
	fConst4 = (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.81082473990304e-22 + fConst3))) - 4.45383668159993e-19)) - 1.75664569883585e-18));
	fConst5 = (1.68189481803432e-14 + (fConst0 * (4.26821146987688e-15 + (fConst0 * (2.19608852828033e-18 + (fConst0 * (1.86911957538714e-22 + fConst3)))))));
	fConst6 = (1.10074402230323e-41 * fConst0);
	fConst7 = (3.62164947980608e-24 + fConst6);
	fConst8 = (fConst0 * ((fConst0 * ((fConst0 * (0 - fConst7)) - 9.42924916874389e-21)) - 3.16196225790452e-20));
	fConst9 = (2.99227775848506e-16 + (fConst0 * (9.0323743142287e-17 + (fConst0 * (4.44110192351095e-20 + (fConst0 * (3.73823915077428e-24 + fConst6)))))));
	fConst10 = (fConst0 * (7.79950690283116e-21 + (fConst0 * fConst7)));
	fConst11 = ((fConst0 * ((fConst0 * (0 - (3.73823915077427e-24 + fConst6))) - 4.27288116172611e-20)) - 7.4707749543303e-17);
	fConst12 = (1.32089282676388e-42 * fConst0);
	fConst13 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (4.48588698092928e-25 + fConst12))) - 1.02222554115357e-20)) - 6.29999767670465e-17)) - 9.24574630872792e-14);
	fConst14 = (3.74668909464241e-13 + (fConst0 * (1.12020726913891e-13 + (fConst0 * (6.71762186764904e-17 + (fConst0 * (1.04241203256775e-20 + (fConst0 * (4.48588698092929e-25 + fConst12)))))))));
	fConst15 = (9.6315101951533e-40 * fConst0);
	fConst16 = (5.8352938661399e-11 + (fConst0 * (3.94941810514352e-14 + (fConst0 * (6.86251767896281e-18 + (fConst0 * (3.23482609443747e-22 + fConst15)))))));
	fConst17 = (6.87965013939521e-39 * fConst0);
	fConst18 = (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.23341995613704e-21 + fConst17))) - 5.14901033221443e-18)) - 1.99618829413164e-17));
	fConst19 = (1.91124411140264e-13 + (fConst0 * (4.93429113143751e-14 + (fConst0 * (2.67210880312961e-17 + (fConst0 * (2.29303967424579e-21 + fConst17)))))));
	fConst20 = (1.37593002787904e-40 * fConst0);
	fConst21 = (4.46683991227408e-23 + fConst20);
	fConst22 = (fConst0 * ((fConst0 * ((fConst0 * (0 - fConst21)) - 1.08731539864678e-19)) - 3.59313892943696e-19));
	fConst23 = (3.40031563464212e-15 + (fConst0 * (1.04153532052811e-15 + (fConst0 * (5.39812364440786e-19 + (fConst0 * (4.58607934849158e-23 + fConst20)))))));
	fConst24 = (fConst0 * (8.8630760259445e-20 + (fConst0 * fConst21)));
	fConst25 = ((fConst0 * ((fConst0 * (0 - (4.58607934849157e-23 + fConst20))) - 5.19175007372574e-19)) - 8.48951699355715e-16);
	fConst26 = (1.92630203903066e-41 * fConst0);
	fConst27 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (6.46965218887495e-24 + fConst26))) - 1.37133830545978e-19)) - 7.76422086358496e-16)) - 1.05065298962817e-12);
	fConst28 = (4.25760124391183e-12 + (fConst0 * (1.28991113487232e-12 + (fConst0 * (8.32405262623843e-16 + (fConst0 * (1.40045174030971e-19 + (fConst0 * (6.46965218887496e-24 + fConst26)))))))));
	fConst29 = (3.60025284507355e-19 * fConst0);
	fConst30 = (fConst0 * (fConst29 - 9.9825192522494e-16));
	fConst31 = (3.38423767436914e-22 * fConst0);
	fConst32 = faustpower<2>(fConst0);
	fConst33 = (fConst32 * (9.38356809711443e-19 - fConst31));
	fConst34 = (8.65969907811252e-18 * fConst0);
	fConst35 = (1.81347358814553e-11 + (fConst0 * (fConst34 - 5.16021601449516e-14)));
	fConst36 = (3.20477052497078e-21 * fConst0);
	fConst37 = (fConst0 * (fConst36 - 1.60238526248539e-18));
	fConst38 = (8.14011713342577e-21 * fConst0);
	fConst39 = ((fConst0 * (4.50967001905409e-17 - fConst38)) - 1.53419865557112e-14);
	fConst40 = (6.40954104994155e-23 * fConst0);
	fConst41 = (fConst0 * ((fConst0 * (1.74514322223409e-19 - fConst40)) - 7.28356937493358e-17));
	fConst42 = (1.62802342668515e-22 * fConst0);
	fConst43 = ((fConst0 * (1.83097466338304e-15 + (fConst0 * (fConst42 - 1.08899354592561e-18)))) - 6.97363025259598e-13);
	fConst44 = (fConst0 * (fConst40 - 1.45671387498672e-19));
	fConst45 = ((fConst0 * (1.01573249172478e-18 - fConst42)) - 1.46756174426853e-15);
	fConst46 = (1.7319398156225e-19 * fConst0);
	fConst47 = (1.72609713344397e-12 + (fConst0 * (fConst46 - 1.1531054240841e-15)));
	fConst48 = (8.24306176429785e-10 + (fConst0 * ((fConst0 * (1.23104271578711e-15 - fConst46)) - 2.14534914645028e-12)));
	fConst49 = (1.28190820998831e-20 * fConst0);
	fConst50 = (fConst0 * (fConst49 - 6.40954104994155e-18));
	fConst51 = (6.76847534873828e-24 * fConst0);
	fConst52 = ((fConst0 * (1.3696507357656e-16 + (fConst0 * (fConst51 - 3.56062824406353e-20)))) - 6.13679462228446e-14);
	fConst53 = ((fConst0 * (3.25604685337031e-20 - fConst51)) - 1.29145433495631e-16);
	fConst54 = (7.20050569014711e-21 * fConst0);
	fConst55 = (1.51896547743069e-13 + (fConst0 * (fConst54 - 3.46387963124501e-17)));
	fConst56 = (7.25389435258211e-11 + (fConst0 * ((fConst0 * (3.78790238730163e-17 - fConst54)) - 1.60215313786611e-13)));
	fConst57 = ((fConst0 * (3.16710190661464e-15 + (fConst0 * ((fConst0 * (2.24294349046464e-23 - fConst1)) - 5.08606954560009e-19)))) - 5.04717303737819e-12);
	fConst58 = (fConst0 * ((fConst0 * (4.45383668159993e-19 + (fConst0 * (fConst3 - 1.81082473990304e-22)))) - 1.75664569883585e-18));
	fConst59 = ((fConst0 * (4.26821146987688e-15 + (fConst0 * ((fConst0 * (1.86911957538714e-22 - fConst3)) - 2.19608852828033e-18)))) - 1.68189481803432e-14);
	fConst60 = (fConst0 * (3.16196225790452e-20 + (fConst0 * ((fConst0 * (3.62164947980608e-24 - fConst6)) - 9.42924916874389e-21))));
	fConst61 = (2.99227775848506e-16 + (fConst0 * ((fConst0 * (4.44110192351095e-20 + (fConst0 * (fConst6 - 3.73823915077428e-24)))) - 9.0323743142287e-17)));
	fConst62 = (fConst0 * (7.79950690283116e-21 + (fConst0 * (fConst6 - 3.62164947980608e-24))));
	fConst63 = (7.4707749543303e-17 + (fConst0 * ((fConst0 * (3.73823915077427e-24 - fConst6)) - 4.27288116172611e-20)));
	fConst64 = ((fConst0 * (6.29999767670465e-17 + (fConst0 * ((fConst0 * (4.48588698092928e-25 - fConst12)) - 1.02222554115357e-20)))) - 9.24574630872792e-14);
	fConst65 = ((fConst0 * (1.12020726913891e-13 + (fConst0 * ((fConst0 * (1.04241203256775e-20 + (fConst0 * (fConst12 - 4.48588698092929e-25)))) - 6.71762186764904e-17)))) - 3.74668909464241e-13);
	fConst66 = ((fConst0 * (3.94941810514352e-14 + (fConst0 * ((fConst0 * (3.23482609443747e-22 - fConst15)) - 6.86251767896281e-18)))) - 5.8352938661399e-11);
	fConst67 = (fConst0 * ((fConst0 * (5.14901033221443e-18 + (fConst0 * (fConst17 - 2.23341995613704e-21)))) - 1.99618829413164e-17));
	fConst68 = ((fConst0 * (4.93429113143751e-14 + (fConst0 * ((fConst0 * (2.29303967424579e-21 - fConst17)) - 2.67210880312961e-17)))) - 1.91124411140264e-13);
	fConst69 = (fConst0 * (3.59313892943696e-19 + (fConst0 * ((fConst0 * (4.46683991227408e-23 - fConst20)) - 1.08731539864678e-19))));
	fConst70 = (3.40031563464212e-15 + (fConst0 * ((fConst0 * (5.39812364440786e-19 + (fConst0 * (fConst20 - 4.58607934849158e-23)))) - 1.04153532052811e-15)));
	fConst71 = (fConst0 * (8.8630760259445e-20 + (fConst0 * (fConst20 - 4.46683991227408e-23))));
	fConst72 = (8.48951699355715e-16 + (fConst0 * ((fConst0 * (4.58607934849157e-23 - fConst20)) - 5.19175007372574e-19)));
	fConst73 = ((fConst0 * (7.76422086358496e-16 + (fConst0 * ((fConst0 * (6.46965218887495e-24 - fConst26)) - 1.37133830545978e-19)))) - 1.05065298962817e-12);
	fConst74 = ((fConst0 * (1.28991113487232e-12 + (fConst0 * ((fConst0 * (1.40045174030971e-19 + (fConst0 * (fConst26 - 6.46965218887496e-24)))) - 8.32405262623843e-16)))) - 4.25760124391183e-12);
	fConst75 = (2.64178565352776e-40 * fConst0);
	fConst76 = ((fConst0 * (6.33420381322927e-15 + (fConst32 * (fConst75 - 4.48588698092928e-23)))) - 2.01886921495128e-11);
	fConst77 = (2.20148804460647e-39 * fConst0);
	fConst78 = (fConst0 * ((fConst32 * (3.62164947980608e-22 - fConst77)) - 3.51329139767169e-18));
	fConst79 = ((fConst0 * (8.53642293975375e-15 + (fConst32 * (fConst77 - 3.73823915077428e-22)))) - 6.72757927213729e-14);
	fConst80 = (fConst32 * (1.88584983374878e-20 + (fConst0 * (fConst1 - 1.44865979192243e-23))));
	fConst81 = (5.98455551697012e-16 + (fConst32 * ((fConst0 * (1.49529566030971e-23 - fConst1)) - 8.8822038470219e-20)));
	fConst82 = ((fConst0 * (1.44865979192243e-23 - fConst1)) - 1.55990138056623e-20);
	fConst83 = (8.54576232345221e-20 + (fConst0 * (fConst1 - 1.49529566030971e-23)));
	fConst84 = (7.92535696058329e-42 * fConst0);
	fConst85 = ((fConst32 * (2.04445108230714e-20 + (fConst0 * (fConst84 - 1.79435479237171e-24)))) - 1.84914926174558e-13);
	fConst86 = ((fConst0 * (2.24041453827781e-13 + (fConst32 * ((fConst0 * (1.79435479237171e-24 - fConst84)) - 2.0848240651355e-20)))) - 1.49867563785697e-12);
	fConst87 = (3.85260407806132e-39 * fConst0);
	fConst88 = ((fConst0 * (7.89883621028704e-14 + (fConst32 * (fConst87 - 6.46965218887495e-22)))) - 2.33411754645596e-10);
	fConst89 = (2.75186005575809e-38 * fConst0);
	fConst90 = (fConst0 * ((fConst32 * (4.46683991227408e-21 - fConst89)) - 3.99237658826329e-17));
	fConst91 = ((fConst0 * (9.86858226287503e-14 + (fConst32 * (fConst89 - 4.58607934849158e-21)))) - 7.64497644561055e-13);
	fConst92 = (8.25558016727426e-40 * fConst0);
	fConst93 = (fConst32 * (2.17463079729356e-19 + (fConst0 * (fConst92 - 1.78673596490963e-22))));
	fConst94 = (6.80063126928423e-15 + (fConst32 * ((fConst0 * (1.83443173939663e-22 - fConst92)) - 1.07962472888157e-18)));
	fConst95 = ((fConst0 * (1.78673596490963e-22 - fConst92)) - 1.7726152051889e-19);
	fConst96 = (1.03835001474515e-18 + (fConst0 * (fConst92 - 1.83443173939663e-22)));
	fConst97 = (1.1557812234184e-40 * fConst0);
	fConst98 = ((fConst32 * (2.74267661091955e-19 + (fConst0 * (fConst97 - 2.58786087554998e-23)))) - 2.10130597925635e-12);
	fConst99 = ((fConst0 * (2.57982226974463e-12 + (fConst32 * ((fConst0 * (2.58786087554998e-23 - fConst97)) - 2.80090348061942e-19)))) - 1.70304049756473e-11);
	fConst100 = (3.3022320669097e-40 * fConst0);
	fConst101 = ((fConst0 * ((fConst0 * (1.52582086368003e-18 + (fConst0 * (0 - (2.24294349046464e-23 + fConst100))))) - 3.16710190661464e-15)) - 2.5235865186891e-11);
	fConst102 = (2.75186005575809e-39 * fConst0);
	fConst103 = (fConst0 * (1.75664569883585e-18 + (fConst0 * ((fConst0 * (1.81082473990304e-22 + fConst102)) - 1.33615100447998e-18))));
	fConst104 = ((fConst0 * ((fConst0 * (6.58826558484099e-18 + (fConst0 * (0 - (1.86911957538714e-22 + fConst102))))) - 4.26821146987688e-15)) - 8.40947409017161e-14);
	fConst105 = (1.65111603345485e-40 * fConst0);
	fConst106 = (fConst0 * ((fConst0 * (9.42924916874389e-21 + (fConst0 * (1.81082473990304e-23 - fConst105)))) - 9.48588677371357e-20));
	fConst107 = ((fConst0 * (2.70971229426861e-16 + (fConst0 * ((fConst0 * (fConst105 - 1.86911957538714e-23)) - 4.44110192351095e-20)))) - 2.99227775848506e-16);
	fConst108 = (fConst0 * ((fConst0 * (fConst105 - 1.81082473990304e-23)) - 7.79950690283116e-21));
	fConst109 = ((fConst0 * (4.27288116172611e-20 + (fConst0 * (1.86911957538714e-23 - fConst105)))) - 2.24123248629909e-16);
	fConst110 = (1.98133924014582e-41 * fConst0);
	fConst111 = (9.24574630872792e-14 + (fConst0 * ((fConst0 * (1.02222554115357e-20 + (fConst0 * (2.24294349046464e-24 - fConst110)))) - 1.8899993030114e-16)));
	fConst112 = ((fConst0 * ((fConst0 * (2.01528656029471e-16 + (fConst0 * ((fConst0 * (fConst110 - 2.24294349046464e-24)) - 1.04241203256775e-20)))) - 1.12020726913891e-13)) - 1.87334454732121e-12);
	fConst113 = (4.81575509757665e-39 * fConst0);
	fConst114 = ((fConst0 * ((fConst0 * (2.05875530368884e-17 + (fConst0 * (0 - (3.23482609443747e-22 + fConst113))))) - 3.94941810514352e-14)) - 2.91764693306995e-10);
	fConst115 = (3.43982506969761e-38 * fConst0);
	fConst116 = (fConst0 * (1.99618829413164e-17 + (fConst0 * ((fConst0 * (2.23341995613704e-21 + fConst115)) - 1.54470309966433e-17))));
	fConst117 = ((fConst0 * ((fConst0 * (8.01632640938884e-17 + (fConst0 * (0 - (2.29303967424579e-21 + fConst115))))) - 4.93429113143751e-14)) - 9.55622055701319e-13);
	fConst118 = (2.06389504181856e-39 * fConst0);
	fConst119 = (fConst0 * ((fConst0 * (1.08731539864678e-19 + (fConst0 * (2.23341995613704e-22 - fConst118)))) - 1.07794167883109e-18));
	fConst120 = ((fConst0 * (3.12460596158432e-15 + (fConst0 * ((fConst0 * (fConst118 - 2.29303967424579e-22)) - 5.39812364440786e-19)))) - 3.40031563464212e-15);
	fConst121 = (fConst0 * ((fConst0 * (fConst118 - 2.23341995613704e-22)) - 8.8630760259445e-20));
	fConst122 = ((fConst0 * (5.19175007372574e-19 + (fConst0 * (2.29303967424579e-22 - fConst118)))) - 2.54685509806715e-15);
	fConst123 = (2.88945305854599e-40 * fConst0);
	fConst124 = (1.05065298962817e-12 + (fConst0 * ((fConst0 * (1.37133830545978e-19 + (fConst0 * (3.23482609443747e-23 - fConst123)))) - 2.32926625907549e-15)));
	fConst125 = ((fConst0 * ((fConst0 * (2.49721578787153e-15 + (fConst0 * ((fConst0 * (fConst123 - 3.23482609443748e-23)) - 1.40045174030971e-19)))) - 1.28991113487232e-12)) - 2.12880062195592e-11);
	fConst126 = (7.02658279534339e-18 - (7.24329895961216e-22 * fConst32));
	fConst127 = ((7.47647830154855e-22 * fConst32) - 1.70728458795075e-14);
	fConst128 = (2.64178565352776e-41 * fConst32);
	fConst129 = ((fConst32 * (4.169648130271e-20 - fConst128)) - 4.48082907655562e-13);
	fConst130 = (2.20148804460647e-40 * fConst32);
	fConst131 = (fConst32 * (fConst130 - 3.77169966749756e-20));
	fConst132 = ((fConst32 * (1.77644076940438e-19 - fConst130)) - 1.19691110339402e-15);
	fConst133 = (3.11980276113247e-20 - fConst130);
	fConst134 = (fConst130 - 1.70915246469044e-19);
	fConst135 = (3.69829852349117e-13 + (fConst32 * (fConst128 - 4.08890216461428e-20)));
	fConst136 = ((8.97177396185855e-23 * fConst32) - 1.26684076264585e-14);
	fConst137 = (7.98475317652658e-17 - (8.93367982454816e-21 * fConst32));
	fConst138 = ((9.17215869698315e-21 * fConst32) - 1.97371645257501e-13);
	fConst139 = (3.85260407806132e-40 * fConst32);
	fConst140 = ((fConst32 * (5.60180696123885e-19 - fConst139)) - 5.15964453948927e-12);
	fConst141 = (2.75186005575809e-39 * fConst32);
	fConst142 = (fConst32 * (fConst141 - 4.34926159458713e-19));
	fConst143 = ((fConst32 * (2.15924945776314e-18 - fConst141)) - 1.36012625385685e-14);
	fConst144 = (3.5452304103778e-19 - fConst141);
	fConst145 = (fConst141 - 2.0767000294903e-18);
	fConst146 = (4.20261195851269e-12 + (fConst32 * (fConst139 - 5.4853532218391e-19)));
	fConst147 = ((1.29393043777499e-21 * fConst32) - 1.57976724205741e-13);
	fConst148 = (2.5235865186891e-11 + (fConst0 * ((fConst0 * ((fConst0 * (fConst100 - 2.24294349046464e-23)) - 1.52582086368003e-18)) - 3.16710190661464e-15)));
	fConst149 = (fConst0 * (1.75664569883585e-18 + (fConst0 * (1.33615100447998e-18 + (fConst0 * (1.81082473990304e-22 - fConst102))))));
	fConst150 = (8.40947409017161e-14 + (fConst0 * ((fConst0 * ((fConst0 * (fConst102 - 1.86911957538714e-22)) - 6.58826558484099e-18)) - 4.26821146987688e-15)));
	fConst151 = (1.81082473990304e-23 + fConst105);
	fConst152 = (fConst0 * (9.48588677371357e-20 + (fConst0 * (9.42924916874389e-21 + (fConst0 * (0 - fConst151))))));
	fConst153 = (1.86911957538714e-23 + fConst105);
	fConst154 = ((fConst0 * ((fConst0 * ((fConst0 * fConst153) - 4.44110192351095e-20)) - 2.70971229426861e-16)) - 2.99227775848506e-16);
	fConst155 = (fConst0 * ((fConst0 * fConst151) - 7.79950690283116e-21));
	fConst156 = (2.24123248629909e-16 + (fConst0 * (4.27288116172611e-20 + (fConst0 * (0 - fConst153)))));
	fConst157 = (2.24294349046464e-24 + fConst110);
	fConst158 = (9.24574630872792e-14 + (fConst0 * (1.8899993030114e-16 + (fConst0 * (1.02222554115357e-20 + (fConst0 * (0 - fConst157)))))));
	fConst159 = (1.87334454732121e-12 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * fConst157) - 1.04241203256775e-20)) - 2.01528656029471e-16)) - 1.12020726913891e-13)));
	fConst160 = (2.91764693306995e-10 + (fConst0 * ((fConst0 * ((fConst0 * (fConst113 - 3.23482609443747e-22)) - 2.05875530368884e-17)) - 3.94941810514352e-14)));
	fConst161 = (fConst0 * (1.99618829413164e-17 + (fConst0 * (1.54470309966433e-17 + (fConst0 * (2.23341995613704e-21 - fConst115))))));
	fConst162 = (9.55622055701319e-13 + (fConst0 * ((fConst0 * ((fConst0 * (fConst115 - 2.29303967424579e-21)) - 8.01632640938884e-17)) - 4.93429113143751e-14)));
	fConst163 = (2.23341995613704e-22 + fConst118);
	fConst164 = (fConst0 * (1.07794167883109e-18 + (fConst0 * (1.08731539864678e-19 + (fConst0 * (0 - fConst163))))));
	fConst165 = (2.29303967424579e-22 + fConst118);
	fConst166 = ((fConst0 * ((fConst0 * ((fConst0 * fConst165) - 5.39812364440786e-19)) - 3.12460596158432e-15)) - 3.40031563464212e-15);
	fConst167 = (fConst0 * ((fConst0 * fConst163) - 8.8630760259445e-20));
	fConst168 = (2.54685509806715e-15 + (fConst0 * (5.19175007372574e-19 + (fConst0 * (0 - fConst165)))));
	fConst169 = (1.05065298962817e-12 + (fConst0 * (2.32926625907549e-15 + (fConst0 * (1.37133830545978e-19 + (fConst0 * (0 - (3.23482609443747e-23 + fConst123))))))));
	fConst170 = (2.12880062195592e-11 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.23482609443748e-23 + fConst123)) - 1.40045174030971e-19)) - 2.49721578787153e-15)) - 1.28991113487232e-12)));
	fConst171 = (2.01886921495128e-11 + (fConst0 * (6.33420381322927e-15 + (fConst32 * (0 - (4.48588698092928e-23 + fConst75))))));
	fConst172 = (fConst0 * ((fConst32 * (3.62164947980608e-22 + fConst77)) - 3.51329139767169e-18));
	fConst173 = (6.72757927213729e-14 + (fConst0 * (8.53642293975375e-15 + (fConst32 * (0 - (3.73823915077428e-22 + fConst77))))));
	fConst174 = (1.44865979192243e-23 + fConst1);
	fConst175 = (fConst32 * (1.88584983374878e-20 + (fConst0 * fConst174)));
	fConst176 = (1.49529566030971e-23 + fConst1);
	fConst177 = (5.98455551697012e-16 + (fConst32 * ((fConst0 * (0 - fConst176)) - 8.8822038470219e-20)));
	fConst178 = ((fConst0 * (0 - fConst174)) - 1.55990138056623e-20);
	fConst179 = (8.54576232345221e-20 + (fConst0 * fConst176));
	fConst180 = (1.79435479237171e-24 + fConst84);
	fConst181 = ((fConst32 * (2.04445108230714e-20 + (fConst0 * fConst180))) - 1.84914926174558e-13);
	fConst182 = (1.49867563785697e-12 + (fConst0 * (2.24041453827781e-13 + (fConst32 * ((fConst0 * (0 - fConst180)) - 2.0848240651355e-20)))));
	fConst183 = (2.33411754645596e-10 + (fConst0 * (7.89883621028704e-14 + (fConst32 * (0 - (6.46965218887495e-22 + fConst87))))));
	fConst184 = (fConst0 * ((fConst32 * (4.46683991227408e-21 + fConst89)) - 3.99237658826329e-17));
	fConst185 = (7.64497644561055e-13 + (fConst0 * (9.86858226287503e-14 + (fConst32 * (0 - (4.58607934849158e-21 + fConst89))))));
	fConst186 = (1.78673596490963e-22 + fConst92);
	fConst187 = (fConst32 * (2.17463079729356e-19 + (fConst0 * fConst186)));
	fConst188 = (1.83443173939663e-22 + fConst92);
	fConst189 = (6.80063126928423e-15 + (fConst32 * ((fConst0 * (0 - fConst188)) - 1.07962472888157e-18)));
	fConst190 = ((fConst0 * (0 - fConst186)) - 1.7726152051889e-19);
	fConst191 = (1.03835001474515e-18 + (fConst0 * fConst188));
	fConst192 = (2.58786087554998e-23 + fConst97);
	fConst193 = ((fConst32 * (2.74267661091955e-19 + (fConst0 * fConst192))) - 2.10130597925635e-12);
	fConst194 = (1.70304049756473e-11 + (fConst0 * (2.57982226974463e-12 + (fConst32 * ((fConst0 * (0 - fConst192)) - 2.80090348061942e-19)))));
	fConst195 = (1.99650385044988e-15 * fConst0);
	fConst196 = (1.03204320289903e-13 * fConst0);
	fConst197 = (7.25389435258211e-11 - fConst196);
	fConst198 = (2.56381641997662e-22 * fConst0);
	fConst199 = (fConst32 * (fConst198 - 3.49028644446817e-19));
	fConst200 = (6.51209370674062e-22 * fConst0);
	fConst201 = ((fConst32 * (2.17798709185122e-18 - fConst200)) - 1.3947260505192e-12);
	fConst202 = (2.91342774997343e-19 - fConst198);
	fConst203 = (fConst200 - 2.03146498344956e-18);
	fConst204 = (3.46387963124501e-19 * fConst32);
	fConst205 = (3.45219426688794e-12 - fConst204);
	fConst206 = (fConst0 * (fConst204 - 4.29069829290055e-12));
	fConst207 = (3.29722470571914e-09 + fConst206);
	fConst208 = ((1.62802342668515e-20 * fConst32) - 3.06839731114223e-14);
	fConst209 = (2.70739013949531e-23 * fConst0);
	fConst210 = ((fConst32 * (7.12125648812706e-20 - fConst209)) - 1.22735892445689e-13);
	fConst211 = (fConst209 - 6.51209370674062e-20);
	fConst212 = (1.44010113802942e-20 * fConst32);
	fConst213 = (3.03793095486139e-13 - fConst212);
	fConst214 = (fConst0 * (fConst212 - 3.20430627573221e-13));
	fConst215 = (2.90155774103284e-10 + fConst214);
	fConst216 = (6.76847534873828e-22 * faustpower<3>(fConst0));
	fConst217 = (1.08007585352207e-18 * fConst0);
	fConst218 = (fConst0 * (9.9825192522494e-16 - fConst217));
	fConst219 = (fConst32 * (fConst31 - 2.81507042913433e-18));
	fConst220 = (2.59790972343376e-17 * fConst0);
	fConst221 = (9.06736794072764e-11 + (fConst0 * (5.16021601449516e-14 - fConst220)));
	fConst222 = (fConst0 * (4.80715578745616e-18 - fConst36));
	fConst223 = (1.53419865557112e-14 + (fConst0 * (fConst38 - 1.35290100571623e-16)));
	fConst224 = (3.20477052497078e-22 * fConst0);
	fConst225 = (fConst0 * (2.18507081248007e-16 + (fConst0 * (0 - (1.74514322223409e-19 + fConst224)))));
	fConst226 = (8.14011713342577e-22 * fConst0);
	fConst227 = (6.97363025259598e-13 + (fConst0 * ((fConst0 * (1.08899354592561e-18 + fConst226)) - 5.49292399014911e-15)));
	fConst228 = (fConst0 * (1.45671387498672e-19 + fConst224));
	fConst229 = (4.4026852328056e-15 + (fConst0 * (0 - (1.01573249172478e-18 + fConst226))));
	fConst230 = ((fConst0 * (3.45931627225229e-15 - fConst46)) - 1.72609713344397e-12);
	fConst231 = (4.12153088214893e-09 + (fConst0 * (2.14534914645028e-12 + (fConst0 * (fConst46 - 3.69312814736133e-15)))));
	fConst232 = (fConst0 * (1.92286231498247e-17 - fConst49));
	fConst233 = (3.38423767436914e-23 * fConst0);
	fConst234 = (6.13679462228446e-14 + (fConst0 * ((fConst0 * (3.56062824406353e-20 + fConst233)) - 4.10895220729679e-16)));
	fConst235 = (3.87436300486893e-16 + (fConst0 * (0 - (3.25604685337031e-20 + fConst233))));
	fConst236 = ((fConst0 * (1.0391638893735e-16 - fConst54)) - 1.51896547743069e-13);
	fConst237 = (3.62694717629105e-10 + (fConst0 * (1.60215313786611e-13 + (fConst0 * (fConst54 - 1.13637071619049e-16)))));
	fConst238 = (1.35369506974766e-21 * fConst32);
	fConst239 = (1.28190820998831e-20 * fConst32);
	fConst240 = (6.13679462228446e-14 - (3.25604685337031e-20 * fConst32));
	fConst241 = (6.92775926249002e-19 * fConst32);
	fConst242 = (8.5813965858011e-12 - fConst241);
	fConst243 = (6.98057288893634e-19 * fConst32);
	fConst244 = (2.78945210103839e-12 - (4.35597418370245e-18 * fConst32));
	fConst245 = (fConst241 - 6.90438853377588e-12);
	fConst246 = (2.88020227605884e-20 * fConst32);
	fConst247 = (6.40861255146442e-13 - fConst246);
	fConst248 = (5.12763283995324e-20 * fConst32);
	fConst249 = (2.45471784891379e-13 - (1.42425129762541e-19 * fConst32));
	fConst250 = (fConst246 - 6.07586190972277e-13);
	fConst251 = (fConst0 * (9.9825192522494e-16 + fConst217));
	fConst252 = (fConst32 * (2.81507042913433e-18 + fConst31));
	fConst253 = ((fConst0 * (5.16021601449516e-14 + fConst220)) - 9.06736794072764e-11);
	fConst254 = (fConst0 * (0 - (4.80715578745616e-18 + fConst36)));
	fConst255 = (1.53419865557112e-14 + (fConst0 * (1.35290100571623e-16 + fConst38)));
	fConst256 = (fConst0 * ((fConst0 * (fConst224 - 1.74514322223409e-19)) - 2.18507081248007e-16));
	fConst257 = (6.97363025259598e-13 + (fConst0 * (5.49292399014911e-15 + (fConst0 * (1.08899354592561e-18 - fConst226)))));
	fConst258 = (fConst0 * (1.45671387498672e-19 - fConst224));
	fConst259 = ((fConst0 * (fConst226 - 1.01573249172478e-18)) - 4.4026852328056e-15);
	fConst260 = ((fConst0 * (0 - (3.45931627225229e-15 + fConst46))) - 1.72609713344397e-12);
	fConst261 = ((fConst0 * (2.14534914645028e-12 + (fConst0 * (3.69312814736133e-15 + fConst46)))) - 4.12153088214893e-09);
	fConst262 = (fConst0 * (0 - (1.92286231498247e-17 + fConst49)));
	fConst263 = (6.13679462228446e-14 + (fConst0 * (4.10895220729679e-16 + (fConst0 * (3.56062824406353e-20 - fConst233)))));
	fConst264 = ((fConst0 * (fConst233 - 3.25604685337031e-20)) - 3.87436300486893e-16);
	fConst265 = ((fConst0 * (0 - (1.0391638893735e-16 + fConst54))) - 1.51896547743069e-13);
	fConst266 = ((fConst0 * (1.60215313786611e-13 + (fConst0 * (1.13637071619049e-16 + fConst54)))) - 3.62694717629105e-10);
	fConst267 = (0 - (7.25389435258211e-11 + fConst196));
	fConst268 = (fConst32 * (0 - (3.49028644446817e-19 + fConst198)));
	fConst269 = ((fConst32 * (2.17798709185122e-18 + fConst200)) - 1.3947260505192e-12);
	fConst270 = (2.91342774997343e-19 + fConst198);
	fConst271 = (0 - (2.03146498344956e-18 + fConst200));
	fConst272 = (fConst206 - 3.29722470571914e-09);
	fConst273 = ((fConst32 * (7.12125648812706e-20 + fConst209)) - 1.22735892445689e-13);
	fConst274 = (0 - (6.51209370674062e-20 + fConst209));
	fConst275 = (fConst214 - 2.90155774103284e-10);
	fConst276 = (fConst0 * (0 - (9.9825192522494e-16 + fConst29)));
	fConst277 = (fConst32 * (0 - (9.38356809711443e-19 + fConst31)));
	fConst278 = ((fConst0 * (0 - (5.16021601449516e-14 + fConst34))) - 1.81347358814553e-11);
	fConst279 = (fConst0 * (1.60238526248539e-18 + fConst36));
	fConst280 = ((fConst0 * (0 - (4.50967001905409e-17 + fConst38))) - 1.53419865557112e-14);
	fConst281 = (fConst0 * (7.28356937493358e-17 + (fConst0 * (1.74514322223409e-19 + fConst40))));
	fConst282 = ((fConst0 * ((fConst0 * (0 - (1.08899354592561e-18 + fConst42))) - 1.83097466338304e-15)) - 6.97363025259598e-13);
	fConst283 = (fConst0 * (0 - (1.45671387498672e-19 + fConst40)));
	fConst284 = (1.46756174426853e-15 + (fConst0 * (1.01573249172478e-18 + fConst42)));
	fConst285 = (1.72609713344397e-12 + (fConst0 * (1.1531054240841e-15 + fConst46)));
	fConst286 = ((fConst0 * ((fConst0 * (0 - (1.23104271578711e-15 + fConst46))) - 2.14534914645028e-12)) - 8.24306176429785e-10);
	fConst287 = (fConst0 * (6.40954104994155e-18 + fConst49));
	fConst288 = ((fConst0 * ((fConst0 * (0 - (3.56062824406353e-20 + fConst51))) - 1.3696507357656e-16)) - 6.13679462228446e-14);
	fConst289 = (1.29145433495631e-16 + (fConst0 * (3.25604685337031e-20 + fConst51)));
	fConst290 = (1.51896547743069e-13 + (fConst0 * (3.46387963124501e-17 + fConst54)));
	fConst291 = ((fConst0 * ((fConst0 * (0 - (3.78790238730163e-17 + fConst54))) - 1.60215313786611e-13)) - 7.25389435258211e-11);
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
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow1);
		fRec2[0] = ((0.993 * fRec2[1]) + fSlow2);
		double fTemp0 = (1.9880553404661e-11 + ((fRec2[0] * (2.25915379598421e-10 + (fConst0 * (((fRec1[0] * (fConst28 + (fConst0 * ((fRec1[0] * (fConst27 + (fConst0 * (fRec0[0] * (fConst25 + (fConst24 * fRec0[0])))))) + (fRec0[0] * (fConst23 + (fConst22 * fRec0[0]))))))) + (fRec0[0] * (fConst19 + (fConst18 * fRec0[0])))) + fConst16)))) + (fConst0 * (((fRec1[0] * (fConst14 + (fConst0 * ((fRec1[0] * (fConst13 + (fConst0 * (fRec0[0] * (fConst11 + (fConst10 * fRec0[0])))))) + (fRec0[0] * (fConst9 + (fConst8 * fRec0[0]))))))) + (fRec0[0] * (fConst5 + (fConst4 * fRec0[0])))) + fConst2))));
		double fTemp1 = (fConst0 * (0 - (1.28190820998831e-20 * fRec0[0])));
		fRec3[0] = ((double)input0[i] - (((((((fRec3[1] * (1.19283320427966e-10 + ((fRec2[0] * (1.35549227759052e-09 + (fConst0 * (((fRec1[0] * (fConst194 + (fConst0 * ((fRec1[0] * (fConst193 + (fConst32 * (fRec0[0] * (fConst191 + (fConst190 * fRec0[0])))))) + (fRec0[0] * (fConst189 + (fConst187 * fRec0[0]))))))) + (fRec0[0] * (fConst185 + (fConst184 * fRec0[0])))) + fConst183)))) + (fConst0 * (((fRec1[0] * (fConst182 + (fConst0 * ((fRec1[0] * (fConst181 + (fConst32 * (fRec0[0] * (fConst179 + (fConst178 * fRec0[0])))))) + (fRec0[0] * (fConst177 + (fConst175 * fRec0[0]))))))) + (fRec0[0] * (fConst173 + (fConst172 * fRec0[0])))) + fConst171))))) + (fRec3[2] * (2.98208301069915e-10 + ((fRec2[0] * (3.38873069397631e-09 + (fConst0 * (((fRec1[0] * (fConst170 + (fConst0 * ((fRec1[0] * (fConst169 + (fConst0 * (fRec0[0] * (fConst168 + (fConst167 * fRec0[0])))))) + (fRec0[0] * (fConst166 + (fConst164 * fRec0[0]))))))) + (fRec0[0] * (fConst162 + (fConst161 * fRec0[0])))) + fConst160)))) + (fConst0 * (((fRec1[0] * (fConst159 + (fConst0 * ((fRec1[0] * (fConst158 + (fConst0 * (fRec0[0] * (fConst156 + (fConst155 * fRec0[0])))))) + (fRec0[0] * (fConst154 + (fConst152 * fRec0[0]))))))) + (fRec0[0] * (fConst150 + (fConst149 * fRec0[0])))) + fConst148)))))) + (fRec3[3] * (3.9761106809322e-10 + ((fRec2[0] * (4.51830759196841e-09 + (fConst32 * (fConst147 + ((fRec1[0] * (((fRec1[0] * (fConst146 + (fConst32 * (fRec0[0] * (fConst145 + (fConst144 * fRec0[0])))))) + (fRec0[0] * (fConst143 + (fConst142 * fRec0[0])))) + fConst140)) + (fRec0[0] * (fConst138 + (fConst137 * fRec0[0])))))))) + (fConst32 * (fConst136 + ((fRec1[0] * (((fRec1[0] * (fConst135 + (fConst32 * (fRec0[0] * (fConst134 + (fConst133 * fRec0[0])))))) + (fRec0[0] * (fConst132 + (fConst131 * fRec0[0])))) + fConst129)) + (fRec0[0] * (fConst127 + (fConst126 * fRec0[0])))))))))) + (fRec3[4] * (2.98208301069915e-10 + ((fRec2[0] * (3.38873069397631e-09 + (fConst0 * (((fRec1[0] * (fConst125 + (fConst0 * ((fRec1[0] * (fConst124 + (fConst0 * (fRec0[0] * (fConst122 + (fConst121 * fRec0[0])))))) + (fRec0[0] * (fConst120 + (fConst119 * fRec0[0]))))))) + (fRec0[0] * (fConst117 + (fConst116 * fRec0[0])))) + fConst114)))) + (fConst0 * (((fRec1[0] * (fConst112 + (fConst0 * ((fRec1[0] * (fConst111 + (fConst0 * (fRec0[0] * (fConst109 + (fConst108 * fRec0[0])))))) + (fRec0[0] * (fConst107 + (fConst106 * fRec0[0]))))))) + (fRec0[0] * (fConst104 + (fConst103 * fRec0[0])))) + fConst101)))))) + (fRec3[5] * (1.19283320427966e-10 + ((fRec2[0] * (1.35549227759052e-09 + (fConst0 * (((fRec1[0] * (fConst99 + (fConst0 * ((fRec1[0] * (fConst98 + (fConst32 * (fRec0[0] * (fConst96 + (fConst95 * fRec0[0])))))) + (fRec0[0] * (fConst94 + (fConst93 * fRec0[0]))))))) + (fRec0[0] * (fConst91 + (fConst90 * fRec0[0])))) + fConst88)))) + (fConst0 * (((fRec1[0] * (fConst86 + (fConst0 * ((fRec1[0] * (fConst85 + (fConst32 * (fRec0[0] * (fConst83 + (fConst82 * fRec0[0])))))) + (fRec0[0] * (fConst81 + (fConst80 * fRec0[0]))))))) + (fRec0[0] * (fConst79 + (fConst78 * fRec0[0])))) + fConst76)))))) + (fRec3[6] * (1.9880553404661e-11 + ((fRec2[0] * (2.25915379598421e-10 + (fConst0 * (((fRec1[0] * (fConst74 + (fConst0 * ((fRec1[0] * (fConst73 + (fConst0 * (fRec0[0] * (fConst72 + (fConst71 * fRec0[0])))))) + (fRec0[0] * (fConst70 + (fConst69 * fRec0[0]))))))) + (fRec0[0] * (fConst68 + (fConst67 * fRec0[0])))) + fConst66)))) + (fConst0 * (((fRec1[0] * (fConst65 + (fConst0 * ((fRec1[0] * (fConst64 + (fConst0 * (fRec0[0] * (fConst63 + (fConst62 * fRec0[0])))))) + (fRec0[0] * (fConst61 + (fConst60 * fRec0[0]))))))) + (fRec0[0] * (fConst59 + (fConst58 * fRec0[0])))) + fConst57)))))) / fTemp0));
		double fTemp2 = (fConst0 * (fRec0[0] * (fConst208 + (fConst32 * (0 - (6.40954104994155e-21 * fRec0[0]))))));
		double fTemp3 = (2.56381641997662e-20 * fRec0[0]);
		double fTemp4 = (fConst32 * (0 - fTemp3));
		double fTemp5 = (fConst216 * fRec0[0]);
		double fTemp6 = (fConst49 * fRec0[0]);
		output0[i] = (FAUSTFLOAT)(fConst0 * ((((((((fRec3[0] * ((((fRec1[0] * (fConst291 + (fConst0 * ((fRec1[0] * (fConst290 + (fConst0 * (fRec0[0] * (fConst289 + fTemp1))))) + (fRec0[0] * (fConst288 + (fConst287 * fRec0[0]))))))) + (fRec2[0] * (((fRec1[0] * (fConst286 + (fConst0 * ((fRec1[0] * (fConst285 + (fConst0 * (fRec0[0] * (fConst284 + (fConst283 * fRec0[0])))))) + (fRec0[0] * (fConst282 + (fConst281 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst280 + (fConst279 * fRec0[0]))))) + fConst278))) + (fConst277 * fRec0[0])) + fConst276)) + (fRec3[1] * ((((fRec1[0] * (fConst275 + (fConst0 * ((fRec1[0] * (fConst213 + (fConst32 * (fRec0[0] * (fTemp3 + fConst274))))) + (fRec0[0] * (fConst273 + fTemp4)))))) + (fRec2[0] * (((fRec1[0] * (fConst272 + (fConst0 * ((fRec1[0] * (fConst205 + (fConst32 * (fRec0[0] * (fConst271 + (fConst270 * fRec0[0])))))) + (fRec0[0] * (fConst269 + (fConst268 * fRec0[0]))))))) + fTemp2) + fConst267))) + fTemp5) - fConst195))) + (fRec3[2] * ((((fRec1[0] * (fConst266 + (fConst0 * ((fRec1[0] * (fConst265 + (fConst0 * (fRec0[0] * (fConst264 + fTemp6))))) + (fRec0[0] * (fConst263 + (fConst262 * fRec0[0]))))))) + (fRec2[0] * (((fRec1[0] * (fConst261 + (fConst0 * ((fRec1[0] * (fConst260 + (fConst0 * (fRec0[0] * (fConst259 + (fConst258 * fRec0[0])))))) + (fRec0[0] * (fConst257 + (fConst256 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst255 + (fConst254 * fRec0[0]))))) + fConst253))) + (fConst252 * fRec0[0])) + fConst251))) + (fConst0 * (fRec3[3] * (3.99300770089976e-15 + (((fRec1[0] * (((fRec1[0] * (fConst250 + (fConst32 * (fRec0[0] * (1.30241874134812e-19 + (0 - (5.12763283995324e-20 * fRec0[0]))))))) + (fRec0[0] * (fConst249 + (fConst248 * fRec0[0])))) + fConst247)) + (fRec2[0] * (2.06408640579806e-13 + ((fRec1[0] * (((fRec1[0] * (fConst245 + (fConst32 * (fRec0[0] * (4.06292996689912e-18 + (0 - (5.82685549994687e-19 * fRec0[0]))))))) + (fRec0[0] * (fConst244 + (fConst243 * fRec0[0])))) + fConst242)) + (fRec0[0] * (fConst240 + (fConst239 * fRec0[0]))))))) - (fConst238 * fRec0[0])))))) + (fRec3[4] * ((((fRec1[0] * (fConst237 + (fConst0 * ((fRec1[0] * (fConst236 + (fConst0 * (fRec0[0] * (fTemp6 + fConst235))))) + (fRec0[0] * (fConst234 + (fConst232 * fRec0[0]))))))) + (fRec2[0] * (((fRec1[0] * (fConst231 + (fConst0 * ((fRec1[0] * (fConst230 + (fConst0 * (fRec0[0] * (fConst229 + (fConst228 * fRec0[0])))))) + (fRec0[0] * (fConst227 + (fConst225 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst223 + (fConst222 * fRec0[0]))))) + fConst221))) + (fConst219 * fRec0[0])) + fConst218))) + (fRec3[5] * ((fTemp5 + ((fRec1[0] * (fConst215 + (fConst0 * ((fRec1[0] * (fConst213 + (fConst32 * (fRec0[0] * (fConst211 + fTemp3))))) + (fRec0[0] * (fTemp4 + fConst210)))))) + (fRec2[0] * ((fTemp2 + (fRec1[0] * (fConst207 + (fConst0 * ((fRec1[0] * (fConst205 + (fConst32 * (fRec0[0] * (fConst203 + (fConst202 * fRec0[0])))))) + (fRec0[0] * (fConst201 + (fConst199 * fRec0[0])))))))) + fConst197)))) - fConst195))) + (fRec3[6] * ((((fRec1[0] * (fConst56 + (fConst0 * ((fRec1[0] * (fConst55 + (fConst0 * (fRec0[0] * (fTemp1 + fConst53))))) + (fRec0[0] * (fConst52 + (fConst50 * fRec0[0]))))))) + (fRec2[0] * (((fRec1[0] * (fConst48 + (fConst0 * ((fRec1[0] * (fConst47 + (fConst0 * (fRec0[0] * (fConst45 + (fConst44 * fRec0[0])))))) + (fRec0[0] * (fConst43 + (fConst41 * fRec0[0]))))))) + (fConst0 * (fRec0[0] * (fConst39 + (fConst37 * fRec0[0]))))) + fConst35))) + (fConst33 * fRec0[0])) + fConst30))) / fTemp0));
		// post processing
		for (int i=6; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
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
	case MIDDLE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
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
   MIDDLE, 
   TREBLE, 
} PortIndex;
*/

} // end namespace ampegsvtp3
