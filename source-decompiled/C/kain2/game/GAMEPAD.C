#include "THISDUST.H"
#include "GAMEPAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Commands(long (*command)[5] /*$t4*/, long (*data)[5] /*$t3*/, long pad /*$a2*/)
 // line 55, offset 0x80030f68
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x80030F68
		// Variables:
	// 		long analogX; // $t2
	// 		long analogY; // $t1
	// 		static short lastPad[2]; // offset 0x0
	/* end block 1 */
	// End offset: 0x80031314
	// End Line: 233

	/* begin block 2 */
		// Start line: 110
	/* end block 2 */
	// End Line: 111

void GAMEPAD_Commands(long (*command) [5],long (*data) [5],long pad)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint *puVar6;
  int iVar7;
  uint in_t1;
  uint in_t2;
  int in_t3;
  int in_t4;
  
  if ((int)in_t1 < -0x37) {
    puVar1 = (uint *)(pad * 0x14 + in_t3);
    uVar4 = *puVar1 | 1;
LAB_80030fb4:
    *puVar1 = uVar4;
  }
  else {
    if (0x37 < (int)in_t1) {
      puVar1 = (uint *)(pad * 0x14 + in_t3);
      uVar4 = *puVar1 | 2;
      goto LAB_80030fb4;
    }
  }
  if ((int)in_t2 < -0x37) {
    puVar1 = (uint *)(pad * 0x14 + in_t3);
    uVar4 = *puVar1 | 4;
  }
  else {
    iVar2 = pad * 4;
    if ((int)in_t2 < 0x38) goto LAB_80031008;
    puVar1 = (uint *)(pad * 0x14 + in_t3);
    uVar4 = *puVar1 | 8;
  }
  *puVar1 = uVar4;
  iVar2 = pad << 2;
