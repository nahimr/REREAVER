#include "THISDUST.H"
#include "CAMERA.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalculateViewVolumeNormals(struct Camera *camera /*$s0*/)
 // line 230, offset 0x800146e8
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x800146E8
		// Variables:
	// 		short projDistance; // $v0
	// 		struct _Normal n0; // stack offset -40
	// 		struct _Normal n1; // stack offset -32
	// 		struct _Normal n2; // stack offset -24
	// 		struct _Normal n3; // stack offset -16
	// 		int x1; // $a0
	// 		int x2; // $a2
	// 		int y1; // $v1
	// 		int y2; // $a1
	/* end block 1 */
	// End offset: 0x800146E8
	// End Line: 231

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

void CAMERA_CalculateViewVolumeNormals(Camera *camera)

{
  int unaff_s0;
  int in_lo;
  short in_stack_00000010;
  short in_stack_00000012;
  short in_stack_00000014;
  short in_stack_00000018;
  short in_stack_0000001a;
  short in_stack_0000001c;
  short in_stack_00000020;
  short in_stack_00000022;
  short in_stack_00000024;
  short in_stack_00000028;
  short in_stack_0000002a;
  short in_stack_0000002c;
  
  *(undefined2 *)(unaff_s0 + 0x80) =
       (short)(in_lo - (int)in_stack_00000014 * (int)in_stack_0000001a >> 0xc);
  *(short *)(unaff_s0 + 0x82) =
       -(short)((int)in_stack_00000010 * (int)in_stack_0000001c -
                (int)in_stack_00000014 * (int)in_stack_00000018 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x84) =
       (short)((int)in_stack_00000010 * (int)in_stack_0000001a -
               (int)in_stack_00000012 * (int)in_stack_00000018 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x80);
  *(undefined2 *)(unaff_s0 + 0x88) =
       (short)((int)in_stack_00000022 * (int)in_stack_00000014 -
               (int)in_stack_00000024 * (int)in_stack_00000012 >> 0xc);
  *(short *)(unaff_s0 + 0x8a) =
       -(short)((int)in_stack_00000020 * (int)in_stack_00000014 -
                (int)in_stack_00000024 * (int)in_stack_00000010 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x8c) =
       (short)((int)in_stack_00000020 * (int)in_stack_00000012 -
               (int)in_stack_00000022 * (int)in_stack_00000010 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x88);
  *(undefined2 *)(unaff_s0 + 0x90) =
       (short)((int)in_stack_0000001a * (int)in_stack_0000002c -
               (int)in_stack_0000001c * (int)in_stack_0000002a >> 0xc);
  *(short *)(unaff_s0 + 0x92) =
       -(short)((int)in_stack_00000018 * (int)in_stack_0000002c -
                (int)in_stack_0000001c * (int)in_stack_00000028 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x94) =
       (short)((int)in_stack_00000018 * (int)in_stack_0000002a -
               (int)in_stack_0000001a * (int)in_stack_00000028 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x90);
  *(undefined2 *)(unaff_s0 + 0x98) =
       (short)((int)in_stack_0000002a * (int)in_stack_00000024 -
               (int)in_stack_0000002c * (int)in_stack_00000022 >> 0xc);
  *(short *)(unaff_s0 + 0x9a) =
       -(short)((int)in_stack_00000028 * (int)in_stack_00000024 -
                (int)in_stack_0000002c * (int)in_stack_00000020 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x9c) =
       (short)((int)in_stack_00000028 * (int)in_stack_00000022 -
               (int)in_stack_0000002a * (int)in_stack_00000020 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x98);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcVVClipInfo(struct Camera *camera /*$s0*/)
 // line 263, offset 0x80014a24
	/* begin block 1 */
		// Start line: 553
	/* end block 1 */
	// End Line: 554

void CAMERA_CalcVVClipInfo(Camera *camera)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  
  setCopReg(2,in_at,unaff_s0[1]);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x19);
  unaff_s0[0x12] = uVar1;
  uVar1 = getCopReg(2,0x1a);
  unaff_s0[0x13] = uVar1;
  uVar1 = getCopReg(2,0x1b);
  unaff_s0[0x14] = uVar1;
  setCopControlWord(2,0,*unaff_s1);
  setCopControlWord(2,0x800,unaff_s1[1]);
  setCopControlWord(2,0x1000,unaff_s1[2]);
  setCopControlWord(2,0x1800,unaff_s1[3]);
  setCopControlWord(2,0x2000,unaff_s1[4]);
  setCopReg(2,in_zero,*unaff_s0);
  setCopReg(2,in_at,unaff_s0[1]);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x19);
  unaff_s0[0x15] = uVar1;
  uVar1 = getCopReg(2,0x1a);
  unaff_s0[0x16] = uVar1;
  uVar1 = getCopReg(2,0x1b);
  unaff_s0[0x17] = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetViewVolume(struct Camera *camera /*$s0*/)
 // line 274, offset 0x80014b44
	/* begin block 1 */
		// Start line: 577
	/* end block 1 */
	// End Line: 578

