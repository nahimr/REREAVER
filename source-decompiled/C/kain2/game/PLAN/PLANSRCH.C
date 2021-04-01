#include "THISDUST.H"
#include "PLANSRCH.H"


// decompiled code
// original method signature: 
// int /*$ra*/ PLANSRCH_ValidNode(struct PlanningNode *node /*$a0*/, int validNodeTypes /*$a1*/)
 // line 78, offset 0x80099dac
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80099DAC
		// Variables:
	// 		int nodeTypeFlag; // $v1
	/* end block 1 */
	// End offset: 0x80099DAC
	// End Line: 80

	/* begin block 2 */
		// Start line: 156
	/* end block 2 */
	// End Line: 157

	/* begin block 3 */
		// Start line: 157
	/* end block 3 */
	// End Line: 158

int PLANSRCH_ValidNode(PlanningNode *node,int validNodeTypes)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_v1;
  uint uVar4;
  int in_a2;
  int iVar5;
  uint in_a3;
  int in_t2;
  int in_t3;
  
  do {
    uVar4 = *(uint *)(validNodeTypes + 8);
    uVar1 = uVar4 | in_a3;
    if ((uVar4 & in_v1) == 0) {
      uVar1 = uVar4 & ~in_a3;
    }
    *(uint *)(validNodeTypes + 8) = uVar1;
    uVar4 = *(uint *)(validNodeTypes + 0xc);
    *(uint *)(validNodeTypes + 8) = *(uint *)(validNodeTypes + 8) & ~in_v1;
    uVar1 = uVar4 | in_a3;
    if ((uVar4 & in_v1) == 0) {
      uVar1 = uVar4 & ~in_a3;
    }
    *(uint *)(validNodeTypes + 0xc) = uVar1;
    in_a2 = in_a2 + 1;
    *(uint *)(validNodeTypes + 0xc) = *(uint *)(validNodeTypes + 0xc) & ~in_v1;
    iVar3 = _G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_;
    validNodeTypes = validNodeTypes + 0x1c;
  } while (in_a2 < (int)((uint)*(byte *)((int)&(node->pos).x + 1) - 1));
  iVar5 = 0;
  if (0 < (int)((uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) - 1)) {
    do {
      *(undefined2 *)(iVar5 * 2 + in_t3 * 0x40 + *(int *)(iVar3 + 0x10)) =
           *(undefined2 *)(iVar5 * 2 + in_t2 * 0x40 + *(int *)(iVar3 + 0x10));
      iVar2 = iVar5 * 0x40 + *(int *)(iVar3 + 0x10);
      *(undefined2 *)(in_t3 * 2 + iVar2) = *(undefined2 *)(in_t2 * 2 + iVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)((uint)*(byte *)(iVar3 + 1) - 1));
  }
  iVar3 = (uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) - 1;
  *(undefined *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) = (char)iVar3;
  return iVar3;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANSRCH_FindNodeToExpand(struct PlanningNode *planningPool /*$a0*/, struct PlanningNode *goalNode /*$s5*/, int validNodeTypes /*$s6*/)
 // line 92, offset 0x80099dc4
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x80099DC4
		// Variables:
	// 		int i; // $s2
	// 		struct PlanningNode *nodeToExpand; // $s3
	// 		unsigned long bestValueSoFar; // $s4
	// 		unsigned long valueForCurrentNode; // $v1
	// 		struct PlanningNode *currentNode; // $s1
	/* end block 1 */
	// End offset: 0x80099EAC
	// End Line: 116

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 190
	/* end block 3 */
	// End Line: 191

PlanningNode *
PLANSRCH_FindNodeToExpand(PlanningNode *planningPool,PlanningNode *goalNode,int validNodeTypes)