LAB_80031008:
  iVar2 = iVar2 + pad;
  iVar7 = iVar2 * 4;
  psVar5 = &fontTracker.font_buffer[0xc3].y + pad;
  puVar6 = (uint *)(iVar7 + in_t3);
  puVar6[1] = ~(int)*psVar5 & *puVar6;
  *psVar5 = *(short *)puVar6;
  puVar1 = (uint *)(iVar7 + in_t4);
  puVar1[3] = in_t2;
  puVar1[4] = in_t1;
  if ((draw[1].dr_env.code[9] & 0x10) == 0) {
    iVar2 = 0;
    if ((draw[1].dr_env.code[9] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_800bcdac(0x800d0e14,0,0x28);
    }
    puVar1[1] = ~*puVar1 & *puVar6;
    *puVar1 = *puVar6;
    iVar7 = 0;
    if ((*puVar6 & 1) == 0) {
      if ((*puVar6 & 2) != 0) {
        iVar7 = 0x80;
      }
    }
    else {
      iVar7 = -0x80;
    }
    uVar4 = *(uint *)(pad * 0x14 + in_t3);
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) != 0) {
        iVar2 = 0x80;
      }
    }
    else {
      iVar2 = -0x80;
    }
    if ((iVar2 != 0) || (iVar7 != 0)) {
      iVar3 = pad * 0x14 + in_t3;
      *(int *)(iVar3 + 0xc) = iVar2;
      *(int *)(iVar3 + 0x10) = iVar7;
    }
  }
  else {
    puVar1[1] = ~*puVar1 & *(uint *)(&DISPENV_800d0e54.isinter + iVar7);
    *puVar1 = *(uint *)(&DISPENV_800d0e54.isinter + iVar7);
    puVar6[3] = *(uint *)(&draw[0].clip.w + iVar2 * 2);
    puVar6[4] = *(uint *)(draw[0].ofs + iVar2 * 2);
    uVar4 = 0xffffff80;
    if (((*(uint *)(&DISPENV_800d0e54.isinter + iVar7) & 1) != 0) ||
       (uVar4 = 0x80, (*(uint *)(&DISPENV_800d0e54.isinter + iVar7) & 2) != 0)) {
      puVar6[4] = uVar4;
    }
    if ((*(uint *)&(&DISPENV_800d0e54)[pad].isinter & 4) == 0) {
      if ((*(uint *)&(&DISPENV_800d0e54)[pad].isinter & 8) != 0) {
        *(undefined4 *)(pad * 0x14 + in_t3 + 0xc) = 0x80;
      }
    }
    else {
      *(undefined4 *)(pad * 0x14 + in_t3 + 0xc) = 0xffffff80;
    }
  }
  if ((((draw[0].dr_env.code[0] & 0x40000) == 0) && ((draw[0].dr_env.code[1] & 0x2000000) != 0)) &&
     (puVar1 = (uint *)(pad * 0x14 + in_t4), (*(uint *)(pad * 0x14 + in_t3) & 0x300) == 0x300)) {
    *puVar1 = *puVar1 & 0xfffff3ff | 0x40000000;
    if ((puVar1[1] & 0xc00) != 0) {
      puVar1[1] = puVar1[1] | 0x40000000;
    }
    puVar1[1] = puVar1[1] & 0xfffff3ff;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAMEPAD_ControllerIsDualShock()
 // line 258, offset 0x80031324
	/* begin block 1 */
		// Start line: 532
	/* end block 1 */
	// End Line: 533

	/* begin block 2 */
		// Start line: 533
	/* end block 2 */
	// End Line: 534

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAMEPAD_ControllerIsDualShock(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  
  iVar3 = 0;
  if (align_flag == 0) {
    FUN_800be2ac(0,_Normal_ARRAY_800c89a0,2);
    do {
      iVar2 = FUN_800be274(0,0x800c89a4);
      bVar1 = iVar3 < 100000;
      if (iVar2 != 0) break;
      iVar3 = iVar3 + 1;
    } while (bVar1);
    align_flag = 1;
  }
  iVar3 = fontTracker.font_buffer._1180_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer._1180_4_) &&
     (fontTracker.font_buffer._1180_4_ = iVar3, iVar3 < 1)) {
    fontTracker.font_buffer._1180_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._0_1_ = 0;
  }
  iVar2 = fontTracker.font_buffer[197]._2_4_ - unaff_s3;
  iVar3 = iVar2;
  if (0 < fontTracker.font_buffer[197]._2_4_) {
    iVar3 = -0x7ff30000;
    fontTracker.font_buffer[197]._2_4_ = iVar2;
    if (iVar2 < 1) {
      fontTracker.font_buffer[197]._2_4_ = 0;
      _Normal_ARRAY_800c89a0[0].x._1_1_ = 0;
    }
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAMEPAD_DualShockEnabled()
 // line 263, offset 0x80031330
	/* begin block 1 */
		// Start line: 542
	/* end block 1 */
	// End Line: 543

	/* begin block 2 */
		// Start line: 543
	/* end block 2 */
	// End Line: 544

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAMEPAD_DualShockEnabled(void)

{
  bool bVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  int unaff_s3;
  
  iVar3 = 0;
  if (in_v0 == 0) {
    FUN_800be2ac(0,_Normal_ARRAY_800c89a0,2);
    do {
      iVar2 = FUN_800be274(0,0x800c89a4);
      bVar1 = iVar3 < 100000;
      if (iVar2 != 0) break;
      iVar3 = iVar3 + 1;
    } while (bVar1);
    align_flag = 1;
  }
  iVar3 = fontTracker.font_buffer._1180_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer._1180_4_) &&
     (fontTracker.font_buffer._1180_4_ = iVar3, iVar3 < 1)) {
    fontTracker.font_buffer._1180_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._0_1_ = 0;
  }
  iVar2 = fontTracker.font_buffer[197]._2_4_ - unaff_s3;
  iVar3 = iVar2;
  if (0 < fontTracker.font_buffer[197]._2_4_) {
    iVar3 = -0x7ff30000;
    fontTracker.font_buffer[197]._2_4_ = iVar2;
    if (iVar2 < 1) {
      fontTracker.font_buffer[197]._2_4_ = 0;
      _Normal_ARRAY_800c89a0[0].x._1_1_ = 0;
    }
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_DisableDualShock()
 // line 268, offset 0x8003133c
	/* begin block 1 */
		// Start line: 552
	/* end block 1 */
	// End Line: 553

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_DisableDualShock(void)

{
  bool bVar1;
  int iVar2;
  undefined4 in_a0;
  int unaff_s0;
  int unaff_s3;
  
  FUN_800be2ac(in_a0,_Normal_ARRAY_800c89a0,2);
  do {
    iVar2 = FUN_800be274(0,0x800c89a4);
    bVar1 = unaff_s0 < 100000;
    if (iVar2 != 0) break;
    unaff_s0 = unaff_s0 + 1;
  } while (bVar1);
  iVar2 = fontTracker.font_buffer._1180_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer._1180_4_) &&
     (fontTracker.font_buffer._1180_4_ = iVar2, iVar2 < 1)) {
    fontTracker.font_buffer._1180_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._0_1_ = 0;
  }
  iVar2 = fontTracker.font_buffer[197]._2_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer[197]._2_4_) &&
     (fontTracker.font_buffer[197]._2_4_ = iVar2, iVar2 < 1)) {
    fontTracker.font_buffer[197]._2_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._1_1_ = 0;
  }
  align_flag = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_EnableDualShock()
 // line 278, offset 0x8003137c
	/* begin block 1 */
		// Start line: 577
	/* end block 1 */
	// End Line: 578

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_EnableDualShock(void)

