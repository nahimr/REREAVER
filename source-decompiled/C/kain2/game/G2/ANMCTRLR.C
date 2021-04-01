#include "THISDUST.H"
#include "ANMCTRLR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_AttachControllerToSeg(struct _G2Anim_Type *anim /*$s0*/, int segNumber /*$a1*/, int type /*$a2*/)
 // line 235, offset 0x80090318
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80090318
	/* end block 1 */
	// End offset: 0x80090318
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

void G2Anim_AttachControllerToSeg(_G2Anim_Type *anim,int segNumber,int type)

{
  short sVar1;
  undefined4 in_v0;
  int iVar2;
  int iVar3;
  int in_a3;
  uint uVar4;
  
  *(undefined4 *)&anim->disabledControllerList = in_v0;
  uVar4 = (uint)*(ushort *)(type + 2);
  sVar1 = *(short *)(type + 4);
  type = type + 2;
  while( true ) {
    iVar2 = (int)((int)sVar1 & 0xf800U) >> 0xb;
    iVar3 = ((int)sVar1 << 0x15) >> 0x15;
    if (in_a3 <= iVar2) break;
    sVar1 = *(short *)(type + 4);
    in_a3 = in_a3 - iVar2;
    uVar4 = uVar4 + iVar3;
    type = type + 2;
  }
  *(short *)segNumber = (short)uVar4 + (short)((iVar3 * in_a3) / iVar2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_DetachControllerFromSeg(struct _G2Anim_Type *anim /*$s1*/, int segNumber /*$s2*/, int type /*$s3*/)
 // line 260, offset 0x80090350
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x80090350
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	// 		unsigned short *controllerNextPtr; // stack offset -32
	/* end block 1 */
	// End offset: 0x800903FC
	// End Line: 291

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

void G2Anim_DetachControllerFromSeg(_G2Anim_Type *anim,int segNumber,int type)

{
  short *psVar1;
  int in_v0;
  int in_v1;
  int in_a3;
  int in_t0;
  
  while( true ) {
    if (in_a3 <= in_v1) break;
    psVar1 = (short *)(type + 4);
    in_a3 = in_a3 - in_v1;
    in_t0 = in_t0 + (in_v0 >> 0x15);
    type = type + 2;
    in_v1 = (int)((int)*psVar1 & 0xf800U) >> 0xb;
    in_v0 = (int)*psVar1 << 0x15;
  }
  *(short *)segNumber = (short)in_t0 + (short)(((in_v0 >> 0x15) * in_a3) / in_v1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_EnableController(struct _G2Anim_Type *anim /*$s2*/, int segNumber /*$s1*/, int type /*$a2*/)
 // line 342, offset 0x80090418
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x80090418
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s0
	// 		struct _G2Matrix_Type *segMatrix; // $v1
	/* end block 1 */
	// End offset: 0x800904DC
	// End Line: 378

	/* begin block 2 */
		// Start line: 684
	/* end block 2 */
	// End Line: 685

void G2Anim_EnableController(_G2Anim_Type *anim,int segNumber,int type)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_DisableController(struct _G2Anim_Type *anim /*$s0*/, int segNumber /*$a1*/, int type /*$a2*/)
 // line 397, offset 0x800904f4
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x800904F4
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x80090524
	// End Line: 411

	/* begin block 2 */
		// Start line: 794
	/* end block 2 */
	// End Line: 795

void G2Anim_DisableController(_G2Anim_Type *anim,int segNumber,int type)

{
  int iVar1;
  _G2Matrix_Type *p_Var2;
  
  iVar1 = FUN_800920e4(segNumber,type,&anim->disabledControllerList);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 10) = 0;
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(ushort *)(iVar1 + 8) = (ushort)*(byte *)(iVar1 + 8);
    if (*(char *)(iVar1 + 2) == '\b') {
      FUN_80079824(iVar1 + 0x1c,anim->segMatrices + segNumber);
    }
    else {
      if (*(char *)(iVar1 + 2) != ' ') {
                    /* WARNING: Subroutine does not return */
        FUN_800bcdac(iVar1 + 0x14,0,0x10);
      }
      p_Var2 = anim->segMatrices + segNumber;
      *(undefined2 *)(iVar1 + 0x14) = *(undefined2 *)&(p_Var2->trans).x;
      *(undefined2 *)(iVar1 + 0x16) = *(undefined2 *)&(p_Var2->trans).y;
      *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)&(p_Var2->trans).z;
    }
    FUN_80091ce8(iVar1,&anim->controllerList);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_InterpDisableController(struct _G2Anim_Type *anim /*$s2*/, int segNumber /*$s4*/, int type /*$s3*/, short duration /*$s5*/)
 // line 430, offset 0x80090534
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x80090534
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s1
	// 		struct _G2SVector3_Type zeroVector; // stack offset -48
	// 		struct _G2Quat_Type targetQuat; // stack offset -40
	/* end block 1 */
	// End offset: 0x80090630
	// End Line: 475

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

void G2Anim_InterpDisableController(_G2Anim_Type *anim,int segNumber,int type,short duration)

{
  undefined2 in_v0;
  int in_v1;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s0 + 0xc) = 0;
  *(undefined2 *)(unaff_s0 + 8) = in_v0;
  if (in_v1 == 8) {
    FUN_80079824(unaff_s0 + 0x1c,*(int *)(unaff_s2 + 0x14) + unaff_s1 * 0x20);
  }
  else {
    if (in_v1 != 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_800bcdac(unaff_s0 + 0x14,0,0x10);
    }
    iVar1 = *(int *)(unaff_s2 + 0x14) + unaff_s1 * 0x20;
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(iVar1 + 0x14);
    *(undefined2 *)(unaff_s0 + 0x16) = *(undefined2 *)(iVar1 + 0x18);
    *(undefined2 *)(unaff_s0 + 0x18) = *(undefined2 *)(iVar1 + 0x1c);
  }
  FUN_80091ce8();
  return;
}



// decompiled code
// original method signature: 
// enum _G2Bool_Enum /*$ra*/ G2Anim_IsControllerActive(struct _G2Anim_Type *anim /*$a0*/, int segNumber /*$a1*/, int type /*$a2*/)
 // line 496, offset 0x80090654
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x80090654
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x80090690
	// End Line: 513

	/* begin block 2 */
		// Start line: 992
	/* end block 2 */
	// End Line: 993

_G2Bool_Enum G2Anim_IsControllerActive(_G2Anim_Type *anim,int segNumber,int type)

{
  int iVar1;
  _G2Bool_Enum _Var2;
  int unaff_s0;
  int unaff_s3;
  short unaff_s5;
  int iStack00000010;
  
  if ((unaff_s0 == 0) || (unaff_s3 == 0x20)) {
    FUN_800905cc();
  }
  iVar1 = FUN_80091fd4();
  _Var2 = 8;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 2) == '\b') {
      FUN_80091f54(iVar1);
      iStack00000010 = (int)unaff_s5;
      FUN_80090b38();
    }
    else {
      iStack00000010 = (int)unaff_s5;
      FUN_800909d4();
    }
    _Var2 = (uint)*(ushort *)(iVar1 + 8) | 0x8000;
    *(undefined2 *)(iVar1 + 8) = (short)_Var2;
  }
  return _Var2;
}



