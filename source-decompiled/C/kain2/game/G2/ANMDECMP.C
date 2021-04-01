#include "THISDUST.H"
#include "ANMDECMP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_DecompressChannel_AdaptiveDelta(struct _G2AnimDecompressChannelInfo_Type *dcInfo /*$a0*/, struct _G2AnimChanStatus_Type *status /*$a1*/)
 // line 135, offset 0x800900f4
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x800900F4
		// Variables:
	// 		unsigned short *chanData; // $t7
	// 		int index; // $t2
	// 		int keyData; // $t5
	// 		unsigned short step; // $v1
	// 		unsigned short predictedDelta; // $a2
	// 		int targetKey; // $t6
	// 		int storedKey; // $t4
	// 		int keyCount; // $t8
	/* end block 1 */
	// End offset: 0x800901FC
	// End Line: 189

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

void _G2Anim_DecompressChannel_AdaptiveDelta
               (_G2AnimDecompressChannelInfo_Type *dcInfo,_G2AnimChanStatus_Type *status)

{
  FUN_8008ff44(dcInfo,3);
  FUN_8009012c(dcInfo);
  *(byte *)&dcInfo->keylist = *(byte *)&dcInfo->keylist | 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_DecompressChannel_Linear(struct _G2AnimDecompressChannelInfo_Type *dcInfo /*$a0*/, struct _G2AnimChanStatus_Type *status /*$a1*/)
 // line 198, offset 0x80090220
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x80090220
		// Variables:
	// 		unsigned short *chanData; // $a2
	// 		short rangeBase; // $t0
	// 		short rangeInfo; // $v0
	// 		int rangeLength; // $v1
	// 		int rangeOffset; // $a0
	// 		int targetKey; // $a3
	/* end block 1 */
	// End offset: 0x80090288
	// End Line: 232

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

	/* begin block 3 */
		// Start line: 414
	/* end block 3 */
	// End Line: 415

	/* begin block 4 */
		// Start line: 423
	/* end block 4 */
	// End Line: 424

void _G2Anim_DecompressChannel_Linear
               (_G2AnimDecompressChannelInfo_Type *dcInfo,_G2AnimChanStatus_Type *status)

{
  ushort uVar1;
  bool bVar2;
  ushort *in_v0;
  ushort uVar3;
  uint uVar4;
  int in_t2;
  int iVar5;
  uint in_t4;
  short in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int in_t8;
  int in_t9;
  
  while( true ) {
    uVar4 = (int)(uint)*in_v0 >> ((in_t4 & 3) << 2);
    uVar1 = *(ushort *)(in_t2 * 4 + unaff_s0);
    iVar5 = in_t2 + *(int *)((uVar4 & 0xf) * 4 + in_t9);
    in_t2 = iVar5;
    if (iVar5 < 0) {
      in_t2 = 0;
    }
    if (0x3f < iVar5) {
      in_t2 = 0x3f;
    }
    uVar3 = uVar1 >> 3;
    if ((uVar4 & 4) != 0) {
      uVar3 = uVar1 + uVar3;
    }
    if ((uVar4 & 2) != 0) {
      uVar3 = uVar3 + (uVar1 >> 1);
    }
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar3 + (uVar1 >> 2) + (uVar1 & 1);
    }
    if ((uVar4 & 8) != 0) {
      uVar3 = -uVar3;
    }
    in_t5 = in_t5 + uVar3;
    bVar2 = in_t6 <= (int)in_t4;
    in_t4 = in_t4 + 1;
    if (bVar2) break;
    in_v0 = (ushort *)(((int)in_t4 >> 2) * 2 + in_t7);
  }
  status->index = (short)in_t2;
  status->keyData = in_t5;
  dcInfo->chanData = (ushort *)(in_t7 + (in_t8 >> 2) * 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_InitializeChannel_AdaptiveDelta(struct _G2AnimDecompressChannelInfo_Type *dcInfo /*$a0*/, struct _G2AnimChanStatus_Type *status /*$a1*/)
 // line 271, offset 0x800902b4
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800902B4
		// Variables:
	// 		unsigned short *chanData; // $v1
	// 		int keyCount; // $v0
	/* end block 1 */
	// End offset: 0x800902B4
	// End Line: 277

	/* begin block 2 */
		// Start line: 561
	/* end block 2 */
	// End Line: 562

	/* begin block 3 */
		// Start line: 563
	/* end block 3 */
	// End Line: 564

	/* begin block 4 */
		// Start line: 566
	/* end block 4 */
	// End Line: 567

	/* begin block 5 */
		// Start line: 567
	/* end block 5 */
	// End Line: 568

void _G2Anim_InitializeChannel_AdaptiveDelta
               (_G2AnimDecompressChannelInfo_Type *dcInfo,_G2AnimChanStatus_Type *status)

{
  ushort uVar1;
  bool bVar2;
  ushort in_a2;
  uint uVar3;
  int iVar4;
  int in_t2;
  uint in_t4;
  short in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int in_t8;
  int in_t9;
  
  do {
    in_t5 = in_t5 - in_a2;
    while( true ) {
      bVar2 = in_t6 <= (int)in_t4;
      in_t4 = in_t4 + 1;
      if (bVar2) {
        status->index = (short)in_t2;
        status->keyData = in_t5;
        dcInfo->chanData = (ushort *)(in_t7 + (in_t8 >> 2) * 2);
        return;
      }
      uVar3 = (int)(uint)*(ushort *)(((int)in_t4 >> 2) * 2 + in_t7) >> ((in_t4 & 3) << 2);
      uVar1 = *(ushort *)(in_t2 * 4 + unaff_s0);
      iVar4 = in_t2 + *(int *)((uVar3 & 0xf) * 4 + in_t9);
      in_t2 = iVar4;
      if (iVar4 < 0) {
        in_t2 = 0;
      }
      if (0x3f < iVar4) {
        in_t2 = 0x3f;
      }
      in_a2 = uVar1 >> 3;
      if ((uVar3 & 4) != 0) {
        in_a2 = uVar1 + in_a2;
      }
      if ((uVar3 & 2) != 0) {
        in_a2 = in_a2 + (uVar1 >> 1);
      }
      if ((uVar3 & 1) != 0) {
        in_a2 = in_a2 + (uVar1 >> 2) + (uVar1 & 1);
      }
      if ((uVar3 & 8) != 0) break;
      in_t5 = in_t5 + in_a2;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_InitializeChannel_Linear(struct _G2AnimDecompressChannelInfo_Type *dcInfo /*$a0*/, struct _G2AnimChanStatus_Type *status /*$a1*/)
 // line 289, offset 0x800902ec
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x800902EC
		// Variables:
	// 		unsigned short *chanData; // $v1
	// 		int chanLength; // $v0
	/* end block 1 */
	// End offset: 0x800902EC
	// End Line: 295

	/* begin block 2 */
		// Start line: 603
	/* end block 2 */
	// End Line: 604

	/* begin block 3 */
		// Start line: 605
	/* end block 3 */
	// End Line: 606

	/* begin block 4 */
		// Start line: 608
	/* end block 4 */
	// End Line: 609

void _G2Anim_InitializeChannel_Linear
               (_G2AnimDecompressChannelInfo_Type *dcInfo,_G2AnimChanStatus_Type *status)

{
  return;
}





