#include "THISDUST.H"
#include "COLLIDE.H"


// decompiled code
// original method signature: 
// int /*$ra*/ COLLIDE_PointInTriangle(struct _SVector *v0 /*$a0*/, struct _SVector *v1 /*$a1*/, struct _SVector *v2 /*$a2*/, struct _SVector *point /*$a3*/, struct _SVector *normal /*stack 16*/)
 // line 243, offset 0x8001e460
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8001E460
		// Variables:
	// 		struct _Triangle2D *triangle; // $t2
	// 		int nx; // $t1
	// 		int ny; // $v1
	// 		short tx; // $t0
	// 		short ty; // $a3

		/* begin block 1.1 */
			// Start line: 244
			// Start offset: 0x8001E59C
			// Variables:
		// 		struct _Triangle2D *tri; // $t2
		// 		short tx; // $t0
		// 		short ty; // $a3

			/* begin block 1.1.1 */
				// Start line: 244
				// Start offset: 0x8001E59C
				// Variables:
			// 		int inside_flag; // $t3
			// 		int line_flag; // $t7
			// 		struct DVECTOR *vert1; // $t2
			// 		struct DVECTOR *vert0; // $t1
			// 		int yflag1; // $t5
			// 		int yflag0; // $v1
			// 		int j; // $t6

				/* begin block 1.1.1.1 */
					// Start line: 244
					// Start offset: 0x8001E614
					// Variables:
				// 		long ydist; // $v0
				// 		long xdist; // $v0
				// 		long xdiff; // $v1
				// 		long ydiff; // $a1
				// 		long ix; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8001E67C
				// End Line: 244
			/* end block 1.1.1 */
			// End offset: 0x8001E6FC
			// End Line: 244
		/* end block 1.1 */
		// End offset: 0x8001E6FC
		// End Line: 244
	/* end block 1 */
	// End offset: 0x8001E6FC
	// End Line: 288

	/* begin block 2 */
		// Start line: 369
	/* end block 2 */
	// End Line: 370

	/* begin block 3 */
		// Start line: 486
	/* end block 3 */
	// End Line: 487

