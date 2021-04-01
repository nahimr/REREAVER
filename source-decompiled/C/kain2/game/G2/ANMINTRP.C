#include "THISDUST.H"
#include "ANMINTRP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ G2AnimSection_InterpToKeylistAtTime(struct _G2AnimSection_Type *section /*$s1*/, struct _G2AnimKeylist_Type *keylist /*$s7*/, int keylistID /*$fp*/, short targetTime /*stack -48*/, int duration /*stack 16*/)
 // line 49, offset 0x800920dc
	/* begin block 1 */
		// Start line: 50
		// Start offset: 0x800920DC
		// Variables:
	// 		struct _G2Anim_Type *anim; // $s5
	// 		struct _G2AnimInterpInfo_Type *interpInfo; // $s3
	// 		struct _G2AnimInterpStateBlock_Type *stateBlockList; // $t0
	// 		struct _G2AnimQuatInfo_Type *quatInfo; // $a2
	// 		unsigned long alarmFlags; // $s0
	// 		short elapsedTime; // $s4
	// 		int quatInfoChunkCount; // $a3
	// 		int segCount; // $s2
	/* end block 1 */
	// End offset: 0x80092390
	// End Line: 183

	/* begin block 2 */
		// Start line: 98
	/* end block 2 */
	// End Line: 99

void G2AnimSection_InterpToKeylistAtTime
               (_G2AnimSection_Type *section,_G2AnimKeylist_Type *keylist,int keylistID,
               short targetTime,int duration)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimSection_UpdateStoredFrameFromQuat(struct _G2AnimSection_Type *section /*$s7*/)
 // line 193, offset 0x800923c0
	/* begin block 1 */
		// Start line: 194
		// Start offset: 0x800923C0
		// Variables:
	// 		struct _G2AnimSegValue_Type *segValue; // $s1
	// 		struct _G2AnimInterpInfo_Type *interpInfo; // $s0
	// 		struct _G2AnimInterpStateBlock_Type *stateBlockList; // $s3
	// 		struct _G2AnimQuatInfo_Type *quatInfo; // $s0
	// 		long alpha; // $s5
	// 		struct _G2Quat_Type newQuat; // stack offset -48
	// 		int quatInfoChunkCount; // $s4
	// 		int segCount; // $s6

		/* begin block 1.1 */
			// Start line: 223
			// Start offset: 0x8009244C
			// Variables:
		// 		struct _G2Quat_Type *source; // $fp
		// 		struct _G2Quat_Type *dest; // $s1

			/* begin block 1.1.1 */
				// Start line: 223
				// Start offset: 0x8009244C
				// Variables:
			// 		unsigned long zw; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8009244C
			// End Line: 223
		/* end block 1.1 */
		// End offset: 0x8009244C
		// End Line: 223

		/* begin block 1.2 */
			// Start line: 223
			// Start offset: 0x8009244C
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $a0
		// 		struct _G2SVector3_Type *base; // $v0
		// 		struct _G2SVector3_Type *offset; // $v1
		// 		long alpha; // $s5
		/* end block 1.2 */
		// End offset: 0x8009244C
		// End Line: 223

		/* begin block 1.3 */
			// Start line: 223
			// Start offset: 0x8009244C
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $a0
		// 		struct _G2SVector3_Type *base; // $v0
		// 		struct _G2SVector3_Type *offset; // $v1
		// 		long alpha; // $s5
		/* end block 1.3 */
		// End offset: 0x8009244C
		// End Line: 223
	/* end block 1 */
	// End offset: 0x8009256C
	// End Line: 252

	/* begin block 2 */
		// Start line: 434
	/* end block 2 */
	// End Line: 435

void _G2AnimSection_UpdateStoredFrameFromQuat(_G2AnimSection_Type *section)