{
  int iVar1;
  int unaff_s3;
  
  iVar1 = fontTracker.font_buffer._1180_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer._1180_4_) &&
     (fontTracker.font_buffer._1180_4_ = iVar1, iVar1 < 1)) {
    fontTracker.font_buffer._1180_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._0_1_ = 0;
  }
  iVar1 = fontTracker.font_buffer[197]._2_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer[197]._2_4_) &&
     (fontTracker.font_buffer[197]._2_4_ = iVar1, iVar1 < 1)) {
    fontTracker.font_buffer[197]._2_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._1_1_ = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_HandleDualShock()
 // line 285, offset 0x80031390
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80031390
		// Variables:
	// 		int decrement_amount; // $s3

		/* begin block 1.1 */
			// Start line: 295
			// Start offset: 0x800313D4
			// Variables:
		// 		int timeout; // $s0
		/* end block 1.1 */
		// End offset: 0x80031410
		// End Line: 302
	/* end block 1 */
	// End offset: 0x8003146C
	// End Line: 327

	/* begin block 2 */
		// Start line: 591
	/* end block 2 */
	// End Line: 592

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_HandleDualShock(void)

{
  int in_v0;
  int iVar1;
  int unaff_s3;
  
  if ((0 < in_v0) && (fontTracker.font_buffer._1180_4_ = in_v0 - unaff_s3, in_v0 - unaff_s3 < 1)) {
    fontTracker.font_buffer._1180_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._0_1_ = 0;
  }
  iVar1 = fontTracker.font_buffer[197]._2_4_ - unaff_s3;
  if ((0 < fontTracker.font_buffer[197]._2_4_) &&
     (fontTracker.font_buffer[197]._2_4_ = iVar1, iVar1 < 1)) {
    fontTracker.font_buffer[197]._2_4_ = 0;
    _Normal_ARRAY_800c89a0[0].x._1_1_ = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Shock(int motor0_speed /*$a0*/, int motor0_time /*$a1*/, int motor1_speed /*$a2*/, int motor1_time /*$a3*/)
 // line 333, offset 0x80031488
	/* begin block 1 */
		// Start line: 697
	/* end block 1 */
	// End Line: 698

	/* begin block 2 */
		// Start line: 699
	/* end block 2 */
	// End Line: 700

void GAMEPAD_Shock(int motor0_speed,int motor0_time,int motor1_speed,int motor1_time)

{
  *(undefined *)(motor0_time + 1) = (char)motor0_speed;
  FUN_800be2ac(0,motor0_time,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Shock0(int motor0_speed /*$a0*/, int motor0_time /*$a1*/)
 // line 349, offset 0x800314cc
	/* begin block 1 */
		// Start line: 736
	/* end block 1 */
	// End Line: 737

	/* begin block 2 */
		// Start line: 738
	/* end block 2 */
	// End Line: 739

void GAMEPAD_Shock0(int motor0_speed,int motor0_time)

{
  int iVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  fontTracker.font_buffer._1180_4_ = 0;
  fontTracker.font_buffer[197]._2_4_ = 0;
  align_flag = 0;
  dualshock_onflag = 0;
  fontTracker.font_buffer[196]._0_4_ = 0;
  dualShock = 0;
  do {
    iVar2 = 0;
LAB_800314e8:
    do {
      FUN_800bce6c(0);
      iVar1 = FUN_800bdfdc(0);
      if (iVar1 == 0) {
        iVar2 = iVar2 + 1;
        if (iVar2 < 0x1e) goto LAB_800314e8;
      }
      if (iVar1 == unaff_s3) {
        dualShock = unaff_s2;
      }
      unaff_s1 = unaff_s1 + 1;
      iVar2 = unaff_s2;
      if (0x3c < unaff_s1) goto LAB_80031554;
      iVar2 = 0;
    } while ((iVar1 == unaff_s2) || (iVar1 == unaff_s3));
    iVar2 = fontTracker.font_buffer[196]._0_4_;
  } while (iVar1 == 5);
LAB_80031554:
  fontTracker.font_buffer[196]._0_4_ = iVar2;
  iVar2 = 0;
  if (dualShock != 0) {
    do {
      FUN_800bce6c(0);
      iVar1 = FUN_800bdfdc(0);
      iVar2 = iVar2 + 1;
      if (iVar1 == 6) break;
    } while (iVar2 < 0x3c);
  }
  FUN_800bce6c(3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Shock1(int motor1_speed /*$a0*/, int motor1_time /*$a1*/)
 // line 363, offset 0x80031508
	/* begin block 1 */
		// Start line: 766
	/* end block 1 */
	// End Line: 767

	/* begin block 2 */
		// Start line: 768
	/* end block 2 */
	// End Line: 769

void GAMEPAD_Shock1(int motor1_speed,int motor1_time)

{
  int iVar1;
  int in_v1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    if (unaff_s0 < 0x1e) goto LAB_800314e8;
    do {
      if (in_v1 == unaff_s3) {
        dualShock = unaff_s2;
      }
      unaff_s1 = unaff_s1 + 1;
      iVar2 = unaff_s2;
      if (0x3c < unaff_s1) {
LAB_80031554:
        fontTracker.font_buffer[196]._0_4_ = iVar2;
        iVar2 = 0;
        if (dualShock != 0) goto LAB_80031568;
        goto LAB_8003158c;
      }
      unaff_s0 = 0;
      if ((in_v1 != unaff_s2) && (in_v1 != unaff_s3)) {
        iVar2 = fontTracker.font_buffer[196]._0_4_;
        if (in_v1 != 5) goto LAB_80031554;
        unaff_s0 = 0;
      }
LAB_800314e8:
      FUN_800bce6c(0);
      in_v1 = FUN_800bdfdc(0);
    } while (in_v1 != 0);
    unaff_s0 = unaff_s0 + 1;
  } while( true );
  while (iVar2 < 0x3c) {
LAB_80031568:
    FUN_800bce6c(0);
    iVar1 = FUN_800bdfdc(0);
    iVar2 = iVar2 + 1;
    if (iVar1 == 6) break;
  }
LAB_8003158c:
  FUN_800bce6c(3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Detect()
 // line 377, offset 0x80031544
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x80031544
		// Variables:
	// 		int padState; // $v1
	// 		int count; // $s0
	// 		int count1; // $s1
	/* end block 1 */
	// End offset: 0x80031628
	// End Line: 432

	/* begin block 2 */
		// Start line: 796
	/* end block 2 */
	// End Line: 797

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_Detect(void)

{
  int iVar1;
  int in_v1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    if (in_v1 != unaff_s3) {
      iVar2 = fontTracker.font_buffer[196]._0_4_;
      if (in_v1 != 5) break;
      unaff_s0 = 0;
    }
LAB_800314e8:
    do {
      FUN_800bce6c(0);
      in_v1 = FUN_800bdfdc(0);
      if (in_v1 == 0) {
        unaff_s0 = unaff_s0 + 1;
        if (unaff_s0 < 0x1e) goto LAB_800314e8;
      }
      if (in_v1 == unaff_s3) {
        dualShock = unaff_s2;
      }
      unaff_s1 = unaff_s1 + 1;
      iVar2 = unaff_s2;
      if (0x3c < unaff_s1) goto LAB_80031554;
      unaff_s0 = 0;
    } while (in_v1 == unaff_s2);
  } while( true );
LAB_80031554:
  fontTracker.font_buffer[196]._0_4_ = iVar2;
  iVar2 = 0;
  if (dualShock != 0) {
    do {
      FUN_800bce6c(0);
      iVar1 = FUN_800bdfdc(0);
      iVar2 = iVar2 + 1;
      if (iVar1 == 6) break;
    } while (iVar2 < 0x3c);
  }
  FUN_800bce6c(3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Init()
 // line 436, offset 0x8003164c
	/* begin block 1 */
		// Start line: 963
	/* end block 1 */
	// End Line: 964

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_Init(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *in_v1;
  uint uVar3;
  uint *in_a0;
  ushort in_a1;
  ushort in_a2;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined local_res0 [16];
  
  puVar2 = in_v1 + 0x10;
  puVar4 = (undefined4 *)register0x00000074;
  do {
    uVar6 = in_v1[1];
    uVar7 = in_v1[2];
    uVar8 = in_v1[3];
    *puVar4 = *in_v1;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    in_v1 = in_v1 + 4;
    puVar4 = puVar4 + 4;
  } while (in_v1 != puVar2);
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)register0x00000074;
    uVar3 = (uint)((ushort *)register0x00000074)[1];
    if ((in_a1 & uVar1) == 0) {
      *in_a0 = *in_a0 | uVar3;
      if ((in_a2 & uVar1) != 0) {
        in_a0[1] = in_a0[1] | uVar3;
      }
    }
    else {
      if ((in_a2 & uVar1) == 0) {
        in_a0[2] = in_a0[2] | uVar3;
      }
    }
    iVar5 = iVar5 + 1;
    register0x00000074 = (BADSPACEBASE *)((ushort *)register0x00000074 + 2);
  } while (iVar5 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXPAD_TranslateData(long *data /*$a0*/, unsigned short padData /*$a1*/, unsigned short lastData /*$a2*/)
 // line 476, offset 0x800316d4
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x800316D4
		// Variables:
	// 		int i; // $t1
	// 		struct JoypadMappingStruct table[16]; // stack offset -64

		/* begin block 1.1 */
			// Start line: 531
			// Start offset: 0x8003177C
			// Variables:
		// 		unsigned short padButton; // $a3
		// 		unsigned short logicalButton; // $v1
		/* end block 1.1 */
		// End offset: 0x800317E0
		// End Line: 547
	/* end block 1 */
	// End offset: 0x800317F0
	// End Line: 548

	/* begin block 2 */
		// Start line: 1056
	/* end block 2 */
	// End Line: 1057

void PSXPAD_TranslateData(long *data,ushort padData,ushort lastData)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined auStackX0 [16];
  
  iVar3 = 0;
  do {
    uVar1 = *(ushort *)register0x00000074;
    uVar2 = (uint)((ushort *)register0x00000074)[1];
    if ((padData & uVar1) == 0) {
      *data = *data | uVar2;
      if ((lastData & uVar1) != 0) {
        data[1] = data[1] | uVar2;
      }
    }
    else {
      if ((lastData & uVar1) == 0) {
        data[2] = data[2] | uVar2;
      }
    }
    iVar3 = iVar3 + 1;
    register0x00000074 = (BADSPACEBASE *)((ushort *)register0x00000074 + 2);
  } while (iVar3 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GAMEPAD_RemapAnalogueButtons(unsigned short in /*$a0*/)
 // line 553, offset 0x800317f8
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x800317F8
	/* end block 1 */
	// End offset: 0x800317F8
	// End Line: 557

	/* begin block 2 */
		// Start line: 1228
	/* end block 2 */
	// End Line: 1229

	/* begin block 3 */
		// Start line: 1229
	/* end block 3 */
	// End Line: 1230

	/* begin block 4 */
		// Start line: 1231
	/* end block 4 */
	// End Line: 1232

/* WARNING: Removing unreachable block (ram,0x800319d8) */
/* WARNING: Removing unreachable block (ram,0x800319dc) */
/* WARNING: Removing unreachable block (ram,0x80031a28) */
/* WARNING: Removing unreachable block (ram,0x80031854) */
/* WARNING: Removing unreachable block (ram,0x80031858) */
/* WARNING: Removing unreachable block (ram,0x800318a4) */
/* WARNING: Removing unreachable block (ram,0x80031900) */
/* WARNING: Removing unreachable block (ram,0x80031904) */
/* WARNING: Removing unreachable block (ram,0x80031950) */
/* WARNING: Removing unreachable block (ram,0x80031a84) */
/* WARNING: Removing unreachable block (ram,0x80031a88) */
/* WARNING: Removing unreachable block (ram,0x80031ad4) */

ushort GAMEPAD_RemapAnalogueButtons(ushort in)

{
  int in_v0;
  int iVar1;
  FontChar *pFVar2;
  uint uVar3;
  undefined2 in_register_00000012;
  undefined4 *puVar4;
  FontChar *pFVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar4 = (undefined4 *)CONCAT22(in_register_00000012,in);
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  fontTracker.font_buffer[213].y = 0;
  fontTracker.font_buffer[213]._4_2_ = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  if (in_v0 == 0) {
    iVar1 = FUN_800bdfdc(0);
    if (iVar1 == 1) {
LAB_80031b24:
      if (((fontTracker.font_buffer._1444_4_ < 6) && (dualShock != 0)) && (dualshock_onflag != 0)) {
        FUN_800312e0();
      }
    }
    else {
      if ((iVar1 != 4) && (iVar1 != 5)) {
        FUN_800312f4();
        pFVar5 = fontTracker.font_buffer + 0xd6;
        pFVar2 = fontTracker.font_buffer + 0xdc;
        do {
          uVar7 = *(undefined4 *)&pFVar2->c;
          uVar8 = *(undefined4 *)&pFVar2[1].y;
          uVar9 = *(undefined4 *)(pFVar2 + 2);
          *(undefined4 *)pFVar5 = *(undefined4 *)pFVar2;
          *(undefined4 *)&pFVar5->c = uVar7;
          *(undefined4 *)&pFVar5[1].y = uVar8;
          *(undefined4 *)(pFVar5 + 2) = uVar9;
          pFVar2 = (FontChar *)&pFVar2[2].c;
          pFVar5 = (FontChar *)&pFVar5[2].c;
        } while (pFVar2 != (FontChar *)&fontTracker.font_buffer[0xe1].y);
        pFVar5->x = fontTracker.font_buffer[225].y;
        pFVar5 = fontTracker.font_buffer + 0xe2;
        pFVar2 = fontTracker.font_buffer + 0xe8;
        do {
          uVar7 = *(undefined4 *)&pFVar2->c;
          uVar8 = *(undefined4 *)&pFVar2[1].y;
          uVar9 = *(undefined4 *)(pFVar2 + 2);
          *(undefined4 *)pFVar5 = *(undefined4 *)pFVar2;
          *(undefined4 *)&pFVar5->c = uVar7;
          *(undefined4 *)&pFVar5[1].y = uVar8;
          *(undefined4 *)(pFVar5 + 2) = uVar9;
          pFVar2 = (FontChar *)&pFVar2[2].c;
          pFVar5 = (FontChar *)&pFVar5[2].c;
        } while (pFVar2 != (FontChar *)&fontTracker.font_buffer[0xed].y);
        goto LAB_80031b0c;
      }
      if (iVar1 == 1) goto LAB_80031b24;
    }
  }
  else {
    pFVar5 = fontTracker.font_buffer + 0xd6;
    pFVar2 = fontTracker.font_buffer + 0xdc;
    do {
      uVar7 = *(undefined4 *)&pFVar2->c;
      uVar8 = *(undefined4 *)&pFVar2[1].y;
      uVar9 = *(undefined4 *)(pFVar2 + 2);
      *(undefined4 *)pFVar5 = *(undefined4 *)pFVar2;
      *(undefined4 *)&pFVar5->c = uVar7;
      *(undefined4 *)&pFVar5[1].y = uVar8;
      *(undefined4 *)(pFVar5 + 2) = uVar9;
      pFVar2 = (FontChar *)&pFVar2[2].c;
      pFVar5 = (FontChar *)&pFVar5[2].c;
    } while (pFVar2 != (FontChar *)&fontTracker.font_buffer[0xe1].y);
    pFVar5->x = fontTracker.font_buffer[225].y;
    pFVar5 = fontTracker.font_buffer + 0xe2;
    pFVar2 = fontTracker.font_buffer + 0xe8;
    do {
      uVar7 = *(undefined4 *)&pFVar2->c;
      uVar8 = *(undefined4 *)&pFVar2[1].y;
      uVar9 = *(undefined4 *)(pFVar2 + 2);
      *(undefined4 *)pFVar5 = *(undefined4 *)pFVar2;
      *(undefined4 *)&pFVar5->c = uVar7;
      *(undefined4 *)&pFVar5[1].y = uVar8;
      *(undefined4 *)(pFVar5 + 2) = uVar9;
      pFVar2 = (FontChar *)&pFVar2[2].c;
      pFVar5 = (FontChar *)&pFVar5[2].c;
    } while (pFVar2 != (FontChar *)&fontTracker.font_buffer[0xed].y);
LAB_80031b0c:
    pFVar5->x = pFVar2->x;
  }
  if ((char)fontTracker.font_buffer[214].x == -1) {
    fontTracker.font_buffer._1444_4_ = fontTracker.font_buffer._1444_4_ + 1;
    return (ushort)fontTracker.font_buffer._1444_4_;
  }
  if (5 < fontTracker.font_buffer._1444_4_) {
    FUN_800317a8();
  }
  fontTracker.font_buffer[213].y = fontTracker.font_buffer[214].y;
  fontTracker.font_buffer._1444_4_ = 0;
  if (fontTracker.font_buffer[212].c == 'S') {
    fontTracker.font_buffer[213].y = FUN_8003175c((uint)(ushort)fontTracker.font_buffer[214].y);
  }
  FUN_80031638(puVar4,(uint)(ushort)fontTracker.font_buffer[213].y,(uint)lastData[0]);
  fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
  lastData[0] = fontTracker.font_buffer[213].y;
  if ((fontTracker.font_buffer[214].x._1_1_ != 's') && (fontTracker.font_buffer[214].x._1_1_ != 'S')
     ) {
    lastData[0] = fontTracker.font_buffer[213].y;
    fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
    return 0x73;
  }
  uVar6 = (uint)(byte)fontTracker.font_buffer[215].x;
  uVar3 = (uint)fontTracker.font_buffer[215].x._1_1_;
  if (uVar6 - 0x4a < 0x6d) {
    iVar1 = uVar6 - 0x80;
    if ((fontTracker.font_buffer[215].x._1_1_ < 0x4a) ||
       (iVar1 = uVar6 - 0x80, 0xb6 < fontTracker.font_buffer[215].x._1_1_)) goto LAB_80031c2c;
    uVar6 = 0x80;
    uVar3 = 0x80;
  }
  iVar1 = uVar6 - 0x80;
LAB_80031c2c:
  puVar4[3] = iVar1;
  puVar4[4] = uVar3 - 0x80;
  return (ushort)(uVar3 - 0x80);
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_DetectInit()
 // line 567, offset 0x80031844
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x80031844
		// Variables:
	// 		int orgdualshock_onflag; // $s0
	/* end block 1 */
	// End offset: 0x8003187C
	// End Line: 574

	/* begin block 2 */
		// Start line: 1256
	/* end block 2 */
	// End Line: 1257

/* WARNING: Removing unreachable block (ram,0x80031900) */
/* WARNING: Removing unreachable block (ram,0x80031904) */
/* WARNING: Removing unreachable block (ram,0x80031950) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_DetectInit(void)

{
  int iVar1;
  undefined4 *in_v1;
  FontChar *pFVar2;
  uint uVar3;
  undefined4 *in_a0;
  FontChar *pFVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_s0;
  
  if ((((uint)in_v1 | (uint)in_a0) & 3) == 0) {
    do {
      uVar6 = in_v1[1];
      uVar7 = in_v1[2];
      uVar8 = in_v1[3];
      *in_a0 = *in_v1;
      in_a0[1] = uVar6;
      in_a0[2] = uVar7;
      in_a0[3] = uVar8;
      in_v1 = in_v1 + 4;
      in_a0 = in_a0 + 4;
    } while (in_v1 != (undefined4 *)&fontTracker.font_buffer[0xe1].y);
  }
  else {
    do {
      uVar6 = in_v1[1];
      uVar7 = in_v1[2];
      uVar8 = in_v1[3];
      *in_a0 = *in_v1;
      in_a0[1] = uVar6;
      in_a0[2] = uVar7;
      in_a0[3] = uVar8;
      in_v1 = in_v1 + 4;
      in_a0 = in_a0 + 4;
    } while (in_v1 != (undefined4 *)&fontTracker.font_buffer[0xe1].y);
  }
  *(short *)in_a0 = *(short *)in_v1;
  pFVar4 = fontTracker.font_buffer + 0xe2;
  pFVar2 = fontTracker.font_buffer + 0xe8;
  do {
    uVar6 = *(undefined4 *)&pFVar2->c;
    uVar7 = *(undefined4 *)&pFVar2[1].y;
    uVar8 = *(undefined4 *)(pFVar2 + 2);
    *(undefined4 *)pFVar4 = *(undefined4 *)pFVar2;
    *(undefined4 *)&pFVar4->c = uVar6;
    *(undefined4 *)&pFVar4[1].y = uVar7;
    *(undefined4 *)(pFVar4 + 2) = uVar8;
    pFVar2 = (FontChar *)&pFVar2[2].c;
    pFVar4 = (FontChar *)&pFVar4[2].c;
  } while (pFVar2 != (FontChar *)&fontTracker.font_buffer[0xed].y);
  pFVar4->x = fontTracker.font_buffer[237].y;
  if ((char)fontTracker.font_buffer[214].x == -1) {
    fontTracker.font_buffer._1444_4_ = fontTracker.font_buffer._1444_4_ + 1;
    return;
  }
  if (5 < fontTracker.font_buffer._1444_4_) {
    FUN_800317a8();
  }
  fontTracker.font_buffer[213].y = fontTracker.font_buffer[214].y;
  fontTracker.font_buffer._1444_4_ = 0;
  if (fontTracker.font_buffer[212].c == 'S') {
    fontTracker.font_buffer[213].y = FUN_8003175c((uint)(ushort)fontTracker.font_buffer[214].y);
  }
  FUN_80031638();
  fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
  lastData[0] = fontTracker.font_buffer[213].y;
  if ((fontTracker.font_buffer[214].x._1_1_ != 's') && (fontTracker.font_buffer[214].x._1_1_ != 'S')
     ) {
    lastData[0] = fontTracker.font_buffer[213].y;
    fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
    return;
  }
  uVar5 = (uint)(byte)fontTracker.font_buffer[215].x;
  uVar3 = (uint)fontTracker.font_buffer[215].x._1_1_;
  if (uVar5 - 0x4a < 0x6d) {
    iVar1 = uVar5 - 0x80;
    if ((fontTracker.font_buffer[215].x._1_1_ < 0x4a) ||
       (iVar1 = uVar5 - 0x80, 0xb6 < fontTracker.font_buffer[215].x._1_1_)) goto LAB_80031c2c;
    uVar5 = 0x80;
    uVar3 = 0x80;
  }
  iVar1 = uVar5 - 0x80;
LAB_80031c2c:
  *(int *)(unaff_s0 + 0xc) = iVar1;
  *(int *)(unaff_s0 + 0x10) = uVar3 - 0x80;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_GetData(long (*data)[5] /*$s0*/)
 // line 576, offset 0x8003188c
	/* begin block 1 */
		// Start line: 577
		// Start offset: 0x8003188C
		// Variables:
	// 		long analogue_x; // $a0
	// 		long analogue_y; // $v1
	// 		int padState; // $v1
	/* end block 1 */
	// End offset: 0x80031CB4
	// End Line: 721

	/* begin block 2 */
		// Start line: 1275
	/* end block 2 */
	// End Line: 1276

	/* begin block 3 */
		// Start line: 1289
	/* end block 3 */
	// End Line: 1290

/* WARNING: Removing unreachable block (ram,0x80031900) */
/* WARNING: Removing unreachable block (ram,0x80031904) */
/* WARNING: Removing unreachable block (ram,0x80031950) */

void GAMEPAD_GetData(long (*data) [5])

{
  long *in_v0;
  int iVar1;
  long *in_v1;
  long *plVar2;
  FontChar *pFVar3;
  uint uVar4;
  long (*palVar5) [5];
  FontChar *pFVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  long in_t1;
  undefined4 uVar10;
  long in_t2;
  undefined4 uVar11;
  int unaff_s0;
  
  while( true ) {
    (*data)[2] = in_t1;
    (*data)[3] = in_t2;
    plVar2 = in_v1 + 4;
    palVar5 = (long (*) [5])(*data + 4);
    if (plVar2 == in_v0) break;
    lVar8 = in_v1[5];
    in_t1 = in_v1[6];
    in_t2 = in_v1[7];
    (*palVar5)[0] = *plVar2;
    (data + 1)[0] = lVar8;
    in_v1 = plVar2;
    data = palVar5;
  }
  *(undefined2 *)*palVar5 = *(undefined2 *)plVar2;
  pFVar6 = fontTracker.font_buffer + 0xe2;
  pFVar3 = fontTracker.font_buffer + 0xe8;
  do {
    uVar9 = *(undefined4 *)&pFVar3->c;
    uVar10 = *(undefined4 *)&pFVar3[1].y;
    uVar11 = *(undefined4 *)(pFVar3 + 2);
    *(undefined4 *)pFVar6 = *(undefined4 *)pFVar3;
    *(undefined4 *)&pFVar6->c = uVar9;
    *(undefined4 *)&pFVar6[1].y = uVar10;
    *(undefined4 *)(pFVar6 + 2) = uVar11;
    pFVar3 = (FontChar *)&pFVar3[2].c;
    pFVar6 = (FontChar *)&pFVar6[2].c;
  } while (pFVar3 != (FontChar *)&fontTracker.font_buffer[0xed].y);
  pFVar6->x = fontTracker.font_buffer[237].y;
  if ((char)fontTracker.font_buffer[214].x == -1) {
    fontTracker.font_buffer._1444_4_ = fontTracker.font_buffer._1444_4_ + 1;
    return;
  }
  if (5 < fontTracker.font_buffer._1444_4_) {
    FUN_800317a8();
  }
  fontTracker.font_buffer[213].y = fontTracker.font_buffer[214].y;
  fontTracker.font_buffer._1444_4_ = 0;
  if (fontTracker.font_buffer[212].c == 'S') {
    fontTracker.font_buffer[213].y = FUN_8003175c((uint)(ushort)fontTracker.font_buffer[214].y);
  }
  FUN_80031638();
  fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
  lastData[0] = fontTracker.font_buffer[213].y;
  if ((fontTracker.font_buffer[214].x._1_1_ != 's') && (fontTracker.font_buffer[214].x._1_1_ != 'S')
     ) {
    lastData[0] = fontTracker.font_buffer[213].y;
    fontTracker.font_buffer[212].c = fontTracker.font_buffer[214].x._1_1_;
    return;
  }
  uVar7 = (uint)(byte)fontTracker.font_buffer[215].x;
  uVar4 = (uint)fontTracker.font_buffer[215].x._1_1_;
  if (uVar7 - 0x4a < 0x6d) {
    iVar1 = uVar7 - 0x80;
    if ((fontTracker.font_buffer[215].x._1_1_ < 0x4a) ||
       (iVar1 = uVar7 - 0x80, 0xb6 < fontTracker.font_buffer[215].x._1_1_)) goto LAB_80031c2c;
    uVar7 = 0x80;
    uVar4 = 0x80;
  }
  iVar1 = uVar7 - 0x80;
LAB_80031c2c:
  *(int *)(unaff_s0 + 0xc) = iVar1;
  *(int *)(unaff_s0 + 0x10) = uVar4 - 0x80;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_DisplayControllerStatus(int msgY /*$s1*/)
 // line 723, offset 0x80031cc8
	/* begin block 1 */
		// Start line: 724
		// Start offset: 0x80031CC8
		// Variables:
	// 		char *noCtrlStr; // $s0
	/* end block 1 */
	// End offset: 0x80031D14
	// End Line: 732

	/* begin block 2 */
		// Start line: 1590
	/* end block 2 */
	// End Line: 1591

	/* begin block 3 */
		// Start line: 1592
	/* end block 3 */
	// End Line: 1593

void GAMEPAD_DisplayControllerStatus(int msgY)

{
  int iVar1;
  
  iVar1 = msgY + 0x70;
  FUN_800317f0(iVar1);
  FUN_80030ecc(msgY + 0x48,iVar1,0);
  FUN_80030ecc(msgY + 0x48,iVar1,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_Process(struct GameTracker *gameTracker /*$s0*/)
 // line 737, offset 0x80031d28
	/* begin block 1 */
		// Start line: 1620
	/* end block 1 */
	// End Line: 1621

void GAMEPAD_Process(GameTracker *gameTracker)

{
  RECT *pRVar1;
  FontChar *pFVar2;
  undefined4 *in_v0;
  undefined4 *puVar3;
  RECT *pRVar4;
  undefined4 *in_v1;
  undefined4 *puVar5;
  FontChar *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  
  do {
    puVar5 = in_v1;
    puVar3 = in_v0;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar10 = puVar3[3];
    *puVar5 = *puVar3;
    puVar5[1] = uVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar10;
    in_v0 = puVar3 + 4;
    in_v1 = puVar5 + 4;
  } while (puVar3 + 4 != (undefined4 *)&BexitLine[1].textureW);
  uVar7 = puVar3[5];
  puVar5[4] = BexitLine[1]._4_4_;
  puVar5[5] = uVar7;
  pRVar1 = (RECT *)&BexitLine[1].xshift;
  pFVar2 = fontTracker.font_buffer + 0xc6;
  do {
    pFVar6 = pFVar2;
    pRVar4 = pRVar1;
    uVar7 = *(undefined4 *)&pRVar4->w;
    lVar9 = *(long *)(pRVar4 + 1);
    uVar8 = *(undefined4 *)&pRVar4[1].w;
    *(long *)pFVar6 = *(long *)pRVar4;
    *(undefined4 *)&pFVar6->c = uVar7;
    *(long *)&pFVar6[1].y = lVar9;
    *(undefined4 *)(pFVar6 + 2) = uVar8;
    pRVar1 = pRVar4 + 2;
    pFVar2 = (FontChar *)&pFVar6[2].c;
  } while (pRVar4 + 2 != &DISPENV_800d0e54.screen);
  uVar7 = *(undefined4 *)&pRVar4[2].w;
  *(undefined4 *)(FontChar *)&pFVar6[2].c = DISPENV_800d0e54.screen._0_4_;
  *(undefined4 *)&pFVar6[3].y = uVar7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_SaveControllers()
 // line 797, offset 0x80031d80
	/* begin block 1 */
		// Start line: 1741
	/* end block 1 */
	// End Line: 1742

	/* begin block 2 */
		// Start line: 1742
	/* end block 2 */
	// End Line: 1743

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_SaveControllers(void)

{
  undefined4 *in_v0;
  undefined4 *puVar1;
  undefined4 *in_v1;
  undefined4 *in_a0;
  undefined4 in_a1;
  undefined4 in_a2;
  undefined4 in_a3;
  undefined4 uVar2;
  
  while( true ) {
    uVar2 = in_v0[3];
    *in_v1 = in_a1;
    in_v1[1] = in_a2;
    in_v1[2] = in_a3;
    in_v1[3] = uVar2;
    puVar1 = in_v0 + 4;
    if (puVar1 == in_a0) break;
    in_a1 = *puVar1;
    in_a2 = in_v0[5];
    in_a3 = in_v0[6];
    in_v0 = puVar1;
    in_v1 = in_v1 + 4;
  }
  uVar2 = in_v0[5];
  in_v1[4] = *puVar1;
  in_v1[5] = uVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAMEPAD_RestoreControllers()
 // line 804, offset 0x80031e1c
	/* begin block 1 */
		// Start line: 1755
	/* end block 1 */
	// End Line: 1756

	/* begin block 2 */
		// Start line: 1756
	/* end block 2 */
	// End Line: 1757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAMEPAD_RestoreControllers(void)

{
  undefined4 *in_v0;
  undefined4 *puVar1;
  undefined4 *in_v1;
  undefined4 *puVar2;
  undefined4 *in_a0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  do {
    puVar2 = in_v1;
    puVar1 = in_v0;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    in_v0 = puVar1 + 4;
    in_v1 = puVar2 + 4;
  } while (in_v0 != in_a0);
  uVar3 = puVar1[5];
  puVar2[4] = *in_v0;
  puVar2[5] = uVar3;
  loadStatus.currentDirLoading = loadStatus.currentDirLoading | 0x80;
  return;
}





