#ifndef SAVEINFO_H
#define SAVEINFO_H


extern void SAVE_GetInstanceRotation(struct _Instance *instance, struct _SmallRotation *vector); // 0x800B5560

extern void SAVE_ClearMemory(struct GameTracker *gameTracker); // 0x800B55E8

extern void SAVE_Init(struct GameTracker *gt); // 0x800B5668

extern void * SAVE_GetSavedBlock(long saveType, long extraSize); // 0x800B56EC

extern long SAVE_PurgeAMemoryBlock(); // 0x800B5808

extern long SAVE_SaveableInstance(struct _Instance *instance); // 0x800B58A8

extern struct _SavedIntro * SAVE_UpdateSavedIntro(struct _Instance *instance, struct Level *level, struct _SavedIntro *savedIntro, struct evControlSaveDataData *extraData); // 0x800B59A4

extern struct _SavedIntroWithIntro * SAVE_UpdateSavedIntroWithIntro(struct _Instance *instance, struct Level *level, struct _SavedIntroWithIntro *savedIntro, struct evControlSaveDataData *extraData); // 0x800B5AB0

extern struct SavedBasic * SAVE_GetSavedEvent(long areaID, long eventNumber); // 0x800B5BE8

extern void SAVE_DeleteSavedEvent(long areaID, long eventNumber); // 0x800B5C90

extern struct SavedBasic * SAVE_GetSavedNextEvent(long areaID, struct SavedBasic *curSave); // 0x800B5CC0

extern void SAVE_BufferIntro(struct SavedBasic *savedIntro); // 0x800B5D64

extern void SAVE_IntroduceBufferIntros(); // 0x800B5DE4

extern void SAVE_IntroForStreamID(struct _StreamUnit *streamUnit); // 0x800B5EC0

extern long SAVE_HasSavedIntro(struct Intro *intro, long currentStreamID); // 0x800B5F9C

extern struct SavedLevel * SAVE_HasSavedLevel(long areaID); // 0x800B602C

extern void SAVE_UpdateLevelWithSave(struct _StreamUnit *streamUnit); // 0x800B6090

extern struct SavedLevel * SAVE_CreatedSavedLevel(long areaID, struct Level *level); // 0x800B61DC

extern void SAVE_DeleteBlock(struct SavedBasic *savedBlock); // 0x800B6398

extern void SAVE_Instance(struct _Instance *instance, struct Level *level); // 0x800B6424

extern void SAVE_DeleteInstance(struct _Instance *instance); // 0x800B6658

extern void SAVE_SetDeadDeadBit(int uniqueID, long set); // 0x800B6728

extern void SAVE_RestoreGlobalSavePointer(); // 0x800B67EC

extern long SAVE_IsUniqueIDDeadDead(long uniqueID); // 0x800B6844

extern long SAVE_IsIntroDeadDead(struct Intro *intro); // 0x800B68F0

extern void SAVE_DoInstanceDeadDead(struct _Instance *instance); // 0x800B6914

extern void SAVE_MarkDeadDead(struct _Instance *instance); // 0x800B6944

extern void SAVE_UndestroyInstance(struct _Instance *instance); // 0x800B6958

extern struct SavedIntroSmall * SAVE_GetSavedSmallIntro(struct _Instance *instance); // 0x800B697C

extern struct SavedIntroSpline * SAVE_GetIntroSpline(struct _Instance *instance); // 0x800B69E8

extern void SAVE_UpdateGlobalSaveTracker(); // 0x800B6A54

extern void SAVE_RestoreGlobalSaveTracker(); // 0x800B6AE8

extern void SAVE_SaveEverythingInMemory(); // 0x800B6BB8

extern void SAVE_SaveGame(); // 0x800B6C6C

extern void SAVE_RestoreGame(); // 0x800B6CB8

extern long SAVE_SizeOfFreeSpace(); // 0x800B6D1C


#endif