{
  int iVar1;
  byte *unaff_s1;
  undefined4 unaff_s3;
  short unaff_s4;
  short sVar2;
  int unaff_s5;
  short unaff_s6;
  int unaff_s7;
  undefined2 unaff_s8;
  
  iVar1 = (int)unaff_s4 % (uint)*(byte *)(*(int *)(unaff_s1 + 0x24) + 1) + 1;
  sVar2 = (short)iVar1;
  if ((int)unaff_s6 < iVar1) {
    sVar2 = unaff_s6;
  }
  *(short *)(unaff_s1 + 4) = sVar2;
  *(int *)(unaff_s1 + 0x24) = unaff_s7;
  *(undefined2 *)(unaff_s1 + 0x14) = unaff_s8;
  *(short *)(unaff_s1 + 6) = -*(short *)(unaff_s7 + 6);
  if ((*unaff_s1 & 2) != 0) {
    FUN_8009012c();
  }
  FUN_8008ff44();
  *unaff_s1 = *unaff_s1 & 0x7f;
  FUN_80090198();
  *(undefined4 *)(unaff_s1 + 0xc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2c) = unaff_s3;
  *(ushort *)(unaff_s5 + 0xe) = *(ushort *)(unaff_s5 + 0xe) | 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimSection_InterpStateToQuat(struct _G2AnimSection_Type *section /*$a0*/)
 // line 258, offset 0x800925b0
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x800925B0
		// Variables:
	// 		struct _G2AnimInterpInfo_Type *interpInfo; // $s0
	// 		struct _G2AnimInterpStateBlock_Type *stateBlockList; // $s3
	// 		struct _G2AnimQuatInfo_Type *quatInfo; // $s0
	// 		long alpha; // $s1
	// 		struct _G2Quat_Type newQuat; // stack offset -40
	// 		int quatInfoChunkCount; // $s2
	// 		int segCount; // $s4

		/* begin block 1.1 */
			// Start line: 288
			// Start offset: 0x80092610
			// Variables:
		// 		struct _G2Quat_Type *source; // $s5
		// 		struct _G2Quat_Type *dest; // $s0

			/* begin block 1.1.1 */
				// Start line: 288
				// Start offset: 0x80092610
				// Variables:
			// 		unsigned long zw; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80092610
			// End Line: 288
		/* end block 1.1 */
		// End offset: 0x80092610
		// End Line: 288

		/* begin block 1.2 */
			// Start line: 288
			// Start offset: 0x80092610
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $v1
		// 		struct _G2SVector3_Type *offset; // $v0
		// 		long alpha; // $s1
		/* end block 1.2 */
		// End offset: 0x80092610
		// End Line: 288

		/* begin block 1.3 */
			// Start line: 288
			// Start offset: 0x80092610
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $v1
		// 		struct _G2SVector3_Type *offset; // $v0
		// 		long alpha; // $s1
		/* end block 1.3 */
		// End offset: 0x80092610
		// End Line: 288
	/* end block 1 */
	// End offset: 0x8009271C
	// End Line: 313

	/* begin block 2 */
		// Start line: 582
	/* end block 2 */
	// End Line: 583

void _G2AnimSection_InterpStateToQuat(_G2AnimSection_Type *section)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_s0;
  undefined4 *unaff_s1;
  undefined2 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  byte *unaff_s7;
  int unaff_s8;
  undefined4 uStack00000010;
  undefined4 in_stack_00000018;
  
  while( true ) {
    setCopReg(2,0xc800,(uint)*(ushort *)(unaff_s0 + 0x1c));
    setCopReg(2,0xd000,(uint)*(ushort *)(unaff_s0 + 0x1e));
    setCopReg(2,0xd800,(uint)*(ushort *)(unaff_s0 + 0x20));
    setCopReg(2,0x4800,(uint)*(ushort *)(unaff_s0 + 0x22));
    setCopReg(2,0x5000,(uint)*(ushort *)(unaff_s0 + 0x24));
    setCopReg(2,0x5800,(uint)*(ushort *)(unaff_s0 + 0x26));
    setCopReg(2,0x4000,unaff_s5);
    copFunction(2,0x1a8003e);
    uVar1 = getCopReg(2,0xc800);
    uVar2 = getCopReg(2,0xd000);
    uVar3 = getCopReg(2,0xd800);
    *(short *)(unaff_s1 + 4) = (short)uVar1;
    *(undefined2 *)((int)unaff_s1 + 0x12) = (short)uVar2;
    *(short *)(unaff_s1 + 5) = (short)uVar3;
    unaff_s6 = unaff_s6 + -1;
    unaff_s4 = unaff_s4 + -1;
    unaff_s0 = unaff_s0 + 0x28;
    if (unaff_s4 == 0) {
      unaff_s3 = (int *)*unaff_s3;
      unaff_s4 = 4;
      unaff_s0 = (int)(unaff_s3 + 1);
    }
    *unaff_s2 = 1;
    if (unaff_s6 < 1) break;
    uStack00000010 = 0;
    FUN_800963cc();
    uVar1 = *(undefined4 *)(unaff_s8 + 4);
    unaff_s1[6] = in_stack_00000018;
    *(undefined4 *)(unaff_s2 + 3) = uVar1;
    setCopReg(2,0xc800,(uint)*(ushort *)(unaff_s0 + 0x10));
    setCopReg(2,0xd000,(uint)*(ushort *)(unaff_s0 + 0x12));
    setCopReg(2,0xd800,(uint)*(ushort *)(unaff_s0 + 0x14));
    setCopReg(2,0x4800,(uint)*(ushort *)(unaff_s0 + 0x16));
    setCopReg(2,0x5000,(uint)*(ushort *)(unaff_s0 + 0x18));
    setCopReg(2,0x5800,(uint)*(ushort *)(unaff_s0 + 0x1a));
    setCopReg(2,0x4000,unaff_s5);
    copFunction(2,0x1a8003e);
    uVar1 = getCopReg(2,0xc800);
    uVar2 = getCopReg(2,0xd000);
    uVar3 = getCopReg(2,0xd800);
    *(short *)(unaff_s1 + 8) = (short)uVar1;
    *(undefined2 *)((int)unaff_s1 + 0x22) = (short)uVar2;
    *(short *)(unaff_s1 + 9) = (short)uVar3;
    unaff_s1 = unaff_s1 + 6;
    unaff_s2 = unaff_s2 + 0xc;
  }
  *(undefined2 *)(unaff_s7 + 6) = *(undefined2 *)(unaff_s7 + 4);
  *unaff_s7 = *unaff_s7 | 0x80;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimSection_SegValueToQuat(struct _G2AnimSection_Type *section /*$a0*/, int zeroOne /*$s6*/)
 // line 318, offset 0x80092740
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x80092740
		// Variables:
	// 		struct _G2AnimSegValue_Type *segValue; // $s2
	// 		struct _G2AnimInterpInfo_Type *interpInfo; // $v0
	// 		struct _G2AnimInterpStateBlock_Type *stateBlockList; // $s4
	// 		struct _G2AnimQuatInfo_Type *quatInfo; // $s0
	// 		struct _G2EulerAngles_Type preQuat; // stack offset -40
	// 		int quatInfoChunkCount; // $s3
	// 		int segCount; // $s5
	/* end block 1 */
	// End offset: 0x800928A4
	// End Line: 384

	/* begin block 2 */
		// Start line: 716
	/* end block 2 */
	// End Line: 717

void _G2AnimSection_SegValueToQuat(_G2AnimSection_Type *section,int zeroOne)

{
  undefined4 *in_v1;
  undefined4 uVar1;
  uint in_t5;
  undefined4 uVar2;
  uint in_t6;
  undefined4 uVar3;
  undefined4 *unaff_s0;
  undefined4 unaff_s1;
  int unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 uStack00000010;
  undefined4 in_stack_00000018;
  
  while( true ) {
    setCopReg(2,0x5000,in_t5);
    setCopReg(2,0x5800,in_t6);
    setCopReg(2,0x4000,unaff_s1);
    copFunction(2,0x1a8003e);
    uVar1 = getCopReg(2,0xc800);
    uVar2 = getCopReg(2,0xd000);
    uVar3 = getCopReg(2,0xd800);
    *(ushort *)in_v1 = (ushort)uVar1;
    *(ushort *)((int)in_v1 + 2) = (ushort)uVar2;
    *(ushort *)(in_v1 + 1) = (ushort)uVar3;
    setCopReg(2,0xc800,(uint)*(ushort *)(unaff_s0 + 7));
    setCopReg(2,0xd000,(uint)*(ushort *)((int)unaff_s0 + 0x1e));
    setCopReg(2,0xd800,(uint)*(ushort *)(unaff_s0 + 8));
    setCopReg(2,0x4800,(uint)*(ushort *)((int)unaff_s0 + 0x22));
    setCopReg(2,0x5000,(uint)*(ushort *)(unaff_s0 + 9));
    setCopReg(2,0x5800,(uint)*(ushort *)((int)unaff_s0 + 0x26));
    setCopReg(2,0x4000,unaff_s1);
    copFunction(2,0x1a8003e);
    uVar1 = getCopReg(2,0xc800);
    uVar2 = getCopReg(2,0xd000);
    uVar3 = getCopReg(2,0xd800);
    *(ushort *)(unaff_s0 + 7) = (ushort)uVar1;
    *(undefined2 *)((int)unaff_s0 + 0x1e) = (short)uVar2;
    *(short *)(unaff_s0 + 8) = (short)uVar3;
    unaff_s4 = unaff_s4 + -1;
    unaff_s2 = unaff_s2 + -1;
    unaff_s0 = unaff_s0 + 10;
    if (unaff_s2 == 0) {
      unaff_s3 = (int *)*unaff_s3;
      unaff_s2 = 4;
      unaff_s0 = unaff_s3 + 1;
    }
    if (unaff_s4 < 1) break;
    uStack00000010 = 0;
    FUN_800963cc();
    unaff_s0[1] = *(undefined4 *)(unaff_s5 + 4);
    in_v1 = unaff_s0 + 4;
    *unaff_s0 = in_stack_00000018;
    setCopReg(2,0xc800,(uint)*(ushort *)in_v1);
    setCopReg(2,0xd000,(uint)*(ushort *)((int)unaff_s0 + 0x12));
    setCopReg(2,0xd800,(uint)*(ushort *)(unaff_s0 + 5));
    in_t5 = (uint)*(ushort *)(unaff_s0 + 6);
    in_t6 = (uint)*(ushort *)((int)unaff_s0 + 0x1a);
    setCopReg(2,0x4800,(uint)*(ushort *)((int)unaff_s0 + 0x16));
  }
  return;
}



// decompiled code
// original method signature: 
// struct _G2AnimInterpStateBlock_Type * /*$ra*/ _G2Anim_AllocateInterpStateBlockList(struct _G2AnimSection_Type *section /*$v0*/)
 // line 388, offset 0x800928cc
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x800928CC
		// Variables:
	// 		struct _G2AnimInterpInfo_Type *interpInfo; // $s2
	// 		struct _G2AnimInterpStateBlock_Type *newBlock; // $s1
	// 		int segCount; // $s0
	/* end block 1 */
	// End offset: 0x8009294C
	// End Line: 425

	/* begin block 2 */
		// Start line: 891
	/* end block 2 */
	// End Line: 892

_G2AnimInterpStateBlock_Type * _G2Anim_AllocateInterpStateBlockList(_G2AnimSection_Type *section)

{
  ushort uVar1;
  int unaff_s0;
  int iVar2;
  ushort *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  ushort uStack00000010;
  ushort uStack00000012;
  ushort uStack00000014;
  undefined2 uStack00000016;
  
  *(ushort *)(unaff_s0 + 0x14) = unaff_s1[-4];
  *(ushort *)(unaff_s0 + 0x1c) = unaff_s1[-2];
  *(ushort *)(unaff_s0 + 0x1e) = unaff_s1[-1];
  uVar1 = *unaff_s1;
  *(ushort *)(unaff_s0 + 0x20) = uVar1;
  iVar2 = unaff_s0 + 0x28;
  if (unaff_s3 == 1) {
    iVar2 = *unaff_s4 + 4;
  }
  if (unaff_s5 + -1 < 1) {
    return (_G2AnimInterpStateBlock_Type *)(uint)uVar1;
  }
  uStack00000010 = *(ushort *)(unaff_s2 + 0x18) & 0xfff;
  uStack00000012 = unaff_s1[3] & 0xfff;
  uStack00000016 = 0;
  uStack00000014 = unaff_s1[4] & 0xfff;
  if (unaff_s6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80079b20(iVar2,&stack0x00000010);
  }
                    /* WARNING: Subroutine does not return */
  FUN_80079b20(iVar2 + 8,&stack0x00000010);
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_FreeInterpStateBlockList(struct _G2AnimInterpStateBlock_Type *block /*$a1*/)
 // line 429, offset 0x80092964
	/* begin block 1 */
		// Start line: 430
		// Start offset: 0x80092964
		// Variables:
	// 		struct _G2AnimInterpStateBlock_Type *nextBlock; // $s0
	/* end block 1 */
	// End offset: 0x80092994
	// End Line: 441

	/* begin block 2 */
		// Start line: 985
	/* end block 2 */
	// End Line: 986

void _G2Anim_FreeInterpStateBlockList(_G2AnimInterpStateBlock_Type *block)

{
  int unaff_s1;
  ushort *unaff_s2;
  int *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  ushort uStack00000010;
  ushort uStack00000012;
  ushort uStack00000014;
  undefined2 uStack00000016;
  
  if (unaff_s5 < 1) {
    return;
  }
  uStack00000010 = *unaff_s2 & 0xfff;
  uStack00000012 = *(ushort *)(unaff_s1 + -0x12) & 0xfff;
  uStack00000016 = 0;
  uStack00000014 = *(ushort *)(unaff_s1 + -0x10) & 0xfff;
  if (unaff_s6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80079b20(*unaff_s4 + 4,&stack0x00000010);
  }
                    /* WARNING: Subroutine does not return */
  FUN_80079b20(*unaff_s4 + 0xc,&stack0x00000010);
}





