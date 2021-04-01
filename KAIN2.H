#ifndef KAIN2_MONOLITHIC_HEADER
#define KAIN2_MONOLITHIC_HEADER

/* Begin enums */

enum _G2Bool_Enum // Hashcode: 0xFDD7E4E7 (dec: -36182809)
{
	G2FALSE = 0,
};

enum DEBUG_LINE_TYPE // Hashcode: 0x03F31324 (dec: 66261796)
{
	DEBUG_LINE_TYPE_BIT = 0,
	DEBUG_LINE_TYPE_LONG = 1,
	DEBUG_LINE_TYPE_ACTION = 2,
	DEBUG_LINE_TYPE_ACTION_WITH_LINE = 3,
	DEBUG_LINE_TYPE_MENU = 4,
	DEBUG_LINE_TYPE_ENDLIST = 5,
	DEBUG_LINE_TYPE_FORMAT = 6,
	DEBUG_LINE_TYPE_INFO = 7,
};

enum option_ctrl_t // Hashcode: 0xEBCEABAC (dec: -338777172)
{
	option_ctrl_bogus = 0,
	option_ctrl_none = 1,
	option_ctrl_select = 2,
	option_ctrl_left = 3,
	option_ctrl_right = 4,
	option_ctrl_num_states = 5,
};

enum _G2AnimCallbackMsg_Enum // Hashcode: 0xA8F4A89C (dec: -1460361060)
{
	G2ANIM_MSG_DONE = 1,
	G2ANIM_MSG_LOOPPOINT = 2,
	G2ANIM_MSG_SECTION_INTERPDONE = 3,
	G2ANIM_MSG_SEGCTRLR_INTERPDONE = 4,
	G2ANIM_MSG_SWALARMSET = 5,
	G2ANIM_MSG_PLAYEFFECT = 6,
};

enum MATH3D_AXIS // Hashcode: 0x37FE6D4A (dec: 939421002)
{
	AXIS_X = 0,
	AXIS_Y = 1,
	AXIS_Z = 2,
	AXIS_NEG_X = 3,
	AXIS_NEG_Y = 4,
	AXIS_NEG_Z = 5,
};

enum MonsterAnim // Hashcode: 0x13BE1EAB (dec: 331226795)
{
	MONSTER_ANIM_HIT1 = 0,
	MONSTER_ANIM_HIT2 = 1,
	MONSTER_ANIM_WALK = 2,
	MONSTER_ANIM_RUN = 3,
	MONSTER_ANIM_GRABBED = 4,
	MONSTER_ANIM_STUNNED = 5,
	MONSTER_ANIM_JUMPFORWARD = 6,
	MONSTER_ANIM_JUMPBACK = 7,
	MONSTER_ANIM_JUMPLEFT = 8,
	MONSTER_ANIM_JUMPRIGHT = 9,
	MONSTER_ANIM_STANCE_HEALTHY = 10,
	MONSTER_ANIM_STANCE_VULNERABLE = 11,
	MONSTER_ANIM_STUNNED_RECOVERY = 12,
	MONSTER_ANIM_IMPALED = 13,
	MONSTER_ANIM_STRUGGLE = 14,
	MONSTER_ANIM_BREAKHOLD = 15,
	MONSTER_ANIM_THROWN = 16,
	MONSTER_ANIM_IMPACT = 17,
	MONSTER_ANIM_LANDONFEET = 18,
	MONSTER_ANIM_FALL = 19,
	MONSTER_ANIM_BREAKFALL = 20,
	MONSTER_ANIM_SPINLAND = 21,
	MONSTER_ANIM_IMPALEDEATH = 22,
	MONSTER_ANIM_GETUP = 23,
	MONSTER_ANIM_GENERALDEATH = 24,
	MONSTER_ANIM_MISSILEIMPALEDEATH = 25,
	MONSTER_ANIM_SURPRISED = 26,
	MONSTER_ANIM_AGONY = 27,
	MONSTER_ANIM_PUPATE = 28,
	MONSTER_ANIM_NOTICE = 29,
	MONSTER_ANIM_SOULSUCK = 30,
	MONSTER_ANIM_IMPALEHORZ = 31,
	MONSTER_ANIM_IMPALEVERT = 32,
	MONSTER_ANIM_SOULOUTGRND = 33,
	MONSTER_ANIM_SOULOUTHORZ = 34,
	MONSTER_ANIM_SOULOUTVERT = 35,
	MONSTER_ANIM_FALLOVER = 36,
	MONSTER_ANIM_EMBRACE = 37,
	MONSTER_ANIM_SHOVE = 38,
	MONSTER_ANIM_FLIPSWITCH = 39,
	MONSTER_ANIM_EVADELEFT = 40,
	MONSTER_ANIM_EVADERIGHT = 41,
	MONSTER_ANIM_ALARM = 42,
	MONSTER_ANIM_DEAF = 43,
	MONSTER_ANIM_BLIND = 44,
	MONSTER_ANIM_SUCKED = 45,
	MONSTER_NUM_ANIMS = 46,
};

enum MonsterState // Hashcode: 0xCAD17293 (dec: -892243309)
{
	MONSTER_STATE_BIRTH = 0,
	MONSTER_STATE_PURSUE = 1,
	MONSTER_STATE_IDLE = 2,
	MONSTER_STATE_MISSILEHIT = 3,
	MONSTER_STATE_FALL = 4,
	MONSTER_STATE_WANDER = 5,
	MONSTER_STATE_ATTACK = 6,
	MONSTER_STATE_IMPALEDEATH = 7,
	MONSTER_STATE_HIT = 8,
	MONSTER_STATE_STUNNED = 9,
	MONSTER_STATE_GRABBED = 10,
	MONSTER_STATE_THROWN = 11,
	MONSTER_STATE_IMPACT = 12,
	MONSTER_STATE_COMBAT = 13,
	MONSTER_STATE_BREAKHOLD = 14,
	MONSTER_STATE_LANDONFEET = 15,
	MONSTER_STATE_GENERALDEATH = 16,
	MONSTER_STATE_ENVIRONMENTDAMAGE = 17,
	MONSTER_STATE_LANDINWATER = 18,
	MONSTER_STATE_FLEE = 19,
	MONSTER_STATE_HIDE = 20,
	MONSTER_STATE_SURPRISEATTACK = 21,
	MONSTER_STATE_PARRY = 22,
	MONSTER_STATE_DEAD = 23,
	MONSTER_STATE_SURPRISED = 24,
	MONSTER_STATE_NOTICE = 25,
	MONSTER_STATE_PUPATE = 26,
	MONSTER_STATE_EMBRACE = 27,
	MONSTER_STATE_PROJECTILE = 28,
	MONSTER_STATE_TERRAINIMPALEDEATH = 29,
	MONSTER_STATE_PETRIFIED = 30,
	MONSTER_NUM_STATES = 31,
};

enum language_t // Hashcode: 0x2F13EDA4 (dec: 789835172)
{
	language_default = -1,
	language_english = 0,
	language_french = 1,
	language_german = 2,
	language_italian = 3,
	language_spanish = 4,
	language_num_states = 5,
};

enum localstr_t // Hashcode: 0xC51A2F36 (dec: -988139722)
{
	LOCALSTR_BOGUS = 0,
	LOCALSTR_format_card = 1,
	LOCALSTR_accessing_card = 2,
	LOCALSTR_back = 3,
	LOCALSTR_cancel = 4,
	LOCALSTR_choose_load_file = 5,
	LOCALSTR_choose_save_file = 6,
	LOCALSTR_confirm = 7,
	LOCALSTR_continue = 8,
	LOCALSTR_controller = 9,
	LOCALSTR_create_file = 10,
	LOCALSTR_creating = 11,
	LOCALSTR_demos = 12,
	LOCALSTR_do_not_remove_card = 13,
	LOCALSTR_done = 14,
	LOCALSTR_exit_game = 15,
	LOCALSTR_formatting = 16,
	LOCALSTR_go_back = 17,
	LOCALSTR_insert_card = 18,
	LOCALSTR_insert_card_free = 19,
	LOCALSTR_invalid_card = 20,
	LOCALSTR_load_failed = 21,
	LOCALSTR_load_game = 22,
	LOCALSTR_loading = 23,
	LOCALSTR_music = 24,
	LOCALSTR_new_game = 25,
	LOCALSTR_no = 26,
	LOCALSTR_no_card = 27,
	LOCALSTR_card_full = 28,
	LOCALSTR_card_not_enough_blocks = 29,
	LOCALSTR_ok = 30,
	LOCALSTR_options = 31,
	LOCALSTR_overwrite_game = 32,
	LOCALSTR_paused = 33,
	LOCALSTR_press_start = 34,
	LOCALSTR_query_format_card = 35,
	LOCALSTR_query_overwrite = 36,
	LOCALSTR_query_quit = 37,
	LOCALSTR_quit_game = 38,
	LOCALSTR_resume_game = 39,
	LOCALSTR_save_failed = 40,
	LOCALSTR_save_game = 41,
	LOCALSTR_save_ok = 42,
	LOCALSTR_saving = 43,
	LOCALSTR_sound = 44,
	LOCALSTR_start_game = 45,
	LOCALSTR_start_new_game = 46,
	LOCALSTR_try_card_again = 47,
	LOCALSTR_unformatted_card = 48,
	LOCALSTR_vibration_off = 49,
	LOCALSTR_vibration_on = 50,
	LOCALSTR_voice = 51,
	LOCALSTR_warning_one = 52,
	LOCALSTR_warning_two = 53,
	LOCALSTR_yes = 54,
	LOCALSTR_Hint0 = 55,
	LOCALSTR_Hint1 = 56,
	LOCALSTR_Hint2 = 57,
	LOCALSTR_Hint3 = 58,
	LOCALSTR_Hint4 = 59,
	LOCALSTR_Hint5 = 60,
	LOCALSTR_Hint6 = 61,
	LOCALSTR_Hint7 = 62,
	LOCALSTR_Hint8 = 63,
	LOCALSTR_Hint9 = 64,
	LOCALSTR_Hint10 = 65,
	LOCALSTR_Hint11 = 66,
	LOCALSTR_Hint12 = 67,
	LOCALSTR_Hint13 = 68,
	LOCALSTR_Hint14 = 69,
	LOCALSTR_Hint15 = 70,
	LOCALSTR_Hint16 = 71,
	LOCALSTR_Hint17 = 72,
	LOCALSTR_Hint18 = 73,
	LOCALSTR_Hint19 = 74,
	LOCALSTR_Hint20 = 75,
	LOCALSTR_Hint21 = 76,
	LOCALSTR_Hint22 = 77,
	LOCALSTR_Hint23 = 78,
	LOCALSTR_Hint24 = 79,
	LOCALSTR_Hint25 = 80,
	LOCALSTR_Hint26 = 81,
	LOCALSTR_Hint27 = 82,
	LOCALSTR_Hint28 = 83,
	LOCALSTR_Hint29 = 84,
	LOCALSTR_Hint30 = 85,
	LOCALSTR_Hint31 = 86,
	LOCALSTR_Hint32 = 87,
	LOCALSTR_Hint33 = 88,
	LOCALSTR_Hint34 = 89,
	LOCALSTR_Hint35 = 90,
	LOCALSTR_Hint36 = 91,
	LOCALSTR_Hint37 = 92,
	LOCALSTR_Hint38 = 93,
	LOCALSTR_Hint39 = 94,
	LOCALSTR_Hint40 = 95,
	LOCALSTR_Hint41 = 96,
	LOCALSTR_Hint42 = 97,
	LOCALSTR_Hint43 = 98,
	LOCALSTR_Hint44 = 99,
	LOCALSTR_Hint45 = 100,
	LOCALSTR_Hint46 = 101,
	LOCALSTR_Hint47 = 102,
	LOCALSTR_Hint48 = 103,
	LOCALSTR_Hint49 = 104,
	LOCALSTR_Hint50 = 105,
	LOCALSTR_Hint51 = 106,
	LOCALSTR_Hint52 = 107,
	LOCALSTR_EndOfHintStrings = 108,
	LOCALSTR_no_controller = 109,
	LOCALSTR_NUM_ITEMS = 110,
};

enum menu_ctrl_t // Hashcode: 0xE0BD1E93 (dec: -524476781)
{
	menu_ctrl_none = 0,
	menu_ctrl_up = 1,
	menu_ctrl_down = 2,
	menu_ctrl_left = 3,
	menu_ctrl_right = 4,
	menu_ctrl_engage = 5,
	menu_ctrl_cancel = 6,
	menu_ctrl_start = 7,
	menu_ctrl_num_items = 8,
};

enum menu_sound_t // Hashcode: 0x0248C7C9 (dec: 38324169)
{
	menu_sound_none = 0,
	menu_sound_default = 1,
	menu_sound_select = 2,
	menu_sound_adjust = 3,
	menu_sound_engage = 4,
	menu_sound_pop = 5,
};

enum sfx_t // Hashcode: 0xC1FB9866 (dec: -1040476058)
{
	sfx_sound = 0,
	sfx_music = 1,
	sfx_voice = 2,
	sfx_error = 3,
};

enum bdepth // Hashcode: 0xB297A406 (dec: -1298684922)
{
	TIM_4BIT = 0,
	TIM_8BIT = 1,
	TIM_16BIT = 2,
};

enum mcpsx_err_t // Hashcode: 0xB64074E4 (dec: -1237289756)
{
	mcpsx_err_none = 0,
	mcpsx_err_card_not_exist = 1,
	mcpsx_err_card_invalid = 2,
	mcpsx_err_new_card = 3,
	mcpsx_err_not_format = 4,
	mcpsx_err_file_not_exist = 5,
	mcpsx_err_already_exists = 6,
	mcpsx_err_block_full = 7,
	mcpsx_err_busy = 8,
	mcpsx_error = 9,
	mcpsx_err_num_items = 10,
};

enum mcpsx_func_t // Hashcode: 0xA495DFC7 (dec: -1533681721)
{
	func_none = 0,
	func_exist = 1,
	func_accept = 2,
	func_read_file = 3,
	func_write_file = 4,
	func_create_file = 5,
	func_delete_file = 6,
	func_format = 7,
	func_unformat = 8,
	func_directory = 9,
	func_num_items = 10,
};

enum mcpsx_sync_t // Hashcode: 0xC0D85FD5 (dec: -1059561515)
{
	sync_idle = -1,
	sync_busy = 0,
	sync_done = 1,
	sync_func = 2,
	sync_num_items = 3,
};

enum mcpsx_mode_t // Hashcode: 0x8A03A4E4 (dec: -1979472668)
{
	mode_bogus = 0,
	mode_initialized = 1,
	mode_running = 2,
	mode_terminated = 3,
	mode_num_items = 4,
};

enum state_t // Hashcode: 0x67CC6ED5 (dec: 1741450965)
{
	fsmcard_card_not_exist = 0,
	fsmcard_card_invalid = 1,
	fsmcard_not_format = 2,
	fsmcard_new_card = 3,
	fsmcard_directory = 4,
	fsmcard_ready = 5,
	fsmcard_format = 6,
	fsmcard_unformat = 7,
	fsmcard_delete = 8,
	fsmcard_create = 9,
	fsmcard_write = 10,
	fsmcard_read = 11,
	fsmcard_error = 12,
	fsmcard_num_items = 13,
};

enum mcard_status_t // Hashcode: 0xD1B8064B (dec: -776468917)
{
	mcard_status_card_not_exist = 0,
	mcard_status_card_invalid = 1,
	mcard_status_not_format = 2,
	mcard_status_new_card = 3,
	mcard_status_ready = 4,
	mcard_status_accessing = 5,
	mcard_status_error = 6,
	mcard_status_num_items = 7,
};

enum fsm_t // Hashcode: 0x64C4BA3C (dec: 1690614332)
{
	fsm_card_not_exist = 0,
	fsm_card_invalid = 1,
	fsm_not_format = 2,
	fsm_new_card = 3,
	fsm_ready = 4,
	fsm_format = 5,
	fsm_start = 6,
	fsm_loading = 7,
	fsm_query_overwrite = 8,
	fsm_overwrite = 9,
	fsm_saving = 10,
	fsm_create = 11,
	fsm_save_complete = 12,
	fsm_error = 13,
	fsm_num_items = 14,
};
/* End enums */

/* Begin structs */

struct TCB // hashcode: 0x6A70BBF4 (dec: 1785773044)
{
	long status; // size=0, offset=0
	long mode; // size=0, offset=4
	unsigned long reg[40]; // size=160, offset=8
	long system[6]; // size=24, offset=168
};

struct EXEC // hashcode: 0x4291A2AD (dec: 1116840621)
{
	unsigned long pc0; // size=0, offset=0
	unsigned long gp0; // size=0, offset=4
	unsigned long t_addr; // size=0, offset=8
	unsigned long t_size; // size=0, offset=12
	unsigned long d_addr; // size=0, offset=16
	unsigned long d_size; // size=0, offset=20
	unsigned long b_addr; // size=0, offset=24
	unsigned long b_size; // size=0, offset=28
	unsigned long s_addr; // size=0, offset=32
	unsigned long s_size; // size=0, offset=36
	unsigned long sp; // size=0, offset=40
	unsigned long fp; // size=0, offset=44
	unsigned long gp; // size=0, offset=48
	unsigned long ret; // size=0, offset=52
	unsigned long base; // size=0, offset=56
};

struct DIRENTRY // hashcode: 0xD989A944 (dec: -645289660)
{
	char name[20]; // size=20, offset=0
	long attr; // size=0, offset=20
	long size; // size=0, offset=24
	struct DIRENTRY *next; // size=40, offset=28
	long head; // size=0, offset=32
	char system[4]; // size=4, offset=36
};

struct MATRIX // hashcode: 0x610186A2 (dec: 1627489954)
{
	short m[3][3]; // size=18, offset=0
	long t[3]; // size=12, offset=20
};

struct VECTOR // hashcode: 0xE0DB0D68 (dec: -522515096)
{
	long vx; // size=0, offset=0
	long vy; // size=0, offset=4
	long vz; // size=0, offset=8
	long pad; // size=0, offset=12
};

struct SVECTOR // hashcode: 0x55473CEB (dec: 1430732011)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct CVECTOR // hashcode: 0xDE4B0C81 (dec: -565506943)
{
	unsigned char r; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char b; // size=0, offset=2
	unsigned char cd; // size=0, offset=3
};

struct DVECTOR // hashcode: 0x5BF12E56 (dec: 1542532694)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
};

struct RVECTOR // hashcode: 0xEC34D5C3 (dec: -332081725)
{
	struct SVECTOR v; // size=8, offset=0
	unsigned char uv[2]; // size=2, offset=8
	unsigned short pad; // size=0, offset=10
	struct CVECTOR c; // size=4, offset=12
	struct DVECTOR sxy; // size=4, offset=16
	unsigned long sz; // size=0, offset=20
};

struct CRVECTOR3 // hashcode: 0x9A564233 (dec: -1705622989)
{
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r12; // size=24, offset=24
	struct RVECTOR r20; // size=24, offset=48
	struct RVECTOR *r0; // size=24, offset=72
	struct RVECTOR *r1; // size=24, offset=76
	struct RVECTOR *r2; // size=24, offset=80
	unsigned long *rtn; // size=0, offset=84
};

struct CRVECTOR4 // hashcode: 0x56AED614 (dec: 1454298644)
{
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r02; // size=24, offset=24
	struct RVECTOR r31; // size=24, offset=48
	struct RVECTOR r32; // size=24, offset=72
	struct RVECTOR rc; // size=24, offset=96
	struct RVECTOR *r0; // size=24, offset=120
	struct RVECTOR *r1; // size=24, offset=124
	struct RVECTOR *r2; // size=24, offset=128
	struct RVECTOR *r3; // size=24, offset=132
	unsigned long *rtn; // size=0, offset=136
};

struct RECT // hashcode: 0xDFC821CB (dec: -540532277)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short w; // size=0, offset=4
	short h; // size=0, offset=6
};

struct DR_ENV // hashcode: 0xD77E7FD5 (dec: -679575595)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[15]; // size=60, offset=4
};

struct P_TAG // hashcode: 0x962C4103 (dec: -1775484669)
{
	unsigned int addr; // size=24, offset=0
	unsigned int len; // size=8, offset=24
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
};

struct CdlLOC // hashcode: 0x449289F8 (dec: 1150454264)
{
	unsigned char minute; // size=0, offset=0
	unsigned char second; // size=0, offset=1
	unsigned char sector; // size=0, offset=2
	unsigned char track; // size=0, offset=3
};

struct LightInstance // hashcode: 0xB8D5E61F (dec: -1193941473)
{
	struct _Instance *lightInstance; // size=0, offset=0
	long r; // size=0, offset=4
	long g; // size=0, offset=8
	long b; // size=0, offset=12
	short radius; // size=0, offset=16
	unsigned char segment; // size=0, offset=18
	unsigned char flags; // size=0, offset=19
};

struct _Instance // hashcode: 0x699A5B3D (dec: 1771723581)
{
	struct NodeType node; // size=8, offset=0
	struct _Instance *next; // size=616, offset=8
	struct _Instance *prev; // size=616, offset=12
	long instanceID; // size=0, offset=16
	long flags; // size=0, offset=20
	long flags2; // size=0, offset=24
	struct Object *object; // size=76, offset=28
	struct Intro *intro; // size=0, offset=32
	void *data; // size=0, offset=36
	void *introData; // size=0, offset=40
	struct _Instance *parent; // size=616, offset=44
	long introNum; // size=0, offset=48
	long birthStreamUnitID; // size=0, offset=52
	long currentStreamUnitID; // size=0, offset=56
	long introUniqueID; // size=0, offset=60
	struct MATRIX *matrix; // size=32, offset=64
	struct MATRIX *oldMatrix; // size=32, offset=68
	struct SoundInstance soundInstanceTbl[4]; // size=12, offset=72
	unsigned long maxCheckDistance; // size=0, offset=84
	unsigned long checkMask; // size=0, offset=88
	struct _Position position; // size=6, offset=92
	unsigned char lightGroup; // size=0, offset=98
	struct _Position oldPos; // size=6, offset=100
	unsigned char spectralLightGroup; // size=0, offset=106
	short currentTextureAnimFrame; // size=0, offset=108
	struct _Position initialPos; // size=6, offset=110
	struct _Rotation rotation; // size=8, offset=116
	struct _Rotation oldRotation; // size=8, offset=124
	struct _SVector scale; // size=8, offset=132
	long attachedID; // size=0, offset=140
	long attachedSegment; // size=0, offset=144
	struct MATRIX relativeMatrix; // size=32, offset=148
	struct _TFace *tface; // size=12, offset=180
	struct _TFace *oldTFace; // size=12, offset=184
	void *tfaceLevel; // size=0, offset=188
	void *collideInfo; // size=0, offset=192
	long bspTree; // size=0, offset=196
	short cachedTFace; // size=0, offset=200
	short cachedBSPTree; // size=0, offset=202
	void *cachedTFaceLevel; // size=0, offset=204
	struct _Normal oldWNormal; // size=8, offset=208
	struct _Normal wNormal; // size=8, offset=216
	struct _SVector offset; // size=8, offset=224
	struct _HModel *hModelList; // size=8, offset=232
	short fadeValue; // size=0, offset=236
	short lightMatrix; // size=0, offset=238
	void (*processFunc)(); // size=0, offset=240
	void (*collideFunc)(); // size=0, offset=244
	void (*additionalCollideFunc)(); // size=0, offset=248
	unsigned long (*queryFunc)(); // size=0, offset=252
	void (*messageFunc)(); // size=0, offset=256
	struct _Position shadowPosition; // size=6, offset=260
	short currentModel; // size=0, offset=266
	struct _TFace *waterFace; // size=12, offset=268
	struct _TFace *oldWaterFace; // size=12, offset=272
	struct _Terrain *waterFaceTerrain; // size=0, offset=276
	struct _PlaneConstants halvePlane; // size=12, offset=280
	struct _SVector splitPoint; // size=8, offset=292
	struct _Instance *LinkParent; // size=616, offset=300
	struct _Instance *LinkChild; // size=616, offset=304
	struct _Instance *LinkSibling; // size=616, offset=308
	long ParentLinkNode; // size=0, offset=312
	void *InstanceState; // size=0, offset=316
	char introName[12]; // size=12, offset=320
	void *extraData; // size=0, offset=332
	short constrictAngle; // size=0, offset=336
	short petrifyValue; // size=0, offset=338
	long xVel; // size=0, offset=340
	long yVel; // size=0, offset=344
	long zVel; // size=0, offset=348
	long xAccl; // size=0, offset=352
	long yAccl; // size=0, offset=356
	long zAccl; // size=0, offset=360
	long maxXVel; // size=0, offset=364
	long maxYVel; // size=0, offset=368
	long maxZVel; // size=0, offset=372
	long currentMainState; // size=0, offset=376
	long work0; // size=0, offset=380
	long work1; // size=0, offset=384
	long work2; // size=0, offset=388
	long work3; // size=0, offset=392
	long work4; // size=0, offset=396
	long work5; // size=0, offset=400
	struct _G2Anim_Type anim; // size=180, offset=404
	enum _G2Bool_Enum (*rebuildCallback)(); // size=4, offset=584
	short splineFlags; // size=0, offset=588
	short targetFrame; // size=0, offset=590
	short clipBeg; // size=0, offset=592
	short clipEnd; // size=0, offset=594
	struct EventAliasCommandStruct aliasCommand; // size=12, offset=596
	long light_color; // size=0, offset=608
	struct CVECTOR *perVertexColor; // size=4, offset=612
};

struct _GameTrackerASMData_Type // hashcode: 0x28F0BFB9 (dec: 686866361)
{
	long drawBackFaces; // size=0, offset=0
	long dispPage; // size=0, offset=4
	short MorphTime; // size=0, offset=8
	short MorphType; // size=0, offset=10
	struct LightInstance lightInstances[1]; // size=20, offset=12
};

struct _GameData_Type // hashcode: 0xE05EBAD0 (dec: -530662704)
{
	struct _GameTrackerASMData_Type asmData; // size=32, offset=0
};

struct NodeType // hashcode: 0x5BF613D7 (dec: 1542853591)
{
	struct NodeType *prev; // size=8, offset=0
	struct NodeType *next; // size=8, offset=4
};

struct TextureFT3 // hashcode: 0x2D2801D6 (dec: 757596630)
{
	unsigned char u0; // size=0, offset=0
	unsigned char v0; // size=0, offset=1
	unsigned short clut; // size=0, offset=2
	unsigned char u1; // size=0, offset=4
	unsigned char v1; // size=0, offset=5
	unsigned short tpage; // size=0, offset=6
	unsigned char u2; // size=0, offset=8
	unsigned char v2; // size=0, offset=9
	unsigned short attr; // size=0, offset=10
};

struct TextureMT3 // hashcode: 0xC9D0A5B9 (dec: -909072967)
{
	unsigned char u0; // size=0, offset=0
	unsigned char v0; // size=0, offset=1
	unsigned short clut; // size=0, offset=2
	unsigned char u1; // size=0, offset=4
	unsigned char v1; // size=0, offset=5
	unsigned short tpage; // size=0, offset=6
	unsigned char u2; // size=0, offset=8
	unsigned char v2; // size=0, offset=9
	char pad1; // size=0, offset=10
	char sortPush; // size=0, offset=11
	long color; // size=0, offset=12
};

struct AniTexInfo // hashcode: 0x907C013D (dec: -1870921411)
{
	struct TextureMT3 *texture; // size=16, offset=0
	long numFrames; // size=0, offset=4
	long speed; // size=0, offset=8
};

struct AniTex // hashcode: 0xE4DA2729 (dec: -455465175)
{
	long numAniTextues; // size=0, offset=0
	struct AniTexInfo aniTexInfo; // size=12, offset=4
};

struct DrMoveAniTexSrcInfo // hashcode: 0x4AD6E543 (dec: 1255597379)
{
	short pixSrcX; // size=0, offset=0
	short pixSrcY; // size=0, offset=2
	short clutSrcX; // size=0, offset=4
	short clutSrcY; // size=0, offset=6
};

struct DrMoveAniTexDestInfo // hashcode: 0xF3A982EE (dec: -206994706)
{
	short pixDstX; // size=0, offset=0
	short pixDstY; // size=0, offset=2
	short pixW; // size=0, offset=4
	short pixH; // size=0, offset=6
	short clutDstX; // size=0, offset=8
	short clutDstY; // size=0, offset=10
	short clutW; // size=0, offset=12
	short clutH; // size=0, offset=14
	short pixCurrentX; // size=0, offset=16
	short pixCurrentY; // size=0, offset=18
	short clutCurrentX; // size=0, offset=20
	short clutCurrentY; // size=0, offset=22
	long numFrames; // size=0, offset=24
	long speed; // size=0, offset=28
	struct DrMoveAniTexSrcInfo frame; // size=8, offset=32
};

struct DrMoveAniTex // hashcode: 0x0820A5D4 (dec: 136357332)
{
	long numAniTextues; // size=0, offset=0
	struct DrMoveAniTexDestInfo *aniTexInfo; // size=40, offset=4
};

struct MemHeader // hashcode: 0xDAEE4890 (dec: -621918064)
{
	unsigned short magicNumber; // size=0, offset=0
	unsigned char memStatus; // size=0, offset=2
	unsigned char memType; // size=0, offset=3
	unsigned long memSize; // size=0, offset=4
};

struct _G2SVector3_Type // hashcode: 0x60FF7CCD (dec: 1627356365)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct _G2LVector3_Type // hashcode: 0xD8D79EE7 (dec: -656957721)
{
	long x; // size=0, offset=0
	long y; // size=0, offset=4
	long z; // size=0, offset=8
};

struct _G2Matrix_Type // hashcode: 0x647D6F57 (dec: 1685942103)
{
	short rotScale[3][3]; // size=18, offset=0
	short scaleFlag; // size=0, offset=18
	struct _G2LVector3_Type trans; // size=12, offset=20
};

struct _G2Quat_Type // hashcode: 0xC71F9EB1 (dec: -954229071)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short w; // size=0, offset=6
};

struct _G2AnimQuatInfo_Type // hashcode: 0x5A520473 (dec: 1515324531)
{
	struct _G2Quat_Type srcQuat; // size=8, offset=0
	struct _G2Quat_Type destQuat; // size=8, offset=8
	struct _G2SVector3_Type srcScale; // size=6, offset=16
	struct _G2SVector3_Type destScale; // size=6, offset=22
	struct _G2SVector3_Type srcTrans; // size=6, offset=28
	struct _G2SVector3_Type destTrans; // size=6, offset=34
};

struct _G2AnimAlphaTable_Type // hashcode: 0x2288BF48 (dec: 579387208)
{
	unsigned short size; // size=0, offset=0
	long data[0]; // size=0, offset=4
};

struct _G2AnimInterpStateBlock_Type // hashcode: 0xFB03DD89 (dec: -83632759)
{
	struct _G2AnimInterpStateBlock_Type *next; // size=164, offset=0
	struct _G2AnimQuatInfo_Type quatInfo[4]; // size=160, offset=4
};

struct _G2AnimInterpInfo_Type // hashcode: 0xAE13EB6F (dec: -1374426257)
{
	short duration; // size=0, offset=0
	short targetTime; // size=0, offset=2
	struct _G2AnimAlphaTable_Type *alphaTable; // size=4, offset=4
	struct _G2AnimInterpStateBlock_Type *stateBlockList; // size=164, offset=8
};

struct _G2AnimChanStatus_Type // hashcode: 0x575B81AB (dec: 1465614763)
{
	short keyData; // size=0, offset=0
	short index; // size=0, offset=2
};

struct _G2AnimChanStatusBlock_Type // hashcode: 0xC6C09C4F (dec: -960455601)
{
	struct _G2AnimChanStatusBlock_Type *next; // size=36, offset=0
	struct _G2AnimChanStatus_Type chunks[8]; // size=32, offset=4
};

struct _G2AnimFxHeader_Type // hashcode: 0xA004B4ED (dec: -1610304275)
{
	unsigned char sizeAndSection; // size=0, offset=0
	char type; // size=0, offset=1
	unsigned short keyframeID; // size=0, offset=2
};

struct _G2AnimKeylist_Type // hashcode: 0x87A15165 (dec: -2019471003)
{
	unsigned char sectionCount; // size=0, offset=0
	unsigned char s0TailTime; // size=0, offset=1
	unsigned char s1TailTime; // size=0, offset=2
	unsigned char s2TailTime; // size=0, offset=3
	unsigned short keyCount; // size=0, offset=4
	short timePerKey; // size=0, offset=6
	unsigned short pad00; // size=0, offset=8
	short pad01; // size=0, offset=10
	unsigned short pad10; // size=0, offset=12
	short pad11; // size=0, offset=14
	struct _G2AnimFxHeader_Type *fxList; // size=4, offset=16
	unsigned short (*sectionData[0]); // size=0, offset=20
};

struct _G2AnimSection_Type // hashcode: 0xFC80328C (dec: -58707316)
{
	unsigned char flags; // size=0, offset=0
	unsigned char sectionID; // size=0, offset=1
	unsigned char firstSeg; // size=0, offset=2
	unsigned char segCount; // size=0, offset=3
	short elapsedTime; // size=0, offset=4
	short storedTime; // size=0, offset=6
	short loopStartTime; // size=0, offset=8
	short loopEndTime; // size=0, offset=10
	short *swAlarmTable; // size=0, offset=12
	long speedAdjustment; // size=0, offset=16
	unsigned short keylistID; // size=0, offset=20
	unsigned long alarmFlags; // size=0, offset=24
	long (*callback)(); // size=0, offset=28
	void *callbackData; // size=0, offset=32
	struct _G2AnimKeylist_Type *keylist; // size=20, offset=36
	struct _G2AnimChanStatusBlock_Type *chanStatusBlockList; // size=36, offset=40
	struct _G2AnimInterpInfo_Type *interpInfo; // size=12, offset=44
};

struct _G2Anim_Type // hashcode: 0xF35FCCD2 (dec: -211825454)
{
	unsigned char sectionCount; // size=0, offset=0
	unsigned char masterSection; // size=0, offset=1
	unsigned short controllerList; // size=0, offset=2
	unsigned short disabledControllerList; // size=0, offset=4
	unsigned short pad; // size=0, offset=6
	struct _G2SVector3_Type rootTrans; // size=6, offset=8
	unsigned short flags; // size=0, offset=14
	struct _Model *modelData; // size=0, offset=16
	struct _G2Matrix_Type *segMatrices; // size=32, offset=20
	unsigned long disabledBits[3]; // size=12, offset=24
	struct _G2AnimSection_Type section[3]; // size=144, offset=36
};

struct _Model // hashcode: 0x9BCE1D24 (dec: -1680990940)
{
	long numVertices; // size=0, offset=0
	struct _MVertex *vertexList; // size=8, offset=4
	long numNormals; // size=0, offset=8
	struct _SVectorNoPad *normalList; // size=6, offset=12
	long numFaces; // size=0, offset=16
	struct _MFace *faceList; // size=12, offset=20
	long numSegments; // size=0, offset=24
	struct _Segment *segmentList; // size=24, offset=28
	struct AniTex *aniTextures; // size=16, offset=32
	short maxRad; // size=0, offset=36
	short pad; // size=0, offset=38
	long maxRadSq; // size=0, offset=40
	struct MultiSpline *multiSpline; // size=0, offset=44
	struct TextureMT3 *startTextures; // size=16, offset=48
	struct TextureMT3 *endTextures; // size=16, offset=52
};

struct _SVector // hashcode: 0x73B07C09 (dec: 1940945929)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct _SVectorNoPad // hashcode: 0xA6EDBBC6 (dec: -1494369338)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct _Position // hashcode: 0x2523C22F (dec: 623100463)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct _Rotation // hashcode: 0x5A40CBB0 (dec: 1514195888)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct _Normal // hashcode: 0xC59D5A5B (dec: -979543461)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct _PlaneConstants // hashcode: 0xE1AAD777 (dec: -508897417)
{
	short a; // size=0, offset=0
	short b; // size=0, offset=2
	short c; // size=0, offset=4
	short flags; // size=0, offset=6
	long d; // size=0, offset=8
};

struct _Vertex // hashcode: 0x97101469 (dec: -1760553879)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct _Face // hashcode: 0x8775891B (dec: -2022340325)
{
	unsigned short v0; // size=0, offset=0
	unsigned short v1; // size=0, offset=2
	unsigned short v2; // size=0, offset=4
};

struct _MVertex // hashcode: 0x2B95C05B (dec: 731234395)
{
	struct _Vertex vertex; // size=6, offset=0
	unsigned short normal; // size=0, offset=6
};

struct _MFace // hashcode: 0xB75C604D (dec: -1218682803)
{
	struct _Face face; // size=6, offset=0
	unsigned char normal; // size=0, offset=6
	unsigned char flags; // size=0, offset=7
	long color; // size=0, offset=8
};

struct _RGBAColor // hashcode: 0xF7174D90 (dec: -149467760)
{
	unsigned char r; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char b; // size=0, offset=2
	unsigned char a; // size=0, offset=3
};

struct _PVertex // hashcode: 0x4AC0ECE8 (dec: 1254157544)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	long otz; // size=0, offset=4
};

struct _VertexPool // hashcode: 0x98F8C96E (dec: -1728525970)
{
	struct _PVertex vertex[528]; // size=4224, offset=0
	struct CVECTOR color[528]; // size=2112, offset=4224
};

struct _PrimPool // hashcode: 0x9529B283 (dec: -1792429437)
{
	long numPrims; // size=0, offset=0
	unsigned long *nextPrim; // size=0, offset=4
	unsigned long *lastPrim; // size=0, offset=8
	unsigned long prim[24000]; // size=96000, offset=12
};

struct _Sphere // hashcode: 0x361BDD31 (dec: 907795761)
{
	struct _Position position; // size=6, offset=0
	unsigned short radius; // size=0, offset=6
	unsigned long radiusSquared; // size=0, offset=8
};

struct _Sphere_noSq // hashcode: 0xA031058C (dec: -1607400052)
{
	struct _Position position; // size=6, offset=0
	unsigned short radius; // size=0, offset=6
};

struct _CameraKey // hashcode: 0xB9E6B724 (dec: -1176062172)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short id; // size=0, offset=6
	short rx; // size=0, offset=8
	short ry; // size=0, offset=10
	short rz; // size=0, offset=12
	short flags; // size=0, offset=14
	short tx; // size=0, offset=16
	short ty; // size=0, offset=18
	short tz; // size=0, offset=20
	short pad; // size=0, offset=22
};

struct Object // hashcode: 0xEC12E9AC (dec: -334304852)
{
	long oflags; // size=0, offset=0
	short id; // size=0, offset=4
	short sfxFileHandle; // size=0, offset=6
	short numModels; // size=0, offset=8
	short numAnims; // size=0, offset=10
	struct _Model **modelList; // size=56, offset=12
	struct _G2AnimKeylist_Type **animList; // size=20, offset=16
	short introDist; // size=0, offset=20
	short vvIntroDist; // size=0, offset=22
	short removeDist; // size=0, offset=24
	short vvRemoveDist; // size=0, offset=26
	void *data; // size=0, offset=28
	char *script; // size=0, offset=32
	char *name; // size=0, offset=36
	unsigned char *soundData; // size=0, offset=40
	long oflags2; // size=0, offset=44
	short sectionA; // size=0, offset=48
	short sectionB; // size=0, offset=50
	short sectionC; // size=0, offset=52
	short numberOfEffects; // size=0, offset=54
	struct ObjectEffect *effectList; // size=4, offset=56
	unsigned long *relocList; // size=0, offset=60
	void *relocModule; // size=0, offset=64
	struct VramSize vramSize; // size=8, offset=68
};

struct _BVertex // hashcode: 0xADD3BD2F (dec: -1378632401)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct _BFace // hashcode: 0x69100F99 (dec: 1762660249)
{
	short v0; // size=0, offset=0
	short v1; // size=0, offset=2
	short v2; // size=0, offset=4
	short pad; // size=0, offset=6
	struct TextureFT3 *texture; // size=12, offset=8
};

struct _BGObject // hashcode: 0xEC69FB30 (dec: -328598736)
{
	short flags; // size=0, offset=0
	short numFaces; // size=0, offset=2
	struct _BVertex *vertexList; // size=8, offset=4
	struct _BFace *faceList; // size=12, offset=8
	short x; // size=0, offset=12
	short y; // size=0, offset=14
	short z; // size=0, offset=16
	short radius; // size=0, offset=18
	long numVertices; // size=0, offset=20
};

struct Signal // hashcode: 0xA0225F88 (dec: -1608360056)
{
	long id; // size=0, offset=0
	union {
		struct {
			union {
				long l; // size=0, offset=0
				short s[2]; // size=4, offset=0
				char c[4]; // size=4, offset=0
			} size; // size=4, offset=0, found in object files: player.o, player.o
		} misc; // size=12, offset=0, found in object files: player.o, player.o
		struct _CameraKey *cameraKey; // size=24, offset=0
		struct {
			short x; // size=0, offset=0
			short y; // size=0, offset=2
			short z; // size=0, offset=4
			short zrot; // size=0, offset=6
			struct _SVector offset; // size=8, offset=8
		} teleport; // size=16, offset=0, found in object files: player.o, player.o
		struct {
			long index; // size=0, offset=0
			long value; // size=0, offset=4
		} cameraValue; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			long index; // size=0, offset=0
			long value; // size=0, offset=4
		} miscValue; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			long index; // size=0, offset=0
			long value; // size=0, offset=4
		} logicValue; // size=8, offset=0, found in object files: player.o, player.o
		long timer; // size=0, offset=0
		long times; // size=0, offset=0
		long lightGroup; // size=0, offset=0
		long farPlane; // size=0, offset=0
		long cameraAdjust; // size=0, offset=0
		long cameraMode; // size=0, offset=0
		long cameraLock; // size=0, offset=0
		long cameraUnlock; // size=0, offset=0
		long cameraSmooth; // size=0, offset=0
		long cameraTimer; // size=0, offset=0
		struct {
			long time; // size=0, offset=0
			long scale; // size=0, offset=4
		} cameraShake; // size=8, offset=0, found in object files: player.o, player.o
		long cameraSave; // size=0, offset=0
		long cameraRestore; // size=0, offset=0
		struct _BGObject *bgObject; // size=24, offset=0
		long value[2]; // size=8, offset=0
		struct {
			long action; // size=0, offset=0
			long value[2]; // size=8, offset=4
		} sound; // size=12, offset=0, found in object files: player.o, player.o
		void *intro; // size=0, offset=0
		long deathZ; // size=0, offset=0
		struct {
			void *intro; // size=0, offset=0
			void *data; // size=0, offset=4
		} dsignal; // size=8, offset=0, found in object files: player.o, player.o
		void *mirror; // size=0, offset=0
		long fogNear; // size=0, offset=0
		long fogFar; // size=0, offset=0
		struct {
			void *intro; // size=0, offset=0
			long frame; // size=0, offset=4
		} gotoFrame; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			void *intro; // size=0, offset=0
			long model; // size=0, offset=4
		} changeModel; // size=8, offset=0, found in object files: player.o, player.o
		void *vmObject; // size=0, offset=0
		struct {
			unsigned char target; // size=0, offset=0
			unsigned char source1; // size=0, offset=1
			unsigned char source2; // size=0, offset=2
			unsigned char pad; // size=0, offset=3
			struct Signal *gotoLabel; // size=0, offset=4
		} logic; // size=8, offset=0, found in object files: player.o, player.o
		void *callSignal; // size=0, offset=0
		struct _SVector offset; // size=8, offset=0
		struct Signal *gotoLabel; // size=0, offset=0
		struct Signal *gosubLabel; // size=0, offset=0
		struct {
			long timer; // size=0, offset=0
			long action; // size=0, offset=4
		} control; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			short index; // size=0, offset=0
			short z; // size=0, offset=2
			struct MultiSignal *upSignal; // size=0, offset=4
			struct MultiSignal *downSignal; // size=0, offset=8
		} zSignal; // size=12, offset=0, found in object files: player.o, player.o
		struct {
			long currentnum; // size=0, offset=0
			long streamID; // size=0, offset=4
			char toname[16]; // size=16, offset=8
		} StreamLevel; // size=24, offset=0, found in object files: player.o, player.o
		struct {
			char num; // size=0, offset=0
			char vel; // size=0, offset=1
			short misc; // size=0, offset=2
			char flags; // size=0, offset=4
			char timeToLive; // size=0, offset=5
			short dummy2; // size=0, offset=6
			struct Object *object; // size=0, offset=8
		} shards; // size=12, offset=0, found in object files: player.o, player.o
		struct {
			long index; // size=0, offset=0
			void *intro; // size=0, offset=4
		} cameraSpline; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			short type; // size=0, offset=0
			short time; // size=0, offset=2
		} screenWipe; // size=4, offset=0, found in object files: player.o, player.o
		long voiceSitId; // size=0, offset=0
		struct {
			long time; // size=0, offset=0
			void *intro; // size=0, offset=4
		} introFX; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			void *intro; // size=0, offset=0
			struct Signal *gotoLabel; // size=0, offset=4
		} introActive; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			char world[9]; // size=9, offset=0
			char level[9]; // size=9, offset=9
		} levelChange; // size=18, offset=0, found in object files: player.o, player.o
		long blendStart; // size=0, offset=0
		struct {
			struct Signal *signal; // size=0, offset=0
			long times; // size=0, offset=4
		} setTimes; // size=8, offset=0, found in object files: player.o, player.o
		struct {
			unsigned char r; // size=0, offset=0
			unsigned char g; // size=0, offset=1
			unsigned char b; // size=0, offset=2
			unsigned char pad; // size=0, offset=3
		} color; // size=4, offset=0, found in object files: player.o, player.o
		struct {
			short x; // size=0, offset=0
			short y; // size=0, offset=2
			short time; // size=0, offset=4
			short index; // size=0, offset=6
			char *text; // size=0, offset=8
		} print; // size=12, offset=0, found in object files: player.o, player.o
		long slideAngle; // size=0, offset=0
	} data; // size=24, offset=4, found in object files: player.o, player.o
};

struct _MultiSignal // hashcode: 0x0620B768 (dec: 102807400)
{
	long numSignals; // size=0, offset=0
	short signalNum; // size=0, offset=4
	short flags; // size=0, offset=6
	struct Signal signalList[32]; // size=896, offset=8
};

struct _HFace // hashcode: 0x30CA5CA6 (dec: 818568358)
{
	short v0; // size=0, offset=0
	short v1; // size=0, offset=2
	short v2; // size=0, offset=4
	unsigned char attr; // size=0, offset=6
	char pad; // size=0, offset=7
	unsigned short normal; // size=0, offset=8
	unsigned short n0; // size=0, offset=10
};

struct _HSphere // hashcode: 0x8E7B7191 (dec: -1904512623)
{
	long attr; // size=0, offset=0
	unsigned char id; // size=0, offset=4
	unsigned char rank; // size=0, offset=5
	short pad; // size=0, offset=6
	struct _Position position; // size=6, offset=8
	unsigned short radius; // size=0, offset=14
	unsigned long radiusSquared; // size=0, offset=16
};

struct _HBox // hashcode: 0x47CD8BDA (dec: 1204653018)
{
	short flags; // size=0, offset=0
	unsigned char id; // size=0, offset=2
	unsigned char rank; // size=0, offset=3
	short minX; // size=0, offset=4
	short minY; // size=0, offset=6
	short minZ; // size=0, offset=8
	short maxX; // size=0, offset=10
	short maxY; // size=0, offset=12
	short maxZ; // size=0, offset=14
	short refMinX; // size=0, offset=16
	short refMinY; // size=0, offset=18
	short refMinZ; // size=0, offset=20
	short refMaxX; // size=0, offset=22
	short refMaxY; // size=0, offset=24
	short refMaxZ; // size=0, offset=26
};

struct _HPrim // hashcode: 0x988F5E11 (dec: -1735434735)
{
	unsigned char hpFlags; // size=0, offset=0
	unsigned char withFlags; // size=0, offset=1
	unsigned char type; // size=0, offset=2
	unsigned char segment; // size=0, offset=3
	union {
		struct _HSphere *hsphere; // size=20, offset=0
		struct _HBox *hbox; // size=28, offset=0
		struct _HFace *hface; // size=12, offset=0
	} data; // size=4, offset=4, found in object files: player.o, player.o
};

struct _HModel // hashcode: 0xBC680356 (dec: -1134034090)
{
	struct _HPrim *hPrimList; // size=8, offset=0
	long numHPrims; // size=0, offset=4
};

struct _HInfo // hashcode: 0x6AC9807F (dec: 1791590527)
{
	long numHFaces; // size=0, offset=0
	struct _HFace *hfaceList; // size=12, offset=4
	long numHSpheres; // size=0, offset=8
	struct _HSphere *hsphereList; // size=20, offset=12
	long numHBoxes; // size=0, offset=16
	struct _HBox *hboxList; // size=28, offset=20
};

struct _Segment // hashcode: 0x2F06BF28 (dec: 788971304)
{
	long flags; // size=0, offset=0
	short firstTri; // size=0, offset=4
	short lastTri; // size=0, offset=6
	short firstVertex; // size=0, offset=8
	short lastVertex; // size=0, offset=10
	short px; // size=0, offset=12
	short py; // size=0, offset=14
	short pz; // size=0, offset=16
	short parent; // size=0, offset=18
	struct _HInfo *hInfo; // size=24, offset=20
};

struct MultiSpline // hashcode: 0x2823B2CF (dec: 673428175)
{
	struct Spline *positional; // size=8, offset=0
	struct RSpline *rotational; // size=8, offset=4
	struct Spline *scaling; // size=8, offset=8
	struct Spline *color; // size=8, offset=12
	struct SplineDef curPositional; // size=8, offset=16
	struct SplineDef curRotational; // size=8, offset=24
	struct SplineDef curScaling; // size=8, offset=32
	struct SplineDef curColor; // size=8, offset=40
	struct MATRIX curRotMatrix; // size=32, offset=48
};

struct SoundInstance // hashcode: 0xFF235679 (dec: -14461319)
{
	unsigned char channel; // size=0, offset=0
	unsigned char state; // size=0, offset=1
	unsigned char delay; // size=0, offset=2
};

struct ObjectEffect // hashcode: 0x2892438D (dec: 680674189)
{
	unsigned char effectNumber; // size=0, offset=0
	unsigned char modifierList[3]; // size=3, offset=1
};

struct VramSize // hashcode: 0xD96A55BF (dec: -647342657)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short w; // size=0, offset=4
	short h; // size=0, offset=6
};

struct _TFace // hashcode: 0x85FE430F (dec: -2046934257)
{
	struct _Face face; // size=6, offset=0
	unsigned char attr; // size=0, offset=6
	char sortPush; // size=0, offset=7
	unsigned short normal; // size=0, offset=8
	unsigned short textoff; // size=0, offset=10
};

struct _TVertex // hashcode: 0x0883ABD5 (dec: 142846933)
{
	struct _Vertex vertex; // size=6, offset=0
	unsigned short rgb15; // size=0, offset=6
	unsigned char r0; // size=0, offset=8
	unsigned char g0; // size=0, offset=9
	unsigned char b0; // size=0, offset=10
	unsigned char code; // size=0, offset=11
};

struct EventAliasCommandStruct // hashcode: 0xB6EF2AF6 (dec: -1225839882)
{
	struct _Instance *hostInstance; // size=0, offset=0
	short newanim; // size=0, offset=4
	short newframe; // size=0, offset=6
	short interpframes; // size=0, offset=8
	short speed; // size=0, offset=10
};

struct Intro // hashcode: 0x796E766D (dec: 2037282413)
{
	char name[16]; // size=16, offset=0
	long intronum; // size=0, offset=16
	long UniqueID; // size=0, offset=20
	struct _Rotation rotation; // size=8, offset=24
	struct _Position position; // size=6, offset=32
	short maxRad; // size=0, offset=38
	long maxRadSq; // size=0, offset=40
	long flags; // size=0, offset=44
	void *data; // size=0, offset=48
	struct _Instance *instance; // size=616, offset=52
	struct MultiSpline *multiSpline; // size=0, offset=56
	void *dsignal; // size=0, offset=60
	short specturalLightGroup; // size=0, offset=64
	short meshColor; // size=0, offset=66
	struct _Position spectralPosition; // size=6, offset=68
	short spad; // size=0, offset=74
};

struct _Terrain // hashcode: 0x5D541B4E (dec: 1565793102)
{
	short UnitChangeFlags; // size=0, offset=0
	short spad; // size=0, offset=2
	long lpad2; // size=0, offset=4
	long numIntros; // size=0, offset=8
	struct Intro *introList; // size=76, offset=12
	long numVertices; // size=0, offset=16
	long numFaces; // size=0, offset=20
	long numNormals; // size=0, offset=24
	struct _TVertex *vertexList; // size=12, offset=28
	struct _TFace *faceList; // size=12, offset=32
	struct _Normal *normalList; // size=8, offset=36
	struct DrMoveAniTex *aniList; // size=8, offset=40
	long pad; // size=0, offset=44
	void *StreamUnits; // size=0, offset=48
	struct TextureFT3 *StartTextureList; // size=12, offset=52
	struct TextureFT3 *EndTextureList; // size=12, offset=56
	struct _MorphVertex *MorphDiffList; // size=14, offset=60
	struct _MorphColor *MorphColorList; // size=2, offset=64
	long numBSPTrees; // size=0, offset=68
	struct BSPTree *BSPTreeArray; // size=36, offset=72
	short *morphNormalIdx; // size=0, offset=76
	struct _MultiSignal *signals; // size=904, offset=80
};

struct _InstancePool // hashcode: 0xC591AB92 (dec: -980309102)
{
	long nextInstanceID; // size=0, offset=0
	long numFreeInstances; // size=0, offset=4
	struct _Instance instance[62]; // size=38192, offset=8
	struct _Instance *first_free; // size=616, offset=38200
};

struct _InstanceList // hashcode: 0x7594B1C7 (dec: 1972679111)
{
	long numInstances; // size=0, offset=0
	struct _Instance *first; // size=616, offset=4
	struct _InstancePool *pool; // size=38204, offset=8
	struct NodeType group[32]; // size=256, offset=12
};

struct _ObjectTracker // hashcode: 0xFE4678BF (dec: -28936001)
{
	char name[16]; // size=16, offset=0
	struct Object *object; // size=76, offset=16
	short objectStatus; // size=0, offset=20
	short numInUse; // size=0, offset=22
	void *vramBlock; // size=0, offset=24
	char numObjectsUsing; // size=0, offset=28
	char objectsUsing[7]; // size=7, offset=29
};

struct _BoundingBox // hashcode: 0x2183782B (dec: 562264107)
{
	short minX; // size=0, offset=0
	short minY; // size=0, offset=2
	short minZ; // size=0, offset=4
	short maxX; // size=0, offset=6
	short maxY; // size=0, offset=8
	short maxZ; // size=0, offset=10
};

struct CDLight // hashcode: 0xD90757B8 (dec: -653830216)
{
	struct NodeType node; // size=8, offset=0
	unsigned char r; // size=0, offset=8
	unsigned char g; // size=0, offset=9
	unsigned char b; // size=0, offset=10
	unsigned char flags; // size=0, offset=11
	struct _Sphere sphere; // size=12, offset=12
};

struct _BSPNode // hashcode: 0x60C20F69 (dec: 1623330665)
{
	struct _Sphere_noSq sphere; // size=8, offset=0
	short a; // size=0, offset=8
	short b; // size=0, offset=10
	short c; // size=0, offset=12
	short flags; // size=0, offset=14
	long d; // size=0, offset=16
	void *front; // size=0, offset=20
	void *back; // size=0, offset=24
	struct _Sphere_noSq spectralSphere; // size=8, offset=28
	short front_spectral_error; // size=0, offset=36
	short back_spectral_error; // size=0, offset=38
	short front_material_error; // size=0, offset=40
	short back_material_error; // size=0, offset=42
};

struct _BSPLeaf // hashcode: 0xB2C1AC71 (dec: -1295930255)
{
	struct _Sphere_noSq sphere; // size=8, offset=0
	struct _TFace *faceList; // size=12, offset=8
	short numFaces; // size=0, offset=12
	short flags; // size=0, offset=14
	struct _BoundingBox box; // size=12, offset=16
	struct _BoundingBox spectralBox; // size=12, offset=28
	struct _Sphere_noSq spectralSphere; // size=8, offset=40
};

struct _MorphVertex // hashcode: 0xAAB8DABE (dec: -1430725954)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short vindex; // size=0, offset=6
	short hx; // size=0, offset=8
	short hy; // size=0, offset=10
	short hz; // size=0, offset=12
};

struct _MorphColor // hashcode: 0xA6BA0326 (dec: -1497758938)
{
	short morphColor15; // size=0, offset=0
};

struct Level // hashcode: 0x012B0198 (dec: 19595672)
{
	struct _Terrain *terrain; // size=84, offset=0
	struct LightList *lightList; // size=12, offset=4
	long numVMObjects; // size=0, offset=8
	struct _VMObject *vmobjectList; // size=60, offset=12
	long numSpotLights; // size=0, offset=16
	struct SpotLight *spotLightList; // size=40, offset=20
	long numPointLights; // size=0, offset=24
	struct PointLight *pointLightList; // size=24, offset=28
	long numSpotSpecturalLights; // size=0, offset=32
	struct SpotLight *spotSpecturalLightList; // size=40, offset=36
	long numPointSpecturalLights; // size=0, offset=40
	struct PointLight *pointSpecturalLightList; // size=24, offset=44
	long numBGObjects; // size=0, offset=48
	struct _BGObject *bgObjectList; // size=24, offset=52
	long waterZLevel; // size=0, offset=56
	unsigned char backColorR; // size=0, offset=60
	unsigned char backColorG; // size=0, offset=61
	unsigned char backColorB; // size=0, offset=62
	unsigned char cpad1; // size=0, offset=63
	unsigned char specturalColorR; // size=0, offset=64
	unsigned char specturalColorG; // size=0, offset=65
	unsigned char specturalColorB; // size=0, offset=66
	unsigned char cpad2; // size=0, offset=67
	unsigned short fogFar; // size=0, offset=68
	unsigned short fogNear; // size=0, offset=70
	unsigned short spectralFogFar; // size=0, offset=72
	unsigned short spectralFogNear; // size=0, offset=74
	unsigned short waterFogFar; // size=0, offset=76
	unsigned short waterFogNear; // size=0, offset=78
	long depthQBlendStart; // size=0, offset=80
	struct LightList *spectrallightList; // size=12, offset=84
	long numCameras; // size=0, offset=88
	void *cameraList; // size=0, offset=92
	long bspPlaneError; // size=0, offset=96
	long numVGroups; // size=0, offset=100
	struct _VGroup *vGroupList; // size=12, offset=104
	long deathZ; // size=0, offset=108
	long flags; // size=0, offset=112
	struct _MultiSignal *startSignal; // size=904, offset=116
	long numIntros; // size=0, offset=120
	struct Intro *introList; // size=76, offset=124
	struct DrMoveAniTex *bgAniList; // size=8, offset=128
	long numHotSpots; // size=0, offset=132
	struct _HotSpot *hotSpotList; // size=8, offset=136
	void *objectNameList; // size=0, offset=140
	long depthQFogStart; // size=0, offset=144
	long morphLastStep; // size=0, offset=148
	char *worldName; // size=0, offset=152
	struct VramSize vramSize; // size=8, offset=156
	unsigned short holdFogFar; // size=0, offset=164
	unsigned short holdFogNear; // size=0, offset=166
	long numberEnemyUnits; // size=0, offset=168
	char **enemyUnitsNames; // size=0, offset=172
	long **timesSignalList; // size=0, offset=176
	struct _MultiSignal *spectralSignal; // size=904, offset=180
	struct _MultiSignal *materialSignal; // size=904, offset=184
	struct _MultiSignal *startUnitLoadedSignal; // size=904, offset=188
	struct _MultiSignal *startUnitMainSignal; // size=904, offset=192
	struct _MultiSignal *startGoingIntoWaterSignal; // size=904, offset=196
	struct _MultiSignal *startGoingOutOfWaterSignal; // size=904, offset=200
	long unitFlags; // size=0, offset=204
	struct _MultiSignal *SignalListStart; // size=904, offset=208
	struct _MultiSignal *SignalListEnd; // size=904, offset=212
	long numBSPLeaves; // size=0, offset=216
	struct EventPointers *PuzzleInstances; // size=0, offset=220
	long NumberOfPlanMarkers; // size=0, offset=224
	struct _PlanMkr *PlanMarkerList; // size=8, offset=228
	long NumberOfSFXMarkers; // size=0, offset=232
	struct _SFXMkr *SFXMarkerList; // size=36, offset=236
	unsigned long versionNumber; // size=0, offset=240
	char *dynamicMusicName; // size=0, offset=244
	long streamUnitID; // size=0, offset=248
	struct TClassAttr tClassAttr[16]; // size=64, offset=252
	short TODLighting[4][3]; // size=24, offset=316
	unsigned char TODbackColor[4][3]; // size=12, offset=340
	unsigned short TODfogNearFar[4][2]; // size=16, offset=352
	short TODRedScale; // size=0, offset=368
	short TODGrnScale; // size=0, offset=370
	short TODBluScale; // size=0, offset=372
	short TODfogNear; // size=0, offset=374
	short TODfogFar; // size=0, offset=376
	short short_pad; // size=0, offset=378
	unsigned char TODbackColorR; // size=0, offset=380
	unsigned char TODbackColorG; // size=0, offset=381
	unsigned char TODbackColorB; // size=0, offset=382
	unsigned char cpad3; // size=0, offset=383
	struct LightGroup *razielLightGroup; // size=64, offset=384
	struct LightGroup *razielSpectralLightGroup; // size=64, offset=388
};

struct _SavedCinematic // hashcode: 0x1E29151B (dec: 506008859)
{
	struct _Position position; // size=6, offset=0
	struct _Position focusPoint; // size=6, offset=6
	struct _Position base; // size=6, offset=12
	struct _Position targetPos; // size=6, offset=18
	struct _Position targetFocusPoint; // size=6, offset=24
	struct _Position targetBase; // size=6, offset=30
	struct _Rotation baseRot; // size=8, offset=36
	struct _Rotation focusRotation; // size=8, offset=44
	struct _Rotation targetFocusRotation; // size=8, offset=52
	short focusDistance; // size=0, offset=60
	short targetFocusDistance; // size=0, offset=62
	struct _SVector focusPointVel; // size=8, offset=64
	struct _SVector focusPointAccl; // size=8, offset=72
	struct _SVector baseVel; // size=8, offset=80
	struct _SVector baseAccl; // size=8, offset=88
	long maxVel; // size=0, offset=96
	struct MultiSpline *posSpline; // size=0, offset=100
	struct MultiSpline *targetSpline; // size=0, offset=104
	struct Level *level; // size=0, offset=108
};

struct BSPTree // hashcode: 0x17800192 (dec: 394264978)
{
	struct _BSPNode *bspRoot; // size=44, offset=0
	struct _BSPLeaf *startLeaves; // size=48, offset=4
	struct _BSPLeaf *endLeaves; // size=48, offset=8
	struct _Position globalOffset; // size=6, offset=12
	short flags; // size=0, offset=18
	struct _Position localOffset; // size=6, offset=20
	short ID; // size=0, offset=26
	long splineID; // size=0, offset=28
	struct _Instance *instanceSpline; // size=616, offset=32
};

struct LightGroup // hashcode: 0xBB5FF847 (dec: -1151338425)
{
	struct MATRIX lightMatrix; // size=32, offset=0
	struct MATRIX colorMatrix; // size=32, offset=32
};

struct LightList // hashcode: 0xC8448BB7 (dec: -935031881)
{
	struct CVECTOR ambient; // size=4, offset=0
	long numLightGroups; // size=0, offset=4
	struct LightGroup *lightGroupList; // size=64, offset=8
};

struct PointLight // hashcode: 0xFEFDD2F2 (dec: -16919822)
{
	struct NodeType node; // size=8, offset=0
	unsigned char r; // size=0, offset=8
	unsigned char g; // size=0, offset=9
	unsigned char b; // size=0, offset=10
	unsigned char flags; // size=0, offset=11
	struct _Position position; // size=6, offset=12
	short radius; // size=0, offset=18
	long radiusSquared; // size=0, offset=20
};

struct SpotLight // hashcode: 0xEF8B4C2E (dec: -276083666)
{
	struct NodeType node; // size=8, offset=0
	unsigned char r; // size=0, offset=8
	unsigned char g; // size=0, offset=9
	unsigned char b; // size=0, offset=10
	unsigned char flags; // size=0, offset=11
	struct _Position centroid; // size=6, offset=12
	short radius; // size=0, offset=18
	long radiusSquared; // size=0, offset=20
	struct _Position position; // size=6, offset=24
	struct _Position direction; // size=6, offset=30
	short cosFalloffAngle; // size=0, offset=36
	short attenuationScale; // size=0, offset=38
};

struct LightInfo // hashcode: 0x2A95530E (dec: 714429198)
{
	long numPointLights; // size=0, offset=0
	struct PointLight pointLightPool[32]; // size=768, offset=4
	struct NodeType usedPointLightList; // size=8, offset=772
	struct NodeType freePointLightList; // size=8, offset=780
	struct NodeType activePointLightList; // size=8, offset=788
	long numSpotLights; // size=0, offset=796
	struct SpotLight spotLightPool[8]; // size=320, offset=800
	struct NodeType usedSpotLightList; // size=8, offset=1120
	struct NodeType freeSpotLightList; // size=8, offset=1128
	struct NodeType activeSpotLightList; // size=8, offset=1136
	long numSavedColors; // size=0, offset=1144
};

struct _VMOffset // hashcode: 0x680AC445 (dec: 1745536069)
{
	short dx; // size=0, offset=0
	short dy; // size=0, offset=2
	short dz; // size=0, offset=4
};

struct _VMColorOffset // hashcode: 0xFD3FB530 (dec: -46156496)
{
	char dr; // size=0, offset=0
	char dg; // size=0, offset=1
	char db; // size=0, offset=2
};

struct _VMInterpolated // hashcode: 0x3A40B5C0 (dec: 977319360)
{
	short tvIdx; // size=0, offset=0
	short startIdx; // size=0, offset=2
	short endIdx; // size=0, offset=4
	short time; // size=0, offset=6
};

struct _VMOffsetTable // hashcode: 0xE4A13881 (dec: -459196287)
{
	long numVMOffsets; // size=0, offset=0
	union {
		struct _VMOffset moveOffsets; // size=6, offset=0
		struct _VMColorOffset colorOffsets; // size=3, offset=0
	} offsets; // size=6, offset=4, found in object files: player.o, player.o
};

struct _VMObject // hashcode: 0x436E75EB (dec: 1131312619)
{
	unsigned short flags; // size=0, offset=0
	short bspIdx; // size=0, offset=2
	short materialIdx; // size=0, offset=4
	short spectralIdx; // size=0, offset=6
	short currentIdx; // size=0, offset=8
	short timeScale; // size=0, offset=10
	long timer; // size=0, offset=12
	struct _Position position; // size=6, offset=16
	short radius; // size=0, offset=22
	long radiusSquared; // size=0, offset=24
	long numVMOffsetTables; // size=0, offset=28
	struct _VMOffsetTable **vmoffsetTableList; // size=12, offset=32
	struct _VMOffsetTable *curVMOffsetTable; // size=12, offset=36
	long numVMVertices; // size=0, offset=40
	void *vmvertexList; // size=0, offset=44
	long numVMInterpolated; // size=0, offset=48
	struct _VMInterpolated *vminterpolatedList; // size=8, offset=52
	char *name; // size=0, offset=56
};

struct _VGroup // hashcode: 0x4421FB39 (dec: 1143077689)
{
	long id; // size=0, offset=0
	long numVertices; // size=0, offset=4
	struct _TVertex **vertexList; // size=12, offset=8
};

struct _HotSpot // hashcode: 0x6EC4F776 (dec: 1858402166)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short id; // size=0, offset=6
};

struct _PlanMkr // hashcode: 0xBC0DD043 (dec: -1139945405)
{
	struct _Position pos; // size=6, offset=0
	short id; // size=0, offset=6
};

struct _SFXMkr // hashcode: 0x74BB4848 (dec: 1958430792)
{
	unsigned char *soundData; // size=0, offset=0
	long uniqueID; // size=0, offset=4
	struct SoundInstance sfxTbl[4]; // size=12, offset=8
	struct _Position pos; // size=6, offset=20
	short pad; // size=0, offset=26
	long livesInOnePlace; // size=0, offset=28
	long inSpectral; // size=0, offset=32
};

struct TClassAttr // hashcode: 0x4DC02369 (dec: 1304437609)
{
	short flags; // size=0, offset=0
	unsigned short sound; // size=0, offset=2
};

struct _ColorType // hashcode: 0x440E837C (dec: 1141801852)
{
	unsigned char r; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char b; // size=0, offset=2
	unsigned char code; // size=0, offset=3
};

struct _CameraCore_Type // hashcode: 0xD341D51C (dec: -750660324)
{
	struct _Position position; // size=6, offset=0
	short pad1; // size=0, offset=6
	struct MATRIX vvNormalWorVecMat[2]; // size=64, offset=8
	long vvPlaneConsts[6]; // size=24, offset=72
	struct MATRIX *wcTransform; // size=32, offset=96
	long farPlane; // size=0, offset=100
	long projDistance; // size=0, offset=104
	long nearPlane; // size=0, offset=108
	struct MATRIX *wcTransform2; // size=32, offset=112
	struct MATRIX *cwTransform2; // size=32, offset=116
	struct _Normal viewVolumeNormal[5]; // size=40, offset=120
	int leftX; // size=0, offset=160
	int rightX; // size=0, offset=164
	int topY; // size=0, offset=168
	int bottomY; // size=0, offset=172
	struct _Rotation rotation; // size=8, offset=176
	short pad2; // size=0, offset=184
	struct _SVector screenScale; // size=8, offset=186
	short pad3; // size=0, offset=194
	struct _Position debugPos; // size=6, offset=196
	short pad4; // size=0, offset=202
	struct _Rotation debugRot; // size=8, offset=204
	short pad5; // size=0, offset=212
	struct _Position nondebugPos; // size=6, offset=214
	short pad6; // size=0, offset=220
};

struct PLAYER_114fake // hashcode: 0x5A1E67AD (dec: 1511942061)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: player.o, player.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: player.o, player.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: player.o, player.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: player.o, player.o
};

struct SpuVolume // hashcode: 0x1BD13981 (dec: 466696577)
{
	short left; // size=0, offset=0
	short right; // size=0, offset=2
};

struct SpuVoiceAttr // hashcode: 0x819E0A50 (dec: -2120349104)
{
	unsigned long voice; // size=0, offset=0
	unsigned long mask; // size=0, offset=4
	struct SpuVolume volume; // size=4, offset=8
	struct SpuVolume volmode; // size=4, offset=12
	struct SpuVolume volumex; // size=4, offset=16
	unsigned short pitch; // size=0, offset=20
	unsigned short note; // size=0, offset=22
	unsigned short sample_note; // size=0, offset=24
	short envx; // size=0, offset=26
	unsigned long addr; // size=0, offset=28
	unsigned long loop_addr; // size=0, offset=32
	long a_mode; // size=0, offset=36
	long s_mode; // size=0, offset=40
	long r_mode; // size=0, offset=44
	unsigned short ar; // size=0, offset=48
	unsigned short dr; // size=0, offset=50
	unsigned short sr; // size=0, offset=52
	unsigned short rr; // size=0, offset=54
	unsigned short sl; // size=0, offset=56
	unsigned short adsr1; // size=0, offset=58
	unsigned short adsr2; // size=0, offset=60
};

struct SpuExtAttr // hashcode: 0x58B0F474 (dec: 1487991924)
{
	struct SpuVolume volume; // size=4, offset=0
	long reverb; // size=0, offset=4
	long mix; // size=0, offset=8
};

struct SpuStVoiceAttr // hashcode: 0xAFDFBA7E (dec: -1344292226)
{
	char status; // size=0, offset=0
	char pad1; // size=0, offset=1
	char pad2; // size=0, offset=2
	char pad3; // size=0, offset=3
	long last_size; // size=0, offset=4
	unsigned long buf_addr; // size=0, offset=8
	unsigned long data_addr; // size=0, offset=12
};

struct AadSoundBankHdr // hashcode: 0x453DB83F (dec: 1161672767)
{
	unsigned long bankID; // size=0, offset=0
	unsigned long headerSize; // size=0, offset=4
	int bankVersion; // size=0, offset=8
	int numPrograms; // size=0, offset=12
	int numTones; // size=0, offset=16
	int numWaves; // size=0, offset=20
	int numSequences; // size=0, offset=24
	int numLabels; // size=0, offset=28
	int reverbMode; // size=0, offset=32
	int reverbDepth; // size=0, offset=36
};

struct AadProgramAtr // hashcode: 0x13FC0BEF (dec: 335285231)
{
	unsigned short numTones; // size=0, offset=0
	unsigned short firstTone; // size=0, offset=2
	unsigned char volume; // size=0, offset=4
	unsigned char panPosition; // size=0, offset=5
	unsigned short unused; // size=0, offset=6
};

struct AadToneAtr // hashcode: 0x990CD685 (dec: -1727211899)
{
	unsigned char priority; // size=0, offset=0
	unsigned char parentProgram; // size=0, offset=1
	unsigned char volume; // size=0, offset=2
	unsigned char panPosition; // size=0, offset=3
	unsigned char centerNote; // size=0, offset=4
	char centerFine; // size=0, offset=5
	unsigned char minNote; // size=0, offset=6
	unsigned char maxNote; // size=0, offset=7
	unsigned char mode; // size=0, offset=8
	unsigned char pitchBendMax; // size=0, offset=9
	unsigned short adsr1; // size=0, offset=10
	unsigned short adsr2; // size=0, offset=12
	short waveIndex; // size=0, offset=14
};

struct _AadDynSfxFileHdr // hashcode: 0xB9609773 (dec: -1184852109)
{
	unsigned long snfID; // size=0, offset=0
	unsigned short snfVersion; // size=0, offset=4
	unsigned short uniqueID; // size=0, offset=6
	unsigned short handle; // size=0, offset=8
	unsigned short numSfxInFile; // size=0, offset=10
	struct _AadDynSfxFileHdr *prevDynSfxFile; // size=20, offset=12
	struct _AadDynSfxFileHdr *nextDynSfxFile; // size=20, offset=16
};

struct AadDynSfxAttr // hashcode: 0x20751E4B (dec: 544546379)
{
	unsigned short sfxID; // size=0, offset=0
	unsigned short waveID; // size=0, offset=2
	struct AadToneAtr toneAttr; // size=16, offset=4
	unsigned long waveSize; // size=0, offset=20
};

struct AadTempoCounter // hashcode: 0x15707CC0 (dec: 359693504)
{
	unsigned long currentTick; // size=0, offset=0
	unsigned long currentError; // size=0, offset=4
	unsigned long tickTimeFixed; // size=0, offset=8
	unsigned long errorPerUpdate; // size=0, offset=12
	unsigned short ticksPerUpdate; // size=0, offset=16
	unsigned short ppqn; // size=0, offset=18
	unsigned long quarterNoteTime; // size=0, offset=20
};

struct AadSeqEvent // hashcode: 0x3E306185 (dec: 1043358085)
{
	unsigned long deltaTime; // size=0, offset=0
	unsigned char track; // size=0, offset=4
	unsigned char statusByte; // size=0, offset=5
	char dataByte[6]; // size=6, offset=6
};

struct _AadSequenceSlot // hashcode: 0xD7421DD6 (dec: -683532842)
{
	struct AadTempoCounter tempo; // size=24, offset=0
	struct AadSeqEvent eventQueue[4][16]; // size=768, offset=24
	unsigned char eventIn[16]; // size=16, offset=792
	unsigned char eventOut[16]; // size=16, offset=808
	unsigned char eventsInQueue[16]; // size=16, offset=824
	unsigned char (*sequencePosition[16]); // size=64, offset=840
	unsigned long lastEventExecutedTime[16]; // size=64, offset=904
	unsigned char runningStatus[16]; // size=16, offset=968
	unsigned char trackFlags[16]; // size=16, offset=984
	unsigned char (*loopSequencePosition[4][16]); // size=256, offset=1000
	unsigned char loopCurrentNestLevel[16]; // size=16, offset=1256
	unsigned char loopCounter[4][16]; // size=64, offset=1272
	struct _AadSequenceSlot *selectedSlotPtr; // size=1488, offset=1336
	unsigned char selectedSlotNum; // size=0, offset=1340
	unsigned char selectedChannel; // size=0, offset=1341
	unsigned char sequenceNumberAssigned; // size=0, offset=1342
	unsigned char thisSlotNumber; // size=0, offset=1343
	unsigned short status; // size=0, offset=1344
	unsigned short channelMute; // size=0, offset=1346
	unsigned short delayedMuteMode; // size=0, offset=1348
	unsigned short delayedMuteCmds; // size=0, offset=1350
	unsigned short delayedUnMuteCmds; // size=0, offset=1352
	unsigned short unused; // size=0, offset=1354
	unsigned short enableSustainUpdate; // size=0, offset=1356
	unsigned short ignoreTranspose; // size=0, offset=1358
	unsigned char slotFlags; // size=0, offset=1360
	unsigned char slotID; // size=0, offset=1361
	unsigned char slotVolume; // size=0, offset=1362
	unsigned char slotPan; // size=0, offset=1363
	int *masterVolPtr; // size=0, offset=1364
	int selectedDynamicBank; // size=0, offset=1368
	int sequenceAssignedDynamicBank; // size=0, offset=1372
	unsigned char currentDynamicBank[16]; // size=16, offset=1376
	unsigned short pitchWheel[16]; // size=32, offset=1392
	unsigned char currentProgram[16]; // size=16, offset=1424
	unsigned char volume[16]; // size=16, offset=1440
	unsigned char panPosition[16]; // size=16, offset=1456
	char transpose[16]; // size=16, offset=1472
};

struct AadSfxCommand // hashcode: 0xD8F832F6 (dec: -654822666)
{
	unsigned char statusByte; // size=0, offset=0
	unsigned char dataByte[3]; // size=3, offset=1
	unsigned long ulongParam; // size=0, offset=4
	short shortParam; // size=0, offset=8
	unsigned short unused; // size=0, offset=10
};

struct AadSfxSlot // hashcode: 0x6E655A78 (dec: 1852136056)
{
	struct AadSfxCommand commandQueue[32]; // size=384, offset=0
	unsigned char commandIn; // size=0, offset=384
	unsigned char commandOut; // size=0, offset=385
	unsigned short commandsInQueue; // size=0, offset=386
	unsigned short handleCounter; // size=0, offset=388
	unsigned char sfxVolume; // size=0, offset=390
	unsigned char sfxPan; // size=0, offset=391
};

struct AadSynthVoice // hashcode: 0x12E02CA2 (dec: 316681378)
{
	unsigned long voiceMask; // size=0, offset=0
	unsigned long handle; // size=0, offset=4
	unsigned char voiceID; // size=0, offset=8
	unsigned char priority; // size=0, offset=9
	unsigned char note; // size=0, offset=10
	unsigned char unused; // size=0, offset=11
	unsigned char program; // size=0, offset=12
	unsigned char baseProg; // size=0, offset=13
	unsigned char volume; // size=0, offset=14
	unsigned char updateVol; // size=0, offset=15
	unsigned char pan; // size=0, offset=16
	unsigned char voiceNum; // size=0, offset=17
	unsigned short flags; // size=0, offset=18
	struct AadToneAtr *toneAtr; // size=16, offset=20
	struct AadProgramAtr *progAtr; // size=8, offset=24
};

struct AadDynamicLoadRequest // hashcode: 0xBC9D60B7 (dec: -1130536777)
{
	int type; // size=0, offset=0
	int handle; // size=0, offset=4
	long directoryID; // size=0, offset=8
	long flags; // size=0, offset=12
	char fileName[12]; // size=12, offset=16
};

struct AadDynamicBankLoadInfo // hashcode: 0x6A3AE9FB (dec: 1782245883)
{
	char sndFileName[32]; // size=32, offset=0
	char smpFileName[32]; // size=32, offset=32
	int dynamicBankIndex; // size=0, offset=64
	int loadOption; // size=0, offset=68
	void (*userCallbackProc)(); // size=0, offset=72
	unsigned long sramDataSize; // size=0, offset=76
	unsigned long nextSramAddr; // size=0, offset=80
	unsigned long flags; // size=0, offset=84
};

struct AadDynamicSfxLoadInfo // hashcode: 0xEDD41D4C (dec: -304865972)
{
	char snfFileName[40]; // size=40, offset=0
	char smfFileName[40]; // size=40, offset=40
	int fileHandle; // size=0, offset=80
	long directoryID; // size=0, offset=84
	long loadFlags; // size=0, offset=88
	long flags; // size=0, offset=92
	int smfLoadingState; // size=0, offset=96
	unsigned long bytesToLoad; // size=0, offset=100
	int numSfxToLoad; // size=0, offset=104
	int error; // size=0, offset=108
	unsigned long waveTransferAddr; // size=0, offset=112
	unsigned long totalSramUsed; // size=0, offset=116
	struct _AadDynSfxFileHdr *snfFile; // size=20, offset=120
	struct AadDynSfxAttr attr; // size=24, offset=124
};

struct AadNewSramBlockDesc // hashcode: 0x4DF7A665 (dec: 1308075621)
{
	unsigned short waveID; // size=0, offset=0
	unsigned short address; // size=0, offset=2
	unsigned short size; // size=0, offset=4
	unsigned char prevIndex; // size=0, offset=6
	unsigned char nextIndex; // size=0, offset=7
};

struct AadLoadedSfxToneAttr // hashcode: 0xC1F66431 (dec: -1040817103)
{
	unsigned short referenceCount; // size=0, offset=0
	unsigned short waveID; // size=0, offset=2
	struct AadToneAtr toneAttr; // size=16, offset=4
};

struct AadLoadedSfxWaveAttr // hashcode: 0x3EFD9321 (dec: 1056805665)
{
	unsigned short referenceCount; // size=0, offset=0
	unsigned char unused; // size=0, offset=2
	unsigned char sramHandle; // size=0, offset=3
};

struct AadSramDefragInfo // hashcode: 0xB08B77B9 (dec: -1333037127)
{
	int status; // size=0, offset=0
	unsigned char *fragBuffer; // size=0, offset=4
	int masterListEntry; // size=0, offset=8
	int waveID; // size=0, offset=12
	unsigned long destSramAddr; // size=0, offset=16
	unsigned long srcSramAddr; // size=0, offset=20
	unsigned long moveSize; // size=0, offset=24
	unsigned long readSize; // size=0, offset=28
};

struct AadVolFader // hashcode: 0x053CCA3C (dec: 87870012)
{
	int volumeStep; // size=0, offset=0
	int targetVolume; // size=0, offset=4
	void (*fadeCompleteCallback)(); // size=0, offset=8
};

struct MusicLoadCmd // hashcode: 0x575883B8 (dec: 1465418680)
{
	int type; // size=0, offset=0
	int data; // size=0, offset=4
};

struct gSoundData // hashcode: 0x100090FC (dec: 268472572)
{
	unsigned long gMasterVol; // size=0, offset=0
	unsigned long gMusicVol; // size=0, offset=4
	unsigned long gSfxVol; // size=0, offset=8
	unsigned long gVoiceVol; // size=0, offset=12
	char gSfxOn; // size=0, offset=16
	char gMusicOn; // size=0, offset=17
	char gVoiceOn; // size=0, offset=18
	char soundsLoaded; // size=0, offset=19
};

struct GameTracker // hashcode: 0x4EB3EFC5 (dec: 1320415173)
{
	struct _GameData_Type gameData; // size=32, offset=0
	struct menu_t *menu; // size=0, offset=32
	struct memcard_t *memcard; // size=0, offset=36
	struct Level *level; // size=392, offset=40
	struct _Instance *playerInstance; // size=616, offset=44
	long drawPage; // size=0, offset=48
	struct _InstanceList *instanceList; // size=268, offset=52
	struct _InstancePool *instancePool; // size=38204, offset=56
	struct _VertexPool *vertexPool; // size=6336, offset=60
	struct _PrimPool *primPool; // size=96012, offset=64
	struct _ObjectTracker *GlobalObjects; // size=36, offset=68
	long controlCommand[2][5]; // size=40, offset=72
	long controlData[2][5]; // size=40, offset=112
	long overrideData[2][5]; // size=40, offset=152
	long debugFlags; // size=0, offset=192
	long debugFlags2; // size=0, offset=196
	struct CVECTOR wipeColor; // size=4, offset=200
	short wipeTime; // size=0, offset=204
	short maxWipeTime; // size=0, offset=206
	short wipeType; // size=0, offset=208
	short numGSignals; // size=0, offset=210
	void (*gSignal[16]); // size=64, offset=212
	struct LightInfo *lightInfo; // size=1148, offset=276
	void *reqDisp; // size=0, offset=280
	long *drawTimerReturn; // size=0, offset=284
	long usecsStartDraw; // size=0, offset=288
	void *disp; // size=0, offset=292
	unsigned long displayFrameCount; // size=0, offset=296
	unsigned long frameCount; // size=0, offset=300
	unsigned long fps30Count; // size=0, offset=304
	unsigned long vblFrames; // size=0, offset=308
	unsigned long vblCount; // size=0, offset=312
	long numMatrices; // size=0, offset=316
	long gameFlags; // size=0, offset=320
	long streamFlags; // size=0, offset=324
	void *drawNonAnimatedSegmentFunc; // size=0, offset=328
	void *drawAnimatedModelFunc; // size=0, offset=332
	void *drawDisplayPolytopeListFunc; // size=0, offset=336
	void *drawBgFunc; // size=0, offset=340
	struct Level *mainDrawUnit; // size=392, offset=344
	char baseAreaName[16]; // size=16, offset=348
	short levelDone; // size=0, offset=364
	short levelChange; // size=0, offset=366
	short hideBG; // size=0, offset=368
	short gameMode; // size=0, offset=370
	long currentHotSpot; // size=0, offset=372
	long StreamUnitID; // size=0, offset=376
	short SwitchToNewStreamUnit; // size=0, offset=380
	short SwitchToNewWarpIndex; // size=0, offset=382
	char S_baseAreaName[16]; // size=16, offset=384
	short toSignal; // size=0, offset=400
	short fromSignal; // size=0, offset=402
	char LastSignal; // size=0, offset=404
	short StreamNormalA; // size=0, offset=406
	short StreamNormalB; // size=0, offset=408
	short StreamNormalC; // size=0, offset=410
	long StreamNormalD; // size=0, offset=412
	long moveRazielToStreamID; // size=0, offset=416
	struct _ColorType animObjLine; // size=4, offset=420
	struct _ColorType animObjShade; // size=4, offset=424
	long maxIntroFXTime; // size=0, offset=428
	struct gSoundData sound; // size=20, offset=432
	short controllerMode; // size=0, offset=452
	unsigned char plan_collide_override; // size=0, offset=454
	unsigned char cheatMode; // size=0, offset=455
	char currentLvl; // size=0, offset=456
	char lastLvl; // size=0, offset=457
	struct Object *introFX; // size=76, offset=460
	struct Intro *introFXIntro; // size=76, offset=464
	unsigned long **drawOT; // size=0, offset=468
	unsigned long **dispOT; // size=0, offset=472
	struct P_TAG *savedOTStart; // size=8, offset=476
	struct P_TAG *savedOTEnd; // size=8, offset=480
	long introWaitTime; // size=0, offset=484
	long mirrorZPush; // size=0, offset=488
	long defVVRemoveDist; // size=0, offset=492
	long defRemoveDist; // size=0, offset=496
	struct _Position forcedStartPosition; // size=6, offset=500
	short hudCollDisplay; // size=0, offset=506
	long primMemUsed; // size=0, offset=508
	long cheatTimerCount; // size=0, offset=512
	long playerCheatFlags; // size=0, offset=516
	long savedPlayerCameraMode; // size=0, offset=520
	long debugDrawFlags; // size=0, offset=524
	void *planningPool; // size=0, offset=528
	void *enemyPlanPool; // size=0, offset=532
	unsigned char block_collide_override; // size=0, offset=536
	unsigned char raziel_collide_override; // size=0, offset=537
	short timeOfDay; // size=0, offset=538
	long decoupleGame; // size=0, offset=540
	long multGameTime; // size=0, offset=544
	short spectral_fadeValue; // size=0, offset=548
	short material_fadeValue; // size=0, offset=550
	unsigned long drawTime; // size=0, offset=552
	unsigned long currentTime; // size=0, offset=556
	unsigned long currentMaterialTime; // size=0, offset=560
	unsigned long currentSpectralTime; // size=0, offset=564
	unsigned long currentTimeOfDayTime; // size=0, offset=568
	unsigned long lastLoopTime; // size=0, offset=572
	unsigned long timeMult; // size=0, offset=576
	unsigned long globalTimeMult; // size=0, offset=580
	unsigned long spectralTimeMult; // size=0, offset=584
	unsigned long materialTimeMult; // size=0, offset=588
	unsigned long currentTicks; // size=0, offset=592
	unsigned long totalTime; // size=0, offset=596
	unsigned long idleTime; // size=0, offset=600
	long visibleInstances; // size=0, offset=604
	int gameFramePassed; // size=0, offset=608
	unsigned long timeSinceLastGameFrame; // size=0, offset=612
	long frameRateLock; // size=0, offset=616
	short frameRate24fps; // size=0, offset=620
	char monster_collide_override; // size=0, offset=622
	char pad; // size=0, offset=623
};

struct Spline // hashcode: 0xA7B8D53F (dec: -1481059009)
{
	struct SplineKey *key; // size=32, offset=0
	short numkeys; // size=0, offset=4
	unsigned char type; // size=0, offset=6
	unsigned char flags; // size=0, offset=7
};

struct vecS // hashcode: 0xEADB8F3A (dec: -354709702)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct vecL // hashcode: 0x7575CB14 (dec: 1970653972)
{
	long x; // size=0, offset=0
	long y; // size=0, offset=4
	long z; // size=0, offset=8
};

struct SplineRotKey // hashcode: 0xD2E3A87E (dec: -756832130)
{
	short count; // size=0, offset=0
	struct _G2Quat_Type q; // size=8, offset=2
};

struct RSpline // hashcode: 0xD9C500BD (dec: -641400643)
{
	struct SplineRotKey *key; // size=10, offset=0
	short numkeys; // size=0, offset=4
	unsigned char type; // size=0, offset=6
	unsigned char flags; // size=0, offset=7
};

struct SplineKey // hashcode: 0x5D3D994D (dec: 1564318029)
{
	short count; // size=0, offset=0
	struct vecS point; // size=6, offset=2
	struct vecL dd; // size=12, offset=8
	struct vecL ds; // size=12, offset=20
};

struct SplineDef // hashcode: 0x04DD5459 (dec: 81613913)
{
	short currkey; // size=0, offset=0
	unsigned short denomFlag; // size=0, offset=2
	long fracCurr; // size=0, offset=4
};

struct _HVertex // hashcode: 0xC488A83D (dec: -997676995)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short normal; // size=0, offset=6
	long pad; // size=0, offset=8
};

struct _MONAPI_Regenerator // hashcode: 0x37E0AA1B (dec: 937470491)
{
	unsigned long regenTime; // size=0, offset=0
	short introUniqueID; // size=0, offset=4
	short streamUnitID; // size=0, offset=6
};

struct __Event // hashcode: 0xBC16D673 (dec: -1139353997)
{
	int ID; // size=0, offset=0
	int Data; // size=0, offset=4
};

struct __MessageQueue // hashcode: 0x473062B5 (dec: 1194353333)
{
	int Head; // size=0, offset=0
	int Tail; // size=0, offset=4
	struct __Event Queue[16]; // size=128, offset=8
};

struct __State // hashcode: 0xA27CC1F7 (dec: -1568882185)
{
	void (*Process)(); // size=0, offset=0
	struct __MessageQueue Event; // size=136, offset=4
	struct __MessageQueue Defer; // size=136, offset=140
	int Data1; // size=0, offset=276
	int Data2; // size=0, offset=280
};

struct POLY_F4 // hashcode: 0xE2AC295D (dec: -492033699)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
	short x2; // size=0, offset=16
	short y2; // size=0, offset=18
	short x3; // size=0, offset=20
	short y3; // size=0, offset=22
};

struct _SmallRotation // hashcode: 0xB9CA5EE3 (dec: -1177919773)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct EventPointers // hashcode: 0x3787E212 (dec: 931652114)
{
	long numPuzzles; // size=0, offset=0
	struct Event (*eventInstances[1]); // size=4, offset=4
};

struct Camera // hashcode: 0x0670C20F (dec: 108053007)
{
	struct _CameraCore_Type core; // size=224, offset=0
	long shake; // size=0, offset=224
	short shakeFrame; // size=0, offset=228
	short shakeScale; // size=0, offset=230
	long flags; // size=0, offset=232
	long lock; // size=0, offset=236
	short mode; // size=0, offset=240
	short state; // size=0, offset=242
	short posState; // size=0, offset=244
	short rotState; // size=0, offset=246
	short tiltState; // size=0, offset=248
	short distanceState; // size=0, offset=250
	short lagZ; // size=0, offset=252
	short tilt; // size=0, offset=254
	struct _Position focusPoint; // size=6, offset=256
	short focusDistance; // size=0, offset=262
	struct _Instance *focusInstance; // size=616, offset=264
	struct _Position oldFocusInstancePos; // size=6, offset=268
	struct _Position newFocusInstancePos; // size=6, offset=274
	struct _Rotation oldFocusInstanceRot; // size=8, offset=280
	struct _Rotation newFocusInstanceRot; // size=8, offset=288
	struct _SVector focusInstanceVelVec; // size=8, offset=296
	struct _Position focusLeadPivot; // size=6, offset=304
	struct _Position focusOffset; // size=6, offset=310
	struct _Rotation focusRotation; // size=8, offset=316
	short tiltVel; // size=0, offset=324
	short tiltAccl; // size=0, offset=326
	struct _SVector positionVel; // size=8, offset=328
	struct _SVector positionAccl; // size=8, offset=336
	struct _SVector focusPointVel; // size=8, offset=344
	struct _SVector focusPointAccl; // size=8, offset=352
	short focusDistanceVel; // size=0, offset=360
	short focusDistanceAccl; // size=0, offset=362
	struct _SVector focusRotVel; // size=8, offset=364
	struct _SVector focusRotAccl; // size=8, offset=372
	struct _SVector maxFocusVel; // size=8, offset=380
	struct _SVector rotationVel; // size=8, offset=388
	struct _SVector rotationAccl; // size=8, offset=396
	short maxVel; // size=0, offset=404
	short maxRot; // size=0, offset=406
	struct _Position targetPos; // size=6, offset=408
	short targetTilt; // size=0, offset=414
	struct _Rotation targetRotation; // size=8, offset=416
	short targetFocusDistance; // size=0, offset=424
	struct _Position targetFocusPoint; // size=6, offset=426
	short collisionTargetFocusDistance; // size=0, offset=432
	struct _Rotation targetFocusRotation; // size=8, offset=434
	short tfaceTilt; // size=0, offset=442
	struct _Rotation collisionTargetFocusRotation; // size=8, offset=444
	short smooth; // size=0, offset=452
	struct _CameraKey *cameraKey; // size=24, offset=456
	struct _Sphere focusSphere; // size=12, offset=460
	struct _Sphere smallBaseSphere; // size=12, offset=472
	struct _Sphere posSphere; // size=12, offset=484
	short lookTimer; // size=0, offset=496
	short lookSavedMode; // size=0, offset=498
	short presetIndex; // size=0, offset=500
	short presetFocusDistance[3]; // size=6, offset=502
	long minFocusDistance; // size=0, offset=508
	long maxFocusDistance; // size=0, offset=512
	long minTilt; // size=0, offset=516
	long maxTilt; // size=0, offset=520
	long pad[3]; // size=12, offset=524
	long minXYDist; // size=0, offset=536
	long maxXYDist; // size=0, offset=540
	long oppositeError; // size=0, offset=544
	long tempsplinePointAhead; // size=0, offset=548
	long noTeleport; // size=0, offset=552
	long focusDistanceList[3][3]; // size=36, offset=556
	long tiltList[3][3]; // size=36, offset=592
	long cineControl; // size=0, offset=628
	short stack; // size=0, offset=632
	short targetStack; // size=0, offset=634
	long savedMode[3]; // size=12, offset=636
	long savedTargetFocusDistance[3]; // size=12, offset=648
	struct _Rotation savedFocusRotation; // size=8, offset=660
	short savedFocusDistance; // size=0, offset=668
	short signalFocusDistance; // size=0, offset=670
	struct _SavedCinematic savedCinematic[3]; // size=336, offset=672
	struct _Rotation savedfocusRotation; // size=8, offset=1008
	struct _Position signalPos; // size=6, offset=1016
	short pad11; // size=0, offset=1022
	struct _Rotation signalRot; // size=8, offset=1024
	short forced_movement; // size=0, offset=1032
	short last_forced_movement; // size=0, offset=1034
	short rotDirection; // size=0, offset=1036
	unsigned long lastModTime; // size=0, offset=1040
	struct _Rotation lookRot; // size=8, offset=1044
	struct MultiSpline *Spline00; // size=0, offset=1052
	struct MultiSpline *Spline01; // size=0, offset=1056
	struct {
		struct {
			struct MultiSpline *posSpline; // size=0, offset=0
			struct MultiSpline *targetSpline; // size=0, offset=4
			struct _SVector lastSplinePos; // size=8, offset=8
			short splinePointAhead; // size=0, offset=16
			short cinema_done; // size=0, offset=18
			int splinecam_currkey; // size=0, offset=20
			int splinecam_helpkey; // size=0, offset=24
		} Cinematic; // size=28, offset=0, found in object files: debug.o, debug.o
		struct {
			struct _Position offset; // size=6, offset=0
			struct _Rotation rotation; // size=8, offset=6
			long focusDistance; // size=0, offset=16
		} Idle; // size=20, offset=28, found in object files: debug.o, debug.o
		struct {
			struct _TFace *tface; // size=12, offset=0
			struct _TFace *oldTFace; // size=12, offset=4
			struct _SVector oldTargetRot; // size=8, offset=8
			long timer; // size=0, offset=16
			struct _SVector oldFocusInstancePos; // size=8, offset=20
		} Behind; // size=28, offset=48, found in object files: debug.o, debug.o
		struct {
			long stopTimer; // size=0, offset=0
			long stopHit; // size=0, offset=4
			struct _TFace *tface; // size=12, offset=8
			struct _TFace *oldTFace; // size=12, offset=12
			long hit; // size=0, offset=16
		} Follow; // size=20, offset=76, found in object files: debug.o, debug.o
	} data; // size=96, offset=1060, found in object files: debug.o, debug.o
	long cuckooTimer; // size=0, offset=1156
	short teleportZRot; // size=0, offset=1160
	short extraZRot; // size=0, offset=1162
	short extraXRot; // size=0, offset=1164
	short leftTimer; // size=0, offset=1166
	short rightTimer; // size=0, offset=1168
	short collideRotControl; // size=0, offset=1170
	short collision_lastPush; // size=0, offset=1172
	short collision_timer; // size=0, offset=1174
	unsigned long prev_instance_mode; // size=0, offset=1176
	unsigned long instance_mode; // size=0, offset=1180
	long instance_xyvel; // size=0, offset=1184
	long instance_prev_xyvel; // size=0, offset=1188
	struct _Position real_focuspoint; // size=6, offset=1192
	short always_rotate_flag; // size=0, offset=1198
	short follow_flag; // size=0, offset=1200
	short actual_x_rot; // size=0, offset=1202
	short actual_vel_x; // size=0, offset=1204
	short actual_acc_x; // size=0, offset=1206
	short x_rot_change; // size=0, offset=1208
	short focuspoint_fallz; // size=0, offset=1210
	short lead_angle; // size=0, offset=1212
	short lead_vel; // size=0, offset=1214
	short lead_accl; // size=0, offset=1216
	short lead_timer; // size=0, offset=1218
};

struct DebugMenuLine // hashcode: 0x1BD18E81 (dec: 466718337)
{
	enum DEBUG_LINE_TYPE type; // size=4, offset=0
	long lower; // size=0, offset=4
	long upper; // size=0, offset=8
	char *text; // size=0, offset=12
	long *var_address; // size=0, offset=16
	long bit_mask; // size=0, offset=20
};

struct _ButtonTexture // hashcode: 0x9E750D8C (dec: -1636495988)
{
	short tpage; // size=0, offset=0
	short clut; // size=0, offset=2
	short textureW; // size=0, offset=4
	short textureH; // size=0, offset=6
	struct _BlockVramEntry *vramBlock; // size=0, offset=8
	long xshift; // size=0, offset=12
};

struct _BlockVramEntry // hashcode: 0x24B2FBC5 (dec: 615709637)
{
	struct _BlockVramEntry *next; // size=28, offset=0
	unsigned char type; // size=0, offset=4
	unsigned char flags; // size=0, offset=5
	short time; // size=0, offset=6
	short newX; // size=0, offset=8
	short newY; // size=0, offset=10
	short x; // size=0, offset=12
	short y; // size=0, offset=14
	short w; // size=0, offset=16
	short h; // size=0, offset=18
	long area; // size=0, offset=20
	union {
		struct _StreamUnit *streamUnit; // size=64, offset=0
		struct _ObjectTracker *streamObject; // size=36, offset=0
		struct _ButtonTexture *button; // size=16, offset=0
	} udata; // size=4, offset=24, found in object files: debug.o, debug.o
};

struct FontChar // hashcode: 0x5A2F9F5B (dec: 1513070427)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	char c; // size=0, offset=4
	char color; // size=0, offset=5
};

struct _BigFileEntry // hashcode: 0xA904436B (dec: -1459338389)
{
	long fileHash; // size=0, offset=0
	long fileLen; // size=0, offset=4
	long filePos; // size=0, offset=8
	long checkSumFull; // size=0, offset=12
};

struct _BigFileDirEntry // hashcode: 0x7D70C603 (dec: 2104542723)
{
	short streamUnitID; // size=0, offset=0
	short numFiles; // size=0, offset=2
	long subDirOffset; // size=0, offset=4
};

struct _BigFileDir // hashcode: 0x4E39D3E2 (dec: 1312412642)
{
	long numFiles; // size=0, offset=0
	struct _BigFileEntry fileList[0]; // size=0, offset=4
};

struct _BigFile // hashcode: 0x50C273F3 (dec: 1354920947)
{
	long bigfileBaseOffset; // size=0, offset=0
	struct _BigFileDir *rootDir; // size=4, offset=4
	struct _BigFileDir *currentDir; // size=4, offset=8
	struct _BigFileDir *cachedDir; // size=4, offset=12
	long currentDirID; // size=0, offset=16
	long cachedDirID; // size=0, offset=20
	long searchDirID; // size=0, offset=24
	long numSubDirs; // size=0, offset=28
	struct _BigFileDirEntry *subDirList; // size=8, offset=32
};

struct _NonBlockLoadEntry // hashcode: 0x722059B4 (dec: 1914722740)
{
	long fileHash; // size=0, offset=0
	long dirHash; // size=0, offset=4
	long filePos; // size=0, offset=8
	long *loadAddr; // size=0, offset=12
	long loadSize; // size=0, offset=16
	long checksum; // size=0, offset=20
	long checksumType; // size=0, offset=24
	long memType; // size=0, offset=28
	long posInFile; // size=0, offset=32
	long mallocFailOk; // size=0, offset=36
	void *retFunc; // size=0, offset=40
	void *retData; // size=0, offset=44
	void *retData2; // size=0, offset=48
	void **retPointer; // size=0, offset=52
};

struct _ReadQueueEntry // hashcode: 0x5360DCDA (dec: 1398856922)
{
	long readStartPos; // size=0, offset=0
	long readSize; // size=0, offset=4
	long readCurSize; // size=0, offset=8
	void *readStartDest; // size=0, offset=12
	void *readCurDest; // size=0, offset=16
	long readStatus; // size=0, offset=20
	long checksum; // size=0, offset=24
	long checksumType; // size=0, offset=28
	void *retFunc; // size=0, offset=32
	void *retData; // size=0, offset=36
	void *retData2; // size=0, offset=40
};

struct _FX_MATRIX // hashcode: 0x13190ADD (dec: 320408285)
{
	struct NodeType node; // size=8, offset=0
	long flags; // size=0, offset=8
	struct MATRIX lwTransform; // size=32, offset=12
};

struct _FX_PRIM // hashcode: 0x16BF818E (dec: 381649294)
{
	struct NodeType node; // size=8, offset=0
	struct TextureMT3 *texture; // size=16, offset=8
	long flags; // size=0, offset=12
	short timeToLive; // size=0, offset=16
	short curFrame; // size=0, offset=18
	void *process; // size=0, offset=20
	struct _FX_MATRIX *matrix; // size=44, offset=24
	long color; // size=0, offset=28
	long startColor; // size=0, offset=32
	long endColor; // size=0, offset=36
	short colorFadeValue; // size=0, offset=40
	short colorFadeStep; // size=0, offset=42
	struct _Position position; // size=6, offset=44
	short fadeStep; // size=0, offset=50
	short fadeValue[4]; // size=8, offset=52
	struct _Position v0; // size=6, offset=60
	short work0; // size=0, offset=66
	struct _Position v1; // size=6, offset=68
	short work1; // size=0, offset=74
	struct _Position v2; // size=6, offset=76
	short work2; // size=0, offset=82
	struct _Position v3; // size=6, offset=84
	short work3; // size=0, offset=90
	union {
		struct {
			struct _Instance *parent; // size=616, offset=0
			long segment; // size=0, offset=4
		} flame; // size=8, offset=0, found in object files: debug.o, debug.o
		struct {
			short xVel; // size=0, offset=0
			short yVel; // size=0, offset=2
			short zVel; // size=0, offset=4
			short xAccl; // size=0, offset=6
			short yAccl; // size=0, offset=8
			short zAccl; // size=0, offset=10
		} phys; // size=12, offset=0, found in object files: debug.o, debug.o
	} duo; // size=12, offset=92, found in object files: debug.o, debug.o
};

struct BASIC_LINE_G2 // hashcode: 0x684545B2 (dec: 1749370290)
{
	unsigned char r0; // size=0, offset=0
	unsigned char g0; // size=0, offset=1
	unsigned char b0; // size=0, offset=2
	unsigned char code; // size=0, offset=3
	short x0; // size=0, offset=4
	short y0; // size=0, offset=6
	unsigned char r1; // size=0, offset=8
	unsigned char g1; // size=0, offset=9
	unsigned char b1; // size=0, offset=10
	unsigned char p1; // size=0, offset=11
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
};

struct _BASIC_G4 // hashcode: 0xC15AD9EF (dec: -1051010577)
{
	unsigned char r0; // size=0, offset=0
	unsigned char g0; // size=0, offset=1
	unsigned char b0; // size=0, offset=2
	unsigned char code; // size=0, offset=3
	short x0; // size=0, offset=4
	short y0; // size=0, offset=6
	unsigned char r1; // size=0, offset=8
	unsigned char g1; // size=0, offset=9
	unsigned char b1; // size=0, offset=10
	unsigned char pad1; // size=0, offset=11
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
	unsigned char r2; // size=0, offset=16
	unsigned char g2; // size=0, offset=17
	unsigned char b2; // size=0, offset=18
	unsigned char pad2; // size=0, offset=19
	short x2; // size=0, offset=20
	short y2; // size=0, offset=22
	unsigned char r3; // size=0, offset=24
	unsigned char g3; // size=0, offset=25
	unsigned char b3; // size=0, offset=26
	unsigned char pad3; // size=0, offset=27
	short x3; // size=0, offset=28
	short y3; // size=0, offset=30
};

struct _BASIC_F4 // hashcode: 0x2871008E (dec: 678494350)
{
	unsigned char r0; // size=0, offset=0
	unsigned char g0; // size=0, offset=1
	unsigned char b0; // size=0, offset=2
	unsigned char code; // size=0, offset=3
	short x0; // size=0, offset=4
	short y0; // size=0, offset=6
	short x1; // size=0, offset=8
	short y1; // size=0, offset=10
	short x2; // size=0, offset=12
	short y2; // size=0, offset=14
	short x3; // size=0, offset=16
	short y3; // size=0, offset=18
};

struct __BubbleParams // hashcode: 0xE483C494 (dec: -461126508)
{
	short DisperseFrames; // size=0, offset=0
	short KillScale; // size=0, offset=2
	short MinSplashSize; // size=0, offset=4
	short MaxSpeed; // size=0, offset=6
	short MaxSpeedRange; // size=0, offset=8
	short ScaleRate; // size=0, offset=10
	short ScaleRateRange; // size=0, offset=12
	short StartScale; // size=0, offset=14
	short StartScaleRange; // size=0, offset=16
	short UniqueBubbles; // size=0, offset=18
};

struct _GenericParticleParams // hashcode: 0x7A6370AD (dec: 2053337261)
{
	short size; // size=0, offset=0
	unsigned char StartOnInit; // size=0, offset=2
	unsigned char type; // size=0, offset=3
	short birthRadius; // size=0, offset=4
	char startSegment; // size=0, offset=6
	char endSegment; // size=0, offset=7
	struct _Position direction; // size=6, offset=8
	unsigned char spectral_colorize; // size=0, offset=14
	unsigned char absolute_direction; // size=0, offset=15
	char accx; // size=0, offset=16
	char accy; // size=0, offset=17
	char accz; // size=0, offset=18
	char useInstanceModel; // size=0, offset=19
	unsigned char startColor_red; // size=0, offset=20
	unsigned char startColor_green; // size=0, offset=21
	unsigned char startColor_blue; // size=0, offset=22
	char model; // size=0, offset=23
	unsigned char endColor_red; // size=0, offset=24
	unsigned char endColor_green; // size=0, offset=25
	unsigned char endColor_blue; // size=0, offset=26
	char texture; // size=0, offset=27
	short lifeTime; // size=0, offset=28
	unsigned char primLifeTime; // size=0, offset=30
	char use_child; // size=0, offset=31
	short startFadeValue; // size=0, offset=32
	short fadeStep; // size=0, offset=34
	char numberBirthParticles; // size=0, offset=36
	char z_undulation_mode; // size=0, offset=37
	short scaleSpeed; // size=0, offset=38
	struct _Position offset; // size=6, offset=40
	short startScale; // size=0, offset=46
};

struct _GenericRibbonParams // hashcode: 0xD243E3C9 (dec: -767302711)
{
	char id; // size=0, offset=0
	char StartOnInit; // size=0, offset=1
	char startSegment; // size=0, offset=2
	char endSegment; // size=0, offset=3
	char type; // size=0, offset=4
	char use_child; // size=0, offset=5
	short ribbonLifeTime; // size=0, offset=6
	short faceLifeTime; // size=0, offset=8
	short startFadeValue; // size=0, offset=10
	long startColor; // size=0, offset=12
	long endColor; // size=0, offset=16
};

struct _GenericGlowParams // hashcode: 0xF67692B8 (dec: -160001352)
{
	char StartOnInit; // size=0, offset=0
	unsigned char segment; // size=0, offset=1
	unsigned char segmentEnd; // size=0, offset=2
	char numSegments; // size=0, offset=3
	unsigned char color_num; // size=0, offset=4
	char use_child; // size=0, offset=5
	unsigned char numColors; // size=0, offset=6
	char id; // size=0, offset=7
	long atuColorCycleRate; // size=0, offset=8
	short width; // size=0, offset=12
	short height; // size=0, offset=14
	long lifetime; // size=0, offset=16
	short fadein_time; // size=0, offset=20
	short fadeout_time; // size=0, offset=22
};

struct _GenericLightningParams // hashcode: 0x226C68CF (dec: 577530063)
{
	char type; // size=0, offset=0
	char use_child; // size=0, offset=1
	short lifeTime; // size=0, offset=2
	short deg; // size=0, offset=4
	short deg_inc; // size=0, offset=6
	struct _Position start_offset; // size=6, offset=8
	char startSeg; // size=0, offset=14
	char endSeg; // size=0, offset=15
	struct _Position end_offset; // size=6, offset=16
	char matrixSeg; // size=0, offset=22
	unsigned char segs; // size=0, offset=23
	short width; // size=0, offset=24
	short small_width; // size=0, offset=26
	short sine_size; // size=0, offset=28
	short variation; // size=0, offset=30
	long color; // size=0, offset=32
	long glow_color; // size=0, offset=36
};

struct _GenericBlastringParams // hashcode: 0xAB3B2462 (dec: -1422187422)
{
	char type; // size=0, offset=0
	char use_child; // size=0, offset=1
	short lifeTime; // size=0, offset=2
	struct _Position offset; // size=6, offset=4
	short matrixSeg; // size=0, offset=10
	char segment; // size=0, offset=12
	char sortInWorld; // size=0, offset=13
	short radius; // size=0, offset=14
	short size1; // size=0, offset=16
	short size2; // size=0, offset=18
	short endRadius; // size=0, offset=20
	short colorchange_radius; // size=0, offset=22
	int vel; // size=0, offset=24
	int accl; // size=0, offset=28
	short height1; // size=0, offset=32
	short height2; // size=0, offset=34
	short height3; // size=0, offset=36
	char predator_offset; // size=0, offset=38
	char stay_in_place; // size=0, offset=39
	long startColor; // size=0, offset=40
	long endColor; // size=0, offset=44
};

struct _GenericFlashParams // hashcode: 0x06D8DB60 (dec: 114875232)
{
	short type; // size=0, offset=0
	short timeToColor; // size=0, offset=2
	long color; // size=0, offset=4
	short timeAtColor; // size=0, offset=8
	short timeFromColor; // size=0, offset=10
};

struct _StreamUnit // hashcode: 0xAC366E40 (dec: -1405718976)
{
	long StreamUnitID; // size=0, offset=0
	short used; // size=0, offset=4
	short flags; // size=0, offset=6
	struct Level *level; // size=392, offset=8
	char baseAreaName[16]; // size=16, offset=12
	short toSignal; // size=0, offset=28
	short fromSignal; // size=0, offset=30
	long FrameCount; // size=0, offset=32
	short eventVariables[6]; // size=12, offset=36
	long FogColor; // size=0, offset=48
	short UnitFogFar; // size=0, offset=52
	short UnitFogNear; // size=0, offset=54
	short TargetFogFar; // size=0, offset=56
	short TargetFogNear; // size=0, offset=58
	short sfxFileHandle; // size=0, offset=60
	short pad; // size=0, offset=62
};

struct XAFileInfo // hashcode: 0xD7260012 (dec: -685375470)
{
	int startPos; // size=0, offset=0
};

struct CdCommand // hashcode: 0x042C215C (dec: 70000988)
{
	unsigned short flags; // size=0, offset=0
	unsigned char unused; // size=0, offset=2
	unsigned char cdCommand; // size=0, offset=3
	unsigned char cdCmdParam[4]; // size=4, offset=4
};

struct VoiceCommand // hashcode: 0xEEB8F864 (dec: -289867676)
{
	unsigned char voiceCmd; // size=0, offset=0
	unsigned char nextVoiceStatus; // size=0, offset=1
	unsigned short voiceCmdParam; // size=0, offset=2
};

struct _LoadQueueEntry // hashcode: 0xFEE70962 (dec: -18413214)
{
	struct _LoadQueueEntry *next; // size=64, offset=0
	short status; // size=0, offset=4
	char relocateBinary; // size=0, offset=6
	char mempackUsed; // size=0, offset=7
	struct _NonBlockLoadEntry loadEntry; // size=56, offset=8
};

struct SavedBasic // hashcode: 0x6198E1EF (dec: 1637409263)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
};

struct _SavedIntro // hashcode: 0x8389D216 (dec: -2088119786)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	unsigned char lightGroup; // size=0, offset=2
	unsigned char specturalLightGroup; // size=0, offset=3
	char name[8]; // size=8, offset=4
	short introUniqueID; // size=0, offset=12
	short streamUnitID; // size=0, offset=14
	short birthUnitID; // size=0, offset=16
	unsigned short attachedUniqueID; // size=0, offset=18
	struct _SmallRotation smallRotation; // size=6, offset=20
	struct _Position position; // size=6, offset=26
	long flags; // size=0, offset=32
	long flags2; // size=0, offset=36
};

struct SavedEvent // hashcode: 0x429B6172 (dec: 1117479282)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short areaID; // size=0, offset=2
	short eventNumber; // size=0, offset=4
	short eventVariables[5]; // size=10, offset=6
};

struct SavedBspTree // hashcode: 0x7AE7209C (dec: 2061967516)
{
	struct _Position localOffset; // size=6, offset=0
	unsigned char importantFlagsSaved; // size=0, offset=6
	unsigned char bspIndex; // size=0, offset=7
};

struct EventBasicObject // hashcode: 0x9FC1DB2A (dec: -1614685398)
{
	short id; // size=0, offset=0
};

struct EventWildCardObject // hashcode: 0x24FF3630 (dec: 620705328)
{
	short id; // size=0, offset=0
	short spad; // size=0, offset=2
	long unitID; // size=0, offset=4
	char *objectName; // size=0, offset=8
};

struct Event // hashcode: 0x68F4AD26 (dec: 1760865574)
{
	short eventNumber; // size=0, offset=0
	short numInstances; // size=0, offset=2
	unsigned char numActions; // size=0, offset=4
	unsigned char processingPuppetShow; // size=0, offset=5
	short eventVariables[5]; // size=10, offset=6
	struct EventBasicObject **instanceList; // size=2, offset=16
	struct ScriptPCode **conditionalList; // size=8, offset=20
	struct ScriptPCode **actionList; // size=8, offset=24
};

struct ScriptPCode // hashcode: 0x5E69DEB9 (dec: 1583996601)
{
	unsigned short sizeOfPcodeStream; // size=0, offset=0
	unsigned short conditionBits; // size=0, offset=2
	short *data; // size=0, offset=4
};

struct InstanceSpline // hashcode: 0x88E38857 (dec: -1998354345)
{
	struct _Instance *instance; // size=616, offset=0
	struct MultiSpline *spline; // size=80, offset=4
	long attribute; // size=0, offset=8
	long isParent; // size=0, offset=12
	long isClass; // size=0, offset=16
	long splineFlags; // size=0, offset=20
};

struct Vector3d // hashcode: 0x10BF06FC (dec: 280954620)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	short pad1; // size=0, offset=6
	short errorx; // size=0, offset=8
	short errory; // size=0, offset=10
	short errorz; // size=0, offset=12
	short pad2; // size=0, offset=14
	long streamUnitID; // size=0, offset=16
};

struct Rotation3d // hashcode: 0x646160C4 (dec: 1684103364)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	short pad1; // size=0, offset=6
	short errorx; // size=0, offset=8
	short errory; // size=0, offset=10
	short errorz; // size=0, offset=12
	short pad2; // size=0, offset=14
	long attribute; // size=0, offset=16
};

struct InstanceObject // hashcode: 0xA445CB1D (dec: -1538929891)
{
	struct _Instance *instance; // size=616, offset=0
	long attribute; // size=0, offset=4
};

struct EventObject // hashcode: 0x38B0B53D (dec: 951104829)
{
	struct Event *event; // size=28, offset=0
	long attribute; // size=0, offset=4
};

struct SavedEventObject // hashcode: 0xC69C23B2 (dec: -962845774)
{
	struct SavedBasic *savedEvent; // size=2, offset=0
	long attribute; // size=0, offset=4
	long areaID; // size=0, offset=8
	long eventNumber; // size=0, offset=12
};

struct GameObject // hashcode: 0xFA1A30A9 (dec: -98946903)
{
	long attribute; // size=0, offset=0
};

struct SignalObject // hashcode: 0x42CFA9E2 (dec: 1120905698)
{
	struct _MultiSignal *msignal; // size=904, offset=0
	long attribute; // size=0, offset=4
};

struct IntroObject // hashcode: 0x13CCBC8C (dec: 332184716)
{
	struct Intro *intro; // size=76, offset=0
	long attribute; // size=0, offset=4
};

struct InstanceAnimate // hashcode: 0x200AA21A (dec: 537567770)
{
	struct _Instance *instance; // size=616, offset=0
	long attribute; // size=0, offset=4
};

struct InstanceAnimateTexture // hashcode: 0x5266C0BB (dec: 1382465723)
{
	struct _Instance *instance; // size=616, offset=0
	struct AniTex *aniTextures; // size=16, offset=4
	long attribute; // size=0, offset=8
};

struct ListObject // hashcode: 0x1323C7B3 (dec: 321111987)
{
	struct EventWildCardObject *eventInstance; // size=12, offset=0
	long attribute[5]; // size=20, offset=4
	long numberOfAttributes; // size=0, offset=24
	long lineID; // size=0, offset=28
};

struct SubListObject // hashcode: 0xFDCC28E5 (dec: -36951835)
{
	struct _Instance **instanceList; // size=616, offset=0
	long numberOfInstances; // size=0, offset=4
	long numberOfAttributes; // size=0, offset=8
	long attribute[5]; // size=20, offset=12
};

struct TGroupObject // hashcode: 0x669B4B67 (dec: 1721453415)
{
	struct BSPTree *bspTree; // size=36, offset=0
	struct _StreamUnit *streamUnit; // size=64, offset=4
	long attribute; // size=0, offset=8
	short arg[2]; // size=4, offset=12
};

struct ConstrictInfo // hashcode: 0xA586BA8A (dec: -1517897078)
{
	struct _Instance *instance; // size=616, offset=0
	long attribute; // size=0, offset=4
};

struct CameraObject // hashcode: 0xD3BF3ACE (dec: -742442290)
{
	struct Camera *camera; // size=1220, offset=0
	long frames; // size=0, offset=4
	long attribute; // size=0, offset=8
};

struct EventVmObject // hashcode: 0x9DE5D8F8 (dec: -1645881096)
{
	struct _VMObject *vmObjectPtr; // size=60, offset=0
	struct Level *level; // size=392, offset=4
	long attribute; // size=0, offset=8
};

struct AreaObject // hashcode: 0x38AC5A77 (dec: 950819447)
{
	struct _StreamUnit *streamUnit; // size=64, offset=0
	long attribute; // size=0, offset=4
	long unitID; // size=0, offset=8
};

struct SoundObject // hashcode: 0x9DA5ECE7 (dec: -1650070297)
{
	short flags; // size=0, offset=0
	short attribute; // size=0, offset=2
	long soundNumber; // size=0, offset=4
	long value; // size=0, offset=8
	long duration; // size=0, offset=12
	union {
		struct _Instance *instance; // size=616, offset=0
		struct _SFXMkr *sfxMarker; // size=36, offset=0
	} data; // size=4, offset=16, found in object files: debug.o, debug.o
};

struct StackType // hashcode: 0x9CE4C465 (dec: -1662729115)
{
	long id; // size=0, offset=0
	union {
		struct {
			long instanceNumber; // size=0, offset=0
			long attribute; // size=0, offset=4
		} Object; // size=8, offset=0, found in object files: debug.o, debug.o
		struct {
			struct _SavedIntro *intro; // size=40, offset=0
			long attribute; // size=0, offset=4
		} SavedIntroObject; // size=8, offset=0, found in object files: debug.o, debug.o
		struct InstanceSpline instanceSpline; // size=24, offset=0
		struct {
			long currentNumber; // size=0, offset=0
			long error; // size=0, offset=4
			short flags; // size=0, offset=8
		} Number; // size=12, offset=0, found in object files: debug.o, debug.o
		struct {
			short vx; // size=0, offset=0
			short vy; // size=0, offset=2
		} Vector2d; // size=4, offset=0, found in object files: debug.o, debug.o
		struct {
			char *pointer; // size=0, offset=0
		} CharPointer; // size=4, offset=0, found in object files: debug.o, debug.o
		struct {
			short *pointer; // size=0, offset=0
		} ShortPointer; // size=4, offset=0, found in object files: debug.o, debug.o
		struct {
			long *pointer; // size=0, offset=0
		} LongPointer; // size=4, offset=0, found in object files: debug.o, debug.o
		struct AreaObject areaObject; // size=12, offset=0
		struct InstanceObject instanceObject; // size=8, offset=0
		struct Vector3d vector3d; // size=20, offset=0
		struct Rotation3d rotation3d; // size=20, offset=0
		struct SignalObject signalObject; // size=8, offset=0
		struct EventObject eventObject; // size=8, offset=0
		struct GameObject gameObject; // size=4, offset=0
		struct ListObject listObject; // size=32, offset=0
		struct IntroObject introObject; // size=8, offset=0
		struct InstanceAnimate instanceAnimate; // size=8, offset=0
		struct InstanceAnimateTexture instanceAniTexture; // size=12, offset=0
		struct SavedEventObject savedEventObject; // size=16, offset=0
		struct SubListObject subListObject; // size=32, offset=0
		struct TGroupObject terrainGroup; // size=16, offset=0
		struct ConstrictInfo constrictInfo; // size=8, offset=0
		struct CameraObject cameraObject; // size=12, offset=0
		struct EventVmObject vmObject; // size=12, offset=0
		struct SoundObject soundObject; // size=20, offset=0
	} data; // size=32, offset=4, found in object files: debug.o, debug.o
};

struct __ReaverSaveDat // hashcode: 0x18BBFFA1 (dec: 414973857)
{
	unsigned long pad; // size=0, offset=0
};

struct GameCheat // hashcode: 0x9BFF36C0 (dec: -1677773120)
{
	unsigned char cheatKeys[12]; // size=12, offset=0
	short cheatLen; // size=0, offset=12
	short cheatStage; // size=0, offset=14
};

struct debug_dispatch_t // hashcode: 0x928EA8E4 (dec: -1836144412)
{
	enum DEBUG_LINE_TYPE type; // size=4, offset=0
	void (*fn)(); // size=0, offset=4
};

struct debug_format_t // hashcode: 0xCC4C6103 (dec: -867409661)
{
	int xpos; // size=0, offset=0
	int ypos; // size=0, offset=4
	int is_centered; // size=0, offset=8
};

struct SIGNAL_109fake // hashcode: 0xD12486F0 (dec: -786135312)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: signal.o, signal.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: signal.o, signal.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: signal.o, signal.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: signal.o, signal.o
};

struct _FXTracker // hashcode: 0xCC65A064 (dec: -865755036)
{
	struct _FX_MATRIX matrixPool[32]; // size=1408, offset=0
	struct NodeType usedMatrixList; // size=8, offset=1408
	struct NodeType freeMatrixList; // size=8, offset=1416
	struct _FX_PRIM primPool[256]; // size=26624, offset=1424
	struct NodeType usedPrimList; // size=8, offset=28048
	struct NodeType usedPrimListSprite; // size=8, offset=28056
	struct NodeType freePrimList; // size=8, offset=28064
};

struct SignalInfo // hashcode: 0x5899EF0F (dec: 1486483215)
{
	long (*signalHandleFunc)(); // size=0, offset=0
	short length; // size=0, offset=4
	short onlyPlayer; // size=0, offset=6
	void (*signalRelocateFunc)(); // size=0, offset=8
};

struct _Vector // hashcode: 0x5DEB6D24 (dec: 1575709988)
{
	long x; // size=0, offset=0
	long y; // size=0, offset=4
	long z; // size=0, offset=8
};

struct _Triangle2D // hashcode: 0xD422B451 (dec: -735923119)
{
	short x0; // size=0, offset=0
	short y0; // size=0, offset=2
	short x1; // size=0, offset=4
	short y1; // size=0, offset=6
	short x2; // size=0, offset=8
	short y2; // size=0, offset=10
};

struct _PCollideInfo // hashcode: 0x32613C4B (dec: 845233227)
{
	short type; // size=0, offset=0
	short segment; // size=0, offset=2
	void *prim; // size=0, offset=4
	struct _Instance *inst; // size=0, offset=8
	struct SVECTOR wNormal; // size=8, offset=12
	struct SVECTOR *newPoint; // size=8, offset=20
	struct SVECTOR *oldPoint; // size=8, offset=24
	struct SVECTOR cldPoint; // size=8, offset=28
	long collideType; // size=0, offset=36
	struct _Instance *instance; // size=0, offset=40
};

struct _HNormal // hashcode: 0xC53FB2BB (dec: -985681221)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct _HFaceInfo // hashcode: 0x0E79FF8C (dec: 242876300)
{
	long flags; // size=0, offset=0
	long attr; // size=0, offset=4
	struct _HFace *hface; // size=12, offset=8
	struct _SVector normal; // size=8, offset=12
	struct _HVertex *vertex0; // size=12, offset=20
	struct _HVertex *vertex1; // size=12, offset=24
	struct _HVertex *vertex2; // size=12, offset=28
};

struct _CollideInfo // hashcode: 0xCA2DF5E9 (dec: -902957591)
{
	void *level; // size=0, offset=0
	char flags; // size=0, offset=4
	char segment; // size=0, offset=5
	char type0; // size=0, offset=6
	char type1; // size=0, offset=7
	void *prim0; // size=0, offset=8
	void *prim1; // size=0, offset=12
	void *inst0; // size=0, offset=16
	void *inst1; // size=0, offset=20
	struct SVECTOR point0; // size=8, offset=24
	struct SVECTOR point1; // size=8, offset=32
	struct _Position offset; // size=6, offset=40
	short bspID; // size=0, offset=46
};

struct _LCollideInfo // hashcode: 0xCC1DB336 (dec: -870468810)
{
	struct _TFace *tface; // size=12, offset=0
	struct _Terrain *terrain; // size=84, offset=4
	int curTree; // size=0, offset=8
};

struct SCollideInfo // hashcode: 0x0DEAD21F (dec: 233493023)
{
	struct _Sphere *sphere; // size=12, offset=0
	struct SVECTOR *oldPos; // size=8, offset=4
	void (*collideFunc)(); // size=0, offset=8
	long id; // size=0, offset=12
	long segment; // size=0, offset=16
	struct _Instance *instance; // size=616, offset=20
	void *prim; // size=0, offset=24
};

struct PandTScratch // hashcode: 0x53B2A743 (dec: 1404217155)
{
	struct MATRIX posMatrix; // size=32, offset=0
	struct _SVector normal; // size=8, offset=32
	struct _Vector dpv; // size=12, offset=40
	struct _SVector planePoint; // size=8, offset=52
	long ignore_attr; // size=0, offset=60
	long accept_attr; // size=0, offset=64
	short *backface_flag; // size=0, offset=68
	struct _SVector newPos; // size=8, offset=72
	struct _SVector oldPos; // size=8, offset=80
	int flags; // size=0, offset=88
	int i; // size=0, offset=92
	int slack; // size=0, offset=96
	long in_spectral; // size=0, offset=100
	short *normalList; // size=0, offset=104
	struct _TVertex *vertexList; // size=12, offset=108
	struct _TFace *result; // size=12, offset=112
	struct _SVector line; // size=8, offset=116
};

struct COLLIDE_258fake // hashcode: 0x1D802093 (dec: 494936211)
{
	long m[3]; // size=12, offset=0
};

struct SandHFScratch // hashcode: 0x31C4E20D (dec: 834986509)
{
	struct _SVector normal; // size=8, offset=0
	struct MATRIX posMatrix; // size=32, offset=8
	struct _Vector dpv; // size=12, offset=40
	struct _SVector triPoint; // size=8, offset=52
	struct _SVector planePoint; // size=8, offset=60
};

struct SandTScratch // hashcode: 0x2773448F (dec: 661865615)
{
	struct MATRIX posMatrix; // size=32, offset=0
	struct _Vector dpv; // size=12, offset=32
	struct _HNormal *normalList; // size=8, offset=44
	struct _CollideInfo collideInfo; // size=48, offset=48
	struct _HFaceInfo hfaceInfo; // size=32, offset=96
	struct _SVector midPoint; // size=8, offset=128
	struct _SVector spherePos; // size=8, offset=136
	void (*collideFunc)(); // size=0, offset=144
	struct _Instance *instance; // size=616, offset=148
	long edge; // size=0, offset=152
	long in_spectral; // size=0, offset=156
	struct _SVector oldPos; // size=8, offset=160
	void *prim; // size=0, offset=168
	struct _SVector normal; // size=8, offset=172
	struct _Sphere sphere; // size=12, offset=180
	short result; // size=0, offset=192
	short i; // size=0, offset=194
	long collide_ignoreAttr; // size=0, offset=196
	long collide_acceptAttr; // size=0, offset=200
	long midRadius; // size=0, offset=204
	struct _TVertex *vertexList; // size=12, offset=208
};

struct IandTScratch // hashcode: 0xE0F1425D (dec: -521059747)
{
	struct MATRIX posMatrix; // size=32, offset=0
	struct _SVector normal; // size=8, offset=32
	struct _Vector dpv; // size=12, offset=40
	struct _SVector planePoint; // size=8, offset=52
	struct _SVector line; // size=8, offset=60
	struct _SVector oldPos; // size=8, offset=68
	struct _SVector newPos; // size=8, offset=76
	int i; // size=0, offset=84
	long in_spectral; // size=0, offset=88
	short *normalList; // size=0, offset=92
	struct _TVertex *vertexList; // size=12, offset=96
};

struct PandTFScratch // hashcode: 0x218F0B73 (dec: 563022707)
{
	struct MATRIX posMatrix; // size=32, offset=0
	struct _SVector planePoint; // size=8, offset=32
	struct _SVector newPos; // size=8, offset=40
	struct _SVector oldPos; // size=8, offset=48
	struct _SVector normal; // size=8, offset=56
	struct _Vector dpv; // size=12, offset=64
};

struct CameraCollisionInfo // hashcode: 0x76C89E59 (dec: 1992859225)
{
	struct _TFace (*tfaceList[5]); // size=20, offset=0
	struct _Terrain (*tfaceTerrain[5]); // size=20, offset=20
	short bspTree[6]; // size=12, offset=40
	short lengthList[6]; // size=12, offset=52
	long flags; // size=0, offset=64
	long line; // size=0, offset=68
	long numCollided; // size=0, offset=72
	long lenCenterToExtend; // size=0, offset=76
	struct _Sphere *start; // size=12, offset=80
	struct _Sphere *end; // size=12, offset=84
	long cldLines; // size=0, offset=88
};

struct POLY_GT3 // hashcode: 0x405DA246 (dec: 1079878214)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	unsigned char r1; // size=0, offset=16
	unsigned char g1; // size=0, offset=17
	unsigned char b1; // size=0, offset=18
	unsigned char p1; // size=0, offset=19
	short x1; // size=0, offset=20
	short y1; // size=0, offset=22
	unsigned char u1; // size=0, offset=24
	unsigned char v1; // size=0, offset=25
	unsigned short tpage; // size=0, offset=26
	unsigned char r2; // size=0, offset=28
	unsigned char g2; // size=0, offset=29
	unsigned char b2; // size=0, offset=30
	unsigned char p2; // size=0, offset=31
	short x2; // size=0, offset=32
	short y2; // size=0, offset=34
	unsigned char u2; // size=0, offset=36
	unsigned char v2; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
};

struct POLY_GT4 // hashcode: 0x596BAA44 (dec: 1500228164)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	unsigned char r1; // size=0, offset=16
	unsigned char g1; // size=0, offset=17
	unsigned char b1; // size=0, offset=18
	unsigned char p1; // size=0, offset=19
	short x1; // size=0, offset=20
	short y1; // size=0, offset=22
	unsigned char u1; // size=0, offset=24
	unsigned char v1; // size=0, offset=25
	unsigned short tpage; // size=0, offset=26
	unsigned char r2; // size=0, offset=28
	unsigned char g2; // size=0, offset=29
	unsigned char b2; // size=0, offset=30
	unsigned char p2; // size=0, offset=31
	short x2; // size=0, offset=32
	short y2; // size=0, offset=34
	unsigned char u2; // size=0, offset=36
	unsigned char v2; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
	unsigned char r3; // size=0, offset=40
	unsigned char g3; // size=0, offset=41
	unsigned char b3; // size=0, offset=42
	unsigned char p3; // size=0, offset=43
	short x3; // size=0, offset=44
	short y3; // size=0, offset=46
	unsigned char u3; // size=0, offset=48
	unsigned char v3; // size=0, offset=49
	unsigned short pad3; // size=0, offset=50
};

struct _PFace // hashcode: 0xD6E8EAC4 (dec: -689378620)
{
	unsigned long *tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	short clut; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char u1; // size=0, offset=20
	unsigned char v1; // size=0, offset=21
	unsigned short tpage; // size=0, offset=22
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char u2; // size=0, offset=28
	unsigned char v2; // size=0, offset=29
	short pad1; // size=0, offset=30
	long pad2; // size=0, offset=32
	long pad3; // size=0, offset=36
};

struct _PolytopeList // hashcode: 0xAC7B9901 (dec: -1401186047)
{
	long numPolytopes; // size=0, offset=0
	void (*polytope[1024]); // size=4096, offset=4
};

struct DRAW_109fake // hashcode: 0x13B53E5F (dec: 330645087)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: draw.o, draw.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: draw.o, draw.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: draw.o, draw.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: draw.o, draw.o
};

struct UVTYPE // hashcode: 0x7D142F71 (dec: 2098474865)
{
	unsigned char u; // size=0, offset=0
	unsigned char v; // size=0, offset=1
	short pad; // size=0, offset=2
};

struct POLY_G3_SEMITRANS // hashcode: 0x323808D7 (dec: 842533079)
{
	unsigned long tag; // size=0, offset=0
	unsigned long dr_tpage; // size=0, offset=4
	unsigned char r0; // size=0, offset=8
	unsigned char g0; // size=0, offset=9
	unsigned char b0; // size=0, offset=10
	unsigned char code; // size=0, offset=11
	short x0; // size=0, offset=12
	short y0; // size=0, offset=14
	unsigned char r1; // size=0, offset=16
	unsigned char g1; // size=0, offset=17
	unsigned char b1; // size=0, offset=18
	unsigned char pad1; // size=0, offset=19
	short x1; // size=0, offset=20
	short y1; // size=0, offset=22
	unsigned char r2; // size=0, offset=24
	unsigned char g2; // size=0, offset=25
	unsigned char b2; // size=0, offset=26
	unsigned char pad2; // size=0, offset=27
	short x2; // size=0, offset=28
	short y2; // size=0, offset=30
};

struct _POLY_NG4 // hashcode: 0x65B704BE (dec: 1706493118)
{
	unsigned long tag; // size=0, offset=0
	unsigned long drawTPage1; // size=0, offset=4
	struct _BASIC_G4 p1; // size=32, offset=8
};

struct _GT3ZVertexD3D_Type // hashcode: 0xBD55FA10 (dec: -1118438896)
{
	float x; // size=0, offset=0
	float y; // size=0, offset=4
	float z; // size=0, offset=8
	float rhw; // size=0, offset=12
	unsigned int rgba; // size=0, offset=16
	float u; // size=0, offset=20
	float v; // size=0, offset=24
};

struct SP_SUBDIV_STRUCT // hashcode: 0x4C4B55E8 (dec: 1280005608)
{
	struct _SVector vertex0; // size=8, offset=0
	struct _SVector vertex1; // size=8, offset=8
	struct _SVector vertex2; // size=8, offset=16
	struct SVECTOR face_v0; // size=8, offset=24
	struct SVECTOR face_v1; // size=8, offset=32
	struct SVECTOR face_v2; // size=8, offset=40
	struct SVECTOR face_v01; // size=8, offset=48
	struct SVECTOR face_v12; // size=8, offset=56
	struct SVECTOR face_v20; // size=8, offset=64
	struct UVTYPE face_uv0; // size=4, offset=72
	struct UVTYPE face_uv1; // size=4, offset=76
	struct UVTYPE face_uv2; // size=4, offset=80
	struct UVTYPE face_uv01; // size=4, offset=84
	struct UVTYPE face_uv12; // size=4, offset=88
	struct UVTYPE face_uv20; // size=4, offset=92
	struct _ColorType color0; // size=4, offset=96
	struct _ColorType color1; // size=4, offset=100
	struct _ColorType color2; // size=4, offset=104
	struct _ColorType color01; // size=4, offset=108
	struct _ColorType color12; // size=4, offset=112
	struct _ColorType color20; // size=4, offset=116
	struct _Vector out[4]; // size=48, offset=120
	long color[4]; // size=16, offset=168
	long texinfo[3]; // size=12, offset=184
	struct DVECTOR sxy[4]; // size=16, offset=196
};

struct LIGHT3D_109fake // hashcode: 0xCB7DE4CA (dec: -880941878)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: light3d.o, light3d.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: light3d.o, light3d.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: light3d.o, light3d.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: light3d.o, light3d.o
};

struct CdlFILE // hashcode: 0x2EE126E0 (dec: 786507488)
{
	struct CdlLOC pos; // size=4, offset=0
	unsigned long size; // size=0, offset=4
	char name[16]; // size=16, offset=8
};

struct LOAD3D_114fake // hashcode: 0x1C723D51 (dec: 477248849)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: load3d.o, load3d.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: load3d.o, load3d.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: load3d.o, load3d.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: load3d.o, load3d.o
};

struct _LoadStatus // hashcode: 0x3D15BA2C (dec: 1024834092)
{
	struct _ReadQueueEntry currentQueueFile; // size=44, offset=0
	long state; // size=0, offset=44
	long bytesTransferred; // size=0, offset=48
	long lastCheckPos; // size=0, offset=52
	long cdWaitTime; // size=0, offset=56
	unsigned char *compSrcAddr; // size=0, offset=60
	unsigned char *compDstAddr; // size=0, offset=64
	long compControlbits; // size=0, offset=68
	long compControl; // size=0, offset=72
	long compEndBytes; // size=0, offset=76
	long decompressLen; // size=0, offset=80
	long checksum; // size=0, offset=84
	long *checkAddr; // size=0, offset=88
	struct _BigFile bigFile; // size=36, offset=92
	void *buffer1; // size=0, offset=128
	void *buffer2; // size=0, offset=132
	int changeDir; // size=0, offset=136
	long endLoadTime; // size=0, offset=140
	long currentDirLoading; // size=0, offset=144
	long currentSector; // size=0, offset=148
};

struct RedirectList // hashcode: 0x4C185B3B (dec: 1276664635)
{
	long numPointers; // size=0, offset=0
	long *data; // size=0, offset=4
};

struct DRAWENV // hashcode: 0x1D93A150 (dec: 496214352)
{
	struct RECT clip; // size=8, offset=0
	short ofs[2]; // size=4, offset=8
	struct RECT tw; // size=8, offset=12
	unsigned short tpage; // size=0, offset=20
	unsigned char dtd; // size=0, offset=22
	unsigned char dfe; // size=0, offset=23
	unsigned char isbg; // size=0, offset=24
	unsigned char r0; // size=0, offset=25
	unsigned char g0; // size=0, offset=26
	unsigned char b0; // size=0, offset=27
	struct DR_ENV dr_env; // size=64, offset=28
};

struct DISPENV // hashcode: 0x286FCE3D (dec: 678415933)
{
	struct RECT disp; // size=8, offset=0
	struct RECT screen; // size=8, offset=8
	unsigned char isinter; // size=0, offset=16
	unsigned char isrgb24; // size=0, offset=17
	unsigned char pad0; // size=0, offset=18
	unsigned char pad1; // size=0, offset=19
};

struct BLK_FILL // hashcode: 0x2490546A (dec: 613438570)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	unsigned short x0; // size=0, offset=8
	unsigned short y0; // size=0, offset=10
	unsigned short w; // size=0, offset=12
	unsigned short h; // size=0, offset=14
};

struct MAIN_114fake // hashcode: 0x6BBD5265 (dec: 1807569509)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: main.o, main.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: main.o, main.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: main.o, main.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: main.o, main.o
};

struct MainTracker // hashcode: 0x7F315B98 (dec: 2133941144)
{
	long mainState; // size=0, offset=0
	long previousState; // size=0, offset=4
	long movieNum; // size=0, offset=8
	long done; // size=0, offset=12
};

struct AnalogueData // hashcode: 0xD8EB0F12 (dec: -655683822)
{
	unsigned short pad; // size=0, offset=0
	unsigned char xR; // size=0, offset=2
	unsigned char yR; // size=0, offset=3
	unsigned char xL; // size=0, offset=4
	unsigned char yL; // size=0, offset=5
};

struct POLY_F4_SEMITRANS // hashcode: 0xE3D17AA2 (dec: -472810846)
{
	unsigned long tag; // size=0, offset=0
	unsigned long dr_tpage; // size=0, offset=4
	unsigned char r0; // size=0, offset=8
	unsigned char g0; // size=0, offset=9
	unsigned char b0; // size=0, offset=10
	unsigned char code; // size=0, offset=11
	short x0; // size=0, offset=12
	short y0; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	short x2; // size=0, offset=20
	short y2; // size=0, offset=22
	short x3; // size=0, offset=24
	short y3; // size=0, offset=26
};

struct PhysObProperties // hashcode: 0xD5487B33 (dec: -716670157)
{
	unsigned short version; // size=0, offset=0
	unsigned short family; // size=0, offset=2
	unsigned short ID; // size=0, offset=4
	unsigned short Type; // size=0, offset=6
};

struct PhysObSplinter // hashcode: 0x933D3752 (dec: -1824704686)
{
	long numSplintData; // size=0, offset=0
	void *splinterData; // size=0, offset=4
};

struct PhysObWeaponAttributes // hashcode: 0x6EB0170A (dec: 1857033994)
{
	long Damage; // size=0, offset=0
	long AltDamage; // size=0, offset=4
	short knockBackDistance; // size=0, offset=8
	char knockBackFrames; // size=0, offset=10
	char dropSound; // size=0, offset=11
	char Class; // size=0, offset=12
	char ThrowSphere; // size=0, offset=13
	char LeftHandSphere; // size=0, offset=14
	char RightHandSphere; // size=0, offset=15
	struct _PhysObLight *Light; // size=0, offset=16
	struct PhysObSplinter splinter; // size=8, offset=20
};

struct _PhysObLight // hashcode: 0x873DE727 (dec: -2025986265)
{
	unsigned char length; // size=0, offset=0
	unsigned char segment; // size=0, offset=1
	short speed; // size=0, offset=2
	struct LightTableEntry *lightTable; // size=8, offset=4
};

struct __PhysObProjectileData // hashcode: 0x12820E13 (dec: 310513171)
{
	char model; // size=0, offset=0
	char startAnim; // size=0, offset=1
	char loopAnim; // size=0, offset=2
	char endAnim; // size=0, offset=3
	long flags; // size=0, offset=4
	struct PhysObWeaponAttributes *weapon; // size=28, offset=8
};

struct SwitchData // hashcode: 0x34EE19D8 (dec: 888019416)
{
	short state; // size=0, offset=0
	short accumulator; // size=0, offset=2
};

struct LightTableEntry // hashcode: 0x952494E4 (dec: -1792764700)
{
	short r; // size=0, offset=0
	short g; // size=0, offset=2
	short b; // size=0, offset=4
	short radius; // size=0, offset=6
};

struct InterfaceItem // hashcode: 0xB8494031 (dec: -1203158991)
{
	char name[48]; // size=48, offset=0
	unsigned short timeout; // size=0, offset=48
	unsigned short buttonTimeout; // size=0, offset=50
	short itemType; // size=0, offset=52
	short nextItem; // size=0, offset=54
};

struct POLY_FT4 // hashcode: 0xAD2AA0E4 (dec: -1389715228)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char u1; // size=0, offset=20
	unsigned char v1; // size=0, offset=21
	unsigned short tpage; // size=0, offset=22
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char u2; // size=0, offset=28
	unsigned char v2; // size=0, offset=29
	unsigned short pad1; // size=0, offset=30
	short x3; // size=0, offset=32
	short y3; // size=0, offset=34
	unsigned char u3; // size=0, offset=36
	unsigned char v3; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
};

struct FontTracker // hashcode: 0xE32D3F0A (dec: -483574006)
{
	struct FontChar font_buffer[256]; // size=1536, offset=0
	long font_xpos; // size=0, offset=1536
	long font_ypos; // size=0, offset=1540
	long font_buffIndex; // size=0, offset=1544
	short font_tpage; // size=0, offset=1548
	short font_clut; // size=0, offset=1550
	short font_vramU; // size=0, offset=1552
	short font_vramV; // size=0, offset=1554
	short font_width; // size=0, offset=1556
	short sprite_sort_push; // size=0, offset=1558
	short font_vramX; // size=0, offset=1560
	short font_vramY; // size=0, offset=1562
	char color_global; // size=0, offset=1564
	char color_local; // size=0, offset=1565
};

struct FONT_118fake // hashcode: 0x5664C5CE (dec: 1449444814)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: font.o, font.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: font.o, font.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: font.o, font.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: font.o, font.o
};

struct font_color_t // hashcode: 0x5F515B79 (dec: 1599167353)
{
	int r; // size=0, offset=0
	int g; // size=0, offset=4
	int b; // size=0, offset=8
};

struct FontPos // hashcode: 0x0084D7DD (dec: 8706013)
{
	char x; // size=0, offset=0
	char y; // size=0, offset=1
	char w; // size=0, offset=2
	char h; // size=0, offset=3
};

struct StreamUnitPortal // hashcode: 0x7C52D8D9 (dec: 2085804249)
{
	char tolevelname[16]; // size=16, offset=0
	long MSignalID; // size=0, offset=16
	long streamID; // size=0, offset=20
	short minx; // size=0, offset=24
	short miny; // size=0, offset=26
	short minz; // size=0, offset=28
	short flags; // size=0, offset=30
	short maxx; // size=0, offset=32
	short maxy; // size=0, offset=34
	short maxz; // size=0, offset=36
	short pad2; // size=0, offset=38
	struct _StreamUnit *toStreamUnit; // size=64, offset=40
	struct _SVector t1[3]; // size=24, offset=44
	struct _SVector t2[3]; // size=24, offset=68
};

struct GAMEPAD_114fake // hashcode: 0xA495E8C3 (dec: -1533679421)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: gamepad.o, gamepad.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: gamepad.o, gamepad.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: gamepad.o, gamepad.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: gamepad.o, gamepad.o
};

struct JoypadMappingStruct // hashcode: 0x312F2BE8 (dec: 825175016)
{
	unsigned short psxData; // size=0, offset=0
	unsigned short translation; // size=0, offset=2
};

struct ControllerPacket // hashcode: 0x9621B4F3 (dec: -1776175885)
{
	unsigned char transStatus; // size=0, offset=0
	unsigned char dataFormat; // size=0, offset=1
	union {
		unsigned short pad; // size=0, offset=0
		unsigned short multitap[16]; // size=32, offset=0
		unsigned short mouse[2]; // size=4, offset=0
		unsigned short negcon[3]; // size=6, offset=0
		struct AnalogueData analogue; // size=6, offset=0
	} data; // size=32, offset=2, found in object files: gamepad.o, gamepad.o
};

struct _G2EulerAngles_Type // hashcode: 0xB3709AC5 (dec: -1284465979)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short order; // size=0, offset=6
};

struct _AnimSoundData_Type // hashcode: 0x5367FF66 (dec: 1399324518)
{
	short sfxToneID; // size=0, offset=0
	short volume; // size=0, offset=2
	short pitch; // size=0, offset=4
	short minVolDistance; // size=0, offset=6
};

struct _InstanceHandle // hashcode: 0xDC7D3685 (dec: -595773819)
{
	struct _Instance *instance; // size=616, offset=0
	long instanceID; // size=0, offset=4
};

struct evCollideInstanceStatsData // hashcode: 0xD8198216 (dec: -669416938)
{
	struct _Instance *instance; // size=616, offset=0
	unsigned long distance; // size=0, offset=4
	struct _SVector relativePosition; // size=8, offset=8
	long xyDistance; // size=0, offset=16
	long zDelta; // size=0, offset=20
};

struct INICommand // hashcode: 0x04B02DE1 (dec: 78654945)
{
	short command; // size=0, offset=0
	short numParameters; // size=0, offset=2
	long parameter[0]; // size=0, offset=4
};

struct SavedIntroSmall // hashcode: 0x42C7682C (dec: 1120364588)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short introUniqueID; // size=0, offset=2
};

struct SavedIntroSpline // hashcode: 0x018B74DF (dec: 25916639)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short introUniqueID; // size=0, offset=2
	short splineFlags; // size=0, offset=4
	short splineKeyFrame; // size=0, offset=6
	short splineClipBeg; // size=0, offset=8
	short splineClipEnd; // size=0, offset=10
};

struct _SavedIntroWithIntro // hashcode: 0xF234DCD6 (dec: -231416618)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	unsigned short attachedUniqueID; // size=0, offset=2
	short introOffset; // size=0, offset=4
	short birthUnitID; // size=0, offset=6
	short introUniqueID; // size=0, offset=8
	unsigned char lightGroup; // size=0, offset=10
	unsigned char specturalLightGroup; // size=0, offset=11
	long flags; // size=0, offset=12
	long flags2; // size=0, offset=16
	struct _SmallRotation smallRotation; // size=6, offset=20
	struct _Position position; // size=6, offset=26
};

struct _MonsterAnim // hashcode: 0xF5F8CA4B (dec: -168244661)
{
	unsigned short velocity; // size=0, offset=0
	unsigned short distance; // size=0, offset=2
	unsigned short playSpeed; // size=0, offset=4
	unsigned char interpFrames; // size=0, offset=6
	unsigned char startFrame; // size=0, offset=7
	unsigned char interpOut; // size=0, offset=8
	unsigned char alphaTable; // size=0, offset=9
	unsigned char alphaTableOut; // size=0, offset=10
	unsigned char controllingSection; // size=0, offset=11
	char index[3]; // size=3, offset=12
	char pad; // size=0, offset=15
};

struct _MonsterIdle // hashcode: 0x181712FA (dec: 404165370)
{
	char anim; // size=0, offset=0
	char alertMod; // size=0, offset=1
	char probability; // size=0, offset=2
	char pad; // size=0, offset=3
};

struct _MonsterBehavior // hashcode: 0x6D7D1660 (dec: 1836914272)
{
	char alertness; // size=0, offset=0
	char idleFreq; // size=0, offset=1
	char numIdles; // size=0, offset=2
	char idleList[5]; // size=5, offset=3
};

struct _MonsterSenses // hashcode: 0x1AA0E325 (dec: 446751525)
{
	short sightArc; // size=0, offset=0
	short sightRadius; // size=0, offset=2
	short sightElevation; // size=0, offset=4
	short soundArc; // size=0, offset=6
	short soundRadius; // size=0, offset=8
	short soundElevation; // size=0, offset=10
	unsigned short scentRadius; // size=0, offset=12
	short alarmRadius; // size=0, offset=14
	unsigned short allyRadius; // size=0, offset=16
};

struct _MonsterAllegiances // hashcode: 0x1F15B182 (dec: 521515394)
{
	unsigned long enemies; // size=0, offset=0
	unsigned long allies; // size=0, offset=4
	unsigned long food; // size=0, offset=8
	unsigned long gods; // size=0, offset=12
};

struct _MonsterAttackAttributes // hashcode: 0x4F8BA493 (dec: 1334551699)
{
	short attackRange; // size=0, offset=0
	short attackHeight; // size=0, offset=2
	short knockBackDistance; // size=0, offset=4
	char knockBackDuration; // size=0, offset=6
	char damage; // size=0, offset=7
	char sphereSegment; // size=0, offset=8
	char sphereOnFrame; // size=0, offset=9
	char sphereOnAnim; // size=0, offset=10
	char sphereOffFrame; // size=0, offset=11
	char sphereOffAnim; // size=0, offset=12
	char turnFrames; // size=0, offset=13
	char numAnims; // size=0, offset=14
	char attackProbability[12]; // size=12, offset=15
	char animList[5]; // size=5, offset=27
};

struct _MonsterMissile // hashcode: 0xC37A9403 (dec: -1015376893)
{
	unsigned short speed; // size=0, offset=0
	unsigned short range; // size=0, offset=2
	unsigned char frame; // size=0, offset=4
	unsigned char anim; // size=0, offset=5
	unsigned char segment; // size=0, offset=6
	unsigned char damage; // size=0, offset=7
	unsigned char type; // size=0, offset=8
	unsigned char graphic; // size=0, offset=9
	char gravity; // size=0, offset=10
	char reload; // size=0, offset=11
	char fireChance; // size=0, offset=12
	unsigned char numAnims; // size=0, offset=13
	char animList[2]; // size=2, offset=14
};

struct _MonsterCombatAttributes // hashcode: 0x1CD3787B (dec: 483620987)
{
	short stunTime; // size=0, offset=0
	short damageTime; // size=0, offset=2
	short recovery; // size=0, offset=4
	short surpriseTime; // size=0, offset=6
	short grabTime; // size=0, offset=8
	short combatRange; // size=0, offset=10
	short surpriseRange; // size=0, offset=12
	short allyRange; // size=0, offset=14
	short enemyAttackRange; // size=0, offset=16
	short enemyRunAttackRange; // size=0, offset=18
	short preferredCombatRange; // size=0, offset=20
	short suckPower; // size=0, offset=22
	short suckRange; // size=0, offset=24
	short suckTime; // size=0, offset=26
	char hitPoints; // size=0, offset=28
	char numAttacks; // size=0, offset=29
	char missileAttack; // size=0, offset=30
	char ambushAttack; // size=0, offset=31
	char evadeProbability[12]; // size=12, offset=32
	char attackList[1]; // size=1, offset=44
};

struct _MonsterSubAttributes // hashcode: 0xD249D756 (dec: -766912682)
{
	char *animList; // size=0, offset=0
	struct _MonsterSenses *senses; // size=18, offset=4
	struct _MonsterCombatAttributes *combatAttributes; // size=46, offset=8
	struct _MonsterAllegiances *allegiances; // size=16, offset=12
	char *behaviorList; // size=0, offset=16
	short scale; // size=0, offset=20
	short fallDistance; // size=0, offset=22
	short defAmbushRange; // size=0, offset=24
	short fleeRange; // size=0, offset=26
	short speedPivotTurn; // size=0, offset=28
	short speedWalkTurn; // size=0, offset=30
	short speedRunTurn; // size=0, offset=32
	short speedFleeTurn; // size=0, offset=34
	short forgetTime; // size=0, offset=36
	unsigned char modelNum; // size=0, offset=38
	unsigned char physAbility; // size=0, offset=39
	unsigned char stunnable; // size=0, offset=40
	unsigned char grabable; // size=0, offset=41
	unsigned char numSections; // size=0, offset=42
	unsigned char sectionEnd[3]; // size=3, offset=43
	short defPlayerAttitude; // size=0, offset=46
	short defWanderRange; // size=0, offset=48
	short defGuardRange; // size=0, offset=50
	unsigned char defInitialBehavior; // size=0, offset=52
	unsigned char defTriggeredBehavior; // size=0, offset=53
	char defActiveBehavior; // size=0, offset=54
	unsigned char defSpectral; // size=0, offset=55
	unsigned char sunVuln; // size=0, offset=56
	unsigned char fireVuln; // size=0, offset=57
	unsigned char waterVuln; // size=0, offset=58
	unsigned char impaleVuln; // size=0, offset=59
	unsigned char soundVuln; // size=0, offset=60
	unsigned char weaponVuln; // size=0, offset=61
	unsigned char missileVuln; // size=0, offset=62
	unsigned char bruiseRed; // size=0, offset=63
	unsigned char bruiseGreen; // size=0, offset=64
	unsigned char bruiseBlue; // size=0, offset=65
	short minSpikeRange; // size=0, offset=66
	short maxSpikeRange; // size=0, offset=68
	short maxSpikeAngle; // size=0, offset=70
	short minSpikeHorzSpeed; // size=0, offset=72
	short maxSpikeHorzSpeed; // size=0, offset=74
	short maxSpikeVertSpeed; // size=0, offset=76
	short upOnGroundOffset; // size=0, offset=78
	short downOnGroundOffset; // size=0, offset=80
};

struct SOUND_114fake // hashcode: 0xEE28F284 (dec: -299306364)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: sound.o, sound.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: sound.o, sound.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: sound.o, sound.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: sound.o, sound.o
};

struct AadInitAttr // hashcode: 0x0549E29A (dec: 88728218)
{
	int updateMode; // size=0, offset=0
	int numSlots; // size=0, offset=4
	void (*nonBlockLoadProc)(); // size=0, offset=8
	void (*nonBlockBufferedLoadProc)(); // size=0, offset=12
	void (**memoryMallocProc)(); // size=0, offset=16
	void (*memoryFreeProc)(); // size=0, offset=20
};

struct MusicLoadInfo // hashcode: 0xC8F67C40 (dec: -923370432)
{
	int state; // size=0, offset=0
	int nextState; // size=0, offset=4
	int errorStatus; // size=0, offset=8
	int bankLoaded; // size=0, offset=12
	int checkMusicDelay; // size=0, offset=16
	int currentMusicPlane; // size=0, offset=20
	char currentMusicName[8]; // size=8, offset=24
	struct MusicLoadCmd commandQueue[4]; // size=32, offset=32
	int commandIn; // size=0, offset=64
	int commandOut; // size=0, offset=68
	int numCmdsInQueue; // size=0, offset=72
};

struct ObjectPeriodicSound // hashcode: 0x931DBADB (dec: -1826768165)
{
	unsigned char type; // size=0, offset=0
	unsigned char numSfxIDs; // size=0, offset=1
	unsigned char soundInst; // size=0, offset=2
	unsigned char flags; // size=0, offset=3
	unsigned short minVolDistance; // size=0, offset=4
	short pitch; // size=0, offset=6
	unsigned short pitchVariation; // size=0, offset=8
	unsigned char maxVolume; // size=0, offset=10
	unsigned char maxVolVariation; // size=0, offset=11
	unsigned char initialDelay; // size=0, offset=12
	unsigned char initialDelayVariation; // size=0, offset=13
	unsigned char onTime; // size=0, offset=14
	unsigned char onTimeVariation; // size=0, offset=15
	unsigned char offTime; // size=0, offset=16
	unsigned char offTimeVariation; // size=0, offset=17
};

struct ObjectEventSound // hashcode: 0x02927CD2 (dec: 43154642)
{
	unsigned char type; // size=0, offset=0
	unsigned char numSfxIDs; // size=0, offset=1
	unsigned char soundInst; // size=0, offset=2
	unsigned char flags; // size=0, offset=3
	unsigned short minVolDistance; // size=0, offset=4
	short pitch; // size=0, offset=6
	unsigned short pitchVariation; // size=0, offset=8
	unsigned char maxVolume; // size=0, offset=10
	unsigned char maxVolVariation; // size=0, offset=11
	unsigned char initialDelay; // size=0, offset=12
	unsigned char initialDelayVariation; // size=0, offset=13
};

struct ObjectOneShotSound // hashcode: 0xF16FD213 (dec: -244329965)
{
	unsigned char type; // size=0, offset=0
	unsigned char numSfxIDs; // size=0, offset=1
	unsigned char soundInst; // size=0, offset=2
	unsigned char flags; // size=0, offset=3
	unsigned short minVolDistance; // size=0, offset=4
	short pitch; // size=0, offset=6
	unsigned short pitchVariation; // size=0, offset=8
	unsigned char maxVolume; // size=0, offset=10
	unsigned char maxVolVariation; // size=0, offset=11
	unsigned char initialDelay; // size=0, offset=12
	unsigned char initialDelayVariation; // size=0, offset=13
};

struct SoundEffectChannel // hashcode: 0xA19502FD (dec: -1584069891)
{
	unsigned char inUse; // size=0, offset=0
	unsigned char unused; // size=0, offset=1
	unsigned short unused1; // size=0, offset=2
	unsigned long handle; // size=0, offset=4
	short volume; // size=0, offset=8
	short volumeChangeTime; // size=0, offset=10
	short volumeChangeTimeSave; // size=0, offset=12
	short volumeChangePerUpdate; // size=0, offset=14
	short volumeChangeSign; // size=0, offset=16
	short volumeChangeErrPerUpdate; // size=0, offset=18
	short volumeChangeError; // size=0, offset=20
	short pitch; // size=0, offset=22
	short pitchChangeTime; // size=0, offset=24
	short pitchChangeTimeSave; // size=0, offset=26
	short pitchChangePerUpdate; // size=0, offset=28
	short pitchChangeSign; // size=0, offset=30
	short pitchChangeErrPerUpdate; // size=0, offset=32
	short pitchChangeError; // size=0, offset=34
};

struct _SBSPLeaf // hashcode: 0xAD21B7BA (dec: -1390299206)
{
	struct _Sphere_noSq sphere; // size=8, offset=0
	struct Intro **introList; // size=76, offset=8
	short numIntros; // size=0, offset=12
	short flags; // size=0, offset=14
	struct CDLight **lightList; // size=24, offset=16
	short numLights; // size=0, offset=20
	short pad; // size=0, offset=22
};

struct BSP_109fake // hashcode: 0xF4A997D6 (dec: -190212138)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: bsp.o, bsp.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: bsp.o, bsp.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: bsp.o, bsp.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: bsp.o, bsp.o
};

struct BSPScratch // hashcode: 0x17CFF45B (dec: 399504475)
{
	struct MATRIX vv[2]; // size=64, offset=0
	struct MATRIX camMatrix; // size=32, offset=64
	struct VECTOR dpv[3]; // size=48, offset=96
	long d[6]; // size=24, offset=144
	struct MATRIX boundMatrix; // size=32, offset=168
	long in_spectral; // size=0, offset=200
};

struct _ObjectOwnerInfo // hashcode: 0x04BCED5C (dec: 79490396)
{
	long magicnum; // size=0, offset=0
	short animID; // size=0, offset=4
	char objectName[0]; // size=0, offset=6
};

struct OBTABLE_114fake // hashcode: 0xA297FC58 (dec: -1567097768)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: obtable.o, obtable.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: obtable.o, obtable.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: obtable.o, obtable.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: obtable.o, obtable.o
};

struct ObjectAccess // hashcode: 0x1268C513 (dec: 308856083)
{
	char *objectName; // size=0, offset=0
	void *object; // size=0, offset=4
};

struct OBTABLE2_114fake // hashcode: 0xAA6A3EB1 (dec: -1435877711)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: obtable2.o, obtable2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: obtable2.o, obtable2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: obtable2.o, obtable2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: obtable2.o, obtable2.o
};

struct ObjectFunc // hashcode: 0xFDE6E2DA (dec: -35200294)
{
	char *scriptName; // size=0, offset=0
	void (*initFunc)(); // size=0, offset=4
	void (*processFunc)(); // size=0, offset=8
	void (*collideFunc)(); // size=0, offset=12
	unsigned long (*queryFunc)(); // size=0, offset=16
	void (*messageFunc)(); // size=0, offset=20
	void (*additionalCollideFunc)(); // size=0, offset=24
	void (*relocateTuneFunc)(); // size=0, offset=28
	void (*relocateInstObFunc)(); // size=0, offset=32
};

struct GENERIC_114fake // hashcode: 0xDFE61644 (dec: -538569148)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: generic.o, generic.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: generic.o, generic.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: generic.o, generic.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: generic.o, generic.o
};

struct evAnimationInstanceSwitchData // hashcode: 0xEE7F2A6C (dec: -293655956)
{
	struct _Instance *instance; // size=616, offset=0
	int anim; // size=0, offset=4
	int frame; // size=0, offset=8
	int frames; // size=0, offset=12
	int mode; // size=0, offset=16
};

struct evControlSaveDataData // hashcode: 0xA76A68A9 (dec: -1486198615)
{
	long length; // size=0, offset=0
	void *data; // size=0, offset=4
};

struct GenericTune // hashcode: 0x1B714C34 (dec: 460409908)
{
	long flags; // size=0, offset=0
	void *shatterData; // size=0, offset=4
};

struct POLY_FT3 // hashcode: 0x1FB59984 (dec: 531995012)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char u1; // size=0, offset=20
	unsigned char v1; // size=0, offset=21
	unsigned short tpage; // size=0, offset=22
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char u2; // size=0, offset=28
	unsigned char v2; // size=0, offset=29
	unsigned short pad1; // size=0, offset=30
};

struct _Mirror // hashcode: 0x6161DBD4 (dec: 1633803220)
{
	short a; // size=0, offset=0
	short b; // size=0, offset=2
	short c; // size=0, offset=4
	short d; // size=0, offset=6
};

struct PIPE3D_109fake // hashcode: 0xEADE4BF5 (dec: -354530315)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: pipe3d.o, pipe3d.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: pipe3d.o, pipe3d.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: pipe3d.o, pipe3d.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: pipe3d.o, pipe3d.o
};

struct _FXHalvePlane // hashcode: 0x10EBCD5A (dec: 283888986)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	long diffTime; // size=0, offset=16
	struct _PlaneConstants ringPlane; // size=12, offset=20
	long currentColor; // size=0, offset=32
	long *colorArray; // size=0, offset=36
	short numColors; // size=0, offset=40
	short colorBlendLife; // size=0, offset=42
};

struct _FXGlowEffect // hashcode: 0xCE07D6ED (dec: -838347027)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	unsigned long diffTime; // size=0, offset=16
	long *colorArray; // size=0, offset=20
	long currentColor; // size=0, offset=24
	short numColors; // size=0, offset=28
	short colorBlendCycle; // size=0, offset=30
	short width; // size=0, offset=32
	short height; // size=0, offset=34
	unsigned char numSegments; // size=0, offset=36
	unsigned char SegmentInc; // size=0, offset=37
	short segment; // size=0, offset=38
	short fadein_time; // size=0, offset=40
	short fadeout_time; // size=0, offset=42
};

struct PIPE3D_239fake // hashcode: 0x11DBF281 (dec: 299627137)
{
	long m[3]; // size=12, offset=0
};

struct PIPE3D_240fake // hashcode: 0xB73CD4A8 (dec: -1220750168)
{
	long m[5]; // size=20, offset=0
};

struct TransformAnimatedInstanceVerticesWork_t // hashcode: 0x7584B74F (dec: 1971631951)
{
	struct MATRIX scTransform; // size=32, offset=0
	struct MATRIX mirrorMatrix; // size=32, offset=32
	struct MATRIX llm; // size=32, offset=64
	struct _Vector vector; // size=12, offset=96
};

struct SCRIPT_114fake // hashcode: 0x918B5BD9 (dec: -1853137959)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: script.o, script.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: script.o, script.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: script.o, script.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: script.o, script.o
};

struct FXSplinter // hashcode: 0x3E763456 (dec: 1047934038)
{
	short flags; // size=0, offset=0
	short soundFx; // size=0, offset=2
	short chunkVelXY; // size=0, offset=4
	short chunkVelZ; // size=0, offset=6
	short chunkVelRng; // size=0, offset=8
	short triVelRng; // size=0, offset=10
	short lifetime; // size=0, offset=12
	short faceLimit; // size=0, offset=14
	short rotRateRng; // size=0, offset=16
	short gravityZ; // size=0, offset=18
};

struct TIMER_109fake // hashcode: 0x38B8D1E3 (dec: 951636451)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: timer.o, timer.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: timer.o, timer.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: timer.o, timer.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: timer.o, timer.o
};

struct DR_TPAGE // hashcode: 0xA93EABEF (dec: -1455510545)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[1]; // size=4, offset=4
};

struct FX_109fake // hashcode: 0x76D46C98 (dec: 1993632920)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: fx.o, fx.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: fx.o, fx.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: fx.o, fx.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: fx.o, fx.o
};

struct _POLY_SG4 // hashcode: 0xA49EA007 (dec: -1533108217)
{
	unsigned long tag; // size=0, offset=0
	unsigned long drawTPage1; // size=0, offset=4
	struct _BASIC_G4 p1; // size=32, offset=8
	unsigned long drawTPage2; // size=0, offset=40
	struct _BASIC_F4 p2; // size=20, offset=44
};

struct _FXGeneralEffect // hashcode: 0xC4783451 (dec: -998755247)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
};

struct _FXRibbon // hashcode: 0xB11070B8 (dec: -1324322632)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	short numberVerts; // size=0, offset=16
	short endIndex; // size=0, offset=18
	struct SVECTOR *vertexPool; // size=8, offset=20
	short startSegment; // size=0, offset=24
	short endSegment; // size=0, offset=26
	long startColor; // size=0, offset=28
	long endColor; // size=0, offset=32
	short colorStepValue; // size=0, offset=36
	short faceLifeTime; // size=0, offset=38
	short startFadeValue; // size=0, offset=40
	short fadeStep; // size=0, offset=42
};

struct _FXParticle // hashcode: 0xDD6F143E (dec: -579922882)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	struct TextureMT3 *texture; // size=16, offset=16
	void *fxprim_modify_process; // size=0, offset=20
	void *fxprim_process; // size=0, offset=24
	short size; // size=0, offset=28
	short primLifeTime; // size=0, offset=30
	short birthRadius; // size=0, offset=32
	short scaleSpeed; // size=0, offset=34
	struct _Position direction; // size=6, offset=36
	unsigned short flag_bits; // size=0, offset=42
	struct _Position acceleration; // size=6, offset=44
	short startScale; // size=0, offset=50
	struct _Position offset; // size=6, offset=52
	char startSegment; // size=0, offset=58
	char z_undulate; // size=0, offset=59
	long startColor; // size=0, offset=60
	long endColor; // size=0, offset=64
	short colorStepValue; // size=0, offset=68
	char numberBirthParticles; // size=0, offset=70
	char endSegment; // size=0, offset=71
	short startFadeValue; // size=0, offset=72
	short fadeStep; // size=0, offset=74
};

struct _FXLightBeam // hashcode: 0xDC9CA53F (dec: -593713857)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	short startSeg; // size=0, offset=16
	short endSeg; // size=0, offset=18
	long color; // size=0, offset=20
};

struct _FXBlastringEffect // hashcode: 0x2F8F0E55 (dec: 797904469)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	struct _SVector position; // size=8, offset=16
	struct MATRIX matrix; // size=32, offset=24
	short segment; // size=0, offset=56
	short pad; // size=0, offset=58
	int radius; // size=0, offset=60
	int size1; // size=0, offset=64
	int size2; // size=0, offset=68
	int startRadius; // size=0, offset=72
	int endRadius; // size=0, offset=76
	int colorchange_radius; // size=0, offset=80
	int vel; // size=0, offset=84
	int accl; // size=0, offset=88
	int height1; // size=0, offset=92
	int height2; // size=0, offset=96
	int height3; // size=0, offset=100
	char predator_offset; // size=0, offset=104
	char predator_offset_orig; // size=0, offset=105
	char stay_in_place; // size=0, offset=106
	char sortInWorld; // size=0, offset=107
	long color; // size=0, offset=108
	long startColor; // size=0, offset=112
	long endColor; // size=0, offset=116
};

struct _FXForceFieldEffect // hashcode: 0x59105BC4 (dec: 1494244292)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	struct _SVector offset; // size=8, offset=16
	short size; // size=0, offset=24
	short size_diff; // size=0, offset=26
	short size_change; // size=0, offset=28
	short deg; // size=0, offset=30
	short deg_change; // size=0, offset=32
	short start_fade; // size=0, offset=34
	short end_fade; // size=0, offset=36
	long color; // size=0, offset=40
};

struct _FXLightning // hashcode: 0x552145A3 (dec: 1428243875)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	short deg; // size=0, offset=16
	short deg_inc; // size=0, offset=18
	struct _Position start_offset; // size=6, offset=20
	short startSeg; // size=0, offset=26
	struct _Instance *end_instance; // size=616, offset=28
	struct _Position end_offset; // size=6, offset=32
	short endSeg; // size=0, offset=38
	short matrixSeg; // size=0, offset=40
	short width; // size=0, offset=42
	short small_width; // size=0, offset=44
	short segs; // size=0, offset=46
	short sine_size; // size=0, offset=48
	short variation; // size=0, offset=50
	long color; // size=0, offset=52
	long glow_color; // size=0, offset=56
};

struct _FXFlash // hashcode: 0xD3DE17A3 (dec: -740419677)
{
	void *next; // size=0, offset=0
	void *continue_process; // size=0, offset=4
	struct _Instance *instance; // size=616, offset=8
	unsigned char effectType; // size=0, offset=12
	unsigned char type; // size=0, offset=13
	short lifeTime; // size=0, offset=14
	long timeToColor; // size=0, offset=16
	long timeAtColor; // size=0, offset=20
	long timeFromColor; // size=0, offset=24
	long currentTime; // size=0, offset=28
	long color; // size=0, offset=32
};

struct GenericFXObject // hashcode: 0xD22FD65C (dec: -768616868)
{
	struct _GenericParticleParams *ParticleList; // size=48, offset=0
	struct _GenericRibbonParams *RibbonList; // size=20, offset=4
	struct _GenericGlowParams *GlowList; // size=24, offset=8
	struct _GenericLightningParams *LightningList; // size=40, offset=12
	struct _GenericBlastringParams *BlastList; // size=48, offset=16
	struct _GenericFlashParams *FlashList; // size=12, offset=20
	long *ColorList; // size=0, offset=24
};

struct evObjectDraftData // hashcode: 0x73C6643E (dec: 1942381630)
{
	short force; // size=0, offset=0
	unsigned short radius; // size=0, offset=2
	unsigned short radiusCoef; // size=0, offset=4
	unsigned short height; // size=0, offset=6
	unsigned short maxVelocity; // size=0, offset=8
};

struct _GlyphTuneData // hashcode: 0x14FFD660 (dec: 352310880)
{
	short glyph_size; // size=0, offset=0
	short glyph_darkness; // size=0, offset=2
	char glyph_costs[8]; // size=8, offset=4
	short glyph_range[8]; // size=16, offset=12
	long color_array[28]; // size=112, offset=28
};

struct __ReaverData // hashcode: 0xD1EA4FE0 (dec: -773173280)
{
	char ReaverPickedUp; // size=0, offset=0
	char ReaverOn; // size=0, offset=1
	short ReaverSize; // size=0, offset=2
	short CurrentReaver; // size=0, offset=4
	short ReaverDeg; // size=0, offset=6
	long ReaverChargeTime; // size=0, offset=8
	long ReaverShockAmount; // size=0, offset=12
	long ReaverGlowColor; // size=0, offset=16
	long ReaverBladeColor; // size=0, offset=20
	long ReaverBladeGlowColor; // size=0, offset=24
	short ReaverScale; // size=0, offset=28
	short ReaverTargetScale; // size=0, offset=30
	struct __ReaverSaveDat saveData; // size=4, offset=32
};

struct __ReaverTuneData // hashcode: 0xE4E74D43 (dec: -454603453)
{
	unsigned long spectralGlowColor; // size=0, offset=0
	unsigned long materialGlowColor; // size=0, offset=4
	unsigned long sunlightGlowColor; // size=0, offset=8
	unsigned long waterGlowColor; // size=0, offset=12
	unsigned long stoneGlowColor; // size=0, offset=16
	unsigned long fireGlowColor; // size=0, offset=20
	unsigned long spiritGlowColor; // size=0, offset=24
	unsigned long soundGlowColor; // size=0, offset=28
	unsigned long spectralInnerColor; // size=0, offset=32
	unsigned long materialInnerColor; // size=0, offset=36
	unsigned long sunlightInnerColor; // size=0, offset=40
	unsigned long waterInnerColor; // size=0, offset=44
	unsigned long stoneInnerColor; // size=0, offset=48
	unsigned long fireInnerColor; // size=0, offset=52
	unsigned long spiritInnerColor; // size=0, offset=56
	unsigned long soundInnerColor; // size=0, offset=60
	unsigned long spectralInnerGlowColor; // size=0, offset=64
	unsigned long materialInnerGlowColor; // size=0, offset=68
	unsigned long sunlightInnerGlowColor; // size=0, offset=72
	unsigned long waterInnerGlowColor; // size=0, offset=76
	unsigned long stoneInnerGlowColor; // size=0, offset=80
	unsigned long fireInnerGlowColor; // size=0, offset=84
	unsigned long spiritInnerGlowColor; // size=0, offset=88
	unsigned long soundInnerGlowColor; // size=0, offset=92
	unsigned long icon_colors[24]; // size=96, offset=96
};

struct _POLY_TF4 // hashcode: 0x871FC08E (dec: -2027962226)
{
	unsigned long tag; // size=0, offset=0
	unsigned long drawTPage; // size=0, offset=4
	struct _BASIC_F4 p1; // size=20, offset=8
};

struct _POLY_2G4 // hashcode: 0x3FC1C531 (dec: 1069663537)
{
	unsigned long tag; // size=0, offset=0
	struct _BASIC_G4 p1; // size=32, offset=4
	struct _BASIC_G4 p2; // size=32, offset=36
};

struct _POLY_2G4T // hashcode: 0xA357E01D (dec: -1554522083)
{
	unsigned long tag; // size=0, offset=0
	unsigned long drawTPage1; // size=0, offset=4
	struct _BASIC_G4 p1; // size=32, offset=8
	struct _BASIC_G4 p2; // size=32, offset=40
};

struct VM_109fake // hashcode: 0x94EF070A (dec: -1796274422)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: vm.o, vm.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: vm.o, vm.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: vm.o, vm.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: vm.o, vm.o
};

struct NewMemTracker // hashcode: 0x5C68280F (dec: 1550329871)
{
	struct MemHeader *rootNode; // size=8, offset=0
	unsigned long totalMemory; // size=0, offset=4
	unsigned long currentMemoryUsed; // size=0, offset=8
	char *lastMemoryAddress; // size=0, offset=12
	long doingGarbageCollection; // size=0, offset=16
};

struct AadVolume // hashcode: 0xDE43B1D6 (dec: -565988906)
{
	short left; // size=0, offset=0
	short right; // size=0, offset=2
};

struct AadSequenceHdr // hashcode: 0x09B09BCF (dec: 162569167)
{
	unsigned long sequenceID; // size=0, offset=0
	unsigned long quarterNoteTime; // size=0, offset=4
	unsigned short ppqn; // size=0, offset=8
	unsigned short version; // size=0, offset=10
	unsigned short numTracks; // size=0, offset=12
	unsigned short unused; // size=0, offset=14
};

struct AadTempo // hashcode: 0x0AB3CE4B (dec: 179555915)
{
	unsigned long quarterNoteTime; // size=0, offset=0
	int ppqn; // size=0, offset=4
};

struct AadMemoryStruct // hashcode: 0x46CEF45B (dec: 1187968091)
{
	unsigned long updateCounter; // size=0, offset=0
	int numSlots; // size=0, offset=4
	int updateMode; // size=0, offset=8
	int masterVolume; // size=0, offset=12
	struct AadVolFader masterVolFader; // size=12, offset=16
	int sfxMasterVol; // size=0, offset=28
	int musicMasterVol; // size=0, offset=32
	int flags; // size=0, offset=36
	struct AadVolFader musicMasterVolFader; // size=12, offset=40
	struct _AadSequenceSlot (*sequenceSlots[8]); // size=32, offset=52
	struct AadSfxSlot sfxSlot; // size=392, offset=84
	struct AadSynthVoice synthVoice[24]; // size=672, offset=476
	char voiceStatus[24]; // size=24, offset=1148
	unsigned short voicePitchSave[24]; // size=48, offset=1172
	unsigned long voiceKeyOffRequest; // size=0, offset=1220
	unsigned long voiceKeyOnRequest; // size=0, offset=1224
	unsigned long voiceReverbRequest; // size=0, offset=1228
	struct AadSoundBankHdr (*dynamicSoundBankHdr[2]); // size=8, offset=1232
	struct AadProgramAtr (*dynamicProgramAtr[2]); // size=8, offset=1240
	struct AadToneAtr (*dynamicToneAtr[2]); // size=8, offset=1248
	unsigned long (*dynamicWaveAddr[2]); // size=8, offset=1256
	unsigned char (**dynamicSequenceAddressTbl[2]); // size=8, offset=1264
	unsigned long (*dynamicSequenceLabelOffsetTbl[2]); // size=8, offset=1272
	int dynamicBankStatus[2]; // size=8, offset=1280
	unsigned char (*dynamicSoundBankData[2]); // size=8, offset=1288
	unsigned long dynamicSoundBankSramData[2]; // size=8, offset=1296
	struct AadDynamicLoadRequest loadRequestQueue[16]; // size=448, offset=1304
	struct AadDynamicBankLoadInfo dynamicBankLoadInfo; // size=88, offset=1752
	void (*nonBlockLoadProc)(); // size=0, offset=1840
	void (*nonBlockBufferedLoadProc)(); // size=0, offset=1844
	void (**memoryMallocProc)(); // size=0, offset=1848
	void (*memoryFreeProc)(); // size=0, offset=1852
	int nextLoadReqIn; // size=0, offset=1856
	int nextLoadReqOut; // size=0, offset=1860
	int numLoadReqsQueued; // size=0, offset=1864
	struct AadDynamicSfxLoadInfo dynamicSfxLoadInfo; // size=148, offset=1868
	struct _AadDynSfxFileHdr *firstDynSfxFile; // size=20, offset=2016
	int nextFileHandle; // size=0, offset=2020
	struct AadSramDefragInfo sramDefragInfo; // size=32, offset=2024
	unsigned char sfxToneMasterList[512]; // size=512, offset=2056
	unsigned char sfxWaveMasterList[512]; // size=512, offset=2568
	struct AadLoadedSfxToneAttr sfxToneAttrTbl[128]; // size=2560, offset=3080
	struct AadLoadedSfxWaveAttr sfxWaveAttrTbl[120]; // size=480, offset=5640
	int nextToneIndex; // size=0, offset=6120
	int nextWaveIndex; // size=0, offset=6124
	struct AadNewSramBlockDesc sramDescriptorTbl[128]; // size=1024, offset=6128
	int nextSramDescIndex; // size=0, offset=7152
	int firstSramBlockDescIndex; // size=0, offset=7156
	void (*controller11Callback)(); // size=0, offset=7160
	void (*endSequenceCallback)(); // size=0, offset=7164
	long controller11CallbackData; // size=0, offset=7168
	long endSequenceCallbackData; // size=0, offset=7172
	unsigned char userVariables[128]; // size=128, offset=7176
};

struct AadSlotAttributes // hashcode: 0x7DE97E8C (dec: 2112454284)
{
	int sequenceNumberAssigned; // size=0, offset=0
	int sequenceAssignedDynamicBank; // size=0, offset=4
	int playingStatus; // size=0, offset=8
	int channelMute; // size=0, offset=12
	int slotVolume; // size=0, offset=16
	int slotPan; // size=0, offset=20
	int eventsInQueue[16]; // size=64, offset=24
};

struct AADLIB_153fake // hashcode: 0x95DB25F7 (dec: -1780800009)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: aadlib.o, aadlib.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: aadlib.o, aadlib.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: aadlib.o, aadlib.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: aadlib.o, aadlib.o
};

struct POLY_G4 // hashcode: 0x82B947DC (dec: -2101786660)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char r1; // size=0, offset=12
	unsigned char g1; // size=0, offset=13
	unsigned char b1; // size=0, offset=14
	unsigned char pad1; // size=0, offset=15
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char r2; // size=0, offset=20
	unsigned char g2; // size=0, offset=21
	unsigned char b2; // size=0, offset=22
	unsigned char pad2; // size=0, offset=23
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char r3; // size=0, offset=28
	unsigned char g3; // size=0, offset=29
	unsigned char b3; // size=0, offset=30
	unsigned char pad3; // size=0, offset=31
	short x3; // size=0, offset=32
	short y3; // size=0, offset=34
};

struct DR_AREA // hashcode: 0xE0CED39B (dec: -523316325)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct evPositionData // hashcode: 0x853C21E0 (dec: -2059656736)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct STracker // hashcode: 0xAED5E069 (dec: -1361715095)
{
	struct _StreamUnit StreamList[16]; // size=1024, offset=0
};

struct FaceExtents // hashcode: 0x22E8BE79 (dec: 585678457)
{
	long smallx; // size=0, offset=0
	long bigx; // size=0, offset=4
	long smally; // size=0, offset=8
	long bigy; // size=0, offset=12
	long smallz; // size=0, offset=16
	long bigz; // size=0, offset=20
};

struct WarpRoom // hashcode: 0x34E00E66 (dec: 887098982)
{
	char name[16]; // size=16, offset=0
	struct _StreamUnit *streamUnit; // size=64, offset=16
};

struct PlanningNode // hashcode: 0xDB9F3065 (dec: -610324379)
{
	struct _Position pos; // size=6, offset=0
	unsigned short flags; // size=0, offset=6
	unsigned long connectionStatus; // size=0, offset=8
	unsigned long connections; // size=0, offset=12
	unsigned short cost; // size=0, offset=16
	unsigned short parent; // size=0, offset=18
	unsigned short nodeType; // size=0, offset=20
	unsigned short id; // size=0, offset=22
	long streamUnitID; // size=0, offset=24
};

struct VramBuffer // hashcode: 0x13A80E34 (dec: 329780788)
{
	long flags; // size=0, offset=0
	short x; // size=0, offset=4
	short y; // size=0, offset=6
	short w; // size=0, offset=8
	short h; // size=0, offset=10
	short yOffset; // size=0, offset=12
	short lengthOfLeftOverData; // size=0, offset=14
	short *lineOverFlow; // size=0, offset=16
};

struct STREAM_294fake // hashcode: 0x4C00FE3C (dec: 1275133500)
{
	int warpgate_in_use; // size=0, offset=0
	char loading; // size=0, offset=4
	char blocked; // size=0, offset=5
	short fadeValue; // size=0, offset=6
	long curTime; // size=0, offset=8
	long maxTime; // size=0, offset=12
	struct _Instance *warpFaceInstance; // size=616, offset=16
};

struct PHYSOBS_109fake // hashcode: 0x64BC6ACF (dec: 1690069711)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: PhysObs.o, PhysObs.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: PhysObs.o, PhysObs.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: PhysObs.o, PhysObs.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: PhysObs.o, PhysObs.o
};

struct evObjectData // hashcode: 0xE261F276 (dec: -496897418)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short PathNumber; // size=0, offset=4
	short LinkNode; // size=0, offset=6
	struct _Instance *Force; // size=616, offset=8
	int rc; // size=0, offset=12
};

struct evPhysicsGravityData // hashcode: 0xD13BDF0D (dec: -784605427)
{
	short UpperOffset; // size=0, offset=0
	short LowerOffset; // size=0, offset=2
	short x; // size=0, offset=4
	short y; // size=0, offset=6
	short z; // size=0, offset=8
	short slipSlope; // size=0, offset=10
};

struct evPhysicsSlideData // hashcode: 0x42A65F7B (dec: 1118199675)
{
	struct _SVector ForwardVector; // size=8, offset=0
	struct _SVector ForwardNormal; // size=8, offset=8
	struct _SVector DropNormal; // size=8, offset=16
	short Segment; // size=0, offset=24
	short DropOffset; // size=0, offset=26
	short UpperOffset; // size=0, offset=28
	short Height; // size=0, offset=30
	struct _Instance *UpperInstance; // size=616, offset=32
	int Dot; // size=0, offset=36
};

struct evObjectThrowData // hashcode: 0x293A2507 (dec: 691676423)
{
	short type; // size=0, offset=0
	short spinType; // size=0, offset=2
	union {
		struct _Instance *target; // size=616, offset=0
		struct _Position position; // size=6, offset=0
		struct _Rotation direction; // size=8, offset=0
		struct _Position throwVector; // size=6, offset=0
	} data; // size=8, offset=4, found in object files: PhysObs.o, PhysObs.o
	struct _SVector angularVel; // size=8, offset=12
	unsigned short speed; // size=0, offset=20
	short gravity; // size=0, offset=22
	short initialXRot; // size=0, offset=24
	short zVel; // size=0, offset=26
};

struct evObjectBirthProjectileData // hashcode: 0xAA355F00 (dec: -1439342848)
{
	struct _Instance *instance; // size=616, offset=0
	int joint; // size=0, offset=4
	int type; // size=0, offset=8
	struct _Instance *birthInstance; // size=616, offset=12
};

struct PhysObWeaponProperties // hashcode: 0xC3612955 (dec: -1017042603)
{
	struct PhysObProperties Properties; // size=8, offset=0
	struct PhysObWeaponAttributes WeaponAttributes; // size=28, offset=8
};

struct PhysObInteractProperties // hashcode: 0x668EE420 (dec: 1720640544)
{
	struct PhysObProperties Properties; // size=8, offset=0
	unsigned short conditions; // size=0, offset=8
	unsigned short auxConditions; // size=0, offset=10
	unsigned short action; // size=0, offset=12
	unsigned short auxAction; // size=0, offset=14
	unsigned char startAnim; // size=0, offset=16
	unsigned char endAnim; // size=0, offset=17
	unsigned char razielAnim; // size=0, offset=18
	unsigned char razielAuxAnim; // size=0, offset=19
	unsigned char frame; // size=0, offset=20
	unsigned char startAnimMode; // size=0, offset=21
	unsigned short distance; // size=0, offset=22
	unsigned short newType; // size=0, offset=24
	unsigned short newClass; // size=0, offset=26
	unsigned short mode; // size=0, offset=28
	unsigned short engageXYDistance; // size=0, offset=30
	short engageZMinDelta; // size=0, offset=32
	short engageZMaxDelta; // size=0, offset=34
	unsigned char engageYCone; // size=0, offset=36
	unsigned char engageZCone; // size=0, offset=37
	unsigned short pad; // size=0, offset=38
	struct PhysObWeaponAttributes *weapon; // size=28, offset=40
};

struct __PhysObProjectileProperties // hashcode: 0x0F1971B2 (dec: 253325746)
{
	struct PhysObProperties Properties; // size=8, offset=0
	long totalProjectiles; // size=0, offset=8
	struct __PhysObProjectileData *data; // size=12, offset=12
};

struct PhysObDraftProperties // hashcode: 0x734F01FC (dec: 1934557692)
{
	struct PhysObProperties Properties; // size=8, offset=0
	short force; // size=0, offset=8
	unsigned short radius; // size=0, offset=10
	unsigned short radiusCoef; // size=0, offset=12
	short maxVelocity; // size=0, offset=14
	unsigned long height; // size=0, offset=16
};

struct PhysObSwitchProperties // hashcode: 0xF10C9EBB (dec: -250831173)
{
	struct PhysObProperties Properties; // size=8, offset=0
	short Distance; // size=0, offset=8
	short Class; // size=0, offset=10
	unsigned char onAnim; // size=0, offset=12
	unsigned char offAnim; // size=0, offset=13
	unsigned char failedOnAnim; // size=0, offset=14
	unsigned char enableAnim; // size=0, offset=15
	unsigned char shutAnim; // size=0, offset=16
	unsigned char onWalkTimer; // size=0, offset=17
	unsigned char offWalkTimer; // size=0, offset=18
	unsigned char walkMode; // size=0, offset=19
	unsigned char razielOnAnim; // size=0, offset=20
	unsigned char razielOffAnim; // size=0, offset=21
	unsigned char razielFailedOnAnim; // size=0, offset=22
	unsigned char razielEnableAnim; // size=0, offset=23
	unsigned char startMode; // size=0, offset=24
	unsigned char startAnim; // size=0, offset=25
	unsigned short engageXYDistance; // size=0, offset=26
	char engageZMinDelta; // size=0, offset=28
	char engageZMaxDelta; // size=0, offset=29
	unsigned char engageYCone; // size=0, offset=30
	unsigned char engageZCone; // size=0, offset=31
};

struct PhysObCollectibleProperties // hashcode: 0x80B1E807 (dec: -2135824377)
{
	struct PhysObProperties Properties; // size=8, offset=0
	short collectClass; // size=0, offset=8
	short collectValue; // size=0, offset=10
	unsigned long distance; // size=0, offset=12
	unsigned char idleAnim; // size=0, offset=16
	unsigned char collectAnim; // size=0, offset=17
	unsigned short spatialNode; // size=0, offset=18
};

struct PhysObAnimatedProperties // hashcode: 0xC40C87E4 (dec: -1005811740)
{
	struct PhysObProperties Properties; // size=8, offset=0
	unsigned short flags; // size=0, offset=8
	unsigned short pad; // size=0, offset=10
};

struct PhysObData // hashcode: 0x95351304 (dec: -1791683836)
{
	long Mode; // size=0, offset=0
	short xForce; // size=0, offset=4
	short yForce; // size=0, offset=6
	struct _Instance *Force; // size=616, offset=8
	short LinkNode; // size=0, offset=12
	short px; // size=0, offset=14
	short py; // size=0, offset=16
	short pz; // size=0, offset=18
	short rx1; // size=0, offset=20
	short ry1; // size=0, offset=22
	short rz1; // size=0, offset=24
	short Segment1; // size=0, offset=26
	short rx2; // size=0, offset=28
	short ry2; // size=0, offset=30
	short rz2; // size=0, offset=32
	short Segment2; // size=0, offset=34
	short Steps; // size=0, offset=36
	short Step; // size=0, offset=38
	short PathNumber; // size=0, offset=40
	short Pad1; // size=0, offset=42
	struct _HInfo *RightCollision; // size=24, offset=44
	struct _HInfo *LeftCollision; // size=24, offset=48
	short burnAmpl; // size=0, offset=52
	short throwFlags; // size=0, offset=54
	short initialXRot; // size=0, offset=56
	short xRotVel; // size=0, offset=58
	short yRotVel; // size=0, offset=60
	short zRotVel; // size=0, offset=62
	struct _Instance *throwingInstance; // size=616, offset=64
	int physObTimer; // size=0, offset=68
};

struct BreakOffData // hashcode: 0x47B171A7 (dec: 1202811303)
{
	short NewType; // size=0, offset=0
	short NewClass; // size=0, offset=2
};

struct ProjectileData // hashcode: 0x05689657 (dec: 90740311)
{
	int Type; // size=0, offset=0
};

struct _PhysObSaveData // hashcode: 0xA353E0E7 (dec: -1554784025)
{
	struct SwitchData switchData; // size=4, offset=0
	long Mode; // size=0, offset=4
};

struct RAZCNTRL_109fake // hashcode: 0x79D2E6E3 (dec: 2043864803)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: razcntrl.o, razcntrl.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: razcntrl.o, razcntrl.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: razcntrl.o, razcntrl.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: razcntrl.o, razcntrl.o
};

struct STATE_109fake // hashcode: 0x5CC5AB24 (dec: 1556458276)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: state.o, state.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: state.o, state.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: state.o, state.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: state.o, state.o
};

struct __CharacterState // hashcode: 0x6C0823BB (dec: 1812472763)
{
	struct _Instance *CharacterInstance; // size=616, offset=0
	int TotalSections; // size=0, offset=4
	struct __State SectionList[3]; // size=852, offset=8
};

struct evMonsterHitData // hashcode: 0x5BC7AF7A (dec: 1539813242)
{
	struct _Instance *sender; // size=616, offset=0
	struct _Instance *lastHit; // size=616, offset=4
	short knockBackDistance; // size=0, offset=8
	short knockBackDuration; // size=0, offset=10
	long power; // size=0, offset=12
};

struct evMonsterThrownData // hashcode: 0x1A3E9058 (dec: 440307800)
{
	struct _Instance *sender; // size=616, offset=0
	struct _Rotation direction; // size=8, offset=4
	short power; // size=0, offset=12
};

struct evMonsterAlarmData // hashcode: 0x5CC4F325 (dec: 1556411173)
{
	struct _Instance *sender; // size=616, offset=0
	struct _Position position; // size=6, offset=4
	short type; // size=0, offset=10
};

struct evMonsterSoulSuckData // hashcode: 0x24FA0E9A (dec: 620367514)
{
	struct _Instance *sender; // size=616, offset=0
	struct _Position Destination; // size=6, offset=4
};

struct evPhysicsDropOffData // hashcode: 0x240C7D71 (dec: 604798321)
{
	short xOffset; // size=0, offset=0
	short yOffset; // size=0, offset=2
	short DropOffset; // size=0, offset=4
	short slipSlope; // size=0, offset=6
	int UpperOffset; // size=0, offset=8
};

struct evPhysicsEdgeData // hashcode: 0x9E9E1CB3 (dec: -1633805133)
{
	short UpperOffset; // size=0, offset=0
	short ForwardOffset; // size=0, offset=2
	short AboveOffset; // size=0, offset=4
	short XDistance; // size=0, offset=6
	short YDistance; // size=0, offset=8
	short ZDistance; // size=0, offset=10
	struct _SVector *Normal1; // size=8, offset=12
	struct _SVector *Normal2; // size=8, offset=16
	struct _SVector *Delta; // size=8, offset=20
	struct _Instance *instance; // size=616, offset=24
	int zRot; // size=0, offset=28
	int rc; // size=0, offset=32
};

struct evPhysicsWallCrawlData // hashcode: 0x27DFBF06 (dec: 668974854)
{
	short Segment; // size=0, offset=0
	short Length; // size=0, offset=2
	short ForwardOffset; // size=0, offset=4
	short NormalDistance; // size=0, offset=6
	struct _SVector DropNormal; // size=8, offset=8
	struct _SVector ForwardNormal; // size=8, offset=16
	struct _Position NewPosition; // size=6, offset=24
	struct _Rotation DropRotation; // size=8, offset=30
	short ForwardXRotation; // size=0, offset=38
	int rc; // size=0, offset=40
};

struct evPhysicsSwimData // hashcode: 0x947F2BE5 (dec: -1803605019)
{
	short CheckDepth; // size=0, offset=0
	short SwimDepth; // size=0, offset=2
	short WadeDepth; // size=0, offset=4
	short TreadDepth; // size=0, offset=6
	struct _SVector *iVelocity; // size=8, offset=8
	short Depth; // size=0, offset=12
	short WaterDepth; // size=0, offset=14
	short rc; // size=0, offset=16
	short pad; // size=0, offset=18
	int WaterLevel; // size=0, offset=20
};

struct evPhysicsDropHeightData // hashcode: 0x5DCE3926 (dec: 1573796134)
{
	struct _Position origin; // size=6, offset=0
	short mode; // size=0, offset=6
	short DropOffset; // size=0, offset=8
	short result; // size=0, offset=10
	struct BSPTree *bsp; // size=36, offset=12
	struct _TFace *tface; // size=12, offset=16
};

struct evPhysicsLinkedMoveData // hashcode: 0xB4C6EBA9 (dec: -1262031959)
{
	struct _Instance *instance; // size=616, offset=0
	int segment; // size=0, offset=4
	struct _SVector posDelta; // size=8, offset=8
	struct _SVector rotDelta; // size=8, offset=16
};

struct evFXHitData // hashcode: 0x3D609E61 (dec: 1029742177)
{
	struct _SVector location; // size=8, offset=0
	struct _SVector velocity; // size=8, offset=8
	short amount; // size=0, offset=16
	short type; // size=0, offset=18
};

struct evAnimationControllerDoneData // hashcode: 0x06BA7BE4 (dec: 112884708)
{
	struct _Instance *instance; // size=616, offset=0
	long segment; // size=0, offset=4
	long type; // size=0, offset=8
	int data; // size=0, offset=12
};

struct evMonsterImpaleData // hashcode: 0x6537B50B (dec: 1698149643)
{
	struct _Instance *weapon; // size=616, offset=0
	struct _Rotation direction; // size=8, offset=4
	struct _Position position; // size=6, offset=12
	short distance; // size=0, offset=18
};

struct evObjectBreakOffData // hashcode: 0xE7DCD1A1 (dec: -404958815)
{
	struct _Instance *force; // size=616, offset=0
	unsigned short node; // size=0, offset=4
	short distance; // size=0, offset=6
	unsigned short animation; // size=0, offset=8
	unsigned short frame; // size=0, offset=10
	unsigned short type; // size=0, offset=12
	unsigned short action; // size=0, offset=14
};

struct evObjectAbsorbData // hashcode: 0x1379C145 (dec: 326746437)
{
	struct _Instance *force; // size=616, offset=0
	unsigned short node; // size=0, offset=4
	unsigned short steps; // size=0, offset=6
};

struct evObjectIdleData // hashcode: 0x7C5C48CC (dec: 2086422732)
{
	long mode; // size=0, offset=0
	struct _Instance *instance; // size=616, offset=4
};

struct evControlInitHangData // hashcode: 0xA248117B (dec: -1572335237)
{
	struct _Instance *instance; // size=616, offset=0
	int frame; // size=0, offset=4
	int frames; // size=0, offset=8
};

struct evControlInitIdleData // hashcode: 0xB37CA3C6 (dec: -1283677242)
{
	int mode; // size=0, offset=0
	int frame; // size=0, offset=4
	int frames; // size=0, offset=8
};

struct evActionLookAroundData // hashcode: 0x27BD6BB6 (dec: 666725302)
{
	short *rotx; // size=0, offset=0
	short *rotz; // size=0, offset=4
	short minx; // size=0, offset=8
	short maxx; // size=0, offset=10
	short minz; // size=0, offset=12
	short maxz; // size=0, offset=14
};

struct evActionPlayHostAnimationData // hashcode: 0x89FEF84B (dec: -1979778997)
{
	struct _Instance *instance; // size=616, offset=0
	struct _Instance *host; // size=616, offset=4
	int newAnim; // size=0, offset=8
	int newFrame; // size=0, offset=12
	int frames; // size=0, offset=16
	int mode; // size=0, offset=20
};

struct evShadowSegmentData // hashcode: 0xE814E960 (dec: -401282720)
{
	unsigned long totalShadowSegments; // size=0, offset=0
	unsigned short shadowSegments[4]; // size=8, offset=4
};

struct STRMLOAD_116fake // hashcode: 0x9FFC6FB9 (dec: -1610846279)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: strmload.o, strmload.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: strmload.o, strmload.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: strmload.o, strmload.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: strmload.o, strmload.o
};

struct SCRIPT2_114fake // hashcode: 0x48B4C9D2 (dec: 1219807698)
{
	struct {
		struct MultiSpline *posSpline; // size=80, offset=0
		struct MultiSpline *targetSpline; // size=80, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: script2.o, script2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: script2.o, script2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: script2.o, script2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: script2.o, script2.o
};

struct LitShaftProperties // hashcode: 0x6DFDA06C (dec: 1845338220)
{
	short fadeValue; // size=0, offset=0
	short pad; // size=0, offset=2
};

struct SavedEventSmallVars // hashcode: 0xE3137261 (dec: -485264799)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short areaID; // size=0, offset=2
	char eventNumber; // size=0, offset=4
	char eventVariables[5]; // size=5, offset=5
};

struct WaterLevelProcess // hashcode: 0x43FF89D3 (dec: 1140820435)
{
	long flags; // size=0, offset=0
	struct BSPTree *bspTree; // size=36, offset=4
	struct _StreamUnit *streamUnit; // size=0, offset=8
	short oldWaterZ; // size=0, offset=12
	short oldGlobalOffset; // size=0, offset=14
	short zValueFrom; // size=0, offset=16
	short zValueTo; // size=0, offset=18
	long maxSteps; // size=0, offset=20
	long curStep; // size=0, offset=24
};

struct EventInstanceObject // hashcode: 0xC22B6786 (dec: -1037342842)
{
	short id; // size=0, offset=0
	short flags; // size=0, offset=2
	long unitID; // size=0, offset=4
	long introUniqueID; // size=0, offset=8
	struct _Instance *instance; // size=616, offset=12
	union {
		struct Intro *intro; // size=76, offset=0
		struct _SFXMkr *sfxMarker; // size=36, offset=0
	} data; // size=4, offset=16, found in object files: event.o, event.o
};

struct EventEventObject // hashcode: 0x59DD7B24 (dec: 1507687204)
{
	short id; // size=0, offset=0
	short eventNumber; // size=0, offset=2
	long unitID; // size=0, offset=4
	struct Event *event; // size=0, offset=8
};

struct EventTGroupObject // hashcode: 0x9ED92E4E (dec: -1629934002)
{
	short id; // size=0, offset=0
	short tgroupNumber; // size=0, offset=2
	long unitID; // size=0, offset=4
	struct BSPTree *bspTree; // size=36, offset=8
	struct _StreamUnit *stream; // size=0, offset=12
};

struct _PCodeStack // hashcode: 0x88A5C96B (dec: -2002400917)
{
	long topOfStack; // size=0, offset=0
	struct StackType stack[32]; // size=1152, offset=4
};

struct EventTimer // hashcode: 0xAA55BC81 (dec: -1437221759)
{
	long flags; // size=1, offset=0
	long time; // size=31, offset=1
	struct Event *event; // size=28, offset=4
	struct ScriptPCode *actionScript; // size=8, offset=8
	short *scriptPos; // size=0, offset=12
	struct Level *level; // size=392, offset=16
	long nextEventIndex; // size=0, offset=20
};

struct SignalResetStruct // hashcode: 0x8D08210C (dec: -1928847092)
{
	struct _MultiSignal *mSignal; // size=904, offset=0
	long timeLeft; // size=0, offset=4
};

struct HintSystemStruct // hashcode: 0xAD521037 (dec: -1387130825)
{
	short flags; // size=0, offset=0
	short hintNumber; // size=0, offset=2
	short stringNumber; // size=0, offset=4
	short pad; // size=0, offset=6
	long fadeTimer; // size=0, offset=8
	long spawningUnitID; // size=0, offset=12
};

struct MONMSG_114fake // hashcode: 0x79F33A82 (dec: 2045983362)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: monmsg.o, monmsg.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: monmsg.o, monmsg.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: monmsg.o, monmsg.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: monmsg.o, monmsg.o
};

struct _MonsterAttributes // hashcode: 0x9EE88812 (dec: -1628927982)
{
	unsigned long magicnum; // size=0, offset=0
	void *tunData; // size=0, offset=4
	char *auxAnimList; // size=0, offset=8
	char *ambientAnimList; // size=0, offset=12
	long whatAmI; // size=0, offset=16
	char numAuxAnims; // size=0, offset=20
	char numAmbientAnims; // size=0, offset=21
	unsigned char defaultAge; // size=0, offset=22
	char pupateObject; // size=0, offset=23
	unsigned char damageFXSegment; // size=0, offset=24
	unsigned char headSegment; // size=0, offset=25
	unsigned char neckSegment; // size=0, offset=26
	unsigned char leftShoulderSegment; // size=0, offset=27
	unsigned char rightShoulderSegment; // size=0, offset=28
	unsigned char waistSegment; // size=0, offset=29
	unsigned char leftKneeSegment; // size=0, offset=30
	unsigned char rightKneeSegment; // size=0, offset=31
	unsigned char leftFootSegment; // size=0, offset=32
	unsigned char rightFootSegment; // size=0, offset=33
	unsigned char spineSegment; // size=0, offset=34
	unsigned char leftWeaponSegment; // size=0, offset=35
	unsigned char rightWeaponSegment; // size=0, offset=36
	unsigned char grabSegment; // size=0, offset=37
	unsigned char bloodImpaleFrame; // size=0, offset=38
	unsigned char bloodConeFrame; // size=0, offset=39
	char numSubAttributes; // size=0, offset=40
	char numCombatAttributes; // size=0, offset=41
	char numAttackAttributes; // size=0, offset=42
	char numMissiles; // size=0, offset=43
	char numAnims; // size=0, offset=44
	char numIdles; // size=0, offset=45
	char numBehaviors; // size=0, offset=46
	char numShatters; // size=0, offset=47
	struct _MonsterSubAttributes **subAttributesList; // size=84, offset=48
	struct _MonsterCombatAttributes **combatAttributesList; // size=46, offset=52
	struct _MonsterAttackAttributes *attackAttributesList; // size=32, offset=56
	struct _MonsterMissile *missileList; // size=16, offset=60
	struct _MonsterAnim *animList; // size=16, offset=64
	struct _MonsterIdle *idleList; // size=4, offset=68
	struct _MonsterBehavior *behaviorList; // size=8, offset=72
	void *shatterList; // size=0, offset=76
};

struct _MonsterVars // hashcode: 0xEF80566F (dec: -276801937)
{
	unsigned long mvFlags; // size=0, offset=0
	unsigned long auxFlags; // size=0, offset=4
	struct __MessageQueue messageQueue; // size=136, offset=8
	struct _MonsterIR *monsterIRList; // size=0, offset=144
	struct _G2AnimInterpInfo_Type interpInfo[3]; // size=36, offset=148
	struct _MonsterAttackAttributes *attackType; // size=32, offset=184
	struct _MonsterAnim *anim; // size=16, offset=188
	void *messageData; // size=0, offset=192
	struct _MonsterIR *enemy; // size=0, offset=196
	struct _MonsterIR *leader; // size=0, offset=200
	struct _MonsterIR *ally; // size=0, offset=204
	struct _Instance *held; // size=616, offset=208
	long heldID; // size=0, offset=212
	long soulID; // size=0, offset=216
	void *effect; // size=0, offset=220
	unsigned short radarMap; // size=0, offset=224
	unsigned short radarCounter; // size=0, offset=226
	short radarDistance[8]; // size=16, offset=228
	unsigned long mode; // size=0, offset=244
	unsigned long damageTimer; // size=0, offset=248
	unsigned long stunTimer; // size=0, offset=252
	unsigned long generalTimer; // size=0, offset=256
	unsigned long generalTimer2; // size=0, offset=260
	unsigned long effectTimer; // size=0, offset=264
	struct _Position *lookAtPos; // size=6, offset=268
	short speed; // size=0, offset=272
	struct _Position destination; // size=6, offset=274
	short fleeMarker; // size=0, offset=280
	struct _Position lastValidPos; // size=6, offset=282
	short wanderRange; // size=0, offset=288
	struct _Position lookAtPosData; // size=6, offset=290
	short guardRange; // size=0, offset=296
	short ambushRange; // size=0, offset=298
	short ambushArc; // size=0, offset=300
	short ambushElevation; // size=0, offset=302
	short hitPoints; // size=0, offset=304
	short maxHitPoints; // size=0, offset=306
	short soulJuice; // size=0, offset=308
	short regenTime; // size=0, offset=310
	short mainColorVertex; // size=0, offset=312
	short lookAngleX; // size=0, offset=314
	short lookAngleZ; // size=0, offset=316
	unsigned short avoidMask; // size=0, offset=318
	unsigned short damageType; // size=0, offset=320
	char ambushMarker; // size=0, offset=322
	char ambushJumpType; // size=0, offset=323
	unsigned char causeOfDeath; // size=0, offset=324
	char previousMainState; // size=0, offset=325
	unsigned char behaviorState; // size=0, offset=326
	unsigned char initialBehavior; // size=0, offset=327
	unsigned char triggeredBehavior; // size=0, offset=328
	char activeBehavior; // size=0, offset=329
	unsigned char age; // size=0, offset=330
	char attackState; // size=0, offset=331
	unsigned char ambient; // size=0, offset=332
	char alertness; // size=0, offset=333
	char alertCount; // size=0, offset=334
	char senseIndex; // size=0, offset=335
	char lastSideMove; // size=0, offset=336
	char chance; // size=0, offset=337
	char pathSlotID; // size=0, offset=338
	struct _MonsterSubAttributes *subAttr; // size=84, offset=340
	struct _MonsterIR *freeIRs; // size=0, offset=344
	void *extraVars; // size=0, offset=348
	short validUnits[10]; // size=20, offset=352
	short patrolMarkers[12]; // size=24, offset=372
	short *currentMarker; // size=0, offset=396
	long terrainImpaleID; // size=0, offset=400
	short targetFade; // size=0, offset=404
	short fadeRate; // size=0, offset=406
};

struct _MonsterIR // hashcode: 0x41A7CD43 (dec: 1101516099)
{
	struct _MonsterIR *next; // size=36, offset=0
	struct _Instance *instance; // size=616, offset=4
	long handle; // size=0, offset=8
	struct _SVector relativePosition; // size=8, offset=12
	short distance; // size=0, offset=20
	unsigned short mirFlags; // size=0, offset=22
	unsigned short mirConditions; // size=0, offset=24
	unsigned long forgetTimer; // size=0, offset=28
	unsigned long idleTime; // size=0, offset=32
};

struct burntTuneType // hashcode: 0x127E6332 (dec: 310272818)
{
	int burntDist; // size=0, offset=0
	int fadeDelta; // size=0, offset=4
};

struct _MonsterState // hashcode: 0x1B0172BB (dec: 453079739)
{
	void (*entryFunction)(); // size=0, offset=0
	void (*stateFunction)(); // size=0, offset=4
};

struct _MonsterStateChoice // hashcode: 0xE0AABD5C (dec: -525681316)
{
	int state; // size=0, offset=0
	struct _MonsterState functions; // size=8, offset=4
};

struct VRAM_114fake // hashcode: 0xBB89CDD4 (dec: -1148596780)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: vram.o, vram.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: vram.o, vram.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: vram.o, vram.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: vram.o, vram.o
};

struct PHYSICS_109fake // hashcode: 0xC9F7DBFE (dec: -906503170)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: physics.o, physics.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: physics.o, physics.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: physics.o, physics.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: physics.o, physics.o
};

struct REAVER_114fake // hashcode: 0x25B74FFD (dec: 632770557)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: reaver.o, reaver.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: reaver.o, reaver.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: reaver.o, reaver.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: reaver.o, reaver.o
};

struct GLYPH_114fake // hashcode: 0x249332FF (dec: 613626623)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: glyph.o, glyph.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: glyph.o, glyph.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: glyph.o, glyph.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: glyph.o, glyph.o
};

struct __GlyphData // hashcode: 0x9C88C1F1 (dec: -1668759055)
{
	void (*process)(); // size=0, offset=0
	struct __MessageQueue messages; // size=136, offset=4
	short selectedGlyph; // size=0, offset=140
	short glyph_open; // size=0, offset=142
	short glyph_time; // size=0, offset=144
	short glyph_radius; // size=0, offset=146
	short glyph_scale; // size=0, offset=148
	short glyph_rotation; // size=0, offset=150
	short target_glyph_rotation; // size=0, offset=152
	short glyph_movement; // size=0, offset=154
};

struct HUMAN_114fake // hashcode: 0xC7C43F22 (dec: -943440094)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: human.o, human.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: human.o, human.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: human.o, human.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: human.o, human.o
};

struct _MonsterFunctionTable // hashcode: 0x82983F8D (dec: -2103951475)
{
	void (*initFunc)(); // size=0, offset=0
	void (*cleanUpFunc)(); // size=0, offset=4
	void (*damageEffectFunc)(); // size=0, offset=8
	unsigned long (*queryFunc)(); // size=0, offset=12
	void (*messageFunc)(); // size=0, offset=16
	struct _MonsterStateChoice *stateFuncs; // size=12, offset=20
	char *versionID; // size=0, offset=24
	char *localVersionID; // size=0, offset=28
};

struct MISSILE_114fake // hashcode: 0xA1EFD7AB (dec: -1578117205)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: missile.o, missile.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: missile.o, missile.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: missile.o, missile.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: missile.o, missile.o
};

struct MissileGraphics // hashcode: 0xD28383EB (dec: -763132949)
{
	unsigned char object; // size=0, offset=0
	unsigned char model; // size=0, offset=1
};

struct MONAPI_114fake // hashcode: 0x26233514 (dec: 639841556)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: monapi.o, monapi.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: monapi.o, monapi.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: monapi.o, monapi.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: monapi.o, monapi.o
};

struct evMonsterHitTerrainData // hashcode: 0x4CD2E030 (dec: 1288888368)
{
	struct _TFace *tface; // size=12, offset=0
	struct _Normal normal; // size=8, offset=4
	short faceFlags; // size=0, offset=12
	short bspFlags; // size=0, offset=14
};

struct evMonsterHitObjectData // hashcode: 0xB7192556 (dec: -1223088810)
{
	struct _Instance *instance; // size=616, offset=0
	int hitType; // size=0, offset=4
};

struct _MonsterSaveInfo // hashcode: 0x3088BC75 (dec: 814267509)
{
	long mvFlags; // size=0, offset=0
	long auxFlags; // size=0, offset=4
	short soulID; // size=0, offset=8
	short soulJuice; // size=0, offset=10
	unsigned int age; // size=3, offset=96
	unsigned int state; // size=6, offset=99
	unsigned int behaviorState; // size=5, offset=105
	unsigned int anim; // size=6, offset=110
	unsigned int animLooping; // size=1, offset=116
	unsigned int causeOfDeath; // size=3, offset=117
};

struct MONLIB_114fake // hashcode: 0x0EFC9F39 (dec: 251436857)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: monlib.o, monlib.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: monlib.o, monlib.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: monlib.o, monlib.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: monlib.o, monlib.o
};

struct evPhysicsLOSData // hashcode: 0x3AEAF56B (dec: 988476779)
{
	struct _Position destination; // size=6, offset=0
	short arc; // size=0, offset=6
	struct _Position origin; // size=6, offset=8
	short flags; // size=0, offset=14
	short result; // size=0, offset=16
};

struct MONTABLE_109fake // hashcode: 0xD09BCEF5 (dec: -795095307)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: montable.o, montable.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: montable.o, montable.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: montable.o, montable.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: montable.o, montable.o
};

struct MONTABLE_207fake // hashcode: 0x35A35A66 (dec: 899897958)
{
	long whatAmI; // size=0, offset=0
	struct _MonsterFunctionTable *table; // size=32, offset=4
};

struct MORLOCK_114fake // hashcode: 0x427E42C9 (dec: 1115570889)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: morlock.o, morlock.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: morlock.o, morlock.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: morlock.o, morlock.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: morlock.o, morlock.o
};

struct SLUAGH_114fake // hashcode: 0x17BD51C9 (dec: 398283209)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: sluagh.o, sluagh.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: sluagh.o, sluagh.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: sluagh.o, sluagh.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: sluagh.o, sluagh.o
};

struct SOUL_114fake // hashcode: 0x75056227 (dec: 1963287079)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: soul.o, soul.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: soul.o, soul.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: soul.o, soul.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: soul.o, soul.o
};

struct MONSENSE_114fake // hashcode: 0x5589BD82 (dec: 1435090306)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: monsense.o, monsense.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: monsense.o, monsense.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: monsense.o, monsense.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: monsense.o, monsense.o
};

struct RadarInfo // hashcode: 0xB8957CDE (dec: -1198162722)
{
	short angle; // size=0, offset=0
	short x; // size=0, offset=2
	short y; // size=0, offset=4
};

struct MONSTER_114fake // hashcode: 0xAC393E28 (dec: -1405534680)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: monster.o, monster.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: monster.o, monster.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: monster.o, monster.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: monster.o, monster.o
};

struct burntMessType // hashcode: 0x8C763516 (dec: -1938410218)
{
	int closestvert; // size=0, offset=0
	int closestdist; // size=0, offset=4
	int closestseg; // size=0, offset=8
	struct burntTuneType *burntTune; // size=8, offset=12
};

struct bloodyMessType // hashcode: 0x5F4737FF (dec: 1598502911)
{
	int closestvert; // size=0, offset=0
	int closestdist; // size=0, offset=4
	int closestseg; // size=0, offset=8
	int bloodiedAVert; // size=0, offset=12
	int bloodIntensity; // size=0, offset=16
};

struct _G2AnimController_Type // hashcode: 0x74838F3C (dec: 1954778940)
{
	unsigned short next; // size=0, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char segNumber; // size=0, offset=3
	void *callbackData; // size=0, offset=4
	unsigned short flags; // size=0, offset=8
	short duration; // size=0, offset=10
	short elapsedTime; // size=0, offset=12
	struct _G2AnimAlphaTable_Type *alphaTable; // size=4, offset=16
	union {
		struct {
			unsigned long (*function)(); // size=0, offset=0
			void *fnData; // size=0, offset=4
		} callback; // size=8, offset=0, found in object files: AnimG2.o, AnimG2.o
		struct {
			struct _G2SVector3_Type base; // size=6, offset=0
			struct _G2SVector3_Type offset; // size=6, offset=6
		} vector; // size=12, offset=0, found in object files: AnimG2.o, AnimG2.o
		struct {
			struct _G2Quat_Type src; // size=8, offset=0
			struct _G2Quat_Type dest; // size=8, offset=8
		} quat; // size=16, offset=0, found in object files: AnimG2.o, AnimG2.o
	} data; // size=16, offset=20, found in object files: AnimG2.o, AnimG2.o
};

struct ANIMG2_109fake // hashcode: 0x1C77A67E (dec: 477603454)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: AnimG2.o, AnimG2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: AnimG2.o, AnimG2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: AnimG2.o, AnimG2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: AnimG2.o, AnimG2.o
};

struct _G2AnimSegKeyflagInfo_Type // hashcode: 0x5786AAF7 (dec: 1468443383)
{
	unsigned long *stream; // size=0, offset=0
	unsigned long flags; // size=0, offset=4
	int bitCount; // size=0, offset=8
};

struct _G2AnimDecompressChannelInfo_Type // hashcode: 0x9B2AEA69 (dec: -1691686295)
{
	struct _G2AnimKeylist_Type *keylist; // size=20, offset=0
	unsigned short *chanData; // size=0, offset=4
	int storedKey; // size=0, offset=8
	int targetKey; // size=0, offset=12
};

struct _G2AnimSegValue_Type // hashcode: 0x862DA63B (dec: -2043828677)
{
	union {
		struct _G2SVector3_Type rot; // size=6, offset=0
		struct _G2Quat_Type quat; // size=8, offset=0
	} rotQuat; // size=8, offset=0, found in object files: AnimG2.o, AnimG2.o
	struct _G2SVector3_Type scale; // size=6, offset=8
	unsigned short pad; // size=0, offset=14
	struct _G2SVector3_Type trans; // size=6, offset=16
	unsigned short bIsQuat; // size=0, offset=22
};

struct _G2AnimChanStatusBlockPool_Type // hashcode: 0x795F01EF (dec: 2036269551)
{
	unsigned short blockSize; // size=0, offset=0
	unsigned short stackTop; // size=0, offset=2
	unsigned short stackSize; // size=0, offset=4
	unsigned short *stack; // size=0, offset=8
	struct _G2AnimChanStatusBlock_Type *blockPool; // size=36, offset=12
};

struct _G2AnimControllerPool_Type // hashcode: 0x7F1B4AF1 (dec: 2132495089)
{
	unsigned short blockSize; // size=0, offset=0
	unsigned short stackTop; // size=0, offset=2
	unsigned short stackSize; // size=0, offset=4
	unsigned short *stack; // size=0, offset=8
	struct _G2AnimController_Type *blockPool; // size=36, offset=12
};

struct _G2AnimInterpStateBlockPool_Type // hashcode: 0x71F99BDD (dec: 1912183773)
{
	unsigned short blockSize; // size=0, offset=0
	unsigned short stackTop; // size=0, offset=2
	unsigned short stackSize; // size=0, offset=4
	unsigned short *stack; // size=0, offset=8
	struct _G2AnimInterpStateBlock_Type *blockPool; // size=164, offset=12
};

struct VWRAITH_114fake // hashcode: 0x99946622 (dec: -1718327774)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: vwraith.o, vwraith.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: vwraith.o, vwraith.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: vwraith.o, vwraith.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: vwraith.o, vwraith.o
};

struct WORSHIP_114fake // hashcode: 0x92B54E7B (dec: -1833611653)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: worship.o, worship.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: worship.o, worship.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: worship.o, worship.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: worship.o, worship.o
};

struct MBMISS_114fake // hashcode: 0x8D708B2D (dec: -1922004179)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: mbmiss.o, mbmiss.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: mbmiss.o, mbmiss.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: mbmiss.o, mbmiss.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: mbmiss.o, mbmiss.o
};

struct _walbossAttributes // hashcode: 0x300B2C35 (dec: 806038581)
{
	unsigned char segmentToAttach; // size=0, offset=0
	unsigned char frameToBirth; // size=0, offset=1
	unsigned char frameToExpel; // size=0, offset=2
	unsigned char maxEggHits; // size=0, offset=3
	short maxAngle; // size=0, offset=4
	short timeForHitAgony; // size=0, offset=6
	short segmentForBodyTwist; // size=0, offset=8
	short timeToThornPrep; // size=0, offset=10
	short timeToThornPoke; // size=0, offset=12
	short timeToEggThrob; // size=0, offset=14
	short timeToEggExplode; // size=0, offset=16
	short razielStunTime; // size=0, offset=18
	short eggIgniteDist; // size=0, offset=20
	short angleForShortAttack; // size=0, offset=22
	short closeAttackStart; // size=0, offset=24
	short junk; // size=0, offset=26
	struct {
		short plusDelta; // size=0, offset=0
		short minusDelta; // size=0, offset=2
		short validAtHitPoint; // size=0, offset=4
	} attackDeltas; // size=0, offset=28, found in object files: mbmiss.o, mbmiss.o
};

struct PLANAPI_151fake // hashcode: 0xCFA0CAB4 (dec: -811545932)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: planapi.o, planapi.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: planapi.o, planapi.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: planapi.o, planapi.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: planapi.o, planapi.o
};

struct PoolManagementData // hashcode: 0xA005D5E0 (dec: -1610230304)
{
	char state; // size=0, offset=0
	unsigned char numNodesInPool; // size=0, offset=1
	struct _Position playerPosAtLastPlanMkrUpdate; // size=6, offset=2
	struct PlanningNode *expansionNode1; // size=28, offset=8
	struct PlanningNode *expansionNode2; // size=28, offset=12
	unsigned short (*distanceMatrix)[32]; // size=4, offset=16
	unsigned short pairType; // size=0, offset=20
	struct _Position peakPos; // size=6, offset=22
	unsigned char currentNode; // size=0, offset=28
	unsigned char currentBit; // size=0, offset=29
};

struct EnemyPlanData // hashcode: 0xE792BD02 (dec: -409813758)
{
	unsigned char nodeSkipArray[8]; // size=8, offset=0
	unsigned char nodeTypeArray[8]; // size=8, offset=8
	struct _Position wayPointArray[8]; // size=48, offset=16
	short goalUnitID; // size=0, offset=64
	unsigned char numWayPoints; // size=0, offset=66
};

struct _PlanCollideInfo // hashcode: 0x3B1266CC (dec: 991061708)
{
	long StreamUnitID; // size=0, offset=0
	struct _TFace *tFace; // size=12, offset=4
	struct _Position collidePos; // size=6, offset=8
};

struct PLANCOLL_114fake // hashcode: 0xB6BC32DF (dec: -1229180193)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: plancoll.o, plancoll.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: plancoll.o, plancoll.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: plancoll.o, plancoll.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: plancoll.o, plancoll.o
};

struct _fth // hashcode: 0xDEECEA3E (dec: -554898882)
{
	char x; // size=0, offset=0
	char y; // size=0, offset=1
	char z; // size=0, offset=2
	char nodeType; // size=0, offset=3
};

struct PLANDRAW_114fake // hashcode: 0x6D041DD0 (dec: 1828986320)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: plandraw.o, plandraw.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: plandraw.o, plandraw.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: plandraw.o, plandraw.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: plandraw.o, plandraw.o
};

struct PLANOPT_151fake // hashcode: 0xD60D918D (dec: -703753843)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: planopt.o, planopt.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: planopt.o, planopt.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: planopt.o, planopt.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: planopt.o, planopt.o
};

struct _G2AppDataVM_Type // hashcode: 0xC1BF7B11 (dec: -1044415727)
{
	int argc; // size=0, offset=0
	int *argv; // size=0, offset=4
};

struct ENMYPLAN_114fake // hashcode: 0xA6FD1322 (dec: -1493363934)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: enmyplan.o, enmyplan.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: enmyplan.o, enmyplan.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: enmyplan.o, enmyplan.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: enmyplan.o, enmyplan.o
};

struct EnemyPlanSlotData // hashcode: 0xA348D4B1 (dec: -1555508047)
{
	char slotInUse; // size=0, offset=0
	char state; // size=0, offset=1
	char wayPointBeingServoedTo; // size=0, offset=2
	struct _Position startPos; // size=6, offset=4
	struct _Position goalPos; // size=6, offset=10
	struct _Position oldCurrentPos; // size=6, offset=16
	struct EnemyPlanData planData; // size=68, offset=22
	char targetType; // size=0, offset=90
	short timer; // size=0, offset=92
};

struct PLAN_114fake // hashcode: 0xA74547B8 (dec: -1488631880)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: plan.o, plan.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: plan.o, plan.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: plan.o, plan.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: plan.o, plan.o
};

struct INSTNCG2_109fake // hashcode: 0x507B5C94 (dec: 1350261908)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: InstncG2.o, InstncG2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: InstncG2.o, InstncG2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: InstncG2.o, InstncG2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: InstncG2.o, InstncG2.o
};

struct MATRIXG2_109fake // hashcode: 0x245522F0 (dec: 609559280)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: MatrixG2.o, MatrixG2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: MatrixG2.o, MatrixG2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: MatrixG2.o, MatrixG2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: MatrixG2.o, MatrixG2.o
};

struct _G2PoolMemPool_Type // hashcode: 0x987744BB (dec: -1737014085)
{
	unsigned short blockSize; // size=0, offset=0
	unsigned short stackTop; // size=0, offset=2
	unsigned short stackSize; // size=0, offset=4
	unsigned short *stack; // size=0, offset=8
	struct _G2PoolMem_Type *blockPool; // size=0, offset=12
};

struct TIMERG2_109fake // hashcode: 0xDA8B298B (dec: -628414069)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: TimerG2.o, TimerG2.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: TimerG2.o, TimerG2.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: TimerG2.o, TimerG2.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: TimerG2.o, TimerG2.o
};

struct PLANPOOL_151fake // hashcode: 0x1F99F3B2 (dec: 530183090)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: planpool.o, planpool.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: planpool.o, planpool.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: planpool.o, planpool.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: planpool.o, planpool.o
};

struct PLANSRCH_151fake // hashcode: 0x490AB669 (dec: 1225438825)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: plansrch.o, plansrch.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: plansrch.o, plansrch.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: plansrch.o, plansrch.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: plansrch.o, plansrch.o
};

struct CONTROL_109fake // hashcode: 0x745D7876 (dec: 1952282742)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: control.o, control.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: control.o, control.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: control.o, control.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: control.o, control.o
};

struct __Force // hashcode: 0x2CC8F311 (dec: 751366929)
{
	int Type; // size=0, offset=0
	struct _Vector LinearForce; // size=12, offset=4
	short Friction; // size=0, offset=16
};

struct __Idle // hashcode: 0xA4E3256E (dec: -1528617618)
{
	unsigned char anim; // size=0, offset=0
	unsigned char frame; // size=0, offset=1
	unsigned char frames; // size=0, offset=2
	unsigned char type; // size=0, offset=3
};

struct __VAnim // hashcode: 0xDC662191 (dec: -597286511)
{
	unsigned char anim0; // size=0, offset=0
	unsigned char anim1; // size=0, offset=1
	unsigned char anim2; // size=0, offset=2
	unsigned char frames; // size=0, offset=3
	unsigned char mode; // size=0, offset=4
	unsigned char alpha; // size=0, offset=5
	unsigned short frame; // size=0, offset=6
};

struct __SAnim // hashcode: 0xD19E5798 (dec: -778152040)
{
	struct __VAnim *anim; // size=8, offset=0
	struct __SAnim *nextAnim; // size=16, offset=4
	short mode; // size=0, offset=8
	short data; // size=0, offset=10
	short speedAdjust; // size=0, offset=12
	short pad; // size=0, offset=14
};

struct __AttackItem // hashcode: 0x6E34BA91 (dec: 1848949393)
{
	unsigned char anim; // size=0, offset=0
	unsigned char framesIn; // size=0, offset=1
	unsigned char alphaIn; // size=0, offset=2
	unsigned char framesOut; // size=0, offset=3
	unsigned char switchDelay; // size=0, offset=4
	unsigned char ignoreDelay; // size=0, offset=5
	unsigned char segmentToGlow; // size=0, offset=6
	unsigned char startCollisionFrame; // size=0, offset=7
	unsigned char handsToCollide; // size=0, offset=8
	unsigned char endCollisionFrame; // size=0, offset=9
	unsigned char ribbonStartFrame; // size=0, offset=10
	unsigned char ribbonStartSegment; // size=0, offset=11
	unsigned char ribbonEndSegment; // size=0, offset=12
	unsigned char ribbonLifeTime; // size=0, offset=13
	unsigned char ribbonFaceLifeTime; // size=0, offset=14
	unsigned char knockBackFrames; // size=0, offset=15
	unsigned char glowFadeInFrames; // size=0, offset=16
	unsigned char glowFadeOutFrames; // size=0, offset=17
	unsigned short ribbonStartOpacity; // size=0, offset=18
	unsigned long ribbonStartColor; // size=0, offset=20
	unsigned long ribbonEndColor; // size=0, offset=24
	unsigned long glowColor; // size=0, offset=28
	unsigned short knockBackDistance; // size=0, offset=32
	unsigned short hitPowerScale; // size=0, offset=34
};

struct __ThrowItem // hashcode: 0xABF5F7A3 (dec: -1409943645)
{
	unsigned char prepAnim; // size=0, offset=0
	unsigned char prepAnimFramesIn; // size=0, offset=1
	unsigned char prepAnimAlphaIn; // size=0, offset=2
	unsigned char coilAnim; // size=0, offset=3
	unsigned char coilAnimFramesIn; // size=0, offset=4
	unsigned char coilAnimAlphaIn; // size=0, offset=5
	unsigned char throwAnim; // size=0, offset=6
	unsigned char throwAnimFramesInFactor; // size=0, offset=7
	unsigned char throwFrameToLaunch; // size=0, offset=8
	unsigned char framesOut; // size=0, offset=9
	short launchPointX; // size=0, offset=10
	short launchPointY; // size=0, offset=12
	short launchPointZ; // size=0, offset=14
	short maxXRotation; // size=0, offset=16
	short minXRotation; // size=0, offset=18
	short maxZRotation; // size=0, offset=20
	short minZRotation; // size=0, offset=22
	short velocity; // size=0, offset=24
	short gravity; // size=0, offset=26
	short coilRot; // size=0, offset=28
	short selfAdjustingFlag; // size=0, offset=30
};

struct __EngagedInstance // hashcode: 0x504DFFAD (dec: 1347289005)
{
	struct _Instance *instance; // size=616, offset=0
	unsigned long distance; // size=0, offset=4
};

struct __FitPoint // hashcode: 0xFA3F31C2 (dec: -96521790)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
};

struct __SensoryData // hashcode: 0x3A2E27FD (dec: 976103421)
{
	int Flags; // size=0, offset=0
	struct _SVector ForwardNormal; // size=8, offset=4
	struct _SVector AboveNormal; // size=8, offset=12
	struct _SVector BelowNormal; // size=8, offset=20
	struct _SVector BelowPoint; // size=8, offset=28
	struct _SVector Delta; // size=8, offset=36
	struct _Instance *HitMonster; // size=616, offset=44
	struct _Instance *CurrentAutoFace; // size=616, offset=48
	struct _Instance *LastAutoFace; // size=616, offset=52
	struct _Instance *Portal; // size=616, offset=56
	struct __EngagedInstance *EngagedList; // size=8, offset=60
	unsigned long EngagedMask; // size=0, offset=64
	struct _Vector lookAtPoint; // size=12, offset=68
	unsigned long heldClass; // size=0, offset=80
};

struct __Player // hashcode: 0x0712E7A5 (dec: 118679461)
{
	int footPrint; // size=0, offset=0
	struct __CharacterState State; // size=860, offset=4
	int Mode; // size=0, offset=864
	int Anim; // size=0, offset=868
	int RotationSegment; // size=0, offset=872
	struct _SVector iVelocity; // size=8, offset=876
	int Magnitude; // size=0, offset=884
	int input; // size=0, offset=888
	int lastInput; // size=0, offset=892
	int ZDirection; // size=0, offset=896
	short Bearing; // size=0, offset=900
	short LastBearing; // size=0, offset=902
	int steeringMode; // size=0, offset=904
	short steeringVelocity; // size=0, offset=908
	short steeringAcceleration; // size=0, offset=910
	int steeringLockRotation; // size=0, offset=912
	short movementMinRate; // size=0, offset=916
	short movementMaxRate; // size=0, offset=918
	short movementMinAnalog; // size=0, offset=920
	short movementMaxAnalog; // size=0, offset=922
	struct __SensoryData Senses; // size=84, offset=924
	struct _Instance *attachedPlatform; // size=616, offset=1008
	short dropOffHeight; // size=0, offset=1012
	short fallZVelocity; // size=0, offset=1014
	short HealthScale; // size=0, offset=1016
	short HealthBalls; // size=0, offset=1018
	int HitPoints; // size=0, offset=1020
	int DamageFrequency; // size=0, offset=1024
	int invincibleTimer; // size=0, offset=1028
	int Abilities; // size=0, offset=1032
	struct _Instance *GlyphSystem; // size=616, offset=1036
	unsigned short GlyphManaBalls; // size=0, offset=1040
	unsigned short GlyphManaMax; // size=0, offset=1042
	struct __FitPoint *constrictData; // size=4, offset=1044
	short constrictIndex; // size=0, offset=1048
	short constrictWaitIndex; // size=0, offset=1050
	struct _SVector constrictCenter; // size=8, offset=1052
	short constrictFlag; // size=0, offset=1060
	short constrictGoodCircle; // size=0, offset=1062
	unsigned long constrictXTotal; // size=0, offset=1064
	unsigned long constrictYTotal; // size=0, offset=1068
	struct _Instance *soulReaver; // size=616, offset=1072
	unsigned long currentSoulReaver; // size=0, offset=1076
	int CurrentPlane; // size=0, offset=1080
	int slipSlope; // size=0, offset=1084
	unsigned long idleCount; // size=0, offset=1088
	struct _Instance *idleInstance; // size=616, offset=1092
	struct __AttackItem *attack; // size=36, offset=1096
	int attackFlags; // size=0, offset=1100
	int currentAttack; // size=0, offset=1104
	struct _Instance *attackCurrentHit; // size=616, offset=1108
	struct _Instance *attackLastHit; // size=616, offset=1112
	struct _FXGlowEffect *glowEffect; // size=44, offset=1116
	struct _Instance *attackedBy; // size=616, offset=1120
	struct __ThrowItem *throwData; // size=32, offset=1124
	int throwMode; // size=0, offset=1128
	struct _Position throwTarget; // size=6, offset=1132
	struct _Instance *throwInstance; // size=616, offset=1140
	short throwXRot; // size=0, offset=1144
	short throwZRot; // size=0, offset=1146
	int throwReturnRot; // size=0, offset=1148
	struct __MessageQueue padCommands; // size=136, offset=1152
	void (*returnState)(); // size=0, offset=1288
	unsigned long passedMask; // size=0, offset=1292
	struct _G2SVector3_Type extraRot; // size=6, offset=1296
	long blankPad; // size=0, offset=1304
	int effectsFlags; // size=0, offset=1308
	short effectsFadeSource; // size=0, offset=1312
	short effectsFadeDest; // size=0, offset=1314
	int effectsFadeStep; // size=0, offset=1316
	int effectsFadeSteps; // size=0, offset=1320
	short autoFaceZone; // size=0, offset=1324
	short autoFaceAngle; // size=0, offset=1326
	int autoFaceLastRootAngle; // size=0, offset=1328
	int autoFaceRootAngle; // size=0, offset=1332
	int autoFaceTrueAngle; // size=0, offset=1336
	int autoFaceAnim; // size=0, offset=1340
	int autoFaceLastAnim; // size=0, offset=1344
	int nothingCounter; // size=0, offset=1348
	int timeAccumulator; // size=0, offset=1352
	struct _Position puppetMoveToPoint; // size=6, offset=1356
	struct _Position puppetRotToPoint; // size=6, offset=1362
	int puppetHint; // size=0, offset=1368
	int soundModifier; // size=0, offset=1372
	short alarmTable; // size=0, offset=1376
	short terminator; // size=0, offset=1378
	short swimSpeedAdjustment; // size=0, offset=1380
	short swimTargetSpeed; // size=0, offset=1382
	unsigned long soundHandle; // size=0, offset=1384
	long soundTimer; // size=0, offset=1388
	long soundTotalTime; // size=0, offset=1392
	unsigned long soundDistance; // size=0, offset=1396
	short soundStartPitch; // size=0, offset=1400
	short soundEndPitch; // size=0, offset=1402
	short soundStartVolume; // size=0, offset=1404
	short soundEndVolume; // size=0, offset=1406
	unsigned long soundHandle2; // size=0, offset=1408
	long soundTimer2; // size=0, offset=1412
	long soundTotalTime2; // size=0, offset=1416
	unsigned long soundDistance2; // size=0, offset=1420
	short soundStartPitch2; // size=0, offset=1424
	short soundEndPitch2; // size=0, offset=1426
	short soundStartVolume2; // size=0, offset=1428
	short soundEndVolume2; // size=0, offset=1430
	long soundTimerNext; // size=0, offset=1432
	unsigned long soundTimerData; // size=0, offset=1436
	unsigned long forcedGlideSpeed; // size=0, offset=1440
	struct _SVector collisionEdgeOffset; // size=8, offset=1444
	struct __SAnim *currentSAnim; // size=16, offset=1452
	unsigned long playerEvent; // size=0, offset=1456
	unsigned long playerEventHistory; // size=0, offset=1460
	int currentHint; // size=0, offset=1464
};

struct __CannedSound // hashcode: 0x8A7588C2 (dec: -1972008766)
{
	short bank; // size=0, offset=0
	short sound; // size=0, offset=2
	short startPitch; // size=0, offset=4
	short endPitch; // size=0, offset=6
	short startVolume; // size=0, offset=8
	short endVolume; // size=0, offset=10
	long time; // size=0, offset=12
	long distance; // size=0, offset=16
};

struct __AlarmData // hashcode: 0x49AF2B39 (dec: 1236216633)
{
	short command; // size=0, offset=0
	short data; // size=0, offset=2
};

struct _SoundRamp // hashcode: 0xB5503009 (dec: -1253036023)
{
	unsigned long soundHandle; // size=0, offset=0
	long soundTimer; // size=0, offset=4
	long soundTotalTime; // size=0, offset=8
	unsigned long soundDistance; // size=0, offset=12
	short soundStartPitch; // size=0, offset=16
	short soundEndPitch; // size=0, offset=18
	short soundStartVolume; // size=0, offset=20
	short soundEndVolume; // size=0, offset=22
};

struct PlayerSaveData // hashcode: 0x12C2C060 (dec: 314753120)
{
	unsigned long abilities; // size=0, offset=0
	unsigned long currentPlane; // size=0, offset=4
	unsigned long healthScale; // size=0, offset=8
	unsigned long healthBalls; // size=0, offset=12
	unsigned short manaBalls; // size=0, offset=16
	unsigned short manaMax; // size=0, offset=18
	unsigned long playerEventHistory; // size=0, offset=20
};

struct RazielData // hashcode: 0x40AA7C96 (dec: 1084914838)
{
	unsigned long version; // size=0, offset=0
	unsigned long nonBurningRibbonStartColor; // size=0, offset=4
	unsigned long nonBurningRibbonEndColor; // size=0, offset=8
	struct __Idle ***idleList; // size=4, offset=12
	struct __AttackItem ***attackList; // size=36, offset=16
	struct __ThrowItem **throwList; // size=32, offset=20
	struct __VAnim *virtualAnimations; // size=8, offset=24
	struct __VAnim *virtualAnimSingle; // size=8, offset=28
	struct __SAnim **stringAnimations; // size=16, offset=32
	short throwFadeValue; // size=0, offset=36
	short throwFadeInRate; // size=0, offset=38
	int throwFadeOutRate; // size=0, offset=40
	int throwManualDistance; // size=0, offset=44
	short healthMaterialRate; // size=0, offset=48
	short healthSpectralRate; // size=0, offset=50
	short healthInvinciblePostHit; // size=0, offset=52
	short healthInvinciblePostShunt; // size=0, offset=54
	short forceMinPitch; // size=0, offset=56
	short forceMaxPitch; // size=0, offset=58
	short forceMinVolume; // size=0, offset=60
	short forceMaxVolume; // size=0, offset=62
	unsigned long forceRampTime; // size=0, offset=64
	int SwimPhysicsFallDamping; // size=0, offset=68
	int SwimPhysicsWaterFrequency; // size=0, offset=72
	int SwimPhysicsWaterAmplitude; // size=0, offset=76
	int SwimPhysicsUnderDeceleration; // size=0, offset=80
	int SwimPhysicsUnderKickVelocity; // size=0, offset=84
	int SwimPhysicsUnderKickAccel; // size=0, offset=88
	int SwimPhysicsUnderVelocity; // size=0, offset=92
	int SwimPhysicsUnderKickDecel; // size=0, offset=96
	int SwimPhysicsUnderStealthAdjust; // size=0, offset=100
	int SwimPhysicsCoilVelocity; // size=0, offset=104
	int SwimPhysicsCoilDecelerationIn; // size=0, offset=108
	int SwimPhysicsCoilDecelerationOut; // size=0, offset=112
	int SwimPhysicsShotVelocity; // size=0, offset=116
	int SwimPhysicsShotAccelerationIn; // size=0, offset=120
	int SwimPhysicsShotAccelerationOut; // size=0, offset=124
	int SwimPhysicsSurfVelocity; // size=0, offset=128
	int SwimPhysicsSurfAccelerationIn; // size=0, offset=132
	int SwimPhysicsSurfAccelerationOut; // size=0, offset=136
	int SwimPhysicsSurfKickVelocity; // size=0, offset=140
	int SwimPhysicsSurfKickAccel; // size=0, offset=144
	int SwimPhysicsSurfMinRotation; // size=0, offset=148
	int SwimPhysicsSurfMaxRotation; // size=0, offset=152
	int SwimPhysicsSurfKickDecel; // size=0, offset=156
};

struct __razController // hashcode: 0x694854B2 (dec: 1766347954)
{
	unsigned short segment; // size=0, offset=0
	unsigned short type; // size=0, offset=2
};

struct SavedInfoTracker // hashcode: 0x03231C9A (dec: 52632730)
{
	char *MemoryCardBuffer; // size=0, offset=0
	char *InfoStart; // size=0, offset=4
	char *InfoEnd; // size=0, offset=8
	char *EndOfMemory; // size=0, offset=12
};

struct SavedLevel // hashcode: 0xABBBA745 (dec: -1413765307)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short areaID; // size=0, offset=2
	short waterZ; // size=0, offset=4
	short numberBSPTreesSaved; // size=0, offset=6
};

struct ActualSavedLevel // hashcode: 0xE75849FD (dec: -413644291)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	short areaID; // size=0, offset=2
	short waterZ; // size=0, offset=4
	short numberBSPTreesSaved; // size=0, offset=6
	struct SavedBspTree bspTreeArray[1]; // size=8, offset=8
};

struct SavedDeadDeadBits // hashcode: 0x00B3140D (dec: 11736077)
{
	unsigned char savedID; // size=0, offset=0
	unsigned char shiftedSaveSize; // size=0, offset=1
	char deadDeadBits[832]; // size=832, offset=2
};

struct _GlobalSaveTracker // hashcode: 0x1972AA1A (dec: 426945050)
{
	short savedID; // size=0, offset=0
	short saveSize; // size=0, offset=2
	short flags; // size=0, offset=4
	short saveVersion; // size=0, offset=6
	unsigned long currentTime; // size=0, offset=8
	short humanOpinionOfRaziel; // size=0, offset=12
	char numRegens; // size=0, offset=14
	struct _MONAPI_Regenerator regenEntries[10]; // size=80, offset=16
	struct gSoundData sound; // size=20, offset=96
	short sizeUsedInBlock; // size=0, offset=116
	short CurrentBirthID; // size=0, offset=118
};

struct CdlFILTER // hashcode: 0x62FCDD39 (dec: 1660738873)
{
	unsigned char file; // size=0, offset=0
	unsigned char chan; // size=0, offset=1
	unsigned short pad; // size=0, offset=2
};

struct SpuCommonAttr // hashcode: 0xCB591BFF (dec: -883352577)
{
	unsigned long mask; // size=0, offset=0
	struct SpuVolume mvol; // size=4, offset=4
	struct SpuVolume mvolmode; // size=4, offset=8
	struct SpuVolume mvolx; // size=4, offset=12
	struct SpuExtAttr cd; // size=12, offset=16
	struct SpuExtAttr ext; // size=12, offset=28
};

struct VOICEXA_175fake // hashcode: 0xD4103ED4 (dec: -737132844)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: voicexa.o, voicexa.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: voicexa.o, voicexa.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: voicexa.o, voicexa.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: voicexa.o, voicexa.o
};

struct XAVoiceListEntry // hashcode: 0xDBE9AB23 (dec: -605443293)
{
	unsigned short length; // size=0, offset=0
};

struct XAVoiceTracker // hashcode: 0x77052065 (dec: 1996824677)
{
	struct CdlLOC currentPos; // size=4, offset=0
	int currentSector; // size=0, offset=4
	int endSector; // size=0, offset=8
	void (*prevCallback)(); // size=0, offset=12
	unsigned char cdResult[8]; // size=8, offset=16
	struct CdCommand cdCmdQueue[8]; // size=64, offset=24
	unsigned short requestQueue[4]; // size=8, offset=88
	struct VoiceCommand voiceCmdQueue[16]; // size=64, offset=96
	unsigned char cdCmdIn; // size=0, offset=160
	unsigned char cdCmdOut; // size=0, offset=161
	unsigned char cdCmdsQueued; // size=0, offset=162
	unsigned char reqIn; // size=0, offset=163
	unsigned char reqOut; // size=0, offset=164
	unsigned char reqsQueued; // size=0, offset=165
	unsigned char voiceCmdIn; // size=0, offset=166
	unsigned char voiceCmdOut; // size=0, offset=167
	unsigned char voiceCmdsQueued; // size=0, offset=168
	unsigned char unused1; // size=0, offset=169
	unsigned char voiceStatus; // size=0, offset=170
	unsigned char cdStatus; // size=0, offset=171
	short fileNum; // size=0, offset=172
	short unused2; // size=0, offset=174
	struct XAFileInfo xaFileInfo[30]; // size=120, offset=176
};

struct cinema_fn_table_t // hashcode: 0xBFD79C7E (dec: -1076388738)
{
	int (*play)(); // size=0, offset=0
	char *versionID; // size=0, offset=4
};

struct CINEPSX_109fake // hashcode: 0xCA47EDB9 (dec: -901255751)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: cinepsx.o, cinepsx.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: cinepsx.o, cinepsx.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: cinepsx.o, cinepsx.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: cinepsx.o, cinepsx.o
};

struct LocalizationHeader // hashcode: 0x40BDAC32 (dec: 1086172210)
{
	enum language_t language; // size=4, offset=0
	int numXAfiles; // size=0, offset=4
	int XATableOffset; // size=0, offset=8
	int numStrings; // size=0, offset=12
};

struct menu_t // hashcode: 0x8AB0D2F2 (dec: -1968123150)
{
	int nmenus; // size=0, offset=0
	int nitems; // size=0, offset=4
	int nbytes; // size=0, offset=8
	struct menu_stack_t stack[5]; // size=180, offset=12
	struct menu_item_t items[12]; // size=192, offset=192
	char bytes[512]; // size=512, offset=384
	void (*drawfn)(); // size=0, offset=896
	void *opaque; // size=0, offset=900
};

struct MENU_113fake // hashcode: 0x792A6BAF (dec: 2032823215)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: menu.o, menu.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: menu.o, menu.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: menu.o, menu.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: menu.o, menu.o
};

struct menu_format_t // hashcode: 0xD91CEBF0 (dec: -652416016)
{
	int xpos; // size=0, offset=0
	int ypos; // size=0, offset=4
	int lineskip; // size=0, offset=8
	int itemskip; // size=0, offset=12
	int width; // size=0, offset=16
	int center; // size=0, offset=20
	int border; // size=0, offset=24
};

struct menu_stack_t // hashcode: 0x04101191 (dec: 68161937)
{
	int (*fn)(); // size=0, offset=0
	int index; // size=0, offset=4
	struct menu_format_t format; // size=28, offset=8
};

struct menu_item_t // hashcode: 0xF260D8A8 (dec: -228534104)
{
	char *text; // size=0, offset=0
	int (*fn)(); // size=0, offset=4
	long parameter; // size=0, offset=8
	long flags; // size=0, offset=12
};

struct Extents2d // hashcode: 0x49E3CF7D (dec: 1239666557)
{
	int xmin; // size=0, offset=0
	int xmax; // size=0, offset=4
	int ymin; // size=0, offset=8
	int ymax; // size=0, offset=12
};

struct MENUUTIL_109fake // hashcode: 0x36B25773 (dec: 917657459)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: menuutil.o, menuutil.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: menuutil.o, menuutil.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: menuutil.o, menuutil.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: menuutil.o, menuutil.o
};

struct menu_sound_entry_t // hashcode: 0xFFB1DFB2 (dec: -5120078)
{
	enum menu_sound_t sound; // size=4, offset=0
	int sfx; // size=0, offset=4
};

struct MENUDEFS_109fake // hashcode: 0x99AA84CD (dec: -1716878131)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: menudefs.o, menudefs.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: menudefs.o, menudefs.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: menudefs.o, menudefs.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: menudefs.o, menudefs.o
};

struct MENUFACE_109fake // hashcode: 0xD61A4E22 (dec: -702919134)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: menuface.o, menuface.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: menuface.o, menuface.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: menuface.o, menuface.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: menuface.o, menuface.o
};

struct menuface_t // hashcode: 0xC2732FD8 (dec: -1032638504)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	char w; // size=0, offset=4
	char h; // size=0, offset=5
	char frames; // size=0, offset=6
	short curFrame; // size=0, offset=8
	short transitionDir; // size=0, offset=10
	unsigned short delay; // size=0, offset=12
	unsigned short loaded; // size=0, offset=14
};

struct mcpsx_t // hashcode: 0x79B44761 (dec: 2041857889)
{
	struct {
		enum mcpsx_mode_t mode; // size=4, offset=0
		enum mcpsx_func_t func; // size=4, offset=4
		enum mcpsx_sync_t sync; // size=4, offset=8
		enum mcpsx_err_t err; // size=4, offset=12
		int observed; // size=0, offset=16
	} state; // size=20, offset=0, found in object files: memcard.o, memcard.o
	struct {
		long channel; // size=0, offset=0
		char *filename; // size=0, offset=4
		void *buffer; // size=0, offset=8
		long offset; // size=0, offset=12
		long nbytes; // size=0, offset=16
		long nblocks; // size=0, offset=20
		struct mcpsx_directory_t *directory; // size=24, offset=24
		long *nfilesptr; // size=0, offset=28
	} params; // size=32, offset=20, found in object files: memcard.o, memcard.o
	void *opaque; // size=0, offset=52
};

struct mcpsx_directory_t // hashcode: 0xED9CBF92 (dec: -308494446)
{
	char name[20]; // size=20, offset=0
	int nbytes; // size=0, offset=20
};

struct mcard_t // hashcode: 0x55AF6CB2 (dec: 1437559986)
{
	struct {
		enum mcpsx_err_t err; // size=4, offset=0
		enum state_t fsm; // size=4, offset=4
		enum mcard_status_t status; // size=4, offset=8
		int not_exists; // size=0, offset=12
	} state; // size=16, offset=0, found in object files: memcard.o, memcard.o
	struct {
		long parameter; // size=0, offset=0
		long *nfilesptr; // size=0, offset=4
		struct mcpsx_directory_t *directory; // size=24, offset=8
		char *filename; // size=0, offset=12
		void *buffer; // size=0, offset=16
		int nbytes; // size=0, offset=20
		int nblocks; // size=0, offset=24
	} params; // size=28, offset=16, found in object files: memcard.o, memcard.o
	struct mcpsx_t *mcpsx; // size=56, offset=44
	void *opaque; // size=0, offset=48
};

struct mcmenu_t // hashcode: 0xCDD1805D (dec: -841908131)
{
	struct {
		enum fsm_t fsm; // size=4, offset=0
		enum fsm_t fsm_prev; // size=4, offset=4
		enum mcard_status_t status; // size=4, offset=8
		int running; // size=0, offset=12
		int slot; // size=0, offset=16
	} state; // size=20, offset=0, found in object files: memcard.o, memcard.o
	struct {
		int nblocks; // size=0, offset=0
		int nbytes; // size=0, offset=4
		void *buffer; // size=0, offset=8
		struct mcpsx_directory_t directory[15]; // size=360, offset=12
		long nfiles; // size=0, offset=372
	} params; // size=376, offset=20, found in object files: memcard.o, memcard.o
	struct mcard_t *mcard; // size=52, offset=396
	void *opaque; // size=0, offset=400
};

struct mcmenu_table_t // hashcode: 0xB78C7C17 (dec: -1215529961)
{
	int (*data_size)(); // size=0, offset=0
	void (*initialize)(); // size=0, offset=4
	void (*terminate)(); // size=0, offset=8
	void (*begin)(); // size=0, offset=12
	void (*end)(); // size=0, offset=16
	int (*set_buffer)(); // size=0, offset=20
	int (*main)(); // size=0, offset=24
	int (*pause)(); // size=0, offset=28
	char *versionID; // size=0, offset=32
};

struct MEMCARD_117fake // hashcode: 0x86F561E0 (dec: -2030738976)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: memcard.o, memcard.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: memcard.o, memcard.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: memcard.o, memcard.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: memcard.o, memcard.o
};

struct memcard_t // hashcode: 0xAEC9A344 (dec: -1362517180)
{
	struct Object *object; // size=76, offset=0
	struct mcmenu_table_t *table; // size=36, offset=4
	struct mcmenu_t *mcmenu; // size=404, offset=8
	short running; // size=0, offset=12
	short wrongVerison; // size=0, offset=14
};

struct MEMCARD_216fake // hashcode: 0x1C10213E (dec: 470819134)
{
	struct mcmenu_t dummy1; // size=404, offset=0
	struct mcard_t dummy2; // size=52, offset=404
	struct mcpsx_t dummy3; // size=56, offset=456
};

struct DR_STP // hashcode: 0x8C972396 (dec: -1936252010)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct UNDRWRLD_114fake // hashcode: 0x3CF3A383 (dec: 1022600067)
{
	struct {
		struct MultiSpline *posSpline; // size=0, offset=0
		struct MultiSpline *targetSpline; // size=0, offset=4
		struct _SVector lastSplinePos; // size=8, offset=8
		short splinePointAhead; // size=0, offset=16
		short cinema_done; // size=0, offset=18
		int splinecam_currkey; // size=0, offset=20
		int splinecam_helpkey; // size=0, offset=24
	} Cinematic; // size=28, offset=0, found in object files: undrwrld.o, undrwrld.o
	struct {
		struct _Position offset; // size=6, offset=0
		struct _Rotation rotation; // size=8, offset=6
		long focusDistance; // size=0, offset=16
	} Idle; // size=20, offset=28, found in object files: undrwrld.o, undrwrld.o
	struct {
		struct _TFace *tface; // size=12, offset=0
		struct _TFace *oldTFace; // size=12, offset=4
		struct _SVector oldTargetRot; // size=8, offset=8
		long timer; // size=0, offset=16
		struct _SVector oldFocusInstancePos; // size=8, offset=20
	} Behind; // size=28, offset=48, found in object files: undrwrld.o, undrwrld.o
	struct {
		long stopTimer; // size=0, offset=0
		long stopHit; // size=0, offset=4
		struct _TFace *tface; // size=12, offset=8
		struct _TFace *oldTFace; // size=12, offset=12
		long hit; // size=0, offset=16
	} Follow; // size=20, offset=76, found in object files: undrwrld.o, undrwrld.o
};

struct UW_ScreenXY // hashcode: 0x88757B16 (dec: -2005566698)
{
	short sx; // size=0, offset=0
	short sy; // size=0, offset=2
	short dx; // size=0, offset=4
	short dy; // size=0, offset=6
};
/* End structs */

/* Begin unions */

union PLAYER_76fake // Hashcode: 0x35EA4737 (dec: 904546103)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: player.o, player.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: player.o, player.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: player.o, player.o
};

union PLAYER_77fake // Hashcode: 0xBB3AB3AC (dec: -1153780820)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLAYER_208fake // Hashcode: 0xD87F8A52 (dec: -662730158)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union DEBUG_118fake // Hashcode: 0x841D74D1 (dec: -2078444335)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: debug.o, debug.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: debug.o, debug.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: debug.o, debug.o
};

union DEBUG_119fake // Hashcode: 0xED3B4C32 (dec: -314880974)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union DEBUG_224fake // Hashcode: 0x0131C19B (dec: 20038043)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union DEBUG_260fake // Hashcode: 0x8C9106F7 (dec: -1936652553)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union SIGNAL_71fake // Hashcode: 0x60202F31 (dec: 1612721969)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: signal.o, signal.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: signal.o, signal.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: signal.o, signal.o
};

union SIGNAL_72fake // Hashcode: 0x4AF92C48 (dec: 1257843784)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SIGNAL_206fake // Hashcode: 0x2E97F42B (dec: 781710379)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union COLLIDE_76fake // Hashcode: 0x3AA65B79 (dec: 983980921)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: collide.o, collide.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: collide.o, collide.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: collide.o, collide.o
};

union COLLIDE_77fake // Hashcode: 0xCA00C1AF (dec: -905920081)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union COLLIDE_218fake // Hashcode: 0x489C3F73 (dec: 1218199411)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union COLLIDE_246fake // Hashcode: 0x095377A5 (dec: 156465061)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union CAMERA_71fake // Hashcode: 0x0F6F6CC4 (dec: 258960580)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: camera.o, camera.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: camera.o, camera.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: camera.o, camera.o
};

union CAMERA_72fake // Hashcode: 0x598765BC (dec: 1502045628)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union CAMERA_206fake // Hashcode: 0x6CD0C7C3 (dec: 1825621955)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union DRAW_71fake // Hashcode: 0x10652FFA (dec: 275066874)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: draw.o, draw.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: draw.o, draw.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: draw.o, draw.o
};

union DRAW_72fake // Hashcode: 0x5A7FA683 (dec: 1518315139)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union DRAW_212fake // Hashcode: 0xA8C66167 (dec: -1463393945)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union LIGHT3D_71fake // Hashcode: 0xEEF7B666 (dec: -285755802)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: light3d.o, light3d.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: light3d.o, light3d.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: light3d.o, light3d.o
};

union LIGHT3D_72fake // Hashcode: 0xA2C28EAD (dec: -1564307795)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union LIGHT3D_209fake // Hashcode: 0xF250A22A (dec: -229596630)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union LOAD3D_76fake // Hashcode: 0x8D4B684D (dec: -1924437939)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: load3d.o, load3d.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: load3d.o, load3d.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: load3d.o, load3d.o
};

union LOAD3D_77fake // Hashcode: 0xD696E2BF (dec: -694754625)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MAIN_76fake // Hashcode: 0x1DB2E0D5 (dec: 498262229)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: main.o, main.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: main.o, main.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: main.o, main.o
};

union MAIN_77fake // Hashcode: 0x7C857C0F (dec: 2089122831)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MAIN_213fake // Hashcode: 0xFBB8D531 (dec: -71772879)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MAIN_243fake // Hashcode: 0xD076C382 (dec: -797523070)
{
	unsigned short pad; // size=0, offset=0
	unsigned short multitap[16]; // size=32, offset=0
	unsigned short mouse[2]; // size=4, offset=0
	unsigned short negcon[3]; // size=6, offset=0
	struct AnalogueData analogue; // size=6, offset=0
};

union FONT_76fake // Hashcode: 0x7BE39A46 (dec: 2078513734)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: font.o, font.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: font.o, font.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: font.o, font.o
};

union FONT_77fake // Hashcode: 0xADC7F886 (dec: -1379403642)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union FONT_213fake // Hashcode: 0x740A6D3C (dec: 1946840380)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union GAMELOOP_76fake // Hashcode: 0x8976D081 (dec: -1988702079)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: gameloop.o, gameloop.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: gameloop.o, gameloop.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: gameloop.o, gameloop.o
};

union GAMELOOP_77fake // Hashcode: 0x5136BCA3 (dec: 1362541731)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union GAMELOOP_192fake // Hashcode: 0x2687240D (dec: 646390797)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union GAMELOOP_236fake // Hashcode: 0x41C73D01 (dec: 1103576321)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union GAMEPAD_76fake // Hashcode: 0xCC53CC9A (dec: -866923366)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: gamepad.o, gamepad.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: gamepad.o, gamepad.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: gamepad.o, gamepad.o
};

union GAMEPAD_77fake // Hashcode: 0xD392046D (dec: -745405331)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union GAMEPAD_200fake // Hashcode: 0xE2465038 (dec: -498708424)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union INSTANCE_76fake // Hashcode: 0x868EC9CC (dec: -2037462580)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: instance.o, instance.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: instance.o, instance.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: instance.o, instance.o
};

union INSTANCE_77fake // Hashcode: 0x2031C6D4 (dec: 540133076)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union INSTANCE_204fake // Hashcode: 0x3FD2E4BE (dec: 1070785726)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union INSTANCE_270fake // Hashcode: 0xB44B3EBC (dec: -1270137156)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union SOUND_76fake // Hashcode: 0xA905F6AB (dec: -1459226965)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: sound.o, sound.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: sound.o, sound.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: sound.o, sound.o
};

union SOUND_77fake // Hashcode: 0xFD6718B0 (dec: -43575120)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SOUND_205fake // Hashcode: 0x2C15C540 (dec: 739624256)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union BSP_71fake // Hashcode: 0x81368942 (dec: -2127132350)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: bsp.o, bsp.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: bsp.o, bsp.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: bsp.o, bsp.o
};

union BSP_72fake // Hashcode: 0x1CB63B8E (dec: 481704846)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union BSP_208fake // Hashcode: 0x2E8AEFCF (dec: 780857295)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union OBTABLE_76fake // Hashcode: 0x95622E13 (dec: -1788727789)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: obtable.o, obtable.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: obtable.o, obtable.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: obtable.o, obtable.o
};

union OBTABLE_77fake // Hashcode: 0x8EF4F21E (dec: -1896549858)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union OBTABLE_196fake // Hashcode: 0x921E9F5C (dec: -1843486884)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union OBTABLE2_76fake // Hashcode: 0x1E9F108F (dec: 513740943)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: obtable2.o, obtable2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: obtable2.o, obtable2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: obtable2.o, obtable2.o
};

union OBTABLE2_77fake // Hashcode: 0xA0B14AC6 (dec: -1598993722)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union OBTABLE2_209fake // Hashcode: 0xB29B0D0C (dec: -1298461428)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union GENERIC_76fake // Hashcode: 0x55C9A583 (dec: 1439278467)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: generic.o, generic.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: generic.o, generic.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: generic.o, generic.o
};

union GENERIC_77fake // Hashcode: 0x95D27D31 (dec: -1781367503)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union GENERIC_201fake // Hashcode: 0x7031E694 (dec: 1882318484)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MATH3D_76fake // Hashcode: 0x663290A4 (dec: 1714589860)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: math3d.o, math3d.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: math3d.o, math3d.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: math3d.o, math3d.o
};

union MATH3D_77fake // Hashcode: 0xA8CF04EA (dec: -1462827798)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PIPE3D_71fake // Hashcode: 0x1EBB5F62 (dec: 515596130)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: pipe3d.o, pipe3d.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: pipe3d.o, pipe3d.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: pipe3d.o, pipe3d.o
};

union PIPE3D_72fake // Hashcode: 0x17C0E47B (dec: 398517371)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PIPE3D_199fake // Hashcode: 0x416C539D (dec: 1097618333)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union SCRIPT_76fake // Hashcode: 0x07CCD3E7 (dec: 130864103)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: script.o, script.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: script.o, script.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: script.o, script.o
};

union SCRIPT_77fake // Hashcode: 0xA89A9D98 (dec: -1466262120)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SCRIPT_202fake // Hashcode: 0x28E126E1 (dec: 685844193)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union TIMER_71fake // Hashcode: 0x3CBEC8D9 (dec: 1019136217)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: timer.o, timer.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: timer.o, timer.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: timer.o, timer.o
};

union TIMER_72fake // Hashcode: 0x2BECCC5B (dec: 736939099)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SPLINE_71fake // Hashcode: 0x4CDE9A19 (dec: 1289656857)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: spline.o, spline.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: spline.o, spline.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: spline.o, spline.o
};

union SPLINE_72fake // Hashcode: 0x9E0EEC67 (dec: -1643189145)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union FX_71fake // Hashcode: 0xB3324C63 (dec: -1288549277)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: fx.o, fx.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: fx.o, fx.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: fx.o, fx.o
};

union FX_72fake // Hashcode: 0x20C14C3E (dec: 549538878)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union FX_204fake // Hashcode: 0x83EDAC95 (dec: -2081575787)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union TABLES_71fake // Hashcode: 0xBB5F5001 (dec: -1151381503)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: tables.o, tables.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: tables.o, tables.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: tables.o, tables.o
};

union TABLES_72fake // Hashcode: 0x42364A63 (dec: 1110854243)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union VM_71fake // Hashcode: 0x577C0C3A (dec: 1467747386)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: vm.o, vm.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: vm.o, vm.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: vm.o, vm.o
};

union VM_72fake // Hashcode: 0x27CA656B (dec: 667575659)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union VM_199fake // Hashcode: 0x1A8628B8 (dec: 444999864)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MEMPACK_71fake // Hashcode: 0x13120B58 (dec: 319949656)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: mempack.o, mempack.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: mempack.o, mempack.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: mempack.o, mempack.o
};

union MEMPACK_72fake // Hashcode: 0x11956E16 (dec: 295005718)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MEMPACK_188fake // Hashcode: 0x583B4A58 (dec: 1480280664)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MEMPACK_243fake // Hashcode: 0xFF7DC21B (dec: -8535525)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union GXASSERT_76fake // Hashcode: 0x6E0FED62 (dec: 1846537570)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: gxassert.o, gxassert.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: gxassert.o, gxassert.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: gxassert.o, gxassert.o
};

union GXASSERT_77fake // Hashcode: 0xB6DAB56F (dec: -1227180689)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union AADASSRT_118fake // Hashcode: 0x94794D33 (dec: -1803989709)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: aadassrt.o, aadassrt.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: aadassrt.o, aadassrt.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: aadassrt.o, aadassrt.o
};

union AADASSRT_119fake // Hashcode: 0x8D49167A (dec: -1924589958)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union AADLIB_115fake // Hashcode: 0xBBFB2637 (dec: -1141168585)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: aadlib.o, aadlib.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: aadlib.o, aadlib.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: aadlib.o, aadlib.o
};

union AADLIB_116fake // Hashcode: 0x1F25FD4D (dec: 522583373)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union AADLIB_190fake // Hashcode: 0x9F6EB891 (dec: -1620133743)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union STREAM_76fake // Hashcode: 0x4C037A0C (dec: 1275296268)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: stream.o, stream.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: stream.o, stream.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: stream.o, stream.o
};

union STREAM_77fake // Hashcode: 0x616584A0 (dec: 1634043040)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union STREAM_210fake // Hashcode: 0x3DCA0E3B (dec: 1036652091)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union STREAM_261fake // Hashcode: 0x825DBD24 (dec: -2107785948)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union PHYSOBS_71fake // Hashcode: 0xF2195964 (dec: -233219740)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: PhysObs.o, PhysObs.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: PhysObs.o, PhysObs.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: PhysObs.o, PhysObs.o
};

union PHYSOBS_72fake // Hashcode: 0x97A84143 (dec: -1750580925)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union RAZCNTRL_71fake // Hashcode: 0x71649135 (dec: 1902416181)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: razcntrl.o, razcntrl.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: razcntrl.o, razcntrl.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: razcntrl.o, razcntrl.o
};

union RAZCNTRL_72fake // Hashcode: 0xF95E971E (dec: -111241442)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union STATE_71fake // Hashcode: 0xAA58AF71 (dec: -1437028495)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: state.o, state.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: state.o, state.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: state.o, state.o
};

union STATE_72fake // Hashcode: 0x5FE524E4 (dec: 1608852708)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union STRMLOAD_76fake // Hashcode: 0x11D0D844 (dec: 298899524)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: strmload.o, strmload.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: strmload.o, strmload.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: strmload.o, strmload.o
};

union STRMLOAD_77fake // Hashcode: 0xBBC25C92 (dec: -1144890222)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SCRIPT2_71fake // Hashcode: 0x96CD1A76 (dec: -1764943242)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: script2.o, script2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: script2.o, script2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: script2.o, script2.o
};

union SCRIPT2_72fake // Hashcode: 0x9E503CEA (dec: -1638908694)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SCRIPT2_203fake // Hashcode: 0xA02D75C0 (dec: -1607633472)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union EVENT_76fake // Hashcode: 0x5ECA26A1 (dec: 1590306465)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: event.o, event.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: event.o, event.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: event.o, event.o
};

union EVENT_77fake // Hashcode: 0xCEC39DA9 (dec: -826040919)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union EVENT_219fake // Hashcode: 0xED7CCDD7 (dec: -310587945)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONMSG_76fake // Hashcode: 0xE9C1A94D (dec: -373184179)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: monmsg.o, monmsg.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: monmsg.o, monmsg.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: monmsg.o, monmsg.o
};

union MONMSG_77fake // Hashcode: 0x1D317893 (dec: 489781395)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONMSG_196fake // Hashcode: 0x160BF936 (dec: 369883446)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union VRAM_76fake // Hashcode: 0xFB5FC5A7 (dec: -77609561)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: vram.o, vram.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: vram.o, vram.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: vram.o, vram.o
};

union VRAM_77fake // Hashcode: 0xE4B92D7A (dec: -457626246)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union VRAM_210fake // Hashcode: 0x69CCA192 (dec: 1775018386)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PHYSICS_71fake // Hashcode: 0x71AB8CEE (dec: 1907068142)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: physics.o, physics.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: physics.o, physics.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: physics.o, physics.o
};

union PHYSICS_72fake // Hashcode: 0x4F67EB4B (dec: 1332210507)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PHYSICS_203fake // Hashcode: 0x0B2D1FCE (dec: 187506638)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union REAVER_76fake // Hashcode: 0x4667F1DF (dec: 1181217247)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: reaver.o, reaver.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: reaver.o, reaver.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: reaver.o, reaver.o
};

union REAVER_77fake // Hashcode: 0x1E75973B (dec: 511022907)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union REAVER_213fake // Hashcode: 0x859607D9 (dec: -2053765159)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union GLYPH_76fake // Hashcode: 0xA7755406 (dec: -1485483002)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: glyph.o, glyph.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: glyph.o, glyph.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: glyph.o, glyph.o
};

union GLYPH_77fake // Hashcode: 0x56F23318 (dec: 1458713368)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union GLYPH_213fake // Hashcode: 0x655BB5FA (dec: 1700509178)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union HUMAN_76fake // Hashcode: 0xF9B1F2DA (dec: -105778470)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: human.o, human.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: human.o, human.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: human.o, human.o
};

union HUMAN_77fake // Hashcode: 0x55AD237E (dec: 1437410174)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union HUMAN_193fake // Hashcode: 0x24019F16 (dec: 604086038)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MISSILE_76fake // Hashcode: 0x770AB642 (dec: 1997190722)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: missile.o, missile.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: missile.o, missile.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: missile.o, missile.o
};

union MISSILE_77fake // Hashcode: 0x00D3FAB3 (dec: 13892275)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MISSILE_196fake // Hashcode: 0xC6BB167F (dec: -960817537)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONAPI_76fake // Hashcode: 0x56316C41 (dec: 1446079553)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: monapi.o, monapi.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: monapi.o, monapi.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: monapi.o, monapi.o
};

union MONAPI_77fake // Hashcode: 0x8FFC132D (dec: -1879305427)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONAPI_201fake // Hashcode: 0x68ED3057 (dec: 1760374871)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONLIB_76fake // Hashcode: 0x270AB0E0 (dec: 655012064)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: monlib.o, monlib.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: monlib.o, monlib.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: monlib.o, monlib.o
};

union MONLIB_77fake // Hashcode: 0x3370E575 (dec: 863036789)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONLIB_208fake // Hashcode: 0x7EC2D3DE (dec: 2126697438)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONTABLE_71fake // Hashcode: 0xD5F65CA7 (dec: -705274713)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: montable.o, montable.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: montable.o, montable.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: montable.o, montable.o
};

union MONTABLE_72fake // Hashcode: 0x14670472 (dec: 342295666)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONTABLE_188fake // Hashcode: 0x19B6D4AD (dec: 431412397)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MORLOCK_76fake // Hashcode: 0x5ED080FA (dec: 1590722810)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: morlock.o, morlock.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: morlock.o, morlock.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: morlock.o, morlock.o
};

union MORLOCK_77fake // Hashcode: 0xAAD9422C (dec: -1428602324)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MORLOCK_193fake // Hashcode: 0xF8639DBE (dec: -127689282)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union SLUAGH_76fake // Hashcode: 0x38C12C3D (dec: 952183869)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: sluagh.o, sluagh.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: sluagh.o, sluagh.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: sluagh.o, sluagh.o
};

union SLUAGH_77fake // Hashcode: 0x781A6F6B (dec: 2014998379)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SLUAGH_193fake // Hashcode: 0x537C56CA (dec: 1400657610)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union SOUL_76fake // Hashcode: 0xCC0D2587 (dec: -871553657)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: soul.o, soul.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: soul.o, soul.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: soul.o, soul.o
};

union SOUL_77fake // Hashcode: 0x7DA1E6FA (dec: 2107762426)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SOUL_193fake // Hashcode: 0xC2BEE064 (dec: -1027678108)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONSENSE_76fake // Hashcode: 0x2B30D328 (dec: 724620072)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: monsense.o, monsense.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: monsense.o, monsense.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: monsense.o, monsense.o
};

union MONSENSE_77fake // Hashcode: 0x25544503 (dec: 626279683)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONSENSE_196fake // Hashcode: 0xA7338706 (dec: -1489795322)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MONSTER_76fake // Hashcode: 0x93E73915 (dec: -1813563115)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: monster.o, monster.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: monster.o, monster.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: monster.o, monster.o
};

union MONSTER_77fake // Hashcode: 0x2E7BD072 (dec: 779866226)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MONSTER_212fake // Hashcode: 0xDED63187 (dec: -556387961)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union ANIMG2_72fake // Hashcode: 0x67F203D2 (dec: 1743913938)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union ANIMG2_199fake // Hashcode: 0x703D7969 (dec: 1883076969)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union VWRAITH_76fake // Hashcode: 0x3BD14D9A (dec: 1003572634)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: vwraith.o, vwraith.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: vwraith.o, vwraith.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: vwraith.o, vwraith.o
};

union VWRAITH_77fake // Hashcode: 0x1DF0AFEB (dec: 502312939)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union VWRAITH_193fake // Hashcode: 0x3F7542F5 (dec: 1064649461)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union WORSHIP_76fake // Hashcode: 0x67B6B44E (dec: 1740026958)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: worship.o, worship.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: worship.o, worship.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: worship.o, worship.o
};

union WORSHIP_77fake // Hashcode: 0x11B9D34C (dec: 297390924)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union WORSHIP_193fake // Hashcode: 0xB9C6ED01 (dec: -1178145535)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union MBMISS_76fake // Hashcode: 0x99AC1F62 (dec: -1716773022)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: mbmiss.o, mbmiss.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: mbmiss.o, mbmiss.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: mbmiss.o, mbmiss.o
};

union MBMISS_77fake // Hashcode: 0x2A18F047 (dec: 706277447)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MBMISS_212fake // Hashcode: 0xA059CF55 (dec: -1604726955)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLANAPI_113fake // Hashcode: 0xC8F8AFA3 (dec: -923226205)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: planapi.o, planapi.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: planapi.o, planapi.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: planapi.o, planapi.o
};

union PLANAPI_114fake // Hashcode: 0xCACF262B (dec: -892393941)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANAPI_211fake // Hashcode: 0xE4701505 (dec: -462416635)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLANCOLL_76fake // Hashcode: 0x735BBCE0 (dec: 1935391968)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: plancoll.o, plancoll.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: plancoll.o, plancoll.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: plancoll.o, plancoll.o
};

union PLANCOLL_77fake // Hashcode: 0x61131CC4 (dec: 1628642500)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANCOLL_216fake // Hashcode: 0x15330FC6 (dec: 355667910)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLANDRAW_76fake // Hashcode: 0x4C57B53A (dec: 1280816442)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: plandraw.o, plandraw.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: plandraw.o, plandraw.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: plandraw.o, plandraw.o
};

union PLANDRAW_77fake // Hashcode: 0x62B7D6B4 (dec: 1656215220)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANDRAW_211fake // Hashcode: 0xCBD20DED (dec: -875426323)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLANOPT_113fake // Hashcode: 0xCBAEC67C (dec: -877738372)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: planopt.o, planopt.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: planopt.o, planopt.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: planopt.o, planopt.o
};

union PLANOPT_114fake // Hashcode: 0x15E0A7CA (dec: 367044554)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANOPT_211fake // Hashcode: 0xC37ABAC4 (dec: -1015366972)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union QUATVM_71fake // Hashcode: 0x3F855776 (dec: 1065703286)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: QuatVM.o, QuatVM.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: QuatVM.o, QuatVM.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: QuatVM.o, QuatVM.o
};

union QUATVM_72fake // Hashcode: 0x0E200AE9 (dec: 236980969)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union ENMYPLAN_76fake // Hashcode: 0xB9153BA5 (dec: -1189790811)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: enmyplan.o, enmyplan.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: enmyplan.o, enmyplan.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: enmyplan.o, enmyplan.o
};

union ENMYPLAN_77fake // Hashcode: 0x3C88A9DD (dec: 1015589341)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union ENMYPLAN_216fake // Hashcode: 0xDAEB41F2 (dec: -622116366)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLAN_76fake // Hashcode: 0x1EE5CF14 (dec: 518377236)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: plan.o, plan.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: plan.o, plan.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: plan.o, plan.o
};

union PLAN_77fake // Hashcode: 0xF5480003 (dec: -179830781)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLAN_216fake // Hashcode: 0xA458DD1A (dec: -1537680102)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union INSTNCG2_23fake // Hashcode: 0x7E6DF599 (dec: 2121135513)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: InstncG2.o, InstncG2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: InstncG2.o, InstncG2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: InstncG2.o, InstncG2.o
};

union INSTNCG2_72fake // Hashcode: 0x7883E999 (dec: 2021910937)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MAING2_71fake // Hashcode: 0xC6D143DA (dec: -959364134)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: MainG2.o, MainG2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: MainG2.o, MainG2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: MainG2.o, MainG2.o
};

union MAING2_72fake // Hashcode: 0x5E3F6632 (dec: 1581213234)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MATRIXG2_71fake // Hashcode: 0xA0B77D4D (dec: -1598587571)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: MatrixG2.o, MatrixG2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: MatrixG2.o, MatrixG2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: MatrixG2.o, MatrixG2.o
};

union MATRIXG2_72fake // Hashcode: 0x83CA3EFF (dec: -2083897601)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MATRIXG2_199fake // Hashcode: 0x4ED53C11 (dec: 1322597393)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union QUATG2_71fake // Hashcode: 0x6D09A304 (dec: 1829348100)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: QuatG2.o, QuatG2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: QuatG2.o, QuatG2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: QuatG2.o, QuatG2.o
};

union QUATG2_72fake // Hashcode: 0xEADF8295 (dec: -354450795)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union TIMERG2_71fake // Hashcode: 0x8A15530F (dec: -1978313969)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: TimerG2.o, TimerG2.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: TimerG2.o, TimerG2.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: TimerG2.o, TimerG2.o
};

union TIMERG2_72fake // Hashcode: 0xD9819D78 (dec: -645816968)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANPOOL_113fake // Hashcode: 0x56DC200F (dec: 1457266703)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: planpool.o, planpool.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: planpool.o, planpool.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: planpool.o, planpool.o
};

union PLANPOOL_114fake // Hashcode: 0xC5FBA233 (dec: -973364685)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANPOOL_211fake // Hashcode: 0x03C6821C (dec: 63341084)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union PLANSRCH_113fake // Hashcode: 0x580A71C1 (dec: 1477079489)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: plansrch.o, plansrch.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: plansrch.o, plansrch.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: plansrch.o, plansrch.o
};

union PLANSRCH_114fake // Hashcode: 0x3FB13975 (dec: 1068579189)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union PLANSRCH_211fake // Hashcode: 0xDCCB3C3B (dec: -590660549)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union CONTROL_71fake // Hashcode: 0x043A48B4 (dec: 70928564)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: control.o, control.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: control.o, control.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: control.o, control.o
};

union CONTROL_72fake // Hashcode: 0xC9FAD521 (dec: -906308319)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union CONTROL_203fake // Hashcode: 0xA503E0F9 (dec: -1526472455)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union RAZIEL_71fake // Hashcode: 0xF5AF9DDD (dec: -173040163)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: raziel.o, raziel.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: raziel.o, raziel.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: raziel.o, raziel.o
};

union RAZIEL_72fake // Hashcode: 0x9204611F (dec: -1845206753)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union RAZIEL_203fake // Hashcode: 0x2DB038C4 (dec: 766523588)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union RAZIEL_257fake // Hashcode: 0x017E7D66 (dec: 25066854)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union SAVEINFO_76fake // Hashcode: 0xD1DD7996 (dec: -774014570)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: saveinfo.o, saveinfo.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: saveinfo.o, saveinfo.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: saveinfo.o, saveinfo.o
};

union SAVEINFO_77fake // Hashcode: 0xFB46A940 (dec: -79255232)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union SAVEINFO_196fake // Hashcode: 0x37750CF1 (dec: 930417905)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union SAVEINFO_223fake // Hashcode: 0x8FDE617F (dec: -1881251457)
{
	struct Intro *intro; // size=76, offset=0
	struct _SFXMkr *sfxMarker; // size=36, offset=0
};

union VOICEXA_86fake // Hashcode: 0x5344B4D5 (dec: 1397011669)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: voicexa.o, voicexa.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: voicexa.o, voicexa.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: voicexa.o, voicexa.o
};

union VOICEXA_87fake // Hashcode: 0xEAE9F72B (dec: -353765589)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union CINEPSX_71fake // Hashcode: 0xC9DD8A44 (dec: -908228028)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: cinepsx.o, cinepsx.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: cinepsx.o, cinepsx.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: cinepsx.o, cinepsx.o
};

union CINEPSX_72fake // Hashcode: 0x52A4E0FA (dec: 1386537210)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union CINEPSX_188fake // Hashcode: 0x6F4C9E8E (dec: 1867292302)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union CINEPSX_211fake // Hashcode: 0x8DD526F5 (dec: -1915410699)
{
	unsigned short pad; // size=0, offset=0
	unsigned short multitap[16]; // size=32, offset=0
	unsigned short mouse[2]; // size=4, offset=0
	unsigned short negcon[3]; // size=6, offset=0
	struct AnalogueData analogue; // size=6, offset=0
};

union MENU_71fake // Hashcode: 0x9417F09E (dec: -1810370402)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: menu.o, menu.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: menu.o, menu.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: menu.o, menu.o
};

union MENU_72fake // Hashcode: 0xE575C374 (dec: -445267084)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MENUUTIL_71fake // Hashcode: 0x6C5644DB (dec: 1817593051)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: menuutil.o, menuutil.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: menuutil.o, menuutil.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: menuutil.o, menuutil.o
};

union MENUUTIL_72fake // Hashcode: 0x9906017D (dec: -1727659651)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MENUDEFS_71fake // Hashcode: 0x2BC919B9 (dec: 734599609)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: menudefs.o, menudefs.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: menudefs.o, menudefs.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: menudefs.o, menudefs.o
};

union MENUDEFS_72fake // Hashcode: 0x8E6F3A2D (dec: -1905313235)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MENUFACE_71fake // Hashcode: 0x1C6ACF56 (dec: 476761942)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: menuface.o, menuface.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: menuface.o, menuface.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: menuface.o, menuface.o
};

union MENUFACE_72fake // Hashcode: 0xFB4CCE52 (dec: -78852526)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MEMCARD_79fake // Hashcode: 0xCBE8E87E (dec: -873928578)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: memcard.o, memcard.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: memcard.o, memcard.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: memcard.o, memcard.o
};

union MEMCARD_80fake // Hashcode: 0xCA90C9EC (dec: -896480788)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union MEMCARD_196fake // Hashcode: 0xF7F7C377 (dec: -134757513)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};

union UNDRWRLD_76fake // Hashcode: 0x6E59B9C2 (dec: 1851374018)
{
	struct {
		unsigned long (*function)(); // size=0, offset=0
		void *fnData; // size=0, offset=4
	} callback; // size=8, offset=0, found in object files: undrwrld.o, undrwrld.o
	struct {
		struct _G2SVector3_Type base; // size=6, offset=0
		struct _G2SVector3_Type offset; // size=6, offset=6
	} vector; // size=12, offset=0, found in object files: undrwrld.o, undrwrld.o
	struct {
		struct _G2Quat_Type src; // size=8, offset=0
		struct _G2Quat_Type dest; // size=8, offset=8
	} quat; // size=16, offset=0, found in object files: undrwrld.o, undrwrld.o
};

union UNDRWRLD_77fake // Hashcode: 0x395B97AA (dec: 962303914)
{
	long color; // size=0, offset=0
	struct _RGBAColor rgba; // size=4, offset=0
};

union UNDRWRLD_195fake // Hashcode: 0xA8618D78 (dec: -1470001800)
{
	struct _Instance *target; // size=616, offset=0
	struct _Position position; // size=6, offset=0
	struct _Rotation direction; // size=8, offset=0
	struct _Position throwVector; // size=6, offset=0
};
/* End unions */

/* Begin typedefs */

typedef struct MATRIX MATRIX;

typedef struct VECTOR VECTOR;

typedef struct SVECTOR SVECTOR;

typedef struct CVECTOR CVECTOR;

typedef struct DVECTOR DVECTOR;

typedef struct RVECTOR RVECTOR;

typedef struct CRVECTOR3 CRVECTOR3;

typedef struct CRVECTOR4 CRVECTOR4;

typedef struct RECT RECT;

typedef struct DR_ENV DR_ENV;

typedef struct P_TAG P_TAG;

typedef struct CdlLOC CdlLOC;

typedef struct LightInstance LightInstance;

typedef struct _GameTrackerASMData_Type GameTrackerASMData;

typedef struct _GameData_Type GameData;

typedef struct NodeType NodeType;

typedef struct TextureFT3 TextureFT3;

typedef struct TextureMT3 TextureMT3;

typedef struct AniTexInfo AniTexInfo;

typedef struct AniTex AniTex;

typedef struct DrMoveAniTexSrcInfo DrMoveAniTexSrcInfo;

typedef struct DrMoveAniTexDestInfo DrMoveAniTexDestInfo;

typedef struct DrMoveAniTex DrMoveAniTex;

typedef struct MemHeader MemHeader;

typedef enum _G2Bool_Enum G2Bool;

typedef struct _G2SVector3_Type G2SVector3;

typedef struct _G2LVector3_Type G2LVector3;

typedef struct _G2Matrix_Type G2Matrix;

typedef struct _G2Quat_Type G2Quat;

typedef struct _G2AnimQuatInfo_Type G2AnimQuatInfo;

typedef struct _G2AnimAlphaTable_Type G2AnimAlphaTable;

typedef struct _G2AnimInterpStateBlock_Type G2AnimInterpStateBlock;

typedef struct _G2AnimInterpInfo_Type G2AnimInterpInfo;

typedef struct _G2AnimChanStatus_Type G2AnimChanStatus;

typedef struct _G2AnimChanStatusBlock_Type G2AnimChanStatusBlock;

typedef struct _G2AnimFxHeader_Type G2AnimFxHeader;

typedef struct _G2AnimKeylist_Type G2AnimKeylist;

typedef struct _G2AnimSection_Type G2AnimSection;

typedef struct _G2Anim_Type G2Anim;

typedef struct _SVector SVector;

typedef struct _SVectorNoPad SVectorNoPad;

typedef struct MATRIX Transform;

typedef struct _Position Position;

typedef struct _Rotation Rotation;

typedef struct _Normal Normal;

typedef struct _PlaneConstants PlaneConstants;

typedef struct _Vertex Vertex;

typedef struct _Face Face;

typedef struct _MVertex MVertex;

typedef struct _MFace MFace;

typedef struct _RGBAColor RGBAColor;

typedef struct _PVertex PVertex;

typedef struct _VertexPool VertexPool;

typedef struct _PrimPool PrimPool;

typedef struct _Sphere Sphere;

typedef struct _Sphere_noSq Sphere_noSq;

typedef struct _CameraKey CameraKey;

typedef struct Object Object;

typedef struct _BVertex BVertex;

typedef struct _BFace BFace;

typedef struct _BGObject BGObject;

typedef struct Signal Signal;

typedef struct _MultiSignal MultiSignal;

typedef struct _HFace HFace;

typedef struct _HSphere HSphere;

typedef struct _HBox HBox;

typedef struct _HPrim HPrim;

typedef struct _HModel HModel;

typedef struct _HInfo HInfo;

typedef struct _Segment Segment;

typedef struct MultiSpline MultiSpline;

typedef struct _Model Model;

typedef struct SoundInstance SoundInstance;

typedef struct ObjectEffect ObjectEffect;

typedef struct ObjectEffect AnimEffectData;

typedef struct VramSize VramSize;

typedef struct _TFace TFace;

typedef struct _TVertex TVertex;

typedef struct EventAliasCommandStruct EventAliasCommandStruct;

typedef struct _Instance Instance;

typedef struct _InstancePool InstancePool;

typedef struct _InstanceList InstanceList;

typedef struct _ObjectTracker ObjectTracker;

typedef struct Intro Intro;

typedef struct _BoundingBox BoundingBox;

typedef struct CDLight CDLight;

typedef struct _BSPNode BSPNode;

typedef struct _BSPNode SBSPNode;

typedef struct _BSPLeaf BSPLeaf;

typedef struct _MorphVertex MorphVertex;

typedef struct _MorphColor MorphColor;

typedef struct _SavedCinematic SavedCinematic;

typedef struct BSPTree BSPTree;

typedef struct _Terrain Terrain;

typedef struct LightGroup LightGroup;

typedef struct LightList LightList;

typedef struct PointLight PointLight;

typedef struct SpotLight SpotLight;

typedef struct LightInfo LightInfo;

typedef struct _VMOffset VMMoveOffset;

typedef struct _VMColorOffset VMColorOffset;

typedef struct _VMInterpolated VMInterpolated;

typedef struct _VMOffsetTable VMOffsetTable;

typedef struct _VMObject VMObject;

typedef struct _VGroup VGroup;

typedef struct _HotSpot HotSpot;

typedef struct _PlanMkr PlanMkr;

typedef struct _SFXMkr SFXMkr;

typedef struct TClassAttr TClassAttr;

typedef struct Level Level;

typedef struct _ColorType ColorType;

typedef struct _CameraCore_Type CameraCore;

typedef struct SpuVolume SpuVolume;

typedef struct SpuVoiceAttr SpuVoiceAttr;

typedef struct SpuExtAttr SpuExtAttr;

typedef struct SpuStVoiceAttr SpuStVoiceAttr;

typedef struct AadSoundBankHdr AadSoundBankHdr;

typedef struct AadProgramAtr AadProgramAtr;

typedef struct AadToneAtr AadToneAtr;

typedef struct _AadDynSfxFileHdr AadDynSfxSnfFileHdr;

typedef struct AadDynSfxAttr AadDynSfxAttr;

typedef struct AadTempoCounter AadTempoCounter;

typedef struct AadSeqEvent AadSeqEvent;

typedef struct _AadSequenceSlot AadSequenceSlot;

typedef struct AadSfxCommand AadSfxCommand;

typedef struct AadSfxSlot AadSfxSlot;

typedef struct AadSynthVoice AadSynthVoice;

typedef struct AadDynamicLoadRequest AadDynamicLoadRequest;

typedef struct AadDynamicBankLoadInfo AadDynamicBankLoadInfo;

typedef struct AadDynamicSfxLoadInfo AadDynamicSfxLoadInfo;

typedef struct AadNewSramBlockDesc AadNewSramBlockDesc;

typedef struct AadLoadedSfxToneAttr AadLoadedSfxToneAttr;

typedef struct AadLoadedSfxWaveAttr AadLoadedSfxWaveAttr;

typedef struct AadSramDefragInfo AadSramDefragInfo;

typedef struct AadVolFader AadVolFader;

typedef struct MusicLoadCmd MusicLoadCmd;

typedef struct gSoundData gSoundData;

typedef struct GameTracker GameTracker;

typedef struct Spline Spline;

typedef struct vecS vecS;

typedef struct vecL vecL;

typedef struct SplineRotKey SplineRotKey;

typedef struct RSpline RSpline;

typedef struct SplineKey SplineKey;

typedef struct SplineDef SplineDef;

typedef struct _HVertex HVertex;

typedef struct _MONAPI_Regenerator MONAPI_Regenerator;

typedef enum DEBUG_LINE_TYPE DEBUG_LINE_TYPE;

typedef struct __Event Message;

typedef struct __MessageQueue MessageQueue;

typedef struct __State State;

typedef unsigned char u_char;

typedef unsigned short u_short;

typedef unsigned int u_int;

typedef unsigned long u_long;

typedef unsigned short ushort;

typedef struct _physadr *physadr;

typedef long daddr_t;

typedef char *caddr_t;

typedef long *qaddr_t;

typedef unsigned long ino_t;

typedef long swblk_t;

typedef unsigned int size_t;

typedef long time_t;

typedef short dev_t;

typedef long off_t;

typedef unsigned short uid_t;

typedef unsigned short gid_t;

typedef unsigned long wchar_t;

typedef void (*CdlCB)();

typedef void *va_list;

typedef unsigned char uchar;

typedef unsigned char u_byte;

typedef unsigned char ubyte;

typedef unsigned long ulong;

typedef char int8;

typedef short int16;

typedef long int32;

typedef long int64;

typedef unsigned char uint8;

typedef unsigned short uint16;

typedef unsigned long uint32;

typedef unsigned long uint64;

typedef char BYTE;

typedef unsigned char UBYTE;

typedef unsigned long ULONG;

typedef unsigned short USHORT;

typedef unsigned long bool;

typedef long ListOrderFunc();

typedef unsigned long *OTag;

typedef unsigned char G2UInt8;

typedef unsigned short G2UInt16;

typedef unsigned long G2UInt32;

typedef char G2Int8;

typedef short G2Int16;

typedef long G2Int32;

typedef long G2fp4dot12;

typedef long G2fp8dot24;

typedef short G2TimerAtomicUnit;

typedef int G2AnimKeyframeNumber;

typedef int G2AnimKeylistID;

typedef int G2AnimSectionID;

typedef unsigned char G2AnimSegmentID;

typedef unsigned char G2AnimControllerType;

typedef unsigned short G2AnimChanMask;

typedef long (*G2AnimCallback)();

typedef unsigned long (*G2AnimControllerFn)();

typedef short G2AnimChanKeyData;

typedef short G2AnimChanFinalValue;

typedef enum _G2Bool_Enum (*G2InstanceRebuildCallback)();

typedef long lfixed;

typedef short sfixed;

typedef short MatEntry;

typedef short Fraction;

typedef long VectorCoord;

typedef short SVectorCoord;

typedef short NormalCoord;

typedef short TrigVal;

typedef short Angle;

typedef short Matrix[3][3];

typedef void InitFunc();

typedef void ProcessFunc();

typedef void CollideFunc();

typedef unsigned long QueryFunc();

typedef void MessageFunc();

typedef void RelocateTuneFunc();

typedef void (*SpuIRQCallbackProc)();

typedef void (*SpuTransferCallbackProc)();

typedef void (*SpuStCallbackProc)();

typedef int AADRESULT;

typedef int AadFileHandle;

typedef unsigned long AadChannelList;

typedef void (*AadFadeCompleteCallbackProc)();

typedef void (*AadLockVoiceCallbackProc)();

typedef void (*AadController11CallbackProc)();

typedef void (*AadEndSequenceCallbackProc)();

typedef void (*AadLoadDynamicSoundBankReturnProc)();

typedef void (*AadLoadDynamicSfxReturnProc)();

typedef void (**AadMemoryMallocProc)();

typedef void (*AadMemoryFreeProc)();

typedef void (*AadNonBlockLoadReturnProc)();

typedef void (*AadNonBlockLoadProc)();

typedef void (*AadNonBlockBufferedLoadReturnProc)();

typedef void (*AadNonBlockBufferedLoadProc)();

typedef unsigned char AadNewSramBlockHandle;

typedef unsigned long AadSfxHandle;

typedef unsigned int AadSfxToneID;

typedef void (*EndSequenceCallbackProc)();

typedef void (*Controller11CallbackProc)();

typedef unsigned long *DrawNonAnimatedSegmentFunc();

typedef unsigned long *DrawAnimatedModelFunc();

typedef unsigned long *DrawDisplayPolytopeListFunc();

typedef unsigned long *AdditionalDrawFunc();

typedef void BG_DisplayFunc();

typedef void RelocateInstObFunc();

typedef void (*VoidProc)();

typedef void (*StateHandler)();

typedef struct POLY_F4 POLY_F4;

typedef struct _SmallRotation SmallRotation;

typedef struct Camera Camera;

typedef struct DebugMenuLine DebugMenuLine;

typedef struct _ButtonTexture ButtonTexture;

typedef struct FontChar FontChar;

typedef struct _BigFileEntry BigFileEntry;

typedef struct _BigFileDirEntry BigFileDirEntry;

typedef struct _BigFileDir BigFileDir;

typedef struct _BigFile BigFile;

typedef struct _NonBlockLoadEntry NonBlockLoadEntry;

typedef struct _ReadQueueEntry ReadQueueEntry;

typedef struct _FX_MATRIX FX_MATRIX;

typedef struct _FX_PRIM FX_PRIM;

typedef struct BASIC_LINE_G2 BASIC_LINE_G2;

typedef struct _BASIC_G4 BASIC_G4;

typedef struct _BASIC_F4 BASIC_F4;

typedef struct __BubbleParams BubbleParams;

typedef struct _GenericParticleParams GenericParticleParams;

typedef struct _GenericRibbonParams GenericRibbonParams;

typedef struct _GenericGlowParams GenericGlowParams;

typedef struct _GenericLightningParams GenericLightningParams;

typedef struct _GenericBlastringParams GenericBlastringParams;

typedef struct _GenericFlashParams GenericFlashParams;

typedef struct _StreamUnit StreamUnit;

typedef struct XAFileInfo XAFileInfo;

typedef struct CdCommand CdCommand;

typedef struct VoiceCommand VoiceCommand;

typedef struct _LoadQueueEntry LoadQueueEntry;

typedef struct _BlockVramEntry BlockVramEntry;

typedef struct SavedBasic SavedBasic;

typedef struct _SavedIntro SavedIntro;

typedef struct SavedEvent SavedEvent;

typedef struct SavedBspTree SavedBspTree;

typedef struct EventBasicObject EventBasicObject;

typedef struct EventWildCardObject EventWildCardObject;

typedef struct ScriptPCode ScriptPCode;

typedef struct Event Event;

typedef struct EventPointers EventPointers;

typedef struct InstanceSpline InstanceSpline;

typedef struct Vector3d Vector3d;

typedef struct Rotation3d Rotation3d;

typedef struct InstanceObject InstanceObject;

typedef struct EventObject EventObject;

typedef struct SavedEventObject SavedEventObject;

typedef struct GameObject GameObject;

typedef struct SignalObject SignalObject;

typedef struct IntroObject IntroObject;

typedef struct InstanceAnimate InstanceAnimate;

typedef struct InstanceAnimateTexture InstanceAnimateTexture;

typedef struct ListObject ListObject;

typedef struct SubListObject SubListObject;

typedef struct TGroupObject TGroupObject;

typedef struct ConstrictInfo ConstrictInfo;

typedef struct CameraObject CameraObject;

typedef struct EventVmObject EventVmObject;

typedef struct AreaObject AreaObject;

typedef struct SoundObject SoundObject;

typedef struct StackType StackType;

typedef struct __ReaverSaveDat ReaverSaveData;

typedef enum option_ctrl_t option_ctrl_t;

typedef struct GameCheat GameCheat;

typedef struct debug_dispatch_t debug_dispatch_t;

typedef struct debug_format_t debug_format_t;

typedef void FX_PRIM_MODIFY_PROCESS();

typedef void FX_PROCESS();

typedef void FX_PARTICLE_PROCESS();

typedef void FX_GENERAL_PROCESS();

typedef void FX_SETUP();

typedef long TFract;

typedef void (*LoadReturnProc)();

typedef void (*BufferedLoadReturnProc)();

typedef void option_fn_t();

typedef int menu_fn_t();

typedef unsigned char CheatKey;

typedef void debug_dispatch_fn_t();

typedef struct _FXTracker FXTracker;

typedef struct SignalInfo SignalInfo;

typedef void BSPLeafFunc();

typedef void SignalGlobalValueFunc();

typedef long HandleSignalFunc();

typedef long SignalHandleFunc();

typedef void RelocateSignalFunc();

typedef struct _Vector Vector;

typedef struct _Triangle2D Triangle2D;

typedef struct _PCollideInfo PCollideInfo;

typedef struct _HNormal HNormal;

typedef struct _HFaceInfo HFaceInfo;

typedef struct _CollideInfo CollideInfo;

typedef struct _LCollideInfo LCollideInfo;

typedef struct SCollideInfo SCollideInfo;

typedef long CollideBoundFunc();

typedef struct CameraCollisionInfo CameraCollisionInfo;

typedef struct POLY_GT3 POLY_GT3;

typedef struct POLY_GT4 POLY_GT4;

typedef struct _PFace PFace;

typedef struct _PolytopeList PolytopeList;

typedef struct UVTYPE UVTYPE;

typedef struct POLY_G3_SEMITRANS POLY_G3_SEMITRANS;

typedef struct _POLY_NG4 POLY_NG4;

typedef struct _GT3ZVertexD3D_Type GT3ZVertexD3D;

typedef struct SP_SUBDIV_STRUCT SP_SUBDIV_STRUCT;

typedef void G2AppData;

typedef long LightFunc();

typedef struct CdlFILE CdlFILE;

typedef struct _LoadStatus LoadStatus;

typedef struct RedirectList RedirectList;

typedef struct DRAWENV DRAWENV;

typedef struct DISPENV DISPENV;

typedef struct BLK_FILL BLK_FILL;

typedef struct MainTracker MainTracker;

typedef struct AnalogueData AnalogueData;

typedef struct POLY_F4_SEMITRANS POLY_F4_SEMITRANS;

typedef struct PhysObProperties PhysObProperties;

typedef struct PhysObSplinter PhysObSplinter;

typedef struct PhysObWeaponAttributes PhysObWeaponAttributes;

typedef struct __PhysObProjectileData PhysObProjData;

typedef struct SwitchData SwitchData;

typedef struct LightTableEntry LightTableEntry;

typedef struct _PhysObLight PhysObLight;

typedef struct InterfaceItem InterfaceItem;

typedef struct POLY_FT4 POLY_FT4;

typedef struct FontTracker FontTracker;

typedef struct font_color_t font_color_t;

typedef struct FontPos FontPos;

typedef struct StreamUnitPortal StreamUnitPortal;

typedef void GlyphProcessFunction();

typedef struct JoypadMappingStruct JoypadMapping;

typedef struct ControllerPacket ControllerPacket;

typedef struct _G2EulerAngles_Type G2EulerAngles;

typedef enum _G2AnimCallbackMsg_Enum G2AnimCallbackMsg;

typedef struct _AnimSoundData_Type AnimSoundData;

typedef struct _InstanceHandle InstanceHandle;

typedef struct evCollideInstanceStatsData evCollideInstanceStatsData;

typedef struct INICommand INICommand;

typedef struct SavedIntroSmall SavedIntroSmall;

typedef struct SavedIntroSpline SavedIntroSpline;

typedef struct _SavedIntroWithIntro SavedIntroWithIntro;

typedef struct _MonsterAnim MonsterAnim;

typedef struct _MonsterIdle MonsterIdle;

typedef struct _MonsterBehavior MonsterBehavior;

typedef struct _MonsterSenses MonsterSenses;

typedef struct _MonsterAllegiances MonsterAllegiances;

typedef struct _MonsterAttackAttributes MonsterAttackAttributes;

typedef struct _MonsterMissile MonsterMissile;

typedef struct _MonsterCombatAttributes MonsterCombatAttributes;

typedef struct _MonsterSubAttributes MonsterSubAttributes;

typedef void (*processVert_t)();

typedef struct AadInitAttr AadInitAttr;

typedef struct MusicLoadInfo MusicLoadInfo;

typedef struct ObjectPeriodicSound ObjectPeriodicSound;

typedef struct ObjectEventSound ObjectEventSound;

typedef struct ObjectOneShotSound ObjectOneShotSound;

typedef struct SoundEffectChannel SoundEffectChannel;

typedef struct _SBSPLeaf SBSPLeaf;

typedef void asm_fn();

typedef long hook_fn_1();

typedef long hook_fn_2();

typedef long hook_fn_3();

typedef long hook_fn_4();

typedef long hook_fn_5();

typedef long hook_fn_6();

typedef long hook_fn_7();

typedef long hook_fn_8();

typedef struct _ObjectOwnerInfo ObjectOwnerInfo;

typedef struct ObjectAccess ObjectAccess;

typedef struct ObjectFunc ObjectFunc;

typedef struct evAnimationInstanceSwitchData evAnimationInstanceSwitchData;

typedef struct evControlSaveDataData evControlSaveDataData;

typedef struct GenericTune GenericTune;

typedef struct POLY_FT3 POLY_FT3;

typedef struct _Mirror Mirror;

typedef struct _FXHalvePlane FXHalvePlane;

typedef struct _FXGlowEffect FXGlowEffect;

typedef struct TransformAnimatedInstanceVerticesWork_t TransformAnimatedInstanceVerticesWork_t;

typedef struct FXSplinter FXSplinter;

typedef struct DR_TPAGE DR_TPAGE;

typedef struct _POLY_SG4 POLY_SG4;

typedef struct _FXGeneralEffect FXGeneralEffect;

typedef struct _FXRibbon FXRibbon;

typedef struct _FXParticle FXParticle;

typedef struct _FXLightBeam FXLightBeam;

typedef struct _FXBlastringEffect FXBlastringEffect;

typedef struct _FXForceFieldEffect FXForceFieldEffect;

typedef struct _FXLightning FXLightning;

typedef struct _FXFlash FXFlash;

typedef struct GenericFXObject GenericFXObject;

typedef struct evObjectDraftData evObjectDraftData;

typedef struct _GlyphTuneData GlyphTuneData;

typedef struct __ReaverData ReaverData;

typedef struct __ReaverTuneData ReaverTuneData;

typedef struct _POLY_TF4 POLY_TF4;

typedef struct _POLY_2G4 POLY_2G4;

typedef struct _POLY_2G4T POLY_2G4T;

typedef struct NewMemTracker NewMemTracker;

typedef struct AadVolume AadVolume;

typedef struct AadSequenceHdr AadSequenceHdr;

typedef struct AadTempo AadTempo;

typedef struct AadMemoryStruct AadMemoryStruct;

typedef struct AadSlotAttributes AadSlotAttributes;

typedef struct POLY_G4 POLY_G4;

typedef struct DR_AREA DR_AREA;

typedef struct evPositionData evPositionData;

typedef struct STracker STracker;

typedef struct FaceExtents FaceExtents;

typedef struct WarpRoom WarpRoom;

typedef struct PlanningNode PlanningNode;

typedef struct VramBuffer VramBuffer;

typedef struct evObjectData evObjectData;

typedef struct evPhysicsGravityData evPhysicsGravityData;

typedef struct evPhysicsSlideData evPhysicsSlideData;

typedef struct evObjectThrowData evObjectThrowData;

typedef struct evObjectBirthProjectileData evObjectBirthProjectileData;

typedef struct PhysObWeaponProperties PhysObWeaponProperties;

typedef struct PhysObInteractProperties PhysObInteractProperties;

typedef struct __PhysObProjectileProperties PhysObProjectileProperties;

typedef struct PhysObDraftProperties PhysObDraftProperties;

typedef struct PhysObSwitchProperties PhysObSwitchProperties;

typedef struct PhysObCollectibleProperties PhysObCollectibleProperties;

typedef struct PhysObAnimatedProperties PhysObAnimatedProperties;

typedef struct PhysObData PhysObData;

typedef struct BreakOffData BreakOffData;

typedef struct ProjectileData ProjectileData;

typedef struct _PhysObSaveData PhysObSaveData;

typedef struct __CharacterState CharacterState;

typedef struct evMonsterHitData evMonsterHitData;

typedef struct evMonsterThrownData evMonsterThrownData;

typedef struct evMonsterAlarmData evMonsterAlarmData;

typedef struct evMonsterSoulSuckData evMonsterSoulSuckData;

typedef struct evPhysicsDropOffData evPhysicsDropOffData;

typedef struct evPhysicsEdgeData evPhysicsEdgeData;

typedef struct evPhysicsWallCrawlData evPhysicsWallCrawlData;

typedef struct evPhysicsSwimData evPhysicsSwimData;

typedef struct evPhysicsDropHeightData evPhysicsDropHeightData;

typedef struct evPhysicsLinkedMoveData evPhysicsLinkedMoveData;

typedef struct evFXHitData evFXHitData;

typedef struct evAnimationControllerDoneData evAnimationControllerDoneData;

typedef struct evMonsterImpaleData evMonsterImpaleData;

typedef struct evObjectBreakOffData evObjectBreakOffData;

typedef struct evObjectAbsorbData evObjectAbsorbData;

typedef struct evObjectIdleData evObjectIdleData;

typedef struct evControlInitHangData evControlInitHangData;

typedef struct evControlInitIdleData evControlInitIdleData;

typedef struct evActionLookAroundData evActionLookAroundData;

typedef struct evActionPlayHostAnimationData evActionPlayHostAnimationData;

typedef struct evShadowSegmentData evShadowSegmentData;

typedef struct LitShaftProperties LitShaftProperties;

typedef struct SavedEventSmallVars SavedEventSmallVars;

typedef struct WaterLevelProcess WaterLevelProcess;

typedef struct EventInstanceObject EventInstanceObject;

typedef struct EventEventObject EventEventObject;

typedef struct EventTGroupObject EventTGroupObject;

typedef struct _PCodeStack PCodeStack;

typedef struct EventTimer EventTimer;

typedef struct SignalResetStruct SignalResetStruct;

typedef struct HintSystemStruct HintSystemStruct;

typedef struct _MonsterAttributes MonsterAttributes;

typedef struct _MonsterVars MonsterVars;

typedef struct _MonsterIR MonsterIR;

typedef struct burntTuneType burntTuneType;

typedef struct _MonsterState MonsterState;

typedef struct _MonsterStateChoice MonsterStateChoice;

typedef void (*MonsterFunc)();

typedef void (*MonsterDamageFunc)();

typedef struct __GlyphData GlyphData;

typedef struct _MonsterFunctionTable MonsterFunctionTable;

typedef struct MissileGraphics MissileGraphics;

typedef struct evMonsterHitTerrainData evMonsterHitTerrainData;

typedef struct evMonsterHitObjectData evMonsterHitObjectData;

typedef struct _MonsterSaveInfo MonsterSaveInfo;

typedef struct evPhysicsLOSData evPhysicsLOSData;

typedef struct RadarInfo RadarInfo;

typedef struct burntMessType burntMessType;

typedef struct bloodyMessType bloodyMessType;

typedef struct _G2AnimController_Type G2AnimController;

typedef struct _G2AnimSegKeyflagInfo_Type G2AnimSegKeyflagInfo;

typedef struct _G2AnimDecompressChannelInfo_Type G2AnimDecompressChannelInfo;

typedef struct _G2AnimSegValue_Type G2AnimSegValue;

typedef struct _G2AnimChanStatusBlockPool_Type G2AnimChanStatusBlockPool;

typedef struct _G2AnimControllerPool_Type G2AnimControllerPool;

typedef struct _G2AnimInterpStateBlockPool_Type G2AnimInterpStateBlockPool;

typedef void G2PoolMem;

typedef void (*G2AnimApplyControllerFn)();

typedef struct _walbossAttributes WalbossAttributes;

typedef struct PoolManagementData PoolManagementData;

typedef struct EnemyPlanData EnemyPlanData;

typedef struct _PlanCollideInfo PlanCollideInfo;

typedef struct _fth FindTerrainHit;

typedef struct _G2AppDataVM_Type G2AppDataVM;

typedef struct EnemyPlanSlotData EnemyPlanSlotData;

typedef struct _G2PoolMemPool_Type G2PoolMemPool;

typedef struct __Force Force;

typedef struct __Idle Idle;

typedef struct __VAnim VAnim;

typedef struct __SAnim SAnim;

typedef struct __AttackItem AttackItem;

typedef struct __ThrowItem ThrowItem;

typedef struct __EngagedInstance EngagedInstance;

typedef struct __FitPoint FitPoint;

typedef struct __SensoryData SensoryData;

typedef struct __Player Player;

typedef struct __CannedSound CannedSound;

typedef struct __AlarmData AlarmData;

typedef struct _SoundRamp SoundRamp;

typedef struct PlayerSaveData PlayerSaveData;

typedef struct RazielData RazielData;

typedef struct __razController razController;

typedef struct SavedInfoTracker SavedInfoTracker;

typedef struct SavedLevel SavedLevel;

typedef struct ActualSavedLevel ActualSavedLevel;

typedef struct SavedDeadDeadBits SavedDeadDeadBits;

typedef struct _GlobalSaveTracker GlobalSaveTracker;

typedef struct CdlFILTER CdlFILTER;

typedef struct SpuCommonAttr SpuCommonAttr;

typedef struct XAVoiceListEntry XAVoiceListEntry;

typedef struct XAVoiceTracker XAVoiceTracker;

typedef void (*VoiceCmdProc)();

typedef struct cinema_fn_table_t cinema_fn_table_t;

typedef int PlayCinematic_t();

typedef enum language_t language_t;

typedef enum localstr_t localstr_t;

typedef struct LocalizationHeader LocalizationHeader;

typedef enum menu_ctrl_t menu_ctrl_t;

typedef enum menu_sound_t menu_sound_t;

typedef struct menu_t menu_t;

typedef struct menu_format_t menu_format_t;

typedef struct menu_stack_t menu_stack_t;

typedef struct menu_item_t menu_item_t;

typedef struct Extents2d Extents2d;

typedef int menu_item_fn_t();

typedef void menu_draw_fn_t();

typedef struct menu_sound_entry_t menu_sound_entry_t;

typedef enum sfx_t sfx_t;

typedef enum bdepth bdepth;

typedef struct menuface_t menuface_t;

typedef struct mcpsx_t mcpsx_t;

typedef struct mcpsx_directory_t mcpsx_directory_t;

typedef enum mcpsx_err_t mcpsx_err_t;

typedef enum mcpsx_func_t mcpsx_func_t;

typedef enum mcpsx_sync_t mcpsx_sync_t;

typedef enum mcpsx_mode_t mcpsx_mode_t;

typedef struct mcard_t mcard_t;

typedef enum state_t fsmcard_t;

typedef enum mcard_status_t mcard_status_t;

typedef enum fsm_t fsm_t;

typedef struct mcmenu_t mcmenu_t;

typedef struct mcmenu_table_t mcmenu_table_t;

typedef struct memcard_t memcard_t;

typedef int mcard_filename_fn_t();

typedef struct DR_STP DR_STP;

typedef struct UW_ScreenXY UW_ScreenXY;

/* Begin typedefs which were autogenerated by TDR */

typedef int (*TDRFuncPtr_memcard_item1fn)();

typedef int (*TDRFuncPtr_menu_item_flags1fn)();

typedef int (*TDRFuncPtr_menu_item1fn)();

typedef int (*TDRFuncPtr_menu_push1fn)();

typedef int (*TDRFuncPtr_menu_set1fn)();

typedef long (*TDRFuncPtr_aadInstallUpdateFunc0updateFuncPtr)();

typedef long (*TDRFuncPtr_COLLIDE_LineWithBoxFace6collideBoundFunc)();

typedef long (*TDRFuncPtr_G2Anim_SetCallback1callback)();

typedef void (*TDRFuncPtr__FX_Build5fxSetup)();

typedef void (*TDRFuncPtr__FX_Build6fxProcess)();

typedef void (*TDRFuncPtr__FX_BuildNonSegmentedSplinters6fxSetup)();

typedef void (*TDRFuncPtr__FX_BuildNonSegmentedSplinters7fxProcess)();

typedef void (*TDRFuncPtr__FX_BuildSegmentedSplinters6fxSetup)();

typedef void (*TDRFuncPtr__FX_BuildSegmentedSplinters7fxProcess)();

typedef void (*TDRFuncPtr__FX_BuildSingleFaceWithModel6fxSetup)();

typedef void (*TDRFuncPtr__FX_BuildSingleFaceWithModel7fxProcess)();

typedef void (*TDRFuncPtr__FX_BuildSplinters6fxSetup)();

typedef void (*TDRFuncPtr__FX_BuildSplinters7fxProcess)();

typedef void (*TDRFuncPtr__GlyphSwitchProcess1process)();

typedef void (*TDRFuncPtr_aadInstallEndSequenceCallback)();

typedef void (*TDRFuncPtr_aadInstallEndSequenceCallback0callbackProc)();

typedef void (*TDRFuncPtr_aadLoadDynamicSoundBank4retProc)();

typedef void (*TDRFuncPtr_aadStartMasterVolumeFade2fadeCompleteCallback)();

typedef void (*TDRFuncPtr_aadStartMusicMasterVolFade2fadeCompleteCallback)();

typedef void (*TDRFuncPtr_FX_Build5fxSetup)();

typedef void (*TDRFuncPtr_FX_Build6fxProcess)();

typedef void (*TDRFuncPtr_FX_BuildSingleFaceWithModel6fxSetup)();

typedef void (*TDRFuncPtr_FX_BuildSingleFaceWithModel7fxProcess)();

typedef void (*TDRFuncPtr_FX_SimpleQuadSetup1fxProcess)();

typedef void (*TDRFuncPtr_MONSTER_ProcessClosestVerts2processVert_cb)();

typedef void (*TDRFuncPtr_MONTABLE_GetCleanUpFunc)();

typedef void (*TDRFuncPtr_MONTABLE_GetDamageEffectFunc)();

typedef void (*TDRFuncPtr_MONTABLE_GetInitFunc)();

typedef void (*TDRFuncPtr_StateSwitchStateCharacterData1NewProcess)();

typedef void (*TDRFuncPtr_StateSwitchStateCharacterDataDefault1NewProcess)();

typedef void (*TDRFuncPtr_StateSwitchStateData2NewProcess)();

typedef void (*TDRFuncPtr_StateSwitchStateDataDefault2NewProcess)();

/* End typedefs which were autogenerated by TDR */

/* End typedefs */

/* Begin external declarations */

extern struct DebugMenuLine mainMenu[8]; // offset 0x800C8418


static struct debug_dispatch_t debug_dispatch_table[5]; // offset 0x800C84D8


extern struct DebugMenuLine *currentMenu; // offset 0x800CDB3C


static char pauseFormatString[20]; // offset 0x800CDAB8


static char mainFormatString[20]; // offset 0x800CDACC


static char *the_format_string; // offset 0x800CDAE0


extern long menuPauseSel; // offset 0x800CDAE4


extern long debug_cameraMode; // offset 0x800CDAE8


extern long debugVoiceIndex; // offset 0x800CDAEC


extern unsigned long debugTimeMult; // offset 0x800CDAF0


extern long debugFogFar; // offset 0x800CDAF4


extern long debugFogNear; // offset 0x800CDAF8


extern long debugGameTime; // offset 0x800CDAFC


extern long debugFogRed; // offset 0x800CDB00


extern long debugFogGrn; // offset 0x800CDB04


extern long debugFogBlu; // offset 0x800CDB08


extern long debugHealthLevel; // offset 0x800CDB0C


extern long debugManaLevel; // offset 0x800CDB10


static long debugMenuChoice; // offset 0x800CDB40


static long cheatCodeLastCommand; // offset 0x800CDB44


static long CheatKeyMap[10]; // offset 0x800CDB48


static struct GameCheat GameCheats[23]; // offset 0x800CDB70


extern struct DebugMenuLine *the_previous_menu; // offset 0x800CDCE0


static int cem_x_base; // offset 0x800CDCE4


static int cem_y_base; // offset 0x800CDCE8


static int cem_cursor_width; // offset 0x800CDCEC


static int cem_line_width; // offset 0x800CDCF0


static int cem_line_leading; // offset 0x800CDCF4


static int cem_item_leading; // offset 0x800CDCF8


extern short AXIS_LENGTH; // offset 0x800CDE5C


extern struct DebugMenuLine standardMenu[1]; // offset 0x800CFCB0


extern struct DebugMenuLine pauseMenu[1]; // offset 0x800CFCC8


extern unsigned long debugRazielFlags1; // offset 0x800CFD40


extern unsigned long debugRazielFlags2; // offset 0x800CFD44


extern unsigned long debugRazielFlags3; // offset 0x800CFD48


extern short debugOrgFogFar; // offset 0x800CFC94


extern short debugOrgFogNear; // offset 0x800CFC54


extern unsigned char debugOrgFogRed; // offset 0x800CFC88


extern unsigned char debugOrgFogGrn; // offset 0x800CFC8C


extern unsigned char debugOrgFogBlu; // offset 0x800CFC90


extern struct DebugMenuLine goodiesMenu[1]; // offset 0x800CFBDC


extern struct DebugMenuLine debugSoundMenu[1]; // offset 0x800CFBAC


extern struct DebugMenuLine debugImbueSoulReaverMenu[1]; // offset 0x800CFD28


extern struct DebugMenuLine debugGlyphAbilitiesMenu[1]; // offset 0x800CFBC4


extern struct DebugMenuLine debugForgedAbilitiesMenu[1]; // offset 0x800CFBF4


extern struct DebugMenuLine debugSpecialAbilitiesMenu[1]; // offset 0x800CFC0C


extern struct DebugMenuLine debugHealthSystemMenu[1]; // offset 0x800CFC3C


extern struct DebugMenuLine debugRazielMenu[1]; // offset 0x800CFD4C


extern struct DebugMenuLine level2SelectMenu[1]; // offset 0x800CFD10


extern struct DebugMenuLine levelSelectMenu[1]; // offset 0x800CFCF8


extern struct DebugMenuLine statsMenu[1]; // offset 0x800CFC98


extern struct DebugMenuLine eventMenu[1]; // offset 0x800CFB64


extern struct DebugMenuLine BossAreasMenu[1]; // offset 0x800CFB7C


extern struct DebugMenuLine saveMenu[1]; // offset 0x800CFC70


extern struct DebugMenuLine mcardMenu[1]; // offset 0x800CFC24


extern struct DebugMenuLine fogMenu[1]; // offset 0x800CFC58


extern struct DebugMenuLine AIMenu[1]; // offset 0x800CFB94


extern struct DebugMenuLine cameraMenu[1]; // offset 0x800CFCE0


extern long SignalEndGame; // offset 0x800CDFBC


extern struct SignalInfo signalInfoList[27]; // offset 0x800CDFC0


extern long dyna_clddyna[8]; // offset 0x800CE104


extern long stat_clddyna[8]; // offset 0x800CE124


extern long dyna_cldstat[8]; // offset 0x800CE144


extern long collide_ignoreAttr; // offset 0x800CE164


extern long collide_acceptAttr; // offset 0x800CE168


extern struct _SVector collide_localPoint; // offset 0x800D0370


extern struct MATRIX *collide_lwTransform; // offset 0x800D0378


extern struct _SVector *collide_point0; // offset 0x800D0360


extern struct _SVector *collide_point1; // offset 0x800D0364


extern struct _SVector *collide_normal0; // offset 0x800D037C


extern struct _SVector *collide_normal1; // offset 0x800D0380


extern long collide_t0; // offset 0x800D0368


extern long collide_t1; // offset 0x800D036C


extern long camera_modeToIndex[15]; // offset 0x800CDF38


static short shorten_count; // offset 0x800CDF74


static short shorten_flag; // offset 0x800CDF76


static short camera_still; // offset 0x800CDF78


static long roll_target; // offset 0x800CDF7C


static long current_roll_amount; // offset 0x800CDF80


static int roll_inc; // offset 0x800CDF84


static short CameraLookStickyFlag; // offset 0x800CDF96


static short panic_count; // offset 0x800CDF9A


extern struct Camera theCamera; // offset 0x800CFE90


static struct MATRIX wcTransformX; // offset 0x800CFD74


static struct MATRIX wcTransform2X; // offset 0x800CFD94


static struct MATRIX cwTransform2X; // offset 0x800CFDB4


static short combat_cam_distance; // offset 0x800CFDD4


static short combat_cam_angle; // offset 0x800CFDD6


static short combat_cam_weight; // offset 0x800CFDD8


static short combat_cam_debounce; // offset 0x800CFDDA


extern int CameraCenterDelay; // offset 0x800D035C


static short CenterFlag; // offset 0x800CFDDC


static struct _SVector camera_shakeOffset[16]; // offset 0x800CFDE4


static struct _SVector camera_plane; // offset 0x800CFE64


static struct _SVector left_point; // offset 0x800CFE6C


static struct _SVector right_point; // offset 0x800CFE74


static short hitline_rot; // offset 0x800CFE7C


static long ACE_amount; // offset 0x800CFE80


static struct _Rotation splinecam_helprot; // offset 0x800CFE84


static short Camera_lookHeight; // offset 0x800CFE8C


static short Camera_lookDist; // offset 0x800CFE8E


extern long campoint_hw; // offset 0x800D0354


extern long campoint_hh; // offset 0x800D0358


extern long draw_belowSplit; // offset 0x800CE19C


extern short forceDrawInFront; // offset 0x800CE198


extern struct SVECTOR *face_v0; // offset 0x800CE1A0


extern struct SVECTOR *face_v1; // offset 0x800CE1A4


extern struct SVECTOR *face_v2; // offset 0x800CE1A8


extern struct SVECTOR *face_v01; // offset 0x800CE1AC


extern struct SVECTOR *face_v12; // offset 0x800CE1B0


extern struct SVECTOR *face_v20; // offset 0x800CE1B4


extern struct UVTYPE *face_uv0; // offset 0x800CE1B8


extern struct UVTYPE *face_uv1; // offset 0x800CE1BC


extern struct UVTYPE *face_uv2; // offset 0x800CE1C0


extern struct UVTYPE *face_uv01; // offset 0x800CE1C4


extern struct UVTYPE *face_uv12; // offset 0x800CE1C8


extern struct UVTYPE *face_uv20; // offset 0x800CE1CC


extern long modelDQP; // offset 0x800D0388


extern unsigned char *draw_stack; // offset 0x800D0384


extern struct SVECTOR shadow_vertices[11]; // offset 0x800D038C


static struct LightGroup default_lightgroup; // offset 0x800CE460


extern void *light_light; // offset 0x800D0D78


extern struct LightInfo *light_lightInfo; // offset 0x800D0D80


extern struct _Terrain *light_terrain; // offset 0x800D0D7C


extern char HashExtensions[7][4]; // offset 0x800CE4D0


static struct _LoadStatus loadStatus; // offset 0x800D0D84


extern int _ramsize; // offset 0x800CE558


extern int _stacksize; // offset 0x800CE55C


extern char mainOptionsInit; // offset 0x800CE560


extern short gEndGameNow; // offset 0x800CE562


extern int pcverify; // offset 0x800CE564


extern int nosound; // offset 0x800CE568


extern int nomusic; // offset 0x800CE56C


extern struct InterfaceItem InterfaceItems[6]; // offset 0x800CE570


extern long DoMainMenu; // offset 0x800CE6C0


extern long mainMenuMode; // offset 0x800CE6C4


extern long *mainMenuScreen; // offset 0x800CE6C8


extern long *controlsScreen; // offset 0x800CE6CC


extern short mainMenuFadeInTime; // offset 0x800CE6D0


extern short mainMenuFading; // offset 0x800CE6D2


extern struct GameTracker gameTrackerX; // offset 0x800D0FAC


extern struct DRAWENV draw[2]; // offset 0x800D0E6C


extern struct DISPENV disp[2]; // offset 0x800D0E40


extern struct BLK_FILL clearRect[2]; // offset 0x800D0F88


extern struct MainTracker mainTrackerX; // offset 0x800D121C


extern int devstation; // offset 0x800D0E68


extern unsigned long __timerEvent; // offset 0x800D0F84


extern short mainMenuTimeOut; // offset 0x800D0FA8


static int mainMenuSfx; // offset 0x800D0E1C


extern struct _ButtonTexture PauseButtons[4][2]; // offset 0x800D122C


extern struct _ButtonTexture BmenuLines[3][2]; // offset 0x800D0F24


extern struct _ButtonTexture BexitLine[2]; // offset 0x800D0E20


extern struct FontPos fontPos[72]; // offset 0x800C8500


extern char charMap[92][3]; // offset 0x800C8620


static struct font_color_t the_font_color_table[5]; // offset 0x800CE1D0


extern unsigned char fontTransTable[128]; // offset 0x800CE224


extern struct FontTracker fontTracker; // offset 0x800D05EC


extern struct _BlockVramEntry *FONT_vramBlock; // offset 0x800D05E4


extern unsigned short SpecialFogClut; // offset 0x800D05E8


static char fp_str[512]; // offset 0x800D03E4


extern long cameraMode; // offset 0x800CE2A4


extern long playerCameraMode; // offset 0x800CE2A8


extern struct Object *fontsObject; // offset 0x800CE2AC


extern struct _FXTracker *gFXT; // offset 0x800D0C44


extern unsigned long StackSave; // offset 0x800D0C54


static unsigned long (**gOt[2]); // offset 0x800D0C0C


extern char *primBase; // offset 0x800D0C5C


static struct _PrimPool (*primPool[2]); // offset 0x800D0C14


static struct _PolytopeList *gPolytopeList; // offset 0x800D0C1C


static struct _InstanceList *instanceList; // offset 0x800D0C20


static struct _InstancePool *instancePool; // offset 0x800D0C24


static struct _VertexPool *gVertexPool; // offset 0x800D0C28


static struct LightInfo *gLightInfo; // offset 0x800D0C2C


extern struct _FXTracker *fxTracker; // offset 0x800D0C58


static void *enemyPlanPool; // offset 0x800D0C30


static void *planningPool; // offset 0x800D0C34


static struct _ObjectTracker *GlobalObjects; // offset 0x800D0C38


extern short RENDER_currentStreamUnitID; // offset 0x800D0C4C


static short pause_redraw_flag; // offset 0x800D0C3C


static void *pause_redraw_prim; // offset 0x800D0C40


extern int InStreamUnit; // offset 0x800D0C48


extern unsigned long **hackOT; // offset 0x800D0C50


extern unsigned char dualshock_motors[2]; // offset 0x800C875C


extern unsigned char dualshock_align[6]; // offset 0x800C8760


static short align_flag; // offset 0x800CE358


static short dualshock_onflag; // offset 0x800CE35A


static int dualShock; // offset 0x800CE35C


extern unsigned short lastData[2]; // offset 0x800CE3A0


static int gpSaved; // offset 0x800CE3A4


extern int gamePadControllerOut; // offset 0x800D0D70


extern long gDummyCommand[2][2]; // offset 0x800D0D60


extern unsigned char controllerType[2]; // offset 0x800D0CC8


static int ignoreFind; // offset 0x800D0C64


extern struct ControllerPacket gpbuffer1; // offset 0x800D0CD0


extern struct ControllerPacket gpbuffer2; // offset 0x800D0D18


extern struct ControllerPacket readGPBuffer1; // offset 0x800D0CF4


extern struct ControllerPacket readGPBuffer2; // offset 0x800D0D3C


static long dualshock0_time; // offset 0x800D0C68


static long dualshock1_time; // offset 0x800D0C6C


extern unsigned short psxData[2]; // offset 0x800D0CCC


static long overrideData[2][5]; // offset 0x800D0C70


static long overrideCommand[2][5]; // offset 0x800D0CA0


extern int gSramFullAlarm; // offset 0x800CEA88


static int gSramFullMsgCnt; // offset 0x800CEA8C


static long objectOneShotTriggerTbl[3]; // offset 0x800CEA90


extern int gSramTotalUsed; // offset 0x800D1508


extern int gSramUsedBlocks; // offset 0x800D1504


extern int gSramTotalFree; // offset 0x800D150C


extern int gSramLargestFree; // offset 0x800D12BC


extern int gSramFreeBlocks; // offset 0x800D1500


extern struct SoundEffectChannel soundEffectChannelTbl[16]; // offset 0x800D12C0


extern struct MusicLoadInfo musicInfo; // offset 0x800D1510


extern char soundBuffer[13256]; // offset 0x800D5C08


extern struct LightInfo *sbsp_lightInfo; // offset 0x800D12AC


extern struct ObjectAccess objectAccess[28]; // offset 0x800C877C


extern struct ObjectFunc objectFunc[7]; // offset 0x800C885C


extern short identityMatrix[3][3]; // offset 0x800CE870


extern char (*selectMenuText[5]); // offset 0x800C8768


extern long gTimerEnabled; // offset 0x800CE8D4


extern long FRAC_BITS; // offset 0x800CEB3C


static struct _FXGeneralEffect *FX_GeneralEffectTracker; // offset 0x800CEB64


static struct _FXRibbon *FX_ConstrictRibbon; // offset 0x800CEB68


static short FX_ConstrictStage; // offset 0x800CEB6C


static struct _Instance *FX_ConstrictInstance; // offset 0x800CEB70


static short snow_amount; // offset 0x800CEB74


static short rain_amount; // offset 0x800CEB76


static short current_rain_fade; // offset 0x800CEB78


static struct _Instance *FX_reaver_instance; // offset 0x800CEB7C


static short windx; // offset 0x800CEBA4


static short windy; // offset 0x800CEBA6


static short wind_deg; // offset 0x800CEBA8


static short wind_speed; // offset 0x800CEBAA


extern long FX_ColorArray[6]; // offset 0x800CEBAC


static short Spiral_Number; // offset 0x800CEBC4


static short Spiral_Degrees; // offset 0x800CEBC6


static long Spiral_Current; // offset 0x800CEBC8


static long Spiral_Max; // offset 0x800CEBCC


static struct _Position FX_ConstrictPosition; // offset 0x800D1594


static struct _Position *FX_ConstrictPositionPtr; // offset 0x800D159C


static struct _FX_PRIM *FX_LastUsedPrim; // offset 0x800D15A0


static short FX_Frames; // offset 0x800D15A4


static short FX_TimeCount; // offset 0x800D15A6


static struct DVECTOR Spiral_Array[65]; // offset 0x800D15B4


static struct DVECTOR Spiral_OffsetP[64]; // offset 0x800D16C4


static struct DVECTOR Spiral_OffsetM[64]; // offset 0x800D17C4


static int Spiral_Glow_X; // offset 0x800D18C4


static int Spiral_Glow_Y; // offset 0x800D18C8


static int Spiral_Glow_Size; // offset 0x800D18CC


static int Spiral_Mod; // offset 0x800D18D0


extern struct _Normal gNormalList[244]; // offset 0x800C8970


extern short ecostable[3072]; // offset 0x800C9110


static long vmRealClock; // offset 0x800CEBD4


static long vmClock; // offset 0x800CEBD8


static struct NewMemTracker newMemTracker; // offset 0x800D18D4


static char midiDataByteCount[8]; // offset 0x800CED84


extern unsigned long aadGp; // offset 0x800CA910


static unsigned short aadHblanksPerUpdate[4]; // offset 0x800CECC0


static unsigned long aadUpdateRate[4]; // offset 0x800CECC8


extern struct AadMemoryStruct *aadMem; // offset 0x800CECD8


static int gDefragRequest; // offset 0x800CECDC


static unsigned long aadReverbModeSize[10]; // offset 0x800CED5C


static unsigned long __hblankEvent; // offset 0x800D18E8


static unsigned char *smfDataPtr; // offset 0x800D18EC


static unsigned long smfBytesLeft; // offset 0x800D18F0


static struct AadDynamicSfxLoadInfo *smfInfo; // offset 0x800D18F4


static struct AadProgramAtr aadDummySfxProgram; // offset 0x800CEF48


extern unsigned short aadPitchTable[85]; // offset 0x800CEF50


extern unsigned long aadStepsPerCent[85]; // offset 0x800CEFFC


extern short aadStepsPerSemitone[85]; // offset 0x800CF150


extern long CurrentWarpNumber; // offset 0x800CF1FC


extern struct WarpRoom WarpRoomArray[14]; // offset 0x800CF200


extern struct STracker StreamTracker; // offset 0x800D1920


extern struct STREAM_294fake WarpGateLoadInfo; // offset 0x800D18FC


extern struct _TFace *MORPH_SavedFace; // offset 0x800D1D20


extern struct Level *MORPH_SavedLevel; // offset 0x800D1910


extern short MORPH_Component[3]; // offset 0x800D1914


extern short MORPH_Track[2]; // offset 0x800D191C


static int s_zval; // offset 0x800D18F8


extern long RazielCommands[10]; // offset 0x800CF560


static int Pending; // offset 0x800CF588


static int Up; // offset 0x800CF58C


static int Down; // offset 0x800CF590


static struct _G2AnimAlphaTable_Type (*G2AlphaTables[7]); // offset 0x800CF594


static void *circWhere; // offset 0x800CF5B0


static char circBuf[4096]; // offset 0x800D2E2C


static int loadFromHead; // offset 0x800CF4E0


static int loadCanFail; // offset 0x800CF4E4


static int gCurDir; // offset 0x800CF4E8


static struct _LoadQueueEntry LoadQueue[40]; // offset 0x800D1D24


static struct _LoadQueueEntry *loadFree; // offset 0x800D2724


static struct _LoadQueueEntry *loadHead; // offset 0x800D2728


static struct _LoadQueueEntry *loadTail; // offset 0x800D272C


static int numLoads; // offset 0x800D2730


static short EventAbortLine; // offset 0x800CF534


static short EventJustRecievedTimer; // offset 0x800CF536


static long MoveCodeStreamExtra; // offset 0x800CF538


static long CurrentEventLine; // offset 0x800CF53C


static long EventCurrentEventIndex; // offset 0x800CF540


extern long WaterInUse; // offset 0x800CF544


extern long NumSignalsToReset; // offset 0x800CF548


extern long WaitingForVoiceNumber; // offset 0x800D2AF8


extern long WaitingToLoadSound; // offset 0x800D2A18


extern long WaitingToLoadSFX; // offset 0x800D2AF4


extern short MoviePlayed; // offset 0x800D2A6C


extern short MovieToPlay; // offset 0x800D2A70


static struct Event *currentEventInstance; // offset 0x800D2734


static struct ScriptPCode *currentActionScript; // offset 0x800D2738


static short *EventAbortedPosition; // offset 0x800D273C


extern long eventListNumInstances[20]; // offset 0x800D2A1C


extern struct _Instance (*eventListArray[20][10]); // offset 0x800D2B0C


static struct WaterLevelProcess WaterLevelArray[5]; // offset 0x800D2744


static struct Level *CurrentPuzzleLevel; // offset 0x800D27D0


static struct EventTimer eventTimerArray[24]; // offset 0x800D27D4


static long numActiveEventTimers; // offset 0x800D2A14


extern struct SignalResetStruct ResetSignalArray[16]; // offset 0x800D2A74


extern struct HintSystemStruct gHintSystem; // offset 0x800D2AFC


extern long VRAM_NeedToUpdateMorph; // offset 0x800CF5B4


extern short M_TrackClutUpdate; // offset 0x800D4804


extern struct _BlockVramEntry *openVramBlocks; // offset 0x800D482C


extern struct _BlockVramEntry *usedVramBlocks; // offset 0x800D4828


extern struct _BlockVramEntry vramBlockList[90]; // offset 0x800D3E2C


extern long numOfBlocksUsed; // offset 0x800D4808


extern struct _BlockVramEntry TerrainVramBlock; // offset 0x800D480C


static short FireReaverFlag; // offset 0x800D48B8


static short fx_going; // offset 0x800CF5CC


extern struct _FXBlastringEffect *fx_blastring; // offset 0x800CF5D0


static short HUD_Captured; // offset 0x800CF5D4


static short MANNA_Position; // offset 0x800D48BC


static short MANNA_Pos_vel; // offset 0x800D48BE


static short glyph_time; // offset 0x800D48C0


static short glyph_trigger; // offset 0x800D48C2


static short glyph_cost; // offset 0x800D48C4


static short HUD_Count; // offset 0x800D48C6


static short HUD_Count_Overall; // offset 0x800D48C8


static int blast_range; // offset 0x800D48CC


static int fx_radius_old; // offset 0x800D48D0


static int MANNA_Pickup_Time; // offset 0x800D48D4


static short HUD_Rotation; // offset 0x800D48D8


static short HUD_Rot_vel; // offset 0x800D48DA


static short HUD_Position; // offset 0x800D48DC


static short HUD_Pos_vel; // offset 0x800D48DE


static short HUD_State; // offset 0x800D48E0


static short HUD_Wait; // offset 0x800D48E2


static struct _SVector HUD_Cap_Pos; // offset 0x800D48E4


static struct _SVector HUD_Cap_Vel; // offset 0x800D48EC


static int warpDraw; // offset 0x800D48F4


static int glowdeg; // offset 0x800D48F8


extern int hud_warp_arrow_flash; // offset 0x800D48FC


extern struct _MonsterStateChoice HUMAN_StateChoiceTable[6]; // offset 0x800CA978


extern struct _MonsterFunctionTable HUMAN_FunctionTable; // offset 0x800CF5E0


static struct MissileGraphics MISSILE_objectTable[4]; // offset 0x800CA9C0


static struct MONTABLE_207fake functionChoiceTable[6]; // offset 0x800CA9F0


static struct _MonsterState DefaultStateTable[31]; // offset 0x800CAA20


static struct _MonsterFunctionTable DefaultFunctionTable; // offset 0x800CF68C


extern struct _MonsterStateChoice SLUAGH_StateChoiceTable[4]; // offset 0x800CAB18


extern struct _MonsterFunctionTable SLUAGH_FunctionTable; // offset 0x800CF6AC


extern struct _MonsterStateChoice SOUL_StateChoiceTable[7]; // offset 0x800CAB48


extern struct _MonsterFunctionTable SOUL_FunctionTable; // offset 0x800CF6D4


static int gNumMonsters; // offset 0x800CF62C


static int gNumSpectralMonsters; // offset 0x800CF630


static int gNumMaterialMonsters; // offset 0x800CF634


static struct RadarInfo radarDir[8]; // offset 0x800CF638


static unsigned char radarDirIndex[8]; // offset 0x800CF668


static struct _MonsterVars (*monsterSenseArray[40]); // offset 0x800D4900


static char monsterSensed[40]; // offset 0x800D49A0


static int lastSenseFrame; // offset 0x800D49C8


static struct burntTuneType burntTest; // offset 0x800CF674


static int _indexTable[16]; // offset 0x800CAC2C


static int _stepSizeTable[64]; // offset 0x800CAC6C


static struct _G2AnimChanStatusBlockPool_Type _chanStatusBlockPool; // offset 0x800D49CC


static struct _G2AnimSegValue_Type _segValues[80]; // offset 0x800D49DC


static struct _G2AnimControllerPool_Type _controllerPool; // offset 0x800D515C


static struct _G2AnimInterpStateBlockPool_Type _interpStateBlockPool; // offset 0x800D516C


extern struct _MonsterStateChoice VWRAITH_StateChoiceTable[7]; // offset 0x800CAB9C


extern struct _MonsterFunctionTable VWRAITH_FunctionTable; // offset 0x800CF6F4


extern struct _MonsterStateChoice WORSHIP_StateChoiceTable[5]; // offset 0x800CABF0


extern struct _MonsterFunctionTable WORSHIP_FunctionTable; // offset 0x800CF714


extern struct PoolManagementData *poolManagementData; // offset 0x800D51D0


static struct PoolManagementData poolManagementDataStorage; // offset 0x800D5184


static long timerArray[10]; // offset 0x800D51A4


static long timerIndex; // offset 0x800D51CC


static struct _fth directionList[6]; // offset 0x800CF75C


static struct _G2AppDataVM_Type _appDataVM; // offset 0x800D517C


static struct __Force *ExternalForces; // offset 0x800D51D4


static struct MATRIX TempMat; // offset 0x800D51E4


extern int LoopCounter; // offset 0x800CF774


static int WaterStatus; // offset 0x800CF778


static unsigned char PickupList[4]; // offset 0x800CF77C


static unsigned short cowlList[19]; // offset 0x800CF780


extern struct __razController controllerList[24]; // offset 0x800CF7A8


extern struct __CannedSound cannedSound[4]; // offset 0x800CF808


static int AlgoControlFlag; // offset 0x800CF858


static int ZoneDelta; // offset 0x800CF85C


extern struct __Idle **currentIdleList; // offset 0x800CF874


extern int currentIdleListCount; // offset 0x800CF878


extern int currentIdleCount; // offset 0x800CF87C


static int BlockCount; // offset 0x800CF880


static int LastBlock; // offset 0x800CF884


static struct __Player Raziel; // offset 0x800D5214


static struct RazielData *PlayerData; // offset 0x800D57D0


static struct _G2AnimInterpInfo_Type razInterpInfo[3]; // offset 0x800D57D4


static struct __FitPoint constrictData[32]; // offset 0x800D5804


static struct MATRIX TempMat; // offset 0x800D5884


static struct GameTracker *gameTracker; // offset 0x800D58A4


static long *PadData; // offset 0x800D58A8


static struct _G2SVector3_Type ExtraRotData; // offset 0x800D58AC


static struct _G2SVector3_Type *ExtraRot; // offset 0x800D58B4


extern int ControlFlag; // offset 0x800D59AC


static struct __Force ExternalForces[4]; // offset 0x800D58C4


static int PhysicsMode; // offset 0x800D5914


static struct __EngagedInstance EngagedList[15]; // offset 0x800D5924


static struct _Normal Norm; // offset 0x800D599C


extern int AutoFaceAngle; // offset 0x800D59A8


static int LastRC; // offset 0x800D59A4


extern struct _GlobalSaveTracker *GlobalSave; // offset 0x800CF8A8


static long numbufferedIntros; // offset 0x800CF8AC


static int the_header_size; // offset 0x800CF8B0


extern long SaveArraySize[10]; // offset 0x800CF8B4


static struct SavedInfoTracker savedInfoTracker; // offset 0x800D59C0


static struct SavedBasic (*bufferSavedIntroArray[64]); // offset 0x800D59D0


extern char monVersion[12]; // offset 0x800CF95C


extern struct XAVoiceTracker voiceTracker; // offset 0x800D5AD4


static struct cinema_fn_table_t *the_cine_table; // offset 0x800CAD90


static struct _ObjectTracker *the_cine_tracker; // offset 0x800CAD94


extern int StCdIntrFlag; // offset 0x800D8FD0


static struct LocalizationHeader *LocalizationTable; // offset 0x800CF994


static char **LocalStrings; // offset 0x800CF998


extern struct XAVoiceListEntry *voiceList; // offset 0x800CF99C


static enum language_t the_language; // offset 0x800D5BFC


static struct menu_sound_entry_t the_menu_sounds[6]; // offset 0x800CAD98


static char (*the_attract_movies[4]); // offset 0x800CADC8


static int MAIN_YPOS; // offset 0x800CFA48


static int PAUSE_YPOS; // offset 0x800CFA4C


static int MAIN_XPOS; // offset 0x800CFA50


static int MAIN_WIDTH; // offset 0x800CFA54


static int PAUSE_XPOS; // offset 0x800CFA58


static int PAUSE_WIDTH; // offset 0x800CFA5C


static int LINESKIP; // offset 0x800CFA60


static int ITEMSKIP; // offset 0x800CFA64


static int hack_reset_attract; // offset 0x800CFA68


static int StartGameFading; // offset 0x800CFA6C


static int hack_attract; // offset 0x800CFA70


static int hack_attract_movie; // offset 0x800CFA74


extern long *mainMenuScreen; // offset 0x4


static struct menuface_t MenuFaces[8]; // offset 0x800CFABC


static int hack_initialized; // offset 0x800CFB3C


static struct _ButtonTexture *FaceButtons; // offset 0x800D5C04


extern struct mcmenu_table_t the_mcmenu_table; // offset 0x24


static struct MEMCARD_216fake gMcmenu; // offset 0x800D8FD4


extern struct memcard_t gMemcard; // offset 0x800D91D4


static struct UW_ScreenXY *ScreenMorphArray; // offset 0x800CF894


static long UW_angle; // offset 0x800D59B0


static long UW_scalex; // offset 0x800D59B4


static long UW_scalexInc; // offset 0x800D59B8


static long UW_angleInc; // offset 0x800D59BC


// external declaration 'switchdataD_80010000' @0x80010000 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010000, len = 0x00000004
extern const pointer switchdataD_80010000;


// external declaration 'PTR_ARRAY_80010004' @0x80010004 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x80010004, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_80010004; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010020' @0x80010020 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80010020, len = 0x00000008
extern pointer[2] PTR_ARRAY_80010020; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010028' @0x80010028 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80010028, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80010028; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001003c' @0x8001003C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[4] @0x8001003C, len = 0x00000010
extern pointer[4] PTR_ARRAY_8001003c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001004c' @0x8001004C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8001004C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8001004c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_8001005c' @0x8001005C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[17] @0x8001005C, len = 0x00000044
extern undefined *32[17] switchdataD_8001005c;


// external declaration 'switchdataD_800100a4' @0x800100A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x800100A4, len = 0x00000008
extern pointer[2] switchdataD_800100a4;


// external declaration 'PTR_ARRAY_800100ac' @0x800100AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800100AC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800100ac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800100b8' @0x800100B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[7] @0x800100B8, len = 0x0000001C
extern pointer[7] PTR_ARRAY_800100b8; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800100d4' @0x800100D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800100D4, len = 0x00000004
extern const pointer switchdataD_800100d4;


// external declaration 'PTR_ARRAY_800100d8' @0x800100D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[9] @0x800100D8, len = 0x00000024
extern undefined *32[9] PTR_ARRAY_800100d8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800100fc' @0x800100FC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x800100FC, len = 0x00000008
extern pointer[2] PTR_ARRAY_800100fc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010104' @0x80010104 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80010104, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80010104; // WARNING: no name explicitly defined


// external declaration 'switchdataD_8001011c' @0x8001011C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[3] @0x8001011C, len = 0x0000000C
extern pointer[3] switchdataD_8001011c;


// external declaration 'PTR_ARRAY_80010128' @0x80010128 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80010128, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80010128; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010134' @0x80010134 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x80010134, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_80010134;


// external declaration 'switchdataD_80010174' @0x80010174 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80010174, len = 0x00000018
extern undefined *32[6] switchdataD_80010174;


// external declaration 'switchdataD_8001018c' @0x8001018C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[5] @0x8001018C, len = 0x00000014
extern pointer[5] switchdataD_8001018c;


// external declaration 'PTR_ARRAY_800101a0' @0x800101A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[9] @0x800101A0, len = 0x00000024
extern undefined *32[9] PTR_ARRAY_800101a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800101c4' @0x800101C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800101C4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800101c4;


// external declaration 'switchdataD_800101d0' @0x800101D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[24] @0x800101D0, len = 0x00000060
extern undefined *32[24] switchdataD_800101d0;


// external declaration 'PTR_ARRAY_80010230' @0x80010230 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[14] @0x80010230, len = 0x00000038
extern undefined *32[14] PTR_ARRAY_80010230;


// external declaration 'switchdataD_80010268' @0x80010268 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x80010268, len = 0x0000001C
extern undefined *32[7] switchdataD_80010268;


// external declaration 'PTR_ARRAY_80010284' @0x80010284 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80010284, len = 0x00000008
extern pointer[2] PTR_ARRAY_80010284; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001028c' @0x8001028C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001028C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001028c; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_7_80010298' @0x80010298 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010298, len = 0x00000004
extern const pointer PTR_caseD_7_80010298; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001029c' @0x8001029C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001029C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001029c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800102a8' @0x800102A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800102A8, len = 0x0000001C
extern undefined *32[7] switchdataD_800102a8;


// external declaration 'PTR_ARRAY_800102c4' @0x800102C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x800102C4, len = 0x00000008
extern pointer[2] PTR_ARRAY_800102c4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800102cc' @0x800102CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800102CC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800102cc; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_7_800102d8' @0x800102D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800102D8, len = 0x00000004
extern const pointer PTR_caseD_7_800102d8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800102dc' @0x800102DC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800102DC, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_800102dc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010304' @0x80010304 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80010304, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80010304; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010318' @0x80010318 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010318, len = 0x00000004
extern const pointer switchdataD_80010318;


// external declaration 'PTR_ARRAY_8001031c' @0x8001031C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001031C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001031c; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_0_80010328' @0x80010328 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010328, len = 0x00000004
extern const pointer PTR_caseD_0_80010328; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001032c' @0x8001032C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8001032C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8001032c; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_0_8001033c' @0x8001033C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x8001033C, len = 0x00000004
extern const pointer PTR_caseD_0_8001033c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010340' @0x80010340 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[12] @0x80010340, len = 0x00000030
extern undefined *32[12] PTR_ARRAY_80010340; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010370' @0x80010370 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80010370, len = 0x00000014
extern undefined *32[5] switchdataD_80010370;


// external declaration 'switchdataD_80010384' @0x80010384 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[4] @0x80010384, len = 0x00000010
extern pointer[4] switchdataD_80010384;


// external declaration 'PTR_ARRAY_80010394' @0x80010394 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x80010394, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_80010394; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800103b0' @0x800103B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800103B0, len = 0x00000014
extern undefined *32[5] switchdataD_800103b0;


// external declaration 'switchdataD_800103c8' @0x800103C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800103C8, len = 0x0000001C
extern undefined *32[7] switchdataD_800103c8;


// external declaration 'switchdataD_800103e8' @0x800103E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[39] @0x800103E8, len = 0x0000009C
extern pointer[39] switchdataD_800103e8;


// external declaration 'PTR_ARRAY_80010484' @0x80010484 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80010484, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80010484; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010498' @0x80010498 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[5] @0x80010498, len = 0x00000014
extern pointer[5] switchdataD_80010498;


// external declaration 'PTR_ARRAY_800104ac' @0x800104AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800104AC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800104ac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800104bc' @0x800104BC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[5] @0x800104BC, len = 0x00000014
extern pointer[5] PTR_ARRAY_800104bc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800104d0' @0x800104D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800104D0, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800104d0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800104e0' @0x800104E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[14] @0x800104E0, len = 0x00000038
extern pointer[14] PTR_ARRAY_800104e0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010518' @0x80010518 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80010518, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80010518; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010528' @0x80010528 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[11] @0x80010528, len = 0x0000002C
extern pointer[11] PTR_ARRAY_80010528; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010554' @0x80010554 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x80010554, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_80010554; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010570' @0x80010570 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[4] @0x80010570, len = 0x00000010
extern pointer[4] PTR_ARRAY_80010570; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010580' @0x80010580 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80010580, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80010580; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001058c' @0x8001058C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[10] @0x8001058C, len = 0x00000028
extern pointer[10] PTR_ARRAY_8001058c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800105b4' @0x800105B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x800105B4, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_800105b4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800105cc' @0x800105CC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x800105CC, len = 0x00000008
extern pointer[2] PTR_ARRAY_800105cc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800105d4' @0x800105D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800105D4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800105d4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800105e0' @0x800105E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[22] @0x800105E0, len = 0x00000058
extern pointer[22] PTR_ARRAY_800105e0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010638' @0x80010638 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80010638, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80010638; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010648' @0x80010648 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[9] @0x80010648, len = 0x00000024
extern pointer[9] PTR_ARRAY_80010648; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001066c' @0x8001066C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x8001066C, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_8001066c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010684' @0x80010684 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[10] @0x80010684, len = 0x00000028
extern pointer[10] PTR_ARRAY_80010684; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800106ac' @0x800106AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800106AC, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800106ac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800106c0' @0x800106C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[17] @0x800106C0, len = 0x00000044
extern pointer[17] PTR_ARRAY_800106c0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010704' @0x80010704 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80010704, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80010704; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_6_80010710' @0x80010710 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010710, len = 0x00000004
extern const pointer PTR_caseD_6_80010710; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010714' @0x80010714 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80010714, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80010714; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010728' @0x80010728 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[3] @0x80010728, len = 0x0000000C
extern pointer[3] PTR_ARRAY_80010728; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010738' @0x80010738 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[87] @0x80010738, len = 0x0000015C
extern pointer[87] switchdataD_80010738;


// external declaration 'PTR_ARRAY_80010894' @0x80010894 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80010894, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80010894; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800108a0' @0x800108A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[17] @0x800108A0, len = 0x00000044
extern pointer[17] PTR_ARRAY_800108a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800108e4' @0x800108E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800108E4, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800108e4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800108f4' @0x800108F4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[6] @0x800108F4, len = 0x00000018
extern pointer[6] PTR_ARRAY_800108f4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001090c' @0x8001090C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001090C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001090c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010918' @0x80010918 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[13] @0x80010918, len = 0x00000034
extern pointer[13] PTR_ARRAY_80010918; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001094c' @0x8001094C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8001094C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8001094c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001095c' @0x8001095C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[16] @0x8001095C, len = 0x00000040
extern pointer[16] PTR_ARRAY_8001095c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001099c' @0x8001099C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x8001099C, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_8001099c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800109b0' @0x800109B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[10] @0x800109B0, len = 0x00000028
extern pointer[10] PTR_ARRAY_800109b0; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800109d8' @0x800109D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[163] @0x800109D8, len = 0x0000028C
extern undefined *32[163] switchdataD_800109d8;


// external declaration 'switchdataD_80010c68' @0x80010C68 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[20] @0x80010C68, len = 0x00000050
extern undefined *32[20] switchdataD_80010c68;


// external declaration 'switchdataD_80010cb8' @0x80010CB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[29] @0x80010CB8, len = 0x00000074
extern pointer[29] switchdataD_80010cb8;


// external declaration 'switchdataD_80010d30' @0x80010D30 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010D30, len = 0x00000004
extern const pointer switchdataD_80010d30;


// external declaration 'PTR_ARRAY_80010d34' @0x80010D34 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80010D34, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80010d34; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010d44' @0x80010D44 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[24] @0x80010D44, len = 0x00000060
extern pointer[24] PTR_ARRAY_80010d44; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010da8' @0x80010DA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010DA8, len = 0x00000004
extern const pointer switchdataD_80010da8;


// external declaration 'PTR_ARRAY_80010dac' @0x80010DAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[27] @0x80010DAC, len = 0x0000006C
extern undefined *32[27] PTR_ARRAY_80010dac; // WARNING: no name explicitly defined


// external declaration 'PTR_caseD_d_80010e18' @0x80010E18 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80010E18, len = 0x00000004
extern const pointer PTR_caseD_d_80010e18; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80010e1c' @0x80010E1C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[91] @0x80010E1C, len = 0x0000016C
extern undefined *32[91] PTR_ARRAY_80010e1c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80010f88' @0x80010F88 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[47] @0x80010F88, len = 0x000000BC
extern pointer[47] switchdataD_80010f88;


// external declaration 'PTR_ARRAY_80011044' @0x80011044 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80011044, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80011044; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011058' @0x80011058 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[19] @0x80011058, len = 0x0000004C
extern pointer[19] PTR_ARRAY_80011058; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800110a4' @0x800110A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800110A4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800110a4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800110b0' @0x800110B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[5] @0x800110B0, len = 0x00000014
extern pointer[5] PTR_ARRAY_800110b0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800110c4' @0x800110C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800110C4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800110c4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800110d0' @0x800110D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[22] @0x800110D0, len = 0x00000058
extern pointer[22] PTR_ARRAY_800110d0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011128' @0x80011128 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80011128, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80011128; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011138' @0x80011138 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[51] @0x80011138, len = 0x000000CC
extern pointer[51] PTR_ARRAY_80011138; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011204' @0x80011204 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80011204, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80011204; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011210' @0x80011210 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[58] @0x80011210, len = 0x000000E8
extern pointer[58] switchdataD_80011210;


// external declaration 'PTR_ARRAY_800112f8' @0x800112F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800112F8, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_800112f8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011314' @0x80011314 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[32] @0x80011314, len = 0x00000080
extern pointer[32] PTR_ARRAY_80011314; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011398' @0x80011398 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011398, len = 0x00000004
extern const pointer switchdataD_80011398;


// external declaration 'PTR_ARRAY_8001139c' @0x8001139C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[14] @0x8001139C, len = 0x00000038
extern undefined *32[14] PTR_ARRAY_8001139c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800113d8' @0x800113D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800113D8, len = 0x00000014
extern undefined *32[5] switchdataD_800113d8;


// external declaration 'PTR_ARRAY_800113ec' @0x800113EC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[7] @0x800113EC, len = 0x0000001C
extern pointer[7] PTR_ARRAY_800113ec; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011408' @0x80011408 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[11] @0x80011408, len = 0x0000002C
extern pointer[11] switchdataD_80011408;


// external declaration 'PTR_ARRAY_80011434' @0x80011434 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[13] @0x80011434, len = 0x00000034
extern undefined *32[13] PTR_ARRAY_80011434; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011468' @0x80011468 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[3] @0x80011468, len = 0x0000000C
extern pointer[3] PTR_ARRAY_80011468; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011474' @0x80011474 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80011474, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80011474; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011488' @0x80011488 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[168] @0x80011488, len = 0x000002A0
extern pointer[168] switchdataD_80011488;


// external declaration 'switchdataD_80011728' @0x80011728 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[10] @0x80011728, len = 0x00000028
extern pointer[10] switchdataD_80011728;


// external declaration 'PTR_ARRAY_80011750' @0x80011750 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80011750, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80011750; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011760' @0x80011760 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[23] @0x80011760, len = 0x0000005C
extern pointer[23] PTR_ARRAY_80011760; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800117bc' @0x800117BC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800117BC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800117bc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800117cc' @0x800117CC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[12] @0x800117CC, len = 0x00000030
extern pointer[12] PTR_ARRAY_800117cc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800117fc' @0x800117FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800117FC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800117fc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001180c' @0x8001180C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[89] @0x8001180C, len = 0x00000164
extern pointer[89] PTR_ARRAY_8001180c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011970' @0x80011970 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[14] @0x80011970, len = 0x00000038
extern pointer[14] switchdataD_80011970;


// external declaration 'PTR_ARRAY_800119a8' @0x800119A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800119A8, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800119a8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800119bc' @0x800119BC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[24] @0x800119BC, len = 0x00000060
extern pointer[24] PTR_ARRAY_800119bc; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011a20' @0x80011A20 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[43] @0x80011A20, len = 0x000000AC
extern pointer[43] switchdataD_80011a20;


// external declaration 'switchdataD_80011ad0' @0x80011AD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[43] @0x80011AD0, len = 0x000000AC
extern undefined *32[43] switchdataD_80011ad0;


// external declaration 'switchdataD_80011b80' @0x80011B80 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80011B80, len = 0x00000010
extern undefined *32[4] switchdataD_80011b80;


// external declaration 'PTR_ARRAY_80011b90' @0x80011B90 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[20] @0x80011B90, len = 0x00000050
extern pointer[20] PTR_ARRAY_80011b90; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011be0' @0x80011BE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80011BE0, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80011be0; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011bf0' @0x80011BF0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80011BF0, len = 0x00000010
extern undefined *32[4] switchdataD_80011bf0;


// external declaration 'PTR_ARRAY_80011c00' @0x80011C00 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[21] @0x80011C00, len = 0x00000054
extern pointer[21] PTR_ARRAY_80011c00; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011c54' @0x80011C54 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80011C54, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80011c54; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011c60' @0x80011C60 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[28] @0x80011C60, len = 0x00000070
extern undefined *32[28] switchdataD_80011c60;


// external declaration 'switchdataD_80011cd0' @0x80011CD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80011CD0, len = 0x00000014
extern undefined *32[5] switchdataD_80011cd0;


// external declaration 'switchdataD_80011ce8' @0x80011CE8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[25] @0x80011CE8, len = 0x00000064
extern undefined *32[25] switchdataD_80011ce8;


// external declaration 'PTR_caseD_1a_80011d4c' @0x80011D4C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011D4C, len = 0x00000004
extern const pointer PTR_caseD_1a_80011d4c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011d50' @0x80011D50 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[21] @0x80011D50, len = 0x00000054
extern undefined *32[21] PTR_ARRAY_80011d50; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011da8' @0x80011DA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[6] @0x80011DA8, len = 0x00000018
extern pointer[6] switchdataD_80011da8;


// external declaration 'PTR_ARRAY_80011dc0' @0x80011DC0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80011DC0, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_80011dc0; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011dd8' @0x80011DD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x80011DD8, len = 0x0000001C
extern undefined *32[7] switchdataD_80011dd8;


// external declaration 'switchdataD_80011df8' @0x80011DF8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80011DF8, len = 0x00000018
extern undefined *32[6] switchdataD_80011df8;


// external declaration 'PTR_caseD_7_80011e10' @0x80011E10 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011E10, len = 0x00000004
extern const pointer PTR_caseD_7_80011e10; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011e18' @0x80011E18 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80011E18, len = 0x00000018
extern undefined *32[6] switchdataD_80011e18;


// external declaration 'PTR_caseD_7_80011e30' @0x80011E30 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011E30, len = 0x00000004
extern const pointer PTR_caseD_7_80011e30; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011e38' @0x80011E38 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80011E38, len = 0x0000000C
extern undefined *32[3] switchdataD_80011e38;


// external declaration 'PTR_ARRAY_80011e44' @0x80011E44 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80011E44, len = 0x00000008
extern pointer[2] PTR_ARRAY_80011e44; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011e4c' @0x80011E4C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80011E4C, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_80011e4c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011e64' @0x80011E64 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80011E64, len = 0x00000008
extern pointer[2] PTR_ARRAY_80011e64; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011e70' @0x80011E70 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80011E70, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80011e70;


// external declaration 'switchdataD_80011e84' @0x80011E84 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80011E84, len = 0x0000000C
extern undefined *32[3] switchdataD_80011e84;


// external declaration 'PTR_ARRAY_80011e90' @0x80011E90 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80011E90, len = 0x00000008
extern pointer[2] PTR_ARRAY_80011e90; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011e9c' @0x80011E9C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[37] @0x80011E9C, len = 0x00000094
extern undefined *32[37] switchdataD_80011e9c;


// external declaration 'PTR_caseD_25_80011f30' @0x80011F30 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011F30, len = 0x00000004
extern const pointer PTR_caseD_25_80011f30; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011f34' @0x80011F34 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[10] @0x80011F34, len = 0x00000028
extern undefined *32[10] PTR_ARRAY_80011f34; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011f5c' @0x80011F5C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011F5C, len = 0x00000004
extern const pointer switchdataD_80011f5c;


// external declaration 'PTR_ARRAY_80011f60' @0x80011F60 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[9] @0x80011F60, len = 0x00000024
extern undefined *32[9] PTR_ARRAY_80011f60; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011f84' @0x80011F84 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[17] @0x80011F84, len = 0x00000044
extern undefined *32[17] switchdataD_80011f84;


// external declaration 'PTR_caseD_17_80011fc8' @0x80011FC8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80011FC8, len = 0x00000004
extern const pointer PTR_caseD_17_80011fc8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80011fcc' @0x80011FCC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80011FCC, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80011fcc; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80011fe0' @0x80011FE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[34] @0x80011FE0, len = 0x00000088
extern undefined *32[34] switchdataD_80011fe0;


// external declaration 'switchdataD_80012068' @0x80012068 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80012068, len = 0x00000008
extern pointer[2] switchdataD_80012068;


// external declaration 'PTR_ARRAY_80012070' @0x80012070 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80012070, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80012070; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001207c' @0x8001207C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x8001207C, len = 0x00000008
extern pointer[2] PTR_ARRAY_8001207c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_80012088' @0x80012088 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x80012088, len = 0x00000008
extern pointer[2] switchdataD_80012088;


// external declaration 'PTR_ARRAY_80012090' @0x80012090 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80012090, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80012090; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001209c' @0x8001209C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[2] @0x8001209C, len = 0x00000008
extern pointer[2] PTR_ARRAY_8001209c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800120a4' @0x800120A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[77] @0x800120A4, len = 0x00000134
extern pointer[77] switchdataD_800120a4;


// external declaration 'switchdataD_800121d8' @0x800121D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[24] @0x800121D8, len = 0x00000060
extern undefined *32[24] switchdataD_800121d8;


// external declaration 'switchdataD_8001223c' @0x8001223C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001223C, len = 0x0000000C
extern undefined *32[3] switchdataD_8001223c;


// external declaration 'PTR_caseD_3_80012248' @0x80012248 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x80012248, len = 0x00000004
extern const pointer PTR_caseD_3_80012248; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001224c' @0x8001224C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x8001224C, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_8001224c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001226c' @0x8001226C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[7] @0x8001226C, len = 0x0000001C
extern pointer[7] PTR_ARRAY_8001226c; // WARNING: no name explicitly defined


// external declaration 'switchdataD_8001228c' @0x8001228C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[11] @0x8001228C, len = 0x0000002C
extern pointer[11] switchdataD_8001228c;


// external declaration 'PTR_ARRAY_800122b8' @0x800122B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800122B8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800122b8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800122c8' @0x800122C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer[4] @0x800122C8, len = 0x00000010
extern pointer[4] PTR_ARRAY_800122c8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800122dc' @0x800122DC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800122DC, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_800122dc; // WARNING: no name explicitly defined


// external declaration 'switchdataD_800122fc' @0x800122FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x800122FC, len = 0x00000018
extern undefined *32[6] switchdataD_800122fc;


// external declaration 'switchdataD_80012314' @0x80012314 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[11] @0x80012314, len = 0x0000002C
extern undefined *32[11] switchdataD_80012314;


// external declaration 'switchdataD_80012344' @0x80012344 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[48] @0x80012344, len = 0x000000C0
extern undefined *32[48] switchdataD_80012344;


// external declaration 'switchdataD_80012404' @0x80012404 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[10] @0x80012404, len = 0x00000028
extern undefined *32[10] switchdataD_80012404;


// external declaration 's_CINEMA__Version_number_is_wrong_8001242c' @0x8001242C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001242C, len = 0xFFFFFFFFFFFFFFFF
extern string s_CINEMA__Version_number_is_wrong_8001242c;


// external declaration 's_cinemax_8001246c' @0x8001246C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001246C, len = 0xFFFFFFFFFFFFFFFF
extern string s_cinemax_8001246c;


// external declaration 's_cinema_timeout_80012474' @0x80012474 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012474, len = 0xFFFFFFFFFFFFFFFF
extern string s_cinema_timeout_80012474;


// external declaration 's_CHRONOd_STR1_80012484' @0x80012484 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012484, len = 0xFFFFFFFFFFFFFFFF
extern string s_CHRONOd_STR1_80012484;


// external declaration 's_kain2objectmcardxmcardx_drm_80012494' @0x80012494 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012494, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2objectmcardxmcardx_drm_80012494;


// external declaration 's_sld_s_800124b4' @0x800124B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800124B4, len = 0xFFFFFFFFFFFFFFFF
extern string s_sld_s_800124b4;


// external declaration 's_sld_assertion_failure_800124c0' @0x800124C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800124C0, len = 0xFFFFFFFFFFFFFFFF
extern string s_sld_assertion_failure_800124c0;


// external declaration 's_unexpected_interrupt04x_80012510' @0x80012510 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012510, len = 0xFFFFFFFFFFFFFFFF
extern string s_unexpected_interrupt04x_80012510;


// external declaration 's_intr_timeout04x04x_8001252c' @0x8001252C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001252C, len = 0xFFFFFFFFFFFFFFFF
extern string s_intr_timeout04x04x_8001252c;


// external declaration 's_ResetGraphjtb08xenv08x_80012584' @0x80012584 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012584, len = 0xFFFFFFFFFFFFFFFF
extern string s_ResetGraphjtb08xenv08x_80012584;


// external declaration 's_ResetGraphd____800125a4' @0x800125A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800125A4, len = 0xFFFFFFFFFFFFFFFF
extern string s_ResetGraphd____800125a4;


// external declaration 's_SetGraphDebugleveldtyped_r_800125b8' @0x800125B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800125B8, len = 0xFFFFFFFFFFFFFFFF
extern string s_SetGraphDebugleveldtyped_r_800125b8;


// external declaration 's_SetGrapQued____800125e4' @0x800125E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800125E4, len = 0xFFFFFFFFFFFFFFFF
extern string s_SetGrapQued____800125e4; // WARNING: no name explicitly defined


// external declaration 's_DrawSyncCallback08x____800125f8' @0x800125F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800125F8, len = 0xFFFFFFFFFFFFFFFF
extern string s_DrawSyncCallback08x____800125f8;


// external declaration 's_SetDispMaskd____80012614' @0x80012614 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012614, len = 0xFFFFFFFFFFFFFFFF
extern string s_SetDispMaskd____80012614;


// external declaration 's_DrawSyncd____80012628' @0x80012628 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012628, len = 0xFFFFFFFFFFFFFFFF
extern string s_DrawSyncd____80012628;


// external declaration 's_sbad_RECT_8001263c' @0x8001263C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001263C, len = 0xFFFFFFFFFFFFFFFF
extern string s_sbad_RECT_8001263c;


// external declaration 's_dd-dd_80012648' @0x80012648 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012648, len = 0xFFFFFFFFFFFFFFFF
extern string s_dd-dd_80012648;


// external declaration 'PTR_DAT_8001265c' @0x8001265C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x8001265C, len = 0x00000004
extern pointer PTR_DAT_8001265c;


// external declaration 's_ClearImage_80012660' @0x80012660 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012660, len = 0xFFFFFFFFFFFFFFFF
extern string s_ClearImage_80012660;


// external declaration 's_ClearImage2_8001266c' @0x8001266C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001266C, len = 0xFFFFFFFFFFFFFFFF
extern string s_ClearImage2_8001266c; // WARNING: no name explicitly defined


// external declaration 's_LoadImage_80012678' @0x80012678 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012678, len = 0xFFFFFFFFFFFFFFFF
extern string s_LoadImage_80012678;


// external declaration 's_StoreImage_80012684' @0x80012684 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012684, len = 0xFFFFFFFFFFFFFFFF
extern string s_StoreImage_80012684; // WARNING: no name explicitly defined


// external declaration 's_MoveImage_80012690' @0x80012690 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012690, len = 0xFFFFFFFFFFFFFFFF
extern string s_MoveImage_80012690;


// external declaration 's_ClearOTag08xd____8001269c' @0x8001269C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001269C, len = 0xFFFFFFFFFFFFFFFF
extern string s_ClearOTag08xd____8001269c; // WARNING: no name explicitly defined


// external declaration 's_ClearOTagR08xd____800126b4' @0x800126B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800126B4, len = 0xFFFFFFFFFFFFFFFF
extern string s_ClearOTagR08xd____800126b4;


// external declaration 's_DrawOTag08x____800126cc' @0x800126CC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800126CC, len = 0xFFFFFFFFFFFFFFFF
extern string s_DrawOTag08x____800126cc;


// external declaration 's_PutDrawEnv08x____800126e0' @0x800126E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800126E0, len = 0xFFFFFFFFFFFFFFFF
extern string s_PutDrawEnv08x____800126e0;


// external declaration 's_DrawOTagEnv08x08x____800126f8' @0x800126F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800126F8, len = 0xFFFFFFFFFFFFFFFF
extern string s_DrawOTagEnv08x08x____800126f8; // WARNING: no name explicitly defined


// external declaration 's_PutDispEnv08x____80012714' @0x80012714 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012714, len = 0xFFFFFFFFFFFFFFFF
extern string s_PutDispEnv08x____80012714;


// external declaration 's_GPU_timeoutquedstat08xchc_8001272c' @0x8001272C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001272C, len = 0xFFFFFFFFFFFFFFFF
extern string s_GPU_timeoutquedstat08xchc_8001272c;


// external declaration 's_LoadImage2_80012760' @0x80012760 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012760, len = 0xFFFFFFFFFFFFFFFF
extern string s_LoadImage2_80012760; // WARNING: no name explicitly defined


// external declaration 's_VSync_timeout_8001276c' @0x8001276C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001276C, len = 0xFFFFFFFFFFFFFFFF
extern string s_VSync_timeout_8001276c;


// external declaration 'switchdataD_8001277c' @0x8001277C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x8001277C, len = 0x00000014
extern undefined *32[5] switchdataD_8001277c;


// external declaration 's_CdInit_Init_failed_800127ac' @0x800127AC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800127AC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdInit_Init_failed_800127ac;


// external declaration 's_s_path_level_d_error_800127cc' @0x800127CC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800127CC, len = 0xFFFFFFFFFFFFFFFF
extern string s_s_path_level_d_error_800127cc;


// external declaration 's_s_dir_was_not_found_800127e8' @0x800127E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800127E8, len = 0xFFFFFFFFFFFFFFFF
extern string s_s_dir_was_not_found_800127e8;


// external declaration 's_CdSearchFile_disc_error_80012800' @0x80012800 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012800, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdSearchFile_disc_error_80012800;


// external declaration 's_CdSearchFile_searching_s____8001281c' @0x8001281C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001281C, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdSearchFile_searching_s____8001281c;


// external declaration 's_s_found_8001283c' @0x8001283C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001283C, len = 0xFFFFFFFFFFFFFFFF
extern string s_s_found_8001283c;


// external declaration 's_s_not_found_80012848' @0x80012848 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012848, len = 0xFFFFFFFFFFFFFFFF
extern string s_s_not_found_80012848;


// external declaration 's_CD_newmedia_Read_error_in_cd_re_80012858' @0x80012858 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012858, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_newmedia_Read_error_in_cd_re_80012858;


// external declaration 's_CD001_80012884' @0x80012884 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012884, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD001_80012884;


// external declaration 's_CD_newmedia_Disc_format_error_i_8001288c' @0x8001288C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001288C, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_newmedia_Disc_format_error_i_8001288c;


// external declaration 's_CD_newmedia_Read_error_PT08x_800128bc' @0x800128BC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800128BC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_newmedia_Read_error_PT08x_800128bc;


// external declaration 's_CD_newmedia_sarching_dir___800128e0' @0x800128E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800128E0, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_newmedia_sarching_dir___800128e0;


// external declaration 's__08x04x04xs_80012900' @0x80012900 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012900, len = 0xFFFFFFFFFFFFFFFF
extern string s__08x04x04xs_80012900;


// external declaration 's_CD_newmedia_d_dir_entries_foun_80012914' @0x80012914 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012914, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_newmedia_d_dir_entries_foun_80012914;


// external declaration 's_CD_cachefile_dir_not_found_80012938' @0x80012938 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012938, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_cachefile_dir_not_found_80012938;


// external declaration 's_CD_cachefile_searching____80012958' @0x80012958 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012958, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_cachefile_searching____80012958;


// external declaration 'DAT_80012974' @0x80012974 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x80012974, len = 0x00000002
extern undefined2 DAT_80012974;


// external declaration 'DAT_80012978' @0x80012978 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x80012978, len = 0x00000002
extern undefined2 DAT_80012978;


// external declaration 'DAT_8001297a' @0x8001297A was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x8001297A, len = 0x00000001
extern undefined1 DAT_8001297a;


// external declaration 's__02x02x02x_8d_s_8001297c' @0x8001297C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x8001297C, len = 0xFFFFFFFFFFFFFFFF
extern string s__02x02x02x_8d_s_8001297c;


// external declaration 's_CD_cachefile_d_files_found_80012998' @0x80012998 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012998, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_cachefile_d_files_found_80012998;


// external declaration 'DAT_800129bc' @0x800129BC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800129BC, len = 0x00000001
extern undefined1 DAT_800129bc;


// external declaration 's_NULL_800129bd' @0x800129BD was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800129BD, len = 0xFFFFFFFFFFFFFFFF
extern string s_NULL_800129bd;


// external declaration 'switchdataD_800129cc' @0x800129CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800129CC, len = 0x00000020
extern undefined *32[8] switchdataD_800129cc;


// external declaration 'switchdataD_800129ec' @0x800129EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800129EC, len = 0x00000020
extern undefined *32[8] switchdataD_800129ec;


// external declaration 's_DMA_STATUS_ERROR_x_80012a0c' @0x80012A0C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012A0C, len = 0xFFFFFFFFFFFFFFFF
extern string s_DMA_STATUS_ERROR_x_80012a0c;


// external declaration 's_DMA_bus_error_code08x_80012a2c' @0x80012A2C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012A2C, len = 0xFFFFFFFFFFFFFFFF
extern string s_DMA_bus_error_code08x_80012a2c;


// external declaration 's_MADRd08x_80012a48' @0x80012A48 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012A48, len = 0xFFFFFFFFFFFFFFFF
extern string s_MADRd08x_80012a48;


// external declaration 's_NoIntr_80012b90' @0x80012B90 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012B90, len = 0xFFFFFFFFFFFFFFFF
extern string s_NoIntr_80012b90;


// external declaration 's_CD_timeout_80012b98' @0x80012B98 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012B98, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_timeout_80012b98;


// external declaration 's_ss_Syncs_Readys_80012ba8' @0x80012BA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012BA8, len = 0xFFFFFFFFFFFFFFFF
extern string s_ss_Syncs_Readys_80012ba8;


// external declaration 's_DiskError_80012bc4' @0x80012BC4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012BC4, len = 0xFFFFFFFFFFFFFFFF
extern string s_DiskError_80012bc4;


// external declaration 's_comscode02x02x_80012bd0' @0x80012BD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012BD0, len = 0xFFFFFFFFFFFFFFFF
extern string s_comscode02x02x_80012bd0;


// external declaration 's_CDROM_unknown_intr_80012bec' @0x80012BEC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012BEC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CDROM_unknown_intr_80012bec;


// external declaration 's_d_80012c00' @0x80012C00 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C00, len = 0xFFFFFFFFFFFFFFFF
extern string s_d_80012c00;


// external declaration 'switchdataD_80012c0c' @0x80012C0C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80012C0C, len = 0x00000014
extern undefined *32[5] switchdataD_80012c0c;


// external declaration 's_CD_sync_80012c20' @0x80012C20 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C20, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_sync_80012c20;


// external declaration 's_CD_ready_80012c28' @0x80012C28 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C28, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_ready_80012c28;


// external declaration 's_s____80012c34' @0x80012C34 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C34, len = 0xFFFFFFFFFFFFFFFF
extern string s_s____80012c34;


// external declaration 's_s_no_param_80012c3c' @0x80012C3C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C3C, len = 0xFFFFFFFFFFFFFFFF
extern string s_s_no_param_80012c3c;


// external declaration 's_CD_cw_80012c4c' @0x80012C4C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C4C, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_cw_80012c4c;


// external declaration 's_CD_init_80012c8c' @0x80012C8C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C8C, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_init_80012c8c;


// external declaration 's_addr08x_80012c98' @0x80012C98 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012C98, len = 0xFFFFFFFFFFFFFFFF
extern string s_addr08x_80012c98;


// external declaration 's_CD_datasync_80012ca4' @0x80012CA4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012CA4, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_datasync_80012ca4;


// external declaration 's_CdRead_sector_error_80012cbc' @0x80012CBC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012CBC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdRead_sector_error_80012cbc;


// external declaration 's_CdRead_Shell_open____80012cd4' @0x80012CD4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012CD4, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdRead_Shell_open____80012cd4;


// external declaration 's_CdRead_retry____80012cec' @0x80012CEC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012CEC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CdRead_retry____80012cec;


// external declaration 's_SPUTO_s_80012d0c' @0x80012D0C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012D0C, len = 0xFFFFFFFFFFFFFFFF
extern string s_SPUTO_s_80012d0c;


// external declaration 's_wait_reset_80012d1c' @0x80012D1C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012D1C, len = 0xFFFFFFFFFFFFFFFF
extern string s_wait_reset_80012d1c;


// external declaration 's_wait_wrdy_H_-_L_80012d2c' @0x80012D2C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012D2C, len = 0xFFFFFFFFFFFFFFFF
extern string s_wait_wrdy_H_-_L_80012d2c;


// external declaration 's_wait_dmaf_clearW_80012d40' @0x80012D40 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x80012D40, len = 0xFFFFFFFFFFFFFFFF
extern string s_wait_dmaf_clearW_80012d40;


// external declaration 'PTR_ARRAY_80015b0c' @0x80015B0C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80015B0C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80015b0c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80017c04' @0x80017C04 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80017C04, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80017c04; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80017d10' @0x80017D10 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80017D10, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80017d10; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800183b4' @0x800183B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800183B4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800183b4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001cc50' @0x8001CC50 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001CC50, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001cc50; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8001cd30' @0x8001CD30 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8001CD30, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8001cd30; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80020094' @0x80020094 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80020094, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80020094; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800200b4' @0x800200B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800200B4, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800200b4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800200d4' @0x800200D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800200D4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800200d4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80020178' @0x80020178 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x80020178, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_80020178; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80020194' @0x80020194 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80020194, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80020194; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800201c8' @0x800201C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800201C8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800201c8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800201dc' @0x800201DC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800201DC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800201dc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80020204' @0x80020204 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80020204, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80020204; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8002022c' @0x8002022C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8002022C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8002022c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80020254' @0x80020254 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80020254, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80020254; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800216c8' @0x800216C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800216C8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800216c8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800216f0' @0x800216F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800216F0, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800216f0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80021740' @0x80021740 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80021740, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80021740; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800217a8' @0x800217A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800217A8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800217a8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80021848' @0x80021848 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80021848, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80021848; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8002187c' @0x8002187C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8002187C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8002187c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800218b0' @0x800218B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800218B0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800218b0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800245a0' @0x800245A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800245A0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800245a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8002cbd8' @0x8002CBD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8002CBD8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8002cbd8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80032170' @0x80032170 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80032170, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80032170; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003218c' @0x8003218C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x8003218C, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_8003218c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800340a8' @0x800340A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800340A8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800340a8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800340ec' @0x800340EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800340EC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800340ec; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003412c' @0x8003412C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003412C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003412c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003608c' @0x8003608C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003608C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003608c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800360ac' @0x800360AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800360AC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800360ac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800360ec' @0x800360EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800360EC, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800360ec; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80036160' @0x80036160 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80036160, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80036160; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80036188' @0x80036188 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x80036188, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_80036188; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800361cc' @0x800361CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800361CC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800361cc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003681c' @0x8003681C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8003681C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8003681c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003683c' @0x8003683C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8003683C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8003683c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003cda4' @0x8003CDA4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8003CDA4, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8003cda4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003cdb8' @0x8003CDB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x8003CDB8, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_8003cdb8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003d78c' @0x8003D78C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003D78C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003d78c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003eae0' @0x8003EAE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003EAE0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003eae0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003ec60' @0x8003EC60 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003EC60, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003ec60; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003ecac' @0x8003ECAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003ECAC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003ecac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003ee74' @0x8003EE74 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003EE74, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003ee74; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003eeb8' @0x8003EEB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003EEB8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003eeb8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003ef00' @0x8003EF00 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003EF00, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003ef00; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003f254' @0x8003F254 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003F254, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003f254; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003f2a0' @0x8003F2A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003F2A0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003f2a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003f77c' @0x8003F77C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003F77C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003f77c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003f8d4' @0x8003F8D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003F8D4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003f8d4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003f920' @0x8003F920 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003F920, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003f920; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003fb9c' @0x8003FB9C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8003FB9C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8003fb9c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003fbb8' @0x8003FBB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003FBB8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003fbb8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003fdd0' @0x8003FDD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8003FDD0, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8003fdd0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8003fdec' @0x8003FDEC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8003FDEC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8003fdec; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80042c10' @0x80042C10 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80042C10, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80042c10; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80042c54' @0x80042C54 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80042C54, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80042c54; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80042c7c' @0x80042C7C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80042C7C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80042c7c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80042c94' @0x80042C94 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80042C94, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80042c94; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80042d10' @0x80042D10 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80042D10, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80042d10; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800431b0' @0x800431B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800431B0, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800431b0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80043524' @0x80043524 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80043524, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80043524; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80043d44' @0x80043D44 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80043D44, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80043d44; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004552c' @0x8004552C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x8004552C, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_8004552c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800455a4' @0x800455A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800455A4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800455a4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800456d4' @0x800456D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800456D4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800456d4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80045700' @0x80045700 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80045700, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80045700; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80046b24' @0x80046B24 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80046B24, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80046b24; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80047014' @0x80047014 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80047014, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80047014; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004702c' @0x8004702C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004702C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004702c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80047084' @0x80047084 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80047084, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80047084; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800473f8' @0x800473F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800473F8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800473f8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004749c' @0x8004749C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004749C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004749c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80047524' @0x80047524 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80047524, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80047524; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004754c' @0x8004754C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004754C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004754c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80049694' @0x80049694 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80049694, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80049694; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80049898' @0x80049898 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80049898, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80049898; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800498cc' @0x800498CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800498CC, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800498cc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80049900' @0x80049900 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80049900, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80049900; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80049950' @0x80049950 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80049950, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80049950; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80049984' @0x80049984 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80049984, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80049984; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004a33c' @0x8004A33C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8004A33C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8004a33c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004a350' @0x8004A350 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004A350, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004a350; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004a384' @0x8004A384 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004A384, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004a384; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004a480' @0x8004A480 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004A480, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004a480; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ac00' @0x8004AC00 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8004AC00, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8004ac00; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ac14' @0x8004AC14 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8004AC14, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8004ac14; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ac70' @0x8004AC70 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004AC70, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ac70; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ad0c' @0x8004AD0C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004AD0C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ad0c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004e2e8' @0x8004E2E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004E2E8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004e2e8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004e644' @0x8004E644 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004E644, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004e644; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004e6b4' @0x8004E6B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8004E6B4, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8004e6b4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004eb10' @0x8004EB10 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x8004EB10, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_8004eb10; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004eb2c' @0x8004EB2C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004EB2C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004eb2c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ebac' @0x8004EBAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004EBAC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ebac; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ebbc' @0x8004EBBC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8004EBBC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8004ebbc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ebf8' @0x8004EBF8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004EBF8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ebf8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ec50' @0x8004EC50 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004EC50, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ec50; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ec68' @0x8004EC68 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004EC68, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ec68; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ecd8' @0x8004ECD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004ECD8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ecd8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004ed2c' @0x8004ED2C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004ED2C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004ed2c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004f06c' @0x8004F06C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x8004F06C, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_8004f06c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004f224' @0x8004F224 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004F224, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004f224; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8004f344' @0x8004F344 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8004F344, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8004f344; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800515e0' @0x800515E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800515E0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800515e0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800515f4' @0x800515F4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800515F4, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800515f4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8005161c' @0x8005161C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8005161C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8005161c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80056564' @0x80056564 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80056564, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80056564; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80057930' @0x80057930 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80057930, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80057930; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80057f6c' @0x80057F6C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80057F6C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80057f6c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80057fb8' @0x80057FB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80057FB8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80057fb8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800583f8' @0x800583F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800583F8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800583f8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8005843c' @0x8005843C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8005843C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8005843c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8005de5c' @0x8005DE5C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8005DE5C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8005de5c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80062b94' @0x80062B94 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80062B94, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80062b94; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80068cb4' @0x80068CB4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80068CB4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80068cb4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80068dc4' @0x80068DC4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80068DC4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80068dc4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069c58' @0x80069C58 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80069C58, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80069c58; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069c70' @0x80069C70 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80069C70, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80069c70; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069cb0' @0x80069CB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80069CB0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80069cb0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069cc8' @0x80069CC8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80069CC8, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80069cc8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069d08' @0x80069D08 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80069D08, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80069d08; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069d20' @0x80069D20 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80069D20, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80069d20; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80069d80' @0x80069D80 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80069D80, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80069d80; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006d618' @0x8006D618 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006D618, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006d618; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006d684' @0x8006D684 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006D684, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006d684; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006e48c' @0x8006E48C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006E48C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006e48c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006f578' @0x8006F578 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006F578, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006f578; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006f5b0' @0x8006F5B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006F5B0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006f5b0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006f5e8' @0x8006F5E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006F5E8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006f5e8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006f6a0' @0x8006F6A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006F6A0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006f6a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8006f6d8' @0x8006F6D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8006F6D8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8006f6d8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007028c' @0x8007028C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8007028C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8007028c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800739b8' @0x800739B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800739B8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800739b8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800739fc' @0x800739FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800739FC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800739fc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80073ea0' @0x80073EA0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80073EA0, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80073ea0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80075d4c' @0x80075D4C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x80075D4C, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_80075d4c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007a9bc' @0x8007A9BC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8007A9BC, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8007a9bc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007af5c' @0x8007AF5C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8007AF5C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8007af5c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007af70' @0x8007AF70 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8007AF70, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8007af70; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007c5c8' @0x8007C5C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8007C5C8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8007c5c8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8007ee74' @0x8007EE74 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8007EE74, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8007ee74; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80080d24' @0x80080D24 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80080D24, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80080d24; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800810f8' @0x800810F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800810F8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800810f8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800823b0' @0x800823B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800823B0, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800823b0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800826c4' @0x800826C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x800826C4, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_800826c4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008278c' @0x8008278C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8008278C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8008278c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80083a7c' @0x80083A7C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80083A7C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80083a7c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80084410' @0x80084410 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80084410, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80084410; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80084554' @0x80084554 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80084554, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80084554; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80084564' @0x80084564 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80084564, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80084564; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80084578' @0x80084578 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x80084578, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_80084578; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008458c' @0x8008458C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8008458C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8008458c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800845a0' @0x800845A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800845A0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800845a0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800845c0' @0x800845C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800845C0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800845c0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80087148' @0x80087148 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80087148, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80087148; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800872f0' @0x800872F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800872F0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800872f0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80087380' @0x80087380 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80087380, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80087380; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008739c' @0x8008739C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x8008739C, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_8008739c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80089a84' @0x80089A84 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80089A84, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80089a84; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008b884' @0x8008B884 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8008B884, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8008b884; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008bfd8' @0x8008BFD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x8008BFD8, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_8008bfd8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008bff0' @0x8008BFF0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8008BFF0, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8008bff0; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8008e5d4' @0x8008E5D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8008E5D4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8008e5d4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800968b8' @0x800968B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800968B8, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_800968b8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80096a78' @0x80096A78 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80096A78, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80096a78; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80096f64' @0x80096F64 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80096F64, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80096f64; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800981fc' @0x800981FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800981FC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800981fc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80098554' @0x80098554 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80098554, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80098554; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80098b7c' @0x80098B7C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80098B7C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80098b7c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_80099078' @0x80099078 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x80099078, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_80099078; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800990c4' @0x800990C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800990C4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800990c4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_8009d4c8' @0x8009D4C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x8009D4C8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_8009d4c8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a2d08' @0x800A2D08 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A2D08, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a2d08; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a364c' @0x800A364C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A364C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a364c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a367c' @0x800A367C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A367C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a367c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a3694' @0x800A3694 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A3694, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a3694; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a3cfc' @0x800A3CFC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[5] @0x800A3CFC, len = 0x00000014
extern undefined *32[5] PTR_ARRAY_800a3cfc; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a57c4' @0x800A57C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A57C4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a57c4; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a585c' @0x800A585C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A585C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a585c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800a6510' @0x800A6510 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800A6510, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800a6510; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800ae110' @0x800AE110 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800AE110, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800ae110; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800b4bd8' @0x800B4BD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800B4BD8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800b4bd8; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800c2350' @0x800C2350 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800C2350, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800c2350; // WARNING: no name explicitly defined


// external declaration 'DAT_800c7030' @0x800C7030 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800C7030, len = 0x00000004
extern undefined4 DAT_800c7030;


// external declaration 'DAT_800c7034' @0x800C7034 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800C7034, len = 0x00000004
extern undefined4 DAT_800c7034;


// external declaration 'DAT_800c7048' @0x800C7048 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800C7048, len = 0x00000004
extern undefined4 DAT_800c7048;


// external declaration 'DAT_800c704c' @0x800C704C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800C704C, len = 0x00000004
extern undefined4 DAT_800c704c;


// external declaration 'PTR_ARRAY_800c7b6c' @0x800C7B6C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800C7B6C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800c7b6c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800c7c14' @0x800C7C14 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800C7C14, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800c7c14; // WARNING: no name explicitly defined


// external declaration 'FontPos_ARRAY_800c8524' @0x800C8524 was found in the data exported from Ghidra, but not the original debug symbol data.
// FontPos[12] @0x800C8524, len = 0x00000030
extern FontPos[12] FontPos_ARRAY_800c8524;


// external declaration 'FontPos_ARRAY_800c8554' @0x800C8554 was found in the data exported from Ghidra, but not the original debug symbol data.
// FontPos[4] @0x800C8554, len = 0x00000010
extern FontPos[4] FontPos_ARRAY_800c8554;


// external declaration 'FontPos_ARRAY_800c8564' @0x800C8564 was found in the data exported from Ghidra, but not the original debug symbol data.
// FontPos[8] @0x800C8564, len = 0x00000020
extern FontPos[8] FontPos_ARRAY_800c8564;


// external declaration 'FontPos_ARRAY_800c8584' @0x800C8584 was found in the data exported from Ghidra, but not the original debug symbol data.
// FontPos[39] @0x800C8584, len = 0x0000009C
extern FontPos[39] FontPos_ARRAY_800c8584;


// external declaration 'PTR_handle_line_type_bit_800c8720' @0x800C8720 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800C8720, len = 0x00000004
extern pointer PTR_handle_line_type_bit_800c8720;


// external declaration '_Normal_ARRAY_800c8978' @0x800C8978 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal[5] @0x800C8978, len = 0x00000028
extern _Normal[5] _Normal_ARRAY_800c8978;


// external declaration '_Normal_ARRAY_800c89a0' @0x800C89A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal[4] @0x800C89A0, len = 0x00000020
extern _Normal[4] _Normal_ARRAY_800c89a0;


// external declaration '_Normal_800c89c0' @0x800C89C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C89C0, len = 0x00000008
extern struct _Normal _Normal_800c89c0;


// external declaration '_Normal_800c89c8' @0x800C89C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C89C8, len = 0x00000008
extern struct _Normal _Normal_800c89c8;


// external declaration '_Normal_ARRAY_800c89d0' @0x800C89D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal[26] @0x800C89D0, len = 0x000000D0
extern _Normal[26] _Normal_ARRAY_800c89d0;


// external declaration '_Normal_800c8aa0' @0x800C8AA0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C8AA0, len = 0x00000008
extern struct _Normal _Normal_800c8aa0;


// external declaration '_Normal_800c8aa8' @0x800C8AA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C8AA8, len = 0x00000008
extern struct _Normal _Normal_800c8aa8;


// external declaration '_Normal_800c8ab0' @0x800C8AB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C8AB0, len = 0x00000008
extern struct _Normal _Normal_800c8ab0;


// external declaration '_Normal_800c8ab8' @0x800C8AB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C8AB8, len = 0x00000008
extern struct _Normal _Normal_800c8ab8;


// external declaration '_Normal_ARRAY_800c8ac0' @0x800C8AC0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal[30] @0x800C8AC0, len = 0x000000F0
extern _Normal[30] _Normal_ARRAY_800c8ac0;


// external declaration '_Normal_800c8bb0' @0x800C8BB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal @0x800C8BB0, len = 0x00000008
extern struct _Normal _Normal_800c8bb0;


// external declaration '_Normal_ARRAY_800c8bb8' @0x800C8BB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// _Normal[171] @0x800C8BB8, len = 0x00000558
extern _Normal[171] _Normal_ARRAY_800c8bb8;


// external declaration 'SHORT_ARRAY_800c9354' @0x800C9354 was found in the data exported from Ghidra, but not the original debug symbol data.
// short[1024] @0x800C9354, len = 0x00000800
extern short[1024] SHORT_ARRAY_800c9354;


// external declaration 'SHORT_ARRAY_800c9b54' @0x800C9B54 was found in the data exported from Ghidra, but not the original debug symbol data.
// short[256] @0x800C9B54, len = 0x00000200
extern short[256] SHORT_ARRAY_800c9b54;


// external declaration 'SHORT_ARRAY_800c9d54' @0x800C9D54 was found in the data exported from Ghidra, but not the original debug symbol data.
// short[256] @0x800C9D54, len = 0x00000200
extern short[256] SHORT_ARRAY_800c9d54;


// external declaration 'SHORT_ARRAY_800c9f54' @0x800C9F54 was found in the data exported from Ghidra, but not the original debug symbol data.
// short[1246] @0x800C9F54, len = 0x000009BC
extern short[1246] SHORT_ARRAY_800c9f54;


// external declaration '_MonsterStateChoice_ARRAY_800cab54' @0x800CAB54 was found in the data exported from Ghidra, but not the original debug symbol data.
// _MonsterStateChoice[6] @0x800CAB54, len = 0x00000048
extern _MonsterStateChoice[6] _MonsterStateChoice_ARRAY_800cab54;


// external declaration 'INT_800cac30' @0x800CAC30 was found in the data exported from Ghidra, but not the original debug symbol data.
// int @0x800CAC30, len = 0x00000004
extern int INT_800cac30;


// external declaration 'INT_800cac34' @0x800CAC34 was found in the data exported from Ghidra, but not the original debug symbol data.
// int @0x800CAC34, len = 0x00000004
extern int INT_800cac34;


// external declaration 'INT_800cac38' @0x800CAC38 was found in the data exported from Ghidra, but not the original debug symbol data.
// int @0x800CAC38, len = 0x00000004
extern int INT_800cac38;


// external declaration 'INT_ARRAY_800cac3c' @0x800CAC3C was found in the data exported from Ghidra, but not the original debug symbol data.
// int[12] @0x800CAC3C, len = 0x00000030
extern int[12] INT_ARRAY_800cac3c;


// external declaration 'DAT_800cafac' @0x800CAFAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CAFAC, len = 0x00000002
extern undefined2 DAT_800cafac;


// external declaration 'DAT_800cafb0' @0x800CAFB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CAFB0, len = 0x00000004
extern undefined4 DAT_800cafb0;


// external declaration 'DAT_800cafb4' @0x800CAFB4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CAFB4, len = 0x00000004
extern undefined4 DAT_800cafb4;


// external declaration 'DAT_800cafb8' @0x800CAFB8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CAFB8, len = 0x00000004
extern undefined4 DAT_800cafb8;


// external declaration 'DAT_800cafd4' @0x800CAFD4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CAFD4, len = 0x00000004
extern undefined4 DAT_800cafd4;


// external declaration 'DAT_800cafd8' @0x800CAFD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CAFD8, len = 0x00000004
extern undefined4 DAT_800cafd8;


// external declaration 's_Library_Programs_c_1993-1997_S_800cb01c' @0x800CB01C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CB01C, len = 0xFFFFFFFFFFFFFFFF
extern string s_Library_Programs_c_1993-1997_S_800cb01c; // WARNING: no name explicitly defined


// external declaration 'DAT_800cb074' @0x800CB074 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CB074, len = 0x00000002
extern undefined2 DAT_800cb074;


// external declaration 'DAT_800cb076' @0x800CB076 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CB076, len = 0x00000002
extern undefined2 DAT_800cb076;


// external declaration 'DAT_800cb078' @0x800CB078 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CB078, len = 0x00000004
extern undefined4 DAT_800cb078;


// external declaration 'DAT_800cb0a4' @0x800CB0A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CB0A4, len = 0x00000002
extern undefined2 DAT_800cb0a4;


// external declaration 'DAT_800cb0a6' @0x800CB0A6 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CB0A6, len = 0x00000002
extern undefined2 DAT_800cb0a6;


// external declaration 'DAT_800cb0a8' @0x800CB0A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CB0A8, len = 0x00000004
extern undefined4 DAT_800cb0a8;


// external declaration 'DAT_800cb0b0' @0x800CB0B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CB0B0, len = 0x00000004
extern undefined4 DAT_800cb0b0;


// external declaration 'PTR_s_Id_intr_cv_1_75_19970207_09_800cc0dc' @0x800CC0DC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC0DC, len = 0x00000004
extern pointer PTR_s_Id_intr_cv_1_75_19970207_09_800cc0dc;


// external declaration 'DAT_800cc0e0' @0x800CC0E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC0E0, len = 0x00000004
extern undefined4 DAT_800cc0e0;


// external declaration 'PTR_FUN_800cc0e4' @0x800CC0E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC0E4, len = 0x00000004
extern pointer PTR_FUN_800cc0e4;


// external declaration 'PTR_FUN_800cc0e8' @0x800CC0E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC0E8, len = 0x00000004
extern pointer PTR_FUN_800cc0e8;


// external declaration 'PTR_FUN_800cc0ec' @0x800CC0EC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC0EC, len = 0x00000004
extern pointer PTR_FUN_800cc0ec;


// external declaration 'DAT_800cc0f0' @0x800CC0F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC0F0, len = 0x00000004
extern undefined4 DAT_800cc0f0;


// external declaration 'PTR_PTR_s_Id_intr_cv_1_75_19970207_09_800cc0fc' @0x800CC0FC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC0FC, len = 0x00000004
extern pointer PTR_PTR_s_Id_intr_cv_1_75_19970207_09_800cc0fc;


// external declaration 'PTR_I_STAT_800cc100' @0x800CC100 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC100, len = 0x00000004
extern pointer PTR_I_STAT_800cc100;


// external declaration 'PTR_I_MASK_800cc104' @0x800CC104 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC104, len = 0x00000004
extern pointer PTR_I_MASK_800cc104;


// external declaration 'PTR_DMA_DPCR_800cc108' @0x800CC108 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC108, len = 0x00000004
extern pointer PTR_DMA_DPCR_800cc108;


// external declaration 'DAT_800cc10c' @0x800CC10C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC10C, len = 0x00000004
extern undefined4 DAT_800cc10c;


// external declaration 'PTR_s_Id_sys_cv_1_140_19980112_07_800cc124' @0x800CC124 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC124, len = 0x00000004
extern pointer PTR_s_Id_sys_cv_1_140_19980112_07_800cc124;


// external declaration 'PTR_FUN_800cc12c' @0x800CC12C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC12C, len = 0x00000004
extern pointer PTR_FUN_800cc12c;


// external declaration 'PTR_FUN_800cc130' @0x800CC130 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC130, len = 0x00000004
extern pointer PTR_FUN_800cc130;


// external declaration 'PTR_FUN_800cc134' @0x800CC134 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC134, len = 0x00000004
extern pointer PTR_FUN_800cc134;


// external declaration 'PTR_FUN_800cc138' @0x800CC138 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC138, len = 0x00000004
extern pointer PTR_FUN_800cc138;


// external declaration 'PTR_FUN_800cc13c' @0x800CC13C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC13C, len = 0x00000004
extern pointer PTR_FUN_800cc13c;


// external declaration 'PTR_ARRAY_800cc144' @0x800CC144 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CC144, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800cc144;


// external declaration 'PTR_FUN_800cc150' @0x800CC150 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC150, len = 0x00000004
extern pointer PTR_FUN_800cc150;


// external declaration 'PTR_FUN_800cc158' @0x800CC158 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC158, len = 0x00000004
extern pointer PTR_FUN_800cc158;


// external declaration 'PTR_FUN_800cc160' @0x800CC160 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC160, len = 0x00000004
extern pointer PTR_FUN_800cc160;


// external declaration 'PTR_PTR_s_Id_sys_cv_1_140_19980112_07_800cc164' @0x800CC164 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC164, len = 0x00000004
extern pointer PTR_PTR_s_Id_sys_cv_1_140_19980112_07_800cc164;


// external declaration 'PTR_FUN_800cc168' @0x800CC168 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC168, len = 0x00000004
extern pointer PTR_FUN_800cc168;


// external declaration 'DAT_800cc16c' @0x800CC16C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC16C, len = 0x00000001
extern undefined1 DAT_800cc16c;


// external declaration 'DAT_800cc16d' @0x800CC16D was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC16D, len = 0x00000001
extern undefined1 DAT_800cc16d;


// external declaration 'DAT_800cc16e' @0x800CC16E was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC16E, len = 0x00000001
extern undefined1 DAT_800cc16e;


// external declaration 'DAT_800cc16f' @0x800CC16F was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC16F, len = 0x00000001
extern undefined1 DAT_800cc16f;


// external declaration 'DAT_800cc170' @0x800CC170 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC170, len = 0x00000002
extern undefined2 DAT_800cc170;


// external declaration 'DAT_800cc172' @0x800CC172 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC172, len = 0x00000002
extern undefined2 DAT_800cc172;


// external declaration 'DAT_800cc174' @0x800CC174 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC174, len = 0x00000004
extern undefined4 DAT_800cc174;


// external declaration 'DAT_800cc178' @0x800CC178 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC178, len = 0x00000004
extern undefined4 DAT_800cc178;


// external declaration 'DAT_800cc1d8' @0x800CC1D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1D8, len = 0x00000002
extern undefined2 DAT_800cc1d8;


// external declaration 'DAT_800cc1da' @0x800CC1DA was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1DA, len = 0x00000002
extern undefined2 DAT_800cc1da;


// external declaration 'DAT_800cc1dc' @0x800CC1DC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1DC, len = 0x00000002
extern undefined2 DAT_800cc1dc;


// external declaration 'DAT_800cc1de' @0x800CC1DE was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1DE, len = 0x00000002
extern undefined2 DAT_800cc1de;


// external declaration 'DAT_800cc1e0' @0x800CC1E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1E0, len = 0x00000002
extern undefined2 DAT_800cc1e0;


// external declaration 'DAT_800cc1e2' @0x800CC1E2 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1E2, len = 0x00000002
extern undefined2 DAT_800cc1e2;


// external declaration 'DAT_800cc1e4' @0x800CC1E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1E4, len = 0x00000002
extern undefined2 DAT_800cc1e4;


// external declaration 'DAT_800cc1e6' @0x800CC1E6 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CC1E6, len = 0x00000002
extern undefined2 DAT_800cc1e6;


// external declaration 'DAT_800cc1e8' @0x800CC1E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC1E8, len = 0x00000004
extern undefined4 DAT_800cc1e8;


// external declaration 'PTR_ARRAY_800cc1ec' @0x800CC1EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CC1EC, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800cc1ec;


// external declaration 'DAT_800cc20c' @0x800CC20C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC20C, len = 0x00000004
extern undefined4 DAT_800cc20c;


// external declaration 'DAT_800cc210' @0x800CC210 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC210, len = 0x00000004
extern undefined4 DAT_800cc210;


// external declaration 'DAT_800cc214' @0x800CC214 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC214, len = 0x00000004
extern undefined4 DAT_800cc214;


// external declaration 'DAT_800cc22c' @0x800CC22C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC22C, len = 0x00000004
extern undefined4 DAT_800cc22c;


// external declaration 'DAT_800cc268' @0x800CC268 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC268, len = 0x00000001
extern undefined1 DAT_800cc268;


// external declaration 'DAT_800cc269' @0x800CC269 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC269, len = 0x00000001
extern undefined1 DAT_800cc269;


// external declaration 'DAT_800cc26a' @0x800CC26A was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC26A, len = 0x00000001
extern undefined1 DAT_800cc26a;


// external declaration 'DAT_800cc26b' @0x800CC26B was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC26B, len = 0x00000001
extern undefined1 DAT_800cc26b;


// external declaration 'DAT_800cc26c' @0x800CC26C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CC26C, len = 0x00000001
extern undefined1 DAT_800cc26c;


// external declaration 'PTR_GPU_REG0_800cc270' @0x800CC270 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC270, len = 0x00000004
extern pointer PTR_GPU_REG0_800cc270;


// external declaration 'PTR_GPU_REG1_800cc274' @0x800CC274 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC274, len = 0x00000004
extern pointer PTR_GPU_REG1_800cc274;


// external declaration 'PTR_DMA_GPU_MADR_800cc278' @0x800CC278 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC278, len = 0x00000004
extern pointer PTR_DMA_GPU_MADR_800cc278;


// external declaration 'PTR_DMA_GPU_BCR_800cc27c' @0x800CC27C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC27C, len = 0x00000004
extern pointer PTR_DMA_GPU_BCR_800cc27c;


// external declaration 'PTR_DMA_GPU_CHCR_800cc280' @0x800CC280 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC280, len = 0x00000004
extern pointer PTR_DMA_GPU_CHCR_800cc280;


// external declaration 'PTR_DMA_OTC_MADR_800cc284' @0x800CC284 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC284, len = 0x00000004
extern pointer PTR_DMA_OTC_MADR_800cc284;


// external declaration 'PTR_DMA_OTC_BCR_800cc288' @0x800CC288 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC288, len = 0x00000004
extern pointer PTR_DMA_OTC_BCR_800cc288;


// external declaration 'PTR_DMA_OTC_CHCR_800cc28c' @0x800CC28C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC28C, len = 0x00000004
extern pointer PTR_DMA_OTC_CHCR_800cc28c;


// external declaration 'PTR_DMA_DPCR_800cc290' @0x800CC290 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC290, len = 0x00000004
extern pointer PTR_DMA_DPCR_800cc290;


// external declaration 'DAT_800cc294' @0x800CC294 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC294, len = 0x00000004
extern undefined4 DAT_800cc294;


// external declaration 'DAT_800cc298' @0x800CC298 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC298, len = 0x00000004
extern undefined4 DAT_800cc298;


// external declaration 'DAT_800cc29c' @0x800CC29C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC29C, len = 0x00000004
extern undefined4 DAT_800cc29c;


// external declaration 'DAT_800cc2a0' @0x800CC2A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2A0, len = 0x00000004
extern undefined4 DAT_800cc2a0;


// external declaration 'DAT_800cc2a4' @0x800CC2A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2A4, len = 0x00000004
extern undefined4 DAT_800cc2a4;


// external declaration 'DAT_800cc2a8' @0x800CC2A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2A8, len = 0x00000004
extern undefined4 DAT_800cc2a8;


// external declaration 'DAT_800cc2ac' @0x800CC2AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2AC, len = 0x00000004
extern undefined4 DAT_800cc2ac;


// external declaration 'PTR_GPU_REG1_800cc2c4' @0x800CC2C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC2C4, len = 0x00000004
extern pointer PTR_GPU_REG1_800cc2c4;


// external declaration 'PTR_TMR_HRETRACE_VAL_800cc2c8' @0x800CC2C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC2C8, len = 0x00000004
extern pointer PTR_TMR_HRETRACE_VAL_800cc2c8;


// external declaration 'DAT_800cc2cc' @0x800CC2CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2CC, len = 0x00000004
extern undefined4 DAT_800cc2cc;


// external declaration 'DAT_800cc2d0' @0x800CC2D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CC2D0, len = 0x00000004
extern undefined4 DAT_800cc2d0;


// external declaration 'PTR_DAT_800cc2dc' @0x800CC2DC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CC2DC, len = 0x00000004
extern pointer PTR_DAT_800cc2dc;


// external declaration 'PTR_ARRAY_800cc304' @0x800CC304 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[15] @0x800CC304, len = 0x0000003C
extern undefined *32[15] PTR_ARRAY_800cc304; // WARNING: no name explicitly defined


// external declaration 'PTR_I_STAT_800ccaec' @0x800CCAEC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCAEC, len = 0x00000004
extern pointer PTR_I_STAT_800ccaec;


// external declaration 'PTR_TMR_DOTCLOCK_VAL_800ccaf0' @0x800CCAF0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCAF0, len = 0x00000004
extern pointer PTR_TMR_DOTCLOCK_VAL_800ccaf0;


// external declaration 'PTR_JOY_MCD_DATA_800ccb0c' @0x800CCB0C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCB0C, len = 0x00000004
extern pointer PTR_JOY_MCD_DATA_800ccb0c;


// external declaration 'DAT_800ccb9c' @0x800CCB9C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCB9C, len = 0x00000004
extern undefined4 DAT_800ccb9c;


// external declaration 'DAT_800ccba0' @0x800CCBA0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBA0, len = 0x00000004
extern undefined4 DAT_800ccba0;


// external declaration 'DAT_800ccbac' @0x800CCBAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBAC, len = 0x00000004
extern undefined4 DAT_800ccbac;


// external declaration 'DAT_800ccbb0' @0x800CCBB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBB0, len = 0x00000004
extern undefined4 DAT_800ccbb0;


// external declaration 'DAT_800ccbbc' @0x800CCBBC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBBC, len = 0x00000004
extern undefined4 DAT_800ccbbc;


// external declaration 'DAT_800ccbcc' @0x800CCBCC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBCC, len = 0x00000004
extern undefined4 DAT_800ccbcc;


// external declaration 'DAT_800ccbd8' @0x800CCBD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCBD8, len = 0x00000004
extern undefined4 DAT_800ccbd8;


// external declaration '_padGunExec' @0x800CCE5C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CCE5C, len = 0xFFFFFFFFFFFFFFFF
extern string _padGunExec;


// external declaration 's_Error_Cant_pop_matrixstack_is_800cce8d' @0x800CCE8D was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CCE8D, len = 0xFFFFFFFFFFFFFFFF
extern string s_Error_Cant_pop_matrixstack_is_800cce8d;


// external declaration 's_This_function_is_not_implemented_800cceb6' @0x800CCEB6 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CCEB6, len = 0xFFFFFFFFFFFFFFFF
extern string s_This_function_is_not_implemented_800cceb6; // WARNING: no name explicitly defined


// external declaration 'PTR_DMA_GPU_MADR_800ccedc' @0x800CCEDC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCEDC, len = 0x00000004
extern pointer PTR_DMA_GPU_MADR_800ccedc;


// external declaration 'PTR_ARRAY_800ccee4' @0x800CCEE4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CCEE4, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800ccee4;


// external declaration 'DAT_800ccf0c' @0x800CCF0C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCF0C, len = 0x00000004
extern undefined4 DAT_800ccf0c;


// external declaration 'PTR_CDROM_REG0_800ccf1c' @0x800CCF1C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF1C, len = 0x00000004
extern pointer PTR_CDROM_REG0_800ccf1c;


// external declaration 'PTR_CDROM_REG2_800ccf24' @0x800CCF24 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF24, len = 0x00000004
extern pointer PTR_CDROM_REG2_800ccf24;


// external declaration 'PTR_CDROM_REG3_800ccf28' @0x800CCF28 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF28, len = 0x00000004
extern pointer PTR_CDROM_REG3_800ccf28;


// external declaration 'PTR_CDROM_DELAY_800ccf2c' @0x800CCF2C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF2C, len = 0x00000004
extern pointer PTR_CDROM_DELAY_800ccf2c;


// external declaration 'PTR_COMMON_DELAY_800ccf30' @0x800CCF30 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF30, len = 0x00000004
extern pointer PTR_COMMON_DELAY_800ccf30;


// external declaration 'PTR_DMA_DPCR_800ccf34' @0x800CCF34 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF34, len = 0x00000004
extern pointer PTR_DMA_DPCR_800ccf34;


// external declaration 'PTR_DMA_DICR_800ccf38' @0x800CCF38 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CCF38, len = 0x00000004
extern pointer PTR_DMA_DICR_800ccf38;


// external declaration 'PTR_ARRAY_800ccf3c' @0x800CCF3C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[2] @0x800CCF3C, len = 0x00000008
extern undefined *32[2] PTR_ARRAY_800ccf3c;


// external declaration 'CD_intstr' @0x800CCF44 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[2] @0x800CCF44, len = 0x00000008
extern undefined *32[2] CD_intstr;


// external declaration 'PTR_ARRAY_800ccf4c' @0x800CCF4C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x800CCF4C, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_800ccf4c;


// external declaration 'DAT_800ccf64' @0x800CCF64 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCF64, len = 0x00000004
extern undefined4 DAT_800ccf64;


// external declaration 'PTR_ARRAY_800ccf6c' @0x800CCF6C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800CCF6C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800ccf6c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800ccf7c' @0x800CCF7C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CCF7C, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800ccf7c;


// external declaration 'PTR_ARRAY_800ccf88' @0x800CCF88 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[25] @0x800CCF88, len = 0x00000064
extern undefined *32[25] PTR_ARRAY_800ccf88;


// external declaration 'DAT_800ccfec' @0x800CCFEC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCFEC, len = 0x00000004
extern undefined4 DAT_800ccfec;


// external declaration 'DAT_800ccff0' @0x800CCFF0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CCFF0, len = 0x00000004
extern undefined4 DAT_800ccff0;


// external declaration 'DAT_800cd00c' @0x800CD00C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD00C, len = 0x00000004
extern undefined4 DAT_800cd00c;


// external declaration 'PTR_TMR_HRETRACE_MODE_800cd010' @0x800CD010 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD010, len = 0x00000004
extern pointer PTR_TMR_HRETRACE_MODE_800cd010;


// external declaration 'PTR_DMA_DICR_800cd01c' @0x800CD01C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD01C, len = 0x00000004
extern pointer PTR_DMA_DICR_800cd01c;


// external declaration 'DAT_800cd020' @0x800CD020 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD020, len = 0x00000004
extern undefined4 DAT_800cd020;


// external declaration 'PTR_DMA_MDEC_IN_MADR_800cd040' @0x800CD040 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD040, len = 0x00000004
extern pointer PTR_DMA_MDEC_IN_MADR_800cd040;


// external declaration 'DAT_800cd04c' @0x800CD04C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD04C, len = 0x00000004
extern undefined4 DAT_800cd04c;


// external declaration 'DAT_800cd064' @0x800CD064 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD064, len = 0x00000004
extern undefined4 DAT_800cd064;


// external declaration 'DAT_800cd068' @0x800CD068 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD068, len = 0x00000004
extern undefined4 DAT_800cd068;


// external declaration 'DAT_800cd06c' @0x800CD06C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD06C, len = 0x00000004
extern undefined4 DAT_800cd06c;


// external declaration 'DAT_800cd070' @0x800CD070 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD070, len = 0x00000004
extern undefined4 DAT_800cd070;


// external declaration 'DAT_800cd074' @0x800CD074 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD074, len = 0x00000004
extern undefined4 DAT_800cd074;


// external declaration 'DAT_800cd078' @0x800CD078 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD078, len = 0x00000004
extern undefined4 DAT_800cd078;


// external declaration 'DAT_800cd07c' @0x800CD07C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD07C, len = 0x00000004
extern undefined4 DAT_800cd07c;


// external declaration 'DAT_800cd080' @0x800CD080 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD080, len = 0x00000004
extern undefined4 DAT_800cd080;


// external declaration 'DAT_800cd084' @0x800CD084 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD084, len = 0x00000004
extern undefined4 DAT_800cd084;


// external declaration 'DAT_800cd088' @0x800CD088 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD088, len = 0x00000004
extern undefined4 DAT_800cd088;


// external declaration 'DAT_800cd08c' @0x800CD08C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD08C, len = 0x00000004
extern undefined4 DAT_800cd08c;


// external declaration 'DAT_800cd098' @0x800CD098 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD098, len = 0x00000004
extern undefined4 DAT_800cd098;


// external declaration 'DAT_800cd09c' @0x800CD09C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD09C, len = 0x00000004
extern undefined4 DAT_800cd09c;


// external declaration 'DAT_800cd0a4' @0x800CD0A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0A4, len = 0x00000004
extern undefined4 DAT_800cd0a4;


// external declaration 'DAT_800cd0a8' @0x800CD0A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0A8, len = 0x00000004
extern undefined4 DAT_800cd0a8;


// external declaration 'DAT_800cd0ac' @0x800CD0AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0AC, len = 0x00000004
extern undefined4 DAT_800cd0ac;


// external declaration 'DAT_800cd0b0' @0x800CD0B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0B0, len = 0x00000004
extern undefined4 DAT_800cd0b0;


// external declaration 'DAT_800cd0b4' @0x800CD0B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0B4, len = 0x00000004
extern undefined4 DAT_800cd0b4;


// external declaration 'DAT_800cd0b8' @0x800CD0B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0B8, len = 0x00000004
extern undefined4 DAT_800cd0b8;


// external declaration 'PTR_I_STAT_800cd0c4' @0x800CD0C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD0C4, len = 0x00000004
extern pointer PTR_I_STAT_800cd0c4;


// external declaration 'PTR_JOY_MCD_DATA_800cd0c8' @0x800CD0C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD0C8, len = 0x00000004
extern pointer PTR_JOY_MCD_DATA_800cd0c8;


// external declaration 'DAT_800cd0cc' @0x800CD0CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0CC, len = 0x00000004
extern undefined4 DAT_800cd0cc;


// external declaration 'DAT_800cd0e4' @0x800CD0E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0E4, len = 0x00000004
extern undefined4 DAT_800cd0e4;


// external declaration 'DAT_800cd0e8' @0x800CD0E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0E8, len = 0x00000004
extern undefined4 DAT_800cd0e8;


// external declaration 'DAT_800cd0ec' @0x800CD0EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0EC, len = 0x00000004
extern undefined4 DAT_800cd0ec;


// external declaration 'DAT_800cd0f0' @0x800CD0F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0F0, len = 0x00000004
extern undefined4 DAT_800cd0f0;


// external declaration 'DAT_800cd0f4' @0x800CD0F4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0F4, len = 0x00000004
extern undefined4 DAT_800cd0f4;


// external declaration 'DAT_800cd0f8' @0x800CD0F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD0F8, len = 0x00000004
extern undefined4 DAT_800cd0f8;


// external declaration 'DAT_800cd0fc' @0x800CD0FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD0FC, len = 0x00000001
extern undefined1 DAT_800cd0fc;


// external declaration 'DAT_800cd0fd' @0x800CD0FD was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD0FD, len = 0x00000001
extern undefined1 DAT_800cd0fd;


// external declaration 'DAT_800cd100' @0x800CD100 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD100, len = 0x00000001
extern undefined1 DAT_800cd100;


// external declaration 'DAT_800cd101' @0x800CD101 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD101, len = 0x00000001
extern undefined1 DAT_800cd101;


// external declaration 'DAT_800cd104' @0x800CD104 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD104, len = 0x00000004
extern undefined4 DAT_800cd104;


// external declaration 'PTR_ARRAY_800cd108' @0x800CD108 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[32] @0x800CD108, len = 0x00000080
extern undefined *32[32] PTR_ARRAY_800cd108;


// external declaration 'PTR_ARRAY_800cd188' @0x800CD188 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800CD188, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_800cd188;


// external declaration 'PTR_CDROM_REG0_800cd3a8' @0x800CD3A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3A8, len = 0x00000004
extern pointer PTR_CDROM_REG0_800cd3a8;


// external declaration 'PTR_CDROM_REG1_800cd3ac' @0x800CD3AC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3AC, len = 0x00000004
extern pointer PTR_CDROM_REG1_800cd3ac;


// external declaration 'PTR_CDROM_REG2_800cd3b0' @0x800CD3B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3B0, len = 0x00000004
extern pointer PTR_CDROM_REG2_800cd3b0;


// external declaration 'PTR_CDROM_REG3_800cd3b4' @0x800CD3B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3B4, len = 0x00000004
extern pointer PTR_CDROM_REG3_800cd3b4;


// external declaration 'PTR_COMMON_DELAY_800cd3b8' @0x800CD3B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3B8, len = 0x00000004
extern pointer PTR_COMMON_DELAY_800cd3b8;


// external declaration 'PTR_VOICE_00_LEFT_RIGHT_800cd3bc' @0x800CD3BC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3BC, len = 0x00000004
extern pointer PTR_VOICE_00_LEFT_RIGHT_800cd3bc;


// external declaration 'DAT_800cd3c0' @0x800CD3C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD3C0, len = 0x00000001
extern undefined1 DAT_800cd3c0;


// external declaration 'DAT_800cd3c1' @0x800CD3C1 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD3C1, len = 0x00000001
extern undefined1 DAT_800cd3c1;


// external declaration 'DAT_800cd3c2' @0x800CD3C2 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CD3C2, len = 0x00000001
extern undefined1 DAT_800cd3c2;


// external declaration 'PTR_ARRAY_800cd3c4' @0x800CD3C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[6] @0x800CD3C4, len = 0x00000018
extern undefined *32[6] PTR_ARRAY_800cd3c4;


// external declaration 'PTR_CDROM_DELAY_800cd3dc' @0x800CD3DC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3DC, len = 0x00000004
extern pointer PTR_CDROM_DELAY_800cd3dc;


// external declaration 'PTR_DMA_DPCR_800cd3e0' @0x800CD3E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3E0, len = 0x00000004
extern pointer PTR_DMA_DPCR_800cd3e0;


// external declaration 'PTR_DMA_CDROM_MADR_800cd3e4' @0x800CD3E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3E4, len = 0x00000004
extern pointer PTR_DMA_CDROM_MADR_800cd3e4;


// external declaration 'PTR_DMA_CDROM_BCR_800cd3e8' @0x800CD3E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3E8, len = 0x00000004
extern pointer PTR_DMA_CDROM_BCR_800cd3e8;


// external declaration 'PTR_DMA_CDROM_CHCR_800cd3ec' @0x800CD3EC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD3EC, len = 0x00000004
extern pointer PTR_DMA_CDROM_CHCR_800cd3ec;


// external declaration 'DAT_800cd3fc' @0x800CD3FC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD3FC, len = 0x00000004
extern undefined4 DAT_800cd3fc;


// external declaration 'DAT_800cd400' @0x800CD400 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD400, len = 0x00000004
extern undefined4 DAT_800cd400;


// external declaration 'DAT_800cd404' @0x800CD404 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD404, len = 0x00000004
extern undefined4 DAT_800cd404;


// external declaration 'DAT_800cd408' @0x800CD408 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD408, len = 0x00000004
extern undefined4 DAT_800cd408;


// external declaration 'DAT_800cd40c' @0x800CD40C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD40C, len = 0x00000004
extern undefined4 DAT_800cd40c;


// external declaration 'DAT_800cd410' @0x800CD410 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD410, len = 0x00000004
extern undefined4 DAT_800cd410;


// external declaration 'DAT_800cd414' @0x800CD414 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD414, len = 0x00000004
extern undefined4 DAT_800cd414;


// external declaration 'DAT_800cd418' @0x800CD418 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD418, len = 0x00000004
extern undefined4 DAT_800cd418;


// external declaration 'DAT_800cd41c' @0x800CD41C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD41C, len = 0x00000004
extern undefined4 DAT_800cd41c;


// external declaration 'DAT_800cd420' @0x800CD420 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD420, len = 0x00000004
extern undefined4 DAT_800cd420;


// external declaration 'DAT_800cd424' @0x800CD424 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD424, len = 0x00000004
extern undefined4 DAT_800cd424;


// external declaration 'DAT_800cd428' @0x800CD428 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD428, len = 0x00000004
extern undefined4 DAT_800cd428;


// external declaration 'DAT_800cd42c' @0x800CD42C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD42C, len = 0x00000004
extern undefined4 DAT_800cd42c;


// external declaration 'DAT_800cd430' @0x800CD430 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD430, len = 0x00000004
extern undefined4 DAT_800cd430;


// external declaration 'DAT_800cd444' @0x800CD444 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD444, len = 0x00000004
extern undefined4 DAT_800cd444;


// external declaration 'DAT_800cd448' @0x800CD448 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD448, len = 0x00000004
extern undefined4 DAT_800cd448;


// external declaration 'DAT_800cd44c' @0x800CD44C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD44C, len = 0x00000004
extern undefined4 DAT_800cd44c;


// external declaration 'DAT_800cd450' @0x800CD450 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD450, len = 0x00000004
extern undefined4 DAT_800cd450;


// external declaration 'DAT_800cd454' @0x800CD454 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD454, len = 0x00000004
extern undefined4 DAT_800cd454;


// external declaration 'DAT_800cd458' @0x800CD458 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD458, len = 0x00000004
extern undefined4 DAT_800cd458;


// external declaration 'DAT_800cd460' @0x800CD460 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD460, len = 0x00000004
extern undefined4 DAT_800cd460;


// external declaration 'DAT_800cd464' @0x800CD464 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CD464, len = 0x00000002
extern undefined2 DAT_800cd464;


// external declaration 'DAT_800cd466' @0x800CD466 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CD466, len = 0x00000002
extern undefined2 DAT_800cd466;


// external declaration 'DAT_800cd468' @0x800CD468 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD468, len = 0x00000004
extern undefined4 DAT_800cd468;


// external declaration 'DAT_800cd46c' @0x800CD46C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD46C, len = 0x00000004
extern undefined4 DAT_800cd46c;


// external declaration 'DAT_800cd470' @0x800CD470 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD470, len = 0x00000004
extern undefined4 DAT_800cd470;


// external declaration 'DAT_800cd474' @0x800CD474 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD474, len = 0x00000004
extern undefined4 DAT_800cd474;


// external declaration 'DAT_800cd4a4' @0x800CD4A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CD4A4, len = 0x00000002
extern undefined2 DAT_800cd4a4;


// external declaration 'DAT_800cd4a6' @0x800CD4A6 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CD4A6, len = 0x00000002
extern undefined2 DAT_800cd4a6;


// external declaration 'DAT_800cd4a8' @0x800CD4A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4A8, len = 0x00000004
extern undefined4 DAT_800cd4a8;


// external declaration 'DAT_800cd4ac' @0x800CD4AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4AC, len = 0x00000004
extern undefined4 DAT_800cd4ac;


// external declaration 'PTR_VOICE_00_LEFT_RIGHT_800cd4bc' @0x800CD4BC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4BC, len = 0x00000004
extern pointer PTR_VOICE_00_LEFT_RIGHT_800cd4bc;


// external declaration 'PTR_DMA_SPU_MADR_800cd4c0' @0x800CD4C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4C0, len = 0x00000004
extern pointer PTR_DMA_SPU_MADR_800cd4c0;


// external declaration 'PTR_DMA_SPU_BCR_800cd4c4' @0x800CD4C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4C4, len = 0x00000004
extern pointer PTR_DMA_SPU_BCR_800cd4c4;


// external declaration 'PTR_DMA_SPU_CHCR_800cd4c8' @0x800CD4C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4C8, len = 0x00000004
extern pointer PTR_DMA_SPU_CHCR_800cd4c8;


// external declaration 'PTR_DMA_DPCR_800cd4cc' @0x800CD4CC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4CC, len = 0x00000004
extern pointer PTR_DMA_DPCR_800cd4cc;


// external declaration 'PTR_SPU_DELAY_800cd4d0' @0x800CD4D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CD4D0, len = 0x00000004
extern pointer PTR_SPU_DELAY_800cd4d0;


// external declaration 'DAT_800cd4d4' @0x800CD4D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CD4D4, len = 0x00000002
extern undefined2 DAT_800cd4d4;


// external declaration 'DAT_800cd4d8' @0x800CD4D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4D8, len = 0x00000004
extern undefined4 DAT_800cd4d8;


// external declaration 'DAT_800cd4dc' @0x800CD4DC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4DC, len = 0x00000004
extern undefined4 DAT_800cd4dc;


// external declaration 'DAT_800cd4e0' @0x800CD4E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4E0, len = 0x00000004
extern undefined4 DAT_800cd4e0;


// external declaration 'DAT_800cd4e4' @0x800CD4E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4E4, len = 0x00000004
extern undefined4 DAT_800cd4e4;


// external declaration 'DAT_800cd4e8' @0x800CD4E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4E8, len = 0x00000004
extern undefined4 DAT_800cd4e8;


// external declaration 'DAT_800cd4ec' @0x800CD4EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4EC, len = 0x00000004
extern undefined4 DAT_800cd4ec;


// external declaration 'DAT_800cd4f0' @0x800CD4F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4F0, len = 0x00000004
extern undefined4 DAT_800cd4f0;


// external declaration 'DAT_800cd4f4' @0x800CD4F4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4F4, len = 0x00000004
extern undefined4 DAT_800cd4f4;


// external declaration 'DAT_800cd4f8' @0x800CD4F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD4F8, len = 0x00000004
extern undefined4 DAT_800cd4f8;


// external declaration 'DAT_800cd50c' @0x800CD50C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD50C, len = 0x00000004
extern undefined4 DAT_800cd50c;


// external declaration 'DAT_800cd510' @0x800CD510 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD510, len = 0x00000004
extern undefined4 DAT_800cd510;


// external declaration 'DAT_800cd514' @0x800CD514 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CD514, len = 0x00000004
extern undefined4 DAT_800cd514;


// external declaration 'PTR_ARRAY_800cd51c' @0x800CD51C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[10] @0x800CD51C, len = 0x00000028
extern undefined *32[10] PTR_ARRAY_800cd51c;


// external declaration 'LONG_ARRAY_800cdb4c' @0x800CDB4C was found in the data exported from Ghidra, but not the original debug symbol data.
// long[9] @0x800CDB4C, len = 0x00000024
extern long[9] LONG_ARRAY_800cdb4c;


// external declaration 'GameCheat_ARRAY_800cdc00' @0x800CDC00 was found in the data exported from Ghidra, but not the original debug symbol data.
// GameCheat[5] @0x800CDC00, len = 0x00000050
extern GameCheat[5] GameCheat_ARRAY_800cdc00;


// external declaration 'GameCheat_ARRAY_800cdc50' @0x800CDC50 was found in the data exported from Ghidra, but not the original debug symbol data.
// GameCheat[9] @0x800CDC50, len = 0x00000090
extern GameCheat[9] GameCheat_ARRAY_800cdc50;


// external declaration 's_-abs_256_40_-center_800cdcfc' @0x800CDCFC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CDCFC, len = 0xFFFFFFFFFFFFFFFF
extern string s_-abs_256_40_-center_800cdcfc; // WARNING: no name explicitly defined


// external declaration 's_-abs_160_40_-center_800cdd10' @0x800CDD10 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CDD10, len = 0xFFFFFFFFFFFFFFFF
extern string s_-abs_160_40_-center_800cdd10; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cdd34' @0x800CDD34 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800CDD34, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800cdd34; // WARNING: no name explicitly defined


// external declaration 's_sphere___800cdd74' @0x800CDD74 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CDD74, len = 0xFFFFFFFFFFFFFFFF
extern string s_sphere___800cdd74; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cdda8' @0x800CDDA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CDDA8, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800cdda8; // WARNING: no name explicitly defined


// external declaration 'DAT_800cdf30' @0x800CDF30 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CDF30, len = 0x00000004
extern undefined4 DAT_800cdf30;


// external declaration 'DAT_800cdf34' @0x800CDF34 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CDF34, len = 0x00000004
extern undefined4 DAT_800cdf34;


// external declaration 'LONG_ARRAY_800cdf40' @0x800CDF40 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[2] @0x800CDF40, len = 0x00000008
extern long[2] LONG_ARRAY_800cdf40;


// external declaration 'LONG_ARRAY_800cdf48' @0x800CDF48 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[2] @0x800CDF48, len = 0x00000008
extern long[2] LONG_ARRAY_800cdf48;


// external declaration 'LONG_ARRAY_800cdf50' @0x800CDF50 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[2] @0x800CDF50, len = 0x00000008
extern long[2] LONG_ARRAY_800cdf50;


// external declaration 'LONG_ARRAY_800cdf58' @0x800CDF58 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[7] @0x800CDF58, len = 0x0000001C
extern long[7] LONG_ARRAY_800cdf58;


// external declaration 'DAT_800cdf94' @0x800CDF94 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CDF94, len = 0x00000002
extern undefined2 DAT_800cdf94;


// external declaration 's_KG_FRTE_d_800cdfa8' @0x800CDFA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CDFA8, len = 0xFFFFFFFFFFFFFFFF
extern string s_KG_FRTE_d_800cdfa8;


// external declaration 'SignalInfo_ARRAY_800ce008' @0x800CE008 was found in the data exported from Ghidra, but not the original debug symbol data.
// SignalInfo[8] @0x800CE008, len = 0x00000060
extern SignalInfo[8] SignalInfo_ARRAY_800ce008;


// external declaration 'SignalInfo_ARRAY_800ce068' @0x800CE068 was found in the data exported from Ghidra, but not the original debug symbol data.
// SignalInfo[2] @0x800CE068, len = 0x00000018
extern SignalInfo[2] SignalInfo_ARRAY_800ce068;


// external declaration 'SignalInfo_ARRAY_800ce080' @0x800CE080 was found in the data exported from Ghidra, but not the original debug symbol data.
// SignalInfo[11] @0x800CE080, len = 0x00000084
extern SignalInfo[11] SignalInfo_ARRAY_800ce080;


// external declaration 'LONG_ARRAY_800ce108' @0x800CE108 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[7] @0x800CE108, len = 0x0000001C
extern long[7] LONG_ARRAY_800ce108;


// external declaration 'LONG_ARRAY_800ce128' @0x800CE128 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[7] @0x800CE128, len = 0x0000001C
extern long[7] LONG_ARRAY_800ce128;


// external declaration 'LONG_ARRAY_800ce148' @0x800CE148 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[7] @0x800CE148, len = 0x0000001C
extern long[7] LONG_ARRAY_800ce148;


// external declaration 'gameTimer' @0x800CE188 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE188, len = 0x00000004
extern undefined4 gameTimer;


// external declaration 'DAT_800ce3b0' @0x800CE3B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3B0, len = 0x00000004
extern undefined4 DAT_800ce3b0;


// external declaration 'PTR_DAT_800ce3b4' @0x800CE3B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CE3B4, len = 0x00000004
extern pointer PTR_DAT_800ce3b4;


// external declaration 'DAT_800ce3b8' @0x800CE3B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3B8, len = 0x00000004
extern undefined4 DAT_800ce3b8;


// external declaration 'DAT_800ce3bc' @0x800CE3BC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3BC, len = 0x00000004
extern undefined4 DAT_800ce3bc;


// external declaration 'DAT_800ce3c0' @0x800CE3C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3C0, len = 0x00000004
extern undefined4 DAT_800ce3c0;


// external declaration 'DAT_800ce3c4' @0x800CE3C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3C4, len = 0x00000004
extern undefined4 DAT_800ce3c4;


// external declaration 'DAT_800ce3c8' @0x800CE3C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3C8, len = 0x00000004
extern undefined4 DAT_800ce3c8;


// external declaration 'DAT_800ce3cc' @0x800CE3CC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3CC, len = 0x00000004
extern undefined4 DAT_800ce3cc;


// external declaration 'DAT_800ce3d0' @0x800CE3D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3D0, len = 0x00000004
extern undefined4 DAT_800ce3d0;


// external declaration 'DAT_800ce3e0' @0x800CE3E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE3E0, len = 0x00000004
extern undefined4 DAT_800ce3e0;


// external declaration 'PTR_ARRAY_800ce3e4' @0x800CE3E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[12] @0x800CE3E4, len = 0x00000030
extern undefined *32[12] PTR_ARRAY_800ce3e4; // WARNING: no name explicitly defined


// external declaration 's_eaggots_800ce504' @0x800CE504 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE504, len = 0xFFFFFFFFFFFFFFFF
extern string s_eaggots_800ce504; // WARNING: no name explicitly defined


// external declaration 's_healths_800ce514' @0x800CE514 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE514, len = 0xFFFFFFFFFFFFFFFF
extern string s_healths_800ce514; // WARNING: no name explicitly defined


// external declaration 's_particle_800ce51c' @0x800CE51C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE51C, len = 0xFFFFFFFFFFFFFFFF
extern string s_particle_800ce51c; // WARNING: no name explicitly defined


// external declaration 's_force_800ce528' @0x800CE528 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE528, len = 0xFFFFFFFFFFFFFFFF
extern string s_force_800ce528; // WARNING: no name explicitly defined


// external declaration 's_glphicon_800ce540' @0x800CE540 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE540, len = 0xFFFFFFFFFFFFFFFF
extern string s_glphicon_800ce540; // WARNING: no name explicitly defined


// external declaration 's_paths_800ce54c' @0x800CE54C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE54C, len = 0xFFFFFFFFFFFFFFFF
extern string s_paths_800ce54c;


// external declaration 'InterfaceItem_ARRAY_800ce5a8' @0x800CE5A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// InterfaceItem[5] @0x800CE5A8, len = 0x00000118
extern InterfaceItem[5] InterfaceItem_ARRAY_800ce5a8;


// external declaration 'DAT_800ce6e4' @0x800CE6E4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE6E4, len = 0x00000004
extern undefined4 DAT_800ce6e4;


// external declaration 'PTR_DAT_800ce6e8' @0x800CE6E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CE6E8, len = 0x00000004
extern pointer PTR_DAT_800ce6e8;


// external declaration 's_CD_ERROR_File_x_does_not_exist_800ce6f0' @0x800CE6F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE6F0, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_ERROR_File_x_does_not_exist_800ce6f0;


// external declaration 'PTR_ARRAY_800ce714' @0x800CE714 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800CE714, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_800ce714; // WARNING: no name explicitly defined


// external declaration 's_CD_ERROR_file_s_not_in_bigfile_800ce730' @0x800CE730 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE730, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_ERROR_file_s_not_in_bigfile_800ce730; // WARNING: no name explicitly defined


// external declaration 's_CD_ERROR_file_x_not_in_bigfile_800ce754' @0x800CE754 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE754, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_ERROR_file_x_not_in_bigfile_800ce754; // WARNING: no name explicitly defined


// external declaration 's_CD_ERROR_File_s_does_not_exist_800ce778' @0x800CE778 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE778, len = 0xFFFFFFFFFFFFFFFF
extern string s_CD_ERROR_File_s_does_not_exist_800ce778; // WARNING: no name explicitly defined


// external declaration 'PTR_DAT_800ce79c' @0x800CE79C was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CE79C, len = 0x00000004
extern pointer PTR_DAT_800ce79c;


// external declaration 'PTR_DAT_800ce7a0' @0x800CE7A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CE7A0, len = 0x00000004
extern pointer PTR_DAT_800ce7a0;


// external declaration 's_PUBLOGO_STR1_800ce7b4' @0x800CE7B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE7B4, len = 0xFFFFFFFFFFFFFFFF
extern string s_PUBLOGO_STR1_800ce7b4; // WARNING: no name explicitly defined


// external declaration 's_CRYLOGO_STR1_800ce7ec' @0x800CE7EC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE7EC, len = 0xFFFFFFFFFFFFFFFF
extern string s_CRYLOGO_STR1_800ce7ec; // WARNING: no name explicitly defined


// external declaration 's_KAININT_STR1_800ce824' @0x800CE824 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE824, len = 0xFFFFFFFFFFFFFFFF
extern string s_KAININT_STR1_800ce824; // WARNING: no name explicitly defined


// external declaration 's_VERSE_STR1_800ce85c' @0x800CE85C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE85C, len = 0xFFFFFFFFFFFFFFFF
extern string s_VERSE_STR1_800ce85c; // WARNING: no name explicitly defined


// external declaration 's_CREDITS_STR1_800ce894' @0x800CE894 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE894, len = 0xFFFFFFFFFFFFFFFF
extern string s_CREDITS_STR1_800ce894; // WARNING: no name explicitly defined


// external declaration 's_kain2gamepsxkain2_arg_800ce918' @0x800CE918 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE918, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2gamepsxkain2_arg_800ce918; // WARNING: no name explicitly defined


// external declaration 's_-NOSOUND_800ce93c' @0x800CE93C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE93C, len = 0xFFFFFFFFFFFFFFFF
extern string s_-NOSOUND_800ce93c;


// external declaration 's_-NOMUSIC_800ce948' @0x800CE948 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE948, len = 0xFFFFFFFFFFFFFFFF
extern string s_-NOMUSIC_800ce948;


// external declaration 's_-TIMEOUT_800ce954' @0x800CE954 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE954, len = 0xFFFFFFFFFFFFFFFF
extern string s_-TIMEOUT_800ce954;


// external declaration 's_-MAINMENU_800ce960' @0x800CE960 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE960, len = 0xFFFFFFFFFFFFFFFF
extern string s_-MAINMENU_800ce960;


// external declaration 's_-INSPECTRAL_800ce96c' @0x800CE96C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE96C, len = 0xFFFFFFFFFFFFFFFF
extern string s_-INSPECTRAL_800ce96c;


// external declaration 's_-VOICE_800ce978' @0x800CE978 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE978, len = 0xFFFFFFFFFFFFFFFF
extern string s_-VOICE_800ce978;


// external declaration 's_-DEBUG_CD_800ce980' @0x800CE980 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE980, len = 0xFFFFFFFFFFFFFFFF
extern string s_-DEBUG_CD_800ce980;


// external declaration 's_-LOADGAME_800ce98c' @0x800CE98C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE98C, len = 0xFFFFFFFFFFFFFFFF
extern string s_-LOADGAME_800ce98c;


// external declaration 's_-ALLWARP_800ce998' @0x800CE998 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE998, len = 0xFFFFFFFFFFFFFFFF
extern string s_-ALLWARP_800ce998;


// external declaration 's_under1_800ce9a4' @0x800CE9A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE9A4, len = 0xFFFFFFFFFFFFFFFF
extern string s_under1_800ce9a4; // WARNING: no name explicitly defined


// external declaration 'DAT_800ce9ac' @0x800CE9AC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE9AC, len = 0x00000004
extern undefined4 DAT_800ce9ac;


// external declaration 'DAT_800ce9b0' @0x800CE9B0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE9B0, len = 0x00000004
extern undefined4 DAT_800ce9b0;


// external declaration 'DAT_800ce9b4' @0x800CE9B4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CE9B4, len = 0x00000004
extern undefined4 DAT_800ce9b4;


// external declaration 'DAT_800ce9b8' @0x800CE9B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800CE9B8, len = 0x00000001
extern undefined1 DAT_800ce9b8;


// external declaration 's_kain2gamepsxloadingc_tim_800ce9bc' @0x800CE9BC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE9BC, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2gamepsxloadingc_tim_800ce9bc;


// external declaration 's_kain2gamepsxloading_tim_800ce9dc' @0x800CE9DC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE9DC, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2gamepsxloading_tim_800ce9dc;


// external declaration 's_kain2gamepsxwarning_tim_800ce9f8' @0x800CE9F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CE9F8, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2gamepsxwarning_tim_800ce9f8; // WARNING: no name explicitly defined


// external declaration 's_kain2sfxobjectmainmenumainm_800cea14' @0x800CEA14 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEA14, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2sfxobjectmainmenumainm_800cea14;


// external declaration 's_mainmenu_800cea3c' @0x800CEA3C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEA3C, len = 0xFFFFFFFFFFFFFFFF
extern string s_mainmenu_800cea3c; // WARNING: no name explicitly defined


// external declaration 's_kain2gamepsxfrontendtitle1__800cea48' @0x800CEA48 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEA48, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2gamepsxfrontendtitle1__800cea48; // WARNING: no name explicitly defined


// external declaration 'LONG_ARRAY_800cea94' @0x800CEA94 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[2] @0x800CEA94, len = 0x00000008
extern long[2] LONG_ARRAY_800cea94;


// external declaration 's_Menustuff_800ceaa8' @0x800CEAA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEAA8, len = 0xFFFFFFFFFFFFFFFF
extern string s_Menustuff_800ceaa8;


// external declaration 'DAT_800ceac8' @0x800CEAC8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEAC8, len = 0x00000004
extern undefined4 DAT_800ceac8;


// external declaration 'DAT_800ceacc' @0x800CEACC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEACC, len = 0x00000004
extern undefined4 DAT_800ceacc;


// external declaration 'PTR_DAT_800cead0' @0x800CEAD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEAD0, len = 0x00000004
extern pointer PTR_DAT_800cead0;


// external declaration 'PTR_DAT_800cead4' @0x800CEAD4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEAD4, len = 0x00000004
extern pointer PTR_DAT_800cead4;


// external declaration 'PTR_DAT_800cead8' @0x800CEAD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEAD8, len = 0x00000004
extern pointer PTR_DAT_800cead8;


// external declaration 's_see_password_800ceae4' @0x800CEAE4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEAE4, len = 0xFFFFFFFFFFFFFFFF
extern string s_see_password_800ceae4; // WARNING: no name explicitly defined


// external declaration 's_resume_play_800ceaf4' @0x800CEAF4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEAF4, len = 0xFFFFFFFFFFFFFFFF
extern string s_resume_play_800ceaf4; // WARNING: no name explicitly defined


// external declaration 's_save_game_800ceb00' @0x800CEB00 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB00, len = 0xFFFFFFFFFFFFFFFF
extern string s_save_game_800ceb00; // WARNING: no name explicitly defined


// external declaration 's_update_save_800ceb0c' @0x800CEB0C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB0C, len = 0xFFFFFFFFFFFFFFFF
extern string s_update_save_800ceb0c; // WARNING: no name explicitly defined


// external declaration 's_eaggots__800ceb1c' @0x800CEB1C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB1C, len = 0xFFFFFFFFFFFFFFFF
extern string s_eaggots__800ceb1c; // WARNING: no name explicitly defined


// external declaration 's_eaggot___800ceb28' @0x800CEB28 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB28, len = 0xFFFFFFFFFFFFFFFF
extern string s_eaggot___800ceb28; // WARNING: no name explicitly defined


// external declaration 's_wrpface__800ceb40' @0x800CEB40 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB40, len = 0xFFFFFFFFFFFFFFFF
extern string s_wrpface__800ceb40; // WARNING: no name explicitly defined


// external declaration 's_sreavr___800ceb4c' @0x800CEB4C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB4C, len = 0xFFFFFFFFFFFFFFFF
extern string s_sreavr___800ceb4c; // WARNING: no name explicitly defined


// external declaration 's_healthu__800ceb58' @0x800CEB58 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEB58, len = 0xFFFFFFFFFFFFFFFF
extern string s_healthu__800ceb58; // WARNING: no name explicitly defined


// external declaration 's_particle_800cebdc' @0x800CEBDC was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEBDC, len = 0xFFFFFFFFFFFFFFFF
extern string s_particle_800cebdc; // WARNING: no name explicitly defined


// external declaration 's_soul_____800cebe8' @0x800CEBE8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEBE8, len = 0xFFFFFFFFFFFFFFFF
extern string s_soul_____800cebe8; // WARNING: no name explicitly defined


// external declaration 's_paths____800cebf4' @0x800CEBF4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEBF4, len = 0xFFFFFFFFFFFFFFFF
extern string s_paths____800cebf4; // WARNING: no name explicitly defined


// external declaration 's_mapicon__800cec00' @0x800CEC00 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC00, len = 0xFFFFFFFFFFFFFFFF
extern string s_mapicon__800cec00; // WARNING: no name explicitly defined


// external declaration 's_introfx__800cec0c' @0x800CEC0C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC0C, len = 0xFFFFFFFFFFFFFFFF
extern string s_introfx__800cec0c; // WARNING: no name explicitly defined


// external declaration 's_cammode__800cec18' @0x800CEC18 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC18, len = 0xFFFFFFFFFFFFFFFF
extern string s_cammode__800cec18; // WARNING: no name explicitly defined


// external declaration 's_waterfx__800cec30' @0x800CEC30 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC30, len = 0xFFFFFFFFFFFFFFFF
extern string s_waterfx__800cec30; // WARNING: no name explicitly defined


// external declaration 's_fonts____800cec3c' @0x800CEC3C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC3C, len = 0xFFFFFFFFFFFFFFFF
extern string s_fonts____800cec3c; // WARNING: no name explicitly defined


// external declaration 's_flame____800cec48' @0x800CEC48 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC48, len = 0xFFFFFFFFFFFFFFFF
extern string s_flame____800cec48;


// external declaration 'DAT_800cec54' @0x800CEC54 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEC54, len = 0x00000004
extern undefined4 DAT_800cec54;


// external declaration 'DAT_800cec58' @0x800CEC58 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEC58, len = 0x00000004
extern undefined4 DAT_800cec58;


// external declaration 's_physical_800cec60' @0x800CEC60 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC60, len = 0xFFFFFFFFFFFFFFFF
extern string s_physical_800cec60;


// external declaration 's_monster__800cec6c' @0x800CEC6C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC6C, len = 0xFFFFFFFFFFFFFFFF
extern string s_monster__800cec6c;


// external declaration 's_particle_800cec78' @0x800CEC78 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC78, len = 0xFFFFFFFFFFFFFFFF
extern string s_particle_800cec78; // WARNING: no name explicitly defined


// external declaration 's_monster__800cec84' @0x800CEC84 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC84, len = 0xFFFFFFFFFFFFFFFF
extern string s_monster__800cec84; // WARNING: no name explicitly defined


// external declaration 's_physical_800cec90' @0x800CEC90 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC90, len = 0xFFFFFFFFFFFFFFFF
extern string s_physical_800cec90; // WARNING: no name explicitly defined


// external declaration 's_glphicon_800cec9c' @0x800CEC9C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEC9C, len = 0xFFFFFFFFFFFFFFFF
extern string s_glphicon_800cec9c; // WARNING: no name explicitly defined


// external declaration 's_sreavr___800ceca8' @0x800CECA8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CECA8, len = 0xFFFFFFFFFFFFFFFF
extern string s_sreavr___800ceca8;


// external declaration 's_raziel___800cecb4' @0x800CECB4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CECB4, len = 0xFFFFFFFFFFFFFFFF
extern string s_raziel___800cecb4;


// external declaration 'USHORT_ARRAY_800cecc4' @0x800CECC4 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[2] @0x800CECC4, len = 0x00000004
extern ushort[2] USHORT_ARRAY_800cecc4;


// external declaration 's_kain2musicss_snd_800cece0' @0x800CECE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CECE0, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2musicss_snd_800cece0;


// external declaration 's_kain2musicuwtruwtr_snd_800cecf8' @0x800CECF8 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CECF8, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2musicuwtruwtr_snd_800cecf8;


// external declaration 's_kain2musicuwtruwtr_smp_800ced14' @0x800CED14 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CED14, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2musicuwtruwtr_smp_800ced14;


// external declaration 's_kain2musicss_smp_800ced30' @0x800CED30 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CED30, len = 0xFFFFFFFFFFFFFFFF
extern string s_kain2musicss_smp_800ced30;


// external declaration 'DAT_800cedc4' @0x800CEDC4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEDC4, len = 0x00000004
extern undefined4 DAT_800cedc4;


// external declaration 'PTR_LAB_800cedc8' @0x800CEDC8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDC8, len = 0x00000004
extern pointer PTR_LAB_800cedc8;


// external declaration 'PTR_DAT_800cedcc' @0x800CEDCC was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDCC, len = 0x00000004
extern pointer PTR_DAT_800cedcc;


// external declaration 'PTR_LAB_800cedd0' @0x800CEDD0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDD0, len = 0x00000004
extern pointer PTR_LAB_800cedd0;


// external declaration 'PTR_DAT_800cedd4' @0x800CEDD4 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDD4, len = 0x00000004
extern pointer PTR_DAT_800cedd4;


// external declaration 'PTR_LAB_800cedd8' @0x800CEDD8 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDD8, len = 0x00000004
extern pointer PTR_LAB_800cedd8;


// external declaration 'DAT_800ceddc' @0x800CEDDC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CEDDC, len = 0x00000004
extern undefined4 DAT_800ceddc;


// external declaration 'PTR_LAB_800cede0' @0x800CEDE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CEDE0, len = 0x00000004
extern pointer PTR_LAB_800cede0;


// external declaration 'midiMetaEventFunction' @0x800CEDEC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CEDEC, len = 0x0000000C
extern undefined *32[3] midiMetaEventFunction;


// external declaration 's_Trying_to_fit_memory_size_d_Typ_800cee20' @0x800CEE20 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEE20, len = 0xFFFFFFFFFFFFFFFF
extern string s_Trying_to_fit_memory_size_d_Typ_800cee20;


// external declaration 's_Trying_to_fit_memory_size_d_Typ_800cee70' @0x800CEE70 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEE70, len = 0xFFFFFFFFFFFFFFFF
extern string s_Trying_to_fit_memory_size_d_Typ_800cee70;


// external declaration 's_Verify_failed_s_s_line_d_800ceec0' @0x800CEEC0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEEC0, len = 0xFFFFFFFFFFFFFFFF
extern string s_Verify_failed_s_s_line_d_800ceec0; // WARNING: no name explicitly defined


// external declaration 's_Assert_failed_s_s_line_d_800ceee0' @0x800CEEE0 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEEE0, len = 0xFFFFFFFFFFFFFFFF
extern string s_Assert_failed_s_s_line_d_800ceee0; // WARNING: no name explicitly defined


// external declaration 'sfxCmdFunction' @0x800CEF24 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CEF24, len = 0xFFFFFFFFFFFFFFFF
extern string sfxCmdFunction;


// external declaration 'USHORT_ARRAY_800cef68' @0x800CEF68 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[14] @0x800CEF68, len = 0x0000001C
extern ushort[14] USHORT_ARRAY_800cef68;


// external declaration 'USHORT_ARRAY_800cef84' @0x800CEF84 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[59] @0x800CEF84, len = 0x00000076
extern ushort[59] USHORT_ARRAY_800cef84;


// external declaration 'PTR_ARRAY_800cf318' @0x800CF318 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[15] @0x800CF318, len = 0x0000003C
extern undefined *32[15] PTR_ARRAY_800cf318; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cf35c' @0x800CF35C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[7] @0x800CF35C, len = 0x0000001C
extern undefined *32[7] PTR_ARRAY_800cf35c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cf37c' @0x800CF37C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800CF37C, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800cf37c; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cf3a4' @0x800CF3A4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[8] @0x800CF3A4, len = 0x00000020
extern undefined *32[8] PTR_ARRAY_800cf3a4; // WARNING: no name explicitly defined


// external declaration 's_under3_800cf444' @0x800CF444 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CF444, len = 0xFFFFFFFFFFFFFFFF
extern string s_under3_800cf444; // WARNING: no name explicitly defined


// external declaration 'LONG_800cf564' @0x800CF564 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF564, len = 0x00000004
extern long LONG_800cf564;


// external declaration 'LONG_800cf568' @0x800CF568 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF568, len = 0x00000004
extern long LONG_800cf568;


// external declaration 'LONG_800cf56c' @0x800CF56C was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF56C, len = 0x00000004
extern long LONG_800cf56c;


// external declaration 'LONG_800cf570' @0x800CF570 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF570, len = 0x00000004
extern long LONG_800cf570;


// external declaration 'LONG_800cf574' @0x800CF574 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF574, len = 0x00000004
extern long LONG_800cf574;


// external declaration 'LONG_800cf578' @0x800CF578 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF578, len = 0x00000004
extern long LONG_800cf578;


// external declaration 'LONG_ARRAY_800cf57c' @0x800CF57C was found in the data exported from Ghidra, but not the original debug symbol data.
// long[2] @0x800CF57C, len = 0x00000008
extern long[2] LONG_ARRAY_800cf57c;


// external declaration 'LONG_800cf584' @0x800CF584 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF584, len = 0x00000004
extern long LONG_800cf584;


// external declaration 'PTR_ARRAY_800cf5a0' @0x800CF5A0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _G2AnimAlphaTable_Type *[3] @0x800CF5A0, len = 0x0000000C
extern _G2AnimAlphaTable_Type *[3] PTR_ARRAY_800cf5a0;


// external declaration 'PTR_DAT_800cf5ac' @0x800CF5AC was found in the data exported from Ghidra, but not the original debug symbol data.
// _G2AnimAlphaTable_Type * @0x800CF5AC, len = 0x00000004
extern _G2AnimAlphaTable_Type * PTR_DAT_800cf5ac;


// external declaration 's_priests_800cf61c' @0x800CF61C was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CF61C, len = 0xFFFFFFFFFFFFFFFF
extern string s_priests_800cf61c; // WARNING: no name explicitly defined


// external declaration 'USHORT_ARRAY_800cf790' @0x800CF790 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[2] @0x800CF790, len = 0x00000004
extern ushort[2] USHORT_ARRAY_800cf790;


// external declaration 'USHORT_ARRAY_800cf794' @0x800CF794 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[2] @0x800CF794, len = 0x00000004
extern ushort[2] USHORT_ARRAY_800cf794;


// external declaration 'USHORT_ARRAY_800cf798' @0x800CF798 was found in the data exported from Ghidra, but not the original debug symbol data.
// ushort[7] @0x800CF798, len = 0x0000000E
extern ushort[7] USHORT_ARRAY_800cf798;


// external declaration '__razController_800cf7fc' @0x800CF7FC was found in the data exported from Ghidra, but not the original debug symbol data.
// __razController @0x800CF7FC, len = 0x00000004
extern struct __razController __razController_800cf7fc;


// external declaration '__razController_800cf800' @0x800CF800 was found in the data exported from Ghidra, but not the original debug symbol data.
// __razController @0x800CF800, len = 0x00000004
extern struct __razController __razController_800cf800;


// external declaration '__razController_800cf804' @0x800CF804 was found in the data exported from Ghidra, but not the original debug symbol data.
// __razController @0x800CF804, len = 0x00000004
extern struct __razController __razController_800cf804;


// external declaration '__CannedSound_800cf844' @0x800CF844 was found in the data exported from Ghidra, but not the original debug symbol data.
// __CannedSound @0x800CF844, len = 0x00000014
extern struct __CannedSound __CannedSound_800cf844;


// external declaration 'LONG_800cf8c0' @0x800CF8C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800CF8C0, len = 0x00000004
extern long LONG_800cf8c0;


// external declaration 'LONG_ARRAY_800cf8c4' @0x800CF8C4 was found in the data exported from Ghidra, but not the original debug symbol data.
// long[6] @0x800CF8C4, len = 0x00000018
extern long[6] LONG_ARRAY_800cf8c4;


// external declaration 'DAT_800cf910' @0x800CF910 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CF910, len = 0x00000004
extern undefined4 DAT_800cf910;


// external declaration 'PTR_DAT_800cf914' @0x800CF914 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CF914, len = 0x00000004
extern pointer PTR_DAT_800cf914;


// external declaration 'PTR_ARRAY_800cf918' @0x800CF918 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CF918, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800cf918;


// external declaration 'PTR_ARRAY_800cf938' @0x800CF938 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[4] @0x800CF938, len = 0x00000010
extern undefined *32[4] PTR_ARRAY_800cf938; // WARNING: no name explicitly defined


// external declaration 's_walfire__800cf978' @0x800CF978 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CF978, len = 0xFFFFFFFFFFFFFFFF
extern string s_walfire__800cf978; // WARNING: no name explicitly defined


// external declaration 's_walboss__800cf984' @0x800CF984 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CF984, len = 0xFFFFFFFFFFFFFFFF
extern string s_walboss__800cf984;


// external declaration 'PTR_LAB_800cf990' @0x800CF990 was found in the data exported from Ghidra, but not the original debug symbol data.
// pointer @0x800CF990, len = 0x00000004
extern pointer PTR_LAB_800cf990;


// external declaration 'PTR_ARRAY_800cf9ec' @0x800CF9EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[10] @0x800CF9EC, len = 0x00000028
extern undefined *32[10] PTR_ARRAY_800cf9ec; // WARNING: no name explicitly defined


// external declaration 'PTR_ARRAY_800cfa18' @0x800CFA18 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined *32[3] @0x800CFA18, len = 0x0000000C
extern undefined *32[3] PTR_ARRAY_800cfa18; // WARNING: no name explicitly defined


// external declaration 's_under_800cfaa4' @0x800CFAA4 was found in the data exported from Ghidra, but not the original debug symbol data.
// string @0x800CFAA4, len = 0xFFFFFFFFFFFFFFFF
extern string s_under_800cfaa4;


// external declaration 'DAT_800cfaac' @0x800CFAAC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CFAAC, len = 0x00000004
extern undefined4 DAT_800cfaac;


// external declaration 'DAT_800cfab0' @0x800CFAB0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CFAB0, len = 0x00000004
extern undefined4 DAT_800cfab0;


// external declaration 'DAT_800cfab4' @0x800CFAB4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800CFAB4, len = 0x00000004
extern undefined4 DAT_800cfab4;


// external declaration 'menuface_t_800cfacc' @0x800CFACC was found in the data exported from Ghidra, but not the original debug symbol data.
// menuface_t @0x800CFACC, len = 0x00000010
extern struct menuface_t menuface_t_800cfacc;


// external declaration 'menuface_t_ARRAY_800cfadc' @0x800CFADC was found in the data exported from Ghidra, but not the original debug symbol data.
// menuface_t[6] @0x800CFADC, len = 0x00000060
extern menuface_t[6] menuface_t_ARRAY_800cfadc;


// external declaration 'point_42' @0x800CFD64 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800CFD64, len = 0x00000002
extern undefined2 point_42;


// external declaration 'PTR_800d0c10' @0x800D0C10 was found in the data exported from Ghidra, but not the original debug symbol data.
// ulong * * @0x800D0C10, len = 0x00000004
extern ulong * * PTR_800d0c10;


// external declaration 'PTR_800d0c18' @0x800D0C18 was found in the data exported from Ghidra, but not the original debug symbol data.
// _PrimPool * @0x800D0C18, len = 0x00000004
extern _PrimPool * PTR_800d0c18;


// external declaration 'LONG_800d0c74' @0x800D0C74 was found in the data exported from Ghidra, but not the original debug symbol data.
// long @0x800D0C74, len = 0x00000004
extern long LONG_800d0c74;


// external declaration 'DISPENV_800d0e54' @0x800D0E54 was found in the data exported from Ghidra, but not the original debug symbol data.
// DISPENV @0x800D0E54, len = 0x00000014
extern struct DISPENV DISPENV_800d0e54;


// external declaration 'DAT_800d0f6c' @0x800D0F6C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D0F6C, len = 0x00000004
extern undefined4 DAT_800d0f6c;


// external declaration 'DAT_800d0f80' @0x800D0F80 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D0F80, len = 0x00000004
extern undefined4 DAT_800d0f80;


// external declaration 'SoundEffectChannel_ARRAY_800d1374' @0x800D1374 was found in the data exported from Ghidra, but not the original debug symbol data.
// SoundEffectChannel[2] @0x800D1374, len = 0x00000048
extern SoundEffectChannel[2] SoundEffectChannel_ARRAY_800d1374;


// external declaration 'SoundEffectChannel_ARRAY_800d13bc' @0x800D13BC was found in the data exported from Ghidra, but not the original debug symbol data.
// SoundEffectChannel[9] @0x800D13BC, len = 0x00000144
extern SoundEffectChannel[9] SoundEffectChannel_ARRAY_800d13bc;


// external declaration 'DVECTOR_800d16f4' @0x800D16F4 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D16F4, len = 0x00000004
extern struct DVECTOR DVECTOR_800d16f4;


// external declaration 'DVECTOR_800d16f8' @0x800D16F8 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D16F8, len = 0x00000004
extern struct DVECTOR DVECTOR_800d16f8;


// external declaration 'DVECTOR_800d16fc' @0x800D16FC was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D16FC, len = 0x00000004
extern struct DVECTOR DVECTOR_800d16fc;


// external declaration 'DVECTOR_ARRAY_800d1700' @0x800D1700 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[3] @0x800D1700, len = 0x0000000C
extern DVECTOR[3] DVECTOR_ARRAY_800d1700;


// external declaration 'DVECTOR_800d170c' @0x800D170C was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D170C, len = 0x00000004
extern struct DVECTOR DVECTOR_800d170c;


// external declaration 'DVECTOR_800d1710' @0x800D1710 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D1710, len = 0x00000004
extern struct DVECTOR DVECTOR_800d1710;


// external declaration 'DVECTOR_ARRAY_800d1714' @0x800D1714 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[2] @0x800D1714, len = 0x00000008
extern DVECTOR[2] DVECTOR_ARRAY_800d1714;


// external declaration 'DVECTOR_800d171c' @0x800D171C was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D171C, len = 0x00000004
extern struct DVECTOR DVECTOR_800d171c;


// external declaration 'DVECTOR_ARRAY_800d1720' @0x800D1720 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[6] @0x800D1720, len = 0x00000018
extern DVECTOR[6] DVECTOR_ARRAY_800d1720;


// external declaration 'DVECTOR_ARRAY_800d1738' @0x800D1738 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[2] @0x800D1738, len = 0x00000008
extern DVECTOR[2] DVECTOR_ARRAY_800d1738;


// external declaration 'DVECTOR_800d1740' @0x800D1740 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D1740, len = 0x00000004
extern struct DVECTOR DVECTOR_800d1740;


// external declaration 'DVECTOR_800d1744' @0x800D1744 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D1744, len = 0x00000004
extern struct DVECTOR DVECTOR_800d1744;


// external declaration 'DVECTOR_ARRAY_800d1748' @0x800D1748 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[6] @0x800D1748, len = 0x00000018
extern DVECTOR[6] DVECTOR_ARRAY_800d1748;


// external declaration 'DVECTOR_ARRAY_800d1760' @0x800D1760 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[8] @0x800D1760, len = 0x00000020
extern DVECTOR[8] DVECTOR_ARRAY_800d1760;


// external declaration 'DVECTOR_800d1780' @0x800D1780 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D1780, len = 0x00000004
extern struct DVECTOR DVECTOR_800d1780;


// external declaration 'DVECTOR_800d1784' @0x800D1784 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR @0x800D1784, len = 0x00000004
extern struct DVECTOR DVECTOR_800d1784;


// external declaration 'DVECTOR_ARRAY_800d1788' @0x800D1788 was found in the data exported from Ghidra, but not the original debug symbol data.
// DVECTOR[15] @0x800D1788, len = 0x0000003C
extern DVECTOR[15] DVECTOR_ARRAY_800d1788;


// external declaration 'EventTimer_ARRAY_800d2a20' @0x800D2A20 was found in the data exported from Ghidra, but not the original debug symbol data.
// EventTimer[3] @0x800D2A20, len = 0x00000054
extern EventTimer[3] EventTimer_ARRAY_800d2a20; // WARNING: no name explicitly defined


// external declaration '_BlockVramEntry_ARRAY_800d4708' @0x800D4708 was found in the data exported from Ghidra, but not the original debug symbol data.
// _BlockVramEntry[9] @0x800D4708, len = 0x000000FC
extern _BlockVramEntry[9] _BlockVramEntry_ARRAY_800d4708;


// external declaration '_G2AnimSegValue_Type_ARRAY_800d4f7c' @0x800D4F7C was found in the data exported from Ghidra, but not the original debug symbol data.
// _G2AnimSegValue_Type[5] @0x800D4F7C, len = 0x00000078
extern _G2AnimSegValue_Type[5] _G2AnimSegValue_Type_ARRAY_800d4f7c;


// external declaration '_G2AnimSegValue_Type_ARRAY_800d4ff4' @0x800D4FF4 was found in the data exported from Ghidra, but not the original debug symbol data.
// _G2AnimSegValue_Type[15] @0x800D4FF4, len = 0x00000168
extern _G2AnimSegValue_Type[15] _G2AnimSegValue_Type_ARRAY_800d4ff4;


// external declaration '_G2AnimInterpInfo_Type_ARRAY_800d57e0' @0x800D57E0 was found in the data exported from Ghidra, but not the original debug symbol data.
// _G2AnimInterpInfo_Type[2] @0x800D57E0, len = 0x00000018
extern _G2AnimInterpInfo_Type[2] _G2AnimInterpInfo_Type_ARRAY_800d57e0;


// external declaration 'PTR_ARRAY_800d5a20' @0x800D5A20 was found in the data exported from Ghidra, but not the original debug symbol data.
// SavedBasic *[37] @0x800D5A20, len = 0x00000094
extern SavedBasic *[37] PTR_ARRAY_800d5a20;


// external declaration '_gp_1' @0x800D5AB4 was found in the data exported from Ghidra, but not the original debug symbol data.
// SavedBasic *[7] @0x800D5AB4, len = 0x0000001C
extern SavedBasic *[7] _gp_1;


// external declaration 's_____800d5c6c' @0x800D5C6C was found in the data exported from Ghidra, but not the original debug symbol data.
// char[13156] @0x800D5C6C, len = 0x00003364
extern char[13156] s_____800d5c6c;


// external declaration 'DAT_800d9248' @0x800D9248 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9248, len = 0x00000004
extern undefined4 DAT_800d9248;


// external declaration 'DAT_800d924c' @0x800D924C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D924C, len = 0x00000004
extern undefined4 DAT_800d924c;


// external declaration 'DAT_800d9250' @0x800D9250 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9250, len = 0x00000004
extern undefined4 DAT_800d9250;


// external declaration 'DAT_800d9254' @0x800D9254 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9254, len = 0x00000004
extern undefined4 DAT_800d9254;


// external declaration 'DAT_800d9258' @0x800D9258 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9258, len = 0x00000004
extern undefined4 DAT_800d9258;


// external declaration 'DAT_800d925c' @0x800D925C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D925C, len = 0x00000004
extern undefined4 DAT_800d925c;


// external declaration 'DAT_800d9260' @0x800D9260 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9260, len = 0x00000004
extern undefined4 DAT_800d9260;


// external declaration 'DAT_800d9264' @0x800D9264 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9264, len = 0x00000004
extern undefined4 DAT_800d9264;


// external declaration 'DAT_800d9268' @0x800D9268 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9268, len = 0x00000004
extern undefined4 DAT_800d9268;


// external declaration 'DAT_800d9270' @0x800D9270 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9270, len = 0x00000004
extern undefined4 DAT_800d9270;


// external declaration 'DAT_800d9274' @0x800D9274 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9274, len = 0x00000004
extern undefined4 DAT_800d9274;


// external declaration 'DAT_800d9278' @0x800D9278 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D9278, len = 0x00000004
extern undefined4 DAT_800d9278;


// external declaration 'DAT_800d927c' @0x800D927C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800D927C, len = 0x00000004
extern undefined4 DAT_800d927c;


// external declaration 'DAT_800dab98' @0x800DAB98 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAB98, len = 0x00000004
extern undefined4 DAT_800dab98;


// external declaration 'DAT_800dac44' @0x800DAC44 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAC44, len = 0x00000004
extern undefined4 DAT_800dac44;


// external declaration 'DAT_800dac48' @0x800DAC48 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAC48, len = 0x00000004
extern undefined4 DAT_800dac48;


// external declaration 'DAT_800dac68' @0x800DAC68 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAC68, len = 0x00000004
extern undefined4 DAT_800dac68;


// external declaration 'DAT_800dac74' @0x800DAC74 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAC74, len = 0x00000004
extern undefined4 DAT_800dac74;


// external declaration 'DAT_800dac78' @0x800DAC78 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAC78, len = 0x00000004
extern undefined4 DAT_800dac78;


// external declaration 'DAT_800dac95' @0x800DAC95 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAC95, len = 0x00000001
extern undefined1 DAT_800dac95;


// external declaration 'DAT_800dac96' @0x800DAC96 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAC96, len = 0x00000001
extern undefined1 DAT_800dac96;


// external declaration 'DAT_800dad34' @0x800DAD34 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAD34, len = 0x00000004
extern undefined4 DAT_800dad34;


// external declaration 'DAT_800dad38' @0x800DAD38 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAD38, len = 0x00000004
extern undefined4 DAT_800dad38;


// external declaration 'DAT_800dad58' @0x800DAD58 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAD58, len = 0x00000004
extern undefined4 DAT_800dad58;


// external declaration 'DAT_800dad64' @0x800DAD64 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAD64, len = 0x00000004
extern undefined4 DAT_800dad64;


// external declaration 'DAT_800dad68' @0x800DAD68 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAD68, len = 0x00000004
extern undefined4 DAT_800dad68;


// external declaration 'DAT_800dad85' @0x800DAD85 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAD85, len = 0x00000001
extern undefined1 DAT_800dad85;


// external declaration 'DAT_800dae18' @0x800DAE18 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAE18, len = 0x00000001
extern undefined1 DAT_800dae18;


// external declaration 'DAT_800dae19' @0x800DAE19 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAE19, len = 0x00000001
extern undefined1 DAT_800dae19;


// external declaration 'DAT_800dae1a' @0x800DAE1A was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAE1A, len = 0x00000001
extern undefined1 DAT_800dae1a;


// external declaration 'DAT_800dae1c' @0x800DAE1C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAE1C, len = 0x00000004
extern undefined4 DAT_800dae1c;


// external declaration 'DAT_800dae20' @0x800DAE20 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DAE20, len = 0x00000002
extern undefined2 DAT_800dae20;


// external declaration 'DAT_800dae24' @0x800DAE24 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAE24, len = 0x00000004
extern undefined4 DAT_800dae24;


// external declaration 'DAT_800dae28' @0x800DAE28 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAE28, len = 0x00000004
extern undefined4 DAT_800dae28;


// external declaration 'DAT_800dae2c' @0x800DAE2C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DAE2C, len = 0x00000004
extern undefined4 DAT_800dae2c;


// external declaration 'DAT_800dae38' @0x800DAE38 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAE38, len = 0x00000001
extern undefined1 DAT_800dae38;


// external declaration 'DAT_800dae3a' @0x800DAE3A was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DAE3A, len = 0x00000001
extern undefined1 DAT_800dae3a;


// external declaration 'DAT_800db418' @0x800DB418 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DB418, len = 0x00000004
extern undefined4 DAT_800db418;


// external declaration 'DAT_800db41c' @0x800DB41C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DB41C, len = 0x00000004
extern undefined4 DAT_800db41c;


// external declaration 'DAT_800db420' @0x800DB420 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DB420, len = 0x00000004
extern undefined4 DAT_800db420;


// external declaration 'DAT_800db448' @0x800DB448 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DB448, len = 0x00000004
extern undefined4 DAT_800db448;


// external declaration 'DAT_800dca18' @0x800DCA18 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DCA18, len = 0x00000001
extern undefined1 DAT_800dca18;


// external declaration 'DAT_800dca1a' @0x800DCA1A was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DCA1A, len = 0x00000004
extern undefined4 DAT_800dca1a;


// external declaration 'DAT_800dca1e' @0x800DCA1E was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DCA1E, len = 0x00000001
extern undefined1 DAT_800dca1e;


// external declaration 'DAT_800dca22' @0x800DCA22 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DCA22, len = 0x00000004
extern undefined4 DAT_800dca22;


// external declaration 'DAT_800dca38' @0x800DCA38 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DCA38, len = 0x00000001
extern undefined1 DAT_800dca38;


// external declaration 'DAT_800dcaa4' @0x800DCAA4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DCAA4, len = 0x00000004
extern undefined4 DAT_800dcaa4;


// external declaration 'DAT_800dd21c' @0x800DD21C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD21C, len = 0x00000004
extern undefined4 DAT_800dd21c;


// external declaration 'DAT_800dd22c' @0x800DD22C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD22C, len = 0x00000004
extern undefined4 DAT_800dd22c;


// external declaration 'DAT_800dd230' @0x800DD230 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD230, len = 0x00000004
extern undefined4 DAT_800dd230;


// external declaration 'DAT_800dd234' @0x800DD234 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD234, len = 0x00000004
extern undefined4 DAT_800dd234;


// external declaration 'DAT_800dd238' @0x800DD238 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD238, len = 0x00000004
extern undefined4 DAT_800dd238;


// external declaration 'DAT_800dd23c' @0x800DD23C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD23C, len = 0x00000004
extern undefined4 DAT_800dd23c;


// external declaration 'DAT_800dd240' @0x800DD240 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD240, len = 0x00000004
extern undefined4 DAT_800dd240;


// external declaration 'DAT_800dd244' @0x800DD244 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD244, len = 0x00000004
extern undefined4 DAT_800dd244;


// external declaration 'DAT_800dd248' @0x800DD248 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD248, len = 0x00000004
extern undefined4 DAT_800dd248;


// external declaration 'DAT_800dd24c' @0x800DD24C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD24C, len = 0x00000004
extern undefined4 DAT_800dd24c;


// external declaration 'DAT_800dd250' @0x800DD250 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD250, len = 0x00000004
extern undefined4 DAT_800dd250;


// external declaration 'DAT_800dd254' @0x800DD254 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DD254, len = 0x00000002
extern undefined2 DAT_800dd254;


// external declaration 'DAT_800dd258' @0x800DD258 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD258, len = 0x00000004
extern undefined4 DAT_800dd258;


// external declaration 'DAT_800dd25c' @0x800DD25C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD25C, len = 0x00000004
extern undefined4 DAT_800dd25c;


// external declaration 'DAT_800dd260' @0x800DD260 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD260, len = 0x00000004
extern undefined4 DAT_800dd260;


// external declaration 'DAT_800dd264' @0x800DD264 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD264, len = 0x00000004
extern undefined4 DAT_800dd264;


// external declaration 'DAT_800dd268' @0x800DD268 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD268, len = 0x00000004
extern undefined4 DAT_800dd268;


// external declaration 'DAT_800dd26c' @0x800DD26C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD26C, len = 0x00000004
extern undefined4 DAT_800dd26c;


// external declaration 'DAT_800dd270' @0x800DD270 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD270, len = 0x00000004
extern undefined4 DAT_800dd270;


// external declaration 'DAT_800dd274' @0x800DD274 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD274, len = 0x00000004
extern undefined4 DAT_800dd274;


// external declaration 'DAT_800dd278' @0x800DD278 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD278, len = 0x00000004
extern undefined4 DAT_800dd278;


// external declaration 'DAT_800dd27c' @0x800DD27C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD27C, len = 0x00000004
extern undefined4 DAT_800dd27c;


// external declaration '_spu_RQ' @0x800DD288 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD288, len = 0x00000004
extern undefined4 _spu_RQ;


// external declaration 'DAT_800dd28c' @0x800DD28C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD28C, len = 0x00000004
extern undefined4 DAT_800dd28c;


// external declaration 'DAT_800dd290' @0x800DD290 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD290, len = 0x00000004
extern undefined4 DAT_800dd290;


// external declaration 'DAT_800dd294' @0x800DD294 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD294, len = 0x00000004
extern undefined4 DAT_800dd294;


// external declaration 'DAT_800dd298' @0x800DD298 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD298, len = 0x00000004
extern undefined4 DAT_800dd298;


// external declaration 'DAT_800dd29c' @0x800DD29C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD29C, len = 0x00000004
extern undefined4 DAT_800dd29c;


// external declaration 'DAT_800dd2a8' @0x800DD2A8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD2A8, len = 0x00000004
extern undefined4 DAT_800dd2a8;


// external declaration 'DAT_800dd2b8' @0x800DD2B8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2B8, len = 0x00000001
extern undefined1 DAT_800dd2b8;


// external declaration 'DAT_800dd2b9' @0x800DD2B9 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2B9, len = 0x00000001
extern undefined1 DAT_800dd2b9;


// external declaration 'DAT_800dd2c0' @0x800DD2C0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2C0, len = 0x00000001
extern undefined1 DAT_800dd2c0;


// external declaration 'DAT_800dd2c1' @0x800DD2C1 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2C1, len = 0x00000001
extern undefined1 DAT_800dd2c1;


// external declaration 'DAT_800dd2c8' @0x800DD2C8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2C8, len = 0x00000001
extern undefined1 DAT_800dd2c8;


// external declaration 'DAT_800dd2c9' @0x800DD2C9 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD2C9, len = 0x00000001
extern undefined1 DAT_800dd2c9;


// external declaration 'DAT_800dd2d0' @0x800DD2D0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD2D0, len = 0x00000004
extern undefined4 DAT_800dd2d0;


// external declaration 'DAT_800dd2d4' @0x800DD2D4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD2D4, len = 0x00000004
extern undefined4 DAT_800dd2d4;


// external declaration 'DAT_800dd2d8' @0x800DD2D8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD2D8, len = 0x00000004
extern undefined4 DAT_800dd2d8;


// external declaration 'DAT_800dd2e8' @0x800DD2E8 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD2E8, len = 0x00000004
extern undefined4 DAT_800dd2e8;


// external declaration 'DAT_800dd2ec' @0x800DD2EC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DD2EC, len = 0x00000002
extern undefined2 DAT_800dd2ec;


// external declaration 'DAT_800dd2ee' @0x800DD2EE was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DD2EE, len = 0x00000002
extern undefined2 DAT_800dd2ee;


// external declaration 'DAT_800dd2f0' @0x800DD2F0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DD2F0, len = 0x00000002
extern undefined2 DAT_800dd2f0;


// external declaration 'DAT_800dd2f2' @0x800DD2F2 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined2 @0x800DD2F2, len = 0x00000002
extern undefined2 DAT_800dd2f2;


// external declaration 'DAT_800dd300' @0x800DD300 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD300, len = 0x00000004
extern undefined4 DAT_800dd300;


// external declaration 'DAT_800dd310' @0x800DD310 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD310, len = 0x00000001
extern undefined1 DAT_800dd310;


// external declaration 'DAT_800dd311' @0x800DD311 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined1 @0x800DD311, len = 0x00000001
extern undefined1 DAT_800dd311;


// external declaration 'DAT_800dd330' @0x800DD330 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD330, len = 0x00000004
extern undefined4 DAT_800dd330;


// external declaration 'DAT_800dd364' @0x800DD364 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD364, len = 0x00000004
extern undefined4 DAT_800dd364;


// external declaration 'DAT_800dd36c' @0x800DD36C was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD36C, len = 0x00000004
extern undefined4 DAT_800dd36c;


// external declaration 'DAT_800dd370' @0x800DD370 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x800DD370, len = 0x00000004
extern undefined4 DAT_800dd370;


// external declaration 'DAT_80180000' @0x80180000 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x80180000, len = 0x00000004
extern undefined4 DAT_80180000;


// external declaration 'DAT_801fffec' @0x801FFFEC was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x801FFFEC, len = 0x00000004
extern undefined4 DAT_801fffec;


// external declaration 'DAT_801ffff0' @0x801FFFF0 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x801FFFF0, len = 0x00000004
extern undefined4 DAT_801ffff0;


// external declaration 'DAT_801ffff4' @0x801FFFF4 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x801FFFF4, len = 0x00000004
extern undefined4 DAT_801ffff4;


// external declaration 'DAT_80380000' @0x80380000 was found in the data exported from Ghidra, but not the original debug symbol data.
// undefined4 @0x80380000, len = 0x00000004
extern undefined4 DAT_80380000;


// external declaration 'Elf32_RegInfo_MIPS__reginfo__800d0000' @0x800D0000 was found in the data exported from Ghidra, but not the original debug symbol data.
// Elf32_RegInfo_MIPS @0x800D0000, len = 0x00000018
extern struct Elf32_RegInfo_MIPS Elf32_RegInfo_MIPS__reginfo__800d0000;

/* End external declarations */

#endif
