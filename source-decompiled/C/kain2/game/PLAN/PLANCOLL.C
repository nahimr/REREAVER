#include "THISDUST.H"
#include "PLANCOLL.H"


// decompiled code
// original method signature: 
// int /*$ra*/ PLANCOLL_DoesLOSExistFinal(struct _Position *startPos /*$a0*/, struct _Position *endPos /*$a1*/, int collideType /*$a2*/, int passThroughHit /*$s0*/, int zoffset /*stack 16*/)
 // line 75, offset 0x80098b14
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x80098B14
		// Variables:
	// 		struct _PCollideInfo pcollideinfo; // stack offset -72
	// 		struct SVECTOR startPt; // stack offset -24
	// 		struct SVECTOR endPt; // stack offset -16

		/* begin block 1.1 */
			// Start line: 76
			// Start offset: 0x80098B14
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a2
		// 		short _z1; // $a0
		// 		struct _Position *_v0; // $v1
		/* end block 1.1 */
		// End offset: 0x80098B14
		// End Line: 76

		/* begin block 1.2 */
			// Start line: 76
			// Start offset: 0x80098B14
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v0
		/* end block 1.2 */
		// End offset: 0x80098B14
		// End Line: 76
	/* end block 1 */
	// End offset: 0x80098C08
	// End Line: 98

	/* begin block 2 */
		// Start line: 150
	/* end block 2 */
	// End Line: 151

int PLANCOLL_DoesLOSExistFinal
              (_Position *startPos,_Position *endPos,int collideType,int passThroughHit,int zoffset)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039564(in_v1 - (int)startPos,in_v0 - (int)*(short *)(unaff_s0 + 2));
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANCOLL_CheckUnderwaterPoint(struct _Position *position /*$s5*/)
 // line 108, offset 0x80098c18
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x80098C18
		// Variables:
	// 		struct _StreamUnit *streamUnit; // $s4
	// 		struct Level *level; // $s2
	// 		struct BSPTree *tree; // $a3
	// 		struct _Sphere_noSq *sphere; // $s0
	// 		struct _Position *offset; // $a3
	// 		int d; // $s3
	// 		struct _Position center; // stack offset -40

		/* begin block 1.1 */
			// Start line: 124
			// Start offset: 0x80098C74
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $v0
		// 		short _z1; // $a0
		// 		struct _Position *_v0; // $s6
		/* end block 1.1 */
		// End offset: 0x80098C74
		// End Line: 124
	/* end block 1 */
	// End offset: 0x80098D5C
	// End Line: 146

	/* begin block 2 */
		// Start line: 241
	/* end block 2 */
	// End Line: 242

int PLANCOLL_CheckUnderwaterPoint(_Position *position)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANCOLL_FindTerrainHitFinal(struct _PlanCollideInfo *pci /*$s5*/, int *placement /*$t0*/, int distBefore /*$s7*/, int distAfter /*$fp*/, int start /*stack 16*/, int end /*stack 20*/)
 // line 162, offset 0x80098d84
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x80098D84
		// Variables:
	// 		struct _PCollideInfo pcollideinfo; // stack offset -120
	// 		struct _fth *current; // $s1
	// 		struct _fth *last; // $s6
	// 		struct SVECTOR startPt; // stack offset -72
	// 		struct SVECTOR endPt; // stack offset -64
	// 		struct _SVector normal; // stack offset -56

		/* begin block 1.1 */
			// Start line: 180
			// Start offset: 0x80098E18
			// Variables:
		// 		short _x1; // $a0
		// 		short _y1; // $v0
		// 		short _z1; // $v1
		// 		struct _Position *_v0; // $s4
		// 		struct _Position *_v1; // $s2
		/* end block 1.1 */
		// End offset: 0x80098E18
		// End Line: 180

		/* begin block 1.2 */
			// Start line: 180
			// Start offset: 0x80098E18
			// Variables:
		// 		short _x1; // $a1
		// 		short _y1; // $v0
		// 		short _z1; // $v1
		// 		struct _Position *_v0; // $s3
		/* end block 1.2 */
		// End offset: 0x80098E18
		// End Line: 180

		/* begin block 1.3 */
			// Start line: 201
			// Start offset: 0x80098FD4
			// Variables:
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.3 */
		// End offset: 0x80098FD4
		// End Line: 201
	/* end block 1 */
	// End offset: 0x80099014
	// End Line: 208

	/* begin block 2 */
		// Start line: 426
	/* end block 2 */
	// End Line: 427

int PLANCOLL_FindTerrainHitFinal
              (_PlanCollideInfo *pci,int *placement,int distBefore,int distAfter,int start,int end)

{
  short sVar1;
  short sVar2;
  short **ppsVar3;
  short *psVar4;
  int **unaff_s1;
  short *unaff_s5;
  int unaff_s6;
  
  ppsVar3 = *(short ***)(**unaff_s1 + 0x48);
  psVar4 = *ppsVar3;
  sVar1 = *psVar4;
  sVar2 = psVar4[2];
  *(short *)(unaff_s6 + 2) = psVar4[1];
  *(short *)(unaff_s6 + 4) = sVar2;
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)*unaff_s5 - (int)(short)(sVar1 + *(short *)(ppsVar3 + 3)),
               (int)unaff_s5[1] -
               (int)(short)((short)((uint)start >> 0x10) + *(short *)((int)ppsVar3 + 0xe)),
               (int)unaff_s5[2] - (int)(short)((short)end + *(short *)(ppsVar3 + 4)));
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANCOLL_DoesStraightLinePathExist(struct _Position *startPos /*$s2*/, struct _Position *endPos /*$s3*/, int collideType /*$s4*/)
 // line 214, offset 0x80099044
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x80099044
	/* end block 1 */
	// End offset: 0x800990AC
	// End Line: 221

	/* begin block 2 */
		// Start line: 581
	/* end block 2 */
	// End Line: 582

int PLANCOLL_DoesStraightLinePathExist(_Position *startPos,_Position *endPos,int collideType)

{
  undefined4 in_v0;
  undefined4 *unaff_s5;
  int in_stack_00000014;
  int *in_stack_00000018;
  
  *unaff_s5 = in_v0;
  unaff_s5[1] = in_stack_00000014;
                    /* WARNING: Subroutine does not return */
  FUN_8001e6b4((int)*(short *)(in_stack_00000014 + 8),*(undefined4 *)(*in_stack_00000018 + 0x24),
               &stack0x00000050);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLANCOLL_DoesWaterPathUpExist(struct _Position *startPos /*$s2*/, struct _Position *endPos /*$s1*/, int collideType /*$s4*/, struct _Position *peakPos /*$s3*/, int passThroughHit /*stack 16*/)
 // line 227, offset 0x800990d0
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x800990D0
		// Variables:
	// 		long time_ftop; // $s0
	// 		long time_ptow; // $a0
	// 		long time_tot; // $a1
	// 		struct _Position diff; // stack offset -32
	/* end block 1 */
	// End offset: 0x8009914C
	// End Line: 246

	/* begin block 2 */
		// Start line: 619
	/* end block 2 */
	// End Line: 620

int PLANCOLL_DoesWaterPathUpExist
              (_Position *startPos,_Position *endPos,int collideType,_Position *peakPos,
              int passThroughHit)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  uVar1 = *(undefined2 *)(unaff_s3 + 2);
  uVar2 = *(undefined2 *)(unaff_s3 + 4);
  *(undefined2 *)(unaff_s5 + 8) = (short)collideType;
  *(undefined2 *)(unaff_s2 + 2) = uVar1;
  *(undefined2 *)(unaff_s2 + 4) = uVar2;
  return 1;
}





