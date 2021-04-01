#include "THISDUST.H"
#include "ENMYPLAN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ENMYPLAN_InitEnemyPlanPool(void *enemyPlanPool /*$a0*/)
 // line 107, offset 0x800965a4
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x800965A4
		// Variables:
	// 		int i; // $v0
	/* end block 1 */
	// End offset: 0x800965BC
	// End Line: 117

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

	/* begin block 3 */
		// Start line: 215
	/* end block 3 */
	// End Line: 216

	/* begin block 4 */
		// Start line: 220
	/* end block 4 */
	// End Line: 221

void ENMYPLAN_InitEnemyPlanPool(void *enemyPlanPool)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *unaff_s6;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  uVar2 = getCopReg(2,10);
  *(undefined4 *)(in_v0 + 4) = uVar2;
  uVar2 = getCopReg(2,0xb);
  *(undefined4 *)(in_v0 + 8) = uVar2;
  iVar1 = FUN_80039770(in_stack_0000001c * in_stack_0000001c + in_stack_00000010 * in_stack_00000010
                       + in_stack_00000014 * in_stack_00000014 +
                       in_stack_00000018 * in_stack_00000018 + 0x800 >> 0xc);
  setCopReg(2,0x4000,0x1000000 / iVar1);
  copFunction(2,0x198003d);
  unaff_s6[3] = (short)(in_stack_0000001c * (0x1000000 / iVar1) >> 0xc);
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *unaff_s6 = (short)uVar2;
  unaff_s6[1] = (short)uVar3;
  unaff_s6[2] = (short)uVar4;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_GetNextAvailablePlanningSlot()
 // line 131, offset 0x800965c4
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x800965C4
		// Variables:
	// 		int slotID; // $a1
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800965FC
	// End Line: 143

	/* begin block 2 */
		// Start line: 263
	/* end block 2 */
	// End Line: 264

	/* begin block 3 */
		// Start line: 264
	/* end block 3 */
	// End Line: 265

	/* begin block 4 */
		// Start line: 265
	/* end block 4 */
	// End Line: 266

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ENMYPLAN_GetNextAvailablePlanningSlot(void)

