#include "THISDUST.H"
#include "HUMAN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_WaitForWeapon(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 92, offset 0x8007cb40
	/* begin block 1 */
		// Start line: 184
	/* end block 1 */
	// End Line: 185

void HUMAN_WaitForWeapon(_Instance *instance,GameTracker *gameTracker)

{
  short in_v0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *in_a2;
  uint *puVar4;
  int *in_a3;
  int in_t0;
  int in_t1;
  int in_t2;
  uint in_t3;
  uint in_t4;
  uint in_t5;
  uint in_t6;
  
  do {
    *(short *)in_a3 = in_v0 + (short)gameTracker;
    puVar4 = in_a2;
LAB_8007cb64:
    while( true ) {
      while( true ) {
        uVar3 = *puVar4;
        in_a2 = puVar4 + 1;
        if (uVar3 == 0xffffffff) {
          return;
        }
        uVar2 = uVar3 & 3;
        in_a3 = (int *)((int)&(instance->node).prev + (uVar3 & in_t6));
        if (uVar2 != in_t5) break;
        *(short *)in_a3 = (short)((int)&(instance->node).prev + in_t2 + *in_a2 >> 0x10);
        puVar4 = puVar4 + 2;
      }
      if (1 < uVar2) break;
      puVar4 = in_a2;
      if (uVar2 == 0) {
        iVar1 = (int)&(gameTracker->gameData).asmData.drawBackFaces + *in_a3;
        goto LAB_8007cb60;
      }
    }
    if (uVar2 != in_t4) break;
    in_v0 = *(short *)in_a3;
  } while( true );
  puVar4 = in_a2;
  if (uVar2 == in_t3) {
    iVar1 = (*in_a3 - in_t1) + in_t0;
LAB_8007cb60:
    *in_a3 = iVar1;
    puVar4 = in_a2;
  }
  goto LAB_8007cb64;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ HUMAN_CreateWeapon(struct _Instance *instance /*$s1*/, int weaponid /*$a1*/, int segment /*$s2*/)
 // line 110, offset 0x8007cbb0
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8007CBB0
		// Variables:
	// 		struct Object *weapon; // $a1

		/* begin block 1.1 */
			// Start line: 116
			// Start offset: 0x8007CBE8
			// Variables:
		// 		struct _Instance *iweapon; // $s0
		/* end block 1.1 */
		// End offset: 0x8007CC3C
		// End Line: 141
	/* end block 1 */
	// End offset: 0x8007CC6C
	// End Line: 150

	/* begin block 2 */
		// Start line: 228
	/* end block 2 */
	// End Line: 229

_Instance * HUMAN_CreateWeapon(_Instance *instance,int weaponid,int segment)

{
  int in_v0;
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0xf0) = in_v0 + -0x2544;
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) & 0xfffff7ff;
  *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) & weaponid & 0xffffff7f;
  return (_Instance *)0xffffff7f;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Init(struct _Instance *instance /*$s1*/)
 // line 155, offset 0x8007cc84
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x8007CC84
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $v0

		/* begin block 1.1 */
			// Start line: 162
			// Start offset: 0x8007CCB4
			// Variables:
		// 		int opinion; // $v0
		// 		struct _MonsterAllegiances *allegiances; // $a1
		/* end block 1.1 */
		// End offset: 0x8007CD20
		// End Line: 180
	/* end block 1 */
	// End offset: 0x8007CD4C
	// End Line: 188

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

void HUMAN_Init(_Instance *instance)

{
  uint in_a1;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0xf0) = 0x8007cb7c;
  *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x800;
  *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | in_a1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_CleanUp(struct _Instance *instance /*$a0*/)
 // line 199, offset 0x8007cd7c
	/* begin block 1 */
		// Start line: 431
	/* end block 1 */
	// End Line: 432

void HUMAN_CleanUp(_Instance *instance)

