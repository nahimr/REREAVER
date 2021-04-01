#include "THISDUST.H"
#include "DRAW.H"


// decompiled code
// original method signature: 
// void /*$ra*/ fDRAW_SPLIT_INTPL_XYZ(struct _SVector *newVertex /*$a0*/, struct _SVector *pvb /*$a1*/, struct _SVector *pvc /*$a2*/)
 // line 61, offset 0x8002a5b0
	/* begin block 1 */
		// Start line: 122
	/* end block 1 */
	// End Line: 123

	/* begin block 2 */
		// Start line: 123
	/* end block 2 */
	// End Line: 124

void fDRAW_SPLIT_INTPL_XYZ(_SVector *newVertex,_SVector *pvb,_SVector *pvc)

{
  int unaff_s2;
  
  if (unaff_s2 < 0) {
    unaff_s2 = unaff_s2 + 0xfff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80079104(unaff_s2 >> 0xc);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_InitShadow()
 // line 454, offset 0x8002a62c
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x8002A62C
		// Variables:
	// 		int n; // $s3
	// 		int inc; // $s4
	// 		int deg; // $s2
	/* end block 1 */
	// End offset: 0x8002A6BC
	// End Line: 468

	/* begin block 2 */
		// Start line: 519
	/* end block 2 */
	// End Line: 520

	/* begin block 3 */
		// Start line: 909
	/* end block 3 */
	// End Line: 910

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRAW_InitShadow(void)

{
  short in_v0;
  short in_v1;
  undefined2 in_a0;
  
  theCamera.savedCinematic[1].baseAccl.z = in_v0;
  theCamera.savedCinematic[1].baseAccl.pad = in_v1;
  theCamera.savedCinematic[1].maxVel._0_2_ = in_a0;
  return;
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ DRAW_DrawShadow(struct _PrimPool *primPool /*$t3*/, struct _Model *model /*$a1*/, unsigned long **ot /*$a2*/, long fadeValue /*$a3*/)
 // line 478, offset 0x8002a6f4
	/* begin block 1 */
		// Start line: 479
		// Start offset: 0x8002A6F4
		// Variables:
	// 		struct POLY_G3_SEMITRANS *sg3; // $a1
	// 		struct SVECTOR zero_vertex; // stack offset -24
	// 		long clip; // stack offset -8
	// 		long n; // $t0
	// 		long p; // stack offset -16
	// 		long otz; // stack offset -4
	// 		unsigned long color; // stack offset -12
	/* end block 1 */
	// End offset: 0x8002A8AC
	// End Line: 538

	/* begin block 2 */
		// Start line: 983
	/* end block 2 */
	// End Line: 984

ulong * DRAW_DrawShadow(_PrimPool *primPool,_Model *model,ulong **ot,long fadeValue)

{
  long lVar1;
  _MFace *p_Var2;
  _Segment *p_Var3;
  uint in_v0;
  uint uVar4;
  int iVar5;
  int in_t0;
  undefined4 *in_t1;
  uint in_t2;
  int *in_t3;
  
  uVar4 = in_v0 | 0x32000000;
  do {
    iVar5 = in_t0 * 8;
    setCopReg(2,uVar4,*in_t1);
    setCopReg(2,iVar5,in_t1[1]);
    setCopReg(2,primPool,*(undefined4 *)((int)&theCamera.savedCinematic[1].targetPos + iVar5 + 2));
    setCopReg(2,model,*(undefined4 *)((int)&theCamera.savedCinematic[1].targetFocusPoint + iVar5));
    copFunction(2,0x280030);
    if ((_Model *)(in_t3[2] - 0x30U) < model) {
      return (ulong *)model;
    }
    copFunction(2,0x1400006);
    iVar5 = getCopReg(2,0x18);
    if (iVar5 < 0) {
      copFunction(2,0x158002d);
      iVar5 = getCopReg(2,7);
      primPool = (_PrimPool *)&model->normalList;
      if (iVar5 - 0x40U < 0xbc0) {
        lVar1 = getCopReg(2,0xc);
        primPool->numPrims = lVar1;
        p_Var2 = (_MFace *)getCopReg(2,0xd);
        model->faceList = p_Var2;
        p_Var3 = (_Segment *)getCopReg(2,0xe);
        model->segmentList = p_Var3;
        ((undefined4 *)fadeValue)[3] = 0;
        ((undefined4 *)fadeValue)[5] = 0;
        ((undefined4 *)fadeValue)[1] = in_v0 | 0x32000000;
        *(undefined4 *)fadeValue = 0xe1000640;
        fadeValue = (long)((undefined4 *)fadeValue + 8);
        primPool = (_PrimPool *)(ot + iVar5);
        model->numVertices = primPool->numPrims & in_t2 | 0x7000000;
        primPool->numPrims = (uint)model & in_t2;
        model = (_Model *)&model->aniTextures;
        *in_t3 = *in_t3 + 1;
      }
    }
    in_t0 = in_t0 + 1;
    uVar4 = (uint)(in_t0 < 10);
    in_t1 = in_t1 + 2;
  } while (in_t0 < 10);
  return (ulong *)model;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_FlatQuad(struct CVECTOR *color /*$a0*/, short x0 /*$a1*/, short y0 /*$a2*/, short x1 /*$a3*/, int y1 /*stack 16*/, int x2 /*stack 20*/, int y2 /*stack 24*/, int x3 /*stack 28*/, int y3 /*stack 32*/, struct _PrimPool *primPool /*stack 36*/, unsigned long **ot /*stack 40*/)
 // line 3208, offset 0x8002a8b4
	/* begin block 1 */
		// Start line: 3209
		// Start offset: 0x8002A8B4
		// Variables:
	// 		unsigned long *prim; // $t0
	/* end block 1 */
	// End offset: 0x8002A954
	// End Line: 3228

	/* begin block 2 */
		// Start line: 6416
	/* end block 2 */
	// End Line: 6417

void DRAW_FlatQuad(CVECTOR *color,short x0,short y0,short x1,int y1,int x2,int y2,int x3,int y3,
                  _PrimPool *primPool,ulong **ot)

{
  undefined4 in_v1;
  undefined4 *in_t1;
  
  *in_t1 = in_v1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_TranslucentQuad(short x0 /*$a0*/, short y0 /*$a1*/, short x1 /*$a2*/, short y1 /*$a3*/, int x2 /*stack 16*/, int y2 /*stack 20*/, int x3 /*stack 24*/, int y3 /*stack 28*/, int r /*stack 32*/, int g /*stack 36*/, int b /*stack 40*/, int abr /*stack 44*/, struct _PrimPool *primPool /*stack 48*/, unsigned long **ot /*stack 52*/)
 // line 3245, offset 0x8002a95c
	/* begin block 1 */
		// Start line: 3246
		// Start offset: 0x8002A95C
		// Variables:
	// 		unsigned long *prim; // $t0
	/* end block 1 */
	// End offset: 0x8002AA30
	// End Line: 3272

	/* begin block 2 */
		// Start line: 3914
	/* end block 2 */
	// End Line: 3915

void DRAW_TranslucentQuad
               (short x0,short y0,short x1,short y1,int x2,int y2,int x3,int y3,int r,int g,int b,
               int abr,_PrimPool *primPool,ulong **ot)

{
  undefined2 in_register_00000012;
  uint *in_t0;
  int *in_t5;
  uint *unaff_s1;
  undefined2 in_t9;
  
  *(undefined2 *)((int)in_t0 + 0x1a) = in_t9;
  *in_t0 = *unaff_s1 & CONCAT22(in_register_00000012,x0) | 0x6000000;
  *unaff_s1 = (uint)in_t0 & CONCAT22(in_register_00000012,x0);
  in_t5[1] = in_t5[1] + 0x1c;
  *in_t5 = *in_t5 + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_DrawButton(struct _ButtonTexture *button /*$s5*/, short x /*$a1*/, short y /*$a2*/, unsigned long **ot /*stack 12*/)
 // line 3515, offset 0x8002aa40
	/* begin block 1 */
		// Start line: 3516
		// Start offset: 0x8002AA40
		// Variables:
	// 		struct _PrimPool *primPool; // $fp
	// 		unsigned long *prim; // $s4
	// 		short w; // $s0
	// 		short h; // $s3
	// 		short offsetx; // $s2
	// 		short offsety; // $s1
	/* end block 1 */
	// End offset: 0x8002AB78
	// End Line: 3567

	/* begin block 2 */
		// Start line: 7030
	/* end block 2 */
	// End Line: 7031

void DRAW_DrawButton(_ButtonTexture *button,short x,short y,ulong **ot)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 in_v1;
  char unaff_s0;
  char unaff_s1;
  char cVar3;
  undefined unaff_s2;
  undefined4 unaff_s3;
  uint *unaff_s4;
  undefined2 *unaff_s5;
  undefined2 unaff_s6;
  short unaff_s7;
  int *unaff_s8;
  uint *in_stack_00000044;
  
  *(undefined2 *)((int)unaff_s4 + 0x16) = *unaff_s5;
  uVar1 = unaff_s5[1];
  sVar2 = unaff_s7 + (short)unaff_s3 + -1;
  *(char *)((int)unaff_s4 + 0xd) = unaff_s1;
  *(char *)((int)unaff_s4 + 0x15) = unaff_s1;
  cVar3 = unaff_s1 + (char)unaff_s3 + -1;
  *(undefined2 *)(unaff_s4 + 2) = unaff_s6;
  *(short *)((int)unaff_s4 + 10) = unaff_s7;
  *(undefined *)(unaff_s4 + 3) = unaff_s2;
  *(undefined2 *)(unaff_s4 + 4) = in_v1;
  *(short *)((int)unaff_s4 + 0x12) = unaff_s7;
  *(char *)(unaff_s4 + 5) = unaff_s0 + -1;
  *(undefined2 *)(unaff_s4 + 6) = unaff_s6;
  *(short *)((int)unaff_s4 + 0x1a) = sVar2;
  *(undefined *)(unaff_s4 + 7) = unaff_s2;
  *(char *)((int)unaff_s4 + 0x1d) = cVar3;
  *(undefined2 *)(unaff_s4 + 8) = in_v1;
  *(short *)((int)unaff_s4 + 0x22) = sVar2;
  *(char *)(unaff_s4 + 9) = unaff_s0 + -1;
  *(char *)((int)unaff_s4 + 0x25) = cVar3;
  *(undefined2 *)((int)unaff_s4 + 0xe) = uVar1;
  *unaff_s4 = *in_stack_00000044 & ((uint)button | 0xffff) | 0x9000000;
  *in_stack_00000044 = (uint)unaff_s4 & ((uint)button | 0xffff);
  *(uint **)(unaff_s8 + 1) = unaff_s4 + 10;
  *unaff_s8 = *unaff_s8 + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_LoadButton(long *addr /*$s0*/, struct _ButtonTexture *button /*$s1*/)
 // line 3573, offset 0x8002aba8
	/* begin block 1 */
		// Start line: 3574
		// Start offset: 0x8002ABA8
		// Variables:
	// 		struct RECT vramRect; // stack offset -32
	// 		long *paletteAddr; // $s3
	// 		short paletteW; // $s2
	// 		short paletteH; // $s4
	/* end block 1 */
	// End offset: 0x8002AD20
	// End Line: 3620

	/* begin block 2 */
		// Start line: 4472
	/* end block 2 */
	// End Line: 4473

void DRAW_LoadButton(long *addr,_ButtonTexture *button)

{
  undefined4 uVar1;
  short in_a2;
  int unaff_s0;
  ushort *unaff_s1;
  ushort unaff_s2;
  int unaff_s3;
  ushort unaff_s4;
  undefined4 uStack00000014;
  ushort in_stack_00000018;
  ushort in_stack_0000001a;
  ushort uStack0000001c;
  ushort uStack0000001e;
  
  uStack0000001e = unaff_s1[3] + unaff_s4;
  uStack00000014 = 0;
  uVar1 = FUN_8007306c(addr,button,(int)in_a2,(int)(short)uStack0000001e);
  *(undefined4 *)(unaff_s1 + 4) = uVar1;
  *unaff_s1 = (ushort)((2 - (uint)unaff_s1[6] & 3) << 7) | (short)(in_stack_0000001a & 0x100) >> 4 |
              (ushort)(((uint)in_stack_00000018 & 0x3ff) >> 6) |
              (ushort)(((uint)in_stack_0000001a & 0x200) << 2);
  *(ushort **)(*(int *)(unaff_s1 + 4) + 0x18) = unaff_s1;
  uStack0000001c = unaff_s1[2];
  uStack0000001e = unaff_s1[3];
  FUN_800bab44(&stack0x00000018,unaff_s0 + 0xc);
  if (unaff_s3 != 0) {
    in_stack_0000001a = in_stack_0000001a + unaff_s1[3];
    uStack0000001c = unaff_s2;
    uStack0000001e = unaff_s4;
    FUN_800bab44(&stack0x00000018);
    unaff_s1[1] = in_stack_0000001a << 6 | in_stack_00000018 >> 4 & 0x3f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_FreeButton(struct _ButtonTexture *button /*$a0*/)
 // line 3636, offset 0x8002ad48
	/* begin block 1 */
		// Start line: 7272
	/* end block 1 */
	// End Line: 7273

void DRAW_FreeButton(_ButtonTexture *button)

{
  uint uVar1;
  int in_v1;
  uint uVar2;
  uint *puVar3;
  int in_a1;
  uint in_a2;
  uint *in_a3;
  int in_t0;
  int in_t1;
  int in_stack_00000010;
  
  uVar2 = in_stack_00000010 >> 2;
  if (in_a1 < in_v1) {
    if (in_stack_00000010 <= in_a1) goto LAB_8002ad8c;
  }
  else {
    in_a1 = in_v1;
    if (in_stack_00000010 <= in_v1) goto LAB_8002ad8c;
  }
  uVar2 = in_a1 >> 2;
LAB_8002ad8c:
  if (uVar2 < 0xc00) {
    if (2 < (int)uVar2) {
      uVar2 = uVar2 - 2;
    }
    getCopReg(2,8);
    in_a3[1] = in_a2 | 0x40000000;
    uVar1 = getCopReg(2,0xc);
    in_a3[2] = uVar1;
    uVar1 = getCopReg(2,0xd);
    in_a3[3] = uVar1;
    puVar3 = (uint *)(uVar2 * 4 + in_t1);
    uVar2 = (uint)in_a3 & 0xffffff;
    *in_a3 = *puVar3 & 0xffffff | 0x3000000;
    in_a3 = in_a3 + 4;
    *puVar3 = uVar2;
  }
  *(uint **)(in_t0 + 4) = in_a3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_RingLine(struct _PrimPool *primPool /*$t0*/, unsigned long **ot /*$t1*/, long color /*$a2*/)
 // line 3649, offset 0x8002ad6c
	/* begin block 1 */
		// Start line: 3650
		// Start offset: 0x8002AD6C
		// Variables:
	// 		unsigned long *prim; // $a3
	// 		long flag; // stack offset -24
	// 		long clip; // stack offset -20
	// 		long z0; // stack offset -16
	// 		long z1; // stack offset -12
	// 		long z2; // stack offset -8
	// 		long otz; // $a0
	// 		long p; // stack offset -4
	/* end block 1 */
	// End offset: 0x8002AE94
	// End Line: 3712

	/* begin block 2 */
		// Start line: 4652
	/* end block 2 */
	// End Line: 4653

void DRAW_RingLine(_PrimPool *primPool,ulong **ot,long color)

{
  uint uVar1;
  int in_v1;
  uint uVar2;
  uint *puVar3;
  uint *in_a3;
  int in_t0;
  int in_t1;
  int in_stack_00000010;
  
  uVar2 = in_stack_00000010 >> 2;
  if (in_v1 < in_stack_00000010) {
    uVar2 = in_v1 >> 2;
  }
  if (uVar2 < 0xc00) {
    if (2 < (int)uVar2) {
      uVar2 = uVar2 - 2;
    }
    getCopReg(2,8);
    in_a3[1] = color | 0x40000000;
    uVar1 = getCopReg(2,0xc);
    in_a3[2] = uVar1;
    uVar1 = getCopReg(2,0xd);
    in_a3[3] = uVar1;
    puVar3 = (uint *)(uVar2 * 4 + in_t1);
    uVar2 = (uint)in_a3 & 0xffffff;
    *in_a3 = *puVar3 & 0xffffff | 0x3000000;
    in_a3 = in_a3 + 4;
    *puVar3 = uVar2;
  }
  *(uint **)(in_t0 + 4) = in_a3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_RingPoint(struct _PrimPool *primPool /*$a0*/, unsigned long **ot /*$a1*/, long color /*$s2*/, struct _SVector *vel /*$s1*/, struct _SVector *acc /*stack 16*/)
 // line 3714, offset 0x8002ae9c
	/* begin block 1 */
		// Start line: 3715
		// Start offset: 0x8002AE9C
		// Variables:
	// 		struct _SVector outpoint; // stack offset -24
	/* end block 1 */
	// End offset: 0x8002AF94
	// End Line: 3726

	/* begin block 2 */
		// Start line: 4789
	/* end block 2 */
	// End Line: 4790

void DRAW_RingPoint(_PrimPool *primPool,ulong **ot,long color,_SVector *vel,_SVector *acc)

{
                    /* WARNING: Subroutine does not return */
  FUN_800bcddc();
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ DRAW_DrawRingPoints(struct _Model *model /*$a0*/, struct _VertexPool *vertexPool /*$a1*/, struct MATRIX *pcTransform /*$s0*/, struct _PrimPool *primPool /*$s5*/, unsigned long **ot /*stack 16*/, long color /*stack 20*/, int ring_type /*stack 24*/)
 // line 3736, offset 0x8002afac
	/* begin block 1 */
		// Start line: 3737
		// Start offset: 0x8002AFAC
		// Variables:
	// 		struct _MFace *mface; // $s1
	// 		struct _MFace *endMFace; // $s4
	// 		struct _PVertex *pvertexList; // $s3
	// 		struct _SVector (*pvertex[3]); // stack offset -96
	// 		struct _SVector newVertex[3]; // stack offset -80
	// 		long outcode; // $a0
	// 		int first; // $v1
	// 		int second; // $a0
	// 		struct _SVector vel; // stack offset -56
	// 		struct _SVector acc; // stack offset -48
	/* end block 1 */
	// End offset: 0x8002B294
	// End Line: 3837

	/* begin block 2 */
		// Start line: 4841
	/* end block 2 */
	// End Line: 4842

ulong * DRAW_DrawRingPoints(_Model *model,_VertexPool *vertexPool,MATRIX *pcTransform,
                           _PrimPool *primPool,ulong **ot,long color,int ring_type)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  ushort *unaff_s4;
  int unaff_s5;
  int unaff_s8;
  int iStack0000001c;
  int iStack00000020;
  
  puVar8 = unaff_s1 + 2;
  do {
    if ((*(byte *)((int)puVar8 + 3) & 0x10) != 0) goto switchD_8002b050_caseD_6;
    iVar4 = unaff_s3 + (uint)*unaff_s1 * 8;
    iStack0000001c = unaff_s3 + (uint)puVar8[-1] * 8;
    iStack00000020 = unaff_s3 + (uint)*puVar8 * 8;
    uVar5 = (uint)~(int)*(short *)(iVar4 + 4) >> 0x1f;
    if (-1 < *(short *)(iStack0000001c + 4)) {
      uVar5 = uVar5 | 2;
    }
    if (-1 < *(short *)(iStack00000020 + 4)) {
      uVar5 = uVar5 | 4;
    }
    switch(uVar5) {
    case 1:
      FUN_8002a514(&stack0x00000030,iVar4,iStack0000001c);
      FUN_8002a514(&stack0x00000038,iVar4,iStack00000020);
      iVar2 = 1;
      iVar6 = 2;
      break;
    case 2:
      FUN_8002a514(&stack0x00000028,iStack0000001c,iVar4);
      iVar4 = iStack0000001c;
      FUN_8002a514(&stack0x00000038,iStack0000001c,iStack00000020);
      iVar2 = 2;
      iVar6 = 0;
      break;
    case 3:
      FUN_8002a514(&stack0x00000030,iStack0000001c,iStack00000020);
      FUN_8002a514();
      iVar2 = 1;
      iVar6 = 0;
      break;
    case 4:
      FUN_8002a514(&stack0x00000028,iStack00000020,iVar4);
      iVar7 = iStack00000020;
      FUN_8002a514(&stack0x00000030,iStack00000020,iStack0000001c);
      iVar2 = 0;
      goto LAB_8002b154;
    case 5:
      FUN_8002a514(&stack0x00000028,iVar4,iStack0000001c);
      iVar4 = iStack00000020;
      FUN_8002a514(&stack0x00000038,iStack00000020,iStack0000001c);
      iVar2 = 0;
      iVar6 = 2;
      break;
    case 6:
      FUN_8002a514(&stack0x00000038,iStack00000020,iVar4);
      iVar7 = iStack0000001c;
      FUN_8002a514(&stack0x00000030,iStack0000001c,iVar4);
      iVar2 = 2;
LAB_8002b154:
      iVar6 = 1;
      iVar4 = iVar7;
      break;
    default:
      goto switchD_8002b050_caseD_6;
    }
    if (unaff_s8 == 2) {
      puVar1 = (undefined4 *)(unaff_s2 + iVar2 * 8);
      setCopReg(2,in_zero,*puVar1);
      setCopReg(2,in_at,puVar1[1]);
      copFunction(2,0x480012);
      FUN_8002ae00();
    }
    else {
      puVar3 = (undefined4 *)(unaff_s2 + iVar2 * 8);
      puVar1 = (undefined4 *)(unaff_s2 + iVar6 * 8);
      setCopReg(2,in_zero,*puVar3);
      setCopReg(2,in_at,puVar3[1]);
      setCopReg(2,puVar1,*puVar1);
      setCopReg(2,puVar3,puVar1[1]);
      setCopReg(2,iVar6,*puVar3);
      setCopReg(2,iVar4,puVar3[1]);
      copFunction(2,0x280030);
      FUN_8002acd0();
    }
switchD_8002b050_caseD_6:
    puVar8 = puVar8 + 6;
    unaff_s1 = unaff_s1 + 6;
    if (unaff_s4 <= unaff_s1) {
      return *(ulong **)(unaff_s5 + 4);
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_GlowQuad(struct _PrimPool *primPool /*$t7*/, unsigned long **ot /*$t9*/, long otz /*$a2*/, long color /*stack 12*/, struct _Vector *v0 /*stack 16*/, struct _Vector *v1 /*stack 20*/, struct _Vector *v2 /*stack 24*/, struct _Vector *v3 /*stack 28*/)
 // line 3879, offset 0x8002b2c8
	/* begin block 1 */
		// Start line: 3880
		// Start offset: 0x8002B2C8
		// Variables:
	// 		unsigned long *prim; // $t1
	// 		struct _POLY_NG4 *sg4; // $t0
	/* end block 1 */
	// End offset: 0x8002B524
	// End Line: 3922

	/* begin block 2 */
		// Start line: 7758
	/* end block 2 */
	// End Line: 7759

void DRAW_GlowQuad(_PrimPool *primPool,ulong **ot,long otz,long color,_Vector *v0,_Vector *v1,
                  _Vector *v2,_Vector *v3)

{
  int in_v1;
  uint *puVar1;
  uint *in_t0;
  undefined4 in_t1;
  undefined2 *in_t2;
  undefined2 *in_t3;
  undefined4 in_t4;
  undefined4 uVar2;
  undefined4 in_t5;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_t7;
  undefined2 *in_t8;
  int in_t9;
  
  setCopReg(2,0x4800,in_t4);
  setCopReg(2,0x5000,in_t5);
  setCopReg(2,0x5800,(uint)*(byte *)((int)&primPool->numPrims + 2));
  copFunction(2,0x198003d);
  *(undefined2 *)(in_t0 + 3) = *(undefined2 *)ot;
  *(undefined2 *)((int)in_t0 + 0xe) = *(undefined2 *)(ot + 1);
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *(char *)(in_t0 + 2) = (char)uVar2;
  *(undefined *)((int)in_t0 + 9) = (char)uVar3;
  *(undefined *)((int)in_t0 + 10) = (char)uVar4;
  setCopReg(2,0x4000,in_v1 - (int)(short)in_t2[4]);
  setCopReg(2,0x4800,(uint)*(byte *)&primPool->numPrims);
  setCopReg(2,0x5000,(uint)*(byte *)((int)&primPool->numPrims + 1));
  setCopReg(2,0x5800,(uint)*(byte *)((int)&primPool->numPrims + 2));
  copFunction(2,0x198003d);
  *(undefined2 *)(in_t0 + 5) = *in_t2;
  *(undefined2 *)((int)in_t0 + 0x16) = in_t2[2];
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *(char *)(in_t0 + 4) = (char)uVar2;
  *(undefined *)((int)in_t0 + 0x11) = (char)uVar3;
  *(undefined *)((int)in_t0 + 0x12) = (char)uVar4;
  setCopReg(2,0x4000,in_v1 - (int)(short)in_t3[4]);
  setCopReg(2,0x4800,(uint)*(byte *)&primPool->numPrims);
  setCopReg(2,0x5000,(uint)*(byte *)((int)&primPool->numPrims + 1));
  setCopReg(2,0x5800,(uint)*(byte *)((int)&primPool->numPrims + 2));
  copFunction(2,0x198003d);
  *(undefined2 *)(in_t0 + 7) = *in_t3;
  *(undefined2 *)((int)in_t0 + 0x1e) = in_t3[2];
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *(char *)(in_t0 + 6) = (char)uVar2;
  *(undefined *)((int)in_t0 + 0x19) = (char)uVar3;
  *(undefined *)((int)in_t0 + 0x1a) = (char)uVar4;
  setCopReg(2,0x4000,in_v1 - (int)(short)in_t8[4]);
  setCopReg(2,0x4800,(uint)*(byte *)&primPool->numPrims);
  setCopReg(2,0x5000,(uint)*(byte *)((int)&primPool->numPrims + 1));
  setCopReg(2,0x5800,(uint)*(byte *)((int)&primPool->numPrims + 2));
  copFunction(2,0x198003d);
  *(undefined2 *)(in_t0 + 9) = *in_t8;
  *(undefined2 *)((int)in_t0 + 0x26) = in_t8[2];
  uVar2 = getCopReg(2,0x4800);
  uVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  *(char *)(in_t0 + 8) = (char)uVar2;
  *(undefined *)((int)in_t0 + 0x21) = (char)uVar3;
  *(undefined *)((int)in_t0 + 0x22) = (char)uVar4;
  puVar1 = (uint *)(otz * 4 + in_t9);
  *in_t0 = *puVar1 & 0xffffff | 0x9000000;
  *puVar1 = (uint)in_t0 & 0xffffff;
  *(undefined *)((int)in_t0 + 0xb) = 0x3a;
  *(undefined4 *)(in_t7 + 4) = in_t1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_CreateAGlowingCircle(struct _Vector *f1 /*$fp*/, long z /*$a1*/, struct _PrimPool *primPool /*stack 8*/, unsigned long **ot /*stack 12*/, long otz /*stack 16*/, long color /*stack 20*/, long w /*stack 24*/, long h /*stack 28*/, long angle /*stack 32*/)
 // line 3935, offset 0x8002b52c
	/* begin block 1 */
		// Start line: 3936
		// Start offset: 0x8002B52C
		// Variables:
	// 		long hold; // $t0
	// 		long x; // $s3
	// 		long y; // $v0
	// 		long diagScale; // $a2
	// 		struct _Vector width; // stack offset -232
	// 		struct _Vector height; // stack offset -216
	// 		struct _Vector diag1; // stack offset -200
	// 		struct _Vector diag2; // stack offset -184
	// 		struct _Vector points[9]; // stack offset -168

		/* begin block 1.1 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t3
		// 		long _x1; // $s1
		// 		long _y1; // $s7
		// 		long _z1; // $s0
		// 		struct _Vector *_v; // $t6
		// 		struct _Vector *_v1; // stack offset -48
		/* end block 1.1 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.2 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t3
		// 		long _y1; // $s4
		// 		long _z1; // $s5
		// 		struct _Vector *_v1; // $s2
		/* end block 1.2 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.3 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t3
		// 		long _x1; // $a0
		// 		long _y1; // $a0
		// 		long _z1; // $a1
		/* end block 1.3 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.4 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v1
		// 		long _y0; // $a0
		// 		long _z0; // $t2
		// 		struct _Vector *_v; // $t4
		/* end block 1.4 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.5 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v1
		// 		long _y0; // $a0
		// 		long _z0; // $t2
		/* end block 1.5 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.6 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v1
		// 		long _y0; // $a0
		// 		long _z0; // $t2
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $a1
		/* end block 1.6 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.7 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t0
		// 		long _y1; // $t1
		// 		struct _Vector *_v; // $t3
		/* end block 1.7 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.8 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t0
		// 		struct _Vector *_v; // $s6
		/* end block 1.8 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.9 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t0
		// 		long _y1; // $t1
		// 		struct _Vector *_v; // stack offset -52
		/* end block 1.9 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.10 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $v0
		// 		long _y0; // $v1
		// 		long _z0; // $t0
		// 		struct _Vector *_v; // $s4
		/* end block 1.10 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.11 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $t0
		// 		long _y0; // $t2
		// 		long _z0; // $t1
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v1
		// 		struct _Vector *_v; // $s5
		/* end block 1.11 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.12 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $t0
		// 		long _y0; // $t2
		// 		long _z0; // $t1
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v1
		// 		struct _Vector *_v; // $s3
		/* end block 1.12 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.13 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $t0
		// 		long _y0; // $t2
		// 		long _z0; // $t1
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v1
		// 		struct _Vector *_v; // $s2
		/* end block 1.13 */
		// End offset: 0x8002B590
		// End Line: 3949

		/* begin block 1.14 */
			// Start line: 3949
			// Start offset: 0x8002B590
			// Variables:
		// 		long _x0; // $t0
		// 		long _y0; // $t2
		// 		long _z0; // $t1
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v1
		// 		struct _Vector *_v; // $s1
		/* end block 1.14 */
		// End offset: 0x8002B590
		// End Line: 3949
	/* end block 1 */
	// End offset: 0x8002BAA8
	// End Line: 4028

	/* begin block 2 */
		// Start line: 5209
	/* end block 2 */
	// End Line: 5210

void DRAW_CreateAGlowingCircle
               (_Vector *f1,long z,_PrimPool *primPool,ulong **ot,long otz,long color,long w,long h,
               long angle)

{
  FUN_800790d4();
  FUN_800790d4();
                    /* WARNING: Subroutine does not return */
  FUN_80079104();
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ DRAW_DrawGlowPoints2(struct _Instance *instance /*$s0*/, long seg1 /*$a1*/, long seg2 /*$s1*/, struct _PrimPool *primPool /*$s3*/, unsigned long **ot /*stack 16*/, long color /*stack 20*/, long height /*stack 24*/)
 // line 4038, offset 0x8002bad8
	/* begin block 1 */
		// Start line: 4039
		// Start offset: 0x8002BAD8
		// Variables:
	// 		struct _Position glowPoints1; // stack offset -88
	// 		struct _Position glowPoints2; // stack offset -80
	// 		struct _Vector f1; // stack offset -72
	// 		struct _Vector f2; // stack offset -56
	// 		struct _Vector f3; // stack offset -40
	// 		long otz; // $s2
	// 		long otz2; // $s0
	// 		long z; // $a1
	// 		long length; // $s1
	// 		long angle; // $v1
	/* end block 1 */
	// End offset: 0x8002BC24
	// End Line: 4079

	/* begin block 2 */
		// Start line: 5534
	/* end block 2 */
	// End Line: 5535

ulong * DRAW_DrawGlowPoints2
                  (_Instance *instance,long seg1,long seg2,_PrimPool *primPool,ulong **ot,long color
                  ,long height)

{
  int in_stack_00000058;
  long lStack0000005c;
  
  lStack0000005c = seg1;
  FUN_80039d40();
                    /* WARNING: Subroutine does not return */
  FUN_800bd18c(lStack0000005c,-in_stack_00000058);
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ DRAW_DrawGlowPoint(struct _Instance *instance /*$a0*/, long seg1 /*$a1*/, struct _PrimPool *primPool /*$s3*/, unsigned long **ot /*$s4*/, long color /*stack 16*/, int width /*stack 20*/, int height /*stack 24*/)
 // line 4089, offset 0x8002bc44
	/* begin block 1 */
		// Start line: 4090
		// Start offset: 0x8002BC44
		// Variables:
	// 		struct _Position glowPoints1; // stack offset -48
	// 		struct _Vector f1; // stack offset -40
	// 		long otz; // $t0
	// 		long z; // $a1
	// 		long angle; // $s2
	/* end block 1 */
	// End offset: 0x8002BCF0
	// End Line: 4115

	/* begin block 2 */
		// Start line: 5682
	/* end block 2 */
	// End Line: 5683

ulong * DRAW_DrawGlowPoint(_Instance *instance,long seg1,_PrimPool *primPool,ulong **ot,long color,
                          int width,int height)

{
  short unaff_s1;
  int unaff_s3;
  int iStack0000001c;
  
  iStack0000001c = (int)unaff_s1;
  FUN_8002b490();
  return *(ulong **)(unaff_s3 + 4);
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRAW_DisplayTFace_zclipped_C(struct SVECTOR *vertex0 /*stack 0*/, struct SVECTOR *vertex1 /*stack 4*/, struct SVECTOR *vertex2 /*stack 8*/, struct UVTYPE *uv0 /*stack 12*/, struct UVTYPE *uv1 /*stack 16*/, struct UVTYPE *uv2 /*stack 20*/, long color0 /*stack 24*/, long color1 /*stack 28*/, long color2 /*stack 32*/, struct _PrimPool *primPool /*stack 36*/, unsigned long **ot /*stack 40*/, int ndiv /*stack 44*/)
 // line 4192, offset 0x8002bd14
	/* begin block 1 */
		// Start line: 4193
		// Start offset: 0x8002BD14
		// Variables:
	// 		struct SP_SUBDIV_STRUCT *sp; // $t2
	// 		int maxz; // $s3
	// 		int point; // $a1
	// 		int n; // $t7
	// 		struct POLY_GT4 *prim; // $t9
	// 		long *ptr; // $t8
	// 		long clip; // $s0

		/* begin block 1.1 */
			// Start line: 4233
			// Start offset: 0x8002BE84
			// Variables:
		// 		int next_point_in_vv; // $v1
		// 		int current_point_in_vv; // $t1
		// 		int next; // $t6

			/* begin block 1.1.1 */
				// Start line: 4246
				// Start offset: 0x8002BEC4
				// Variables:
			// 		long clip_tmp; // $a0
			// 		long zval; // stack offset -48
			// 		struct SVECTOR *tmpptr; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8002BFA8
			// End Line: 4272

			/* begin block 1.1.2 */
				// Start line: 4276
				// Start offset: 0x8002BFB0
				// Variables:
			// 		long zn; // $v1
			// 		long znext; // $a0
			// 		long interp1; // $t1
			// 		long interp2; // $a2
			// 		long clip_tmp; // $v1

				/* begin block 1.1.2.1 */
					// Start line: 4280
					// Start offset: 0x8002BFB0
					// Variables:
				// 		long x; // $v1
				// 		long y; // $v1
				/* end block 1.1.2.1 */
				// End offset: 0x8002C094
				// End Line: 4291
			/* end block 1.1.2 */
			// End offset: 0x8002C1CC
			// End Line: 4305
		/* end block 1.1 */
		// End offset: 0x8002C1CC
		// End Line: 4306

		/* begin block 1.2 */
			// Start line: 4327
			// Start offset: 0x8002C20C
			// Variables:
		// 		int next; // $t0
		// 		int flag; // $t3
		/* end block 1.2 */
		// End offset: 0x8002C3E4
		// End Line: 4358

		/* begin block 1.3 */
			// Start line: 4361
			// Start offset: 0x8002C3E4
			// Variables:
		// 		long opz; // stack offset -44
		/* end block 1.3 */
		// End offset: 0x8002C438
		// End Line: 4376

		/* begin block 1.4 */
			// Start line: 4387
			// Start offset: 0x8002C498
			// Variables:
		// 		long temp1; // $a3
		// 		long temp2; // $t0
		// 		long temp3; // $t1
		/* end block 1.4 */
		// End offset: 0x8002C4A0
		// End Line: 4408
	/* end block 1 */
	// End offset: 0x8002C524
	// End Line: 4409

	/* begin block 2 */
		// Start line: 8384
	/* end block 2 */
	// End Line: 8385

int DRAW_DisplayTFace_zclipped_C
              (SVECTOR *vertex0,SVECTOR *vertex1,SVECTOR *vertex2,UVTYPE *uv0,UVTYPE *uv1,
              UVTYPE *uv2,long color0,long color1,long color2,_PrimPool *primPool,ulong **ot,
              int ndiv)

{
  uint uVar1;
  bool bVar2;
  undefined4 in_zero;
  undefined4 in_at;
  byte bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  SVECTOR *pSVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int in_t2;
  short *psVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *unaff_s4;
  int unaff_s7;
  uint *puVar23;
  uint *puVar24;
  undefined4 unaff_s8;
  int iVar25;
  int iVar26;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  uint *in_stack_0000004c;
  uint *in_stack_00000050;
  uint *in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  int in_stack_00000068;
  int in_stack_0000006c;
  
  uVar14 = getCopReg(2,0x1a);
  *(undefined4 *)(unaff_s7 + 4) = uVar14;
  uVar14 = getCopReg(2,0x1b);
  *(undefined4 *)(unaff_s7 + 8) = uVar14;
  setCopReg(2,in_zero,*in_stack_00000048);
  setCopReg(2,in_at,in_stack_00000048[1]);
  copFunction(2,0x480012);
  DAT_1f800290 = getCopReg(2,0x19);
  DAT_1f800294 = getCopReg(2,0x1a);
  DAT_1f800298 = getCopReg(2,0x1b);
  if (((*(int *)(in_t2 + 0x80) < 0xa0) && (*(int *)(in_t2 + 0x8c) < 0xa0)) &&
     (*(int *)(in_t2 + 0x98) < 0xa0)) {
    return 2;
  }
  iVar9 = 0;
  iVar22 = 0xa0;
  puVar24 = (uint *)unaff_s4[1];
  uVar19 = 0xffff;
  *(uint *)(in_t2 + 0xb8) = *in_stack_0000004c;
  iVar18 = 0;
  iVar21 = 0;
  *(uint *)(in_t2 + 0xbc) = *in_stack_00000050;
  uVar8 = *in_stack_00000054;
  *(undefined4 *)(in_t2 + 0xa8) = unaff_s8;
  puVar23 = puVar24 + 1;
  *(undefined4 *)(in_t2 + 0xac) = in_stack_0000005c;
  psVar13 = (short *)((int)puVar24 + 10);
  *(uint *)(in_t2 + 0xc0) = uVar8;
  *(undefined4 *)(in_t2 + 0xb0) = in_stack_00000060;
  iVar10 = in_t2;
  iVar20 = in_t2;
  do {
    iVar16 = iVar18 + 1;
    if (2 < iVar16) {
      iVar16 = 0;
    }
    uVar12 = (uint)(*(int *)(iVar10 + 0x80) < 0xa0) ^ 1;
    uVar8 = (uint)(*(int *)(in_t2 + iVar16 * 0xc + 0x80) < 0xa0) ^ 1;
    if (uVar12 != 0) {
      puVar4 = in_stack_00000044;
      if (((iVar18 != 1) && (puVar4 = in_stack_00000040, 1 < iVar18)) &&
         (puVar4 = in_stack_00000040, iVar18 == 2)) {
        puVar4 = in_stack_00000048;
      }
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      copFunction(2,0x180001);
      *(undefined4 *)(psVar13 + 1) = *(undefined4 *)(iVar20 + 0xb8);
      *puVar23 = *(uint *)(iVar20 + 0xa8);
      uVar1 = getCopReg(2,0xe);
      puVar23[1] = uVar1;
      uVar14 = getCopReg(2,0xe);
      *(undefined4 *)(in_t2 + iVar9 * 4 + 0xc4) = uVar14;
      iVar25 = getCopReg(2,0x13);
      if (iVar22 < iVar25) {
        iVar22 = iVar25;
      }
      vertex0 = (SVECTOR *)((uint)(int)psVar13[-1] >> 0x1f);
      if (*psVar13 < 0) {
        vertex0 = (SVECTOR *)((uint)vertex0 | 2);
      }
      if (0x200 < (int)psVar13[-1]) {
        vertex0 = (SVECTOR *)((uint)vertex0 | 4);
      }
      if (0xf0 < *psVar13) {
        vertex0 = (SVECTOR *)((uint)vertex0 | 8);
      }
      uVar19 = uVar19 & (uint)vertex0;
      iVar9 = iVar9 + 1;
      psVar13 = psVar13 + 6;
      puVar23 = puVar23 + 3;
    }
    if (uVar12 != uVar8) {
      iVar11 = in_t2 + iVar16 * 0xc;
      iVar25 = ((*(int *)(iVar10 + 0x80) + -0xa0) * 0x1000) /
               (*(int *)(iVar10 + 0x80) - *(int *)(iVar11 + 0x80));
      if (iVar25 < 0) {
        iVar25 = -iVar25;
      }
      iVar26 = (*(int *)(iVar11 + 0x78) - *(int *)(iVar10 + 0x78)) * iVar25;
      vertex2 = (SVECTOR *)(0x1000 - iVar25);
      if (iVar26 < 0) {
        iVar26 = iVar26 + 0xfff;
      }
      iVar26 = (*(int *)(iVar10 + 0x78) + (iVar26 >> 0xc)) * 2 + 0x100;
      sVar7 = (short)iVar26;
      if (0x3ff < iVar26) {
        sVar7 = 0x3ff;
      }
      if (iVar26 < -0x3ff) {
        sVar7 = -0x3ff;
      }
      psVar13[-1] = sVar7;
      iVar11 = (*(int *)(iVar11 + 0x7c) - *(int *)(iVar10 + 0x7c)) * iVar25;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 0xfff;
      }
      iVar11 = (*(int *)(iVar10 + 0x7c) + (iVar11 >> 0xc)) * 2 + 0x78;
      sVar7 = (short)iVar11;
      if (0x3ff < iVar11) {
        sVar7 = 0x3ff;
      }
      if (iVar11 < -0x3ff) {
        sVar7 = -0x3ff;
      }
      *psVar13 = sVar7;
      setCopReg(2,0x4000,vertex2);
      pbVar5 = (byte *)(in_t2 + iVar21 + 0xb8);
      setCopReg(2,0x4800,(uint)*pbVar5);
      setCopReg(2,0x5000,(uint)pbVar5[1]);
      copFunction(2,0x198003d);
      setCopReg(2,0x4000,iVar25);
      pbVar5 = (byte *)(in_t2 + iVar16 * 4 + 0xb8);
      setCopReg(2,0x4800,(uint)*pbVar5);
      setCopReg(2,0x5000,(uint)pbVar5[1]);
      copFunction(2,0x1a8003e);
      uVar14 = getCopReg(2,0x4800);
      uVar15 = getCopReg(2,0x5000);
      *(char *)(puVar23 + 2) = (char)uVar14;
      *(undefined *)((int)puVar23 + 9) = (char)uVar15;
      setCopReg(2,0x4000,vertex2);
      pbVar5 = (byte *)(in_t2 + iVar21 + 0xa8);
      setCopReg(2,0x4800,(uint)*pbVar5);
      setCopReg(2,0x5000,(uint)pbVar5[1]);
      setCopReg(2,0x5800,(uint)pbVar5[2]);
      copFunction(2,0x198003d);
      setCopReg(2,0x4000,iVar25);
      pbVar5 = (byte *)(in_t2 + iVar16 * 4 + 0xa8);
      setCopReg(2,0x4800,(uint)*pbVar5);
      setCopReg(2,0x5000,(uint)pbVar5[1]);
      setCopReg(2,0x5800,(uint)pbVar5[2]);
      copFunction(2,0x1a8003e);
      uVar14 = getCopReg(2,0x4800);
      uVar15 = getCopReg(2,0x5000);
      uVar17 = getCopReg(2,0x5800);
      *(char *)puVar23 = (char)uVar14;
      *(undefined *)((int)puVar23 + 1) = (char)uVar15;
      *(undefined *)((int)puVar23 + 2) = (char)uVar17;
      *(undefined4 *)(iVar9 * 4 + in_t2 + 0xc4) = *(undefined4 *)(psVar13 + -1);
      vertex0 = (SVECTOR *)(int)*psVar13;
      uVar8 = (uint)(int)psVar13[-1] >> 0x1f;
      if ((int)vertex0 < 0) {
        uVar8 = uVar8 | 2;
      }
      if (0x200 < (int)psVar13[-1]) {
        uVar8 = uVar8 | 4;
      }
      if (0xf0 < (int)vertex0) {
        uVar8 = uVar8 | 8;
      }
      uVar19 = uVar19 & uVar8;
      iVar9 = iVar9 + 1;
      psVar13 = psVar13 + 6;
      puVar23 = puVar23 + 3;
    }
    iVar21 = iVar21 + 4;
    iVar10 = iVar10 + 0xc;
    iVar18 = iVar18 + 1;
    iVar20 = iVar20 + 4;
  } while (iVar18 < 3);
  if (uVar19 != 0) {
    return 2;
  }
  iVar22 = iVar22 >> 2;
  uVar19 = (uint)(iVar22 < 0xc00);
  if (iVar22 < 0xc00) {
    if (in_stack_0000006c == 0) {
      bVar2 = false;
      if (0 < iVar9) {
        iVar18 = 1;
        iVar10 = in_t2;
        iVar20 = 0;
        do {
          iVar21 = iVar18 << 2;
          if (iVar9 <= iVar18) {
            iVar18 = 0;
            iVar21 = 0;
          }
          vertex0 = (SVECTOR *)(int)*(short *)(iVar10 + 0xc4);
          uVar8 = SEXT24(*(short *)(in_t2 + iVar21 + 0xc4));
          pSVar6 = (SVECTOR *)((int)vertex0 - uVar8);
          if ((int)pSVar6 < 0) {
            pSVar6 = (SVECTOR *)(uVar8 - (int)vertex0);
          }
          uVar19 = iVar18 * 4;
          if (0x3ff < (int)pSVar6) {
LAB_8002c1fc:
            bVar2 = true;
            break;
          }
          vertex0 = (SVECTOR *)(int)*(short *)(iVar10 + 0xc6);
          uVar8 = SEXT24(*(short *)(in_t2 + uVar19 + 0xc6));
          pSVar6 = (SVECTOR *)((int)vertex0 - uVar8);
          if ((int)pSVar6 < 0) {
            pSVar6 = (SVECTOR *)(uVar8 - (int)vertex0);
          }
          uVar19 = (uint)((int)pSVar6 < 0x200);
          if ((int)pSVar6 >= 0x200) goto LAB_8002c1fc;
          iVar10 = iVar10 + 4;
          iVar21 = iVar20 + 1;
          uVar19 = (uint)(iVar21 < iVar9);
          iVar18 = iVar20 + 2;
          iVar20 = iVar21;
        } while (iVar21 < iVar9);
      }
      if (bVar2) goto LAB_8002c2b0;
      uVar19 = 4;
      if (iVar9 == 4) {
        vertex0 = (SVECTOR *)(int)*(short *)(in_t2 + 0xd0);
        uVar8 = SEXT24(*(short *)(in_t2 + 200));
        pSVar6 = (SVECTOR *)((int)vertex0 - uVar8);
        if ((int)pSVar6 < 0) {
          pSVar6 = (SVECTOR *)(uVar8 - (int)vertex0);
        }
        uVar19 = (uint)((int)pSVar6 < 0x400);
        if ((int)pSVar6 < 0x400) {
          vertex0 = (SVECTOR *)(int)*(short *)(in_t2 + 0xd2);
          uVar8 = SEXT24(*(short *)(in_t2 + 0xca));
          pSVar6 = (SVECTOR *)((int)vertex0 - uVar8);
          if ((int)pSVar6 < 0) {
            pSVar6 = (SVECTOR *)(uVar8 - (int)vertex0);
          }
          uVar19 = (uint)((int)pSVar6 < 0x200);
          if ((int)pSVar6 < 0x200) goto LAB_8002c2a8;
        }
        bVar2 = true;
      }
LAB_8002c2a8:
      if (bVar2) {
LAB_8002c2b0:
        setCopReg(2,in_zero,*in_stack_00000040);
        setCopReg(2,in_at,in_stack_00000040[1]);
        setCopReg(2,uVar19,*in_stack_00000044);
        setCopReg(2,uVar8,in_stack_00000044[1]);
        setCopReg(2,vertex0,*in_stack_00000048);
        setCopReg(2,iVar9,in_stack_00000048[1]);
        *(undefined *)(in_t2 + 0xb3) = *(undefined *)(in_t2 + 0xab);
        setCopReg(2,unaff_s4,*(undefined4 *)(in_t2 + 0xa8));
        setCopReg(2,in_stack_00000048,*(undefined4 *)(in_t2 + 0xac));
        setCopReg(2,in_stack_00000040,*(undefined4 *)(in_t2 + 0xb0));
        setCopReg(2,vertex2,*(undefined4 *)(in_t2 + 0xb0));
        puVar24[3] = *in_stack_0000004c;
        puVar24[6] = *in_stack_00000050;
        puVar24[9] = *in_stack_00000054;
        FUN_8002c4b8(puVar24,in_stack_00000068,1);
        return 1;
      }
    }
    setCopReg(2,0x6000,puVar24[2]);
    setCopReg(2,0x7000,puVar24[8]);
    setCopReg(2,0x6800,puVar24[5]);
    copFunction(2,0x1400006);
    *(undefined2 *)((int)puVar24 + 0xe) = *(undefined2 *)(in_t2 + 0xba);
    *(undefined2 *)((int)puVar24 + 0x1a) = *(undefined2 *)(in_t2 + 0xbe);
    iVar10 = getCopReg(2,0x18);
    if (0 < iVar10) {
      return 4;
    }
    bVar3 = (byte)((uint)unaff_s8 >> 0x18);
    if (iVar9 == 3) {
      *(byte *)((int)puVar24 + 7) = bVar3;
      puVar23 = (uint *)(iVar22 * 4 + in_stack_00000068);
      *puVar24 = *puVar23 & 0xffffff | 0x9000000;
      *puVar23 = (uint)puVar24 & 0xffffff;
      iVar22 = *unaff_s4;
      iVar20 = unaff_s4[1] + 0x28;
    }
    else {
      if (iVar9 != 4) goto LAB_8002c3fc;
      uVar8 = puVar24[7];
      uVar19 = puVar24[8];
      uVar12 = puVar24[9];
      *(byte *)((int)puVar24 + 7) = bVar3 | 8;
      puVar24[7] = puVar24[10];
      puVar24[8] = puVar24[0xb];
      puVar24[9] = puVar24[0xc];
      puVar24[10] = uVar8;
      puVar24[0xb] = uVar19;
      puVar24[0xc] = uVar12;
      puVar23 = (uint *)(iVar22 * 4 + in_stack_00000068);
      *puVar24 = *puVar23 & 0xffffff | 0xc000000;
      *puVar23 = (uint)puVar24 & 0xffffff;
      iVar22 = *unaff_s4;
      iVar20 = unaff_s4[1] + 0x34;
    }
    iVar10 = 1;
    unaff_s4[1] = iVar20;
    *unaff_s4 = iVar22 + 1;
  }
  else {
LAB_8002c3fc:
    iVar10 = 2;
  }
  return iVar10;
}



// decompiled code
// original method signature: 
// long * /*$ra*/ DRAW_Zclip_subdiv(struct POLY_GT3 *texture /*$t0*/, unsigned long **ot /*stack 4*/, int ndiv /*stack 8*/)
 // line 4420, offset 0x8002c554
	/* begin block 1 */
		// Start line: 4421
		// Start offset: 0x8002C554
		// Variables:
	// 		struct SP_SUBDIV_STRUCT *sp; // $s7
	// 		struct _PrimPool *primPool; // $fp
	// 		int clip; // $s0
	/* end block 1 */
	// End offset: 0x8002CA28
	// End Line: 4556

	/* begin block 2 */
		// Start line: 6517
	/* end block 2 */
	// End Line: 6518

long * DRAW_Zclip_subdiv(POLY_GT3 *texture,ulong **ot,int ndiv)

{
  undefined4 in_v0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int in_t0;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *unaff_s7;
  int unaff_s8;
  undefined4 *puStack00000010;
  undefined4 *puStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  unaff_s7[8] = in_v0;
  *(POLY_GT3 **)(unaff_s7 + 7) = texture;
  *(ulong ***)(unaff_s7 + 9) = ot;
  unaff_s7[10] = unaff_s7[4];
  unaff_s7[0xb] = unaff_s7[5];
  unaff_s7[6] = *unaff_s7;
  *(short *)(unaff_s7 + 0xc) =
       (short)((int)((int)*(short *)(unaff_s7 + 6) + (int)*(short *)(unaff_s7 + 8) +
                    ((uint)((int)*(short *)(unaff_s7 + 6) + (int)*(short *)(unaff_s7 + 8)) >> 0x1f))
              >> 1);
  uVar1 = (int)*(short *)((int)unaff_s7 + 0x1a) + (int)*(short *)((int)unaff_s7 + 0x22);
  *(undefined2 *)((int)unaff_s7 + 0x32) = (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
  *(short *)(unaff_s7 + 0xd) =
       (short)((int)((int)*(short *)(unaff_s7 + 7) + (int)*(short *)(unaff_s7 + 9) +
                    ((uint)((int)*(short *)(unaff_s7 + 7) + (int)*(short *)(unaff_s7 + 9)) >> 0x1f))
              >> 1);
  *(short *)(unaff_s7 + 0xe) =
       (short)((int)((int)*(short *)(unaff_s7 + 8) + (int)*(short *)(unaff_s7 + 10) +
                    ((uint)((int)*(short *)(unaff_s7 + 8) + (int)*(short *)(unaff_s7 + 10)) >> 0x1f)
                    ) >> 1);
  uVar1 = (int)*(short *)((int)unaff_s7 + 0x22) + (int)*(short *)((int)unaff_s7 + 0x2a);
  *(undefined2 *)((int)unaff_s7 + 0x3a) = (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
  *(short *)(unaff_s7 + 0xf) =
       (short)((int)((int)*(short *)(unaff_s7 + 9) + (int)*(short *)(unaff_s7 + 0xb) +
                    ((uint)((int)*(short *)(unaff_s7 + 9) + (int)*(short *)(unaff_s7 + 0xb)) >> 0x1f
                    )) >> 1);
  *(short *)(unaff_s7 + 0x10) =
       (short)((int)((int)*(short *)(unaff_s7 + 10) + (int)*(short *)(unaff_s7 + 6) +
                    ((uint)((int)*(short *)(unaff_s7 + 10) + (int)*(short *)(unaff_s7 + 6)) >> 0x1f)
                    ) >> 1);
  uVar1 = (int)*(short *)((int)unaff_s7 + 0x2a) + (int)*(short *)((int)unaff_s7 + 0x1a);
  *(undefined2 *)((int)unaff_s7 + 0x42) = (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
  *(short *)(unaff_s7 + 0x11) =
       (short)((int)((int)*(short *)(unaff_s7 + 0xb) + (int)*(short *)(unaff_s7 + 7) +
                    ((uint)((int)*(short *)(unaff_s7 + 0xb) + (int)*(short *)(unaff_s7 + 7)) >> 0x1f
                    )) >> 1);
  puVar11 = unaff_s7 + 0x15;
  unaff_s7[0x12] = *(undefined4 *)(in_t0 + 0xc);
  puVar8 = unaff_s7 + 0x17;
  unaff_s7[0x13] = *(undefined4 *)(in_t0 + 0x18);
  puVar10 = unaff_s7 + 0xc;
  unaff_s7[0x14] = *(undefined4 *)(in_t0 + 0x24);
  *(char *)(unaff_s7 + 0x15) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x12) + (uint)*(byte *)(unaff_s7 + 0x13)) >> 1);
  puVar6 = unaff_s7 + 0x10;
  *(undefined2 *)((int)unaff_s7 + 0x5a) = *(undefined2 *)((int)unaff_s7 + 0x4e);
  *(undefined2 *)((int)unaff_s7 + 0x56) = *(undefined2 *)((int)unaff_s7 + 0x4e);
  *(undefined *)((int)unaff_s7 + 0x55) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x49) + (uint)*(byte *)((int)unaff_s7 + 0x4d))
             >> 1);
  *(char *)(unaff_s7 + 0x16) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x13) + (uint)*(byte *)(unaff_s7 + 0x14)) >> 1);
  *(undefined *)((int)unaff_s7 + 0x59) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x4d) + (uint)*(byte *)((int)unaff_s7 + 0x51))
             >> 1);
  *(char *)(unaff_s7 + 0x17) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x14) + (uint)*(byte *)(unaff_s7 + 0x12)) >> 1);
  *(undefined *)((int)unaff_s7 + 0x5d) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x51) + (uint)*(byte *)((int)unaff_s7 + 0x49))
             >> 1);
  *(undefined2 *)((int)unaff_s7 + 0x5e) = *(undefined2 *)((int)unaff_s7 + 0x4a);
  *(char *)(unaff_s7 + 0x1b) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x18) + (uint)*(byte *)(unaff_s7 + 0x19)) >> 1);
  *(undefined *)((int)unaff_s7 + 0x6d) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x61) + (uint)*(byte *)((int)unaff_s7 + 0x65))
             >> 1);
  *(undefined *)((int)unaff_s7 + 0x6e) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x62) + (uint)*(byte *)((int)unaff_s7 + 0x66))
             >> 1);
  *(char *)(unaff_s7 + 0x1c) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x19) + (uint)*(byte *)(unaff_s7 + 0x1a)) >> 1);
  *(undefined *)((int)unaff_s7 + 0x71) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x65) + (uint)*(byte *)((int)unaff_s7 + 0x69))
             >> 1);
  *(undefined *)((int)unaff_s7 + 0x72) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x66) + (uint)*(byte *)((int)unaff_s7 + 0x6a))
             >> 1);
  *(char *)(unaff_s7 + 0x1d) =
       (char)((int)((uint)*(byte *)(unaff_s7 + 0x1a) + (uint)*(byte *)(unaff_s7 + 0x18)) >> 1);
  *(undefined *)((int)unaff_s7 + 0x75) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x69) + (uint)*(byte *)((int)unaff_s7 + 0x61))
             >> 1);
  *(undefined *)((int)unaff_s7 + 0x76) =
       (char)((int)((uint)*(byte *)((int)unaff_s7 + 0x6a) + (uint)*(byte *)((int)unaff_s7 + 0x62))
             >> 1);
  *(undefined *)((int)unaff_s7 + 0x77) = *(undefined *)((int)unaff_s7 + 99);
  *(undefined *)((int)unaff_s7 + 0x6f) = *(undefined *)((int)unaff_s7 + 99);
  uStack00000018 = unaff_s7[0x18];
  uStack0000001c = unaff_s7[0x1b];
  uStack00000020 = unaff_s7[0x1d];
  puStack00000010 = puVar11;
  puStack00000014 = puVar8;
  uVar1 = FUN_8002bc78(unaff_s7 + 6,puVar10,puVar6,unaff_s7 + 0x12);
  puVar7 = unaff_s7 + 0x16;
  puStack00000014 = unaff_s7 + 0x14;
  uStack00000018 = unaff_s7[0x1d];
  puVar9 = unaff_s7 + 0xe;
  uStack0000001c = unaff_s7[0x1c];
  uStack00000020 = unaff_s7[0x1a];
  puStack00000010 = puVar7;
  uVar2 = FUN_8002bc78(puVar6,puVar9,(uint)unaff_s7 | 0x28,puVar8);
  *(undefined2 *)((int)unaff_s7 + 0x56) = *(undefined2 *)((int)unaff_s7 + 0x4a);
  *(undefined2 *)((int)unaff_s7 + 0x5e) = *(undefined2 *)((int)unaff_s7 + 0x4e);
  uStack00000018 = unaff_s7[0x1b];
  uStack0000001c = unaff_s7[0x1c];
  uStack00000020 = unaff_s7[0x1d];
  puStack00000010 = puVar7;
  puStack00000014 = puVar8;
  uVar3 = FUN_8002bc78(puVar10,puVar9,puVar6,puVar11);
  puStack00000010 = unaff_s7 + 0x13;
  uStack00000018 = unaff_s7[0x1b];
  uStack0000001c = unaff_s7[0x19];
  uStack00000020 = unaff_s7[0x1c];
  puStack00000014 = puVar7;
  uVar4 = FUN_8002bc78(puVar10,(uint)unaff_s7 | 0x20,puVar9,puVar11);
  plVar5 = (long *)0x0;
  if (((uVar1 | uVar2 | uVar3 | uVar4) & 5) != 4) {
    plVar5 = *(long **)(unaff_s8 + 4);
  }
  return plVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRAW_LoadingMessage()
 // line 4569, offset 0x8002ca58
	/* begin block 1 */
		// Start line: 4572
		// Start offset: 0x8002CA68
		// Variables:
	// 		unsigned long **drawot; // $s0
	/* end block 1 */
	// End offset: 0x8002CA90
	// End Line: 4583

	/* begin block 2 */
		// Start line: 7028
	/* end block 2 */
	// End Line: 7029

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRAW_LoadingMessage(void)

{
  undefined4 in_a0;
  int unaff_s0;
  
  FUN_800b7e7c(in_a0,0x96);
  FUN_8002d464();
  FUN_800bad64(*(undefined4 *)(&DAT_00002ffc + unaff_s0));
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}





