#include "THISDUST.H"
#include "GENERIC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GenericInit(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 28, offset 0x8003e194
	/* begin block 1 */
		// Start line: 29
		// Start offset: 0x8003E194
		// Variables:
	// 		struct Spline *spline; // $v1
	// 		struct Object *object; // $s1

		/* begin block 1.1 */
			// Start line: 56
			// Start offset: 0x8003E218

			/* begin block 1.1.1 */
				// Start line: 66
				// Start offset: 0x8003E2B0
				// Variables:
			// 		static struct _G2AnimInterpInfo_Type crap; // offset 0x0
			/* end block 1.1.1 */
			// End offset: 0x8003E2BC
			// End Line: 68
		/* end block 1.1 */
		// End offset: 0x8003E2BC
		// End Line: 69
	/* end block 1 */
	// End offset: 0x8003E2BC
	// End Line: 72

	/* begin block 2 */
		// Start line: 56
	/* end block 2 */
	// End Line: 57

void GenericInit(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  undefined4 uStack00000010;
  
  if ((in_v0 != 0) && ((*(uint *)(unaff_s1 + 0x2c) & 0x40000000) == 0)) {
    FUN_8007238c();
    FUN_80072330();
    uStack00000010 = 0;
    FUN_80071fac();
    FUN_8007208c();
    if ((**(int **)(unaff_s1 + 0x24) == aadHblanksPerUpdate) &&
       ((*(int **)(unaff_s1 + 0x24))[1] == USHORT_ARRAY_800cecc4)) {
      FUN_800900bc(unaff_s0 + 0x1b8,0x800d10d0);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GenericCollide(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 74, offset 0x8003e2d0
	/* begin block 1 */
		// Start line: 151
	/* end block 1 */
	// End Line: 152

	/* begin block 2 */
		// Start line: 205
	/* end block 2 */
	// End Line: 206

void GenericCollide(_Instance *instance,GameTracker *gameTracker)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int unaff_s0;
  
  switch(gameTracker) {
  case (GameTracker *)0x1:
    break;
  case (GameTracker *)0x2:
  case (GameTracker *)0x3:
  case (GameTracker *)0x4:
  case (GameTracker *)0x5:
  case (GameTracker *)0x8:
  case (GameTracker *)0x9:
  case (GameTracker *)0xa:
  case (GameTracker *)0xd:
  case (GameTracker *)0xe:
  case (GameTracker *)0xf:
  case (GameTracker *)0x10:
  case (GameTracker *)0x13:
  case (GameTracker *)0x14:
  case (GameTracker *)0x15:
  case (GameTracker *)0x16:
  case (GameTracker *)0x17:
    break;
  case (GameTracker *)0x6:
    sVar1 = *(short *)(unaff_s0 + 0x5c);
    sVar2 = *(short *)(unaff_s0 + 0x5e);
    sVar3 = *(short *)(unaff_s0 + 0x60);
    goto LAB_8003e324;
  case (GameTracker *)0x7:
    sVar1 = *(short *)(unaff_s0 + 0x74);
    sVar2 = *(short *)(unaff_s0 + 0x76);
    sVar3 = *(short *)(unaff_s0 + 0x78);
LAB_8003e324:
    FUN_80070bb8((int)sVar1,(int)sVar2,(int)sVar3);
    break;
  case (GameTracker *)0xb:
    break;
  case (GameTracker *)0xc:
    break;
  case (GameTracker *)0x11:
    FUN_8007214c();
    break;
  case (GameTracker *)0x12:
    FUN_80072190();
    break;
  case (GameTracker *)0x18:
    if ((*(uint *)(unaff_s0 + 0x18) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8007087c(0xc);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GenericProcess(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 134, offset 0x8003e2d8
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x8003E2D8
		// Variables:
	// 		struct Object *object; // $v1
	/* end block 1 */
	// End offset: 0x8003E31C
	// End Line: 144

	/* begin block 2 */
		// Start line: 271
	/* end block 2 */
	// End Line: 272

void GenericProcess(_Instance *instance,GameTracker *gameTracker)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 in_v1;
  int unaff_s0;
  
  switch(in_v1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    break;
  case 5:
    sVar1 = *(short *)(unaff_s0 + 0x5c);
    sVar2 = *(short *)(unaff_s0 + 0x5e);
    sVar3 = *(short *)(unaff_s0 + 0x60);
    goto LAB_8003e324;
  case 6:
    sVar1 = *(short *)(unaff_s0 + 0x74);
    sVar2 = *(short *)(unaff_s0 + 0x76);
    sVar3 = *(short *)(unaff_s0 + 0x78);
LAB_8003e324:
    FUN_80070bb8((int)sVar1,(int)sVar2,(int)sVar3);
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0x10:
    FUN_8007214c();
    break;
  case 0x11:
    FUN_80072190();
    break;
  case 0x17:
    if ((*(uint *)(unaff_s0 + 0x18) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8007087c(0xc);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GenericQuery(struct _Instance *instance /*$s0*/, unsigned long query /*$a1*/)
 // line 149, offset 0x8003e32c
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8003E32C
		// Variables:
	// 		long ret; // $a0

		/* begin block 1.1 */
			// Start line: 181
			// Start offset: 0x8003E400
			// Variables:
		// 		struct evControlSaveDataData *pdata; // $v0
		/* end block 1.1 */
		// End offset: 0x8003E440
		// End Line: 191

		/* begin block 1.2 */
			// Start line: 195
			// Start offset: 0x8003E440
			// Variables:
		// 		struct Object *object; // $a0
		/* end block 1.2 */
		// End offset: 0x8003E484
		// End Line: 203
	/* end block 1 */
	// End offset: 0x8003E490
	// End Line: 216

	/* begin block 2 */
		// Start line: 301
	/* end block 2 */
	// End Line: 302

ulong GenericQuery(_Instance *instance,ulong query)

{
  ulong in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GenericMessage(struct _Instance *instance /*$s0*/, unsigned long message /*$a1*/, unsigned long data /*$v1*/)
 // line 222, offset 0x8003e4a4
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x8003E4A4

		/* begin block 1.1 */
			// Start line: 228
			// Start offset: 0x8003E538
			// Variables:
		// 		struct evAnimationInstanceSwitchData *Ptr; // $s1
		/* end block 1.1 */
		// End offset: 0x8003E588
		// End Line: 239

		/* begin block 1.2 */
			// Start line: 245
			// Start offset: 0x8003E598
		/* end block 1.2 */
		// End offset: 0x8003E598
		// End Line: 246

		/* begin block 1.3 */
			// Start line: 260
			// Start offset: 0x8003E5E4
		/* end block 1.3 */
		// End offset: 0x8003E60C
		// End Line: 268
	/* end block 1 */
	// End offset: 0x8003E60C
	// End Line: 275

	/* begin block 2 */
		// Start line: 453
	/* end block 2 */
	// End Line: 454

void GenericMessage(_Instance *instance,ulong message,ulong data)

{
  int in_v1;
  int unaff_s0;
  
  if ((undefined *)message == &DAT_00100007) {
    *(undefined4 *)(unaff_s0 + 0x14) = **(undefined4 **)(in_v1 + 4);
    *(undefined4 *)(unaff_s0 + 0x18) = *(undefined4 *)(*(int *)(in_v1 + 4) + 4);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GenericRelocateTune(struct Object *object /*$a0*/, long offset /*$a1*/)
 // line 277, offset 0x8003e620
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x8003E620
		// Variables:
	// 		struct GenericTune *tune; // $v1
	/* end block 1 */
	// End offset: 0x8003E644
	// End Line: 285

	/* begin block 2 */
		// Start line: 565
	/* end block 2 */
	// End Line: 566

	/* begin block 3 */
		// Start line: 566
	/* end block 3 */
	// End Line: 567

void GenericRelocateTune(Object *object,long offset)

{
  return;
}





