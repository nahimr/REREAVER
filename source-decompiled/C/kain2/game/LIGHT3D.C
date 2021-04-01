#include "THISDUST.H"
#include "LIGHT3D.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_GetLightMatrix(struct _Instance *instance /*$a0*/, struct Level *level /*$a1*/, struct MATRIX *lightM /*$a2*/, struct MATRIX *colorM /*$a3*/)
 // line 70, offset 0x80035824
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x80035824
		// Variables:
	// 		struct MATRIX *lightGroup; // $t0
	// 		struct LightList *lightList; // $v1
	// 		int lightGrp; // $t1

		/* begin block 1.1 */
			// Start line: 120
			// Start offset: 0x800358F4
			// Variables:
		// 		struct MATRIX *tlightGroup; // $t2
		// 		struct LightList *tlightList; // $t3
		// 		int tlightGrp; // $t1
		// 		struct MATRIX *start; // $t4
		// 		struct MATRIX *end; // $t3
		// 		int i; // $t1
		// 		int j; // $a2
		// 		long ratio; // $t2
		/* end block 1.1 */
		// End offset: 0x80035AB8
		// End Line: 186
	/* end block 1 */
	// End offset: 0x80035B90
	// End Line: 195

	/* begin block 2 */
		// Start line: 140
	/* end block 2 */
	// End Line: 141

	/* begin block 3 */
		// Start line: 141
	/* end block 3 */
	// End Line: 142

	/* begin block 4 */
		// Start line: 145
	/* end block 4 */
	// End Line: 146

void LIGHT_GetLightMatrix(_Instance *instance,Level *level,MATRIX *lightM,MATRIX *colorM)

