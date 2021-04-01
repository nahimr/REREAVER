#include "THISDUST.H"
#include "PLAN.H"


// decompiled code
// original method signature: 
// long /*$ra*/ PLAN_CalcMinDistFromExistingNodes(struct _Position *pos /*$s0*/, struct PlanningNode *planningPool /*$a1*/, int distanceType /*$s1*/)
 // line 129, offset 0x80097188
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80097188
		// Variables:
	// 		struct PlanningNode *closestNode; // $a2
	// 		long minDist; // $v0
	/* end block 1 */
	// End offset: 0x80097210
	// End Line: 148

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

long PLAN_CalcMinDistFromExistingNodes(_Position *pos,PlanningNode *planningPool,int distanceType)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_v0;
  int in_v1;
  undefined2 *puVar3;
  undefined2 *unaff_s2;
  
  puVar3 = (undefined2 *)(in_v1 + in_v0 + 0x26);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *unaff_s2 = *puVar3;
  unaff_s2[1] = uVar1;
  unaff_s2[2] = uVar2;
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_UpdatePlanMkrNodes(struct PlanningNode *planningPool /*stack 0*/, struct _Position *playerPos /*$fp*/)
 // line 158, offset 0x80097224
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x80097224
		// Variables:
	// 		int i; // $s4
	// 		int d; // stack offset -48
	// 		long zDiff; // $v1
	// 		struct _StreamUnit *streamUnit; // $s7

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x80097288
			// Variables:
		// 		int numPlanMkrs; // $s5
		// 		struct _PlanMkr *planMkr; // $s2
		// 		long suID; // stack offset -44

			/* begin block 1.1.1 */
				// Start line: 181
				// Start offset: 0x800972F8
				// Variables:
			// 		long nodeType; // $s0
			// 		long nodeID; // $s3
			/* end block 1.1.1 */
			// End offset: 0x8009736C
			// End Line: 203
		/* end block 1.1 */
		// End offset: 0x80097380
		// End Line: 206
	/* end block 1 */
	// End offset: 0x80097440
	// End Line: 221

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

void PLAN_UpdatePlanMkrNodes(PlanningNode *planningPool,_Position *playerPos)