{
  int in_v0;
  int iVar1;
  int in_a1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *unaff_s6;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = FUN_80039770(in_a1 + in_v0 * in_v0 + in_stack_00000014 * in_stack_00000014 +
                       in_stack_00000018 * in_stack_00000018 + 0x800 >> 0xc);
  setCopReg(2,0x4000,0x1000000 / iVar1);
  copFunction(2,0x198003d);
  iVar1 = in_stack_0000001c * (0x1000000 / iVar1) >> 0xc;
  unaff_s6[3] = (short)iVar1;
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *unaff_s6 = (short)uVar2;
  unaff_s6[1] = (short)uVar3;
  unaff_s6[2] = (short)uVar4;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_GetInitializedPlanningWorkspaceFinal()
 // line 167, offset 0x80096604
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80096604
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $s0
	// 		int slotID; // $a0
	/* end block 1 */
	// End offset: 0x8009664C
	// End Line: 181

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ENMYPLAN_GetInitializedPlanningWorkspaceFinal(void)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *unaff_s6;
  int in_stack_0000001c;
  
  setCopReg(2,0x4000,0x1000000 / in_v0);
  copFunction(2,0x198003d);
  iVar1 = in_stack_0000001c * (0x1000000 / in_v0) >> 0xc;
  unaff_s6[3] = (short)iVar1;
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *unaff_s6 = (short)uVar2;
  unaff_s6[1] = (short)uVar3;
  unaff_s6[2] = (short)uVar4;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ENMYPLAN_ReleasePlanningWorkspace(int slotID /*$s0*/)
 // line 185, offset 0x80096660
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x80096660
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $s1
	/* end block 1 */
	// End offset: 0x800966B4
	// End Line: 203

	/* begin block 2 */
		// Start line: 376
	/* end block 2 */
	// End Line: 377

void ENMYPLAN_ReleasePlanningWorkspace(int slotID)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_WayPointSkipped(struct _Position *currentPos /*$a0*/, struct _Position *targetPos /*$s0*/, struct _Position *nextTargetPos /*$s1*/)
 // line 208, offset 0x800966c8
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x800966C8
		// Variables:
	// 		long range[2]; // stack offset -40
	// 		struct _Position vector[2]; // stack offset -32

		/* begin block 1.1 */
			// Start line: 209
			// Start offset: 0x800966C8
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $v0
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _Position *_v; // $a0
		/* end block 1.1 */
		// End offset: 0x800966C8
		// End Line: 209

		/* begin block 1.2 */
			// Start line: 209
			// Start offset: 0x800966C8
			// Variables:
		// 		short _x0; // $a0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _Position *_v; // $a1
		/* end block 1.2 */
		// End offset: 0x800966C8
		// End Line: 209
	/* end block 1 */
	// End offset: 0x800967A0
	// End Line: 225

	/* begin block 2 */
		// Start line: 423
	/* end block 2 */
	// End Line: 424

int ENMYPLAN_WayPointSkipped(_Position *currentPos,_Position *targetPos,_Position *nextTargetPos)

{
  _Position *in_v1;
  _Position *p_Var1;
  
  while ((currentPos = (_Position *)&currentPos[0xf].z, p_Var1 = targetPos, (int)in_v1 < 10 &&
         (p_Var1 = in_v1, *(char *)&currentPos->x != '\0'))) {
    in_v1 = (_Position *)((int)&in_v1->x + 1);
  }
  return (int)p_Var1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_WayPointReached(struct _Position *currentPos /*$v1*/, struct _Position *oldCurrentPos /*$s1*/, struct _Position *targetPos /*$s0*/)
 // line 235, offset 0x80096834
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80096834
		// Variables:
	// 		long range[2]; // stack offset -24
	/* end block 1 */
	// End offset: 0x800968D0
	// End Line: 249

	/* begin block 2 */
		// Start line: 487
	/* end block 2 */
	// End Line: 488

int ENMYPLAN_WayPointReached(_Position *currentPos,_Position *oldCurrentPos,_Position *targetPos)

{
  short in_v0;
  short in_v1;
  short in_stack_00000020;
  short in_stack_00000022;
  
  oldCurrentPos->y = in_v0;
  oldCurrentPos->z = in_v1;
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)currentPos >> 0x10,(int)in_stack_00000020,(int)in_stack_00000022);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ENMYPLAN_Replan(struct EnemyPlanSlotData *planSlot /*$a0*/)
 // line 267, offset 0x800968e4
	/* begin block 1 */
		// Start line: 552
	/* end block 1 */
	// End Line: 553

void ENMYPLAN_Replan(EnemyPlanSlotData *planSlot)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_PathClear(struct _Position *pos /*$s1*/, struct _Position *target /*$s0*/)
 // line 274, offset 0x80096910
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80096910
		// Variables:
	// 		int len; // $a1
	// 		int oldPCO; // $s2
	// 		struct _Position *tpos; // $a1
	// 		struct _Position newTarget; // stack offset -24
	/* end block 1 */
	// End offset: 0x80096A68
	// End Line: 304

	/* begin block 2 */
		// Start line: 566
	/* end block 2 */
	// End Line: 567

int ENMYPLAN_PathClear(_Position *pos,_Position *target)

{
  short *in_a2;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)*in_a2 - (int)pos->x,(int)in_a2[1] - (int)pos->y,(int)in_a2[2] - (int)pos->z);
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_MoveToTargetFinal(struct _Instance *instance /*stack 0*/, struct _Position *outputPos /*stack 4*/, int slotID /*$a2*/, struct _Position *targetPos /*$s1*/, int validNodeTypes /*stack 16*/)
 // line 313, offset 0x80096a90
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x80096A90
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $a0
	// 		struct EnemyPlanSlotData *planSlot; // $s0
	// 		struct EnemyPlanData *planData; // $s5
	// 		int nextWayPointType; // $a0
	// 		int nextNextWayPointType; // $s2
	// 		int pathFound; // $v0
	// 		int nextWayPointIdx; // $s1
	// 		int nextNextWayPointIdx; // $s4
	// 		int nextWayPointSkip; // $a3
	// 		int i; // $v1
	// 		struct _Position *nextWayPointPos; // $s6
	// 		struct _Position *nextNextWayPointPos; // $fp
	/* end block 1 */
	// End offset: 0x80096F6C
	// End Line: 540

	/* begin block 2 */
		// Start line: 664
	/* end block 2 */
	// End Line: 665