{
  ushort uVar1;
  LightGroup *pLVar2;
  LightGroup *pLVar3;
  int iVar4;
  ushort *puVar5;
  LightList *in_v1;
  short *psVar6;
  int iVar7;
  int iVar8;
  LightGroup *in_t0;
  int iVar9;
  int in_t1;
  uint uVar10;
  int iVar11;
  LightList *in_t3;
  
  pLVar2 = level->razielLightGroup;
  if (pLVar2 == (LightGroup *)0x0) {
    in_v1 = level->lightList;
    pLVar2 = in_t0;
  }
  if (pLVar2 == (LightGroup *)0x0) {
    if ((in_v1->numLightGroups == 0) || (in_v1->numLightGroups <= in_t1)) {
      pLVar2 = &default_lightgroup;
    }
    else {
      pLVar2 = in_v1->lightGroupList + in_t1;
    }
  }
  if ((short)loadStatus.decompressLen == 1000) {
    lightM->m[0] = (pLVar2->lightMatrix).m[0];
    lightM->m[1] = (pLVar2->lightMatrix).m[1];
    lightM->m[2] = (pLVar2->lightMatrix).m[2];
    lightM->m[3] = (pLVar2->lightMatrix).m[3];
    lightM->m[4] = (pLVar2->lightMatrix).m[4];
    lightM->m[5] = (pLVar2->lightMatrix).m[5];
    lightM->m[6] = (pLVar2->lightMatrix).m[6];
    lightM->m[7] = (pLVar2->lightMatrix).m[7];
    lightM->m[8] = (pLVar2->lightMatrix).m[8];
    colorM->m[0] = (pLVar2->colorMatrix).m[0];
    colorM->m[1] = (pLVar2->colorMatrix).m[1];
    colorM->m[2] = (pLVar2->colorMatrix).m[2];
    colorM->m[3] = (pLVar2->colorMatrix).m[3];
    colorM->m[4] = (pLVar2->colorMatrix).m[4];
    colorM->m[5] = (pLVar2->colorMatrix).m[5];
    colorM->m[6] = (pLVar2->colorMatrix).m[6];
    colorM->m[7] = (pLVar2->colorMatrix).m[7];
    colorM->m[8] = (pLVar2->colorMatrix).m[8];
    return;
  }
  uVar10 = (uint)instance->lightGroup;
  if (loadStatus.decompressLen._2_2_ == 0) {
    if ((instance == (_Instance *)loadStatus.bigFile.searchDirID) &&
       (pLVar3 = level->razielSpectralLightGroup, pLVar3 != (LightGroup *)0x0)) goto LAB_80035914;
    in_t3 = level->spectrallightList;
    if ((in_t3 != (LightList *)0x0) && (in_t3->numLightGroups != 0)) {
      uVar10 = (uint)instance->spectralLightGroup;
      pLVar3 = (LightGroup *)0x0;
      goto LAB_80035914;
    }
  }
  else {
    if ((instance == (_Instance *)loadStatus.bigFile.searchDirID) &&
       (pLVar3 = level->razielLightGroup, pLVar3 != (LightGroup *)0x0)) goto LAB_80035914;
  }
  in_t3 = level->lightList;
  pLVar3 = (LightGroup *)0x0;
LAB_80035914:
  if (pLVar3 == (LightGroup *)0x0) {
    if ((in_t3->numLightGroups == 0) || (in_t3->numLightGroups <= (int)uVar10)) {
      pLVar3 = &default_lightgroup;
    }
    else {
      pLVar3 = in_t3->lightGroupList + uVar10;
    }
  }
  lightM->m[0] = (pLVar2->lightMatrix).m[0];
  lightM->m[1] = (pLVar2->lightMatrix).m[1];
  lightM->m[2] = (pLVar2->lightMatrix).m[2];
  lightM->m[3] = (pLVar2->lightMatrix).m[3];
  lightM->m[4] = (pLVar2->lightMatrix).m[4];
  lightM->m[5] = (pLVar2->lightMatrix).m[5];
  lightM->m[6] = (pLVar2->lightMatrix).m[6];
  lightM->m[7] = (pLVar2->lightMatrix).m[7];
  lightM->m[8] = (pLVar2->lightMatrix).m[8];
  iVar4 = (int)(short)loadStatus.decompressLen;
  iVar11 = 0;
  iVar9 = 0;
  do {
    iVar8 = 0;
    iVar7 = iVar9;
    do {
      puVar5 = (ushort *)((int)(pLVar2->colorMatrix).m + iVar7);
      uVar1 = *(ushort *)((int)(pLVar3->colorMatrix).m + iVar7);
      psVar6 = (short *)((int)colorM->m + iVar7);
      iVar7 = iVar7 + 2;
      iVar8 = iVar8 + 1;
      *psVar6 = uVar1 + (short)(((int)(((uint)*puVar5 - (uint)uVar1) * 0x10000) >> 0x10) *
                                (0x1000 - (iVar4 << 0xc) / 1000) >> 0xc);
    } while (iVar8 < 3);
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 6;
  } while (iVar11 < 3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_PresetInstanceLight(struct _Instance *instance /*$s0*/, short attenuate /*$a1*/, struct MATRIX *lm /*$s1*/)
 // line 200, offset 0x80035b98
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x80035B98
		// Variables:
	// 		struct MATRIX cm; // stack offset -80
	// 		long scale; // $a0
	// 		long scaleRGB[3]; // stack offset -48
	// 		int i; // $t3
	// 		int j; // $a3
	// 		struct Level *level; // $s2
	// 		short tempRGB[3]; // stack offset -32

		/* begin block 1.1 */
			// Start line: 254
			// Start offset: 0x80035C34
			// Variables:
		// 		short *todRGB; // $v0

			/* begin block 1.1.1 */
				// Start line: 271
				// Start offset: 0x80035C68
			/* end block 1.1.1 */
			// End offset: 0x80035CD8
			// End Line: 277
		/* end block 1.1 */
		// End offset: 0x80035CF0
		// End Line: 278
	/* end block 1 */
	// End offset: 0x80035CF0
	// End Line: 281

	/* begin block 2 */
		// Start line: 428
	/* end block 2 */
	// End Line: 429

void LIGHT_PresetInstanceLight(_Instance *instance,short attenuate,MATRIX *lm)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  _Instance *p_Stack00000030;
  _Instance *p_Stack00000034;
  _Instance *p_Stack00000038;
  
  psVar2 = (short *)&stack0x00000040;
  if ((*(uint *)(unaff_s0 + 0x14) & 0x200000) != 0) {
    instance = (_Instance *)&DAT_00000800;
  }
  if ((int)unaff_s3 != 0x1000) {
    instance = (_Instance *)((int)instance * (int)unaff_s3 >> 0xc);
  }
  if (unaff_s2 != 0) {
    psVar2 = (short *)(unaff_s2 + 0x170);
  }
  iVar10 = 0;
  iVar9 = 0;
  piVar8 = (int *)&stack0x00000030;
  do {
    sVar1 = *psVar2;
    iVar3 = *piVar8;
    iVar7 = 0;
    iVar6 = iVar9;
    do {
      iVar5 = (int)*(short *)(&stack0x00000010 + iVar6) * (iVar3 * (int)sVar1 * 0x10 >> 0x10) >> 0xc
      ;
      sVar4 = (short)iVar5;
      if (iVar5 < -0x8000) {
        sVar4 = -0x8000;
      }
      if (0x7fff < iVar5) {
        sVar4 = 0x7fff;
      }
      *(short *)(&stack0x00000010 + iVar6) = sVar4;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 2;
    } while (iVar7 < 3);
    iVar9 = iVar9 + 6;
    piVar8 = piVar8 + 1;
    iVar10 = iVar10 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar10 < 3);
  p_Stack00000030 = instance;
  p_Stack00000034 = instance;
  p_Stack00000038 = instance;
  FUN_800be3c0(&stack0x00000010);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_GetAmbient(struct _ColorType *color /*$a0*/, struct _Instance *instance /*$a1*/)
 // line 290, offset 0x80035d14
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x80035D14
		// Variables:
	// 		int lightval; // $v1
	/* end block 1 */
	// End offset: 0x80035D34
	// End Line: 333

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

	/* begin block 3 */
		// Start line: 649
	/* end block 3 */
	// End Line: 650

	/* begin block 4 */
		// Start line: 688
	/* end block 4 */
	// End Line: 689

void LIGHT_GetAmbient(_ColorType *color,_Instance *instance)

{
  short sVar1;
  uint in_v0;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_a2;
  int iVar6;
  int in_t2;
  long *plVar7;
  long *plVar8;
  int unaff_s8;
  int iStack00000010;
  byte in_stack_00000018;
  byte in_stack_00000019;
  byte in_stack_0000001a;
  short in_stack_00000030;
  short in_stack_00000032;
  short in_stack_00000034;
  
  if ((((in_v0 & 0x400000) == 0) && (in_t2 != 0)) && (*(short *)(unaff_s8 + 0xee) == 0)) {
    iVar3 = *(int *)(in_a2 + 0x48) + *(int *)(unaff_s8 + 0xc4) * 0x24;
    in_stack_00000030 = *(short *)(unaff_s8 + 0x5c) - *(short *)(iVar3 + 0xc);
    in_stack_00000032 = *(short *)(unaff_s8 + 0x5e) - *(short *)(iVar3 + 0xe);
    in_stack_00000034 = *(short *)(unaff_s8 + 0x108) - *(short *)(iVar3 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_8001e6b4((int)*(short *)(in_t2 + 8),*(undefined4 *)(in_a2 + 0x24),&stack0x00000038,
                 *(undefined4 *)(in_a2 + 0x1c));
  }
  FUN_80035cac(&stack0x00000018);
  plVar8 = (long *)0x0;
  iVar3 = 0x7fff;
  plVar7 = &loadStatus.checksum;
  iVar6 = 0;
  do {
    iVar4 = *plVar7;
    if (((iVar4 != 0) && (iVar4 != unaff_s8)) && (*(int *)(iVar4 + 0x40) != 0)) {
      iVar5 = *(int *)(iVar4 + 0x40) + (uint)*(byte *)((int)plVar7 + 0x12) * 0x20;
      iVar4 = (int)(((uint)*(ushort *)(iVar5 + 0x14) - (uint)*(ushort *)(unaff_s8 + 0x5c)) * 0x10000
                   ) >> 0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      in_stack_00000030 = (short)iVar4;
      iVar2 = (int)(((uint)*(ushort *)(iVar5 + 0x18) - (uint)*(ushort *)(unaff_s8 + 0x5e)) * 0x10000
                   ) >> 0x10;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      in_stack_00000032 = (short)iVar2;
      iVar5 = (int)(((uint)*(ushort *)(iVar5 + 0x1c) - (uint)*(ushort *)(unaff_s8 + 0x60)) * 0x10000
                   ) >> 0x10;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      in_stack_00000034 = (short)iVar5;
      if (iVar5 << 0x10 < iVar2 << 0x10) {
        iVar5 = iVar2;
      }
      sVar1 = (short)iVar5;
      if (iVar5 << 0x10 < iVar4 << 0x10) {
        sVar1 = in_stack_00000030;
      }
      iVar4 = (int)sVar1;
      if ((iVar4 < (int)*(short *)(plVar7 + 4)) && (iVar4 < iVar3)) {
        iVar3 = iVar4;
        plVar8 = plVar7;
      }
    }
    iVar6 = iVar6 + 1;
    plVar7 = plVar7 + 5;
  } while (iVar6 < 1);
  if (plVar8 != (long *)0x0) {
    iVar3 = (int)*(short *)(plVar8 + 4) - iVar3;
    iVar6 = (uint)in_stack_00000018 + (iVar3 * plVar8[1] >> 0xc);
    in_stack_00000018 = (byte)iVar6;
    if (iVar6 < 0) {
      in_stack_00000018 = 0;
    }
    if (0xff < iVar6) {
      in_stack_00000018 = 0xff;
    }
    iVar6 = (uint)in_stack_00000019 + (iVar3 * plVar8[2] >> 0xc);
    in_stack_00000019 = (byte)iVar6;
    if (iVar6 < 0) {
      in_stack_00000019 = 0;
    }
    if (0xff < iVar6) {
      in_stack_00000019 = 0xff;
    }
    iVar3 = (uint)in_stack_0000001a + (iVar3 * plVar8[3] >> 0xc);
    in_stack_0000001a = (byte)iVar3;
    if (iVar3 < 0) {
      in_stack_0000001a = 0;
    }
    if (0xff < iVar3) {
      in_stack_0000001a = 0xff;
    }
  }
  iStack00000010 = unaff_s8 + 0x260;
  FUN_800bd394(&stack0x00000018,iStack00000010,0x100,0xf00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_CalcLightValue(struct _TFace *tface /*$t2*/, struct _Instance *instance /*$fp*/, struct _Terrain *terrain /*$t3*/)
 // line 336, offset 0x80035d44
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x80035D44
		// Variables:
	// 		struct _ColorType color; // stack offset -88
	// 		short fadespeed; // $a2

		/* begin block 1.1 */
			// Start line: 348
			// Start offset: 0x80035DA4
			// Variables:
		// 		struct _ColorType color1; // stack offset -80
		// 		struct _ColorType color2; // stack offset -72
		// 		long n; // $v1
		// 		long count; // $a0
		// 		long edge; // $a2
		// 		int x1; // $v1
		// 		int x2; // $a0
		// 		int interp1; // $s3
		// 		int interp2; // $s2
		// 		int interp; // $a3
		// 		short *temp; // $v0
		// 		short *vertex0; // $s6
		// 		short *vertex1; // $s5
		// 		short *vertex2; // $s4
		// 		short position[3]; // stack offset -64
		// 		struct _SVector normal; // stack offset -56
		// 		struct BSPTree *bsp; // $a1
		// 		int major; // $a3
		// 		int minor; // $s7

			/* begin block 1.1.1 */
				// Start line: 457
				// Start offset: 0x80036194
				// Variables:
			// 		long r; // $v0
			// 		long g; // $a1
			// 		long b; // $v1
			// 		int lum; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80036244
			// End Line: 478
		/* end block 1.1 */
		// End offset: 0x80036244
		// End Line: 478

		/* begin block 1.2 */
			// Start line: 493
			// Start offset: 0x80036264
			// Variables:
		// 		int i; // $t0
		// 		struct LightInstance *li; // $t4
		// 		long dist; // $t3
		// 		struct LightInstance *tli; // $t2

			/* begin block 1.2.1 */
				// Start line: 500
				// Start offset: 0x80036274
				// Variables:
			// 		struct _Instance *inst; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 503
					// Start offset: 0x8003629C
					// Variables:
				// 		short tdist; // $a3
				// 		struct _Position pos; // stack offset -64
				// 		struct MATRIX *mat; // $a1
				/* end block 1.2.1.1 */
				// End offset: 0x80036384
				// End Line: 520
			/* end block 1.2.1 */
			// End offset: 0x80036384
			// End Line: 521
		/* end block 1.2 */
		// End offset: 0x80036450
		// End Line: 545
	/* end block 1 */
	// End offset: 0x80036468
	// End Line: 553

	/* begin block 2 */
		// Start line: 740
	/* end block 2 */
	// End Line: 741

void LIGHT_CalcLightValue(_TFace *tface,_Instance *instance,_Terrain *terrain)

{
  int in_v1;
  NodeType *pNVar1;
  int in_t2;
  int in_t3;
  int unaff_s8;
  short sStack00000030;
  short sStack00000032;
  short sStack00000034;
  
  pNVar1 = (NodeType *)((int)&instance->node + in_v1 * 0x24);
  sStack00000030 = *(short *)(unaff_s8 + 0x5c) - *(short *)&pNVar1[1].next;
  sStack00000032 = *(short *)(unaff_s8 + 0x5e) - *(short *)((int)&pNVar1[1].next + 2);
  sStack00000034 = *(short *)(unaff_s8 + 0x108) - *(short *)&pNVar1[2].prev;
                    /* WARNING: Subroutine does not return */
  FUN_8001e6b4((int)*(short *)(in_t2 + 8),*(undefined4 *)(in_t3 + 0x24),terrain,
               *(undefined4 *)(in_t3 + 0x1c));
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_SetAmbientInstance(struct _Instance *instance /*$v0*/, struct Level *level /*$a1*/)
 // line 555, offset 0x80036498
	/* begin block 1 */
		// Start line: 556
		// Start offset: 0x80036498
	/* end block 1 */
	// End offset: 0x80036498
	// End Line: 556

	/* begin block 2 */
		// Start line: 1247
	/* end block 2 */
	// End Line: 1248

void LIGHT_SetAmbientInstance(_Instance *instance,Level *level)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if ((in_v0 == 0) || (*(int *)(in_v0 + 4) == 0)) {
    if ((level->lightList != (LightList *)0x0) && (level->lightList->numLightGroups < in_v1)) {
      *(undefined *)(unaff_s0 + 0x62) = 0;
    }
  }
  else {
    if (*(int *)(in_v0 + 4) < (int)(uint)*(byte *)(unaff_s0 + 0x6a)) {
      *(undefined *)(unaff_s0 + 0x6a) = 0;
    }
  }
  FUN_80036430();
  if ((*(short *)(unaff_s0 + 0xee) == 0) && ((*(uint *)(unaff_s0 + 0x14) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    rm_1(unaff_s0 + 0x74,&stack0x00000010);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_SetMatrixForLightGroupInstance(struct _Instance *instance /*$s0*/, struct Level *level /*$a1*/)
 // line 569, offset 0x800364c8
	/* begin block 1 */
		// Start line: 570
		// Start offset: 0x800364C8
		// Variables:
	// 		struct MATRIX lgt_cat; // stack offset -40
	// 		struct LightList *lightList; // $v0
	// 		int lightGrp; // $v1
	/* end block 1 */
	// End offset: 0x80036634
	// End Line: 682

	/* begin block 2 */
		// Start line: 1275
	/* end block 2 */
	// End Line: 1276

void LIGHT_SetMatrixForLightGroupInstance(_Instance *instance,Level *level)

{
  int in_v1;
  int unaff_s0;
  
  *(undefined *)(unaff_s0 + 0x6a) = 0;
  if ((level->lightList != (LightList *)0x0) && (level->lightList->numLightGroups < in_v1)) {
    *(undefined *)(unaff_s0 + 0x62) = 0;
  }
  FUN_80036430();
  if ((*(short *)(unaff_s0 + 0xee) == 0) && ((*(uint *)(unaff_s0 + 0x14) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    rm_1(unaff_s0 + 0x74,&stack0x00000010);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_DrawShadow(struct MATRIX *wcTransform /*$s2*/, struct _Instance *instance /*$s1*/, struct _PrimPool *primPool /*$s3*/, unsigned long **ot /*$s4*/)
 // line 730, offset 0x80036644
	/* begin block 1 */
		// Start line: 731
		// Start offset: 0x80036644
		// Variables:
	// 		struct SVECTOR face_orient; // stack offset -112
	// 		struct MATRIX rot; // stack offset -104
	// 		struct MATRIX scTransform; // stack offset -72
	// 		struct _Vector scale; // stack offset -40
	// 		struct _Instance *playerInstance; // $s0
	/* end block 1 */
	// End offset: 0x80036908
	// End Line: 804

	/* begin block 2 */
		// Start line: 1460
	/* end block 2 */
	// End Line: 1461

void LIGHT_DrawShadow(MATRIX *wcTransform,_Instance *instance,_PrimPool *primPool,ulong **ot)

{
  undefined4 uVar1;
  int unaff_s1;
  int in_lo;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  
  uVar1 = FUN_80039850(0x1000000 - in_lo);
  uStack00000012 = FUN_80039654((int)*(short *)(unaff_s1 + 0xd8),uVar1);
  uStack00000014 = *(undefined2 *)(unaff_s1 + 0x78);
                    /* WARNING: Subroutine does not return */
  rm_1(&stack0x00000010,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_CalcShadowPositions(struct GameTracker *gameTracker /*$a0*/)
 // line 806, offset 0x80036928
	/* begin block 1 */
		// Start line: 807
		// Start offset: 0x80036928
		// Variables:
	// 		struct _InstanceList *instanceList; // $v0
	// 		struct _Instance *instance; // $s0
	// 		struct _PCollideInfo pcollideInfo; // stack offset -72
	// 		struct _Position newPos; // stack offset -24
	// 		struct _Position oldPos; // stack offset -16
	// 		struct Level *level; // $v0
	/* end block 1 */
	// End offset: 0x80036C18
	// End Line: 910

	/* begin block 2 */
		// Start line: 1734
	/* end block 2 */
	// End Line: 1735

void LIGHT_CalcShadowPositions(GameTracker *gameTracker)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint in_v0;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_s0;
  short in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined *puStack00000024;
  undefined *puStack00000028;
  undefined4 uStack00000034;
  int iStack00000038;
  undefined4 uStack00000040;
  short sStack00000044;
  undefined4 uStack00000048;
  short sStack0000004c;
  
code_r0x80036928:
  if (((uint)gameTracker & in_v0) == 0) {
    uStack00000040 = *(undefined4 *)(unaff_s0 + 0x5c);
    sStack00000044 = *(short *)(unaff_s0 + 0x60);
    uStack00000048 = *(undefined4 *)(unaff_s0 + 0x5c);
    sStack0000004c = *(short *)(unaff_s0 + 0x60);
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(unaff_s0 + 0x40) + 0x34);
    uVar2 = *(undefined2 *)(*(int *)(unaff_s0 + 0x40) + 0x38);
    uStack00000040 = CONCAT22(uVar2,uVar1);
    uStack00000048 = CONCAT22(uVar2,uVar1);
    sStack00000044 = *(short *)(*(int *)(unaff_s0 + 0x40) + 0x3c);
    sStack0000004c = sStack00000044;
  }
  uStack00000034 = 0x37;
  puStack00000024 = &stack0x00000040;
  puStack00000028 = &stack0x00000048;
  sStack00000044 = sStack00000044 + -0x500;
  sStack0000004c = sStack0000004c + 0x100;
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0x40;
  iStack00000038 = unaff_s0;
  iVar3 = FUN_80059340(*(undefined4 *)(unaff_s0 + 0x38));
  if (iVar3 == 0) {
    in_stack_00000010 = 0;
  }
  else {
    FUN_800207c8(&stack0x00000010,iVar3);
  }
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) & 0xffffffbf;
  if (in_stack_00000010 == 3) {
    iVar5 = *in_stack_00000018;
    iVar3 = in_stack_00000014;
  }
  else {
    iVar3 = 0;
    if (in_stack_00000010 == 5) goto LAB_80036a60;
    iVar5 = 0;
  }
  FUN_80035cdc(iVar3,unaff_s0,iVar5);
LAB_80036a60:
  if (in_stack_00000010 != 0) {
    if (in_stack_00000010 == 1) {
      *(undefined2 *)(unaff_s0 + 0xd8) = 0;
      *(undefined2 *)(unaff_s0 + 0xda) = 0;
      *(undefined2 *)(unaff_s0 + 0xdc) = 0x1000;
    }
    else {
      if (((in_stack_00000010 == 3) && (*(ushort *)(in_stack_00000014 + 10) != 0xffff)) &&
         ((*(ushort *)
            (*(int *)(*in_stack_00000018 + 0x34) + (uint)*(ushort *)(in_stack_00000014 + 10) + 10) &
          0x4000) != 0)) {
        uVar4 = *(uint *)(unaff_s0 + 0x14) | 0x200000;
      }
      else {
        uVar4 = *(uint *)(unaff_s0 + 0x14) & 0xffdfffff;
      }
      *(uint *)(unaff_s0 + 0x14) = uVar4;
      *(undefined2 *)(unaff_s0 + 0xd8) = in_stack_0000001c;
      *(undefined2 *)(unaff_s0 + 0xda) = in_stack_0000001e;
      *(undefined2 *)(unaff_s0 + 0xdc) = in_stack_00000020;
    }
  }
  *(undefined4 *)(unaff_s0 + 0x104) = uStack00000040;
  *(short *)(unaff_s0 + 0x108) = sStack00000044;
LAB_80036b90:
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) & 0xf7ffffff;
  unaff_s0 = *(int *)(unaff_s0 + 8);
  if (unaff_s0 == 0) {
    return;
  }
  if ((*(uint *)(unaff_s0 + 0x18) & 0x40) == 0) goto LAB_80036b6c;
  gameTracker = *(GameTracker **)(unaff_s0 + 0x14);
  if ((((uint)gameTracker & 0xa00) != 0x200) || ((*(uint *)(unaff_s0 + 0x18) & 0x4000000) != 0))
  goto LAB_80036b58;
  in_v0 = 0x10000000;
  if (((uint)gameTracker & 0x18000000) == 0x8000000) {
    iVar3 = *(int *)(unaff_s0 + 0x10c);
    if (iVar3 == 0) goto LAB_80036b6c;
    uVar6 = *(undefined4 *)(unaff_s0 + 0x114);
    goto LAB_80036b84;
  }
  goto code_r0x80036928;
LAB_80036b58:
  if ((*(uint *)(unaff_s0 + 0x18) & 0x40) == 0) {
LAB_80036b6c:
    if (*(undefined4 **)(unaff_s0 + 0xbc) != (undefined4 *)0x0) {
      iVar3 = *(int *)(unaff_s0 + 0xb4);
      uVar6 = **(undefined4 **)(unaff_s0 + 0xbc);
LAB_80036b84:
      FUN_80035cdc(iVar3,unaff_s0,uVar6);
    }
  }
  goto LAB_80036b90;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_Restore(struct LightInfo *lightInfo /*$a0*/)
 // line 1361, offset 0x80036c28
	/* begin block 1 */
		// Start line: 2722
	/* end block 1 */
	// End Line: 2723

	/* begin block 2 */
		// Start line: 2405
	/* end block 2 */
	// End Line: 2406

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LIGHT_Restore(LightInfo *lightInfo)

{
  int iVar1;
  int in_v1;
  int in_a1;
  undefined2 uVar2;
  int in_a2;
  int in_a3;
  int in_t0;
  
  if (in_v1 == in_a2) {
    *(undefined2 *)(in_a3 + 0xa6) = (short)lightInfo;
  }
  *(undefined2 *)(in_a3 + 0x46) = (short)lightInfo;
  iVar1 = -in_t0;
  if (in_a1 < iVar1) {
    uVar2 = (undefined2)
            ((int)(iVar1 * (uint)*(ushort *)(in_a3 + 0x44)) /
            (int)(iVar1 - (uint)*(ushort *)(in_a3 + 0x44)));
    if (*(short *)(in_a3 + 0xa6) == *(short *)(in_a3 + 0x46)) {
      *(undefined2 *)(in_a3 + 0xa6) = uVar2;
    }
    *(undefined2 *)(in_a3 + 0x46) = uVar2;
    in_a1 = iVar1;
  }
  _depthQFogStart =
       (in_a1 * -0x1000) /
       ((int)((uint)*(ushort *)(in_a3 + 0x44) << 0xc) /
       (int)((uint)*(ushort *)(in_a3 + 0x44) - (uint)*(ushort *)(in_a3 + 0x46)));
  _depthQBlendStart = _depthQFogStart;
  if (*(short *)(in_a3 + 0x3c) == 0) {
    _depthQBlendStart = 0xffff;
  }
  iVar1 = _depthQBlendStart;
  *(int *)(in_a3 + 0x90) = _depthQFogStart;
  *(int *)(in_a3 + 0x50) = iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIGHT_CalcDQPTable(struct Level *level /*$a3*/)
 // line 1600, offset 0x80036c30
	/* begin block 1 */
		// Start line: 1601
		// Start offset: 0x80036C30
		// Variables:
	// 		long dqa; // $a1
	// 		long limit; // $t0

		/* begin block 1.1 */
			// Start line: 1614
			// Start offset: 0x80036C78
		/* end block 1.1 */
		// End offset: 0x80036CA0
		// End Line: 1621

		/* begin block 1.2 */
			// Start line: 1624
			// Start offset: 0x80036CB0
		/* end block 1.2 */
		// End offset: 0x80036CE4
		// End Line: 1631
	/* end block 1 */
	// End offset: 0x80036D3C
	// End Line: 1661

	/* begin block 2 */
		// Start line: 3200
	/* end block 2 */
	// End Line: 3201

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LIGHT_CalcDQPTable(Level *level)

{
  int iVar1;
  int in_a1;
  undefined2 uVar2;
  int in_a3;
  int in_t0;
  
  *(undefined2 *)(in_a3 + 0xa6) = (short)level;
  *(undefined2 *)(in_a3 + 0x46) = (short)level;
  iVar1 = -in_t0;
  if (in_a1 < iVar1) {
    uVar2 = (undefined2)
            ((int)(iVar1 * (uint)*(ushort *)(in_a3 + 0x44)) /
            (int)(iVar1 - (uint)*(ushort *)(in_a3 + 0x44)));
    if (*(short *)(in_a3 + 0xa6) == *(short *)(in_a3 + 0x46)) {
      *(undefined2 *)(in_a3 + 0xa6) = uVar2;
    }
    *(undefined2 *)(in_a3 + 0x46) = uVar2;
    in_a1 = iVar1;
  }
  _depthQFogStart =
       (in_a1 * -0x1000) /
       ((int)((uint)*(ushort *)(in_a3 + 0x44) << 0xc) /
       (int)((uint)*(ushort *)(in_a3 + 0x44) - (uint)*(ushort *)(in_a3 + 0x46)));
  _depthQBlendStart = _depthQFogStart;
  if (*(short *)(in_a3 + 0x3c) == 0) {
    _depthQBlendStart = 0xffff;
  }
  iVar1 = _depthQBlendStart;
  *(int *)(in_a3 + 0x90) = _depthQFogStart;
  *(int *)(in_a3 + 0x50) = iVar1;
  return;
}





