#include "THISDUST.H"
#include "MATH3D.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_Sort3VectorCoords(long *a /*$a0*/, long *b /*$a1*/, long *c /*$a2*/)
 // line 220, offset 0x80039478
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80039478
		// Variables:
	// 		long a1; // $t0
	// 		long b1; // $v1
	// 		long c1; // $a3
	/* end block 1 */
	// End offset: 0x800394F4
	// End Line: 256

	/* begin block 2 */
		// Start line: 371
	/* end block 2 */
	// End Line: 372

	/* begin block 3 */
		// Start line: 440
	/* end block 3 */
	// End Line: 441

	/* begin block 4 */
		// Start line: 372
	/* end block 4 */
	// End Line: 373

void MATH3D_Sort3VectorCoords(long *a,long *b,long *c)

{
  long in_a3;
  long in_t0;
  
  *b = in_a3;
  *c = in_t0;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MATH3D_LengthXYZ(long x /*$a0*/, long y /*$a1*/, long z /*$a2*/)
 // line 258, offset 0x800394fc
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x800394FC
		// Variables:
	// 		long t; // $v0
	/* end block 1 */
	// End offset: 0x800395C4
	// End Line: 309

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

	/* begin block 3 */
		// Start line: 448
	/* end block 3 */
	// End Line: 449

	/* begin block 4 */
		// Start line: 449
	/* end block 4 */
	// End Line: 450

long MATH3D_LengthXYZ(long x,long y,long z)

{
  int in_v0;
  int iVar1;
  
  iVar1 = in_v0 * 0x1e + y * 0xc + x * 9;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1f;
  }
  return iVar1 >> 5;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MATH3D_LengthXY(long x /*$a0*/, long y /*$a1*/)
 // line 312, offset 0x800395cc
	/* begin block 1 */
		// Start line: 555
	/* end block 1 */
	// End Line: 556

	/* begin block 2 */
		// Start line: 556
	/* end block 2 */
	// End Line: 557

long MATH3D_LengthXY(long x,long y)

{
                    /* WARNING: Subroutine does not return */
  FUN_80039494((int)*(short *)x << 2,(int)*(short *)(x + 2) << 2,(int)*(short *)(x + 4) << 2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_Normalize(struct _Normal *normal /*$s0*/)
 // line 328, offset 0x8003962c
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x8003962C
		// Variables:
	// 		long length; // $a1
	/* end block 1 */
	// End offset: 0x800396AC
	// End Line: 345

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

void MATH3D_Normalize(_Normal *normal)

{
  int in_v0;
  undefined2 in_v1;
  int in_a1;
  undefined2 *unaff_s0;
  
  *unaff_s0 = (short)normal;
  unaff_s0[1] = in_v1;
  unaff_s0[2] = (short)((in_v0 << 0xe) / in_a1);
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ MATH3D_FastAtan2(long y /*$a0*/, long x /*$a1*/)
 // line 349, offset 0x800396bc
	/* begin block 1 */
		// Start line: 351
		// Start offset: 0x800396BC
		// Variables:
	// 		long ax; // $a3
	// 		long ay; // $a2
	/* end block 1 */
	// End offset: 0x800397D0
	// End Line: 401

	/* begin block 2 */
		// Start line: 619
	/* end block 2 */
	// End Line: 620

	/* begin block 3 */
		// Start line: 620
	/* end block 3 */
	// End Line: 621

	/* begin block 4 */
		// Start line: 623
	/* end block 4 */
	// End Line: 624

short MATH3D_FastAtan2(long y,long x)

{
  int in_a2;
  int in_a3;
  
  return (short)((in_a2 << 9) / in_a3);
}



// decompiled code
// original method signature: 
// long /*$ra*/ MATH3D_FastSqrt(long square /*$a0*/)
 // line 456, offset 0x800397d8
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x800397D8

		/* begin block 1.1 */
			// Start line: 458
			// Start offset: 0x800397E0
			// Variables:
		// 		unsigned long result; // $t0
		// 		long remainder; // $v0
		// 		long mask; // $a1
		// 		long shift; // $a2
		// 		long mask_squared; // $a3
		// 		long result_shift; // $v1
		/* end block 1.1 */
		// End offset: 0x800398B0
		// End Line: 504
	/* end block 1 */
	// End offset: 0x800398B0
	// End Line: 506

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

	/* begin block 3 */
		// Start line: 836
	/* end block 3 */
	// End Line: 837

long MATH3D_FastSqrt(long square)

{
  int iVar1;
  int iVar2;
  int in_v1;
  int iVar3;
  uint in_a1;
  int in_a2;
  int in_a3;
  int iVar4;
  uint in_t0;
  int in_t1;
  
  do {
    in_v1 = in_v1 >> 1;
    while( true ) {
      in_a2 = in_a2 + -1;
      in_a3 = in_a3 >> 2;
      if (in_a2 == in_t1) {
        iVar3 = in_v1 << 0xc;
        iVar4 = 0x1000;
        iVar1 = square << 0xc;
        while( true ) {
          in_a1 = (int)in_a1 >> 1;
          iVar4 = iVar4 >> 2;
          if (in_a1 == 0) break;
          iVar2 = iVar1 - (iVar3 + iVar4);
          iVar3 = iVar3 >> 1;
          if (-1 < iVar2) {
            iVar3 = iVar3 + iVar4;
            in_t0 = in_t0 | in_a1;
            iVar1 = iVar2;
          }
        }
        return in_t0;
      }
      iVar1 = square - (in_v1 + in_a3);
      in_a1 = (int)in_a1 >> 1;
      if (iVar1 < 0) break;
      in_v1 = (in_v1 >> 1) + in_a3;
      in_t0 = in_t0 | in_a1;
      square = iVar1;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// long /*$ra*/ MATH3D_FastSqrt0(long square /*$a0*/)
 // line 511, offset 0x800398b8
	/* begin block 1 */
		// Start line: 513
		// Start offset: 0x800398B8

		/* begin block 1.1 */
			// Start line: 513
			// Start offset: 0x800398C0
			// Variables:
		// 		unsigned long result; // $t0
		// 		long remainder; // $v0
		// 		long mask; // $a2
		// 		long shift; // $a1
		// 		long mask_squared; // $a3
		// 		long result_shift; // $v1
		/* end block 1.1 */
		// End offset: 0x80039940
		// End Line: 546
	/* end block 1 */
	// End offset: 0x80039940
	// End Line: 548

	/* begin block 2 */
		// Start line: 945
	/* end block 2 */
	// End Line: 946

	/* begin block 3 */
		// Start line: 946
	/* end block 3 */
	// End Line: 947

long MATH3D_FastSqrt0(long square)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int in_a1;
  uint in_a2;
  int in_a3;
  uint in_t0;
  int in_t1;
  
  do {
    iVar1 = in_v0;
    in_v1 = in_v1 + in_a3;
    in_t0 = in_t0 | in_a2;
    do {
      in_a1 = in_a1 + -1;
      in_a2 = (int)in_a2 >> 1;
      if (in_a1 == in_t1) {
        return in_t0;
      }
      in_a3 = in_a3 >> 2;
      in_v0 = (iVar1 - in_v1) - in_a3;
      in_v1 = in_v1 >> 1;
    } while (in_v0 < 0);
  } while( true );
}



// decompiled code
// original method signature: 
// long /*$ra*/ MATH3D_DistanceBetweenPositions(struct _Position *pos1 /*$v0*/, struct _Position *pos2 /*$a1*/)
 // line 607, offset 0x80039948
	/* begin block 1 */
		// Start line: 608
		// Start offset: 0x80039948
	/* end block 1 */
	// End offset: 0x80039948
	// End Line: 608

	/* begin block 2 */
		// Start line: 1214
	/* end block 2 */
	// End Line: 1215

long MATH3D_DistanceBetweenPositions(_Position *pos1,_Position *pos2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((pos1->y == pos2->y) && (pos1->z == pos2->z)) {
    return 0;
  }
  iVar2 = (int)pos1->x * (int)pos2->x + (int)pos1->y * (int)pos2->y + (int)pos1->z * (int)pos2->z +
          0x800 >> 0xc;
  if (iVar2 < 0x1001) {
    iVar3 = iVar2 * iVar2;
    if (-0x1001 < iVar2) goto LAB_800399e4;
    iVar2 = -0x1000;
  }
  else {
    iVar2 = 0x1000;
  }
  iVar3 = iVar2 * iVar2;
LAB_800399e4:
  uVar1 = FUN_80039850(0x1000000 - iVar3);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c(uVar1,iVar2);
}



// decompiled code
// original method signature: 
// short /*$ra*/ MATH3D_AngleBetweenVectors(struct _SVector *vector1 /*$a0*/, struct _SVector *vector2 /*$a1*/)
 // line 616, offset 0x80039994
	/* begin block 1 */
		// Start line: 617
		// Start offset: 0x80039994
		// Variables:
	// 		long projection_length; // $s0
	/* end block 1 */
	// End offset: 0x80039A70
	// End Line: 636

	/* begin block 2 */
		// Start line: 1098
	/* end block 2 */
	// End Line: 1099

short MATH3D_AngleBetweenVectors(_SVector *vector1,_SVector *vector2)

{
  int in_v0;
  undefined4 uVar1;
  int in_v1;
  int in_a3;
  int iVar2;
  int iVar3;
  
  iVar2 = in_a3 + in_v1 * in_v0 + (int)vector1->z * (int)vector2->z + 0x800 >> 0xc;
  if (iVar2 < 0x1001) {
    iVar3 = iVar2 * iVar2;
    if (-0x1001 < iVar2) goto LAB_800399e4;
    iVar2 = -0x1000;
  }
  else {
    iVar2 = 0x1000;
  }
  iVar3 = iVar2 * iVar2;
LAB_800399e4:
  uVar1 = FUN_80039850(0x1000000 - iVar3);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c(uVar1,iVar2);
}



// autogenerated function stub: 
// void /*$ra*/ MATH3D_RotMatAboutVec(struct _SVector *vec /*$s1*/, struct MATRIX *mat /*$s2*/, short angle /*$a2*/)
void MATH3D_RotMatAboutVec(struct _SVector *vec, struct MATRIX *mat, short angle)
{ // line 638, offset 0x80039a80
	/* begin block 1 */
		// Start line: 639
		// Start offset: 0x80039A80
		// Variables:
			long length; // $s0
			struct SVECTOR rot_angs; // stack offset -96
			struct MATRIX mat1; // stack offset -88
			struct MATRIX mat2; // stack offset -56
	/* end block 1 */
	// End offset: 0x80039B34
	// End Line: 657

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

}


// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_SetUnityMatrix(struct MATRIX *mat /*$a0*/)
 // line 659, offset 0x80039b50
	/* begin block 1 */
		// Start line: 1198
	/* end block 1 */
	// End Line: 1199

	/* begin block 2 */
		// Start line: 1199
	/* end block 2 */
	// End Line: 1200

void MATH3D_SetUnityMatrix(MATRIX *mat)

{
  short sVar1;
  int in_v0;
  ushort uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  ushort unaff_s2;
  ushort *unaff_s3;
  
  if (-(int)mat < in_v0 >> 0x10) {
    *unaff_s3 = unaff_s2;
    return;
  }
  uVar2 = (ushort)unaff_s0;
  sVar1 = (short)unaff_s1;
  if ((int)mat < 1) {
    if (-1 < (int)mat) goto LAB_80039b90;
    sVar1 = -sVar1;
  }
  uVar2 = uVar2 + sVar1;
LAB_80039b90:
  *unaff_s3 = uVar2 & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AngleMoveToward(short *current_ptr /*$s3*/, short destination /*$a1*/, short step /*$a2*/)
 // line 675, offset 0x80039b6c
	/* begin block 1 */
		// Start line: 676
		// Start offset: 0x80039B6C
		// Variables:
	// 		long diff; // $a0
	// 		short current; // $s0
	/* end block 1 */
	// End offset: 0x80039BFC
	// End Line: 695

	/* begin block 2 */
		// Start line: 1230
	/* end block 2 */
	// End Line: 1231

void AngleMoveToward(short *current_ptr,short destination,short step)

{
  short sVar1;
  ushort uVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  ushort unaff_s2;
  ushort *unaff_s3;
  
  *unaff_s3 = unaff_s2;
  uVar2 = (ushort)unaff_s0;
  sVar1 = (short)unaff_s1;
  if ((int)current_ptr < 1) {
    if (-1 < (int)current_ptr) goto LAB_80039b90;
    sVar1 = -sVar1;
  }
  uVar2 = uVar2 + sVar1;
LAB_80039b90:
  *unaff_s3 = uVar2 & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ AngleDiff(short current /*$a0*/, short destination /*$a1*/)
 // line 700, offset 0x80039c18
	/* begin block 1 */
		// Start line: 702
		// Start offset: 0x80039C18
	/* end block 1 */
	// End offset: 0x80039C30
	// End Line: 706

	/* begin block 2 */
		// Start line: 1284
	/* end block 2 */
	// End Line: 1285

	/* begin block 3 */
		// Start line: 1285
	/* end block 3 */
	// End Line: 1286

	/* begin block 4 */
		// Start line: 1287
	/* end block 4 */
	// End Line: 1288

short AngleDiff(short current,short destination)

{
  undefined2 in_register_00000012;
  
  rmzyx_1(CONCAT22(in_register_00000012,current),&stack0x00000010);
                    /* WARNING: Subroutine does not return */
  FUN_80095ff4(&stack0x00000030,&stack0x00000010,0x15);
}



// decompiled code
// original method signature: 
// short /*$ra*/ MATH3D_AngleFromPosToPos(struct _Position *from /*$a0*/, struct _Position *to /*$a1*/)
 // line 712, offset 0x80039c3c
	/* begin block 1 */
		// Start line: 713
		// Start offset: 0x80039C3C
	/* end block 1 */
	// End offset: 0x80039C3C
	// End Line: 713

	/* begin block 2 */
		// Start line: 1308
	/* end block 2 */
	// End Line: 1309

short MATH3D_AngleFromPosToPos(_Position *from,_Position *to)

{
  undefined2 in_v0;
  undefined2 *unaff_s0;
  undefined2 in_stack_00000032;
  short in_stack_00000034;
  
  *unaff_s0 = in_v0;
  unaff_s0[1] = in_stack_00000032;
  unaff_s0[2] = in_stack_00000034;
  return in_stack_00000034;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_ZYXtoXYZ(struct _Rotation *rot /*$s0*/)
 // line 723, offset 0x80039c74
	/* begin block 1 */
		// Start line: 724
		// Start offset: 0x80039C74
		// Variables:
	// 		struct MATRIX tempMat; // stack offset -48
	// 		struct _G2EulerAngles_Type ea; // stack offset -16
	/* end block 1 */
	// End offset: 0x80039C74
	// End Line: 724

	/* begin block 2 */
		// Start line: 1331
	/* end block 2 */
	// End Line: 1332

void MATH3D_ZYXtoXYZ(_Rotation *rot)

{
  short sVar1;
  short *in_a1;
  short *unaff_s1;
  
  sVar1 = FUN_80039850(((int)*unaff_s1 - (int)*in_a1) * ((int)*unaff_s1 - (int)*in_a1) +
                       ((int)unaff_s1[1] - (int)in_a1[1]) * ((int)unaff_s1[1] - (int)in_a1[1]));
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)in_a1[2] - (int)unaff_s1[2],(int)sVar1);
}



// autogenerated function stub: 
// short /*$ra*/ MATH3D_ElevationFromPosToPos(struct _Position *from /*$s1*/, struct _Position *to /*$s0*/)
short MATH3D_ElevationFromPosToPos(struct _Position *from, struct _Position *to)
{ // line 738, offset 0x80039cd0
	/* begin block 1 */
		// Start line: 739
		// Start offset: 0x80039CD0
	/* end block 1 */
	// End offset: 0x80039CD0
	// End Line: 739

	/* begin block 2 */
		// Start line: 1361
	/* end block 2 */
	// End Line: 1362

	return 0;
}


// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_RotationFromPosToPos(struct _Position *from /*$s0*/, struct _Position *to /*$s2*/, struct _Rotation *rot /*$s1*/)
 // line 754, offset 0x80039d54
	/* begin block 1 */
		// Start line: 1394
	/* end block 1 */
	// End Line: 1395

void MATH3D_RotationFromPosToPos(_Position *from,_Position *to,_Rotation *rot)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MATH3D_veclen2(int ix /*$v1*/, int iy /*$a1*/)
 // line 762, offset 0x80039da8
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x80039DA8
		// Variables:
	// 		int t; // $a0
	/* end block 1 */
	// End offset: 0x80039DDC
	// End Line: 776

	/* begin block 2 */
		// Start line: 1412
	/* end block 2 */
	// End Line: 1413

int MATH3D_veclen2(int ix,int iy)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  _SVector *vec;
  uint in_a3;
  int iVar5;
  short sStack00000030;
  short sStack00000032;
  short sStack00000034;
  
  if (2 < in_a3) {
    psVar2 = (short *)(iy + (in_a3 - 3) * 2);
    iVar1 = (int)psVar2[6];
    MATH3D_RotateAxisToVector((MATRIX *)ix,(MATRIX *)-iVar1,vec,-(int)*psVar2);
    return iVar1;
  }
  psVar2 = (short *)(iy + in_a3 * 2);
  iVar5 = (int)*psVar2;
  iVar3 = (int)psVar2[3];
  iVar4 = (int)psVar2[6];
  iVar1 = iVar3 * (int)vec->z - iVar4 * (int)vec->y;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000030 = (short)(iVar1 >> 0xc);
  iVar1 = iVar4 * (int)vec->x - iVar5 * (int)vec->z;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000032 = (short)(iVar1 >> 0xc);
  iVar1 = iVar5 * (int)vec->y - iVar3 * (int)vec->x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000034 = (short)(iVar1 >> 0xc);
  iVar1 = iVar5 * (int)vec->x + iVar3 * (int)vec->y + iVar4 * (int)vec->z;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  iVar1 = FUN_80079134(iVar1 >> 0xc);
  iVar3 = (int)(((iVar1 << 0x10) >> 0x10) + ((uint)(iVar1 << 0x10) >> 0x1f)) >> 1;
  iVar1 = FUN_8003a154((int)sStack00000030,(int)sStack00000032,(int)sStack00000034);
  if (iVar1 < 1) {
    iVar1 = 0x1000;
  }
  else {
    iVar1 = FUN_80039850(iVar1);
  }
  iVar4 = FUN_800790d4(iVar3);
  sStack00000030 = (short)(((int)sStack00000030 * iVar4) / iVar1);
  sStack00000032 = (short)(((int)sStack00000032 * iVar4) / iVar1);
  sStack00000034 = (short)(((int)sStack00000034 * iVar4) / iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_80079104(iVar3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_RotateAxisToVector(struct MATRIX *dest /*$s3*/, struct MATRIX *src /*$s2*/, struct _SVector *vec /*$a2*/, enum MATH3D_AXIS axis /*$a3*/)
 // line 784, offset 0x80039e08
	/* begin block 1 */
		// Start line: 785
		// Start offset: 0x80039E08
		// Variables:
	// 		struct MATRIX xform; // stack offset -64
	// 		struct _G2Quat_Type rot; // stack offset -32
	// 		long len; // $s0
	// 		int theta; // $s1
	// 		int sintheta; // $v0
	// 		int px; // $a3
	// 		int py; // $v1
	// 		int pz; // $a1
	/* end block 1 */
	// End offset: 0x80039FA8
	// End Line: 820

	/* begin block 2 */
		// Start line: 1456
	/* end block 2 */
	// End Line: 1457

void MATH3D_RotateAxisToVector(MATRIX *dest,MATRIX *src,_SVector *vec,MATH3D_AXIS axis)

{
  int iVar1;
  int iVar2;
  int in_v1;
  int iVar3;
  short sStack00000030;
  short sStack00000032;
  short sStack00000034;
  
  iVar1 = in_v1 * (int)vec->z - (int)src * (int)vec->y;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000030 = (short)(iVar1 >> 0xc);
  iVar1 = (int)src * (int)vec->x - axis * (int)vec->z;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000032 = (short)(iVar1 >> 0xc);
  iVar1 = axis * (int)vec->y - in_v1 * (int)vec->x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  sStack00000034 = (short)(iVar1 >> 0xc);
  iVar1 = axis * (int)vec->x + in_v1 * (int)vec->y + (int)src * (int)vec->z;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  iVar1 = FUN_80079134(iVar1 >> 0xc);
  iVar3 = (int)(((iVar1 << 0x10) >> 0x10) + ((uint)(iVar1 << 0x10) >> 0x1f)) >> 1;
  iVar1 = FUN_8003a154((int)sStack00000030,(int)sStack00000032,(int)sStack00000034);
  if (iVar1 < 1) {
    iVar1 = 0x1000;
  }
  else {
    iVar1 = FUN_80039850(iVar1);
  }
  iVar2 = FUN_800790d4(iVar3);
  sStack00000030 = (short)(((int)sStack00000030 * iVar2) / iVar1);
  sStack00000032 = (short)(((int)sStack00000032 * iVar2) / iVar1);
  sStack00000034 = (short)(((int)sStack00000034 * iVar2) / iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_80079104(iVar3);
}



// decompiled code
// original method signature: 
// int /*$ra*/ MATH3D_ConeDetect(struct _SVector *pos /*$s2*/, int arc /*$s0*/, int elevation /*$s4*/)
 // line 859, offset 0x8003a060
	/* begin block 1 */
		// Start line: 860
		// Start offset: 0x8003A060
		// Variables:
	// 		long y; // $s1
	// 		long x; // $s3

		/* begin block 1.1 */
			// Start line: 866
			// Start offset: 0x8003A0BC
		/* end block 1.1 */
		// End offset: 0x8003A0F4
		// End Line: 872
	/* end block 1 */
	// End offset: 0x8003A0F8
	// End Line: 874

	/* begin block 2 */
		// Start line: 1718
	/* end block 2 */
	// End Line: 1719

int MATH3D_ConeDetect(_SVector *pos,int arc,int elevation)

{
  short sVar1;
  int unaff_s4;
  
  if ((int)pos < 0) {
    pos = (_SVector *)-(int)pos;
  }
  sVar1 = FUN_80039654(pos);
  return (uint)((int)sVar1 < unaff_s4);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MATH3D_CrossProduct(struct _SVector *t /*$a0*/, struct _SVector *r /*$a1*/, struct _SVector *s /*$a2*/)
 // line 976, offset 0x8003a118
	/* begin block 1 */
		// Start line: 1952
	/* end block 1 */
	// End Line: 1953

	/* begin block 2 */
		// Start line: 1728
	/* end block 2 */
	// End Line: 1729

void MATH3D_CrossProduct(_SVector *t,_SVector *r,_SVector *s)

{
  short in_v0;
  
  t->y = in_v0;
  t->z = (short)((int)r->x * (int)s->y - (int)r->y * (int)s->x >> 0xc);
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MATH3D_SquareLength(long x /*$v0*/, long y /*$a1*/, long z /*$a2*/)
 // line 989, offset 0x8003a1bc
	/* begin block 1 */
		// Start line: 1748
	/* end block 1 */
	// End Line: 1749

ulong MATH3D_SquareLength(long x,long y,long z)

{
  int in_v0;
  ulong uVar1;
  undefined4 in_v1;
  undefined2 in_a3;
  undefined2 in_t0;
  int in_t2;
  int in_hi;
  
  *(undefined2 *)(x + 6) = in_a3;
  *(undefined2 *)(x + 8) = in_t0;
  *(undefined2 *)(x + 10) = *(undefined2 *)(x + 10);
  *(short *)x = (short)(in_t2 >> 7) - (short)((int)in_v1 >> 0x1f);
  *(short *)(x + 2) = (short)(in_hi >> 7) - (short)(y >> 0x1f);
  uVar1 = (int)((longlong)(z << 9) * (longlong)in_v0 >> 0x27) - ((z << 9) >> 0x1f);
  *(undefined2 *)(x + 4) = (short)uVar1;
  return uVar1;
}





