#include "THISDUST.H"
#include "LIST.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LIST_InsertFunc(struct NodeType *list /*$a0*/, struct NodeType *node /*$a1*/)
 // line 46, offset 0x8004f568
	/* begin block 1 */
		// Start line: 92
	/* end block 1 */
	// End Line: 93

	/* begin block 2 */
		// Start line: 93
	/* end block 2 */
	// End Line: 94

void LIST_InsertFunc(NodeType *list,NodeType *node)

{
  undefined4 *in_v0;
  
  if (in_v0 == (undefined4 *)0x0) {
    if (list->prev != (NodeType *)0x0) {
      list->prev->next = (NodeType *)0x0;
    }
  }
  else {
    *in_v0 = 0;
  }
  list->next = (NodeType *)0x0;
  list->prev = (NodeType *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LIST_DeleteFunc(struct NodeType *node /*$a0*/)
 // line 57, offset 0x8004f594
	/* begin block 1 */
		// Start line: 114
	/* end block 1 */
	// End Line: 115

	/* begin block 2 */
		// Start line: 115
	/* end block 2 */
	// End Line: 116

void LIST_DeleteFunc(NodeType *node)

{
  node->prev = (NodeType *)0x0;
  if (node->next != (NodeType *)0x0) {
    FUN_8004f52c(node->next);
  }
  return;
}



// decompiled code
// original method signature: 
// struct NodeType * /*$ra*/ LIST_GetFunc(struct NodeType *list /*$a0*/)
 // line 76, offset 0x8004f600
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x8004F600
	/* end block 1 */
	// End offset: 0x8004F628
	// End Line: 86

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

NodeType * LIST_GetFunc(NodeType *list)

{
  NodeType **ppNVar1;
  NodeType **ppNVar2;
  NodeType **ppNVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  NodeType *in_v0;
  int iVar8;
  char cVar9;
  NodeType *pNVar10;
  NodeType **ppNVar11;
  int in_a1;
  NodeType **ppNVar12;
  NodeType **ppNVar13;
  short sVar14;
  int iVar15;
  NodeType **ppNVar16;
  NodeType *pNVar17;
  NodeType *pNVar18;
  NodeType *pNVar19;
  
  pNVar19 = list[1].prev;
  pNVar18 = list[1].next;
  if (pNVar19 != (NodeType *)0x0) {
    ppNVar16 = &pNVar18[4].next;
    do {
      if ((*(short *)(ppNVar16 + -8) != *(short *)((int)ppNVar16 + -0x1e)) ||
         (in_v0 = (NodeType *)((uint)*(ushort *)&pNVar18->prev & 0x100),
         (*(ushort *)&pNVar18->prev & 0x100) != 0)) {
        pNVar10 = *ppNVar16;
        if ((short)loadStatus.decompressLen == 1000) {
          if (pNVar10 != (&ppNVar16[-1]->prev)[(int)*(short *)(ppNVar16 + -7)]) {
                    /* WARNING: Subroutine does not return */
            FUN_8004fe84();
          }
          if (in_a1 == 0) {
            if (loadStatus.decompressLen._2_2_ == 0) goto LAB_8004f6c4;
            *(undefined2 *)(ppNVar16 + -7) = *(undefined2 *)(ppNVar16 + -8);
          }
          else {
            if (loadStatus.decompressLen._2_2_ == 0) {
              *(undefined2 *)(ppNVar16 + -7) = *(undefined2 *)(ppNVar16 + -8);
            }
            else {
LAB_8004f6c4:
              *(undefined2 *)(ppNVar16 + -7) = *(undefined2 *)((int)ppNVar16 + -0x1e);
            }
          }
          in_v0 = (&ppNVar16[-1]->prev)[(int)*(short *)(ppNVar16 + -7)];
          *ppNVar16 = in_v0;
        }
        else {
          pNVar17 = pNVar10->prev;
          if (pNVar10 == (&ppNVar16[-1]->prev)[(int)*(short *)(ppNVar16 + -7)]) {
            if ((*(ushort *)&pNVar18->prev & 8) == 0) {
              iVar8 = (int)pNVar17 * 3;
            }
            else {
              iVar8 = (int)pNVar17 * 6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_8004fbb0(iVar8 + 4,0x28);
          }
          iVar8 = 0;
          if ((*(ushort *)&pNVar18->prev & 8) == 0) {
            ppNVar12 = &(&ppNVar16[-1]->prev)[(int)*(short *)(ppNVar16 + -8)]->next;
            in_v0 = (&ppNVar16[-1]->prev)[(int)*(short *)((int)ppNVar16 + -0x1e)];
            ppNVar11 = &in_v0->next;
            ppNVar13 = &(*ppNVar16)->next;
            if (0 < (int)pNVar17) {
              iVar15 = (int)(short)gameTrackerX.GlobalObjects;
              do {
                if ((*(ushort *)&pNVar18->prev & 0x100) == 0) {
                  cVar9 = *(char *)((int)ppNVar11 + 1);
                  sVar14 = (short)*(char *)ppNVar11 - (short)*(char *)ppNVar12;
                  cVar5 = *(char *)((int)ppNVar12 + 1);
                  cVar6 = *(char *)((int)ppNVar11 + 2);
                }
                else {
                  cVar9 = *(char *)((int)ppNVar11 + 1);
                  sVar14 = (short)*(char *)((int)ppNVar11 + 2) - (short)*(char *)ppNVar12;
                  cVar5 = *(char *)((int)ppNVar12 + 1);
                  cVar6 = *(char *)ppNVar11;
                }
                cVar7 = *(char *)((int)ppNVar12 + 2);
                ppNVar11 = (NodeType **)((int)ppNVar11 + 3);
                iVar8 = iVar8 + 1;
                *(char *)ppNVar13 = *(char *)ppNVar12 + (char)((int)sVar14 * iVar15 >> 0xc);
                *(char *)((int)ppNVar13 + 1) =
                     *(char *)((int)ppNVar12 + 1) +
                     (char)((((int)cVar9 - (int)cVar5) * 0x10000 >> 0x10) * iVar15 >> 0xc);
                pcVar4 = (char *)((int)ppNVar12 + 2);
                ppNVar12 = (NodeType **)((int)ppNVar12 + 3);
                *(char *)((int)ppNVar13 + 2) =
                     *pcVar4 + (char)((((int)cVar6 - (int)cVar7) * 0x10000 >> 0x10) * iVar15 >> 0xc)
                ;
                in_v0 = (NodeType *)(uint)(iVar8 < (int)pNVar17);
                ppNVar13 = (NodeType **)((int)ppNVar13 + 3);
              } while (iVar8 < (int)pNVar17);
            }
          }
          else {
            ppNVar12 = &(&ppNVar16[-1]->prev)[(int)*(short *)(ppNVar16 + -8)]->next;
            in_v0 = (&ppNVar16[-1]->prev)[(int)*(short *)((int)ppNVar16 + -0x1e)];
            ppNVar11 = &in_v0->next;
            ppNVar13 = &(*ppNVar16)->next;
            if (0 < (int)pNVar17) {
              iVar15 = (int)(short)gameTrackerX.GlobalObjects;
              do {
                *(short *)ppNVar13 =
                     *(short *)ppNVar12 +
                     (short)(((int)*(short *)ppNVar11 - (int)*(short *)ppNVar12) * iVar15 >> 0xc);
                *(short *)((int)ppNVar13 + 2) =
                     *(short *)((int)ppNVar12 + 2) +
                     (short)(((int)*(short *)((int)ppNVar11 + 2) -
                             (int)*(short *)((int)ppNVar12 + 2)) * iVar15 >> 0xc);
                ppNVar1 = ppNVar11 + 1;
                ppNVar2 = ppNVar12 + 1;
                iVar8 = iVar8 + 1;
                ppNVar11 = (NodeType **)((int)ppNVar11 + 6);
                ppNVar3 = ppNVar12 + 1;
                ppNVar12 = (NodeType **)((int)ppNVar12 + 6);
                *(short *)(ppNVar13 + 1) =
                     *(short *)ppNVar3 +
                     (short)(((int)*(short *)ppNVar1 - (int)*(short *)ppNVar2) * iVar15 >> 0xc);
                in_v0 = (NodeType *)(uint)(iVar8 < (int)pNVar17);
                ppNVar13 = (NodeType **)((int)ppNVar13 + 6);
              } while (iVar8 < (int)pNVar17);
            }
          }
        }
      }
      pNVar19 = (NodeType *)((int)&pNVar19[-1].next + 3);
      ppNVar16 = ppNVar16 + 0xf;
      pNVar18 = (NodeType *)&pNVar18[7].next;
    } while (pNVar19 != (NodeType *)0x0);
  }
  return in_v0;
}





