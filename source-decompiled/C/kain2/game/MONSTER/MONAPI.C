#include "THISDUST.H"
#include "MONAPI.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MonsterProcess(struct _Instance *instance /*$s1*/, struct GameTracker *gameTracker /*$a1*/)
 // line 165, offset 0x8007da80
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x8007DA80
		// Variables:
	// 		struct _MonsterState *state; // $s0
	// 		struct _MonsterVars *mv; // $s2
	// 		struct _MonsterAttributes *attributes; // $v0
	/* end block 1 */
	// End offset: 0x8007DBA0
	// End Line: 237

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

void MonsterProcess(_Instance *instance,GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterInit(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 243, offset 0x8007dbb8
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8007DBB8
		// Variables:
	// 		struct _MonsterAttributes *attributes; // $s2
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 262
			// Start offset: 0x8007DC24
		/* end block 1.1 */
		// End offset: 0x8007DC24
		// End Line: 282

		/* begin block 1.2 */
			// Start line: 349
			// Start offset: 0x8007DD7C
		/* end block 1.2 */
		// End offset: 0x8007DDA8
		// End Line: 354
	/* end block 1 */
	// End offset: 0x8007DDA8
	// End Line: 356

	/* begin block 2 */
		// Start line: 491
	/* end block 2 */
	// End Line: 492

void MonsterInit(_Instance *instance,GameTracker *gameTracker)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_8008cfc8();
  (*pcVar1)();
  FUN_8008283c();
  FUN_80083e14();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SendHitObject(struct _Instance *instance /*$s1*/, struct _Instance *hit /*$s0*/, int type /*$s2*/)
 // line 358, offset 0x8007ddc0
	/* begin block 1 */
		// Start line: 359
		// Start offset: 0x8007DDC0
		// Variables:
	// 		struct _MonsterVars *mv; // $a1
	// 		int i; // $a0

		/* begin block 1.1 */
			// Start line: 365
			// Start offset: 0x8007DE10
			// Variables:
		// 		struct evMonsterHitObjectData *data1; // $v0
		/* end block 1.1 */
		// End offset: 0x8007DE28
		// End Line: 368

		/* begin block 1.2 */
			// Start line: 377
			// Start offset: 0x8007DE58
			// Variables:
		// 		struct evMonsterHitObjectData *data; // $v0
		/* end block 1.2 */
		// End offset: 0x8007DE7C
		// End Line: 381
	/* end block 1 */
	// End offset: 0x8007DE7C
	// End Line: 382

	/* begin block 2 */
		// Start line: 732
	/* end block 2 */
	// End Line: 733

void SendHitObject(_Instance *instance,_Instance *hit,int type)

{
  code **in_v0;
  uint *unaff_s1;
  
  *unaff_s1 = *unaff_s1 & 0xfffffffe;
  (**in_v0)();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterCollide(struct _Instance *instance /*$s3*/, struct GameTracker *gameTracker /*$a1*/)
 // line 388, offset 0x8007de94
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x8007DE94
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s1
	// 		struct _MonsterVars *mv; // $s6

		/* begin block 1.1 */
			// Start line: 398
			// Start offset: 0x8007DEE4
			// Variables:
		// 		struct _HSphere *s0; // $v0

			/* begin block 1.1.1 */
				// Start line: 412
				// Start offset: 0x8007DF1C
				// Variables:
			// 		struct _HSphere *s1; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 415
					// Start offset: 0x8007DF34
					// Variables:
				// 		struct _Instance *inst1; // $s4
				// 		int power; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8007DFF4
				// End Line: 436
			/* end block 1.1.1 */
			// End offset: 0x8007DFF4
			// End Line: 436

			/* begin block 1.1.2 */
				// Start line: 452
				// Start offset: 0x8007E010
				// Variables:
			// 		int move; // $s7

				/* begin block 1.1.2.1 */
					// Start line: 458
					// Start offset: 0x8007E048
					// Variables:
				// 		struct _HSphere *hsphere; // $s0
				/* end block 1.1.2.1 */
				// End offset: 0x8007E09C
				// End Line: 466

				/* begin block 1.1.2.2 */
					// Start line: 496
					// Start offset: 0x8007E11C
					// Variables:
				// 		struct BSPTree *bsp; // $s4

					/* begin block 1.1.2.2.1 */
						// Start line: 503
						// Start offset: 0x8007E158
						// Variables:
					// 		struct evMonsterHitTerrainData *data; // $s0
					// 		struct Level *level; // $s5
					// 		struct Intro *impaler; // $v0
					// 		struct _TFace *tface; // $s2

						/* begin block 1.1.2.2.1.1 */
							// Start line: 534
							// Start offset: 0x8007E2A0
							// Variables:
						// 		struct _CollideInfo parentCI; // stack offset -88
						/* end block 1.1.2.2.1.1 */
						// End offset: 0x8007E30C
						// End Line: 541
					/* end block 1.1.2.2.1 */
					// End offset: 0x8007E330
					// End Line: 545
				/* end block 1.1.2.2 */
				// End offset: 0x8007E334
				// End Line: 550
			/* end block 1.1.2 */
			// End offset: 0x8007E37C
			// End Line: 576
		/* end block 1.1 */
		// End offset: 0x8007E37C
		// End Line: 577
	/* end block 1 */
	// End offset: 0x8007E37C
	// End Line: 581

	/* begin block 2 */
		// Start line: 798
	/* end block 2 */
	// End Line: 799

void MonsterCollide(_Instance *instance,GameTracker *gameTracker)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(8);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterAdditionalCollide(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 586, offset 0x8007e3a8
	/* begin block 1 */
		// Start line: 1210
	/* end block 1 */
	// End Line: 1211

void MonsterAdditionalCollide(_Instance *instance,GameTracker *gameTracker)

{
  short in_v0;
  short in_v1;
  int unaff_s1;
  
  (instance->position).z = in_v0 + in_v1;
  FUN_8001e924(instance,unaff_s1 + 0x28);
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MonsterQuery(struct _Instance *instance /*$s1*/, unsigned long query /*$a1*/)
 // line 595, offset 0x8007e3d8
	/* begin block 1 */
		// Start line: 596
		// Start offset: 0x8007E3D8
		// Variables:
	// 		struct _MonsterVars *mv; // $a2
	// 		struct _MonsterAttributes *ma; // $s0
	// 		unsigned long ret; // $a0

		/* begin block 1.1 */
			// Start line: 608
			// Start offset: 0x8007E424
			// Variables:
		// 		struct evShadowSegmentData *shadowData; // $v0
		/* end block 1.1 */
		// End offset: 0x8007E424
		// End Line: 609

		/* begin block 1.2 */
			// Start line: 684
			// Start offset: 0x8007E590
			// Variables:
		// 		struct _MonsterSaveInfo *saveInfo; // $s0
		/* end block 1.2 */
		// End offset: 0x8007E590
		// End Line: 684
	/* end block 1 */
	// End offset: 0x8007E624
	// End Line: 707

	/* begin block 2 */
		// Start line: 1228
	/* end block 2 */
	// End Line: 1229

ulong MonsterQuery(_Instance *instance,ulong query)

{
  ulong in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterMessage(struct _Instance *instance /*$s2*/, unsigned long message /*$s1*/, unsigned long data /*$s3*/)
 // line 713, offset 0x8007e638
	/* begin block 1 */
		// Start line: 714
		// Start offset: 0x8007E638
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 739
			// Start offset: 0x8007E70C
		/* end block 1.1 */
		// End offset: 0x8007E718
		// End Line: 742

		/* begin block 1.2 */
			// Start line: 767
			// Start offset: 0x8007E80C
		/* end block 1.2 */
		// End offset: 0x8007E80C
		// End Line: 769

		/* begin block 1.3 */
			// Start line: 774
			// Start offset: 0x8007E820
		/* end block 1.3 */
		// End offset: 0x8007E820
		// End Line: 776
	/* end block 1 */
	// End offset: 0x8007E8E4
	// End Line: 815

	/* begin block 2 */
		// Start line: 1467
	/* end block 2 */
	// End Line: 1468

void MonsterMessage(_Instance *instance,ulong message,ulong data)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AnimDistanceAndVel(struct Object *object /*$s1*/, struct _MonsterAnim *mAnim /*$s3*/)
 // line 820, offset 0x8007e900
	/* begin block 1 */
		// Start line: 821
		// Start offset: 0x8007E900
		// Variables:
	// 		struct _G2Anim_Type anim; // stack offset -216
	// 		struct _G2AnimSection_Type *animSection; // $s0
	// 		struct _G2AnimKeylist_Type *keylist; // $s2
	// 		long total; // $s0

		/* begin block 1.1 */
			// Start line: 841
			// Start offset: 0x8007E9A4
			// Variables:
		// 		struct _G2SVector3_Type dist; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x8007EA44
		// End Line: 848
	/* end block 1 */
	// End offset: 0x8007EA44
	// End Line: 850

	/* begin block 2 */
		// Start line: 1682
	/* end block 2 */
	// End Line: 1683

void AnimDistanceAndVel(Object *object,_MonsterAnim *mAnim)

{
  uint in_v1;
  uint *unaff_s0;
  
  *unaff_s0 = *unaff_s0 & (in_v1 | 0xffff);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TranslateAnimList(struct Object *object /*$s5*/, struct _MonsterAnim *animList /*$a1*/, int numAnims /*$s6*/)
 // line 974, offset 0x8007ea68
	/* begin block 1 */
		// Start line: 975
		// Start offset: 0x8007EA68
		// Variables:
	// 		int i; // $s2

		/* begin block 1.1 */
			// Start line: 978
			// Start offset: 0x8007EA98
			// Variables:
		// 		struct _MonsterAnim *animPtr; // $s3

			/* begin block 1.1.1 */
				// Start line: 986
				// Start offset: 0x8007EAA8
				// Variables:
			// 		int index; // $a0
			// 		struct _G2AnimKeylist_Type *keylist; // $s4
			/* end block 1.1.1 */
			// End offset: 0x8007EB28
			// End Line: 1021
		/* end block 1.1 */
		// End offset: 0x8007EB3C
		// End Line: 1022
	/* end block 1 */
	// End offset: 0x8007EB3C
	// End Line: 1023

	/* begin block 2 */
		// Start line: 2002
	/* end block 2 */
	// End Line: 2003

void TranslateAnimList(Object *object,_MonsterAnim *animList,int numAnims)

{
  int in_v0;
  int in_v1;
  undefined2 unaff_s0;
  undefined2 *unaff_s3;
  
  unaff_s3[1] = unaff_s0;
  *unaff_s3 = (short)(in_v1 / ((in_v0 << 0x10) >> 4));
  FUN_80092c6c(&stack0x00000010);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterTranslateAnim(struct Object *object /*$s1*/)
 // line 1032, offset 0x8007eb64
	/* begin block 1 */
		// Start line: 1033
		// Start offset: 0x8007EB64
		// Variables:
	// 		struct _MonsterAttributes *attributes; // $s0
	// 		int i; // $a3

		/* begin block 1.1 */
			// Start line: 1048
			// Start offset: 0x8007EBA4
			// Variables:
		// 		void *relocModule; // $v0
		/* end block 1.1 */
		// End offset: 0x8007EBD0
		// End Line: 1073

		/* begin block 1.2 */
			// Start line: 1100
			// Start offset: 0x8007EC10
			// Variables:
		// 		struct _MonsterAttackAttributes *attackAttr; // $v1
		/* end block 1.2 */
		// End offset: 0x8007EC4C
		// End Line: 1128

		/* begin block 1.3 */
			// Start line: 1131
			// Start offset: 0x8007EC70
			// Variables:
		// 		struct _MonsterCombatAttributes *combatAttr; // $v1

			/* begin block 1.3.1 */
				// Start line: 1133
				// Start offset: 0x8007EC94
				// Variables:
			// 		int largest; // $a2
			// 		int j; // $a1

				/* begin block 1.3.1.1 */
					// Start line: 1140
					// Start offset: 0x8007ECB0
					// Variables:
				// 		struct _MonsterAttackAttributes *attack; // $v0
				/* end block 1.3.1.1 */
				// End offset: 0x8007ECDC
				// End Line: 1143
			/* end block 1.3.1 */
			// End offset: 0x8007ECF4
			// End Line: 1146
		/* end block 1.3 */
		// End offset: 0x8007ECF4
		// End Line: 1150
	/* end block 1 */
	// End offset: 0x8007ED08
	// End Line: 1166

	/* begin block 2 */
		// Start line: 2157
	/* end block 2 */
	// End Line: 2158

void MonsterTranslateAnim(Object *object)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *unaff_s1;
  byte *pbVar6;
  int unaff_s2;
  undefined4 uVar7;
  int unaff_s5;
  int unaff_s6;
  
  while( true ) {
    unaff_s2 = unaff_s2 + 1;
    pbVar6 = unaff_s1 + 0x10;
    if (unaff_s6 <= unaff_s2) break;
    pbVar1 = unaff_s1 + 0x15;
    uVar7 = *(undefined4 *)((int)(char)*pbVar1 * 4 + *(int *)(unaff_s5 + 0x10));
    unaff_s1 = pbVar6;
    if ((int)(char)*pbVar1 != -1) {
      FUN_8007e93c();
      bVar2 = *pbVar6;
      iVar4 = FUN_8008fee4(uVar7);
      iVar5 = (iVar4 << 0x10) >> 0x10;
      unaff_s1 = pbVar6;
      if (((iVar5 / 100 + (iVar5 >> 0x1f)) - ((iVar4 << 0x10) >> 0x1f)) * 0x10000 >> 0x10 <=
          (int)(uint)bVar2) {
        cVar3 = FUN_8008ff0c(uVar7);
        *pbVar6 = cVar3 - 1;
        unaff_s1 = pbVar6;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterRelocateTune(struct Object *object /*$a0*/, long offset /*$a1*/)
 // line 1171, offset 0x8007ed1c
	/* begin block 1 */
		// Start line: 1173
		// Start offset: 0x8007ED1C
		// Variables:
	// 		struct _MonsterAttributes *attributes; // $t0

		/* begin block 1.1 */
			// Start line: 1177
			// Start offset: 0x8007ED3C
			// Variables:
		// 		int i; // $a3
		// 		struct _MonsterSubAttributes *subAttr; // $a2
		// 		struct _MonsterSubAttributes **pSubAttr; // $t1
		// 		struct _MonsterCombatAttributes **pCombatAttr; // $v0

			/* begin block 1.1.1 */
				// Start line: 1196
				// Start offset: 0x8007EE2C
				// Variables:
			// 		int j; // $v1
			// 		struct _MonsterSubAttributes **oldSubAttr; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8007EEE4
			// End Line: 1217
		/* end block 1.1 */
		// End offset: 0x8007EF30
		// End Line: 1221
	/* end block 1 */
	// End offset: 0x8007EF30
	// End Line: 1222

	/* begin block 2 */
		// Start line: 2498
	/* end block 2 */
	// End Line: 2499

	/* begin block 3 */
		// Start line: 2499
	/* end block 3 */
	// End Line: 2500

void MonsterRelocateTune(Object *object,long offset)

{
  int iVar1;
  int in_v1;
  int in_a2;
  int in_a3;
  int in_t0;
  int in_t1;
  int unaff_s0;
  
  do {
    iVar1 = in_v1 + offset;
    if (in_t0 <= offset) {
      do {
        *(short *)(in_v1 + 10) = (short)in_a2 + 200;
        do {
          in_a3 = in_a3 + 1;
          if ((int)*(char *)(unaff_s0 + 0x29) <= in_a3) {
            return;
          }
          iVar1 = *(int *)(in_a3 * 4 + *(int *)(unaff_s0 + 0x34));
        } while (*(short *)(iVar1 + 10) != 0);
        offset = 0;
        in_t0 = (int)*(char *)(iVar1 + 0x1d);
        in_a2 = 0;
        in_v1 = iVar1;
      } while (in_t0 < 1);
      in_t1 = *(int *)(unaff_s0 + 0x38);
      in_v1 = iVar1;
    }
    iVar1 = (int)*(short *)(in_t1 + (int)*(char *)(iVar1 + 0x2c) * 0x20);
    if (in_a2 < iVar1) {
      in_a2 = iVar1;
    }
    offset = offset + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonsterRelocateInstanceObject(struct _Instance *instance /*$a0*/, long offset /*$a1*/)
 // line 1227, offset 0x8007ef38
	/* begin block 1 */
		// Start line: 1229
		// Start offset: 0x8007EF38
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	/* end block 1 */
	// End offset: 0x8007F054
	// End Line: 1250

	/* begin block 2 */
		// Start line: 2640
	/* end block 2 */
	// End Line: 2641

	/* begin block 3 */
		// Start line: 2641
	/* end block 3 */
	// End Line: 2642

void MonsterRelocateInstanceObject(_Instance *instance,long offset)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_t0;
  
  iVar3 = (int)*(char *)(in_t0 + 0x29);
  piVar1 = *(int **)(in_t0 + 0x34);
  while (iVar3 != 0) {
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *piVar1 + offset;
    }
    *piVar1 = iVar2;
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_TurnHead(struct _Instance *instance /*$a0*/, short *rotx /*$a1*/, short *rotz /*$a2*/, struct GameTracker *gameTracker /*$a3*/)
 // line 1299, offset 0x8007f05c
	/* begin block 1 */
		// Start line: 2598
	/* end block 1 */
	// End Line: 2599

void MONAPI_TurnHead(_Instance *instance,short *rotx,short *rotz,GameTracker *gameTracker)

{
  void *in_v0;
  _func_2 *p_Var1;
  void *in_v1;
  
  if ((in_v1 != in_v0) && (instance->object->relocModule < in_v1)) {
    p_Var1 = (_func_2 *)0x0;
    if (in_v1 != (void *)0x0) {
      p_Var1 = (_func_2 *)((int)in_v1 + (int)rotx);
    }
    instance->collideFunc = p_Var1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_SetLookAround(struct _Instance *instance /*$a0*/)
 // line 1320, offset 0x8007f0d8
	/* begin block 1 */
		// Start line: 1321
		// Start offset: 0x8007F0D8
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007F0D8
	// End Line: 1321

	/* begin block 2 */
		// Start line: 2776
	/* end block 2 */
	// End Line: 2777

void MONAPI_SetLookAround(_Instance *instance)

{
  short *in_a1;
  short *in_a2;
  
  *in_a2 = 0x400;
  FUN_800825ec(instance,(int)-*in_a1,(int)*in_a2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_ResetLookAround(struct _Instance *instance /*$a0*/)
 // line 1329, offset 0x8007f108
	/* begin block 1 */
		// Start line: 1330
		// Start offset: 0x8007F108
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007F108
	// End Line: 1330

	/* begin block 2 */
		// Start line: 2794
	/* end block 2 */
	// End Line: 2795

void MONAPI_ResetLookAround(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MONAPI_OkToLookAround(struct _Instance *instance /*$a0*/)
 // line 1338, offset 0x8007f138
	/* begin block 1 */
		// Start line: 2812
	/* end block 1 */
	// End Line: 2813

	/* begin block 2 */
		// Start line: 2813
	/* end block 2 */
	// End Line: 2814

long MONAPI_OkToLookAround(_Instance *instance)

{
  long in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_DeleteRegen(struct _MONAPI_Regenerator *regen /*$a0*/)
 // line 1343, offset 0x8007f14c
	/* begin block 1 */
		// Start line: 2822
	/* end block 1 */
	// End Line: 2823

	/* begin block 2 */
		// Start line: 2825
	/* end block 2 */
	// End Line: 2826

void MONAPI_DeleteRegen(_MONAPI_Regenerator *regen)

{
  int iVar1;
  
  iVar1 = *(int *)&regen[0x29].introUniqueID;
  FUN_80082560();
  *(undefined4 *)(iVar1 + 0xf4) = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_ProcessGenerator()
 // line 1354, offset 0x8007f198
	/* begin block 1 */
		// Start line: 1355
		// Start offset: 0x8007F198
		// Variables:
	// 		int i; // $s2
	// 		struct _MONAPI_Regenerator *regen; // $s0

		/* begin block 1.1 */
			// Start line: 1363
			// Start offset: 0x8007F1D8
			// Variables:
		// 		unsigned long time; // $v1

			/* begin block 1.1.1 */
				// Start line: 1372
				// Start offset: 0x8007F20C
				// Variables:
			// 		struct Level *level; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 1375
					// Start offset: 0x8007F220
					// Variables:
				// 		struct Intro *intro; // $a0
				// 		int j; // $a1
				// 		long id; // $a2
				/* end block 1.1.1.1 */
				// End offset: 0x8007F280
				// End Line: 1393
			/* end block 1.1.1 */
			// End offset: 0x8007F288
			// End Line: 1396
		/* end block 1.1 */
		// End offset: 0x8007F2A4
		// End Line: 1404
	/* end block 1 */
	// End offset: 0x8007F2C0
	// End Line: 1406

	/* begin block 2 */
		// Start line: 2848
	/* end block 2 */
	// End Line: 2849

	/* begin block 3 */
		// Start line: 2852
	/* end block 3 */
	// End Line: 2853

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MONAPI_ProcessGenerator(void)

{
  char in_v0;
  int in_v1;
  int in_a0;
  
  *(char *)(in_v1 + 0xe) = in_v0 + -1;
  FUN_8007919c(in_a0,in_a0 + 8,
               ((int)GlobalSave->numRegens - ((in_a0 + -0x10) - (int)GlobalSave >> 3)) * 8);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_AddToGenerator(struct _Instance *instance /*$s2*/)
 // line 1408, offset 0x8007f2d8
	/* begin block 1 */
		// Start line: 1409
		// Start offset: 0x8007F2D8

		/* begin block 1.1 */
			// Start line: 1413
			// Start offset: 0x8007F308
			// Variables:
		// 		struct _MonsterVars *mv; // $s1
		// 		struct _MONAPI_Regenerator *regen; // $s0
		/* end block 1.1 */
		// End offset: 0x8007F360
		// End Line: 1420
	/* end block 1 */
	// End offset: 0x8007F360
	// End Line: 1421

	/* begin block 2 */
		// Start line: 3028
	/* end block 2 */
	// End Line: 3029

void MONAPI_AddToGenerator(_Instance *instance)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *unaff_s0;
  short *unaff_s1;
  short *psVar5;
  int unaff_s2;
  
  do {
    psVar5 = unaff_s1 + 4;
    unaff_s0 = unaff_s0 + 2;
LAB_8007f2e0:
    if ((int)GlobalSave->numRegens <= unaff_s2) {
      return;
    }
    uVar2 = gameTrackerX.controlCommand[0][2];
    if (loadStatus.decompressLen._2_2_ != 0) {
      uVar2 = gameTrackerX.controlCommand[0][3];
    }
    if (*unaff_s0 < uVar2) {
      iVar1 = FUN_80059340((int)*psVar5);
      if (iVar1 == 0) {
LAB_8007f2c4:
        FUN_8007f188(unaff_s0);
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x78);
        iVar1 = *(int *)(iVar1 + 0x7c);
        puVar3 = (uint *)(iVar1 + 0x2c);
        while (iVar4 != 0) {
          iVar4 = iVar4 + -1;
          if (puVar3[-6] == (int)unaff_s1[3]) {
            if (((*puVar3 & 0x400) != 0) || (iVar1 = FUN_80032a68(iVar1,(int)*psVar5), iVar1 == 0))
            goto LAB_8007f2c4;
            break;
          }
          puVar3 = puVar3 + 0x13;
          iVar1 = iVar1 + 0x4c;
        }
      }
      goto LAB_8007f2e0;
    }
    unaff_s2 = unaff_s2 + 1;
    unaff_s1 = psVar5;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONAPI_CheckGenerator(struct _Instance *instance /*$a0*/)
 // line 1426, offset 0x8007f378
	/* begin block 1 */
		// Start line: 1427
		// Start offset: 0x8007F378
		// Variables:
	// 		int i; // $a1
	// 		struct _MONAPI_Regenerator *regen; // $v1
	// 		int id; // $a0
	/* end block 1 */
	// End offset: 0x8007F3D4
	// End Line: 1439

	/* begin block 2 */
		// Start line: 3067
	/* end block 2 */
	// End Line: 3068

void MONAPI_CheckGenerator(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int *unaff_s0;
  int unaff_s2;
  
  *unaff_s0 = in_v0 + in_v1 * 8;
  *(undefined2 *)(unaff_s0 + 1) = *(undefined2 *)(unaff_s2 + 0x3c);
  *(undefined2 *)((int)unaff_s0 + 6) = *(undefined2 *)(unaff_s2 + 0x34);
  return;
}





