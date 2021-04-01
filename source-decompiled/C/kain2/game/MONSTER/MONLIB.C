#include "THISDUST.H"
#include "MONLIB.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOffWeaponSpheres(struct _Instance *instance /*$s1*/)
 // line 148, offset 0x8007f3e4
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x8007F3E4
		// Variables:
	// 		struct _MonsterVars *mv; // $s2

		/* begin block 1.1 */
			// Start line: 153
			// Start offset: 0x8007F40C
			// Variables:
		// 		struct _Instance *weapon; // $s0
		/* end block 1.1 */
		// End offset: 0x8007F42C
		// End Line: 157

		/* begin block 1.2 */
			// Start line: 160
			// Start offset: 0x8007F440
			// Variables:
		// 		int i; // $a1
		// 		struct _HPrim *hprim; // $v1
		// 		struct _HModel *hmodel; // $v1
		/* end block 1.2 */
		// End offset: 0x8007F4C4
		// End Line: 168
	/* end block 1 */
	// End offset: 0x8007F4C4
	// End Line: 169

	/* begin block 2 */
		// Start line: 296
	/* end block 2 */
	// End Line: 297

void MON_TurnOffWeaponSpheres(_Instance *instance)

{
  FUN_8007f188();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOnWeaponSpheres(struct _Instance *instance /*$a0*/)
 // line 174, offset 0x8007f4dc
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x8007F4DC
		// Variables:
	// 		struct _MonsterVars *mv; // $a2

		/* begin block 1.1 */
			// Start line: 179
			// Start offset: 0x8007F508
			// Variables:
		// 		int i; // $a1
		// 		struct _HPrim *hprim; // $a0
		// 		struct _HModel *hmodel; // $v0
		/* end block 1.1 */
		// End offset: 0x8007F58C
		// End Line: 191
	/* end block 1 */
	// End offset: 0x8007F58C
	// End Line: 192

	/* begin block 2 */
		// Start line: 352
	/* end block 2 */
	// End Line: 353

	/* begin block 3 */
		// Start line: 353
	/* end block 3 */
	// End Line: 354

void MON_TurnOnWeaponSpheres(_Instance *instance)

{
  NodeType *pNVar1;
  byte in_v0;
  byte *in_v1;
  _Instance *p_Var2;
  int in_a1;
  uint in_a2;
  uint in_a3;
  uint *unaff_s2;
  
  do {
    *in_v1 = in_v0;
    p_Var2 = instance;
    do {
      in_a1 = in_a1 + -1;
      instance = (_Instance *)&p_Var2->next;
      in_v1 = in_v1 + 8;
      if (in_a1 == 0) {
        *unaff_s2 = *unaff_s2 & 0xffffbfff;
        return;
      }
      pNVar1 = &p_Var2->node;
      p_Var2 = instance;
    } while (((uint)*(byte *)((int)&pNVar1->next + 2) != in_a3) ||
            (p_Var2 = instance, (uint)*(byte *)&((instance->node).prev)->next != in_a2));
    in_v0 = *in_v1 & 0xfe;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOnWeaponSphere(struct _Instance *instance /*$a0*/, int segment /*$a1*/)
 // line 198, offset 0x8007f594
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x8007F594
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 204
			// Start offset: 0x8007F5B0
			// Variables:
		// 		struct _Instance *weapon; // $v0
		/* end block 1.1 */
		// End offset: 0x8007F5C0
		// End Line: 208

		/* begin block 1.2 */
			// Start line: 214
			// Start offset: 0x8007F5F8
			// Variables:
		// 		int i; // $a2
		// 		struct _HPrim *hprim; // $a0
		// 		struct _HModel *hmodel; // $v0
		/* end block 1.2 */
		// End offset: 0x8007F68C
		// End Line: 223
	/* end block 1 */
	// End offset: 0x8007F68C
	// End Line: 224

	/* begin block 2 */
		// Start line: 404
	/* end block 2 */
	// End Line: 405

void MON_TurnOnWeaponSphere(_Instance *instance,int segment)

{
  uint *in_a2;
  
  *(byte *)&(instance->node).prev = *(byte *)&(instance->node).prev | 1;
  *in_a2 = *in_a2 | 0x4000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOffBodySpheres(struct _Instance *instance /*$a0*/)
 // line 229, offset 0x8007f69c
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x8007F69C
		// Variables:
	// 		struct _MonsterVars *mv; // $a2

		/* begin block 1.1 */
			// Start line: 234
			// Start offset: 0x8007F6B8
			// Variables:
		// 		int i; // $a1
		// 		struct _HPrim *hprim; // $v1
		// 		struct _HModel *hmodel; // $v1
		/* end block 1.1 */
		// End offset: 0x8007F73C
		// End Line: 242
	/* end block 1 */
	// End offset: 0x8007F73C
	// End Line: 243

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

	/* begin block 3 */
		// Start line: 471
	/* end block 3 */
	// End Line: 472

void MON_TurnOffBodySpheres(_Instance *instance)

{
  byte in_v0;
  int *in_v1;
  int *piVar1;
  uint in_a1;
  int in_a2;
  uint in_a3;
  uint in_t0;
  uint *unaff_s0;
  
  do {
    *(byte *)&(instance->node).prev = in_v0 | 1;
    do {
      piVar1 = in_v1;
      in_a2 = in_a2 + -1;
      in_v1 = piVar1 + 2;
      instance = (_Instance *)&instance->next;
      if (in_a2 == 0) {
        *unaff_s0 = *unaff_s0 | 0x4000;
        return;
      }
    } while ((((uint)*(byte *)((int)piVar1 + 7) != in_a1) ||
             ((uint)*(byte *)((int)piVar1 + 6) != in_t0)) || ((uint)*(byte *)(*in_v1 + 4) != in_a3))
    ;
    in_v0 = *(byte *)&(instance->node).prev;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOnBodySpheres(struct _Instance *instance /*$a0*/)
 // line 248, offset 0x8007f744
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8007F744
		// Variables:
	// 		struct _MonsterVars *mv; // $a2

		/* begin block 1.1 */
			// Start line: 253
			// Start offset: 0x8007F770
			// Variables:
		// 		int i; // $a1
		// 		struct _HPrim *hprim; // $a0
		// 		struct _HModel *hmodel; // $v0
		/* end block 1.1 */
		// End offset: 0x8007F7F0
		// End Line: 261
	/* end block 1 */
	// End offset: 0x8007F7F0
	// End Line: 262

	/* begin block 2 */
		// Start line: 510
	/* end block 2 */
	// End Line: 511

	/* begin block 3 */
		// Start line: 511
	/* end block 3 */
	// End Line: 512

void MON_TurnOnBodySpheres(_Instance *instance)

{
  NodeType *pNVar1;
  byte *in_v1;
  _Instance *p_Var2;
  int in_a1;
  uint *in_a2;
  uint in_a3;
  uint in_t0;
  
  do {
    *in_v1 = *in_v1 & 0xfe;
    p_Var2 = instance;
    do {
      in_a1 = in_a1 + -1;
      instance = (_Instance *)&p_Var2->next;
      in_v1 = in_v1 + 8;
      if (in_a1 == 0) {
        *in_a2 = *in_a2 & 0xffff7fff;
        return;
      }
      pNVar1 = &p_Var2->node;
      p_Var2 = instance;
    } while (((uint)*(byte *)((int)&pNVar1->next + 2) != in_t0) ||
            (p_Var2 = instance, (uint)*(byte *)&((instance->node).prev)->next != in_a3));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOffAllSpheres(struct _Instance *instance /*$s0*/)
 // line 267, offset 0x8007f7f8
	/* begin block 1 */
		// Start line: 550
	/* end block 1 */
	// End Line: 551

void MON_TurnOffAllSpheres(_Instance *instance)

{
  byte *pbVar1;
  int *in_v1;
  int *piVar2;
  int in_a1;
  uint *in_a2;
  uint in_a3;
  uint in_t0;
  
  do {
    *(byte *)&(instance->node).prev = *(byte *)&(instance->node).prev | 1;
    piVar2 = in_v1;
    do {
      in_a1 = in_a1 + -1;
      in_v1 = piVar2 + 2;
      instance = (_Instance *)&instance->next;
      if (in_a1 == 0) {
        *in_a2 = *in_a2 | 0x8000;
        return;
      }
      pbVar1 = (byte *)((int)piVar2 + 6);
      piVar2 = in_v1;
    } while (((uint)*pbVar1 != in_t0) || (piVar2 = in_v1, (uint)*(byte *)(*in_v1 + 4) != in_a3));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOnAllSpheres(struct _Instance *instance /*$s0*/)
 // line 276, offset 0x8007f824
	/* begin block 1 */
		// Start line: 568
	/* end block 1 */
	// End Line: 569

void MON_TurnOnAllSpheres(_Instance *instance)

{
  uint in_v0;
  uint *in_a2;
  
  *in_a2 = in_v0 | 0x8000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SwitchState(struct _Instance *instance /*$s2*/, enum MonsterState state /*$s1*/)
 // line 318, offset 0x8007f850
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x8007F850
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007F934
	// End Line: 357

	/* begin block 2 */
		// Start line: 636
	/* end block 2 */
	// End Line: 637

void MON_SwitchState(_Instance *instance,MonsterState state)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SwitchStateDoEntry(struct _Instance *instance /*$s1*/, enum MonsterState state /*$a1*/)
 // line 360, offset 0x8007f94c
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x8007F94C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007F9A0
	// End Line: 376

	/* begin block 2 */
		// Start line: 707
	/* end block 2 */
	// End Line: 708

void MON_SwitchStateDoEntry(_Instance *instance,MonsterState state)

{
  uint in_v0;
  uint in_a1;
  uint *unaff_s0;
  
  *unaff_s0 = in_v0 & in_a1 & (uint)instance;
  if (*(char *)((int)unaff_s0 + 0x152) != -1) {
    FUN_80096738();
    *(undefined *)((int)unaff_s0 + 0x152) = 0xff;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_TransNodeAnimation(struct _Instance *instance /*$a0*/)
 // line 388, offset 0x8007f9b4
	/* begin block 1 */
		// Start line: 763
	/* end block 1 */
	// End Line: 764

int MON_TransNodeAnimation(_Instance *instance)

{
  code **ppcVar1;
  uint uVar2;
  uint *unaff_s0;
  
  ppcVar1 = (code **)FUN_8008cf58();
  (**ppcVar1)();
  uVar2 = *unaff_s0;
  *unaff_s0 = uVar2 & 0xfffffffe;
  return uVar2 & 0xfffffffe;
}



// decompiled code
// original method signature: 
// struct _MonsterAnim * /*$ra*/ MON_GetAnim(struct _Instance *instance /*$a0*/, char *animList /*$a1*/, int index /*$a2*/)
 // line 397, offset 0x8007f9dc
	/* begin block 1 */
		// Start line: 399
		// Start offset: 0x8007F9DC
		// Variables:
	// 		int whichAnim; // $a1
	/* end block 1 */
	// End offset: 0x8007FA08
	// End Line: 404

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

	/* begin block 3 */
		// Start line: 783
	/* end block 3 */
	// End Line: 784

_MonsterAnim * MON_GetAnim(_Instance *instance,char *animList,int index)

{
  _MonsterAnim *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnimID(struct _Instance *instance /*$s3*/, int index /*$a1*/, int mode /*$fp*/)
 // line 409, offset 0x8007fa10
	/* begin block 1 */
		// Start line: 410
		// Start offset: 0x8007FA10
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		struct _MonsterAnim *manim; // $s1
	// 		struct _MonsterAttributes *ma; // $v0
	// 		int anim; // $a2
	// 		int anim0; // $s6
	// 		int i; // $s0
	// 		int interpFrames; // $s5
	// 		int alphaTable; // $s4
	/* end block 1 */
	// End offset: 0x8007FB44
	// End Line: 466

	/* begin block 2 */
		// Start line: 808
	/* end block 2 */
	// End Line: 809

void MON_PlayAnimID(_Instance *instance,int index,int mode)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnimFromList(struct _Instance *instance /*$a0*/, char *animList /*$a1*/, int animtype /*$a2*/, int mode /*$a3*/)
 // line 470, offset 0x8007fbc8
	/* begin block 1 */
		// Start line: 977
	/* end block 1 */
	// End Line: 978

void MON_PlayAnimFromList(_Instance *instance,char *animList,int animtype,int mode)

{
  int in_v0;
  int unaff_s3;
  
  *(int *)(in_v0 * 0x10 + unaff_s3 + 0x1d8) = unaff_s3;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_AnimIDPlaying(struct _Instance *instance /*$a0*/, int index /*$a1*/)
 // line 475, offset 0x8007fbf0
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x8007FBF0
		// Variables:
	// 		struct _MonsterAttributes *ma; // $v0
	/* end block 1 */
	// End offset: 0x8007FBF0
	// End Line: 479

	/* begin block 2 */
		// Start line: 988
	/* end block 2 */
	// End Line: 989

	/* begin block 3 */
		// Start line: 989
	/* end block 3 */
	// End Line: 990

	/* begin block 4 */
		// Start line: 991
	/* end block 4 */
	// End Line: 992

int MON_AnimIDPlaying(_Instance *instance,int index)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnimIDIfNotPlaying(struct _Instance *instance /*$s0*/, int index /*$s1*/, int mode /*$s2*/)
 // line 482, offset 0x8007fc14
	/* begin block 1 */
		// Start line: 1004
	/* end block 1 */
	// End Line: 1005

void MON_PlayAnimIDIfNotPlaying(_Instance *instance,int index,int mode)

{
  FUN_8007fa4c();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_AnimPlayingFromList(struct _Instance *instance /*$a0*/, char *animList /*$a1*/, int animtype /*$a2*/)
 // line 491, offset 0x8007fc64
	/* begin block 1 */
		// Start line: 1022
	/* end block 1 */
	// End Line: 1023

int MON_AnimPlayingFromList(_Instance *instance,char *animList,int animtype)

{
  int iVar1;
  
  iVar1 = FUN_8007fc2c();
  if (iVar1 == 0) {
    iVar1 = FUN_8007fa4c();
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnimFromListIfNotPlaying(struct _Instance *instance /*$s1*/, char *animList /*$a1*/, int animtype /*$a2*/, int mode /*$s2*/)
 // line 496, offset 0x8007fc8c
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x8007FC8C
		// Variables:
	// 		int index; // $s0
	/* end block 1 */
	// End offset: 0x8007FCCC
	// End Line: 502

	/* begin block 2 */
		// Start line: 1033
	/* end block 2 */
	// End Line: 1034

void MON_PlayAnimFromListIfNotPlaying(_Instance *instance,char *animList,int animtype,int mode)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnim(struct _Instance *instance /*$a0*/, enum MonsterAnim animtype /*$a1*/, int mode /*$a3*/)
 // line 508, offset 0x8007fce4
	/* begin block 1 */
		// Start line: 1059
	/* end block 1 */
	// End Line: 1060

void MON_PlayAnim(_Instance *instance,MonsterAnim animtype,int mode)

{
  int iVar1;
  
  iVar1 = FUN_8007fc2c(instance,(int)*(char *)mode);
  if (iVar1 == 0) {
    FUN_8007fa4c();
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_AnimPlaying(struct _Instance *instance /*$a0*/, enum MonsterAnim animtype /*$a2*/)
 // line 516, offset 0x8007fd18
	/* begin block 1 */
		// Start line: 1076
	/* end block 1 */
	// End Line: 1077

int MON_AnimPlaying(_Instance *instance,MonsterAnim animtype)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayAnimIfNotPlaying(struct _Instance *instance /*$a0*/, enum MonsterAnim animtype /*$a1*/, int mode /*$a3*/)
 // line 524, offset 0x8007fd4c
	/* begin block 1 */
		// Start line: 1093
	/* end block 1 */
	// End Line: 1094

void MON_PlayAnimIfNotPlaying(_Instance *instance,MonsterAnim animtype,int mode)

{
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MON_AnimCallback(struct _G2Anim_Type *anim /*$a0*/, int sectionID /*$a1*/, enum _G2AnimCallbackMsg_Enum message /*$a2*/, long messageDataA /*$s0*/, long messageDataB /*stack 16*/, void *data /*stack 20*/)
 // line 566, offset 0x8007fd80
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x8007FD80
		// Variables:
	// 		struct _Instance *instance; // $a3
	// 		struct _MonsterVars *mv; // $t0
	/* end block 1 */
	// End offset: 0x8007FE1C
	// End Line: 591

	/* begin block 2 */
		// Start line: 1132
	/* end block 2 */
	// End Line: 1133

long MON_AnimCallback(_G2Anim_Type *anim,int sectionID,_G2AnimCallbackMsg_Enum message,
                     long messageDataA,long messageDataB,void *data)

{
  long in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_AnimInit(struct _Instance *instance /*$s1*/)
 // line 597, offset 0x8007fe30
	/* begin block 1 */
		// Start line: 598
		// Start offset: 0x8007FE30
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		struct _G2AnimSection_Type *animSection; // $s3
	// 		int i; // $s0
	// 		int startSection; // $s6
	// 		int numSections; // $s7

		/* begin block 1.1 */
			// Start line: 611
			// Start offset: 0x8007FE8C
			// Variables:
		// 		int sectionEnd; // $a3
		/* end block 1.1 */
		// End offset: 0x8007FF10
		// End Line: 621
	/* end block 1 */
	// End offset: 0x8007FF58
	// End Line: 626

	/* begin block 2 */
		// Start line: 1203
	/* end block 2 */
	// End Line: 1204

void MON_AnimInit(_Instance *instance)

{
  int in_a3;
  
  *(uint *)(in_a3 + 0x18) = *(uint *)(in_a3 + 0x18) | 2;
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ MON_FacingOffset(struct _Instance *instance /*$a0*/, struct _Instance *target /*$s0*/)
 // line 638, offset 0x8007ffa8
	/* begin block 1 */
		// Start line: 639
		// Start offset: 0x8007FFA8
	/* end block 1 */
	// End offset: 0x8007FFA8
	// End Line: 639

	/* begin block 2 */
		// Start line: 1309
	/* end block 2 */
	// End Line: 1310

short MON_FacingOffset(_Instance *instance,_Instance *target)

{
  short sVar1;
  
  sVar1 = FUN_80080b18();
  return sVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_CheckConditions(struct _Instance *instance /*$a0*/, struct _MonsterIR *mir /*$a1*/, char *probArray /*$a2*/)
 // line 651, offset 0x8007ffe4
	/* begin block 1 */
		// Start line: 653
		// Start offset: 0x8007FFE4
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	// 		char *probability; // $a2
	// 		int chance; // $a1
	// 		int i; // $t1
	// 		int prob; // $a3
	// 		int nprob; // $t0

		/* begin block 1.1 */
			// Start line: 663
			// Start offset: 0x80080014
			// Variables:
		// 		int conditionProb; // $v0
		/* end block 1.1 */
		// End offset: 0x80080078
		// End Line: 674
	/* end block 1 */
	// End offset: 0x80080088
	// End Line: 677

	/* begin block 2 */
		// Start line: 1341
	/* end block 2 */
	// End Line: 1342

	/* begin block 3 */
		// Start line: 1342
	/* end block 3 */
	// End Line: 1343

	/* begin block 4 */
		// Start line: 1346
	/* end block 4 */
	// End Line: 1347

void MON_CheckConditions(int iParm1,int iParm2)

{
                    /* WARNING: Subroutine does not return */
  FUN_80039bd4(iParm2 + 0x5c,iParm1 + 0x5c);
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ShouldIAttackInstance(struct _Instance *instance /*$s2*/, struct _Instance *ei /*$s0*/)
 // line 695, offset 0x800800bc
	/* begin block 1 */
		// Start line: 696
		// Start offset: 0x800800BC

		/* begin block 1.1 */
			// Start line: 699
			// Start offset: 0x800800E4
			// Variables:
		// 		struct _Instance *enemyAttackee; // $s1
		// 		long mode; // $v1
		// 		struct _MonsterVars *mv; // $s3

			/* begin block 1.1.1 */
				// Start line: 713
				// Start offset: 0x80080180
			/* end block 1.1.1 */
			// End offset: 0x800801C0
			// End Line: 719
		/* end block 1.1 */
		// End offset: 0x800801C0
		// End Line: 720
	/* end block 1 */
	// End offset: 0x800801C4
	// End Line: 723

	/* begin block 2 */
		// Start line: 1454
	/* end block 2 */
	// End Line: 1455

	/* begin block 3 */
		// Start line: 1455
	/* end block 3 */
	// End Line: 1456

int MON_ShouldIAttackInstance(_Instance *instance,_Instance *ei)

{
  int iVar1;
  uint in_v0;
  char *in_a2;
  int in_a3;
  int in_t0;
  uint in_t1;
  int in_t2;
  int in_t3;
  
  while (in_a2 = in_a2 + 1, in_v0 != 0) {
    if (((uint)instance & in_t1) != 0) {
      iVar1 = (int)*in_a2;
      if (iVar1 < 0) {
        iVar1 = in_t0 * (iVar1 + 100);
        in_t0 = (int)((longlong)iVar1 * (longlong)in_t2 >> 0x25) - (iVar1 >> 0x1f);
      }
      else {
        iVar1 = in_a3 * (in_t3 - iVar1);
        in_a3 = (int)((longlong)iVar1 * (longlong)in_t2 >> 0x25) - (iVar1 >> 0x1f);
      }
    }
    in_t1 = in_t1 << 1;
    in_v0 = (uint)((int)in_t1 < 0x1000);
  }
  return (uint)((int)ei < ((100 - in_a3) * in_t0) / 100);
}



// autogenerated function stub: 
// int /*$ra*/ MON_ShouldIAttack(struct _Instance *instance /*$s3*/, struct _MonsterIR *enemy /*$s1*/, struct _MonsterAttackAttributes *attack /*$s0*/)
int MON_ShouldIAttack(struct _Instance *instance, struct _MonsterIR *enemy, struct _MonsterAttackAttributes *attack)
{ // line 731, offset 0x800801e0
	/* begin block 1 */
		// Start line: 732
		// Start offset: 0x800801E0
		// Variables:
			struct _MonsterVars *mv; // $s4
			int rv; // $a0
			struct _Instance *ei; // $s2

		/* begin block 1.1 */
			// Start line: 751
			// Start offset: 0x8008024C
			// Variables:
				long distance; // $v1
		/* end block 1.1 */
		// End offset: 0x80080364
		// End Line: 803
	/* end block 1 */
	// End offset: 0x80080368
	// End Line: 809

	/* begin block 2 */
		// Start line: 1527
	/* end block 2 */
	// End Line: 1528

	return 0;
}


// decompiled code
// original method signature: 
// struct _MonsterAttackAttributes * /*$ra*/ MON_ChooseAttack(struct _Instance *instance /*$a0*/, struct _MonsterIR *enemy /*$a1*/)
 // line 818, offset 0x80080388
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x80080388
		// Variables:
	// 		struct _MonsterVars *mv; // $t1
	// 		struct _MonsterAttackAttributes *bestAttack; // $t5
	// 		struct _MonsterAttributes *ma; // $t6
	// 		struct _MonsterCombatAttributes *combat; // $t0
	// 		long distance; // $t3
	// 		long zdiff; // $t2
	// 		long smallest; // $t4
	// 		int i; // $a3
	// 		char *attackIndex; // $t0

		/* begin block 1.1 */
			// Start line: 850
			// Start offset: 0x8008042C
			// Variables:
		// 		struct _MonsterAttackAttributes *attack; // $a2
		// 		long delta; // $a0
		/* end block 1.1 */
		// End offset: 0x800804CC
		// End Line: 864
	/* end block 1 */
	// End offset: 0x800804D8
	// End Line: 869

	/* begin block 2 */
		// Start line: 1705
	/* end block 2 */
	// End Line: 1706

	/* begin block 3 */
		// Start line: 1706
	/* end block 3 */
	// End Line: 1707

	/* begin block 4 */
		// Start line: 1707
	/* end block 4 */
	// End Line: 1708

_MonsterAttackAttributes * MON_ChooseAttack(_Instance *instance,_MonsterIR *enemy)

{
  int in_v0;
  int in_v1;
  int unaff_s1;
  
  if (in_v1 < in_v0) {
    *(undefined2 *)(unaff_s1 + 0x18) = 0;
  }
  return (_MonsterAttackAttributes *)(uint)(in_v1 < in_v0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ShouldIEvade(struct _Instance *instance /*$s1*/)
 // line 878, offset 0x800804e8
	/* begin block 1 */
		// Start line: 879
		// Start offset: 0x800804E8
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		int rv; // $s3

		/* begin block 1.1 */
			// Start line: 886
			// Start offset: 0x80080520
			// Variables:
		// 		struct _MonsterIR *enemy; // $s2
		/* end block 1.1 */
		// End offset: 0x80080574
		// End Line: 899
	/* end block 1 */
	// End offset: 0x80080574
	// End Line: 903

	/* begin block 2 */
		// Start line: 1869
	/* end block 2 */
	// End Line: 1870

int MON_ShouldIEvade(_Instance *instance)

{
  _Instance *in_v0;
  _Instance *p_Var1;
  int iVar2;
  int in_a1;
  short *in_a2;
  int in_a3;
  char *in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  _Instance *in_t4;
  short *in_t5;
  int in_t6;
  
  do {
    p_Var1 = in_t4;
    if ((int)in_t4 < 0) {
      p_Var1 = (_Instance *)-(int)in_t4;
    }
    if ((int)in_v0 < (int)p_Var1) {
      in_t4 = instance;
      in_t5 = in_a2;
    }
    do {
      in_a3 = in_a3 + -1;
      in_t0 = in_t0 + 1;
      if (in_a3 == 0) {
        *(short **)(in_t1 + 0xb8) = in_t5;
        *(undefined *)(in_t1 + 0x14b) = 0;
        return (int)in_t5;
      }
      in_a2 = (short *)(in_t6 + (int)*in_t0 * 0x20);
      iVar2 = in_t2 - (int)in_a2[1];
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
    } while ((99 < iVar2) && ((*(ushort *)(in_a1 + 0x16) & 8) == 0));
    iVar2 = (int)*in_a2 * (int)*(short *)(*(int *)(in_t1 + 0x154) + 0x14);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    instance = (_Instance *)((iVar2 >> 0xc) - in_t3);
    in_v0 = instance;
    if ((int)instance < 0) {
      in_v0 = (_Instance *)-(int)instance;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ChooseLeftOrRight(struct _Instance *instance /*$s0*/, struct _MonsterIR *enemy /*$a1*/)
 // line 913, offset 0x80080594
	/* begin block 1 */
		// Start line: 914
		// Start offset: 0x80080594

		/* begin block 1.1 */
			// Start line: 923
			// Start offset: 0x800805D4
			// Variables:
		// 		int leftDist; // $s0
		// 		int rightDist; // $v1
		/* end block 1.1 */
		// End offset: 0x80080628
		// End Line: 932
	/* end block 1 */
	// End offset: 0x80080628
	// End Line: 933

	/* begin block 2 */
		// Start line: 1940
	/* end block 2 */
	// End Line: 1941

int MON_ChooseLeftOrRight(_Instance *instance,_MonsterIR *enemy)

{
  int iVar1;
  int in_a2;
  int unaff_s0;
  int unaff_s3;
  
  iVar1 = FUN_80080020(instance,enemy,in_a2 + 0x20);
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x18) = 0;
    unaff_s3 = 1;
  }
  return unaff_s3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ChooseEvadeMove(struct _Instance *instance /*$a0*/)
 // line 935, offset 0x80080638
	/* begin block 1 */
		// Start line: 936
		// Start offset: 0x80080638
		// Variables:
	// 		int anim; // $v0
	// 		struct _MonsterVars *mv; // $v0
	// 		int leftOrRight; // $v1
	/* end block 1 */
	// End offset: 0x80080684
	// End Line: 964

	/* begin block 2 */
		// Start line: 1989
	/* end block 2 */
	// End Line: 1990

int MON_ChooseEvadeMove(_Instance *instance)

{
  int iVar1;
  int iVar2;
  short in_a1;
  int unaff_s0;
  
  iVar1 = FUN_80086f24(instance,(int)in_a1);
  if (unaff_s0 == iVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
    if (iVar1 <= unaff_s0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ChooseCombatMove(struct _Instance *instance /*$s2*/, int reason /*$a1*/)
 // line 969, offset 0x80080694
	/* begin block 1 */
		// Start line: 970
		// Start offset: 0x80080694
		// Variables:
	// 		struct _MonsterVars *mv; // $s3
	// 		struct _MonsterSubAttributes *subAttr; // $s4
	// 		int anim; // $s1
	// 		int data; // $v0
	// 		struct _MonsterIR *enemy; // $s0
	// 		int infront; // $a0
	// 		struct _MonsterAnim *manim; // $s0

		/* begin block 1.1 */
			// Start line: 1032
			// Start offset: 0x80080748

			/* begin block 1.1.1 */
				// Start line: 1036
				// Start offset: 0x80080768
				// Variables:
			// 		int dir; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800807B0
			// End Line: 1045
		/* end block 1.1 */
		// End offset: 0x800807C8
		// End Line: 1068

		/* begin block 1.2 */
			// Start line: 1072
			// Start offset: 0x800807D0
			// Variables:
		// 		short zrot; // $s0

			/* begin block 1.2.1 */
				// Start line: 1108
				// Start offset: 0x800808C0
				// Variables:
			// 		struct _Position temp; // stack offset -56
			// 		struct SVECTOR New; // stack offset -48
			// 		struct VECTOR OutTrans; // stack offset -40
			/* end block 1.2.1 */
			// End offset: 0x800809E0
			// End Line: 1148
		/* end block 1.2 */
		// End offset: 0x80080AB8
		// End Line: 1173
	/* end block 1 */
	// End offset: 0x80080AB8
	// End Line: 1177

	/* begin block 2 */
		// Start line: 2057
	/* end block 2 */
	// End Line: 2058

int MON_ChooseCombatMove(_Instance *instance,int reason)

{
  int iVar1;
  int in_v1;
  
  if (in_v1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800bcddc();
  }
  iVar1 = 0x29;
  if (in_v1 < 0) {
    iVar1 = 0x28;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayRandomIdle(struct _Instance *instance /*$s4*/, int mode /*$s5*/)
 // line 1185, offset 0x80080adc
	/* begin block 1 */
		// Start line: 1186
		// Start offset: 0x80080ADC
		// Variables:
	// 		struct _MonsterVars *mv; // $s3
	// 		struct _MonsterAttributes *ma; // $s2
	// 		struct _MonsterBehavior *behavior; // $s0
	// 		struct _MonsterIdle *idle; // $s1
	// 		int chance; // $a2
	// 		int i; // $a0
	// 		char *idleIndex; // $a1
	/* end block 1 */
	// End offset: 0x80080C5C
	// End Line: 1244

	/* begin block 2 */
		// Start line: 2527
	/* end block 2 */
	// End Line: 2528

void MON_PlayRandomIdle(_Instance *instance,int mode)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PlayCombatIdle(struct _Instance *instance /*$a0*/, int mode /*$a2*/)
 // line 1249, offset 0x80080c80
	/* begin block 1 */
		// Start line: 1250
		// Start offset: 0x80080C80
		// Variables:
	// 		int anim; // $a1
	/* end block 1 */
	// End offset: 0x80080CA8
	// End Line: 1258

	/* begin block 2 */
		// Start line: 2664
	/* end block 2 */
	// End Line: 2665

void MON_PlayCombatIdle(_Instance *instance,int mode)

{
  undefined *unaff_s0;
  char *unaff_s1;
  int unaff_s3;
  
  FUN_8007fc50(instance,(int)*unaff_s1);
  *(undefined *)(unaff_s3 + 0x14d) = *unaff_s0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GetRandomPoint(struct _Position *out /*$s2*/, struct _Position *in /*$s1*/, short r /*$a2*/)
 // line 1290, offset 0x80080cc0
	/* begin block 1 */
		// Start line: 1291
		// Start offset: 0x80080CC0
		// Variables:
	// 		int ang; // $s0
	/* end block 1 */
	// End offset: 0x80080CC0
	// End Line: 1291

	/* begin block 2 */
		// Start line: 2580
	/* end block 2 */
	// End Line: 2581

void MON_GetRandomPoint(_Position *out,_Position *in,short r)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if ((**(uint **)&out[0x37].y & 0x10) != 0) {
    uVar1 = 0xb;
  }
  FUN_8007fd88(out,uVar1,in);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_GetRandomDestinationInWorld(struct _Instance *instance /*$s2*/, struct _Position *in /*$s0*/, short r /*$s4*/)
 // line 1307, offset 0x80080d6c
	/* begin block 1 */
		// Start line: 1308
		// Start offset: 0x80080D6C

		/* begin block 1.1 */
			// Start line: 1311
			// Start offset: 0x80080DA0
			// Variables:
		// 		struct _MonsterVars *mv; // $s1
		// 		struct evPhysicsLOSData data; // stack offset -48
		// 		int result; // $s0
		// 		int avoidEnemy; // $s3

			/* begin block 1.1.1 */
				// Start line: 1322
				// Start offset: 0x80080DDC
			/* end block 1.1.1 */
			// End offset: 0x80080E2C
			// End Line: 1328

			/* begin block 1.1.2 */
				// Start line: 1342
				// Start offset: 0x80080EA8
			/* end block 1.1.2 */
			// End offset: 0x80080EF8
			// End Line: 1348
		/* end block 1.1 */
		// End offset: 0x80080F30
		// End Line: 1357
	/* end block 1 */
	// End offset: 0x80080F34
	// End Line: 1360

	/* begin block 2 */
		// Start line: 2752
	/* end block 2 */
	// End Line: 2753

int MON_GetRandomDestinationInWorld(_Instance *instance,_Position *in,short r)

{
  ushort uVar1;
  int unaff_s1;
  int unaff_s2;
  int in_lo;
  
  *(short *)(unaff_s2 + 2) = *(short *)(unaff_s1 + 2) + (short)(in_lo >> 0xc);
  uVar1 = *(ushort *)(unaff_s1 + 4);
  *(ushort *)(unaff_s2 + 4) = uVar1;
  return (uint)uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_MoveForward(struct _Instance *instance /*$s0*/)
 // line 1453, offset 0x80080f54
	/* begin block 1 */
		// Start line: 1454
		// Start offset: 0x80080F54
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	/* end block 1 */
	// End offset: 0x80080F54
	// End Line: 1454

	/* begin block 2 */
		// Start line: 2906
	/* end block 2 */
	// End Line: 2907

void MON_MoveForward(_Instance *instance)

{
  undefined4 in_t0;
  int unaff_s1;
  undefined2 in_stack_00000014;
  
  *(undefined4 *)(unaff_s1 + 0x112) = in_t0;
  *(undefined2 *)(unaff_s1 + 0x116) = in_stack_00000014;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_TurnToPosition(struct _Instance *instance /*$s1*/, struct _Position *position /*$a1*/, short turnspeed /*$a2*/)
 // line 1468, offset 0x80080fa4
	/* begin block 1 */
		// Start line: 1469
		// Start offset: 0x80080FA4
	/* end block 1 */
	// End offset: 0x80080FA4
	// End Line: 1469

	/* begin block 2 */
		// Start line: 2989
	/* end block 2 */
	// End Line: 2990

int MON_TurnToPosition(_Instance *instance,_Position *position,short turnspeed)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  
  FUN_800778dc(instance,unaff_s0 + 0x74,(int)*(short *)(in_v0 + 0x110));
  *(undefined4 *)(unaff_s0 + 0x160) = 0;
  *(undefined4 *)(unaff_s0 + 0x164) = 0;
  *(undefined4 *)(unaff_s0 + 0x168) = 0;
  iVar1 = FUN_800776d0();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_MoveToPosition(struct _Instance *instance /*$s0*/, struct _Position *position /*$a1*/, short turnSpeed /*$a2*/)
 // line 1485, offset 0x80081014
	/* begin block 1 */
		// Start line: 3029
	/* end block 1 */
	// End Line: 3030

void MON_MoveToPosition(_Instance *instance,_Position *position,short turnSpeed)

{
  short in_v0;
  int in_lo;
  
  FUN_80039b04(instance,(int)in_v0,(in_lo << 4) >> 0x10);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_OnGround(struct _Instance *instance /*$s0*/)
 // line 1504, offset 0x80081058
	/* begin block 1 */
		// Start line: 1505
		// Start offset: 0x80081058
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct evPhysicsGravityData data; // stack offset -32
	// 		int minUpper; // $v1
	// 		long xyDist; // $a1
	/* end block 1 */
	// End offset: 0x800810E8
	// End Line: 1532

	/* begin block 2 */
		// Start line: 3069
	/* end block 2 */
	// End Line: 3070

int MON_OnGround(_Instance *instance)

{
  int iVar1;
  undefined4 in_a1;
  short in_a2;
  
  FUN_80080fe0(instance,in_a1,(int)in_a2);
  iVar1 = FUN_8007f9f0(instance);
  if (iVar1 == 0) {
    iVar1 = FUN_80080f90(instance);
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ApplyPhysics(struct _Instance *instance /*$a0*/)
 // line 1549, offset 0x80081148
	/* begin block 1 */
		// Start line: 3188
	/* end block 1 */
	// End Line: 3189

void MON_ApplyPhysics(_Instance *instance)

{
  short in_v1;
  short in_a1;
  uint *unaff_s1;
  short sStack00000012;
  undefined2 uStack0000001a;
  
  uStack0000001a = 0xc80;
  sStack00000012 = in_v1 + in_a1;
  FUN_80074c74(instance,&stack0x00000010,(uint)((*unaff_s1 & 0x800) == 0) << 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ChangeBehavior(struct _Instance *instance /*$a0*/, int behavior /*$s0*/)
 // line 1559, offset 0x8008116c
	/* begin block 1 */
		// Start line: 1560
		// Start offset: 0x8008116C

		/* begin block 1.1 */
			// Start line: 1563
			// Start offset: 0x80081188
			// Variables:
		// 		struct _MonsterVars *mv; // $s1
		// 		enum MonsterState state; // $a1
		/* end block 1.1 */
		// End offset: 0x800811E0
		// End Line: 1590
	/* end block 1 */
	// End offset: 0x800811E0
	// End Line: 1591

	/* begin block 2 */
		// Start line: 3209
	/* end block 2 */
	// End Line: 3210

void MON_ChangeBehavior(_Instance *instance,int behavior)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_CheckEnvironment(struct _Instance *instance /*$s1*/)
 // line 1596, offset 0x800811f4
	/* begin block 1 */
		// Start line: 1597
		// Start offset: 0x800811F4
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s4
	// 		int inwater; // $v0
	// 		struct _SVector Hack; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1637
			// Start offset: 0x80081328
			// Variables:
		// 		int moveback; // $s2
		// 		int onground; // $s3

			/* begin block 1.1.1 */
				// Start line: 1664
				// Start offset: 0x800813D4
				// Variables:
			// 		int offset; // $a1
			// 		int result; // $v0
			// 		struct _Position pos; // stack offset -32
			/* end block 1.1.1 */
			// End offset: 0x8008147C
			// End Line: 1684

			/* begin block 1.1.2 */
				// Start line: 1696
				// Start offset: 0x800814B8
				// Variables:
			// 		int result; // $v0
			// 		int offset; // $a1
			/* end block 1.1.2 */
			// End offset: 0x80081518
			// End Line: 1712

			/* begin block 1.1.3 */
				// Start line: 1719
				// Start offset: 0x80081520
				// Variables:
			// 		int result; // $v1
			/* end block 1.1.3 */
			// End offset: 0x8008157C
			// End Line: 1749
		/* end block 1.1 */
		// End offset: 0x800815E4
		// End Line: 1762
	/* end block 1 */
	// End offset: 0x80081608
	// End Line: 1767

	/* begin block 2 */
		// Start line: 3284
	/* end block 2 */
	// End Line: 3285

void MON_CheckEnvironment(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c(instance,0x13);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_CheckTerrainAndRespond(struct _Instance *instance /*$s1*/, struct BSPTree *bsp /*$a1*/, struct _TFace *tface /*$a2*/)
 // line 1769, offset 0x80081628
	/* begin block 1 */
		// Start line: 1770
		// Start offset: 0x80081628
		// Variables:
	// 		unsigned long results; // $s0
	/* end block 1 */
	// End offset: 0x80081698
	// End Line: 1781

	/* begin block 2 */
		// Start line: 3645
	/* end block 2 */
	// End Line: 3646

void MON_CheckTerrainAndRespond(_Instance *instance,BSPTree *bsp,_TFace *tface)

{
  uint in_v0;
  uint in_v1;
  
  if ((in_v1 != (in_v0 | 0x82)) && ((in_v1 & 4) == 0)) {
    FUN_8004a810();
  }
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MON_CheckTerrain(struct _Instance *instance /*$s2*/, struct BSPTree *bsp /*$s1*/, struct _TFace *tface /*$a2*/)
 // line 1786, offset 0x800816ac
	/* begin block 1 */
		// Start line: 1787
		// Start offset: 0x800816AC
		// Variables:
	// 		unsigned long rv; // $s0

		/* begin block 1.1 */
			// Start line: 1793
			// Start offset: 0x800816D0
			// Variables:
		// 		struct Level *level; // $v1
		/* end block 1.1 */
		// End offset: 0x80081750
		// End Line: 1813
	/* end block 1 */
	// End offset: 0x80081750
	// End Line: 1815

	/* begin block 2 */
		// Start line: 3679
	/* end block 2 */
	// End Line: 3680

ulong MON_CheckTerrain(_Instance *instance,BSPTree *bsp,_TFace *tface)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,(uint)bsp | 0xc,0x20);
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_CheckPointSuitability(struct _Instance *instance /*$s2*/, struct _Position *origin /*$a1*/, struct _Position *destination /*$s4*/)
 // line 1824, offset 0x8008176c
	/* begin block 1 */
		// Start line: 1825
		// Start offset: 0x8008176C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		int rc; // $s3
	// 		int result; // $a0
	// 		struct evPhysicsDropHeightData *data; // $s0
	/* end block 1 */
	// End offset: 0x80081820
	// End Line: 1851

	/* begin block 2 */
		// Start line: 3761
	/* end block 2 */
	// End Line: 3762

int MON_CheckPointSuitability(_Instance *instance,_Position *origin,_Position *destination)

{
  uint unaff_s0;
  uint uVar1;
  int unaff_s1;
  
  uVar1 = unaff_s0 | 0x10;
  if ((*(ushort *)(unaff_s1 + 0x12) & 0x20) != 0) {
    uVar1 = unaff_s0 | 0x30;
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MON_GetTime(struct _Instance *instance /*$a0*/)
 // line 1926, offset 0x80081844
	/* begin block 1 */
		// Start line: 3852
	/* end block 1 */
	// End Line: 3853

	/* begin block 2 */
		// Start line: 3896
	/* end block 2 */
	// End Line: 3897

ulong MON_GetTime(_Instance *instance)

{
  uint in_v0;
  ulong unaff_s3;
  
  if (((in_v0 & 0x800) != 0) || (instance != (_Instance *)0x0)) {
    unaff_s3 = 1;
  }
  return unaff_s3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BirthSoul(struct _Instance *instance /*$s1*/, int link /*$s3*/)
 // line 1944, offset 0x80081898
	/* begin block 1 */
		// Start line: 1945
		// Start offset: 0x80081898
		// Variables:
	// 		struct _MonsterVars *mv; // $s2

		/* begin block 1.1 */
			// Start line: 1952
			// Start offset: 0x800818E4
			// Variables:
		// 		struct Object *soulob; // $a1

			/* begin block 1.1.1 */
				// Start line: 1959
				// Start offset: 0x800818F8
				// Variables:
			// 		struct _Instance *isoul; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1980
					// Start offset: 0x8008195C
					// Variables:
				// 		struct MATRIX *matrix; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80081980
				// End Line: 1984
			/* end block 1.1.1 */
			// End offset: 0x80081988
			// End Line: 1990
		/* end block 1.1 */
		// End offset: 0x80081988
		// End Line: 1993

		/* begin block 1.2 */
			// Start line: 1996
			// Start offset: 0x80081990
			// Variables:
		// 		struct _Instance *isoul; // $a0
		/* end block 1.2 */
		// End offset: 0x800819E0
		// End Line: 2010
	/* end block 1 */
	// End offset: 0x800819E0
	// End Line: 2012

	/* begin block 2 */
		// Start line: 3923
	/* end block 2 */
	// End Line: 3924

	/* begin block 3 */
		// Start line: 3931
	/* end block 3 */
	// End Line: 3932

void MON_BirthSoul(_Instance *instance,int link)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ProcessIntro(struct _Instance *instance /*$s2*/)
 // line 2018, offset 0x800819fc
	/* begin block 1 */
		// Start line: 2019
		// Start offset: 0x800819FC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		long initialBehavior; // $s3
	// 		long triggeredBehavior; // $s5
	// 		long activeBehavior; // $s6
	// 		long guardRange; // $s7
	// 		long wanderRange; // $fp
	// 		long ambushRange; // $t1
	// 		long hitPoints; // $s4
	// 		int spectral; // stack offset -56
	// 		long flags; // $s1
	// 		struct _MonsterAttributes *ma; // $v0

		/* begin block 1.1 */
			// Start line: 2039
			// Start offset: 0x80081AA0
			// Variables:
		// 		struct INICommand *command; // $a2

			/* begin block 1.1.1 */
				// Start line: 2093
				// Start offset: 0x80081D14
				// Variables:
			// 		short *pmarker; // $a0
			// 		int i; // $a1
			// 		long *param; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80081D3C
			// End Line: 2108

			/* begin block 1.1.2 */
				// Start line: 2117
				// Start offset: 0x80081D64
				// Variables:
			// 		int i; // $a0
			// 		short *unit; // $a1
			/* end block 1.1.2 */
			// End offset: 0x80081D9C
			// End Line: 2127
		/* end block 1.1 */
		// End offset: 0x80081E14
		// End Line: 2157
	/* end block 1 */
	// End offset: 0x80081EF8
	// End Line: 2198

	/* begin block 2 */
		// Start line: 4082
	/* end block 2 */
	// End Line: 4083

void MON_ProcessIntro(_Instance *instance)

{
  int unaff_s1;
  
  *(undefined4 *)((int)instance->extraData + 0xd8) = *(undefined4 *)(unaff_s1 + 0x3c);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SetDefaults(struct _Instance *instance /*$a0*/)
 // line 2203, offset 0x80081f28
	/* begin block 1 */
		// Start line: 2205
		// Start offset: 0x80081F28
		// Variables:
	// 		struct _MonsterVars *mv; // $a1
	// 		struct _MonsterAttributes *ma; // $a3
	// 		struct _MonsterSubAttributes *subAttr; // $a2
	/* end block 1 */
	// End offset: 0x80082120
	// End Line: 2261

	/* begin block 2 */
		// Start line: 4620
	/* end block 2 */
	// End Line: 4621

	/* begin block 3 */
		// Start line: 4621
	/* end block 3 */
	// End Line: 4622

void MON_SetDefaults(_Instance *instance)

{
  undefined in_v1;
  int unaff_s0;
  
  *(undefined *)(unaff_s0 + 0x147) = in_v1;
  *(undefined *)(unaff_s0 + 0x146) = in_v1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GetPlanSlot(struct _MonsterVars *mv /*$s0*/)
 // line 2266, offset 0x80082128
	/* begin block 1 */
		// Start line: 4749
	/* end block 1 */
	// End Line: 4750

void MON_GetPlanSlot(_MonsterVars *mv)

{
  int in_a1;
  int in_a2;
  
  *(ushort *)(in_a1 + 0x13e) = *(ushort *)(in_a1 + 0x13e) | 0x200;
  if (*(char *)(in_a2 + 0x3b) != '\0') {
    *(ushort *)(in_a1 + 0x13e) = *(ushort *)(in_a1 + 0x13e) | 0x80;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_DefaultPlanMovement(struct _Instance *instance /*$s2*/, int anim /*$s4*/, long distance /*$s5*/)
 // line 2277, offset 0x8008216c
	/* begin block 1 */
		// Start line: 2278
		// Start offset: 0x8008216C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		int rc; // $s1
	// 		int felloff; // $v1
	// 		long length; // $s3
	// 		struct _MonsterAnim *manim; // $s6

		/* begin block 1.1 */
			// Start line: 2307
			// Start offset: 0x80082260
			// Variables:
		// 		struct _Position pos; // stack offset -40
		// 		int planresult; // $v1

			/* begin block 1.1.1 */
				// Start line: 2348
				// Start offset: 0x80082318
				// Variables:
			// 		short turnSpeed; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80082394
			// End Line: 2365
		/* end block 1.1 */
		// End offset: 0x80082394
		// End Line: 2365
	/* end block 1 */
	// End offset: 0x800823E4
	// End Line: 2389

	/* begin block 2 */
		// Start line: 4771
	/* end block 2 */
	// End Line: 4772

int MON_DefaultPlanMovement(_Instance *instance,int anim,long distance)

{
  int iVar1;
  
  if (*(char *)&instance->petrifyValue != -1) {
    FUN_80096738();
  }
  iVar1 = FUN_800966dc();
  *(char *)&instance->petrifyValue = (char)iVar1;
  return iVar1;
}



// autogenerated function stub: 
// void /*$ra*/ MON_DropAllObjects(struct _Instance *instance /*$a0*/)
void MON_DropAllObjects(struct _Instance *instance)
{ // line 2391, offset 0x8008240c
	/* begin block 1 */
		// Start line: 2392
		// Start offset: 0x8008240C
		// Variables:
			struct _Instance *child; // $a0

		/* begin block 1.1 */
			// Start line: 2397
			// Start offset: 0x8008242C
			// Variables:
				struct _Instance *next; // $s0
		/* end block 1.1 */
		// End offset: 0x8008245C
		// End Line: 2403
	/* end block 1 */
	// End offset: 0x80082468
	// End Line: 2405

	/* begin block 2 */
		// Start line: 5002
	/* end block 2 */
	// End Line: 5003

}


// decompiled code
// original method signature: 
// void /*$ra*/ MON_EnableHeadMove(struct _Instance *instance /*$a0*/)
 // line 2407, offset 0x8008247c
	/* begin block 1 */
		// Start line: 2408
		// Start offset: 0x8008247C
		// Variables:
	// 		struct _MonsterAttributes *ma; // $s0
	/* end block 1 */
	// End offset: 0x80082510
	// End Line: 2427

	/* begin block 2 */
		// Start line: 5042
	/* end block 2 */
	// End Line: 5043

void MON_EnableHeadMove(_Instance *instance)

{
  uint in_a1;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,in_a1 | 8,2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_DisableHeadMove(struct _Instance *instance /*$a0*/)
 // line 2429, offset 0x80082524
	/* begin block 1 */
		// Start line: 2430
		// Start offset: 0x80082524
		// Variables:
	// 		struct _MonsterAttributes *ma; // $s0
	/* end block 1 */
	// End offset: 0x8008259C
	// End Line: 2442

	/* begin block 2 */
		// Start line: 5086
	/* end block 2 */
	// End Line: 5087

void MON_DisableHeadMove(_Instance *instance)

{
  int in_v0;
  int in_v1;
  
  if (in_v1 != in_v0) {
    FUN_80090954();
                    /* WARNING: Subroutine does not return */
    FUN_800904f0();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LookInDirection(struct _Instance *instance /*$a0*/, short tx /*$a1*/, short tz /*$a2*/)
 // line 2447, offset 0x800825b0
	/* begin block 1 */
		// Start line: 2448
		// Start offset: 0x800825B0
		// Variables:
	// 		struct _G2SVector3_Type Rot; // stack offset -32
	// 		struct _MonsterAttributes *ma; // $s3
	/* end block 1 */
	// End offset: 0x80082704
	// End Line: 2471

	/* begin block 2 */
		// Start line: 5122
	/* end block 2 */
	// End Line: 5123

void MON_LookInDirection(_Instance *instance,short tx,short tz)

{
  uint in_v1;
  int unaff_s0;
  
  if ((in_v1 != 0) && (in_v1 != (uint)*(byte *)(unaff_s0 + 0x1a))) {
    FUN_800905cc();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LookAtPos(struct _Instance *instance /*$s1*/, struct _Position *position /*$a1*/)
 // line 2478, offset 0x80082724
	/* begin block 1 */
		// Start line: 2479
		// Start offset: 0x80082724
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		short z; // $a0
	/* end block 1 */
	// End offset: 0x800827D8
	// End Line: 2507

	/* begin block 2 */
		// Start line: 5191
	/* end block 2 */
	// End Line: 5192

void MON_LookAtPos(_Instance *instance,_Position *position)

{
  int unaff_s3;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  
  uStack00000010 = SUB42(position,0);
  uStack00000012 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(instance,(uint)*(byte *)(unaff_s3 + 0x1a),0xe,&stack0x00000010);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ProcessLookAt(struct _Instance *instance /*$s1*/)
 // line 2511, offset 0x80082800
	/* begin block 1 */
		// Start line: 2512
		// Start offset: 0x80082800
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x800828E0
	// End Line: 2540

	/* begin block 2 */
		// Start line: 5257
	/* end block 2 */
	// End Line: 5258

void MON_ProcessLookAt(_Instance *instance)

{
  int in_v0;
  int in_a1;
  int unaff_s0;
  
  if (in_a1 < in_v0 >> 0x10) {
    *(undefined2 *)(unaff_s0 + 0x13c) = (short)instance;
  }
  *(undefined2 *)(unaff_s0 + 0x13a) = 0;
  FUN_800825ec();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_TakeDamage(struct _Instance *instance /*$a0*/, int damage /*$s2*/, int type /*$s1*/)
 // line 2545, offset 0x800828f4
	/* begin block 1 */
		// Start line: 2546
		// Start offset: 0x800828F4
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 2553
			// Start offset: 0x80082938
			// Variables:
		// 		long whatAmI; // $v1
		/* end block 1.1 */
		// End offset: 0x80082984
		// End Line: 2573
	/* end block 1 */
	// End offset: 0x80082988
	// End Line: 2577

	/* begin block 2 */
		// Start line: 5325
	/* end block 2 */
	// End Line: 5326

int MON_TakeDamage(_Instance *instance,int damage,int type)

{
  int iVar1;
  
  FUN_80039b04(instance,damage,100);
  iVar1 = FUN_800825ec();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SetUpSaveInfo(struct _Instance *instance /*$t0*/, struct _MonsterSaveInfo *saveData /*$a3*/)
 // line 2582, offset 0x800829a0
	/* begin block 1 */
		// Start line: 2583
		// Start offset: 0x800829A0
		// Variables:
	// 		struct _MonsterVars *mv; // $a2
	// 		struct _MonsterAttributes *ma; // $t1
	/* end block 1 */
	// End offset: 0x80082B04
	// End Line: 2611

	/* begin block 2 */
		// Start line: 5405
	/* end block 2 */
	// End Line: 5406

void MON_SetUpSaveInfo(_Instance *instance,_MonsterSaveInfo *saveData)

{
  undefined2 in_v0;
  int unaff_s0;
  undefined2 unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x130) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x140) = unaff_s1;
  if (*(short *)(unaff_s0 + 0x130) < 1) {
    *(undefined2 *)(unaff_s0 + 0x130) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GetSaveInfo(struct _Instance *instance /*$s1*/, struct _MonsterSaveInfo *saveData /*$s2*/)
 // line 2616, offset 0x80082b0c
	/* begin block 1 */
		// Start line: 2617
		// Start offset: 0x80082B0C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s3

		/* begin block 1.1 */
			// Start line: 2676
			// Start offset: 0x80082CF4
			// Variables:
		// 		int mode; // $a2
		/* end block 1.1 */
		// End offset: 0x80082D34
		// End Line: 2687
	/* end block 1 */
	// End offset: 0x80082D34
	// End Line: 2689

	/* begin block 2 */
		// Start line: 5492
	/* end block 2 */
	// End Line: 5493

void MON_GetSaveInfo(_Instance *instance,_MonsterSaveInfo *saveData)

{
  int in_v0;
  uint in_v1;
  int in_a3;
  int in_t1;
  
  *(uint *)(in_a3 + 0xc) =
       in_v1 & (uint)saveData | (in_v0 - *(int *)(in_t1 + 0x40) >> 4 & 0x3fU) << 0xe;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_KillMonster(struct _Instance *instance /*$s5*/)
 // line 2694, offset 0x80082d50
	/* begin block 1 */
		// Start line: 2695
		// Start offset: 0x80082D50
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 2702
			// Start offset: 0x80082D90
			// Variables:
		// 		struct _MonsterAttributes *attr; // $v0
		// 		struct FXSplinter *splintDef; // $v1
		/* end block 1.1 */
		// End offset: 0x80082DF0
		// End Line: 2710
	/* end block 1 */
	// End offset: 0x80082EF4
	// End Line: 2749

	/* begin block 2 */
		// Start line: 5654
	/* end block 2 */
	// End Line: 5655

void MON_KillMonster(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ShouldIAmbushEnemy(struct _Instance *instance /*$s3*/)
 // line 2755, offset 0x80082f28
	/* begin block 1 */
		// Start line: 2756
		// Start offset: 0x80082F28
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $s2

		/* begin block 1.1 */
			// Start line: 2762
			// Start offset: 0x80082F7C
			// Variables:
		// 		struct _Instance *inst; // $s1
		// 		struct _Position pos; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x80082FF8
		// End Line: 2779
	/* end block 1 */
	// End offset: 0x80083078
	// End Line: 2797

	/* begin block 2 */
		// Start line: 5785
	/* end block 2 */
	// End Line: 5786

int MON_ShouldIAmbushEnemy(_Instance *instance)

{
  uint uVar1;
  int unaff_s5;
  
  FUN_8003e67c();
  uVar1 = *(uint *)(unaff_s5 + 0x14) | 0x20;
  *(uint *)(unaff_s5 + 0x14) = uVar1;
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ShouldIFireAtTarget(struct _Instance *instance /*$a0*/, struct _MonsterIR *target /*$a1*/)
 // line 2802, offset 0x80083094
	/* begin block 1 */
		// Start line: 2804
		// Start offset: 0x80083094
		// Variables:
	// 		struct _MonsterVars *mv; // $a2

		/* begin block 1.1 */
			// Start line: 2810
			// Start offset: 0x800830C4
			// Variables:
		// 		struct _MonsterAttributes *ma; // $v1
		// 		struct _MonsterMissile *missileAttack; // $a0

			/* begin block 1.1.1 */
				// Start line: 2815
				// Start offset: 0x800830FC
				// Variables:
			// 		long distance; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 2819
					// Start offset: 0x80083114
					// Variables:
				// 		struct _MonsterIR *known; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8008317C
				// End Line: 2836
			/* end block 1.1.1 */
			// End offset: 0x8008317C
			// End Line: 2837
		/* end block 1.1 */
		// End offset: 0x8008317C
		// End Line: 2838
	/* end block 1 */
	// End offset: 0x8008317C
	// End Line: 2842

	/* begin block 2 */
		// Start line: 5881
	/* end block 2 */
	// End Line: 5882

	/* begin block 3 */
		// Start line: 5882
	/* end block 3 */
	// End Line: 5883

int MON_ShouldIFireAtTarget(_Instance *instance,_MonsterIR *target)

{
  int iVar1;
  int unaff_s0;
  int unaff_s2;
  
  iVar1 = FUN_80039ff8(unaff_s2 + 0xc,(int)*(short *)(unaff_s0 + 300),
                       (int)*(short *)(unaff_s0 + 0x12e));
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ShouldIFlee(struct _Instance *instance /*$a0*/)
 // line 2847, offset 0x80083184
	/* begin block 1 */
		// Start line: 2848
		// Start offset: 0x80083184
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $v1
	/* end block 1 */
	// End offset: 0x80083274
	// End Line: 2872

	/* begin block 2 */
		// Start line: 5984
	/* end block 2 */
	// End Line: 5985

int MON_ShouldIFlee(_Instance *instance)

{
  int *in_v1;
  int in_a1;
  
  do {
    if (*(short *)(in_v1 + 3) < 200) {
      return 0;
    }
    do {
      in_v1 = (int *)*in_v1;
      if (in_v1 == (int *)0x0) {
        return 2;
      }
    } while ((in_a1 <= (int)*(short *)(in_v1 + 5)) || (*(short *)((int)in_v1 + 0xe) < 1));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_RelocateCoords(struct _Instance *instance /*$a0*/, struct _SVector *offset /*$t0*/)
 // line 2877, offset 0x80083284
	/* begin block 1 */
		// Start line: 2878
		// Start offset: 0x80083284
		// Variables:
	// 		struct _MonsterVars *mv; // $a0
	// 		int ox; // $a1
	// 		int oy; // $a2
	// 		int oz; // $a3
	/* end block 1 */
	// End offset: 0x80083300
	// End Line: 2896

	/* begin block 2 */
		// Start line: 6044
	/* end block 2 */
	// End Line: 6045

void MON_RelocateCoords(_Instance *instance,_SVector *offset)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ValidUnit(struct _Instance *instance /*$a0*/, unsigned long unitId /*$a1*/)
 // line 2901, offset 0x80083310
	/* begin block 1 */
		// Start line: 2903
		// Start offset: 0x80083310
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	// 		short *unit; // $a0
	/* end block 1 */
	// End offset: 0x80083354
	// End Line: 2918

	/* begin block 2 */
		// Start line: 6098
	/* end block 2 */
	// End Line: 6099

	/* begin block 3 */
		// Start line: 6099
	/* end block 3 */
	// End Line: 6100

int MON_ValidUnit(_Instance *instance,ulong unitId)

{
  short in_v0;
  int iVar1;
  short in_a2;
  short in_a3;
  
  (instance->halvePlane).c = in_v0 + in_a2;
  (instance->halvePlane).flags = (instance->halvePlane).flags + in_a3;
  iVar1 = -1;
  if (*(char *)&instance->petrifyValue != -1) {
    iVar1 = FUN_800971c4();
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_ValidPosition(struct _Instance *instance /*$s0*/)
 // line 2923, offset 0x8008335c
	/* begin block 1 */
		// Start line: 2924
		// Start offset: 0x8008335C

		/* begin block 1.1 */
			// Start line: 2925
			// Start offset: 0x80083380
			// Variables:
		// 		struct _MonsterVars *mv; // $v1
		/* end block 1.1 */
		// End offset: 0x80083388
		// End Line: 2932
	/* end block 1 */
	// End offset: 0x800833A4
	// End Line: 2933

	/* begin block 2 */
		// Start line: 6144
	/* end block 2 */
	// End Line: 6145

int MON_ValidPosition(_Instance *instance)

{
  short sVar1;
  int in_v0;
  int in_v1;
  short *psVar2;
  short in_a1;
  
  psVar2 = (short *)(in_v0 + 0x160);
  if (in_v1 != 0) {
    while (sVar1 = *psVar2, psVar2 = psVar2 + 1, in_a1 != sVar1) {
      if (*psVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SphereWorldPos(struct MATRIX *mat /*$s1*/, struct _HSphere *sphere /*$a1*/, struct _Position *ret /*$s0*/)
 // line 2936, offset 0x800833b4
	/* begin block 1 */
		// Start line: 6175
	/* end block 1 */
	// End Line: 6176

void MON_SphereWorldPos(MATRIX *mat,_HSphere *sphere,_Position *ret)

{
  undefined2 uVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  
  if (in_v0 != 0) {
    iVar2 = *(int *)(unaff_s0 + 0x14c);
    uVar1 = *(undefined2 *)(unaff_s0 + 0x60);
    *(undefined4 *)(iVar2 + 0x11a) = *(undefined4 *)(unaff_s0 + 0x5c);
    *(undefined2 *)(iVar2 + 0x11e) = uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// struct _HPrim * /*$ra*/ MON_FindSphereForTerrain(struct _Instance *instance /*$a0*/)
 // line 2945, offset 0x80083424
	/* begin block 1 */
		// Start line: 2947
		// Start offset: 0x80083424
		// Variables:
	// 		struct _HModel *hmodel; // $v0
	// 		struct _HPrim *usePrim; // $a3
	// 		struct _HPrim *currentP; // $a0
	// 		struct _HSphere *tempS; // $v0
	// 		int maxRad; // $a2
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x800834A8
	// End Line: 2975

	/* begin block 2 */
		// Start line: 6193
	/* end block 2 */
	// End Line: 6194

	/* begin block 3 */
		// Start line: 6194
	/* end block 3 */
	// End Line: 6195

	/* begin block 4 */
		// Start line: 6195
	/* end block 4 */
	// End Line: 6196

_HPrim * MON_FindSphereForTerrain(_Instance *instance)

{
  _HPrim *p_Var1;
  int unaff_s0;
  int unaff_s1;
  
  *(short *)(unaff_s0 + 2) = *(short *)(unaff_s0 + 2) + *(short *)(unaff_s1 + 0x18);
  p_Var1 = (_HPrim *)((uint)*(ushort *)(unaff_s0 + 4) + (uint)*(ushort *)(unaff_s1 + 0x1c));
  *(undefined2 *)(unaff_s0 + 4) = (short)p_Var1;
  return p_Var1;
}



// autogenerated function stub: 
// struct Intro * /*$ra*/ MON_FindNearestImpalingIntro(int unitID /*$a0*/, struct _Position *position /*$s4*/)
struct Intro * MON_FindNearestImpalingIntro(int unitID, struct _Position *position)
{ // line 2979, offset 0x800834b0
	/* begin block 1 */
		// Start line: 2980
		// Start offset: 0x800834B0
		// Variables:
			struct Intro *current; // $v1
			struct Intro *res; // $s2
			struct Level *level; // $v0
			int min_dist; // $s3
			int dist; // $v1
			int i; // $s1
	/* end block 1 */
	// End offset: 0x800835BC
	// End Line: 3023

	/* begin block 2 */
		// Start line: 6271
	/* end block 2 */
	// End Line: 6272

	return null;
}


// autogenerated function stub: 
// struct Intro * /*$ra*/ MON_TestForTerrainImpale(struct _Instance *instance /*$s0*/, struct _Terrain *terrain /*$s1*/)
struct Intro * MON_TestForTerrainImpale(struct _Instance *instance, struct _Terrain *terrain)
{ // line 3027, offset 0x800835e0
	/* begin block 1 */
		// Start line: 3028
		// Start offset: 0x800835E0
		// Variables:
			struct _MonsterVars *mv; // $v0
			struct Intro *current; // $s1
			struct _HPrim *prim; // $v1
			struct _HSphere *sphere; // $a1
			int i; // $s2
			int radius; // $s3
			struct _Position spherePos; // stack offset -32
	/* end block 1 */
	// End offset: 0x800836C0
	// End Line: 3070

	/* begin block 2 */
		// Start line: 6385
	/* end block 2 */
	// End Line: 6386

	return null;
}


// autogenerated function stub: 
// void /*$ra*/ MON_MoveInstanceToImpalePoint(struct _Instance *instance /*$s0*/)
void MON_MoveInstanceToImpalePoint(struct _Instance *instance)
{ // line 3072, offset 0x800836dc
	/* begin block 1 */
		// Start line: 3073
		// Start offset: 0x800836DC
		// Variables:
			struct _MonsterVars *mv; // $v1
			struct Intro *impaler; // $t3
			struct _Position offset; // stack offset -16

		/* begin block 1.1 */
			// Start line: 3097
			// Start offset: 0x80083718
			// Variables:
				short _x0; // $v0
				short _y0; // $v1
				short _z0; // $a2
				short _y1; // $t0
				short _z1; // $t2
				struct _Position *_v; // $a3
				struct _Position *_v1; // $a1
		/* end block 1.1 */
		// End offset: 0x80083718
		// End Line: 3097

		/* begin block 1.2 */
			// Start line: 3097
			// Start offset: 0x80083718
			// Variables:
				short _x1; // $v1
				short _y1; // $a2
				short _z1; // $a3
				struct _Rotation *_v0; // $v0
				struct _Rotation *_v1; // $v0
		/* end block 1.2 */
		// End offset: 0x80083718
		// End Line: 3097
	/* end block 1 */
	// End offset: 0x800837B0
	// End Line: 3107

	/* begin block 2 */
		// Start line: 6491
	/* end block 2 */
	// End Line: 6492

}


// decompiled code
// original method signature: 
// int /*$ra*/ MON_ReachableIntro(struct _Instance *instance /*stack 0*/, struct _Position *pos /*$fp*/, struct _Position *introPos /*$s7*/, struct _Rotation *introRot /*stack 12*/, int checkOrientation /*stack 16*/)
 // line 3121, offset 0x800837c0
	/* begin block 1 */
		// Start line: 3122
		// Start offset: 0x800837C0
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		int angle; // $s5
	// 		int angle2; // $s6
	// 		int angle3; // $v1
	// 		int flightAngle; // $v0
	// 		int length; // $v0
	// 		int length2; // $s4
	// 		int newFVel; // $s0
	// 		int newZVel; // $s1
	// 		int zDiff; // $s1
	// 		int zAccl; // $s3
	// 		int tempFVel; // $v1
	// 		int maxForwardVel; // $s1
	// 		int res; // $s3
	/* end block 1 */
	// End offset: 0x80083B7C
	// End Line: 3241

	/* begin block 2 */
		// Start line: 6605
	/* end block 2 */
	// End Line: 6606

int MON_ReachableIntro(_Instance *instance,_Position *pos,_Position *introPos,_Rotation *introRot,
                      int checkOrientation)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short in_v1;
  int in_t3;
  
  introRot->y = in_v1;
  introRot->z = (short)introPos;
  sVar1 = *(short *)(in_t3 + 0x1a);
  sVar2 = *(short *)(in_t3 + 0x1c);
  (instance->rotation).x = *(short *)(in_t3 + 0x18);
  (instance->rotation).y = sVar1;
  (instance->rotation).z = sVar2;
  iVar3 = FUN_8001e924();
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_SetVelocityTowardsImpalingObject(struct _Instance *instance /*$s3*/, int checkOrientation /*$s4*/)
 // line 3244, offset 0x80083bac
	/* begin block 1 */
		// Start line: 3245
		// Start offset: 0x80083BAC
		// Variables:
	// 		struct Level *level; // $s0
	// 		struct Intro *currentI; // $s1
	// 		struct _HPrim *usePrim; // $v0
	// 		int i; // $s2
	// 		struct _Position spherePos; // stack offset -32

		/* begin block 1.1 */
			// Start line: 3259
			// Start offset: 0x80083C04
			// Variables:
		// 		struct _Instance *target; // $s0

			/* begin block 1.1.1 */
				// Start line: 3284
				// Start offset: 0x80083CA4
				// Variables:
			// 		struct PhysObProperties *prop; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 3287
					// Start offset: 0x80083CBC
				/* end block 1.1.1.1 */
				// End offset: 0x80083CEC
				// End Line: 3296
			/* end block 1.1.1 */
			// End offset: 0x80083CEC
			// End Line: 3297
		/* end block 1.1 */
		// End offset: 0x80083CFC
		// End Line: 3299
	/* end block 1 */
	// End offset: 0x80083D00
	// End Line: 3303

	/* begin block 2 */
		// Start line: 6905
	/* end block 2 */
	// End Line: 6906

int MON_SetVelocityTowardsImpalingObject(_Instance *instance,int checkOrientation)

{
  int in_v0;
  int in_t0;
  undefined4 unaff_s1;
  
  *(undefined4 *)(in_t0 + 0x15c) = unaff_s1;
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOffSphereCollisions(struct _Instance *instance /*$a0*/)
 // line 3312, offset 0x80083d20
	/* begin block 1 */
		// Start line: 3314
		// Start offset: 0x80083D20
		// Variables:
	// 		int i; // $a0
	// 		struct _HPrim *hprim; // $v1
	// 		struct _HModel *hmodel; // $v1
	/* end block 1 */
	// End offset: 0x80083D74
	// End Line: 3330

	/* begin block 2 */
		// Start line: 7064
	/* end block 2 */
	// End Line: 7065

	/* begin block 3 */
		// Start line: 7065
	/* end block 3 */
	// End Line: 7066

	/* begin block 4 */
		// Start line: 7067
	/* end block 4 */
	// End Line: 7068

void MON_TurnOffSphereCollisions(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  
  if ((in_v0 == 0) && (*(int *)(unaff_s0 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(*(int *)(unaff_s0 + 8),1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_TurnOnSphereCollisions(struct _Instance *instance /*$a0*/)
 // line 3332, offset 0x80083d7c
	/* begin block 1 */
		// Start line: 3334
		// Start offset: 0x80083D7C
		// Variables:
	// 		int i; // $a0
	// 		struct _HPrim *hprim; // $v1
	// 		struct _HModel *hmodel; // $v1
	/* end block 1 */
	// End offset: 0x80083DD0
	// End Line: 3350

	/* begin block 2 */
		// Start line: 7106
	/* end block 2 */
	// End Line: 7107

	/* begin block 3 */
		// Start line: 7107
	/* end block 3 */
	// End Line: 7108

	/* begin block 4 */
		// Start line: 7109
	/* end block 4 */
	// End Line: 7110

void MON_TurnOnSphereCollisions(_Instance *instance)

{
  int *in_v1;
  byte *pbVar1;
  
  pbVar1 = (byte *)(*in_v1 + 1);
  if ((*(byte *)(*in_v1 + 1) & 0x20) != 0) {
    do {
      instance = (_Instance *)((int)&instance->LinkSibling + 3);
      *pbVar1 = *pbVar1 & 0xdf;
      pbVar1 = pbVar1 + 8;
    } while (instance != (_Instance *)0x0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ProcessSpecialFade(struct _Instance *instance /*$s0*/)
 // line 3352, offset 0x80083dd8
	/* begin block 1 */
		// Start line: 3353
		// Start offset: 0x80083DD8
		// Variables:
	// 		struct _MonsterVars *mv; // $a0
	// 		int currentFadeValue; // $a1
	// 		int targetFadeValue; // $v1
	// 		int fadeRate; // $a3
	// 		struct _Instance *child; // $v1
	/* end block 1 */
	// End offset: 0x80084004
	// End Line: 3447

	/* begin block 2 */
		// Start line: 7148
	/* end block 2 */
	// End Line: 7149

void MON_ProcessSpecialFade(_Instance *instance)

{
  int *in_v1;
  byte *pbVar1;
  
  pbVar1 = (byte *)(*in_v1 + 1);
  if ((*(byte *)(*in_v1 + 1) & 0x20) == 0) {
    do {
      instance = (_Instance *)((int)&instance->LinkSibling + 3);
      *pbVar1 = *pbVar1 | 0x20;
      pbVar1 = pbVar1 + 8;
    } while (instance != (_Instance *)0x0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_StartSpecialFade(struct _Instance *instance /*$a0*/, int fadeLevel /*$a1*/, int fadeTime /*$a2*/)
 // line 3449, offset 0x80084014
	/* begin block 1 */
		// Start line: 3451
		// Start offset: 0x80084014
		// Variables:
	// 		struct _MonsterVars *mv; // $a3
	// 		int diff; // $a1
	/* end block 1 */
	// End offset: 0x80084074
	// End Line: 3464

	/* begin block 2 */
		// Start line: 7351
	/* end block 2 */
	// End Line: 7352

	/* begin block 3 */
		// Start line: 7352
	/* end block 3 */
	// End Line: 7353

void MON_StartSpecialFade(_Instance *instance,int fadeLevel,int fadeTime)

{
  int iVar1;
  int unaff_s0;
  
  iVar1 = *(int *)(unaff_s0 + 0x130);
  while (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0xec) = *(undefined2 *)(unaff_s0 + 0xec);
    iVar1 = *(int *)(iVar1 + 0x134);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_UnlinkFromRaziel(struct _Instance *instance /*$s0*/)
 // line 3466, offset 0x8008407c
	/* begin block 1 */
		// Start line: 3467
		// Start offset: 0x8008407C
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	// 		struct evPositionData *data; // $v1
	// 		struct _Instance *enemy; // $s1
	/* end block 1 */
	// End offset: 0x800840F8
	// End Line: 3485

	/* begin block 2 */
		// Start line: 7386
	/* end block 2 */
	// End Line: 7387

void MON_UnlinkFromRaziel(_Instance *instance)

{
  int in_a1;
  int in_a2;
  int in_a3;
  
  *(undefined2 *)(in_a3 + 0x196) = (short)(in_a1 / in_a2);
  if ((in_a1 / in_a2 & 0xffffU) == 0) {
    if (in_a1 < 0) {
      *(undefined2 *)(in_a3 + 0x196) = 0xffff;
      return;
    }
    *(undefined2 *)(in_a3 + 0x196) = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BurnInAir(struct _Instance *instance /*$s1*/, int currentState /*$s2*/)
 // line 3491, offset 0x8008411c
	/* begin block 1 */
		// Start line: 3492
		// Start offset: 0x8008411C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008419C
	// End Line: 3502

	/* begin block 2 */
		// Start line: 7436
	/* end block 2 */
	// End Line: 7437

void MON_BurnInAir(_Instance *instance,int currentState)

{
  undefined2 in_v0;
  int in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x76) = in_v0;
  *(short *)(unaff_s0 + 0x78) = *(short *)(in_v1 + 4) + 0x800;
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,0x1000006);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BirthMana(struct _Instance *instance /*$s0*/)
 // line 3508, offset 0x800841d8
	/* begin block 1 */
		// Start line: 3509
		// Start offset: 0x800841D8

		/* begin block 1.1 */
			// Start line: 3512
			// Start offset: 0x800841F8
			// Variables:
		// 		struct _MonsterVars *mv; // $v0

			/* begin block 1.1.1 */
				// Start line: 3516
				// Start offset: 0x80084214
				// Variables:
			// 		int type; // $a0
			// 		struct MATRIX *mat; // $a3
			/* end block 1.1.1 */
			// End offset: 0x80084280
			// End Line: 3519
		/* end block 1.1 */
		// End offset: 0x80084280
		// End Line: 3520
	/* end block 1 */
	// End offset: 0x80084280
	// End Line: 3521

	/* begin block 2 */
		// Start line: 7472
	/* end block 2 */
	// End Line: 7473

void MON_BirthMana(_Instance *instance)

{
  uint *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  
  *(undefined4 *)(unaff_s1 + 0x178) = unaff_s2;
  *unaff_s0 = *unaff_s0 & 0xfffffffe;
  *(uint *)(unaff_s1 + 0x58) = *(uint *)(unaff_s1 + 0x58) & 0xffffffdf;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SoulSucked(struct _Instance *instance /*$s1*/)
 // line 3523, offset 0x80084290
	/* begin block 1 */
		// Start line: 3524
		// Start offset: 0x80084290
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x800842F4
	// End Line: 3535

	/* begin block 2 */
		// Start line: 7505
	/* end block 2 */
	// End Line: 7506

void MON_SoulSucked(_Instance *instance)

{
  int in_v0;
  int in_v1;
  uint uStack00000010;
  
  uStack00000010 = (uint)(in_v0 + ((int)&(instance->node).prev + in_v1) * -4 < 0x50) ^ 1;
  FUN_8006a3e8();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MON_SetUpKnockBack(struct _Instance *instance /*$s2*/, struct _Instance *enemy /*$s1*/, struct evMonsterHitData *data /*$a2*/)
 // line 3540, offset 0x80084308
	/* begin block 1 */
		// Start line: 3541
		// Start offset: 0x80084308
		// Variables:
	// 		struct _MonsterVars *mv; // $s5
	// 		long d; // $s0
	// 		long t; // $s4
	// 		long a; // $s3
	// 		long v; // $s0
	// 		int front; // $s0
	/* end block 1 */
	// End offset: 0x800843CC
	// End Line: 3570

	/* begin block 2 */
		// Start line: 7539
	/* end block 2 */
	// End Line: 7540

int MON_SetUpKnockBack(_Instance *instance,_Instance *enemy,evMonsterHitData *data)

{
  uint in_v0;
  int iVar1;
  int unaff_s0;
  
  if ((in_v0 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80081880();
  }
  *(undefined4 *)(unaff_s0 + 0xd8) = 0;
  iVar1 = FUN_80084214();
  return iVar1;
}



// autogenerated function stub: 
// void /*$ra*/ MON_DoDrainEffects(struct _Instance *instance /*$s1*/, struct _Instance *ei /*$s0*/)
void MON_DoDrainEffects(struct _Instance *instance, struct _Instance *ei)
{ // line 3575, offset 0x8008440c
	/* begin block 1 */
		// Start line: 3576
		// Start offset: 0x8008440C
		// Variables:
			struct _MonsterAttributes *ma; // $s3
			struct _MonsterVars *mv; // $s2
			struct MATRIX *mat; // $t2
			struct _SVector location; // stack offset -56
			struct _SVector position; // stack offset -48
			struct _SVector vel; // stack offset -40
			struct _SVector accel; // stack offset -32
	/* end block 1 */
	// End offset: 0x8008467C
	// End Line: 3621

	/* begin block 2 */
		// Start line: 7610
	/* end block 2 */
	// End Line: 7611

}


// decompiled code
// original method signature: 
// void /*$ra*/ MON_SetFXHitData(struct _Instance *instance /*$a0*/, struct evFXHitData *data /*$a1*/, int type /*$a2*/, int amount /*$a3*/)
 // line 3623, offset 0x80084698
	/* begin block 1 */
		// Start line: 3625
		// Start offset: 0x80084698

		/* begin block 1.1 */
			// Start line: 3629
			// Start offset: 0x800846B0
			// Variables:
		// 		struct MATRIX *mat; // $v0
		/* end block 1.1 */
		// End offset: 0x800846B0
		// End Line: 3629
	/* end block 1 */
	// End offset: 0x80084714
	// End Line: 3640

	/* begin block 2 */
		// Start line: 7778
	/* end block 2 */
	// End Line: 7779

	/* begin block 3 */
		// Start line: 7779
	/* end block 3 */
	// End Line: 7780

void MON_SetFXHitData(_Instance *instance,evFXHitData *data,int type,int amount)

{
  undefined4 uStack00000018;
  undefined4 uStack00000028;
  
  uStack00000018 = 0;
  uStack00000028 = 1;
  FUN_8004ea98();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LaunchMonster(struct _Instance *instance /*$s0*/, int zDirection /*$s1*/, int power /*$s2*/, int loft /*$s3*/)
 // line 3645, offset 0x80084724
	/* begin block 1 */
		// Start line: 7822
	/* end block 1 */
	// End Line: 7823

void MON_LaunchMonster(_Instance *instance,int zDirection,int power,int loft)

{
  undefined2 in_v0;
  
  *(undefined2 *)(zDirection + 4) = in_v0;
  *(short *)zDirection = (instance->position).x;
  *(short *)(zDirection + 2) = (instance->position).y;
  *(short *)(zDirection + 4) = (instance->position).z + 0x100;
  *(undefined2 *)(zDirection + 8) = 0;
  *(undefined2 *)(zDirection + 10) = 0;
  *(undefined2 *)(zDirection + 0xc) = 0;
  return;
}





