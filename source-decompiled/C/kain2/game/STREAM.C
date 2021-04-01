#include "THISDUST.H"
#include "STREAM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_FillOutFileNames(char *baseAreaName /*$s0*/, char *dramName /*$s1*/, char *vramName /*$s2*/, char *sfxName /*$s3*/)
 // line 162, offset 0x800584e4
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x800584E4
		// Variables:
	// 		char text[16]; // stack offset -40
	// 		char *number; // $v0
	/* end block 1 */
	// End offset: 0x80058588
	// End Line: 187

	/* begin block 2 */
		// Start line: 324
	/* end block 2 */
	// End Line: 325

void STREAM_FillOutFileNames(char *baseAreaName,char *dramName,char *vramName,char *sfxName)

{
  int in_v0;
  uint in_v1;
  
  *(uint *)(in_v0 + 0x4c8) = in_v1 | (uint)baseAreaName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_AbortAreaLoad(char *baseAreaName /*$s0*/)
 // line 192, offset 0x800585a4
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x800585A4
		// Variables:
	// 		char vramName[80]; // stack offset -88
	/* end block 1 */
	// End offset: 0x800585A4
	// End Line: 193

	/* begin block 2 */
		// Start line: 387
	/* end block 2 */
	// End Line: 388

void STREAM_AbortAreaLoad(char *baseAreaName)

{
  undefined4 in_a1;
  
  FUN_800741fc(baseAreaName,in_a1,&stack0x00000010);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_Init()
 // line 204, offset 0x800585ec
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800585EC
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80058610
	// End Line: 214

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

	/* begin block 3 */
		// Start line: 415
	/* end block 3 */
	// End Line: 416

	/* begin block 4 */
		// Start line: 417
	/* end block 4 */
	// End Line: 418

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_Init(void)

{
  FUN_800604a8();
  FUN_80060530(&stack0x00000010,FUN_8007407c);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindObjectName(char *name /*$s2*/)
 // line 216, offset 0x80058618
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x80058618
		// Variables:
	// 		int i; // $s0
	// 		struct _ObjectTracker *otr; // $s1
	/* end block 1 */
	// End offset: 0x8005866C
	// End Line: 228

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

int FindObjectName(char *name)

{
  DVECTOR *pDVar1;
  
  pDVar1 = &DVECTOR_800d1740;
  do {
    pDVar1[1].vx = 0;
    pDVar1[1].vy = 0;
    *pDVar1 = (DVECTOR)0x0;
    name = name + 1;
    pDVar1 = pDVar1 + 0x10;
  } while ((int)name < 0x10);
  return (uint)((int)name < 0x10);
}



// decompiled code
// original method signature: 
// struct _ObjectTracker * /*$ra*/ FindObjectInTracker(struct Object *object /*$a0*/)
 // line 230, offset 0x80058684
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x80058684
		// Variables:
	// 		int i; // $a2
	// 		struct _ObjectTracker *otr; // $a1
	/* end block 1 */
	// End offset: 0x800586CC
	// End Line: 240

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

	/* begin block 3 */
		// Start line: 481
	/* end block 3 */
	// End Line: 482

	/* begin block 4 */
		// Start line: 484
	/* end block 4 */
	// End Line: 485

_ObjectTracker * FindObjectInTracker(Object *object)

{
  int iVar1;
  _ObjectTracker *unaff_s0;
  int unaff_s1;
  
  while( true ) {
    if (0x2f < (int)unaff_s0) {
      return (_ObjectTracker *)0xffffffff;
    }
    if ((*(short *)(unaff_s1 + 0x38) != 0) && (iVar1 = FUN_80074604(unaff_s1 + 0x24), iVar1 == 0))
    break;
    unaff_s0 = (_ObjectTracker *)(unaff_s0->name + 1);
    unaff_s1 = unaff_s1 + 0x24;
  }
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ FindStreamUnitFromLevel(struct Level *level /*$a0*/)
 // line 258, offset 0x800586d4
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x800586D4
		// Variables:
	// 		struct _StreamUnit *ret; // $a2
	// 		long i; // $a1
	/* end block 1 */
	// End offset: 0x8005871C
	// End Line: 272

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

	/* begin block 3 */
		// Start line: 520
	/* end block 3 */
	// End Line: 521

_StreamUnit * FindStreamUnitFromLevel(Level *level)

{
  _StreamUnit *in_a1;
  
  return in_a1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_LoadObjectReturn(void *loadData /*$s0*/, void *data /*$s1*/, void *data2 /*$a2*/)
 // line 328, offset 0x80058724
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x80058724
		// Variables:
	// 		struct Object *object; // $s0
	// 		struct _ObjectTracker *objectTracker; // $s1

		/* begin block 1.1 */
			// Start line: 374
			// Start offset: 0x800587C8
			// Variables:
		// 		char objDsfxFileName[64]; // stack offset -80
		/* end block 1.1 */
		// End offset: 0x80058800
		// End Line: 386
	/* end block 1 */
	// End offset: 0x80058818
	// End Line: 397

	/* begin block 2 */
		// Start line: 664
	/* end block 2 */
	// End Line: 665

void STREAM_LoadObjectReturn(void *loadData,void *data,void *data2)

{
  void *in_v0;
  int in_v1;
  int iVar1;
  int in_a3;
  
  do {
    if (in_v0 == loadData) {
      return;
    }
    do {
      iVar1 = in_v1;
      data = (void *)((int)data + 1);
      in_v1 = iVar1 + 0x40;
      if (0xf < (int)data) {
        return;
      }
    } while ((int)*(short *)(iVar1 + 0x44) != in_a3);
    in_v0 = *(void **)(iVar1 + 0x48);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpMonster(struct _ObjectTracker *dumpee /*$s2*/)
 // line 399, offset 0x8005882c
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x8005882C
		// Variables:
	// 		struct Object *object; // $s1
	// 		struct _Instance *instance; // $a1

		/* begin block 1.1 */
			// Start line: 407
			// Start offset: 0x80058858
			// Variables:
		// 		struct _Instance *next; // $s0
		/* end block 1.1 */
		// End offset: 0x80058874
		// End Line: 414
	/* end block 1 */
	// End offset: 0x80058880
	// End Line: 417

	/* begin block 2 */
		// Start line: 806
	/* end block 2 */
	// End Line: 807

	/* begin block 3 */
		// Start line: 811
	/* end block 3 */
	// End Line: 812

void STREAM_DumpMonster(_ObjectTracker *dumpee)

{
  undefined2 uVar1;
  int in_v0;
  int unaff_s1;
  
  uVar1 = 4;
  if (in_v0 == 0) {
    uVar1 = 2;
  }
  *(undefined2 *)(unaff_s1 + 0x14) = uVar1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_InList(char *name /*$s1*/, char **nameList /*$a1*/)
 // line 456, offset 0x800588a0
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x800588A0
		// Variables:
	// 		char **mon; // $s0
	/* end block 1 */
	// End offset: 0x800588F4
	// End Line: 465

	/* begin block 2 */
		// Start line: 940
	/* end block 2 */
	// End Line: 941

int STREAM_InList(char *name,char **nameList)

{
  int iVar1;
  char **ppcVar2;
  char *unaff_s1;
  
  do {
    ppcVar2 = nameList;
    if (ppcVar2 == (char **)0x0) {
      iVar1 = FUN_80058e80();
      return iVar1;
    }
    nameList = (char **)ppcVar2[2];
  } while (unaff_s1 != ppcVar2[7]);
                    /* WARNING: Subroutine does not return */
  FUN_80032538(loadStatus.bigFile.subDirList,ppcVar2,0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_IsSpecialMonster(char *name /*$a0*/)
 // line 467, offset 0x80058908
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x80058908
		// Variables:
	// 		static char (*mon[6]); // offset 0x0
	/* end block 1 */
	// End offset: 0x80058908
	// End Line: 468

	/* begin block 2 */
		// Start line: 964
	/* end block 2 */
	// End Line: 965

int STREAM_IsSpecialMonster(char *name)

{
  int iVar1;
  int *unaff_s0;
  
  do {
    if (*unaff_s0 == 0) {
      return 0;
    }
    iVar1 = FUN_80074604();
    unaff_s0 = unaff_s0 + 1;
  } while (iVar1 != 0);
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpSomeMonsters()
 // line 475, offset 0x8005892c
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x8005892C
		// Variables:
	// 		struct _ObjectTracker *otr; // $s1
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x800589A0
	// End Line: 491

	/* begin block 2 */
		// Start line: 984
	/* end block 2 */
	// End Line: 985

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_DumpSomeMonsters(void)

{
  undefined4 in_a0;
  
  FUN_800588c8(in_a0,0x800cab58);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_NoMonsters()
 // line 492, offset 0x800589bc
	/* begin block 1 */
		// Start line: 1037
	/* end block 1 */
	// End Line: 1038

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_NoMonsters(void)

{
  int iVar1;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while (unaff_s1 = unaff_s1 + 0x24, unaff_s2 < 0x30) {
    if ((((int)*(short *)(unaff_s0 + 1) == unaff_s3) && (*unaff_s0 != 0)) &&
       (iVar1 = FUN_80058930(unaff_s1), iVar1 != 0)) {
      FUN_80058854(unaff_s1);
    }
    unaff_s2 = unaff_s2 + 1;
    unaff_s0 = unaff_s0 + 9;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_YesMonsters()
 // line 498, offset 0x800589ec
	/* begin block 1 */
		// Start line: 1051
	/* end block 1 */
	// End Line: 1052

	/* begin block 2 */
		// Start line: 1053
	/* end block 2 */
	// End Line: 1054

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_YesMonsters(void)

{
  uint in_v0;
  
  draw[1].dr_env.code[9] = in_v0 | 0x4000000;
  FUN_80058954();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_IsMonster(char *name /*$a0*/)
 // line 505, offset 0x80058a08
	/* begin block 1 */
		// Start line: 506
		// Start offset: 0x80058A08
		// Variables:
	// 		static char (*monnames[19]); // offset 0x18
	/* end block 1 */
	// End offset: 0x80058A08
	// End Line: 506

	/* begin block 2 */
		// Start line: 1065
	/* end block 2 */
	// End Line: 1066

int STREAM_IsMonster(char *name)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_TryAndDumpANonResidentObject()
 // line 548, offset 0x80058a2c
	/* begin block 1 */
		// Start line: 549
		// Start offset: 0x80058A2C
		// Variables:
	// 		struct _ObjectTracker *otr; // $s1
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80058A68
	// End Line: 562

	/* begin block 2 */
		// Start line: 1096
	/* end block 2 */
	// End Line: 1097

/* WARNING: Unknown calling convention yet parameter storage is locked */

int STREAM_TryAndDumpANonResidentObject(void)

{
  int iVar1;
  undefined4 in_a0;
  
  iVar1 = FUN_800588c8(in_a0,0x800cab70);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InsertGlobalObject(char *name /*$s2*/, struct GameTracker *gameTracker /*$s3*/)
 // line 564, offset 0x80058a7c
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80058A7C
		// Variables:
	// 		char string[64]; // stack offset -152
	// 		char vramname[64]; // stack offset -88
	// 		int i; // $s1
	// 		struct _ObjectTracker *otr; // $s0
	/* end block 1 */
	// End offset: 0x80058BF8
	// End Line: 656

	/* begin block 2 */
		// Start line: 1161
	/* end block 2 */
	// End Line: 1162

int InsertGlobalObject(char *name,GameTracker *gameTracker)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  
  do {
    unaff_s0 = unaff_s0 + 1;
    unaff_s1 = unaff_s1 + 0x24;
    if (0x2f < unaff_s0) {
      return -1;
    }
    iVar1 = FUN_8005f9a8(unaff_s1);
  } while (iVar1 == 0);
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _ObjectTracker * /*$ra*/ STREAM_GetObjectTracker(char *name /*$a0*/)
 // line 667, offset 0x80058c18
	/* begin block 1 */
		// Start line: 668
		// Start offset: 0x80058C18
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80058C54
	// End Line: 673

	/* begin block 2 */
		// Start line: 1334
	/* end block 2 */
	// End Line: 1335

_ObjectTracker * STREAM_GetObjectTracker(char *name)

{
  int unaff_s0;
  _ObjectTracker *unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined *)(unaff_s0 + 0x1c) = 0;
  return unaff_s1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadLevelObjects(struct _StreamUnit *stream /*$s1*/)
 // line 675, offset 0x80058c64
	/* begin block 1 */
		// Start line: 676
		// Start offset: 0x80058C64
		// Variables:
	// 		int objlist_pos; // $s0

		/* begin block 1.1 */
			// Start line: 686
			// Start offset: 0x80058CA8
			// Variables:
		// 		char name[20]; // stack offset -48
		/* end block 1.1 */
		// End offset: 0x80058CA8
		// End Line: 688

		/* begin block 1.2 */
			// Start line: 691
			// Start offset: 0x80058CE8
			// Variables:
		// 		struct Level *level; // $s1
		// 		int i; // $s2
		/* end block 1.2 */
		// End offset: 0x80058D6C
		// End Line: 712
	/* end block 1 */
	// End offset: 0x80058D6C
	// End Line: 713

	/* begin block 2 */
		// Start line: 1392
	/* end block 2 */
	// End Line: 1393

void LoadLevelObjects(_StreamUnit *stream)

{
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ STREAM_IsAnInstanceUsingObject(struct Object *object /*$a0*/)
 // line 715, offset 0x80058d88
	/* begin block 1 */
		// Start line: 717
		// Start offset: 0x80058D88
		// Variables:
	// 		struct _Instance *instance; // $v1
	// 		struct _Instance *next; // $v1
	// 		long ret; // $a1
	/* end block 1 */
	// End offset: 0x80058DC0
	// End Line: 733

	/* begin block 2 */
		// Start line: 1483
	/* end block 2 */
	// End Line: 1484

	/* begin block 3 */
		// Start line: 1484
	/* end block 3 */
	// End Line: 1485

long STREAM_IsAnInstanceUsingObject(Object *object)

{
  int iVar1;
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    unaff_s0 = unaff_s0 + 0x4c;
    if (unaff_s2 >= in_v0) break;
    iVar1 = FUN_80058640(*(int *)(unaff_s1 + 0x7c) + unaff_s0);
    if (iVar1 == unaff_s3) {
      iVar1 = unaff_s0 + *(int *)(unaff_s1 + 0x7c);
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x4000;
    }
    else {
      iVar1 = unaff_s0 + *(int *)(unaff_s1 + 0x7c);
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffffbfff;
    }
    in_v0 = *(int *)(unaff_s1 + 0x78);
    unaff_s2 = unaff_s2 + 1;
  }
  return (uint)(unaff_s2 < in_v0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_StreamLoadObjectAbort(void *loadData /*$a0*/, void *data /*$a1*/, void *data2 /*$a2*/)
 // line 736, offset 0x80058dc8
	/* begin block 1 */
		// Start line: 737
		// Start offset: 0x80058DC8
		// Variables:
	// 		struct _ObjectTracker *objectTracker; // $s0
	/* end block 1 */
	// End offset: 0x80058DE4
	// End Line: 741

	/* begin block 2 */
		// Start line: 1527
	/* end block 2 */
	// End Line: 1528

void STREAM_StreamLoadObjectAbort(void *loadData,void *data,void *data2)

{
  void **ppvVar1;
  int in_v1;
  
  do {
    ppvVar1 = (void **)(in_v1 + 0x1c);
    in_v1 = *(int *)(in_v1 + 8);
    if (*ppvVar1 == loadData) {
      return;
    }
  } while (in_v1 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpLoadingObjects()
 // line 744, offset 0x80058df8
	/* begin block 1 */
		// Start line: 745
		// Start offset: 0x80058DF8
		// Variables:
	// 		int i; // $s1
	// 		struct _ObjectTracker *tracker; // $s0
	/* end block 1 */
	// End offset: 0x80058E40
	// End Line: 754

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_DumpLoadingObjects(void)

{
  int in_a0;
  int in_a1;
  
  if (in_a0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8004fe84();
  }
  *(undefined2 *)(in_a1 + 0x14) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpObject(struct _ObjectTracker *objectTracker /*$s1*/)
 // line 759, offset 0x80058e58
	/* begin block 1 */
		// Start line: 760
		// Start offset: 0x80058E58
		// Variables:
	// 		struct Object *object; // $s0

		/* begin block 1.1 */
			// Start line: 766
			// Start offset: 0x80058E80
			// Variables:
		// 		char dramName[64]; // stack offset -80
		/* end block 1.1 */
		// End offset: 0x80058EAC
		// End Line: 770
	/* end block 1 */
	// End offset: 0x80058F2C
	// End Line: 803

	/* begin block 2 */
		// Start line: 1589
	/* end block 2 */
	// End Line: 1590

void STREAM_DumpObject(_ObjectTracker *objectTracker)

{
  short *psVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    iVar2 = unaff_s0 + 0x24;
    if (0x2f < unaff_s1) break;
    psVar1 = (short *)(unaff_s0 + 0x38);
    unaff_s0 = iVar2;
    if ((int)*psVar1 == unaff_s2) {
      FUN_80058e80(iVar2);
      unaff_s0 = iVar2;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_IsObjectInAnyUnit(struct _ObjectTracker *tracker /*$s3*/)
 // line 806, offset 0x80058f40
	/* begin block 1 */
		// Start line: 807
		// Start offset: 0x80058F40
		// Variables:
	// 		int d; // $s1

		/* begin block 1.1 */
			// Start line: 814
			// Start offset: 0x80058F8C
			// Variables:
		// 		unsigned char *objlist; // $s0
		/* end block 1.1 */
		// End offset: 0x80058FD0
		// End Line: 824
	/* end block 1 */
	// End offset: 0x80058FE4
	// End Line: 827

	/* begin block 2 */
		// Start line: 1690
	/* end block 2 */
	// End Line: 1691

int STREAM_IsObjectInAnyUnit(_ObjectTracker *tracker)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x14) = 0;
  if (unaff_s0 == 0) {
    *(undefined2 *)(unaff_s1 + 0x14) = 0;
  }
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RemoveAllObjectsNotInUse()
 // line 829, offset 0x80059000
	/* begin block 1 */
		// Start line: 830
		// Start offset: 0x80059000
		// Variables:
	// 		int i; // $s3
	// 		int abort; // $a3
	// 		struct _ObjectTracker *tracker; // $s1
	// 		struct _ObjectTracker *trackerList; // $s4

		/* begin block 1.1 */
			// Start line: 839
			// Start offset: 0x8005904C
			// Variables:
		// 		struct Object *object; // $s2
		/* end block 1.1 */
		// End offset: 0x8005908C
		// End Line: 854

		/* begin block 1.2 */
			// Start line: 862
			// Start offset: 0x800590C8
			// Variables:
		// 		int j; // $a0
		/* end block 1.2 */
		// End offset: 0x80059124
		// End Line: 875

		/* begin block 1.3 */
			// Start line: 883
			// Start offset: 0x8005915C
			// Variables:
		// 		int j; // $t0
		// 		struct _ObjectTracker *otr; // $a3

			/* begin block 1.3.1 */
				// Start line: 887
				// Start offset: 0x80059188
				// Variables:
			// 		int k; // $a0

				/* begin block 1.3.1.1 */
					// Start line: 896
					// Start offset: 0x800591AC
					// Variables:
				// 		int l; // $a1
				/* end block 1.3.1.1 */
				// End offset: 0x800591F8
				// End Line: 903
			/* end block 1.3.1 */
			// End offset: 0x80059210
			// End Line: 905
		/* end block 1.3 */
		// End offset: 0x8005922C
		// End Line: 908
	/* end block 1 */
	// End offset: 0x80059298
	// End Line: 926

	/* begin block 2 */
		// Start line: 1753
	/* end block 2 */
	// End Line: 1754

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_RemoveAllObjectsNotInUse(void)

{
  char cVar1;
  int iVar2;
  uint in_v0;
  char *pcVar3;
  int unaff_s1;
  
  do {
    if (in_v0 == 0) {
      return;
    }
    if (((&DVECTOR_800d1744)[unaff_s1 * 0x10].vx == 2) &&
       (DVECTOR_ARRAY_800d1748[unaff_s1 * 0x10] != (DVECTOR)0x0)) {
      pcVar3 = *(char **)((int)DVECTOR_ARRAY_800d1748[unaff_s1 * 0x10] + 0x8c);
      cVar1 = *pcVar3;
      while (cVar1 != -1) {
        iVar2 = FUN_80074604();
        pcVar3 = pcVar3 + 0x10;
        if (iVar2 == 0) {
          return;
        }
        cVar1 = *pcVar3;
      }
    }
    unaff_s1 = unaff_s1 + 1;
    in_v0 = (uint)(unaff_s1 < 0x10);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveAllObjects(struct GameTracker *gameTracker /*$a0*/)
 // line 929, offset 0x800592c0
	/* begin block 1 */
		// Start line: 930
		// Start offset: 0x800592C0
		// Variables:
	// 		int i; // $s1
	// 		struct _ObjectTracker *tracker; // $s0
	/* end block 1 */
	// End offset: 0x80059304
	// End Line: 940

	/* begin block 2 */
		// Start line: 2083
	/* end block 2 */
	// End Line: 2084

void RemoveAllObjects(GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// struct Level * /*$ra*/ STREAM_GetLevelWithID(long id /*$a0*/)
 // line 945, offset 0x80059318
	/* begin block 1 */
		// Start line: 947
		// Start offset: 0x80059318
		// Variables:
	// 		struct Level *retLevel; // $a2
	// 		long i; // $a1
	/* end block 1 */
	// End offset: 0x80059364
	// End Line: 961

	/* begin block 2 */
		// Start line: 2123
	/* end block 2 */
	// End Line: 2124

	/* begin block 3 */
		// Start line: 2124
	/* end block 3 */
	// End Line: 2125

Level * STREAM_GetLevelWithID(long id)

{
  short *psVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    iVar2 = unaff_s0 + 0x24;
    if (unaff_s1 >= 0x30) break;
    psVar1 = (short *)(unaff_s0 + 0x38);
    unaff_s0 = iVar2;
    if (*psVar1 != 0) {
      FUN_80058e80(iVar2);
      unaff_s0 = iVar2;
    }
  }
  return (Level *)(uint)(unaff_s1 < 0x30);
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ STREAM_GetStreamUnitWithID(long id /*$a0*/)
 // line 964, offset 0x80059370
	/* begin block 1 */
		// Start line: 966
		// Start offset: 0x80059370
		// Variables:
	// 		struct _StreamUnit *retUnit; // $a2
	// 		long i; // $a1
	/* end block 1 */
	// End offset: 0x800593B8
	// End Line: 978

	/* begin block 2 */
		// Start line: 2168
	/* end block 2 */
	// End Line: 2169

	/* begin block 3 */
		// Start line: 2169
	/* end block 3 */
	// End Line: 2170

_StreamUnit * STREAM_GetStreamUnitWithID(long id)

{
  int in_v1;
  
  return *(_StreamUnit **)(in_v1 + 8);
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ STREAM_GetStreamUnitWithName(char *name /*$s4*/)
 // line 981, offset 0x800593c0
	/* begin block 1 */
		// Start line: 982
		// Start offset: 0x800593C0
		// Variables:
	// 		struct _StreamUnit *retUnit; // $s3
	// 		long i; // $s2
	/* end block 1 */
	// End offset: 0x8005942C
	// End Line: 995

	/* begin block 2 */
		// Start line: 2208
	/* end block 2 */
	// End Line: 2209

_StreamUnit * STREAM_GetStreamUnitWithName(char *name)

{
  _StreamUnit *p_Var1;
  char *in_v0;
  _StreamUnit *in_v1;
  _StreamUnit *p_Var2;
  int in_a1;
  _StreamUnit *in_a2;
  int in_a3;
  
  do {
    p_Var2 = in_v1;
    if (in_v0 == name) {
      return in_v1;
    }
    do {
      in_a1 = in_a1 + 1;
      in_v1 = p_Var2 + 1;
      if (0xf < in_a1) {
        return in_a2;
      }
      p_Var1 = p_Var2 + 1;
      p_Var2 = in_v1;
    } while ((int)p_Var1->used != in_a3);
    in_v0 = (char *)in_v1->StreamUnitID;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_CalculateWaterLevel(struct Level *level /*$t3*/)
 // line 998, offset 0x80059450
	/* begin block 1 */
		// Start line: 999
		// Start offset: 0x80059450
		// Variables:
	// 		struct _Terrain *terrain; // $t2
	// 		int i; // $t0
	// 		struct _TFace *tface; // $a3
	// 		long waterZLevel; // $t1
	/* end block 1 */
	// End offset: 0x80059578
	// End Line: 1052

	/* begin block 2 */
		// Start line: 2261
	/* end block 2 */
	// End Line: 2262

void STREAM_CalculateWaterLevel(Level *level)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_IsMorphInProgress()
 // line 1057, offset 0x80059580
	/* begin block 1 */
		// Start line: 2395
	/* end block 1 */
	// End Line: 2396

	/* begin block 2 */
		// Start line: 2396
	/* end block 2 */
	// End Line: 2397

/* WARNING: Unknown calling convention yet parameter storage is locked */

int STREAM_IsMorphInProgress(void)

{
  int iVar1;
  int in_t1;
  int *in_t3;
  
  iVar1 = in_t1 + (int)*(short *)(*(int *)(*in_t3 + 0x48) + 0x10);
  in_t3[0xe] = iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ STREAM_GetWaterZLevel(struct Level *level /*$a0*/, struct _Instance *instance /*$a1*/)
 // line 1063, offset 0x80059594
	/* begin block 1 */
		// Start line: 1065
		// Start offset: 0x80059594
		// Variables:
	// 		long waterZLevel; // $a1
	/* end block 1 */
	// End offset: 0x8005960C
	// End Line: 1090

	/* begin block 2 */
		// Start line: 2407
	/* end block 2 */
	// End Line: 2408

	/* begin block 3 */
		// Start line: 2408
	/* end block 3 */
	// End Line: 2409

	/* begin block 4 */
		// Start line: 2410
	/* end block 4 */
	// End Line: 2411

long STREAM_GetWaterZLevel(Level *level,_Instance *instance)

{
  int in_v0;
  int in_t1;
  int in_t3;
  
  *(int *)(in_t3 + 0x38) = in_t1 + in_v0;
  return in_t1 + in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_SetMainFog(struct _StreamUnit *streamUnit /*$a0*/)
 // line 1093, offset 0x80059614
	/* begin block 1 */
		// Start line: 1095
		// Start offset: 0x80059614
		// Variables:
	// 		struct Level *level; // $v1
	/* end block 1 */
	// End offset: 0x80059654
	// End Line: 1110

	/* begin block 2 */
		// Start line: 2467
	/* end block 2 */
	// End Line: 2468

	/* begin block 3 */
		// Start line: 2468
	/* end block 3 */
	// End Line: 2469

	/* begin block 4 */
		// Start line: 2472
	/* end block 4 */
	// End Line: 2473

void STREAM_SetMainFog(_StreamUnit *streamUnit)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_SetStreamFog(struct _StreamUnit *streamUnit /*$s1*/, short fogNear /*$a1*/, short fogFar /*$a2*/)
 // line 1114, offset 0x80059668
	/* begin block 1 */
		// Start line: 1115
		// Start offset: 0x80059668
	/* end block 1 */
	// End offset: 0x800596D8
	// End Line: 1127

	/* begin block 2 */
		// Start line: 2512
	/* end block 2 */
	// End Line: 2513

void STREAM_SetStreamFog(_StreamUnit *streamUnit,short fogNear,short fogFar)

{
  short in_v0;
  int in_v1;
  
  streamUnit->UnitFogNear = in_v0;
  streamUnit->UnitFogFar = *(short *)(in_v1 + 0xa4);
  streamUnit->TargetFogNear = streamUnit->UnitFogNear;
  streamUnit->TargetFogFar = streamUnit->UnitFogFar;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_ConnectStream(struct _StreamUnit *streamUnit /*$s6*/)
 // line 1171, offset 0x800596f8
	/* begin block 1 */
		// Start line: 1172
		// Start offset: 0x800596F8
		// Variables:
	// 		struct _StreamUnit *mainUnit; // stack offset -48
	// 		struct StreamUnitPortal *streamPortal; // $a0
	// 		int numportals; // $v1
	// 		struct StreamUnitPortal *streamPortal2; // $s4
	// 		int numportals2; // $fp
	// 		int i; // $s0
	// 		int j; // $s3
	// 		char text[16]; // stack offset -72
	// 		char *commapos; // $v0
	// 		int signalID; // $s2

		/* begin block 1.1 */
			// Start line: 1196
			// Start offset: 0x80059774
			// Variables:
		// 		struct _StreamUnit *connectStream; // $s0

			/* begin block 1.1.1 */
				// Start line: 1230
				// Start offset: 0x8005988C
				// Variables:
			// 		struct _SVector offset; // stack offset -56
			/* end block 1.1.1 */
			// End offset: 0x8005988C
			// End Line: 1241
		/* end block 1.1 */
		// End offset: 0x80059898
		// End Line: 1250

		/* begin block 1.2 */
			// Start line: 1255
			// Start offset: 0x800598AC
			// Variables:
		// 		long d; // stack offset -44
		// 		struct _StreamUnit *connectStream; // $s5

			/* begin block 1.2.1 */
				// Start line: 1270
				// Start offset: 0x800598FC
				// Variables:
			// 		long hookedUp; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 1310
					// Start offset: 0x80059A1C
					// Variables:
				// 		struct _SVector offset; // stack offset -56
				/* end block 1.2.1.1 */
				// End offset: 0x80059A1C
				// End Line: 1321
			/* end block 1.2.1 */
			// End offset: 0x80059A28
			// End Line: 1330
		/* end block 1.2 */
		// End offset: 0x80059A58
		// End Line: 1330
	/* end block 1 */
	// End offset: 0x80059AD4
	// End Line: 1344

	/* begin block 2 */
		// Start line: 2636
	/* end block 2 */
	// End Line: 2637

void STREAM_ConnectStream(_StreamUnit *streamUnit)

{
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x3a) = (short)streamUnit;
  *(undefined2 *)(unaff_s1 + 0x36) = (short)streamUnit;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_StreamLoadLevelAbort(void *loadData /*$a0*/, void *data /*$a1*/, void *data2 /*$a2*/)
 // line 1346, offset 0x80059b04
	/* begin block 1 */
		// Start line: 1347
		// Start offset: 0x80059B04
		// Variables:
	// 		struct _StreamUnit *streamUnit; // $s0
	/* end block 1 */
	// End offset: 0x80059B20
	// End Line: 1351

	/* begin block 2 */
		// Start line: 3223
	/* end block 2 */
	// End Line: 3224

void STREAM_StreamLoadLevelAbort(void *loadData,void *data,void *data2)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DoObjectLoadAndDump(struct _StreamUnit *streamUnit /*$a0*/)
 // line 1359, offset 0x80059b3c
	/* begin block 1 */
		// Start line: 1360
		// Start offset: 0x80059B3C
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80059B74
	// End Line: 1377

	/* begin block 2 */
		// Start line: 3250
	/* end block 2 */
	// End Line: 3251

void STREAM_DoObjectLoadAndDump(_StreamUnit *streamUnit)

{
                    /* WARNING: Subroutine does not return */
  FUN_8004fe84();
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_FinishLoad(struct _StreamUnit *streamUnit /*$s1*/)
 // line 1380, offset 0x80059b84
	/* begin block 1 */
		// Start line: 1381
		// Start offset: 0x80059B84
		// Variables:
	// 		struct Level *level; // $s0
	// 		char sfxName[80]; // stack offset -96
	/* end block 1 */
	// End offset: 0x80059C98
	// End Line: 1449

	/* begin block 2 */
		// Start line: 3295
	/* end block 2 */
	// End Line: 3296

void STREAM_FinishLoad(_StreamUnit *streamUnit)

{
  short *psVar1;
  int in_v1;
  long *plVar2;
  int in_a1;
  
  plVar2 = &streamUnit->StreamUnitID;
  do {
    plVar2 = (long *)((int)plVar2 + 1);
    if (0xf < (int)plVar2) {
      FUN_80059028();
      return;
    }
    psVar1 = (short *)(in_v1 + 0x44);
    in_v1 = in_v1 + 0x40;
  } while ((int)*psVar1 != in_a1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_LoadLevelReturn(void *loadData /*$s0*/, void *data /*$a1*/, void *data2 /*$s1*/)
 // line 1463, offset 0x80059cd0
	/* begin block 1 */
		// Start line: 1464
		// Start offset: 0x80059CD0
	/* end block 1 */
	// End offset: 0x80059CD0
	// End Line: 1464

	/* begin block 2 */
		// Start line: 3475
	/* end block 2 */
	// End Line: 3476

void STREAM_LoadLevelReturn(void *loadData,void *data,void *data2)

{
  FUN_80067b9c();
  FUN_8005b1bc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_StreamLoadLevelReturn(void *loadData /*$s0*/, void *data /*$a1*/, void *data2 /*$s1*/)
 // line 1498, offset 0x80059d30
	/* begin block 1 */
		// Start line: 1499
		// Start offset: 0x80059D30
		// Variables:
	// 		struct Level *level; // $s0
	// 		struct _StreamUnit *streamUnit; // $s1
	/* end block 1 */
	// End offset: 0x80059E04
	// End Line: 1596

	/* begin block 2 */
		// Start line: 3546
	/* end block 2 */
	// End Line: 3547

void STREAM_StreamLoadLevelReturn(void *loadData,void *data,void *data2)

{
  undefined4 in_v0;
  
  BmenuLines[2]._0_4_ = in_v0;
  FUN_8005963c();
  FUN_80059bac();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_UpdateLevelPointer(struct Level *oldLevel /*$a0*/, struct Level *newLevel /*$a1*/, long sizeOfLevel /*$a2*/)
 // line 1623, offset 0x80059e18
	/* begin block 1 */
		// Start line: 1624
		// Start offset: 0x80059E18
		// Variables:
	// 		long i; // $t0
	// 		long offset; // $t1
	// 		struct GameTracker *gameTracker; // $v0

		/* begin block 1.1 */
			// Start line: 1652
			// Start offset: 0x80059E7C
			// Variables:
		// 		struct _Instance *instance; // $a3
		/* end block 1.1 */
		// End offset: 0x8005A00C
		// End Line: 1692
	/* end block 1 */
	// End offset: 0x8005A0F0
	// End Line: 1714

	/* begin block 2 */
		// Start line: 3246
	/* end block 2 */
	// End Line: 3247

void STREAM_UpdateLevelPointer(Level *oldLevel,Level *newLevel,long sizeOfLevel)

{
  int unaff_s0;
  
  FUN_8005963c();
  loadStatus.bigFile.cachedDirID = unaff_s0;
  BmenuLines[2]._0_4_ = *(undefined4 *)(unaff_s0 + 0xf8);
  return;
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ STREAM_WhichUnitPointerIsIn(void *pointer /*$s3*/)
 // line 1719, offset 0x8005a108
	/* begin block 1 */
		// Start line: 1720
		// Start offset: 0x8005A108
		// Variables:
	// 		int i; // $s2
	// 		int size; // $v1
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x8005A194
	// End Line: 1740

	/* begin block 2 */
		// Start line: 3981
	/* end block 2 */
	// End Line: 3982

_StreamUnit * STREAM_WhichUnitPointerIsIn(void *pointer)

{
  int iVar1;
  int in_v0;
  _StreamUnit *p_Var2;
  void *pvVar3;
  int in_a3;
  int in_t0;
  int in_t1;
  void *in_t2;
  
  while( true ) {
    in_t0 = in_t0 + 1;
    if (in_v0 < in_t0) break;
    pvVar3 = *(void **)(in_a3 + 0x374);
    if ((pointer <= pvVar3) && (pvVar3 <= in_t2)) {
      iVar1 = 0;
      if (pvVar3 != (void *)0x0) {
        iVar1 = (int)pvVar3 + in_t1;
      }
      *(int *)(in_a3 + 0x374) = iVar1;
    }
    pvVar3 = *(void **)(in_a3 + 0x378);
    if ((pointer <= pvVar3) && (pvVar3 <= in_t2)) {
      iVar1 = 0;
      if (pvVar3 != (void *)0x0) {
        iVar1 = (int)pvVar3 + in_t1;
      }
      *(int *)(in_a3 + 0x378) = iVar1;
    }
    in_v0 = (int)theCamera.core.viewVolumeNormal[4].x;
    in_a3 = in_a3 + 0x70;
  }
  p_Var2 = (_StreamUnit *)FUN_80060600();
  return p_Var2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_UpdateObjectPointer(struct Object *oldObject /*$s2*/, struct Object *newObject /*$s3*/, long sizeOfObject /*$s4*/)
 // line 1742, offset 0x8005a1b4
	/* begin block 1 */
		// Start line: 1743
		// Start offset: 0x8005A1B4
		// Variables:
	// 		long i; // $a3
	// 		long d; // $a1
	// 		struct GameTracker *gameTracker; // $s0
	// 		long offset; // $s1
	// 		struct _ObjectTracker *otr; // $t0

		/* begin block 1.1 */
			// Start line: 1763
			// Start offset: 0x8005A208
			// Variables:
		// 		int j; // $a1
		// 		struct Object *object; // $a2
		/* end block 1.1 */
		// End offset: 0x8005A294
		// End Line: 1773

		/* begin block 1.2 */
			// Start line: 1791
			// Start offset: 0x8005A2F0
			// Variables:
		// 		struct _Instance *instance; // $s0
		/* end block 1.2 */
		// End offset: 0x8005A408
		// End Line: 1820
	/* end block 1 */
	// End offset: 0x8005A434
	// End Line: 1828

	/* begin block 2 */
		// Start line: 4049
	/* end block 2 */
	// End Line: 4050

void STREAM_UpdateObjectPointer(Object *oldObject,Object *newObject,long sizeOfObject)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_UpdateInstanceCollisionInfo(struct _HModel *oldHModel /*$a0*/, struct _HModel *newHModel /*$a1*/)
 // line 1830, offset 0x8005a454
	/* begin block 1 */
		// Start line: 1832
		// Start offset: 0x8005A454
		// Variables:
	// 		struct _Instance *instance; // $v1
	/* end block 1 */
	// End offset: 0x8005A490
	// End Line: 1845

	/* begin block 2 */
		// Start line: 4247
	/* end block 2 */
	// End Line: 4248

	/* begin block 3 */
		// Start line: 4248
	/* end block 3 */
	// End Line: 4249

void STREAM_UpdateInstanceCollisionInfo(_HModel *oldHModel,_HModel *newHModel)

{
  FUN_800445d8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_LoadMainVram(struct GameTracker *gameTracker /*$a0*/, char *baseAreaName /*$a1*/, struct _StreamUnit *streamUnit /*$a2*/)
 // line 1885, offset 0x8005a498
	/* begin block 1 */
		// Start line: 1886
		// Start offset: 0x8005A498
		// Variables:
	// 		char dramName[80]; // stack offset -176
	// 		char vramName[80]; // stack offset -96
	// 		struct VramBuffer *vramBuffer; // $v0
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x8005A498
	// End Line: 1886

	/* begin block 2 */
		// Start line: 3770
	/* end block 2 */
	// End Line: 3771

void STREAM_LoadMainVram(GameTracker *gameTracker,char *baseAreaName,_StreamUnit *streamUnit)

{
  GameTracker *in_v0;
  int in_v1;
  
  while( true ) {
    if (in_v0 == gameTracker) {
      *(char **)(in_v1 + 0xe8) = baseAreaName;
    }
    in_v1 = *(int *)(in_v1 + 8);
    if (in_v1 == 0) break;
    in_v0 = *(GameTracker **)(in_v1 + 0xe8);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_MoveIntoNewStreamUnit()
 // line 1933, offset 0x8005a540
	/* begin block 1 */
		// Start line: 4470
	/* end block 1 */
	// End Line: 4471

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_MoveIntoNewStreamUnit(void)

{
  undefined2 in_v0;
  int in_a2;
  
  vramBlockList[72].udata._0_2_ = 0;
  *(undefined2 *)(in_a2 + 0xc) = 0;
  *(undefined2 *)(in_a2 + 0xe) = 0;
  *(undefined2 *)(in_a2 + 10) = in_v0;
  FUN_8006035c();
  return;
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ STREAM_LoadLevel(char *baseAreaName /*$s3*/, struct StreamUnitPortal *streamPortal /*$s4*/, int loadnext /*$a2*/)
 // line 1953, offset 0x8005a5d4
	/* begin block 1 */
		// Start line: 1954
		// Start offset: 0x8005A5D4
		// Variables:
	// 		int i; // $s2
	// 		long streamID; // $s5
	// 		struct _StreamUnit *streamUnit; // $s1

		/* begin block 1.1 */
			// Start line: 1995
			// Start offset: 0x8005A664
		/* end block 1.1 */
		// End offset: 0x8005A664
		// End Line: 1998

		/* begin block 1.2 */
			// Start line: 2007
			// Start offset: 0x8005A698
			// Variables:
		// 		struct Level *level; // $s0
		/* end block 1.2 */
		// End offset: 0x8005A6C4
		// End Line: 2017

		/* begin block 1.3 */
			// Start line: 2079
			// Start offset: 0x8005A71C
			// Variables:
		// 		char dramName[80]; // stack offset -112
		/* end block 1.3 */
		// End offset: 0x8005A7C4
		// End Line: 2136
	/* end block 1 */
	// End offset: 0x8005A7D0
	// End Line: 2139

	/* begin block 2 */
		// Start line: 4512
	/* end block 2 */
	// End Line: 4513

_StreamUnit * STREAM_LoadLevel(char *baseAreaName,StreamUnitPortal *streamPortal,int loadnext)

{
  FUN_8004021c(baseAreaName,streamPortal,0x40,0);
  CurrentWarpNumber = (long)(_StreamUnit *)(int)BmenuLines[2].textureH;
  return (_StreamUnit *)(int)BmenuLines[2].textureH;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveIntroducedLights(struct Level *level /*$s2*/)
 // line 2144, offset 0x8005a7f8
	/* begin block 1 */
		// Start line: 2145
		// Start offset: 0x8005A7F8
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8005A8C4
	// End Line: 2166

	/* begin block 2 */
		// Start line: 5067
	/* end block 2 */
	// End Line: 5068

void RemoveIntroducedLights(Level *level)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RemoveInstancesWithIDInInstanceList(struct _InstanceList *list /*$s4*/, long id /*$s2*/, struct Level *level /*$s3*/)
 // line 2168, offset 0x8005a8dc
	/* begin block 1 */
		// Start line: 2169
		// Start offset: 0x8005A8DC
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _Instance *next; // $s1
	/* end block 1 */
	// End offset: 0x8005A968
	// End Line: 2197

	/* begin block 2 */
		// Start line: 5126
	/* end block 2 */
	// End Line: 5127

void STREAM_RemoveInstancesWithIDInInstanceList(_InstanceList *list,long id,Level *level)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  while( true ) {
    unaff_s0 = unaff_s0 + 1;
    unaff_s1 = unaff_s1 + 0x18;
    if (in_v0 <= unaff_s0) break;
    if ((*(byte *)(unaff_s1 + *(int *)(unaff_s2 + 0x1c) + 0xb) & 0x10) != 0) {
      FUN_8004f52c();
    }
    in_v0 = *(int *)(unaff_s2 + 0x18);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_MarkUnitNeeded(long streamID /*$a0*/)
 // line 2199, offset 0x8005a988
	/* begin block 1 */
		// Start line: 2201
		// Start offset: 0x8005A988
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8005A9CC
	// End Line: 2217

	/* begin block 2 */
		// Start line: 5191
	/* end block 2 */
	// End Line: 5192

	/* begin block 3 */
		// Start line: 5192
	/* end block 3 */
	// End Line: 5193

	/* begin block 4 */
		// Start line: 5195
	/* end block 4 */
	// End Line: 5196

void STREAM_MarkUnitNeeded(long streamID)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  while( true ) {
    iVar1 = unaff_s0;
    if (iVar1 == 0) {
      return;
    }
    unaff_s0 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x38) == unaff_s2) break;
    if (*(int *)(iVar1 + 0x34) == unaff_s2) {
      FUN_800b6590(iVar1);
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  FUN_800b6590(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_80032538();
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpUnit(struct _StreamUnit *streamUnit /*$s2*/, long doSave /*$s3*/)
 // line 2219, offset 0x8005a9d4
	/* begin block 1 */
		// Start line: 2220
		// Start offset: 0x8005A9D4
		// Variables:
	// 		int i; // $s0
	// 		int j; // $a0
	// 		int numportals; // $a1

		/* begin block 1.1 */
			// Start line: 2249
			// Start offset: 0x8005AA88
			// Variables:
		// 		char dramName[80]; // stack offset -104
		/* end block 1.1 */
		// End offset: 0x8005AAB4
		// End Line: 2260

		/* begin block 1.2 */
			// Start line: 2277
			// Start offset: 0x8005AAF0
			// Variables:
		// 		struct _SFXMkr *sfxMkr; // $a1
		/* end block 1.2 */
		// End offset: 0x8005AAF0
		// End Line: 2277
	/* end block 1 */
	// End offset: 0x8005AB9C
	// End Line: 2309

	/* begin block 2 */
		// Start line: 5240
	/* end block 2 */
	// End Line: 5241

void STREAM_DumpUnit(_StreamUnit *streamUnit,long doSave)

{
  int in_v1;
  
  *(ulong *)(in_v1 + 0x20) = draw[1].dr_env.code[3];
  return;
}



// autogenerated function stub: 
// void /*$ra*/ STREAM_DumpAllUnitsNotNeeded()
void STREAM_DumpAllUnitsNotNeeded()
{ // line 2311, offset 0x8005abb8
	/* begin block 1 */
		// Start line: 2312
		// Start offset: 0x8005ABB8
		// Variables:
			int i; // $s1
	/* end block 1 */
	// End offset: 0x8005AC0C
	// End Line: 2324

	/* begin block 2 */
		// Start line: 5445
	/* end block 2 */
	// End Line: 5446

}


// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpAllLevels(long IDNoRemove /*$s2*/, int DoSave /*$s3*/)
 // line 2326, offset 0x8005ac20
	/* begin block 1 */
		// Start line: 2327
		// Start offset: 0x8005AC20
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8005AC80
	// End Line: 2340

	/* begin block 2 */
		// Start line: 5486
	/* end block 2 */
	// End Line: 5487

void STREAM_DumpAllLevels(long IDNoRemove,int DoSave)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  
  while( true ) {
    iVar1 = unaff_s0;
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = iVar1 + 0x40;
    if (0xf < unaff_s1) break;
    if ((*(short *)(iVar1 + 0x44) != 0) && (*(ulong *)(iVar1 + 0x60) != draw[1].dr_env.code[3])) {
      FUN_8005a9fc(unaff_s0,1);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_LoadCurrentWarpRoom(struct StreamUnitPortal *streamPortal /*$s1*/, struct _StreamUnit *mainStreamUnit /*$a1*/)
 // line 2343, offset 0x8005ac9c
	/* begin block 1 */
		// Start line: 5533
	/* end block 1 */
	// End Line: 5534

	/* begin block 2 */
		// Start line: 5534
	/* end block 2 */
	// End Line: 5535

void STREAM_LoadCurrentWarpRoom(StreamUnitPortal *streamPortal,_StreamUnit *mainStreamUnit)

{
  int *unaff_s0;
  int *piVar1;
  int unaff_s1;
  int unaff_s2;
  
  while (piVar1 = unaff_s0 + 0x10, unaff_s1 < 0x10) {
    if ((*(short *)(unaff_s0 + 0x11) != 0) && (*piVar1 != unaff_s2)) {
      FUN_8005a9fc(piVar1);
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = piVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_RelocateLoadedWarpRooms(struct _StreamUnit *mainUnit /*$s4*/, struct StreamUnitPortal *streamPortal /*$s5*/)
 // line 2360, offset 0x8005ad58
	/* begin block 1 */
		// Start line: 2361
		// Start offset: 0x8005AD58
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8005ADDC
	// End Line: 2374

	/* begin block 2 */
		// Start line: 5570
	/* end block 2 */
	// End Line: 5571

void WARPGATE_RelocateLoadedWarpRooms(_StreamUnit *mainUnit,StreamUnitPortal *streamPortal)

{
  int in_v1;
  
  *(ushort *)(in_v1 + 6) = *(ushort *)(in_v1 + 6) | 1;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ WARPGATE_GetWarpRoomIndex(char *name /*$s2*/)
 // line 2377, offset 0x8005ae00
	/* begin block 1 */
		// Start line: 2378
		// Start offset: 0x8005AE00
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8005AE48
	// End Line: 2390

	/* begin block 2 */
		// Start line: 5623
	/* end block 2 */
	// End Line: 5624

long WARPGATE_GetWarpRoomIndex(char *name)

{
  long in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_UpdateAddToArray(struct _StreamUnit *streamUnit /*$s0*/)
 // line 2392, offset 0x8005ae60
	/* begin block 1 */
		// Start line: 2393
		// Start offset: 0x8005AE60
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8005AE9C
	// End Line: 2401

	/* begin block 2 */
		// Start line: 5661
	/* end block 2 */
	// End Line: 5662

void WARPGATE_UpdateAddToArray(_StreamUnit *streamUnit)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  
  while ((unaff_s1 = unaff_s1 + 0x14, unaff_s0 < 0xe && (iVar1 = FUN_80074604(unaff_s1), iVar1 != 0)
         )) {
    unaff_s0 = unaff_s0 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_RemoveFromArray(struct _StreamUnit *streamUnit /*$a0*/)
 // line 2403, offset 0x8005aeac
	/* begin block 1 */
		// Start line: 2404
		// Start offset: 0x8005AEAC
	/* end block 1 */
	// End offset: 0x8005AECC
	// End Line: 2411

	/* begin block 2 */
		// Start line: 5683
	/* end block 2 */
	// End Line: 5684

void WARPGATE_RemoveFromArray(_StreamUnit *streamUnit)

{
  int in_v1;
  _StreamUnit *unaff_s0;
  
  WarpRoomArray[in_v1].streamUnit = unaff_s0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_Init()
 // line 2414, offset 0x8005aedc
	/* begin block 1 */
		// Start line: 2416
		// Start offset: 0x8005AEDC
		// Variables:
	// 		int n; // $a0
	/* end block 1 */
	// End offset: 0x8005AF1C
	// End Line: 2430

	/* begin block 2 */
		// Start line: 5705
	/* end block 2 */
	// End Line: 5706

	/* begin block 3 */
		// Start line: 5706
	/* end block 3 */
	// End Line: 5707

	/* begin block 4 */
		// Start line: 5718
	/* end block 4 */
	// End Line: 5719

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WARPGATE_Init(void)

{
  int iVar1;
  int in_a0;
  
  iVar1 = FUN_8005ae28(in_a0 + 0xc);
  if (iVar1 == -1) {
    CurrentWarpNumber = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_StartUsingWarpgate()
 // line 2433, offset 0x8005af24
	/* begin block 1 */
		// Start line: 5756
	/* end block 1 */
	// End Line: 5757

	/* begin block 2 */
		// Start line: 5757
	/* end block 2 */
	// End Line: 5758

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WARPGATE_StartUsingWarpgate(void)

{
  undefined4 in_v0;
  int in_v1;
  int in_a0;
  
  DVECTOR_ARRAY_800d1720[1] = 0;
  DVECTOR_ARRAY_800d1720[3] = 0;
  CurrentWarpNumber = 0;
  DVECTOR_ARRAY_800d1720[2] = in_v0;
  do {
    *(undefined4 *)(in_v1 + 0x10) = 0;
    in_a0 = in_a0 + -1;
    in_v1 = in_v1 + -0x14;
  } while (-1 < in_a0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_EndUsingWarpgate()
 // line 2440, offset 0x8005af5c
	/* begin block 1 */
		// Start line: 5771
	/* end block 1 */
	// End Line: 5772

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WARPGATE_EndUsingWarpgate(void)

{
  FUN_8004021c(0x16f,0x70,0x40,0xffffff38);
  DVECTOR_800d171c = 1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsWarpgateInUse()
 // line 2447, offset 0x8005af94
	/* begin block 1 */
		// Start line: 5785
	/* end block 1 */
	// End Line: 5786

	/* begin block 2 */
		// Start line: 5786
	/* end block 2 */
	// End Line: 5787

/* WARNING: Unknown calling convention yet parameter storage is locked */

int WARPGATE_IsWarpgateInUse(void)

{
  int iVar1;
  
  iVar1 = FUN_8004021c(0x182,0x70,0x40,0xffffff38);
  DVECTOR_800d171c = 0;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsWarpgateActive()
 // line 2453, offset 0x8005afa0
	/* begin block 1 */
		// Start line: 5797
	/* end block 1 */
	// End Line: 5798

	/* begin block 2 */
		// Start line: 5798
	/* end block 2 */
	// End Line: 5799

/* WARNING: Unknown calling convention yet parameter storage is locked */

int WARPGATE_IsWarpgateActive(void)

{
  int iVar1;
  undefined4 in_a0;
  undefined4 in_a1;
  
  iVar1 = FUN_8004021c(in_a0,in_a1,0x40,0xffffff38);
  DVECTOR_800d171c = 0;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsWarpgateUsable()
 // line 2460, offset 0x8005afac
	/* begin block 1 */
		// Start line: 5811
	/* end block 1 */
	// End Line: 5812

	/* begin block 2 */
		// Start line: 5812
	/* end block 2 */
	// End Line: 5813

/* WARNING: Unknown calling convention yet parameter storage is locked */

int WARPGATE_IsWarpgateUsable(void)

{
  int in_v0;
  
  DVECTOR_800d171c = 0;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsWarpgateReady()
 // line 2467, offset 0x8005afc0
	/* begin block 1 */
		// Start line: 5825
	/* end block 1 */
	// End Line: 5826

	/* begin block 2 */
		// Start line: 5826
	/* end block 2 */
	// End Line: 5827

/* WARNING: Unknown calling convention yet parameter storage is locked */

int WARPGATE_IsWarpgateReady(void)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsWarpgateSpectral()
 // line 2474, offset 0x8005afd4
	/* begin block 1 */
		// Start line: 5839
	/* end block 1 */
	// End Line: 5840

/* WARNING: Unknown calling convention yet parameter storage is locked */

int WARPGATE_IsWarpgateSpectral(void)

{
  return (uint)(DVECTOR_ARRAY_800d1720[0].vx == 4);
}



// decompiled code
// original method signature: 
// int /*$ra*/ WARPGATE_IsObjectOnWarpSide(struct _Instance *instance /*$a0*/)
 // line 2481, offset 0x8005b010
	/* begin block 1 */
		// Start line: 2483
		// Start offset: 0x8005B010
		// Variables:
	// 		int side; // $a0
	/* end block 1 */
	// End offset: 0x8005B06C
	// End Line: 2502

	/* begin block 2 */
		// Start line: 5854
	/* end block 2 */
	// End Line: 5855

	/* begin block 3 */
		// Start line: 5855
	/* end block 3 */
	// End Line: 5856

	/* begin block 4 */
		// Start line: 5856
	/* end block 4 */
	// End Line: 5857

int WARPGATE_IsObjectOnWarpSide(_Instance *instance)

{
  int in_v0;
  int iVar1;
  
  iVar1 = FUN_80074604(WarpRoomArray + in_v0);
  return (uint)(iVar1 == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_IsItActive(struct _StreamUnit *streamUnit /*$a0*/)
 // line 2505, offset 0x8005b074
	/* begin block 1 */
		// Start line: 2507
		// Start offset: 0x8005B074
		// Variables:
	// 		struct Level *level; // $t1
	// 		int d; // $a1
	/* end block 1 */
	// End offset: 0x8005B134
	// End Line: 2529

	/* begin block 2 */
		// Start line: 5902
	/* end block 2 */
	// End Line: 5903

	/* begin block 3 */
		// Start line: 5903
	/* end block 3 */
	// End Line: 5904

	/* begin block 4 */
		// Start line: 5906
	/* end block 4 */
	// End Line: 5907

void WARPGATE_IsItActive(_StreamUnit *streamUnit)

{
  int in_a1;
  
  if (in_a1 == 1) {
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ WARPGATE_IsUnitWarpRoom(struct _StreamUnit *streamUnit /*$a0*/)
 // line 2531, offset 0x8005b13c
	/* begin block 1 */
		// Start line: 2533
		// Start offset: 0x8005B13C
		// Variables:
	// 		struct Level *level; // $v0
	// 		long isWarpRoom; // $a1
	// 		struct StreamUnitPortal *streamPortal; // $v1
	// 		long numPortals; // $a2
	// 		long d; // $a0
	/* end block 1 */
	// End offset: 0x8005B18C
	// End Line: 2551

	/* begin block 2 */
		// Start line: 5969
	/* end block 2 */
	// End Line: 5970

	/* begin block 3 */
		// Start line: 5970
	/* end block 3 */
	// End Line: 5971

	/* begin block 4 */
		// Start line: 5975
	/* end block 4 */
	// End Line: 5976

long WARPGATE_IsUnitWarpRoom(_StreamUnit *streamUnit)

{
  uint in_v0;
  
  streamUnit->flags = (short)(in_v0 | 8);
  return in_v0 | 8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_FixUnit(struct _StreamUnit *streamUnit /*$s0*/)
 // line 2554, offset 0x8005b194
	/* begin block 1 */
		// Start line: 2555
		// Start offset: 0x8005B194
	/* end block 1 */
	// End offset: 0x8005B1B8
	// End Line: 2567

	/* begin block 2 */
		// Start line: 6023
	/* end block 2 */
	// End Line: 6024

void WARPGATE_FixUnit(_StreamUnit *streamUnit)

{
  int in_a2;
  
  do {
    streamUnit = (_StreamUnit *)((int)&streamUnit->StreamUnitID + 1);
  } while ((int)streamUnit < in_a2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_MarkWarpUnitsNeeded()
 // line 2570, offset 0x8005b1c8
	/* begin block 1 */
		// Start line: 2572
		// Start offset: 0x8005B1C8
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8005B200
	// End Line: 2581

	/* begin block 2 */
		// Start line: 6055
	/* end block 2 */
	// End Line: 6056

	/* begin block 3 */
		// Start line: 6056
	/* end block 3 */
	// End Line: 6057

	/* begin block 4 */
		// Start line: 6058
	/* end block 4 */
	// End Line: 6059

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_MarkWarpUnitsNeeded(void)

{
  int iVar1;
  
  iVar1 = FUN_8005b164();
  if (iVar1 != 0) {
    FUN_8005b09c();
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ WARPGATE_IncrementIndex()
 // line 2586, offset 0x8005b208
	/* begin block 1 */
		// Start line: 2587
		// Start offset: 0x8005B208
		// Variables:
	// 		long result; // $s1
	/* end block 1 */
	// End offset: 0x8005B308
	// End Line: 2612

	/* begin block 2 */
		// Start line: 6091
	/* end block 2 */
	// End Line: 6092

/* WARNING: Unknown calling convention yet parameter storage is locked */

long WARPGATE_IncrementIndex(void)

{
  ushort *puVar1;
  int in_v1;
  int iVar2;
  int in_a0;
  
  do {
    *(ulong *)(in_v1 + 0x20) = draw[1].dr_env.code[3];
    iVar2 = in_v1;
    do {
      in_a0 = in_a0 + 1;
      in_v1 = iVar2 + 0x40;
      if (in_a0 >= 0x10) {
        return (uint)(in_a0 < 0x10);
      }
      puVar1 = (ushort *)(iVar2 + 0x46);
      iVar2 = in_v1;
    } while ((*puVar1 & 1) == 0);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_CalcWarpFade(int timeInc /*$a0*/)
 // line 2615, offset 0x8005b320
	/* begin block 1 */
		// Start line: 6175
	/* end block 1 */
	// End Line: 6176

	/* begin block 2 */
		// Start line: 6176
	/* end block 2 */
	// End Line: 6177

void WARPGATE_CalcWarpFade(int timeInc)

{
  int in_v0;
  
  CurrentWarpNumber = timeInc - in_v0;
  _BlockVramEntry_ARRAY_800d4708[0].area = 0x2000;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ WARPGATE_DecrementIndex()
 // line 2624, offset 0x8005b390
	/* begin block 1 */
		// Start line: 2625
		// Start offset: 0x8005B390
		// Variables:
	// 		long result; // $s0
	/* end block 1 */
	// End offset: 0x8005B454
	// End Line: 2652

	/* begin block 2 */
		// Start line: 6194
	/* end block 2 */
	// End Line: 6195

/* WARNING: Unknown calling convention yet parameter storage is locked */

long WARPGATE_DecrementIndex(void)

{
  int in_v0;
  int iVar1;
  short in_v1;
  
  if (in_v0 == 0) {
    DVECTOR_ARRAY_800d1720[0].vy = in_v1;
  }
  iVar1 = (int)DVECTOR_ARRAY_800d1720[0].vy;
  if (iVar1 < 0) {
    DVECTOR_ARRAY_800d1720[0].vy = 0;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreloadAllConnectedUnits(struct _StreamUnit *streamUnit /*$s4*/, struct _SVector *offset /*$s5*/)
 // line 2656, offset 0x8005b468
	/* begin block 1 */
		// Start line: 2657
		// Start offset: 0x8005B468
		// Variables:
	// 		int i; // $s1
	// 		char text[16]; // stack offset -48
	// 		int numportals; // $s3
	// 		char *commapos; // $v0
	// 		struct StreamUnitPortal *stream; // $s0
	/* end block 1 */
	// End offset: 0x8005B608
	// End Line: 2802

	/* begin block 2 */
		// Start line: 6271
	/* end block 2 */
	// End Line: 6272

	/* begin block 3 */
		// Start line: 6279
	/* end block 3 */
	// End Line: 6280

void PreloadAllConnectedUnits(_StreamUnit *streamUnit,_SVector *offset)

{
  CurrentWarpNumber = 0xd;
  _BlockVramEntry_ARRAY_800d4708[0].area = -0x2000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateLevel(struct Level *level /*$s0*/, struct _SVector *offset /*$s1*/)
 // line 2867, offset 0x8005b62c
	/* begin block 1 */
		// Start line: 2868
		// Start offset: 0x8005B62C
		// Variables:
	// 		int curTree; // $t2

		/* begin block 1.1 */
			// Start line: 2891
			// Start offset: 0x8005B700
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _Position *_v; // $a3
		/* end block 1.1 */
		// End offset: 0x8005B700
		// End Line: 2893
	/* end block 1 */
	// End offset: 0x8005B758
	// End Line: 2900

	/* begin block 2 */
		// Start line: 5734
	/* end block 2 */
	// End Line: 5735

void RelocateLevel(Level *level,_SVector *offset)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateCameras(struct _CameraKey *cameraList /*$a0*/, long numCameras /*$a1*/, struct _SVector *offset /*$a2*/)
 // line 2902, offset 0x8005b76c
	/* begin block 1 */
		// Start line: 2904
		// Start offset: 0x8005B76C
		// Variables:
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x8005B7F8
	// End Line: 2916

	/* begin block 2 */
		// Start line: 6786
	/* end block 2 */
	// End Line: 6787

	/* begin block 3 */
		// Start line: 6787
	/* end block 3 */
	// End Line: 6788

	/* begin block 4 */
		// Start line: 6789
	/* end block 4 */
	// End Line: 6790

void RelocateCameras(_CameraKey *cameraList,long numCameras,_SVector *offset)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int in_v1;
  int in_t2;
  int in_t3;
  int *unaff_s0;
  short *unaff_s1;
  
  while (in_t3 = in_t3 + 0x24, in_t2 < *(int *)(in_v1 + 0x44)) {
    sVar1 = unaff_s1[1];
    sVar2 = unaff_s1[2];
    iVar3 = *(int *)(in_v1 + 0x48) + in_t3;
    *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + *unaff_s1;
    *(short *)(iVar3 + 0xe) = *(short *)(iVar3 + 0xe) + sVar1;
    *(short *)(iVar3 + 0x10) = *(short *)(iVar3 + 0x10) + sVar2;
    in_v1 = *unaff_s0;
    in_t2 = in_t2 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateSavedCameras(struct Camera *camera /*$t7*/, struct Level *level /*$t8*/, struct _SVector *offset /*$t2*/)
 // line 2918, offset 0x8005b800
	/* begin block 1 */
		// Start line: 2919
		// Start offset: 0x8005B800
		// Variables:
	// 		int i; // $t6

		/* begin block 1.1 */
			// Start line: 2929
			// Start offset: 0x8005B848
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $v1
		// 		short _y1; // $a1
		// 		short _z1; // $a2
		// 		struct _Position *_v; // $a0
		/* end block 1.1 */
		// End offset: 0x8005B848
		// End Line: 2931

		/* begin block 1.2 */
			// Start line: 2931
			// Start offset: 0x8005B848
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _Position *_v; // $a3
		/* end block 1.2 */
		// End offset: 0x8005B848
		// End Line: 2931

		/* begin block 1.3 */
			// Start line: 2931
			// Start offset: 0x8005B848
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _Position *_v; // $a3
		/* end block 1.3 */
		// End offset: 0x8005B848
		// End Line: 2931

		/* begin block 1.4 */
			// Start line: 2931
			// Start offset: 0x8005B848
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _Position *_v; // $a3
		/* end block 1.4 */
		// End offset: 0x8005B914
		// End Line: 2940
	/* end block 1 */
	// End offset: 0x8005B930
	// End Line: 2947

	/* begin block 2 */
		// Start line: 6834
	/* end block 2 */
	// End Line: 6835

void RelocateSavedCameras(Camera *camera,Level *level,_SVector *offset)

{
  Camera *pCVar1;
  int in_a3;
  
  while( true ) {
    in_a3 = in_a3 + 1;
    (camera->core).vvNormalWorVecMat[0].m[6] = (camera->core).vvNormalWorVecMat[0].m[6] + offset->z;
    pCVar1 = (Camera *)((camera->core).vvNormalWorVecMat[0].m + 8);
    if ((int)level <= in_a3) break;
    (pCVar1->core).position.x = (pCVar1->core).position.x + offset->x;
    *(short *)&(camera->core).vvNormalWorVecMat[0].field_0x12 =
         *(short *)&(camera->core).vvNormalWorVecMat[0].field_0x12 + offset->y;
    *(short *)(camera->core).vvNormalWorVecMat[0].t =
         *(short *)(camera->core).vvNormalWorVecMat[0].t + offset->z;
    (camera->core).vvNormalWorVecMat[1].m[0] = (camera->core).vvNormalWorVecMat[1].m[0] + offset->x;
    (camera->core).vvNormalWorVecMat[1].m[1] = (camera->core).vvNormalWorVecMat[1].m[1] + offset->y;
    camera = pCVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateLevelWithInstances(struct Level *level /*$a0*/, struct _SVector *offset /*$s0*/)
 // line 2949, offset 0x8005b938
	/* begin block 1 */
		// Start line: 6919
	/* end block 1 */
	// End Line: 6920

void RelocateLevelWithInstances(Level *level,_SVector *offset)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  short *in_a3;
  short *in_t2;
  int in_t3;
  int iVar5;
  int in_t4;
  int iVar6;
  int in_t5;
  int in_t6;
  int in_t7;
  int in_t8;
  
  do {
    in_a3[2] = (short)offset;
    iVar5 = in_t3;
    do {
      iVar6 = in_t4;
      in_t5 = in_t5 + 0x70;
      in_t4 = iVar6 + 0x70;
      in_t6 = in_t6 + 1;
      in_t3 = iVar5 + 4;
      if ((int)*(short *)(in_t7 + 0x278) < in_t6) {
        return;
      }
      piVar1 = (int *)(iVar5 + 0x280);
      iVar5 = in_t3;
    } while ((*piVar1 != 5) ||
            (psVar4 = (short *)(in_t7 + in_t5), iVar5 = in_t3, *(int *)(iVar6 + 0x37c) != in_t8));
    sVar2 = in_t2[1];
    sVar3 = in_t2[2];
    *psVar4 = *psVar4 + *in_t2;
    psVar4[1] = psVar4[1] + sVar2;
    psVar4[2] = psVar4[2] + sVar3;
    sVar2 = in_t2[1];
    sVar3 = in_t2[2];
    psVar4[3] = psVar4[3] + *in_t2;
    psVar4[4] = psVar4[4] + sVar2;
    psVar4[5] = psVar4[5] + sVar3;
    sVar2 = in_t2[1];
    sVar3 = in_t2[2];
    psVar4[9] = psVar4[9] + *in_t2;
    psVar4[10] = psVar4[10] + sVar2;
    psVar4[0xb] = psVar4[0xb] + sVar3;
    in_a3 = psVar4 + 0xc;
    sVar2 = in_t2[1];
    offset = (_SVector *)((uint)(ushort)psVar4[0xe] + (uint)(ushort)in_t2[2]);
    psVar4[0xc] = psVar4[0xc] + *in_t2;
    psVar4[0xd] = psVar4[0xd] + sVar2;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateTerrain(struct _Terrain *terrain /*$s2*/, struct _SVector *offset /*$s3*/)
 // line 2960, offset 0x8005b970
	/* begin block 1 */
		// Start line: 2961
		// Start offset: 0x8005B970
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8005BA30
	// End Line: 3088

	/* begin block 2 */
		// Start line: 6941
	/* end block 2 */
	// End Line: 6942

void RelocateTerrain(_Terrain *terrain,_SVector *offset)

{
  FUN_8005bf40(offset);
  FUN_8005bb84(gameTrackerX.drawPage,offset);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateVMObjects(struct _VMObject *vobjectlist /*$a0*/, long numvmobjs /*$a1*/, struct _SVector *offset /*$a2*/)
 // line 3094, offset 0x8005ba60
	/* begin block 1 */
		// Start line: 3096
		// Start offset: 0x8005BA60
		// Variables:
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x8005BAB0
	// End Line: 3118

	/* begin block 2 */
		// Start line: 7218
	/* end block 2 */
	// End Line: 7219

	/* begin block 3 */
		// Start line: 7219
	/* end block 3 */
	// End Line: 7220

	/* begin block 4 */
		// Start line: 7222
	/* end block 4 */
	// End Line: 7223

void RelocateVMObjects(_VMObject *vobjectlist,long numvmobjs,_SVector *offset)

{
  undefined4 *in_v0;
  
  FUN_8005bf9c(in_v0 + 1,*in_v0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateBGObjects(struct _BGObject *BGObjList /*$a0*/, long numBGObjs /*$t2*/, struct _SVector *offset /*$a2*/)
 // line 3149, offset 0x8005bab8
	/* begin block 1 */
		// Start line: 3150
		// Start offset: 0x8005BAB8
		// Variables:
	// 		int i; // $t1
	// 		int d; // $a3
	/* end block 1 */
	// End offset: 0x8005BB54
	// End Line: 3162

	/* begin block 2 */
		// Start line: 6298
	/* end block 2 */
	// End Line: 6299

void RelocateBGObjects(_BGObject *BGObjList,long numBGObjs,_SVector *offset)

{
  int in_a3;
  
  while( true ) {
    in_a3 = in_a3 + 1;
    *(short *)&BGObjList->numVertices = *(short *)&BGObjList->numVertices + offset->z;
    if (numBGObjs <= in_a3) break;
    *(short *)&BGObjList[3].vertexList = *(short *)&BGObjList[3].vertexList + offset->x;
    *(short *)((int)&BGObjList[3].vertexList + 2) =
         *(short *)((int)&BGObjList[3].vertexList + 2) + offset->y;
    BGObjList = (_BGObject *)&BGObjList[2].x;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocatePlanPool(struct PlanningNode *planPool /*$s0*/, struct _SVector *offset /*$a1*/)
 // line 3164, offset 0x8005bb5c
	/* begin block 1 */
		// Start line: 3165
		// Start offset: 0x8005BB5C
		// Variables:
	// 		int i; // $a1
	// 		short ox; // $s1
	// 		short oy; // $s2
	// 		short oz; // $s3
	/* end block 1 */
	// End offset: 0x8005BBC8
	// End Line: 3180

	/* begin block 2 */
		// Start line: 7340
	/* end block 2 */
	// End Line: 7341

void RelocatePlanPool(PlanningNode *planPool,_SVector *offset)

{
  int *piVar1;
  int in_v0;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *in_a2;
  int in_a3;
  int in_t0;
  int in_t1;
  int in_t2;
  
  do {
    in_a3 = in_a3 + 1;
    iVar4 = in_a3 * 8;
    iVar3 = in_t0;
    if (in_v0 <= in_a3) {
      do {
        in_t1 = in_t1 + 1;
        in_t0 = iVar3 + 0x18;
        if (in_t2 <= in_t1) {
          return;
        }
        piVar1 = (int *)(iVar3 + 0x2c);
        in_a3 = 0;
        iVar3 = in_t0;
      } while (*piVar1 < 1);
      iVar4 = 0;
    }
    psVar2 = (short *)(iVar4 + *(int *)(in_t0 + 4));
    *psVar2 = *psVar2 + *in_a2;
    iVar3 = iVar4 + *(int *)(in_t0 + 4);
    *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + in_a2[1];
    iVar4 = iVar4 + *(int *)(in_t0 + 4);
    *(short *)(iVar4 + 4) = *(short *)(iVar4 + 4) + in_a2[2];
    in_v0 = *(int *)(in_t0 + 0x14);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocatePlanMarkers(struct _PlanMkr *planMkrList /*$a3*/, int numPlanMkrs /*$a1*/, struct _SVector *offset /*$a2*/)
 // line 3185, offset 0x8005bc10
	/* begin block 1 */
		// Start line: 3186
		// Start offset: 0x8005BC10
		// Variables:
	// 		int i; // $a1
	// 		short ox; // $t1
	// 		short oy; // $t0
	// 		short oz; // $a2
	/* end block 1 */
	// End offset: 0x8005BC5C
	// End Line: 3200

	/* begin block 2 */
		// Start line: 7395
	/* end block 2 */
	// End Line: 7396

	/* begin block 3 */
		// Start line: 7399
	/* end block 3 */
	// End Line: 7400

void RelocatePlanMarkers(_PlanMkr *planMkrList,int numPlanMkrs,_SVector *offset)

{
  short in_v0;
  short in_v1;
  short unaff_s2;
  
  planMkrList->id = in_v1;
  (planMkrList->pos).z = in_v0 + unaff_s2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateSFXMarkers(struct _SFXMkr *sfxMkrList /*$a0*/, int numSFXMkrs /*$a1*/, struct _SVector *offset /*$a2*/)
 // line 3202, offset 0x8005bc64
	/* begin block 1 */
		// Start line: 3204
		// Start offset: 0x8005BC64
		// Variables:
	// 		int i; // $a1
	// 		short ox; // $t0
	// 		short oy; // $a3
	// 		short oz; // $a2
	/* end block 1 */
	// End offset: 0x8005BCA8
	// End Line: 3217

	/* begin block 2 */
		// Start line: 7439
	/* end block 2 */
	// End Line: 7440

	/* begin block 3 */
		// Start line: 7440
	/* end block 3 */
	// End Line: 7441

	/* begin block 4 */
		// Start line: 7443
	/* end block 4 */
	// End Line: 7444

void RelocateSFXMarkers(_SFXMkr *sfxMkrList,int numSFXMkrs,_SVector *offset)

{
  short sVar1;
  short *in_a3;
  short in_t0;
  short in_t1;
  
  while( true ) {
    sVar1 = *(short *)&sfxMkrList->soundData;
    *(short *)((int)&sfxMkrList->soundData + 2) =
         *(short *)((int)&sfxMkrList->soundData + 2) + in_t0;
    *(short *)&sfxMkrList->soundData = sVar1 + (short)offset;
    sfxMkrList = (_SFXMkr *)sfxMkrList->sfxTbl;
    if (numSFXMkrs == 0) break;
    numSFXMkrs = numSFXMkrs + -1;
    *in_a3 = *in_a3 + in_t1;
    in_a3 = in_a3 + 4;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_AdjustMultiSpline(struct MultiSpline *multi /*$a3*/, struct _SVector *offset /*$t0*/)
 // line 3219, offset 0x8005bcb0
	/* begin block 1 */
		// Start line: 3220
		// Start offset: 0x8005BCB0
		// Variables:
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x8005BD58
	// End Line: 3241

	/* begin block 2 */
		// Start line: 7479
	/* end block 2 */
	// End Line: 7480

void STREAM_AdjustMultiSpline(MultiSpline *multi,_SVector *offset)

{
  short sVar1;
  short in_v0;
  short in_v1;
  MultiSpline *pMVar2;
  short in_a2;
  short in_a3;
  short in_t0;
  
  while( true ) {
    *(short *)&multi->color = in_v0;
    sVar1 = *(short *)((int)&multi->color + 2);
    *(short *)&multi->positional = in_v1 + in_a2;
    *(short *)((int)&multi->color + 2) = sVar1 + in_a3;
    pMVar2 = (MultiSpline *)&(multi->curScaling).fracCurr;
    if (offset == (_SVector *)0x0) break;
    offset = (_SVector *)((int)&offset[-1].pad + 1);
    in_v1 = *(short *)&pMVar2->positional;
    in_v0 = (multi->curScaling).currkey + in_t0;
    multi = pMVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RelocateInstance(struct _Instance *instance /*$s0*/, struct _SVector *offset /*$s1*/)
 // line 3243, offset 0x8005bd60
	/* begin block 1 */
		// Start line: 7531
	/* end block 1 */
	// End Line: 7532

void STREAM_RelocateInstance(_Instance *instance,_SVector *offset)

{
  short in_v0;
  int iVar1;
  int iVar2;
  int in_a2;
  int **in_a3;
  short *in_t0;
  
  while( true ) {
    offset->pad = in_v0;
    in_a2 = in_a2 + 1;
    iVar2 = in_a2 * 0x20;
    if ((int)*(short *)(*in_a3 + 1) <= in_a2) break;
    iVar1 = iVar2 + **in_a3;
    *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + *in_t0;
    *(short *)(iVar2 + **in_a3 + 4) = *(short *)(iVar2 + **in_a3 + 4) + in_t0[1];
    offset = (_SVector *)(iVar2 + **in_a3);
    in_v0 = offset->pad + in_t0[2];
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_OffsetInstancePosition(struct _Instance *instance /*$s0*/, struct _SVector *offset /*$s1*/, int streamSignalFlag /*$s2*/)
 // line 3251, offset 0x8005bda8
	/* begin block 1 */
		// Start line: 7547
	/* end block 1 */
	// End Line: 7548

void STREAM_OffsetInstancePosition(_Instance *instance,_SVector *offset,int streamSignalFlag)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_SetInstancePosition(struct _Instance *instance /*$a0*/, struct evPositionData *data /*$a1*/)
 // line 3278, offset 0x8005bec0
	/* begin block 1 */
		// Start line: 3279
		// Start offset: 0x8005BEC0
		// Variables:
	// 		struct _SVector offset; // stack offset -16
	/* end block 1 */
	// End offset: 0x8005BEC0
	// End Line: 3279

	/* begin block 2 */
		// Start line: 7610
	/* end block 2 */
	// End Line: 7611

void STREAM_SetInstancePosition(_Instance *instance,evPositionData *data)

{
  FUN_80017800(&standardMenu);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateInstances(struct _SVector *offset /*$s1*/)
 // line 3289, offset 0x8005bf18
	/* begin block 1 */
		// Start line: 3290
		// Start offset: 0x8005BF18
		// Variables:
	// 		struct _Instance *instance; // $s0
	/* end block 1 */
	// End offset: 0x8005BF58
	// End Line: 3300

	/* begin block 2 */
		// Start line: 7637
	/* end block 2 */
	// End Line: 7638

	/* begin block 3 */
		// Start line: 7638
	/* end block 3 */
	// End Line: 7639

void RelocateInstances(_SVector *offset)

{
  int in_a1;
  short sStack00000014;
  
  sStack00000014 = *(short *)(in_a1 + 4) - offset[0xc].x;
  FUN_8005bdd0(offset,&stack0x00000010);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateStreamPortals(struct StreamUnitPortal *StreamUnitList /*$a0*/, int NumStreamUnits /*$a1*/, struct _SVector *offset /*$a2*/)
 // line 3303, offset 0x8005bf74
	/* begin block 1 */
		// Start line: 3305
		// Start offset: 0x8005BF74
		// Variables:
	// 		int i; // $t1
	// 		int d; // $t0
	/* end block 1 */
	// End offset: 0x8005C09C
	// End Line: 3330

	/* begin block 2 */
		// Start line: 7667
	/* end block 2 */
	// End Line: 7668

	/* begin block 3 */
		// Start line: 7668
	/* end block 3 */
	// End Line: 7669

	/* begin block 4 */
		// Start line: 7670
	/* end block 4 */
	// End Line: 7671

void RelocateStreamPortals(StreamUnitPortal *StreamUnitList,int NumStreamUnits,_SVector *offset)

{
  int unaff_s0;
  
  while (unaff_s0 != 0) {
    FUN_8005bd88(unaff_s0);
    unaff_s0 = *(int *)(unaff_s0 + 8);
  }
  FUN_800443c8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_PackVRAMObject(struct _ObjectTracker *objectTracker /*$s1*/)
 // line 3340, offset 0x8005c0a4
	/* begin block 1 */
		// Start line: 3341
		// Start offset: 0x8005C0A4
		// Variables:
	// 		struct VramSize *vramSize; // $a0

		/* begin block 1.1 */
			// Start line: 3350
			// Start offset: 0x8005C0D4
			// Variables:
		// 		struct VramBuffer *vramBuffer; // $v0

			/* begin block 1.1.1 */
				// Start line: 3358
				// Start offset: 0x8005C0E4
				// Variables:
			// 		char fileName[64]; // stack offset -80
			// 		struct _BlockVramEntry *vramBlock; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8005C10C
			// End Line: 3368
		/* end block 1.1 */
		// End offset: 0x8005C18C
		// End Line: 3387
	/* end block 1 */
	// End offset: 0x8005C190
	// End Line: 3395

	/* begin block 2 */
		// Start line: 7778
	/* end block 2 */
	// End Line: 7779

void STREAM_PackVRAMObject(_ObjectTracker *objectTracker)

{
  short in_v0;
  _ObjectTracker *p_Var1;
  int in_a1;
  short *in_a2;
  _ObjectTracker *p_Var2;
  _ObjectTracker *in_a3;
  int iVar3;
  int in_t0;
  int in_t1;
  
  do {
    *(short *)in_a3[2].name = in_v0;
    p_Var1 = objectTracker;
    in_a3 = (_ObjectTracker *)(in_a3->name + 8);
    if (2 < in_t0) {
      in_t1 = in_t1 + 1;
      p_Var1 = (_ObjectTracker *)&objectTracker[2].objectStatus;
      if (in_a1 <= in_t1) {
        return;
      }
      *(short *)&objectTracker[3].object = *(short *)&objectTracker[3].object + *in_a2;
      *(short *)((int)&objectTracker[3].object + 2) =
           *(short *)((int)&objectTracker[3].object + 2) + in_a2[1];
      objectTracker[3].objectStatus = objectTracker[3].objectStatus + in_a2[2];
      *(short *)(objectTracker[3].name + 8) = *(short *)(objectTracker[3].name + 8) + *in_a2;
      iVar3 = 0;
      *(short *)(objectTracker[3].name + 10) = *(short *)(objectTracker[3].name + 10) + in_a2[1];
      *(short *)(objectTracker[3].name + 0xc) = *(short *)(objectTracker[3].name + 0xc) + in_a2[2];
      p_Var2 = p_Var1;
      do {
        *(short *)(p_Var2[1].name + 8) = *(short *)(p_Var2[1].name + 8) + *in_a2;
        *(short *)(p_Var2[1].name + 10) = *(short *)(p_Var2[1].name + 10) + in_a2[1];
        iVar3 = iVar3 + 1;
        *(short *)(p_Var2[1].name + 0xc) = *(short *)(p_Var2[1].name + 0xc) + in_a2[2];
        p_Var2 = (_ObjectTracker *)(p_Var2->name + 8);
      } while (iVar3 < 3);
      in_t0 = 0;
      in_a3 = p_Var1;
    }
    *(short *)(in_a3[1].objectsUsing + 3) = *(short *)(in_a3[1].objectsUsing + 3) + *in_a2;
    *(short *)(in_a3[1].objectsUsing + 5) = *(short *)(in_a3[1].objectsUsing + 5) + in_a2[1];
    in_t0 = in_t0 + 1;
    in_v0 = *(short *)in_a3[2].name + in_a2[2];
    objectTracker = p_Var1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_SetupInstanceFlags(struct _Instance *instance /*$s0*/)
 // line 3424, offset 0x8005c1a4
	/* begin block 1 */
		// Start line: 7979
	/* end block 1 */
	// End Line: 7980

void MORPH_SetupInstanceFlags(_Instance *instance)

{
  undefined2 in_v0;
  int in_a2;
  
  *(undefined2 *)(in_a2 + 10) = in_v0;
  FUN_8006035c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_SetupInstanceListFlags()
 // line 3475, offset 0x8005c2d8
	/* begin block 1 */
		// Start line: 3476
		// Start offset: 0x8005C2D8
		// Variables:
	// 		struct _Instance *instance; // $s0
	/* end block 1 */
	// End offset: 0x8005C310
	// End Line: 3487

	/* begin block 2 */
		// Start line: 8084
	/* end block 2 */
	// End Line: 8085

	/* begin block 3 */
		// Start line: 8089
	/* end block 3 */
	// End Line: 8090

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_SetupInstanceListFlags(void)

{
  undefined4 in_a0;
  undefined4 in_a1;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(in_a0,in_a1,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_InMorphInstanceListFlags()
 // line 3489, offset 0x8005c320
	/* begin block 1 */
		// Start line: 3491
		// Start offset: 0x8005C320
		// Variables:
	// 		struct _Instance *instance; // $v1
	/* end block 1 */
	// End offset: 0x8005C380
	// End Line: 3514

	/* begin block 2 */
		// Start line: 8117
	/* end block 2 */
	// End Line: 8118

	/* begin block 3 */
		// Start line: 8118
	/* end block 3 */
	// End Line: 8119

	/* begin block 4 */
		// Start line: 8122
	/* end block 4 */
	// End Line: 8123

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_InMorphInstanceListFlags(void)

{
  int unaff_s0;
  
  do {
    FUN_8005c1cc(unaff_s0);
    unaff_s0 = *(int *)(unaff_s0 + 8);
  } while (unaff_s0 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_InMorphDoFadeValues()
 // line 3516, offset 0x8005c388
	/* begin block 1 */
		// Start line: 3518
		// Start offset: 0x8005C388
		// Variables:
	// 		int fade1; // $a0
	// 		int fade2; // $v0
	/* end block 1 */
	// End offset: 0x8005C3D8
	// End Line: 3532

	/* begin block 2 */
		// Start line: 8171
	/* end block 2 */
	// End Line: 8172

	/* begin block 3 */
		// Start line: 8172
	/* end block 3 */
	// End Line: 8173

	/* begin block 4 */
		// Start line: 8174
	/* end block 4 */
	// End Line: 8175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_InMorphDoFadeValues(void)

{
  int in_v1;
  uint in_a1;
  uint in_a2;
  uint in_a3;
  
  while( true ) {
    *(uint *)(in_v1 + 0x18) = *(uint *)(in_v1 + 0x18) & in_a1;
    in_v1 = *(int *)(in_v1 + 8);
    if (in_v1 == 0) break;
    if ((*(uint *)(in_v1 + 0x18) & in_a3) != 0) {
      *(uint *)(in_v1 + 0x18) = *(uint *)(in_v1 + 0x18) & in_a2;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_UpdateTimeMult()
 // line 3538, offset 0x8005c3e0
	/* begin block 1 */
		// Start line: 3541
		// Start offset: 0x8005C3E0

		/* begin block 1.1 */
			// Start line: 3544
			// Start offset: 0x8005C3F4
			// Variables:
		// 		short ratio; // $v1
		/* end block 1.1 */
		// End offset: 0x8005C510
		// End Line: 3582
	/* end block 1 */
	// End offset: 0x8005C54C
	// End Line: 3598

	/* begin block 2 */
		// Start line: 8215
	/* end block 2 */
	// End Line: 8216

	/* begin block 3 */
		// Start line: 8217
	/* end block 3 */
	// End Line: 8218

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_UpdateTimeMult(void)

{
  short in_v0;
  int in_v1;
  short in_a0;
  
  if (in_v1 == 0) {
    gameTrackerX.GlobalObjects._0_2_ = in_a0;
    gameTrackerX.GlobalObjects._2_2_ = in_v0 - in_a0;
    return;
  }
  gameTrackerX.GlobalObjects._0_2_ = in_v0 - in_a0;
  gameTrackerX.GlobalObjects._2_2_ = in_a0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_UpdateNormals(struct Level *BaseLevel /*$t0*/)
 // line 3602, offset 0x8005c554
	/* begin block 1 */
		// Start line: 3603
		// Start offset: 0x8005C554
		// Variables:
	// 		struct _TFace *face; // $v1
	// 		long faceCount; // $a2
	// 		struct _TVertex *v; // $a1
	// 		struct _MorphVertex *mv; // $a3
	// 		struct _MorphColor *mc; // $a0
	// 		short h1; // $v1
	// 		short *morphNormals; // $a1

		/* begin block 1.1 */
			// Start line: 3652
			// Start offset: 0x8005C650
			// Variables:
		// 		struct _TVertex *endv; // $a2
		/* end block 1.1 */
		// End offset: 0x8005C6C4
		// End Line: 3673

		/* begin block 1.2 */
			// Start line: 3673
			// Start offset: 0x8005C6C4
			// Variables:
		// 		struct _BSPNode *node; // $v1
		// 		struct _BSPLeaf *leaf; // $a1
		// 		struct _Sphere_noSq hsphere; // stack offset -32
		// 		struct _BoundingBox hbox; // stack offset -24
		// 		struct _Terrain *terrain; // $a0
		// 		long curTree; // $t0
		/* end block 1.2 */
		// End offset: 0x8005C8D8
		// End Line: 3724

		/* begin block 1.3 */
			// Start line: 3726
			// Start offset: 0x8005C8D8
			// Variables:
		// 		struct _Instance *instance; // $s0

			/* begin block 1.3.1 */
				// Start line: 3732
				// Start offset: 0x8005C900
				// Variables:
			// 		struct SVECTOR realDiff; // stack offset -32
			// 		struct _Position oldPos; // stack offset -24
			/* end block 1.3.1 */
			// End offset: 0x8005C9E8
			// End Line: 3756
		/* end block 1.3 */
		// End offset: 0x8005C9F8
		// End Line: 3759
	/* end block 1 */
	// End offset: 0x8005C9F8
	// End Line: 3760

	/* begin block 2 */
		// Start line: 8347
	/* end block 2 */
	// End Line: 8348

void MORPH_UpdateNormals(Level *BaseLevel)

{
  gameTrackerX.controlCommand[1][3] = 0;
  gameTrackerX.controlCommand[1][4] = gameTrackerX.controlCommand[1][2];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_BringBackNormals(struct Level *BaseLevel /*$a3*/)
 // line 3762, offset 0x8005ca08
	/* begin block 1 */
		// Start line: 3763
		// Start offset: 0x8005CA08
		// Variables:
	// 		struct _TFace *face; // $v1
	// 		long faceCount; // $a2
	// 		struct _TVertex *v; // $a1
	// 		struct _MorphVertex *mv; // $a0
	// 		struct _MorphColor *mc; // $v0
	// 		short h1; // $v1
	// 		short *morphNormals; // $a1

		/* begin block 1.1 */
			// Start line: 3818
			// Start offset: 0x8005CAE4
			// Variables:
		// 		struct _TVertex *endv; // $a2
		/* end block 1.1 */
		// End offset: 0x8005CB4C
		// End Line: 3829

		/* begin block 1.2 */
			// Start line: 3844
			// Start offset: 0x8005CB4C
			// Variables:
		// 		struct _BSPNode *node; // $v1
		// 		struct _BSPLeaf *leaf; // $a1
		// 		struct _Sphere_noSq hsphere; // stack offset -32
		// 		struct _BoundingBox hbox; // stack offset -24
		// 		struct _Terrain *terrain; // $a0
		// 		long curTree; // $t0
		/* end block 1.2 */
		// End offset: 0x8005CD60
		// End Line: 3894

		/* begin block 1.3 */
			// Start line: 3897
			// Start offset: 0x8005CD60
			// Variables:
		// 		struct _Instance *instance; // $s0

			/* begin block 1.3.1 */
				// Start line: 3903
				// Start offset: 0x8005CD88
				// Variables:
			// 		struct SVECTOR realDiff; // stack offset -32
			// 		struct _Position oldPos; // stack offset -24
			/* end block 1.3.1 */
			// End offset: 0x8005CE58
			// End Line: 3927
		/* end block 1.3 */
		// End offset: 0x8005CE68
		// End Line: 3930
	/* end block 1 */
	// End offset: 0x8005CE68
	// End Line: 3931

	/* begin block 2 */
		// Start line: 8739
	/* end block 2 */
	// End Line: 8740

void MORPH_BringBackNormals(Level *BaseLevel)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Level *unaff_s0;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  void *in_stack_00000018;
  ushort in_stack_0000001c;
  
  do {
    FUN_8001e924(BaseLevel,&stack0x00000010);
    BaseLevel = unaff_s0;
    do {
      do {
        BaseLevel = (Level *)BaseLevel->numVMObjects;
        if (BaseLevel == (Level *)0x0) {
          return;
        }
        iVar1 = BaseLevel->numSpotSpecturalLights;
      } while ((iVar1 == 0) ||
              (((*(int *)(iVar1 + 0x44) == 0 && (*(short *)(iVar1 + 0x48) == 0)) ||
               ((BaseLevel->numPointLights & 8U) != 0))));
      in_stack_00000018 = BaseLevel->cameraList;
      in_stack_0000001c = *(ushort *)&BaseLevel->bspPlaneError;
      *(short *)&BaseLevel->cameraList = *(short *)(iVar1 + 0x20) + *(short *)(iVar1 + 0x44);
      *(short *)((int)&BaseLevel->cameraList + 2) =
           *(short *)(iVar1 + 0x22) + *(short *)(iVar1 + 0x46);
      *(short *)&BaseLevel->bspPlaneError = *(short *)(iVar1 + 0x24) + *(short *)(iVar1 + 0x48);
      iVar3 = (uint)*(ushort *)&BaseLevel->cameraList - ((uint)in_stack_00000018 & 0xffff);
      in_stack_00000010 = (undefined2)iVar3;
      iVar2 = (uint)*(ushort *)((int)&BaseLevel->cameraList + 2) - ((uint)in_stack_00000018 >> 0x10)
      ;
      in_stack_00000012 = (undefined2)iVar2;
      iVar1 = (uint)*(ushort *)&BaseLevel->bspPlaneError - (uint)in_stack_0000001c;
      in_stack_00000014 = (undefined2)iVar1;
      unaff_s0 = BaseLevel;
    } while ((iVar3 * 0x10000 >> 0x10) + (iVar2 * 0x10000 >> 0x10) + (iVar1 * 0x10000 >> 0x10) == 0)
    ;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_AddOffsets(struct Level *BaseLevel /*$s2*/, int time /*$a1*/)
 // line 3933, offset 0x8005ce78
	/* begin block 1 */
		// Start line: 3934
		// Start offset: 0x8005CE78
		// Variables:
	// 		struct _TVertex *v; // $a3
	// 		struct _MorphVertex *mv; // $a2
	// 		struct _MorphColor *mc; // $t2
	// 		long m; // $v0
	// 		long fixed_time; // $s1
	// 		struct _Instance *instance; // $s0

		/* begin block 1.1 */
			// Start line: 3982
			// Start offset: 0x8005D040
			// Variables:
		// 		struct SVECTOR diff; // stack offset -40
		// 		struct SVECTOR realDiff; // stack offset -32
		// 		struct _Position oldPos; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x8005D13C
		// End Line: 4001

		/* begin block 1.2 */
			// Start line: 4010
			// Start offset: 0x8005D164
			// Variables:
		// 		long r0; // $a2
		// 		long g0; // $a1
		// 		long b0; // $a0
		// 		long r1; // $v0
		// 		long g1; // $v0
		// 		long b1; // $v1

			/* begin block 1.2.1 */
				// Start line: 4020
				// Start offset: 0x8005D164
				// Variables:
			// 		struct _TVertex *endv; // $t4
			/* end block 1.2.1 */
			// End offset: 0x8005D22C
			// End Line: 4035
		/* end block 1.2 */
		// End offset: 0x8005D22C
		// End Line: 4058
	/* end block 1 */
	// End offset: 0x8005D22C
	// End Line: 4060

	/* begin block 2 */
		// Start line: 9143
	/* end block 2 */
	// End Line: 9144

	/* begin block 3 */
		// Start line: 9149
	/* end block 3 */
	// End Line: 9150

void MORPH_AddOffsets(Level *BaseLevel,int time)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Level *unaff_s0;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  void *in_stack_00000018;
  ushort in_stack_0000001c;
  
  do {
    FUN_8001e924(BaseLevel,&stack0x00000010);
    BaseLevel = unaff_s0;
    do {
      do {
        BaseLevel = (Level *)BaseLevel->numVMObjects;
        if (BaseLevel == (Level *)0x0) {
          return;
        }
        iVar2 = BaseLevel->numSpotSpecturalLights;
      } while ((iVar2 == 0) ||
              (((*(int *)(iVar2 + 0x44) == 0 && (*(short *)(iVar2 + 0x48) == 0)) ||
               ((BaseLevel->numPointLights & 8U) != 0))));
      in_stack_00000018 = BaseLevel->cameraList;
      in_stack_0000001c = *(ushort *)&BaseLevel->bspPlaneError;
      *(undefined2 *)&BaseLevel->cameraList = *(undefined2 *)(iVar2 + 0x20);
      uVar1 = *(ushort *)&BaseLevel->cameraList;
      *(undefined2 *)((int)&BaseLevel->cameraList + 2) = *(undefined2 *)(iVar2 + 0x22);
      *(undefined2 *)&BaseLevel->bspPlaneError = *(undefined2 *)(iVar2 + 0x24);
      iVar4 = (uint)uVar1 - ((uint)in_stack_00000018 & 0xffff);
      in_stack_00000010 = (undefined2)iVar4;
      iVar3 = (uint)*(ushort *)((int)&BaseLevel->cameraList + 2) - ((uint)in_stack_00000018 >> 0x10)
      ;
      in_stack_00000012 = (undefined2)iVar3;
      iVar2 = (uint)*(ushort *)&BaseLevel->bspPlaneError - (uint)in_stack_0000001c;
      in_stack_00000014 = (undefined2)iVar2;
      unaff_s0 = BaseLevel;
    } while ((iVar4 * 0x10000 >> 0x10) + (iVar3 * 0x10000 >> 0x10) + (iVar2 * 0x10000 >> 0x10) == 0)
    ;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_SubtractOffsets(struct Level *BaseLevel /*$s2*/, int time /*$a1*/)
 // line 4062, offset 0x8005d244
	/* begin block 1 */
		// Start line: 4063
		// Start offset: 0x8005D244
		// Variables:
	// 		struct _TVertex *v; // $a3
	// 		struct _MorphVertex *mv; // $a2
	// 		struct _MorphColor *mc; // $t2
	// 		long m; // $v0
	// 		long fixed_time; // $s1
	// 		struct _Instance *instance; // $s0

		/* begin block 1.1 */
			// Start line: 4109
			// Start offset: 0x8005D414
			// Variables:
		// 		struct SVECTOR diff; // stack offset -40
		// 		struct SVECTOR realDiff; // stack offset -32
		// 		struct _Position oldPos; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x8005D510
		// End Line: 4129

		/* begin block 1.2 */
			// Start line: 4138
			// Start offset: 0x8005D538
			// Variables:
		// 		long r0; // $a2
		// 		long g0; // $a1
		// 		long b0; // $a0
		// 		long r1; // $v0
		// 		long g1; // $v0
		// 		long b1; // $v1

			/* begin block 1.2.1 */
				// Start line: 4147
				// Start offset: 0x8005D538
				// Variables:
			// 		struct _TVertex *endv; // $t4
			/* end block 1.2.1 */
			// End offset: 0x8005D600
			// End Line: 4162
		/* end block 1.2 */
		// End offset: 0x8005D600
		// End Line: 4185
	/* end block 1 */
	// End offset: 0x8005D600
	// End Line: 4187

	/* begin block 2 */
		// Start line: 9485
	/* end block 2 */
	// End Line: 9486

	/* begin block 3 */
		// Start line: 9491
	/* end block 3 */
	// End Line: 9492

void MORPH_SubtractOffsets(Level *BaseLevel,int time)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_a3;
  undefined *in_t0;
  ushort *in_t2;
  uint in_t4;
  int unaff_s1;
  
  while( true ) {
    *in_t0 = (char)BaseLevel;
    if (in_t4 <= in_a3) break;
    uVar1 = *(ushort *)(in_t0 + 8);
    uVar2 = *in_t2;
    uVar5 = (uint)(uVar1 >> 2) & 0xf8;
    iVar3 = (uint)uVar2 << 0x10;
    uVar4 = (uint)(uVar1 >> 7) & 0xf8;
    in_a3 = in_a3 + 0xc;
    in_t2 = in_t2 + 1;
    in_t0[10] = (char)((uint)uVar1 & 0x1f) * '\b' +
                (char)((int)((((uint)uVar2 & 0x1f) * 8 + ((uint)uVar1 & 0x1f) * -8) * unaff_s1) >>
                      0xc);
    in_t0[0xb] = (char)uVar5 + (char)((int)(((iVar3 >> 0x12 & 0xf8U) - uVar5) * unaff_s1) >> 0xc);
    BaseLevel = (Level *)(uVar4 + ((int)(((iVar3 >> 0x17 & 0xf8U) - uVar4) * unaff_s1) >> 0xc));
    in_t0 = in_t0 + 0xc;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_GetComponentsForTrackingPoint(struct _TFace *face /*$a2*/, struct Level *level /*$a3*/)
 // line 4192, offset 0x8005d618
	/* begin block 1 */
		// Start line: 4193
		// Start offset: 0x8005D618
		// Variables:
	// 		struct _SVector (*v[3]); // stack offset -32
	// 		struct _Position *offset; // $a2
	// 		struct _Position player; // stack offset -16
	// 		int n; // $a1
	// 		int saved_div; // $t0
	// 		int next; // $a0
	// 		int side; // $t1
	// 		int track; // $t3
	// 		int x[2]; // stack offset -8
	// 		struct _TVertex *vertexList; // $a0

		/* begin block 1.1 */
			// Start line: 4205
			// Start offset: 0x8005D638
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $a1
		// 		short _z0; // $a0
		// 		short _x1; // $v1
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _Position *_v; // $v0
		// 		struct _Position *_v0; // $a0
		/* end block 1.1 */
		// End offset: 0x8005D638
		// End Line: 4205

		/* begin block 1.2 */
			// Start line: 4221
			// Start offset: 0x8005D708
			// Variables:
		// 		int next; // $v1

			/* begin block 1.2.1 */
				// Start line: 4228
				// Start offset: 0x8005D790
				// Variables:
			// 		int div; // $a0
			/* end block 1.2.1 */
			// End offset: 0x8005D7DC
			// End Line: 4233
		/* end block 1.2 */
		// End offset: 0x8005D7DC
		// End Line: 4234
	/* end block 1 */
	// End offset: 0x8005D8F0
	// End Line: 4260

	/* begin block 2 */
		// Start line: 9826
	/* end block 2 */
	// End Line: 9827

void MORPH_GetComponentsForTrackingPoint(_TFace *face,Level *level)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_a3;
  undefined *in_t0;
  ushort *in_t2;
  uint in_t4;
  int unaff_s1;
  
  while( true ) {
    *in_t0 = (char)face;
    if (in_t4 <= in_a3) break;
    uVar1 = *(ushort *)(in_t0 + 8);
    uVar2 = *in_t2;
    uVar5 = (uint)(uVar1 >> 2) & 0xf8;
    iVar3 = (uint)uVar2 << 0x10;
    uVar4 = (uint)(uVar1 >> 7) & 0xf8;
    in_a3 = in_a3 + 0xc;
    in_t2 = in_t2 + 1;
    in_t0[10] = (char)((uint)uVar1 & 0x1f) * '\b' +
                (char)((int)((((uint)uVar2 & 0x1f) * 8 + ((uint)uVar1 & 0x1f) * -8) * unaff_s1) >>
                      0xc);
    in_t0[0xb] = (char)uVar5 + (char)((int)(((iVar3 >> 0x12 & 0xf8U) - uVar5) * unaff_s1) >> 0xc);
    face = (_TFace *)(uVar4 + ((int)(((iVar3 >> 0x17 & 0xf8U) - uVar4) * unaff_s1) >> 0xc));
    in_t0 = in_t0 + 0xc;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_AveragePoint(struct _SVector *start /*$t0*/, struct _SVector *end /*$a1*/, int interp /*$v1*/, struct _SVector *out /*$a3*/)
 // line 4262, offset 0x8005d8f8
	/* begin block 1 */
		// Start line: 10031
	/* end block 1 */
	// End Line: 10032

void MORPH_AveragePoint(_SVector *start,_SVector *end,int interp,_SVector *out)

{
  int in_v0;
  int in_v1;
  
  DVECTOR_ARRAY_800d1738[0].vx = (short)((in_v0 << 0xc) / in_v1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_UpdateTrackingPoint(struct _TFace *face /*$a2*/, struct Level *level /*$s2*/)
 // line 4278, offset 0x8005d970
	/* begin block 1 */
		// Start line: 4279
		// Start offset: 0x8005D970
		// Variables:
	// 		struct _SVector (*v[3]); // stack offset -56
	// 		struct _SVector p1; // stack offset -40
	// 		struct _SVector p2; // stack offset -32
	// 		struct _SVector p3; // stack offset -24
	// 		struct _Position *offset; // $a3
	// 		int next; // $a1
	// 		struct _TVertex *vertexList; // $a0

		/* begin block 1.1 */
			// Start line: 4299
			// Start offset: 0x8005DA44
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v1
		// 		short _y1; // $t0
		// 		short _z1; // $a3
		/* end block 1.1 */
		// End offset: 0x8005DA44
		// End Line: 4299

		/* begin block 1.2 */
			// Start line: 4299
			// Start offset: 0x8005DA44
			// Variables:
		// 		struct _Position *_v0; // $a2
		/* end block 1.2 */
		// End offset: 0x8005DA44
		// End Line: 4299
	/* end block 1 */
	// End offset: 0x8005DAFC
	// End Line: 4312

	/* begin block 2 */
		// Start line: 10063
	/* end block 2 */
	// End Line: 10064

void MORPH_UpdateTrackingPoint(_TFace *face,Level *level)

{
  FUN_800bd30c(level);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_ToggleMorph()
 // line 4314, offset 0x8005db14
	/* begin block 1 */
		// Start line: 4315
		// Start offset: 0x8005DB14

		/* begin block 1.1 */
			// Start line: 4333
			// Start offset: 0x8005DB80
			// Variables:
		// 		struct Level *level; // $s0
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x8005DC48
		// End Line: 4369
	/* end block 1 */
	// End offset: 0x8005DC48
	// End Line: 4371

	/* begin block 2 */
		// Start line: 10146
	/* end block 2 */
	// End Line: 10147

	/* begin block 3 */
		// Start line: 10148
	/* end block 3 */
	// End Line: 10149

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_ToggleMorph(void)

{
  undefined2 in_v0;
  int in_v1;
  
  *(undefined2 *)(in_v1 + 200) = in_v0;
  *(undefined4 *)(loadStatus.bigFile.searchDirID + 0xcc) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_DoStep(struct _StreamUnit *streamUnit /*$s0*/, char *baseAreaName /*$a1*/)
 // line 4373, offset 0x8005dc60
	/* begin block 1 */
		// Start line: 4374
		// Start offset: 0x8005DC60
		// Variables:
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x8005DD2C
	// End Line: 4431

	/* begin block 2 */
		// Start line: 10300
	/* end block 2 */
	// End Line: 10301

void MORPH_DoStep(_StreamUnit *streamUnit,char *baseAreaName)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s0;
  int *unaff_s1;
  int *piVar4;
  int unaff_s2;
  
code_r0x8005dc60:
  uVar3 = *(undefined4 *)(unaff_s0 + 0xb4);
  do {
    FUN_80060744(uVar3);
    piVar4 = unaff_s1;
    do {
      while( true ) {
        do {
          unaff_s2 = unaff_s2 + -1;
          unaff_s1 = piVar4 + 0x10;
          if (unaff_s2 < 1) {
            return;
          }
          piVar1 = piVar4 + 0xf;
          piVar4 = unaff_s1;
        } while (*(short *)piVar1 != 2);
        unaff_s0 = *unaff_s1;
        if (loadStatus.decompressLen._2_2_ == 1) break;
        iVar2 = *(int *)(unaff_s0 + 0xb4);
        piVar4 = unaff_s1;
        if (iVar2 != 0) {
          *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) | 1;
          FUN_8001e174(loadStatus.bigFile.searchDirID,*(int *)(unaff_s0 + 0xb4) + 8,0);
          goto code_r0x8005dc60;
        }
      }
      iVar2 = *(int *)(unaff_s0 + 0xb8);
      piVar4 = unaff_s1;
    } while (iVar2 == 0);
    *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) | 1;
    FUN_8001e174(loadStatus.bigFile.searchDirID,*(int *)(unaff_s0 + 0xb8) + 8,0);
    uVar3 = *(undefined4 *)(unaff_s0 + 0xb8);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_SetFog(struct _StreamUnit *streamUnit /*$a0*/, int mainUnitFlag /*$t0*/)
 // line 4433, offset 0x8005dd3c
	/* begin block 1 */
		// Start line: 4434
		// Start offset: 0x8005DD3C
		// Variables:
	// 		long time; // $v1
	// 		struct Level *level; // $a2
	// 		int fogNear; // $a1
	// 		int fogFar; // $v0
	/* end block 1 */
	// End offset: 0x8005DE00
	// End Line: 4456

	/* begin block 2 */
		// Start line: 10423
	/* end block 2 */
	// End Line: 10424

	/* begin block 3 */
		// Start line: 10429
	/* end block 3 */
	// End Line: 10430

void MORPH_SetFog(_StreamUnit *streamUnit,int mainUnitFlag)

{
  int in_v0;
  
  if (in_v0 == 0) {
    FUN_8005cea0();
  }
  else {
    FUN_8005d26c();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_UpdateTextures()
 // line 4458, offset 0x8005de10
	/* begin block 1 */
		// Start line: 4459
		// Start offset: 0x8005DE10
		// Variables:
	// 		long time; // $a0
	/* end block 1 */
	// End offset: 0x8005DE50
	// End Line: 4469

	/* begin block 2 */
		// Start line: 10483
	/* end block 2 */
	// End Line: 10484

	/* begin block 3 */
		// Start line: 10486
	/* end block 3 */
	// End Line: 10487

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_UpdateTextures(void)

{
  undefined2 in_v0;
  int in_a0;
  
  *(undefined2 *)(in_a0 + 0x34) = in_v0;
  *(undefined2 *)(in_a0 + 0x38) = in_v0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MORPH_Continue()
 // line 4473, offset 0x8005de68
	/* begin block 1 */
		// Start line: 4474
		// Start offset: 0x8005DE68
		// Variables:
	// 		int i; // $s2
	// 		long mode; // $v0
	/* end block 1 */
	// End offset: 0x8005DFC0
	// End Line: 4532

	/* begin block 2 */
		// Start line: 10516
	/* end block 2 */
	// End Line: 10517

	/* begin block 3 */
		// Start line: 10521
	/* end block 3 */
	// End Line: 10522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MORPH_Continue(void)

{
  int in_v0;
  int in_v1;
  int iVar1;
  
  iVar1 = in_v1 - in_v0;
  if (loadStatus.decompressLen._2_2_ == 1) {
    iVar1 = 0x1000 - iVar1;
  }
  FUN_800741a4(iVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_MORPH_Relocate()
 // line 4533, offset 0x8005dfdc
	/* begin block 1 */
		// Start line: 10656
	/* end block 1 */
	// End Line: 10657

	/* begin block 2 */
		// Start line: 10657
	/* end block 2 */
	// End Line: 10658

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_MORPH_Relocate(void)

{
  int in_v0;
  uint in_v1;
  uint in_a0;
  
  *(uint *)(in_v0 + 0x18) = in_v1 | in_a0;
  FUN_8005c300();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddVertex(struct VECTOR *v0 /*$a0*/, struct RECT *rect /*$t0*/)
 // line 4696, offset 0x8005dfec
	/* begin block 1 */
		// Start line: 4697
		// Start offset: 0x8005DFEC
		// Variables:
	// 		struct SVECTOR v; // stack offset -8
	// 		int x; // $v0
	// 		int y; // $v1
	// 		int z; // $a1
	// 		int scr_x; // $a0
	// 		int scr_y; // $a1
	/* end block 1 */
	// End offset: 0x8005E170
	// End Line: 4733

	/* begin block 2 */
		// Start line: 10982
	/* end block 2 */
	// End Line: 10983

int AddVertex(VECTOR *v0,RECT *rect)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPlaneDist(int k /*$a0*/, int j /*$a1*/, int i /*$a2*/, struct VECTOR *v /*$a3*/)
 // line 4735, offset 0x8005e178
	/* begin block 1 */
		// Start line: 11065
	/* end block 1 */
	// End Line: 11066

	/* begin block 2 */
		// Start line: 11066
	/* end block 2 */
	// End Line: 11067

int GetPlaneDist(int k,int j,int i,VECTOR *v)

{
  undefined2 in_v1;
  short sVar1;
  int in_t0;
  
  *(undefined2 *)(in_t0 + 4) = (short)k;
  *(undefined2 *)(in_t0 + 2) = in_v1;
  sVar1 = (short)j;
  if (j < (int)*(short *)(in_t0 + 6)) {
    sVar1 = *(short *)(in_t0 + 6);
  }
  *(short *)(in_t0 + 6) = sVar1;
  return (int)v;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcVert(struct VECTOR *v /*$a0*/, struct VECTOR *v1 /*$a1*/, struct VECTOR *v2 /*$a2*/, int dist1 /*$a3*/, int dist2 /*stack 16*/, int k /*stack 20*/, int j /*stack 24*/)
 // line 4744, offset 0x8005e204
	/* begin block 1 */
		// Start line: 4745
		// Start offset: 0x8005E204
		// Variables:
	// 		int diff; // $a3
	/* end block 1 */
	// End offset: 0x8005E204
	// End Line: 4745

	/* begin block 2 */
		// Start line: 11083
	/* end block 2 */
	// End Line: 11084

void CalcVert(VECTOR *v,VECTOR *v1,VECTOR *v2,int dist1,int dist2,int k,int j)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddClippedTri(struct SVECTOR *iv /*$a0*/, struct RECT *cliprect /*stack 4*/, int *minz /*stack 8*/)
 // line 4758, offset 0x8005e28c
	/* begin block 1 */
		// Start line: 4759
		// Start offset: 0x8005E28C
		// Variables:
	// 		int clip0; // $s7
	// 		int clip1; // $s2
	// 		int i; // $s5
	// 		int j; // stack offset -64
	// 		int k; // stack offset -60
	// 		int l; // stack offset -56
	// 		int l_1; // $s6
	// 		int numvert; // $fp
	// 		int newnumvert; // $s3
	// 		struct VECTOR v0[16]; // stack offset -576
	// 		struct VECTOR v1[16]; // stack offset -320
	// 		struct VECTOR *src; // stack offset -52
	// 		struct VECTOR *dst; // stack offset -48
	// 		struct VECTOR *tmp; // $v0

		/* begin block 1.1 */
			// Start line: 4835
			// Start offset: 0x8005E4C4
			// Variables:
		// 		int z; // $v0
		/* end block 1.1 */
		// End offset: 0x8005E4F0
		// End Line: 4839
	/* end block 1 */
	// End offset: 0x8005E504
	// End Line: 4841

	/* begin block 2 */
		// Start line: 11111
	/* end block 2 */
	// End Line: 11112

int AddClippedTri(SVECTOR *iv,RECT *cliprect,int *minz)

{
  int in_v0;
  int in_v1;
  int in_t0;
  int iVar1;
  
  *(int *)&iv->vz = in_v0 + in_v1;
  iVar1 = (minz[2] - *(int *)(cliprect + 1) >> 0xc) * in_t0;
  *(int *)(iv + 1) = iVar1 + minz[2];
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_GetClipRect(struct StreamUnitPortal *portal /*$s5*/, struct RECT *rect /*$s3*/)
 // line 4843, offset 0x8005e534
	/* begin block 1 */
		// Start line: 4844
		// Start offset: 0x8005E534
		// Variables:
	// 		int v1x; // $v0
	// 		int v1y; // $t2
	// 		int v1z; // $a3
	// 		int v2x; // $t0
	// 		int v2y; // $v1
	// 		int v2z; // $t1
	// 		int nx; // $s7
	// 		int ny; // $s6
	// 		int nz; // stack offset -56
	// 		int nx2; // $s4
	// 		int ny2; // $s2
	// 		int nz2; // $s1
	// 		int len; // stack offset -52
	// 		int side; // $fp
	// 		int side2; // $s0
	// 		int retval; // $s0
	// 		int horizontal_flag; // stack offset -48
	// 		int fullscreen_flag; // stack offset -44
	// 		int minz; // stack offset -64
	// 		int minz2; // stack offset -60

		/* begin block 1.1 */
			// Start line: 4932
			// Start offset: 0x8005E828
			// Variables:
		// 		int dot; // $v0
		/* end block 1.1 */
		// End offset: 0x8005E8A8
		// End Line: 4942
	/* end block 1 */
	// End offset: 0x8005EACC
	// End Line: 5009

	/* begin block 2 */
		// Start line: 11398
	/* end block 2 */
	// End Line: 11399

int STREAM_GetClipRect(StreamUnitPortal *portal,RECT *rect)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetFogColor(struct StreamUnitPortal *portal /*$s0*/, struct _StreamUnit *mainStreamUnit /*$a1*/, struct Level *mainLevel /*$s1*/)
 // line 5012, offset 0x8005eafc
	/* begin block 1 */
		// Start line: 5013
		// Start offset: 0x8005EAFC
		// Variables:
	// 		long z1; // stack offset -36
	// 		long z2; // stack offset -32
	// 		long z3; // stack offset -28
	// 		long zval; // $a1
	// 		long zval2; // $v1
	// 		long interp; // $s0
	// 		long Color; // stack offset -20
	// 		long MainColor; // stack offset -24
	// 		long LevelColor; // stack offset -40
	// 		struct Level *level; // $a1

		/* begin block 1.1 */
			// Start line: 5025
			// Start offset: 0x8005EB30
			// Variables:
		// 		int time; // $a2
		/* end block 1.1 */
		// End offset: 0x8005EB68
		// End Line: 5031
	/* end block 1 */
	// End offset: 0x8005EE0C
	// End Line: 5119

	/* begin block 2 */
		// Start line: 11907
	/* end block 2 */
	// End Line: 11908

long GetFogColor(StreamUnitPortal *portal,_StreamUnit *mainStreamUnit,Level *mainLevel)

{
  long in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFogRectangle(struct RECT *cliprect /*$a0*/, struct _PrimPool *primPool /*$a1*/, int otzpos /*$a2*/, unsigned long **drawot /*$a3*/, long color /*stack 16*/)
 // line 5121, offset 0x8005ee20
	/* begin block 1 */
		// Start line: 5122
		// Start offset: 0x8005EE20
		// Variables:
	// 		struct POLY_G4 *polyg4; // $t0
	/* end block 1 */
	// End offset: 0x8005EF04
	// End Line: 5163

	/* begin block 2 */
		// Start line: 12137
	/* end block 2 */
	// End Line: 12138

	/* begin block 3 */
		// Start line: 12140
	/* end block 3 */
	// End Line: 12141

void DrawFogRectangle(RECT *cliprect,_PrimPool *primPool,int otzpos,ulong **drawot,long color)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_RenderAdjacantUnit(unsigned long **curOT /*$s3*/, struct StreamUnitPortal *curStreamPortal /*$s0*/, struct _StreamUnit *toStreamUnit /*$s1*/, struct _StreamUnit *mainStreamUnit /*$s2*/, struct RECT *cliprect /*stack 16*/)
 // line 5169, offset 0x8005ef0c
	/* begin block 1 */
		// Start line: 5170
		// Start offset: 0x8005EF0C

		/* begin block 1.1 */
			// Start line: 5174
			// Start offset: 0x8005EF44
			// Variables:
		// 		long portalFogColor; // $s0
		/* end block 1.1 */
		// End offset: 0x8005EF9C
		// End Line: 5186
	/* end block 1 */
	// End offset: 0x8005EF9C
	// End Line: 5187

	/* begin block 2 */
		// Start line: 12319
	/* end block 2 */
	// End Line: 12320

void STREAM_RenderAdjacantUnit
               (ulong **curOT,StreamUnitPortal *curStreamPortal,_StreamUnit *toStreamUnit,
               _StreamUnit *mainStreamUnit,RECT *cliprect)

{
  undefined2 in_v1;
  uint *in_t0;
  
  *(undefined2 *)((int)in_t0 + 0x22) = in_v1;
  *in_t0 = (&mainStreamUnit->StreamUnitID)[(int)toStreamUnit] & (uint)curStreamPortal | 0x8000000;
  (&mainStreamUnit->StreamUnitID)[(int)toStreamUnit] = (uint)in_t0 & (uint)curStreamPortal;
  return;
}



// decompiled code
// original method signature: 
// struct BSPTree * /*$ra*/ STREAM_GetBspTree(struct _StreamUnit *streamUnit /*$a0*/, long bspNumber /*$a1*/)
 // line 5189, offset 0x8005efb8
	/* begin block 1 */
		// Start line: 5191
		// Start offset: 0x8005EFB8
		// Variables:
	// 		struct Level *level; // $v0
	// 		struct _Terrain *terrain; // $v0
	// 		int d; // $a0
	/* end block 1 */
	// End offset: 0x8005F010
	// End Line: 5211

	/* begin block 2 */
		// Start line: 12365
	/* end block 2 */
	// End Line: 12366

	/* begin block 3 */
		// Start line: 12366
	/* end block 3 */
	// End Line: 12367

BSPTree * STREAM_GetBspTree(_StreamUnit *streamUnit,long bspNumber)

{
  BSPTree *pBVar1;
  int unaff_s2;
  
  FUN_8002edbc(streamUnit,*(undefined4 *)(unaff_s2 + 8));
  pBVar1 = (BSPTree *)FUN_800bfccc();
  return pBVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_BlockWarpGateEntrance(struct _StreamUnit *streamUnit /*$a0*/, long collideOn /*$s0*/)
 // line 5214, offset 0x8005f018
	/* begin block 1 */
		// Start line: 5215
		// Start offset: 0x8005F018
		// Variables:
	// 		struct BSPTree *bspTree; // $v1
	/* end block 1 */
	// End offset: 0x8005F078
	// End Line: 5232

	/* begin block 2 */
		// Start line: 12419
	/* end block 2 */
	// End Line: 12420

void WARPGATE_BlockWarpGateEntrance(_StreamUnit *streamUnit,long collideOn)

{
  int in_v1;
  int in_a2;
  
  do {
    streamUnit = (_StreamUnit *)((int)&streamUnit->StreamUnitID + 1);
    if ((int)*(short *)(in_v1 + 0x1a) == collideOn) {
      return;
    }
    in_v1 = in_v1 + 0x24;
  } while ((int)streamUnit < in_a2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_DrawWarpGateRim(struct _StreamUnit *streamUnit /*$a0*/, long drawOn /*$s0*/)
 // line 5235, offset 0x8005f088
	/* begin block 1 */
		// Start line: 5236
		// Start offset: 0x8005F088
		// Variables:
	// 		struct BSPTree *bspTree; // $v1
	/* end block 1 */
	// End offset: 0x8005F0D0
	// End Line: 5256

	/* begin block 2 */
		// Start line: 12461
	/* end block 2 */
	// End Line: 12462

void WARPGATE_DrawWarpGateRim(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_HideAllCloudCovers()
 // line 5258, offset 0x8005f0e0
	/* begin block 1 */
		// Start line: 5260
		// Start offset: 0x8005F0E0
		// Variables:
	// 		struct Object *warpFaceObject; // $a1

		/* begin block 1.1 */
			// Start line: 5266
			// Start offset: 0x8005F0F4
			// Variables:
		// 		struct _Instance *instance; // $v1
		// 		struct _Instance *next; // $a0
		/* end block 1.1 */
		// End offset: 0x8005F138
		// End Line: 5281
	/* end block 1 */
	// End offset: 0x8005F138
	// End Line: 5283

	/* begin block 2 */
		// Start line: 12507
	/* end block 2 */
	// End Line: 12508

	/* begin block 3 */
		// Start line: 12508
	/* end block 3 */
	// End Line: 12509

	/* begin block 4 */
		// Start line: 12511
	/* end block 4 */
	// End Line: 12512

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WARPGATE_HideAllCloudCovers(void)

{
  ushort in_v0;
  ushort uVar1;
  int in_v1;
  int unaff_s0;
  
  *(ushort *)(in_v1 + 0x12) = in_v0 & 0xfffd;
  if (unaff_s0 == 0) {
    uVar1 = in_v0 & 0xfffd | 1;
  }
  else {
    uVar1 = in_v0 & 0xfffc;
  }
  *(ushort *)(in_v1 + 0x12) = uVar1;
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ WARPGATE_UnHideCloudCoverInUnit(long streamUnitID /*$a0*/)
 // line 5285, offset 0x8005f140
	/* begin block 1 */
		// Start line: 5287
		// Start offset: 0x8005F140
		// Variables:
	// 		struct Object *warpFaceObject; // $a3
	// 		struct _Instance *result; // $a2

		/* begin block 1.1 */
			// Start line: 5294
			// Start offset: 0x8005F154
			// Variables:
		// 		struct _Instance *instance; // $v1
		// 		struct _Instance *next; // $a1
		/* end block 1.1 */
		// End offset: 0x8005F1B0
		// End Line: 5312
	/* end block 1 */
	// End offset: 0x8005F1B0
	// End Line: 5314

	/* begin block 2 */
		// Start line: 12563
	/* end block 2 */
	// End Line: 12564

	/* begin block 3 */
		// Start line: 12564
	/* end block 3 */
	// End Line: 12565

	/* begin block 4 */
		// Start line: 12568
	/* end block 4 */
	// End Line: 12569

_Instance * WARPGATE_UnHideCloudCoverInUnit(long streamUnitID)

{
  _Instance *in_v0;
  int in_v1;
  int iVar1;
  _Instance *in_a1;
  
  while( true ) {
    iVar1 = *(int *)(in_v1 + 8);
    if (in_v0 == in_a1) {
      in_v0 = (_Instance *)(*(uint *)(in_v1 + 0x14) | 0x800);
      *(_Instance **)(in_v1 + 0x14) = in_v0;
    }
    if (iVar1 == 0) break;
    in_v0 = *(_Instance **)(iVar1 + 0x1c);
    in_v1 = iVar1;
  }
  return in_v0;
}



// autogenerated function stub: 
// void /*$ra*/ STREAM_RenderWarpGate(unsigned long **mainOT /*$s3*/, struct StreamUnitPortal *curStreamPortal /*$s2*/, struct _StreamUnit *mainStreamUnit /*$s1*/, struct RECT *cliprect /*$s4*/)
void STREAM_RenderWarpGate(unsigned long **mainOT, struct StreamUnitPortal *curStreamPortal, struct _StreamUnit *mainStreamUnit, struct RECT *cliprect)
{ // line 5318, offset 0x8005f1b8
	/* begin block 1 */
		// Start line: 5319
		// Start offset: 0x8005F1B8
		// Variables:
			struct _StreamUnit *toStreamUnit; // $s0
	/* end block 1 */
	// End offset: 0x8005F4D0
	// End Line: 5428

	/* begin block 2 */
		// Start line: 12634
	/* end block 2 */
	// End Line: 12635

}


// decompiled code
// original method signature: 
// void /*$ra*/ WARPGATE_RenderWarpUnit(unsigned long **mainOT /*$fp*/, struct StreamUnitPortal *curStreamPortal /*$s0*/, struct _StreamUnit *mainStreamUnit /*$s4*/, struct RECT *cliprect /*$s2*/)
 // line 5431, offset 0x8005f4f0
	/* begin block 1 */
		// Start line: 5432
		// Start offset: 0x8005F4F0
		// Variables:
	// 		unsigned long **curOT; // $s3
	// 		struct DR_AREA *PortalClip; // $s0
	// 		struct _StreamUnit *toStreamUnit; // $s1

		/* begin block 1.1 */
			// Start line: 5465
			// Start offset: 0x8005F5B8
			// Variables:
		// 		struct RECT PortalRect; // stack offset -48
		// 		long portalFogColor; // $s0

			/* begin block 1.1.1 */
				// Start line: 5534
				// Start offset: 0x8005F800
				// Variables:
			// 		unsigned long *hld; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8005F898
			// End Line: 5552
		/* end block 1.1 */
		// End offset: 0x8005F898
		// End Line: 5553
	/* end block 1 */
	// End offset: 0x8005F898
	// End Line: 5555

	/* begin block 2 */
		// Start line: 12871
	/* end block 2 */
	// End Line: 12872

void WARPGATE_RenderWarpUnit(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STREAM_DumpNonResidentObjects()
 // line 5613, offset 0x8005f8c8
	/* begin block 1 */
		// Start line: 5614
		// Start offset: 0x8005F8C8
		// Variables:
	// 		struct _Instance *instance; // $s0

		/* begin block 1.1 */
			// Start line: 5621
			// Start offset: 0x8005F8F4
			// Variables:
		// 		struct _Instance *next; // $s2
		// 		struct Object *object; // $s1
		/* end block 1.1 */
		// End offset: 0x8005F948
		// End Line: 5636
	/* end block 1 */
	// End offset: 0x8005F954
	// End Line: 5639

	/* begin block 2 */
		// Start line: 13278
	/* end block 2 */
	// End Line: 13279

	/* begin block 3 */
		// Start line: 13283
	/* end block 3 */
	// End Line: 13284

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STREAM_DumpNonResidentObjects(void)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ STREAM_TryAndDumpNonResident(struct _ObjectTracker *otr /*$s2*/)
 // line 5645, offset 0x8005f978
	/* begin block 1 */
		// Start line: 5646
		// Start offset: 0x8005F978
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _Instance *next; // $s1
	/* end block 1 */
	// End offset: 0x8005FAD0
	// End Line: 5713

	/* begin block 2 */
		// Start line: 13367
	/* end block 2 */
	// End Line: 13368

int STREAM_TryAndDumpNonResident(_ObjectTracker *otr)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int unaff_s2;
  uint unaff_s3;
  
  do {
    do {
      iVar3 = unaff_s2;
      if (iVar3 == 0) {
        iVar3 = FUN_80059028();
        return iVar3;
      }
      puVar4 = *(uint **)(iVar3 + 0x1c);
      unaff_s2 = *(int *)(iVar3 + 8);
    } while (((*puVar4 & unaff_s3) != 0) ||
            (iVar1 = FUN_80059398(*(undefined4 *)(iVar3 + 0x34)), iVar1 != 0));
    uVar2 = FUN_800586ac(puVar4);
    iVar1 = FUN_80058f68(uVar2);
  } while (iVar1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_80032538(loadStatus.bigFile.subDirList,iVar3,0);
}





