#include "THISDUST.H"
#include "VM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VM_Tick(long time /*$a0*/)
 // line 105, offset 0x8004f638
	/* begin block 1 */
		// Start line: 210
	/* end block 1 */
	// End Line: 211

	/* begin block 2 */
		// Start line: 211
	/* end block 2 */
	// End Line: 212

void VM_Tick(long time)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int in_v1;
  char cVar8;
  int *piVar9;
  short *psVar10;
  short *psVar11;
  char *pcVar12;
  char *pcVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int **unaff_s0;
  int **ppiVar17;
  int iVar18;
  ushort *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    ppiVar17 = unaff_s0;
    if ((*unaff_s3 & 0x100) == 0) goto LAB_8004f998;
    do {
      piVar9 = *unaff_s0;
      if ((int)(short)loadStatus.decompressLen == in_v1) {
        if (piVar9 != (int *)unaff_s0[-1][(int)*(short *)(unaff_s0 + -7)]) {
                    /* WARNING: Subroutine does not return */
          FUN_8004fe84();
        }
        if (unaff_s5 == 0) {
          if (loadStatus.decompressLen._2_2_ == 0) goto LAB_8004f6c4;
          *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)(unaff_s0 + -8);
        }
        else {
          if (loadStatus.decompressLen._2_2_ == 0) {
            *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)(unaff_s0 + -8);
          }
          else {
LAB_8004f6c4:
            *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)((int)unaff_s0 + -0x1e);
          }
        }
        *unaff_s0 = (int *)unaff_s0[-1][(int)*(short *)(unaff_s0 + -7)];
        ppiVar17 = unaff_s0;
      }
      else {
        iVar18 = *piVar9;
        if (piVar9 == (int *)unaff_s0[-1][(int)*(short *)(unaff_s0 + -7)]) {
          if ((*unaff_s3 & 8) == 0) {
            iVar18 = iVar18 * 3;
          }
          else {
            iVar18 = iVar18 * 6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_8004fbb0(iVar18 + 4,0x28);
        }
        iVar16 = 0;
        if ((*unaff_s3 & 8) == 0) {
          pcVar12 = (char *)(unaff_s0[-1][(int)*(short *)(unaff_s0 + -8)] + 4);
          pcVar13 = (char *)(unaff_s0[-1][(int)*(short *)((int)unaff_s0 + -0x1e)] + 4);
          piVar9 = *unaff_s0 + 1;
          ppiVar17 = unaff_s0;
          if (0 < iVar18) {
            iVar15 = (int)(short)gameTrackerX.GlobalObjects;
            do {
              if ((*unaff_s3 & 0x100) == 0) {
                cVar8 = pcVar13[1];
                sVar14 = (short)*pcVar13 - (short)*pcVar12;
                cVar5 = pcVar12[1];
                cVar6 = pcVar13[2];
              }
              else {
                cVar8 = pcVar13[1];
                sVar14 = (short)pcVar13[2] - (short)*pcVar12;
                cVar5 = pcVar12[1];
                cVar6 = *pcVar13;
              }
              cVar7 = pcVar12[2];
              pcVar13 = pcVar13 + 3;
              iVar16 = iVar16 + 1;
              *(char *)piVar9 = *pcVar12 + (char)((int)sVar14 * iVar15 >> 0xc);
              *(char *)((int)piVar9 + 1) =
                   pcVar12[1] +
                   (char)((((int)cVar8 - (int)cVar5) * 0x10000 >> 0x10) * iVar15 >> 0xc);
              pcVar4 = pcVar12 + 2;
              pcVar12 = pcVar12 + 3;
              *(char *)((int)piVar9 + 2) =
                   *pcVar4 + (char)((((int)cVar6 - (int)cVar7) * 0x10000 >> 0x10) * iVar15 >> 0xc);
              piVar9 = (int *)((int)piVar9 + 3);
              ppiVar17 = unaff_s0;
            } while (iVar16 < iVar18);
          }
        }
        else {
          psVar11 = (short *)(unaff_s0[-1][(int)*(short *)(unaff_s0 + -8)] + 4);
          psVar10 = (short *)(unaff_s0[-1][(int)*(short *)((int)unaff_s0 + -0x1e)] + 4);
          piVar9 = *unaff_s0 + 1;
          ppiVar17 = unaff_s0;
          if (0 < iVar18) {
            iVar15 = (int)(short)gameTrackerX.GlobalObjects;
            do {
              *(short *)piVar9 = *psVar11 + (short)(((int)*psVar10 - (int)*psVar11) * iVar15 >> 0xc)
              ;
              *(short *)((int)piVar9 + 2) =
                   psVar11[1] + (short)(((int)psVar10[1] - (int)psVar11[1]) * iVar15 >> 0xc);
              psVar1 = psVar10 + 2;
              psVar2 = psVar11 + 2;
              iVar16 = iVar16 + 1;
              psVar10 = psVar10 + 3;
              psVar3 = psVar11 + 2;
              psVar11 = psVar11 + 3;
              *(short *)(piVar9 + 1) =
                   *psVar3 + (short)(((int)*psVar1 - (int)*psVar2) * iVar15 >> 0xc);
              piVar9 = (int *)((int)piVar9 + 6);
              ppiVar17 = unaff_s0;
            } while (iVar16 < iVar18);
          }
        }
      }
LAB_8004f998:
      unaff_s4 = unaff_s4 + -1;
      unaff_s0 = ppiVar17 + 0xf;
      unaff_s3 = unaff_s3 + 0x1e;
      if (unaff_s4 == 0) {
        return;
      }
      in_v1 = 1000;
    } while (*(short *)(ppiVar17 + 7) != *(short *)((int)ppiVar17 + 0x1e));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ VM_UpdateMorph(struct Level *level /*$a0*/, int initFlg /*$s5*/)
 // line 295, offset 0x8004f658
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x8004F658
		// Variables:
	// 		struct _VMObject *vmobject; // $s3
	// 		int i; // $s4

		/* begin block 1.1 */
			// Start line: 305
			// Start offset: 0x8004F6B4
			// Variables:
		// 		struct _VMOffsetTable *curTable; // $a0

			/* begin block 1.1.1 */
				// Start line: 308
				// Start offset: 0x8004F6C4
			/* end block 1.1.1 */
			// End offset: 0x8004F738
			// End Line: 337

			/* begin block 1.1.2 */
				// Start line: 341
				// Start offset: 0x8004F754
				// Variables:
			// 		short ratio; // $s2
			// 		int j; // $t1
			// 		long num; // $s1

				/* begin block 1.1.2.1 */
					// Start line: 353
					// Start offset: 0x8004F778
					// Variables:
				// 		long len; // $a0
				/* end block 1.1.2.1 */
				// End offset: 0x8004F7B0
				// End Line: 360

				/* begin block 1.1.2.2 */
					// Start line: 362
					// Start offset: 0x8004F7C4
					// Variables:
				// 		struct _VMOffset *material; // $a1
				// 		struct _VMOffset *spectral; // $a0
				// 		struct _VMOffset *offset; // $v1
				/* end block 1.1.2.2 */
				// End offset: 0x8004F898
				// End Line: 374

				/* begin block 1.1.2.3 */
					// Start line: 374
					// Start offset: 0x8004F8A0
					// Variables:
				// 		short dr; // $a3
				// 		short dg; // $a0
				// 		short db; // $v1
				// 		struct _VMColorOffset *material; // $a1
				// 		struct _VMColorOffset *spectral; // $a0
				// 		struct _VMColorOffset *offset; // $v1
				/* end block 1.1.2.3 */
				// End offset: 0x8004F9FC
				// End Line: 403
			/* end block 1.1.2 */
			// End offset: 0x8004F9FC
			// End Line: 405
		/* end block 1.1 */
		// End offset: 0x8004F9FC
		// End Line: 406
	/* end block 1 */
	// End offset: 0x8004FA0C
	// End Line: 408

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