void CAMERA_SetViewVolume(Camera *camera)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while( true ) {
    iVar2 = unaff_s1;
    unaff_s2 = unaff_s2 + 1;
    if (0xf < unaff_s2) break;
    unaff_s1 = iVar2 + 0x40;
    if ((int)*(short *)(iVar2 + 0x44) == unaff_s4) {
      iVar1 = *(int *)(iVar2 + 0x48);
      FUN_800bd414((uint)*(ushort *)(iVar1 + 0x46),(uint)*(ushort *)(iVar1 + 0x44),
                   *(undefined4 *)(unaff_s3 + 0x68));
      FUN_80036bc8(iVar1);
      unaff_s1 = iVar2 + 0x40;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetProjDistance(struct Camera *camera /*$s3*/, long distance /*$s0*/)
 // line 280, offset 0x80014b70
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x80014B70
		// Variables:
	// 		struct Level *level; // $s0
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x80014BF4
	// End Line: 300

	/* begin block 2 */
		// Start line: 589
	/* end block 2 */
	// End Line: 590

void CAMERA_SetProjDistance(Camera *camera,long distance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CreateNewFocuspoint(struct Camera *camera /*$s0*/)
 // line 302, offset 0x80014c14
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x80014C14
		// Variables:
	// 		struct _SVector sv; // stack offset -24

		/* begin block 1.1 */
			// Start line: 303
			// Start offset: 0x80014C14
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v0
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $v0
		/* end block 1.1 */
		// End offset: 0x80014C14
		// End Line: 303

		/* begin block 1.2 */
			// Start line: 303
			// Start offset: 0x80014C14
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		struct _Position *_v; // $a2
		/* end block 1.2 */
		// End offset: 0x80014C14
		// End Line: 303
	/* end block 1 */
	// End offset: 0x80014C14
	// End Line: 303

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

void CAMERA_CreateNewFocuspoint(Camera *camera)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SaveMode(struct Camera *camera /*$a0*/, long mode /*$a1*/)
 // line 315, offset 0x80014cb8
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x80014CB8
		// Variables:
	// 		long i; // $t4
	/* end block 1 */
	// End offset: 0x80014FE8
	// End Line: 357

	/* begin block 2 */
		// Start line: 674
	/* end block 2 */
	// End Line: 675

	/* begin block 3 */
		// Start line: 675
	/* end block 3 */
	// End Line: 676

	/* begin block 4 */
		// Start line: 677
	/* end block 4 */
	// End Line: 678

void CAMERA_SaveMode(Camera *camera,long mode)

{
  short sVar1;
  _Position *p_Var2;
  undefined4 uVar3;
  
  camera->savedMode[(int)camera->stack] = mode;
  if (((mode == 2) || (mode == 5)) || (mode == 4)) {
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    sVar1 = (camera->core).position.z;
    *(undefined4 *)(p_Var2 + 0x70) = *(undefined4 *)&(camera->core).position;
    p_Var2[0x70].z = sVar1;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    sVar1 = (camera->focusPoint).z;
    *(undefined4 *)(p_Var2 + 0x71) = *(undefined4 *)&camera->focusPoint;
    p_Var2[0x71].z = sVar1;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    sVar1 = (camera->targetPos).z;
    *(undefined4 *)(p_Var2 + 0x73) = *(undefined4 *)&camera->targetPos;
    p_Var2[0x73].z = sVar1;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    sVar1 = (camera->targetFocusPoint).z;
    *(undefined4 *)(p_Var2 + 0x74) = *(undefined4 *)&camera->targetFocusPoint;
    p_Var2[0x74].z = sVar1;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    uVar3 = *(undefined4 *)&(camera->focusRotation).z;
    *(undefined4 *)&p_Var2[0x77].y = *(undefined4 *)&camera->focusRotation;
    *(undefined4 *)(p_Var2 + 0x78) = uVar3;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    uVar3 = *(undefined4 *)&(camera->targetFocusRotation).z;
    *(undefined4 *)&p_Var2[0x78].z = *(undefined4 *)&camera->targetFocusRotation;
    *(undefined4 *)&p_Var2[0x79].y = uVar3;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    uVar3 = *(undefined4 *)&(camera->focusPointVel).z;
    *(undefined4 *)&p_Var2[0x7a].z = *(undefined4 *)&camera->focusPointVel;
    *(undefined4 *)&p_Var2[0x7b].y = uVar3;
    p_Var2 = (_Position *)((int)&(camera->core).position + (int)camera->stack * 0x70);
    uVar3 = *(undefined4 *)&(camera->focusPointAccl).z;
    *(undefined4 *)(p_Var2 + 0x7c) = *(undefined4 *)&camera->focusPointAccl;
    *(undefined4 *)&p_Var2[0x7c].z = uVar3;
    camera->savedCinematic[(int)camera->stack].maxVel = (int)camera->maxVel;
    camera->savedCinematic[(int)camera->stack].focusDistance = camera->focusDistance;
    camera->savedCinematic[(int)camera->stack].targetFocusDistance = camera->targetFocusDistance;
    camera->savedCinematic[(int)camera->stack].posSpline = (camera->data).Cinematic.posSpline;
    camera->savedCinematic[(int)camera->stack].targetSpline = (camera->data).Cinematic.targetSpline;
    *(long *)&camera->savedCinematic[(int)camera->stack].level = loadStatus.bigFile.cachedDirID;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_RestoreMode(struct Camera *camera /*$s0*/)
 // line 359, offset 0x80014ff0
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x80014FF0

		/* begin block 1.1 */
			// Start line: 372
			// Start offset: 0x80015014
			// Variables:
		// 		long mode; // $s1
		/* end block 1.1 */
		// End offset: 0x80015484
		// End Line: 485
	/* end block 1 */
	// End offset: 0x80015484
	// End Line: 486

	/* begin block 2 */
		// Start line: 770
	/* end block 2 */
	// End Line: 771

void CAMERA_RestoreMode(Camera *camera)

{
  undefined2 uVar1;
  long lVar2;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  lVar2 = loadStatus.bigFile.searchDirID;
  if (in_v1 == 5) {
    *(undefined2 *)(unaff_s0 + 0x136) = 0;
    *(undefined2 *)(unaff_s0 + 0x138) = 0;
    *(undefined2 *)(unaff_s0 + 0x13a) = 0x160;
    *(long *)(unaff_s0 + 0x108) = lVar2;
    FUN_800154cc();
  }
  if (unaff_s1 == 0xc) {
    draw[1].dr_env.code[9] = draw[1].dr_env.code[9] & 0xffffffbf;
  }
  else {
    draw[1].dr_env.code[9] = draw[1].dr_env.code[9] | 0x40;
  }
  cameraMode = unaff_s1;
  *(undefined2 *)(unaff_s0 + 0xf0) = (short)unaff_s1;
  uVar1 = *(undefined2 *)
           (unaff_s0 +
            (*(int *)((int)camera_modeToIndex + ((unaff_s1 << 0x10) >> 0xe)) * 3 +
            (int)*(short *)(unaff_s0 + 500)) * 4 + 0x22c);
  *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
  *(undefined2 *)(unaff_s0 + 0x170) = 0;
  *(undefined2 *)(unaff_s0 + 0x1a8) = uVar1;
  if (unaff_s1 == 0x10) {
    *(uint *)(unaff_s0 + 0xe8) = *(uint *)(unaff_s0 + 0xe8) | 0x2000;
  }
  else {
    *(uint *)(unaff_s0 + 0xe8) = *(uint *)(unaff_s0 + 0xe8) & 0xffffdfff;
  }
  *(short *)(unaff_s0 + 0x278) = *(short *)(unaff_s0 + 0x278) + -1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Save(struct Camera *camera /*$a0*/, long save /*$a1*/)
 // line 489, offset 0x80015498
	/* begin block 1 */
		// Start line: 490
		// Start offset: 0x80015498

		/* begin block 1.1 */
			// Start line: 493
			// Start offset: 0x800154A8
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x80015510
		// End Line: 505
	/* end block 1 */
	// End offset: 0x80015558
	// End Line: 520

	/* begin block 2 */
		// Start line: 1060
	/* end block 2 */
	// End Line: 1061

void CAMERA_Save(Camera *camera,long save)

{
  (camera->savedfocusRotation).z = (camera->focusRotation).z;
  if ((save & 0x100U) != 0) {
    FUN_80014c1c(camera,(int)camera->mode);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Restore(struct Camera *camera /*$a0*/, long restore /*$a1*/)
 // line 524, offset 0x80015568
	/* begin block 1 */
		// Start line: 1133
	/* end block 1 */
	// End Line: 1134

void CAMERA_Restore(Camera *camera,long restore)

{
  int in_v0;
  
  if (in_v0 != 0) {
    FUN_80014f54();
  }
  return;
}



// decompiled code
// original method signature: 
// struct _SVector * /*$ra*/ SplineGetNextPointDC(struct Spline *spline /*$s0*/, struct SplineDef *def /*$s1*/)
 // line 564, offset 0x80015624
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80015624
		// Variables:
	// 		static struct _SVector point; // offset 0x0
	/* end block 1 */
	// End offset: 0x8001566C
	// End Line: 576

	/* begin block 2 */
		// Start line: 1219
	/* end block 2 */
	// End Line: 1220

_SVector * SplineGetNextPointDC(Spline *spline,SplineDef *def)

{
  short sVar1;
  undefined2 in_v0;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_s0;
  short *unaff_s2;
  int unaff_s3;
  short in_stack_00000010;
  short in_stack_00000018;
  short in_stack_0000001a;
  short in_stack_0000001c;
  short *psStack00000028;
  
  switch(in_v0) {
  case 0:
  case 2:
    FUN_80014c1c();
    break;
  case 3:
    if (unaff_s3 != 5) {
      FUN_80014c1c();
      unaff_s2[0xd9] = unaff_s2[0x58];
      unaff_s2[0xda] = unaff_s2[0x59];
      unaff_s2[0xdb] = unaff_s2[0x5a];
      unaff_s2[0x9e] = unaff_s2[0x58];
      unaff_s2[0x9f] = unaff_s2[0x59];
      unaff_s2[0xa0] = unaff_s2[0x5a];
      unaff_s2[0x259] = unaff_s2[0x58];
      in_stack_00000018 = unaff_s2[0x80] - *unaff_s2;
      in_stack_0000001a = unaff_s2[0x81] - unaff_s2[1];
      in_stack_0000001c = unaff_s2[0x82] - unaff_s2[2];
      sVar2 = FUN_80015e18();
      unaff_s2[0x83] = sVar2;
      roll_target = 0;
      current_roll_amount = 0;
      roll_inc = 0;
    }
    break;
  case 4:
    FUN_8001bdcc();
    FUN_80014c1c();
    if (unaff_s3 == 5) {
      debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
      unaff_s2[0xa0] = unaff_s2[0xdb];
      FUN_800153fc();
    }
    break;
  case 10:
  case 0xb:
    FUN_80014c1c();
    if (unaff_s3 == 5) {
      FUN_800153fc();
    }
    FUN_80014b78();
  }
  switch(unaff_s3) {
  case 0:
  case 10:
  case 0xb:
    break;
  default:
    unaff_s2[0x78] = (short)unaff_s3;
    break;
  case 2:
  case 4:
  case 5:
    FUN_80014ad4();
    *(undefined4 *)(unaff_s2 + 0x212) = *(undefined4 *)(unaff_s2 + 0x20e);
    uVar3 = *(undefined4 *)(unaff_s2 + 0x210);
    unaff_s2[0x21b] = 0;
    *(undefined4 *)(unaff_s2 + 0x20e) = 0;
    unaff_s2[0x218] = 0;
    unaff_s2[0x217] = 0;
    unaff_s2[0x216] = 0;
    *(undefined4 *)(unaff_s2 + 0x210) = 0;
    *(undefined4 *)(unaff_s2 + 0x214) = uVar3;
    if (*(int *)(unaff_s2 + 0x212) != 0) {
      *(undefined4 *)(*(int *)(unaff_s2 + 0x212) + 0x10) = 0;
    }
    if (*(int *)(unaff_s2 + 0x214) != 0) {
      *(undefined4 *)(*(int *)(unaff_s2 + 0x214) + 0x10) = 0;
    }
    puVar6 = *(undefined4 **)(unaff_s2 + 0x212);
    unaff_s2[0x78] = (short)unaff_s3;
    if (puVar6 != (undefined4 *)0x0) {
      if ((unaff_s3 == 4) || (unaff_s3 == 2)) {
        statsMenu.text._0_2_ = unaff_s2[0x9e];
        statsMenu.var_address._0_2_ = unaff_s2[0xa0] + 0x800U & 0xfff;
        FUN_80016564(&stack0x00000020,unaff_s2 + 0xd5,0x800cfca4,(int)unaff_s2[0xd4]);
        psStack00000028 =
             (short *)FUN_8004119c(**(undefined4 **)(unaff_s2 + 0x212),&stack0x00000020,
                                   &stack0x00000010);
        FUN_800176b8(0x800cfca4,*(int *)(unaff_s2 + 0x84) + 0x5c,&stack0x00000028);
        *(int *)(unaff_s2 + 0x21e) = (int)in_stack_00000010;
        psStack00000028 = (short *)FUN_8004119c(**(undefined4 **)(unaff_s2 + 0x212));
        *(int *)(unaff_s2 + 0x21c) = (int)in_stack_00000010;
      }
      else {
        psStack00000028 = (short *)FUN_800410c4(*puVar6,puVar6 + 4);
      }
      if (psStack00000028 != (short *)0x0) {
        sVar2 = psStack00000028[1];
        sVar1 = psStack00000028[2];
        unaff_s2[0xcc] = *psStack00000028;
        unaff_s2[0xcd] = sVar2;
        unaff_s2[0xce] = sVar1;
        if (unaff_s3 == 5) {
          unaff_s2[0x7a] = 3;
        }
        puVar6 = *(undefined4 **)(unaff_s2 + 0x214);
        if ((puVar6 != (undefined4 *)0x0) &&
           (psVar4 = (short *)FUN_800410c4(*puVar6,puVar6 + 4), psVar4 != (short *)0x0)) {
          sVar2 = psVar4[1];
          sVar1 = psVar4[2];
          unaff_s2[0xd5] = *psVar4;
          unaff_s2[0xd6] = sVar2;
          unaff_s2[0xd7] = sVar1;
        }
      }
    }
    *(undefined4 *)(unaff_s2 + 0xd0) = *(undefined4 *)(unaff_s2 + 0x9e);
    *(undefined4 *)(unaff_s2 + 0xd2) = *(undefined4 *)(unaff_s2 + 0xa0);
    debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
    unaff_s2[0x7c] = 0;
    unaff_s2[0x25e] = 0;
    *(uint *)(unaff_s2 + 0x74) = *(uint *)(unaff_s2 + 0x74) & 0xffffdfff;
    break;
  case 0xc:
  case 0xd:
  case 0x10:
    FUN_80014ad4();
    if (unaff_s3 == 0x10) {
      unaff_s3 = 0xc;
      uVar5 = *(uint *)(unaff_s2 + 0x74) | 0x2000;
    }
    else {
      uVar5 = *(uint *)(unaff_s2 + 0x74) & 0xffffdfff;
    }
    *(uint *)(unaff_s2 + 0x74) = uVar5;
    draw[1].dr_env.code[9] = draw[1].dr_env.code[9] & 0xffffffbf;
    cameraMode = unaff_s3;
    unaff_s2[0x78] = (short)unaff_s3;
    sVar2 = unaff_s2[(*(int *)((int)camera_modeToIndex + ((unaff_s3 << 0x10) >> 0xe)) * 3 +
                     (int)unaff_s2[0xfa]) * 2 + 0x116];
    unaff_s2[0xe2] = 8;
    *(undefined4 *)(unaff_s2 + 0x238) = 0xe5a20000;
    unaff_s2[0xb8] = 0;
    unaff_s2[0xd4] = sVar2;
    if ((unaff_s0 == 5) && (*(int *)(unaff_s2 + 0x84) != 0)) {
      FUN_8001668c();
    }
  }
  unaff_s2[0xd8] = unaff_s2[0xd4];
  *(undefined4 *)(unaff_s2 + 0xde) = *(undefined4 *)(unaff_s2 + 0xd9);
  *(undefined4 *)(unaff_s2 + 0xe0) = *(undefined4 *)(unaff_s2 + 0xdb);
  return (_SVector *)(uint)(ushort)unaff_s2[0xd4];
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetMode(struct Camera *camera /*$s2*/, long mode /*$s3*/)
 // line 578, offset 0x80015680
	/* begin block 1 */
		// Start line: 579
		// Start offset: 0x80015680
		// Variables:
	// 		int oldMode; // $s0
	// 		struct SplineDef curPositional; // stack offset -56
	// 		struct _SVector sv; // stack offset -48

		/* begin block 1.1 */
			// Start line: 624
			// Start offset: 0x80015754
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Rotation *_v0; // $v0
		// 		struct _Rotation *_v1; // $v1
		/* end block 1.1 */
		// End offset: 0x80015754
		// End Line: 624

		/* begin block 1.2 */
			// Start line: 624
			// Start offset: 0x80015754
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a0
		// 		short _z1; // $v1
		// 		struct _Rotation *_v0; // $v0
		/* end block 1.2 */
		// End offset: 0x80015754
		// End Line: 624

		/* begin block 1.3 */
			// Start line: 624
			// Start offset: 0x80015754
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $a1
		// 		short _z0; // $v1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $a0
		// 		struct _Position *_v0; // $v1
		/* end block 1.3 */
		// End offset: 0x80015754
		// End Line: 624

		/* begin block 1.4 */
			// Start line: 684
			// Start offset: 0x800158B0
			// Variables:
		// 		struct _SVector *camPos; // stack offset -32
		// 		struct _SVector *targetPos; // $a0

			/* begin block 1.4.1 */
				// Start line: 689
				// Start offset: 0x800158C4
				// Variables:
			// 		struct _Position pos; // stack offset -40
			/* end block 1.4.1 */
			// End offset: 0x800158C4
			// End Line: 691

			/* begin block 1.4.2 */
				// Start line: 705
				// Start offset: 0x80015970
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			// 		struct _Position *_v0; // $v0
			/* end block 1.4.2 */
			// End offset: 0x80015970
			// End Line: 705

			/* begin block 1.4.3 */
				// Start line: 715
				// Start offset: 0x800159C4
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			// 		struct _Position *_v0; // $v0
			/* end block 1.4.3 */
			// End offset: 0x800159E0
			// End Line: 715
		/* end block 1.4 */
		// End offset: 0x800159E0
		// End Line: 719
	/* end block 1 */
	// End offset: 0x80015B14
	// End Line: 771

	/* begin block 2 */
		// Start line: 1252
	/* end block 2 */
	// End Line: 1253

void CAMERA_SetMode(Camera *camera,long mode)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 in_v1;
  undefined4 *puVar6;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  short in_stack_00000010;
  undefined2 *puStack00000028;
  
  debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
  *(undefined2 *)(unaff_s2 + 0x140) = in_v1;
  FUN_800153fc();
  switch(unaff_s3) {
  case 0:
  case 10:
  case 0xb:
    break;
  default:
    *(undefined2 *)(unaff_s2 + 0xf0) = (short)unaff_s3;
    break;
  case 2:
  case 4:
  case 5:
    FUN_80014ad4();
    *(undefined4 *)(unaff_s2 + 0x424) = *(undefined4 *)(unaff_s2 + 0x41c);
    uVar3 = *(undefined4 *)(unaff_s2 + 0x420);
    *(undefined2 *)(unaff_s2 + 0x436) = 0;
    *(undefined4 *)(unaff_s2 + 0x41c) = 0;
    *(undefined2 *)(unaff_s2 + 0x430) = 0;
    *(undefined2 *)(unaff_s2 + 0x42e) = 0;
    *(undefined2 *)(unaff_s2 + 0x42c) = 0;
    *(undefined4 *)(unaff_s2 + 0x420) = 0;
    *(undefined4 *)(unaff_s2 + 0x428) = uVar3;
    if (*(int *)(unaff_s2 + 0x424) != 0) {
      *(undefined4 *)(*(int *)(unaff_s2 + 0x424) + 0x10) = 0;
    }
    if (*(int *)(unaff_s2 + 0x428) != 0) {
      *(undefined4 *)(*(int *)(unaff_s2 + 0x428) + 0x10) = 0;
    }
    puVar6 = *(undefined4 **)(unaff_s2 + 0x424);
    *(undefined2 *)(unaff_s2 + 0xf0) = (short)unaff_s3;
    if (puVar6 != (undefined4 *)0x0) {
      if ((unaff_s3 == 4) || (unaff_s3 == 2)) {
        statsMenu.text._0_2_ = *(undefined2 *)(unaff_s2 + 0x13c);
        statsMenu.var_address._0_2_ = *(short *)(unaff_s2 + 0x140) + 0x800U & 0xfff;
        FUN_80016564(&stack0x00000020,unaff_s2 + 0x1aa,0x800cfca4,(int)*(short *)(unaff_s2 + 0x1a8))
        ;
        puStack00000028 =
             (undefined2 *)
             FUN_8004119c(**(undefined4 **)(unaff_s2 + 0x424),&stack0x00000020,&stack0x00000010);
        FUN_800176b8(0x800cfca4,*(int *)(unaff_s2 + 0x108) + 0x5c,&stack0x00000028);
        *(int *)(unaff_s2 + 0x43c) = (int)in_stack_00000010;
        puStack00000028 = (undefined2 *)FUN_8004119c(**(undefined4 **)(unaff_s2 + 0x424));
        *(int *)(unaff_s2 + 0x438) = (int)in_stack_00000010;
      }
      else {
        puStack00000028 = (undefined2 *)FUN_800410c4(*puVar6,puVar6 + 4);
      }
      if (puStack00000028 != (undefined2 *)0x0) {
        uVar2 = puStack00000028[1];
        uVar1 = puStack00000028[2];
        *(undefined2 *)(unaff_s2 + 0x198) = *puStack00000028;
        *(undefined2 *)(unaff_s2 + 0x19a) = uVar2;
        *(undefined2 *)(unaff_s2 + 0x19c) = uVar1;
        if (unaff_s3 == 5) {
          *(undefined2 *)(unaff_s2 + 0xf4) = 3;
        }
        puVar6 = *(undefined4 **)(unaff_s2 + 0x428);
        if ((puVar6 != (undefined4 *)0x0) &&
           (puVar4 = (undefined2 *)FUN_800410c4(*puVar6,puVar6 + 4), puVar4 != (undefined2 *)0x0)) {
          uVar2 = puVar4[1];
          uVar1 = puVar4[2];
          *(undefined2 *)(unaff_s2 + 0x1aa) = *puVar4;
          *(undefined2 *)(unaff_s2 + 0x1ac) = uVar2;
          *(undefined2 *)(unaff_s2 + 0x1ae) = uVar1;
        }
      }
    }
    *(undefined4 *)(unaff_s2 + 0x1a0) = *(undefined4 *)(unaff_s2 + 0x13c);
    *(undefined4 *)(unaff_s2 + 0x1a4) = *(undefined4 *)(unaff_s2 + 0x140);
    debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
    *(undefined2 *)(unaff_s2 + 0xf8) = 0;
    *(undefined2 *)(unaff_s2 + 0x4bc) = 0;
    *(uint *)(unaff_s2 + 0xe8) = *(uint *)(unaff_s2 + 0xe8) & 0xffffdfff;
    break;
  case 0xc:
  case 0xd:
  case 0x10:
    FUN_80014ad4();
    if (unaff_s3 == 0x10) {
      unaff_s3 = 0xc;
      uVar5 = *(uint *)(unaff_s2 + 0xe8) | 0x2000;
    }
    else {
      uVar5 = *(uint *)(unaff_s2 + 0xe8) & 0xffffdfff;
    }
    *(uint *)(unaff_s2 + 0xe8) = uVar5;
    draw[1].dr_env.code[9] = draw[1].dr_env.code[9] & 0xffffffbf;
    cameraMode = unaff_s3;
    *(undefined2 *)(unaff_s2 + 0xf0) = (short)unaff_s3;
    uVar2 = *(undefined2 *)
             (unaff_s2 +
              (*(int *)((int)camera_modeToIndex + ((unaff_s3 << 0x10) >> 0xe)) * 3 +
              (int)*(short *)(unaff_s2 + 500)) * 4 + 0x22c);
    *(undefined2 *)(unaff_s2 + 0x1c4) = 8;
    *(undefined4 *)(unaff_s2 + 0x470) = 0xe5a20000;
    *(undefined2 *)(unaff_s2 + 0x170) = 0;
    *(undefined2 *)(unaff_s2 + 0x1a8) = uVar2;
    if ((unaff_s0 == 5) && (*(int *)(unaff_s2 + 0x108) != 0)) {
      FUN_8001668c();
    }
  }
  *(undefined2 *)(unaff_s2 + 0x1b0) = *(undefined2 *)(unaff_s2 + 0x1a8);
  *(undefined4 *)(unaff_s2 + 0x1bc) = *(undefined4 *)(unaff_s2 + 0x1b2);
  *(undefined4 *)(unaff_s2 + 0x1c0) = *(undefined4 *)(unaff_s2 + 0x1b6);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Initialize(struct Camera *camera /*$s1*/)
 // line 773, offset 0x80015b30
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x80015B30
		// Variables:
	// 		long i; // $s2
	/* end block 1 */
	// End offset: 0x80015DB8
	// End Line: 992

	/* begin block 2 */
		// Start line: 1692
	/* end block 2 */
	// End Line: 1693

void CAMERA_Initialize(Camera *camera)

{
  int in_v1;
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int iVar2;
  
  *(short *)(unaff_s0 + 4) = (short)in_v1 + (short)((uint)(in_v1 + 0xff) >> 8) * -0x100 + -0x80;
  if (0xf < unaff_s2 + 1) {
    *(undefined2 *)(unaff_s1 + 0xb0) = 0xfc7;
    *(undefined2 *)(unaff_s1 + 0x1a0) = 0xfc7;
    *(undefined2 *)(unaff_s1 + 0x13c) = 0xfc7;
    *(undefined2 *)(unaff_s1 + 0x1b2) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x22c) = 0x5dc;
    *(undefined4 *)(unaff_s1 + 0x238) = 0x5dc;
    *(undefined4 *)(unaff_s1 + 0x230) = 0x8ca;
    *(undefined4 *)(unaff_s1 + 0x23c) = 2000;
    *(undefined4 *)(unaff_s1 + 0x24c) = 2000;
    *(undefined4 *)(unaff_s1 + 0x234) = 0xc80;
    *(undefined4 *)(unaff_s1 + 0x240) = 0xa28;
    *(undefined4 *)(unaff_s1 + 0x244) = 0x4b0;
    *(undefined4 *)(unaff_s1 + 0x248) = 0x640;
    *(undefined4 *)(unaff_s1 + 0x250) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x254) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 600) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x25c) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x260) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x264) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x268) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x26c) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x270) = 0xfc7;
    *(undefined4 *)(unaff_s1 + 0x1e0) = 0x13240;
    *(undefined4 *)(unaff_s1 + 0x1d4) = 0x13240;
    *(undefined4 *)(unaff_s1 + 0x1ec) = 0x13240;
    *(undefined2 *)(unaff_s1 + 0x1de) = 0x118;
    *(undefined2 *)(unaff_s1 + 0x1d2) = 0x118;
    *(undefined2 *)(unaff_s1 + 0x1ea) = 0x118;
    *(undefined4 *)(unaff_s1 + 0x6c) = 0x32;
    *(undefined4 *)(unaff_s1 + 0x68) = 0x140;
    *(undefined2 *)(unaff_s1 + 0x1a8) = *(undefined2 *)(unaff_s1 + 0x230);
    *(undefined2 *)(unaff_s1 + 0x106) = *(undefined2 *)(unaff_s1 + 0x230);
    *(undefined4 *)(unaff_s1 + 100) = 12000;
    *(undefined4 *)(unaff_s1 + 0xac) = 0xf0;
    *(undefined4 *)(unaff_s1 + 0x60) = 0x800cfb94;
    *(undefined4 *)(unaff_s1 + 0x70) = 0x800cfbb4;
    *(undefined4 *)(unaff_s1 + 0x74) = 0x800cfbd4;
    *(undefined2 *)(unaff_s1 + 0x1c4) = 0x10;
    *(undefined4 *)(unaff_s1 + 0xa0) = 0;
    *(undefined4 *)(unaff_s1 + 0xa4) = 0x140;
    *(undefined4 *)(unaff_s1 + 0xa8) = 0;
    *(undefined2 *)(unaff_s1 + 0x194) = 200;
    *(undefined2 *)(unaff_s1 + 0x4ae) = 0;
    *(undefined2 *)(unaff_s1 + 0x4b0) = 0;
    *(undefined4 *)(unaff_s1 + 0x4a8) = *(undefined4 *)(unaff_s1 + 0x100);
    *(undefined2 *)(unaff_s1 + 0x4ac) = *(undefined2 *)(unaff_s1 + 0x104);
    *(undefined4 *)(unaff_s1 + 0x1fc) = 0x200;
    *(undefined4 *)(unaff_s1 + 0x420) = 0;
    *(undefined4 *)(unaff_s1 + 0x41c) = 0;
    shorten_count = 0;
    shorten_flag = 0;
    *(undefined4 *)(unaff_s1 + 0x200) = 0x1000;
    *(undefined2 *)(unaff_s1 + 0x4ba) = *(undefined2 *)(unaff_s1 + 0x104);
    *(uint *)(unaff_s1 + 0xe8) = *(uint *)(unaff_s1 + 0xe8) | 0x800;
    if (*(int *)(unaff_s1 + 0x108) != 0) {
      FUN_8001bdcc();
    }
    iVar2 = 2;
    *(undefined2 *)(unaff_s1 + 500) = 1;
    *(undefined2 *)(unaff_s1 + 0xf0) = 0;
    FUN_800155e4();
    iVar1 = unaff_s1 + 8;
    *(undefined4 *)(unaff_s1 + 0x21c) = 3000;
    *(undefined4 *)(unaff_s1 + 0x218) = 0;
    *(undefined2 *)(unaff_s1 + 0x40c) = 1;
    *(undefined2 *)(unaff_s1 + 0xbe) = 0x1000;
    *(undefined2 *)(unaff_s1 + 0xbc) = 0x1000;
    *(undefined2 *)(unaff_s1 + 0xba) = 0x1000;
    *(undefined2 *)(unaff_s1 + 0x278) = 0xffff;
    *(undefined2 *)(unaff_s1 + 0x27a) = 0xffff;
    *(uint *)(unaff_s1 + 0xe8) = *(uint *)(unaff_s1 + 0xe8) | 0x8000;
    do {
      *(undefined4 *)(iVar1 + 0x27c) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -4;
    } while (-1 < iVar2);
    *(undefined4 *)(unaff_s1 + 0x68) = 0x140;
    FUN_80014ad4();
    *(undefined2 *)(unaff_s1 + 0x436) = 0;
    roll_target = 0;
    current_roll_amount = 0;
    roll_inc = 0;
    debugForgedAbilitiesMenu.type._0_2_ = 3000;
    debugForgedAbilitiesMenu.type._2_2_ = 0;
    debugForgedAbilitiesMenu.lower._0_2_ = 0x1000;
    debugForgedAbilitiesMenu.lower._2_2_ = 0;
    debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
    statsMenu.bit_mask._0_2_ = 0x200;
    statsMenu.bit_mask._2_2_ = 0x28a;
    theCamera.savedCinematic[0].focusPointAccl._4_4_ = 10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bcddc();
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetInstanceFocus(struct Camera *camera /*$a0*/, struct _Instance *instance /*$a1*/)
 // line 1017, offset 0x80015e30
	/* begin block 1 */
		// Start line: 2483
	/* end block 1 */
	// End Line: 2484

	/* begin block 2 */
		// Start line: 2487
	/* end block 2 */
	// End Line: 2488

void CAMERA_SetInstanceFocus(Camera *camera,_Instance *instance)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(camera->core).position.y;
  iVar2 = (int)(camera->core).position.z;
  FUN_80039850((int)&(instance->node).prev + iVar2 * iVar2 + iVar1 * iVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetZRotation(struct Camera *camera /*$a0*/, short zrot /*$a1*/)
 // line 1051, offset 0x80015e90
	/* begin block 1 */
		// Start line: 2552
	/* end block 1 */
	// End Line: 2553

	/* begin block 2 */
		// Start line: 2553
	/* end block 2 */
	// End Line: 2554

void CAMERA_SetZRotation(Camera *camera,short zrot)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_a3;
  int in_t0;
  int in_t1;
  
  iVar4 = 0x1000;
  draw[1].dr_env.code[9] = draw[1].dr_env.code[9] | 0x80;
  sVar1 = camera->mode;
  if (sVar1 == 0xc) {
    iVar3 = camera->focusDistanceList[3];
    iVar4 = camera->focusDistanceList[4];
    if (iVar3 < iVar4) {
      bVar2 = iVar4 < iVar3;
      in_t1 = camera->focusDistanceList[5];
      if (iVar3 < camera->focusDistanceList[5]) {
        in_t1 = iVar3;
      }
    }
    else {
      in_t1 = camera->focusDistanceList[5];
      if (iVar4 < camera->focusDistanceList[5]) {
        in_t1 = iVar4;
      }
      iVar3 = camera->focusDistanceList[3];
      iVar4 = camera->focusDistanceList[4];
      bVar2 = iVar4 < iVar3;
    }
    if (bVar2) {
      in_t0 = camera->focusDistanceList[5];
      if (camera->focusDistanceList[5] < iVar3) {
        in_t0 = iVar3;
      }
    }
    else {
      in_t0 = camera->focusDistanceList[5];
      if (camera->focusDistanceList[5] < iVar4) {
        in_t0 = iVar4;
      }
    }
    iVar3 = camera->tiltList[3];
    iVar4 = camera->tiltList[4];
    if (iVar3 < iVar4) {
      in_a3 = camera->tiltList[5];
      if (iVar3 < camera->tiltList[5]) {
        in_a3 = iVar3;
      }
    }
    else {
      in_a3 = camera->tiltList[5];
      if (iVar4 < camera->tiltList[5]) {
        in_a3 = iVar4;
      }
    }
    iVar5 = camera->tiltList[3];
    iVar3 = camera->tiltList[4];
    if (iVar5 <= iVar3) {
      iVar4 = camera->tiltList[5];
      bVar2 = iVar4 < iVar3;
LAB_80016234:
      if (bVar2) {
        iVar4 = iVar3;
      }
      goto LAB_80016240;
    }
    iVar4 = camera->tiltList[5];
    bVar2 = iVar4 < iVar5;
  }
  else {
    if (sVar1 < 0xd) {
      if (sVar1 != 0) goto LAB_80016240;
      iVar3 = camera->focusDistanceList[0];
      iVar4 = camera->focusDistanceList[1];
      if (iVar3 < iVar4) {
        bVar2 = iVar4 < iVar3;
        in_t1 = camera->focusDistanceList[2];
        if (iVar3 < camera->focusDistanceList[2]) {
          in_t1 = iVar3;
        }
      }
      else {
        in_t1 = camera->focusDistanceList[2];
        if (iVar4 < camera->focusDistanceList[2]) {
          in_t1 = iVar4;
        }
        iVar3 = camera->focusDistanceList[0];
        iVar4 = camera->focusDistanceList[1];
        bVar2 = iVar4 < iVar3;
      }
      if (bVar2) {
        in_t0 = camera->focusDistanceList[2];
        if (camera->focusDistanceList[2] < iVar3) {
          in_t0 = iVar3;
        }
      }
      else {
        in_t0 = camera->focusDistanceList[2];
        if (camera->focusDistanceList[2] < iVar4) {
          in_t0 = iVar4;
        }
      }
      iVar3 = camera->tiltList[0];
      iVar4 = camera->tiltList[1];
      if (iVar3 < iVar4) {
        in_a3 = camera->tiltList[2];
        if (iVar3 < camera->tiltList[2]) {
          in_a3 = iVar3;
        }
      }
      else {
        in_a3 = camera->tiltList[2];
        if (iVar4 < camera->tiltList[2]) {
          in_a3 = iVar4;
        }
      }
      iVar5 = camera->tiltList[0];
      iVar3 = camera->tiltList[1];
      if (iVar5 <= iVar3) {
        iVar4 = camera->tiltList[2];
        bVar2 = iVar4 < iVar3;
        goto LAB_80016234;
      }
      iVar4 = camera->tiltList[2];
      bVar2 = iVar4 < iVar5;
    }
    else {
      if (sVar1 != 0xd) goto LAB_80016240;
      iVar3 = camera->focusDistanceList[6];
      iVar4 = camera->focusDistanceList[7];
      if (iVar3 < iVar4) {
        bVar2 = iVar4 < iVar3;
        in_t1 = camera->focusDistanceList[8];
        if (iVar3 < camera->focusDistanceList[8]) {
          in_t1 = iVar3;
        }
      }
      else {
        in_t1 = camera->focusDistanceList[8];
        if (iVar4 < camera->focusDistanceList[8]) {
          in_t1 = iVar4;
        }
        iVar3 = camera->focusDistanceList[6];
        iVar4 = camera->focusDistanceList[7];
        bVar2 = iVar4 < iVar3;
      }
      if (bVar2) {
        in_t0 = camera->focusDistanceList[8];
        if (camera->focusDistanceList[8] < iVar3) {
          in_t0 = iVar3;
        }
      }
      else {
        in_t0 = camera->focusDistanceList[8];
        if (camera->focusDistanceList[8] < iVar4) {
          in_t0 = iVar4;
        }
      }
      iVar3 = camera->tiltList[6];
      iVar4 = camera->tiltList[7];
      if (iVar3 < iVar4) {
        in_a3 = camera->tiltList[8];
        if (iVar3 < camera->tiltList[8]) {
          in_a3 = iVar3;
        }
      }
      else {
        in_a3 = camera->tiltList[8];
        if (iVar4 < camera->tiltList[8]) {
          in_a3 = iVar4;
        }
      }
      iVar5 = camera->tiltList[6];
      iVar3 = camera->tiltList[7];
      if (iVar5 <= iVar3) {
        iVar4 = camera->tiltList[8];
        bVar2 = iVar4 < iVar3;
        goto LAB_80016234;
      }
      iVar4 = camera->tiltList[8];
      bVar2 = iVar4 < iVar5;
    }
  }
  if (bVar2) {
    iVar4 = iVar5;
  }
LAB_80016240:
  if ((int)camera->targetFocusDistance < in_t1) {
    camera->targetFocusDistance = (short)in_t1;
  }
  else {
    if (in_t0 < (int)camera->targetFocusDistance) {
      camera->targetFocusDistance = (short)in_t0;
    }
  }
  iVar3 = (int)(camera->targetFocusRotation).x;
  if (in_a3 <= iVar3) {
    if (iVar4 < iVar3) {
      (camera->targetFocusRotation).x = (short)iVar4;
    }
    return;
  }
  (camera->targetFocusRotation).x = (short)in_a3;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_LengthSVector(struct _SVector *sv /*$a0*/)
 // line 1106, offset 0x80015eb4
	/* begin block 1 */
		// Start line: 2662
	/* end block 1 */
	// End Line: 2663

long CAMERA_LengthSVector(_SVector *sv)

{
  bool bVar1;
  uint uVar2;
  int in_v1;
  int iVar3;
  int in_a1;
  int iVar4;
  int in_a3;
  int in_t0;
  int in_t1;
  
  if (in_v1 == 0xc) {
    iVar4 = *(int *)(sv + 0x47);
    iVar3 = *(int *)&sv[0x47].z;
    if (iVar4 < iVar3) {
      bVar1 = iVar3 < iVar4;
      in_t1 = *(int *)(sv + 0x48);
      if (iVar4 < *(int *)(sv + 0x48)) {
        in_t1 = iVar4;
      }
    }
    else {
      in_t1 = *(int *)(sv + 0x48);
      if (iVar3 < *(int *)(sv + 0x48)) {
        in_t1 = iVar3;
      }
      iVar4 = *(int *)(sv + 0x47);
      iVar3 = *(int *)&sv[0x47].z;
      bVar1 = iVar3 < iVar4;
    }
    if (bVar1) {
      in_t0 = *(int *)(sv + 0x48);
      if (*(int *)(sv + 0x48) < iVar4) {
        in_t0 = iVar4;
      }
    }
    else {
      in_t0 = *(int *)(sv + 0x48);
      if (*(int *)(sv + 0x48) < iVar3) {
        in_t0 = iVar3;
      }
    }
    iVar4 = *(int *)&sv[0x4b].z;
    iVar3 = *(int *)(sv + 0x4c);
    if (iVar4 < iVar3) {
      in_a3 = *(int *)&sv[0x4c].z;
      if (iVar4 < *(int *)&sv[0x4c].z) {
        in_a3 = iVar4;
      }
    }
    else {
      in_a3 = *(int *)&sv[0x4c].z;
      if (iVar3 < *(int *)&sv[0x4c].z) {
        in_a3 = iVar3;
      }
    }
    iVar4 = *(int *)&sv[0x4b].z;
    iVar3 = *(int *)(sv + 0x4c);
    if (iVar4 <= iVar3) {
      in_a1 = *(int *)&sv[0x4c].z;
      bVar1 = in_a1 < iVar3;
LAB_80016234:
      if (bVar1) {
        in_a1 = iVar3;
      }
      goto LAB_80016240;
    }
    in_a1 = *(int *)&sv[0x4c].z;
    bVar1 = in_a1 < iVar4;
  }
  else {
    if (in_v1 < 0xd) {
      if (in_v1 != 0) goto LAB_80016240;
      iVar4 = *(int *)&sv[0x45].z;
      iVar3 = *(int *)(sv + 0x46);
      if (iVar4 < iVar3) {
        bVar1 = iVar3 < iVar4;
        in_t1 = *(int *)&sv[0x46].z;
        if (iVar4 < *(int *)&sv[0x46].z) {
          in_t1 = iVar4;
        }
      }
      else {
        in_t1 = *(int *)&sv[0x46].z;
        if (iVar3 < *(int *)&sv[0x46].z) {
          in_t1 = iVar3;
        }
        iVar4 = *(int *)&sv[0x45].z;
        iVar3 = *(int *)(sv + 0x46);
        bVar1 = iVar3 < iVar4;
      }
      if (bVar1) {
        in_t0 = *(int *)&sv[0x46].z;
        if (*(int *)&sv[0x46].z < iVar4) {
          in_t0 = iVar4;
        }
      }
      else {
        in_t0 = *(int *)&sv[0x46].z;
        if (*(int *)&sv[0x46].z < iVar3) {
          in_t0 = iVar3;
        }
      }
      iVar4 = *(int *)(sv + 0x4a);
      iVar3 = *(int *)&sv[0x4a].z;
      if (iVar4 < iVar3) {
        in_a3 = *(int *)(sv + 0x4b);
        if (iVar4 < *(int *)(sv + 0x4b)) {
          in_a3 = iVar4;
        }
      }
      else {
        in_a3 = *(int *)(sv + 0x4b);
        if (iVar3 < *(int *)(sv + 0x4b)) {
          in_a3 = iVar3;
        }
      }
      iVar4 = *(int *)(sv + 0x4a);
      iVar3 = *(int *)&sv[0x4a].z;
      if (iVar4 <= iVar3) {
        in_a1 = *(int *)(sv + 0x4b);
        bVar1 = in_a1 < iVar3;
        goto LAB_80016234;
      }
      in_a1 = *(int *)(sv + 0x4b);
      bVar1 = in_a1 < iVar4;
    }
    else {
      if (in_v1 != 0xd) goto LAB_80016240;
      iVar4 = *(int *)&sv[0x48].z;
      iVar3 = *(int *)(sv + 0x49);
      if (iVar4 < iVar3) {
        bVar1 = iVar3 < iVar4;
        in_t1 = *(int *)&sv[0x49].z;
        if (iVar4 < *(int *)&sv[0x49].z) {
          in_t1 = iVar4;
        }
      }
      else {
        in_t1 = *(int *)&sv[0x49].z;
        if (iVar3 < *(int *)&sv[0x49].z) {
          in_t1 = iVar3;
        }
        iVar4 = *(int *)&sv[0x48].z;
        iVar3 = *(int *)(sv + 0x49);
        bVar1 = iVar3 < iVar4;
      }
      if (bVar1) {
        in_t0 = *(int *)&sv[0x49].z;
        if (*(int *)&sv[0x49].z < iVar4) {
          in_t0 = iVar4;
        }
      }
      else {
        in_t0 = *(int *)&sv[0x49].z;
        if (*(int *)&sv[0x49].z < iVar3) {
          in_t0 = iVar3;
        }
      }
      iVar4 = *(int *)(sv + 0x4d);
      iVar3 = *(int *)&sv[0x4d].z;
      if (iVar4 < iVar3) {
        in_a3 = *(int *)(sv + 0x4e);
        if (iVar4 < *(int *)(sv + 0x4e)) {
          in_a3 = iVar4;
        }
      }
      else {
        in_a3 = *(int *)(sv + 0x4e);
        if (iVar3 < *(int *)(sv + 0x4e)) {
          in_a3 = iVar3;
        }
      }
      iVar4 = *(int *)(sv + 0x4d);
      iVar3 = *(int *)&sv[0x4d].z;
      if (iVar4 <= iVar3) {
        in_a1 = *(int *)(sv + 0x4e);
        bVar1 = in_a1 < iVar3;
        goto LAB_80016234;
      }
      in_a1 = *(int *)(sv + 0x4e);
      bVar1 = in_a1 < iVar4;
    }
  }
  if (bVar1) {
    in_a1 = iVar4;
  }
LAB_80016240:
  if ((int)sv[0x35].x < in_t1) {
    sv[0x35].x = (short)in_t1;
  }
  else {
    if (in_t0 < (int)sv[0x35].x) {
      sv[0x35].x = (short)in_t0;
    }
  }
  iVar3 = (int)sv[0x36].y;
  uVar2 = (uint)(in_a1 < iVar3);
  if (in_a3 <= iVar3) {
    if (in_a1 < iVar3) {
      sv[0x36].y = (short)in_a1;
    }
    return uVar2;
  }
  sv[0x36].y = (short)in_a3;
  return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetValue(struct Camera *camera /*$a0*/, long index /*$a1*/, long value /*$a2*/)
 // line 1115, offset 0x80015f08
	/* begin block 1 */
		// Start line: 1117
		// Start offset: 0x80015F08
		// Variables:
	// 		long min; // $t1
	// 		long max; // $t0
	// 		long minTilt; // $a3
	// 		long maxTilt; // $a1
	/* end block 1 */
	// End offset: 0x8001632C
	// End Line: 1169

	/* begin block 2 */
		// Start line: 2680
	/* end block 2 */
	// End Line: 2681

	/* begin block 3 */
		// Start line: 2681
	/* end block 3 */
	// End Line: 2682

void CAMERA_SetValue(Camera *camera,long index,long value)

{
  int in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_t1;
  
  if (index < in_t1) {
    in_t1 = index;
  }
  if (in_v1 < index) {
    iVar2 = camera->focusDistanceList[2];
    if (camera->focusDistanceList[2] < index) {
      iVar2 = index;
    }
  }
  else {
    iVar2 = camera->focusDistanceList[2];
    if (camera->focusDistanceList[2] < in_v1) {
      iVar2 = in_v1;
    }
  }
  iVar3 = camera->tiltList[0];
  iVar1 = camera->tiltList[1];
  if (iVar3 < iVar1) {
    iVar5 = camera->tiltList[2];
    if (iVar3 < camera->tiltList[2]) {
      iVar5 = iVar3;
    }
  }
  else {
    iVar5 = camera->tiltList[2];
    if (iVar1 < camera->tiltList[2]) {
      iVar5 = iVar1;
    }
  }
  iVar3 = camera->tiltList[0];
  iVar1 = camera->tiltList[1];
  if (iVar1 < iVar3) {
    iVar4 = camera->tiltList[2];
    if (camera->tiltList[2] < iVar3) {
      iVar4 = iVar3;
    }
  }
  else {
    iVar4 = camera->tiltList[2];
    if (camera->tiltList[2] < iVar1) {
      iVar4 = iVar1;
    }
  }
  if ((int)camera->targetFocusDistance < in_t1) {
    camera->targetFocusDistance = (short)in_t1;
  }
  else {
    if (iVar2 < (int)camera->targetFocusDistance) {
      camera->targetFocusDistance = (short)iVar2;
    }
  }
  iVar2 = (int)(camera->targetFocusRotation).x;
  if (iVar2 < iVar5) {
    (camera->targetFocusRotation).x = (short)iVar5;
    return;
  }
  if (iVar4 < iVar2) {
    (camera->targetFocusRotation).x = (short)iVar4;
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_AngleDifference(short angle0 /*$t0*/, short angle1 /*$a3*/)
 // line 1172, offset 0x80016334
	/* begin block 1 */
		// Start line: 2798
	/* end block 1 */
	// End Line: 2799

	/* begin block 2 */
		// Start line: 2799
	/* end block 2 */
	// End Line: 2800

short CAMERA_AngleDifference(short angle0,short angle1)

{
  undefined4 in_v0;
  
  return (short)((uint)in_v0 >> 0x10);
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_SignedAngleDifference(short angle0 /*$a0*/, short angle1 /*$a1*/)
 // line 1189, offset 0x800163ac
	/* begin block 1 */
		// Start line: 2832
	/* end block 1 */
	// End Line: 2833

short CAMERA_SignedAngleDifference(short angle0,short angle1)

{
  short unaff_s0;
  
  FUN_8005afc8();
  return unaff_s0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ CAMERA_QueryMode(struct Camera *camera /*$s0*/)
 // line 1208, offset 0x800163dc
	/* begin block 1 */
		// Start line: 1209
		// Start offset: 0x800163DC
		// Variables:
	// 		unsigned long mode; // $s0
	/* end block 1 */
	// End offset: 0x80016464
	// End Line: 1227

	/* begin block 2 */
		// Start line: 2871
	/* end block 2 */
	// End Line: 2872

ulong CAMERA_QueryMode(Camera *camera)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  short local_18;
  short local_16;
  short local_14;
  
  local_18 = (camera->focusPoint).x - (camera->targetFocusPoint).x;
  local_16 = (camera->focusPoint).y - (camera->targetFocusPoint).y;
  local_14 = (camera->focusPoint).z - (camera->targetFocusPoint).z;
  iVar4 = (uint)(ushort)camera->focusDistance << 0x10;
  iVar2 = iVar4 >> 0x10;
  iVar2 = ((iVar2 / 100 + (iVar2 >> 0x1f)) - (iVar4 >> 0x1f)) * 0x10000 >> 0x10;
  if (iVar2 < 0x14) {
    iVar2 = 0x14;
  }
  if (camera->forced_movement != 0) {
    iVar2 = iVar2 * 5;
  }
  sVar1 = FUN_80015e18(&local_18);
  BossAreasMenu.var_address =
       (long *)((((int)sVar1 + iVar2) - (int)camera->maxVel >> 2) - BossAreasMenu.bit_mask);
  BossAreasMenu.bit_mask = BossAreasMenu.bit_mask + (int)BossAreasMenu.var_address;
  uVar3 = camera->maxVel + (short)BossAreasMenu.bit_mask;
  camera->maxVel = uVar3;
  if ((int)((uint)uVar3 << 0x10) < 1) {
    camera->maxVel = 1;
  }
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetMaxVel(struct Camera *camera /*$s1*/)
 // line 1232, offset 0x80016478
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x80016478
		// Variables:
	// 		long extraVel; // $s0
	// 		long targetMaxVel; // $v0
	// 		struct _SVector cam_dist; // stack offset -24
	// 		static long maxVelAccl; // offset 0x8
	// 		static long maxVelVel; // offset 0xc

		/* begin block 1.1 */
			// Start line: 1233
			// Start offset: 0x80016478
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _SVector *_v; // $a1
		// 		struct _Position *_v0; // $a0
		// 		struct _Position *_v1; // $a2
		/* end block 1.1 */
		// End offset: 0x80016478
		// End Line: 1233
	/* end block 1 */
	// End offset: 0x80016570
	// End Line: 1265

	/* begin block 2 */
		// Start line: 2919
	/* end block 2 */
	// End Line: 2920

void CAMERA_SetMaxVel(Camera *camera)

{
  short sVar1;
  ushort uVar2;
  int unaff_s0;
  int unaff_s1;
  
  sVar1 = FUN_80015e18();
  BossAreasMenu.var_address =
       (long *)((((int)sVar1 + unaff_s0 * 5) - (int)*(short *)(unaff_s1 + 0x194) >> 2) -
               BossAreasMenu.bit_mask);
  BossAreasMenu.bit_mask = BossAreasMenu.bit_mask + (int)BossAreasMenu.var_address;
  uVar2 = *(short *)(unaff_s1 + 0x194) + (short)BossAreasMenu.bit_mask;
  *(ushort *)(unaff_s1 + 0x194) = uVar2;
  if ((int)((uint)uVar2 << 0x10) < 1) {
    *(undefined2 *)(unaff_s1 + 0x194) = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetTarget(struct Camera *camera /*$s0*/, struct _Position *pos /*$s1*/)
 // line 1267, offset 0x80016584
	/* begin block 1 */
		// Start line: 1268
		// Start offset: 0x80016584
		// Variables:
	// 		struct _SVector sv; // stack offset -24

		/* begin block 1.1 */
			// Start line: 1268
			// Start offset: 0x80016584
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $a0
		/* end block 1.1 */
		// End offset: 0x80016584
		// End Line: 1268
	/* end block 1 */
	// End offset: 0x80016584
	// End Line: 1268

	/* begin block 2 */
		// Start line: 3007
	/* end block 2 */
	// End Line: 3008

void CAMERA_SetTarget(Camera *camera,_Position *pos)

{
  short in_a3;
  short *unaff_s1;
  undefined2 uStack00000010;
  short sStack00000012;
  undefined2 uStack00000014;
  
  sStack00000012 = -in_a3;
  uStack00000010 = 0;
  uStack00000014 = 0;
  FUN_80039ae8(&stack0x00000028);
  FUN_80078bf4((int)*unaff_s1,&stack0x00000028);
  FUN_80078d28((int)unaff_s1[1],&stack0x00000028);
                    /* WARNING: Subroutine does not return */
  FUN_80078e5c((int)unaff_s1[2],&stack0x00000028);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcPosition(struct _Position *position /*$s3*/, struct _Position *base /*$s2*/, struct _Rotation *rotation /*$s1*/, short distance /*$a3*/)
 // line 1278, offset 0x80016600
	/* begin block 1 */
		// Start line: 1279
		// Start offset: 0x80016600
		// Variables:
	// 		struct SVECTOR sv; // stack offset -96
	// 		struct VECTOR v; // stack offset -88
	// 		struct MATRIX matrix; // stack offset -72
	// 		struct _Vector vectorPos; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1279
			// Start offset: 0x80016600
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _Vector *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x80016600
		// End Line: 1279
	/* end block 1 */
	// End offset: 0x80016600
	// End Line: 1279

	/* begin block 2 */
		// Start line: 3032
	/* end block 2 */
	// End Line: 3033

void CAMERA_CalcPosition(_Position *position,_Position *base,_Rotation *rotation,short distance)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *unaff_s2;
  short *unaff_s3;
  short sStack00000048;
  short sStack0000004c;
  short sStack00000050;
  
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x19);
  uVar2 = getCopReg(2,0x1a);
  uVar3 = getCopReg(2,0x1b);
  sStack00000048 = (short)uVar1 + *unaff_s2;
  sStack0000004c = (short)uVar2 + unaff_s2[1];
  sStack00000050 = (short)uVar3 + unaff_s2[2];
  *unaff_s3 = sStack00000048;
  unaff_s3[1] = sStack0000004c;
  unaff_s3[2] = sStack00000050;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetFocus(struct Camera *camera /*$s3*/, struct _Position *targetfocusPoint /*$s1*/)
 // line 1319, offset 0x80016728
	/* begin block 1 */
		// Start line: 1320
		// Start offset: 0x80016728
		// Variables:
	// 		struct _Instance *focusInstance; // $s0
	// 		struct _Model *model; // $v0
	// 		struct _SVector temp1; // stack offset -64
	// 		struct _SVector offset; // stack offset -56
	// 		struct _SVector *segPosVector; // $v1
	// 		struct _Vector temp2; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1335
			// Start offset: 0x80016774
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a0
		// 		short _z1; // $v1
		// 		struct _SVector *_v0; // $s2
		/* end block 1.1 */
		// End offset: 0x80016774
		// End Line: 1335

		/* begin block 1.2 */
			// Start line: 1335
			// Start offset: 0x80016774
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $t1
		// 		struct _Position *_v1; // $v0
		/* end block 1.2 */
		// End offset: 0x80016774
		// End Line: 1335

		/* begin block 1.3 */
			// Start line: 1345
			// Start offset: 0x800167F8

			/* begin block 1.3.1 */
				// Start line: 1347
				// Start offset: 0x800167F8
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $a2
			// 		short _x1; // $a3
			// 		short _y1; // $t0
			// 		short _z1; // $v1
			/* end block 1.3.1 */
			// End offset: 0x800167F8
			// End Line: 1347
		/* end block 1.3 */
		// End offset: 0x80016848
		// End Line: 1355

		/* begin block 1.4 */
			// Start line: 1367
			// Start offset: 0x8001688C
			// Variables:
		// 		struct _Instance *instance; // $v0
		// 		struct _SVector output; // stack offset -32

			/* begin block 1.4.1 */
				// Start line: 1373
				// Start offset: 0x8001689C
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			/* end block 1.4.1 */
			// End offset: 0x8001689C
			// End Line: 1373

			/* begin block 1.4.2 */
				// Start line: 1380
				// Start offset: 0x800168D4
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $v0
			// 		struct _Position *_v1; // $v0
			/* end block 1.4.2 */
			// End offset: 0x800168D4
			// End Line: 1380
		/* end block 1.4 */
		// End offset: 0x800168D4
		// End Line: 1380

		/* begin block 1.5 */
			// Start line: 1385
			// Start offset: 0x800168D4
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.5 */
		// End offset: 0x800168F0
		// End Line: 1385

		/* begin block 1.6 */
			// Start line: 1388
			// Start offset: 0x800168F0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		/* end block 1.6 */
		// End offset: 0x800168F0
		// End Line: 1388
	/* end block 1 */
	// End offset: 0x80016984
	// End Line: 1425

	/* begin block 2 */
		// Start line: 3127
	/* end block 2 */
	// End Line: 3128

void CAMERA_SetFocus(Camera *camera,_Position *targetfocusPoint)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int unaff_s0;
  undefined4 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  short in_stack_00000018;
  
  sVar1 = *(short *)(unaff_s0 + 0x5c);
  sVar2 = *(short *)(unaff_s0 + 0x5e);
  sVar3 = *(short *)(unaff_s0 + 0x60);
  *(short *)unaff_s1 = sVar1;
  *(short *)((int)unaff_s1 + 2) = sVar2;
  *(short *)(unaff_s1 + 1) = sVar3;
  if ((*(uint *)(unaff_s3 + 0xe8) & unaff_s4) != 0) {
    sVar2 = *(short *)(unaff_s2 + 2);
    sVar4 = *(short *)(unaff_s2 + 4);
    *(short *)unaff_s1 = sVar1 + in_stack_00000018;
    *(short *)((int)unaff_s1 + 2) = *(short *)((int)unaff_s1 + 2) + sVar2;
                    /* WARNING: Subroutine does not return */
    *(short *)(unaff_s1 + 1) = sVar3 + sVar4;
    FUN_8003432c();
  }
  sVar1 = *(short *)(unaff_s1 + 1);
  *(undefined4 *)(unaff_s3 + 0x4a8) = *unaff_s1;
  *(short *)(unaff_s3 + 0x4ac) = sVar1;
  *(short *)(unaff_s3 + 0x4ba) = *(short *)(unaff_s1 + 1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Lock(struct Camera *camera /*$a0*/, long lock /*$a1*/)
 // line 1427, offset 0x800169a4
	/* begin block 1 */
		// Start line: 3374
	/* end block 1 */
	// End Line: 3375

	/* begin block 2 */
		// Start line: 3375
	/* end block 2 */
	// End Line: 3376

void CAMERA_Lock(Camera *camera,long lock)

{
  short sVar1;
  short in_v0;
  ushort uVar2;
  
  camera->tiltState = in_v0;
  sVar1 = camera->smooth;
  uVar2 = (ushort)lock & 0xfff;
  (camera->signalRot).x = uVar2;
  if (sVar1 == 0) {
    camera->tilt = 0;
    (camera->targetFocusRotation).x = uVar2;
    (camera->targetRotation).x = uVar2;
    (camera->focusRotation).x = uVar2;
    camera->tfaceTilt = uVar2;
    camera->actual_x_rot = uVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Unlock(struct Camera *camera /*$a0*/, long unlock /*$a1*/)
 // line 1432, offset 0x800169b8
	/* begin block 1 */
		// Start line: 3384
	/* end block 1 */
	// End Line: 3385

	/* begin block 2 */
		// Start line: 3385
	/* end block 2 */
	// End Line: 3386

void CAMERA_Unlock(Camera *camera,long unlock)

{
  short sVar1;
  
  camera->tilt = 0;
  sVar1 = (short)unlock;
  (camera->targetFocusRotation).x = sVar1;
  (camera->targetRotation).x = sVar1;
  (camera->focusRotation).x = sVar1;
  camera->tfaceTilt = sVar1;
  camera->actual_x_rot = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetSmoothValue(struct Camera *camera /*$a0*/, long smooth /*$a1*/)
 // line 1437, offset 0x800169cc
	/* begin block 1 */
		// Start line: 3394
	/* end block 1 */
	// End Line: 3395

	/* begin block 2 */
		// Start line: 3396
	/* end block 2 */
	// End Line: 3397

void CAMERA_SetSmoothValue(Camera *camera,long smooth)

{
  short in_v0;
  
  camera->tfaceTilt = in_v0;
  camera->actual_x_rot = in_v0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetTimer(struct Camera *camera /*$a0*/, long time /*$a1*/)
 // line 1450, offset 0x80016a1c
	/* begin block 1 */
		// Start line: 3420
	/* end block 1 */
	// End Line: 3421

void CAMERA_SetTimer(Camera *camera,long time)

{
  short sVar1;
  
  camera->signalFocusDistance = *(short *)&camera->minFocusDistance;
  if (camera->smooth == 0) {
    sVar1 = camera->signalFocusDistance;
    camera->focusDistance = sVar1;
    camera->targetFocusDistance = sVar1;
    camera->collisionTargetFocusDistance = sVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Adjust_tilt(struct Camera *camera /*$a0*/, long tilt /*$a1*/)
 // line 1456, offset 0x80016a3c
	/* begin block 1 */
		// Start line: 3432
	/* end block 1 */
	// End Line: 3433

	/* begin block 2 */
		// Start line: 3433
	/* end block 2 */
	// End Line: 3434

void CAMERA_Adjust_tilt(Camera *camera,long tilt)

{
  short sVar1;
  
  sVar1 = camera->signalFocusDistance;
  camera->focusDistance = sVar1;
  camera->targetFocusDistance = sVar1;
  camera->collisionTargetFocusDistance = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Adjust_distance(struct Camera *camera /*$a0*/, long dist /*$a1*/)
 // line 1474, offset 0x80016a78
	/* begin block 1 */
		// Start line: 3471
	/* end block 1 */
	// End Line: 3472

	/* begin block 2 */
		// Start line: 3472
	/* end block 2 */
	// End Line: 3473

void CAMERA_Adjust_distance(Camera *camera,long dist)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int unaff_s0;
  ushort unaff_s1;
  
  uVar2 = FUN_80016298((int)camera >> 0x10);
  if ((uVar2 & 0xffff) != 0) {
    *(undefined2 *)(unaff_s0 + 0xf6) = 3;
    uVar3 = unaff_s1 & 0xfff;
    *(undefined2 *)(unaff_s0 + 0x408) = 0;
    *(ushort *)(unaff_s0 + 0x404) = uVar3;
    if (*(short *)(unaff_s0 + 0x1c4) == 0) {
      *(ushort *)(unaff_s0 + 0x1b6) = uVar3;
      *(ushort *)(unaff_s0 + 0x140) = uVar3;
      *(ushort *)(unaff_s0 + 0x488) = uVar3;
      *(ushort *)(unaff_s0 + 0x1c0) = uVar3;
    }
    uVar1 = draw[1].dr_env.code[4];
    *(undefined2 *)(unaff_s0 + 0x4ae) = 1;
    *(ulong *)(unaff_s0 + 0x410) = uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Adjust_rotation(struct Camera *camera /*$s0*/, long rotation /*$s1*/)
 // line 1492, offset 0x80016af4
	/* begin block 1 */
		// Start line: 3509
	/* end block 1 */
	// End Line: 3510

void CAMERA_Adjust_rotation(Camera *camera,long rotation)

{
  int unaff_s0;
  
  roll_target = unaff_s0 << 0xc;
  current_roll_amount = unaff_s0 << 0xc;
  roll_inc = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Adjust_roll(long roll_degrees /*$s0*/, int frames /*$s1*/)
 // line 1511, offset 0x80016b78
	/* begin block 1 */
		// Start line: 3555
	/* end block 1 */
	// End Line: 3556

void CAMERA_Adjust_roll(long roll_degrees,int frames)

{
  int unaff_s1;
  
  if (*(int *)(unaff_s1 + 0x1c8) != 0) {
    if ((frames & 1U) != 0) {
      FUN_80015e18();
      FUN_800169dc();
    }
    if ((frames & 2U) != 0) {
      FUN_800169a0();
    }
    if ((frames & 4U) != 0) {
      FUN_80016a58();
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Adjust(struct Camera *camera /*$s1*/, long adjust /*$s2*/)
 // line 1527, offset 0x80016bfc
	/* begin block 1 */
		// Start line: 1528
		// Start offset: 0x80016BFC

		/* begin block 1.1 */
			// Start line: 1532
			// Start offset: 0x80016C24

			/* begin block 1.1.1 */
				// Start line: 1535
				// Start offset: 0x80016C30
				// Variables:
			// 		struct _SVector dv; // stack offset -24

				/* begin block 1.1.1.1 */
					// Start line: 1536
					// Start offset: 0x80016C30
					// Variables:
				// 		short _x0; // $v0
				// 		short _y0; // $v1
				// 		short _z0; // $a1
				// 		short _x1; // $a2
				// 		short _y1; // $t0
				// 		short _z1; // $a3
				// 		struct _SVector *_v; // $a0
				// 		struct _SVector *_v1; // $a3
				/* end block 1.1.1.1 */
				// End offset: 0x80016C30
				// End Line: 1536
			/* end block 1.1.1 */
			// End offset: 0x80016C74
			// End Line: 1551
		/* end block 1.1 */
		// End offset: 0x80016CA4
		// End Line: 1582
	/* end block 1 */
	// End offset: 0x80016CA4
	// End Line: 1587

	/* begin block 2 */
		// Start line: 3589
	/* end block 2 */
	// End Line: 3590

void CAMERA_Adjust(Camera *camera,long adjust)

{
  FUN_80016a58();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_ChangeTo(struct Camera *camera /*$a0*/, struct _CameraKey *cameraKey /*$a1*/)
 // line 1590, offset 0x80016cbc
	/* begin block 1 */
		// Start line: 3715
	/* end block 1 */
	// End Line: 3716

	/* begin block 2 */
		// Start line: 3716
	/* end block 2 */
	// End Line: 3717

void CAMERA_ChangeTo(Camera *camera,_CameraKey *cameraKey)

{
  FUN_8003146c(camera,0x4000);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetShake(struct Camera *camera /*$t0*/, long shake /*$a1*/, long scale /*$a2*/)
 // line 1595, offset 0x80016cc4
	/* begin block 1 */
		// Start line: 1596
		// Start offset: 0x80016CC4
		// Variables:
	// 		int shock; // $a0
	// 		int duration; // $a1
	/* end block 1 */
	// End offset: 0x80016D5C
	// End Line: 1615

	/* begin block 2 */
		// Start line: 3725
	/* end block 2 */
	// End Line: 3726

void CAMERA_SetShake(Camera *camera,long shake,long scale)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decouple_AngleMoveToward(short *current_ptr /*$a0*/, short destination /*$a1*/, short step /*$a3*/)
 // line 1618, offset 0x80016d74
	/* begin block 1 */
		// Start line: 3771
	/* end block 1 */
	// End Line: 3772

void Decouple_AngleMoveToward
               (undefined4 uParm1,undefined2 *puParm2,undefined4 uParm3,short *psParm4)

{
  undefined2 in_t2;
  
  if (*psParm4 == 0) {
    *puParm2 = in_t2;
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CriticalDampValue(long dampMode /*$a0*/, short *sourceVal /*$a1*/, short targetVal /*$t2*/, short *vel /*$a3*/, short *accl /*stack 16*/, int smooth /*stack 20*/)
 // line 1626, offset 0x80016dc4
	/* begin block 1 */
		// Start line: 1627
		// Start offset: 0x80016DC4
		// Variables:
	// 		short maxVel; // $t0
	// 		short useVel; // $a0
	/* end block 1 */
	// End offset: 0x80016F70
	// End Line: 1685

	/* begin block 2 */
		// Start line: 3787
	/* end block 2 */
	// End Line: 3788

void CriticalDampValue(long dampMode,short *sourceVal,short targetVal,short *vel,short *accl,
                      int smooth)

{
  short in_v1;
  short in_t2;
  
  *sourceVal = *sourceVal + in_v1;
  if (*vel == 0) {
    *sourceVal = in_t2;
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CriticalDampPosition(long dampMode /*$a0*/, struct _Position *position /*$s1*/, struct _Position *targetPos /*$s3*/, struct _SVector *vel /*$s2*/, struct _SVector *accl /*stack 16*/, int smooth /*stack 20*/)
 // line 1738, offset 0x80016f78
	/* begin block 1 */
		// Start line: 1739
		// Start offset: 0x80016F78
		// Variables:
	// 		long length; // $s0
	// 		struct _Vector vector; // stack offset -48
	// 		struct _SVector svector; // stack offset -32
	// 		short maxVel; // $s4
	// 		int shift; // $a3

		/* begin block 1.1 */
			// Start line: 1760
			// Start offset: 0x80016FF4
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $a2
		// 		long _z0; // $a1
		// 		long _x1; // $v1
		// 		long _y1; // $v1
		// 		long _z1; // $a0
		// 		struct _Vector *_v; // $v1
		/* end block 1.1 */
		// End offset: 0x80016FF4
		// End Line: 1760

		/* begin block 1.2 */
			// Start line: 1775
			// Start offset: 0x800170B0
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $a2
		// 		long _z0; // $a1
		// 		long _x1; // $v1
		// 		long _y1; // $v1
		// 		long _z1; // $a0
		// 		struct _Vector *_v; // $v1
		/* end block 1.2 */
		// End offset: 0x800170B0
		// End Line: 1775

		/* begin block 1.3 */
			// Start line: 1809
			// Start offset: 0x80017254
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $s2
		/* end block 1.3 */
		// End offset: 0x80017254
		// End Line: 1809

		/* begin block 1.4 */
			// Start line: 1813
			// Start offset: 0x800172A8
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.4 */
		// End offset: 0x800172A8
		// End Line: 1813

		/* begin block 1.5 */
			// Start line: 1817
			// Start offset: 0x800172A8
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		/* end block 1.5 */
		// End offset: 0x800172A8
		// End Line: 1817

		/* begin block 1.6 */
			// Start line: 1824
			// Start offset: 0x80017344
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $a1
		/* end block 1.6 */
		// End offset: 0x80017344
		// End Line: 1824

		/* begin block 1.7 */
			// Start line: 1838
			// Start offset: 0x800174D4
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.7 */
		// End offset: 0x800174D4
		// End Line: 1838

		/* begin block 1.8 */
			// Start line: 1869
			// Start offset: 0x80017604
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.8 */
		// End offset: 0x8001761C
		// End Line: 1869
	/* end block 1 */
	// End offset: 0x8001761C
	// End Line: 1871

	/* begin block 2 */
		// Start line: 4013
	/* end block 2 */
	// End Line: 4014

void CriticalDampPosition
               (long dampMode,_Position *position,_Position *targetPos,_SVector *vel,_SVector *accl,
               int smooth)

{
  int in_v0;
  int in_v1;
  short *in_t0;
  short *unaff_s1;
  short *unaff_s2;
  
  *in_t0 = (short)(in_v0 >> 2) - *unaff_s2;
  in_t0[1] = (short)((int)((int)targetPos - in_v1) >> 2) - unaff_s2[1];
  in_t0[2] = (short)((int)position >> 2) - unaff_s2[2];
  *unaff_s2 = *unaff_s2 + *in_t0;
  unaff_s2[1] = unaff_s2[1] + in_t0[1];
  unaff_s2[2] = unaff_s2[2] + in_t0[2];
  *unaff_s1 = *unaff_s1 + *unaff_s2;
  unaff_s1[1] = unaff_s1[1] + unaff_s2[1];
  unaff_s1[2] = unaff_s1[2] + unaff_s2[2];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CriticalDampAngle(long dampMode /*$a0*/, short *currentVal /*$s0*/, short target /*$t1*/, short *vel /*$a3*/, short *accl /*stack 16*/, int smooth /*stack 20*/)
 // line 1873, offset 0x8001763c
	/* begin block 1 */
		// Start line: 1874
		// Start offset: 0x8001763C
		// Variables:
	// 		short current; // stack offset -16
	/* end block 1 */
	// End offset: 0x80017698
	// End Line: 1889

	/* begin block 2 */
		// Start line: 4301
	/* end block 2 */
	// End Line: 4302

void CriticalDampAngle(long dampMode,short *currentVal,short target,short *vel,short *accl,
                      int smooth)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sStack00000018;
  short sStack0000001a;
  undefined2 uStack0000001c;
  
  sVar1 = *currentVal;
  sVar2 = *(short *)dampMode;
  sVar3 = currentVal[1] - *(short *)(dampMode + 2);
  uStack0000001c = 0;
  sStack00000018 = sVar1 - sVar2;
  sStack0000001a = sVar3;
  FUN_80015e18(&stack0x00000018);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)sVar3,(int)(short)(sVar1 - sVar2));
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_CalcZRotation(struct _Position *target /*$a0*/, struct _Position *position /*$a1*/)
 // line 1894, offset 0x800176dc
	/* begin block 1 */
		// Start line: 1895
		// Start offset: 0x800176DC
		// Variables:
	// 		struct _SVector sv; // stack offset -24
	// 		struct _SVector onPlane; // stack offset -16

		/* begin block 1.1 */
			// Start line: 1895
			// Start offset: 0x800176DC
			// Variables:
		// 		short _x0; // $a2
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $a1
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $a0
		/* end block 1.1 */
		// End offset: 0x800176DC
		// End Line: 1895
	/* end block 1 */
	// End offset: 0x800176DC
	// End Line: 1895

	/* begin block 2 */
		// Start line: 4353
	/* end block 2 */
	// End Line: 4354

short CAMERA_CalcZRotation(_Position *target,_Position *position)

{
  short in_v0;
  undefined4 uVar1;
  short in_v1;
  short in_a2;
  short in_a3;
  short sStack00000010;
  short sStack00000012;
  short sStack00000014;
  short sStack00000018;
  short sStack0000001a;
  undefined2 uStack0000001c;
  
  sStack00000010 = in_a3 - (short)target;
  sStack00000012 = in_v0 - in_a2;
  sStack00000014 = in_v1 - position->z;
  uStack0000001c = 0;
  sStack00000018 = sStack00000010;
  sStack0000001a = sStack00000012;
  uVar1 = FUN_80015e18(&stack0x00000018);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)sStack00000014,uVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcRotation(struct _Rotation *rotation /*$s0*/, struct _Position *target /*$a1*/, struct _Position *position /*$a2*/)
 // line 1911, offset 0x80017754
	/* begin block 1 */
		// Start line: 1912
		// Start offset: 0x80017754
		// Variables:
	// 		struct _SVector sv; // stack offset -24
	// 		struct _SVector onPlane; // stack offset -16

		/* begin block 1.1 */
			// Start line: 1912
			// Start offset: 0x80017754
			// Variables:
		// 		short _x0; // $a3
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $a0
		// 		short _y1; // $a2
		// 		short _z1; // $a1
		// 		struct _SVector *_v; // $a0
		/* end block 1.1 */
		// End offset: 0x80017754
		// End Line: 1912
	/* end block 1 */
	// End offset: 0x80017754
	// End Line: 1912

	/* begin block 2 */
		// Start line: 4392
	/* end block 2 */
	// End Line: 4393

void CAMERA_CalcRotation(_Rotation *rotation,_Position *target,_Position *position)

{
  undefined4 uVar1;
  short *in_a3;
  short local_18;
  short local_16;
  undefined2 local_14;
  short local_10;
  short local_e;
  short local_c;
  
  local_18 = *in_a3 - position->x;
  local_16 = in_a3[1] - position->y;
  local_c = in_a3[2] - position->z;
  local_14 = 0;
  local_10 = local_18;
  local_e = local_16;
  uVar1 = FUN_80015e18(&local_18);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)local_c,uVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcFSRotation(struct Camera *camera /*$a0*/, struct _Rotation *rotation /*$s0*/, struct _Position *target /*$a2*/, struct _Position *position /*$a3*/)
 // line 1928, offset 0x800177f0
	/* begin block 1 */
		// Start line: 1929
		// Start offset: 0x800177F0
		// Variables:
	// 		struct _SVector sv; // stack offset -32
	// 		struct _SVector onPlane; // stack offset -24
	// 		struct _SVector sv2; // stack offset -16

		/* begin block 1.1 */
			// Start line: 1929
			// Start offset: 0x800177F0
			// Variables:
		// 		short _x0; // $a1
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $v0
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _SVector *_v; // $v0
		/* end block 1.1 */
		// End offset: 0x800177F0
		// End Line: 1929

		/* begin block 1.2 */
			// Start line: 1929
			// Start offset: 0x800177F0
			// Variables:
		// 		struct _SVector *_v0; // $v0
		/* end block 1.2 */
		// End offset: 0x800177F0
		// End Line: 1929
	/* end block 1 */
	// End offset: 0x800177F0
	// End Line: 1929

	/* begin block 2 */
		// Start line: 4430
	/* end block 2 */
	// End Line: 4431

void CAMERA_CalcFSRotation(Camera *camera,_Rotation *rotation,_Position *target,_Position *position)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Relocate(struct Camera *camera /*$a0*/, struct _SVector *offset /*$a1*/, int streamSignalFlag /*$a2*/)
 // line 1948, offset 0x8001789c
	/* begin block 1 */
		// Start line: 4474
	/* end block 1 */
	// End Line: 4475

	/* begin block 2 */
		// Start line: 4479
	/* end block 2 */
	// End Line: 4480

void CAMERA_Relocate(Camera *camera,_SVector *offset,int streamSignalFlag)

{
  short in_v0;
  short in_v1;
  
  (camera->targetPos).x = in_v0 + in_v1;
  (camera->targetPos).y = (camera->targetPos).y + offset->y;
  (camera->targetPos).z = (camera->targetPos).z + offset->z;
  (camera->targetFocusPoint).x = (camera->targetFocusPoint).x + offset->x;
  (camera->targetFocusPoint).y = (camera->targetFocusPoint).y + offset->y;
  (camera->targetFocusPoint).z = (camera->targetFocusPoint).z + offset->z;
  (camera->newFocusInstancePos).x = (camera->newFocusInstancePos).x + offset->x;
  (camera->newFocusInstancePos).y = (camera->newFocusInstancePos).y + offset->y;
  (camera->newFocusInstancePos).z = (camera->newFocusInstancePos).z + offset->z;
  return;
}



// decompiled code
// original method signature: 
// struct _TFace * /*$ra*/ CAMERA_SphereToSphereWithLines(struct Camera *camera /*$s6*/, struct CameraCollisionInfo *colInfo /*stack 4*/, int secondcheck_flag /*stack 8*/)
 // line 2017, offset 0x800179e8
	/* begin block 1 */
		// Start line: 2018
		// Start offset: 0x800179E8
		// Variables:
	// 		long minLength; // stack offset -68
	// 		struct _SVector sv; // stack offset -344
	// 		struct _SVector startPt[5]; // stack offset -336
	// 		struct _SVector endPt[5]; // stack offset -296
	// 		struct _SVector startLine; // stack offset -256
	// 		struct _Vector adjStartLine; // stack offset -248
	// 		struct _SVector endLine; // stack offset -232
	// 		struct _Vector adjEndLine; // stack offset -224
	// 		struct _Vector CamLineNormalized; // stack offset -208
	// 		struct _Rotation rotation; // stack offset -192
	// 		struct MATRIX matrix; // stack offset -184
	// 		struct _TFace *result; // stack offset -64
	// 		long i; // stack offset -60
	// 		long init; // stack offset -56
	// 		struct Level *level; // stack offset -52
	// 		struct _Instance *focusInstance; // $v0
	// 		struct _Vector ACE_vect; // stack offset -152
	// 		struct _LCollideInfo lcol; // stack offset -136
	// 		int ACE_force; // $s2
	// 		int in_warpRoom; // stack offset -48

		/* begin block 1.1 */
			// Start line: 2133
			// Start offset: 0x80017CF4
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $v0
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $v1
		// 		struct _Position *_v0; // $v0
		/* end block 1.1 */
		// End offset: 0x80017CF4
		// End Line: 2133

		/* begin block 1.2 */
			// Start line: 2133
			// Start offset: 0x80017CF4
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $v0
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $v1
		// 		struct _Position *_v0; // $v0
		/* end block 1.2 */
		// End offset: 0x80017CF4
		// End Line: 2133

		/* begin block 1.3 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $v0
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $s3
		// 		struct _Position *_v0; // $v0
		/* end block 1.3 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.4 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a1
		// 		short _z0; // $v0
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $v1
		// 		struct _Position *_v0; // $v0
		/* end block 1.4 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.5 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a1
		// 		short _z0; // $a2
		// 		short _x1; // $a3
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _SVector *_v; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.5 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.6 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a1
		// 		short _z0; // $a2
		// 		short _x1; // $a3
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _SVector *_v; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.6 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.7 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a2
		// 		short _z0; // $v0
		// 		short _x1; // $a3
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _SVector *_v; // $v1
		// 		struct _Position *_v0; // $v0
		/* end block 1.7 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.8 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a3
		// 		short _z0; // $v0
		// 		short _x1; // $t0
		// 		short _y1; // $t1
		// 		short _z1; // $t2
		// 		struct _SVector *_v; // $v1
		// 		struct _Position *_v0; // $v0
		/* end block 1.8 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.9 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a3
		// 		short _x1; // $t0
		// 		short _y1; // $t2
		// 		short _z1; // $t3
		// 		struct _SVector *_v; // $v0
		// 		struct _SVector *_v0; // $a3
		// 		struct _SVector *_v1; // $t1
		/* end block 1.9 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.10 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a3
		// 		short _x1; // $t0
		// 		short _y1; // $t2
		// 		short _z1; // $t1
		// 		struct _SVector *_v; // $v0
		/* end block 1.10 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.11 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.11 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.12 */
			// Start line: 2146
			// Start offset: 0x80017E00
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a2
		// 		struct _Position *_v1; // $v0
		/* end block 1.12 */
		// End offset: 0x80017E00
		// End Line: 2146

		/* begin block 1.13 */
			// Start line: 2232
			// Start offset: 0x80018148
			// Variables:
		// 		int flag; // $fp
		// 		short backface_flag; // stack offset -72
		// 		struct _PCollideInfo pCollideInfo; // stack offset -120

			/* begin block 1.13.1 */
				// Start line: 2257
				// Start offset: 0x800181A8
				// Variables:
			// 		int n; // $s2

				/* begin block 1.13.1.1 */
					// Start line: 2262
					// Start offset: 0x800181B4
					// Variables:
				// 		struct Level *thislevel; // $s1
				/* end block 1.13.1.1 */
				// End offset: 0x8001823C
				// End Line: 2279
			/* end block 1.13.1 */
			// End offset: 0x8001824C
			// End Line: 2280

			/* begin block 1.13.2 */
				// Start line: 2305
				// Start offset: 0x8001828C
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // stack offset -44
			/* end block 1.13.2 */
			// End offset: 0x8001828C
			// End Line: 2305

			/* begin block 1.13.3 */
				// Start line: 2336
				// Start offset: 0x800183E0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			/* end block 1.13.3 */
			// End offset: 0x800183E0
			// End Line: 2336
		/* end block 1.13 */
		// End offset: 0x80018460
		// End Line: 2361
	/* end block 1 */
	// End offset: 0x800184F4
	// End Line: 2380

	/* begin block 2 */
		// Start line: 4612
	/* end block 2 */
	// End Line: 4613

_TFace * CAMERA_SphereToSphereWithLines
                   (Camera *camera,CameraCollisionInfo *colInfo,int secondcheck_flag)

{
  short *psVar1;
  int iVar2;
  int unaff_s6;
  short in_stack_000000bc;
  int in_stack_0000017c;
  
  CAMERA_CalcRotation((_Rotation *)camera,(_Position *)&stack0x000000b8,
                      (_Position *)secondcheck_flag);
  if ((*(uint *)(unaff_s6 + 0xe8) & 0x10000) != 0) {
    psVar1 = *(short **)(in_stack_0000017c + 0x50);
    *psVar1 = *psVar1 + (short)((int)**(short **)(in_stack_0000017c + 0x54) - (int)*psVar1 >> 5);
    iVar2 = *(int *)(in_stack_0000017c + 0x50);
    *(short *)(iVar2 + 2) =
         *(short *)(iVar2 + 2) +
         (short)((int)*(short *)(*(int *)(in_stack_0000017c + 0x54) + 2) -
                 (int)*(short *)(iVar2 + 2) >> 5);
    iVar2 = *(int *)(in_stack_0000017c + 0x50);
    *(short *)(iVar2 + 4) =
         *(short *)(iVar2 + 4) +
         (short)((int)*(short *)(*(int *)(in_stack_0000017c + 0x54) + 4) -
                 (int)*(short *)(iVar2 + 4) >> 5);
  }
  FUN_80039ae8(&stack0x000000c0);
                    /* WARNING: Subroutine does not return */
  FUN_80078e5c((int)in_stack_000000bc + 0x400,&stack0x000000c0);
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_CalcTilt(struct _Normal *normal /*$s1*/, short zRot /*$a1*/)
 // line 2382, offset 0x80018524
	/* begin block 1 */
		// Start line: 2383
		// Start offset: 0x80018524
		// Variables:
	// 		struct MATRIX matrix; // stack offset -64
	// 		struct VECTOR newNormal; // stack offset -32
	/* end block 1 */
	// End offset: 0x80018524
	// End Line: 2383

	/* begin block 2 */
		// Start line: 5838
	/* end block 2 */
	// End Line: 5839

long CAMERA_CalcTilt(_Normal *normal,short zRot)

{
  long in_v0;
  undefined2 in_register_00000016;
  undefined4 local_res0;
  undefined2 local_res4;
  
  *(undefined4 *)CONCAT22(in_register_00000016,zRot) = local_res0;
  *(undefined2 *)((undefined4 *)CONCAT22(in_register_00000016,zRot) + 1) = local_res4;
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetLookFocusAndBase(struct _Instance *focusInstance /*$a0*/, struct _Position *focusPoint /*$a1*/)
 // line 2399, offset 0x80018598
	/* begin block 1 */
		// Start line: 2400
		// Start offset: 0x80018598
		// Variables:
	// 		struct _Position lookFocus; // stack offset -8
	/* end block 1 */
	// End offset: 0x80018598
	// End Line: 2400

	/* begin block 2 */
		// Start line: 5873
	/* end block 2 */
	// End Line: 5874

	/* begin block 3 */
		// Start line: 5878
	/* end block 3 */
	// End Line: 5879

void CAMERA_SetLookFocusAndBase(_Instance *focusInstance,_Position *focusPoint)

{
  short in_v0;
  int iVar1;
  short in_v1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *unaff_s2;
  undefined2 *puStack00000010;
  int iStack00000014;
  
  unaff_s2[0xd5] = in_v0 + (short)focusInstance;
  unaff_s2[0xd6] = in_v1 + (short)focusPoint;
  iVar4 = *(int *)(unaff_s2 + 0x84);
  unaff_s2[0xd7] = unaff_s2[0xd7] + unaff_s2[0x96];
  FUN_80016564(unaff_s2 + 0xcc,unaff_s2 + 0x80,unaff_s2 + 0x9e);
  iVar1 = FUN_8001d130();
  *(int *)(unaff_s2 + 0x240) = iVar1;
  if (iVar1 == 0) {
    iVar1 = (int)statsMenu.bit_mask._2_2_;
    iStack00000014 = 0x80;
    uVar2 = 1;
  }
  else {
    iStack00000014 = 0x200;
    uVar2 = 5;
    iVar1 = (int)(short)unaff_s2[0xd8];
    if ((int)statsMenu.bit_mask._2_2_ < (int)(short)unaff_s2[0xd8]) {
      iVar1 = (int)statsMenu.bit_mask._2_2_;
    }
  }
  if (((*(uint *)(unaff_s2 + 0x24e) & 0x20000) != 0) && (iVar1 < 0x226)) {
    iVar1 = 0x226;
  }
  if ((*(uint *)(unaff_s2 + 0x74) & 0x800) == 0) {
    puStack00000010 = unaff_s2 + 0xb5;
    FUN_80016d28(uVar2,unaff_s2 + 0x83,iVar1,unaff_s2 + 0xb4);
    puStack00000010 = unaff_s2 + 0xb0;
    iStack00000014 = (int)(short)unaff_s2[0xca];
    FUN_80016edc(0,unaff_s2 + 0x80,unaff_s2 + 0xd5,unaff_s2 + 0xac);
  }
  else {
    unaff_s2[0x83] = unaff_s2[0xd4];
    unaff_s2[0x80] = unaff_s2[0xd5];
    unaff_s2[0x81] = unaff_s2[0xd6];
    unaff_s2[0x82] = unaff_s2[0xd7];
  }
  unaff_s2[0xd9] = unaff_s2[0x20a];
  unaff_s2[0xda] = unaff_s2[0x20b];
  uVar3 = (uint)(ushort)unaff_s2[0x20c] + (uint)*(ushort *)(iVar4 + 0x78) + 0x800 & 0xfff;
  puStack00000010 = unaff_s2 + 0xbc;
  unaff_s2[0xdb] = (short)uVar3;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0xa0,uVar3,unaff_s2 + 0xb8);
  puStack00000010 = unaff_s2 + 0xba;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0x9e,(int)(short)unaff_s2[0xd9],unaff_s2 + 0xb6);
  FUN_80016564(unaff_s2 + 0xcc,unaff_s2 + 0x80,unaff_s2 + 0x9e,(int)(short)unaff_s2[0x83]);
  *unaff_s2 = unaff_s2[0xcc];
  unaff_s2[1] = unaff_s2[0xcd];
  unaff_s2[2] = unaff_s2[0xce];
  unaff_s2[0xd0] = unaff_s2[0x9e];
  unaff_s2[0xd1] = unaff_s2[0x9f];
  unaff_s2[0xd2] = unaff_s2[0xa0];
  unaff_s2[0x58] = unaff_s2[0xd0];
  unaff_s2[0x59] = unaff_s2[0xd1];
  unaff_s2[0x5a] = unaff_s2[0xa0];
  unaff_s2[0x7d] = 0;
  unaff_s2[0x7e] = unaff_s2[0x5a];
  FUN_8001c94c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetLookFocusAndDistance(struct Camera *camera /*$a0*/, struct VECTOR *focuspoint /*$a1*/, int distance /*$a2*/)
 // line 2412, offset 0x800185e0
	/* begin block 1 */
		// Start line: 5904
	/* end block 1 */
	// End Line: 5905

	/* begin block 2 */
		// Start line: 5905
	/* end block 2 */
	// End Line: 5906

void CAMERA_SetLookFocusAndDistance(Camera *camera,VECTOR *focuspoint,int distance)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_s1;
  undefined2 *unaff_s2;
  undefined2 *puStack00000010;
  int iStack00000014;
  
  iVar1 = FUN_8001d130();
  *(int *)(unaff_s2 + 0x240) = iVar1;
  if (iVar1 == 0) {
    iVar1 = (int)statsMenu.bit_mask._2_2_;
    iStack00000014 = 0x80;
    uVar2 = 1;
  }
  else {
    iStack00000014 = 0x200;
    uVar2 = 5;
    iVar1 = (int)(short)unaff_s2[0xd8];
    if ((int)statsMenu.bit_mask._2_2_ < (int)(short)unaff_s2[0xd8]) {
      iVar1 = (int)statsMenu.bit_mask._2_2_;
    }
  }
  if (((*(uint *)(unaff_s2 + 0x24e) & 0x20000) != 0) && (iVar1 < 0x226)) {
    iVar1 = 0x226;
  }
  if ((*(uint *)(unaff_s2 + 0x74) & 0x800) == 0) {
    puStack00000010 = unaff_s2 + 0xb5;
    FUN_80016d28(uVar2,unaff_s2 + 0x83,iVar1,unaff_s2 + 0xb4);
    puStack00000010 = unaff_s2 + 0xb0;
    iStack00000014 = (int)(short)unaff_s2[0xca];
    FUN_80016edc(0,unaff_s2 + 0x80,unaff_s2 + 0xd5,unaff_s2 + 0xac);
  }
  else {
    unaff_s2[0x83] = unaff_s2[0xd4];
    unaff_s2[0x80] = unaff_s2[0xd5];
    unaff_s2[0x81] = unaff_s2[0xd6];
    unaff_s2[0x82] = unaff_s2[0xd7];
  }
  unaff_s2[0xd9] = unaff_s2[0x20a];
  unaff_s2[0xda] = unaff_s2[0x20b];
  uVar3 = (uint)(ushort)unaff_s2[0x20c] + (uint)*(ushort *)(unaff_s1 + 0x78) + 0x800 & 0xfff;
  puStack00000010 = unaff_s2 + 0xbc;
  unaff_s2[0xdb] = (short)uVar3;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0xa0,uVar3,unaff_s2 + 0xb8);
  puStack00000010 = unaff_s2 + 0xba;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0x9e,(int)(short)unaff_s2[0xd9],unaff_s2 + 0xb6);
  FUN_80016564(unaff_s2 + 0xcc,unaff_s2 + 0x80,unaff_s2 + 0x9e,(int)(short)unaff_s2[0x83]);
  *unaff_s2 = unaff_s2[0xcc];
  unaff_s2[1] = unaff_s2[0xcd];
  unaff_s2[2] = unaff_s2[0xce];
  unaff_s2[0xd0] = unaff_s2[0x9e];
  unaff_s2[0xd1] = unaff_s2[0x9f];
  unaff_s2[0xd2] = unaff_s2[0xa0];
  unaff_s2[0x58] = unaff_s2[0xd0];
  unaff_s2[0x59] = unaff_s2[0xd1];
  unaff_s2[0x5a] = unaff_s2[0xa0];
  unaff_s2[0x7d] = 0;
  unaff_s2[0x7e] = unaff_s2[0x5a];
  FUN_8001c94c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_LookProcess(struct Camera *camera /*$s2*/)
 // line 2420, offset 0x80018608
	/* begin block 1 */
		// Start line: 2421
		// Start offset: 0x80018608
		// Variables:
	// 		struct _Instance *focusInstance; // $s1
	// 		int smooth; // $t0
	// 		int distance; // $a3
	// 		long dampMode; // $a0

		/* begin block 1.1 */
			// Start line: 2466
			// Start offset: 0x800186F8
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x800186F8
		// End Line: 2466

		/* begin block 1.2 */
			// Start line: 2487
			// Start offset: 0x80018760
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.2 */
		// End offset: 0x80018760
		// End Line: 2487

		/* begin block 1.3 */
			// Start line: 2487
			// Start offset: 0x80018760
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a1
		// 		struct _Rotation *_v0; // $v0
		/* end block 1.3 */
		// End offset: 0x80018760
		// End Line: 2487

		/* begin block 1.4 */
			// Start line: 2487
			// Start offset: 0x80018760
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		struct _Rotation *_v0; // $v0
		/* end block 1.4 */
		// End offset: 0x80018760
		// End Line: 2487
	/* end block 1 */
	// End offset: 0x80018760
	// End Line: 2493

	/* begin block 2 */
		// Start line: 5917
	/* end block 2 */
	// End Line: 5918

	/* begin block 3 */
		// Start line: 5921
	/* end block 3 */
	// End Line: 5922

void CAMERA_LookProcess(Camera *camera)

{
  int in_v1;
  uint uVar1;
  int in_a3;
  int unaff_s1;
  undefined2 *unaff_s2;
  undefined2 *puStack00000010;
  int iStack00000014;
  
  if (in_v1 < in_a3) {
    in_a3 = in_v1;
  }
  if (((*(uint *)(unaff_s2 + 0x24e) & 0x20000) != 0) && (in_a3 < 0x226)) {
    in_a3 = 0x226;
  }
  if ((*(uint *)(unaff_s2 + 0x74) & 0x800) == 0) {
    puStack00000010 = unaff_s2 + 0xb5;
    FUN_80016d28(5,unaff_s2 + 0x83,in_a3,unaff_s2 + 0xb4);
    puStack00000010 = unaff_s2 + 0xb0;
    iStack00000014 = (int)(short)unaff_s2[0xca];
    FUN_80016edc(0,unaff_s2 + 0x80,unaff_s2 + 0xd5,unaff_s2 + 0xac);
  }
  else {
    unaff_s2[0x83] = unaff_s2[0xd4];
    unaff_s2[0x80] = unaff_s2[0xd5];
    unaff_s2[0x81] = unaff_s2[0xd6];
    unaff_s2[0x82] = unaff_s2[0xd7];
  }
  unaff_s2[0xd9] = unaff_s2[0x20a];
  unaff_s2[0xda] = unaff_s2[0x20b];
  uVar1 = (uint)(ushort)unaff_s2[0x20c] + (uint)*(ushort *)(unaff_s1 + 0x78) + 0x800 & 0xfff;
  puStack00000010 = unaff_s2 + 0xbc;
  unaff_s2[0xdb] = (short)uVar1;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0xa0,uVar1,unaff_s2 + 0xb8);
  puStack00000010 = unaff_s2 + 0xba;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s2 + 0x9e,(int)(short)unaff_s2[0xd9],unaff_s2 + 0xb6);
  FUN_80016564(unaff_s2 + 0xcc,unaff_s2 + 0x80,unaff_s2 + 0x9e,(int)(short)unaff_s2[0x83]);
  *unaff_s2 = unaff_s2[0xcc];
  unaff_s2[1] = unaff_s2[0xcd];
  unaff_s2[2] = unaff_s2[0xce];
  unaff_s2[0xd0] = unaff_s2[0x9e];
  unaff_s2[0xd1] = unaff_s2[0x9f];
  unaff_s2[0xd2] = unaff_s2[0xa0];
  unaff_s2[0x58] = unaff_s2[0xd0];
  unaff_s2[0x59] = unaff_s2[0xd1];
  unaff_s2[0x5a] = unaff_s2[0xa0];
  unaff_s2[0x7d] = 0;
  unaff_s2[0x7e] = unaff_s2[0x5a];
  FUN_8001c94c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Normalize(struct _SVector *svector /*$s0*/)
 // line 2546, offset 0x8001885c
	/* begin block 1 */
		// Start line: 2547
		// Start offset: 0x8001885C
		// Variables:
	// 		long len; // $a1
	/* end block 1 */
	// End offset: 0x800188C4
	// End Line: 2555

	/* begin block 2 */
		// Start line: 6216
	/* end block 2 */
	// End Line: 6217

void CAMERA_Normalize(_SVector *svector)

{
  undefined2 in_v0;
  short sVar1;
  int iVar2;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x1b6) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x1c0) = in_v0;
  if (((*(short *)(unaff_s0 + 0x408) == 1) && ((*(uint *)(unaff_s0 + 0xec) & 4) == 0)) ||
     (sVar1 = FUN_80016298((int)*(short *)(unaff_s0 + 0x1b6),(int)*(short *)(unaff_s0 + 0x140)),
     sVar1 < 4)) {
    *(undefined2 *)(unaff_s0 + 0xf6) = 0;
    *(undefined2 *)(unaff_s0 + 0x170) = 0;
    *(undefined2 *)(unaff_s0 + 0x178) = 0;
  }
  if ((*(short *)(unaff_s0 + 0xf8) == 3) &&
     (((*(undefined2 *)(unaff_s0 + 0x1b2) = *(undefined2 *)(unaff_s0 + 0x400),
       *(short *)(unaff_s0 + 0x408) == 3 && ((*(uint *)(unaff_s0 + 0xec) & 2) == 0)) ||
      (sVar1 = FUN_80016298((int)*(short *)(unaff_s0 + 0x13c),(int)*(short *)(unaff_s0 + 0x400)),
      sVar1 < 4)))) {
    *(undefined2 *)(unaff_s0 + 0xf8) = 0;
    *(undefined2 *)(unaff_s0 + 0x16c) = 0;
    *(undefined2 *)(unaff_s0 + 0x174) = 0;
  }
  if (*(short *)(unaff_s0 + 0xfa) != 3) goto LAB_800189a4;
  if ((*(short *)(unaff_s0 + 0x408) == 2) && ((*(uint *)(unaff_s0 + 0xec) & 1) == 0)) {
LAB_8001898c:
    *(undefined2 *)(unaff_s0 + 0xfa) = 0;
LAB_80018990:
    *(undefined2 *)(unaff_s0 + 0x168) = 0;
    *(undefined2 *)(unaff_s0 + 0x16a) = 0;
  }
  else {
    iVar2 = (int)*(short *)(unaff_s0 + 0x1a8) - (int)*(short *)(unaff_s0 + 0x29e);
    if (iVar2 < 0) {
      if ((int)*(short *)(unaff_s0 + 0x29e) - (int)*(short *)(unaff_s0 + 0x1a8) < 4)
      goto LAB_8001898c;
    }
    else {
      if (iVar2 < 4) {
        *(undefined2 *)(unaff_s0 + 0xfa) = 0;
        goto LAB_80018990;
      }
    }
  }
  *(undefined2 *)(unaff_s0 + 0x1a8) = *(undefined2 *)(unaff_s0 + 0x29e);
LAB_800189a4:
  if ((*(short *)(unaff_s0 + 0xf4) == 3) &&
     ((*(short *)(unaff_s0 + 0xf0) != 5 || ((*(uint *)(unaff_s0 + 0xe8) & 0x1000) != 0)))) {
    *(undefined2 *)(unaff_s0 + 0xf4) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_HandleTransitions(struct Camera *camera /*$s0*/)
 // line 2557, offset 0x800188d4
	/* begin block 1 */
		// Start line: 2558
		// Start offset: 0x800188D4
	/* end block 1 */
	// End offset: 0x80018A78
	// End Line: 2669

	/* begin block 2 */
		// Start line: 6240
	/* end block 2 */
	// End Line: 6241

void CAMERA_HandleTransitions(Camera *camera)

{
  undefined2 in_v0;
  short sVar1;
  int iVar2;
  Camera *in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x1b2) = in_v0;
  if (((in_v1 == camera) && ((*(uint *)(unaff_s0 + 0xec) & 2) == 0)) ||
     (sVar1 = FUN_80016298((int)*(short *)(unaff_s0 + 0x13c),(int)*(short *)(unaff_s0 + 0x400)),
     sVar1 < 4)) {
    *(undefined2 *)(unaff_s0 + 0xf8) = 0;
    *(undefined2 *)(unaff_s0 + 0x16c) = 0;
    *(undefined2 *)(unaff_s0 + 0x174) = 0;
  }
  if (*(short *)(unaff_s0 + 0xfa) != 3) goto LAB_800189a4;
  if ((*(short *)(unaff_s0 + 0x408) == 2) && ((*(uint *)(unaff_s0 + 0xec) & 1) == 0)) {
LAB_8001898c:
    *(undefined2 *)(unaff_s0 + 0xfa) = 0;
LAB_80018990:
    *(undefined2 *)(unaff_s0 + 0x168) = 0;
    *(undefined2 *)(unaff_s0 + 0x16a) = 0;
  }
  else {
    iVar2 = (int)*(short *)(unaff_s0 + 0x1a8) - (int)*(short *)(unaff_s0 + 0x29e);
    if (iVar2 < 0) {
      if ((int)*(short *)(unaff_s0 + 0x29e) - (int)*(short *)(unaff_s0 + 0x1a8) < 4)
      goto LAB_8001898c;
    }
    else {
      if (iVar2 < 4) {
        *(undefined2 *)(unaff_s0 + 0xfa) = 0;
        goto LAB_80018990;
      }
    }
  }
  *(undefined2 *)(unaff_s0 + 0x1a8) = *(undefined2 *)(unaff_s0 + 0x29e);
LAB_800189a4:
  if ((*(short *)(unaff_s0 + 0xf4) == 3) &&
     ((*(short *)(unaff_s0 + 0xf0) != 5 || ((*(uint *)(unaff_s0 + 0xe8) & 0x1000) != 0)))) {
    *(undefined2 *)(unaff_s0 + 0xf4) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcFocusOffset(struct _SVector *offset /*$a2*/, struct Camera *camera /*$a1*/)
 // line 2673, offset 0x80018a88
	/* begin block 1 */
		// Start line: 2674
		// Start offset: 0x80018A88
		// Variables:
	// 		struct _Vector adjustedOffset; // stack offset -24
	// 		struct _SVector temp; // stack offset -8
	// 		struct _Instance *focusInstance; // $a0

		/* begin block 1.1 */
			// Start line: 2698
			// Start offset: 0x80018AC8
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.1 */
		// End offset: 0x80018AC8
		// End Line: 2698
	/* end block 1 */
	// End offset: 0x80018AC8
	// End Line: 2698

	/* begin block 2 */
		// Start line: 6474
	/* end block 2 */
	// End Line: 6475

void CAMERA_CalcFocusOffset(_SVector *offset,Camera *camera)

{
  undefined2 in_v0;
  undefined2 in_v1;
  undefined2 *in_a2;
  undefined2 local_res8;
  
  *in_a2 = in_v0;
  in_a2[1] = in_v1;
  in_a2[2] = local_res8;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcFocusOffsetForSwim(struct _SVector *offset /*$s0*/, struct Camera *camera /*$a1*/)
 // line 2703, offset 0x80018b3c
	/* begin block 1 */
		// Start line: 2704
		// Start offset: 0x80018B3C
		// Variables:
	// 		struct _Vector adjustedOffset; // stack offset -32
	// 		struct _SVector temp; // stack offset -16
	// 		struct _Instance *focusInstance; // $v1

		/* begin block 1.1 */
			// Start line: 2704
			// Start offset: 0x80018B3C
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _Vector *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x80018B3C
		// End Line: 2704
	/* end block 1 */
	// End offset: 0x80018B3C
	// End Line: 2704

	/* begin block 2 */
		// Start line: 6542
	/* end block 2 */
	// End Line: 6543

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAMERA_CalcFocusOffsetForSwim(_SVector *offset,Camera *camera)

{
  short sVar1;
  int iVar2;
  int in_v1;
  undefined4 in_a2;
  short *in_a3;
  int in_t1;
  int unaff_s0;
  int iStack00000010;
  short *in_stack_00000040;
  
  iStack00000010 =
       in_t1 + in_v1 * (int)*(short *)(unaff_s0 + 2) +
       (int)_debugOrgFogRed * (int)*(short *)(unaff_s0 + 4) >> 0xc;
  iVar2 = FUN_80078088(&stack0x00000018,camera,in_a2,0x800cfc84);
  if (iVar2 != 0) {
    sVar1 = FUN_80017640();
    sVar1 = FUN_80016310((int)sVar1,(int)(short)statsMenu.lower);
    if (sVar1 < *in_stack_00000040) {
      *in_stack_00000040 = sVar1;
    }
    if (*in_a3 < sVar1) {
      *in_a3 = sVar1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_CalcIntersectAngle(struct _SVector *linept /*$s0*/, struct _SVector *vertex0 /*$a1*/, struct _SVector *vertex1 /*$a2*/, short *high /*$s2*/, short *low /*stack 16*/)
 // line 2727, offset 0x80018ba8
	/* begin block 1 */
		// Start line: 2728
		// Start offset: 0x80018BA8
		// Variables:
	// 		struct _SVector point; // stack offset -24
	// 		short zrot; // $a0
	// 		long camera_plane_d; // $v0
	/* end block 1 */
	// End offset: 0x80018C80
	// End Line: 2747

	/* begin block 2 */
		// Start line: 6608
	/* end block 2 */
	// End Line: 6609

	/* begin block 3 */
		// Start line: 6613
	/* end block 3 */
	// End Line: 6614

short CAMERA_CalcIntersectAngle
                (_SVector *linept,_SVector *vertex0,_SVector *vertex1,short *high,short *low)

{
  short sVar1;
  short *unaff_s1;
  short *unaff_s2;
  
  sVar1 = (short)linept;
  if (sVar1 < *unaff_s1) {
    *unaff_s1 = sVar1;
  }
  if (*unaff_s2 < sVar1) {
    *unaff_s2 = sVar1;
  }
  return sVar1;
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_GetLineAngle(struct Camera *camera /*$a0*/, struct CameraCollisionInfo *colInfo /*$a1*/, struct _SVector *linept /*$a2*/, int line /*$s5*/)
 // line 2749, offset 0x80018c98
	/* begin block 1 */
		// Start line: 2750
		// Start offset: 0x80018C98
		// Variables:
	// 		struct _Terrain *terrain; // $t1
	// 		struct _SVector *vertex0; // $s1
	// 		struct _SVector *vertex1; // $s0
	// 		struct _SVector *vertex2; // $s3
	// 		struct _SVector new_linept; // stack offset -48
	// 		short high; // stack offset -40
	// 		short low; // stack offset -38
	/* end block 1 */
	// End offset: 0x80018E3C
	// End Line: 2779

	/* begin block 2 */
		// Start line: 6675
	/* end block 2 */
	// End Line: 6676

short CAMERA_GetLineAngle(Camera *camera,CameraCollisionInfo *colInfo,_SVector *linept,int line)

{
  short in_v0;
  int in_v1;
  int in_t0;
  int in_t1;
  int in_t3;
  int in_t4;
  int iVar1;
  int unaff_s3;
  int iVar2;
  int unaff_s5;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short in_stack_00000020;
  short in_stack_00000022;
  
  sStack00000018 = in_v0 - *(short *)(in_v1 + 0xc);
  sStack0000001a = linept->y - *(short *)(in_t0 + *(int *)(in_t1 + 0x48) + 0xe);
  iVar1 = unaff_s3 + in_t3 * 0xc;
  sStack0000001c = linept->z - *(short *)(in_t0 + *(int *)(in_t1 + 0x48) + 0x10);
  iVar2 = unaff_s3 + in_t4 * 0xc;
  FUN_80018b0c(camera,colInfo,iVar1);
  FUN_80018b0c(&stack0x00000018,iVar1,iVar2);
  FUN_80018b0c(&stack0x00000018,iVar2);
  if (in_stack_00000020 == -5000) {
    in_stack_00000020 = 0;
  }
  if (in_stack_00000022 == 5000) {
    in_stack_00000022 = 0;
  }
  if (0x400 < in_stack_00000020) {
    in_stack_00000020 = 0;
  }
  if (in_stack_00000022 < -0x400) {
    in_stack_00000022 = 0;
  }
  if (unaff_s5 != 2) {
    in_stack_00000020 = in_stack_00000022;
  }
  return in_stack_00000020;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_ACForcedMovement(struct Camera *camera /*$s1*/, struct CameraCollisionInfo *colInfo /*$s0*/)
 // line 2793, offset 0x80018e60
	/* begin block 1 */
		// Start line: 2794
		// Start offset: 0x80018E60
		// Variables:
	// 		long dp; // $v0
	// 		struct _Normal normal; // stack offset -32
	// 		struct _SVector sv; // stack offset -24

		/* begin block 1.1 */
			// Start line: 2794
			// Start offset: 0x80018E60
			// Variables:
		// 		short _x0; // $a1
		// 		short _y0; // $a2
		// 		short _z0; // $v0
		// 		short _x1; // $a3
		// 		short _y1; // $t0
		// 		short _z1; // $v1
		// 		struct _SVector *_v; // $a0
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v1
		/* end block 1.1 */
		// End offset: 0x80018E60
		// End Line: 2794
	/* end block 1 */
	// End offset: 0x80018F18
	// End Line: 2832

	/* begin block 2 */
		// Start line: 6883
	/* end block 2 */
	// End Line: 6884

long CAMERA_ACForcedMovement(Camera *camera,CameraCollisionInfo *colInfo)

{
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x1b0) = *(undefined2 *)(unaff_s0 + 0x4c);
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_update_dist_debounced(struct Camera *camera /*$a0*/, short dist /*$a2*/)
 // line 2835, offset 0x80018f30
	/* begin block 1 */
		// Start line: 6974
	/* end block 1 */
	// End Line: 6975

	/* begin block 2 */
		// Start line: 6975
	/* end block 2 */
	// End Line: 6976

void CAMERA_update_dist_debounced(Camera *camera,short dist)

{
  int iVar1;
  int unaff_s0;
  
  FUN_800175a0();
  if (0x800 < sRam800cdf88) {
    sRam800cdf88 = sRam800cdf88 + -0x1000;
  }
  iVar1 = (int)sRam800cdf88;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x20) {
    iVar1 = unaff_s0;
    if (unaff_s0 < 0) {
      iVar1 = -unaff_s0;
    }
    if ((0x1f < iVar1) && (sRam800cdf88 = 0x20, unaff_s0 < 0)) {
      sRam800cdf88 = -0x20;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_dampgetline(short angle /*$a0*/)
 // line 2847, offset 0x80018fa0
	/* begin block 1 */
		// Start line: 2848
		// Start offset: 0x80018FA0
		// Variables:
	// 		static short target_angle; // offset 0x50
	// 		static short angle_vel; // offset 0x52
	// 		static short angle_accl; // offset 0x54
	/* end block 1 */
	// End offset: 0x80019038
	// End Line: 2865

	/* begin block 2 */
		// Start line: 6999
	/* end block 2 */
	// End Line: 7000

short CAMERA_dampgetline(short angle)

{
  short in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_ACNoForcedMovement(struct Camera *camera /*$s0*/, struct CameraCollisionInfo *colInfo /*$s1*/)
 // line 2873, offset 0x8001904c
	/* begin block 1 */
		// Start line: 2874
		// Start offset: 0x8001904C
		// Variables:
	// 		long hit; // $s2
	// 		short playerSamePos; // $s3
	// 		short angle; // $a0

		/* begin block 1.1 */
			// Start line: 2900
			// Start offset: 0x800190C4
			// Variables:
		// 		int n; // $a0
		// 		int flag; // $t1
		// 		short dist; // $a1
		/* end block 1.1 */
		// End offset: 0x80019278
		// End Line: 2956
	/* end block 1 */
	// End offset: 0x80019534
	// End Line: 3124

	/* begin block 2 */
		// Start line: 7059
	/* end block 2 */
	// End Line: 7060

long CAMERA_ACNoForcedMovement(Camera *camera,CameraCollisionInfo *colInfo)

{
  short sVar1;
  short sVar2;
  Camera *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_t1;
  int unaff_s0;
  int unaff_s1;
  long unaff_s2;
  int unaff_s3;
  
  iVar4 = (int)*(short *)(unaff_s1 + 0x36);
  pCVar3 = (Camera *)((int)camera - iVar4);
  if (0x78 < iVar4) {
    if ((int)pCVar3 < 0) {
      pCVar3 = (Camera *)(iVar4 - (int)camera);
    }
    if ((int)pCVar3 < 600) {
      FUN_80018e94();
      FUN_80018f04(0);
      if (*(short *)(unaff_s0 + 0xf0) != 0xd) {
        return 1;
      }
      iVar4 = statsMenu.upper;
      if (statsMenu.upper < 0) {
        iVar4 = -statsMenu.upper;
      }
      if (10 < iVar4) {
        *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x1b6);
        return 1;
      }
      return 1;
    }
  }
  iVar4 = 1;
  iVar6 = unaff_s1 + 2;
  do {
    if (iVar4 != *(int *)(unaff_s1 + 0x44)) {
      if (*(short *)(iVar6 + 0x34) < 800) {
        in_t1 = 0;
        break;
      }
      if (*(short *)(iVar6 + 0x34) < (short)colInfo) {
        colInfo = (CameraCollisionInfo *)(uint)*(ushort *)(iVar6 + 0x34);
      }
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 2;
  } while (iVar4 < 5);
  if (in_t1 == 0) {
    if (*(int *)(unaff_s1 + 0x48) == 4) {
      if ((*(short *)(unaff_s0 + 0x494) != 0) && (*(int *)(unaff_s1 + 0x4c) < 400)) {
        *(undefined4 *)(unaff_s1 + 0x48) = 1;
        if (*(short *)(unaff_s0 + 0x494) == 2) {
          *(undefined4 *)(unaff_s1 + 0x40) = 2;
          *(undefined4 *)(unaff_s1 + 0x44) = 1;
        }
        else {
          *(undefined4 *)(unaff_s1 + 0x44) = 2;
          *(undefined4 *)(unaff_s1 + 0x40) = 4;
        }
      }
      goto LAB_800191dc;
    }
  }
  else {
    *(undefined4 *)(unaff_s1 + 0x48) = 1;
    *(int *)(unaff_s1 + 0x40) = 1 << (*(uint *)(unaff_s1 + 0x44) & 0x1f);
    if (*(int *)(unaff_s1 + 0x4c) < 0x321) {
      FUN_80018e94();
    }
    else {
      FUN_80018e94();
    }
LAB_800191dc:
    if ((*(int *)(unaff_s1 + 0x48) == 4) && ((*(uint *)(unaff_s0 + 0xec) & 1) == 0)) {
      unaff_s2 = 1;
      *(undefined2 *)(unaff_s0 + 0x1b0) = *(undefined2 *)(unaff_s1 + 0x4c);
      *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x1b6);
      goto LAB_8001948c;
    }
  }
  uVar5 = *(uint *)(unaff_s1 + 0x40);
  if ((((uVar5 & 2) == 0) || ((*(uint *)(unaff_s0 + 0xec) & 4) != 0)) ||
     ((unaff_s3 != 0 && (*(short *)(unaff_s0 + 0x494) == 1)))) {
    if ((((uVar5 & 4) == 0) || ((*(uint *)(unaff_s0 + 0xec) & 4) != 0)) ||
       ((unaff_s3 != 0 && (*(short *)(unaff_s0 + 0x494) == 2)))) {
      if ((((*(uint *)(unaff_s1 + 0x40) & 8) != 0) && ((*(uint *)(unaff_s0 + 0xec) & 2) == 0)) ||
         (((*(uint *)(unaff_s1 + 0x40) & 0x10) != 0 && ((*(uint *)(unaff_s0 + 0xec) & 2) == 0)))) {
        FUN_80018e94();
        unaff_s2 = 1;
      }
LAB_8001948c:
      FUN_80018f04(0);
      return unaff_s2;
    }
    if ((uVar5 & 2) != 0) goto LAB_800193a0;
    *(undefined2 *)(unaff_s0 + 0x492) = 1;
    *(undefined2 *)(unaff_s0 + 0x494) = 1;
    if ((*(short *)(unaff_s0 + 0xf0) != 0xd) || (statsMenu.upper < 0xb)) {
      sVar1 = FUN_80018bfc();
      iVar6 = FUN_80018f04((int)sVar1);
      sVar1 = (short)iVar6;
      iVar4 = statsMenu.upper;
      if (statsMenu.upper < 0) {
        iVar4 = -statsMenu.upper;
      }
      if (iVar4 < 6) {
        if (0x3f < sVar1) {
          sVar1 = *(short *)(unaff_s0 + 0x1c0) + 0x40;
          goto LAB_80019430;
        }
      }
      else {
        if (iVar6 << 0x10 < 0) {
          return 1;
        }
      }
      sVar2 = *(short *)(unaff_s0 + 0x140) + 4;
      goto LAB_8001942c;
    }
  }
  else {
    if ((uVar5 & 4) != 0) goto LAB_800193a0;
    *(undefined2 *)(unaff_s0 + 0x492) = 1;
    *(undefined2 *)(unaff_s0 + 0x494) = 2;
    if ((*(short *)(unaff_s0 + 0xf0) != 0xd) || (-0xb < statsMenu.upper)) {
      sVar1 = FUN_80018bfc();
      iVar6 = FUN_80018f04((int)sVar1);
      sVar1 = (short)iVar6;
      iVar4 = statsMenu.upper;
      if (statsMenu.upper < 0) {
        iVar4 = -statsMenu.upper;
      }
      if (5 < iVar4) {
        if (iVar6 << 0x10 < 1) {
          *(short *)(unaff_s0 + 0x1c0) = sVar1 + *(short *)(unaff_s0 + 0x140) + -4;
          return 1;
        }
        return 1;
      }
      if (sVar1 < -0x3f) {
        sVar1 = *(short *)(unaff_s0 + 0x1c0) + -0x40;
        goto LAB_80019430;
      }
      sVar2 = *(short *)(unaff_s0 + 0x140) + -4;
LAB_8001942c:
      sVar1 = sVar1 + sVar2;
LAB_80019430:
      *(short *)(unaff_s0 + 0x1c0) = sVar1;
      return 1;
    }
  }
  *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x1b6);
LAB_800193a0:
  FUN_80018e94();
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_AbsoluteCollision(struct Camera *camera /*$a0*/, struct CameraCollisionInfo *colInfo /*$a1*/)
 // line 3130, offset 0x80019550
	/* begin block 1 */
		// Start line: 3131
		// Start offset: 0x80019550
		// Variables:
	// 		long hit; // $a3
	/* end block 1 */
	// End offset: 0x80019668
	// End Line: 3200

	/* begin block 2 */
		// Start line: 7592
	/* end block 2 */
	// End Line: 7593

long CAMERA_AbsoluteCollision(Camera *camera,CameraCollisionInfo *colInfo)

{
  short sVar1;
  long in_a3;
  
  if ((colInfo->flags & 0x18U) == 0) {
    in_a3 = FUN_80018fb0();
  }
  else {
    sVar1 = *(short *)&colInfo->lenCenterToExtend + -0x96;
    camera->collisionTargetFocusDistance = sVar1;
    if (sVar1 < 400) {
      camera->collisionTargetFocusDistance = 400;
    }
  }
  return in_a3;
}



// decompiled code
// original method signature: 
// short /*$ra*/ CAMERA_update_z_damped(struct Camera *camera /*$a0*/, short current /*$a3*/, short target /*$t0*/)
 // line 3205, offset 0x80019678
	/* begin block 1 */
		// Start line: 3206
		// Start offset: 0x80019678
		// Variables:
	// 		static short upvel; // offset 0x56
	// 		static short upaccl; // offset 0x58
	// 		static short upmaxVel; // offset 0x5a
	// 		short current_tmp; // stack offset -16
	/* end block 1 */
	// End offset: 0x800198D8
	// End Line: 3250

	/* begin block 2 */
		// Start line: 7752
	/* end block 2 */
	// End Line: 7753

short CAMERA_update_z_damped(Camera *camera,short current,short target)

{
  int iVar1;
  short in_a3;
  short in_t0;
  undefined4 uStack00000010;
  int iStack00000014;
  short in_stack_00000018;
  
  iVar1 = (int)in_a3 - (int)in_t0;
  if (iVar1 < 0) {
    iVar1 = (int)in_t0 - (int)in_a3;
  }
  sRam800cdf92 = (short)(iVar1 << 1);
  iStack00000014 = (int)sRam800cdf92;
  uStack00000010 = 0x800cdf90;
  FUN_80016d28(1,&stack0x00000018,(int)in_t0,0x800cdf8e);
  return in_stack_00000018;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CombatCamDist(struct Camera *camera /*$s0*/)
 // line 3310, offset 0x800198e8
	/* begin block 1 */
		// Start line: 3311
		// Start offset: 0x800198E8
		// Variables:
	// 		struct DVECTOR xy; // stack offset -48
	// 		struct DVECTOR xy2; // stack offset -40
	// 		struct _SVector position; // stack offset -32
	// 		long z; // stack offset -24
	// 		struct _Instance *instance; // $s1
	/* end block 1 */
	// End offset: 0x80019B98
	// End Line: 3392

	/* begin block 2 */
		// Start line: 7966
	/* end block 2 */
	// End Line: 7967

void CAMERA_CombatCamDist(Camera *camera)

{
  undefined4 in_zero;
  undefined4 in_at;
  short sVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  short sStack00000010;
  short sStack00000012;
  undefined4 uStack00000010;
  short sStack00000018;
  short sStack0000001a;
  undefined4 uStack00000018;
  undefined4 uStack00000020;
  uint in_stack_00000024;
  int iStack00000028;
  
  setCopReg(2,in_at,*(undefined4 *)(in_v0 + 4));
  copFunction(2,0x180001);
  uStack00000010 = getCopReg(2,0xe);
  iStack00000028 = getCopReg(2,0x13);
  iVar2 = (int)sStack00000010 + -0x100;
  if ((int)sStack00000010 < 0x100) {
    iVar2 = iVar2 * iStack00000028;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    debugForgedAbilitiesMenu.type._0_2_ = -(short)(iVar2 >> 7);
  }
  else {
    iVar2 = iVar2 * iStack00000028;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    debugForgedAbilitiesMenu.type._0_2_ = (short)(iVar2 >> 7);
  }
  if (3000 < (short)debugForgedAbilitiesMenu.type) {
    debugForgedAbilitiesMenu.type._0_2_ = 3000;
  }
  if ((short)debugForgedAbilitiesMenu.type < *(short *)(unaff_s0 + 0x1a8)) {
    debugForgedAbilitiesMenu.type._0_2_ = *(short *)(unaff_s0 + 0x1a8);
  }
  sStack00000012 = (short)((uint)uStack00000010 >> 0x10);
  if (sStack00000012 < 0xf1) {
    if (0xd1 < sStack00000012) goto LAB_80019a0c;
    debugForgedAbilitiesMenu.lower._0_2_ = (short)debugForgedAbilitiesMenu.lower + -0x30;
    sVar1 = 0x800;
    if (0x7ff < (short)debugForgedAbilitiesMenu.lower) goto LAB_80019a0c;
  }
  else {
    debugForgedAbilitiesMenu.lower._0_2_ = (short)debugForgedAbilitiesMenu.lower + 0x30;
    sVar1 = 0x1000;
    if ((short)debugForgedAbilitiesMenu.lower < 0x1001) goto LAB_80019a0c;
  }
  debugForgedAbilitiesMenu.lower._0_2_ = sVar1;
LAB_80019a0c:
  uStack00000020 = *(undefined4 *)(unaff_s1 + 0x5c);
  in_stack_00000024 = in_stack_00000024 & 0xffff0000 | (uint)*(ushort *)(unaff_s1 + 0x60);
  setCopReg(2,in_zero,uStack00000020);
  setCopReg(2,in_at,in_stack_00000024);
  copFunction(2,0x180001);
  uStack00000018 = getCopReg(2,0xe);
  sStack0000001a = (short)((uint)uStack00000018 >> 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)sStack0000001a - (int)sStack00000012,(int)sStack00000018 - (int)sStack00000010);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_GenericCameraProcess(struct Camera *camera /*$s0*/)
 // line 3395, offset 0x80019bac
	/* begin block 1 */
		// Start line: 3396
		// Start offset: 0x80019BAC
		// Variables:
	// 		struct _Instance *focusInstance; // $s1
	// 		struct _Position targetCamPos; // stack offset -32

		/* begin block 1.1 */
			// Start line: 3449
			// Start offset: 0x80019CD0
			// Variables:
		// 		short angle; // $a0
		// 		struct _Rotation test_rot; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x80019D30
		// End Line: 3467

		/* begin block 1.2 */
			// Start line: 3475
			// Start offset: 0x80019D40
			// Variables:
		// 		struct _Instance *warpInstance; // $v0
		// 		int tmp; // $v0
		/* end block 1.2 */
		// End offset: 0x80019D50
		// End Line: 3481

		/* begin block 1.3 */
			// Start line: 3513
			// Start offset: 0x80019E00
			// Variables:
		// 		int mod; // $v1
		/* end block 1.3 */
		// End offset: 0x80019E80
		// End Line: 3528

		/* begin block 1.4 */
			// Start line: 3536
			// Start offset: 0x80019E9C
			// Variables:
		// 		int dist; // $a3
		/* end block 1.4 */
		// End offset: 0x80019EF0
		// End Line: 3554

		/* begin block 1.5 */
			// Start line: 3568
			// Start offset: 0x80019F30
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.5 */
		// End offset: 0x80019F30
		// End Line: 3568

		/* begin block 1.6 */
			// Start line: 3577
			// Start offset: 0x80019F74
			// Variables:
		// 		struct _Position target; // stack offset -24
		/* end block 1.6 */
		// End offset: 0x80019FF4
		// End Line: 3597
	/* end block 1 */
	// End offset: 0x80019FF4
	// End Line: 3600

	/* begin block 2 */
		// Start line: 8137
	/* end block 2 */
	// End Line: 8138

void CAMERA_GenericCameraProcess(Camera *camera)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_s0;
  undefined4 in_stack_00000020;
  undefined2 in_stack_00000024;
  
  FUN_8001c604();
  uVar5 = *(uint *)(unaff_s0 + 0x49c);
  if ((int)uVar5 < 0) {
    iVar3 = FUN_800a7ecc(0xe);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar3 + 0x78);
      *(undefined2 *)(unaff_s0 + 0x1ba) = 0xf94;
      *(undefined2 *)(unaff_s0 + 0x188) = 0x40;
      *(undefined2 *)(unaff_s0 + 0x1c4) = 8;
      *(undefined2 *)(unaff_s0 + 0x4ae) = 1;
      *(undefined2 *)(unaff_s0 + 0x408) = 0;
      uVar2 = (undefined2)(((uint)(((int)sVar1 & 0xfffU) - 0x401 < 0x7ff) ^ 1) << 0xb);
      *(undefined2 *)(unaff_s0 + 0x1c0) = uVar2;
      *(undefined2 *)(unaff_s0 + 0x1b6) = uVar2;
    }
  }
  else {
    if (((*(uint *)(unaff_s0 + 0xe8) & 0x2000) == 0) && ((uVar5 & 0x20000000) == 0)) {
      if (((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0) && ((uVar5 & 0x4000000) == 0)) {
        if (((uVar5 & 0x400) != 0) && ((*(uint *)(unaff_s0 + 0x498) & 0x400) == 0)) {
          iVar6 = (int)*(short *)(unaff_s0 + 0xb4);
          iVar3 = iVar6;
          if (iVar6 < 0) {
            iVar3 = iVar6 + 0x3ff;
          }
          iVar3 = (iVar6 + (iVar3 >> 10) * -0x400) * 0x10000 >> 0x10;
          if (iVar3 < 0x201) {
            iVar3 = -iVar3;
          }
          else {
            iVar3 = 0x400 - iVar3;
          }
          iVar6 = iVar3;
          if (iVar3 < 0) {
            iVar6 = -iVar3;
          }
          if (0x80 < iVar6) {
            *(ushort *)(unaff_s0 + 0x1b6) = (short)iVar3 + *(short *)(unaff_s0 + 0xb4) & 0xfff;
          }
        }
        FUN_8001c814();
        goto LAB_80019dec;
      }
    }
    else {
      if ((uVar5 & 0x2000000) != 0) goto LAB_80019dec;
      *(undefined2 *)(unaff_s0 + 0x188) = 0x40;
    }
    FUN_8001c910();
  }
LAB_80019dec:
  if ((*(uint *)(unaff_s0 + 0xe8) & 0x1800) == 0) {
    if ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) == 0) {
      debugForgedAbilitiesMenu.type._0_2_ = *(short *)(unaff_s0 + 0x1a8);
    }
    else {
      FUN_8001984c();
    }
    FUN_80016564(&stack0x00000018,unaff_s0 + 0x100,unaff_s0 + 0x13c,
                 (int)(short)debugForgedAbilitiesMenu.type);
    uVar4 = FUN_8001d130();
    *(undefined4 *)(unaff_s0 + 0x480) = uVar4;
  }
  if (*(int *)(unaff_s0 + 0x49c) < 0) {
    *(undefined2 *)(unaff_s0 + 0x1b0) = 2000;
  }
  FUN_8001bfe0();
  FUN_8001c0b0();
  FUN_8001c298();
  if ((*(uint *)(unaff_s0 + 0xe8) & 0x1800) == 0) {
    in_stack_00000020 = *(undefined4 *)(unaff_s0 + 0x1aa);
    in_stack_00000024 = *(undefined2 *)(unaff_s0 + 0x1ae);
    if ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0) {
      in_stack_00000024 = *(undefined2 *)(unaff_s0 + 0x104);
    }
    FUN_80016edc(1,unaff_s0 + 0x100,&stack0x00000020,unaff_s0 + 0x158);
    if ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0) {
      uVar2 = FUN_800195dc();
      *(undefined2 *)(unaff_s0 + 0x104) = uVar2;
    }
  }
  else {
    *(undefined2 *)(unaff_s0 + 0x100) = *(undefined2 *)(unaff_s0 + 0x1aa);
    *(undefined2 *)(unaff_s0 + 0x102) = *(undefined2 *)(unaff_s0 + 0x1ac);
    *(undefined2 *)(unaff_s0 + 0x104) = *(undefined2 *)(unaff_s0 + 0x1ae);
    *(undefined2 *)(unaff_s0 + 0x106) = *(undefined2 *)(unaff_s0 + 0x1a8);
    if ((*(uint *)(unaff_s0 + 0xe8) & 0x1000) != 0) {
      FUN_80015df4();
    }
  }
  FUN_8001caf4();
  FUN_8001c94c();
  FUN_8001c17c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CinematicProcess(struct Camera *camera /*$s2*/)
 // line 3608, offset 0x8001a028
	/* begin block 1 */
		// Start line: 3609
		// Start offset: 0x8001A028
		// Variables:
	// 		struct _SVector *camPos; // $s0
	// 		struct _SVector *camTarget; // $s3
	// 		struct MultiSpline *posSpline; // $s4
	// 		struct MultiSpline *targetSpline; // $s1

		/* begin block 1.1 */
			// Start line: 3632
			// Start offset: 0x8001A0A0
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.1 */
		// End offset: 0x8001A0A0
		// End Line: 3632

		/* begin block 1.2 */
			// Start line: 3636
			// Start offset: 0x8001A0BC
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _SVector *_v1; // $v0
		/* end block 1.2 */
		// End offset: 0x8001A0D4
		// End Line: 3636

		/* begin block 1.3 */
			// Start line: 3641
			// Start offset: 0x8001A0E4
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _SVector *_v0; // $v0
		/* end block 1.3 */
		// End offset: 0x8001A0E4
		// End Line: 3641

		/* begin block 1.4 */
			// Start line: 3649
			// Start offset: 0x8001A12C
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a2
		// 		struct _Position *_v0; // $v0
		/* end block 1.4 */
		// End offset: 0x8001A12C
		// End Line: 3649

		/* begin block 1.5 */
			// Start line: 3662
			// Start offset: 0x8001A18C
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _Position *_v0; // $v0
		/* end block 1.5 */
		// End offset: 0x8001A18C
		// End Line: 3662

		/* begin block 1.6 */
			// Start line: 3710
			// Start offset: 0x8001A3E0
		/* end block 1.6 */
		// End offset: 0x8001A4DC
		// End Line: 3727

		/* begin block 1.7 */
			// Start line: 3730
			// Start offset: 0x8001A4DC
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _Rotation *_v0; // $v0
		/* end block 1.7 */
		// End offset: 0x8001A4DC
		// End Line: 3730
	/* end block 1 */
	// End offset: 0x8001A4DC
	// End Line: 3730

	/* begin block 2 */
		// Start line: 8584
	/* end block 2 */
	// End Line: 8585

void CAMERA_CinematicProcess(Camera *camera)

{
  short sVar1;
  short sVar2;
  int in_v0;
  short in_v1;
  short *unaff_s0;
  undefined4 *unaff_s1;
  Camera *camera_00;
  short *unaff_s3;
  int unaff_s4;
  
  sVar1 = *(short *)(in_v0 + 4);
  (camera_00->core).position.x = in_v1;
  (camera_00->core).position.y = (short)camera;
  (camera_00->core).position.z = sVar1;
  if ((camera_00->data).Cinematic.splinePointAhead == 0) {
    if (unaff_s1 == (undefined4 *)0x0) {
      CAMERA_QueryMode(camera_00);
      FUN_80016edc(1,&camera_00->focusPoint,&camera_00->targetFocusPoint,&camera_00->focusPointVel);
    }
    else {
      unaff_s3 = (short *)FUN_80015588(*unaff_s1,unaff_s1 + 4);
      if (unaff_s3 != (short *)0x0) {
        sVar1 = unaff_s3[1];
        sVar2 = unaff_s3[2];
        (camera_00->targetFocusPoint).x = *unaff_s3;
        (camera_00->targetFocusPoint).y = sVar1;
        (camera_00->targetFocusPoint).z = sVar2;
        FUN_800164e8();
      }
    }
  }
  else {
    FUN_800164e8();
    sVar1 = unaff_s0[1];
    sVar2 = unaff_s0[2];
    (camera_00->data).Cinematic.lastSplinePos.x = *unaff_s0;
    (camera_00->data).Cinematic.lastSplinePos.y = sVar1;
    (camera_00->data).Cinematic.lastSplinePos.z = sVar2;
  }
  sVar1 = (camera_00->core).position.y;
  sVar2 = (camera_00->core).position.z;
  (camera_00->targetPos).x = (camera_00->core).position.x;
  (camera_00->targetPos).y = sVar1;
  (camera_00->targetPos).z = sVar2;
  if ((unaff_s4 != 0) &&
     (((camera_00->data).Cinematic.targetSpline != (MultiSpline *)0x0 ||
      ((camera_00->data).Cinematic.splinePointAhead != 0)))) {
    CAMERA_QueryMode(camera_00);
    FUN_80016edc(1,&camera_00->focusPoint,&camera_00->targetFocusPoint,&camera_00->focusPointVel);
  }
  FUN_800176b8(&camera_00->focusRotation,&camera_00->focusPoint);
  if (unaff_s0 == (short *)0x0 && unaff_s3 == (short *)0x0) {
    (camera_00->data).Cinematic.cinema_done = 1;
  }
  FUN_800176b8(&camera_00->targetRotation,&camera_00->focusPoint);
  sVar1 = (camera_00->targetRotation).y;
  sVar2 = (camera_00->targetRotation).z;
  (camera_00->core).rotation.x = (camera_00->targetRotation).x;
  (camera_00->core).rotation.y = sVar1;
  (camera_00->core).rotation.z = sVar2;
  sVar1 = (camera_00->core).rotation.z;
  camera_00->actual_x_rot = (camera_00->core).rotation.x;
  camera_00->lagZ = sVar1;
  FUN_8001c17c();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CAMERA_GetDistSq(struct _SVector *point1 /*$a0*/, struct _SVector *point2 /*$a1*/)
 // line 3744, offset 0x8001a544
	/* begin block 1 */
		// Start line: 3745
		// Start offset: 0x8001A544
		// Variables:
	// 		struct _Vector d; // stack offset -16
	/* end block 1 */
	// End offset: 0x8001A544
	// End Line: 3745

	/* begin block 2 */
		// Start line: 8869
	/* end block 2 */
	// End Line: 8870

	/* begin block 3 */
		// Start line: 8873
	/* end block 3 */
	// End Line: 8874

int CAMERA_GetDistSq(_SVector *point1,_SVector *point2)

{
  int iVar1;
  undefined2 *in_a3;
  short *unaff_s0;
  short sStack00000012;
  short sStack00000014;
  short sStack00000016;
  short sStack00000018;
  short sStack0000001a;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  undefined2 uStack00000020;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  sStack00000012 = unaff_s0[1];
  sStack00000014 = unaff_s0[2];
  sStack00000016 = point2->x;
  sStack00000018 = point2->y;
  sStack0000001a = point2->z;
  uStack0000001c = *in_a3;
  uStack0000001e = in_a3[1];
  uStack00000020 = in_a3[2];
  FUN_800bcd5c(&stack0x00000010);
  iVar1 = (in_stack_00000034 - in_stack_00000038) * 0x1000;
  if (in_stack_00000030 != 0) {
    iVar1 = ((in_stack_00000034 - in_stack_00000038) * -0x1000) / in_stack_00000030;
  }
  point1->x = point2->x + (short)((int)*unaff_s0 * iVar1 >> 0xc);
  point1->y = point2->y + (short)((int)unaff_s0[1] * iVar1 >> 0xc);
  iVar1 = (uint)(ushort)point2->z + ((int)unaff_s0[2] * iVar1 >> 0xc);
  point1->z = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_NearestPointOnLineVec(struct _SVector *linePoint /*$s2*/, struct _SVector *start /*$s1*/, struct _SVector *line /*$s0*/, struct _Position *point /*$a3*/)
 // line 3759, offset 0x8001a5c0
	/* begin block 1 */
		// Start line: 3760
		// Start offset: 0x8001A5C0
		// Variables:
	// 		struct MATRIX nmat; // stack offset -64
	// 		struct _Vector dpv; // stack offset -32
	// 		long t; // $a0
	/* end block 1 */
	// End offset: 0x8001A674
	// End Line: 3778

	/* begin block 2 */
		// Start line: 8903
	/* end block 2 */
	// End Line: 8904

void CAMERA_NearestPointOnLineVec
               (_SVector *linePoint,_SVector *start,_SVector *line,_Position *point)

{
  int in_v0;
  int in_v1;
  int iVar1;
  short *unaff_s0;
  short *unaff_s1;
  short *unaff_s2;
  
  iVar1 = in_v0 * 0x1000;
  if (in_v1 != 0) {
    iVar1 = (in_v0 * -0x1000) / in_v1;
  }
  *unaff_s2 = *unaff_s1 + (short)((int)*unaff_s0 * iVar1 >> 0xc);
  unaff_s2[1] = unaff_s1[1] + (short)((int)unaff_s0[1] * iVar1 >> 0xc);
  unaff_s2[2] = unaff_s1[2] + (short)((int)unaff_s0[2] * iVar1 >> 0xc);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CAMERA_CheckPoint(int linePoint /*$a0*/, int linept1 /*$a1*/, int linept2 /*$a2*/)
 // line 3784, offset 0x8001a6ec
	/* begin block 1 */
		// Start line: 8966
	/* end block 1 */
	// End Line: 8967

	/* begin block 2 */
		// Start line: 8967
	/* end block 2 */
	// End Line: 8968

int CAMERA_CheckPoint(int linePoint,int linept1,int linept2)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  iVar1 = FUN_8001a650((int)*(short *)(unaff_s0 + 4),(int)*(short *)(unaff_s1 + 4),
                       (int)*(short *)(unaff_s2 + 4));
  return (uint)(iVar1 == 0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ CAMERA_CheckIfPointOnLine(struct _SVector *linePoint /*$s0*/, struct _SVector *linept1 /*$s1*/, struct _SVector *linept2 /*$s2*/)
 // line 3790, offset 0x8001a730
	/* begin block 1 */
		// Start line: 8978
	/* end block 1 */
	// End Line: 8979

int CAMERA_CheckIfPointOnLine(_SVector *linePoint,_SVector *linept1,_SVector *linept2)

{
  int iVar1;
  int iVar2;
  int in_a3;
  int iVar3;
  int iVar4;
  int iVar5;
  short in_stack_00000010;
  short in_stack_00000012;
  short in_stack_00000014;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short sStack00000020;
  short sStack00000022;
  short sStack00000024;
  short *in_stack_00000058;
  
  sStack00000018 = linept2->x - linept1->x;
  sStack0000001a = linept2->y - linept1->y;
  sStack0000001c = linept2->z - linept1->z;
  FUN_8001a524(&stack0x00000010,linept1,&stack0x00000018);
  iVar1 = FUN_8001a4a8(&stack0x00000010);
  iVar2 = 0;
  if (0 < in_a3 - iVar1) {
    iVar1 = FUN_80039850(in_a3 - iVar1);
    FUN_800187c0(&stack0x00000018);
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar4 = (int)sStack00000018 * iVar1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar5 = (int)sStack0000001a * iVar1;
      sStack00000020 = in_stack_00000010 + (short)(iVar4 >> 0xc);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      iVar4 = (int)sStack0000001c * iVar1;
      sStack00000022 = in_stack_00000012 + (short)(iVar5 >> 0xc);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      sStack00000024 = in_stack_00000014 + (short)(iVar4 >> 0xc);
      iVar4 = FUN_8001a694(&stack0x00000020,linept1,linept2);
      if (iVar4 != 0) {
        iVar2 = iVar2 + 1;
        *in_stack_00000058 = sStack00000020;
        in_stack_00000058[1] = sStack00000022;
        in_stack_00000058[2] = sStack00000024;
        in_stack_00000058 = in_stack_00000058 + 4;
      }
      iVar3 = iVar3 + 1;
      sStack00000018 = -sStack00000018;
      sStack0000001c = -sStack0000001c;
      sStack0000001a = -sStack0000001a;
    } while (iVar3 < 2);
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CAMERA_FindLinePoint(struct _Position *point /*$s0*/, struct _SVector *linept1 /*$s5*/, struct _SVector *linept2 /*$s6*/, int target_dist_sq /*$s1*/, struct _SVector *results /*stack 16*/)
 // line 3798, offset 0x8001a7c0
	/* begin block 1 */
		// Start line: 3799
		// Start offset: 0x8001A7C0
		// Variables:
	// 		struct _SVector outPoint; // stack offset -56
	// 		struct _SVector line; // stack offset -48
	// 		int calc; // $s1
	// 		int hits; // $s4

		/* begin block 1.1 */
			// Start line: 3799
			// Start offset: 0x8001A7C0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a3
		// 		short _x1; // $t0
		// 		short _y1; // $t1
		// 		short _z1; // $t2
		// 		struct _SVector *_v; // $s2
		/* end block 1.1 */
		// End offset: 0x8001A7C0
		// End Line: 3799

		/* begin block 1.2 */
			// Start line: 3813
			// Start offset: 0x8001A854
			// Variables:
		// 		struct _SVector linePoint; // stack offset -40
		// 		int n; // $s3

			/* begin block 1.2.1 */
				// Start line: 3827
				// Start offset: 0x8001A908
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			/* end block 1.2.1 */
			// End offset: 0x8001A908
			// End Line: 3827
		/* end block 1.2 */
		// End offset: 0x8001A95C
		// End Line: 3833
	/* end block 1 */
	// End offset: 0x8001A95C
	// End Line: 3835

	/* begin block 2 */
		// Start line: 8994
	/* end block 2 */
	// End Line: 8995

int CAMERA_FindLinePoint
              (_Position *point,_SVector *linept1,_SVector *linept2,int target_dist_sq,
              _SVector *results)

{
  int in_v0;
  int unaff_s4;
  int iVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000014;
  short in_stack_00000018;
  short in_stack_0000001a;
  short in_stack_0000001c;
  short sStack00000020;
  short sStack00000022;
  short sStack00000024;
  short *in_stack_00000058;
  
  FUN_800187c0();
  iVar1 = unaff_s4;
  do {
    iVar2 = (int)in_stack_00000018 * in_v0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    iVar3 = (int)in_stack_0000001a * in_v0;
    sStack00000020 = (short)results + (short)(iVar2 >> 0xc);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    iVar2 = (int)in_stack_0000001c * in_v0;
    sStack00000022 = results._2_2_ + (short)(iVar3 >> 0xc);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    sStack00000024 = in_stack_00000014 + (short)(iVar2 >> 0xc);
    iVar2 = FUN_8001a694(&stack0x00000020);
    if (iVar2 != 0) {
      iVar1 = iVar1 + 1;
      *in_stack_00000058 = sStack00000020;
      in_stack_00000058[1] = sStack00000022;
      in_stack_00000058[2] = sStack00000024;
      in_stack_00000058 = in_stack_00000058 + 4;
    }
    unaff_s4 = unaff_s4 + 1;
    in_stack_00000018 = -in_stack_00000018;
    in_stack_0000001c = -in_stack_0000001c;
    in_stack_0000001a = -in_stack_0000001a;
  } while (unaff_s4 < 2);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SplineGetNearestPoint2(struct Camera *camera /*stack 0*/, struct Spline *spline /*stack 4*/, struct _SVector *point /*stack 8*/, int *currkey /*stack 12*/, struct _SVector *ret_dpoint /*stack 16*/)
 // line 3838, offset 0x8001a984
	/* begin block 1 */
		// Start line: 3839
		// Start offset: 0x8001A984
		// Variables:
	// 		struct SplineKey *key; // stack offset -56
	// 		int n; // $s2
	// 		int target_dist_sq; // stack offset -52
	// 		long dist; // $fp

		/* begin block 1.1 */
			// Start line: 3839
			// Start offset: 0x8001A984
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		/* end block 1.1 */
		// End offset: 0x8001A984
		// End Line: 3839

		/* begin block 1.2 */
			// Start line: 3858
			// Start offset: 0x8001AA38
			// Variables:
		// 		struct _SVector point1; // stack offset -88
		// 		struct _SVector point2; // stack offset -80
		// 		struct _SVector results[2]; // stack offset -72
		// 		int i; // $s1
		// 		int hits; // $s3

			/* begin block 1.2.1 */
				// Start line: 3862
				// Start offset: 0x8001AA54
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a2
			// 		short _z1; // $v0
			// 		struct _SVector *_v0; // $s7
			// 		struct vecS *_v1; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8001AA54
			// End Line: 3862

			/* begin block 1.2.2 */
				// Start line: 3862
				// Start offset: 0x8001AA54
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $a2
			// 		short _z1; // $v1
			// 		struct _SVector *_v0; // $s6
			// 		struct vecS *_v1; // $v1
			/* end block 1.2.2 */
			// End offset: 0x8001AA54
			// End Line: 3862

			/* begin block 1.2.3 */
				// Start line: 3869
				// Start offset: 0x8001AACC
				// Variables:
			// 		int tmpdist; // $a1

				/* begin block 1.2.3.1 */
					// Start line: 3880
					// Start offset: 0x8001AAE8
					// Variables:
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a0
				/* end block 1.2.3.1 */
				// End offset: 0x8001AAE8
				// End Line: 3880
			/* end block 1.2.3 */
			// End offset: 0x8001AB0C
			// End Line: 3884
		/* end block 1.2 */
		// End offset: 0x8001AB1C
		// End Line: 3892
	/* end block 1 */
	// End offset: 0x8001AB3C
	// End Line: 3893

	/* begin block 2 */
		// Start line: 9111
	/* end block 2 */
	// End Line: 9112

void CAMERA_SplineGetNearestPoint2
               (Camera *camera,Spline *spline,_SVector *point,int *currkey,_SVector *ret_dpoint)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  short in_v1;
  undefined4 in_t0;
  undefined2 *puVar5;
  int iVar6;
  int unaff_s2;
  int iVar7;
  undefined2 *unaff_s5;
  int unaff_s8;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  int in_stack_00000038;
  undefined4 uStack0000003c;
  undefined2 *puStack00000040;
  int in_stack_00000070;
  int in_stack_00000074;
  undefined4 in_stack_00000078;
  int *in_stack_0000007c;
  
  puStack00000040 = (undefined2 *)&stack0x00000028;
  iVar7 = in_stack_00000038;
  uStack0000003c = in_t0;
  do {
    if ((-1 < unaff_s2) && (unaff_s2 <= (int)in_v1 + -2)) {
      uStack00000018 = *(undefined2 *)(iVar7 + 2);
      uStack0000001a = *(undefined2 *)(iVar7 + 4);
      uStack0000001c = *(undefined2 *)(iVar7 + 6);
      iVar6 = 0;
      iVar3 = in_stack_00000038 + unaff_s2 * 0x20 + 0x20;
      uStack00000020 = *(undefined2 *)(iVar3 + 2);
      uStack00000022 = *(undefined2 *)(iVar3 + 4);
      uStack00000024 = *(undefined2 *)(iVar3 + 6);
      iVar3 = FUN_8001a724(in_stack_00000070 + 0x1aa,&stack0x00000018,&stack0x00000020,
                           uStack0000003c);
      puVar5 = puStack00000040;
      if (0 < iVar3) {
        do {
          iVar4 = FUN_8001a4a8(in_stack_00000078,puVar5);
          if (iVar4 < unaff_s8) {
            uVar1 = puVar5[1];
            uVar2 = puVar5[2];
            *unaff_s5 = *puVar5;
            unaff_s5[1] = uVar1;
            unaff_s5[2] = uVar2;
            *in_stack_0000007c = unaff_s2;
            unaff_s8 = iVar4;
          }
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
        } while (iVar6 < iVar3);
      }
    }
    unaff_s2 = unaff_s2 + 1;
    in_v1 = *(short *)(in_stack_00000074 + 4);
    iVar7 = iVar7 + 0x20;
  } while (unaff_s2 < (int)*(short *)(in_stack_00000074 + 4) + -1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SplineGetNearestPoint(struct Spline *spline /*$s4*/, struct _SVector *point /*$s6*/, int *currkey /*$s7*/, struct _SVector *ret_dpoint /*stack 12*/)
 // line 3895, offset 0x8001ab6c
	/* begin block 1 */
		// Start line: 3896
		// Start offset: 0x8001AB6C
		// Variables:
	// 		struct _SVector dpoint; // stack offset -96
	// 		struct _SVector dpoint2; // stack offset -88
	// 		struct _SVector dpoint3; // stack offset -80
	// 		struct _SVector point0; // stack offset -72
	// 		struct _SVector point1; // stack offset -64
	// 		struct _SVector point2; // stack offset -56
	// 		struct _SVector point3; // stack offset -48
	// 		int current_keyframe; // $s0
	// 		int dist; // $fp
	// 		int ret; // $s5
	// 		int ret2; // $s4
	// 		int ret3; // $s0
	// 		struct SplineKey *key; // $s1
	// 		int circular_spline; // $s2
	// 		int prev_key; // $s2
	// 		int next_key; // $s3

		/* begin block 1.1 */
			// Start line: 3921
			// Start offset: 0x8001AC98
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $t0
		// 		short _z1; // $a3
		// 		struct _SVector *_v0; // $a1
		// 		struct vecS *_v1; // $a3
		/* end block 1.1 */
		// End offset: 0x8001AC98
		// End Line: 3921

		/* begin block 1.2 */
			// Start line: 3921
			// Start offset: 0x8001AC98
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $t0
		// 		short _z1; // $v1
		// 		struct _SVector *_v0; // $a2
		// 		struct vecS *_v1; // $v1
		/* end block 1.2 */
		// End offset: 0x8001AC98
		// End Line: 3921

		/* begin block 1.3 */
			// Start line: 3936
			// Start offset: 0x8001AD60
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $t0
		// 		short _z1; // $v1
		// 		struct _SVector *_v0; // $a2
		// 		struct vecS *_v1; // $v1
		/* end block 1.3 */
		// End offset: 0x8001AD60
		// End Line: 3936

		/* begin block 1.4 */
			// Start line: 3949
			// Start offset: 0x8001ADC0
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $t0
		// 		short _z1; // $v1
		// 		struct _SVector *_v0; // $a1
		// 		struct vecS *_v1; // $v1
		/* end block 1.4 */
		// End offset: 0x8001ADC0
		// End Line: 3949
	/* end block 1 */
	// End offset: 0x8001AED4
	// End Line: 3975

	/* begin block 2 */
		// Start line: 9304
	/* end block 2 */
	// End Line: 9305

void CAMERA_SplineGetNearestPoint(Spline *spline,_SVector *point,int *currkey,_SVector *ret_dpoint)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_s0;
  int unaff_s1;
  int iVar6;
  int iVar7;
  int unaff_s4;
  int *unaff_s7;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 uStack00000030;
  undefined2 uStack00000032;
  undefined2 uStack00000034;
  undefined2 uStack00000038;
  undefined2 uStack0000003a;
  undefined2 uStack0000003c;
  undefined2 in_stack_00000040;
  undefined2 in_stack_00000042;
  undefined2 in_stack_00000044;
  undefined4 *in_stack_0000007c;
  
  iVar5 = (int)*(short *)((int)*(short *)(unaff_s4 + 4) * 0x20 + unaff_s1 + -0x1c);
  iVar2 = (int)*(short *)(unaff_s1 + 4) - iVar5;
  if (iVar2 < 0) {
    iVar2 = iVar5 - (int)*(short *)(unaff_s1 + 4);
  }
  bVar1 = false;
  if (iVar2 < 5) {
    iVar5 = (int)*(short *)((int)*(short *)(unaff_s4 + 4) * 0x20 + unaff_s1 + -0x1a);
    iVar2 = (int)*(short *)(unaff_s1 + 6) - iVar5;
    if (iVar2 < 0) {
      bVar1 = true;
      if (4 < iVar5 - (int)*(short *)(unaff_s1 + 6)) {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
      if (4 < iVar2) {
        bVar1 = false;
      }
    }
  }
  iVar2 = unaff_s1 + unaff_s0 * 0x20;
  uStack00000030 = *(undefined2 *)(iVar2 + 2);
  uStack00000032 = *(undefined2 *)(iVar2 + 4);
  uStack00000034 = *(undefined2 *)(iVar2 + 6);
  iVar2 = unaff_s1 + unaff_s0 * 0x20 + 0x20;
  uStack00000038 = *(undefined2 *)(iVar2 + 2);
  uStack0000003a = *(undefined2 *)(iVar2 + 4);
  uStack0000003c = *(undefined2 *)(iVar2 + 6);
  iVar2 = FUN_80077f78(&stack0x00000010);
  iVar5 = FUN_8001a4a8(&stack0x00000010);
  if (unaff_s0 < (int)*(short *)(unaff_s4 + 4) + -2) {
    iVar7 = unaff_s0 + 1;
  }
  else {
    iVar7 = -1;
    if (bVar1) {
      iVar7 = 0;
    }
  }
  if (unaff_s0 < 1) {
    iVar6 = -1;
    if (bVar1) {
      iVar6 = (int)*(short *)(unaff_s4 + 4) + -2;
    }
  }
  else {
    iVar6 = unaff_s0 + -1;
  }
  if (iVar7 == -1) {
    iVar3 = -1;
LAB_8001ad1c:
    if (iVar6 == -1) {
      iVar4 = -1;
LAB_8001ad6c:
      if ((iVar3 - 1U < 0xfff) && (iVar2 = FUN_8001a4a8(&stack0x00000018), iVar2 < iVar5)) {
        *unaff_s7 = iVar7;
        goto LAB_8001ad94;
      }
      if ((0xffe < iVar4 - 1U) || (iVar2 = FUN_8001a4a8(&stack0x00000020), iVar5 <= iVar2)) {
        *in_stack_0000007c = in_stack_00000010;
        in_stack_0000007c[1] = in_stack_00000014;
        return;
      }
      *unaff_s7 = iVar6;
    }
    else {
      iVar4 = unaff_s1 + iVar6 * 0x20;
      in_stack_00000028 = *(undefined2 *)(iVar4 + 2);
      in_stack_0000002a = *(undefined2 *)(iVar4 + 4);
      in_stack_0000002c = *(undefined2 *)(iVar4 + 6);
      iVar4 = FUN_80077f78(&stack0x00000020,&stack0x00000028,&stack0x00000030);
      if (0 < iVar2) goto LAB_8001ad6c;
      *unaff_s7 = iVar6;
    }
    *in_stack_0000007c = in_stack_00000020;
    in_stack_0000007c[1] = in_stack_00000024;
  }
  else {
    iVar3 = unaff_s1 + iVar7 * 0x20 + 0x20;
    in_stack_00000040 = *(undefined2 *)(iVar3 + 2);
    in_stack_00000042 = *(undefined2 *)(iVar3 + 4);
    in_stack_00000044 = *(undefined2 *)(iVar3 + 6);
    iVar3 = FUN_80077f78(&stack0x00000018,&stack0x00000038);
    if (iVar2 < 0x1000) goto LAB_8001ad1c;
    *unaff_s7 = iVar7;
LAB_8001ad94:
    *in_stack_0000007c = in_stack_00000018;
    in_stack_0000007c[1] = in_stack_0000001c;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SplineHelpMove(struct Camera *camera /*$s1*/)
 // line 3981, offset 0x8001af04
	/* begin block 1 */
		// Start line: 3982
		// Start offset: 0x8001AF04
		// Variables:
	// 		struct _SVector camPos; // stack offset -48
	// 		struct _Position pos; // stack offset -40
	// 		struct _Rotation rotation; // stack offset -32
	// 		struct _Instance *focusInstance; // $s3
	// 		struct MultiSpline *posSpline; // $s2
	/* end block 1 */
	// End offset: 0x8001B058
	// End Line: 4026

	/* begin block 2 */
		// Start line: 9489
	/* end block 2 */
	// End Line: 9490

void CAMERA_SplineHelpMove(Camera *camera)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  int unaff_s3;
  undefined2 in_stack_00000028;
  ushort in_stack_0000002c;
  
  FUN_800176b8(&stack0x00000028,unaff_s1 + 0x100);
  statsMenu.text._0_2_ = in_stack_00000028;
  statsMenu.var_address._0_2_ = in_stack_0000002c;
  sVar1 = FUN_80016298((int)*(short *)(unaff_s3 + 0x78),
                       (int)(((uint)*(ushort *)(unaff_s1 + 0xfc) + 0x800) * 0x10000) >> 0x10);
  if (sVar1 < 900) {
    uVar3 = (uint)in_stack_0000002c + 0x800 & 0xfff;
    in_stack_0000002c = (ushort)uVar3;
    sVar1 = FUN_80016310(uVar3,(int)*(short *)(unaff_s1 + 0xfc));
    iVar4 = (int)sVar1;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = -iVar4;
    }
    if (iVar2 < 900) {
      *(short *)(unaff_s1 + 0xfc) = *(short *)(unaff_s1 + 0xfc) + (short)(iVar4 * 0x533 >> 0xb);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SplineProcess(struct Camera *camera /*$s1*/)
 // line 4028, offset 0x8001b074
	/* begin block 1 */
		// Start line: 4029
		// Start offset: 0x8001B074
		// Variables:
	// 		struct _SVector camPos; // stack offset -48
	// 		struct _SVector sv; // stack offset -40
	// 		short targetFocusDistance; // $s4
	// 		struct MultiSpline *posSpline; // $s3
	// 		short smooth; // $s0
	// 		short dist_smooth; // $s2
	// 		static short hold_flag; // offset 0x5c
	// 		struct _Rotation targetFocusRotation; // stack offset -32

		/* begin block 1.1 */
			// Start line: 4114
			// Start offset: 0x8001B1C0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $a1
		// 		short _z0; // $a2
		// 		short _x1; // $v1
		// 		short _y1; // $v1
		// 		short _z1; // $v0
		// 		struct _SVector *_v; // $a0
		// 		struct _SVector *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x8001B1C0
		// End Line: 4114
	/* end block 1 */
	// End offset: 0x8001B3A8
	// End Line: 4177

	/* begin block 2 */
		// Start line: 9602
	/* end block 2 */
	// End Line: 9603

void CAMERA_SplineProcess(Camera *camera)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 in_a1;
  undefined4 uVar4;
  int unaff_s1;
  undefined4 uVar5;
  undefined4 *unaff_s3;
  short unaff_s4;
  int iStack00000010;
  int iStack00000014;
  short in_stack_00000018;
  short in_stack_0000001a;
  short in_stack_0000001c;
  short in_stack_00000020;
  short in_stack_00000022;
  short in_stack_00000024;
  short in_stack_00000028;
  undefined2 in_stack_0000002a;
  short in_stack_0000002c;
  
  FUN_8001aad0(*unaff_s3,in_a1,unaff_s1 + 0x438,&stack0x00000018);
  *(undefined2 *)(unaff_s1 + 0x194) = 0x200;
  iStack00000010 = unaff_s1 + 0x160;
  iStack00000014 = (int)*(short *)(unaff_s1 + 0x194);
  FUN_80016edc(5,unaff_s1 + 0x100,unaff_s1 + 0x1aa,unaff_s1 + 0x158);
  if (*(short *)(unaff_s1 + 0x408) == 1) {
    DAT_800cdf94 = 1;
  }
  else {
    iVar3 = FUN_8001d734();
    if (iVar3 != 0) {
      if (DAT_800cdf94 != 0) {
        *(undefined2 *)(unaff_s1 + 0x4ae) = 1;
      }
      DAT_800cdf94 = 0;
    }
  }
  if (((*(short *)(unaff_s1 + 0x408) != 1) && (DAT_800cdf94 == 0)) &&
     (*(short *)(unaff_s1 + 0xf6) != 3)) {
    FUN_800176b8(&stack0x00000028,unaff_s1 + 0x100,&stack0x00000018);
    in_stack_00000020 = *(short *)(unaff_s1 + 0x100) - in_stack_00000018;
    in_stack_00000022 = *(short *)(unaff_s1 + 0x102) - in_stack_0000001a;
    in_stack_00000024 = *(short *)(unaff_s1 + 0x104) - in_stack_0000001c;
    unaff_s4 = FUN_80015e18();
    *(short *)(unaff_s1 + 0x1b6) = in_stack_0000002c;
  }
  uVar4 = 0x40;
  if (*(short *)(unaff_s1 + 0x4ae) == 0) {
    uVar4 = 0x50;
    uVar5 = 0x40;
  }
  else {
    uVar5 = 0x80;
  }
  *(undefined2 *)(unaff_s1 + 0x13e) = in_stack_0000002a;
  *(undefined2 *)(unaff_s1 + 0x4b8) = *(undefined2 *)(unaff_s1 + 0x13c);
  iStack00000010 = unaff_s1 + 0x174;
  iStack00000014 = 0x40;
  FUN_800175a0(1,unaff_s1 + 0x13c,(int)in_stack_00000028,unaff_s1 + 0x16c);
  uVar1 = FUN_80016310((int)*(short *)(unaff_s1 + 0x4b8),(int)*(short *)(unaff_s1 + 0x13c));
  *(undefined2 *)(unaff_s1 + 0x4b8) = uVar1;
  if (*(short *)(unaff_s1 + 0xf6) == 3) {
    in_stack_0000002c = *(short *)(unaff_s1 + 0x1b6);
  }
  iStack00000010 = unaff_s1 + 0x178;
  iStack00000014 = uVar4;
  FUN_800175a0(5,unaff_s1 + 0x140,(int)in_stack_0000002c,unaff_s1 + 0x170);
  if (((*(short *)(unaff_s1 + 0x408) == 1) || (*(short *)(unaff_s1 + 0x4ae) != 0)) ||
     (DAT_800cdf94 != 0)) {
    FUN_80016564(unaff_s1 + 0x198,unaff_s1 + 0x100,unaff_s1 + 0x13c,
                 (int)*(short *)(unaff_s1 + 0x1a8));
    iVar3 = FUN_8001d130();
    *(int *)(unaff_s1 + 0x480) = iVar3;
    if (iVar3 != 0) {
      unaff_s4 = *(short *)(unaff_s1 + 0x1b0);
    }
  }
  iStack00000010 = unaff_s1 + 0x16a;
  iStack00000014 = uVar5;
  FUN_80016d28(5,unaff_s1 + 0x106,(int)unaff_s4,unaff_s1 + 0x168);
  sVar2 = FUN_80016298((int)*(short *)(unaff_s1 + 0x140),(int)in_stack_0000002c);
  if (sVar2 < 0x20) {
    *(undefined2 *)(unaff_s1 + 0x4ae) = 0;
    *(undefined2 *)(unaff_s1 + 0xf6) = 0;
  }
  FUN_8001caf4();
  if ((*(short *)(unaff_s1 + 0xf0) == 4) && ((*(uint *)(unaff_s1 + 0xe8) & 0x10000) == 0)) {
    FUN_8001ae68();
  }
  FUN_8001c94c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_ShakeCamera(struct Camera *camera /*$a2*/)
 // line 4201, offset 0x8001b3c8
	/* begin block 1 */
		// Start line: 9967
	/* end block 1 */
	// End Line: 9968

void CAMERA_ShakeCamera(Camera *camera)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int in_a2;
  
  *(short *)(in_a2 + 4) = *(short *)(in_a2 + 4) + (short)(in_v1 * in_v0 >> 0xc);
  iVar1 = *(int *)(in_a2 + 0xe0) - gameTrackerX.controlCommand[1][1];
  *(int *)(in_a2 + 0xe0) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(in_a2 + 0xe0) = 0;
  }
  *(short *)(in_a2 + 0xe4) = *(short *)(in_a2 + 0xe4) + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Process(struct Camera *camera /*$s0*/)
 // line 4220, offset 0x8001b4b0
	/* begin block 1 */
		// Start line: 4221
		// Start offset: 0x8001B4B0
		// Variables:
	// 		struct _Instance *focusInstance; // $a1

		/* begin block 1.1 */
			// Start line: 4280
			// Start offset: 0x8001B584
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _SVector *_v; // $v0
		// 		struct _Position *_v0; // $a0
		// 		struct _Position *_v1; // $a2
		/* end block 1.1 */
		// End offset: 0x8001B584
		// End Line: 4280
	/* end block 1 */
	// End offset: 0x8001B6EC
	// End Line: 4383

	/* begin block 2 */
		// Start line: 10009
	/* end block 2 */
	// End Line: 10010

void CAMERA_Process(Camera *camera)

{
  int iVar1;
  uint uVar2;
  int *unaff_s0;
  
  if ((unaff_s0[0xfe] == *unaff_s0) && (*(short *)(unaff_s0 + 0xff) == *(short *)(unaff_s0 + 1))) {
    camera_still = 1;
  }
  else {
    camera_still = 0;
  }
  unaff_s0[0xfe] = *unaff_s0;
  *(undefined2 *)(unaff_s0 + 0xff) = *(undefined2 *)(unaff_s0 + 1);
  *(undefined2 *)(unaff_s0 + 0x12e) = 0;
  unaff_s0[0x126] = unaff_s0[0x127];
  iVar1 = FUN_80016340();
  unaff_s0[0x127] = iVar1;
  *(short *)(unaff_s0 + 0x4a) = *(short *)((int)unaff_s0 + 0x112) - *(short *)(unaff_s0 + 0x43);
  *(short *)((int)unaff_s0 + 0x12a) =
       *(short *)(unaff_s0 + 0x45) - *(short *)((int)unaff_s0 + 0x10e);
  *(short *)(unaff_s0 + 0x4b) = *(short *)((int)unaff_s0 + 0x116) - *(short *)(unaff_s0 + 0x44);
  unaff_s0[0x129] = unaff_s0[0x128];
  iVar1 = FUN_80039850((int)*(short *)(unaff_s0 + 0x4a) * (int)*(short *)(unaff_s0 + 0x4a) +
                       (int)*(short *)((int)unaff_s0 + 0x12a) *
                       (int)*(short *)((int)unaff_s0 + 0x12a));
  unaff_s0[0x128] = iVar1;
  if (shorten_flag == 0) {
    shorten_count = 0;
  }
  shorten_flag = 0;
  if (0 < unaff_s0[0x121]) {
    unaff_s0[0x121] = unaff_s0[0x121] + -1;
  }
  uVar2 = SEXT24(*(short *)(unaff_s0 + 0x3c));
  if (uVar2 != 6) {
    FUN_80018838();
    uVar2 = SEXT24(*(short *)(unaff_s0 + 0x3c));
  }
  if (uVar2 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x8001b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ARRAY_80010134[uVar2])();
    return;
  }
  unaff_s0[0x3a] = unaff_s0[0x3a] & 0xffffe7ff;
  FUN_8001b32c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CenterCamera(struct Camera *camera /*$s1*/)
 // line 4404, offset 0x8001b6fc
	/* begin block 1 */
		// Start line: 4405
		// Start offset: 0x8001B6FC

		/* begin block 1.1 */
			// Start line: 4409
			// Start offset: 0x8001B724
			// Variables:
		// 		int tmp1; // $s0
		// 		int tmp2; // $v0
		/* end block 1.1 */
		// End offset: 0x8001B790
		// End Line: 4413
	/* end block 1 */
	// End offset: 0x8001B7BC
	// End Line: 4420

	/* begin block 2 */
		// Start line: 10388
	/* end block 2 */
	// End Line: 10389

void CAMERA_CenterCamera(Camera *camera)

{
  short sVar1;
  int in_v0;
  int unaff_s1;
  
  sVar1 = *(short *)(in_v0 + 0x78);
  *(undefined2 *)(unaff_s1 + 0x178) = 0;
  *(undefined2 *)(unaff_s1 + 0x170) = 0;
  debugForgedAbilitiesMenu.upper._0_2_ = sVar1 - 0x400U & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetLookRot(struct Camera *camera /*$a0*/, int x_rotation /*$a1*/, int z_rotation /*$a2*/)
 // line 4436, offset 0x8001b7e4
	/* begin block 1 */
		// Start line: 8872
	/* end block 1 */
	// End Line: 8873

	/* begin block 2 */
		// Start line: 10441
	/* end block 2 */
	// End Line: 10442

void CAMERA_SetLookRot(Camera *camera,int x_rotation,int z_rotation)

{
  CameraLookStickyFlag = 1;
  FUN_8001b754();
  PLAYER_SetLookAround(camera->focusInstance);
  camera->lookTimer = 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_StartLookaroundMode(struct Camera *camera /*$s0*/)
 // line 4442, offset 0x8001b7f0
	/* begin block 1 */
		// Start line: 10452
	/* end block 1 */
	// End Line: 10453

void CAMERA_StartLookaroundMode(Camera *camera)

{
  short in_v0;
  
  CameraLookStickyFlag = in_v0;
  FUN_8001b754();
  PLAYER_SetLookAround(camera->focusInstance);
  camera->lookTimer = 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_StartSwimThrowMode(struct Camera *camera /*$s0*/)
 // line 4460, offset 0x8001b880
	/* begin block 1 */
		// Start line: 10498
	/* end block 1 */
	// End Line: 10499

void CAMERA_StartSwimThrowMode(Camera *camera)

{
  bool bVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  ushort uVar5;
  int in_a1;
  int iVar6;
  _Instance *instance;
  
  instance = camera->focusInstance;
  if ((draw[1].dr_env.code[10] & 0x100000) == 0) {
    bVar1 = true;
    if (CameraLookStickyFlag == 0) {
      bVar1 = (loadStatus.currentDirLoading & 0xc00U) == 0xc00;
    }
    camera->last_forced_movement = camera->forced_movement;
    if (((camera->instance_xyvel != 0) || (camera->forced_movement != 1)) ||
       ((camera->instance_mode & 0x2000000) != 0)) {
      camera->forced_movement = 0;
    }
    sVar3 = camera->mode;
    if ((sVar3 != 8) && (-1 < (int)camera->instance_mode)) {
      if ((short)debugForgedAbilitiesMenu.upper == -1) {
        if ((clearRect[0].y0._1_1_ != '\x01') || ((loadStatus.currentDirLoading & 0xfU) == 0)) {
          if ((((camera->lock & 4U) == 0) && ((camera->flags & 0x10000U) == 0)) &&
             (((((sVar3 == 0 || (sVar3 == 0xc)) || (sVar3 == 4)) || (sVar3 == 0xd)) &&
              ((*(uint *)(in_a1 + 0x14) & 0x100) == 0)))) {
            if (((loadStatus.currentDirLoading & 0x400U) == 0) || (bVar1)) {
              if (((uint)(ushort)camera->leftTimer - 1 < 3) && (!bVar1)) {
                FUN_8001b660(camera);
              }
              camera->leftTimer = 0;
            }
            else {
              sVar3 = camera->leftTimer + 1;
              camera->leftTimer = sVar3;
              if (2 < sVar3) {
                camera->rotDirection = -1;
                uVar5 = (camera->focusRotation).z -
                        (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
                (camera->focusRotation).z = uVar5;
                uVar2 = draw[1].dr_env.code[4];
                camera->forced_movement = 1;
                (camera->data).Follow.stopTimer = -0x1a5e0000;
                (camera->focusRotation).z = uVar5;
                (camera->collisionTargetFocusRotation).z = uVar5;
                (camera->targetFocusRotation).z = uVar5;
                camera->lastModTime = uVar2;
              }
            }
            if (((loadStatus.currentDirLoading & 0x800U) == 0) || (bVar1)) {
              if (((uint)(ushort)camera->rightTimer - 1 < 3) && (!bVar1)) {
                FUN_8001b660(camera);
              }
              camera->rightTimer = 0;
            }
            else {
              sVar3 = camera->rightTimer + 1;
              camera->rightTimer = sVar3;
              if (2 < sVar3) {
                camera->rotDirection = 1;
                camera->forced_movement = 1;
                uVar5 = (camera->focusRotation).z +
                        (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
                (camera->focusRotation).z = uVar5;
                uVar2 = draw[1].dr_env.code[4];
                (camera->data).Follow.stopTimer = -0x1a5e0000;
                (camera->focusRotation).z = uVar5;
                (camera->collisionTargetFocusRotation).z = uVar5;
                (camera->targetFocusRotation).z = uVar5;
                camera->lastModTime = uVar2;
              }
            }
          }
          else {
            camera->rightTimer = 0;
            camera->leftTimer = 0;
          }
          if ((draw[0].dr_env.code[1] & 0x2000000) != 0) {
            if ((camera->lock & 1U) == 0) {
              if (((loadStatus.currentDirLoading & 0x40000008U) == 0x40000008) &&
                 (sVar3 = camera->targetFocusDistance + -0x14, camera->targetFocusDistance = sVar3,
                 sVar3 < 200)) {
                camera->targetFocusDistance = 200;
              }
              if (((loadStatus.currentDirLoading & 0x40000004U) == 0x40000004) &&
                 (sVar3 = camera->targetFocusDistance + 0x14, camera->targetFocusDistance = sVar3,
                 0x1000 < sVar3)) {
                camera->targetFocusDistance = 0x1000;
              }
            }
            if ((camera->lock & 2U) == 0) {
              if ((loadStatus.currentDirLoading & 0x40000002U) == 0x40000002) {
                camera->extraXRot = camera->extraXRot + 0x10;
              }
              if ((loadStatus.currentDirLoading & 0x40000001U) == 0x40000001) {
                camera->extraXRot = camera->extraXRot + -0x10;
              }
            }
          }
          if ((bVar1) && ((*(uint *)(in_a1 + 0x14) & 0x100) == 0)) {
            if (((camera->flags & 0x20000U) != 0) && (camera->mode != 5)) {
              sVar3 = camera->lookTimer + 1;
              camera->lookTimer = sVar3;
              if (sVar3 == 2) {
                lVar4 = PLAYER_OkToLookAround(instance);
                if ((lVar4 != 0) && ((camera->lock & 0x200U) == 0)) {
                  FUN_8001b754(camera);
                  PLAYER_SetLookAround(instance);
                  camera->collideRotControl = 0;
                  return;
                }
                camera->lookTimer = 0;
              }
              else {
                if ((2 < sVar3) && (camera->mode == 6)) {
                  PLAYER_TurnHead(instance,(short *)&camera->lookRot,&(camera->lookRot).z,
                                  (GameTracker *)&loadStatus.compControl);
                  camera->collideRotControl = 0;
                  return;
                }
              }
            }
          }
          else {
            camera->flags = camera->flags | 0x20000;
            FUN_8001bdcc(camera);
          }
          camera->collideRotControl = 0;
        }
      }
      else {
        if ((camera->instance_mode & 0x2000000) == 0) {
          camera->forced_movement = 1;
        }
        FUN_800175a0(1,&(camera->focusRotation).z,(int)(short)debugForgedAbilitiesMenu.upper,
                     &(camera->focusRotVel).z,&(camera->focusRotAccl).z,0x90);
        sVar3 = (camera->focusRotation).z;
        iVar6 = (int)(short)debugForgedAbilitiesMenu.upper;
        (camera->collisionTargetFocusRotation).z = sVar3;
        (camera->targetFocusRotation).z = sVar3;
        sVar3 = FUN_80016298((int)(camera->focusRotation).z,iVar6);
        if (sVar3 < 8) {
          debugForgedAbilitiesMenu.upper._0_2_ = -1;
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_EndSwimThrowMode(struct Camera *camera /*$a0*/)
 // line 4468, offset 0x8001b8c0
	/* begin block 1 */
		// Start line: 10515
	/* end block 1 */
	// End Line: 10516

void CAMERA_EndSwimThrowMode(Camera *camera)

{
  bool bVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  ushort uVar5;
  int in_a1;
  int iVar6;
  int unaff_s0;
  uint *unaff_s2;
  _Instance *instance;
  int iStack00000010;
  undefined4 uStack00000014;
  
  bVar1 = true;
  if (CameraLookStickyFlag == 0) {
    bVar1 = (loadStatus.currentDirLoading & 0xc00U) == 0xc00;
  }
  *(undefined2 *)(unaff_s0 + 0x40a) = *(undefined2 *)(unaff_s0 + 0x408);
  if (((*(int *)(unaff_s0 + 0x4a0) != 0) || (*(short *)(unaff_s0 + 0x408) != 1)) ||
     ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) != 0)) {
    *(undefined2 *)(unaff_s0 + 0x408) = 0;
  }
  sVar3 = *(short *)(unaff_s0 + 0xf0);
  if ((sVar3 != 8) && (-1 < (int)*(uint *)(unaff_s0 + 0x49c))) {
    if ((short)debugForgedAbilitiesMenu.upper == -1) {
      if ((clearRect[0].y0._1_1_ != '\x01') || ((*unaff_s2 & 0xf) == 0)) {
        if ((((*(uint *)(unaff_s0 + 0xec) & 4) == 0) &&
            ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0)) &&
           (((((sVar3 == 0 || (sVar3 == 0xc)) || (sVar3 == 4)) || (sVar3 == 0xd)) &&
            ((*(uint *)(in_a1 + 0x14) & 0x100) == 0)))) {
          if (((*unaff_s2 & 0x400) == 0) || (bVar1)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x48e) - 1 < 3) && (!bVar1)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x48e) = 0;
          }
          else {
            sVar3 = *(short *)(unaff_s0 + 0x48e) + 1;
            *(short *)(unaff_s0 + 0x48e) = sVar3;
            if (2 < sVar3) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 0xffff;
              uVar5 = *(short *)(unaff_s0 + 0x140) -
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              uVar2 = draw[1].dr_env.code[4];
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar5;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar5;
              *(ulong *)(unaff_s0 + 0x410) = uVar2;
            }
          }
          if (((*unaff_s2 & 0x800) == 0) || (bVar1)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x490) - 1 < 3) && (!bVar1)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x490) = 0;
          }
          else {
            sVar3 = *(short *)(unaff_s0 + 0x490) + 1;
            *(short *)(unaff_s0 + 0x490) = sVar3;
            if (2 < sVar3) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 1;
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              uVar5 = *(short *)(unaff_s0 + 0x140) +
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              uVar2 = draw[1].dr_env.code[4];
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar5;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar5;
              *(ulong *)(unaff_s0 + 0x410) = uVar2;
            }
          }
        }
        else {
          *(undefined2 *)(unaff_s0 + 0x490) = 0;
          *(undefined2 *)(unaff_s0 + 0x48e) = 0;
        }
        if ((draw[0].dr_env.code[1] & 0x2000000) != 0) {
          if ((*(uint *)(unaff_s0 + 0xec) & 1) == 0) {
            if (((*unaff_s2 & 0x40000008) == 0x40000008) &&
               (sVar3 = *(short *)(unaff_s0 + 0x1a8) + -0x14, *(short *)(unaff_s0 + 0x1a8) = sVar3,
               sVar3 < 200)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 200;
            }
            if (((*unaff_s2 & 0x40000004) == 0x40000004) &&
               (sVar3 = *(short *)(unaff_s0 + 0x1a8) + 0x14, *(short *)(unaff_s0 + 0x1a8) = sVar3,
               0x1000 < sVar3)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 0x1000;
            }
          }
          if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
            if ((*unaff_s2 & 0x40000002) == 0x40000002) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + 0x10;
            }
            if ((*unaff_s2 & 0x40000001) == 0x40000001) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + -0x10;
            }
          }
        }
        if ((bVar1) && ((*(uint *)(in_a1 + 0x14) & 0x100) == 0)) {
          if (((*(uint *)(unaff_s0 + 0xe8) & 0x20000) != 0) && (*(short *)(unaff_s0 + 0xf0) != 5)) {
            sVar3 = *(short *)(unaff_s0 + 0x1f0) + 1;
            *(short *)(unaff_s0 + 0x1f0) = sVar3;
            if (sVar3 == 2) {
              lVar4 = PLAYER_OkToLookAround(instance);
              if ((lVar4 != 0) && ((*(uint *)(unaff_s0 + 0xec) & 0x200) == 0)) {
                FUN_8001b754();
                PLAYER_SetLookAround(instance);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
              *(undefined2 *)(unaff_s0 + 0x1f0) = 0;
            }
            else {
              if ((2 < sVar3) && (*(short *)(unaff_s0 + 0xf0) == 6)) {
                PLAYER_TurnHead(instance,(short *)(unaff_s0 + 0x414),(short *)(unaff_s0 + 0x418),
                                (GameTracker *)&loadStatus.compControl);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
            }
          }
        }
        else {
          *(uint *)(unaff_s0 + 0xe8) = *(uint *)(unaff_s0 + 0xe8) | 0x20000;
          FUN_8001bdcc();
        }
        *(undefined2 *)(unaff_s0 + 0x492) = 0;
      }
    }
    else {
      if ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) == 0) {
        *(undefined2 *)(unaff_s0 + 0x408) = 1;
      }
      iStack00000010 = unaff_s0 + 0x178;
      uStack00000014 = 0x90;
      FUN_800175a0(1,unaff_s0 + 0x140,(int)(short)debugForgedAbilitiesMenu.upper,unaff_s0 + 0x170);
      iVar6 = (int)(short)debugForgedAbilitiesMenu.upper;
      *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x140);
      *(undefined2 *)(unaff_s0 + 0x1b6) = *(undefined2 *)(unaff_s0 + 0x140);
      sVar3 = FUN_80016298((int)*(short *)(unaff_s0 + 0x140),iVar6);
      if (sVar3 < 8) {
        debugForgedAbilitiesMenu.upper._0_2_ = -1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_ForceEndLookaroundMode(struct Camera *camera /*$s0*/)
 // line 4474, offset 0x8001b8e4
	/* begin block 1 */
		// Start line: 10527
	/* end block 1 */
	// End Line: 10528

void CAMERA_ForceEndLookaroundMode(Camera *camera)

{
  bool bVar1;
  ulong uVar2;
  short sVar3;
  int in_v0;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int unaff_s0;
  uint *unaff_s2;
  _Instance *instance;
  int unaff_s5;
  int iStack00000010;
  undefined4 uStack00000014;
  
  bVar1 = in_v0 == 0;
  *(undefined2 *)(unaff_s0 + 0x40a) = *(undefined2 *)(unaff_s0 + 0x408);
  if (((*(int *)(unaff_s0 + 0x4a0) != 0) || (*(short *)(unaff_s0 + 0x408) != 1)) ||
     ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) != 0)) {
    *(undefined2 *)(unaff_s0 + 0x408) = 0;
  }
  sVar3 = *(short *)(unaff_s0 + 0xf0);
  if ((sVar3 != 8) && (-1 < (int)*(uint *)(unaff_s0 + 0x49c))) {
    if ((short)debugForgedAbilitiesMenu.upper == -1) {
      if ((clearRect[0].y0._1_1_ != '\x01') || ((*unaff_s2 & 0xf) == 0)) {
        if ((((*(uint *)(unaff_s0 + 0xec) & 4) == 0) &&
            ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0)) &&
           (((((sVar3 == 0 || (sVar3 == 0xc)) || (sVar3 == 4)) || (sVar3 == 0xd)) &&
            ((*(uint *)(unaff_s5 + 0x14) & 0x100) == 0)))) {
          if (((*unaff_s2 & 0x400) == 0) || (bVar1)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x48e) - 1 < 3) && (!bVar1)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x48e) = 0;
          }
          else {
            sVar3 = *(short *)(unaff_s0 + 0x48e) + 1;
            *(short *)(unaff_s0 + 0x48e) = sVar3;
            if (2 < sVar3) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 0xffff;
              uVar5 = *(short *)(unaff_s0 + 0x140) -
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              uVar2 = draw[1].dr_env.code[4];
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar5;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar5;
              *(ulong *)(unaff_s0 + 0x410) = uVar2;
            }
          }
          if (((*unaff_s2 & 0x800) == 0) || (bVar1)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x490) - 1 < 3) && (!bVar1)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x490) = 0;
          }
          else {
            sVar3 = *(short *)(unaff_s0 + 0x490) + 1;
            *(short *)(unaff_s0 + 0x490) = sVar3;
            if (2 < sVar3) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 1;
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              uVar5 = *(short *)(unaff_s0 + 0x140) +
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              uVar2 = draw[1].dr_env.code[4];
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar5;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar5;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar5;
              *(ulong *)(unaff_s0 + 0x410) = uVar2;
            }
          }
        }
        else {
          *(undefined2 *)(unaff_s0 + 0x490) = 0;
          *(undefined2 *)(unaff_s0 + 0x48e) = 0;
        }
        if ((draw[0].dr_env.code[1] & 0x2000000) != 0) {
          if ((*(uint *)(unaff_s0 + 0xec) & 1) == 0) {
            if (((*unaff_s2 & 0x40000008) == 0x40000008) &&
               (sVar3 = *(short *)(unaff_s0 + 0x1a8) + -0x14, *(short *)(unaff_s0 + 0x1a8) = sVar3,
               sVar3 < 200)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 200;
            }
            if (((*unaff_s2 & 0x40000004) == 0x40000004) &&
               (sVar3 = *(short *)(unaff_s0 + 0x1a8) + 0x14, *(short *)(unaff_s0 + 0x1a8) = sVar3,
               0x1000 < sVar3)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 0x1000;
            }
          }
          if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
            if ((*unaff_s2 & 0x40000002) == 0x40000002) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + 0x10;
            }
            if ((*unaff_s2 & 0x40000001) == 0x40000001) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + -0x10;
            }
          }
        }
        if ((bVar1) && ((*(uint *)(unaff_s5 + 0x14) & 0x100) == 0)) {
          if (((*(uint *)(unaff_s0 + 0xe8) & 0x20000) != 0) && (*(short *)(unaff_s0 + 0xf0) != 5)) {
            sVar3 = *(short *)(unaff_s0 + 0x1f0) + 1;
            *(short *)(unaff_s0 + 0x1f0) = sVar3;
            if (sVar3 == 2) {
              lVar4 = PLAYER_OkToLookAround(instance);
              if ((lVar4 != 0) && ((*(uint *)(unaff_s0 + 0xec) & 0x200) == 0)) {
                FUN_8001b754();
                PLAYER_SetLookAround(instance);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
              *(undefined2 *)(unaff_s0 + 0x1f0) = 0;
            }
            else {
              if ((2 < sVar3) && (*(short *)(unaff_s0 + 0xf0) == 6)) {
                PLAYER_TurnHead(instance,(short *)(unaff_s0 + 0x414),(short *)(unaff_s0 + 0x418),
                                (GameTracker *)&loadStatus.compControl);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
            }
          }
        }
        else {
          *(uint *)(unaff_s0 + 0xe8) = *(uint *)(unaff_s0 + 0xe8) | 0x20000;
          FUN_8001bdcc();
        }
        *(undefined2 *)(unaff_s0 + 0x492) = 0;
      }
    }
    else {
      if ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) == 0) {
        *(undefined2 *)(unaff_s0 + 0x408) = 1;
      }
      iStack00000010 = unaff_s0 + 0x178;
      uStack00000014 = 0x90;
      FUN_800175a0(1,unaff_s0 + 0x140,(int)(short)debugForgedAbilitiesMenu.upper,unaff_s0 + 0x170);
      iVar6 = (int)(short)debugForgedAbilitiesMenu.upper;
      *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x140);
      *(undefined2 *)(unaff_s0 + 0x1b6) = *(undefined2 *)(unaff_s0 + 0x140);
      sVar3 = FUN_80016298((int)*(short *)(unaff_s0 + 0x140),iVar6);
      if (sVar3 < 8) {
        debugForgedAbilitiesMenu.upper._0_2_ = -1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Control(struct Camera *camera /*$s0*/, struct _Instance *playerInstance /*$s5*/)
 // line 4483, offset 0x8001b920
	/* begin block 1 */
		// Start line: 4484
		// Start offset: 0x8001B920
		// Variables:
	// 		long *controlCommand; // $s2
	// 		int lookmode; // $s1
	// 		struct _Instance *focusInstance; // $s4
	/* end block 1 */
	// End offset: 0x8001BE44
	// End Line: 4718

	/* begin block 2 */
		// Start line: 10545
	/* end block 2 */
	// End Line: 10546

void CAMERA_Control(Camera *camera,_Instance *playerInstance)

{
  ulong uVar1;
  short sVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  int unaff_s0;
  int unaff_s1;
  uint *unaff_s2;
  _Instance *instance;
  int unaff_s5;
  int iStack00000010;
  undefined4 uStack00000014;
  
  *(undefined2 *)(unaff_s0 + 0x408) = 0;
  sVar2 = *(short *)(unaff_s0 + 0xf0);
  if ((sVar2 != 8) && (-1 < (int)*(uint *)(unaff_s0 + 0x49c))) {
    if ((short)debugForgedAbilitiesMenu.upper == -1) {
      if ((clearRect[0].y0._1_1_ != '\x01') || ((*unaff_s2 & 0xf) == 0)) {
        if ((((*(uint *)(unaff_s0 + 0xec) & 4) == 0) &&
            ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0)) &&
           (((((sVar2 == 0 || (sVar2 == 0xc)) || (sVar2 == 4)) || (sVar2 == 0xd)) &&
            ((*(uint *)(unaff_s5 + 0x14) & 0x100) == 0)))) {
          if (((*unaff_s2 & 0x400) == 0) || (unaff_s1 != 0)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x48e) - 1 < 3) && (unaff_s1 == 0)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x48e) = 0;
          }
          else {
            sVar2 = *(short *)(unaff_s0 + 0x48e) + 1;
            *(short *)(unaff_s0 + 0x48e) = sVar2;
            if (2 < sVar2) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 0xffff;
              uVar4 = *(short *)(unaff_s0 + 0x140) -
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar4;
              uVar1 = draw[1].dr_env.code[4];
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar4;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar4;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar4;
              *(ulong *)(unaff_s0 + 0x410) = uVar1;
            }
          }
          if (((*unaff_s2 & 0x800) == 0) || (unaff_s1 != 0)) {
            if (((uint)*(ushort *)(unaff_s0 + 0x490) - 1 < 3) && (unaff_s1 == 0)) {
              FUN_8001b660();
            }
            *(undefined2 *)(unaff_s0 + 0x490) = 0;
          }
          else {
            sVar2 = *(short *)(unaff_s0 + 0x490) + 1;
            *(short *)(unaff_s0 + 0x490) = sVar2;
            if (2 < sVar2) {
              *(undefined2 *)(unaff_s0 + 0x40c) = 1;
              *(undefined2 *)(unaff_s0 + 0x408) = 1;
              uVar4 = *(short *)(unaff_s0 + 0x140) +
                      (short)((uint)(gameTrackerX.controlCommand[1][1] << 5) >> 0xc) & 0xfff;
              *(ushort *)(unaff_s0 + 0x140) = uVar4;
              uVar1 = draw[1].dr_env.code[4];
              *(undefined4 *)(unaff_s0 + 0x470) = 0xe5a20000;
              *(ushort *)(unaff_s0 + 0x140) = uVar4;
              *(ushort *)(unaff_s0 + 0x1c0) = uVar4;
              *(ushort *)(unaff_s0 + 0x1b6) = uVar4;
              *(ulong *)(unaff_s0 + 0x410) = uVar1;
            }
          }
        }
        else {
          *(undefined2 *)(unaff_s0 + 0x490) = 0;
          *(undefined2 *)(unaff_s0 + 0x48e) = 0;
        }
        if ((draw[0].dr_env.code[1] & 0x2000000) != 0) {
          if ((*(uint *)(unaff_s0 + 0xec) & 1) == 0) {
            if (((*unaff_s2 & 0x40000008) == 0x40000008) &&
               (sVar2 = *(short *)(unaff_s0 + 0x1a8) + -0x14, *(short *)(unaff_s0 + 0x1a8) = sVar2,
               sVar2 < 200)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 200;
            }
            if (((*unaff_s2 & 0x40000004) == 0x40000004) &&
               (sVar2 = *(short *)(unaff_s0 + 0x1a8) + 0x14, *(short *)(unaff_s0 + 0x1a8) = sVar2,
               0x1000 < sVar2)) {
              *(undefined2 *)(unaff_s0 + 0x1a8) = 0x1000;
            }
          }
          if ((*(uint *)(unaff_s0 + 0xec) & 2) == 0) {
            if ((*unaff_s2 & 0x40000002) == 0x40000002) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + 0x10;
            }
            if ((*unaff_s2 & 0x40000001) == 0x40000001) {
              *(short *)(unaff_s0 + 0x48c) = *(short *)(unaff_s0 + 0x48c) + -0x10;
            }
          }
        }
        if ((unaff_s1 == 0) || ((*(uint *)(unaff_s5 + 0x14) & 0x100) != 0)) {
          *(uint *)(unaff_s0 + 0xe8) = *(uint *)(unaff_s0 + 0xe8) | 0x20000;
          FUN_8001bdcc();
        }
        else {
          if (((*(uint *)(unaff_s0 + 0xe8) & 0x20000) != 0) && (*(short *)(unaff_s0 + 0xf0) != 5)) {
            sVar2 = *(short *)(unaff_s0 + 0x1f0) + 1;
            *(short *)(unaff_s0 + 0x1f0) = sVar2;
            if (sVar2 == 2) {
              lVar3 = PLAYER_OkToLookAround(instance);
              if ((lVar3 != 0) && ((*(uint *)(unaff_s0 + 0xec) & 0x200) == 0)) {
                FUN_8001b754();
                PLAYER_SetLookAround(instance);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
              *(undefined2 *)(unaff_s0 + 0x1f0) = 0;
            }
            else {
              if ((2 < sVar2) && (*(short *)(unaff_s0 + 0xf0) == 6)) {
                PLAYER_TurnHead(instance,(short *)(unaff_s0 + 0x414),(short *)(unaff_s0 + 0x418),
                                (GameTracker *)&loadStatus.compControl);
                *(undefined2 *)(unaff_s0 + 0x492) = 0;
                return;
              }
            }
          }
        }
        *(undefined2 *)(unaff_s0 + 0x492) = 0;
      }
    }
    else {
      if ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) == 0) {
        *(undefined2 *)(unaff_s0 + 0x408) = 1;
      }
      iStack00000010 = unaff_s0 + 0x178;
      uStack00000014 = 0x90;
      FUN_800175a0(1,unaff_s0 + 0x140,(int)(short)debugForgedAbilitiesMenu.upper,unaff_s0 + 0x170);
      iVar5 = (int)(short)debugForgedAbilitiesMenu.upper;
      *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x140);
      *(undefined2 *)(unaff_s0 + 0x1b6) = *(undefined2 *)(unaff_s0 + 0x140);
      sVar2 = FUN_80016298((int)*(short *)(unaff_s0 + 0x140),iVar5);
      if (sVar2 < 8) {
        debugForgedAbilitiesMenu.upper._0_2_ = -1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_EndLook(struct Camera *camera /*$s0*/)
 // line 4721, offset 0x8001be68
	/* begin block 1 */
		// Start line: 4722
		// Start offset: 0x8001BE68
		// Variables:
	// 		struct _Instance *focusInstance; // $s1
	/* end block 1 */
	// End offset: 0x8001BF44
	// End Line: 4782

	/* begin block 2 */
		// Start line: 11051
	/* end block 2 */
	// End Line: 11052

void CAMERA_EndLook(Camera *camera)

{
  undefined2 in_v0;
  int unaff_s0;
  _Instance *instance;
  
  *(undefined2 *)(unaff_s0 + 0x1b6) = in_v0;
  FUN_8001b660();
  *(undefined2 *)(unaff_s0 + 0x4ae) = 1;
  *(undefined2 *)(unaff_s0 + 0x1c0) = *(undefined2 *)(unaff_s0 + 0x1b6);
  if ((*(uint *)(unaff_s0 + 0xe8) & 0x10000) == 0) {
    *(undefined2 *)(unaff_s0 + 0x4b2) = *(undefined2 *)(unaff_s0 + 0xb0);
  }
  PLAYER_ReSetLookAround(instance);
  *(undefined2 *)(unaff_s0 + 0x1f0) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_ChangeToUnderWater(struct Camera *camera /*$s0*/, struct _Instance *instance /*$a1*/)
 // line 4786, offset 0x8001bf5c
	/* begin block 1 */
		// Start line: 11218
	/* end block 1 */
	// End Line: 11219

void CAMERA_ChangeToUnderWater(Camera *camera,_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_ChangeToOutOfWater(struct Camera *camera /*$s0*/, struct _Instance *instance /*$a1*/)
 // line 4813, offset 0x8001c008
	/* begin block 1 */
		// Start line: 11272
	/* end block 1 */
	// End Line: 11273

void CAMERA_ChangeToOutOfWater(Camera *camera,_Instance *instance)

{
  int in_v0;
  undefined4 uVar1;
  int in_a3;
  int iStack00000010;
  undefined4 uStack00000014;
  
  if (in_v0 == 0) {
    if ((*(short *)(in_a3 + 0x1a8) < *(short *)(in_a3 + 0x1b0)) &&
       ((*(uint *)(in_a3 + 0x49c) & 0x82000000) == 0)) {
      *(undefined2 *)(in_a3 + 0x1b0) = *(undefined2 *)(in_a3 + 0x1a8);
    }
    uVar1 = 6;
    if (*(short *)(in_a3 + 0x1b0) < *(short *)(in_a3 + 0x106)) {
      uStack00000014 = 0x200;
      if (*(short *)(in_a3 + 0x1b0) < *(short *)(in_a3 + 0x1a8)) {
        uVar1 = 5;
      }
      else {
        uStack00000014 = 0x80;
        uVar1 = 1;
      }
    }
    else {
      uStack00000014 = 0x40;
    }
    iStack00000010 = in_a3 + 0x16a;
    FUN_80016d28(uVar1,in_a3 + 0x106,(int)*(short *)(in_a3 + 0x1b0),in_a3 + 0x168);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_UpdateFocusDistance(struct Camera *camera /*$a3*/)
 // line 4929, offset 0x8001c07c
	/* begin block 1 */
		// Start line: 4930
		// Start offset: 0x8001C07C
		// Variables:
	// 		int smooth; // $v1
	// 		long dampMode; // $a0
	/* end block 1 */
	// End offset: 0x8001C13C
	// End Line: 4977

	/* begin block 2 */
		// Start line: 9858
	/* end block 2 */
	// End Line: 9859

void CAMERA_UpdateFocusDistance(Camera *camera)

{
  int in_a3;
  int iStack00000010;
  undefined4 uStack00000014;
  
  iStack00000010 = in_a3 + 0x16a;
  uStack00000014 = 0x40;
  FUN_80016d28(1,in_a3 + 0x106,(int)*(short *)(in_a3 + 0x1b0),in_a3 + 0x168);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_UpdateFocusTilt(struct Camera *camera /*$s0*/)
 // line 4979, offset 0x8001c14c
	/* begin block 1 */
		// Start line: 11503
	/* end block 1 */
	// End Line: 11504

void CAMERA_UpdateFocusTilt(Camera *camera)

{
  undefined2 uVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x13c) = *(undefined2 *)(unaff_s0 + 0x1b2);
  uVar1 = FUN_80016310((int)*(short *)(unaff_s0 + 0x4b8),(int)*(short *)(unaff_s0 + 0x13c));
  *(undefined2 *)(unaff_s0 + 0x4b8) = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_UpdateFocusRoll(struct Camera *camera /*$s1*/)
 // line 5013, offset 0x8001c218
	/* begin block 1 */
		// Start line: 5014
		// Start offset: 0x8001C218
		// Variables:
	// 		long tmp_inc; // $s0
	/* end block 1 */
	// End offset: 0x8001C318
	// End Line: 5031

	/* begin block 2 */
		// Start line: 11574
	/* end block 2 */
	// End Line: 11575

	/* begin block 3 */
		// Start line: 11577
	/* end block 3 */
	// End Line: 11578

/* WARNING: Removing unreachable block (ram,0x8001c278) */

void CAMERA_UpdateFocusRoll(Camera *camera)

{
  int iVar1;
  uint uVar2;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  iVar1 = in_v1 >> 0xc;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < (int)camera) {
    uVar2 = current_roll_amount + unaff_s0;
  }
  else {
    roll_inc = 0;
    uVar2 = roll_target;
  }
  current_roll_amount = uVar2 & 0xffffff;
  *(undefined2 *)(unaff_s1 + 0xb2) = (short)(current_roll_amount >> 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_UpdateFocusRotate(struct Camera *camera /*$s0*/)
 // line 5037, offset 0x8001c334
	/* begin block 1 */
		// Start line: 5038
		// Start offset: 0x8001C334

		/* begin block 1.1 */
			// Start line: 5041
			// Start offset: 0x8001C368
			// Variables:
		// 		int dampspeed; // $v1
		// 		long dampmode; // $a0
		/* end block 1.1 */
		// End offset: 0x8001C3E8
		// End Line: 5066
	/* end block 1 */
	// End offset: 0x8001C410
	// End Line: 5073

	/* begin block 2 */
		// Start line: 11626
	/* end block 2 */
	// End Line: 11627

void CAMERA_UpdateFocusRotate(Camera *camera)

{
  short in_v0;
  int unaff_s0;
  
  if (in_v0 < 4) {
    *(undefined2 *)(unaff_s0 + 0x4ae) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_UpdateFocusRotationX(struct Camera *camera /*$s0*/, struct _Instance *focusInstance /*$a1*/)
 // line 5079, offset 0x8001c420
	/* begin block 1 */
		// Start line: 5080
		// Start offset: 0x8001C420
		// Variables:
	// 		short cameraPlayerRotX; // $a1
	// 		short dist; // $s1
	// 		short tfaceFlag; // $s2

		/* begin block 1.1 */
			// Start line: 5102
			// Start offset: 0x8001C4A0
			// Variables:
		// 		struct _Normal normal; // stack offset -24
		// 		int mult; // $v1
		/* end block 1.1 */
		// End offset: 0x8001C580
		// End Line: 5128

		/* begin block 1.2 */
			// Start line: 5132
			// Start offset: 0x8001C58C
			// Variables:
		// 		int tmpsmooth; // $t0
		/* end block 1.2 */
		// End offset: 0x8001C5F8
		// End Line: 5147
	/* end block 1 */
	// End offset: 0x8001C688
	// End Line: 5173

	/* begin block 2 */
		// Start line: 11710
	/* end block 2 */
	// End Line: 11711

void CAMERA_UpdateFocusRotationX(Camera *camera,_Instance *focusInstance)

{
  short sVar1;
  undefined2 uVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int unaff_s0;
  short unaff_s1;
  int unaff_s2;
  int iStack00000010;
  undefined4 uStack00000014;
  
  if (in_v0 != 0) {
    iVar3 = FUN_80018488(&stack0x00000018,(int)*(short *)(unaff_s0 + 0x140));
    iVar3 = iVar3 * 10;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    sVar1 = (short)(iVar3 >> 4);
    *(short *)(unaff_s0 + 0x19e) = sVar1;
    uVar2 = 0xff00;
    if (sVar1 < -0x100) {
LAB_8001c47c:
      *(undefined2 *)(unaff_s0 + 0x19e) = uVar2;
    }
    else {
      if (0x100 < sVar1) {
        uVar2 = 0x100;
        goto LAB_8001c47c;
      }
    }
    if (0xb60 - (int)unaff_s1 < 0x200) {
      iVar3 = (int)*(short *)(unaff_s0 + 0x19e) * (0xb60 - (int)unaff_s1);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x1ff;
      }
      *(undefined2 *)(unaff_s0 + 0x19e) = (short)(iVar3 >> 9);
    }
    iStack00000010 = unaff_s0 + 0x146;
    uStack00000014 = 8;
    FUN_800175a0(1,unaff_s0 + 0xfe,(int)*(short *)(unaff_s0 + 0x19e),unaff_s0 + 0x144);
    unaff_s2 = 1;
  }
  if (unaff_s2 == 0) {
    uStack00000014 = 0x18;
    if ((*(uint *)(unaff_s0 + 0x49c) & 0x38) == 0) {
      *(undefined2 *)(unaff_s0 + 0x19e) = 0;
    }
    if (((*(uint *)(unaff_s0 + 0x49c) & 0x2000) != 0) &&
       (*(short *)(unaff_s0 + 0x4ac) < *(short *)(unaff_s0 + 0x4ba))) {
      *(undefined2 *)(unaff_s0 + 0x19e) = 0xfe80;
      uStack00000014 = 0xc;
    }
    iStack00000010 = unaff_s0 + 0x146;
    FUN_800175a0(1,unaff_s0 + 0xfe,(int)*(short *)(unaff_s0 + 0x19e),unaff_s0 + 0x144);
  }
  uVar4 = (uint)*(ushort *)(unaff_s0 + 0x48c) +
          (uint)*(ushort *)(unaff_s0 + 0x1b2) + (uint)*(ushort *)(unaff_s0 + 0xfe) & 0xfff;
  if (uVar4 - 0x301 < 0x4ff) {
    uVar4 = 0x300;
  }
  else {
    if (0x4ff < uVar4 - 0x800) goto LAB_8001c5a4;
    uVar4 = 0xfffffd00;
  }
  uVar4 = uVar4 & 0xfff;
LAB_8001c5a4:
  uVar5 = (ushort)uVar4;
  *(ushort *)(unaff_s0 + 0x1ba) = uVar5;
  if ((*(uint *)(unaff_s0 + 0x49c) & 0x2000000) != 0) {
    if (0x800 < uVar4) {
      uVar5 = uVar5 | 0xf000;
    }
    if (debugForgedAbilitiesMenu.type._2_2_ < (short)uVar5) {
      *(short *)(unaff_s0 + 0x1ba) = debugForgedAbilitiesMenu.type._2_2_ + 0x1000;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_FollowPlayerTilt(struct Camera *camera /*$s1*/, struct _Instance *focusInstance /*$a1*/)
 // line 5178, offset 0x8001c6a0
	/* begin block 1 */
		// Start line: 5179
		// Start offset: 0x8001C6A0
		// Variables:
	// 		int speed; // $s2
	// 		int mode; // $s3
	// 		long focusInstanceStatus; // $a0

		/* begin block 1.1 */
			// Start line: 5203
			// Start offset: 0x8001C724
			// Variables:
		// 		struct _SVector offset; // stack offset -40
		// 		struct _Normal normal; // stack offset -32

			/* begin block 1.1.1 */
				// Start line: 5227
				// Start offset: 0x8001C7DC
				// Variables:
			// 		int waterZ; // $v0
			// 		int target; // $v0
			// 		int height; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 5235
					// Start offset: 0x8001C81C
					// Variables:
				// 		int fdsq; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x8001C85C
				// End Line: 5243
			/* end block 1.1.1 */
			// End offset: 0x8001C85C
			// End Line: 5244
		/* end block 1.1 */
		// End offset: 0x8001C85C
		// End Line: 5245
	/* end block 1 */
	// End offset: 0x8001C85C
	// End Line: 5250

	/* begin block 2 */
		// Start line: 11914
	/* end block 2 */
	// End Line: 11915

void CAMERA_FollowPlayerTilt(Camera *camera,_Instance *focusInstance)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_s1;
  int iStack00000010;
  int iStack00000014;
  undefined2 uStack00000022;
  
  uStack00000022 = SUB42(camera,0);
  sVar1 = FUN_80018488(&stack0x00000020,(int)*(short *)(unaff_s1 + 0x1b6));
  *(short *)(unaff_s1 + 0x19e) = sVar1 + 0x400;
  sVar1 = *(short *)(unaff_s1 + 0x19e) + -0x80;
  *(short *)(unaff_s1 + 0x19e) = sVar1;
  iVar2 = FUN_80039bb0((int)sVar1,(int)*(short *)(unaff_s1 + 0xfe));
  if (iVar2 << 0x10 < 0) {
    sVar1 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x19e),(int)*(short *)(unaff_s1 + 0xfe));
    iVar2 = -(int)sVar1;
  }
  else {
    sVar1 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x19e),(int)*(short *)(unaff_s1 + 0xfe));
    iVar2 = (int)sVar1;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  sVar1 = (short)(iVar2 >> 4);
  if (0x20 < iVar2 >> 4) {
    sVar1 = 0x20;
  }
  iVar2 = FUN_80059340(*(undefined4 *)(*(int *)(unaff_s1 + 0x108) + 0x38));
  iVar4 = (int)*(short *)(unaff_s1 + 0x106);
  iVar5 = (int)*(short *)(unaff_s1 + 0x104) - (*(int *)(iVar2 + 0x38) + -0xa0);
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = -iVar5;
  }
  if (iVar2 < iVar4) {
    uVar3 = FUN_80039850(iVar4 * iVar4 - iVar5 * iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_800bd18c(iVar5,uVar3);
  }
  iStack00000010 = unaff_s1 + 0x146;
  iStack00000014 = (int)sVar1;
  FUN_800175a0();
  *(ushort *)(unaff_s1 + 0x1ba) = *(ushort *)(unaff_s1 + 0xfe) & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_FollowGoBehindPlayerWithTimer(struct Camera *camera /*$s0*/)
 // line 5259, offset 0x8001c8b0
	/* begin block 1 */
		// Start line: 5260
		// Start offset: 0x8001C8B0
		// Variables:
	// 		struct _Instance *focusInstance; // $s1
	/* end block 1 */
	// End offset: 0x8001C998
	// End Line: 5298

	/* begin block 2 */
		// Start line: 12087
	/* end block 2 */
	// End Line: 12088

void CAMERA_FollowGoBehindPlayerWithTimer(Camera *camera)

{
  int unaff_s0;
  int unaff_s1;
  int iStack00000010;
  undefined4 uStack00000014;
  
  FUN_80016cd8(unaff_s0 + 0x1c0,
               (int)(((uint)*(ushort *)(unaff_s1 + 0x78) + 0x800) * 0x10000) >> 0x10,0x20);
  iStack00000010 = unaff_s0 + 0x178;
  uStack00000014 = 0x20;
  FUN_800175a0(1,unaff_s0 + 0x140,(int)*(short *)(unaff_s0 + 0x1c0),unaff_s0 + 0x170);
  *(undefined2 *)(unaff_s0 + 0x408) = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_FollowGoBehindPlayer(struct Camera *camera /*$v1*/)
 // line 5301, offset 0x8001c9ac
	/* begin block 1 */
		// Start line: 5302
		// Start offset: 0x8001C9AC
		// Variables:
	// 		struct _Instance *focusInstance; // $v0
	/* end block 1 */
	// End offset: 0x8001C9AC
	// End Line: 5302

	/* begin block 2 */
		// Start line: 12179
	/* end block 2 */
	// End Line: 12180

void CAMERA_FollowGoBehindPlayer(Camera *camera)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int unaff_s0;
  int unaff_s1;
  int iStack00000010;
  undefined4 uStack00000014;
  
  iVar2 = FUN_80016310((int)(short)camera);
  if (unaff_s0 < 0x17) {
    if (*(int *)(unaff_s1 + 0x4a4) == 0) {
      *(undefined2 *)(unaff_s1 + 0x4c2) = 0;
    }
  }
  else {
    *(short *)(unaff_s1 + 0x4c2) = *(short *)(unaff_s1 + 0x4c2) + 1;
  }
  sVar4 = 0;
  if (unaff_s0 < 0x17) {
    uStack00000014 = 3;
  }
  else {
    iVar3 = (int)(short)iVar2;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    uStack00000014 = 3;
    if (iVar3 - 0x191U < 0x4af) {
      iVar3 = (int)*(short *)(unaff_s1 + 0x4c2);
      if (0x23 < iVar3) {
        iVar3 = (iVar3 + -0x23) * 3 + 0x23;
      }
      if (iVar2 << 0x10 < 1) {
        sVar4 = -(short)iVar3;
        if (iVar3 >= 0x50) {
          sVar4 = -0x50;
        }
      }
      else {
        sVar4 = 0x50;
        if (iVar3 < 0x50) {
          sVar4 = (short)iVar3;
        }
      }
      sVar1 = FUN_80016298((int)sVar4,(int)*(short *)(unaff_s1 + 0x4bc));
      uStack00000014 = 8;
      if (0x50 < sVar1) {
        uStack00000014 = 0xc;
      }
    }
  }
  iStack00000010 = unaff_s1 + 0x4c0;
  FUN_800175a0(1,unaff_s1 + 0x4bc,(int)sVar4,unaff_s1 + 0x4be);
  *(ushort *)(unaff_s1 + 0xb4) = *(short *)(unaff_s1 + 0xb4) + *(short *)(unaff_s1 + 0x4bc) & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalculateLead(struct Camera *camera /*$s1*/)
 // line 5313, offset 0x8001c9e8
	/* begin block 1 */
		// Start line: 5314
		// Start offset: 0x8001C9E8
		// Variables:
	// 		short lead_target; // $s0
	// 		short lead_smooth; // $v1

		/* begin block 1.1 */
			// Start line: 5320
			// Start offset: 0x8001CA34
			// Variables:
		// 		int speedxy; // $s0
		// 		short angle; // $a0

			/* begin block 1.1.1 */
				// Start line: 5332
				// Start offset: 0x8001CABC
				// Variables:
			// 		int calc; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8001CB2C
			// End Line: 5349
		/* end block 1.1 */
		// End offset: 0x8001CB34
		// End Line: 5354
	/* end block 1 */
	// End offset: 0x8001CB40
	// End Line: 5368

	/* begin block 2 */
		// Start line: 12203
	/* end block 2 */
	// End Line: 12204

void CAMERA_CalculateLead(Camera *camera)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int unaff_s0;
  int unaff_s1;
  int iStack00000010;
  undefined4 uStack00000014;
  
  *(undefined2 *)(unaff_s1 + 0x4c2) = 0;
  sVar3 = 0;
  if (unaff_s0 < 0x17) {
    uStack00000014 = 3;
  }
  else {
    iVar2 = (int)(short)camera;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    uStack00000014 = 3;
    if (iVar2 - 0x191U < 0x4af) {
      iVar2 = (int)*(short *)(unaff_s1 + 0x4c2);
      if (0x23 < iVar2) {
        iVar2 = (iVar2 + -0x23) * 3 + 0x23;
      }
      if ((int)camera << 0x10 < 1) {
        sVar3 = -(short)iVar2;
        if (iVar2 >= 0x50) {
          sVar3 = -0x50;
        }
      }
      else {
        sVar3 = 0x50;
        if (iVar2 < 0x50) {
          sVar3 = (short)iVar2;
        }
      }
      sVar1 = FUN_80016298((int)sVar3,(int)*(short *)(unaff_s1 + 0x4bc));
      uStack00000014 = 8;
      if (0x50 < sVar1) {
        uStack00000014 = 0xc;
      }
    }
  }
  iStack00000010 = unaff_s1 + 0x4c0;
  FUN_800175a0(1,unaff_s1 + 0x4bc,(int)sVar3,unaff_s1 + 0x4be);
  *(ushort *)(unaff_s1 + 0xb4) = *(short *)(unaff_s1 + 0xb4) + *(short *)(unaff_s1 + 0x4bc) & 0xfff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_CalcFollowPosition(struct Camera *camera /*$s1*/, struct _Rotation *rotation /*$s0*/)
 // line 5384, offset 0x8001cb90
	/* begin block 1 */
		// Start line: 5385
		// Start offset: 0x8001CB90
		// Variables:
	// 		struct _Instance *focusInstance; // $s2

		/* begin block 1.1 */
			// Start line: 5385
			// Start offset: 0x8001CB90
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _Rotation *_v0; // $v0
		/* end block 1.1 */
		// End offset: 0x8001CB90
		// End Line: 5385

		/* begin block 1.2 */
			// Start line: 5404
			// Start offset: 0x8001CC10
			// Variables:
		// 		short target_rotx; // $s0
		// 		int hypotXY; // $s3
		// 		int smooth; // $v1
		// 		int diff; // $a0
		// 		struct _Vector dpv; // stack offset -40
		// 		int zdiff; // $a0

			/* begin block 1.2.1 */
				// Start line: 5426
				// Start offset: 0x8001CCAC
				// Variables:
			// 		int velz; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 5437
					// Start offset: 0x8001CCC8
					// Variables:
				// 		int ground; // $a0
				// 		int pos; // $v1
				/* end block 1.2.1.1 */
				// End offset: 0x8001CD40
				// End Line: 5452
			/* end block 1.2.1 */
			// End offset: 0x8001CD40
			// End Line: 5452
		/* end block 1.2 */
		// End offset: 0x8001CE4C
		// End Line: 5500
	/* end block 1 */
	// End offset: 0x8001CE64
	// End Line: 5505

	/* begin block 2 */
		// Start line: 12347
	/* end block 2 */
	// End Line: 12348

void CAMERA_CalcFollowPosition(Camera *camera,_Rotation *rotation)

{
  undefined4 uVar1;
  undefined4 in_v1;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  int unaff_s1;
  int iStack00000018;
  int iStack0000001c;
  undefined4 uStack00000020;
  
  setCopReg(2,in_t1,in_v1);
  setCopReg(2,in_t2,(int)*(short *)(unaff_s1 + 0x4aa) - (int)*(short *)(unaff_s1 + 0x19a));
  setCopReg(2,in_t3,0);
  copFunction(2,0xa00428);
  iStack00000018 = getCopReg(2,0x19);
  iStack0000001c = getCopReg(2,0x1a);
  uStack00000020 = getCopReg(2,0x1b);
  uVar1 = FUN_80039850(iStack00000018 + iStack0000001c);
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c((int)*(short *)(unaff_s1 + 0x4ac) - (int)*(short *)(unaff_s1 + 0x19c),uVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_SetupColInfo(struct Camera *camera /*$a3*/, struct CameraCollisionInfo *colInfo /*$t0*/, struct _Position *targetCamPos /*$a2*/)
 // line 5509, offset 0x8001ce8c
	/* begin block 1 */
		// Start line: 5510
		// Start offset: 0x8001CE8C
		// Variables:
	// 		static short toggle; // offset 0x60

		/* begin block 1.1 */
			// Start line: 5515
			// Start offset: 0x8001CEA0
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x8001CEA0
		// End Line: 5515

		/* begin block 1.2 */
			// Start line: 5519
			// Start offset: 0x8001CEAC
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.2 */
		// End offset: 0x8001CECC
		// End Line: 5519

		/* begin block 1.3 */
			// Start line: 5521
			// Start offset: 0x8001CECC
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _Position *_v0; // $v1
		/* end block 1.3 */
		// End offset: 0x8001CECC
		// End Line: 5521
	/* end block 1 */
	// End offset: 0x8001CF44
	// End Line: 5542

	/* begin block 2 */
		// Start line: 12616
	/* end block 2 */
	// End Line: 12617

void CAMERA_SetupColInfo(Camera *camera,CameraCollisionInfo *colInfo,_Position *targetCamPos)

{
  int in_v0;
  
  if (in_v0 != 0) {
    uRam800cdf98 = 0;
    return;
  }
  uRam800cdf98 = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_DoPanicCheck(struct Camera *camera /*$s0*/, struct CameraCollisionInfo *tmpcolInfo /*$s1*/, struct _Rotation *rotation /*$s3*/, short *best_z /*$s4*/, short *max_dist /*stack 16*/)
 // line 5550, offset 0x8001cf4c
	/* begin block 1 */
		// Start line: 5551
		// Start offset: 0x8001CF4C
		// Variables:
	// 		struct _Position targetCamPos; // stack offset -32

		/* begin block 1.1 */
			// Start line: 5551
			// Start offset: 0x8001CF4C
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x8001CF4C
		// End Line: 5551
	/* end block 1 */
	// End offset: 0x8001CFFC
	// End Line: 5563

	/* begin block 2 */
		// Start line: 12701
	/* end block 2 */
	// End Line: 12702

void CAMERA_DoPanicCheck(Camera *camera,CameraCollisionInfo *tmpcolInfo,_Rotation *rotation,
                        short *best_z,short *max_dist)

{
  undefined2 in_v0;
  int unaff_s1;
  undefined2 *unaff_s2;
  undefined2 *unaff_s4;
  
  *unaff_s4 = in_v0;
  *unaff_s2 = *(undefined2 *)(unaff_s1 + 0x4c);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CAMERA_Panic(struct Camera *camera /*$s2*/, short min_dist /*$fp*/)
 // line 5565, offset 0x8001d01c
	/* begin block 1 */
		// Start line: 5566
		// Start offset: 0x8001D01C
		// Variables:
	// 		struct _Position targetCamPos; // stack offset -160
	// 		struct _Rotation rotation; // stack offset -152
	// 		int n; // $s1
	// 		short best_z; // stack offset -48
	// 		short max_dist; // stack offset -46
	// 		struct CameraCollisionInfo tmpcolInfo; // stack offset -144
	// 		short free_count1; // $s7
	// 		short free_count2; // $s6
	/* end block 1 */
	// End offset: 0x8001D19C
	// End Line: 5615

	/* begin block 2 */
		// Start line: 12739
	/* end block 2 */
	// End Line: 12740

void CAMERA_Panic(Camera *camera,short min_dist)

{
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s6;
  int unaff_s7;
  short unaff_s8;
  short sStack00000024;
  int in_stack_00000070;
  undefined2 in_stack_00000088;
  short in_stack_0000008a;
  
  while( true ) {
    sStack00000024 = *(short *)(unaff_s2 + 0x140) + (short)unaff_s1;
    FUN_8001ceb0();
    if ((in_stack_00000070 == 0) && (unaff_s7 = unaff_s7 + 1, 2 < unaff_s7 * 0x10000 >> 0x10))
    break;
    sStack00000024 = *(short *)(unaff_s2 + 0x140) - (short)unaff_s1;
    FUN_8001ceb0();
    iVar1 = unaff_s6 + 1;
    if (((in_stack_00000070 == 0) && (unaff_s6 = iVar1, 2 < iVar1 * 0x10000 >> 0x10)) ||
       (unaff_s1 = unaff_s1 + 0x80, 0x7ff < unaff_s1)) break;
  }
  if (in_stack_0000008a == unaff_s8) {
    panic_count = -0x7fff;
  }
  else {
    *(undefined2 *)(unaff_s2 + 0x4ae) = 1;
    *(undefined2 *)(unaff_s2 + 0xf6) = 3;
    *(undefined2 *)(unaff_s2 + 0x1c4) = 0xff90;
    *(undefined2 *)(unaff_s2 + 0x1b6) = in_stack_00000088;
    *(undefined2 *)(unaff_s2 + 0x1c0) = in_stack_00000088;
    *(undefined2 *)(unaff_s2 + 0x404) = in_stack_00000088;
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CAMERA_DoCameraCollision2(struct Camera *camera /*$s1*/, struct _Position *targetCamPos /*$v0*/, int simpleflag /*$s3*/)
 // line 5619, offset 0x8001d1cc
	/* begin block 1 */
		// Start line: 5620
		// Start offset: 0x8001D1CC
		// Variables:
	// 		int secondcheck_flag; // $s0
	// 		long hit; // $s2
	// 		struct CameraCollisionInfo colInfo; // stack offset -120
	// 		static long collisiontimeDown; // offset 0x64

		/* begin block 1.1 */
			// Start line: 5710
			// Start offset: 0x8001D40C
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x8001D40C
		// End Line: 5710

		/* begin block 1.2 */
			// Start line: 5766
			// Start offset: 0x8001D558
			// Variables:
		// 		int speed; // $s0
		/* end block 1.2 */
		// End offset: 0x8001D620
		// End Line: 5786

		/* begin block 1.3 */
			// Start line: 5816
			// Start offset: 0x8001D6A8
			// Variables:
		// 		int angle1; // $s0
		// 		int angle2; // $v0
		/* end block 1.3 */
		// End offset: 0x8001D754
		// End Line: 5832
	/* end block 1 */
	// End offset: 0x8001D7B4
	// End Line: 5871

	/* begin block 2 */
		// Start line: 12897
	/* end block 2 */
	// End Line: 12898

long CAMERA_DoCameraCollision2(Camera *camera,_Position *targetCamPos,int simpleflag)

{
  bool bVar1;
  short sVar2;
  uint in_v0;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int unaff_s0;
  int iVar6;
  int unaff_s1;
  long unaff_s2;
  int unaff_s3;
  uint in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  
  if (((((in_v0 & 0x2000000) != 0) && (0 < in_stack_00000058)) && (in_stack_0000005c < 600)) &&
     (((debugForgedAbilitiesMenu.upper._0_2_ = 0xffff, in_stack_00000058 != 1 ||
       ((in_stack_00000050 & 6) == 0)) &&
      (sVar2 = (short)debugForgedAbilitiesMenu.lower + 0x90,
      (short)debugForgedAbilitiesMenu.lower < 0x1000)))) {
    debugForgedAbilitiesMenu.lower._0_2_ = sVar2;
    if (0xfff < sVar2) {
      debugForgedAbilitiesMenu.lower._0_2_ = 0x1000;
    }
    if ((short)debugForgedAbilitiesMenu.lower < 0xf3c) {
      debugForgedAbilitiesMenu.upper._0_2_ = 0xffff;
      return 1;
    }
  }
  if ((((*(uint *)(unaff_s1 + 0xe8) & 0x12000) == 0) && (*(int *)(unaff_s1 + 0x4a0) == 0)) &&
     ((((unaff_s0 == 0 &&
        (((*(short *)(unaff_s1 + 0x4ae) == 0 && (*(short *)(unaff_s1 + 0x408) == 0)) &&
         (0 < in_stack_00000058)))) && ((in_stack_00000058 == 4 || (camera_still != 0)))) &&
      (in_stack_0000005c < 400)))) {
    panic_count = panic_count + 1;
    if ((loadStatus.currentDirLoading & 1U) == 0) {
      if (panic_count < 2) goto LAB_8001d358;
    }
    else {
      if (panic_count < 0xb) goto LAB_8001d358;
    }
    FUN_8001cf80();
  }
  else {
    panic_count = 0;
  }
LAB_8001d358:
  if ((*(int *)(unaff_s1 + 0x478) != 0) && (unaff_s0 != 0)) {
    *(undefined2 *)(unaff_s1 + 0x1cc) = *(undefined2 *)(unaff_s1 + 0x1aa);
    *(undefined2 *)(unaff_s1 + 0x1ce) = *(undefined2 *)(unaff_s1 + 0x1ac);
    *(undefined2 *)(unaff_s1 + 0x1d0) = *(undefined2 *)(unaff_s1 + 0x1ae);
    uVar3 = FUN_8001794c();
    *(undefined4 *)(unaff_s1 + 0x478) = uVar3;
  }
  if (unaff_s3 == 0) {
    if (0 < iRam800cdf9c) {
      iRam800cdf9c = iRam800cdf9c + -1;
    }
    if (*(short *)(unaff_s1 + 0x4ae) != 0) {
      in_stack_00000058 = 4;
    }
    if ((*(uint *)(unaff_s1 + 0xe8) & 0x10000) == 0) {
      if (((*(uint *)(unaff_s1 + 0x49c) & 0x24000000) == 0) &&
         ((((*(uint *)(unaff_s1 + 0xe8) & 0x2000) == 0 ||
           ((*(uint *)(unaff_s1 + 0x49c) & 0x2000000) != 0)) && (*(short *)(unaff_s1 + 0x4ae) == 0))
         )) {
        if (*(int *)(unaff_s1 + 0x478) != 0) {
          lVar5 = FUN_800194b4();
          iRam800cdf9c = 0x1e;
          *(undefined2 *)(unaff_s1 + 0x1b6) = *(undefined2 *)(unaff_s1 + 0x1c0);
          return lVar5;
        }
        FUN_80018f04(0);
        if ((*(short *)(unaff_s1 + 0xf0) == 0xd) && (0 < *(int *)(unaff_s1 + 0x4a0))) {
          sVar2 = FUN_80016298((int)*(short *)(unaff_s1 + 0x1c0),(int)*(short *)(unaff_s1 + 0x140));
          if (sVar2 < 5) {
            bVar1 = iRam800cdf9c == 0;
            *(undefined2 *)(unaff_s1 + 0x1c0) = *(undefined2 *)(unaff_s1 + 0x1b6);
            if (bVar1) {
              *(undefined2 *)(unaff_s1 + 0x494) = 0;
            }
          }
          else {
            sVar2 = FUN_80016310((int)*(short *)(unaff_s1 + 0x1c0),(int)*(short *)(unaff_s1 + 0x140)
                                );
            iVar6 = (int)sVar2;
            sVar2 = FUN_80016310((int)*(short *)(unaff_s1 + 0x1b6),(int)*(short *)(unaff_s1 + 0x140)
                                );
            iVar4 = (int)sVar2;
            if (((iVar6 < 0) && (iVar4 < 0)) || ((0 < iVar6 && (0 < iVar4)))) {
              if (iVar4 < 0) {
                iVar4 = -iVar4;
              }
              if (iVar6 < 0) {
                iVar6 = -iVar6;
              }
              if (iVar6 < iVar4) {
                *(undefined2 *)(unaff_s1 + 0x1c0) = *(undefined2 *)(unaff_s1 + 0x1b6);
              }
            }
          }
        }
        else {
          if (iRam800cdf9c == 0) {
            FUN_80016cd8(unaff_s1 + 0x1c0,(int)*(short *)(unaff_s1 + 0x1b6),0x40);
            *(undefined2 *)(unaff_s1 + 0x494) = 0;
          }
        }
        if ((*(uint *)(unaff_s1 + 0x49c) & 0x2000000) == 0) {
          *(undefined2 *)(unaff_s1 + 0x1b0) = *(undefined2 *)(unaff_s1 + 0x1a8);
          return unaff_s2;
        }
        iRam800cdf9c = 0;
        *(undefined2 *)(unaff_s1 + 0x1b0) = (undefined2)debugForgedAbilitiesMenu.type;
        return unaff_s2;
      }
    }
    if (*(int *)(unaff_s1 + 0x478) == 0) {
      *(undefined2 *)(unaff_s1 + 0x1b0) = *(undefined2 *)(unaff_s1 + 0x1a8);
    }
    else {
      unaff_s2 = FUN_800194b4();
      iRam800cdf9c = 0x1e;
    }
    if ((*(uint *)(unaff_s1 + 0xe8) & 0x10000) == 0) {
      FUN_80016cd8(unaff_s1 + 0x1c0,(int)*(short *)(unaff_s1 + 0x1b6),0x40);
      return unaff_s2;
    }
    iVar4 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x1c0),(int)*(short *)(unaff_s1 + 0x1b6));
    if (iVar4 << 0x10 < 0) {
      sVar2 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x1c0),(int)*(short *)(unaff_s1 + 0x1b6));
      iVar4 = -(int)sVar2;
    }
    else {
      sVar2 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x1c0),(int)*(short *)(unaff_s1 + 0x1b6));
      iVar4 = (int)sVar2;
    }
    if ((in_stack_00000050 & 6) == 0) {
      FUN_80018f04(0);
    }
    if ((iVar4 < 0x400) || ((in_stack_00000050 & 6) != 0)) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar4 = iVar4 >> 4;
      sVar2 = (short)iVar4;
      if (iVar4 < 8) {
        sVar2 = 8;
      }
      if (0x20 < iVar4) {
        sVar2 = 0x20;
      }
    }
    else {
      sVar2 = 0x40;
    }
    FUN_80016cd8(unaff_s1 + 0x1c0,(int)*(short *)(unaff_s1 + 0x1b6),(int)sVar2);
    return unaff_s2;
  }
  if (*(int *)(unaff_s1 + 0x478) == 0) {
    return 0;
  }
  sVar2 = *(short *)(unaff_s1 + 0xf0);
  if (((sVar2 != 4) && (sVar2 != 2)) && (sVar2 != 6)) {
    return 1;
  }
  *(undefined2 *)(unaff_s1 + 0x1b0) = *(undefined2 *)(&stack0x00000044 + in_stack_00000054 * 2);
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CAMERA_FocusInstanceMoved(struct Camera *camera /*$a0*/)
 // line 5876, offset 0x8001d7d0
	/* begin block 1 */
		// Start line: 13451
	/* end block 1 */
	// End Line: 13452

	/* begin block 2 */
		// Start line: 13452
	/* end block 2 */
	// End Line: 13453

int CAMERA_FocusInstanceMoved(Camera *camera)

{
  FUN_80016b60();
  return 1;
}





