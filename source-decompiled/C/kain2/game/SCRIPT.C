#include "THISDUST.H"
#include "SCRIPT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SCRIPT_CombineEulerAngles(struct _Rotation *combinedRotation /*$s1*/, struct _Rotation *inputRotation1 /*$a1*/, struct _Rotation *inputRotation2 /*$s0*/)
 // line 51, offset 0x8003c6b0
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x8003C6B0
		// Variables:
	// 		struct MATRIX rotMatrix1; // stack offset -88
	// 		struct MATRIX rotMatrix2; // stack offset -56
	// 		struct _G2EulerAngles_Type ea; // stack offset -24

		/* begin block 1.1 */
			// Start line: 52
			// Start offset: 0x8003C6B0
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.1 */
		// End offset: 0x8003C6B0
		// End Line: 52
	/* end block 1 */
	// End offset: 0x8003C6B0
	// End Line: 52

	/* begin block 2 */
		// Start line: 102
	/* end block 2 */
	// End Line: 103

void SCRIPT_CombineEulerAngles
               (_Rotation *combinedRotation,_Rotation *inputRotation1,_Rotation *inputRotation2)

{
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 4) = (short)combinedRotation;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCRIPT_InstanceSplineInit(struct _Instance *instance /*$s2*/)
 // line 163, offset 0x8003c730
	/* begin block 1 */
		// Start line: 164
		// Start offset: 0x8003C730
		// Variables:
	// 		struct Spline *spline; // $s3
	// 		struct RSpline *rspline; // $a0
	// 		struct Spline *sspline; // $s4
	// 		struct MultiSpline *multi; // $s0
	// 		struct SplineDef *sd; // $s5
	// 		struct SplineDef *rsd; // $s1
	// 		struct SplineDef *ssd; // $s6
	// 		unsigned long isParent; // stack offset -40
	// 		unsigned long isClass; // stack offset -36

		/* begin block 1.1 */
			// Start line: 187
			// Start offset: 0x8003C7C4
			// Variables:
		// 		struct _G2Quat_Type *q; // $a0
		// 		struct _G2EulerAngles_Type ea; // stack offset -80

			/* begin block 1.1.1 */
				// Start line: 195
				// Start offset: 0x8003C7EC
				// Variables:
			// 		struct MATRIX introTransform; // stack offset -72
			/* end block 1.1.1 */
			// End offset: 0x8003C824
			// End Line: 204

			/* begin block 1.1.2 */
				// Start line: 209
				// Start offset: 0x8003C838
				// Variables:
			// 		struct _Rotation combinedRotation; // stack offset -72

				/* begin block 1.1.2.1 */
					// Start line: 209
					// Start offset: 0x8003C838
					// Variables:
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a0
				/* end block 1.1.2.1 */
				// End offset: 0x8003C890
				// End Line: 220
			/* end block 1.1.2 */
			// End offset: 0x8003C890
			// End Line: 221
		/* end block 1.1 */
		// End offset: 0x8003C890
		// End Line: 223

		/* begin block 1.2 */
			// Start line: 227
			// Start offset: 0x8003C898
			// Variables:
		// 		struct _SVector *start_point; // $a3

			/* begin block 1.2.1 */
				// Start line: 235
				// Start offset: 0x8003C8BC
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $a0
			// 		short _z0; // $v1
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _Position *_v; // $v0
			// 		struct _Position *_v0; // $v1
			/* end block 1.2.1 */
			// End offset: 0x8003C8BC
			// End Line: 235
		/* end block 1.2 */
		// End offset: 0x8003C918
		// End Line: 244

		/* begin block 1.3 */
			// Start line: 248
			// Start offset: 0x8003C920
			// Variables:
		// 		struct _SVector *start_point; // $v1
		/* end block 1.3 */
		// End offset: 0x8003C958
		// End Line: 258
	/* end block 1 */
	// End offset: 0x8003C958
	// End Line: 259

	/* begin block 2 */
		// Start line: 326
	/* end block 2 */
	// End Line: 327

