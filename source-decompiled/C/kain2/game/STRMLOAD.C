#include "THISDUST.H"
#include "STRMLOAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_NextLoadFromHead()
 // line 37, offset 0x8005fae8
	/* begin block 1 */
		// Start line: 74
	/* end block 1 */
	// End Line: 75

	/* begin block 2 */
		// Start line: 75
	/* end block 2 */
	// End Line: 76

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_NextLoadFromHead(void)

{
  FUN_80059028();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_NextLoadCanFail()
 // line 42, offset 0x8005faf8
	/* begin block 1 */
		// Start line: 84
	/* end block 1 */
	// End Line: 85

	/* begin block 2 */
		// Start line: 85
	/* end block 2 */
	// End Line: 86

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_NextLoadCanFail(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_NextLoadAsNormal()
 // line 47, offset 0x8005fb08
	/* begin block 1 */
		// Start line: 94
	/* end block 1 */
	// End Line: 95

	/* begin block 2 */
		// Start line: 95
	/* end block 2 */
	// End Line: 96

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_NextLoadAsNormal(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_InitLoader(char *bigFileName /*$a0*/, char *voiceFileName /*$a1*/)
 // line 53, offset 0x8005fb18
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x8005FB18
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8005FB5C
	// End Line: 69

	/* begin block 2 */
		// Start line: 106
	/* end block 2 */
	// End Line: 107

void STREAM_InitLoader(char *bigFileName,char *voiceFileName)

{
  loadFromHead = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RemoveQueueHead()
 // line 73, offset 0x8005fb6c
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x8005FB6C
		// Variables:
	// 		struct _LoadQueueEntry *entry; // $a0
	/* end block 1 */
	// End offset: 0x8005FB8C
	// End Line: 80

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

	/* begin block 3 */
		// Start line: 155
	/* end block 3 */
	// End Line: 156

	/* begin block 4 */
		// Start line: 156
	/* end block 4 */
	// End Line: 157

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_RemoveQueueHead(void)

{
  int in_v1;
  int *in_a0;
  int in_a1;
  
  LoadQueue[32].loadEntry.memType = 0;
  LoadQueue[32].loadEntry.posInFile = 0;
  LoadQueue[32].loadEntry.mallocFailOk = 0;
  do {
    *in_a0 = in_v1;
    in_a0 = in_a0 + -0x10;
    in_a1 = in_a1 + -1;
    in_v1 = in_v1 + -0x40;
  } while (-1 < in_a1);
  LoadQueue[31].loadEntry.checksumType = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RemoveQueueEntry(struct _LoadQueueEntry *entry /*$a0*/, struct _LoadQueueEntry *prev /*$a1*/)
 // line 85, offset 0x8005fbac
	/* begin block 1 */
		// Start line: 181
	/* end block 1 */
	// End Line: 182

	/* begin block 2 */
		// Start line: 182
	/* end block 2 */
	// End Line: 183

void STREAM_RemoveQueueEntry(_LoadQueueEntry *entry,_LoadQueueEntry *prev)

{
  _LoadQueueEntry *p_Var1;
  int in_v0;
  
  if (in_v0 == 0) {
    LoadQueue[32].loadEntry.posInFile = 0;
  }
  p_Var1 = entry;
  LoadQueue[32].loadEntry.memType = in_v0;
  *(long *)&entry->next = LoadQueue[32].loadEntry.checksumType;
  LoadQueue[32].loadEntry.checksumType = (long)p_Var1;
  LoadQueue[32].loadEntry.mallocFailOk = LoadQueue[32].loadEntry.mallocFailOk + -1;
  return;
}



// decompiled code
// original method signature: 
// struct _LoadQueueEntry * /*$ra*/ STREAM_AddQueueEntryToTail()
 // line 102, offset 0x8005fc08
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x8005FC08
		// Variables:
	// 		struct _LoadQueueEntry *entry; // $s0
	/* end block 1 */
	// End offset: 0x8005FC50
	// End Line: 118

	/* begin block 2 */
		// Start line: 218
	/* end block 2 */
	// End Line: 219

/* WARNING: Unknown calling convention yet parameter storage is locked */

_LoadQueueEntry * STREAM_AddQueueEntryToTail(void)

{
  long *plVar1;
  long *in_a0;
  long *in_a1;
  
  *in_a1 = *in_a0;
  LoadQueue[32].loadEntry.mallocFailOk = LoadQueue[32].loadEntry.mallocFailOk + -1;
  plVar1 = in_a0;
  *in_a0 = LoadQueue[32].loadEntry.checksumType;
  LoadQueue[32].loadEntry.checksumType = (long)plVar1;
  return (_LoadQueueEntry *)LoadQueue[32].loadEntry.mallocFailOk;
}



// decompiled code
// original method signature: 
// struct _LoadQueueEntry * /*$ra*/ STREAM_AddQueueEntryToHead()
 // line 123, offset 0x8005fc74
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x8005FC74
		// Variables:
	// 		struct _LoadQueueEntry *entry; // $s0
	/* end block 1 */
	// End offset: 0x8005FD08
	// End Line: 148

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

/* WARNING: Unknown calling convention yet parameter storage is locked */

_LoadQueueEntry * STREAM_AddQueueEntryToHead(void)

{
  _LoadQueueEntry **in_v1;
  _LoadQueueEntry *unaff_s0;
  
  *in_v1 = unaff_s0;
  LoadQueue[32].loadEntry.posInFile = (long)unaff_s0;
  LoadQueue[32].loadEntry.mallocFailOk = LoadQueue[32].loadEntry.mallocFailOk + 1;
  return unaff_s0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_IsCdBusy(long *numberInQueue /*$a0*/)
 // line 157, offset 0x8005fd28
	/* begin block 1 */
		// Start line: 343
	/* end block 1 */
	// End Line: 344

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

int STREAM_IsCdBusy(long *numberInQueue)

{
  int in_v0;
  long unaff_s0;
  
  if (in_v0 == 0) {
    LoadQueue[32].loadEntry.posInFile = unaff_s0;
  }
  LoadQueue[32].loadEntry.mallocFailOk = LoadQueue[32].loadEntry.mallocFailOk + 1;
  return unaff_s0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_PollLoadQueue()
 // line 174, offset 0x8005fd48
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x8005FD48

		/* begin block 1.1 */
			// Start line: 180
			// Start offset: 0x8005FD68
			// Variables:
		// 		struct _LoadQueueEntry *queueEntry; // $s0

			/* begin block 1.1.1 */
				// Start line: 210
				// Start offset: 0x8005FE10
				// Variables:
			// 		long size; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8005FE3C
			// End Line: 216

			/* begin block 1.1.2 */
				// Start line: 254
				// Start offset: 0x8005FF14
				// Variables:
			// 		struct _LoadQueueEntry *newQueue; // $v0
			/* end block 1.1.2 */
			// End offset: 0x8005FF14
			// End Line: 254

			/* begin block 1.1.3 */
				// Start line: 293
				// Start offset: 0x8005FFAC
				// Variables:
			// 		struct _LoadQueueEntry *newQueue; // $v0
			/* end block 1.1.3 */
			// End offset: 0x8005FFAC
			// End Line: 293
		/* end block 1.1 */
		// End offset: 0x800600B4
		// End Line: 409
	/* end block 1 */
	// End offset: 0x800600B8
	// End Line: 412

	/* begin block 2 */
		// Start line: 377
	/* end block 2 */
	// End Line: 378

/* WARNING: Unknown calling convention yet parameter storage is locked */

int STREAM_PollLoadQueue(void)

{
  int unaff_s0;
  
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _LoadQueueEntry * /*$ra*/ STREAM_SetUpQueueEntry(char *fileName /*$s2*/, void *retFunc /*$s3*/, void *retData /*$s4*/, void *retData2 /*$s5*/, void **retPointer /*stack 16*/, int fromhead /*stack 20*/)
 // line 414, offset 0x800600c8
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x800600C8
		// Variables:
	// 		struct _LoadQueueEntry *currentEntry; // $s0
	/* end block 1 */
	// End offset: 0x8006018C
	// End Line: 448

	/* begin block 2 */
		// Start line: 865
	/* end block 2 */
	// End Line: 866

_LoadQueueEntry *
STREAM_SetUpQueueEntry
          (char *fileName,void *retFunc,void *retData,void *retData2,void **retPointer,int fromhead)

{
  undefined2 in_v0;
  int iVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 4) = in_v0;
  iVar1 = FUN_80037e60();
  if (iVar1 == 0) {
    FUN_8005fb9c();
  }
  return (_LoadQueueEntry *)LoadQueue[32].loadEntry.mallocFailOk;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_QueueNonblockingLoads(char *fileName /*$a0*/, unsigned char memType /*$s0*/, void *retFunc /*$a2*/, void *retData /*$a3*/, void *retData2 /*stack 16*/, void **retPointer /*stack 20*/, long relocateBinary /*stack 24*/)
 // line 452, offset 0x800601b4
	/* begin block 1 */
		// Start line: 453
		// Start offset: 0x800601B4
		// Variables:
	// 		struct _LoadQueueEntry *currentEntry; // $v1
	// 		int fromhead; // $v0
	/* end block 1 */
	// End offset: 0x8006022C
	// End Line: 472

	/* begin block 2 */
		// Start line: 943
	/* end block 2 */
	// End Line: 944

void STREAM_QueueNonblockingLoads
               (char *fileName,uchar memType,void *retFunc,void *retData,void *retData2,
               void **retPointer,long relocateBinary)

{
  uint in_v0;
  uint *unaff_s1;
  
  *unaff_s1 = in_v0 | 0xfcfd;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_LoadToAddress(char *fileName /*$a0*/, void *loadAddr /*$s0*/, long relocateBinary /*$s1*/)
 // line 475, offset 0x80060240
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x80060240
		// Variables:
	// 		struct _LoadQueueEntry *currentEntry; // $v0
	/* end block 1 */
	// End offset: 0x80060294
	// End Line: 485

	/* begin block 2 */
		// Start line: 1011
	/* end block 2 */
	// End Line: 1012

void LOAD_LoadToAddress(char *fileName,void *loadAddr,long relocateBinary)

{
  undefined2 uVar1;
  undefined4 in_v0;
  int in_v1;
  int unaff_s0;
  undefined unaff_s1;
  
  *(undefined *)(in_v1 + 6) = unaff_s1;
  *(undefined4 *)(in_v1 + 0x2c) = in_v0;
  if (unaff_s0 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 1;
  }
  *(undefined2 *)(in_v1 + 4) = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_NonBlockingBinaryLoad(char *fileName /*$a0*/, void *retFunc /*$t0*/, void *retData /*$t1*/, void *retData2 /*$a3*/, void **retPointer /*stack 16*/, int memType /*stack 20*/)
 // line 498, offset 0x800602a8
	/* begin block 1 */
		// Start line: 1060
	/* end block 1 */
	// End Line: 1061

void LOAD_NonBlockingBinaryLoad
               (char *fileName,void *retFunc,void *retData,void *retData2,void **retPointer,
               int memType)

{
  int in_v0;
  int iVar1;
  undefined2 in_v1;
  undefined unaff_s1;
  
  *(undefined2 *)(in_v0 + 4) = in_v1;
  *(undefined *)(in_v0 + 6) = unaff_s1;
  *(undefined *)(in_v0 + 7) = 0;
  do {
    iVar1 = FUN_8005fd78();
  } while (iVar1 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_NonBlockingFileLoad(char *fileName /*$a0*/, void *retFunc /*$v1*/, void *retData /*$t0*/, void *retData2 /*$a3*/, void **retPointer /*stack 16*/, int memType /*stack 20*/)
 // line 505, offset 0x800602ec
	/* begin block 1 */
		// Start line: 1078
	/* end block 1 */
	// End Line: 1079

void LOAD_NonBlockingFileLoad
               (char *fileName,void *retFunc,void *retData,void *retData2,void **retPointer,
               int memType)

{
  byte in_stack_0000003c;
  
  FUN_800601e4(fileName,(uint)in_stack_0000003c);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_NonBlockingBufferedLoad(char *fileName /*$a0*/, void *retFunc /*$v0*/, void *retData /*$v1*/, void *retData2 /*$a3*/)
 // line 511, offset 0x8006032c
	/* begin block 1 */
		// Start line: 1092
	/* end block 1 */
	// End Line: 1093

void LOAD_NonBlockingBufferedLoad(char *fileName,void *retFunc,void *retData,void *retData2)

{
  void *pvStack00000010;
  undefined4 uStack00000018;
  byte in_stack_0000003c;
  
  uStack00000018 = 0;
  pvStack00000010 = retData2;
  FUN_800601e4(fileName,(uint)in_stack_0000003c);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ LOAD_IsXAInQueue()
 // line 516, offset 0x80060368
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x80060368
		// Variables:
	// 		struct _LoadQueueEntry *entry; // $v1
	/* end block 1 */
	// End offset: 0x800603A0
	// End Line: 527

	/* begin block 2 */
		// Start line: 1103
	/* end block 2 */
	// End Line: 1104

	/* begin block 3 */
		// Start line: 1104
	/* end block 3 */
	// End Line: 1105

	/* begin block 4 */
		// Start line: 1106
	/* end block 4 */
	// End Line: 1107

/* WARNING: Unknown calling convention yet parameter storage is locked */

int LOAD_IsXAInQueue(void)

{
  int iVar1;
  undefined4 in_a0;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  uStack00000014 = 0;
  uStack00000018 = 0;
  iVar1 = FUN_800601e4(in_a0,0);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_PlayXA(int number /*$s0*/)
 // line 529, offset 0x800603b0
	/* begin block 1 */
		// Start line: 530
		// Start offset: 0x800603B0
		// Variables:
	// 		struct _LoadQueueEntry *currentEntry; // $v0
	/* end block 1 */
	// End offset: 0x800603B0
	// End Line: 530

	/* begin block 2 */
		// Start line: 1131
	/* end block 2 */
	// End Line: 1132

void LOAD_PlayXA(int number)

{
  uint in_v0;
  int *in_v1;
  
  while( true ) {
    if (in_v0 - 8 < 2) {
      return;
    }
    in_v1 = (int *)*in_v1;
    if (in_v1 == (int *)0x0) break;
    in_v0 = (uint)*(ushort *)(in_v1 + 1);
  }
  return;
}



// decompiled code
// original method signature: 
// long * /*$ra*/ LOAD_ReadFile(char *fileName /*$a0*/, unsigned char memType /*$a1*/)
 // line 542, offset 0x800603e0
	/* begin block 1 */
		// Start line: 543
		// Start offset: 0x800603E0
		// Variables:
	// 		void *loadAddr; // stack offset -16
	/* end block 1 */
	// End offset: 0x80060418
	// End Line: 550

	/* begin block 2 */
		// Start line: 1158
	/* end block 2 */
	// End Line: 1159

long * LOAD_ReadFile(char *fileName,uchar memType)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_8005fc38();
  *(char **)(plVar1 + 2) = fileName;
  *(undefined2 *)(plVar1 + 1) = 8;
  return plVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_ChangeDirectory(char *name /*$s1*/)
 // line 553, offset 0x8006042c
	/* begin block 1 */
		// Start line: 554
		// Start offset: 0x8006042C
		// Variables:
	// 		struct _LoadQueueEntry *currentEntry; // $s0
	/* end block 1 */
	// End offset: 0x8006042C
	// End Line: 554

	/* begin block 2 */
		// Start line: 1183
	/* end block 2 */
	// End Line: 1184

void LOAD_ChangeDirectory(char *name)

{
  int iVar1;
  undefined4 uStack00000018;
  
  uStack00000018 = 0;
  FUN_800601e4();
  do {
    iVar1 = FUN_8005fd78();
  } while (iVar1 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_AbortDirectoryChange(char *name /*$a0*/)
 // line 569, offset 0x80060478
	/* begin block 1 */
		// Start line: 570
		// Start offset: 0x80060478

		/* begin block 1.1 */
			// Start line: 574
			// Start offset: 0x80060488
			// Variables:
		// 		struct _LoadQueueEntry *entry; // $a0
		// 		struct _LoadQueueEntry *prev; // $a1
		// 		long hash; // $v1
		/* end block 1.1 */
		// End offset: 0x800604F0
		// End Line: 589
	/* end block 1 */
	// End offset: 0x800604F0
	// End Line: 591

	/* begin block 2 */
		// Start line: 1216
	/* end block 2 */
	// End Line: 1217

	/* begin block 3 */
		// Start line: 1218
	/* end block 3 */
	// End Line: 1219

void LOAD_AbortDirectoryChange(char *name)

{
  int unaff_s0;
  
  gCurDir = FUN_800377f0();
  *(int *)(unaff_s0 + 0xc) = gCurDir;
  *(undefined4 *)(unaff_s0 + 8) = 0;
  *(undefined2 *)(unaff_s0 + 4) = 10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_AbortFileLoad(char *fileName /*$a0*/, void *retFunc /*$s3*/)
 // line 593, offset 0x80060500
	/* begin block 1 */
		// Start line: 594
		// Start offset: 0x80060500

		/* begin block 1.1 */
			// Start line: 597
			// Start offset: 0x80060524
			// Variables:
		// 		struct _LoadQueueEntry *entry; // $s0
		// 		struct _LoadQueueEntry *prev; // $s1
		// 		long hash; // $v1
		/* end block 1.1 */
		// End offset: 0x800605B4
		// End Line: 623
	/* end block 1 */
	// End offset: 0x800605B4
	// End Line: 624

	/* begin block 2 */
		// Start line: 1276
	/* end block 2 */
	// End Line: 1277

	/* begin block 3 */
		// Start line: 1277
	/* end block 3 */
	// End Line: 1278

void LOAD_AbortFileLoad(void)

{
  FUN_80060520();
  return;
}