// decompiled code
// original method signature: 
// enum _G2Bool_Enum /*$ra*/ G2Anim_IsControllerInterpolating(struct _G2Anim_Type *anim /*$a0*/, int segNumber /*$a1*/, int type /*$a2*/)
 // line 519, offset 0x800906a0
	/* begin block 1 */
		// Start line: 520
		// Start offset: 0x800906A0
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x800906E4
	// End Line: 540

	/* begin block 2 */
		// Start line: 987
	/* end block 2 */
	// End Line: 988

_G2Bool_Enum G2Anim_IsControllerInterpolating(_G2Anim_Type *anim,int segNumber,int type)

{
  _G2Bool_Enum _Var1;
  int unaff_s1;
  short unaff_s5;
  int iStack00000010;
  
  FUN_80091f54();
  iStack00000010 = (int)unaff_s5;
  FUN_80090b38();
  _Var1 = (uint)*(ushort *)(unaff_s1 + 8) | 0x8000;
  *(undefined2 *)(unaff_s1 + 8) = (short)_Var1;
  return _Var1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_GetControllerCurrentInterpVector(struct _G2Anim_Type *anim /*$s1*/, int segNumber /*$a1*/, int type /*$a2*/, struct _G2SVector3_Type *vector /*$s0*/)
 // line 558, offset 0x800906f4
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x800906F4
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v1
	// 		struct _G2SVector3_Type *base; // $a0
	// 		struct _G2SVector3_Type *offset; // $a1
	// 		struct _G2Matrix_Type *segMatrix; // $v1

		/* begin block 1.1 */
			// Start line: 579
			// Start offset: 0x80090738
			// Variables:
		// 		struct _G2SVector3_Type *source; // $a0
		// 		struct _G2SVector3_Type *dest; // $s0

			/* begin block 1.1.1 */
				// Start line: 579
				// Start offset: 0x80090738
				// Variables:
			// 		unsigned short z; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80090738
			// End Line: 579
		/* end block 1.1 */
		// End offset: 0x80090738
		// End Line: 579

		/* begin block 1.2 */
			// Start line: 580
			// Start offset: 0x8009074C
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $s0
		// 		struct _G2SVector3_Type *base; // $a0
		// 		struct _G2SVector3_Type *offset; // $a1
		// 		long alpha; // $v0
		/* end block 1.2 */
		// End offset: 0x8009074C
		// End Line: 580
	/* end block 1 */
	// End offset: 0x80090840
	// End Line: 603

	/* begin block 2 */
		// Start line: 1116
	/* end block 2 */
	// End Line: 1117

void G2Anim_GetControllerCurrentInterpVector
               (_G2Anim_Type *anim,int segNumber,int type,_G2SVector3_Type *vector)

{
  int unaff_s1;
  
  *(ushort *)(unaff_s1 + 8) = *(ushort *)(unaff_s1 + 8) | 0x8000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_SetControllerCallbackData(struct _G2Anim_Type *anim /*$a0*/, int segNumber /*$a1*/, int type /*$a2*/, void *callbackData /*$s0*/)
 // line 629, offset 0x80090854
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x80090854
	/* end block 1 */
	// End offset: 0x80090854
	// End Line: 630

	/* begin block 2 */
		// Start line: 1258
	/* end block 2 */
	// End Line: 1259

void G2Anim_SetControllerCallbackData(_G2Anim_Type *anim,int segNumber,int type,void *callbackData)

{
  undefined4 in_v0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_t6;
  undefined4 uVar3;
  undefined2 *unaff_s0;
  
  setCopReg(2,0x5800,in_t6);
  setCopReg(2,0x4000,in_v0);
  copFunction(2,0x1a8003e);
  uVar1 = getCopReg(2,0xc800);
  uVar2 = getCopReg(2,0xd000);
  uVar3 = getCopReg(2,0xd800);
  *unaff_s0 = (short)uVar1;
  unaff_s0[1] = (short)uVar2;
  unaff_s0[2] = (short)uVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_SetControllerAngleOrder(struct _G2Anim_Type *anim /*$a0*/, int segNumber /*$a1*/, int type /*$a2*/, int order /*$s0*/)
 // line 648, offset 0x8009087c
	/* begin block 1 */
		// Start line: 649
		// Start offset: 0x8009087C
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x8009087C
	// End Line: 649

	/* begin block 2 */
		// Start line: 1205
	/* end block 2 */
	// End Line: 1206

void G2Anim_SetControllerAngleOrder(_G2Anim_Type *anim,int segNumber,int type,int order)

{
  undefined2 in_t6;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 4) = in_t6;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_SetController_Vector(struct _G2Anim_Type *anim /*$a0*/, int segNumber /*$a1*/, int type /*$a2*/, struct _G2SVector3_Type *vector /*$s0*/)
 // line 668, offset 0x800908b4
	/* begin block 1 */
		// Start line: 669
		// Start offset: 0x800908B4
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x800908B4
	// End Line: 669

	/* begin block 2 */
		// Start line: 1245
	/* end block 2 */
	// End Line: 1246

void G2Anim_SetController_Vector(_G2Anim_Type *anim,int segNumber,int type,_G2SVector3_Type *vector)

{
  FUN_8009319c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_SetInterpController_Vector(struct _G2Anim_Type *anim /*$s2*/, int segNumber /*$s3*/, int type /*$s4*/, struct _G2SVector3_Type *vector /*$s6*/, int duration /*stack 16*/)
 // line 711, offset 0x800908fc
	/* begin block 1 */
		// Start line: 712
		// Start offset: 0x800908FC
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s1
	// 		struct _G2EulerAngles_Type eulerVector; // stack offset -48
	// 		struct _G2SVector3_Type *base; // $s0
	// 		struct _G2SVector3_Type *offset; // $a1
	// 		struct _G2Quat_Type quat; // stack offset -40
	/* end block 1 */
	// End offset: 0x80090A38
	// End Line: 753

	/* begin block 2 */
		// Start line: 1422
	/* end block 2 */
	// End Line: 1423

void G2Anim_SetInterpController_Vector
               (_G2Anim_Type *anim,int segNumber,int type,_G2SVector3_Type *vector,int duration)

{
  undefined2 in_v0;
  int in_v1;
  undefined2 *unaff_s0;
  
  *unaff_s0 = in_v0;
  unaff_s0[1] = *(undefined2 *)(in_v1 + 0x18);
  unaff_s0[2] = *(undefined2 *)(in_v1 + 0x1c);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2Anim_SetInterpController_Quat(struct _G2Anim_Type *anim /*$s1*/, int segNumber /*$a1*/, int type /*$a2*/, struct _G2Quat_Type *quat /*$s2*/, int duration /*stack 16*/)
 // line 780, offset 0x80090a60
	/* begin block 1 */
		// Start line: 781
		// Start offset: 0x80090A60
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s0

		/* begin block 1.1 */
			// Start line: 781
			// Start offset: 0x80090A60
			// Variables:
		// 		struct _G2Quat_Type *source; // $s2

			/* begin block 1.1.1 */
				// Start line: 781
				// Start offset: 0x80090A60
				// Variables:
			// 		unsigned long zw; // $a0
			// 		unsigned long xy; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80090A60
			// End Line: 781
		/* end block 1.1 */
		// End offset: 0x80090A60
		// End Line: 781
	/* end block 1 */
	// End offset: 0x80090A60
	// End Line: 781

	/* begin block 2 */
		// Start line: 1560
	/* end block 2 */
	// End Line: 1561

void G2Anim_SetInterpController_Quat
               (_G2Anim_Type *anim,int segNumber,int type,_G2Quat_Type *quat,int duration)

{
  FUN_80090b38();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_ApplyControllersToStoredFrame(struct _G2Anim_Type *anim /*$s2*/)
 // line 810, offset 0x80090adc
	/* begin block 1 */
		// Start line: 811
		// Start offset: 0x80090ADC
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80090B24
	// End Line: 820

	/* begin block 2 */
		// Start line: 1487
	/* end block 2 */
	// End Line: 1488

void _G2Anim_ApplyControllersToStoredFrame(_G2Anim_Type *anim)

{
  int in_v0;
  int in_v1;
  int in_a1;
  int unaff_s0;
  int unaff_s1;
  undefined2 unaff_s5;
  
  *(undefined2 *)(in_a1 + 4) = (short)(((in_v0 - (int)*(short *)(unaff_s0 + 4)) * 0x1000) / in_v1);
  *(undefined2 *)(unaff_s1 + 10) = unaff_s5;
  *(undefined2 *)(unaff_s1 + 0xc) = 0;
  *(ushort *)(unaff_s1 + 8) = (ushort)*(byte *)(unaff_s1 + 8) | 0x4000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_BuildTransformsWithControllers(struct _G2Anim_Type *anim /*$s6*/)
 // line 824, offset 0x80090b3c
	/* begin block 1 */
		// Start line: 825
		// Start offset: 0x80090B3C
		// Variables:
	// 		struct _Segment *segment; // $a1
	// 		struct _G2AnimController_Type *controller; // $s0
	// 		struct _G2Matrix_Type *segMatrix; // $s5
	// 		struct _G2Matrix_Type *parentMatrix; // $a1
	// 		enum _G2Bool_Enum bRootTransUpdated; // $a3
	// 		int segIndex; // $s1
	// 		int segCount; // $s7
	// 		unsigned long disabledBits[3]; // stack offset -56
	// 		unsigned long disabledMask; // $s3
	// 		unsigned long parentMask; // $v1
	// 		unsigned long parentIndex; // $v0
	/* end block 1 */
	// End offset: 0x80090CE4
	// End Line: 910

	/* begin block 2 */
		// Start line: 1516
	/* end block 2 */
	// End Line: 1517

void _G2Anim_BuildTransformsWithControllers(_G2Anim_Type *anim)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_a3;
  undefined2 in_stack_00000038;
  
  iVar1 = FUN_80091bc0();
  FUN_80091e18(iVar1,anim,iVar1 + 0x14);
  uVar2 = *in_a3;
  uVar3 = in_a3[1];
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = uVar3;
  *(ushort *)(iVar1 + 8) = (ushort)*(byte *)(iVar1 + 8) | 0x4000;
  *(undefined2 *)(iVar1 + 10) = in_stack_00000038;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_BuildSegTransformWithControllers(struct _G2Matrix_Type *segMatrix /*$s2*/, struct _G2Matrix_Type *parentMatrix /*$s4*/, struct _G2AnimController_Type *controller /*$s0*/, enum _G2Bool_Enum bRootTransUpdated /*$s6*/, int segIndex /*stack 16*/)
 // line 919, offset 0x80090d1c
	/* begin block 1 */
		// Start line: 920
		// Start offset: 0x80090D1C
		// Variables:
	// 		struct _G2AnimSegValue_Type *segValue; // $s1
	// 		struct _G2LVector3_Type scale; // stack offset -48
	// 		unsigned long flags; // $s3

		/* begin block 1.1 */
			// Start line: 977
			// Start offset: 0x80090F20
			// Variables:
		// 		struct _G2SVector3_Type *svector; // $v0
		// 		struct _G2LVector3_Type *lvector; // $v1
		/* end block 1.1 */
		// End offset: 0x80090F20
		// End Line: 977
	/* end block 1 */
	// End offset: 0x80090FC4
	// End Line: 1004

	/* begin block 2 */
		// Start line: 1885
	/* end block 2 */
	// End Line: 1886

void _G2Anim_BuildSegTransformWithControllers
               (_G2Matrix_Type *segMatrix,_G2Matrix_Type *parentMatrix,
               _G2AnimController_Type *controller,_G2Bool_Enum bRootTransUpdated,int segIndex)

{
  byte bVar1;
  int in_v0;
  int in_v1;
  int iVar2;
  ushort *unaff_s0;
  uint unaff_s1;
  uint *unaff_s2;
  uint unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  do {
    iVar2 = in_v1 + in_v0 * 0x20;
    if ((uint)*(byte *)((int)unaff_s0 + 3) == unaff_s1) {
      FUN_80090df4(unaff_s5,iVar2,unaff_s0);
      bVar1 = *(byte *)((int)unaff_s0 + 3);
      while ((uint)bVar1 == unaff_s1) {
        unaff_s0 = (ushort *)
                   (_G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ + (uint)*unaff_s0 * 0x24);
        bVar1 = *(byte *)((int)unaff_s0 + 3);
      }
    }
    else {
      FUN_800940d8(unaff_s5,iVar2,bRootTransUpdated,unaff_s1);
    }
    do {
      unaff_s4 = unaff_s4 + 0xc;
      bRootTransUpdated = G2FALSE;
      unaff_s5 = unaff_s5 + 0x20;
      unaff_s3 = unaff_s3 << 1;
      unaff_s1 = unaff_s1 + 1;
      if (unaff_s3 == 0) {
        unaff_s2 = unaff_s2 + 1;
        unaff_s3 = 1;
      }
      if (unaff_s7 <= (int)unaff_s1) {
        FUN_800914a8();
        return;
      }
      iVar2 = (uint)*unaff_s4 << 0x10;
      if ((iVar2 >> 0x10 != -1) &&
         ((*(uint *)(unaff_s8 + (iVar2 >> 0x15) * 4) & 1 << (*unaff_s4 & 0x1f)) != 0)) {
        *unaff_s2 = *unaff_s2 | unaff_s3;
      }
    } while ((*unaff_s2 & unaff_s3) != 0);
    in_v0 = (int)(short)*unaff_s4;
    in_v1 = *(int *)(unaff_s6 + 0x14);
  } while( true );
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ _G2AnimController_ApplyToSegValue(struct _G2AnimController_Type *controller /*$a0*/, struct _G2AnimSegValue_Type *segValue /*$s0*/, struct _G2Matrix_Type *segMatrix /*$s3*/, struct _G2Matrix_Type *parentMatrix /*$s2*/)
 // line 1014, offset 0x80091028
	/* begin block 1 */
		// Start line: 1015
		// Start offset: 0x80091028
		// Variables:
	// 		struct _G2Matrix_Type tempMatrix; // stack offset -64
	// 		struct _G2SVector3_Type tempVector; // stack offset -32
	// 		unsigned long flags; // $s1

		/* begin block 1.1 */
			// Start line: 1063
			// Start offset: 0x800912A4

			/* begin block 1.1.1 */
				// Start line: 1063
				// Start offset: 0x800912A4
				// Variables:
			// 		unsigned short z; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800912A4
			// End Line: 1063
		/* end block 1.1 */
		// End offset: 0x800912A4
		// End Line: 1063

		/* begin block 1.2 */
			// Start line: 1081
			// Start offset: 0x80091350

			/* begin block 1.2.1 */
				// Start line: 1081
				// Start offset: 0x80091350
				// Variables:
			// 		unsigned short z; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.2.1 */
			// End offset: 0x80091350
			// End Line: 1081
		/* end block 1.2 */
		// End offset: 0x80091350
		// End Line: 1081
	/* end block 1 */
	// End offset: 0x800913B4
	// End Line: 1097

	/* begin block 2 */
		// Start line: 2097
	/* end block 2 */
	// End Line: 2098

ulong _G2AnimController_ApplyToSegValue
                (_G2AnimController_Type *controller,_G2AnimSegValue_Type *segValue,
                _G2Matrix_Type *segMatrix,_G2Matrix_Type *parentMatrix)

{
  ulong uVar1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  *(int *)(unaff_s2 + 0x14) = (int)*(short *)(unaff_s1 + 0x10);
  *(int *)(unaff_s2 + 0x18) = (int)*(short *)(unaff_s1 + 0x12);
  *(int *)(unaff_s2 + 0x1c) = (int)*(short *)(unaff_s1 + 0x14);
  if (unaff_s6 != 0) {
    *(int *)(unaff_s4 + 0x14) = *(int *)(unaff_s4 + 0x14) + *(int *)(unaff_s2 + 0x14);
    *(int *)(unaff_s4 + 0x18) = *(int *)(unaff_s4 + 0x18) + *(int *)(unaff_s2 + 0x18);
    *(int *)(unaff_s4 + 0x1c) = *(int *)(unaff_s4 + 0x1c) + *(int *)(unaff_s2 + 0x1c);
    *(undefined4 *)(unaff_s2 + 0x14) = 0;
    *(undefined4 *)(unaff_s2 + 0x18) = 0;
    *(undefined4 *)(unaff_s2 + 0x1c) = 0;
  }
  *(int *)(unaff_s2 + 0x14) = *(int *)(unaff_s2 + 0x14) + *(int *)(unaff_s4 + 0x14);
  *(int *)(unaff_s2 + 0x18) = *(int *)(unaff_s2 + 0x18) + *(int *)(unaff_s4 + 0x18);
  uVar1 = *(int *)(unaff_s2 + 0x1c) + *(int *)(unaff_s4 + 0x1c);
  *(ulong *)(unaff_s2 + 0x1c) = uVar1;
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_UpdateControllers(struct _G2Anim_Type *anim /*$s1*/)
 // line 1101, offset 0x800913d0
	/* begin block 1 */
		// Start line: 1102
		// Start offset: 0x800913D0
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s0
	// 		struct _G2AnimSection_Type *section; // $v1
	// 		short elapsedTime; // $s2
	/* end block 1 */
	// End offset: 0x80091544
	// End Line: 1151

	/* begin block 2 */
		// Start line: 2271
	/* end block 2 */
	// End Line: 2272

void _G2Anim_UpdateControllers(_G2Anim_Type *anim)

{
  short in_v0;
  short in_v1;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0xc) = in_v0 + in_v1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2Anim_CopyVectorWithOrder(struct _G2SVector3_Type *sourceVector /*$a0*/, struct _G2EulerAngles_Type *destVector /*$a1*/, int order /*$a2*/)
 // line 1157, offset 0x8009155c
	/* begin block 1 */
		// Start line: 2387
	/* end block 1 */
	// End Line: 2388

	/* begin block 2 */
		// Start line: 2390
	/* end block 2 */
	// End Line: 2391

void _G2Anim_CopyVectorWithOrder(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *unaff_s0;
  int unaff_s1;
  short unaff_s2;
  
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            unaff_s0 = _G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ + (uint)*unaff_s0 * 0x12;
            if (unaff_s0 <= _G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_) {
              return;
            }
            uVar1 = unaff_s0[4];
          } while ((uVar1 & 0x4000) == 0);
          uVar2 = unaff_s0[6];
          if ((short)unaff_s0[5] <= (short)unaff_s0[6]) break;
          unaff_s0[6] = uVar2 + unaff_s2;
          if ((short)unaff_s0[5] < (short)(uVar2 + unaff_s2)) {
            unaff_s0[6] = unaff_s0[5];
          }
        }
        if ((uVar1 & 0x8000) == 0) break;
        unaff_s0[4] = uVar1 & 0x7fff;
        FUN_800920e4((uint)*(byte *)((int)unaff_s0 + 3),(uint)*(byte *)(unaff_s0 + 1));
        FUN_80091ce8(unaff_s0,unaff_s1 + 4);
      }
    } while ((uVar1 & 0x2000) != 0);
    unaff_s0[4] = uVar1 | 0x2000;
    iVar3 = FUN_80092ff0();
  } while ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) == 0));
  (**(code **)(iVar3 + 0x1c))();
  FUN_800915f4();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimSection_ApplyControllersToStoredFrame(struct _G2AnimSection_Type *section /*$s3*/)
 // line 1181, offset 0x800915c0
	/* begin block 1 */
		// Start line: 1182
		// Start offset: 0x800915C0
		// Variables:
	// 		struct _G2Anim_Type *anim; // $s7
	// 		struct _G2AnimController_Type *controller; // $s0
	// 		struct _G2AnimSegValue_Type *segValue; // $s1
	// 		struct _Segment *segment; // $s6
	// 		struct _G2Matrix_Type segMatrix; // stack offset -152
	// 		struct _G2Matrix_Type parentMatrix; // stack offset -120
	// 		struct _G2Matrix_Type invParentMatrix; // stack offset -88
	// 		struct _G2EulerAngles_Type eulerAngles; // stack offset -56
	// 		int segIndex; // $s2
	// 		int segCount; // $fp

		/* begin block 1.1 */
			// Start line: 1237
			// Start offset: 0x80091760
			// Variables:
		// 		struct _G2Quat_Type tempQuat; // stack offset -48

			/* begin block 1.1.1 */
				// Start line: 1239
				// Start offset: 0x80091760
				// Variables:
			// 		struct _G2Quat_Type *dest; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1239
					// Start offset: 0x80091760
					// Variables:
				// 		unsigned long zw; // $v1
				// 		unsigned long xy; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x80091760
				// End Line: 1239
			/* end block 1.1.1 */
			// End offset: 0x80091760
			// End Line: 1239
		/* end block 1.1 */
		// End offset: 0x80091760
		// End Line: 1239

		/* begin block 1.2 */
			// Start line: 1242
			// Start offset: 0x8009177C
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $s1

			/* begin block 1.2.1 */
				// Start line: 1242
				// Start offset: 0x8009177C
				// Variables:
			// 		unsigned long mask; // $v0
			// 		unsigned short z; // $v1
			// 		unsigned long xy; // $a0
			/* end block 1.2.1 */
			// End offset: 0x8009177C
			// End Line: 1242
		/* end block 1.2 */
		// End offset: 0x8009177C
		// End Line: 1242
	/* end block 1 */
	// End offset: 0x80091804
	// End Line: 1260

	/* begin block 2 */
		// Start line: 2436
	/* end block 2 */
	// End Line: 2437

void _G2AnimSection_ApplyControllersToStoredFrame(_G2AnimSection_Type *section)

{
  code *in_v0;
  undefined4 in_a1;
  
  (*in_v0)(section,in_a1,4);
  FUN_800915f4();
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ _G2AnimController_ApplyWorldToParentMatrix(struct _G2AnimController_Type *controller /*$a0*/, struct _G2Matrix_Type *parentMatrix /*$s0*/)
 // line 1265, offset 0x80091834
	/* begin block 1 */
		// Start line: 1266
		// Start offset: 0x80091834
		// Variables:
	// 		struct _G2Matrix_Type tempMatrix; // stack offset -64
	// 		struct _G2SVector3_Type tempSVector; // stack offset -32
	// 		struct _G2LVector3_Type tempLVector; // stack offset -24
	/* end block 1 */
	// End offset: 0x80091974
	// End Line: 1317

	/* begin block 2 */
		// Start line: 2618
	/* end block 2 */
	// End Line: 2619

ulong _G2AnimController_ApplyWorldToParentMatrix
                (_G2AnimController_Type *controller,_G2Matrix_Type *parentMatrix)

{
  undefined4 *puVar1;
  ushort *unaff_s0;
  undefined4 *unaff_s1;
  uint unaff_s2;
  undefined4 *unaff_s3;
  int unaff_s6;
  int iVar2;
  int unaff_s7;
  int unaff_s8;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  
  do {
    FUN_80079824(&stack0x00000078,&stack0x00000010);
    *unaff_s1 = in_stack_00000078;
    *unaff_s3 = in_stack_0000007c;
    while( true ) {
      do {
        unaff_s0 = (ushort *)
                   (_G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ + (uint)*unaff_s0 * 0x24);
        while ((uint)*(byte *)((int)unaff_s0 + 3) != unaff_s2) {
          do {
            iVar2 = unaff_s6;
            unaff_s6 = iVar2 + 0x18;
            unaff_s3 = unaff_s3 + 6;
            unaff_s2 = unaff_s2 + 1;
            unaff_s1 = unaff_s1 + 6;
            if ((int)unaff_s2 >= unaff_s8) {
              return (uint)((int)unaff_s2 < unaff_s8);
            }
          } while ((uint)*(byte *)((int)unaff_s0 + 3) != unaff_s2);
          FUN_80094300(unaff_s1,&stack0x00000010);
          if (*(int *)(unaff_s7 + 0x14) == 0) {
            FUN_80039ae8(&stack0x00000030);
          }
          else {
            puVar1 = (undefined4 *)
                     ((int)*(short *)(iVar2 + 0x2a) * 0x20 + *(int *)(unaff_s7 + 0x14));
            in_stack_00000030 = *puVar1;
            in_stack_00000034 = puVar1[1];
            in_stack_00000038 = puVar1[2];
            in_stack_0000003c = puVar1[3];
            in_stack_00000040 = puVar1[4];
            in_stack_00000044 = puVar1[5];
            in_stack_00000048 = puVar1[6];
            in_stack_0000004c = puVar1[7];
          }
        }
      } while ((unaff_s2 == 0) && ((*(byte *)(unaff_s0 + 1) & 2) == 0));
      if ((*(byte *)(unaff_s0 + 1) & 0x38) == 8) break;
      FUN_80091100(unaff_s0,unaff_s1,&stack0x00000010,&stack0x00000030);
    }
    FUN_80091100(unaff_s0,unaff_s1,&stack0x00000010);
    if ((*(byte *)(unaff_s0 + 1) & 2) == 0) {
      FUN_800bd714();
      FUN_800bf948();
    }
  } while (*(short *)((int)unaff_s3 + 0x12) != 0);
                    /* WARNING: Subroutine does not return */
  FUN_80095ff4(&stack0x00000070,&stack0x00000010,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimController_GetMatrix(struct _G2AnimController_Type *controller /*$s0*/, struct _G2Matrix_Type *matrix /*$s1*/)
 // line 1325, offset 0x80091988
	/* begin block 1 */
		// Start line: 1326
		// Start offset: 0x80091988
		// Variables:
	// 		struct _G2Quat_Type tempQuat; // stack offset -24
	/* end block 1 */
	// End offset: 0x80091A4C
	// End Line: 1376

	/* begin block 2 */
		// Start line: 2747
	/* end block 2 */
	// End Line: 2748

void _G2AnimController_GetMatrix(_G2AnimController_Type *controller,_G2Matrix_Type *matrix)

{
  _G2AnimController_GetVector(controller,(_G2SVector3_Type *)&stack0x00000010);
  FUN_800bf948(&stack0x00000010);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimController_GetVector(struct _G2AnimController_Type *controller /*$a0*/, struct _G2SVector3_Type *vector /*$a1*/)
 // line 1381, offset 0x80091a60
	/* begin block 1 */
		// Start line: 1384
		// Start offset: 0x80091A60

		/* begin block 1.1 */
			// Start line: 1384
			// Start offset: 0x80091A60
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $a1

			/* begin block 1.1.1 */
				// Start line: 1384
				// Start offset: 0x80091A60
				// Variables:
			// 		unsigned short z; // $v1
			// 		unsigned long xy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80091A60
			// End Line: 1384
		/* end block 1.1 */
		// End offset: 0x80091A60
		// End Line: 1384

		/* begin block 1.2 */
			// Start line: 1389
			// Start offset: 0x80091A84
			// Variables:
		// 		struct _G2SVector3_Type *dest; // $a1
		// 		struct _G2SVector3_Type *base; // $a1
		// 		struct _G2SVector3_Type *offset; // $v0
		// 		long alpha; // $v1
		/* end block 1.2 */
		// End offset: 0x80091AE0
		// End Line: 1389
	/* end block 1 */
	// End offset: 0x80091AE0
	// End Line: 1394

	/* begin block 2 */
		// Start line: 2859
	/* end block 2 */
	// End Line: 2860

	/* begin block 3 */
		// Start line: 2861
	/* end block 3 */
	// End Line: 2862

void _G2AnimController_GetVector(_G2AnimController_Type *controller,_G2SVector3_Type *vector)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined auStack24 [8];
  
  uVar1 = controller->flags;
  if ((uVar1 & 0x4000) == 0) {
    if ((uVar1 & 0xff) == 1) {
      rmzyx_1(controller->data,vector);
    }
    else {
      if ((uVar1 & 0xff) == 0x15) {
                    /* WARNING: Subroutine does not return */
        rm_1(controller->data,vector);
      }
    }
  }
  else {
    if ((uVar1 & 0x2000) == 0) {
      uVar2 = FUN_80094e04(controller->alphaTable,
                           ((int)controller->elapsedTime << 0xc) / (int)controller->duration);
      FUN_800963cc(uVar2,controller->data,controller->data + 8,auStack24,0);
      FUN_80079a30(auStack24,vector);
    }
    else {
      FUN_80079a30(controller->data + 8);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2Anim_FindController(struct _G2Anim_Type *anim /*$s2*/, int segNumber /*$s0*/, int type /*$s1*/)
 // line 1400, offset 0x80091ae8
	/* begin block 1 */
		// Start line: 1401
		// Start offset: 0x80091AE8
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $v0
	/* end block 1 */
	// End offset: 0x80091B2C
	// End Line: 1415

	/* begin block 2 */
		// Start line: 2897
	/* end block 2 */
	// End Line: 2898

_G2AnimController_Type * _G2Anim_FindController(_G2Anim_Type *anim,int segNumber,int type)

{
  _G2AnimController_Type *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2AnimController_Create(int segNumber /*$s1*/, int type /*$s2*/)
 // line 1479, offset 0x80091b44
	/* begin block 1 */
		// Start line: 1480
		// Start offset: 0x80091B44
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $s0
	/* end block 1 */
	// End offset: 0x80091B44
	// End Line: 1480

	/* begin block 2 */
		// Start line: 2958
	/* end block 2 */
	// End Line: 2959

_G2AnimController_Type * _G2AnimController_Create(int segNumber,int type)

{
  undefined2 in_v1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(type + 4) = in_v1;
  if ((*(ushort *)(segNumber + 8) & 0x4000) != 0) {
    setCopReg(2,0xc800,(uint)*(ushort *)type);
    setCopReg(2,0xd000,(uint)*(ushort *)(type + 2));
    setCopReg(2,0xd800,(uint)*(ushort *)(type + 4));
    setCopReg(2,0x4800,(uint)((_G2AnimController_Type *)(segNumber + 0x1a))->next);
    setCopReg(2,0x5000,(uint)*(ushort *)(segNumber + 0x1c));
    setCopReg(2,0x5800,(uint)*(ushort *)(segNumber + 0x1e));
    setCopReg(2,0x4000,(int)*(short *)(segNumber + 0xc));
    copFunction(2,0x1a8003e);
    uVar1 = getCopReg(2,0xc800);
    uVar2 = getCopReg(2,0xd000);
    uVar3 = getCopReg(2,0xd800);
    *(short *)type = (short)uVar1;
    *(undefined2 *)(type + 2) = (short)uVar2;
    *(undefined2 *)(type + 4) = (short)uVar3;
  }
  return (_G2AnimController_Type *)(segNumber + 0x1a);
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2AnimController_Destroy(struct _G2AnimController_Type *controller /*$a1*/)
 // line 1499, offset 0x80091bac
	/* begin block 1 */
		// Start line: 1502
		// Start offset: 0x80091BBC
		// Variables:
	// 		int nextControllerIndex; // $s0
	/* end block 1 */
	// End offset: 0x80091BFC
	// End Line: 1515

	/* begin block 2 */
		// Start line: 3046
	/* end block 2 */
	// End Line: 3047

_G2AnimController_Type * _G2AnimController_Destroy(_G2AnimController_Type *controller)

{
  _G2AnimController_Type *in_v0;
  undefined2 *in_a1;
  undefined2 in_t4;
  undefined2 in_t5;
  undefined2 in_t6;
  
  *in_a1 = in_t4;
  in_a1[1] = in_t5;
  in_a1[2] = in_t6;
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimController_InsertIntoList(struct _G2AnimController_Type *controller /*$a3*/, unsigned short *listPtr /*$a1*/)
 // line 1521, offset 0x80091c10
	/* begin block 1 */
		// Start line: 1522
		// Start offset: 0x80091C10
		// Variables:
	// 		struct _G2AnimController_Type *testController; // $a2
	/* end block 1 */
	// End offset: 0x80091D00
	// End Line: 1553

	/* begin block 2 */
		// Start line: 3092
	/* end block 2 */
	// End Line: 3093

void _G2AnimController_InsertIntoList(_G2AnimController_Type *controller,ushort *listPtr)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimController_GetCurrentInterpQuat(struct _G2AnimController_Type *controller /*$s0*/, struct _G2Anim_Type *anim /*$a3*/, struct _G2Quat_Type *quat /*$s1*/)
 // line 1560, offset 0x80091d40
	/* begin block 1 */
		// Start line: 1561
		// Start offset: 0x80091D40
		// Variables:
	// 		struct _G2EulerAngles_Type eulerVector; // stack offset -24

		/* begin block 1.1 */
			// Start line: 1591
			// Start offset: 0x80091E18
			// Variables:
		// 		struct _G2Quat_Type *quat; // $s1
		/* end block 1.1 */
		// End offset: 0x80091E18
		// End Line: 1591
	/* end block 1 */
	// End offset: 0x80091E68
	// End Line: 1609

	/* begin block 2 */
		// Start line: 3170
	/* end block 2 */
	// End Line: 3171

void _G2AnimController_GetCurrentInterpQuat
               (_G2AnimController_Type *controller,_G2Anim_Type *anim,_G2Quat_Type *quat)

{
  uint in_v0;
  uint uVar1;
  ushort *in_a3;
  ushort *puVar2;
  uint in_t0;
  
  while (in_v0 == 0) {
    do {
      anim = (_G2Anim_Type *)quat;
      quat = (_G2Quat_Type *)(controller + (uint)*(ushort *)anim);
      if ((quat <= controller) ||
         (uVar1 = (uint)*(byte *)((int)&((_G2Anim_Type *)quat)->controllerList + 1), in_t0 < uVar1))
      goto LAB_80091d70;
    } while (uVar1 != in_t0);
    in_v0 = (uint)(*(byte *)(in_a3 + 1) < *(byte *)&((_G2Anim_Type *)quat)->controllerList);
  }
LAB_80091d70:
  *(ushort *)anim =
       (ushort)((int)((int)in_a3 - (int)_G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_) * 0x38e38e39
               >> 2);
  do {
    puVar2 = in_a3;
    in_a3 = _G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ + (uint)*puVar2 * 0x12;
  } while (_G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ <
           _G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_ + (uint)*puVar2 * 0x12);
  *puVar2 = (ushort)((int)((int)quat - (int)_G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_) *
                     0x38e38e39 >> 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _G2AnimController_GetSimpleWorldRotQuat(struct _G2AnimController_Type *controller /*$a0*/, struct _G2Anim_Type *anim /*$a3*/, struct _G2Quat_Type *quat /*$s1*/)
 // line 1615, offset 0x80091e7c
	/* begin block 1 */
		// Start line: 1616
		// Start offset: 0x80091E7C
		// Variables:
	// 		struct _Segment *segment; // $v0
	// 		struct _G2Matrix_Type *parentMatrix; // $s0
	// 		struct _G2Matrix_Type segMatrix; // stack offset -48
	// 		int segNumber; // $v0
	/* end block 1 */
	// End offset: 0x80091E7C
	// End Line: 1616

	/* begin block 2 */
		// Start line: 3280
	/* end block 2 */
	// End Line: 3281

void _G2AnimController_GetSimpleWorldRotQuat
               (_G2AnimController_Type *controller,_G2Anim_Type *anim,_G2Quat_Type *quat)

{
  undefined4 uVar1;
  int unaff_s0;
  undefined4 uStack00000010;
  
  uVar1 = FUN_80094e04(*(undefined4 *)(unaff_s0 + 0x10),
                       ((int)anim << 0xc) / (int)*(short *)(unaff_s0 + 10));
  uStack00000010 = 0;
  FUN_800963cc(uVar1,unaff_s0 + 0x14,unaff_s0 + 0x1c);
  return;
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2AnimControllerST_FindInList(int segNumber /*$a0*/, int type /*$a1*/, unsigned short *listPtr /*$a2*/)
 // line 1645, offset 0x80091efc
	/* begin block 1 */
		// Start line: 1648
		// Start offset: 0x80091EFC
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $a2
	/* end block 1 */
	// End offset: 0x80091F64
	// End Line: 1663

	/* begin block 2 */
		// Start line: 3368
	/* end block 2 */
	// End Line: 3369

	/* begin block 3 */
		// Start line: 3370
	/* end block 3 */
	// End Line: 3371

	/* begin block 4 */
		// Start line: 3372
	/* end block 4 */
	// End Line: 3373

_G2AnimController_Type * _G2AnimControllerST_FindInList(int segNumber,int type,ushort *listPtr)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  undefined2 in_stack_0000001e;
  
  *(int *)(unaff_s1 + 4) = in_v0;
  if (in_v1 == in_v0) {
    FUN_80091634(unaff_s0 + 0x14,&stack0x00000018,(uint)listPtr & 0xff);
  }
  else {
    FUN_8009319c();
    in_stack_0000001e = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80079b20();
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2AnimControllerST_FindPtrInList(int segNumber /*$a0*/, int type /*$a1*/, unsigned short **listPtrPtr /*$a2*/)
 // line 1669, offset 0x80091f6c
	/* begin block 1 */
		// Start line: 1672
		// Start offset: 0x80091F6C
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $a3
	/* end block 1 */
	// End offset: 0x80091FFC
	// End Line: 1693

	/* begin block 2 */
		// Start line: 3416
	/* end block 2 */
	// End Line: 3417

	/* begin block 3 */
		// Start line: 3418
	/* end block 3 */
	// End Line: 3419

	/* begin block 4 */
		// Start line: 3423
	/* end block 4 */
	// End Line: 3424

_G2AnimController_Type *
_G2AnimControllerST_FindPtrInList(int segNumber,int type,ushort **listPtrPtr)

{
  short sVar1;
  _G2AnimController_Type *p_Var2;
  int iVar3;
  int in_a3;
  int iVar4;
  
  iVar4 = *(int *)(in_a3 + 0x14);
  iVar3 = (uint)*(byte *)(segNumber + 3) * 0x18;
  sVar1 = *(short *)(*(int *)(*(int *)(in_a3 + 0x10) + 0x1c) + iVar3 + 0x12);
  FUN_80094300(iVar3 + -0x7ff2b804);
  FUN_800bf948(iVar4 + (int)sVar1 * 0x20,&stack0x00000010);
  p_Var2 = (_G2AnimController_Type *)FUN_80079824();
  return p_Var2;
}



// decompiled code
// original method signature: 
// struct _G2AnimController_Type * /*$ra*/ _G2AnimControllerST_RemoveFromList(int segNumber /*$a0*/, int type /*$a1*/, unsigned short *listPtr /*$a2*/)
 // line 1730, offset 0x8009200c
	/* begin block 1 */
		// Start line: 1733
		// Start offset: 0x8009200C
		// Variables:
	// 		struct _G2AnimController_Type *controller; // $a3
	// 		struct _G2AnimController_Type *stepController; // $a1
	// 		struct _G2AnimController_Type *nextController; // $a0
	/* end block 1 */
	// End offset: 0x800920D4
	// End Line: 1762

	/* begin block 2 */
		// Start line: 3460
	/* end block 2 */
	// End Line: 3461

	/* begin block 3 */
		// Start line: 3502
	/* end block 3 */
	// End Line: 3503

	/* begin block 4 */
		// Start line: 3506
	/* end block 4 */
	// End Line: 3507

_G2AnimController_Type * _G2AnimControllerST_RemoveFromList(int segNumber,int type,ushort *listPtr)

{
  uint in_v0;
  _G2AnimController_Type *p_Var1;
  _G2AnimController_Type *p_Var2;
  _G2AnimController_Type *in_a3;
  
  while ((p_Var2 = in_a3 + in_v0, in_a3 < p_Var2 &&
         (((uint)p_Var2->segNumber != segNumber || ((uint)p_Var2->type != type))))) {
    in_v0 = (uint)p_Var2->next;
  }
  p_Var1 = (_G2AnimController_Type *)0x0;
  if (p_Var2 != _G2AnimSegValue_Type_ARRAY_800d4f7c[0]._12_4_) {
    p_Var1 = p_Var2;
  }
  return p_Var1;
}