void SCRIPT_InstanceSplineInit(_Instance *instance)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined2 *puVar6;
  int *unaff_s0;
  int unaff_s2;
  int iVar7;
  int iVar8;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  uVar3 = FUN_8003cc3c();
  iVar7 = *unaff_s0;
  iVar8 = unaff_s0[2];
  if (unaff_s0[1] != 0) {
    uVar4 = FUN_8004109c();
    if ((in_stack_00000038 == 0) && (in_stack_0000003c == 0)) {
      FUN_80079a30(uVar4,unaff_s0 + 0xc);
      if (*(int *)(unaff_s2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        rm_1(*(int *)(unaff_s2 + 0x20) + 0x18,&stack0x00000018);
      }
      *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 1;
    }
    else {
      FUN_80095fb0(uVar4,&stack0x00000010,0);
      *(undefined2 *)(unaff_s2 + 0x74) = in_stack_00000010;
      *(undefined2 *)(unaff_s2 + 0x76) = in_stack_00000012;
      *(undefined2 *)(unaff_s2 + 0x78) = in_stack_00000014;
      FUN_8003c648(&stack0x00000018,unaff_s2 + 0x74,*(int *)(unaff_s2 + 0x20) + 0x18);
      *(undefined2 *)(unaff_s2 + 0x74) = in_stack_00000018;
      *(undefined2 *)(unaff_s2 + 0x76) = in_stack_0000001a;
      *(undefined2 *)(unaff_s2 + 0x78) = in_stack_0000001c;
    }
  }
  if ((iVar7 != 0) && (psVar5 = (short *)FUN_800410c4(iVar7), psVar5 != (short *)0x0)) {
    if (in_stack_0000003c == 0) {
      *(short *)(unaff_s2 + 0x5c) = *psVar5;
      *(short *)(unaff_s2 + 0x5e) = psVar5[1];
      *(short *)(unaff_s2 + 0x60) = psVar5[2];
    }
    else {
      sVar1 = psVar5[1];
      sVar2 = psVar5[2];
      *(short *)(unaff_s2 + 0x5c) = *(short *)(unaff_s2 + 0x6e) + *psVar5;
      *(short *)(unaff_s2 + 0x5e) = *(short *)(unaff_s2 + 0x70) + sVar1;
      *(short *)(unaff_s2 + 0x60) = *(short *)(unaff_s2 + 0x72) + sVar2;
    }
  }
  if ((iVar8 != 0) &&
     (puVar6 = (undefined2 *)FUN_800410c4(iVar8,uVar3), puVar6 != (undefined2 *)0x0)) {
    *(undefined2 *)(unaff_s2 + 0x84) = *puVar6;
    *(undefined2 *)(unaff_s2 + 0x86) = puVar6[1];
    *(undefined2 *)(unaff_s2 + 0x88) = puVar6[2];
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ SCRIPTCountFramesInSpline(struct _Instance *instance /*$s4*/)
 // line 266, offset 0x8003c980
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8003C980
		// Variables:
	// 		short kf; // $s3
	// 		short frames; // $s2
	// 		struct SplineKey *key; // $a0
	// 		struct Spline *spline; // $s0
	// 		struct RSpline *rspline; // $s1

		/* begin block 1.1 */
			// Start line: 282
			// Start offset: 0x8003CA0C
			// Variables:
		// 		struct SplineRotKey *rkey; // $a0
		/* end block 1.1 */
		// End offset: 0x8003CA48
		// End Line: 288

		/* begin block 1.2 */
			// Start line: 291
			// Start offset: 0x8003CA50
			// Variables:
		// 		struct MultiSpline *multi; // $v0
		/* end block 1.2 */
		// End offset: 0x8003CAA8
		// End Line: 300
	/* end block 1 */
	// End offset: 0x8003CAA8
	// End Line: 302

	/* begin block 2 */
		// Start line: 468
	/* end block 2 */
	// End Line: 469

short SCRIPTCountFramesInSpline(_Instance *instance)

{
  uint in_v0;
  uint in_v1;
  int in_a1;
  int unaff_s2;
  int unaff_s3;
  
  while (unaff_s2 = unaff_s2 + in_v1, in_v0 != 0) {
    unaff_s3 = unaff_s3 + 1;
    in_v1 = (uint)*(ushort *)&(instance->node).prev;
    instance = (_Instance *)&instance->intro;
    in_v0 = (uint)(unaff_s3 * 0x10000 >> 0x10 < in_a1);
  }
  return (short)((uint)(unaff_s2 * 0x10000) >> 0x10);
}



// decompiled code
// original method signature: 
// struct Spline * /*$ra*/ ScriptGetPosSpline(struct _Instance *instance /*$a0*/)
 // line 317, offset 0x8003cad0
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x8003CAD0
		// Variables:
	// 		struct MultiSpline *multi; // $v0
	/* end block 1 */
	// End offset: 0x8003CAF8
	// End Line: 325

	/* begin block 2 */
		// Start line: 579
	/* end block 2 */
	// End Line: 580

Spline * ScriptGetPosSpline(_Instance *instance)

{
  Spline *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// struct RSpline * /*$ra*/ ScriptGetRotSpline(struct _Instance *instance /*$a0*/)
 // line 326, offset 0x8003cb08
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8003CB08
		// Variables:
	// 		struct MultiSpline *multi; // $v0
	/* end block 1 */
	// End offset: 0x8003CB30
	// End Line: 334

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

RSpline * ScriptGetRotSpline(_Instance *instance)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_8003ca68();
  uVar2 = FUN_80040de4(uVar1);
  return (RSpline *)(uVar2 & 0xffff);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SCRIPT_GetSplineFrameNumber(struct _Instance *instance /*$s0*/, struct SplineDef *splineDef /*$s1*/)
 // line 338, offset 0x8003cb40
	/* begin block 1 */
		// Start line: 623
	/* end block 1 */
	// End Line: 624

int SCRIPT_GetSplineFrameNumber(_Instance *instance,SplineDef *splineDef)

{
  MultiSpline *pMVar1;
  _Model *p_Var2;
  undefined4 *in_a2;
  MultiSpline *in_a3;
  
  *(undefined4 *)splineDef = 0;
  if (in_a2 != (undefined4 *)0x0) {
    *in_a2 = 0;
  }
  if ((((instance != (_Instance *)0x0) && (instance->intro != (Intro *)0x0)) &&
      (pMVar1 = instance->intro->multiSpline, pMVar1 != (MultiSpline *)0x0)) &&
     ((in_a3 = pMVar1, (instance->flags & 0x100002U) == 2 &&
      (in_a3 = pMVar1, splineDef != (SplineDef *)0x0)))) {
    *(undefined4 *)splineDef = 1;
    in_a3 = pMVar1;
  }
  if (((in_a3 == (MultiSpline *)0x0) &&
      (p_Var2 = *instance->object->modelList, p_Var2 != (_Model *)0x0)) &&
     (in_a3 = p_Var2->multiSpline, in_a2 != (undefined4 *)0x0)) {
    *in_a2 = 1;
  }
  return (int)in_a3;
}



// decompiled code
// original method signature: 
// struct MultiSpline * /*$ra*/ SCRIPT_GetMultiSpline(struct _Instance *instance /*$a0*/, unsigned long *isParent /*$a1*/, unsigned long *isClass /*$a2*/)
 // line 346, offset 0x8003cba0
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x8003CBA0
		// Variables:
	// 		struct MultiSpline *multi; // $a3
	/* end block 1 */
	// End offset: 0x8003CC44
	// End Line: 373

	/* begin block 2 */
		// Start line: 635
	/* end block 2 */
	// End Line: 636

	/* begin block 3 */
		// Start line: 640
	/* end block 3 */
	// End Line: 641

	/* begin block 4 */
		// Start line: 641
	/* end block 4 */
	// End Line: 642

	/* begin block 5 */
		// Start line: 642
	/* end block 5 */
	// End Line: 643

MultiSpline * SCRIPT_GetMultiSpline(_Instance *instance,ulong *isParent,ulong *isClass)

{
  ulong in_v0;
  _Model *p_Var1;
  MultiSpline *in_a3;
  
  *isParent = in_v0;
  if (((in_a3 == (MultiSpline *)0x0) &&
      (p_Var1 = *instance->object->modelList, p_Var1 != (_Model *)0x0)) &&
     (in_a3 = p_Var1->multiSpline, isClass != (ulong *)0x0)) {
    *isClass = 1;
  }
  return in_a3;
}



// decompiled code
// original method signature: 
// struct SplineDef * /*$ra*/ SCRIPT_GetPosSplineDef(struct _Instance *instance /*$a0*/, struct MultiSpline *multi /*$a1*/, unsigned long isParent /*$a2*/, unsigned long isClass /*$a3*/)
 // line 376, offset 0x8003cc4c
	/* begin block 1 */
		// Start line: 377
		// Start offset: 0x8003CC4C
		// Variables:
	// 		struct SplineDef *splineDef; // $v0
	/* end block 1 */
	// End offset: 0x8003CC70
	// End Line: 386

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

	/* begin block 3 */
		// Start line: 702
	/* end block 3 */
	// End Line: 703

SplineDef *
SCRIPT_GetPosSplineDef(_Instance *instance,MultiSpline *multi,ulong isParent,ulong isClass)

{
  return (SplineDef *)&instance->work4;
}



// decompiled code
// original method signature: 
// struct SplineDef * /*$ra*/ SCRIPT_GetRotSplineDef(struct _Instance *instance /*$a0*/, struct MultiSpline *multi /*$a1*/, unsigned long isParent /*$a2*/, unsigned long isClass /*$a3*/)
 // line 388, offset 0x8003cc78
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x8003CC78
		// Variables:
	// 		struct SplineDef *splineDef; // $v0
	/* end block 1 */
	// End offset: 0x8003CC9C
	// End Line: 398

	/* begin block 2 */
		// Start line: 724
	/* end block 2 */
	// End Line: 725

	/* begin block 3 */
		// Start line: 726
	/* end block 3 */
	// End Line: 727

SplineDef *
SCRIPT_GetRotSplineDef(_Instance *instance,MultiSpline *multi,ulong isParent,ulong isClass)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int unaff_s0;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack00000040;
  undefined2 uStack00000042;
  undefined2 uStack00000044;
  
  iVar3 = *(int *)(unaff_s0 + 0x20);
  if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x18) != 0 || (*(short *)(iVar3 + 0x1c) != 0)))) {
    uStack00000010 = *(undefined2 *)&multi->positional;
    uStack00000012 = *(undefined2 *)((int)&multi->positional + 2);
    uStack00000014 = *(undefined2 *)&multi->rotational;
                    /* WARNING: Subroutine does not return */
    uStack00000040 = uStack00000010;
    uStack00000042 = uStack00000012;
    uStack00000044 = uStack00000014;
    rm_1(*(int *)(unaff_s0 + 0x20) + 0x18,&stack0x00000018);
  }
  sVar1 = *(short *)((int)&multi->positional + 2);
  sVar2 = *(short *)&multi->rotational;
  *(short *)(unaff_s0 + 0x5c) = *(short *)(unaff_s0 + 0x6e) + *(short *)&multi->positional;
  *(short *)(unaff_s0 + 0x5e) = *(short *)(unaff_s0 + 0x70) + sVar1;
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x72) + sVar2;
  return (SplineDef *)(unaff_s0 + 0x5c);
}



