#ifndef TASMRECOVER_DREAMGEN_STUBS_H__
#define TASMRECOVER_DREAMGEN_STUBS_H__

#	include "runtime.h"

namespace dreamgen {

	void __dispatch_call(Context &context, unsigned addr);
	void __start(Context &context);

	void randomnumber(Context &context);
	void quickquit(Context &context);
	void quickquit2(Context &context);
	void seecommandtail(Context &context);
	void multiget(Context &context);
	void multiput(Context &context);
	void multidump(Context &context);
	void frameoutnm(Context &context);
	void cls(Context &context);
	void printundermon(Context &context);
	void worktoscreen(Context &context);
	void keyboardread(Context &context);
	void resetkeyboard(Context &context);
	void setkeyboardint(Context &context);
	void readfromfile(Context &context);
	void closefile(Context &context);
	void openforsave(Context &context);
	void openfilenocheck(Context &context);
	void openfile(Context &context);
	void createfile(Context &context);
	void dontloadseg(Context &context);
	void mousecall(Context &context);
	void setmouse(Context &context);
	void gettime(Context &context);
	void allocatemem(Context &context);
	void deallocatemem(Context &context);
	void removeemm(Context &context);
	void setupemm(Context &context);
	void pitinterupt(Context &context);
	void getridofpit(Context &context);
	void setuppit(Context &context);
	void startdmablock(Context &context);
	void dmaend(Context &context);
	void restoreems(Context &context);
	void saveems(Context &context);
	void bothchannels(Context &context);
	void channel1only(Context &context);
	void channel0only(Context &context);
	void out22c(Context &context);
	void soundend(Context &context);
	void interupttest(Context &context);
	void disablesoundint(Context &context);
	void enablesoundint(Context &context);
	void checksoundint(Context &context);
	void setsoundoff(Context &context);
	void soundstartup(Context &context);
	void loadsecondsample(Context &context);
	void loadsample(Context &context);
	void loadspeech(Context &context);
	void saveseg(Context &context);
	void loadseg(Context &context);
	void savefileread(Context &context);
	void savefilewrite(Context &context);
	void error(Context &context);
	void generalerror(Context &context);
	void dosreturn(Context &context);
	void set16colpalette(Context &context);
	void mode640x480(Context &context);
	void showgroup(Context &context);
	void fadedos(Context &context);
	void doshake(Context &context);
	void vsync(Context &context);
	void setmode(Context &context);
	void readoneblock(Context &context);
	void showpcx(Context &context);