{
  int iVar1;
  uint in_v0;
  uint uVar2;
  int iVar3;
  PlanningNode *pPVar4;
  uint in_v1;
  uint uVar5;
  int iVar6;
  uint in_a3;
  uint in_t0;
  uint in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  
  while( true ) {
    uVar2 = (uint)planningPool | in_a3;
    if (in_v0 == 0) {
      uVar2 = (uint)planningPool & in_t1;
    }
    goalNode->connectionStatus = uVar2;
    uVar5 = goalNode->connections;
    goalNode->connectionStatus = goalNode->connectionStatus & in_t0;
    uVar2 = uVar5 | in_a3;
    if ((uVar5 & in_v1) == 0) {
      uVar2 = uVar5 & in_t1;
    }
    goalNode->connections = uVar2;
    validNodeTypes = validNodeTypes + 1;
    goalNode->connections = goalNode->connections & in_t0;
    iVar1 = _G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_;
    if ((int)((uint)*(byte *)(in_t4 + 1) - 1) <= validNodeTypes) break;
    planningPool = (PlanningNode *)goalNode[1].connectionStatus;
    in_v0 = (uint)planningPool & in_v1;
    goalNode = goalNode + 1;
  }
  iVar6 = 0;
  if (0 < (int)((uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) - 1)) {
    do {
      *(undefined2 *)(iVar6 * 2 + in_t3 * 0x40 + *(int *)(iVar1 + 0x10)) =
           *(undefined2 *)(iVar6 * 2 + in_t2 * 0x40 + *(int *)(iVar1 + 0x10));
      iVar3 = iVar6 * 0x40 + *(int *)(iVar1 + 0x10);
      *(undefined2 *)(in_t3 * 2 + iVar3) = *(undefined2 *)(in_t2 * 2 + iVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)((uint)*(byte *)(iVar1 + 1) - 1));
  }
  pPVar4 = (PlanningNode *)((uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) - 1);
  *(undefined *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) = (char)pPVar4;
  return pPVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLANSRCH_ExpandNode(struct PlanningNode *planningPool /*$a2*/, struct PlanningNode *nodeToExpand /*$a1*/)
 // line 123, offset 0x80099ed8
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x80099ED8
		// Variables:
	// 		int i; // $t0
	// 		int connectionStatus; // $t2
	// 		int connections; // $t1
	// 		int nodeToExpandIndex; // $t3

		/* begin block 1.1 */
			// Start line: 138
			// Start offset: 0x80099F58
			// Variables:
		// 		long newCost; // $a0
		/* end block 1.1 */
		// End offset: 0x80099FD0
		// End Line: 153
	/* end block 1 */
	// End offset: 0x80099FF4
	// End Line: 159

	/* begin block 2 */
		// Start line: 279
	/* end block 2 */
	// End Line: 280

void PLANSRCH_ExpandNode(PlanningNode *planningPool,PlanningNode *nodeToExpand)

{
  int iVar1;
  PlanningNode *pPVar2;
  int iVar3;
  
  iVar3 = 0;
  pPVar2 = planningPool;
  if (*(char *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) != '\0') {
    do {
      iVar1 = FUN_80099ec0(pPVar2);
      if (((iVar1 != 0) && ((planningPool->flags & 1) != 0)) && ((planningPool->flags & 2) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_80039494((int)(pPVar2->pos).x - (int)(nodeToExpand->pos).x,
                     (int)(planningPool->pos).y - (int)(nodeToExpand->pos).y,
                     (int)(planningPool->pos).z - (int)(nodeToExpand->pos).z);
      }
      planningPool = planningPool + 1;
      iVar3 = iVar3 + 1;
      pPVar2 = pPVar2 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLANSRCH_InitNodesForSearch(struct PlanningNode *planningPool /*$a0*/)
 // line 163, offset 0x80099ffc
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x80099FFC
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8009A040
	// End Line: 173

	/* begin block 2 */
		// Start line: 397
	/* end block 2 */
	// End Line: 398

	/* begin block 3 */
		// Start line: 398
	/* end block 3 */
	// End Line: 399

	/* begin block 4 */
		// Start line: 400
	/* end block 4 */
	// End Line: 401

void PLANSRCH_InitNodesForSearch(PlanningNode *planningPool)

{
  undefined2 uVar1;
  int iVar2;
  int in_a1;
  int in_a2;
  int in_t0;
  uint uVar3;
  uint in_t2;
  int iVar4;
  
  iVar2 = _G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_;
  uVar3 = *(uint *)(in_a1 + 0xc);
  *(ushort *)(in_a1 + 6) = *(ushort *)(in_a1 + 6) | 2;
  iVar4 = (int)planningPool * -0x49249249 >> 2;
  if (*(char *)(iVar2 + 1) != '\0') {
    do {
      if (((((in_t2 & 1) != 0) && ((uVar3 & 1) != 0)) && (in_a2 != in_a1)) &&
         ((iVar2 = (uint)*(ushort *)(in_a1 + 0x10) +
                   (int)*(short *)(in_t0 * 2 + iVar4 * 0x40 + *(int *)(iVar2 + 0x10)),
          (*(ushort *)(in_a2 + 6) & 1) == 0 || (iVar2 < (int)(uint)*(ushort *)(in_a2 + 0x10))))) {
        *(undefined2 *)(in_a2 + 0x12) = (short)iVar4;
        if (iVar2 < -0x7fff) {
          iVar2 = -0x7fff;
        }
        uVar1 = (undefined2)iVar2;
        if (0x7fff < iVar2) {
          uVar1 = 0x7fff;
        }
        *(undefined2 *)(in_a2 + 0x10) = uVar1;
        *(ushort *)(in_a2 + 6) = *(ushort *)(in_a2 + 6) | 1;
      }
      in_t2 = (int)in_t2 >> 1;
      uVar3 = (int)uVar3 >> 1;
      in_t0 = in_t0 + 1;
      in_a2 = in_a2 + 0x1c;
      iVar2 = _G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_;
    } while (in_t0 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1));
  }
  return;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANSRCH_FindPathInGraph(struct PlanningNode *planningPool /*$s2*/, struct PlanningNode *startNode /*$s0*/, struct PlanningNode *goalNode /*$s1*/, int validNodeTypes /*$s4*/)
 // line 184, offset 0x8009a048
	/* begin block 1 */
		// Start line: 185
		// Start offset: 0x8009A048
		// Variables:
	// 		struct PlanningNode *nodeToExpand; // $v0
	/* end block 1 */
	// End offset: 0x8009A190
	// End Line: 220

	/* begin block 2 */
		// Start line: 444
	/* end block 2 */
	// End Line: 445

PlanningNode *
PLANSRCH_FindPathInGraph
          (PlanningNode *planningPool,PlanningNode *startNode,PlanningNode *goalNode,
          int validNodeTypes)

{
  bool bVar1;
  int in_v0;
  ushort uVar2;
  int iVar3;
  int in_t0;
  uint in_t1;
  uint in_t2;
  
  do {
    if (((((in_t2 & 1) != 0) && ((in_t1 & 1) != 0)) && (goalNode != startNode)) &&
       ((iVar3 = (uint)startNode->cost +
                 (int)*(short *)(in_t0 * 2 + (in_v0 >> 2) * 0x40 + *(int *)(validNodeTypes + 0x10)),
        (goalNode->flags & 1) == 0 || (iVar3 < (int)(uint)goalNode->cost)))) {
      goalNode->parent = (ushort)(in_v0 >> 2);
      if (iVar3 < -0x7fff) {
        iVar3 = -0x7fff;
      }
      uVar2 = (ushort)iVar3;
      if (0x7fff < iVar3) {
        uVar2 = 0x7fff;
      }
      goalNode->cost = uVar2;
      goalNode->flags = goalNode->flags | 1;
    }
    in_t2 = (int)in_t2 >> 1;
    in_t1 = (int)in_t1 >> 1;
    in_t0 = in_t0 + 1;
    bVar1 = in_t0 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1);
    goalNode = goalNode + 1;
    validNodeTypes = _G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_;
  } while (bVar1);
  return (PlanningNode *)(uint)bVar1;
}