{
  uint in_v0;
  uint *unaff_s0;
  
  unaff_s0[1] = in_v0 | 0x20;
  FUN_8008cba8();
  *(undefined2 *)(unaff_s0 + 0x4d) = 0x4000;
  *unaff_s0 = *unaff_s0 | 0x2000;
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ HUMAN_Query(struct _Instance *instance /*$a0*/, unsigned long query /*$a1*/)
 // line 207, offset 0x8007cd9c
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x8007CD9C
		// Variables:
	// 		struct _MonsterVars *mv; // $a3
	// 		struct _MonsterAttributes *ma; // $v1
	// 		unsigned long ret; // $a1
	/* end block 1 */
	// End offset: 0x8007CE7C
	// End Line: 261

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

ulong HUMAN_Query(_Instance *instance,ulong query)

{
  uint in_v0;
  uint *unaff_s0;
  
  *unaff_s0 = in_v0 | 0x2000;
  return in_v0 | 0x2000;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_DeadEntry(struct _Instance *instance /*$s1*/)
 // line 266, offset 0x8007ce8c
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8007CE8C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007CED4
	// End Line: 274

	/* begin block 2 */
		// Start line: 566
	/* end block 2 */
	// End Line: 567

void HUMAN_DeadEntry(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Dead(struct _Instance *instance /*$s1*/)
 // line 287, offset 0x8007cf04
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8007CF04
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007CFD8
	// End Line: 316

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

void HUMAN_Dead(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 == 0) {
    *(undefined2 *)(unaff_s0 + 0x134) = 0x1000;
  }
  FUN_8008771c();
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_StunnedEntry(struct _Instance *instance /*$s0*/)
 // line 321, offset 0x8007cfec
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x8007CFEC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8007D050
	// End Line: 333

	/* begin block 2 */
		// Start line: 676
	/* end block 2 */
	// End Line: 677

void HUMAN_StunnedEntry(_Instance *instance)

{
  uint in_v0;
  uint uVar1;
  int unaff_s0;
  
  uVar1 = in_v0 & 2;
  if (uVar1 == 0) {
    uVar1 = FUN_80081184();
  }
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s0 + 8));
  } while (uVar1 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Stunned(struct _Instance *instance /*$s1*/)
 // line 335, offset 0x8007d064
	/* begin block 1 */
		// Start line: 336
		// Start offset: 0x8007D064
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007D0F8
	// End Line: 354

	/* begin block 2 */
		// Start line: 704
	/* end block 2 */
	// End Line: 705

void HUMAN_Stunned(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int unaff_s1;
  
  *(int *)(unaff_s1 + 0x100) = in_v0 + in_v1;
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_EmbraceEntry(struct _Instance *instance /*$s0*/)
 // line 359, offset 0x8007d10c
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x8007D10C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8007D14C
	// End Line: 367

	/* begin block 2 */
		// Start line: 752
	/* end block 2 */
	// End Line: 753

void HUMAN_EmbraceEntry(_Instance *instance)

{
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xffffffef;
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Embrace(struct _Instance *instance /*$s2*/)
 // line 370, offset 0x8007d168
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x8007D168
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct __Event *message; // $a1
	// 		int letgo; // $s3
	// 		int juice; // $s0
	/* end block 1 */
	// End offset: 0x8007D314
	// End Line: 426

	/* begin block 2 */
		// Start line: 777
	/* end block 2 */
	// End Line: 778

void HUMAN_Embrace(_Instance *instance)

{
  int iVar1;
  int unaff_s1;
  
  FUN_8007f6d8();
  iVar1 = (int)*(short *)(unaff_s1 + 0x134);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(int *)(unaff_s1 + 0x100) = iVar1 >> 0xc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_IdleEntry(struct _Instance *instance /*$a0*/)
 // line 431, offset 0x8007d330
	/* begin block 1 */
		// Start line: 432
		// Start offset: 0x8007D330
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8007D330
	// End Line: 432

	/* begin block 2 */
		// Start line: 917
	/* end block 2 */
	// End Line: 918

void HUMAN_IdleEntry(_Instance *instance)

{
  int in_v0;
  int in_v1;
  
  if (in_v1 != in_v0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(loadStatus.bigFile.searchDirID,0x1000006);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Idle(struct _Instance *instance /*$s1*/)
 // line 440, offset 0x8007d378
	/* begin block 1 */
		// Start line: 441
		// Start offset: 0x8007D378
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $a3
	// 		struct _MonsterIR *ally; // $v1
	// 		struct _MonsterIR *enemy; // $a0
	/* end block 1 */
	// End offset: 0x8007D51C
	// End Line: 491

	/* begin block 2 */
		// Start line: 935
	/* end block 2 */
	// End Line: 936

void HUMAN_Idle(_Instance *instance)

{
  void *pvVar1;
  
  pvVar1 = instance->extraData;
  FUN_8008a13c();
  *(uint *)((int)pvVar1 + 4) = *(uint *)((int)pvVar1 + 4) & 0xfffffff8;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_Flee(struct _Instance *instance /*$s1*/)
 // line 496, offset 0x8007d530
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x8007D530
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $s2

		/* begin block 1.1 */
			// Start line: 505
			// Start offset: 0x8007D588
			// Variables:
		// 		struct _MonsterAttributes *ma; // $v0
		/* end block 1.1 */
		// End offset: 0x8007D5EC
		// End Line: 517
	/* end block 1 */
	// End offset: 0x8007D670
	// End Line: 535

	/* begin block 2 */
		// Start line: 1053
	/* end block 2 */
	// End Line: 1054

void HUMAN_Flee(_Instance *instance)

{
  undefined4 in_a2;
  int in_a3;
  
  FUN_8007fc04(instance,*(undefined4 *)(in_a3 + 8),in_a2,2);
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUMAN_GetAngry()
 // line 540, offset 0x8007d688
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x8007D688
		// Variables:
	// 		struct _Instance *instance; // $s0

		/* begin block 1.1 */
			// Start line: 548
			// Start offset: 0x8007D6C4
			// Variables:
		// 		struct _MonsterVars *mv; // $v0
		// 		struct _MonsterAllegiances *allegiances; // $a0
		// 		struct _MonsterIR *mir; // $v1
		/* end block 1.1 */
		// End offset: 0x8007D72C
		// End Line: 563
	/* end block 1 */
	// End offset: 0x8007D73C
	// End Line: 565

	/* begin block 2 */
		// Start line: 1141
	/* end block 2 */
	// End Line: 1142

	/* begin block 3 */
		// Start line: 1144
	/* end block 3 */
	// End Line: 1145

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HUMAN_GetAngry(void)

{
  int in_v0;
  uint in_v1;
  uint *unaff_s0;
  
  if ((in_v0 != 0) && ((*unaff_s0 & 1) != 0)) {
    unaff_s0[1] = in_v1 & 0xfffffff7;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ HUMAN_TypeOfHuman(struct _Instance *instance /*$s0*/)
 // line 567, offset 0x8007d750
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x8007D750
		// Variables:
	// 		int type; // $v1
	// 		struct _MonsterVars *mv; // $a0
	/* end block 1 */
	// End offset: 0x8007D7AC
	// End Line: 580

	/* begin block 2 */
		// Start line: 1219
	/* end block 2 */
	// End Line: 1220

int HUMAN_TypeOfHuman(_Instance *instance)

{
  uint in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != 0) {
    in_v0 = (uint)*(ushort *)(in_v1 + 0x16) & 0xfff9;
    *(undefined2 *)(in_v1 + 0x16) = (short)in_v0;
  }
  if (*(int *)(unaff_s0 + 8) == 0) {
    return in_v0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(*(int *)(unaff_s0 + 8),1);
}