	const static uint16 kStartvars = 0;
	const static uint16 kProgresspoints = 1;
	const static uint16 kWatchon = 2;
	const static uint16 kShadeson = 3;
	const static uint16 kSecondcount = 4;
	const static uint16 kMinutecount = 5;
	const static uint16 kHourcount = 6;
	const static uint16 kZoomon = 7;
	const static uint16 kLocation = 8;
	const static uint16 kExpos = 9;
	const static uint16 kExframepos = 10;
	const static uint16 kExtextpos = 12;
	const static uint16 kCard1money = 14;
	const static uint16 kListpos = 16;
	const static uint16 kRyanpage = 18;
	const static uint16 kWatchingtime = 19;
	const static uint16 kReeltowatch = 21;
	const static uint16 kEndwatchreel = 23;
	const static uint16 kSpeedcount = 25;
	const static uint16 kWatchspeed = 26;
	const static uint16 kReeltohold = 27;
	const static uint16 kEndofholdreel = 29;
	const static uint16 kWatchmode = 31;
	const static uint16 kDestafterhold = 32;
	const static uint16 kNewsitem = 33;
	const static uint16 kLiftflag = 34;
	const static uint16 kLiftpath = 35;
	const static uint16 kLockstatus = 36;
	const static uint16 kDoorpath = 37;
	const static uint16 kCounttoopen = 38;
	const static uint16 kCounttoclose = 39;
	const static uint16 kRockstardead = 40;
	const static uint16 kGeneraldead = 41;
	const static uint16 kSartaindead = 42;
	const static uint16 kAidedead = 43;
	const static uint16 kBeenmugged = 44;
	const static uint16 kGunpassflag = 45;
	const static uint16 kCanmovealtar = 46;
	const static uint16 kTalkedtoattendant = 47;
	const static uint16 kTalkedtosparky = 48;
	const static uint16 kTalkedtoboss = 49;
	const static uint16 kTalkedtorecep = 50;
	const static uint16 kCardpassflag = 51;
	const static uint16 kMadmanflag = 52;
	const static uint16 kKeeperflag = 53;
	const static uint16 kLasttrigger = 54;
	const static uint16 kMandead = 55;
	const static uint16 kSeed = 56;
	const static uint16 kNeedtotravel = 59;
	const static uint16 kThroughdoor = 60;
	const static uint16 kNewobs = 61;
	const static uint16 kRyanon = 62;
	const static uint16 kCombatcount = 63;
	const static uint16 kLastweapon = 64;
	const static uint16 kDreamnumber = 65;
	const static uint16 kRoomafterdream = 66;
	const static uint16 kShakecounter = 67;
	const static uint16 kSpeechcount = 68;
	const static uint16 kCharshift = 69;
	const static uint16 kKerning = 71;
	const static uint16 kBrightness = 72;
	const static uint16 kRoomloaded = 73;
	const static uint16 kDidzoom = 74;
	const static uint16 kLinespacing = 75;
	const static uint16 kTextaddressx = 77;
	const static uint16 kTextaddressy = 79;
	const static uint16 kTextlen = 81;
	const static uint16 kLastxpos = 82;
	const static uint16 kIcontop = 84;
	const static uint16 kIconleft = 86;
	const static uint16 kItemframe = 88;
	const static uint16 kItemtotran = 89;
	const static uint16 kRoomad = 90;
	const static uint16 kOldsubject = 92;
	const static uint16 kWithobject = 94;
	const static uint16 kWithtype = 95;
	const static uint16 kLookcounter = 96;
	const static uint16 kCommand = 98;
	const static uint16 kCommandtype = 99;
	const static uint16 kOldcommandtype = 100;
	const static uint16 kObjecttype = 101;
	const static uint16 kGetback = 102;
	const static uint16 kInvopen = 103;
	const static uint16 kMainmode = 104;
	const static uint16 kPickup = 105;
	const static uint16 kLastinvpos = 106;
	const static uint16 kExamagain = 107;
	const static uint16 kNewtextline = 108;
	const static uint16 kOpenedob = 109;
	const static uint16 kOpenedtype = 110;
	const static uint16 kOldmapadx = 111;
	const static uint16 kOldmapady = 113;
	const static uint16 kMapadx = 115;
	const static uint16 kMapady = 117;
	const static uint16 kMapoffsetx = 119;
	const static uint16 kMapoffsety = 121;
	const static uint16 kMapxstart = 123;
	const static uint16 kMapystart = 125;
	const static uint16 kMapxsize = 127;
	const static uint16 kMapysize = 128;
	const static uint16 kHavedoneobs = 129;
	const static uint16 kManisoffscreen = 130;
	const static uint16 kRainspace = 131;
	const static uint16 kFacing = 132;
	const static uint16 kLeavedirection = 133;
	const static uint16 kTurntoface = 134;
	const static uint16 kTurndirection = 135;
	const static uint16 kMaintimer = 136;
	const static uint16 kIntrocount = 138;
	const static uint16 kArrowad = 139;
	const static uint16 kCurrentkey = 141;
	const static uint16 kOldkey = 142;
	const static uint16 kUseddirection = 143;
	const static uint16 kCurrentkey2 = 144;
	const static uint16 kTimercount = 145;
	const static uint16 kOldtimercount = 146;
	const static uint16 kMapx = 147;
	const static uint16 kMapy = 148;
	const static uint16 kNewscreen = 149;
	const static uint16 kRyanx = 150;
	const static uint16 kRyany = 151;
	const static uint16 kLastflag = 152;
	const static uint16 kLastflagex = 153;
	const static uint16 kFlagx = 154;
	const static uint16 kFlagy = 155;
	const static uint16 kCurrentex = 156;
	const static uint16 kCurrentfree = 157;
	const static uint16 kCurrentframe = 158;
	const static uint16 kFramesad = 160;
	const static uint16 kDataad = 162;
	const static uint16 kFrsegment = 164;
	const static uint16 kObjectx = 166;
	const static uint16 kObjecty = 168;
	const static uint16 kOffsetx = 170;
	const static uint16 kOffsety = 172;
	const static uint16 kSavesize = 174;
	const static uint16 kSavesource = 176;
	const static uint16 kSavex = 178;
	const static uint16 kSavey = 179;
	const static uint16 kCurrentob = 180;
	const static uint16 kPriority = 181;
	const static uint16 kDestpos = 182;
	const static uint16 kReallocation = 183;
	const static uint16 kRoomnum = 184;
	const static uint16 kNowinnewroom = 185;
	const static uint16 kResetmanxy = 186;
	const static uint16 kNewlocation = 187;
	const static uint16 kAutolocation = 188;
	const static uint16 kMustload = 189;
	const static uint16 kAnswered = 190;
	const static uint16 kSaidno = 191;
	const static uint16 kDoorcheck1 = 192;
	const static uint16 kDoorcheck2 = 193;
	const static uint16 kDoorcheck3 = 194;
	const static uint16 kDoorcheck4 = 195;
	const static uint16 kMousex = 196;
	const static uint16 kMousey = 198;
	const static uint16 kMousebutton = 200;
	const static uint16 kMousebutton1 = 202;
	const static uint16 kMousebutton2 = 204;
	const static uint16 kMousebutton3 = 206;
	const static uint16 kMousebutton4 = 208;
	const static uint16 kOldbutton = 210;
	const static uint16 kOldx = 212;
	const static uint16 kOldy = 214;
	const static uint16 kLastbutton = 216;
	const static uint16 kOldpointerx = 218;
	const static uint16 kOldpointery = 220;
	const static uint16 kDelherex = 222;
	const static uint16 kDelherey = 224;
	const static uint16 kPointerxs = 226;
	const static uint16 kPointerys = 227;
	const static uint16 kDelxs = 228;
	const static uint16 kDelys = 229;
	const static uint16 kPointerframe = 230;
	const static uint16 kPointerpower = 231;
	const static uint16 kAuxpointerframe = 232;
	const static uint16 kPointermode = 233;
	const static uint16 kPointerspeed = 234;
	const static uint16 kPointercount = 235;
	const static uint16 kInmaparea = 236;
	const static uint16 kReelpointer = 237;
	const static uint16 kSlotdata = 239;
	const static uint16 kThisslot = 240;
	const static uint16 kSlotflags = 241;
	const static uint16 kTakeoff = 242;
	const static uint16 kTalkmode = 244;
	const static uint16 kTalkpos = 245;
	const static uint16 kCharacter = 246;
	const static uint16 kPersondata = 247;
	const static uint16 kTalknum = 249;
	const static uint16 kNumberinroom = 250;
	const static uint16 kCurrentcel = 251;
	const static uint16 kOldselection = 252;
	const static uint16 kStopwalking = 253;
	const static uint16 kMouseon = 254;
	const static uint16 kPlayed = 255;
	const static uint16 kTimer1 = 257;
	const static uint16 kTimer2 = 258;
	const static uint16 kTimer3 = 259;
	const static uint16 kWholetimer = 260;
	const static uint16 kTimer1to = 262;
	const static uint16 kTimer2to = 263;
	const static uint16 kTimer3to = 264;
	const static uint16 kWatchdump = 265;
	const static uint16 kCurrentset = 266;
	const static uint16 kLogonum = 268;
	const static uint16 kOldlogonum = 269;
	const static uint16 kNewlogonum = 270;
	const static uint16 kNetseg = 271;
	const static uint16 kNetpoint = 273;
	const static uint16 kKeynum = 275;
	const static uint16 kCursorstate = 276;
	const static uint16 kPressed = 277;
	const static uint16 kPresspointer = 278;
	const static uint16 kGraphicpress = 280;
	const static uint16 kPresscount = 281;
	const static uint16 kKeypadax = 282;
	const static uint16 kKeypadcx = 284;
	const static uint16 kLightcount = 286;
	const static uint16 kFolderpage = 287;
	const static uint16 kDiarypage = 288;
	const static uint16 kMenucount = 289;
	const static uint16 kSymboltopx = 290;
	const static uint16 kSymboltopnum = 291;
	const static uint16 kSymboltopdir = 292;
	const static uint16 kSymbolbotx = 293;
	const static uint16 kSymbolbotnum = 294;
	const static uint16 kSymbolbotdir = 295;
	const static uint16 kSymboltolight = 296;
	const static uint16 kSymbol1 = 297;
	const static uint16 kSymbol2 = 298;
	const static uint16 kSymbol3 = 299;
	const static uint16 kSymbolnum = 300;
	const static uint16 kDumpx = 301;
	const static uint16 kDumpy = 303;
	const static uint16 kWalkandexam = 305;
	const static uint16 kWalkexamtype = 306;
	const static uint16 kWalkexamnum = 307;
	const static uint16 kCursloc = 308;
	const static uint16 kCurslocx = 310;
	const static uint16 kCurslocy = 312;
	const static uint16 kCurpos = 314;
	const static uint16 kMonadx = 316;
	const static uint16 kMonady = 318;
	const static uint16 kGotfrom = 320;
	const static uint16 kMonsource = 322;
	const static uint16 kNumtodo = 324;
	const static uint16 kTimecount = 326;
	const static uint16 kCounttotimed = 328;
	const static uint16 kTimedseg = 330;
	const static uint16 kTimedoffset = 332;
	const static uint16 kTimedy = 334;
	const static uint16 kTimedx = 335;
	const static uint16 kNeedtodumptimed = 336;
	const static uint16 kHandle = 337;
	const static uint16 kLoadingorsave = 339;
	const static uint16 kCurrentslot = 340;
	const static uint16 kCursorpos = 341;
	const static uint16 kColourpos = 342;
	const static uint16 kFadedirection = 343;
	const static uint16 kNumtofade = 344;
	const static uint16 kFadecount = 345;
	const static uint16 kAddtogreen = 346;
	const static uint16 kAddtored = 347;
	const static uint16 kAddtoblue = 348;
	const static uint16 kLastsoundreel = 349;
	const static uint16 kSoundbuffer = 351;
	const static uint16 kSoundbufferad = 353;
	const static uint16 kSoundbufferpage = 355;
	const static uint16 kSoundtimes = 356;
	const static uint16 kNeedsoundbuff = 357;
	const static uint16 kOldint9seg = 358;
	const static uint16 kOldint9add = 360;
	const static uint16 kOldint8seg = 362;
	const static uint16 kOldint8add = 364;
	const static uint16 kOldsoundintseg = 366;
	const static uint16 kOldsoundintadd = 368;
	const static uint16 kSoundbaseadd = 370;
	const static uint16 kDsp_status = 372;
	const static uint16 kDsp_write = 374;
	const static uint16 kDmaaddress = 376;
	const static uint16 kSoundint = 377;
	const static uint16 kSounddmachannel = 378;
	const static uint16 kSampleplaying = 379;
	const static uint16 kTestresult = 380;
	const static uint16 kCurrentirq = 381;
	const static uint16 kSpeechloaded = 382;
	const static uint16 kSpeechlength = 383;
	const static uint16 kVolume = 385;
	const static uint16 kVolumeto = 386;
	const static uint16 kVolumedirection = 387;
	const static uint16 kVolumecount = 388;
	const static uint16 kPlayblock = 389;
	const static uint16 kWongame = 390;
	const static uint16 kLasthardkey = 391;
	const static uint16 kBufferin = 392;
	const static uint16 kBufferout = 394;
	const static uint16 kExtras = 396;
	const static uint16 kWorkspace = 398;
	const static uint16 kMapstore = 400;
	const static uint16 kCharset1 = 402;
	const static uint16 kTempcharset = 404;
	const static uint16 kIcons1 = 406;
	const static uint16 kIcons2 = 408;
	const static uint16 kBuffers = 410;
	const static uint16 kMainsprites = 412;
	const static uint16 kBackdrop = 414;
	const static uint16 kMapdata = 416;
	const static uint16 kSounddata = 418;
	const static uint16 kSounddata2 = 420;
	const static uint16 kRecordspace = 422;
	const static uint16 kFreedat = 424;
	const static uint16 kSetdat = 426;
	const static uint16 kReel1 = 428;
	const static uint16 kReel2 = 430;
	const static uint16 kReel3 = 432;
	const static uint16 kRoomdesc = 434;
	const static uint16 kFreedesc = 436;
	const static uint16 kSetdesc = 438;
	const static uint16 kBlockdesc = 440;
	const static uint16 kSetframes = 442;
	const static uint16 kFreeframes = 444;
	const static uint16 kPeople = 446;
	const static uint16 kReels = 448;
	const static uint16 kCommandtext = 450;
	const static uint16 kPuzzletext = 452;
	const static uint16 kTraveltext = 454;
	const static uint16 kTempgraphics = 456;
	const static uint16 kTempgraphics2 = 458;
	const static uint16 kTempgraphics3 = 460;
	const static uint16 kTempsprites = 462;
	const static uint16 kTextfile1 = 464;
	const static uint16 kTextfile2 = 466;
	const static uint16 kTextfile3 = 468;
	const static uint16 kBlinkframe = 470;
	const static uint16 kBlinkcount = 471;
	const static uint16 kReasseschanges = 472;
	const static uint16 kPointerspath = 473;
	const static uint16 kManspath = 474;
	const static uint16 kPointerfirstpath = 475;
	const static uint16 kFinaldest = 476;
	const static uint16 kDestination = 477;
	const static uint16 kLinestartx = 478;
	const static uint16 kLinestarty = 480;
	const static uint16 kLineendx = 482;
	const static uint16 kLineendy = 484;
	const static uint16 kIncrement1 = 486;
	const static uint16 kIncrement2 = 488;
	const static uint16 kLineroutine = 490;
	const static uint16 kLinepointer = 491;
	const static uint16 kLinedirection = 492;
	const static uint16 kLinelength = 493;
	const static uint16 kLiftsoundcount = 494;
	const static uint16 kEmmhandle = 495;
	const static uint16 kEmmpageframe = 497;
	const static uint16 kEmmhardwarepage = 499;
	const static uint16 kCh0emmpage = 500;
	const static uint16 kCh0offset = 502;
	const static uint16 kCh0blockstocopy = 504;
	const static uint16 kCh0playing = 506;
	const static uint16 kCh0repeat = 507;
	const static uint16 kCh0oldemmpage = 508;
	const static uint16 kCh0oldoffset = 510;
	const static uint16 kCh0oldblockstocopy = 512;
	const static uint16 kCh1playing = 514;
	const static uint16 kCh1emmpage = 515;
	const static uint16 kCh1offset = 517;
	const static uint16 kCh1blockstocopy = 519;
	const static uint16 kCh1blocksplayed = 521;
	const static uint16 kSoundbufferwrite = 523;
	const static uint16 kSoundemmpage = 525;
	const static uint16 kSpeechemmpage = 527;
	const static uint16 kCurrentsample = 529;
	const static uint16 kRoomssample = 530;
	const static uint16 kGameerror = 531;
	const static uint16 kHowmuchalloc = 532;
	const static uint16 kReelroutines = 534;
	const static uint16 kReelcalls = 991;
	const static uint16 kRoombyroom = 1214;
	const static uint16 kR0 = 1326;
	const static uint16 kR1 = 1327;
	const static uint16 kR2 = 1331;
	const static uint16 kR6 = 1350;
	const static uint16 kR8 = 1357;
	const static uint16 kR9 = 1373;
	const static uint16 kR10 = 1380;
	const static uint16 kR11 = 1384;
	const static uint16 kR12 = 1388;
	const static uint16 kR13 = 1392;
	const static uint16 kR14 = 1405;
	const static uint16 kR20 = 1439;
	const static uint16 kR22 = 1461;
	const static uint16 kR23 = 1492;
	const static uint16 kR25 = 1505;
	const static uint16 kR26 = 1527;
	const static uint16 kR27 = 1549;
	const static uint16 kR28 = 1574;
	const static uint16 kR29 = 1593;
	const static uint16 kR45 = 1609;
	const static uint16 kR46 = 1616;
	const static uint16 kR47 = 1653;
	const static uint16 kR52 = 1666;
	const static uint16 kR53 = 1670;
	const static uint16 kR55 = 1677;
	const static uint16 kSpritename1 = 1819;
	const static uint16 kSpritename3 = 1832;
	const static uint16 kIdname = 1845;
	const static uint16 kCharacterset1 = 1857;
	const static uint16 kCharacterset2 = 1870;
	const static uint16 kCharacterset3 = 1883;
	const static uint16 kSamplename = 1896;
	const static uint16 kBasicsample = 1909;
	const static uint16 kIcongraphics0 = 1922;
	const static uint16 kIcongraphics1 = 1935;
	const static uint16 kExtragraphics1 = 1948;
	const static uint16 kIcongraphics8 = 1961;
	const static uint16 kMongraphicname = 1974;
	const static uint16 kMongraphics2 = 1987;
	const static uint16 kCityname = 2000;
	const static uint16 kTravelgraphic1 = 2013;
	const static uint16 kTravelgraphic2 = 2026;
	const static uint16 kDiarygraphic = 2039;
	const static uint16 kMonitorfile1 = 2052;
	const static uint16 kMonitorfile2 = 2065;
	const static uint16 kMonitorfile10 = 2078;
	const static uint16 kMonitorfile11 = 2091;
	const static uint16 kMonitorfile12 = 2104;
	const static uint16 kMonitorfile13 = 2117;
	const static uint16 kMonitorfile20 = 2130;
	const static uint16 kMonitorfile21 = 2143;
	const static uint16 kMonitorfile22 = 2156;
	const static uint16 kMonitorfile23 = 2169;
	const static uint16 kMonitorfile24 = 2182;
	const static uint16 kFoldertext = 2195;
	const static uint16 kDiarytext = 2208;
	const static uint16 kPuzzletextname = 2221;
	const static uint16 kTraveltextname = 2234;
	const static uint16 kIntrotextname = 2247;
	const static uint16 kEndtextname = 2260;
	const static uint16 kCommandtextname = 2273;
	const static uint16 kVolumetabname = 2286;
	const static uint16 kFoldergraphic1 = 2299;
	const static uint16 kFoldergraphic2 = 2312;
	const static uint16 kFoldergraphic3 = 2325;
	const static uint16 kSymbolgraphic = 2338;
	const static uint16 kGungraphic = 2351;
	const static uint16 kMonkface = 2364;
	const static uint16 kTitle0graphics = 2377;
	const static uint16 kTitle1graphics = 2390;
	const static uint16 kTitle2graphics = 2403;
	const static uint16 kTitle3graphics = 2416;
	const static uint16 kTitle4graphics = 2429;
	const static uint16 kTitle5graphics = 2442;
	const static uint16 kTitle6graphics = 2455;
	const static uint16 kTitle7graphics = 2468;
	const static uint16 kPalettescreen = 2481;
	const static uint16 kCurrentfile = 2970;
	const static uint16 kDmaaddresses = 5118;
	const static uint16 kFileheader = 6059;
	const static uint16 kFiledata = 6109;
	const static uint16 kExtradata = 6149;
	const static uint16 kRoomdata = 6155;
	const static uint16 kMadeuproomdat = 7947;
	const static uint16 kRoomscango = 7979;
	const static uint16 kRoompics = 7995;
	const static uint16 kOplist = 8010;
	const static uint16 kInputline = 8013;
	const static uint16 kLinedata = 8141;
	const static uint16 kPresslist = 8541;
	const static uint16 kSavenames = 8547;
	const static uint16 kSavefiles = 8666;
	const static uint16 kRecname = 8757;
	const static uint16 kStak = 8770;
	const static uint16 kBlocktextdat = (0);
	const static uint16 kPersonframes = (0);
	const static uint16 kDebuglevel1 = (0);
	const static uint16 kDebuglevel2 = (0);
	const static uint16 kPlayback = (0);
	const static uint16 kMap = (0);
	const static uint16 kSettextdat = (0);
	const static uint16 kSpanish = (0);
	const static uint16 kFramedata = (0);
	const static uint16 kRecording = (0);
	const static uint16 kFlags = (0);
	const static uint16 kGerman = (0);
	const static uint16 kTextunder = (0);
	const static uint16 kForeign = (0);
	const static uint16 kPathdata = (0);
	const static uint16 kDemo = (0);
	const static uint16 kExframedata = (0);
	const static uint16 kCd = (0);
	const static uint16 kIntextdat = (0);
	const static uint16 kFreetextdat = (0);
	const static uint16 kFrframedata = (0);
	const static uint16 kSettext = (0+(130*2));
	const static uint16 kOpeninvlist = (0+(180*10));
	const static uint16 kRyaninvlist = (0+(180*10)+32);
	const static uint16 kPointerback = (0+(180*10)+32+60);
	const static uint16 kMapflags = (0+(180*10)+32+60+(32*32));
	const static uint16 kStartpal = (0+(180*10)+32+60+(32*32)+(11*10*3));
	const static uint16 kEndpal = (0+(180*10)+32+60+(32*32)+(11*10*3)+768);
	const static uint16 kMaingamepal = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768);
	const static uint16 kSpritetable = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768);
	const static uint16 kSetlist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32));
	const static uint16 kFreelist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5));
	const static uint16 kExlist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5));
	const static uint16 kPeoplelist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5));
	const static uint16 kZoomspace = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5));
	const static uint16 kPrintedlist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40));
	const static uint16 kListofchanges = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80));
	const static uint16 kUndertimedtext = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80)+(250*4));
	const static uint16 kRainlist = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80)+(250*4)+(256*24));
	const static uint16 kInitialreelrouts = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80)+(250*4)+(256*24)+(6*64));
	const static uint16 kInitialvars = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80)+(250*4)+(256*24)+(6*64)+991-534);
	const static uint16 kLengthofbuffer = (0+(180*10)+32+60+(32*32)+(11*10*3)+768+768+768+(32*32)+(128*5)+(80*5)+(100*5)+(12*5)+(46*40)+(5*80)+(250*4)+(256*24)+(6*64)+991-534+68-0);
	const static uint16 kReellist = (0+(36*144));
	const static uint16 kIntext = (0+(38*2));
	const static uint16 kLengthofmap = (0+(66*60));
	const static uint16 kFreetext = (0+(82*2));
	const static uint16 kBlocktext = (0+(98*2));
	const static uint16 kBlocks = (0+192);
	const static uint16 kFrframes = (0+2080);
	const static uint16 kExframes = (0+2080);
	const static uint16 kFrames = (0+2080);
	const static uint16 kExdata = (0+2080+30000);
	const static uint16 kExtextdat = (0+2080+30000+(16*114));
	const static uint16 kExtext = (0+2080+30000+(16*114)+((114+2)*2));
	const static uint16 kLengthofextra = (0+2080+30000+(16*114)+((114+2)*2)+18000);
	const static uint16 kPersontxtdat = (0+24);
	const static uint16 kPersontext = (0+24+(1026*2));
	const static uint16 kInputport = (0x63);
	const static uint16 kUndertextsizey = (10);
	const static uint16 kNumexobjects = (114);
	const static uint16 kZoomy = (132);
	const static uint16 kFreedatlen = (16*80);
	const static uint16 kUndertextsizex = (180);
	const static uint16 kExtextlen = (18000);
	const static uint16 kLenofmapstore = (22*8*20*8);
	const static uint16 kUndertimedysize = (24);
	const static uint16 kNumchanges = (250);
	const static uint16 kExframeslen = (30000);
	const static uint16 kTablesize = (32);
	const static uint16 kScreenwidth = (320);
	const static uint16 kKeypadx = (36+112);
	const static uint16 kItempicsize = (44);
	const static uint16 kDiaryy = (48+12);
	const static uint16 kOpsy = (52);
	const static uint16 kSymboly = (56);
	const static uint16 kInventy = (58);
	const static uint16 kMenuy = (60);
	const static uint16 kOpsx = (60);
	const static uint16 kMaplength = (60);
	const static uint16 kHeaderlen = (6155-6059);
	const static uint16 kSymbolx = (64);
	const static uint16 kSetdatlen = (64*128);
	const static uint16 kMapwidth = (66);
	const static uint16 kTextstart = (66*2);
	const static uint16 kMaplen = (66*60);
	const static uint16 kDiaryx = (68+24);
	const static uint16 kLengthofvars = (68-0);
	const static uint16 kKeypady = (72);
	const static uint16 kZoomx = (8);
	const static uint16 kInventx = (80);
	const static uint16 kMenux = (80+40);
	const static uint16 kLenofreelrouts = (991-534);


}

#endif
