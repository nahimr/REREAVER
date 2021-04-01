#include "THISDUST.H"
#include "CONTROL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetPhysics(struct _Instance *instance /*$s0*/, short gravity /*$a1*/, long x /*$s1*/, long y /*$s2*/, long z /*stack 16*/)
 // line 27, offset 0x8009a1b0
	/* begin block 1 */
		// Start line: 54
	/* end block 1 */
	// End Line: 55

void SetPhysics(_Instance *instance,short gravity,long x,long y,long z)

{
  uint in_v0;
  PlanningNode *pPVar1;
  int unaff_s0;
  PlanningNode *nodeToExpand;
  PlanningNode *planningPool;
  ushort uVar2;
  
  if ((nodeToExpand->connections & ~(1 << (in_v0 & 0x1f))) != 0) {
    FUN_8009a110();
    uVar2 = (ushort)((unaff_s0 - (int)planningPool) * -0x49249249 >> 2);
    *(ushort *)(unaff_s0 + 0x12) = uVar2;
    *(undefined2 *)(unaff_s0 + 0x10) = 0;
    *(ushort *)(unaff_s0 + 6) = *(ushort *)(unaff_s0 + 6) | 1;
    pPVar1 = (PlanningNode *)FUN_80099870();
    if (((pPVar1 == (PlanningNode *)0x0) ||
        (pPVar1 = (PlanningNode *)FUN_80099ec0(), pPVar1 == (PlanningNode *)0x0)) ||
       (pPVar1 = (PlanningNode *)FUN_80099ec0(), pPVar1 == (PlanningNode *)0x0)) {
      while ((PLANSRCH_ExpandNode(planningPool,nodeToExpand), pPVar1 != (PlanningNode *)0x0 &&
             (pPVar1 != nodeToExpand))) {
        pPVar1 = (PlanningNode *)FUN_80099fec();
      }
    }
    else {
      nodeToExpand->parent = uVar2;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetPhysics(struct _Instance *instance /*$s2*/, short gravity /*$s3*/)
 // line 36, offset 0x8009a224
	/* begin block 1 */
		// Start line: 37
		// Start offset: 0x8009A224
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8009A2A4
	// End Line: 45

	/* begin block 2 */
		// Start line: 75
	/* end block 2 */
	// End Line: 76

void ResetPhysics(_Instance *instance,short gravity)

{
  PlanningNode *pPVar1;
  ushort in_v1;
  undefined2 in_register_00000016;
  int unaff_s0;
  PlanningNode *nodeToExpand;
  PlanningNode *planningPool;
  ushort unaff_s3;
  
  *(undefined2 *)(unaff_s0 + 0x10) = 0;
  *(ushort *)(unaff_s0 + 6) = in_v1 | 1;
  pPVar1 = (PlanningNode *)FUN_80099870(instance,CONCAT22(in_register_00000016,gravity));
  if (((pPVar1 == (PlanningNode *)0x0) ||
      (pPVar1 = (PlanningNode *)FUN_80099ec0(), pPVar1 == (PlanningNode *)0x0)) ||
     (pPVar1 = (PlanningNode *)FUN_80099ec0(), pPVar1 == (PlanningNode *)0x0)) {
    while ((PLANSRCH_ExpandNode(planningPool,nodeToExpand), pPVar1 != (PlanningNode *)0x0 &&
           (pPVar1 != nodeToExpand))) {
      pPVar1 = (PlanningNode *)FUN_80099fec();
    }
  }
  else {
    nodeToExpand->parent = unaff_s3;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDampingPhysics(struct _Instance *instance /*$a0*/, int damping /*$a1*/)
 // line 55, offset 0x8009a2e0
	/* begin block 1 */
		// Start line: 134
	/* end block 1 */
	// End Line: 135

void SetDampingPhysics(_Instance *instance,int damping)

{
  undefined4 in_a3;
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uStack00000010;
  undefined4 in_stack_00000040;
  
  uStack00000010 = 0;
  FUN_8009a644((undefined4)_G2AnimSegValue_Type_ARRAY_800d4ff4[0].rotQuat,0,0,(int)(short)damping);
  *(undefined4 *)(unaff_s0 + 0x154) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 0x158) = in_a3;
  *(undefined4 *)(unaff_s0 + 0x15c) = in_stack_00000040;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetImpulsePhysics(struct _Instance *instance /*$t1*/, struct __Player *player /*$a1*/)
 // line 67, offset 0x8009a388
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x8009A388

		/* begin block 1.1 */
			// Start line: 70
			// Start offset: 0x8009A39C
			// Variables:
		// 		int Dot; // $a3
		// 		int vLength; // $a2
		/* end block 1.1 */
		// End offset: 0x8009A4B0
		// End Line: 87
	/* end block 1 */
	// End offset: 0x8009A4B0
	// End Line: 91

	/* begin block 2 */
		// Start line: 161
	/* end block 2 */
	// End Line: 162

	/* begin block 3 */
		// Start line: 163
	/* end block 3 */
	// End Line: 164

void SetImpulsePhysics(_Instance *instance,__Player *player)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  short unaff_s3;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  do {
    unaff_s1 = unaff_s1 + 1;
    uStack00000010 = 0;
    uStack00000014 = 0;
    FUN_8009a644((int)_G2AnimSegValue_Type_ARRAY_800d4ff4[0].rotQuat + unaff_s0,0,0,0);
    unaff_s0 = unaff_s0 + 0x14;
  } while (unaff_s1 < 4);
  *(undefined4 *)(unaff_s2 + 0x154) = 0;
  *(undefined4 *)(unaff_s2 + 0x158) = 0;
  *(undefined4 *)(unaff_s2 + 0x15c) = 0;
  *(undefined4 *)(unaff_s2 + 0x160) = 0;
  *(undefined4 *)(unaff_s2 + 0x164) = 0;
  *(int *)(unaff_s2 + 0x168) = (int)unaff_s3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDropPhysics(struct _Instance *instance /*$a0*/, struct __Player *player /*$a1*/)
 // line 110, offset 0x8009a4b8
	/* begin block 1 */
		// Start line: 257
	/* end block 1 */
	// End Line: 258

void SetDropPhysics(_Instance *instance,__Player *player)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_t0;
  int in_t1;
  
  iVar2 = (int)(player->iVelocity).y;
  iVar1 = (int)(player->iVelocity).z;
  iVar3 = in_t0 * in_t0 + iVar2 * iVar2 + iVar1 * iVar1;
  iVar1 = -in_v0 * in_t0 + -(int)*(short *)(in_t1 + 0xe2) * iVar2 +
          -(int)*(short *)(in_t1 + 0xe4) * iVar1;
  if (iVar3 != 0) {
    *(short *)(in_t1 + 0x5c) =
         *(short *)(in_t1 + 0x5c) + *(short *)(in_t1 + 0xe0) + (short)((iVar1 * in_t0) / iVar3);
    *(short *)(in_t1 + 0x5e) =
         *(short *)(in_t1 + 0x5e) +
         *(short *)(in_t1 + 0xe2) + (short)((iVar1 * (int)(player->iVelocity).y) / iVar3);
    *(short *)(in_t1 + 0x60) =
         *(short *)(in_t1 + 0x60) +
         *(short *)(in_t1 + 0xe4) + (short)((iVar1 * (int)(player->iVelocity).z) / iVar3);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitExternalForces(struct __Force *Forces /*$a0*/, int MaxForces /*$a1*/)
 // line 147, offset 0x8009a4f0
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x8009A4F0
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8009A524
	// End Line: 157

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

	/* begin block 3 */
		// Start line: 303
	/* end block 3 */
	// End Line: 304

	/* begin block 4 */
		// Start line: 305
	/* end block 4 */
	// End Line: 306

void InitExternalForces(__Force *Forces,int MaxForces)

{
  int in_v0;
  int in_v1;
  int in_a2;
  int iVar1;
  int in_a3;
  int iVar2;
  int in_t0;
  int in_t1;
  int in_t2;
  
  iVar1 = in_a2 + (int)Forces * (int)Forces + in_v1 * in_v1;
  iVar2 = in_a3 + in_t2 + -in_v0 * in_v1;
  if (iVar1 != 0) {
    *(short *)(in_t1 + 0x5c) =
         *(short *)(in_t1 + 0x5c) + *(short *)(in_t1 + 0xe0) + (short)((iVar2 * in_t0) / iVar1);
    *(short *)(in_t1 + 0x5e) =
         *(short *)(in_t1 + 0x5e) +
         *(short *)(in_t1 + 0xe2) + (short)((iVar2 * (int)*(short *)(MaxForces + 0x36e)) / iVar1);
    *(short *)(in_t1 + 0x60) =
         *(short *)(in_t1 + 0x60) +
         *(short *)(in_t1 + 0xe4) + (short)((iVar2 * (int)*(short *)(MaxForces + 0x370)) / iVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetExternalForce(struct __Force *In /*$a0*/, short x /*$a1*/, short y /*$a2*/, short z /*$a3*/, int Space /*stack 16*/, int Friction /*stack 20*/)
 // line 162, offset 0x8009a530
	/* begin block 1 */
		// Start line: 336
	/* end block 1 */
	// End Line: 337

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

void SetExternalForce(__Force *In,short x,short y,short z,int Space,int Friction)

{
  undefined2 in_register_00000016;
  undefined2 in_register_0000001a;
  int iVar1;
  undefined2 in_register_0000001e;
  int iVar2;
  int in_t0;
  int in_t1;
  int in_t4;
  
  iVar1 = CONCAT22(in_register_0000001a,y);
  iVar2 = CONCAT22(in_register_0000001e,z) + in_t4;
  *(short *)(in_t1 + 0x5c) = *(short *)(in_t1 + 0x5c) + (short)In + (short)((iVar2 * in_t0) / iVar1)
  ;
  *(short *)(in_t1 + 0x5e) =
       *(short *)(in_t1 + 0x5e) +
       *(short *)(in_t1 + 0xe2) +
       (short)((iVar2 * (int)*(short *)(CONCAT22(in_register_00000016,x) + 0x36e)) / iVar1);
  *(short *)(in_t1 + 0x60) =
       *(short *)(in_t1 + 0x60) +
       *(short *)(in_t1 + 0xe4) +
       (short)((iVar2 * (int)*(short *)(CONCAT22(in_register_00000016,x) + 0x370)) / iVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetExternalTransitionForce(struct __Force *in /*$a0*/, struct _Instance *instance /*$a1*/, int time /*$a2*/, int x /*$a3*/, int y /*stack 16*/, int z /*stack 20*/)
 // line 173, offset 0x8009a570
	/* begin block 1 */
		// Start line: 364
	/* end block 1 */
	// End Line: 365

	/* begin block 2 */
		// Start line: 366
	/* end block 2 */
	// End Line: 367

void SetExternalTransitionForce(__Force *in,_Instance *instance,int time,int x,int y,int z)

{
  int in_v0;
  int in_t1;
  
  *(short *)(in_t1 + 0x5e) =
       *(short *)(in_t1 + 0x5e) + *(short *)(in_t1 + 0xe2) + (short)(in_v0 / time);
  *(short *)(in_t1 + 0x60) =
       *(short *)(in_t1 + 0x60) +
       *(short *)(in_t1 + 0xe4) + (short)((x * (int)instance[1].shadowPosition.z) / time);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessPhysics(struct __Player *player /*$s3*/, struct __CharacterState *In /*$s2*/, int CurrentSection /*$a2*/, int Mode /*$a3*/)
 // line 188, offset 0x8009a5d8
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x8009A5D8
		// Variables:
	// 		int time; // $s1

		/* begin block 1.1 */
			// Start line: 233
			// Start offset: 0x8009A738
		/* end block 1.1 */
		// End offset: 0x8009A74C
		// End Line: 244

		/* begin block 1.2 */
			// Start line: 246
			// Start offset: 0x8009A74C
		/* end block 1.2 */
		// End offset: 0x8009A7B4
		// End Line: 258
	/* end block 1 */
	// End offset: 0x8009A7B4
	// End Line: 289

	/* begin block 2 */
		// Start line: 395
	/* end block 2 */
	// End Line: 396

	/* begin block 3 */
		// Start line: 403
	/* end block 3 */
	// End Line: 404

void ProcessPhysics(__Player *player,__CharacterState *In,int CurrentSection,int Mode)

{
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
  FUN_8009a644((undefined4)_G2AnimSegValue_Type_ARRAY_800d4ff4[0].rotQuat,In,4,0xfffffff0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApplyExternalLocalForces(struct __Player *player /*$a0*/, struct _Instance *instance /*$a1*/, struct __Force *Forces /*$a2*/, int MaxForces /*$a3*/, struct _Vector *Out /*stack 16*/)
 // line 347, offset 0x8009a7d0
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x8009A7D0
		// Variables:
	// 		int i; // $t1

		/* begin block 1.1 */
			// Start line: 385
			// Start offset: 0x8009A8D4
			// Variables:
		// 		int friction; // $a1
		/* end block 1.1 */
		// End offset: 0x8009A960
		// End Line: 394
	/* end block 1 */
	// End offset: 0x8009A970
	// End Line: 397

	/* begin block 2 */
		// Start line: 724
	/* end block 2 */
	// End Line: 725

void ApplyExternalLocalForces
               (__Player *player,_Instance *instance,__Force *Forces,int MaxForces,_Vector *Out)

{
  int iVar1;
  int *unaff_s2;
  int unaff_s3;
  undefined4 uStack00000014;
  
  FUN_800775f8(player,*(undefined4 *)(unaff_s3 + 0x368),Forces,0);
  FUN_80077ab0(*unaff_s2,0,0,0);
  iVar1 = *unaff_s2;
  if (((*(int *)(iVar1 + 0x160) == 0) && (*(int *)(iVar1 + 0x164) == 0)) &&
     (*(int *)(iVar1 + 0x168) == 0)) {
    uStack00000014 = 0;
    FUN_8009a644((undefined4)_G2AnimSegValue_Type_ARRAY_800d4ff4[0].rotQuat,0,0,0);
  }
  return;
}