// decompiled code
// original method signature: 
// struct SplineDef * /*$ra*/ SCRIPT_GetScaleSplineDef(struct _Instance *instance /*$a0*/, struct MultiSpline *multi /*$a1*/, unsigned long isParent /*$a2*/, unsigned long isClass /*$a3*/)
 // line 400, offset 0x8003cca4
	/* begin block 1 */
		// Start line: 401
		// Start offset: 0x8003CCA4
		// Variables:
	// 		struct SplineDef *splineDef; // $v0
	/* end block 1 */
	// End offset: 0x8003CCC8
	// End Line: 410

	/* begin block 2 */
		// Start line: 748
	/* end block 2 */
	// End Line: 749

	/* begin block 3 */
		// Start line: 750
	/* end block 3 */
	// End Line: 751

SplineDef *
SCRIPT_GetScaleSplineDef(_Instance *instance,MultiSpline *multi,ulong isParent,ulong isClass)

{
  int unaff_s0;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack00000040;
  undefined2 uStack00000042;
  undefined2 uStack00000044;
  
  uStack00000010 = *(undefined2 *)isClass;
  uStack00000012 = *(undefined2 *)(isClass + 2);
  uStack00000014 = *(undefined2 *)(isClass + 4);
                    /* WARNING: Subroutine does not return */
  uStack00000040 = uStack00000010;
  uStack00000042 = uStack00000012;
  uStack00000044 = uStack00000014;
  rm_1(*(int *)(unaff_s0 + 0x20) + 0x18,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCRIPT_RelativisticSpline(struct _Instance *instance /*$s0*/, struct _SVector *point /*$a3*/)
 // line 412, offset 0x8003ccd0
	/* begin block 1 */
		// Start line: 413
		// Start offset: 0x8003CCD0
		// Variables:
	// 		struct _SVector pt; // stack offset -64

		/* begin block 1.1 */
			// Start line: 423
			// Start offset: 0x8003CD10
			// Variables:
		// 		struct MATRIX segMatrix; // stack offset -56
		// 		struct _Position newPt; // stack offset -24
		// 		struct _Position localPt; // stack offset -16

			/* begin block 1.1.1 */
				// Start line: 426
				// Start offset: 0x8003CD10
				// Variables:
			// 		short _x1; // $a1
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			// 		struct _SVector *_v0; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8003CD10
			// End Line: 426

			/* begin block 1.1.2 */
				// Start line: 426
				// Start offset: 0x8003CD10
				// Variables:
			// 		short _y0; // $v1
			// 		short _z0; // $v0
			// 		short _x1; // $a1
			// 		short _y1; // $a3
			// 		short _z1; // $a2
			// 		struct _Position *_v; // $a0
			// 		struct _Position *_v0; // $v0
			// 		struct _Position *_v1; // $a2
			/* end block 1.1.2 */
			// End offset: 0x8003CD10
			// End Line: 426
		/* end block 1.1 */
		// End offset: 0x8003CD10
		// End Line: 426

		/* begin block 1.2 */
			// Start line: 440
			// Start offset: 0x8003CE78
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $a0
		// 		short _z0; // $v1
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _Position *_v; // $v0
		// 		struct _Position *_v0; // $v1
		/* end block 1.2 */
		// End offset: 0x8003CEB0
		// End Line: 440
	/* end block 1 */
	// End offset: 0x8003CEB0
	// End Line: 442

	/* begin block 2 */
		// Start line: 772
	/* end block 2 */
	// End Line: 773

void SCRIPT_RelativisticSpline(_Instance *instance,_SVector *point)

{
  int unaff_s0;
  
                    /* WARNING: Subroutine does not return */
  rm_1(*(int *)(unaff_s0 + 0x20) + 0x18,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCRIPT_InstanceSplineSet(struct _Instance *instance /*$s2*/, short frameNum /*$fp*/, struct SplineDef *splineDef /*$s4*/, struct SplineDef *rsplineDef /*$s5*/, struct SplineDef *ssplineDef /*stack 16*/)
 // line 444, offset 0x8003cec0
	/* begin block 1 */
		// Start line: 445
		// Start offset: 0x8003CEC0
		// Variables:
	// 		struct Spline *spline; // $s0
	// 		struct RSpline *rspline; // $s3
	// 		struct Spline *sspline; // $s7
	// 		struct MultiSpline *multi; // $s1
	// 		unsigned long isClass; // stack offset -44
	// 		unsigned long isParent; // stack offset -48
	// 		struct _SVector point; // stack offset -96

		/* begin block 1.1 */
			// Start line: 506
			// Start offset: 0x8003D064
			// Variables:
		// 		struct _G2Quat_Type q; // stack offset -88

			/* begin block 1.1.1 */
				// Start line: 509
				// Start offset: 0x8003D07C
				// Variables:
			// 		struct MATRIX introTransform; // stack offset -80
			/* end block 1.1.1 */
			// End offset: 0x8003D098
			// End Line: 515
		/* end block 1.1 */
		// End offset: 0x8003D098
		// End Line: 515

		/* begin block 1.2 */
			// Start line: 523
			// Start offset: 0x8003D0BC
			// Variables:
		// 		struct _Rotation rot; // stack offset -88

			/* begin block 1.2.1 */
				// Start line: 527
				// Start offset: 0x8003D0D0
				// Variables:
			// 		struct _Rotation combinedRotation; // stack offset -80

				/* begin block 1.2.1.1 */
					// Start line: 527
					// Start offset: 0x8003D0D0
					// Variables:
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a0
				/* end block 1.2.1.1 */
				// End offset: 0x8003D118
				// End Line: 537
			/* end block 1.2.1 */
			// End offset: 0x8003D118
			// End Line: 538
		/* end block 1.2 */
		// End offset: 0x8003D118
		// End Line: 540

		/* begin block 1.3 */
			// Start line: 544
			// Start offset: 0x8003D128
			// Variables:
		// 		struct _SVector scale; // stack offset -88
		/* end block 1.3 */
		// End offset: 0x8003D168
		// End Line: 552
	/* end block 1 */
	// End offset: 0x8003D168
	// End Line: 554

	/* begin block 2 */
		// Start line: 840
	/* end block 2 */
	// End Line: 841

void SCRIPT_InstanceSplineSet
               (_Instance *instance,short frameNum,SplineDef *splineDef,SplineDef *rsplineDef,
               SplineDef *ssplineDef)

{
  uint uVar1;
  int iVar2;
  int *unaff_s1;
  int unaff_s2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int iVar4;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  int in_stack_00000040;
  int in_stack_00000044;
  
  uVar1 = FUN_8003c918();
  if (((in_stack_00000040 != 0) || (in_stack_00000044 != 0)) ||
     ((unaff_s4 == 0 && ((unaff_s5 == 0 && (unaff_s6 == 0)))))) {
    unaff_s4 = FUN_8003cbe4();
    unaff_s5 = FUN_8003cc10();
    unaff_s6 = FUN_8003cc3c();
  }
  iVar2 = *unaff_s1;
  iVar3 = unaff_s1[1];
  iVar4 = unaff_s1[2];
  if ((unaff_s4 != 0) && (iVar2 != 0)) {
    FUN_80040e78(iVar2,unaff_s4,uVar1 & 0xffff);
    FUN_80041558(iVar2,unaff_s4,&ssplineDef);
    if (in_stack_00000044 == 0) {
      *(undefined2 *)(unaff_s2 + 0x5c) = ssplineDef._0_2_;
      *(undefined2 *)(unaff_s2 + 0x5e) = ssplineDef._2_2_;
      *(undefined2 *)(unaff_s2 + 0x60) = in_stack_00000014;
    }
    else {
      FUN_8003cc68();
    }
  }
  if ((unaff_s5 != 0) && (iVar3 != 0)) {
    FUN_80040e78(iVar3,unaff_s5,uVar1 & 0xffff);
    if ((*(uint *)(unaff_s2 + 0x14) & 1) == 0) {
      iVar2 = FUN_80041558(iVar3,unaff_s5,&stack0x00000018);
      if (iVar2 != 0) {
        *(undefined2 *)(unaff_s2 + 0x74) = in_stack_00000018;
        *(undefined2 *)(unaff_s2 + 0x76) = in_stack_0000001a;
        *(undefined2 *)(unaff_s2 + 0x78) = in_stack_0000001c;
        FUN_8003c648(&stack0x00000020,unaff_s2 + 0x74,*(int *)(unaff_s2 + 0x20) + 0x18);
        *(undefined2 *)(unaff_s2 + 0x74) = in_stack_00000020;
        *(undefined2 *)(unaff_s2 + 0x76) = in_stack_00000022;
        *(undefined2 *)(unaff_s2 + 0x78) = in_stack_00000024;
      }
    }
    else {
      iVar2 = FUN_80041768(iVar3,unaff_s5,&stack0x00000018);
      if (iVar2 != 0) {
        FUN_80079a30(&stack0x00000018,unaff_s1 + 0xc);
        if (*(int *)(unaff_s2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
          rm_1(*(int *)(unaff_s2 + 0x20) + 0x18,&stack0x00000020);
        }
      }
    }
  }
  if ((unaff_s6 != 0) && (iVar4 != 0)) {
    FUN_80040e78(iVar4,unaff_s6,uVar1 & 0xffff);
    FUN_80041558(iVar4,unaff_s6,&stack0x00000018);
    *(undefined2 *)(unaff_s2 + 0x84) = in_stack_00000018;
    *(undefined2 *)(unaff_s2 + 0x86) = in_stack_0000001c;
    *(undefined2 *)(unaff_s2 + 0x88) = in_stack_0000001a;
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SCRIPT_SplineProcess(struct _Instance *instance /*$s4*/, struct MultiSpline *multi /*$fp*/, struct SplineDef *splineDef /*stack 8*/, struct SplineDef *rsplineDef /*$s7*/, struct SplineDef *ssplineDef /*stack 16*/, int direction /*stack 20*/, int isClass /*stack 24*/)
 // line 556, offset 0x8003d198
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x8003D198
		// Variables:
	// 		long retVal; // $s3
	// 		struct Spline *spline; // $s5
	// 		struct RSpline *rspline; // $s1
	// 		struct Spline *sspline; // $a0
	// 		struct _SVector *point; // $s2
	// 		struct _Rotation rot; // stack offset -96
	// 		long timeOff; // $s6

		/* begin block 1.1 */
			// Start line: 574
			// Start offset: 0x8003D1F4
			// Variables:
		// 		struct _SVector pt; // stack offset -88
		/* end block 1.1 */
		// End offset: 0x8003D270
		// End Line: 594

		/* begin block 1.2 */
			// Start line: 617
			// Start offset: 0x8003D2DC
			// Variables:
		// 		struct _G2Quat_Type q; // stack offset -80

			/* begin block 1.2.1 */
				// Start line: 620
				// Start offset: 0x8003D2F4
				// Variables:
			// 		struct MATRIX introTransform; // stack offset -72
			/* end block 1.2.1 */
			// End offset: 0x8003D310
			// End Line: 626
		/* end block 1.2 */
		// End offset: 0x8003D334
		// End Line: 632

		/* begin block 1.3 */
			// Start line: 638
			// Start offset: 0x8003D348
			// Variables:
		// 		struct _Rotation combinedRotation; // stack offset -72

			/* begin block 1.3.1 */
				// Start line: 638
				// Start offset: 0x8003D348
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			/* end block 1.3.1 */
			// End offset: 0x8003D348
			// End Line: 638
		/* end block 1.3 */
		// End offset: 0x8003D348
		// End Line: 638

		/* begin block 1.4 */
			// Start line: 662
			// Start offset: 0x8003D3A0
			// Variables:
		// 		struct _SVector pt; // stack offset -80
		/* end block 1.4 */
		// End offset: 0x8003D44C
		// End Line: 687
	/* end block 1 */
	// End offset: 0x8003D44C
	// End Line: 688

	/* begin block 2 */
		// Start line: 1107
	/* end block 2 */
	// End Line: 1108

long SCRIPT_SplineProcess
               (_Instance *instance,MultiSpline *multi,SplineDef *splineDef,SplineDef *rsplineDef,
               SplineDef *ssplineDef,int direction,int isClass)

{
  int iVar1;
  int unaff_s1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s8;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  int in_stack_00000084;
  int in_stack_00000088;
  
  puVar2 = (undefined2 *)FUN_800410ec();
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined2 *)(unaff_s4 + 0x84) = *puVar2;
    *(undefined2 *)(unaff_s4 + 0x86) = puVar2[2];
    *(undefined2 *)(unaff_s4 + 0x88) = puVar2[1];
  }
  uVar3 = (uint)(puVar2 == (undefined2 *)0x0);
  if (unaff_s1 != 0) {
    uVar3 = 0;
    if (in_stack_00000084 < 1) {
      if ((in_stack_00000084 < 0) && (iVar1 = FUN_80041cc8(), iVar1 == 0)) {
        uVar3 = 1;
      }
    }
    else {
      iVar1 = FUN_80041ae4();
      uVar3 = (uint)(iVar1 == 0);
    }
    if (uVar3 == 0) {
      if ((*(uint *)(unaff_s4 + 0x14) & 1) == 0) {
        iVar1 = FUN_80041558();
        if (iVar1 != 0) {
          *(undefined2 *)(unaff_s4 + 0x74) = ssplineDef._0_2_;
          *(undefined2 *)(unaff_s4 + 0x76) = ssplineDef._2_2_;
          *(undefined2 *)(unaff_s4 + 0x78) = (undefined2)direction;
          FUN_8003c648(&stack0x00000028,unaff_s4 + 0x74,*(int *)(unaff_s4 + 0x20) + 0x18);
          *(undefined2 *)(unaff_s4 + 0x74) = in_stack_00000028;
          *(undefined2 *)(unaff_s4 + 0x76) = in_stack_0000002a;
          *(undefined2 *)(unaff_s4 + 0x78) = in_stack_0000002c;
          goto LAB_8003d330;
        }
      }
      else {
        iVar1 = FUN_80041768();
        if (iVar1 != 0) {
          FUN_80079a30(&stack0x00000020,unaff_s8 + 0x30);
          if (*(int *)(unaff_s4 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
            rm_1(*(int *)(unaff_s4 + 0x20) + 0x18,&stack0x00000028);
          }
          goto LAB_8003d330;
        }
      }
      uVar3 = 1;
    }
  }
LAB_8003d330:
  if (unaff_s5 != 0) {
    if (in_stack_00000084 < 1) {
      if (in_stack_00000084 < 0) {
        puVar2 = (undefined2 *)FUN_80041e94();
      }
      else {
        iVar1 = FUN_80041558();
        if (iVar1 != 0) {
          puVar2 = (undefined2 *)&stack0x00000020;
        }
      }
    }
    else {
      puVar2 = (undefined2 *)FUN_80041e3c();
    }
    uVar3 = 1;
    if (puVar2 != (undefined2 *)0x0) {
      uVar3 = 0;
      if (in_stack_00000088 == 0) {
        *(undefined2 *)(unaff_s4 + 0x5c) = *puVar2;
        *(undefined2 *)(unaff_s4 + 0x5e) = puVar2[1];
        *(undefined2 *)(unaff_s4 + 0x60) = puVar2[2];
      }
      else {
        FUN_8003cc68();
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SCRIPT_InstanceSplineProcess(struct _Instance *instance /*$s4*/, struct SplineDef *splineDef /*$s3*/, struct SplineDef *rsplineDef /*$s2*/, struct SplineDef *ssplineDef /*$s0*/, int direction /*stack 16*/)
 // line 716, offset 0x8003d480
	/* begin block 1 */
		// Start line: 717
		// Start offset: 0x8003D480
		// Variables:
	// 		struct MultiSpline *multi; // $s1
	// 		unsigned long isClass; // stack offset -28
	// 		unsigned long isParent; // stack offset -32
	/* end block 1 */
	// End offset: 0x8003D568
	// End Line: 747

	/* begin block 2 */
		// Start line: 1466
	/* end block 2 */
	// End Line: 1467

long SCRIPT_InstanceSplineProcess
               (_Instance *instance,SplineDef *splineDef,SplineDef *rsplineDef,SplineDef *ssplineDef
               ,int direction)

{
  long lVar1;
  int unaff_s0;
  int unaff_s2;
  
  if ((unaff_s2 == 0) && (unaff_s0 == 0)) {
    FUN_8003cbe4();
    FUN_8003cc10();
    FUN_8003cc3c();
  }
  lVar1 = FUN_8003d130();
  return lVar1;
}



// autogenerated function stub: 
// void /*$ra*/ SCRIPT_FadeOutProcess(struct _Instance *instance /*$a0*/)
void SCRIPT_FadeOutProcess(struct _Instance *instance)
{ // line 1038, offset 0x8003d588
	/* begin block 1 */
		// Start line: 2076
	/* end block 1 */
	// End Line: 2077

	/* begin block 2 */
		// Start line: 1832
	/* end block 2 */
	// End Line: 1833

}


// autogenerated function stub: 
// void /*$ra*/ ScriptKillInstance(struct _Instance *instance /*$s2*/, int effect /*$s0*/)
void ScriptKillInstance(struct _Instance *instance, int effect)
{ // line 1046, offset 0x8003d5d0
	/* begin block 1 */
		// Start line: 1047
		// Start offset: 0x8003D5D0
		// Variables:
			struct Object *object; // $s1

		/* begin block 1.1 */
			// Start line: 1069
			// Start offset: 0x8003D65C
			// Variables:
				struct Object *object; // $v0
		/* end block 1.1 */
		// End offset: 0x8003D67C
		// End Line: 1074

		/* begin block 1.2 */
			// Start line: 1080
			// Start offset: 0x8003D6A4
			// Variables:
				struct SVECTOR v; // stack offset -24
		/* end block 1.2 */
		// End offset: 0x8003D6E0
		// End Line: 1087

		/* begin block 1.3 */
			// Start line: 1093
			// Start offset: 0x8003D6E0
			// Variables:
				struct FXSplinter *splinterData; // $a0
				int facadeFlg; // $a1
				short shardFlags; // $a2

			/* begin block 1.3.1 */
				// Start line: 1100
				// Start offset: 0x8003D704
				// Variables:
					struct GenericTune *tune; // $v1
			/* end block 1.3.1 */
			// End offset: 0x8003D730
			// End Line: 1108
		/* end block 1.3 */
		// End offset: 0x8003D780
		// End Line: 1114
	/* end block 1 */
	// End offset: 0x8003D798
	// End Line: 1127

	/* begin block 2 */
		// Start line: 1848
	/* end block 2 */
	// End Line: 1849

}