int COLLIDE_PointInTriangle(_SVector *v0,_SVector *v1,_SVector *v2,_SVector *point,_SVector *normal)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int in_v0;
  bool bVar6;
  int in_v1;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *in_t2;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  if (in_v0 < 0) {
    in_v0 = -in_v0;
  }
  if (in_v0 < in_v1) {
    sVar2 = point->x;
    uVar3 = point->z;
    *in_t2 = CONCAT22(v0->z,v0->x);
    in_t2[1] = CONCAT22(v1->z,v1->x);
    sVar1 = v2->z;
  }
  else {
    sVar2 = point->x;
    uVar3 = point->y;
    *in_t2 = *(undefined4 *)v0;
    in_t2[1] = *(undefined4 *)v1;
    sVar1 = v2->y;
  }
  in_t2[2] = CONCAT22(sVar1,v2->x);
  uVar13 = 0;
  bVar4 = false;
  iVar15 = 3;
  iVar14 = (int)((uint)uVar3 << 0x10) >> 0x10;
  iVar8 = (int)sVar2;
  puVar12 = in_t2 + 2;
  bVar6 = (int)((uint)uVar3 << 0x10) <= (int)((uint)*(ushort *)((int)in_t2 + 10) << 0x10);
  do {
    iVar11 = (int)*(short *)((int)in_t2 + 2);
    if (bVar6 == iVar14 <= iVar11) {
      bVar5 = bVar4;
      if ((bVar6 != false) && (bVar5 = bVar4, iVar14 == (int)*(short *)((int)puVar12 + 2))) {
        if (iVar14 == iVar11) {
          iVar7 = (int)*(short *)in_t2;
          if ((int)*(short *)puVar12 < iVar8 != iVar7 < iVar8) {
            return 1;
          }
          if (iVar8 == (int)*(short *)puVar12) {
            return 1;
          }
        }
        else {
          iVar7 = (int)*(short *)puVar12;
        }
        bVar5 = bVar4;
        if (iVar8 == iVar7) {
          return 1;
        }
      }
    }
    else {
      iVar7 = (int)*(short *)puVar12;
      iVar10 = (int)*(short *)in_t2;
      if (iVar8 <= iVar7 == iVar8 <= iVar10) {
        if (iVar8 <= iVar7) {
          uVar13 = (uint)(uVar13 == 0);
        }
      }
      else {
        uVar9 = (int)*(short *)((int)puVar12 + 2) - iVar11;
        iVar7 = (iVar10 - iVar8) * uVar9 - (iVar11 - iVar14) * (iVar7 - iVar10);
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
          iVar7 = -iVar7;
        }
        iVar10 = (int)(uVar9 + (uVar9 >> 0x1f)) >> 1;
        if (iVar10 < iVar7) {
          uVar13 = (uint)(uVar13 == 0);
        }
        else {
          if (-iVar10 <= iVar7) {
            return 1;
          }
        }
      }
      bVar5 = true;
      if (bVar4) {
        return uVar13;
      }
    }
    bVar4 = bVar5;
    iVar15 = iVar15 + -1;
    puVar12 = in_t2;
    in_t2 = in_t2 + 1;
    bVar6 = iVar14 <= iVar11;
    if (iVar15 == 0) {
      return uVar13;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ COLLIDE_PointInTriangle2DPub(short *v0 /*$a0*/, short *v1 /*$a1*/, short *v2 /*$a2*/, short *point /*$a3*/)
 // line 296, offset 0x8001e704
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8001E704
		// Variables:
	// 		struct _SVector normal; // stack offset -16
	/* end block 1 */
	// End offset: 0x8001E704
	// End Line: 297

	/* begin block 2 */
		// Start line: 485
	/* end block 2 */
	// End Line: 486

int COLLIDE_PointInTriangle2DPub(short *v0,short *v1,short *v2,short *point)

{
  ushort uVar1;
  int in_v0;
  int in_v1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(v1 + in_v0 + in_v1);
  uVar1 = *puVar2;
  *v2 = -(uVar1 & 0x1fff);
  v2[1] = -puVar2[1];
  v2[2] = -puVar2[2];
  return (int)((uint)uVar1 << 0x10) >> 0x1d;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_GetNormal(short nNum /*$a0*/, short *nrmlArray /*$a1*/, struct _SVector *nrml /*$a2*/)
 // line 312, offset 0x8001e750
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8001E750
		// Variables:
	// 		short *sPtr; // $a1
	// 		long bitMask; // $v1
	/* end block 1 */
	// End offset: 0x8001E7E0
	// End Line: 339

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

	/* begin block 3 */
		// Start line: 519
	/* end block 3 */
	// End Line: 520

	/* begin block 4 */
		// Start line: 522
	/* end block 4 */
	// End Line: 523

long COLLIDE_GetNormal(short nNum,short *nrmlArray,_SVector *nrml)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  int iVar4;
  undefined2 in_register_00000012;
  int iVar5;
  undefined2 *in_t6;
  
  iVar5 = *(int *)(CONCAT22(in_register_00000012,nNum) + 0x1c);
  psVar1 = (short *)(iVar5 + (uint)(ushort)nrmlArray[1] * 0xc);
  psVar3 = (short *)(iVar5 + (uint)(ushort)*nrmlArray * 0xc);
  DAT_1f800000 = (int)*psVar1 - (int)*psVar3;
  DAT_1f800004 = (int)psVar1[1] - (int)psVar3[1];
  DAT_1f800008 = (int)psVar1[2] - (int)psVar3[2];
  psVar1 = (short *)(iVar5 + (uint)(ushort)nrmlArray[2] * 0xc);
  DAT_1f800018 = (int)psVar1[2] - (int)psVar3[2];
  DAT_1f800014 = (int)psVar1[1] - (int)psVar3[1];
  DAT_1f800010 = (int)*psVar1 - (int)*psVar3;
  DAT_1f800024 = (int)(short)-(short)(DAT_1f800000 * DAT_1f800018 - DAT_1f800008 * DAT_1f800010 >>
                                     0xc);
  iVar5 = DAT_1f800024;
  if (DAT_1f800024 < 0) {
    iVar5 = -DAT_1f800024;
  }
  DAT_1f800020 = (DAT_1f800004 * DAT_1f800018 - DAT_1f800008 * DAT_1f800014) * 0x10 >> 0x10;
  iVar4 = DAT_1f800020;
  if (DAT_1f800020 < 0) {
    iVar4 = -DAT_1f800020;
  }
  DAT_1f800028 = (DAT_1f800000 * DAT_1f800014 - DAT_1f800004 * DAT_1f800010) * 0x10 >> 0x10;
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = DAT_1f800028;
  if (DAT_1f800028 < 0) {
    iVar4 = -DAT_1f800028;
  }
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  lVar2 = DAT_1f800020 << 0xc;
  if (iVar5 != 0) {
    *in_t6 = (short)(lVar2 / iVar5);
    in_t6[1] = (short)((DAT_1f800024 << 0xc) / iVar5);
    lVar2 = (DAT_1f800028 << 0xc) / iVar5;
    in_t6[2] = (short)lVar2;
  }
  return lVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_MakeNormal(struct _Terrain *terrain /*$a0*/, struct _TFace *tface /*$a1*/, struct _SVector *normal /*$t6*/)
 // line 368, offset 0x8001e7e8
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8001E7E8
		// Variables:
	// 		struct _SVector *vertex0; // $v1
	// 		struct _SVector *vertex1; // $v0
	// 		struct _SVector *vertex2; // $a2
	// 		int len; // $a0
	// 		struct _Vector *a; // $v0
	// 		struct _Vector *b; // $v0
	// 		struct _Vector *n; // $t0

		/* begin block 1.1 */
			// Start line: 369
			// Start offset: 0x8001E7E8
			// Variables:
		// 		long _x0; // $t1
		// 		long _y0; // $t2
		// 		long _z0; // $t0
		// 		long _x1; // $a0
		// 		long _y1; // $v0
		// 		long _z1; // $a0
		/* end block 1.1 */
		// End offset: 0x8001E7E8
		// End Line: 369

		/* begin block 1.2 */
			// Start line: 369
			// Start offset: 0x8001E7E8
			// Variables:
		// 		long _x0; // $a0
		// 		long _y0; // $a1
		// 		long _z0; // $a3
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v0
		/* end block 1.2 */
		// End offset: 0x8001E7E8
		// End Line: 369
	/* end block 1 */
	// End offset: 0x8001E9B8
	// End Line: 399

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

void COLLIDE_MakeNormal(_Terrain *terrain,_TFace *tface,_SVector *normal)

{
  int iVar1;
  short *in_v1;
  int iVar2;
  int in_a3;
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t5;
  undefined2 *in_t6;
  
  DAT_1f800010 = (int)normal->x - (int)*in_v1;
  DAT_1f800024 = (int)(short)-(short)(in_t1 * in_a3 - in_t0 * DAT_1f800010 >> 0xc);
  iVar1 = DAT_1f800024;
  if (DAT_1f800024 < 0) {
    iVar1 = -DAT_1f800024;
  }
  DAT_1f800020 = (in_t5 - in_t0 * (int)tface) * 0x10 >> 0x10;
  iVar2 = DAT_1f800020;
  if (DAT_1f800020 < 0) {
    iVar2 = -DAT_1f800020;
  }
  DAT_1f800028 = (in_t1 * (int)tface - in_t2 * DAT_1f800010) * 0x10 >> 0x10;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = DAT_1f800028;
  if (DAT_1f800028 < 0) {
    iVar2 = -DAT_1f800028;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  DAT_1f800014 = tface;
  DAT_1f800018 = in_a3;
  if (iVar1 != 0) {
    DAT_1f800014 = tface;
    DAT_1f800018 = in_a3;
    *in_t6 = (short)((DAT_1f800020 << 0xc) / iVar1);
    in_t6[1] = (short)((DAT_1f800024 << 0xc) / iVar1);
    in_t6[2] = (short)((DAT_1f800028 << 0xc) / iVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_UpdateAllTransforms(struct _Instance *instance /*$a0*/, struct SVECTOR *offset /*$a1*/)
 // line 415, offset 0x8001e9c0
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x8001E9C0
		// Variables:
	// 		struct MATRIX *swTransform; // $v1

		/* begin block 1.1 */
			// Start line: 421
			// Start offset: 0x8001E9D0
			// Variables:
		// 		int i; // $a2
		// 		long numMatrices; // $v0
		// 		long ox; // $t1
		// 		long oy; // $t0
		// 		long oz; // $a1
		/* end block 1.1 */
		// End offset: 0x8001EA88
		// End Line: 447
	/* end block 1 */
	// End offset: 0x8001EA88
	// End Line: 448

	/* begin block 2 */
		// Start line: 801
	/* end block 2 */
	// End Line: 802

	/* begin block 3 */
		// Start line: 802
	/* end block 3 */
	// End Line: 803

	/* begin block 4 */
		// Start line: 804
	/* end block 4 */
	// End Line: 805

void COLLIDE_UpdateAllTransforms(_Instance *instance,SVECTOR *offset)

{
  _Instance *p_Var1;
  NodeType *pNVar2;
  int in_a2;
  int in_t0;
  int in_t1;
  
  while( true ) {
    pNVar2 = (instance->node).prev;
    instance->LinkChild = (_Instance *)((int)&(instance->LinkChild->node).prev + in_t1);
    p_Var1 = instance->LinkSibling;
    (instance->node).prev = (NodeType *)((int)&offset->vx + (int)pNVar2);
    instance->LinkSibling = (_Instance *)((int)&(p_Var1->node).prev + in_t0);
    instance = (_Instance *)&instance->intro;
    if (in_a2 == 0) break;
    in_a2 = in_a2 + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_MoveAllTransforms(struct _Instance *instance /*$a0*/, struct _Position *offset /*$a1*/)
 // line 450, offset 0x8001ea90
	/* begin block 1 */
		// Start line: 452
		// Start offset: 0x8001EA90
		// Variables:
	// 		struct MATRIX *swTransform; // $v1

		/* begin block 1.1 */
			// Start line: 456
			// Start offset: 0x8001EAA0
			// Variables:
		// 		int i; // $a2
		// 		long ox; // $t1
		// 		long oy; // $t0
		// 		long oz; // $a1
		// 		long numMatrices; // $v0
		/* end block 1.1 */
		// End offset: 0x8001EB58
		// End Line: 480
	/* end block 1 */
	// End offset: 0x8001EB58
	// End Line: 481

	/* begin block 2 */
		// Start line: 884
	/* end block 2 */
	// End Line: 885

	/* begin block 3 */
		// Start line: 885
	/* end block 3 */
	// End Line: 886

	/* begin block 4 */
		// Start line: 887
	/* end block 4 */
	// End Line: 888

void COLLIDE_MoveAllTransforms(_Instance *instance,_Position *offset)

{
  _Instance *p_Var1;
  NodeType *pNVar2;
  int in_a2;
  int in_t0;
  int in_t1;
  
  while( true ) {
    pNVar2 = (instance->node).prev;
    instance->LinkChild = (_Instance *)((int)&(instance->LinkChild->node).prev + in_t1);
    p_Var1 = instance->LinkSibling;
    (instance->node).prev = (NodeType *)((int)&offset->x + (int)pNVar2);
    instance->LinkSibling = (_Instance *)((int)&(p_Var1->node).prev + in_t0);
    instance = (_Instance *)&instance->intro;
    if (in_a2 == 0) break;
    in_a2 = in_a2 + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_WithinYZBounds(struct _SVector *point /*$a0*/, struct _HBox *hbox /*$a1*/)
 // line 590, offset 0x8001eb60
	/* begin block 1 */
		// Start line: 1180
	/* end block 1 */
	// End Line: 1181

	/* begin block 2 */
		// Start line: 1070
	/* end block 2 */
	// End Line: 1071

long COLLIDE_WithinYZBounds(_SVector *point,_HBox *hbox)

{
  return (uint)((int)hbox->maxZ < (int)point) ^ 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_WithinXZBounds(struct _SVector *point /*$a0*/, struct _HBox *hbox /*$a1*/)
 // line 596, offset 0x8001ebbc
	/* begin block 1 */
		// Start line: 1081
	/* end block 1 */
	// End Line: 1082

	/* begin block 2 */
		// Start line: 1082
	/* end block 2 */
	// End Line: 1083

long COLLIDE_WithinXZBounds(_SVector *point,_HBox *hbox)

{
  return (uint)((int)hbox->maxY < (int)point) ^ 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_WithinXYBounds(struct _SVector *point /*$a0*/, struct _HBox *hbox /*$a1*/)
 // line 602, offset 0x8001ec18
	/* begin block 1 */
		// Start line: 1093
	/* end block 1 */
	// End Line: 1094

	/* begin block 2 */
		// Start line: 1094
	/* end block 2 */
	// End Line: 1095

long COLLIDE_WithinXYBounds(_SVector *point,_HBox *hbox)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short *psVar5;
  short *psVar6;
  Level *pLVar7;
  ushort *puVar8;
  uint uVar9;
  short *in_a3;
  int *in_t0;
  code *in_t1;
  ushort *unaff_s0;
  short sStack00000010;
  short sStack00000012;
  short sStack00000014;
  _HBox *p_Stack00000018;
  undefined4 in_stack_0000003c;
  
  uVar9 = (uint)(hbox < (_HBox *)&DAT_00001001);
  if (hbox < (_HBox *)&DAT_00001001) {
    sStack00000010 = *in_a3 + (short)(*in_t0 * (int)hbox >> 0xc);
    sStack00000012 = in_a3[1] + (short)(in_t0[1] * (int)hbox >> 0xc);
    sStack00000014 = in_a3[2] + (short)(in_t0[2] * (int)hbox >> 0xc);
    p_Stack00000018 = hbox;
    uVar9 = (*in_t1)(&stack0x00000010,in_stack_0000003c);
    puVar8 = theCamera.savedCinematic[1].position._0_4_;
    pLVar7 = theCamera.savedCinematic[0].level;
    psVar6 = theCamera.savedCinematic[0].baseVel._4_4_;
    psVar5 = theCamera.savedCinematic[0].baseVel._0_4_;
    if (uVar9 != 0) {
      if ((int)p_Stack00000018 < (int)theCamera.savedCinematic[0].baseAccl._0_4_) {
        sVar1 = theCamera.savedCinematic[0].baseVel._0_4_[1];
        sVar2 = theCamera.savedCinematic[0].baseVel._0_4_[2];
        *theCamera.savedCinematic[0].baseVel._4_4_ = *theCamera.savedCinematic[0].baseVel._0_4_;
        psVar6[1] = sVar1;
        psVar6[2] = sVar2;
        uVar3 = *(ushort *)((int)&pLVar7->terrain + 2);
        uVar4 = *(ushort *)&pLVar7->lightList;
        *puVar8 = *(ushort *)&pLVar7->terrain;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        *psVar5 = sStack00000010;
        psVar5[1] = sStack00000012;
        psVar5[2] = sStack00000014;
        uVar9 = (uint)*unaff_s0;
        uVar3 = unaff_s0[1];
        uVar4 = unaff_s0[2];
        theCamera.savedCinematic[0].baseAccl._4_4_ = theCamera.savedCinematic[0].baseAccl._0_4_;
        theCamera.savedCinematic[0].baseAccl._0_4_ = p_Stack00000018;
        *(ushort *)&pLVar7->terrain = *unaff_s0;
        *(ushort *)((int)&pLVar7->terrain + 2) = uVar3;
        *(ushort *)&pLVar7->lightList = uVar4;
      }
      else {
        uVar9 = (uint)((int)p_Stack00000018 < (int)theCamera.savedCinematic[0].baseAccl._4_4_);
        if ((int)p_Stack00000018 < (int)theCamera.savedCinematic[0].baseAccl._4_4_) {
          *theCamera.savedCinematic[0].baseVel._4_4_ = sStack00000010;
          psVar6[1] = sStack00000012;
          psVar6[2] = sStack00000014;
          uVar9 = (uint)*unaff_s0;
          uVar3 = unaff_s0[1];
          uVar4 = unaff_s0[2];
          theCamera.savedCinematic[0].baseAccl._4_4_ = p_Stack00000018;
          *puVar8 = *unaff_s0;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
        }
      }
    }
  }
  return uVar9;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_LineWithBoxFace(short startDist /*$a0*/, long lineDist /*$a1*/, short planeDist /*$a2*/, struct _SVector *start /*$a3*/, struct _Vector *line /*stack 16*/, struct _HBox *hbox /*stack 20*/, TDRFuncPtr_COLLIDE_LineWithBoxFace6collideBoundFunc collideBoundFunc /*stack 24*/, struct _SVector *normal /*stack 28*/)
 // line 611, offset 0x8001ec74
	/* begin block 1 */
		// Start line: 612
		// Start offset: 0x8001EC74
		// Variables:
	// 		struct _SVector point; // stack offset -24
	// 		long t; // stack offset -16

		/* begin block 1.1 */
			// Start line: 612
			// Start offset: 0x8001ED38
			// Variables:
		// 		struct _SVector *point; // $t1
		// 		struct _SVector *normal; // $s0
		// 		struct _SVector *point0; // $a2
		// 		struct _SVector *normal0; // $a3
		// 		struct _SVector *point1; // $a1
		// 		struct _SVector *normal1; // $t0

			/* begin block 1.1.1 */
				// Start line: 612
				// Start offset: 0x8001ED38

				/* begin block 1.1.1.1 */
					// Start line: 612
					// Start offset: 0x8001ED5C
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x8001ED5C
				// End Line: 612

				/* begin block 1.1.1.2 */
					// Start line: 612
					// Start offset: 0x8001ED5C
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.2 */
				// End offset: 0x8001ED5C
				// End Line: 612

				/* begin block 1.1.1.3 */
					// Start line: 612
					// Start offset: 0x8001ED5C
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.3 */
				// End offset: 0x8001ED5C
				// End Line: 612

				/* begin block 1.1.1.4 */
					// Start line: 612
					// Start offset: 0x8001ED5C
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.4 */
				// End offset: 0x8001ED5C
				// End Line: 612

				/* begin block 1.1.1.5 */
					// Start line: 612
					// Start offset: 0x8001EDDC
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.5 */
				// End offset: 0x8001EDDC
				// End Line: 612

				/* begin block 1.1.1.6 */
					// Start line: 612
					// Start offset: 0x8001EDDC
					// Variables:
				// 		short _z1; // $a0
				// 		short _y1; // $v1
				// 		short _x1; // $v0
				/* end block 1.1.1.6 */
				// End offset: 0x8001EDDC
				// End Line: 612
			/* end block 1.1.1 */
			// End offset: 0x8001EE10
			// End Line: 612
		/* end block 1.1 */
		// End offset: 0x8001EE10
		// End Line: 612
	/* end block 1 */
	// End offset: 0x8001EE10
	// End Line: 643

	/* begin block 2 */
		// Start line: 1111
	/* end block 2 */
	// End Line: 1112

void COLLIDE_LineWithBoxFace
               (short startDist,long lineDist,short planeDist,_SVector *start,_Vector *line,
               _HBox *hbox,TDRFuncPtr_COLLIDE_LineWithBoxFace6collideBoundFunc collideBoundFunc,
               _SVector *normal)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  Level *pLVar5;
  undefined2 *puVar6;
  short sVar7;
  int iVar8;
  undefined2 in_register_0000001a;
  code *in_t1;
  undefined2 *unaff_s0;
  int in_lo;
  undefined4 in_stack_0000003c;
  
  sVar7 = start->z + (short)(in_lo >> 0xc);
  iVar8 = (*in_t1)(&line,in_stack_0000003c,CONCAT22(in_register_0000001a,planeDist));
  puVar6 = theCamera.savedCinematic[1].position._0_4_;
  pLVar5 = theCamera.savedCinematic[0].level;
  puVar4 = theCamera.savedCinematic[0].baseVel._4_4_;
  puVar3 = theCamera.savedCinematic[0].baseVel._0_4_;
  if (iVar8 != 0) {
    if ((int)collideBoundFunc < (int)theCamera.savedCinematic[0].baseAccl._0_4_) {
      uVar1 = theCamera.savedCinematic[0].baseVel._0_4_[1];
      uVar2 = theCamera.savedCinematic[0].baseVel._0_4_[2];
      *theCamera.savedCinematic[0].baseVel._4_4_ = *theCamera.savedCinematic[0].baseVel._0_4_;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      uVar1 = *(undefined2 *)((int)&pLVar5->terrain + 2);
      uVar2 = *(undefined2 *)&pLVar5->lightList;
      *puVar6 = *(undefined2 *)&pLVar5->terrain;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      *puVar3 = line._0_2_;
      puVar3[1] = line._2_2_;
      puVar3[2] = sVar7;
      uVar1 = unaff_s0[1];
      uVar2 = unaff_s0[2];
      theCamera.savedCinematic[0].baseAccl._4_4_ = theCamera.savedCinematic[0].baseAccl._0_4_;
      theCamera.savedCinematic[0].baseAccl._0_4_ = collideBoundFunc;
      *(undefined2 *)&pLVar5->terrain = *unaff_s0;
      *(undefined2 *)((int)&pLVar5->terrain + 2) = uVar1;
      *(undefined2 *)&pLVar5->lightList = uVar2;
    }
    else {
      if ((int)collideBoundFunc < (int)theCamera.savedCinematic[0].baseAccl._4_4_) {
        *theCamera.savedCinematic[0].baseVel._4_4_ = line._0_2_;
        puVar4[1] = line._2_2_;
        puVar4[2] = sVar7;
        uVar1 = unaff_s0[1];
        uVar2 = unaff_s0[2];
        theCamera.savedCinematic[0].baseAccl._4_4_ = collideBoundFunc;
        *puVar6 = *unaff_s0;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_IntersectLineAndBox(struct _SVector *point0 /*$a0*/, struct _SVector *normal0 /*$a1*/, struct _SVector *point1 /*$a2*/, struct _SVector *normal1 /*$a3*/, struct _SVector *end /*stack 16*/, struct _SVector *start /*stack 20*/, struct _HBox *hbox /*stack 24*/)
 // line 650, offset 0x8001ee20
	/* begin block 1 */
		// Start line: 651
		// Start offset: 0x8001EE20
		// Variables:
	// 		struct _SVector normal; // stack offset -64
	// 		struct _Vector line; // stack offset -56

		/* begin block 1.1 */
			// Start line: 651
			// Start offset: 0x8001EE20
			// Variables:
		// 		long _x0; // $a1
		// 		long _y0; // $a2
		// 		long _z0; // $a0
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v1
		// 		struct _Vector *_v; // $s3
		/* end block 1.1 */
		// End offset: 0x8001EE20
		// End Line: 651
	/* end block 1 */
	// End offset: 0x8001F070
	// End Line: 711

	/* begin block 2 */
		// Start line: 1201
	/* end block 2 */
	// End Line: 1202

/* WARNING: Variable defined which should be unmapped: hbox */
/* WARNING: Variable defined which should be unmapped: start */
/* WARNING: Variable defined which should be unmapped: end */

long COLLIDE_IntersectLineAndBox
               (_SVector *point0,_SVector *normal0,_SVector *point1,_SVector *normal1,_SVector *end,
               _SVector *start,_HBox *hbox)

{
  uint uVar1;
  short *unaff_s0;
  int unaff_s2;
  int unaff_s7;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  undefined4 in_stack_00000028;
  short sStack0000002c;
  undefined4 in_stack_0000002c;
  short sStack00000030;
  undefined4 in_stack_00000030;
  
  uStack00000022 = 0;
  uStack00000024 = 0;
  FUN_8001ebd8((int)-*unaff_s0,-(int)normal0,(int)-*(short *)(unaff_s2 + 4));
  uStack00000020 = 0x1000;
  uStack00000022 = 0;
  uStack00000024 = 0;
  FUN_8001ebd8((int)*unaff_s0,in_stack_00000028,(int)*(short *)(unaff_s2 + 10));
  uStack00000020 = 0;
  uStack00000024 = 0;
  FUN_8001ebd8((int)-unaff_s0[1],(int)-sStack0000002c,(int)-*(short *)(unaff_s2 + 6));
  uStack00000020 = 0;
  uStack00000022 = 0x1000;
  uStack00000024 = 0;
  FUN_8001ebd8((int)unaff_s0[1],in_stack_0000002c,(int)*(short *)(unaff_s2 + 0xc));
  uStack00000020 = 0;
  uStack00000022 = 0;
  FUN_8001ebd8((int)-unaff_s0[2],(int)-sStack00000030,(int)-*(short *)(unaff_s2 + 8));
  uStack00000020 = 0;
  uStack00000022 = 0;
  uStack00000024 = 0x1000;
  FUN_8001ebd8((int)unaff_s0[2],in_stack_00000030,(int)*(short *)(unaff_s2 + 0xe));
  if (theCamera.savedCinematic[0].baseAccl._4_4_ == unaff_s7) {
    uVar1 = (uint)(theCamera.savedCinematic[0].baseAccl._0_4_ != unaff_s7);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// struct _TFace * /*$ra*/ COLLIDE_PointAndTerrain(struct _Terrain *terrain /*$a0*/, struct _PCollideInfo *pcollideInfo /*$a1*/, struct _LCollideInfo *lcol /*$a2*/)
 // line 770, offset 0x8001f09c
	/* begin block 1 */
		// Start line: 1519
	/* end block 1 */
	// End Line: 1520

_TFace * COLLIDE_PointAndTerrain(_Terrain *terrain,_PCollideInfo *pcollideInfo,_LCollideInfo *lcol)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 uVar7;
  int iVar8;
  int **ppiVar9;
  short *in_v1;
  ushort *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  ushort *in_t2;
  short *in_t3;
  undefined4 *unaff_s0;
  uint unaff_s1;
  int **ppiVar14;
  int **ppiVar15;
  ushort *puVar16;
  ushort *puVar17;
  int **ppiVar18;
  int unaff_s7;
  short *in_stack_00000018;
  int iStack00000020;
  ushort *puStack00000024;
  undefined4 *puStack00000034;
  ushort *puStack00000038;
  int in_stack_0000006c;
  ushort **in_stack_00000080;
  
  *(_LCollideInfo **)(unaff_s0 + 0x16) = lcol;
  unaff_s0[0x18] = 0;
  unaff_s0[0xf] = in_v0;
  *(_PCollideInfo **)(unaff_s0 + 0x10) = pcollideInfo;
  unaff_s0[0x1a] = *(undefined4 *)(in_t2 + 0x12);
  uVar7 = *(undefined4 *)(in_t2 + 0xe);
  unaff_s0[0x1c] = 0;
  unaff_s0[0x1b] = uVar7;
  DAT_1f8000a4 = *in_t3;
  DAT_1f8000a6 = in_t3[1];
  DAT_1f8000a8 = in_t3[2];
  *in_v1 = DAT_1f8000a4;
  in_v1[1] = DAT_1f8000a6;
  in_v1[2] = DAT_1f8000a8;
  DAT_1f800080 = terrain->UnitChangeFlags;
  DAT_1f800082 = terrain->spad;
  DAT_1f800084 = *(short *)&terrain->lpad2;
  DAT_1f8000a4 = DAT_1f800080 - DAT_1f8000a4;
  DAT_1f8000a6 = DAT_1f800082 - DAT_1f8000a6;
  DAT_1f8000a8 = DAT_1f800084 - DAT_1f8000a8;
  ppiVar15 = (int **)(unaff_s1 | 0xac);
  if ((short)loadStatus.decompressLen == 1000) {
    if (loadStatus.decompressLen._2_2_ == 1) {
      unaff_s0[0x19] = 1;
    }
    else {
      unaff_s0[0x19] = 0;
    }
  }
  else {
    unaff_s0[0x19] = 2;
    unaff_s0[0x18] = 0x800;
  }
  if ((undefined2 *)unaff_s0[0x11] != (undefined2 *)0x0) {
    *(undefined2 *)unaff_s0[0x11] = 0;
  }
  puStack00000038 = (ushort *)0x0;
  if (0 < *(int *)(in_t2 + 0x22)) {
    puStack00000034 = unaff_s0 + 10;
    iStack00000020 = unaff_s7 + 0x124;
    puStack00000024 = in_t2;
    do {
      iVar8 = *(int *)(puStack00000024 + 0x24);
      *(int ***)ppiVar15 = ppiVar15;
      ppiVar18 = (int **)(iVar8 + (int)puStack00000038 * 0x24);
      if ((-1 < *(short *)((int)ppiVar18 + 0x1a)) &&
         (((uVar2 = *(ushort *)((int)ppiVar18 + 0x12), (uVar2 & 2) == 0 ||
           ((*(uint *)(in_stack_0000006c + 0x24) & 0x80) != 0)) ||
          (((uVar2 & 0x40) != 0 && ((*(uint *)(in_stack_0000006c + 0x24) & 0x100) != 0)))))) {
        cVar1 = (char)clearRect[0].y0;
        if ((uVar2 & 0x4100) == 0x4100) {
code_r0x8001f244:
          if (cVar1 != '\0') {
LAB_8001f24c:
            if ((((*(ushort *)((int)ppiVar18 + 0x12) & 0x1000) == 0) ||
                ((unaff_s0[0xf] & 0x10) == 0)) &&
               (((*(ushort *)((int)ppiVar18 + 0x12) & 0x2000) == 0 ||
                (gameTrackerX.controlData[1][2]._2_1_ != '\0')))) {
              sVar3 = *(short *)((int)ppiVar18 + 0xe);
              sVar4 = *(short *)(ppiVar18 + 4);
              *(short *)(unaff_s0 + 0x12) = *(short *)(unaff_s0 + 0x12) - *(short *)(ppiVar18 + 3);
              *(short *)((int)unaff_s0 + 0x4a) = *(short *)((int)unaff_s0 + 0x4a) - sVar3;
              *(short *)(unaff_s0 + 0x13) = *(short *)(unaff_s0 + 0x13) - sVar4;
              sVar3 = *(short *)((int)ppiVar18 + 0xe);
              sVar4 = *(short *)(ppiVar18 + 4);
              *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s0 + 0x14) - *(short *)(ppiVar18 + 3);
              *(short *)((int)unaff_s0 + 0x52) = *(short *)((int)unaff_s0 + 0x52) - sVar3;
              *(short *)(unaff_s0 + 0x15) = *(short *)(unaff_s0 + 0x15) - sVar4;
              *(short *)unaff_s0 = *(short *)(unaff_s0 + 0x12);
              *(short *)((int)unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0x4a);
              *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x13);
              *(short *)((int)unaff_s0 + 6) = *(short *)(unaff_s0 + 0x14);
              *(short *)(unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0x52);
              *(short *)((int)unaff_s0 + 10) = *(short *)(unaff_s0 + 0x15);
              setCopControlWord(2,0,*unaff_s0);
              setCopControlWord(2,0x800,unaff_s0[1]);
              setCopControlWord(2,0x1000,unaff_s0[2]);
              setCopControlWord(2,0x1800,unaff_s0[3]);
              setCopControlWord(2,0x2000,unaff_s0[4]);
              ppiVar9 = (int **)*ppiVar18;
              ppiVar15 = ppiVar15 + 1;
              *(int ***)ppiVar15 = ppiVar9;
              ppiVar14 = ppiVar15;
              if (ppiVar9 != ppiVar15) {
                do {
                  piVar12 = *ppiVar14;
                  ppiVar15 = ppiVar14 + -1;
                  if ((*(ushort *)((int)piVar12 + 0xe) & 2) == 0) {
                    setCopReg(2,in_zero,piVar12[2]);
                    setCopReg(2,in_at,piVar12[3]);
                    copFunction(2,0x486012);
                    uVar7 = getCopReg(2,0x19);
                    *puStack00000034 = uVar7;
                    uVar7 = getCopReg(2,0x1a);
                    puStack00000034[1] = uVar7;
                    uVar7 = getCopReg(2,0x1b);
                    puStack00000034[2] = uVar7;
                    unaff_s0[10] = unaff_s0[10] - piVar12[4];
                    unaff_s0[0xb] = unaff_s0[0xb] - piVar12[4];
                    if (unaff_s0[0x19] == 0) {
                      sVar3 = *(short *)(piVar12 + 10);
                      sVar4 = *(short *)((int)piVar12 + 0x2a);
                    }
                    else {
                      sVar3 = *(short *)(piVar12 + 9);
                      sVar4 = *(short *)((int)piVar12 + 0x26);
                    }
                    iVar8 = unaff_s0[0xb];
                    if (iVar8 < (int)sVar3 + 5) {
                      if ((int)sVar4 + -5 < iVar8) {
                        if ((int)unaff_s0[10] < iVar8) goto LAB_8001fab8;
                        if ((int *)piVar12[5] != (int *)0x0) {
                          *ppiVar14 = (int *)piVar12[5];
                          ppiVar15 = ppiVar14;
                        }
                        piVar12 = (int *)piVar12[6];
                      }
                      else {
                        if (((int)sVar4 + -5 <= (int)unaff_s0[10]) &&
                           ((int *)piVar12[5] != (int *)0x0)) {
                          *ppiVar14 = (int *)piVar12[5];
                          ppiVar15 = ppiVar14;
                        }
                        piVar12 = (int *)piVar12[6];
                      }
                    }
                    else {
                      if ((int)unaff_s0[10] <= (int)sVar3 + 5) {
LAB_8001fab8:
                        if ((int *)piVar12[6] != (int *)0x0) {
                          *ppiVar14 = (int *)piVar12[6];
                          ppiVar15 = ppiVar14;
                        }
                      }
                      piVar12 = (int *)piVar12[5];
                    }
                    if (piVar12 != (int *)0x0) {
                      ppiVar15 = ppiVar15 + 1;
                      *ppiVar15 = piVar12;
                    }
                  }
                  else {
                    iVar13 = unaff_s0[0x18];
                    iVar8 = (int)*(short *)((int)piVar12 + 0x16) + iVar13;
                    if ((((int)*(short *)unaff_s0 <= iVar8) ||
                        ((int)*(short *)((int)unaff_s0 + 6) <= iVar8)) &&
                       (((int)*(short *)(piVar12 + 4) - iVar13 <= (int)*(short *)unaff_s0 ||
                        ((int)*(short *)(piVar12 + 4) - iVar13 <= (int)*(short *)((int)unaff_s0 + 6)
                        )))) {
                      if ((((int)*(short *)((int)unaff_s0 + 2) <=
                            (int)*(short *)(piVar12 + 6) + iVar13) ||
                          ((int)*(short *)(unaff_s0 + 2) <= (int)*(short *)(piVar12 + 6) + iVar13))
                         && ((iVar8 = (int)*(short *)((int)piVar12 + 0x12) - iVar13,
                             iVar8 <= (int)*(short *)((int)unaff_s0 + 2) ||
                             (iVar8 <= (int)*(short *)(unaff_s0 + 2))))) {
                        iVar8 = (int)*(short *)((int)piVar12 + 0x1a) + iVar13;
                        if ((((int)*(short *)(unaff_s0 + 1) <= iVar8) ||
                            ((int)*(short *)((int)unaff_s0 + 10) <= iVar8)) &&
                           (((int)*(short *)(piVar12 + 5) - iVar13 <= (int)*(short *)(unaff_s0 + 1)
                            || ((int)*(short *)(piVar12 + 5) - iVar13 <=
                                (int)*(short *)((int)unaff_s0 + 10))))) {
                          sVar3 = *(short *)(piVar12 + 3);
                          unaff_s0[0x17] = (int)sVar3;
                          puVar17 = (ushort *)piVar12[2];
                          if ((int)sVar3 != 0) {
                            puVar16 = puVar17 + 3;
                            do {
                              if ((((uint)*(byte *)puVar16 & unaff_s0[0xf]) == 0) ||
                                 (((uint)*(byte *)puVar16 & unaff_s0[0x10]) != 0)) {
                                if ((unaff_s0[0x19] == 2) &&
                                   ((uint)puVar16[1] !=
                                    (int)*(short *)(((int)((int)puVar17 -
                                                          *(int *)(puStack00000024 + 0x10)) *
                                                     -0x55555555 >> 2) * 2 +
                                                   *(int *)(puStack00000024 + 0x26)))) {
                                  FUN_8001e74c(puStack00000024,puVar17,unaff_s0 + 8);
                                }
                                else {
                                  iVar8 = (int)(short)puVar16[1];
                                  if (iVar8 < 0) {
                                    puVar10 = (ushort *)(unaff_s0[0x1a] + iVar8 * -6);
                                    *(ushort *)(unaff_s0 + 8) = -(*puVar10 & 0x1fff);
                                    *(short *)((int)unaff_s0 + 0x22) = -puVar10[1];
                                    *(ushort *)(unaff_s0 + 9) = -puVar10[2];
                                  }
                                  else {
                                    puVar10 = (ushort *)(unaff_s0[0x1a] + iVar8 * 6);
                                    *(ushort *)(unaff_s0 + 8) = *puVar10 & 0x1fff;
                                    *(ushort *)((int)unaff_s0 + 0x22) = puVar10[1];
                                    *(ushort *)(unaff_s0 + 9) = puVar10[2];
                                  }
                                }
                                puVar11 = (undefined4 *)(unaff_s0[0x1b] + (uint)*puVar17 * 0xc);
                                setCopControlWord(2,0x1800,*puVar11);
                                setCopControlWord(2,0x2000,puVar11[1]);
                                setCopReg(2,in_zero,unaff_s0[8]);
                                setCopReg(2,in_at,unaff_s0[9]);
                                copFunction(2,0x486012);
                                uVar7 = getCopReg(2,0x19);
                                *puStack00000034 = uVar7;
                                uVar7 = getCopReg(2,0x1a);
                                puStack00000034[1] = uVar7;
                                uVar7 = getCopReg(2,0x1b);
                                puStack00000034[2] = uVar7;
                                unaff_s0[10] = unaff_s0[10] - unaff_s0[0xc];
                                iVar8 = unaff_s0[0xb] - unaff_s0[0xc];
                                unaff_s0[0xb] = iVar8;
                                if ((((int)unaff_s0[10] < 0) && (-1 < iVar8)) ||
                                   (((unaff_s0[0x16] & 1) != 0 &&
                                    ((0 < (int)unaff_s0[10] && (iVar8 < 1)))))) {
                                  iVar8 = unaff_s0[10] - puStack00000034[1];
                                  if (iVar8 == 0) {
                                    iVar8 = 0;
                                  }
                                  else {
                                    iVar8 = (int)(puStack00000034[1] << 0xc) / iVar8;
                                  }
                                  *(short *)(unaff_s0 + 0xd) =
                                       *(short *)(unaff_s0 + 0x14) +
                                       (short)((int)*(short *)(unaff_s0 + 0x1d) * iVar8 >> 0xc);
                                  *(short *)((int)unaff_s0 + 0x36) =
                                       *(short *)((int)unaff_s0 + 0x52) +
                                       (short)((int)*(short *)((int)unaff_s0 + 0x76) * iVar8 >> 0xc)
                                  ;
                                  *(short *)(unaff_s0 + 0xe) =
                                       *(short *)(unaff_s0 + 0x15) +
                                       (short)((int)*(short *)(unaff_s0 + 0x1e) * iVar8 >> 0xc);
                                  iVar8 = FUN_8001e3c4(puVar11,unaff_s0[0x1b] +
                                                               (uint)puVar16[-2] * 0xc,
                                                       unaff_s0[0x1b] + (uint)puVar16[-1] * 0xc,
                                                       unaff_s0 + 0xd);
                                  if (iVar8 != 0) {
                                    if (((((undefined2 *)unaff_s0[0x11] != (undefined2 *)0x0) &&
                                         ((unaff_s0[0x16] & 1) != 0)) && (0 < (int)unaff_s0[10])) &&
                                       ((int)unaff_s0[0xb] < 1)) {
                                      *(undefined2 *)unaff_s0[0x11] = 1;
                                    }
                                    if ((*(byte *)puVar16 & 8) == 0) {
                                      if (((puVar16[2] == 0xffff) ||
                                          ((*(ushort *)
                                             (*(int *)(puStack00000024 + 0x1a) + (uint)puVar16[2] +
                                             10) & 0x2000) == 0)) ||
                                         (((uint)*(byte *)puVar16 & unaff_s0[0x10]) != 0)) {
                                        unaff_s0[0x13] = unaff_s0[0xe];
                                        unaff_s0[0x12] = unaff_s0[0xd];
                                        *unaff_s0 = unaff_s0[0xd];
                                        *(ushort **)(unaff_s0 + 0x1c) = puVar17;
                                        *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x13);
                                        *(short *)(unaff_s0 + 0x1d) =
                                             *(short *)(unaff_s0 + 0x14) -
                                             *(short *)(unaff_s0 + 0x12);
                                        *(short *)((int)unaff_s0 + 0x76) =
                                             *(short *)((int)unaff_s0 + 0x52) -
                                             *(short *)((int)unaff_s0 + 0x4a);
                                        *(short *)(unaff_s0 + 0x1e) =
                                             *(short *)(unaff_s0 + 0x15) -
                                             *(short *)(unaff_s0 + 0x13);
                                        if (in_stack_00000080 != (ushort **)0x0) {
                                          *in_stack_00000080 = puVar17;
                                          in_stack_00000080[1] = puStack00000024;
                                          in_stack_00000080[2] = puStack00000038;
                                        }
                                      }
                                    }
                                    else {
                                      if ((draw[1].dr_env.code[9] & 0x8000) != 0) {
                                        *(ushort **)(unaff_s7 + 0x10c) = puVar17;
                                        *(ushort **)(unaff_s7 + 0x114) = puStack00000024;
                                        uVar7 = unaff_s0[0xe];
                                        *(undefined4 *)(unaff_s7 + 0x124) = unaff_s0[0xd];
                                        *(undefined4 *)(unaff_s7 + 0x128) = uVar7;
                                        sVar3 = *(short *)(iStack00000020 + 2);
                                        sVar4 = *(short *)(iStack00000020 + 4);
                                        sVar5 = *(short *)((int)ppiVar18 + 0xe);
                                        sVar6 = *(short *)(ppiVar18 + 4);
                                        *(short *)(unaff_s7 + 0x124) =
                                             *(short *)(unaff_s7 + 0x124) + *(short *)(ppiVar18 + 3)
                                        ;
                                        *(short *)(iStack00000020 + 2) = sVar3 + sVar5;
                                        *(short *)(iStack00000020 + 4) = sVar4 + sVar6;
                                      }
                                    }
                                    setCopControlWord(2,0,*unaff_s0);
                                    setCopControlWord(2,0x800,unaff_s0[1]);
                                  }
                                }
                              }
                              puVar16 = puVar16 + 6;
                              iVar8 = unaff_s0[0x17];
                              puVar17 = puVar17 + 6;
                              unaff_s0[0x17] = iVar8 + -1;
                            } while (iVar8 + -1 != 0);
                          }
                          if ((unaff_s0[0x1c] != 0) && (unaff_s0[0x19] == 0)) {
                            *(int ***)ppiVar15 = ppiVar15;
                          }
                        }
                      }
                    }
                  }
                  ppiVar14 = ppiVar15;
                } while ((int **)*ppiVar15 != ppiVar15);
              }
              sVar3 = *(short *)((int)ppiVar18 + 0xe);
              sVar4 = *(short *)(ppiVar18 + 4);
              *(short *)(unaff_s0 + 0x12) = *(short *)(unaff_s0 + 0x12) + *(short *)(ppiVar18 + 3);
              *(short *)((int)unaff_s0 + 0x4a) = *(short *)((int)unaff_s0 + 0x4a) + sVar3;
              *(short *)(unaff_s0 + 0x13) = *(short *)(unaff_s0 + 0x13) + sVar4;
              sVar3 = *(short *)((int)ppiVar18 + 0xe);
              sVar4 = *(short *)(ppiVar18 + 4);
              *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s0 + 0x14) + *(short *)(ppiVar18 + 3);
              *(short *)((int)unaff_s0 + 0x52) = *(short *)((int)unaff_s0 + 0x52) + sVar3;
              *(short *)(unaff_s0 + 0x15) = *(short *)(unaff_s0 + 0x15) + sVar4;
            }
          }
        }
        else {
          if (((uVar2 & 0x100) == 0) || ((char)gameTrackerX.instancePool != '\0')) {
            cVar1 = gameTrackerX.instancePool._1_1_;
            if ((uVar2 & 0x4000) != 0) goto code_r0x8001f244;
            goto LAB_8001f24c;
          }
        }
      }
      puStack00000038 = (ushort *)((int)puStack00000038 + 1);
    } while ((int)puStack00000038 < *(int *)(puStack00000024 + 0x22));
  }
  sVar3 = *(short *)((int)unaff_s0 + 0x4a);
  sVar4 = *(short *)(unaff_s0 + 0x13);
  *in_stack_00000018 = *(short *)(unaff_s0 + 0x12);
  in_stack_00000018[1] = sVar3;
  in_stack_00000018[2] = sVar4;
  return (_TFace *)unaff_s0[0x1c];
}



// decompiled code
// original method signature: 
// struct _TFace * /*$ra*/ COLLIDE_PointAndTerrainFunc(struct _Terrain *terrain /*$t2*/, struct _PCollideInfo *pCollideInfo /*stack 4*/, int Flags /*$a2*/, short *Backface_Flag /*$a3*/, long ignoreAttr /*stack 16*/, long acceptAttr /*stack 20*/, struct _LCollideInfo *lcolinfo /*stack 24*/)
 // line 780, offset 0x8001f0cc
	/* begin block 1 */
		// Start line: 781
		// Start offset: 0x8001F0CC
		// Variables:
	// 		struct PandTScratch *CSpad; // $s0
	// 		void **stack; // $s1
	// 		struct _BSPNode *bspNode; // $a1
	// 		int curTree; // stack offset -48
	// 		struct _SVector *NewPos; // stack offset -80
	// 		struct _SVector *OldPos; // $a0
	// 		struct _Instance *instance; // $s7

		/* begin block 1.1 */
			// Start line: 781
			// Start offset: 0x8001F0CC
			// Variables:
		// 		short _x1; // $a3
		// 		short _y1; // $t0
		// 		short _z1; // $t1
		// 		struct _SVector *_v0; // $v1
		/* end block 1.1 */
		// End offset: 0x8001F0CC
		// End Line: 781

		/* begin block 1.2 */
			// Start line: 781
			// Start offset: 0x8001F0CC
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a0
		// 		struct _SVector *_v0; // $a2
		/* end block 1.2 */
		// End offset: 0x8001F0CC
		// End Line: 781

		/* begin block 1.3 */
			// Start line: 781
			// Start offset: 0x8001F0CC
			// Variables:
		// 		struct _SVector *_v; // $a1
		/* end block 1.3 */
		// End offset: 0x8001F0CC
		// End Line: 781

		/* begin block 1.4 */
			// Start line: 837
			// Start offset: 0x8001F22C
			// Variables:
		// 		struct BSPTree *bsp; // $s4

			/* begin block 1.4.1 */
				// Start line: 865
				// Start offset: 0x8001F328
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $t0
			// 		struct _SVector *_v; // $s6
			// 		struct _Position *_v1; // $a3
			/* end block 1.4.1 */
			// End offset: 0x8001F328
			// End Line: 865

			/* begin block 1.4.2 */
				// Start line: 865
				// Start offset: 0x8001F328
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // $s5
			/* end block 1.4.2 */
			// End offset: 0x8001F328
			// End Line: 865

			/* begin block 1.4.3 */
				// Start line: 898
				// Start offset: 0x8001F558
				// Variables:
			// 		struct _TFace *tface; // $s3

				/* begin block 1.4.3.1 */
					// Start line: 905
					// Start offset: 0x8001F5A4
					// Variables:
				// 		struct _SVector *vertex0; // $a0

					/* begin block 1.4.3.1.1 */
						// Start line: 781
						// Start offset: 0x8001F62C
						// Variables:
					// 		short *nrmlArray; // $a0
					// 		struct _SVector *nrml; // $a1

						/* begin block 1.4.3.1.1.1 */
							// Start line: 781
							// Start offset: 0x8001F62C
							// Variables:
						// 		short *sPtr; // $v1
						/* end block 1.4.3.1.1.1 */
						// End offset: 0x8001F6BC
						// End Line: 781
					/* end block 1.4.3.1.1 */
					// End offset: 0x8001F6BC
					// End Line: 781

					/* begin block 1.4.3.1.2 */
						// Start line: 781
						// Start offset: 0x8001F768
						// Variables:
					// 		struct _SVector *point; // $t0
					// 		struct _SVector *start; // $a3
					// 		struct _SVector *line; // $a2

						/* begin block 1.4.3.1.2.1 */
							// Start line: 781
							// Start offset: 0x8001F768
							// Variables:
						// 		long len; // $v1
						// 		long t; // $a1
						/* end block 1.4.3.1.2.1 */
						// End offset: 0x8001F7A0
						// End Line: 781
					/* end block 1.4.3.1.2 */
					// End offset: 0x8001F7A0
					// End Line: 781

					/* begin block 1.4.3.1.3 */
						// Start line: 950
						// Start offset: 0x8001F8CC
						// Variables:
					// 		short _x0; // $v0
					// 		short _y0; // $v1
					// 		short _z0; // $a1
					// 		short _x1; // $a0
					// 		short _y1; // $a3
					// 		short _z1; // $a2
					// 		struct _Position *_v1; // $a2
					/* end block 1.4.3.1.3 */
					// End offset: 0x8001F8CC
					// End Line: 950

					/* begin block 1.4.3.1.4 */
						// Start line: 1015
						// Start offset: 0x8001F970
						// Variables:
					// 		short _x0; // $v0
					// 		short _y0; // $v1
					// 		short _z0; // $a1
					// 		short _x1; // $a0
					// 		short _y1; // $a2
					// 		short _z1; // $a3
					// 		struct _SVector *_v; // $fp
					/* end block 1.4.3.1.4 */
					// End offset: 0x8001F970
					// End Line: 1015
				/* end block 1.4.3.1 */
				// End offset: 0x8001F9F4
				// End Line: 1036
			/* end block 1.4.3 */
			// End offset: 0x8001FA34
			// End Line: 1049

			/* begin block 1.4.4 */
				// Start line: 1053
				// Start offset: 0x8001FA34
				// Variables:
			// 		int plane_front_error; // $v1
			// 		int plane_back_error; // $a0
			/* end block 1.4.4 */
			// End offset: 0x8001FB84
			// End Line: 1120

			/* begin block 1.4.5 */
				// Start line: 1124
				// Start offset: 0x8001FB94
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $t0
			// 		struct _Position *_v1; // $a3
			/* end block 1.4.5 */
			// End offset: 0x8001FB94
			// End Line: 1124

			/* begin block 1.4.6 */
				// Start line: 1124
				// Start offset: 0x8001FB94
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			/* end block 1.4.6 */
			// End offset: 0x8001FBF8
			// End Line: 1125
		/* end block 1.4 */
		// End offset: 0x8001FBF8
		// End Line: 1126

		/* begin block 1.5 */
			// Start line: 1127
			// Start offset: 0x8001FC10
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _SVector *_v1; // $v0
		/* end block 1.5 */
		// End offset: 0x8001FC10
		// End Line: 1127
	/* end block 1 */
	// End offset: 0x8001FC10
	// End Line: 1127

	/* begin block 2 */
		// Start line: 1540
	/* end block 2 */
	// End Line: 1541

_TFace * COLLIDE_PointAndTerrainFunc
                   (_Terrain *terrain,_PCollideInfo *pCollideInfo,int Flags,short *Backface_Flag,
                   long ignoreAttr,long acceptAttr,_LCollideInfo *lcolinfo)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar7;
  int **ppiVar8;
  short *in_v1;
  ushort *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  ushort *in_t2;
  int in_t3;
  undefined4 *unaff_s0;
  uint unaff_s1;
  int **ppiVar13;
  int **ppiVar14;
  ushort *puVar15;
  ushort *puVar16;
  int **ppiVar17;
  int unaff_s7;
  undefined4 uVar18;
  int iStack00000020;
  ushort *puStack00000024;
  undefined4 *puStack00000034;
  ushort *puStack00000038;
  int in_stack_0000006c;
  ushort **in_stack_00000080;
  
  sVar2 = *(short *)(in_t3 + 2);
  sVar3 = *(short *)(in_t3 + 4);
  *in_v1 = (short)Backface_Flag;
  in_v1[1] = sVar2;
  in_v1[2] = sVar3;
  DAT_1f8000a4 = terrain->UnitChangeFlags;
  DAT_1f8000a6 = terrain->spad;
  DAT_1f8000a8 = *(short *)&terrain->lpad2;
  *(short *)Flags = DAT_1f8000a4;
  DAT_1f8000a4 = DAT_1f8000a4 - (short)Backface_Flag;
  *(short *)(Flags + 2) = DAT_1f8000a6;
  DAT_1f8000a6 = DAT_1f8000a6 - sVar2;
  *(short *)(Flags + 4) = DAT_1f8000a8;
  DAT_1f8000a8 = DAT_1f8000a8 - sVar3;
  ppiVar14 = (int **)(unaff_s1 | 0xac);
  if ((short)loadStatus.decompressLen == 1000) {
    if (loadStatus.decompressLen._2_2_ == 1) {
      unaff_s0[0x19] = 1;
    }
    else {
      unaff_s0[0x19] = 0;
    }
  }
  else {
    unaff_s0[0x19] = 2;
    unaff_s0[0x18] = 0x800;
  }
  if ((undefined2 *)unaff_s0[0x11] != (undefined2 *)0x0) {
    *(undefined2 *)unaff_s0[0x11] = 0;
  }
  puStack00000038 = (ushort *)0x0;
  if (0 < *(int *)(in_t2 + 0x22)) {
    puStack00000034 = unaff_s0 + 10;
    iStack00000020 = unaff_s7 + 0x124;
    puStack00000024 = in_t2;
    do {
      iVar7 = *(int *)(puStack00000024 + 0x24);
      *(int ***)ppiVar14 = ppiVar14;
      ppiVar17 = (int **)(iVar7 + (int)puStack00000038 * 0x24);
      if ((-1 < *(short *)((int)ppiVar17 + 0x1a)) &&
         (((uVar4 = *(ushort *)((int)ppiVar17 + 0x12), (uVar4 & 2) == 0 ||
           ((*(uint *)(in_stack_0000006c + 0x24) & 0x80) != 0)) ||
          (((uVar4 & 0x40) != 0 && ((*(uint *)(in_stack_0000006c + 0x24) & 0x100) != 0)))))) {
        cVar1 = (char)clearRect[0].y0;
        if ((uVar4 & 0x4100) == 0x4100) {
code_r0x8001f244:
          if (cVar1 != '\0') {
LAB_8001f24c:
            if ((((*(ushort *)((int)ppiVar17 + 0x12) & 0x1000) == 0) ||
                ((unaff_s0[0xf] & 0x10) == 0)) &&
               (((*(ushort *)((int)ppiVar17 + 0x12) & 0x2000) == 0 ||
                (gameTrackerX.controlData[1][2]._2_1_ != '\0')))) {
              sVar2 = *(short *)((int)ppiVar17 + 0xe);
              sVar3 = *(short *)(ppiVar17 + 4);
              *(short *)(unaff_s0 + 0x12) = *(short *)(unaff_s0 + 0x12) - *(short *)(ppiVar17 + 3);
              *(short *)((int)unaff_s0 + 0x4a) = *(short *)((int)unaff_s0 + 0x4a) - sVar2;
              *(short *)(unaff_s0 + 0x13) = *(short *)(unaff_s0 + 0x13) - sVar3;
              sVar2 = *(short *)((int)ppiVar17 + 0xe);
              sVar3 = *(short *)(ppiVar17 + 4);
              *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s0 + 0x14) - *(short *)(ppiVar17 + 3);
              *(short *)((int)unaff_s0 + 0x52) = *(short *)((int)unaff_s0 + 0x52) - sVar2;
              *(short *)(unaff_s0 + 0x15) = *(short *)(unaff_s0 + 0x15) - sVar3;
              *(short *)unaff_s0 = *(short *)(unaff_s0 + 0x12);
              *(short *)((int)unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0x4a);
              *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x13);
              *(short *)((int)unaff_s0 + 6) = *(short *)(unaff_s0 + 0x14);
              *(short *)(unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0x52);
              *(short *)((int)unaff_s0 + 10) = *(short *)(unaff_s0 + 0x15);
              setCopControlWord(2,0,*unaff_s0);
              setCopControlWord(2,0x800,unaff_s0[1]);
              setCopControlWord(2,0x1000,unaff_s0[2]);
              setCopControlWord(2,0x1800,unaff_s0[3]);
              setCopControlWord(2,0x2000,unaff_s0[4]);
              ppiVar8 = (int **)*ppiVar17;
              ppiVar14 = ppiVar14 + 1;
              *(int ***)ppiVar14 = ppiVar8;
              ppiVar13 = ppiVar14;
              if (ppiVar8 != ppiVar14) {
                do {
                  piVar11 = *ppiVar13;
                  ppiVar14 = ppiVar13 + -1;
                  if ((*(ushort *)((int)piVar11 + 0xe) & 2) == 0) {
                    setCopReg(2,in_zero,piVar11[2]);
                    setCopReg(2,in_at,piVar11[3]);
                    copFunction(2,0x486012);
                    uVar18 = getCopReg(2,0x19);
                    *puStack00000034 = uVar18;
                    uVar18 = getCopReg(2,0x1a);
                    puStack00000034[1] = uVar18;
                    uVar18 = getCopReg(2,0x1b);
                    puStack00000034[2] = uVar18;
                    unaff_s0[10] = unaff_s0[10] - piVar11[4];
                    unaff_s0[0xb] = unaff_s0[0xb] - piVar11[4];
                    if (unaff_s0[0x19] == 0) {
                      sVar2 = *(short *)(piVar11 + 10);
                      sVar3 = *(short *)((int)piVar11 + 0x2a);
                    }
                    else {
                      sVar2 = *(short *)(piVar11 + 9);
                      sVar3 = *(short *)((int)piVar11 + 0x26);
                    }
                    iVar7 = unaff_s0[0xb];
                    if (iVar7 < (int)sVar2 + 5) {
                      if ((int)sVar3 + -5 < iVar7) {
                        if ((int)unaff_s0[10] < iVar7) goto LAB_8001fab8;
                        if ((int *)piVar11[5] != (int *)0x0) {
                          *ppiVar13 = (int *)piVar11[5];
                          ppiVar14 = ppiVar13;
                        }
                        piVar11 = (int *)piVar11[6];
                      }
                      else {
                        if (((int)sVar3 + -5 <= (int)unaff_s0[10]) &&
                           ((int *)piVar11[5] != (int *)0x0)) {
                          *ppiVar13 = (int *)piVar11[5];
                          ppiVar14 = ppiVar13;
                        }
                        piVar11 = (int *)piVar11[6];
                      }
                    }
                    else {
                      if ((int)unaff_s0[10] <= (int)sVar2 + 5) {
LAB_8001fab8:
                        if ((int *)piVar11[6] != (int *)0x0) {
                          *ppiVar13 = (int *)piVar11[6];
                          ppiVar14 = ppiVar13;
                        }
                      }
                      piVar11 = (int *)piVar11[5];
                    }
                    if (piVar11 != (int *)0x0) {
                      ppiVar14 = ppiVar14 + 1;
                      *ppiVar14 = piVar11;
                    }
                  }
                  else {
                    iVar12 = unaff_s0[0x18];
                    iVar7 = (int)*(short *)((int)piVar11 + 0x16) + iVar12;
                    if ((((int)*(short *)unaff_s0 <= iVar7) ||
                        ((int)*(short *)((int)unaff_s0 + 6) <= iVar7)) &&
                       (((int)*(short *)(piVar11 + 4) - iVar12 <= (int)*(short *)unaff_s0 ||
                        ((int)*(short *)(piVar11 + 4) - iVar12 <= (int)*(short *)((int)unaff_s0 + 6)
                        )))) {
                      if ((((int)*(short *)((int)unaff_s0 + 2) <=
                            (int)*(short *)(piVar11 + 6) + iVar12) ||
                          ((int)*(short *)(unaff_s0 + 2) <= (int)*(short *)(piVar11 + 6) + iVar12))
                         && ((iVar7 = (int)*(short *)((int)piVar11 + 0x12) - iVar12,
                             iVar7 <= (int)*(short *)((int)unaff_s0 + 2) ||
                             (iVar7 <= (int)*(short *)(unaff_s0 + 2))))) {
                        iVar7 = (int)*(short *)((int)piVar11 + 0x1a) + iVar12;
                        if ((((int)*(short *)(unaff_s0 + 1) <= iVar7) ||
                            ((int)*(short *)((int)unaff_s0 + 10) <= iVar7)) &&
                           (((int)*(short *)(piVar11 + 5) - iVar12 <= (int)*(short *)(unaff_s0 + 1)
                            || ((int)*(short *)(piVar11 + 5) - iVar12 <=
                                (int)*(short *)((int)unaff_s0 + 10))))) {
                          sVar2 = *(short *)(piVar11 + 3);
                          unaff_s0[0x17] = (int)sVar2;
                          puVar16 = (ushort *)piVar11[2];
                          if ((int)sVar2 != 0) {
                            puVar15 = puVar16 + 3;
                            do {
                              if ((((uint)*(byte *)puVar15 & unaff_s0[0xf]) == 0) ||
                                 (((uint)*(byte *)puVar15 & unaff_s0[0x10]) != 0)) {
                                if ((unaff_s0[0x19] == 2) &&
                                   ((uint)puVar15[1] !=
                                    (int)*(short *)(((int)((int)puVar16 -
                                                          *(int *)(puStack00000024 + 0x10)) *
                                                     -0x55555555 >> 2) * 2 +
                                                   *(int *)(puStack00000024 + 0x26)))) {
                                  FUN_8001e74c(puStack00000024,puVar16,unaff_s0 + 8);
                                }
                                else {
                                  iVar7 = (int)(short)puVar15[1];
                                  if (iVar7 < 0) {
                                    puVar9 = (ushort *)(unaff_s0[0x1a] + iVar7 * -6);
                                    *(ushort *)(unaff_s0 + 8) = -(*puVar9 & 0x1fff);
                                    *(short *)((int)unaff_s0 + 0x22) = -puVar9[1];
                                    *(ushort *)(unaff_s0 + 9) = -puVar9[2];
                                  }
                                  else {
                                    puVar9 = (ushort *)(unaff_s0[0x1a] + iVar7 * 6);
                                    *(ushort *)(unaff_s0 + 8) = *puVar9 & 0x1fff;
                                    *(ushort *)((int)unaff_s0 + 0x22) = puVar9[1];
                                    *(ushort *)(unaff_s0 + 9) = puVar9[2];
                                  }
                                }
                                puVar10 = (undefined4 *)(unaff_s0[0x1b] + (uint)*puVar16 * 0xc);
                                setCopControlWord(2,0x1800,*puVar10);
                                setCopControlWord(2,0x2000,puVar10[1]);
                                setCopReg(2,in_zero,unaff_s0[8]);
                                setCopReg(2,in_at,unaff_s0[9]);
                                copFunction(2,0x486012);
                                uVar18 = getCopReg(2,0x19);
                                *puStack00000034 = uVar18;
                                uVar18 = getCopReg(2,0x1a);
                                puStack00000034[1] = uVar18;
                                uVar18 = getCopReg(2,0x1b);
                                puStack00000034[2] = uVar18;
                                unaff_s0[10] = unaff_s0[10] - unaff_s0[0xc];
                                iVar7 = unaff_s0[0xb] - unaff_s0[0xc];
                                unaff_s0[0xb] = iVar7;
                                if ((((int)unaff_s0[10] < 0) && (-1 < iVar7)) ||
                                   (((unaff_s0[0x16] & 1) != 0 &&
                                    ((0 < (int)unaff_s0[10] && (iVar7 < 1)))))) {
                                  iVar7 = unaff_s0[10] - puStack00000034[1];
                                  if (iVar7 == 0) {
                                    iVar7 = 0;
                                  }
                                  else {
                                    iVar7 = (int)(puStack00000034[1] << 0xc) / iVar7;
                                  }
                                  *(short *)(unaff_s0 + 0xd) =
                                       *(short *)(unaff_s0 + 0x14) +
                                       (short)((int)*(short *)(unaff_s0 + 0x1d) * iVar7 >> 0xc);
                                  *(short *)((int)unaff_s0 + 0x36) =
                                       *(short *)((int)unaff_s0 + 0x52) +
                                       (short)((int)*(short *)((int)unaff_s0 + 0x76) * iVar7 >> 0xc)
                                  ;
                                  *(short *)(unaff_s0 + 0xe) =
                                       *(short *)(unaff_s0 + 0x15) +
                                       (short)((int)*(short *)(unaff_s0 + 0x1e) * iVar7 >> 0xc);
                                  iVar7 = FUN_8001e3c4(puVar10,unaff_s0[0x1b] +
                                                               (uint)puVar15[-2] * 0xc,
                                                       unaff_s0[0x1b] + (uint)puVar15[-1] * 0xc,
                                                       unaff_s0 + 0xd);
                                  if (iVar7 != 0) {
                                    if (((((undefined2 *)unaff_s0[0x11] != (undefined2 *)0x0) &&
                                         ((unaff_s0[0x16] & 1) != 0)) && (0 < (int)unaff_s0[10])) &&
                                       ((int)unaff_s0[0xb] < 1)) {
                                      *(undefined2 *)unaff_s0[0x11] = 1;
                                    }
                                    if ((*(byte *)puVar15 & 8) == 0) {
                                      if (((puVar15[2] == 0xffff) ||
                                          ((*(ushort *)
                                             (*(int *)(puStack00000024 + 0x1a) + (uint)puVar15[2] +
                                             10) & 0x2000) == 0)) ||
                                         (((uint)*(byte *)puVar15 & unaff_s0[0x10]) != 0)) {
                                        unaff_s0[0x13] = unaff_s0[0xe];
                                        unaff_s0[0x12] = unaff_s0[0xd];
                                        *unaff_s0 = unaff_s0[0xd];
                                        *(ushort **)(unaff_s0 + 0x1c) = puVar16;
                                        *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x13);
                                        *(short *)(unaff_s0 + 0x1d) =
                                             *(short *)(unaff_s0 + 0x14) -
                                             *(short *)(unaff_s0 + 0x12);
                                        *(short *)((int)unaff_s0 + 0x76) =
                                             *(short *)((int)unaff_s0 + 0x52) -
                                             *(short *)((int)unaff_s0 + 0x4a);
                                        *(short *)(unaff_s0 + 0x1e) =
                                             *(short *)(unaff_s0 + 0x15) -
                                             *(short *)(unaff_s0 + 0x13);
                                        if (in_stack_00000080 != (ushort **)0x0) {
                                          *in_stack_00000080 = puVar16;
                                          in_stack_00000080[1] = puStack00000024;
                                          in_stack_00000080[2] = puStack00000038;
                                        }
                                      }
                                    }
                                    else {
                                      if ((draw[1].dr_env.code[9] & 0x8000) != 0) {
                                        *(ushort **)(unaff_s7 + 0x10c) = puVar16;
                                        *(ushort **)(unaff_s7 + 0x114) = puStack00000024;
                                        uVar18 = unaff_s0[0xe];
                                        *(undefined4 *)(unaff_s7 + 0x124) = unaff_s0[0xd];
                                        *(undefined4 *)(unaff_s7 + 0x128) = uVar18;
                                        sVar2 = *(short *)(iStack00000020 + 2);
                                        sVar3 = *(short *)(iStack00000020 + 4);
                                        sVar5 = *(short *)((int)ppiVar17 + 0xe);
                                        sVar6 = *(short *)(ppiVar17 + 4);
                                        *(short *)(unaff_s7 + 0x124) =
                                             *(short *)(unaff_s7 + 0x124) + *(short *)(ppiVar17 + 3)
                                        ;
                                        *(short *)(iStack00000020 + 2) = sVar2 + sVar5;
                                        *(short *)(iStack00000020 + 4) = sVar3 + sVar6;
                                      }
                                    }
                                    setCopControlWord(2,0,*unaff_s0);
                                    setCopControlWord(2,0x800,unaff_s0[1]);
                                  }
                                }
                              }
                              puVar15 = puVar15 + 6;
                              iVar7 = unaff_s0[0x17];
                              puVar16 = puVar16 + 6;
                              unaff_s0[0x17] = iVar7 + -1;
                            } while (iVar7 + -1 != 0);
                          }
                          if ((unaff_s0[0x1c] != 0) && (unaff_s0[0x19] == 0)) {
                            *(int ***)ppiVar14 = ppiVar14;
                          }
                        }
                      }
                    }
                  }
                  ppiVar13 = ppiVar14;
                } while ((int **)*ppiVar14 != ppiVar14);
              }
              sVar2 = *(short *)((int)ppiVar17 + 0xe);
              sVar3 = *(short *)(ppiVar17 + 4);
              *(short *)(unaff_s0 + 0x12) = *(short *)(unaff_s0 + 0x12) + *(short *)(ppiVar17 + 3);
              *(short *)((int)unaff_s0 + 0x4a) = *(short *)((int)unaff_s0 + 0x4a) + sVar2;
              *(short *)(unaff_s0 + 0x13) = *(short *)(unaff_s0 + 0x13) + sVar3;
              sVar2 = *(short *)((int)ppiVar17 + 0xe);
              sVar3 = *(short *)(ppiVar17 + 4);
              *(short *)(unaff_s0 + 0x14) = *(short *)(unaff_s0 + 0x14) + *(short *)(ppiVar17 + 3);
              *(short *)((int)unaff_s0 + 0x52) = *(short *)((int)unaff_s0 + 0x52) + sVar2;
              *(short *)(unaff_s0 + 0x15) = *(short *)(unaff_s0 + 0x15) + sVar3;
            }
          }
        }
        else {
          if (((uVar4 & 0x100) == 0) || ((char)gameTrackerX.instancePool != '\0')) {
            cVar1 = gameTrackerX.instancePool._1_1_;
            if ((uVar4 & 0x4000) != 0) goto code_r0x8001f244;
            goto LAB_8001f24c;
          }
        }
      }
      puStack00000038 = (ushort *)((int)puStack00000038 + 1);
    } while ((int)puStack00000038 < *(int *)(puStack00000024 + 0x22));
  }
  sVar2 = *(short *)((int)unaff_s0 + 0x4a);
  sVar3 = *(short *)(unaff_s0 + 0x13);
  *(short *)&lcolinfo->tface = *(short *)(unaff_s0 + 0x12);
  *(short *)((int)&lcolinfo->tface + 2) = sVar2;
  *(short *)&lcolinfo->terrain = sVar3;
  return (_TFace *)unaff_s0[0x1c];
}



// decompiled code
// original method signature: 
// int /*$ra*/ COLLIDE_PointAndHFace(struct _SVector *newPos /*$s4*/, struct _SVector *oldPos /*$s6*/, struct _HFace *hface /*$s5*/, struct _Model *model /*$s7*/, struct _SVector *hfNormal /*stack 16*/)
 // line 1330, offset 0x8001fc64
	/* begin block 1 */
		// Start line: 1331
		// Start offset: 0x8001FC64
		// Variables:
	// 		struct MATRIX *posMatrix; // $s1
	// 		struct _SVector *normal; // $s3
	// 		struct _Vector *dpv; // $s2
	// 		struct _SVector *planePoint; // stack offset -48
	// 		struct _SVector *vertex0; // $s0
	// 		struct _SVector *vertex1; // $s1

		/* begin block 1.1 */
			// Start line: 1341
			// Start offset: 0x8001FCD0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		/* end block 1.1 */
		// End offset: 0x8001FCD0
		// End Line: 1341

		/* begin block 1.2 */
			// Start line: 1341
			// Start offset: 0x8001FCD0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a1
		// 		short _x1; // $a2
		// 		short _y1; // $a3
		// 		short _z1; // $t0
		// 		struct _SVector *_v; // $t1
		/* end block 1.2 */
		// End offset: 0x8001FCD0
		// End Line: 1341

		/* begin block 1.3 */
			// Start line: 1341
			// Start offset: 0x8001FCD0
			// Variables:
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a1
		// 		struct _SVector *_v0; // $t3
		/* end block 1.3 */
		// End offset: 0x8001FCD0
		// End Line: 1341
	/* end block 1 */
	// End offset: 0x8001FE7C
	// End Line: 1378

	/* begin block 2 */
		// Start line: 3219
	/* end block 2 */
	// End Line: 3220

/* WARNING: Variable defined which should be unmapped: hfNormal */

int COLLIDE_PointAndHFace
              (_SVector *newPos,_SVector *oldPos,_HFace *hface,_Model *model,_SVector *hfNormal)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 in_zero;
  undefined4 in_at;
  int in_v0;
  int iVar6;
  short *in_t1;
  short *in_t3;
  int iVar7;
  short *psVar8;
  short *unaff_s1;
  int *unaff_s2;
  undefined4 *unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  short *unaff_s6;
  int unaff_s7;
  undefined2 *unaff_s8;
  undefined4 *in_stack_00000018;
  
  iVar7 = *(int *)(unaff_s7 + 4);
  sVar1 = *(short *)(unaff_s5 + 2);
  sVar2 = *(short *)((int)unaff_s4 + 2);
  sVar3 = *(short *)(unaff_s4 + 1);
  psVar8 = (short *)(iVar7 + in_v0 * 8);
  sVar4 = psVar8[1];
  sVar5 = psVar8[2];
  *unaff_s1 = *(short *)unaff_s4 - *psVar8;
  unaff_s1[1] = sVar2 - sVar4;
  unaff_s1[2] = sVar3 - sVar5;
  sVar2 = unaff_s6[1];
  sVar3 = unaff_s6[2];
  sVar4 = psVar8[1];
  sVar5 = psVar8[2];
  *in_t1 = *unaff_s6 - *psVar8;
  in_t1[1] = sVar2 - sVar4;
  in_t1[2] = sVar3 - sVar5;
  sVar2 = psVar8[1];
  sVar3 = psVar8[2];
  *in_t3 = *psVar8;
  in_t3[1] = sVar2;
  in_t3[2] = sVar3;
  FUN_800bce3c();
  setCopReg(2,in_zero,*unaff_s3);
  setCopReg(2,in_at,unaff_s3[1]);
  copFunction(2,0x486012);
  iVar6 = getCopReg(2,0x19);
  *unaff_s2 = iVar6;
  iVar6 = getCopReg(2,0x1a);
  unaff_s2[1] = iVar6;
  iVar6 = getCopReg(2,0x1b);
  unaff_s2[2] = iVar6;
  if (*unaff_s2 < 0) {
    iVar6 = 0;
    if ((*unaff_s2 < unaff_s2[1]) && (-1 < unaff_s2[1])) {
      FUN_80078088(&DAT_1f800090);
      iVar7 = FUN_8001e3c4(psVar8,iVar7 + (int)sVar1 * 8,
                           *(int *)(unaff_s7 + 4) + (int)*(short *)(unaff_s5 + 4) * 8,&DAT_1f800090)
      ;
      iVar6 = 0;
      if (iVar7 != 0) {
        *unaff_s4 = *in_stack_00000018;
        unaff_s4[1] = in_stack_00000018[1];
        *unaff_s8 = *(undefined2 *)unaff_s3;
        unaff_s8[1] = *(undefined2 *)((int)unaff_s3 + 2);
        iVar6 = 1;
        unaff_s8[2] = *(undefined2 *)(unaff_s3 + 1);
      }
    }
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_PointAndInstance(struct _PCollideInfo *pcollideInfo /*$s4*/, struct _Instance *instance /*stack 4*/)
 // line 1389, offset 0x8001feac
	/* begin block 1 */
		// Start line: 1390
		// Start offset: 0x8001FEAC
		// Variables:
	// 		struct MATRIX *swTransform; // stack offset -92
	// 		struct MATRIX *wsTransform; // stack offset -88
	// 		struct MATRIX *swNormMat; // $fp
	// 		struct _Vector *oldPosVec; // stack offset -84
	// 		struct _Vector *lNormal; // stack offset -80
	// 		struct _Vector *wNormal; // stack offset -76
	// 		struct _Vector *dv; // $s2
	// 		struct _Vector *newPosVec; // $s5
	// 		struct _SVector *oldPos; // stack offset -72
	// 		struct _SVector *newPos; // $s3
	// 		struct _SVector *point; // stack offset -68
	// 		long *flag; // stack offset -64
	// 		struct _Model *model; // stack offset -60
	// 		struct _HModel *hmodel; // $v0
	// 		struct _HPrim *hprim; // stack offset -56
	// 		int i; // stack offset -52
	// 		long collideType; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1416
			// Start offset: 0x8001FFCC
			// Variables:
		// 		struct _HBox *hbox; // $s0
		// 		struct _HFace *hface; // $s1
		// 		struct _HSphere *hsphere; // $s0

			/* begin block 1.1.1 */
				// Start line: 1419
				// Start offset: 0x8001FFCC
				// TypeDefs:
			// 		struct COLLIDE_258fake tmm
			/* end block 1.1.1 */
			// End offset: 0x8001FFCC
			// End Line: 1419

			/* begin block 1.1.2 */
				// Start line: 1452
				// Start offset: 0x80020184
				// Variables:
			// 		long len; // $t0

				/* begin block 1.1.2.1 */
					// Start line: 1453
					// Start offset: 0x80020184
					// Variables:
				// 		long a; // stack offset -104
				// 		long b; // stack offset -100
				// 		long c; // stack offset -96
				/* end block 1.1.2.1 */
				// End offset: 0x80020184
				// End Line: 1453
			/* end block 1.1.2 */
			// End offset: 0x80020248
			// End Line: 1459

			/* begin block 1.1.3 */
				// Start line: 1488
				// Start offset: 0x800203F0
				// Variables:
			// 		struct _SVector hfNormal; // stack offset -136
			/* end block 1.1.3 */
			// End offset: 0x80020418
			// End Line: 1494

			/* begin block 1.1.4 */
				// Start line: 1509
				// Start offset: 0x80020450
				// Variables:
			// 		struct _SVector hbNormal; // stack offset -136
			// 		struct _SVector point0; // stack offset -128
			// 		struct _SVector point1; // stack offset -120
			// 		struct _SVector normal1; // stack offset -112

				/* begin block 1.1.4.1 */
					// Start line: 1551
					// Start offset: 0x80020590
					// Variables:
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a3
				/* end block 1.1.4.1 */
				// End offset: 0x80020590
				// End Line: 1551
			/* end block 1.1.4 */
			// End offset: 0x800205D8
			// End Line: 1561
		/* end block 1.1 */
		// End offset: 0x80020690
		// End Line: 1580
	/* end block 1 */
	// End offset: 0x800206B0
	// End Line: 1582

	/* begin block 2 */
		// Start line: 3368
	/* end block 2 */
	// End Line: 3369

void COLLIDE_PointAndInstance(_PCollideInfo *pcollideInfo,_Instance *instance)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_s4;
  byte *pbVar3;
  int unaff_s8;
  int iStack0000004c;
  undefined4 in_stack_00000050;
  _Model *p_Stack0000006c;
  _HPrim *p_Stack00000070;
  int iStack00000074;
  undefined4 uStack00000078;
  undefined *puStack0000007c;
  int in_stack_000000ac;
  
  iStack00000074 = instance->hModelList[(int)instance->currentModel].numHPrims;
  p_Stack00000070 = instance->hModelList[(int)instance->currentModel].hPrimList;
  uStack00000078 = *(undefined4 *)(unaff_s4 + 0x24);
  p_Stack0000006c = instance->object->modelList[(int)instance->currentModel];
  if (iStack00000074 != 0) {
    puStack0000007c = &stack0x00000028;
    pbVar3 = &p_Stack00000070->segment;
    do {
      if (((p_Stack00000070->hpFlags & 1) != 0) && ((p_Stack00000070->hpFlags & 8) != 0)) {
        iStack0000004c = *(int *)(in_stack_000000ac + 0x40) + (uint)*pbVar3 * 0x20;
        FUN_8003a58c(in_stack_00000050,iStack0000004c);
        uVar1 = *(undefined4 *)(iStack0000004c + 0x18);
        uVar2 = *(undefined4 *)(iStack0000004c + 0x1c);
        *(undefined4 *)(unaff_s8 + 0x14) = *(undefined4 *)(iStack0000004c + 0x14);
        *(undefined4 *)(unaff_s8 + 0x18) = uVar1;
        *(undefined4 *)(unaff_s8 + 0x1c) = uVar2;
        FUN_800bd714(in_stack_00000050);
        FUN_800bce3c(in_stack_00000050);
                    /* WARNING: Subroutine does not return */
        FUN_800bce1c(in_stack_00000050);
      }
      pbVar3 = pbVar3 + 8;
      iStack00000074 = iStack00000074 + -1;
      p_Stack00000070 = p_Stack00000070 + 1;
    } while (iStack00000074 != 0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_PointAndInstanceTrivialReject(struct _PCollideInfo *pcollideInfo /*$s3*/, struct _Instance *instance /*$s1*/)
 // line 1584, offset 0x800206e0
	/* begin block 1 */
		// Start line: 1585
		// Start offset: 0x800206E0
		// Variables:
	// 		struct _Vector *dv; // $s2
	// 		struct _SVector linePoint; // stack offset -32

		/* begin block 1.1 */
			// Start line: 1596
			// Start offset: 0x80020768
			// Variables:
		// 		long _x0; // $a2
		// 		long _y0; // $v1
		// 		long _z0; // $v0
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $a0
		// 		struct _SVector *_v0; // $a0
		/* end block 1.1 */
		// End offset: 0x80020768
		// End Line: 1596
	/* end block 1 */
	// End offset: 0x80020848
	// End Line: 1633

	/* begin block 2 */
		// Start line: 4060
	/* end block 2 */
	// End Line: 4061

void COLLIDE_PointAndInstanceTrivialReject(_PCollideInfo *pcollideInfo,_Instance *instance)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  short in_stack_00000010;
  short in_stack_00000012;
  short in_stack_00000014;
  
  iVar4 = (int)in_stack_00000010 - (int)*(short *)(unaff_s1 + 0x5c);
  iVar5 = iVar4 >> 1;
  iVar2 = (int)in_stack_00000012 - (int)*(short *)(unaff_s0 + 2);
  iVar3 = iVar2 >> 1;
  sVar1 = *(short *)(unaff_s0 + 4);
  *unaff_s2 = iVar4;
  unaff_s2[1] = iVar2;
  *unaff_s2 = iVar5;
  unaff_s2[1] = iVar3;
  iVar2 = (int)in_stack_00000014 - (int)sVar1;
  unaff_s2[2] = iVar2;
  iVar2 = iVar2 >> 1;
  unaff_s2[2] = iVar2;
  if ((iVar5 * iVar5 + iVar3 * iVar3 + iVar2 * iVar2 <
       *(int *)(*(int *)((int)*(short *)(unaff_s1 + 0x10a) * 4 +
                        *(int *)(*(int *)(unaff_s1 + 0x1c) + 0xc)) + 0x28) >> 2) &&
     (*(int *)(unaff_s1 + 0x40) != 0)) {
    FUN_8001fe10();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_PointAndWorld(struct _PCollideInfo *pcollideInfo /*$s5*/, struct Level *level /*$s6*/)
 // line 1648, offset 0x80020864
	/* begin block 1 */
		// Start line: 1649
		// Start offset: 0x80020864
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _InstanceList *instanceList; // $s3
	// 		struct _LCollideInfo lcol; // stack offset -56
	// 		int i; // $s1
	// 		int in_warpRoom; // $s7

		/* begin block 1.1 */
			// Start line: 1660
			// Start offset: 0x800208A8
			// Variables:
		// 		struct _TFace *tface; // $s3
		// 		struct _Terrain *terrain; // $s4

			/* begin block 1.1.1 */
				// Start line: 1690
				// Start offset: 0x80020944
			/* end block 1.1.1 */
			// End offset: 0x80020968
			// End Line: 1694

			/* begin block 1.1.2 */
				// Start line: 1699
				// Start offset: 0x80020970

				/* begin block 1.1.2.1 */
					// Start line: 1704
					// Start offset: 0x80020974
					// Variables:
				// 		struct Level *thislevel; // $s0
				/* end block 1.1.2.1 */
				// End offset: 0x80020A18
				// End Line: 1728
			/* end block 1.1.2 */
			// End offset: 0x80020A48
			// End Line: 1739
		/* end block 1.1 */
		// End offset: 0x80020A48
		// End Line: 1740
	/* end block 1 */
	// End offset: 0x80020C20
	// End Line: 1813

	/* begin block 2 */
		// Start line: 4207
	/* end block 2 */
	// End Line: 4208

void COLLIDE_PointAndWorld(_PCollideInfo *pcollideInfo,Level *level)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  _BigFileDirEntry *p_Var6;
  long *plVar7;
  int unaff_s3;
  undefined2 *unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  undefined2 in_stack_00000018;
  
  FUN_8001e74c();
  iVar4 = 0;
  if (unaff_s3 == 0) {
    puVar5 = (ushort *)&DVECTOR_800d1744.vy;
    do {
      piVar3 = *(int **)(puVar5 + 1);
      if ((((puVar5[-1] == 2) && (piVar3 != unaff_s6)) && ((unaff_s7 == 0 || ((*puVar5 & 1) == 0))))
         && (iVar1 = FUN_800500cc(piVar3), iVar1 != 0)) {
        iVar1 = *piVar3;
        unaff_s3 = FUN_8001f000(iVar1);
        if (unaff_s3 != 0) {
          *unaff_s5 = 3;
          *(int *)(unaff_s5 + 2) = unaff_s3;
          *(int **)(unaff_s5 + 4) = piVar3;
          unaff_s5[1] = in_stack_00000018;
          if ((short)loadStatus.decompressLen == 1000) {
                    /* WARNING: Subroutine does not return */
            FUN_8001e6b4((int)*(short *)(unaff_s3 + 8),*(undefined4 *)(iVar1 + 0x24),unaff_s5 + 6);
          }
          FUN_8001e74c(iVar1,unaff_s3,unaff_s5 + 6);
          break;
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x20;
    } while (iVar4 < 0x10);
    if (unaff_s3 == 0) {
      *unaff_s5 = 0;
      *(undefined4 *)(unaff_s5 + 2) = 0;
      *(undefined4 *)(unaff_s5 + 4) = 0;
      unaff_s5[6] = 0;
      unaff_s5[7] = 0;
      unaff_s5[8] = 0;
    }
  }
  p_Var6 = loadStatus.bigFile.subDirList;
  uVar2 = *(uint *)(unaff_s5 + 0x12);
  iVar4 = 0x10;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) == 0) {
      iVar4 = 0;
      if ((uVar2 & 4) != 0) {
        plVar7 = &dyna_cldstat;
        do {
          iVar1 = *(int *)(p_Var6 + *plVar7 + 2);
          while (iVar1 != 0) {
            if ((*(uint *)(iVar1 + 0x18) & 0x24000000) == 0) {
              FUN_80020644();
            }
            iVar1 = *(int *)(iVar1 + 4);
          }
          iVar4 = iVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (iVar4 < 8);
      }
    }
    else {
      iVar4 = 0;
      if ((uVar2 & 2) != 0) {
        plVar7 = &stat_clddyna;
        do {
          iVar1 = *(int *)(p_Var6 + *plVar7 + 2);
          while (iVar1 != 0) {
            if ((*(uint *)(iVar1 + 0x18) & 0x24000000) == 0) {
              FUN_80020644();
            }
            iVar1 = *(int *)(iVar1 + 4);
          }
          iVar4 = iVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (iVar4 < 8);
      }
      iVar4 = 0;
      if ((*(uint *)(unaff_s5 + 0x12) & 4) != 0) {
        plVar7 = &dyna_clddyna;
        do {
          iVar1 = *(int *)(p_Var6 + *plVar7 + 2);
          while (iVar1 != 0) {
            if ((*(uint *)(iVar1 + 0x18) & 0x24000000) == 0) {
              FUN_80020644();
            }
            iVar1 = *(int *)(iVar1 + 4);
          }
          iVar4 = iVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (iVar4 < 8);
      }
    }
  }
  else {
    p_Var6 = loadStatus.bigFile.subDirList + 0x10;
    do {
      iVar1 = *(int *)(p_Var6 + 2);
      while (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0x18) & 0x24000000) == 0) {
          FUN_80020644();
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
      iVar4 = iVar4 + 1;
      p_Var6 = p_Var6 + 1;
    } while (iVar4 < 0x20);
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_ClosestPointInBoxToPoint(struct _Position *boxPoint /*$a0*/, struct _HBox *hbox /*$a1*/, struct _SVector *point /*$a2*/)
 // line 1893, offset 0x80020c4c
	/* begin block 1 */
		// Start line: 1895
		// Start offset: 0x80020C4C
		// Variables:
	// 		long inside; // $a3
	/* end block 1 */
	// End offset: 0x80020D18
	// End Line: 1941

	/* begin block 2 */
		// Start line: 4803
	/* end block 2 */
	// End Line: 4804

	/* begin block 3 */
		// Start line: 4804
	/* end block 3 */
	// End Line: 4805

	/* begin block 4 */
		// Start line: 4806
	/* end block 4 */
	// End Line: 4807

long COLLIDE_ClosestPointInBoxToPoint(_Position *boxPoint,_HBox *hbox,_SVector *point)

{
  short in_v1;
  
  boxPoint->z = in_v1;
  return 0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_SphereAndPoint(struct _Sphere *sphere /*$s1*/, struct _SVector *point /*$s2*/, struct _SVector *normal /*$s3*/)
 // line 1944, offset 0x80020d20
	/* begin block 1 */
		// Start line: 1945
		// Start offset: 0x80020D20
		// Variables:
	// 		long len; // $a2
	// 		struct _Vector *line; // $s0

		/* begin block 1.1 */
			// Start line: 1945
			// Start offset: 0x80020D20
			// Variables:
		// 		long _x0; // $a2
		// 		long _y0; // $a1
		// 		long _z0; // $a0
		// 		long _x1; // $v0
		// 		long _y1; // $v0
		// 		long _z1; // $v0
		/* end block 1.1 */
		// End offset: 0x80020D20
		// End Line: 1945

		/* begin block 1.2 */
			// Start line: 1953
			// Start offset: 0x80020DB4
			// Variables:
		// 		long a; // stack offset -40
		// 		long b; // stack offset -36
		// 		long c; // stack offset -32
		/* end block 1.2 */
		// End offset: 0x80020DB4
		// End Line: 1953
	/* end block 1 */
	// End offset: 0x80020F48
	// End Line: 1970

	/* begin block 2 */
		// Start line: 4905
	/* end block 2 */
	// End Line: 4906

long COLLIDE_SphereAndPoint(_Sphere *sphere,_SVector *point,_SVector *normal)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int in_v0;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_s0;
  short *unaff_s1;
  short *unaff_s2;
  undefined2 *unaff_s3;
  int iStack00000010;
  _SVector *p_Stack00000014;
  _Sphere *p_Stack00000018;
  
  iStack00000010 = -in_v0;
  if ((int)point < 0) {
    point = (_SVector *)-(int)point;
  }
  if ((int)sphere < 0) {
    sphere = (_Sphere *)-(int)sphere;
  }
  p_Stack00000014 = point;
  p_Stack00000018 = sphere;
  FUN_80039410(&stack0x00000010,&stack0x00000014,&stack0x00000018);
  iVar8 = (int)p_Stack00000018 * 0x1e + (int)p_Stack00000014 * 0xc + iStack00000010 * 9;
  iVar7 = iVar8 >> 5;
  if (iVar7 != 0) {
    *unaff_s3 = (short)((*unaff_s0 << 0xc) / iVar7);
    unaff_s3[1] = (short)((unaff_s0[1] << 0xc) / iVar7);
    unaff_s3[2] = (short)((unaff_s0[2] << 0xc) / iVar7);
    uVar1 = unaff_s1[3];
    iVar4 = *unaff_s0;
    *unaff_s0 = iVar4 * (uint)uVar1;
    uVar2 = unaff_s1[3];
    iVar5 = unaff_s0[1];
    unaff_s0[1] = iVar5 * (uint)uVar2;
    uVar3 = unaff_s1[3];
    iVar6 = unaff_s0[2];
    unaff_s0[2] = iVar6 * (uint)uVar3;
    *unaff_s0 = (int)(iVar4 * (uint)uVar1 * 0x20) / iVar8;
    unaff_s0[1] = (int)(iVar5 * (uint)uVar2 * 0x20) / iVar8;
    unaff_s0[2] = (int)(iVar6 * (uint)uVar3 * 0x20) / iVar8;
    *unaff_s1 = *unaff_s2 + *(short *)unaff_s0;
    unaff_s1[1] = unaff_s2[1] + *(short *)(unaff_s0 + 1);
    unaff_s1[2] = unaff_s2[2] + *(short *)(unaff_s0 + 2);
  }
  return (uint)(iVar7 != 0);
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_SphereAndHBox(struct _HBox *hbox /*$s4*/, struct _Sphere *sphere /*$s1*/, struct _Position *oldPos /*$s5*/, struct _SVector *normal /*$s3*/)
 // line 1975, offset 0x80020f64
	/* begin block 1 */
		// Start line: 1976
		// Start offset: 0x80020F64
		// Variables:
	// 		struct _SVector point; // stack offset -96
	// 		struct _SVector point0; // stack offset -88
	// 		struct _SVector point1; // stack offset -80
	// 		struct _SVector normal0; // stack offset -72
	// 		struct _SVector normal1; // stack offset -64
	// 		struct _SVector sphereNormal; // stack offset -56
	// 		struct _SVector dv; // stack offset -48
	// 		struct _SVector absdv; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1989
			// Start offset: 0x80020FAC
			// Variables:
		// 		long numIntersects; // $a2

			/* begin block 1.1.1 */
				// Start line: 1993
				// Start offset: 0x80020FDC
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80020FDC
			// End Line: 1993

			/* begin block 1.1.2 */
				// Start line: 1993
				// Start offset: 0x80020FDC
				// Variables:
			// 		short _x1; // $a0
			// 		short _y1; // $v1
			// 		short _z1; // $a1
			// 		struct _SVector *_v0; // $v0
			/* end block 1.1.2 */
			// End offset: 0x80020FDC
			// End Line: 1993

			/* begin block 1.1.3 */
				// Start line: 2000
				// Start offset: 0x8002107C
				// Variables:
			// 		short _y0; // $v0
			// 		short _z0; // $v1
			// 		short _x1; // $v0
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // $a1
			// 		struct _SVector *_v0; // $v1
			/* end block 1.1.3 */
			// End offset: 0x8002107C
			// End Line: 2000
		/* end block 1.1 */
		// End offset: 0x80021290
		// End Line: 2076

		/* begin block 1.2 */
			// Start line: 2080
			// Start offset: 0x80021290

			/* begin block 1.2.1 */
				// Start line: 2087
				// Start offset: 0x800212D4
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			// 		struct _SVector *_v0; // $v0
			// 		struct _SVector *_v1; // $v0
			/* end block 1.2.1 */
			// End offset: 0x800212D4
			// End Line: 2087

			/* begin block 1.2.2 */
				// Start line: 2087
				// Start offset: 0x800212D4
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $a1
			/* end block 1.2.2 */
			// End offset: 0x800212D4
			// End Line: 2087

			/* begin block 1.2.3 */
				// Start line: 2096
				// Start offset: 0x80021318
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			/* end block 1.2.3 */
			// End offset: 0x80021318
			// End Line: 2096

			/* begin block 1.2.4 */
				// Start line: 2096
				// Start offset: 0x80021318
				// Variables:
			// 		short _x1; // $a0
			// 		short _y1; // $v1
			// 		short _z1; // $a1
			// 		struct _SVector *_v0; // $v0
			/* end block 1.2.4 */
			// End offset: 0x80021318
			// End Line: 2096
		/* end block 1.2 */
		// End offset: 0x800213B8
		// End Line: 2106
	/* end block 1 */
	// End offset: 0x800213B8
	// End Line: 2108

	/* begin block 2 */
		// Start line: 4981
	/* end block 2 */
	// End Line: 4982

long COLLIDE_SphereAndHBox(_HBox *hbox,_Sphere *sphere,_Position *oldPos,_SVector *normal)

{
  undefined2 in_v1;
  short *unaff_s1;
  short *unaff_s3;
  short in_stack_0000002a;
  short in_stack_0000002c;
  
  theCamera.savedCinematic[0].maxVel._0_2_ = (short)hbox;
  theCamera.savedCinematic[0].posSpline._0_2_ = SUB42(sphere,0);
  theCamera.savedCinematic[0].maxVel._2_2_ = in_v1;
  *unaff_s1 = (short)theCamera.savedCinematic[0].maxVel +
              (short)((int)((int)*unaff_s3 * (uint)(ushort)unaff_s1[3]) >> 0xc);
  unaff_s1[1] = in_stack_0000002a +
                (short)((int)((int)unaff_s3[1] * (uint)(ushort)unaff_s1[3]) >> 0xc);
  unaff_s1[2] = in_stack_0000002c +
                (short)((int)((int)unaff_s3[2] * (uint)(ushort)unaff_s1[3]) >> 0xc);
  return (long)oldPos;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_Instance1SpheresToInstance2(struct _Instance *instance1 /*stack 0*/, struct _Instance *instance2 /*$fp*/, long sphereToSphere /*$a2*/)
 // line 2419, offset 0x800213dc
	/* begin block 1 */
		// Start line: 2420
		// Start offset: 0x800213DC
		// Variables:
	// 		struct MATRIX *wsTransform2; // stack offset -132
	// 		struct MATRIX *oldWSTransform2; // stack offset -128
	// 		struct _Position *spherePos; // stack offset -124
	// 		struct _Vector *line; // $s7
	// 		struct _Vector *offset; // stack offset -120
	// 		struct _Vector *tempVec; // stack offset -116
	// 		struct _Vector *sSpherePos1; // stack offset -112
	// 		struct _Vector *oldSSpherePos1; // stack offset -108
	// 		struct _SVector *svec; // stack offset -104
	// 		struct _Sphere *sSphere1; // $s3
	// 		struct _Sphere *oldSSphere1; // stack offset -100
	// 		struct _Sphere *wSphere1; // stack offset -96
	// 		struct _Sphere *wSphere2; // stack offset -92
	// 		struct _Sphere *oldWSphere1; // stack offset -88
	// 		struct _Sphere *oldWSphere2; // stack offset -84
	// 		struct _CollideInfo *collideInfo; // $s2
	// 		struct _HFaceInfo *hfaceInfo; // stack offset -80
	// 		struct MATRIX *swTransform1; // stack offset -76
	// 		struct MATRIX *swTransform2; // stack offset -72
	// 		struct MATRIX *oldSWTransform1; // $s0
	// 		struct MATRIX *oldSWTransform2; // $s4
	// 		struct _HSphere *hsphere1; // $s6
	// 		struct _HSphere *hsphere2; // $s0
	// 		struct _HFace *hface; // $s0
	// 		void (*collideFunc)(); // $a3
	// 		long flag; // stack offset -152
	// 		long edge; // stack offset -136
	// 		struct _HModel *hmodel1; // $a0
	// 		struct _HModel *hmodel2; // stack offset -68
	// 		struct _HPrim *hprim1; // stack offset -64
	// 		struct _HPrim *hprim2; // stack offset -60
	// 		int i; // stack offset -56

		/* begin block 1.1 */
			// Start line: 2478
			// Start offset: 0x80021578
			// Variables:
		// 		int i; // stack offset -52

			/* begin block 1.1.1 */
				// Start line: 2524
				// Start offset: 0x800217F0
				// Variables:
			// 		long len; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 2525
					// Start offset: 0x800217F0
					// Variables:
				// 		long a; // stack offset -148
				// 		long b; // stack offset -144
				// 		long c; // stack offset -140
				/* end block 1.1.1.1 */
				// End offset: 0x800217F0
				// End Line: 2525

				/* begin block 1.1.1.2 */
					// Start line: 2531
					// Start offset: 0x80021888
					// Variables:
				// 		short _x1; // $v1
				// 		short _y1; // $a0
				// 		short _z1; // $v0
				// 		struct _Position *_v1; // $v0
				/* end block 1.1.1.2 */
				// End offset: 0x80021888
				// End Line: 2531

				/* begin block 1.1.1.3 */
					// Start line: 2536
					// Start offset: 0x800218B0
					// Variables:
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a0
				/* end block 1.1.1.3 */
				// End offset: 0x800218B0
				// End Line: 2536
			/* end block 1.1.1 */
			// End offset: 0x800219E4
			// End Line: 2561

			/* begin block 1.1.2 */
				// Start line: 2577
				// Start offset: 0x80021A58
				// Variables:
			// 		struct _Model *model2; // $s1

				/* begin block 1.1.2.1 */
					// Start line: 2676
					// Start offset: 0x80021E58
					// Variables:
				// 		struct _HBox *hbox; // $s4
				/* end block 1.1.2.1 */
				// End offset: 0x800220B4
				// End Line: 2742
			/* end block 1.1.2 */
			// End offset: 0x800220B4
			// End Line: 2743
		/* end block 1.1 */
		// End offset: 0x800220D4
		// End Line: 2746
	/* end block 1 */
	// End offset: 0x800220FC
	// End Line: 2748

	/* begin block 2 */
		// Start line: 4838
	/* end block 2 */
	// End Line: 4839

void COLLIDE_Instance1SpheresToInstance2
               (_Instance *instance1,_Instance *instance2,long sphereToSphere)

{
  _HModel *p_Var1;
  int unaff_s8;
  undefined4 *puStack00000058;
  undefined4 *puStack0000005c;
  undefined4 *puStack00000060;
  MATRIX *pMStack00000064;
  int iStack0000006c;
  _HPrim *p_Stack00000070;
  int iStack00000078;
  undefined *puStack00000080;
  byte *pbStack00000084;
  _Instance *p_Stack000000b0;
  
  puStack00000058 = &DAT_1f8001f8;
  puStack0000005c = &DAT_1f800204;
  puStack00000060 = &DAT_1f800240;
  p_Var1 = instance1->hModelList + (int)instance1->currentModel;
  if (((instance1->hModelList != (_HModel *)0x0) && (*(int *)(unaff_s8 + 0xe8) != 0)) &&
     (iStack0000006c = *(int *)(unaff_s8 + 0xe8) + (int)*(short *)(unaff_s8 + 0x10a) * 8,
     *(int *)(iStack0000006c + 4) != 0)) {
    iStack00000078 = p_Var1->numHPrims;
    p_Stack00000070 = p_Var1->hPrimList;
    if (iStack00000078 != 0) {
      puStack00000080 = &stack0x00000018;
      pbStack00000084 = &p_Stack00000070->segment;
      do {
        if (((p_Stack00000070->hpFlags & 1) != 0) &&
           ((*(uint *)p_Stack00000070 & 0xff0400) == 0x10400)) {
          pMStack00000064 = instance1->matrix + (uint)*pbStack00000084;
          p_Stack000000b0 = instance1;
          FUN_800bce3c(pMStack00000064);
                    /* WARNING: Subroutine does not return */
          FUN_800bce1c(pMStack00000064);
        }
        iStack00000078 = iStack00000078 + -1;
        pbStack00000084 = pbStack00000084 + 8;
        p_Stack00000070 = p_Stack00000070 + 1;
      } while (iStack00000078 != 0);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_Instances(struct _Instance *instance1 /*$s1*/, struct _Instance *instance2 /*$s0*/)
 // line 2761, offset 0x8002212c
	/* begin block 1 */
		// Start line: 2762
		// Start offset: 0x8002212C
		// Variables:
	// 		long lx; // $a1
	// 		long ly; // $a3
	// 		long lz; // $a2
	// 		long mrmr; // $v0

		/* begin block 1.1 */
			// Start line: 2806
			// Start offset: 0x80022158
			// Variables:
		// 		long x; // $a1
		// 		long y; // $a3
		// 		long z; // $a2
		/* end block 1.1 */
		// End offset: 0x80022158
		// End Line: 2806
	/* end block 1 */
	// End offset: 0x80022260
	// End Line: 2828

	/* begin block 2 */
		// Start line: 7060
	/* end block 2 */
	// End Line: 7061

void COLLIDE_Instances(_Instance *instance1,_Instance *instance2)

{
  int in_v0;
  int iVar1;
  undefined4 in_a2;
  int iVar2;
  undefined4 in_a3;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  
  setCopReg(2,0x4800,instance2);
  setCopReg(2,0x5000,in_a3);
  setCopReg(2,0x5800,in_a2);
  copFunction(2,0xa00428);
  iVar1 = getCopReg(2,0xc800);
  iVar3 = getCopReg(2,0xd000);
  iVar2 = getCopReg(2,0xd800);
  if (((((uint)(iVar1 + iVar3 + iVar2) < (uint)(in_v0 * in_v0)) && (*(int *)(unaff_s1 + 0x40) != 0))
      && (*(int *)(unaff_s1 + 0x44) != 0)) &&
     ((*(int *)(unaff_s0 + 0x40) != 0 && (*(int *)(unaff_s0 + 0x44) != 0)))) {
    FUN_80021340();
    FUN_80021340();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_InstanceList(struct _InstanceList *instanceList /*$s7*/)
 // line 2839, offset 0x80022274
	/* begin block 1 */
		// Start line: 2840
		// Start offset: 0x80022274
		// Variables:
	// 		struct _Instance *instance; // $s1
	// 		struct _Instance *instance2; // $s0
	// 		struct _Instance *playerInstance; // $s2
	// 		long i; // $s4
	// 		long j; // $s2
	/* end block 1 */
	// End offset: 0x800224EC
	// End Line: 2926

	/* begin block 2 */
		// Start line: 7228
	/* end block 2 */
	// End Line: 7229

	/* begin block 3 */
		// Start line: 7236
	/* end block 3 */
	// End Line: 7237

void COLLIDE_InstanceList(_InstanceList *instanceList)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int unaff_s4;
  int unaff_s7;
  
  plVar6 = &dyna_clddyna;
  do {
    iVar4 = *(int *)(*plVar6 * 8 + unaff_s7 + 0x10);
    while (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 0x18) & 0x24040000) == 0) {
        iVar1 = *(int *)(iVar4 + 4);
        while (iVar1 != 0) {
          if ((*(uint *)(iVar1 + 0x18) & 0x24040000) == 0) {
            FUN_80022090(iVar4,iVar1);
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        iVar1 = unaff_s4 + 1;
        if (iVar1 < 8) {
          plVar5 = &dyna_clddyna + iVar1;
          do {
            iVar2 = *(int *)(*plVar5 * 8 + unaff_s7 + 0x10);
            while (iVar2 != 0) {
              if ((*(uint *)(iVar2 + 0x18) & 0x24040000) == 0) {
                FUN_80022090(iVar4,iVar2);
              }
              iVar2 = *(int *)(iVar2 + 4);
            }
            iVar1 = iVar1 + 1;
            plVar5 = plVar5 + 1;
          } while (iVar1 < 8);
        }
      }
      iVar4 = *(int *)(iVar4 + 4);
    }
    unaff_s4 = unaff_s4 + 1;
    plVar6 = plVar6 + 1;
  } while (unaff_s4 < 8);
  iVar4 = 0;
  do {
    iVar1 = *(int *)((&dyna_cldstat)[iVar4] * 8 + unaff_s7 + 0x10);
    while (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x18) & 0x24040000) == 0) {
        iVar2 = 0;
        plVar6 = &stat_clddyna;
        do {
          iVar3 = *(int *)(*plVar6 * 8 + unaff_s7 + 0x10);
          while (iVar3 != 0) {
            if ((*(uint *)(iVar3 + 0x18) & 0x24040000) == 0) {
              FUN_80022090(iVar1,iVar3);
            }
            iVar3 = *(int *)(iVar3 + 4);
          }
          iVar2 = iVar2 + 1;
          plVar6 = plVar6 + 1;
        } while (iVar2 < 8);
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_SphereAndHFace(struct _Sphere *sphere /*$s2*/, struct _Position *oldPos /*$a1*/, struct _HFaceInfo *hfaceInfo /*$s4*/, struct _SVector *intersect /*$s5*/, long *edge /*stack 16*/)
 // line 3061, offset 0x8002251c
	/* begin block 1 */
		// Start line: 3062
		// Start offset: 0x8002251C
		// Variables:
	// 		struct SandHFScratch *CSpad; // $s0
	// 		struct _SVector *vertex0; // $a0
	// 		long result; // $s6
	// 		long behind; // $v0
	// 		unsigned long d0sq; // $s1

		/* begin block 1.1 */
			// Start line: 3126
			// Start offset: 0x80022734
			// Variables:
		// 		struct _Vector dv; // stack offset -64

			/* begin block 1.1.1 */
				// Start line: 3128
				// Start offset: 0x80022734
				// Variables:
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a0
			// 		struct _SVector *_v0; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80022734
			// End Line: 3128
		/* end block 1.1 */
		// End offset: 0x80022814
		// End Line: 3141

		/* begin block 1.2 */
			// Start line: 3143
			// Start offset: 0x80022814
			// Variables:
		// 		long y; // $v1
		// 		long z; // $v0
		/* end block 1.2 */
		// End offset: 0x80022814
		// End Line: 3143

		/* begin block 1.3 */
			// Start line: 3147
			// Start offset: 0x80022884
			// Variables:
		// 		unsigned long d1sq; // $a0

			/* begin block 1.3.1 */
				// Start line: 3149
				// Start offset: 0x80022884
				// Variables:
			// 		long y; // $v1
			// 		long z; // $v0
			/* end block 1.3.1 */
			// End offset: 0x80022884
			// End Line: 3149

			/* begin block 1.3.2 */
				// Start line: 3161
				// Start offset: 0x80022928
				// Variables:
			// 		long y; // $v1
			// 		long z; // $v0
			/* end block 1.3.2 */
			// End offset: 0x80022928
			// End Line: 3161
		/* end block 1.3 */
		// End offset: 0x800229B8
		// End Line: 3170

		/* begin block 1.4 */
			// Start line: 3174
			// Start offset: 0x800229CC
			// Variables:
		// 		long len; // $a2
		// 		struct _Vector dv; // stack offset -64

			/* begin block 1.4.1 */
				// Start line: 3176
				// Start offset: 0x800229CC
				// Variables:
			// 		long _x0; // $a3
			// 		long _y0; // $t0
			// 		long _z0; // $t1
			// 		long _x1; // $v1
			// 		long _y1; // $v0
			// 		long _z1; // $v1
			// 		struct _Vector *_v; // $v0
			// 		struct _SVector *_v1; // $t2
			/* end block 1.4.1 */
			// End offset: 0x800229CC
			// End Line: 3176

			/* begin block 1.4.2 */
				// Start line: 3176
				// Start offset: 0x800229CC
				// Variables:
			// 		long a; // stack offset -48
			// 		long b; // stack offset -44
			// 		long c; // stack offset -40
			/* end block 1.4.2 */
			// End offset: 0x800229CC
			// End Line: 3176
		/* end block 1.4 */
		// End offset: 0x80022BCC
		// End Line: 3198
	/* end block 1 */
	// End offset: 0x80022BD0
	// End Line: 3201

	/* begin block 2 */
		// Start line: 6122
	/* end block 2 */
	// End Line: 6123

/* WARNING: Variable defined which should be unmapped: edge */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long COLLIDE_SphereAndHFace
               (_Sphere *sphere,_Position *oldPos,_HFaceInfo *hfaceInfo,_SVector *intersect,
               long *edge)

{
  short sVar1;
  short sVar2;
  undefined4 in_zero;
  undefined4 in_at;
  short in_v0;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  short *unaff_s2;
  undefined4 *puVar9;
  int unaff_s4;
  short *unaff_s5;
  long unaff_s6;
  short sStack00000018;
  int iStack00000018;
  short sStack0000001c;
  int iStack0000001c;
  short sStack00000020;
  int iStack00000020;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  
  *(short *)((int)unaff_s0 + 0xe) = in_v0 - (sphere->position).x;
  *(short *)(unaff_s0 + 4) = oldPos->y - (sphere->position).y;
  *(short *)((int)unaff_s0 + 0x12) = oldPos->z - (sphere->position).z;
  *(short *)(unaff_s0 + 5) = (sphere->position).x;
  *(short *)((int)unaff_s0 + 0x16) = (sphere->position).y;
  *(short *)(unaff_s0 + 6) = (sphere->position).z;
  uVar8 = *(undefined4 *)(unaff_s4 + 0x10);
  *unaff_s0 = *(undefined4 *)(unaff_s4 + 0xc);
  unaff_s0[1] = uVar8;
  setCopControlWord(2,0,DAT_1f80005c);
  setCopControlWord(2,0x800,DAT_1f800060);
  setCopControlWord(2,0x1000,_DAT_1f800064);
  setCopControlWord(2,0x1800,_DAT_1f800068);
  setCopControlWord(2,0x2000,DAT_1f80006c);
  setCopReg(2,in_zero,*unaff_s0);
  setCopReg(2,in_at,unaff_s0[1]);
  copFunction(2,0x486012);
  _DAT_1f80007c = getCopReg(2,0x19);
  _DAT_1f800080 = getCopReg(2,0x1a);
  _DAT_1f800084 = getCopReg(2,0x1b);
  iVar4 = unaff_s0[10];
  if (((iVar4 <= (int)unaff_s0[0xb]) && (iVar4 < (int)(uint)(ushort)unaff_s2[3])) &&
     ((int)-(uint)(ushort)unaff_s2[3] <= (int)unaff_s0[0xb])) {
    if (iVar4 < 0) {
      iVar4 = FUN_80078088(&DAT_1f800090);
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      FUN_80078160(&DAT_1f800090,&DAT_1f800054,unaff_s0[0xc]);
    }
    puVar9 = unaff_s0 + 0xf;
    iVar4 = FUN_8001e3c4(*(undefined4 *)(unaff_s4 + 0x14),*(undefined4 *)(unaff_s4 + 0x18),
                         *(undefined4 *)(unaff_s4 + 0x1c),puVar9);
    if (iVar4 == 0) {
      FUN_80077f78(unaff_s0 + 0xd,*(undefined4 *)(unaff_s4 + 0x14),*(undefined4 *)(unaff_s4 + 0x18))
      ;
      setCopReg(2,0x4800,(int)*unaff_s2 - (int)*(short *)(unaff_s0 + 0xd));
      setCopReg(2,0x5000,(int)unaff_s2[1] - (int)*(short *)((int)unaff_s0 + 0x36));
      setCopReg(2,0x5800,(int)unaff_s2[2] - (int)*(short *)(unaff_s0 + 0xe));
      copFunction(2,0xa00428);
      iVar6 = getCopReg(2,0xc800);
      iVar3 = getCopReg(2,0xd000);
      iVar4 = getCopReg(2,0xd800);
      uVar7 = iVar6 + iVar3 + iVar4;
      if (*(uint *)(unaff_s2 + 4) <= uVar7) {
        FUN_80077f78(puVar9,*(undefined4 *)(unaff_s4 + 0x18),*(undefined4 *)(unaff_s4 + 0x1c));
        setCopReg(2,0x4800,(int)*unaff_s2 - (int)*(short *)(unaff_s0 + 0xf));
        setCopReg(2,0x5000,(int)unaff_s2[1] - (int)*(short *)((int)unaff_s0 + 0x3e));
        setCopReg(2,0x5800,(int)unaff_s2[2] - (int)*(short *)(unaff_s0 + 0x10));
        copFunction(2,0xa00428);
        iVar6 = getCopReg(2,0xc800);
        iVar3 = getCopReg(2,0xd000);
        iVar4 = getCopReg(2,0xd800);
        uVar5 = iVar6 + iVar3 + iVar4;
        if (uVar5 < uVar7) {
          unaff_s0[0xd] = unaff_s0[0xf];
          unaff_s0[0xe] = unaff_s0[0x10];
          uVar7 = uVar5;
        }
        if (*(uint *)(unaff_s2 + 4) <= uVar7) {
          FUN_80077f78(puVar9,*(undefined4 *)(unaff_s4 + 0x1c),*(undefined4 *)(unaff_s4 + 0x14));
          setCopReg(2,0x4800,(int)*unaff_s2 - (int)*(short *)(unaff_s0 + 0xf));
          setCopReg(2,0x5000,(int)unaff_s2[1] - (int)*(short *)((int)unaff_s0 + 0x3e));
          setCopReg(2,0x5800,(int)unaff_s2[2] - (int)*(short *)(unaff_s0 + 0x10));
          copFunction(2,0xa00428);
          iVar6 = getCopReg(2,0xc800);
          iVar3 = getCopReg(2,0xd000);
          iVar4 = getCopReg(2,0xd800);
          uVar5 = iVar6 + iVar3 + iVar4;
          if (uVar5 < uVar7) {
            unaff_s0[0xd] = unaff_s0[0xf];
            unaff_s0[0xe] = unaff_s0[0x10];
            uVar7 = uVar5;
          }
          if (*(uint *)(unaff_s2 + 4) <= uVar7) {
            return unaff_s6;
          }
        }
      }
      iStack00000018 = (int)*unaff_s2 - (int)*(short *)(unaff_s0 + 0xd);
      iStack0000001c = (int)unaff_s2[1] - (int)*(short *)((int)unaff_s0 + 0x36);
      iStack00000020 = (int)unaff_s2[2] - (int)*(short *)(unaff_s0 + 0xe);
      iStack00000028 = iStack00000018;
      if (iStack00000018 < 0) {
        iStack00000028 = -iStack00000018;
      }
      iStack0000002c = iStack0000001c;
      if (iStack0000001c < 0) {
        iStack0000002c = -iStack0000001c;
      }
      iStack00000030 = iStack00000020;
      if (iStack00000020 < 0) {
        iStack00000030 = -iStack00000020;
      }
      FUN_80039410(&stack0x00000028,&stack0x0000002c,&stack0x00000030);
      *unaff_s5 = *(short *)(unaff_s0 + 0xd);
      unaff_s5[1] = *(short *)((int)unaff_s0 + 0x36);
      unaff_s5[2] = *(short *)(unaff_s0 + 0xe);
      iVar4 = iStack00000030 * 0x1e + iStack0000002c * 0xc + iStack00000028 * 9;
      if (iVar4 == 0) {
        sStack00000018 = (short)((int)((int)*(short *)unaff_s0 * (uint)(ushort)unaff_s2[3]) >> 0xc);
        sStack0000001c =
             (short)((int)((int)*(short *)((int)unaff_s0 + 2) * (uint)(ushort)unaff_s2[3]) >> 0xc);
        sStack00000020 =
             (short)((int)((int)*(short *)(unaff_s0 + 1) * (uint)(ushort)unaff_s2[3]) >> 0xc);
      }
      else {
        sStack0000001c = (short)((int)(iStack0000001c * (uint)(ushort)unaff_s2[3] * 0x20) / iVar4);
        sStack00000020 = (short)((int)(iStack00000020 * (uint)(ushort)unaff_s2[3] * 0x20) / iVar4);
        sStack00000018 = (short)((int)(iStack00000018 * (uint)(ushort)unaff_s2[3] * 0x20) / iVar4);
      }
      *unaff_s2 = sStack00000018 + *(short *)(unaff_s0 + 0xd);
      unaff_s2[1] = sStack0000001c + *(short *)((int)unaff_s0 + 0x36);
      unaff_s6 = 1;
      unaff_s2[2] = sStack00000020 + *(short *)(unaff_s0 + 0xe);
    }
    else {
      *(short *)(unaff_s0 + 0xd) = *(short *)(unaff_s0 + 0xf);
      *(short *)((int)unaff_s0 + 0x36) = *(short *)((int)unaff_s0 + 0x3e);
      *(short *)(unaff_s0 + 0xe) = *(short *)(unaff_s0 + 0x10);
      *unaff_s5 = *(short *)(unaff_s0 + 0xd);
      unaff_s5[1] = *(short *)((int)unaff_s0 + 0x36);
      unaff_s5[2] = *(short *)(unaff_s0 + 0xe);
      sVar2 = *(short *)((int)unaff_s0 + 2);
      sVar1 = *(short *)(unaff_s0 + 1);
      sStack00000018 = (short)((int)((int)*(short *)unaff_s0 * (uint)(ushort)unaff_s2[3]) >> 0xc);
      *unaff_s2 = sStack00000018 + *(short *)(unaff_s0 + 0xd);
      sStack0000001c = (short)((int)((int)sVar2 * (uint)(ushort)unaff_s2[3]) >> 0xc);
      unaff_s2[1] = sStack0000001c + *(short *)((int)unaff_s0 + 0x36);
      sStack00000020 = (short)((int)((int)sVar1 * (uint)(ushort)unaff_s2[3]) >> 0xc);
      unaff_s6 = -1;
      unaff_s2[2] = sStack00000020 + *(short *)(unaff_s0 + 0xe);
      *unaff_s1 = 0;
    }
  }
  return unaff_s6;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_SAndT(struct SCollideInfo *scollideInfo /*stack 0*/, struct Level *level /*stack 4*/)
 // line 3243, offset 0x80022bf8
	/* begin block 1 */
		// Start line: 3244
		// Start offset: 0x80022BF8
		// Variables:
	// 		struct SandTScratch *CSpad; // $s0
	// 		void **stack; // $s1
	// 		struct _BSPNode *bspNode; // $a1
	// 		struct _Terrain *terrain; // $s5
	// 		long curTree; // stack offset -44

		/* begin block 1.1 */
			// Start line: 3280
			// Start offset: 0x80022C74
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $v0
		// 		struct _SVector *_v0; // $s2
		// 		struct _SVector *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x80022C74
		// End Line: 3280

		/* begin block 1.2 */
			// Start line: 3280
			// Start offset: 0x80022C74
			// Variables:
		// 		long a; // stack offset -56
		// 		long b; // stack offset -52
		// 		long c; // stack offset -48
		/* end block 1.2 */
		// End offset: 0x80022C74
		// End Line: 3280

		/* begin block 1.3 */
			// Start line: 3314
			// Start offset: 0x80022E64
			// Variables:
		// 		struct BSPTree *bsp; // $s4

			/* begin block 1.3.1 */
				// Start line: 3329
				// Start offset: 0x80022EF0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // $fp
			// 		struct _Position *_v1; // $t0
			/* end block 1.3.1 */
			// End offset: 0x80022EF0
			// End Line: 3329

			/* begin block 1.3.2 */
				// Start line: 3329
				// Start offset: 0x80022EF0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // $s7
			/* end block 1.3.2 */
			// End offset: 0x80022EF0
			// End Line: 3329

			/* begin block 1.3.3 */
				// Start line: 3329
				// Start offset: 0x80022EF0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _Position *_v; // $s6
			/* end block 1.3.3 */
			// End offset: 0x80022EF0
			// End Line: 3329

			/* begin block 1.3.4 */
				// Start line: 3244
				// Start offset: 0x80022FF4
				// Variables:
			// 		struct _SVector *point; // $t0
			// 		struct _BoundingBox *box; // $a3
			/* end block 1.3.4 */
			// End offset: 0x8002308C
			// End Line: 3244

			/* begin block 1.3.5 */
				// Start line: 3365
				// Start offset: 0x80023094
				// Variables:
			// 		struct _TFace *tface; // $s3

				/* begin block 1.3.5.1 */
					// Start line: 3385
					// Start offset: 0x80023138
					// Variables:
				// 		struct _SVector *vertex0; // $a3

					/* begin block 1.3.5.1.1 */
						// Start line: 3244
						// Start offset: 0x800231B0
						// Variables:
					// 		short *nrmlArray; // $a0
					// 		struct _SVector *nrml; // $a1

						/* begin block 1.3.5.1.1.1 */
							// Start line: 3244
							// Start offset: 0x800231B0
							// Variables:
						// 		short *sPtr; // $v1
						/* end block 1.3.5.1.1.1 */
						// End offset: 0x80023240
						// End Line: 3244
					/* end block 1.3.5.1.1 */
					// End offset: 0x80023240
					// End Line: 3244

					/* begin block 1.3.5.1.2 */
						// Start line: 3417
						// Start offset: 0x800232D4
					/* end block 1.3.5.1.2 */
					// End offset: 0x80023434
					// End Line: 3469
				/* end block 1.3.5.1 */
				// End offset: 0x80023434
				// End Line: 3470
			/* end block 1.3.5 */
			// End offset: 0x80023454
			// End Line: 3473

			/* begin block 1.3.6 */
				// Start line: 3484
				// Start offset: 0x8002347C
				// Variables:
			// 		int plane_front_error; // $v0
			// 		int plane_back_error; // $a3
			/* end block 1.3.6 */
			// End offset: 0x800235CC
			// End Line: 3547

			/* begin block 1.3.7 */
				// Start line: 3551
				// Start offset: 0x800235DC
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _Position *_v1; // $t0
			/* end block 1.3.7 */
			// End offset: 0x800235DC
			// End Line: 3551

			/* begin block 1.3.8 */
				// Start line: 3551
				// Start offset: 0x800235DC
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			/* end block 1.3.8 */
			// End offset: 0x800235DC
			// End Line: 3551

			/* begin block 1.3.9 */
				// Start line: 3551
				// Start offset: 0x800235DC
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			/* end block 1.3.9 */
			// End offset: 0x80023670
			// End Line: 3553
		/* end block 1.3 */
		// End offset: 0x80023670
		// End Line: 3554

		/* begin block 1.4 */
			// Start line: 3555
			// Start offset: 0x80023688
			// Variables:
		// 		short _x1; // $a0
		// 		short _y1; // $a1
		// 		short _z1; // $v1
		// 		struct _Position *_v0; // $v0
		// 		struct _Position *_v1; // $v1
		/* end block 1.4 */
		// End offset: 0x80023688
		// End Line: 3555
	/* end block 1 */
	// End offset: 0x800236B4
	// End Line: 3557

	/* begin block 2 */
		// Start line: 8066
	/* end block 2 */
	// End Line: 8067

long COLLIDE_SAndT(SCollideInfo *scollideInfo,Level *level)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 in_zero;
  undefined4 in_at;
  undefined uVar6;
  undefined4 *puVar7;
  short *psVar8;
  long lVar9;
  int **ppiVar10;
  undefined4 in_v1;
  int iVar11;
  ushort *puVar12;
  int *piVar13;
  int iVar14;
  int *in_t2;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *unaff_s0;
  int **unaff_s1;
  int **ppiVar17;
  ushort *puVar18;
  ushort *puVar19;
  int **ppiVar20;
  int unaff_s5;
  int iStack00000018;
  int iStack0000001c;
  int iStack00000020;
  int iStack00000024;
  short **in_stack_00000050;
  undefined4 in_stack_00000054;
  
  unaff_s0[0x24] = in_t2[2];
  unaff_s0[0x25] = in_t2[5];
  unaff_s0[0x2a] = in_t2[6];
  puVar7 = (undefined4 *)*in_t2;
  uVar15 = puVar7[1];
  uVar16 = puVar7[2];
  unaff_s0[0x2d] = *puVar7;
  unaff_s0[0x2e] = uVar15;
  unaff_s0[0x2f] = uVar16;
  *(short *)(unaff_s0 + 0x30) = 0;
  unaff_s0[0x31] = in_v1;
  *(SCollideInfo **)(unaff_s0 + 0x32) = scollideInfo;
  psVar8 = in_stack_00000050[1];
  sVar2 = psVar8[1];
  sVar3 = psVar8[2];
  *(short *)(unaff_s0 + 0x28) = *psVar8;
  *(short *)((int)unaff_s0 + 0xa2) = sVar2;
  *(short *)(unaff_s0 + 0x29) = sVar3;
  *(short *)(unaff_s0 + 0x22) = *(short *)(unaff_s0 + 0x2d);
  *(short *)((int)unaff_s0 + 0x8a) = *(short *)((int)unaff_s0 + 0xb6);
  *(short *)(unaff_s0 + 0x23) = *(short *)(unaff_s0 + 0x2e);
  *(short *)(unaff_s0 + 0x20) = *(short *)(unaff_s0 + 0x2d) - *(short *)(unaff_s0 + 0x28);
  *(short *)((int)unaff_s0 + 0x82) =
       *(short *)((int)unaff_s0 + 0xb6) - *(short *)((int)unaff_s0 + 0xa2);
  iStack00000018 = (int)*(short *)(unaff_s0 + 0x20);
  if (iStack00000018 < 0) {
    iStack00000018 = -iStack00000018;
  }
  *(short *)(unaff_s0 + 0x21) = *(short *)(unaff_s0 + 0x2e) - *(short *)(unaff_s0 + 0x29);
  iStack0000001c = (int)*(short *)((int)unaff_s0 + 0x82);
  iStack00000020 = (int)*(short *)(unaff_s0 + 0x21);
  if (iStack0000001c < 0) {
    iStack0000001c = -iStack0000001c;
  }
  if (iStack00000020 < 0) {
    iStack00000020 = -iStack00000020;
  }
  FUN_80039410(&stack0x00000018,&stack0x0000001c,&stack0x00000020);
  iVar11 = iStack00000020 * 0x1e + iStack0000001c * 0xc + iStack00000018 * 9;
  unaff_s0[0x33] = iVar11;
  lVar9 = 0;
  if (iVar11 != 0) {
    *(short *)(unaff_s0 + 0x20) =
         (short)((int)*(short *)(unaff_s0 + 0x22) + (int)*(short *)(unaff_s0 + 0x28) >> 1);
    *(short *)((int)unaff_s0 + 0x82) =
         (short)((int)*(short *)((int)unaff_s0 + 0x8a) + (int)*(short *)((int)unaff_s0 + 0xa2) >> 1)
    ;
    *(short *)(unaff_s0 + 0x21) =
         (short)((int)*(short *)(unaff_s0 + 0x23) + (int)*(short *)(unaff_s0 + 0x29) >> 1);
    iVar11 = ((int)(unaff_s0[0x33] + ((uint)unaff_s0[0x33] >> 0x1f)) >> 1) +
             (uint)*(ushort *)((int)unaff_s0 + 0xba);
    unaff_s0[0x33] = iVar11;
    if (unaff_s0[0x27] == 2) {
      unaff_s0[0x33] = iVar11 + 0x800;
    }
    iStack00000024 = 0;
    if (0 < *(int *)(unaff_s5 + 0x44)) {
      do {
        ppiVar20 = (int **)(*(int *)(unaff_s5 + 0x48) + iStack00000024 * 0x24);
        if (((-1 < *(short *)((int)ppiVar20 + 0x1a)) &&
            ((uVar4 = *(ushort *)((int)ppiVar20 + 0x12), (uVar4 & 0x4000) == 0 ||
             (gameTrackerX.instancePool._1_1_ != '\0')))) &&
           (((uVar4 & 0x2000) == 0 || (gameTrackerX.controlData[1][2]._2_1_ != '\0')))) {
          if ((uVar4 & 0x102) == 0) {
            *(short *)((int)unaff_s0 + 0x5e) = *(short *)((int)ppiVar20 + 0x1a);
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x28) = *(short *)(unaff_s0 + 0x28) - *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0xa2) = *(short *)((int)unaff_s0 + 0xa2) - sVar2;
            *(short *)(unaff_s0 + 0x29) = *(short *)(unaff_s0 + 0x29) - sVar3;
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x20) = *(short *)(unaff_s0 + 0x20) - *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0x82) = *(short *)((int)unaff_s0 + 0x82) - sVar2;
            *(short *)(unaff_s0 + 0x21) = *(short *)(unaff_s0 + 0x21) - sVar3;
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x2d) = *(short *)(unaff_s0 + 0x2d) - *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0xb6) = *(short *)((int)unaff_s0 + 0xb6) - sVar2;
            *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x2e) - sVar3;
            *(short *)unaff_s0 = *(short *)(unaff_s0 + 0x2d);
            *(short *)((int)unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0xb6);
            *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x2e);
            *(short *)((int)unaff_s0 + 6) = *(short *)(unaff_s0 + 0x28);
            *(short *)(unaff_s0 + 2) = *(short *)((int)unaff_s0 + 0xa2);
            *(short *)((int)unaff_s0 + 10) = *(short *)(unaff_s0 + 0x29);
            *(int ***)unaff_s1 = unaff_s1;
            FUN_800bce3c();
            ppiVar10 = (int **)*ppiVar20;
            unaff_s1 = unaff_s1 + 1;
            *(int ***)unaff_s1 = ppiVar10;
            ppiVar17 = unaff_s1;
            if (ppiVar10 != unaff_s1) {
              do {
                piVar13 = *ppiVar17;
                unaff_s1 = ppiVar17 + -1;
                if ((*(ushort *)((int)piVar13 + 0xe) & 2) == 0) {
                  setCopReg(2,in_zero,piVar13[2]);
                  setCopReg(2,in_at,piVar13[3]);
                  copFunction(2,0x486012);
                  uVar15 = getCopReg(2,0x19);
                  unaff_s0[8] = uVar15;
                  uVar15 = getCopReg(2,0x1a);
                  unaff_s0[9] = uVar15;
                  uVar15 = getCopReg(2,0x1b);
                  unaff_s0[10] = uVar15;
                  unaff_s0[8] = unaff_s0[8] - piVar13[4];
                  unaff_s0[9] = unaff_s0[9] - piVar13[4];
                  if (unaff_s0[0x27] == 0) {
                    sVar2 = *(short *)(piVar13 + 10);
                    sVar3 = *(short *)((int)piVar13 + 0x2a);
                  }
                  else {
                    sVar2 = *(short *)(piVar13 + 9);
                    sVar3 = *(short *)((int)piVar13 + 0x26);
                  }
                  iVar14 = unaff_s0[9];
                  iVar11 = (uint)*(ushort *)((int)unaff_s0 + 0xba) + (int)sVar2;
                  if (iVar14 < iVar11) {
                    iVar11 = (int)sVar3 - (uint)*(ushort *)((int)unaff_s0 + 0xba);
                    if (iVar11 < iVar14) {
                      if ((int)unaff_s0[8] < iVar14) goto LAB_80023500;
                      if ((int *)piVar13[5] != (int *)0x0) {
                        *ppiVar17 = (int *)piVar13[5];
                        unaff_s1 = ppiVar17;
                      }
                      piVar13 = (int *)piVar13[6];
                    }
                    else {
                      if ((iVar11 <= (int)unaff_s0[8]) && ((int *)piVar13[5] != (int *)0x0)) {
                        *ppiVar17 = (int *)piVar13[5];
                        unaff_s1 = ppiVar17;
                      }
                      piVar13 = (int *)piVar13[6];
                    }
                  }
                  else {
                    if ((int)unaff_s0[8] <= iVar11) {
LAB_80023500:
                      if ((int *)piVar13[6] != (int *)0x0) {
                        *ppiVar17 = (int *)piVar13[6];
                        unaff_s1 = ppiVar17;
                      }
                    }
                    piVar13 = (int *)piVar13[5];
                  }
                  if (piVar13 != (int *)0x0) {
                    unaff_s1 = unaff_s1 + 1;
                    *unaff_s1 = piVar13;
                  }
                }
                else {
                  bVar5 = false;
                  iVar11 = (int)*(short *)(unaff_s0 + 0x33);
                  if (((((int)*(short *)(unaff_s0 + 0x20) - iVar11 <
                         (int)*(short *)((int)piVar13 + 0x16)) &&
                       ((int)*(short *)(piVar13 + 4) < (int)*(short *)(unaff_s0 + 0x20) + iVar11))
                      && ((int)*(short *)((int)unaff_s0 + 0x82) - iVar11 <
                          (int)*(short *)(piVar13 + 6))) &&
                     (((int)*(short *)((int)piVar13 + 0x12) <
                       (int)*(short *)((int)unaff_s0 + 0x82) + iVar11 &&
                      ((int)*(short *)(unaff_s0 + 0x21) - iVar11 <
                       (int)*(short *)((int)piVar13 + 0x1a))))) {
                    bVar5 = (int)*(short *)(piVar13 + 5) < (int)*(short *)(unaff_s0 + 0x21) + iVar11
                    ;
                  }
                  if (bVar5) {
                    *unaff_s0 = unaff_s0[0x2d];
                    *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x2e);
                    setCopControlWord(2,0,*unaff_s0);
                    setCopControlWord(2,0x800,unaff_s0[1]);
                    sVar2 = *(short *)(piVar13 + 3);
                    *(short *)((int)unaff_s0 + 0xc2) = sVar2;
                    puVar19 = (ushort *)piVar13[2];
                    puVar18 = puVar19 + 2;
                    if (sVar2 != 0) {
                      do {
                        bVar1 = *(byte *)(puVar18 + 1);
                        if ((((((uint)bVar1 & unaff_s0[0x31]) == 0) ||
                             (((uint)bVar1 & unaff_s0[0x32]) != 0)) &&
                            ((puVar18[3] == 0xffff ||
                             ((*(ushort *)(*(int *)(unaff_s5 + 0x34) + (uint)puVar18[3] + 10) &
                              0x2000) == 0)))) && ((bVar1 & 8) == 0)) {
                          if ((unaff_s0[0x27] == 2) &&
                             ((uint)puVar18[2] !=
                              (int)*(short *)(((int)((int)puVar19 - *(int *)(unaff_s5 + 0x20)) *
                                               -0x55555555 >> 2) * 2 + *(int *)(unaff_s5 + 0x4c))))
                          {
                            FUN_8001e74c();
                          }
                          else {
                            iVar11 = (int)(short)puVar18[2];
                            if (iVar11 < 0) {
                              puVar12 = (ushort *)(unaff_s0[0xb] + iVar11 * -6);
                              *(ushort *)(unaff_s0 + 0x2b) = -(*puVar12 & 0x1fff);
                              *(short *)((int)unaff_s0 + 0xae) = -puVar12[1];
                              *(ushort *)(unaff_s0 + 0x2c) = -puVar12[2];
                            }
                            else {
                              puVar12 = (ushort *)(unaff_s0[0xb] + iVar11 * 6);
                              *(ushort *)(unaff_s0 + 0x2b) = *puVar12 & 0x1fff;
                              *(ushort *)((int)unaff_s0 + 0xae) = puVar12[1];
                              *(ushort *)(unaff_s0 + 0x2c) = puVar12[2];
                            }
                          }
                          puVar7 = (undefined4 *)(unaff_s0[0x34] + (uint)*puVar19 * 0xc);
                          setCopControlWord(2,0x1800,*puVar7);
                          setCopControlWord(2,0x2000,puVar7[1]);
                          setCopReg(2,in_zero,unaff_s0[0x2b]);
                          setCopReg(2,in_at,unaff_s0[0x2c]);
                          copFunction(2,0x486012);
                          uVar15 = getCopReg(2,0x19);
                          unaff_s0[8] = uVar15;
                          uVar15 = getCopReg(2,0x1a);
                          unaff_s0[9] = uVar15;
                          uVar15 = getCopReg(2,0x1b);
                          unaff_s0[10] = uVar15;
                          if ((int)unaff_s0[8] <= (int)unaff_s0[9]) {
                            if (((int)(unaff_s0[8] - unaff_s0[10]) <
                                 (int)(uint)*(ushort *)((int)unaff_s0 + 0xba)) &&
                               ((int)-(uint)*(ushort *)((int)unaff_s0 + 0xba) <=
                                (int)(unaff_s0[9] - unaff_s0[10]))) {
                              *(ushort **)(unaff_s0 + 0x1a) = puVar19;
                              *(undefined4 **)(unaff_s0 + 0x1d) = puVar7;
                              unaff_s0[0x1e] = unaff_s0[0x34] + (int)(short)puVar18[-1] * 0xc;
                              unaff_s0[0x1f] = unaff_s0[0x34] + (int)(short)*puVar18 * 0xc;
                              unaff_s0[0x1b] = unaff_s0[0x2b];
                              unaff_s0[0x1c] = unaff_s0[0x2c];
                              iVar11 = FUN_80022480(unaff_s0 + 0x2d,unaff_s0 + 0x28,unaff_s0 + 0x18,
                                                    unaff_s0 + 0x14);
                              if (iVar11 != 0) {
                                *(undefined *)(unaff_s0 + 0xd) = 0;
                                if (unaff_s0[0x26] == 0) {
                                  uVar6 = 8;
                                }
                                else {
                                  uVar6 = 4;
                                }
                                *(undefined *)(unaff_s0 + 0xd) = uVar6;
                                *(undefined *)((int)unaff_s0 + 0x36) = 1;
                                *(undefined *)((int)unaff_s0 + 0x37) = 3;
                                *(int ***)(unaff_s0 + 0x11) = ppiVar20;
                                unaff_s0[0xc] = in_stack_00000054;
                                unaff_s0[0x10] = unaff_s0[0x25];
                                uVar6 = *(undefined *)(in_stack_00000050 + 4);
                                unaff_s0[0xe] = unaff_s0[0x2a];
                                *(short *)((int)unaff_s0 + 0x5a) =
                                     *(short *)((int)unaff_s0 + 0xb6) -
                                     *(short *)((int)unaff_s0 + 2);
                                *(short *)(unaff_s0 + 0x16) =
                                     *(short *)(unaff_s0 + 0x2d) - *(short *)unaff_s0;
                                *(ushort **)(unaff_s0 + 0xf) = puVar19;
                                *(undefined *)((int)unaff_s0 + 0x35) = uVar6;
                                *(short *)(unaff_s0 + 0x17) =
                                     *(short *)(unaff_s0 + 0x2e) - *(short *)(unaff_s0 + 1);
                                if (unaff_s0[0x25] != 0) {
                                  *(undefined4 **)(unaff_s0[0x25] + 0xc0) = unaff_s0 + 0xc;
                                  if ((code *)unaff_s0[0x24] != (code *)0x0) {
                                    (*(code *)unaff_s0[0x24])(unaff_s0[0x25],0x800d0dcc);
                                  }
                                }
                                *(short *)(unaff_s0 + 0x30) = 1;
                                *unaff_s0 = unaff_s0[0x2d];
                                *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x2e);
                              }
                              FUN_800bce3c();
                            }
                          }
                        }
                        puVar18 = puVar18 + 6;
                        sVar2 = *(short *)((int)unaff_s0 + 0xc2);
                        *(short *)((int)unaff_s0 + 0xc2) = sVar2 + -1;
                        puVar19 = puVar19 + 6;
                      } while (sVar2 != 1);
                    }
                    *unaff_s0 = unaff_s0[0x2d];
                    *(short *)(unaff_s0 + 1) = *(short *)(unaff_s0 + 0x2e);
                    setCopControlWord(2,0,*unaff_s0);
                    setCopControlWord(2,0x800,unaff_s0[1]);
                  }
                }
                ppiVar17 = unaff_s1;
              } while ((int **)*unaff_s1 != unaff_s1);
            }
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x28) = *(short *)(unaff_s0 + 0x28) + *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0xa2) = *(short *)((int)unaff_s0 + 0xa2) + sVar2;
            *(short *)(unaff_s0 + 0x29) = *(short *)(unaff_s0 + 0x29) + sVar3;
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x20) = *(short *)(unaff_s0 + 0x20) + *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0x82) = *(short *)((int)unaff_s0 + 0x82) + sVar2;
            *(short *)(unaff_s0 + 0x21) = *(short *)(unaff_s0 + 0x21) + sVar3;
            sVar2 = *(short *)((int)ppiVar20 + 0xe);
            sVar3 = *(short *)(ppiVar20 + 4);
            *(short *)(unaff_s0 + 0x2d) = *(short *)(unaff_s0 + 0x2d) + *(short *)(ppiVar20 + 3);
            *(short *)((int)unaff_s0 + 0xb6) = *(short *)((int)unaff_s0 + 0xb6) + sVar2;
            *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x2e) + sVar3;
          }
          else {
            if ((uVar4 & 0xe0) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_8003432c(unaff_s0[0x25],1);
            }
          }
        }
        iStack00000024 = iStack00000024 + 1;
      } while (iStack00000024 < *(int *)(unaff_s5 + 0x44));
    }
    sVar2 = *(short *)((int)unaff_s0 + 0xb6);
    sVar3 = *(short *)(unaff_s0 + 0x2e);
    psVar8 = *in_stack_00000050;
    *psVar8 = *(short *)(unaff_s0 + 0x2d);
    psVar8[1] = sVar2;
    psVar8[2] = sVar3;
    lVar9 = (long)*(short *)(unaff_s0 + 0x30);
  }
  return lVar9;
}



// autogenerated function stub: 
// long /*$ra*/ COLLIDE_SphereAndTerrain(struct SCollideInfo *scollideInfo /*$s5*/, struct Level *level /*$s4*/)
long COLLIDE_SphereAndTerrain(struct SCollideInfo *scollideInfo, struct Level *level)
{ // line 3770, offset 0x800236e4
	/* begin block 1 */
		// Start line: 3771
		// Start offset: 0x800236E4
		// Variables:
			int result; // $s3
			int d; // $s1

		/* begin block 1.1 */
			// Start line: 3771
			// Start offset: 0x800236E4
			// Variables:
				int in_warpRoom; // $s2
				struct _StreamUnit *stream; // $v0
		/* end block 1.1 */
		// End offset: 0x800237A4
		// End Line: 3800
	/* end block 1 */
	// End offset: 0x800237A4
	// End Line: 3802

	/* begin block 2 */
		// Start line: 9618
	/* end block 2 */
	// End Line: 9619

	return 0;
}


// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_InstanceTerrain(struct _Instance *instance /*stack 0*/, struct Level *level /*stack 4*/)
 // line 4238, offset 0x800237cc
	/* begin block 1 */
		// Start line: 4239
		// Start offset: 0x800237CC
		// Variables:
	// 		struct _Vector *newPosVec; // stack offset -60
	// 		struct _Vector *oldPosVec; // stack offset -56
	// 		struct _SVector *oldPos; // $fp
	// 		struct SCollideInfo scollideInfoX; // stack offset -96
	// 		struct SCollideInfo *scollideInfo; // $s3
	// 		struct _Sphere *wSphere; // $s5
	// 		struct MATRIX *swTransform; // $s0
	// 		struct MATRIX *oldSWTransform; // $s1
	// 		void (*collideFunc)(); // stack offset -52
	// 		struct _HSphere *hsphere; // $s2
	// 		long flags; // stack offset -64

		/* begin block 1.1 */
			// Start line: 4273
			// Start offset: 0x80023898
			// Variables:
		// 		int i; // $s7
		// 		struct _HModel *hmodel; // $v0
		// 		struct _HPrim *hprim; // $s6
		/* end block 1.1 */
		// End offset: 0x80023A04
		// End Line: 4317
	/* end block 1 */
	// End offset: 0x80023A08
	// End Line: 4321

	/* begin block 2 */
		// Start line: 10562
	/* end block 2 */
	// End Line: 10563

void COLLIDE_InstanceTerrain(_Instance *instance,Level *level)

{
  byte **ppbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iStack0000003c;
  undefined *puStack00000040;
  int in_stack_00000070;
  
  iStack0000003c = *(int *)(in_stack_00000070 + 0xf4);
  if (iStack0000003c != 0) {
    ppbVar1 = (byte **)(*(int *)(in_stack_00000070 + 0xe8) +
                       (int)*(short *)(in_stack_00000070 + 0x10a) * 8);
    pbVar5 = ppbVar1[1];
    pbVar4 = *ppbVar1;
    puStack00000040 = &stack0x00000030;
    if (pbVar5 != (byte *)0x0) {
      pbVar3 = pbVar4 + 3;
      do {
        if ((((*pbVar4 & 1) != 0) && ((pbVar3[-2] & 2) != 0)) && (pbVar3[-1] == 1)) {
          iVar2 = *(int *)(in_stack_00000070 + 0x40) + (uint)*pbVar3 * 0x20;
          FUN_800bce3c(iVar2);
                    /* WARNING: Subroutine does not return */
          FUN_800bce1c(iVar2);
        }
        pbVar5 = pbVar5 + -1;
        pbVar3 = pbVar3 + 8;
        pbVar4 = pbVar4 + 8;
      } while (pbVar5 != (byte *)0x0);
    }
  }
  gameTrackerX.controlData[1][2]._2_1_ = 0;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ COLLIDE_LineWithSignals(struct _SVector *startPoint /*$a0*/, struct _SVector *endPoint /*$a1*/, struct _MultiSignal **signalList /*stack 8*/, long maxSignals /*stack 12*/, struct Level *level /*stack 16*/)
 // line 4331, offset 0x80023a38
	/* begin block 1 */
		// Start line: 4332
		// Start offset: 0x80023A38
		// Variables:
	// 		struct IandTScratch *CSpad; // $s0
	// 		void **stack; // $s2
	// 		struct _BSPNode *bspNode; // $a1
	// 		struct _TFace *tface; // $s3
	// 		struct _Terrain *terrain; // $s4
	// 		long curTree; // stack offset -56
	// 		long numSignalsCollidedWith; // $fp

		/* begin block 1.1 */
			// Start line: 4377
			// Start offset: 0x80023B20
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $a2
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $v0
		// 		struct _SVector *_v0; // $t1
		// 		struct _SVector *_v1; // $t0
		/* end block 1.1 */
		// End offset: 0x80023B20
		// End Line: 4377

		/* begin block 1.2 */
			// Start line: 4390
			// Start offset: 0x80023BB8
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v0
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _SVector *_v; // $s7
		// 		struct _Position *_v1; // $a2
		/* end block 1.2 */
		// End offset: 0x80023BB8
		// End Line: 4390

		/* begin block 1.3 */
			// Start line: 4390
			// Start offset: 0x80023BB8
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v0
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _SVector *_v; // $s6
		// 		struct _Position *_v1; // $a2
		/* end block 1.3 */
		// End offset: 0x80023BB8
		// End Line: 4390

		/* begin block 1.4 */
			// Start line: 4431
			// Start offset: 0x80023DEC
			// Variables:
		// 		struct _SVector *vertex0; // $a0

			/* begin block 1.4.1 */
				// Start line: 4332
				// Start offset: 0x80023DEC
				// Variables:
			// 		short *nrmlArray; // $a0
			// 		struct _SVector *nrml; // $a1

				/* begin block 1.4.1.1 */
					// Start line: 4332
					// Start offset: 0x80023DEC
					// Variables:
				// 		short *sPtr; // $v1
				/* end block 1.4.1.1 */
				// End offset: 0x80023E7C
				// End Line: 4332
			/* end block 1.4.1 */
			// End offset: 0x80023E7C
			// End Line: 4332

			/* begin block 1.4.2 */
				// Start line: 4449
				// Start offset: 0x80023EFC

				/* begin block 1.4.2.1 */
					// Start line: 4332
					// Start offset: 0x80023EFC
					// Variables:
				// 		struct _SVector *point; // $t0
				// 		struct _SVector *start; // $a3
				// 		struct _SVector *line; // $a2

					/* begin block 1.4.2.1.1 */
						// Start line: 4332
						// Start offset: 0x80023EFC
						// Variables:
					// 		long len; // $v1
					// 		long t; // $a1
					/* end block 1.4.2.1.1 */
					// End offset: 0x80023F2C
					// End Line: 4332
				/* end block 1.4.2.1 */
				// End offset: 0x80023F2C
				// End Line: 4332

				/* begin block 1.4.2.2 */
					// Start line: 4459
					// Start offset: 0x80023FE0
					// Variables:
				// 		struct _MultiSignal *msignal; // $v1
				/* end block 1.4.2.2 */
				// End offset: 0x80024010
				// End Line: 4470
			/* end block 1.4.2 */
			// End offset: 0x80024010
			// End Line: 4471
		/* end block 1.4 */
		// End offset: 0x80024010
		// End Line: 4472

		/* begin block 1.5 */
			// Start line: 4479
			// Start offset: 0x80024030
			// Variables:
		// 		int plane_front_error; // $v1
		// 		int plane_back_error; // $a0
		/* end block 1.5 */
		// End offset: 0x80024124
		// End Line: 4524

		/* begin block 1.6 */
			// Start line: 4526
			// Start offset: 0x80024134
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v0
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _Position *_v1; // $a2
		/* end block 1.6 */
		// End offset: 0x80024134
		// End Line: 4526

		/* begin block 1.7 */
			// Start line: 4526
			// Start offset: 0x80024134
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $a0
		// 		short _z0; // $a1
		// 		short _x1; // $v0
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _Position *_v1; // $a2
		/* end block 1.7 */
		// End offset: 0x800241AC
		// End Line: 4527
	/* end block 1 */
	// End offset: 0x800241C8
	// End Line: 4531

	/* begin block 2 */
		// Start line: 10815
	/* end block 2 */
	// End Line: 10816

long COLLIDE_LineWithSignals
               (_SVector *startPoint,_SVector *endPoint,_MultiSignal **signalList,long maxSignals,
               Level *level)

{
  short sVar1;
  short sVar2;
  undefined4 in_zero;
  undefined4 in_at;
  int in_v0;
  int iVar3;
  int in_v1;
  ushort *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *in_t7;
  undefined2 *unaff_s0;
  ushort *puVar8;
  int **unaff_s2;
  int **ppiVar9;
  ushort *puVar10;
  int unaff_s4;
  int iVar11;
  int iVar12;
  int iStack00000018;
  undefined4 *puStack00000020;
  int in_stack_00000058;
  int in_stack_0000005c;
  
  uVar7 = *(undefined4 *)&endPoint->z;
  *in_t7 = *(undefined4 *)endPoint;
  in_t7[1] = uVar7;
  if (in_v1 == in_v0) {
    if (loadStatus.decompressLen._2_2_ == 1) {
      *(undefined4 *)(unaff_s0 + 0x2c) = 1;
    }
    else {
      *(undefined4 *)(unaff_s0 + 0x2c) = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_s0 + 0x2c) = 2;
  }
  unaff_s0[0x1e] = unaff_s0[0x22] - unaff_s0[0x26];
  unaff_s0[0x1f] = unaff_s0[0x23] - unaff_s0[0x27];
  unaff_s0[0x20] = unaff_s0[0x24] - unaff_s0[0x28];
  if (((*(int *)(unaff_s0 + 0x1e) != 0) || (iVar12 = 0, unaff_s0[0x20] != 0)) &&
     (iStack00000018 = 0, iVar12 = 0, 0 < *(int *)(unaff_s4 + 0x44))) {
    puStack00000020 = (undefined4 *)(unaff_s0 + 0x14);
    iVar11 = 0;
    iVar12 = 0;
    do {
      if (*(short *)(iVar11 + *(int *)(unaff_s4 + 0x48) + 0x1a) == -1) {
        *(int ***)unaff_s2 = unaff_s2;
        iVar3 = *(int *)(unaff_s4 + 0x48) + iVar11;
        sVar1 = *(short *)(iVar3 + 0xe);
        sVar2 = *(short *)(iVar3 + 0x10);
        unaff_s0[0x26] = unaff_s0[0x26] - *(short *)(iVar3 + 0xc);
        unaff_s0[0x27] = unaff_s0[0x27] - sVar1;
        unaff_s0[0x28] = unaff_s0[0x28] - sVar2;
        iVar3 = *(int *)(unaff_s4 + 0x48) + iVar11;
        sVar1 = *(short *)(iVar3 + 0xe);
        sVar2 = *(short *)(iVar3 + 0x10);
        unaff_s0[0x22] = unaff_s0[0x22] - *(short *)(iVar3 + 0xc);
        unaff_s0[0x23] = unaff_s0[0x23] - sVar1;
        unaff_s0[0x24] = unaff_s0[0x24] - sVar2;
        unaff_s2 = unaff_s2 + 1;
        *unaff_s2 = *(int **)(iVar11 + *(int *)(unaff_s4 + 0x48));
        *unaff_s0 = unaff_s0[0x26];
        unaff_s0[1] = unaff_s0[0x27];
        unaff_s0[2] = unaff_s0[0x28];
        unaff_s0[3] = unaff_s0[0x22];
        unaff_s0[4] = unaff_s0[0x23];
        unaff_s0[5] = unaff_s0[0x24];
        FUN_800bce3c();
        ppiVar9 = unaff_s2;
        if ((int **)*unaff_s2 != unaff_s2) {
          do {
            piVar6 = *ppiVar9;
            unaff_s2 = ppiVar9 + -1;
            if ((*(ushort *)((int)piVar6 + 0xe) & 2) == 0) {
              setCopReg(2,in_zero,piVar6[2]);
              setCopReg(2,in_at,piVar6[3]);
              copFunction(2,0x486012);
              uVar7 = getCopReg(2,0x19);
              *puStack00000020 = uVar7;
              uVar7 = getCopReg(2,0x1a);
              puStack00000020[1] = uVar7;
              uVar7 = getCopReg(2,0x1b);
              puStack00000020[2] = uVar7;
              *(int *)(unaff_s0 + 0x14) = *(int *)(unaff_s0 + 0x14) - piVar6[4];
              *(int *)(unaff_s0 + 0x16) = *(int *)(unaff_s0 + 0x16) - piVar6[4];
              if (*(int *)(unaff_s0 + 0x2c) == 0) {
                sVar1 = *(short *)(piVar6 + 10);
                sVar2 = *(short *)((int)piVar6 + 0x2a);
              }
              else {
                sVar1 = *(short *)(piVar6 + 9);
                sVar2 = *(short *)((int)piVar6 + 0x26);
              }
              if ((*(int *)(unaff_s0 + 0x14) < (int)sVar1) ||
                 (*(int *)(unaff_s0 + 0x16) < (int)sVar1)) {
                if ((((int)sVar2 < *(int *)(unaff_s0 + 0x14)) ||
                    ((int)sVar2 < *(int *)(unaff_s0 + 0x16))) && ((int *)piVar6[5] != (int *)0x0)) {
                  *ppiVar9 = (int *)piVar6[5];
                  unaff_s2 = ppiVar9;
                }
                piVar6 = (int *)piVar6[6];
              }
              else {
                piVar6 = (int *)piVar6[5];
              }
              if (piVar6 != (int *)0x0) {
                unaff_s2 = unaff_s2 + 1;
                *unaff_s2 = piVar6;
              }
            }
            else {
              if ((((short)unaff_s0[0x26] <= *(short *)((int)piVar6 + 0x16)) ||
                  ((short)unaff_s0[0x22] <= *(short *)((int)piVar6 + 0x16))) &&
                 ((*(short *)(piVar6 + 4) <= (short)unaff_s0[0x26] ||
                  (*(short *)(piVar6 + 4) <= (short)unaff_s0[0x22])))) {
                if ((((short)unaff_s0[0x27] <= *(short *)(piVar6 + 6)) ||
                    ((short)unaff_s0[0x23] <= *(short *)(piVar6 + 6))) &&
                   ((*(short *)((int)piVar6 + 0x12) <= (short)unaff_s0[0x27] ||
                    (*(short *)((int)piVar6 + 0x12) <= (short)unaff_s0[0x23])))) {
                  if ((((short)unaff_s0[0x28] <= *(short *)((int)piVar6 + 0x1a)) ||
                      ((short)unaff_s0[0x24] <= *(short *)((int)piVar6 + 0x1a))) &&
                     ((*(short *)(piVar6 + 5) <= (short)unaff_s0[0x28] ||
                      (*(short *)(piVar6 + 5) <= (short)unaff_s0[0x24])))) {
                    iVar3 = (int)*(short *)(piVar6 + 3);
                    *(int *)(unaff_s0 + 0x2a) = iVar3;
                    puVar10 = (ushort *)piVar6[2];
                    puVar8 = puVar10 + 5;
                    while (iVar3 != 0) {
                      if (((puVar8[-2] & 0xc0) != 0) && (*puVar8 != 0xffff)) {
                        iVar3 = (int)(short)puVar8[-1];
                        if (iVar3 < 0) {
                          puVar4 = (ushort *)(*(int *)(unaff_s0 + 0x2e) + iVar3 * -6);
                          unaff_s0[0x10] = -(*puVar4 & 0x1fff);
                          unaff_s0[0x11] = -puVar4[1];
                          unaff_s0[0x12] = -puVar4[2];
                        }
                        else {
                          puVar4 = (ushort *)(*(int *)(unaff_s0 + 0x2e) + iVar3 * 6);
                          unaff_s0[0x10] = *puVar4 & 0x1fff;
                          unaff_s0[0x11] = puVar4[1];
                          unaff_s0[0x12] = puVar4[2];
                        }
                        puVar5 = (undefined4 *)(*(int *)(unaff_s0 + 0x30) + (uint)*puVar10 * 0xc);
                        setCopControlWord(2,0x1800,*puVar5);
                        setCopControlWord(2,0x2000,puVar5[1]);
                        setCopReg(2,in_zero,*(undefined4 *)(unaff_s0 + 0x10));
                        setCopReg(2,in_at,*(undefined4 *)(unaff_s0 + 0x12));
                        copFunction(2,0x486012);
                        uVar7 = getCopReg(2,0x19);
                        *puStack00000020 = uVar7;
                        uVar7 = getCopReg(2,0x1a);
                        puStack00000020[1] = uVar7;
                        uVar7 = getCopReg(2,0x1b);
                        puStack00000020[2] = uVar7;
                        *(int *)(unaff_s0 + 0x14) =
                             *(int *)(unaff_s0 + 0x14) - *(int *)(unaff_s0 + 0x18);
                        iVar3 = *(int *)(unaff_s0 + 0x16) - *(int *)(unaff_s0 + 0x18);
                        *(int *)(unaff_s0 + 0x16) = iVar3;
                        if ((*(int *)(unaff_s0 + 0x14) < 0) && (-1 < iVar3)) {
                          iVar3 = *(int *)(unaff_s0 + 0x14) - puStack00000020[1];
                          if (iVar3 == 0) {
                            iVar3 = 0;
                          }
                          else {
                            iVar3 = (int)(puStack00000020[1] << 0xc) / iVar3;
                          }
                          unaff_s0[0x1a] =
                               unaff_s0[0x22] + (short)((int)(short)unaff_s0[0x1e] * iVar3 >> 0xc);
                          unaff_s0[0x1b] =
                               unaff_s0[0x23] + (short)((int)(short)unaff_s0[0x1f] * iVar3 >> 0xc);
                          unaff_s0[0x1c] =
                               unaff_s0[0x24] + (short)((int)(short)unaff_s0[0x20] * iVar3 >> 0xc);
                          iVar3 = FUN_8001e3c4(puVar5,*(int *)(unaff_s0 + 0x30) +
                                                      (uint)puVar8[-4] * 0xc,
                                               *(int *)(unaff_s0 + 0x30) + (uint)puVar8[-3] * 0xc,
                                               unaff_s0 + 0x1a);
                          if ((iVar3 != 0) && (iVar3 = iVar12 * 4, iVar12 < in_stack_0000005c)) {
                            iVar12 = iVar12 + 1;
                            *(int *)(iVar3 + in_stack_00000058) =
                                 *(int *)(unaff_s4 + 0x50) + (uint)*puVar8;
                          }
                        }
                      }
                      puVar8 = puVar8 + 6;
                      puVar10 = puVar10 + 6;
                      iVar3 = *(int *)(unaff_s0 + 0x2a) + -1;
                      *(int *)(unaff_s0 + 0x2a) = iVar3;
                    }
                  }
                }
              }
            }
            ppiVar9 = unaff_s2;
          } while ((int **)*unaff_s2 != unaff_s2);
        }
        iVar3 = *(int *)(unaff_s4 + 0x48) + iVar11;
        sVar1 = *(short *)(iVar3 + 0xe);
        sVar2 = *(short *)(iVar3 + 0x10);
        unaff_s0[0x26] = unaff_s0[0x26] + *(short *)(iVar3 + 0xc);
        unaff_s0[0x27] = unaff_s0[0x27] + sVar1;
        unaff_s0[0x28] = unaff_s0[0x28] + sVar2;
        iVar3 = *(int *)(unaff_s4 + 0x48) + iVar11;
        sVar1 = *(short *)(iVar3 + 0xe);
        sVar2 = *(short *)(iVar3 + 0x10);
        unaff_s0[0x22] = unaff_s0[0x22] + *(short *)(iVar3 + 0xc);
        unaff_s0[0x23] = unaff_s0[0x23] + sVar1;
        unaff_s0[0x24] = unaff_s0[0x24] + sVar2;
      }
      iVar11 = iVar11 + 0x24;
      iStack00000018 = iStack00000018 + 1;
    } while (iStack00000018 < *(int *)(unaff_s4 + 0x44));
  }
  return iVar12;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_InstanceTerrainSignal(struct _Instance *instance /*$s3*/, struct Level *level /*$s1*/)
 // line 4548, offset 0x800241fc
	/* begin block 1 */
		// Start line: 4549
		// Start offset: 0x800241FC
		// Variables:
	// 		struct _SVector startPoint; // stack offset -72
	// 		struct _SVector endPoint; // stack offset -64
	// 		struct _Model *model; // $s0
	// 		long numSignals; // $s4
	// 		long d; // $s1
	// 		struct _MultiSignal (*signalListArray[8]); // stack offset -56

		/* begin block 1.1 */
			// Start line: 4616
			// Start offset: 0x800243DC
			// Variables:
		// 		struct _MultiSignal *msignal; // $s0
		/* end block 1.1 */
		// End offset: 0x800243FC
		// End Line: 4625
	/* end block 1 */
	// End offset: 0x80024424
	// End Line: 4630

	/* begin block 2 */
		// Start line: 11519
	/* end block 2 */
	// End Line: 11520

void COLLIDE_InstanceTerrainSignal(_Instance *instance,Level *level)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_s3;
  short in_stack_0000001c;
  undefined4 uStack00000020;
  short sStack00000024;
  uint uStack00000024;
  
  in_stack_0000001c = in_stack_0000001c + 100;
  uStack00000020 = *(undefined4 *)(unaff_s3 + 0x5c);
  sStack00000024 = (short)*(uint *)(unaff_s3 + 0x60);
  uStack00000024 = *(uint *)(unaff_s3 + 0x60) & 0xffff0000 | (uint)(ushort)(sStack00000024 + 100);
  piVar4 = (int *)&stack0x00000028;
  iVar1 = FUN_8002399c(&stack0x00000018,&stack0x00000020,piVar4,8);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *piVar4;
      if (unaff_s3 == loadStatus.bigFile.searchDirID) {
        *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) | 1;
      }
      FUN_8001e174();
      FUN_80060744(iVar2);
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



// autogenerated function stub: 
// struct _StreamUnit * /*$ra*/ COLLIDE_CameraWithStreamSignals(struct Camera *camera /*$s1*/)
struct _StreamUnit * COLLIDE_CameraWithStreamSignals(struct Camera *camera)
{ // line 4634, offset 0x80024444
	/* begin block 1 */
		// Start line: 4635
		// Start offset: 0x80024444
		// Variables:
			struct _SVector startPoint; // stack offset -112
			struct _SVector endPoint; // stack offset -104
			struct _Model *model; // $v1
			long numSignals; // $s3
			long i; // $s1
			long numStreamSignals; // $s2
			struct _MultiSignal (*signalListArray[8]); // stack offset -96
			struct _StreamUnit (*streamSignalUnits[8]); // stack offset -64
			struct _StreamUnit *playerStreamUnit; // $s2
			struct Level *level; // $v0
			long playerStreamUnitID; // $s4
			struct _Instance *instance; // $s0
			struct _Instance *af_instance; // $v0

		/* begin block 1.1 */
			// Start line: 4725
			// Start offset: 0x800245E0
			// Variables:
				struct _MultiSignal *msignal; // $v0
				long isWarpGateSignal; // stack offset -32

			/* begin block 1.1.1 */
				// Start line: 4733
				// Start offset: 0x80024604
				// Variables:
					struct _StreamUnit *cameraStreamUnit; // $v1
					long cameraStreamID; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 4742
					// Start offset: 0x80024624
					// Variables:
						int number; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80024638
				// End Line: 4746
			/* end block 1.1.1 */
			// End offset: 0x8002469C
			// End Line: 4762
		/* end block 1.1 */
		// End offset: 0x8002469C
		// End Line: 4763
	/* end block 1 */
	// End offset: 0x8002470C
	// End Line: 4794

	/* begin block 2 */
		// Start line: 11707
	/* end block 2 */
	// End Line: 11708

	return null;
}


// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_InstanceListWithSignals(struct _InstanceList *instanceList /*$a0*/)
 // line 4797, offset 0x8002472c
	/* begin block 1 */
		// Start line: 4798
		// Start offset: 0x8002472C
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct Level *level; // $v0
	/* end block 1 */
	// End offset: 0x8002478C
	// End Line: 4814

	/* begin block 2 */
		// Start line: 12100
	/* end block 2 */
	// End Line: 12101

void COLLIDE_InstanceListWithSignals(_InstanceList *instanceList)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  
  while( true ) {
    while (unaff_s0 != 0) {
      if (((*(int *)(unaff_s0 + 0xe8) != 0) && ((*(uint *)(unaff_s0 + 0x18) & unaff_s3) == 0)) &&
         (iVar1 = FUN_80059340(*(undefined4 *)(unaff_s0 + 0x38)), iVar1 != 0)) {
        FUN_80023730(unaff_s0,iVar1);
      }
      unaff_s0 = *(int *)(unaff_s0 + 4);
    }
    unaff_s2 = unaff_s2 + 2;
    if (0x1f < unaff_s2) break;
    unaff_s0 = *(int *)(unaff_s1 + 0x20);
    unaff_s1 = unaff_s1 + 0x10;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_InstanceListTerrain(struct _InstanceList *instanceList /*$a0*/)
 // line 4816, offset 0x800247a0
	/* begin block 1 */
		// Start line: 4817
		// Start offset: 0x800247A0
		// Variables:
	// 		long i; // $s2
	// 		struct _Instance *instance; // $s0
	// 		struct Level *level; // $v0
	/* end block 1 */
	// End offset: 0x80024834
	// End Line: 4856

	/* begin block 2 */
		// Start line: 12145
	/* end block 2 */
	// End Line: 12146

void COLLIDE_InstanceListTerrain(_InstanceList *instanceList)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_SegmentCollisionOn(struct _Instance *instance /*$a0*/, int segment /*$a1*/)
 // line 4947, offset 0x80024850
	/* begin block 1 */
		// Start line: 4949
		// Start offset: 0x80024850

		/* begin block 1.1 */
			// Start line: 4951
			// Start offset: 0x80024860
			// Variables:
		// 		int i; // $a2
		// 		struct _HModel *hmodel; // $v0
		// 		struct _HPrim *hprim; // $v1
		/* end block 1.1 */
		// End offset: 0x800248C0
		// End Line: 4962
	/* end block 1 */
	// End offset: 0x800248C0
	// End Line: 4963

	/* begin block 2 */
		// Start line: 9894
	/* end block 2 */
	// End Line: 9895

	/* begin block 3 */
		// Start line: 12376
	/* end block 3 */
	// End Line: 12377

void COLLIDE_SegmentCollisionOn(_Instance *instance,int segment)

{
  bool bVar1;
  byte **in_v0;
  byte *pbVar2;
  int in_a2;
  
  pbVar2 = *in_v0;
  bVar1 = false;
  if (in_a2 != 0) {
    do {
      if ((uint)pbVar2[3] == segment) {
        *pbVar2 = *pbVar2 & 0xfe;
      }
      if ((!bVar1) && ((*pbVar2 & 1) != 0)) {
        bVar1 = true;
      }
      in_a2 = in_a2 + -1;
      pbVar2 = pbVar2 + 8;
    } while (in_a2 != 0);
  }
  if (!bVar1) {
    instance->flags2 = instance->flags2 | 0x40000;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_SegmentCollisionOff(struct _Instance *instance /*$a0*/, int segment /*$a1*/)
 // line 4968, offset 0x800248c8
	/* begin block 1 */
		// Start line: 4970
		// Start offset: 0x800248C8

		/* begin block 1.1 */
			// Start line: 4972
			// Start offset: 0x800248D8
			// Variables:
		// 		int i; // $a2
		// 		int enabled; // $a3
		// 		struct _HModel *hmodel; // $v0
		// 		struct _HPrim *hprim; // $v1
		/* end block 1.1 */
		// End offset: 0x8002495C
		// End Line: 4987
	/* end block 1 */
	// End offset: 0x8002495C
	// End Line: 4988

	/* begin block 2 */
		// Start line: 12420
	/* end block 2 */
	// End Line: 12421

	/* begin block 3 */
		// Start line: 12421
	/* end block 3 */
	// End Line: 12422

void COLLIDE_SegmentCollisionOff(_Instance *instance,int segment)

{
  char cVar1;
  ushort uVar2;
  undefined auStack24 [8];
  
  cVar1 = *(char *)((int)&(instance->node).next + 3);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x03') {
      uVar2 = *(ushort *)((int)&instance->prev->next + 2);
      if ((uVar2 == 0xffff) ||
         ((*(ushort *)((int)&((instance->node).prev)->prev[6].next[1].prev + (uint)uVar2 + 2) &
          0x2000) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e6b4((int)*(short *)&instance->prev->next,((instance->node).prev)->prev[4].next,
                     segment);
      }
    }
    else {
      if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_8001e6b4((int)*(short *)&instance->prev->next,
                     *(undefined4 *)
                      (*(int *)((int)*(short *)(instance->flags + 0x10a) * 4 +
                               *(int *)(*(int *)(instance->flags + 0x1c) + 0xc)) + 0xc),auStack24);
      }
      if (((uint)(instance->node).next & 0xffff0000) == 0x5010000) {
                    /* WARNING: Subroutine does not return */
        FUN_800bd12c(*(undefined4 *)(instance->flags + 0x40),&instance->flags2,segment);
      }
    }
  }
  return;
}



// autogenerated function stub: 
// long /*$ra*/ COLLIDE_FindCollisionFaceNormal(struct _CollideInfo *collideInfo /*$a0*/, struct _Normal *normal /*$s2*/)
long COLLIDE_FindCollisionFaceNormal(struct _CollideInfo *collideInfo, struct _Normal *normal)
{ // line 5015, offset 0x80024964
	/* begin block 1 */
		// Start line: 5016
		// Start offset: 0x80024964
		// Variables:
			long valid_normal; // $a2

		/* begin block 1.1 */
			// Start line: 5025
			// Start offset: 0x80024998
			// Variables:
				struct _TFace *tface; // $a1
		/* end block 1.1 */
		// End offset: 0x800249E0
		// End Line: 5029

		/* begin block 1.2 */
			// Start line: 5036
			// Start offset: 0x80024A18

			/* begin block 1.2.1 */
				// Start line: 5040
				// Start offset: 0x80024A18
				// Variables:
					struct SVECTOR *lNormal; // stack offset -24
					struct _Instance *inst1; // $s1
			/* end block 1.2.1 */
			// End offset: 0x80024A18
			// End Line: 5041
		/* end block 1.2 */
		// End offset: 0x80024A18
		// End Line: 5041

		/* begin block 1.3 */
			// Start line: 5054
			// Start offset: 0x80024A6C
			// Variables:
				struct _Instance *inst1; // $v0
		/* end block 1.3 */
		// End offset: 0x80024A84
		// End Line: 5058
	/* end block 1 */
	// End offset: 0x80024A84
	// End Line: 5060

	/* begin block 2 */
		// Start line: 10030
	/* end block 2 */
	// End Line: 10031

	return 0;
}


// decompiled code
// original method signature: 
// short * /*$ra*/ COLLIDE_GetBSPTreeFlag(struct _CollideInfo *collideInfo /*$a0*/)
 // line 5065, offset 0x80024aa0
	/* begin block 1 */
		// Start line: 5067
		// Start offset: 0x80024AA0
		// Variables:
	// 		struct Level *level; // $v0
	// 		struct _Terrain *terrain; // $v0
	// 		struct BSPTree *bspTree; // $v0
	/* end block 1 */
	// End offset: 0x80024AA0
	// End Line: 5079

	/* begin block 2 */
		// Start line: 12592
	/* end block 2 */
	// End Line: 12593

	/* begin block 3 */
		// Start line: 12593
	/* end block 3 */
	// End Line: 12594

	/* begin block 4 */
		// Start line: 12605
	/* end block 4 */
	// End Line: 12606

short * COLLIDE_GetBSPTreeFlag(_CollideInfo *collideInfo)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  short *in_t4;
  undefined2 *unaff_s0;
  undefined4 *puVar10;
  ushort *unaff_s5;
  int unaff_s6;
  short *unaff_s7;
  int unaff_s8;
  undefined2 *puStack00000010;
  short *psStack00000018;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  
  psStack00000018 = (short *)0x0;
  if ((unaff_s5 == (ushort *)0x0) || ((*(ushort *)(unaff_s6 + 0x12) & 2) != 0)) {
    psStack00000018 = (short *)0x0;
  }
  else {
    if ((1 << (*(byte *)(unaff_s5 + 3) & 0x1f) & in_stack_0000005c) == 0) {
      DAT_1f800068 = *unaff_s7 - *(short *)(unaff_s6 + 0xc);
      DAT_1f80006a = unaff_s7[1] - *(short *)(unaff_s6 + 0xe);
      DAT_1f80006c._0_2_ = unaff_s7[2] - *(short *)(unaff_s6 + 0x10);
      DAT_1f800070._0_2_ = *in_t4 - *(short *)(unaff_s6 + 0xc);
      DAT_1f800070._2_2_ = in_t4[1] - *(short *)(unaff_s6 + 0xe);
      DAT_1f800074._0_2_ = in_t4[2] - *(short *)(unaff_s6 + 0x10);
      *unaff_s0 = unaff_s0[0x14];
      unaff_s0[1] = unaff_s0[0x15];
      unaff_s0[2] = unaff_s0[0x16];
      unaff_s0[3] = unaff_s0[0x18];
      unaff_s0[4] = unaff_s0[0x19];
      unaff_s0[5] = unaff_s0[0x1a];
      FUN_800bce3c(&DAT_1f800040);
      iVar7 = (int)(short)unaff_s5[4];
      if (iVar7 < 0) {
        puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * -6);
        DAT_1f800078 = -(*puVar8 & 0x1fff);
        DAT_1f80007a = -puVar8[1];
        DAT_1f80007c = -puVar8[2];
      }
      else {
        puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * 6);
        DAT_1f800078 = *puVar8 & 0x1fff;
        DAT_1f80007a = puVar8[1];
        DAT_1f80007c = puVar8[2];
      }
      iVar9 = *(int *)(unaff_s8 + 0x1c);
      uVar1 = unaff_s5[1];
      puVar10 = (undefined4 *)(iVar9 + (uint)*unaff_s5 * 0xc);
      setCopControlWord(2,0x1800,*puVar10);
      setCopControlWord(2,0x2000,puVar10[1]);
      setCopReg(2,in_zero,*(undefined4 *)(unaff_s0 + 0x1c));
      setCopReg(2,in_at,*(undefined4 *)(unaff_s0 + 0x1e));
      copFunction(2,0x486012);
      uVar6 = getCopReg(2,0x19);
      *(undefined4 *)(unaff_s0 + 0x20) = uVar6;
      uVar6 = getCopReg(2,0x1a);
      *(undefined4 *)(unaff_s0 + 0x22) = uVar6;
      uVar6 = getCopReg(2,0x1b);
      *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
      *(int *)(unaff_s0 + 0x20) = *(int *)(unaff_s0 + 0x20) - *(int *)(unaff_s0 + 0x24);
      iVar7 = *(int *)(unaff_s0 + 0x22) - *(int *)(unaff_s0 + 0x24);
      *(int *)(unaff_s0 + 0x22) = iVar7;
      if (((*(int *)(unaff_s0 + 0x20) < 0) && (-1 < iVar7)) ||
         (((in_stack_00000060 & 1) != 0 && ((0 < *(int *)(unaff_s0 + 0x20) && (iVar7 < 1)))))) {
        puStack00000010 = *(undefined2 **)(unaff_s0 + 0x24);
        iVar7 = FUN_80078088(unaff_s0 + 0x10,(uint)unaff_s0 | 0x30,(uint)unaff_s0 | 0x28,
                             unaff_s0 + 0x1c);
        if ((iVar7 != 0) &&
           (puStack00000010 = unaff_s0 + 0x1c,
           iVar7 = FUN_8001e3c4(puVar10,iVar9 + (uint)uVar1 * 0xc,
                                *(int *)(unaff_s8 + 0x1c) + (uint)unaff_s5[2] * 0xc,unaff_s0 + 0x10)
           , iVar7 != 0)) {
          psStack00000018 = (short *)&DAT_00000001;
          sVar2 = unaff_s0[0x11];
          sVar3 = unaff_s0[0x12];
          sVar4 = *(short *)(unaff_s6 + 0xe);
          sVar5 = *(short *)(unaff_s6 + 0x10);
          *unaff_s7 = unaff_s0[0x10] + *(short *)(unaff_s6 + 0xc);
          unaff_s7[1] = sVar2 + sVar4;
          unaff_s7[2] = sVar3 + sVar5;
        }
      }
    }
  }
  return psStack00000018;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_SetBSPTreeFlag(struct _CollideInfo *collideInfo /*$a0*/, short flag /*$a1*/)
 // line 5089, offset 0x80024ac8
	/* begin block 1 */
		// Start line: 5090
		// Start offset: 0x80024AC8
		// Variables:
	// 		short *bspTreeFlags; // $v0
	/* end block 1 */
	// End offset: 0x80024AC8
	// End Line: 5090

	/* begin block 2 */
		// Start line: 12649
	/* end block 2 */
	// End Line: 12650

void COLLIDE_SetBSPTreeFlag(_CollideInfo *collideInfo,short flag)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 in_zero;
  undefined4 in_at;
  int in_v1;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  short *in_t4;
  undefined2 *unaff_s0;
  undefined4 *puVar10;
  ushort *unaff_s5;
  int unaff_s6;
  short *unaff_s7;
  int unaff_s8;
  undefined2 *puStack00000010;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  
  if ((in_v1 << (*(byte *)(unaff_s5 + 3) & 0x1f) & in_stack_0000005c) == 0) {
    DAT_1f800068 = *unaff_s7 - *(short *)(unaff_s6 + 0xc);
    DAT_1f80006a = unaff_s7[1] - *(short *)(unaff_s6 + 0xe);
    DAT_1f80006c._0_2_ = unaff_s7[2] - *(short *)(unaff_s6 + 0x10);
    DAT_1f800070._0_2_ = *in_t4 - *(short *)(unaff_s6 + 0xc);
    DAT_1f800070._2_2_ = in_t4[1] - *(short *)(unaff_s6 + 0xe);
    DAT_1f800074._0_2_ = in_t4[2] - *(short *)(unaff_s6 + 0x10);
    *unaff_s0 = unaff_s0[0x14];
    unaff_s0[1] = unaff_s0[0x15];
    unaff_s0[2] = unaff_s0[0x16];
    unaff_s0[3] = unaff_s0[0x18];
    unaff_s0[4] = unaff_s0[0x19];
    unaff_s0[5] = unaff_s0[0x1a];
    FUN_800bce3c(&DAT_1f800040);
    iVar7 = (int)(short)unaff_s5[4];
    if (iVar7 < 0) {
      puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * -6);
      DAT_1f800078 = -(*puVar8 & 0x1fff);
      DAT_1f80007a = -puVar8[1];
      DAT_1f80007c = -puVar8[2];
    }
    else {
      puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * 6);
      DAT_1f800078 = *puVar8 & 0x1fff;
      DAT_1f80007a = puVar8[1];
      DAT_1f80007c = puVar8[2];
    }
    iVar9 = *(int *)(unaff_s8 + 0x1c);
    uVar1 = unaff_s5[1];
    puVar10 = (undefined4 *)(iVar9 + (uint)*unaff_s5 * 0xc);
    setCopControlWord(2,0x1800,*puVar10);
    setCopControlWord(2,0x2000,puVar10[1]);
    setCopReg(2,in_zero,*(undefined4 *)(unaff_s0 + 0x1c));
    setCopReg(2,in_at,*(undefined4 *)(unaff_s0 + 0x1e));
    copFunction(2,0x486012);
    uVar6 = getCopReg(2,0x19);
    *(undefined4 *)(unaff_s0 + 0x20) = uVar6;
    uVar6 = getCopReg(2,0x1a);
    *(undefined4 *)(unaff_s0 + 0x22) = uVar6;
    uVar6 = getCopReg(2,0x1b);
    *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
    *(int *)(unaff_s0 + 0x20) = *(int *)(unaff_s0 + 0x20) - *(int *)(unaff_s0 + 0x24);
    iVar7 = *(int *)(unaff_s0 + 0x22) - *(int *)(unaff_s0 + 0x24);
    *(int *)(unaff_s0 + 0x22) = iVar7;
    if (((*(int *)(unaff_s0 + 0x20) < 0) && (-1 < iVar7)) ||
       (((in_stack_00000060 & 1) != 0 && ((0 < *(int *)(unaff_s0 + 0x20) && (iVar7 < 1)))))) {
      puStack00000010 = *(undefined2 **)(unaff_s0 + 0x24);
      iVar7 = FUN_80078088(unaff_s0 + 0x10,(uint)unaff_s0 | 0x30,(uint)unaff_s0 | 0x28,
                           unaff_s0 + 0x1c);
      if (iVar7 != 0) {
        puStack00000010 = unaff_s0 + 0x1c;
        iVar7 = FUN_8001e3c4(puVar10,iVar9 + (uint)uVar1 * 0xc,
                             *(int *)(unaff_s8 + 0x1c) + (uint)unaff_s5[2] * 0xc,unaff_s0 + 0x10);
        if (iVar7 != 0) {
          sVar2 = unaff_s0[0x11];
          sVar3 = unaff_s0[0x12];
          sVar4 = *(short *)(unaff_s6 + 0xe);
          sVar5 = *(short *)(unaff_s6 + 0x10);
          *unaff_s7 = unaff_s0[0x10] + *(short *)(unaff_s6 + 0xc);
          unaff_s7[1] = sVar2 + sVar4;
          unaff_s7[2] = sVar3 + sVar5;
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ COLLIDE_PointAndTfaceFunc(struct _Terrain *terrain /*$fp*/, struct BSPTree *bsp /*$s6*/, struct _SVector *orgNewPos /*$s7*/, struct _SVector *orgOldPos /*$t4*/, struct _TFace *tface /*stack 16*/, long ignoreAttr /*stack 20*/, long flags /*stack 24*/)
 // line 5121, offset 0x80024afc
	/* begin block 1 */
		// Start line: 5122
		// Start offset: 0x80024AFC
		// Variables:
	// 		struct PandTFScratch *CSpad; // $s0
	// 		int result; // stack offset -48

		/* begin block 1.1 */
			// Start line: 5141
			// Start offset: 0x80024B8C
			// Variables:
		// 		struct _SVector *vertex0; // $s3
		// 		struct _SVector *vertex1; // $s4

			/* begin block 1.1.1 */
				// Start line: 5144
				// Start offset: 0x80024B8C
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a1
			// 		short _x1; // $a2
			// 		short _y1; // $t0
			// 		short _z1; // $t2
			// 		struct _SVector *_v; // $t1
			// 		struct _Position *_v1; // $a3
			/* end block 1.1.1 */
			// End offset: 0x80024B8C
			// End Line: 5144

			/* begin block 1.1.2 */
				// Start line: 5144
				// Start offset: 0x80024B8C
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a1
			// 		short _x1; // $a2
			// 		short _y1; // $t0
			// 		short _z1; // $a3
			// 		struct _SVector *_v; // $t3
			/* end block 1.1.2 */
			// End offset: 0x80024B8C
			// End Line: 5144

			/* begin block 1.1.3 */
				// Start line: 5144
				// Start offset: 0x80024B8C
				// Variables:
			// 		short *nrmlArray; // $a1
			// 		struct _SVector *nrml; // $a0

				/* begin block 1.1.3.1 */
					// Start line: 5144
					// Start offset: 0x80024B8C
					// Variables:
				// 		short *sPtr; // $v1
				/* end block 1.1.3.1 */
				// End offset: 0x80024CCC
				// End Line: 5154
			/* end block 1.1.3 */
			// End offset: 0x80024CCC
			// End Line: 5154

			/* begin block 1.1.4 */
				// Start line: 5185
				// Start offset: 0x80024DE0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _x1; // $a1
			// 		short _y1; // $a3
			// 		short _z1; // $a2
			// 		struct _Position *_v1; // $a2
			/* end block 1.1.4 */
			// End offset: 0x80024DE0
			// End Line: 5185
		/* end block 1.1 */
		// End offset: 0x80024E18
		// End Line: 5189
	/* end block 1 */
	// End offset: 0x80024E1C
	// End Line: 5192

	/* begin block 2 */
		// Start line: 10242
	/* end block 2 */
	// End Line: 10243

int COLLIDE_PointAndTfaceFunc
              (_Terrain *terrain,BSPTree *bsp,_SVector *orgNewPos,_SVector *orgOldPos,_TFace *tface,
              long ignoreAttr,long flags)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  short *in_t1;
  short *in_t3;
  short *in_t4;
  undefined2 *unaff_s0;
  undefined4 *puVar10;
  ushort *unaff_s5;
  int unaff_s6;
  short *unaff_s7;
  int unaff_s8;
  uint in_stack_00000060;
  
  sVar1 = unaff_s7[1];
  sVar2 = unaff_s7[2];
  sVar3 = *(short *)(unaff_s6 + 0xe);
  sVar4 = *(short *)(unaff_s6 + 0x10);
  *in_t1 = *unaff_s7 - *(short *)(unaff_s6 + 0xc);
  in_t1[1] = sVar1 - sVar3;
  in_t1[2] = sVar2 - sVar4;
  sVar1 = in_t4[1];
  sVar2 = in_t4[2];
  sVar3 = *(short *)(unaff_s6 + 0xe);
  sVar4 = *(short *)(unaff_s6 + 0x10);
  *in_t3 = *in_t4 - *(short *)(unaff_s6 + 0xc);
  in_t3[1] = sVar1 - sVar3;
  in_t3[2] = sVar2 - sVar4;
  *unaff_s0 = unaff_s0[0x14];
  unaff_s0[1] = unaff_s0[0x15];
  unaff_s0[2] = unaff_s0[0x16];
  unaff_s0[3] = unaff_s0[0x18];
  unaff_s0[4] = unaff_s0[0x19];
  unaff_s0[5] = unaff_s0[0x1a];
  FUN_800bce3c(&DAT_1f800040);
  iVar7 = (int)(short)unaff_s5[4];
  if (iVar7 < 0) {
    puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * -6);
    DAT_1f800078 = -(*puVar8 & 0x1fff);
    DAT_1f80007a = -puVar8[1];
    DAT_1f80007c = -puVar8[2];
  }
  else {
    puVar8 = (ushort *)(*(int *)(unaff_s8 + 0x24) + iVar7 * 6);
    DAT_1f800078 = *puVar8 & 0x1fff;
    DAT_1f80007a = puVar8[1];
    DAT_1f80007c = puVar8[2];
  }
  iVar9 = *(int *)(unaff_s8 + 0x1c);
  uVar5 = unaff_s5[1];
  puVar10 = (undefined4 *)(iVar9 + (uint)*unaff_s5 * 0xc);
  setCopControlWord(2,0x1800,*puVar10);
  setCopControlWord(2,0x2000,puVar10[1]);
  setCopReg(2,in_zero,*(undefined4 *)(unaff_s0 + 0x1c));
  setCopReg(2,in_at,*(undefined4 *)(unaff_s0 + 0x1e));
  copFunction(2,0x486012);
  uVar6 = getCopReg(2,0x19);
  *(undefined4 *)(unaff_s0 + 0x20) = uVar6;
  uVar6 = getCopReg(2,0x1a);
  *(undefined4 *)(unaff_s0 + 0x22) = uVar6;
  uVar6 = getCopReg(2,0x1b);
  *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
  *(int *)(unaff_s0 + 0x20) = *(int *)(unaff_s0 + 0x20) - *(int *)(unaff_s0 + 0x24);
  iVar7 = *(int *)(unaff_s0 + 0x22) - *(int *)(unaff_s0 + 0x24);
  *(int *)(unaff_s0 + 0x22) = iVar7;
  if (((*(int *)(unaff_s0 + 0x20) < 0) && (-1 < iVar7)) ||
     (((in_stack_00000060 & 1) != 0 && ((0 < *(int *)(unaff_s0 + 0x20) && (iVar7 < 1)))))) {
    iVar7 = FUN_80078088(unaff_s0 + 0x10,(uint)unaff_s0 | 0x30,(uint)unaff_s0 | 0x28,unaff_s0 + 0x1c
                        );
    if (iVar7 != 0) {
      iVar7 = FUN_8001e3c4(puVar10,iVar9 + (uint)uVar5 * 0xc,
                           *(int *)(unaff_s8 + 0x1c) + (uint)unaff_s5[2] * 0xc,unaff_s0 + 0x10);
      if (iVar7 != 0) {
        flags = 1;
        sVar1 = unaff_s0[0x11];
        sVar2 = unaff_s0[0x12];
        sVar3 = *(short *)(unaff_s6 + 0xe);
        sVar4 = *(short *)(unaff_s6 + 0x10);
        *unaff_s7 = unaff_s0[0x10] + *(short *)(unaff_s6 + 0xc);
        unaff_s7[1] = sVar1 + sVar3;
        unaff_s7[2] = sVar2 + sVar4;
      }
    }
  }
  return flags;
}





