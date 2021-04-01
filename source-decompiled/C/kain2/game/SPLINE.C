#include "THISDUST.H"
#include "SPLINE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ _SplineS2Pos(struct vecS *p /*$t6*/, long s /*$t1*/, struct SplineKey *key /*$t2*/, struct SplineKey *key2 /*$t5*/)
 // line 70, offset 0x80040c18
	/* begin block 1 */
		// Start line: 71
		// Start offset: 0x80040C18
		// Variables:
	// 		long s2; // $a3
	// 		long s3; // $t0
	// 		long h0; // $a2
	// 		long h1; // $a1
	// 		long h2; // $a0
	// 		long h3; // $t0
	/* end block 1 */
	// End offset: 0x80040D80
	// End Line: 96

	/* begin block 2 */
		// Start line: 140
	/* end block 2 */
	// End Line: 141

void _SplineS2Pos(vecS *p,long s,SplineKey *key,SplineKey *key2)

{
  int iVar1;
  int in_t0;
  int iVar2;
  int in_t1;
  int in_t2;
  int in_t4;
  int in_t5;
  undefined2 *in_t6;
  int in_lo;
  
  iVar1 = (int)&p->x + in_t1;
  iVar2 = in_t0 - (int)key2;
  *in_t6 = (short)(in_t4 + in_lo + *(int *)(in_t2 + 8) * iVar1 + *(int *)(in_t5 + 0x14) * iVar2 >>
                  0xf);
  in_t6[1] = (short)((int)*(short *)(in_t2 + 4) * (int)key + (int)*(short *)(in_t5 + 4) * s +
                     *(int *)(in_t2 + 0xc) * iVar1 + *(int *)(in_t5 + 0x18) * iVar2 >> 0xf);
  in_t6[2] = (short)((int)*(short *)(in_t2 + 6) * (int)key + (int)*(short *)(in_t5 + 6) * s +
                     *(int *)(in_t2 + 0x10) * iVar1 + *(int *)(in_t5 + 0x1c) * iVar2 >> 0xf);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SplineSetDefDenom(struct Spline *spline /*$a0*/, struct SplineDef *def /*$a1*/, int denomFlag /*$a2*/)
 // line 132, offset 0x80040d88
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x80040D88
		// Variables:
	// 		unsigned long denom; // $v1
	/* end block 1 */
	// End offset: 0x80040E44
	// End Line: 165

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

	/* begin block 3 */
		// Start line: 257
	/* end block 3 */
	// End Line: 258

	/* begin block 4 */
		// Start line: 263
	/* end block 4 */
	// End Line: 264

void SplineSetDefDenom(Spline *spline,SplineDef *def,int denomFlag)

{
  short *in_v0;
  uint uVar1;
  
  uVar1 = SEXT24(*in_v0);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (denomFlag == 0) {
    uVar1 = (uint)(def->fracCurr << 0xf) / uVar1;
  }
  else {
    uVar1 = def->fracCurr * uVar1 >> 0xf;
  }
  def->fracCurr = uVar1;
  def->denomFlag = (ushort)denomFlag;
  return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ SplineGetFrameNumber(struct Spline *spline /*$a0*/, struct SplineDef *def /*$a1*/)
 // line 248, offset 0x80040e4c
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x80040E4C
		// Variables:
	// 		unsigned short frame; // $s0
	// 		unsigned int i; // $v1
	// 		struct SplineKey *key; // $a2
	// 		struct SplineDef temp; // stack offset -16
	/* end block 1 */
	// End offset: 0x80040ECC
	// End Line: 285

	/* begin block 2 */
		// Start line: 496
	/* end block 2 */
	// End Line: 497

ushort SplineGetFrameNumber(Spline *spline,SplineDef *def)

{
  short unaff_s0;
  int in_stack_00000014;
  
  FUN_80040d20();
  return (ushort)(unaff_s0 + (short)(in_stack_00000014 >> 0xc));
}



// decompiled code
// original method signature: 
// short /*$ra*/ SplineSetDef2FrameNumber(struct Spline *spline /*$a0*/, struct SplineDef *def /*$a1*/, unsigned short frame_number /*$a2*/)
 // line 288, offset 0x80040ee0
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x80040EE0
		// Variables:
	// 		unsigned long isRot; // $t3
	// 		short status; // $t4
	// 		struct SplineKey *key; // $t0
	// 		struct SplineRotKey *rkey; // $a3
	// 		unsigned short frame; // $t2
	// 		short deltaFrame; // $t1
	/* end block 1 */
	// End offset: 0x80041004
	// End Line: 347

	/* begin block 2 */
		// Start line: 481
	/* end block 2 */
	// End Line: 482

	/* begin block 3 */
		// Start line: 493
	/* end block 3 */
	// End Line: 494

short SplineSetDef2FrameNumber(Spline *spline,SplineDef *def,ushort frame_number)

{
  short sVar1;
  int in_v0;
  SplineKey *in_a3;
  SplineKey *in_t0;
  int in_t1;
  uint in_t2;
  int in_t3;
  short in_t4;
  uint uVar2;
  
  while( true ) {
    if (in_t3 == 0) {
      sVar1 = in_t0->count;
    }
    else {
      sVar1 = in_a3->count;
    }
    if (in_v0 >> 0x10 < (int)sVar1) break;
    if (in_t3 == 0) {
      sVar1 = in_t0->count;
    }
    else {
      sVar1 = in_a3->count;
    }
    in_t2 = (in_t2 & 0xffff) + (int)sVar1;
    uVar2 = ((int)def->currkey + 1) % (int)spline->numkeys;
    def->currkey = (short)uVar2;
    if ((uVar2 & 0xffff) == 0) {
      in_a3 = spline->key;
      in_t0 = in_a3;
    }
    else {
      in_a3 = (SplineKey *)((int)&(in_a3->dd).x + 2);
      in_t0 = in_t0 + 1;
    }
    if (((uint)frame_number <= (in_t2 & 0xffff)) || (spline->numkeys <= def->currkey))
    goto LAB_80040f98;
    in_t1 = (uint)frame_number - in_t2;
    in_v0 = in_t1 * 0x10000;
  }
  def->fracCurr = (in_t1 << 0x10) >> 4;
LAB_80040f98:
  def->denomFlag = 0;
  return in_t4;
}



// decompiled code
// original method signature: 
// short /*$ra*/ SplineIsWhere(struct Spline *spline /*$a0*/, struct SplineDef *def /*$a1*/)
 // line 355, offset 0x80041010
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x80041010
		// Variables:
	// 		short curr; // $v1
	/* end block 1 */
	// End offset: 0x80041070
	// End Line: 367

	/* begin block 2 */
		// Start line: 618
	/* end block 2 */
	// End Line: 619

	/* begin block 3 */
		// Start line: 619
	/* end block 3 */
	// End Line: 620

short SplineIsWhere(Spline *spline,SplineDef *def)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (spline->key != (SplineKey *)0x0) {
    uVar2 = FUN_80040fa8(spline->key,spline + 2);
  }
  if ((*(int *)&spline->numkeys != 0) && ((uVar2 & 0xffff) == 0)) {
    uVar2 = FUN_80040fa8(*(int *)&spline->numkeys,spline + 3);
  }
  sVar1 = (short)uVar2;
  if ((spline[1].key != (SplineKey *)0x0) && ((uVar2 & 0xffff) == 0)) {
    sVar1 = FUN_80040fa8(spline[1].key,spline + 4);
  }
  return sVar1;
}



// decompiled code
// original method signature: 
// short /*$ra*/ SplineMultiIsWhere(struct MultiSpline *multi /*$s0*/)
 // line 368, offset 0x80041078
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x80041078
		// Variables:
	// 		short where; // $v1
	/* end block 1 */
	// End offset: 0x800410EC
	// End Line: 384

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

short SplineMultiIsWhere(MultiSpline *multi)

{
  short sVar1;
  int unaff_s0;
  
  sVar1 = FUN_80040fa8(multi,unaff_s0 + 0x20);
  return sVar1;
}



// decompiled code
// original method signature: 
// struct _G2Quat_Type * /*$ra*/ SplineGetFirstRot(struct RSpline *rspline /*$a0*/, struct SplineDef *def /*$a1*/)
 // line 423, offset 0x80041104
	/* begin block 1 */
		// Start line: 846
	/* end block 1 */
	// End Line: 847

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

_G2Quat_Type * SplineGetFirstRot(RSpline *rspline,SplineDef *def)

{
  int in_v0;
  int iVar1;
  
  if ((in_v0 != 0) && (iVar1 = FUN_80041558(), iVar1 != 0)) {
    return (_G2Quat_Type *)&SoundEffectChannel_ARRAY_800d1374[0].volumeChangeSign;
  }
  return (_G2Quat_Type *)0x0;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetFirstPoint(struct Spline *spline /*$a0*/, struct SplineDef *def /*$a1*/)
 // line 435, offset 0x8004112c
	/* begin block 1 */
		// Start line: 741
	/* end block 1 */
	// End Line: 742

	/* begin block 2 */
		// Start line: 745
	/* end block 2 */
	// End Line: 746

	/* begin block 3 */
		// Start line: 746
	/* end block 3 */
	// End Line: 747

_SVector * SplineGetFirstPoint(Spline *spline,SplineDef *def)

{
  return (_SVector *)0x0;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetNextPoint(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/)
 // line 499, offset 0x80041154
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x80041154
		// Variables:
	// 		static struct _SVector point; // offset 0x8
	/* end block 1 */
	// End offset: 0x80041198
	// End Line: 511

	/* begin block 2 */
		// Start line: 998
	/* end block 2 */
	// End Line: 999

_SVector * SplineGetNextPoint(Spline *spline,SplineDef *def)

{
  int iVar1;
  
  iVar1 = FUN_800419b8();
  if ((iVar1 != 0) && (iVar1 = FUN_80041558(), iVar1 != 0)) {
    return (_SVector *)&SoundEffectChannel_ARRAY_800d1374[0].pitchChangeTime;
  }
  return (_SVector *)0x0;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetPreviousPoint(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/)
 // line 513, offset 0x800411ac
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x800411AC
		// Variables:
	// 		static struct _SVector point; // offset 0x10
	/* end block 1 */
	// End offset: 0x800411F0
	// End Line: 525

	/* begin block 2 */
		// Start line: 846
	/* end block 2 */
	// End Line: 847

_SVector * SplineGetPreviousPoint(Spline *spline,SplineDef *def)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *in_a2;
  short *psVar5;
  undefined4 in_t2;
  undefined4 uVar6;
  undefined4 in_t3;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_s8;
  short sStack00000020;
  undefined2 uStack00000022;
  int iStack00000024;
  int iStack00000028;
  uint uStack0000002c;
  
  iVar11 = 0x7fffffff;
  iVar7 = 0;
  iVar9 = 0;
  if (0 < *(short *)(unaff_s8 + 1)) {
    psVar5 = (short *)(*unaff_s8 + 6);
    do {
      setCopReg(2,in_a2,(int)def->currkey - (int)psVar5[-2]);
      setCopReg(2,in_t2,(int)(short)def->denomFlag - (int)psVar5[-1]);
      setCopReg(2,in_t3,(int)*(short *)&def->fracCurr - (int)*psVar5);
      copFunction(2,0xa00428);
      iVar12 = getCopReg(2,0x19);
      iVar1 = getCopReg(2,0x1a);
      iVar3 = getCopReg(2,0x1b);
      iVar3 = iVar12 + iVar1 + iVar3;
      if (iVar3 < iVar11) {
        iVar9 = iVar7;
        iVar11 = iVar3;
      }
      iVar7 = iVar7 + 1;
      psVar5 = psVar5 + 0x10;
    } while (iVar7 < (int)*(short *)(unaff_s8 + 1));
  }
  if (iVar9 == 0) {
    iVar10 = 1;
  }
  else {
    if (iVar9 == (int)*(short *)(unaff_s8 + 1) + -1) {
      iVar10 = (int)*(short *)(unaff_s8 + 1) + -2;
    }
    else {
      iVar7 = *unaff_s8 + iVar9 * 0x20;
      setCopReg(2,in_a2,(int)def->currkey - (int)*(short *)(iVar7 + -0x1e));
      setCopReg(2,in_t2,(int)(short)def->denomFlag - (int)*(short *)(iVar7 + -0x1c));
      setCopReg(2,in_t3,(int)*(short *)&def->fracCurr - (int)*(short *)(iVar7 + -0x1a));
      copFunction(2,0xa00428);
      iVar7 = getCopReg(2,0x19);
      iVar12 = getCopReg(2,0x1a);
      iVar1 = getCopReg(2,0x1b);
      iVar3 = *unaff_s8 + iVar9 * 0x20;
      setCopReg(2,in_a2,(int)def->currkey - (int)*(short *)(iVar3 + 0x22));
      setCopReg(2,in_t2,(int)(short)def->denomFlag - (int)*(short *)(iVar3 + 0x24));
      setCopReg(2,in_t3,(int)*(short *)&def->fracCurr - (int)*(short *)(iVar3 + 0x26));
      copFunction(2,0xa00428);
      iVar3 = getCopReg(2,0x19);
      iVar4 = getCopReg(2,0x1a);
      iVar2 = getCopReg(2,0x1b);
      iVar10 = iVar9 + 1;
      if (iVar7 + iVar12 + iVar1 <= iVar3 + iVar4 + iVar2) {
        iVar10 = iVar9 + -1;
      }
    }
  }
  uVar6 = 1;
  sVar8 = (short)iVar9;
  sStack00000020 = sVar8;
  if (iVar10 < iVar9) {
    sStack00000020 = (short)iVar10;
  }
  uStack0000002c = (uint)(iVar10 < iVar9);
  iVar7 = 0;
  iStack00000024 = 0;
  iVar12 = (int)*(short *)((int)sStack00000020 * 0x20 + *unaff_s8);
  iVar9 = 0;
  uStack00000022 = 0;
  iStack00000028 = iVar11;
  if (0 < iVar12) {
    do {
      psVar5 = in_a2;
      FUN_80041558();
      iStack00000024 = iStack00000024 + 0x1000;
      setCopReg(2,psVar5,(int)def->currkey -
                         (int)SoundEffectChannel_ARRAY_800d1374[0].pitchChangeErrPerUpdate);
      setCopReg(2,uVar6,(int)(short)def->denomFlag -
                        (int)SoundEffectChannel_ARRAY_800d1374[0].pitchChangeError);
      setCopReg(2,in_t3,(int)*(short *)&def->fracCurr -
                        (int)SoundEffectChannel_ARRAY_800d1374[1]._0_2_);
      copFunction(2,0xa00428);
      iVar1 = getCopReg(2,0x19);
      iVar3 = getCopReg(2,0x1a);
      iVar4 = getCopReg(2,0x1b);
      iVar4 = iVar1 + iVar3 + iVar4;
      if (iVar4 < iVar11) {
        iVar9 = iVar7;
        iVar11 = iVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar12);
  }
  if (uStack0000002c == 0) {
    *in_a2 = sVar8;
  }
  else {
    if (iStack00000028 <= iVar11) {
      *in_a2 = sVar8;
      *(undefined4 *)(in_a2 + 2) = 0;
      goto LAB_80041510;
    }
    *in_a2 = (short)iVar10;
  }
  *(int *)(in_a2 + 2) = iVar9 << 0xc;
LAB_80041510:
  in_a2[1] = 0;
  FUN_80041558();
  return (_SVector *)&SoundEffectChannel_ARRAY_800d1374[0].pitchChangeErrPerUpdate;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetNearestPoint(struct Spline *spline /*$fp*/, struct _SVector *point /*$s4*/, struct SplineDef *def /*$t1*/)
 // line 539, offset 0x80041204
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x80041204
		// Variables:
	// 		static struct _SVector dpoint; // offset 0x18
	// 		long dist; // $a1
	// 		long dist1; // $v0
	// 		long closest_dist; // $s6
	// 		int closest_keyframe; // $s3
	// 		int adjacent_keyframe; // $s5
	// 		int closest_ib; // $s2
	// 		int saved_closest_key_dist; // stack offset -56
	// 		int i; // $s0
	// 		int frame_count; // $s7
	// 		int swapped_keys; // stack offset -52
	// 		struct SplineKey *key; // $a3
	// 		struct _Vector d; // stack offset -80
	// 		struct SplineDef tempdef; // stack offset -64
	/* end block 1 */
	// End offset: 0x80041578
	// End Line: 681

	/* begin block 2 */
		// Start line: 900
	/* end block 2 */
	// End Line: 901

_SVector * SplineGetNearestPoint(Spline *spline,_SVector *point,SplineDef *def)

{
  int in_v0;
  int in_v1;
  int iVar1;
  int iVar2;
  undefined4 *in_t0;
  short *in_t1;
  short *psVar3;
  undefined4 in_t2;
  undefined4 uVar4;
  undefined4 in_t3;
  int unaff_s0;
  int iVar5;
  short sVar6;
  int unaff_s3;
  short *unaff_s4;
  int iVar7;
  int unaff_s6;
  int iVar8;
  int *unaff_s8;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  short sStack00000020;
  undefined2 uStack00000022;
  int iStack00000024;
  int iStack00000028;
  uint uStack0000002c;
  
  while( true ) {
    iStack00000010 = in_v0 - in_v1;
    iStack00000014 = (int)unaff_s4[1] - (int)*(short *)((int)&def[-1].fracCurr + 2);
    iStack00000018 = (int)unaff_s4[2] - (int)def->currkey;
    setCopReg(2,in_t1,*in_t0);
    setCopReg(2,in_t2,in_t0[1]);
    setCopReg(2,in_t3,in_t0[2]);
    copFunction(2,0xa00428);
    uVar4 = getCopReg(2,0x19);
    *in_t0 = uVar4;
    uVar4 = getCopReg(2,0x1a);
    in_t0[1] = uVar4;
    uVar4 = getCopReg(2,0x1b);
    in_t0[2] = uVar4;
    iVar1 = iStack00000010 + iStack00000014 + iStack00000018;
    if (iVar1 < unaff_s6) {
      unaff_s3 = unaff_s0;
      unaff_s6 = iVar1;
    }
    unaff_s0 = unaff_s0 + 1;
    if ((int)*(short *)(unaff_s8 + 1) <= unaff_s0) break;
    in_v0 = (int)*unaff_s4;
    in_v1 = (int)*(short *)&def[3].fracCurr;
    def = def + 4;
  }
  if (unaff_s3 == 0) {
    iVar7 = 1;
  }
  else {
    if (unaff_s3 == (int)*(short *)(unaff_s8 + 1) + -1) {
      iVar7 = (int)*(short *)(unaff_s8 + 1) + -2;
    }
    else {
      iVar1 = *unaff_s8 + unaff_s3 * 0x20;
      setCopReg(2,in_t1,(int)*unaff_s4 - (int)*(short *)(iVar1 + -0x1e));
      setCopReg(2,in_t2,(int)unaff_s4[1] - (int)*(short *)(iVar1 + -0x1c));
      setCopReg(2,in_t3,(int)unaff_s4[2] - (int)*(short *)(iVar1 + -0x1a));
      copFunction(2,0xa00428);
      iVar1 = getCopReg(2,0x19);
      iVar5 = getCopReg(2,0x1a);
      iVar8 = getCopReg(2,0x1b);
      iVar7 = *unaff_s8 + unaff_s3 * 0x20;
      setCopReg(2,in_t1,(int)*unaff_s4 - (int)*(short *)(iVar7 + 0x22));
      setCopReg(2,in_t2,(int)unaff_s4[1] - (int)*(short *)(iVar7 + 0x24));
      setCopReg(2,in_t3,(int)unaff_s4[2] - (int)*(short *)(iVar7 + 0x26));
      copFunction(2,0xa00428);
      iStack00000010 = getCopReg(2,0x19);
      iStack00000014 = getCopReg(2,0x1a);
      iStack00000018 = getCopReg(2,0x1b);
      iVar7 = unaff_s3 + 1;
      if (iVar1 + iVar5 + iVar8 <= iStack00000010 + iStack00000014 + iStack00000018) {
        iVar7 = unaff_s3 + -1;
      }
    }
  }
  uVar4 = 1;
  sVar6 = (short)unaff_s3;
  sStack00000020 = sVar6;
  if (iVar7 < unaff_s3) {
    sStack00000020 = (short)iVar7;
  }
  uStack0000002c = (uint)(iVar7 < unaff_s3);
  iVar5 = 0;
  iStack00000024 = 0;
  iVar8 = (int)*(short *)((int)sStack00000020 * 0x20 + *unaff_s8);
  iVar1 = 0;
  uStack00000022 = 0;
  iStack00000028 = unaff_s6;
  if (0 < iVar8) {
    do {
      psVar3 = in_t1;
      FUN_80041558();
      iStack00000024 = iStack00000024 + 0x1000;
      setCopReg(2,psVar3,(int)*unaff_s4 -
                         (int)SoundEffectChannel_ARRAY_800d1374[0].pitchChangeErrPerUpdate);
      setCopReg(2,uVar4,(int)unaff_s4[1] -
                        (int)SoundEffectChannel_ARRAY_800d1374[0].pitchChangeError);
      setCopReg(2,in_t3,(int)unaff_s4[2] - (int)SoundEffectChannel_ARRAY_800d1374[1]._0_2_);
      copFunction(2,0xa00428);
      iStack00000010 = getCopReg(2,0x19);
      iStack00000014 = getCopReg(2,0x1a);
      iStack00000018 = getCopReg(2,0x1b);
      iVar2 = iStack00000010 + iStack00000014 + iStack00000018;
      if (iVar2 < unaff_s6) {
        iVar1 = iVar5;
        unaff_s6 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  if (uStack0000002c == 0) {
    *in_t1 = sVar6;
  }
  else {
    if (iStack00000028 <= unaff_s6) {
      *in_t1 = sVar6;
      *(undefined4 *)(in_t1 + 2) = 0;
      goto LAB_80041510;
    }
    *in_t1 = (short)iVar7;
  }
  *(int *)(in_t1 + 2) = iVar1 << 0xc;
LAB_80041510:
  in_t1[1] = 0;
  FUN_80041558();
  return (_SVector *)&SoundEffectChannel_ARRAY_800d1374[0].pitchChangeErrPerUpdate;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetData(struct Spline *spline /*$s1*/, struct SplineDef *def /*$s0*/, void *p /*$s4*/)
 // line 933, offset 0x800415c0
	/* begin block 1 */
		// Start line: 934
		// Start offset: 0x800415C0
		// Variables:
	// 		unsigned long gotDataOk; // $s3
	// 		unsigned long isRot; // $s2
	// 		int count; // $v1
	// 		struct _G2Quat_Type quat; // stack offset -40
	// 		struct _G2EulerAngles_Type ea; // stack offset -32

		/* begin block 1.1 */
			// Start line: 965
			// Start offset: 0x80041694
		/* end block 1.1 */
		// End offset: 0x80041694
		// End Line: 966

		/* begin block 1.2 */
			// Start line: 976
			// Start offset: 0x800416D0
		/* end block 1.2 */
		// End offset: 0x800416D0
		// End Line: 977

		/* begin block 1.3 */
			// Start line: 990
			// Start offset: 0x8004174C
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct vecS *_v1; // $v0
		/* end block 1.3 */
		// End offset: 0x80041778
		// End Line: 990
	/* end block 1 */
	// End offset: 0x800417AC
	// End Line: 1000

	/* begin block 2 */
		// Start line: 1866
	/* end block 2 */
	// End Line: 1867

ulong SplineGetData(Spline *spline,SplineDef *def,void *p)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int in_v0;
  int iVar4;
  short *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (in_v0 == 1) {
    sVar1 = *(short *)((int)*unaff_s0 * 10 + *unaff_s1);
  }
  else {
    sVar1 = *(short *)((int)*unaff_s0 * 0x20 + *unaff_s1);
  }
  if (((int)sVar1 == 0) || (*(int *)(unaff_s0 + 2) == 0)) {
    if (unaff_s2 == 0) {
      iVar4 = *unaff_s1 + (int)*unaff_s0 * 0x20;
      uVar2 = *(undefined2 *)(iVar4 + 4);
      uVar3 = *(undefined2 *)(iVar4 + 6);
      *(undefined2 *)unaff_s4 = *(undefined2 *)(iVar4 + 2);
      *(undefined2 *)((int)unaff_s4 + 2) = uVar2;
      *(undefined2 *)(unaff_s4 + 1) = uVar3;
    }
    else {
      iVar4 = (int)*unaff_s0 * 10 + *unaff_s1;
      in_stack_00000018 = *(undefined4 *)(iVar4 + 2);
      in_stack_0000001c = *(undefined4 *)(iVar4 + 6);
    }
  }
  else {
    if (unaff_s2 == 0) {
      FUN_80040bb0();
    }
    else {
      FUN_800963cc(*(int *)(unaff_s0 + 2) / (int)sVar1,*unaff_s1 + (int)*unaff_s0 * 10 + 2,
                   (int)*unaff_s0 * 10 + *unaff_s1 + 0xc,&stack0x00000018);
    }
  }
  if (unaff_s2 != 0) {
    FUN_80095fb0(&stack0x00000018,&stack0x00000020,0x15);
    *unaff_s4 = in_stack_00000020;
    unaff_s4[1] = in_stack_00000024;
  }
  return 1;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetQuatData(struct Spline *spline /*$s1*/, struct SplineDef *def /*$s0*/, void *p /*$s3*/)
 // line 1003, offset 0x800417d0
	/* begin block 1 */
		// Start line: 1004
		// Start offset: 0x800417D0
		// Variables:
	// 		unsigned long gotDataOk; // $s2
	// 		int count; // $a0
	// 		struct _G2Quat_Type quat; // stack offset -32

		/* begin block 1.1 */
			// Start line: 1023
			// Start offset: 0x80041868
		/* end block 1.1 */
		// End offset: 0x80041868
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x800418E4
	// End Line: 1039

	/* begin block 2 */
		// Start line: 1703
	/* end block 2 */
	// End Line: 1704

ulong SplineGetQuatData(Spline *spline,SplineDef *def,void *p)

{
  int in_v0;
  int iVar1;
  int in_v1;
  short *psVar2;
  short *unaff_s0;
  int *unaff_s1;
  undefined4 *unaff_s3;
  undefined4 uStack00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  psVar2 = (short *)((in_v1 + in_v0) * 2 + *unaff_s1);
  if ((int)*psVar2 != 0) {
    if (*(int *)(unaff_s0 + 2) != 0) {
      uStack00000010 = 0;
      FUN_800963cc(*(int *)(unaff_s0 + 2) / (int)*psVar2,psVar2 + 1,psVar2 + 6,&stack0x00000018);
      goto LAB_8004185c;
    }
  }
  iVar1 = (int)*unaff_s0 * 10 + *unaff_s1;
  in_stack_00000018 = *(undefined4 *)(iVar1 + 2);
  in_stack_0000001c = *(undefined4 *)(iVar1 + 6);
LAB_8004185c:
  *unaff_s3 = in_stack_00000018;
  unaff_s3[1] = in_stack_0000001c;
  return 1;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetNext(struct Spline *spline /*$s1*/, struct SplineDef *def /*$s0*/)
 // line 1052, offset 0x80041904
	/* begin block 1 */
		// Start line: 1053
		// Start offset: 0x80041904
		// Variables:
	// 		unsigned long movedSplineOk; // $s3
	// 		int count; // $s2
	/* end block 1 */
	// End offset: 0x80041A00
	// End Line: 1106

	/* begin block 2 */
		// Start line: 1805
	/* end block 2 */
	// End Line: 1806

ulong SplineGetNext(Spline *spline,SplineDef *def)

{
  short sVar1;
  int iVar2;
  short *unaff_s0;
  int *unaff_s1;
  ulong unaff_s3;
  
  sVar1 = *(short *)((int)spline * 0x20 + *unaff_s1);
  FUN_80040d20();
  iVar2 = *(int *)(unaff_s0 + 2);
  *(int *)(unaff_s0 + 2) = iVar2 + 0x1000;
  if ((int)sVar1 <= (iVar2 + 0x1000) * 0x10 >> 0x10) {
    *(undefined4 *)(unaff_s0 + 2) = 0;
    *unaff_s0 = *unaff_s0 + 1;
    if ((int)*(short *)(unaff_s1 + 1) + -1 < (int)*unaff_s0) {
      unaff_s3 = 0;
      if ((unaff_s1[1] & 0x6000000U) == 0) {
        *unaff_s0 = *(short *)(unaff_s1 + 1) + -1;
      }
      else {
        *unaff_s0 = 0;
      }
    }
  }
  return unaff_s3;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetPrev(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/)
 // line 1118, offset 0x80041a20
	/* begin block 1 */
		// Start line: 1119
		// Start offset: 0x80041A20
		// Variables:
	// 		unsigned long movedSplineOk; // $s2
	// 		unsigned long isRot; // $a1
	// 		int count; // $v0
	/* end block 1 */
	// End offset: 0x80041B30
	// End Line: 1184

	/* begin block 2 */
		// Start line: 1941
	/* end block 2 */
	// End Line: 1942

ulong SplineGetPrev(Spline *spline,SplineDef *def)

{
  short sVar1;
  ushort uVar2;
  int *unaff_s0;
  ushort *unaff_s1;
  ulong unaff_s2;
  
  uVar2 = *unaff_s1 - 1;
  if ((short)*unaff_s1 < 1) {
    if ((unaff_s0[1] & 0x6000000U) == 0) {
      *unaff_s1 = 0;
      *(undefined4 *)(unaff_s1 + 2) = 0;
      return 0;
    }
    uVar2 = *(short *)(unaff_s0 + 1) - 2;
    *unaff_s1 = uVar2;
  }
  else {
    *unaff_s1 = uVar2;
  }
  if (def == (SplineDef *)0x0) {
    sVar1 = *(short *)(((int)((uint)uVar2 << 0x10) >> 0xb) + *unaff_s0);
  }
  else {
    sVar1 = *(short *)((int)(short)uVar2 * 10 + *unaff_s0);
  }
  *(int *)(unaff_s1 + 2) = ((int)sVar1 + -1) * 0x1000;
  return unaff_s2;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetOffsetNext(struct Spline *spline /*$s2*/, struct SplineDef *def /*$s1*/, long fracOffset /*$s5*/)
 // line 1205, offset 0x80041b4c
	/* begin block 1 */
		// Start line: 1206
		// Start offset: 0x80041B4C
		// Variables:
	// 		unsigned long movedSplineOk; // $s3
	// 		unsigned long isRot; // $s4
	// 		int count; // $s0
	/* end block 1 */
	// End offset: 0x80041D08
	// End Line: 1271

	/* begin block 2 */
		// Start line: 2119
	/* end block 2 */
	// End Line: 2120

ulong SplineGetOffsetNext(Spline *spline,SplineDef *def,long fracOffset)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  short *unaff_s1;
  int *unaff_s2;
  ulong unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  iVar3 = (int)*(short *)(((int)&def->currkey + in_v0 << (unaff_s3 & 0x1f)) + *unaff_s2);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  FUN_80040d20();
  iVar2 = *(int *)(unaff_s1 + 2);
  *(int *)(unaff_s1 + 2) = iVar2 + unaff_s5;
  if (iVar3 < iVar2 + unaff_s5 >> 0xc) {
    do {
      *unaff_s1 = *unaff_s1 + 1;
      *(int *)(unaff_s1 + 2) = *(int *)(unaff_s1 + 2) + iVar3 * -0x1000;
      if ((int)*(short *)(unaff_s2 + 1) + -1 < (int)*unaff_s1) {
        if ((unaff_s2[1] & 0x6000000U) == 0) {
          *unaff_s1 = *(short *)(unaff_s2 + 1) + -1;
          unaff_s3 = 0;
        }
        else {
          *unaff_s1 = 0;
        }
        if ((int)*unaff_s1 <= (int)*(short *)(unaff_s2 + 1) + -1) goto LAB_80041c20;
      }
      else {
LAB_80041c20:
        if (unaff_s4 == 0) {
          sVar1 = *(short *)((int)*unaff_s1 * 0x20 + *unaff_s2);
        }
        else {
          sVar1 = *(short *)((int)*unaff_s1 * 10 + *unaff_s2);
        }
        iVar3 = (int)sVar1;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
      }
    } while (iVar3 < *(int *)(unaff_s1 + 2) >> 0xc);
  }
  return unaff_s3;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SplineGetOffsetPrev(struct Spline *spline /*$s1*/, struct SplineDef *def /*$s0*/, long fracOffset /*$s3*/)
 // line 1284, offset 0x80041d30
	/* begin block 1 */
		// Start line: 1285
		// Start offset: 0x80041D30
		// Variables:
	// 		unsigned long movedSplineOk; // $s2
	// 		unsigned long isRot; // $a1
	// 		int count; // $v1
	/* end block 1 */
	// End offset: 0x80041E84
	// End Line: 1350

	/* begin block 2 */
		// Start line: 2280
	/* end block 2 */
	// End Line: 2281

ulong SplineGetOffsetPrev(Spline *spline,SplineDef *def,long fracOffset)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  ushort *unaff_s0;
  int *unaff_s1;
  ulong unaff_s2;
  int unaff_s3;
  
  iVar3 = *(int *)(unaff_s0 + 2) - unaff_s3;
  *(int *)(unaff_s0 + 2) = iVar3;
  do {
    if (-1 < iVar3) {
      return unaff_s2;
    }
    uVar2 = *unaff_s0 - 1;
    if ((short)*unaff_s0 < 1) {
      if ((unaff_s1[1] & 0x6000000U) != 0) {
        uVar2 = *(short *)(unaff_s1 + 1) - 1;
        *unaff_s0 = uVar2;
        if (def != (SplineDef *)0x0) goto LAB_80041db0;
LAB_80041ddc:
        sVar1 = *(short *)(((int)((uint)uVar2 << 0x10) >> 0xb) + *unaff_s1);
        goto code_r0x80041df0;
      }
      unaff_s2 = 0;
      *unaff_s0 = 0;
      *(undefined4 *)(unaff_s0 + 2) = 0;
    }
    else {
      *unaff_s0 = uVar2;
      if (def == (SplineDef *)0x0) goto LAB_80041ddc;
LAB_80041db0:
      sVar1 = *(short *)((int)(short)uVar2 * 10 + *unaff_s1);
code_r0x80041df0:
      iVar3 = (int)sVar1;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      *(int *)(unaff_s0 + 2) = *(int *)(unaff_s0 + 2) + iVar3 * 0x1000;
    }
    iVar3 = *(int *)(unaff_s0 + 2);
  } while( true );
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetOffsetNextPoint(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/, long offset /*$a2*/)
 // line 1354, offset 0x80041ea4
	/* begin block 1 */
		// Start line: 1355
		// Start offset: 0x80041EA4
		// Variables:
	// 		static struct _SVector point; // offset 0x28
	/* end block 1 */
	// End offset: 0x80041EE8
	// End Line: 1366

	/* begin block 2 */
		// Start line: 2425
	/* end block 2 */
	// End Line: 2426

_SVector * SplineGetOffsetNextPoint(Spline *spline,SplineDef *def,long offset)

{
  int iVar1;
  
  iVar1 = FUN_80041cc8();
  if ((iVar1 != 0) && (iVar1 = FUN_80041558(), iVar1 != 0)) {
    return (_SVector *)&SoundEffectChannel_ARRAY_800d1374[1].volumeChangeError;
  }
  return (_SVector *)0x0;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetOffsetPreviousPoint(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/, long offset /*$a2*/)
 // line 1368, offset 0x80041efc
	/* begin block 1 */
		// Start line: 1369
		// Start offset: 0x80041EFC
		// Variables:
	// 		static struct _SVector point; // offset 0x30
	/* end block 1 */
	// End offset: 0x80041F40
	// End Line: 1380

	/* begin block 2 */
		// Start line: 2455
	/* end block 2 */
	// End Line: 2456

_SVector * SplineGetOffsetPreviousPoint(Spline *spline,SplineDef *def,long offset)

{
  uint uVar1;
  undefined *puVar2;
  uint unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x584) = 0;
  *(undefined4 *)(unaff_s1 + 0x580) = 0;
  *(undefined4 *)(unaff_s1 + 0x58c) = 0;
  *(undefined4 *)(unaff_s1 + 0x588) = 0;
  *(undefined4 *)(&DAT_00006d94 + unaff_s1) = 0;
  *(undefined4 *)(&DAT_00006d90 + unaff_s1) = 0;
  *(undefined4 *)(&DAT_00006d9c + unaff_s1) = 0;
  *(undefined4 *)(&DAT_00006d98 + unaff_s1) = 0;
  *(undefined4 *)(&DAT_00006da4 + unaff_s1) = 0;
  *(undefined4 *)(&DAT_00006da0 + unaff_s1) = 0;
  uVar1 = unaff_s1;
  if (unaff_s1 < unaff_s1 + 0x580) {
    do {
      FUN_8004f500(unaff_s1 + 0x588,uVar1);
      uVar1 = uVar1 + 0x2c;
    } while (uVar1 < unaff_s1 + 0x580);
  }
  puVar2 = (undefined *)(unaff_s1 + 0x590);
  while (puVar2 < &DAT_00006d90 + unaff_s1) {
    FUN_8004f500(&DAT_00006da0 + unaff_s1,puVar2);
    puVar2 = puVar2 + 0x68;
  }
  SoundEffectChannel_ARRAY_800d13bc[0].handle = 0;
  SoundEffectChannel_ARRAY_800d13bc[0]._0_4_ = 0x800d13b4;
  FUN_8004dacc();
  snow_amount = 0;
  rain_amount = 0;
  current_rain_fade = 0;
  FX_reaver_instance = (_Instance *)0x0;
  SoundEffectChannel_ARRAY_800d13bc[0].volume = 1;
  SoundEffectChannel_ARRAY_800d13bc[0].volumeChangeTime = 0;
  return (_SVector *)&DAT_00000001;
}





