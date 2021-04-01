#include "THISDUST.H"
#include "MBMISS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_Message(struct _Instance *instance /*$s1*/, unsigned long message /*$s2*/, unsigned long data /*$s3*/)
 // line 126, offset 0x8008efa8
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8008EFA8

		/* begin block 1.1 */
			// Start line: 132
			// Start offset: 0x8008EFEC
			// Variables:
		// 		struct PhysObData *pod; // $s0
		/* end block 1.1 */
		// End offset: 0x8008F020
		// End Line: 137
	/* end block 1 */
	// End offset: 0x8008F030
	// End Line: 142

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

void WCBEGG_Message(_Instance *instance,ulong message,ulong data)

{
  int in_v0;
  int unaff_s0;
  uint *unaff_s1;
  int unaff_s2;
  
  if ((in_v0 == 0) && (*(uint *)(unaff_s0 + 0x138) == (uint)*(byte *)(unaff_s2 + 0x24))) {
    FUN_800352c8();
    FUN_8003520c();
    *unaff_s1 = *unaff_s1 | 0x20;
  }
  FUN_80089c8c();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WCBEGG_ShouldIgniteEgg(struct _Instance *egg /*$s1*/, struct _walbossAttributes *wa /*$s2*/)
 // line 144, offset 0x8008f04c
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8008F04C
		// Variables:
	// 		struct _InstanceList *instanceList; // $s0
	// 		struct _Instance *instance; // $s0
	/* end block 1 */
	// End offset: 0x8008F12C
	// End Line: 176

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

int WCBEGG_ShouldIgniteEgg(_Instance *egg,_walbossAttributes *wa)

{
  int in_v0;
  code *pcVar1;
  int unaff_s1;
  int unaff_s2;
  
  if (unaff_s2 == in_v0) {
    pcVar1 = FUN_8008f1c4;
    if (*(code **)(unaff_s1 + 0xf0) == FUN_8008f1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_80081880();
    }
  }
  else {
    pcVar1 = (code *)FUN_8006c410();
  }
  return (int)pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_Process(struct _Instance *instance /*$s1*/, struct GameTracker *gameTracker /*$s6*/)
 // line 178, offset 0x8008f144
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x8008F144
		// Variables:
	// 		struct PhysObData *data; // $s5
	// 		int time; // $s2
	// 		int lastTime; // $s4
	// 		int timeBetween; // $s0
	// 		int birthTime; // $a0
	// 		struct Object *walboss; // $v0
	// 		struct _walbossAttributes *wa; // $s3
	/* end block 1 */
	// End offset: 0x8008F310
	// End Line: 239

	/* begin block 2 */
		// Start line: 371
	/* end block 2 */
	// End Line: 372

void WCBEGG_Process(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  int in_v1;
  int in_a2;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039494(instance,in_v1 - (int)gameTracker,in_v0 - in_a2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_ExplodeProcess(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$s3*/)
 // line 241, offset 0x8008f338
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x8008F338
		// Variables:
	// 		struct PhysObData *data; // $s1
	// 		int currentTime; // $s2
	// 		int time; // $v0
	// 		struct Object *walboss; // $v1
	// 		struct _walbossAttributes *wa; // $v1
	/* end block 1 */
	// End offset: 0x8008F45C
	// End Line: 289

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

void WCBEGG_ExplodeProcess(_Instance *instance,GameTracker *gameTracker)

{
  int unaff_s1;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  uStack00000010 = 0;
  uStack00000014 = 1;
  uStack00000018 = 0;
  FUN_80071adc();
  *(undefined4 *)(unaff_s1 + 0xf0) = 0x8008f528;
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_SplitProcess(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$s3*/)
 // line 291, offset 0x8008f478
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x8008F478
		// Variables:
	// 		struct PhysObData *data; // $s1
	// 		int currentTime; // $s2
	// 		int time; // $v0
	// 		struct Object *walboss; // $v1
	// 		struct _walbossAttributes *wa; // $v1
	/* end block 1 */
	// End offset: 0x8008F558
	// End Line: 333

	/* begin block 2 */
		// Start line: 610
	/* end block 2 */
	// End Line: 611

void WCBEGG_SplitProcess(_Instance *instance,GameTracker *gameTracker)

{
  int in_v1;
  int unaff_s0;
  
  if (loadStatus.bigFile.searchDirID == *(int *)(unaff_s0 + 300)) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(loadStatus.bigFile.searchDirID,&DAT_00040005,(int)*(short *)(in_v1 + 0x12) * 0x21);
  }
  *(undefined4 *)(unaff_s0 + 0xf0) = 0x8008f6b4;
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_CommonPostProcess(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$s2*/)
 // line 335, offset 0x8008f574
	/* begin block 1 */
		// Start line: 336
		// Start offset: 0x8008F574
		// Variables:
	// 		struct PhysObData *data; // $s1
	/* end block 1 */
	// End offset: 0x8008F574
	// End Line: 336

	/* begin block 2 */
		// Start line: 702
	/* end block 2 */
	// End Line: 703

void WCBEGG_CommonPostProcess(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  int unaff_s2;
  
  if (in_v0 + 0xc6 <= unaff_s2) {
    if (loadStatus.bigFile.searchDirID == *(int *)(unaff_s0 + 300)) {
                    /* WARNING: Subroutine does not return */
      FUN_80034368(loadStatus.bigFile.searchDirID,&DAT_00040005,
                   (int)*(short *)(*(int *)(in_v1 + 4) + 0x12) * 0x21);
    }
    *(undefined4 *)(unaff_s0 + 0xf0) = 0x8008f6b4;
  }
  FUN_8006b2ec();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_CommonPostProcess2(struct _Instance *instance /*$s1*/, struct GameTracker *gameTracker /*$s2*/)
 // line 348, offset 0x8008f604
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x8008F604
		// Variables:
	// 		struct PhysObData *data; // $s0
	// 		int time; // $v1
	/* end block 1 */
	// End offset: 0x8008F660
	// End Line: 366

	/* begin block 2 */
		// Start line: 732
	/* end block 2 */
	// End Line: 733

void WCBEGG_CommonPostProcess2(_Instance *instance,GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_ExplodeCollide(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$s4*/)
 // line 368, offset 0x8008f678
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8008F678
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $a0
	// 		struct _HSphere *s1; // $v1
	// 		struct _Instance *inst1; // $s0
	// 		struct PhysObData *data; // $s1
	/* end block 1 */
	// End offset: 0x8008F7DC
	// End Line: 425

	/* begin block 2 */
		// Start line: 772
	/* end block 2 */
	// End Line: 773

void WCBEGG_ExplodeCollide(_Instance *instance,GameTracker *gameTracker)

{
  int unaff_s0;
  
                    /* WARNING: Subroutine does not return */
  *(undefined4 *)(unaff_s0 + 0xf0) = 0x8008f6b4;
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ WCBEGG_Collide(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$s1*/)
 // line 427, offset 0x8008f7fc
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x8008F7FC
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $a0

		/* begin block 1.1 */
			// Start line: 433
			// Start offset: 0x8008F828
			// Variables:
		// 		struct _Instance *inst1; // $v0
		/* end block 1.1 */
		// End offset: 0x8008F84C
		// End Line: 439
	/* end block 1 */
	// End offset: 0x8008F870
	// End Line: 445

	/* begin block 2 */
		// Start line: 908
	/* end block 2 */
	// End Line: 909

void WCBEGG_Collide(_Instance *instance,GameTracker *gameTracker)

{
  uint *unaff_s1;
  int unaff_s2;
  undefined4 uStack00000010;
  undefined4 uStack00000018;
  
  uStack00000010 = 0;
  uStack00000018 = 0;
  FUN_80071adc();
  *(undefined4 *)(unaff_s2 + 0xf0) = 0x8008f528;
  *unaff_s1 = *unaff_s1 & 0xffffbfff | 0x1001;
  *(undefined4 *)(unaff_s2 + 0x15c) = 0;
  *(undefined4 *)(unaff_s2 + 0x158) = 0;
                    /* WARNING: Subroutine does not return */
  *(undefined4 *)(unaff_s2 + 0x154) = 0;
  FUN_80081880();
}



// decompiled code
// original method signature: 
// long /*$ra*/ WALBOSC_AnimCallback(struct _G2Anim_Type *anim /*$a0*/, int sectionID /*$a1*/, enum _G2AnimCallbackMsg_Enum message /*$a2*/, long messageDataA /*$s1*/, long messageDataB /*stack 16*/, struct _Instance *instance /*stack 20*/)
 // line 450, offset 0x8008f884
	/* begin block 1 */
		// Start line: 955
	/* end block 1 */
	// End Line: 956

long WALBOSC_AnimCallback
               (_G2Anim_Type *anim,int sectionID,_G2AnimCallbackMsg_Enum message,long messageDataA,
               long messageDataB,_Instance *instance)

{
  uint in_v0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x36) = (short)(in_v0 & 0xfffe);
  return in_v0 & 0xfffe;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WALBOSC_Collide(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$a1*/)
 // line 471, offset 0x8008f904
	/* begin block 1 */
		// Start line: 472
		// Start offset: 0x8008F904
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s0
	// 		struct _HSphere *s1; // $v0
	// 		struct _Instance *inst1; // $s3

		/* begin block 1.1 */
			// Start line: 480
			// Start offset: 0x8008F940
			// Variables:
		// 		struct PhysObWeaponProperties *Prop; // $s1
		/* end block 1.1 */
		// End offset: 0x8008F9A8
		// End Line: 495
	/* end block 1 */
	// End offset: 0x8008F9A8
	// End Line: 496

	/* begin block 2 */
		// Start line: 1000
	/* end block 2 */
	// End Line: 1001

void WALBOSC_Collide(_Instance *instance,GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WALBOSC_Message(struct _Instance *instance /*$s0*/, unsigned long message /*$a1*/, unsigned long data /*$a2*/)
 // line 498, offset 0x8008f9c4
	/* begin block 1 */
		// Start line: 1056
	/* end block 1 */
	// End Line: 1057

void WALBOSC_Message(_Instance *instance,ulong message,ulong data)

{
  return;
}