int ENMYPLAN_MoveToTargetFinal
              (_Instance *instance,_Position *outputPos,int slotID,_Position *targetPos,
              int validNodeTypes)

{
  int iVar1;
  undefined unaff_s2;
  
  iVar1 = FUN_80099158();
  clearRect[0].y0._0_1_ = unaff_s2;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ValidSlotAndState(struct EnemyPlanSlotData *pool /*$a0*/, int slotID /*$a1*/)
 // line 542, offset 0x80096f9c
	/* begin block 1 */
		// Start line: 1206
	/* end block 1 */
	// End Line: 1207

	/* begin block 2 */
		// Start line: 1208
	/* end block 2 */
	// End Line: 1209

int ValidSlotAndState(EnemyPlanSlotData *pool,int slotID)

{
  int in_v0;
  int in_a2;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039494(pool,slotID,in_v0 - in_a2);
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_GetNodeTypeOfNextWaypoint(int slotID /*$s0*/)
 // line 555, offset 0x80096fe0
	/* begin block 1 */
		// Start line: 556
		// Start offset: 0x80096FE0
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $s1
	// 		struct EnemyPlanSlotData *planSlot; // $v0
	/* end block 1 */
	// End offset: 0x80097038
	// End Line: 568

	/* begin block 2 */
		// Start line: 1232
	/* end block 2 */
	// End Line: 1233

int ENMYPLAN_GetNodeTypeOfNextWaypoint(int slotID)

{
  undefined2 uVar1;
  int iVar2;
  int in_t4;
  int unaff_s0;
  
  uVar1 = *(undefined2 *)(in_t4 + 0x60);
  *(undefined4 *)(unaff_s0 + 0x10) = *(undefined4 *)(in_t4 + 0x5c);
  *(undefined2 *)(unaff_s0 + 0x14) = uVar1;
  switch(*(undefined *)(unaff_s0 + 1)) {
  case 0:
  case 1:
    iVar2 = 0;
    break;
  case 2:
    iVar2 = 1;
    break;
  case 3:
    iVar2 = 2;
    break;
  default:
    iVar2 = 3;
  }
  clearRect[0].y0._0_1_ = 0;
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ENMYPLAN_GetPosOfNextWaypoint(int slotID /*$s0*/, struct _Position *pos /*$s2*/)
 // line 570, offset 0x8009704c
	/* begin block 1 */
		// Start line: 571
		// Start offset: 0x8009704C
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $s1
	// 		struct EnemyPlanSlotData *planSlot; // $v1

		/* begin block 1.1 */
			// Start line: 575
			// Start offset: 0x80097080
			// Variables:
		// 		short _x1; // $a0
		// 		short _y1; // $a1
		// 		short _z1; // $v1
		// 		struct _Position *_v1; // $v1
		/* end block 1.1 */
		// End offset: 0x80097080
		// End Line: 575
	/* end block 1 */
	// End offset: 0x800970D4
	// End Line: 584

	/* begin block 2 */
		// Start line: 1270
	/* end block 2 */
	// End Line: 1271

int ENMYPLAN_GetPosOfNextWaypoint(int slotID,_Position *pos)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ENMYPLAN_RelocatePlanPositions(int slotID /*$a0*/, struct _Position *offset /*$t2*/)
 // line 641, offset 0x800970ec
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x800970EC
		// Variables:
	// 		struct EnemyPlanSlotData *pool; // $v1
	// 		struct EnemyPlanSlotData *planSlot; // $t1
	// 		struct _Position *pos; // $a0
	// 		int i; // $a3
	// 		int numWayPoints; // $v1

		/* begin block 1.1 */
			// Start line: 659
			// Start offset: 0x80097140
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $v1
		// 		short _y1; // $a1
		// 		short _z1; // $a2
		/* end block 1.1 */
		// End offset: 0x80097140
		// End Line: 659
	/* end block 1 */
	// End offset: 0x80097180
	// End Line: 663

	/* begin block 2 */
		// Start line: 1282
	/* end block 2 */
	// End Line: 1283

	/* begin block 3 */
		// Start line: 1370
	/* end block 3 */
	// End Line: 1371

void ENMYPLAN_RelocatePlanPositions(int slotID,_Position *offset)

{
  return;
}