{
  short sVar1;
  short sVar2;
  int in_a3;
  int in_t0;
  int in_t1;
  short *in_t2;
  
  while( true ) {
    sVar1 = in_t2[1];
    sVar2 = in_t2[2];
    (planningPool->pos).x = (planningPool->pos).x + *in_t2;
    (planningPool->pos).y = (planningPool->pos).y + sVar1;
    (planningPool->pos).z = (planningPool->pos).z + sVar2;
    if (in_a3 < 1) break;
    in_t0 = in_t0 + -6;
    in_a3 = in_a3 + -1;
    planningPool = (PlanningNode *)(in_t1 + in_t0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_UpdatePlayerNode(struct PlanningNode *planningPool /*$s3*/, struct _Position *playerPos /*$s2*/)
 // line 226, offset 0x80097470
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x80097470
		// Variables:
	// 		struct PlanningNode *playerNode; // $s1
	// 		int nodePlacement; // stack offset -32
	// 		int foundHit; // $s0
	// 		struct _PlanCollideInfo pci; // stack offset -48

		/* begin block 1.1 */
			// Start line: 245
			// Start offset: 0x800974D8
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a3
		// 		struct _Position *_v0; // $s0
		/* end block 1.1 */
		// End offset: 0x800974D8
		// End Line: 245
	/* end block 1 */
	// End offset: 0x800975A8
	// End Line: 265

	/* begin block 2 */
		// Start line: 539
	/* end block 2 */
	// End Line: 540

void PLAN_UpdatePlayerNode(PlanningNode *planningPool,_Position *playerPos)

{
  int iVar1;
  short *unaff_s8;
  short *in_stack_00000048;
  
  iVar1 = 0;
  if (*(char *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) != '\0') {
    do {
      if ((in_stack_00000048[10] & 7U) == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_80039564((int)*in_stack_00000048 - (int)*unaff_s8,
                     (int)in_stack_00000048[1] - (int)unaff_s8[1]);
      }
      iVar1 = iVar1 + 1;
      in_stack_00000048 = in_stack_00000048 + 0xe;
    } while (iVar1 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_AddRandomNode(struct PlanningNode *planningPool /*$s5*/, struct _Position *playerPos /*$s0*/)
 // line 273, offset 0x800975c4
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800975C4
		// Variables:
	// 		int i; // $s2
	// 		struct _PlanCollideInfo pci; // stack offset -56
	// 		int successFlag; // $s4

		/* begin block 1.1 */
			// Start line: 282
			// Start offset: 0x80097600
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _Position *_v0; // $s1
		/* end block 1.1 */
		// End offset: 0x80097600
		// End Line: 282

		/* begin block 1.2 */
			// Start line: 301
			// Start offset: 0x8009771C

			/* begin block 1.2.1 */
				// Start line: 307
				// Start offset: 0x8009775C
				// Variables:
			// 		struct _SVector normal; // stack offset -40
			/* end block 1.2.1 */
			// End offset: 0x800977AC
			// End Line: 313
		/* end block 1.2 */
		// End offset: 0x800977AC
		// End Line: 314
	/* end block 1 */
	// End offset: 0x800977AC
	// End Line: 315

	/* begin block 2 */
		// Start line: 643
	/* end block 2 */
	// End Line: 644

void PLAN_AddRandomNode(PlanningNode *planningPool,_Position *playerPos)

{
  int iVar1;
  short *unaff_s1;
  short *unaff_s2;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 in_stack_00000018;
  short sStack00000024;
  ushort in_stack_00000028;
  
  sStack00000024 = unaff_s2[2];
  uStack00000010 = 0;
  uStack00000014 = 5;
  iVar1 = FUN_80098e98();
  if (iVar1 != 0) {
    FUN_80099b48(&stack0x00000020);
    unaff_s1[10] = (ushort)(((uint)in_stack_00000028 & 3) << 3) | 1;
    *(undefined4 *)(unaff_s1 + 0xc) = in_stack_00000018;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)*unaff_s2 - (int)*unaff_s1,(int)unaff_s2[1] - (int)unaff_s1[1],
               (int)unaff_s2[2] - (int)unaff_s1[2]);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_DeleteRandomNode(struct PlanningNode *planningPool /*$s0*/)
 // line 321, offset 0x800977d0
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x800977D0
	/* end block 1 */
	// End offset: 0x800977D0
	// End Line: 322

	/* begin block 2 */
		// Start line: 773
	/* end block 2 */
	// End Line: 774

void PLAN_DeleteRandomNode(PlanningNode *planningPool)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  uStack00000010 = 0;
  uStack00000014 = 0;
  iVar1 = FUN_80098e98(&stack0x00000018,0,0x100,0xfffff830);
  if (iVar1 == 0) {
    uStack00000010 = 0;
    uStack00000014 = 0;
    iVar1 = FUN_80098e98(&stack0x00000018,0,2000,0);
    if (iVar1 == 0) {
      return;
    }
  }
  piVar2 = (int *)FUN_80059340(in_stack_00000018);
                    /* WARNING: Subroutine does not return */
  FUN_8001e6b4((int)*(short *)(in_stack_0000001c + 8),*(undefined4 *)(*piVar2 + 0x24),
               &stack0x00000028);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_DeleteOutOfRangeNodesOfSource(struct PlanningNode *planningPool /*$s3*/, struct _Position *playerPos /*$s2*/, int nodeSourceToCheck /*$s4*/, long removeDist /*$s5*/)
 // line 332, offset 0x80097804
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x80097804
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800978B8
	// End Line: 345

	/* begin block 2 */
		// Start line: 795
	/* end block 2 */
	// End Line: 796

	/* begin block 3 */
		// Start line: 799
	/* end block 3 */
	// End Line: 800

void PLAN_DeleteOutOfRangeNodesOfSource
               (PlanningNode *planningPool,_Position *playerPos,int nodeSourceToCheck,
               long removeDist)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  uStack00000014 = 0;
  iVar1 = FUN_80098e98();
  if (iVar1 == 0) {
    uStack00000014 = 0;
    iVar1 = FUN_80098e98(&stack0x00000018,0,2000,0);
    if (iVar1 == 0) {
      return;
    }
  }
  piVar2 = (int *)FUN_80059340(in_stack_00000018);
                    /* WARNING: Subroutine does not return */
  FUN_8001e6b4((int)*(short *)(in_stack_0000001c + 8),*(undefined4 *)(*piVar2 + 0x24),
               &stack0x00000028);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_AddOrRemoveRandomNodes(struct PlanningNode *planningPool /*$a0*/, struct _Position *playerPos /*$a1*/)
 // line 348, offset 0x800978dc
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x800978DC
		// Variables:
	// 		int numNodeError; // $v0
	/* end block 1 */
	// End offset: 0x8009791C
	// End Line: 360

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

	/* begin block 3 */
		// Start line: 836
	/* end block 3 */
	// End Line: 837

void PLAN_AddOrRemoveRandomNodes(PlanningNode *planningPool,_Position *playerPos)

{
  uint in_a2;
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) != '\0') {
    do {
      if (((uint)planningPool->nodeType & 7) == in_a2) {
                    /* WARNING: Subroutine does not return */
        FUN_80039494((int)playerPos->x - (int)(planningPool->pos).x,
                     (int)playerPos->y - (int)(planningPool->pos).y,
                     (int)playerPos->z - (int)(planningPool->pos).z);
      }
      iVar1 = iVar1 + 1;
      planningPool = planningPool + 1;
    } while (iVar1 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_AddInitialNodes(struct PlanningNode *planningPool /*$s3*/, struct _Instance *player /*$s2*/)
 // line 372, offset 0x8009792c
	/* begin block 1 */
		// Start line: 373
		// Start offset: 0x8009792C
		// Variables:
	// 		struct _PlanCollideInfo pci; // stack offset -40

		/* begin block 1.1 */
			// Start line: 373
			// Start offset: 0x8009792C
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $t0
		// 		struct _Position *_v0; // $s0
		// 		struct _Position *_v1; // $s1
		/* end block 1.1 */
		// End offset: 0x8009792C
		// End Line: 373
	/* end block 1 */
	// End offset: 0x8009792C
	// End Line: 373

	/* begin block 2 */
		// Start line: 884
	/* end block 2 */
	// End Line: 885

void PLAN_AddInitialNodes(PlanningNode *planningPool,_Instance *player)

{
  uint in_v0;
  short *unaff_s0;
  int unaff_s1;
  short *unaff_s2;
  uint unaff_s4;
  
  while( true ) {
    if ((in_v0 & 7) == unaff_s4) {
                    /* WARNING: Subroutine does not return */
      FUN_80039494((int)*unaff_s2 - (int)*unaff_s0,(int)unaff_s2[1] - (int)unaff_s0[1],
                   (int)unaff_s2[2] - (int)unaff_s0[2]);
    }
    unaff_s1 = unaff_s1 + 1;
    if ((int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) <= unaff_s1) break;
    in_v0 = (uint)(ushort)unaff_s0[0x18];
    unaff_s0 = unaff_s0 + 0xe;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLAN_AddOrRemoveNodes(struct PlanningNode *planningPool /*$s1*/, struct _Instance *player /*$s2*/)
 // line 385, offset 0x800979e8
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x800979E8
	/* end block 1 */
	// End offset: 0x80097AAC
	// End Line: 399

	/* begin block 2 */
		// Start line: 918
	/* end block 2 */
	// End Line: 919

	/* begin block 3 */
		// Start line: 921
	/* end block 3 */
	// End Line: 922

void PLAN_AddOrRemoveNodes(PlanningNode *planningPool,_Instance *player)

{
  FUN_800978a8();
  return;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLAN_FindNodeMostInNeedOfConnectivityExpansion(struct PlanningNode *planningPool /*$a0*/)
 // line 405, offset 0x80097ad0
	/* begin block 1 */
		// Start line: 406
		// Start offset: 0x80097AD0
		// Variables:
	// 		int i; // $s2
	// 		int numConnections; // $s1
	// 		int minNumConnections; // $s4
	// 		struct PlanningNode *nodeToReturn; // $s3
	/* end block 1 */
	// End offset: 0x80097B68
	// End Line: 423

	/* begin block 2 */
		// Start line: 961
	/* end block 2 */
	// End Line: 962

	/* begin block 3 */
		// Start line: 966
	/* end block 3 */
	// End Line: 967

PlanningNode * PLAN_FindNodeMostInNeedOfConnectivityExpansion(PlanningNode *planningPool)

{
  int in_v0;
  int in_a1;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)*(short *)(in_a1 + 0x5c) - (int)*(short *)(in_v0 + 2),
               (int)*(short *)(in_a1 + 0x5e) - (int)*(short *)(in_v0 + 4),
               (int)*(short *)(in_a1 + 0x60) - (int)*(short *)(in_v0 + 6));
}





