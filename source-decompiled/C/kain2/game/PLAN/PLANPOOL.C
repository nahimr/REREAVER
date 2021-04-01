#include "THISDUST.H"
#include "PLANPOOL.H"


// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_NumNodesInPlan(struct PlanningNode *goalNode /*$a0*/, struct PlanningNode *planningPool /*$a1*/)
 // line 122, offset 0x80099208
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x80099208
		// Variables:
	// 		struct PlanningNode *currentNode; // $a0
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x8009924C
	// End Line: 132

	/* begin block 2 */
		// Start line: 244
	/* end block 2 */
	// End Line: 245

	/* begin block 3 */
		// Start line: 245
	/* end block 3 */
	// End Line: 246

	/* begin block 4 */
		// Start line: 248
	/* end block 4 */
	// End Line: 249

int PLANPOOL_NumNodesInPlan(PlanningNode *goalNode,PlanningNode *planningPool)

{
  int iVar1;
  int iVar2;
  ushort *unaff_s1;
  ushort *unaff_s2;
  short *unaff_s3;
  undefined4 uStack00000010;
  undefined2 uStack00000018;
  short sStack0000001a;
  
  iVar1 = FUN_80039770(0x50000);
  iVar2 = ((uint)unaff_s2[2] - (uint)unaff_s1[2]) + 0x280;
  unaff_s3[2] = (short)iVar2;
  iVar2 = FUN_80039770((iVar2 * 0x20000) / 3);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar2 = iVar2 >> 4;
  uStack00000018 = (undefined2)((uint)*unaff_s2 - (uint)*unaff_s1);
  sStack0000001a = unaff_s2[1] - unaff_s1[1];
  *unaff_s3 = *unaff_s1 +
              (short)((((int)(((uint)*unaff_s2 - (uint)*unaff_s1) * 0x10000) >> 0x10) * iVar2) /
                     (iVar1 + iVar2));
  unaff_s3[1] = unaff_s1[1] + (short)(((int)sStack0000001a * iVar2) / (iVar1 + iVar2));
  uStack00000010 = 0;
  iVar1 = FUN_80098c28();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_CountBitsSetInLong(long mylong /*$a0*/)
 // line 137, offset 0x80099254
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80099254
		// Variables:
	// 		int numBitsSet; // $v1
	/* end block 1 */
	// End offset: 0x8009926C
	// End Line: 146

	/* begin block 2 */
		// Start line: 276
	/* end block 2 */
	// End Line: 277

	/* begin block 3 */
		// Start line: 277
	/* end block 3 */
	// End Line: 278

	/* begin block 4 */
		// Start line: 279
	/* end block 4 */
	// End Line: 280

int PLANPOOL_CountBitsSetInLong(long mylong)

{
  int iVar1;
  int unaff_s0;
  ushort *unaff_s1;
  ushort *unaff_s2;
  short *unaff_s3;
  undefined4 uStack00000010;
  undefined2 uStack00000018;
  short sStack0000001a;
  
  if (mylong < 0) {
    mylong = mylong + 0xf;
  }
  iVar1 = mylong >> 4;
  uStack00000018 = (undefined2)((uint)*unaff_s2 - (uint)*unaff_s1);
  sStack0000001a = unaff_s2[1] - unaff_s1[1];
  *unaff_s3 = *unaff_s1 +
              (short)((((int)(((uint)*unaff_s2 - (uint)*unaff_s1) * 0x10000) >> 0x10) * iVar1) /
                     (unaff_s0 + iVar1));
  unaff_s3[1] = unaff_s1[1] + (short)(((int)sStack0000001a * iVar1) / (unaff_s0 + iVar1));
  uStack00000010 = 0;
  iVar1 = FUN_80098c28();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_NumConnectionsExaminedForNode(struct PlanningNode *node /*$a0*/)
 // line 150, offset 0x80099274
	/* begin block 1 */
		// Start line: 302
	/* end block 1 */
	// End Line: 303

int PLANPOOL_NumConnectionsExaminedForNode(PlanningNode *node)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  short *unaff_s1;
  int unaff_s2;
  short *unaff_s3;
  undefined4 uStack00000010;
  short sStack0000001a;
  
  iVar1 = (int)&(node->pos).x + unaff_s0;
  sStack0000001a = *(short *)(unaff_s2 + 2) - unaff_s1[1];
  *unaff_s3 = *unaff_s1 + (short)(((in_v0 >> 0x10) * (int)node) / iVar1);
  unaff_s3[1] = unaff_s1[1] + (short)(((int)sStack0000001a * (int)node) / iVar1);
  uStack00000010 = 0;
  iVar1 = FUN_80098c28();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_NumConnectionsForNode(struct PlanningNode *node /*$a0*/)
 // line 158, offset 0x80099298
	/* begin block 1 */
		// Start line: 318
	/* end block 1 */
	// End Line: 319

int PLANPOOL_NumConnectionsForNode(PlanningNode *node)

{
  int iVar1;
  short in_v1;
  int in_a1;
  short in_a2;
  short *unaff_s1;
  int unaff_s2;
  short *unaff_s3;
  undefined4 uStack00000010;
  short sStack0000001a;
  
  sStack0000001a = *(short *)(unaff_s2 + 2) - in_v1;
  *unaff_s3 = *unaff_s1 + in_a2;
  unaff_s3[1] = unaff_s1[1] + (short)(((int)sStack0000001a * (int)node) / in_a1);
  uStack00000010 = 0;
  iVar1 = FUN_80098c28();
  return iVar1;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANPOOL_GetFirstNodeOfSource(struct PlanningNode *planningPool /*$a0*/, char nodeSource /*$a1*/)
 // line 177, offset 0x800992bc
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x800992BC
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80099304
	// End Line: 186

	/* begin block 2 */
		// Start line: 354
	/* end block 2 */
	// End Line: 355

	/* begin block 3 */
		// Start line: 342
	/* end block 3 */
	// End Line: 343

PlanningNode * PLANPOOL_GetFirstNodeOfSource(PlanningNode *planningPool,char nodeSource)

{
  int in_v0;
  PlanningNode *pPVar1;
  undefined3 in_register_00000015;
  int unaff_s1;
  int unaff_s3;
  undefined4 uStack00000010;
  
  *(short *)(unaff_s3 + 2) =
       *(short *)(unaff_s1 + 2) +
       (short)((in_v0 * (int)planningPool) / CONCAT31(in_register_00000015,nodeSource));
  uStack00000010 = 0;
  pPVar1 = (PlanningNode *)FUN_80098c28();
  return pPVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_NumberOfNodesOfType(struct PlanningNode *planningPool /*$a0*/, char nodeType /*$a1*/)
 // line 189, offset 0x8009930c
	/* begin block 1 */
		// Start line: 190
		// Start offset: 0x8009930C
		// Variables:
	// 		int i; // $a2
	// 		int numNodesOfType; // $v1
	/* end block 1 */
	// End offset: 0x80099350
	// End Line: 197

	/* begin block 2 */
		// Start line: 364
	/* end block 2 */
	// End Line: 365

	/* begin block 3 */
		// Start line: 367
	/* end block 3 */
	// End Line: 368

int PLANPOOL_NumberOfNodesOfType(PlanningNode *planningPool,char nodeType)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_NumberOfNodesOfSource(struct PlanningNode *planningPool /*$a0*/, char nodeSource /*$a1*/)
 // line 201, offset 0x80099358
	/* begin block 1 */
		// Start line: 202
		// Start offset: 0x80099358
		// Variables:
	// 		int i; // $a2
	// 		int numNodesOfSource; // $v1
	/* end block 1 */
	// End offset: 0x800993A0
	// End Line: 209

	/* begin block 2 */
		// Start line: 389
	/* end block 2 */
	// End Line: 390

	/* begin block 3 */
		// Start line: 392
	/* end block 3 */
	// End Line: 393

int PLANPOOL_NumberOfNodesOfSource(PlanningNode *planningPool,char nodeSource)

{
  PlanningNode *in_v0;
  undefined3 in_register_00000015;
  int in_a2;
  
  while (planningPool != in_v0) {
    planningPool = (PlanningNode *)
                   (CONCAT31(in_register_00000015,nodeSource) + (uint)planningPool->parent * 0x1c);
    in_a2 = in_a2 + 1;
    in_v0 = (PlanningNode *)
            (CONCAT31(in_register_00000015,nodeSource) + (uint)planningPool->parent * 0x1c);
  }
  return in_a2 + 1;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANPOOL_GetNodeWithID(struct PlanningNode *planningPool /*$a0*/, int type /*$a1*/, int id /*$a2*/, long suID /*$a3*/)
 // line 213, offset 0x800993a8
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x800993A8
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8009940C
	// End Line: 224

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

PlanningNode * PLANPOOL_GetNodeWithID(PlanningNode *planningPool,int type,int id,long suID)

{
  PlanningNode *pPVar1;
  
  pPVar1 = (PlanningNode *)FUN_80099368(planningPool->connections);
  return pPVar1;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANPOOL_GetNodeByPosition(struct _Position *currentPos /*$s3*/, struct PlanningNode *planningPool /*$a1*/)
 // line 230, offset 0x80099414
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x80099414
		// Variables:
	// 		int i; // $s1
	// 		unsigned long zDiff; // $v0
	// 		unsigned long minZDiff; // $s4
	// 		struct PlanningNode *returnNode; // $s2
	/* end block 1 */
	// End offset: 0x800994C4
	// End Line: 247

	/* begin block 2 */
		// Start line: 451
	/* end block 2 */
	// End Line: 452

	/* begin block 3 */
		// Start line: 456
	/* end block 3 */
	// End Line: 457

PlanningNode * PLANPOOL_GetNodeByPosition(_Position *currentPos,PlanningNode *planningPool)

{
  return (PlanningNode *)0x0;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANPOOL_GetClosestNode(struct _Position *pos /*$s1*/, struct PlanningNode *planningPool /*$a1*/, char distanceType /*$s5*/)
 // line 251, offset 0x800994e8
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x800994E8
		// Variables:
	// 		int i; // $s2
	// 		long dist; // $v1
	// 		long minDist; // $s4
	// 		struct PlanningNode *closestNode; // $s3
	/* end block 1 */
	// End offset: 0x800995C0
	// End Line: 270

	/* begin block 2 */
		// Start line: 514
	/* end block 2 */
	// End Line: 515

PlanningNode * PLANPOOL_GetClosestNode(_Position *pos,PlanningNode *planningPool,char distanceType)

{
  PlanningNode *pPVar1;
  int in_v1;
  PlanningNode *pPVar2;
  undefined3 in_register_00000019;
  int in_a3;
  int in_t0;
  
  while ((pPVar2 = (PlanningNode *)pos,
         (uint)((PlanningNode *)pos)->id != CONCAT31(in_register_00000019,distanceType) ||
         (pPVar2 = (PlanningNode *)pos, ((PlanningNode *)pos)->streamUnitID != in_a3))) {
    do {
      in_v1 = in_v1 + 1;
      pos = (_Position *)(pPVar2 + 1);
      if (in_t0 <= in_v1) {
        return (PlanningNode *)0x0;
      }
      pPVar1 = pPVar2 + 1;
      pPVar2 = (PlanningNode *)pos;
    } while ((PlanningNode *)(uint)pPVar1->nodeType != planningPool);
  }
  return (PlanningNode *)pos;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_AppropriatePair(struct PlanningNode *node1 /*$t1*/, struct PlanningNode *node2 /*$a1*/)
 // line 277, offset 0x800995e8
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x800995E8
		// Variables:
	// 		struct PlanningNode *temp; // $v0
	// 		int res; // $s0
	// 		int src; // $a0
	// 		int plc; // $v1
	// 		short type1; // $a0
	// 		short type2; // $v1
	// 		short placement1; // $t5
	// 		short placement2; // $t4
	// 		short source1; // $t2
	// 		short source2; // $t3
	/* end block 1 */
	// End offset: 0x80099748
	// End Line: 345

	/* begin block 2 */
		// Start line: 595
	/* end block 2 */
	// End Line: 596

int PLANPOOL_AppropriatePair(PlanningNode *node1,PlanningNode *node2)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANPOOL_AreTwoNodesConnected(struct PlanningNode *node1 /*$a3*/, struct PlanningNode *node2 /*$a1*/, struct PlanningNode *planningPool /*$a2*/)
 // line 350, offset 0x8009975c
	/* begin block 1 */
		// Start line: 351
		// Start offset: 0x8009975C
		// Variables:
	// 		long node2Mask; // $a0
	/* end block 1 */
	// End offset: 0x800997C4
	// End Line: 361

	/* begin block 2 */
		// Start line: 741
	/* end block 2 */
	// End Line: 742

int PLANPOOL_AreTwoNodesConnected
              (PlanningNode *node1,PlanningNode *node2,PlanningNode *planningPool)

{
  short *in_v0;
  uint uVar1;
  uint uVar2;
  uint in_a3;
  short *in_t1;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  int in_t5;
  
  if ((int)in_a3 < (int)node1) {
    in_t3 = in_a3 ^ (uint)node1 ^ in_a3;
    in_t2 = (uint)node1 ^ in_a3 ^ in_t3;
  }
  uVar1 = in_t4 | in_t5 << 8;
  uVar2 = in_t3 | in_t2 << 8;
  if (uVar1 == 3) {
    if (uVar2 != 0x404) {
      return 0;
    }
    return 1;
  }
  if ((int)uVar1 < 4) {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (uVar1 == 0x103) {
      return 0;
    }
    if (0x103 < (int)uVar1) {
      if (uVar1 == 0x203) {
        return 0;
      }
      return 1;
    }
    if (uVar1 != 0x102) {
      return 1;
    }
  }
  if (uVar2 == 0x404) {
    if (((int)in_t1[2] < (int)in_v0[2]) && ((int)in_v0[2] < (int)in_t1[2] + 800)) {
                    /* WARNING: Subroutine does not return */
      FUN_80039564((int)*in_t1 - (int)*in_v0,(int)in_t1[1] - (int)in_v0[1]);
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLANPOOL_MarkTwoNodesAsConnected(struct PlanningNode *node1 /*$s1*/, struct PlanningNode *node2 /*$a1*/, struct PlanningNode *planningPool /*$a2*/)
 // line 365, offset 0x800997cc
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x800997CC
		// Variables:
	// 		int node1Index; // $s2
	// 		int node2Index; // $s0
	/* end block 1 */
	// End offset: 0x80099874
	// End Line: 377

	/* begin block 2 */
		// Start line: 773
	/* end block 2 */
	// End Line: 774

void PLANPOOL_MarkTwoNodesAsConnected
               (PlanningNode *node1,PlanningNode *node2,PlanningNode *planningPool)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLANPOOL_MarkTwoNodesAsNotConnected(struct PlanningNode *node1 /*$a0*/, struct PlanningNode *node2 /*$a1*/, struct PlanningNode *planningPool /*$a2*/)
 // line 393, offset 0x800998c8
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x800998C8
	/* end block 1 */
	// End offset: 0x800998C8
	// End Line: 396

	/* begin block 2 */
		// Start line: 856
	/* end block 2 */
	// End Line: 857

	/* begin block 3 */
		// Start line: 857
	/* end block 3 */
	// End Line: 858

	/* begin block 4 */
		// Start line: 858
	/* end block 4 */
	// End Line: 859

void PLANPOOL_MarkTwoNodesAsNotConnected
               (PlanningNode *node1,PlanningNode *node2,PlanningNode *planningPool)

{
  return;
}



// decompiled code
// original method signature: 
// struct PlanningNode * /*$ra*/ PLANPOOL_GetClosestUnexploredValidNeighbor(struct PlanningNode *startNode /*$s1*/, struct PlanningNode *planningPool /*$s6*/)
 // line 415, offset 0x80099924
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x80099924
		// Variables:
	// 		int i; // $s3
	// 		unsigned long connectionStatus; // $s2
	// 		unsigned long dist; // $v1
	// 		unsigned long minDist; // $s5
	// 		struct PlanningNode *returnNode; // $s4
	/* end block 1 */
	// End offset: 0x80099A0C
	// End Line: 444

	/* begin block 2 */
		// Start line: 908
	/* end block 2 */
	// End Line: 909

PlanningNode *
PLANPOOL_GetClosestUnexploredValidNeighbor(PlanningNode *startNode,PlanningNode *planningPool)

{
  int iVar1;
  PlanningNode *pPVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_a2;
  uint uVar5;
  int unaff_s1;
  int unaff_s2;
  
  uVar5 = (int)((int)planningPool - in_a2) * -0x49249249 >> 2;
  iVar1 = FUN_800398e0();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  uVar4 = (undefined2)iVar1;
  if (0x10000 < iVar1) {
    uVar4 = 0;
  }
  uVar3 = 1 << (uVar5 & 0x1f);
  *(undefined2 *)
   (uVar5 * 2 + unaff_s2 * 0x40 + *(int *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 0x10)) =
       uVar4;
  pPVar2 = (PlanningNode *)(*(uint *)(unaff_s1 + 8) | uVar3);
  *(PlanningNode **)(unaff_s1 + 8) = pPVar2;
  *(uint *)(unaff_s1 + 0xc) = *(uint *)(unaff_s1 + 0xc) | uVar3;
  return pPVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PLANPOOL_ChangeNodePosition(struct _Position *newPos /*$t0*/, struct PlanningNode *nodeToChange /*$a1*/, struct PlanningNode *planningPool /*$a2*/)
 // line 451, offset 0x80099a34
	/* begin block 1 */
		// Start line: 452
		// Start offset: 0x80099A34
		// Variables:
	// 		int i; // $a0
	// 		unsigned char nodeToChangeMask; // $v1
	/* end block 1 */
	// End offset: 0x80099AE4
	// End Line: 469

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

void PLANPOOL_ChangeNodePosition
               (_Position *newPos,PlanningNode *nodeToChange,PlanningNode *planningPool)

{
  undefined4 in_v0;
  int iVar1;
  PlanningNode *pPVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined4 *)(newPos + 2) = in_v0;
  if (newPos != (_Position *)0x0) {
    uVar3 = *(uint *)&newPos[1].y;
    iVar4 = 0;
    pPVar2 = nodeToChange;
    if (*(char *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1) != '\0') {
      do {
        if ((uVar3 & 1) == 0) {
          iVar1 = FUN_800996fc(newPos,pPVar2);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_80039494((int)newPos->x - (int)(pPVar2->pos).x,(int)newPos->y - (int)(pPVar2->pos).y
                         ,(int)newPos->z - (int)(pPVar2->pos).z);
          }
          FUN_800999dc(newPos,pPVar2,nodeToChange);
        }
        uVar3 = uVar3 >> 1;
        iVar4 = iVar4 + 1;
        pPVar2 = pPVar2 + 1;
      } while (iVar4 < (int)(uint)*(byte *)(_G2AnimSegValue_Type_ARRAY_800d4f7c[4]._20_4_ + 1));
    }
  }
  return;
}



// autogenerated function stub: 
// struct PlanningNode * /*$ra*/ PLANPOOL_AddNodeToPool(struct _Position *pos /*$t2*/, struct PlanningNode *planningPool /*$t3*/, short nodeType /*$a2*/, short nodeID /*$a3*/, long streamUnitID /*stack 16*/)
struct PlanningNode * PLANPOOL_AddNodeToPool(struct _Position *pos, struct PlanningNode *planningPool, short nodeType, short nodeID, long streamUnitID)
{ // line 472, offset 0x80099aec
	/* begin block 1 */
		// Start line: 473
		// Start offset: 0x80099AEC
		// Variables:
			struct PlanningNode *nextAvailableNode; // $t0
			int i; // $a1

		/* begin block 1.1 */
			// Start line: 479
			// Start offset: 0x80099B0C
			// Variables:
				short _x1; // $v1
				short _y1; // $a0
				short _z1; // $a1
		/* end block 1.1 */
		// End offset: 0x80099B0C
		// End Line: 479
	/* end block 1 */
	// End offset: 0x80099BD8
	// End Line: 499

	/* begin block 2 */
		// Start line: 1054
	/* end block 2 */
	// End Line: 1055

	return null;
}


// decompiled code
// original method signature: 
// void /*$ra*/ PLANPOOL_DeleteNodeFromPool(struct PlanningNode *nodeToDelete /*$a0*/, struct PlanningNode *planningPool /*$a1*/)
 // line 510, offset 0x80099be0
	/* begin block 1 */
		// Start line: 512
		// Start offset: 0x80099BE0
		// Variables:
	// 		int indexOfNodeToDelete; // $t3
	// 		int lastNodeIndex; // $t2
	// 		long oldConnectionMask; // $v1
	// 		long newConnectionMask; // $a3
	// 		int i; // $a2
	// 		struct PlanningNode *lastNode; // $v0
	/* end block 1 */
	// End offset: 0x80099DA4
	// End Line: 556

	/* begin block 2 */
		// Start line: 1146
	/* end block 2 */
	// End Line: 1147

	/* begin block 3 */
		// Start line: 1147
	/* end block 3 */
	// End Line: 1148

	/* begin block 4 */
		// Start line: 1152
	/* end block 4 */
	// End Line: 1153

void PLANPOOL_DeleteNodeFromPool(PlanningNode *nodeToDelete,PlanningNode *planningPool)

{
  uint in_v1;
  int in_a2;
  int in_a3;
  
  while( true ) {
    *(uint *)(in_a2 + 0xc) = in_v1;
    if ((int)(uint)*(byte *)(in_a3 + 1) <= (int)nodeToDelete) break;
    nodeToDelete = (PlanningNode *)((int)&(nodeToDelete->pos).x + 1);
    in_v1 = *(uint *)(in_a2 + 0x28) & (uint)planningPool;
    *(uint *)(in_a2 + 0x24) = *(uint *)(in_a2 + 0x24) & (uint)planningPool;
    in_a2 = in_a2 + 0x1c;
  }
  return;
}