void VM_UpdateMorph(Level *level,int initFlg)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  long *plVar10;
  LightList **ppLVar11;
  short sVar12;
  int iVar13;
  Level **unaff_s0;
  Level **ppLVar14;
  _Terrain *p_Var15;
  ushort *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    if (level != (Level *)(&unaff_s0[-1]->terrain)[(int)*(short *)(unaff_s0 + -7)]) {
                    /* WARNING: Subroutine does not return */
      FUN_8004fe84(level,initFlg);
    }
    if (unaff_s5 == 0) {
      if (loadStatus.decompressLen._2_2_ == 0) goto LAB_8004f6c4;
      *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)(unaff_s0 + -8);
    }
    else {
      if (loadStatus.decompressLen._2_2_ == 0) {
        *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)(unaff_s0 + -8);
      }
      else {
LAB_8004f6c4:
        *(undefined2 *)(unaff_s0 + -7) = *(undefined2 *)((int)unaff_s0 + -0x1e);
      }
    }
    *unaff_s0 = (Level *)(&unaff_s0[-1]->terrain)[(int)*(short *)(unaff_s0 + -7)];
    while( true ) {
      do {
        ppLVar14 = unaff_s0;
        unaff_s4 = unaff_s4 + -1;
        unaff_s0 = ppLVar14 + 0xf;
        unaff_s3 = unaff_s3 + 0x1e;
        if (unaff_s4 == 0) {
          return;
        }
      } while ((*(short *)(ppLVar14 + 7) == *(short *)((int)ppLVar14 + 0x1e)) &&
              ((*unaff_s3 & 0x100) == 0));
      level = *unaff_s0;
      if ((short)loadStatus.decompressLen == 1000) break;
      p_Var15 = level->terrain;
      if (level == (Level *)(&ppLVar14[0xe]->terrain)[(int)*(short *)(ppLVar14 + 8)]) {
        if ((*unaff_s3 & 8) == 0) {
          iVar8 = (int)p_Var15 * 3;
        }
        else {
          iVar8 = (int)p_Var15 * 6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_8004fbb0(iVar8 + 4,0x28);
      }
      iVar8 = 0;
      if ((*unaff_s3 & 8) == 0) {
        initFlg = (int)&(&ppLVar14[0xe]->terrain)[(int)*(short *)(ppLVar14 + 7)]->lpad2;
        plVar10 = &(&ppLVar14[0xe]->terrain)[(int)*(short *)((int)ppLVar14 + 0x1e)]->lpad2;
        ppLVar11 = &(*unaff_s0)->lightList;
        if (0 < (int)p_Var15) {
          iVar13 = (int)(short)gameTrackerX.GlobalObjects;
          do {
            if ((*unaff_s3 & 0x100) == 0) {
              cVar9 = *(char *)((int)plVar10 + 1);
              sVar12 = (short)*(char *)plVar10 - (short)*(char *)initFlg;
              cVar5 = *(char *)(initFlg + 1);
              cVar6 = *(char *)((int)plVar10 + 2);
            }
            else {
              cVar9 = *(char *)((int)plVar10 + 1);
              sVar12 = (short)*(char *)((int)plVar10 + 2) - (short)*(char *)initFlg;
              cVar5 = *(char *)(initFlg + 1);
              cVar6 = *(char *)plVar10;
            }
            cVar7 = *(char *)(initFlg + 2);
            plVar10 = (long *)((int)plVar10 + 3);
            iVar8 = iVar8 + 1;
            *(char *)ppLVar11 = *(char *)initFlg + (char)((int)sVar12 * iVar13 >> 0xc);
            *(char *)((int)ppLVar11 + 1) =
                 *(char *)(initFlg + 1) +
                 (char)((((int)cVar9 - (int)cVar5) * 0x10000 >> 0x10) * iVar13 >> 0xc);
            pcVar4 = (char *)(initFlg + 2);
            initFlg = initFlg + 3;
            *(char *)((int)ppLVar11 + 2) =
                 *pcVar4 + (char)((((int)cVar6 - (int)cVar7) * 0x10000 >> 0x10) * iVar13 >> 0xc);
            ppLVar11 = (LightList **)((int)ppLVar11 + 3);
          } while (iVar8 < (int)p_Var15);
        }
      }
      else {
        initFlg = (int)&(&ppLVar14[0xe]->terrain)[(int)*(short *)(ppLVar14 + 7)]->lpad2;
        plVar10 = &(&ppLVar14[0xe]->terrain)[(int)*(short *)((int)ppLVar14 + 0x1e)]->lpad2;
        ppLVar11 = &(*unaff_s0)->lightList;
        if (0 < (int)p_Var15) {
          iVar13 = (int)(short)gameTrackerX.GlobalObjects;
          do {
            *(short *)ppLVar11 =
                 *(short *)initFlg +
                 (short)(((int)*(short *)plVar10 - (int)*(short *)initFlg) * iVar13 >> 0xc);
            *(short *)((int)ppLVar11 + 2) =
                 *(short *)(initFlg + 2) +
                 (short)(((int)*(short *)((int)plVar10 + 2) - (int)*(short *)(initFlg + 2)) * iVar13
                        >> 0xc);
            plVar1 = plVar10 + 1;
            plVar2 = (long *)initFlg + 1;
            iVar8 = iVar8 + 1;
            plVar10 = (long *)((int)plVar10 + 6);
            plVar3 = (long *)initFlg + 1;
            initFlg = initFlg + 6;
            *(short *)(ppLVar11 + 1) =
                 *(short *)plVar3 +
                 (short)(((int)*(short *)plVar1 - (int)*(short *)plVar2) * iVar13 >> 0xc);
            ppLVar11 = (LightList **)((int)ppLVar11 + 6);
          } while (iVar8 < (int)p_Var15);
        }
      }
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ VM_VMObjectSetTable(struct Level *level /*$a0*/, struct _VMObject *vmobject /*$s0*/, int table /*$s1*/)
 // line 521, offset 0x8004fa30
	/* begin block 1 */
		// Start line: 522
		// Start offset: 0x8004FA30
		// Variables:
	// 		struct _VMOffsetTable *curTable; // $a0
	/* end block 1 */
	// End offset: 0x8004FA70
	// End Line: 530

	/* begin block 2 */
		// Start line: 1056
	/* end block 2 */
	// End Line: 1057

void VM_VMObjectSetTable(Level *level,_VMObject *vmobject,int table)

{
  return;
}





