#include "THISDUST.H"
#include "SENSES.H"


// decompiled code
// original method signature: 
// int /*$ra*/ SetEngagedInstance(struct __Player *player /*$t0*/, struct evCollideInstanceStatsData *Ptr /*$a1*/, unsigned long Attribute /*$a2*/)
 // line 4, offset 0x800a3394
	/* begin block 1 */
		// Start line: 5
		// Start offset: 0x800A3394
		// Variables:
	// 		int rc; // $t1
	/* end block 1 */
	// End offset: 0x800A3424
	// End Line: 23

	/* begin block 2 */
		// Start line: 8
	/* end block 2 */
	// End Line: 9

int SetEngagedInstance(__Player *player,evCollideInstanceStatsData *Ptr,ulong Attribute)

{
  FUN_80090954();
                    /* WARNING: Subroutine does not return */
  FUN_8009098c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateEngagementList(struct evCollideInstanceStatsData *Ptr /*$s3*/, struct __Player *player /*$s4*/)
 // line 29, offset 0x800a342c
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x800A342C
		// Variables:
	// 		int WhoAmI; // $s5
	// 		int Ability; // $s1
	// 		int hidden; // $s6
	// 		struct PhysObCollectibleProperties *collectibleProp; // $s1

		/* begin block 1.1 */
			// Start line: 44
			// Start offset: 0x800A3494
			// Variables:
		// 		struct evObjectDraftData *draft; // $a2

			/* begin block 1.1.1 */
				// Start line: 50
				// Start offset: 0x800A34FC
				// Variables:
			// 		int force; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800A35A0
			// End Line: 61
		/* end block 1.1 */
		// End offset: 0x800A35A0
		// End Line: 63

		/* begin block 1.2 */
			// Start line: 93
			// Start offset: 0x800A3678
			// Variables:
		// 		struct SVECTOR startVec; // stack offset -64
		// 		struct SVECTOR endVec; // stack offset -56
		/* end block 1.2 */
		// End offset: 0x800A3754
		// End Line: 116

		/* begin block 1.3 */
			// Start line: 120
			// Start offset: 0x800A3760
			// Variables:
		// 		struct PhysObSwitchProperties *prop; // $a1

			/* begin block 1.3.1 */
				// Start line: 123
				// Start offset: 0x800A37B4
			/* end block 1.3.1 */
			// End offset: 0x800A3824
			// End Line: 141
		/* end block 1.3 */
		// End offset: 0x800A3824
		// End Line: 142

		/* begin block 1.4 */
			// Start line: 144
			// Start offset: 0x800A3830
			// Variables:
		// 		struct PhysObInteractProperties *interactProp; // $s1
		// 		int testConditions; // $s2

			/* begin block 1.4.1 */
				// Start line: 166
				// Start offset: 0x800A3870
				// Variables:
			// 		struct _Instance *heldInst; // $s0
			/* end block 1.4.1 */
			// End offset: 0x800A390C
			// End Line: 192
		/* end block 1.4 */
		// End offset: 0x800A3A10
		// End Line: 230

		/* begin block 1.5 */
			// Start line: 235
			// Start offset: 0x800A3A30
			// Variables:
		// 		struct MATRIX *collectMat; // $v1
		// 		struct _Position headPos; // stack offset -64
		// 		struct _Position collectPos; // stack offset -56
		// 		long headDistance; // $s0
		// 		long rootDistance; // $a1

			/* begin block 1.5.1 */
				// Start line: 288
				// Start offset: 0x800A3C40
				// Variables:
			// 		unsigned long ability_bit; // $v1
			/* end block 1.5.1 */
			// End offset: 0x800A3CA0
			// End Line: 300
		/* end block 1.5 */
		// End offset: 0x800A3D54
		// End Line: 328

		/* begin block 1.6 */
			// Start line: 490
			// Start offset: 0x800A419C
			// Variables:
		// 		struct _Instance *Inst; // $a0
		/* end block 1.6 */
		// End offset: 0x800A41D4
		// End Line: 496

		/* begin block 1.7 */
			// Start line: 503
			// Start offset: 0x800A420C
			// Variables:
		// 		struct VECTOR in; // stack offset -64
		// 		struct VECTOR out; // stack offset -48

			/* begin block 1.7.1 */
				// Start line: 512
				// Start offset: 0x800A4284
				// Variables:
			// 		int rc; // $v0
			/* end block 1.7.1 */
			// End offset: 0x800A4408
			// End Line: 544
		/* end block 1.7 */
		// End offset: 0x800A4408
		// End Line: 545
	/* end block 1 */
	// End offset: 0x800A4560
	// End Line: 593

	/* begin block 2 */
		// Start line: 64
	/* end block 2 */
	// End Line: 65

void UpdateEngagementList(evCollideInstanceStatsData *Ptr,__Player *player)

{
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + -0x13e;
  *(short *)(unaff_s0 + 0x68) = *(short *)(unaff_s0 + 0x68) + -0x13e;
  *(int *)(*(int *)(unaff_s0 + 0x40) + 0x1c) = *(int *)(*(int *)(unaff_s0 + 0x40) + 0x1c) + -0x13e;
  *(int *)(*(int *)(unaff_s0 + 0x44) + 0x1c) = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x1c) + -0x13e;
  FUN_8009060c();
  FUN_8009060c();
  FUN_8009060c();
  FUN_8009060c();
  FUN_8009060c();
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ UpdateAutoFaceAngle(struct _Instance *player /*$a0*/, struct _Instance *instance /*$a1*/)
 // line 598, offset 0x800a4588
	/* begin block 1 */
		// Start line: 599
		// Start offset: 0x800A4588
		// Variables:
	// 		long rc; // $v0
	/* end block 1 */
	// End offset: 0x800A4588
	// End Line: 599

	/* begin block 2 */
		// Start line: 1243
	/* end block 2 */
	// End Line: 1244

long UpdateAutoFaceAngle(_Instance *player,_Instance *instance)

{
  int in_v0;
  int iVar1;
  uint uVar2;
  int *unaff_s3;
  
  if ((((((*(uint *)(in_v0 + 0x2c) & 0x1000000) != 0) && ((player->flags & 0x800U) == 0)) &&
       (loadStatus.decompressLen._2_2_ != 0)) &&
      ((Raziel.State.SectionList[2].Event.Queue[1].ID == 2 && (unaff_s3[4] < 0x1c2)))) &&
     (unaff_s3[5] + 0x3fU < 0x7f)) {
    Raziel.State.SectionList[1].Defer.Queue[0].ID =
         Raziel.State.SectionList[1].Defer.Queue[0].ID | 0x40;
    Raziel.State.SectionList[1].Defer.Queue[7].ID = *unaff_s3;
  }
  if ((((**(uint **)(*unaff_s3 + 0x1c) & 0x100000) != 0) && (0x280 < (uint)unaff_s3[1])) &&
     (iVar1 = FUN_80039ff8(unaff_s3 + 2,0x2aa,0x2aa), iVar1 != 0)) {
    FUN_800a34e8();
  }
  uVar2 = *(uint *)(*(int *)(*unaff_s3 + 0x1c) + 0x2c) & 0x20;
  if ((uVar2 != 0) && (uVar2 = (uint)((uint)unaff_s3[1] < 0x100), (uint)unaff_s3[1] < 0x100)) {
    uVar2 = FUN_800a34e8();
  }
  return uVar2;
}





