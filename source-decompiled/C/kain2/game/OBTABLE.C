#include "THISDUST.H"
#include "OBTABLE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_InstanceInit(struct _Instance *instance /*$s0*/)
 // line 88, offset 0x8003d9ac
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x8003D9AC
		// Variables:
	// 		long id; // $a0
	/* end block 1 */
	// End offset: 0x8003DA80
	// End Line: 126

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

void OBTABLE_InstanceInit(_Instance *instance)

{
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) | 0x200000;
  if ((*(uint *)(unaff_s0 + 0x14) & 0x100000) == 0) {
    FUN_8003c6c8();
  }
  if ((*(int *)(unaff_s0 + 0x20) != 0) &&
     ((*(uint *)(*(int *)(unaff_s0 + 0x20) + 0x2c) & 0x20) != 0)) {
    *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) & 0xfffdfffb;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_GetInstanceCollideFunc(struct _Instance *instance /*$a0*/)
 // line 144, offset 0x8003da90
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8003DA90
		// Variables:
	// 		long id; // $a1
	/* end block 1 */
	// End offset: 0x8003DAD0
	// End Line: 159

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

	/* begin block 3 */
		// Start line: 290
	/* end block 3 */
	// End Line: 291

void OBTABLE_GetInstanceCollideFunc(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int in_a1;
  
  instance->additionalCollideFunc = *(_func_3 **)((in_v1 + in_a1) * 4 + in_v0 + 0x18);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_GetInstanceAdditionalCollideFunc(struct _Instance *instance /*$a0*/)
 // line 176, offset 0x8003dad8
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x8003DAD8
		// Variables:
	// 		long id; // $a1
	/* end block 1 */
	// End offset: 0x8003DB10
	// End Line: 190

	/* begin block 2 */
		// Start line: 353
	/* end block 2 */
	// End Line: 354

	/* begin block 3 */
		// Start line: 354
	/* end block 3 */
	// End Line: 355

void OBTABLE_GetInstanceAdditionalCollideFunc(_Instance *instance)

{
  int in_v0;
  int in_v1;
  
  instance->processFunc = *(_func_1 **)(in_v1 * 4 + in_v0 + 8);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_GetInstanceProcessFunc(struct _Instance *instance /*$a0*/)
 // line 206, offset 0x8003db18
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x8003DB18
		// Variables:
	// 		long id; // $a1
	/* end block 1 */
	// End offset: 0x8003DB58
	// End Line: 220

	/* begin block 2 */
		// Start line: 413
	/* end block 2 */
	// End Line: 414

	/* begin block 3 */
		// Start line: 414
	/* end block 3 */
	// End Line: 415

void OBTABLE_GetInstanceProcessFunc(_Instance *instance)

{
  int in_v0;
  int in_a1;
  
  instance->queryFunc = *(_func_4 **)(in_a1 * 0x24 + in_v0 + 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_GetInstanceQueryFunc(struct _Instance *instance /*$a0*/)
 // line 236, offset 0x8003db60
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x8003DB60
		// Variables:
	// 		long id; // $a1
	/* end block 1 */
	// End offset: 0x8003DBA0
	// End Line: 250

	/* begin block 2 */
		// Start line: 473
	/* end block 2 */
	// End Line: 474

	/* begin block 3 */
		// Start line: 474
	/* end block 3 */
	// End Line: 475

void OBTABLE_GetInstanceQueryFunc(_Instance *instance)

{
  int in_v0;
  int in_a1;
  
  instance->messageFunc = *(_func_5 **)(in_a1 * 0x24 + in_v0 + 0x14);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_GetInstanceMessageFunc(struct _Instance *instance /*$a0*/)
 // line 266, offset 0x8003dba8
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x8003DBA8
		// Variables:
	// 		long id; // $a1
	/* end block 1 */
	// End offset: 0x8003DBE8
	// End Line: 280

	/* begin block 2 */
		// Start line: 533
	/* end block 2 */
	// End Line: 534

	/* begin block 3 */
		// Start line: 534
	/* end block 3 */
	// End Line: 535

void OBTABLE_GetInstanceMessageFunc(_Instance *instance)

{
  int iVar1;
  _Normal *p_Var2;
  int iVar3;
  int unaff_s2;
  
  if ((*(uint *)(unaff_s2 + 0x2c) & 0x40000) == 0) {
    if ((*(uint *)(unaff_s2 + 0x2c) & 0x80000) == 0) {
      iVar3 = 0;
      if (_Normal_800c8aa0._0_4_ != 0) {
        p_Var2 = &_Normal_800c8aa0;
        do {
          iVar1 = FUN_800be300(*(undefined4 *)p_Var2,*(undefined4 *)(unaff_s2 + 0x20));
          if (iVar1 == 0) break;
          p_Var2 = (_Normal *)&p_Var2[4].z;
          iVar3 = iVar3 + 1;
        } while (*(int *)p_Var2 != 0);
LAB_8003dca8:
        if (*(int *)((int)&_Normal_800c8aa0 + iVar3 * 0x24) != 0) {
          *(undefined2 *)(unaff_s2 + 4) = (short)iVar3;
          goto LAB_8003dce4;
        }
      }
    }
    else {
      iVar3 = 0;
      if (_Normal_800c8aa0._0_4_ != 0) {
        p_Var2 = &_Normal_800c8aa0;
        do {
          iVar1 = FUN_800be300(*(undefined4 *)p_Var2,s_monster__800cec6c);
          if (iVar1 == 0) goto LAB_8003dca8;
          p_Var2 = (_Normal *)&p_Var2[4].z;
          iVar3 = iVar3 + 1;
        } while (*(int *)p_Var2 != 0);
      }
    }
  }
  else {
    iVar3 = 0;
    if (_Normal_800c8aa0._0_4_ != 0) {
      p_Var2 = &_Normal_800c8aa0;
      do {
        iVar1 = FUN_800be300(*(undefined4 *)p_Var2,s_physical_800cec60);
        if (iVar1 == 0) goto LAB_8003dca8;
        p_Var2 = (_Normal *)&p_Var2[4].z;
        iVar3 = iVar3 + 1;
      } while (*(int *)p_Var2 != 0);
    }
  }
  *(undefined2 *)(unaff_s2 + 4) = 0xffff;
LAB_8003dce4:
  p_Var2 = &_Normal_800c89c0;
  if (_Normal_800c89c0._0_4_ != 0) {
    do {
      if ((**(int **)p_Var2 == **(int **)(unaff_s2 + 0x24)) &&
         ((*(int **)p_Var2)[1] == (*(int **)(unaff_s2 + 0x24))[1])) {
        *(int *)&p_Var2->z = unaff_s2;
        return;
      }
      p_Var2 = p_Var2 + 1;
    } while (*(int *)p_Var2 != 0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_InitObjectWithID(struct Object *object /*$s2*/)
 // line 283, offset 0x8003dbf0
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8003DBF0
		// Variables:
	// 		long id; // $s1

		/* begin block 1.1 */
			// Start line: 289
			// Start offset: 0x8003DC10
			// Variables:
		// 		struct ObjectAccess *oa; // $a0
		/* end block 1.1 */
		// End offset: 0x8003DDAC
		// End Line: 349
	/* end block 1 */
	// End offset: 0x8003DDAC
	// End Line: 350

	/* begin block 2 */
		// Start line: 567
	/* end block 2 */
	// End Line: 568

void OBTABLE_InitObjectWithID(Object *object)

{
  int iVar1;
  int in_v0;
  _Normal *p_Var2;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    unaff_s1 = unaff_s1 + 1;
    if (in_v0 == 0) {
LAB_8003dce0:
      *(undefined2 *)(unaff_s2 + 4) = 0xffff;
LAB_8003dce4:
      p_Var2 = &_Normal_800c89c0;
      if (_Normal_800c89c0._0_4_ != 0) {
        do {
          if ((**(int **)p_Var2 == **(int **)(unaff_s2 + 0x24)) &&
             ((*(int **)p_Var2)[1] == (*(int **)(unaff_s2 + 0x24))[1])) {
            *(int *)&p_Var2->z = unaff_s2;
            return;
          }
          p_Var2 = p_Var2 + 1;
        } while (*(int *)p_Var2 != 0);
      }
      return;
    }
    iVar1 = FUN_800be300(*unaff_s0,unaff_s3 + -0x13a0);
    if (iVar1 == 0) {
      if (*(int *)((int)&_Normal_800c8aa0 + unaff_s1 * 0x24) != 0) {
        *(undefined2 *)(unaff_s2 + 4) = (short)unaff_s1;
        goto LAB_8003dce4;
      }
      goto LAB_8003dce0;
    }
    unaff_s0 = unaff_s0 + 9;
    in_v0 = *unaff_s0;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_ClearObjectReferences()
 // line 372, offset 0x8003ddc8
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x8003DDC8
		// Variables:
	// 		struct ObjectAccess *oa; // $a0
	/* end block 1 */
	// End offset: 0x8003DDF4
	// End Line: 378

	/* begin block 2 */
		// Start line: 762
	/* end block 2 */
	// End Line: 763

	/* begin block 3 */
		// Start line: 763
	/* end block 3 */
	// End Line: 764

	/* begin block 4 */
		// Start line: 765
	/* end block 4 */
	// End Line: 766

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OBTABLE_ClearObjectReferences(void)

{
  int in_v0;
  int *in_v1;
  int in_a0;
  int *in_a1;
  
  while( true ) {
    in_v1 = in_v1 + 2;
    if (in_v0 == 0) {
      return;
    }
    in_a1 = in_a1 + 2;
    if (*in_v1 == in_a0) break;
    in_v0 = *in_a1;
  }
  *in_v1 = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_RemoveObjectEntry(struct Object *object /*$a0*/)
 // line 380, offset 0x8003ddfc
	/* begin block 1 */
		// Start line: 382
		// Start offset: 0x8003DDFC
		// Variables:
	// 		struct ObjectAccess *oa; // $a1
	/* end block 1 */
	// End offset: 0x8003DE3C
	// End Line: 392

	/* begin block 2 */
		// Start line: 779
	/* end block 2 */
	// End Line: 780

	/* begin block 3 */
		// Start line: 780
	/* end block 3 */
	// End Line: 781

	/* begin block 4 */
		// Start line: 782
	/* end block 4 */
	// End Line: 783

void OBTABLE_RemoveObjectEntry(Object *object)

{
  int in_v0;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_s2;
  int *unaff_s3;
  
  piVar4 = (int *)(in_v0 + 0x10);
  do {
    if (*(short *)(piVar4 + 1) != 0) {
      iVar3 = *piVar4;
      iVar1 = FUN_800500cc(iVar3);
      if (((iVar1 != 0) && (piVar2 = *(int **)(iVar3 + 0x24), *unaff_s3 == *piVar2)) &&
         (unaff_s3[1] == piVar2[1])) {
        return;
      }
    }
    unaff_s2 = unaff_s2 + -1;
    piVar4 = piVar4 + 9;
    if (unaff_s2 == 0) {
      return;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// struct Object * /*$ra*/ OBTABLE_FindObject(char *objectName /*$s3*/)
 // line 394, offset 0x8003de44
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8003DE44
		// Variables:
	// 		struct Object *object; // $s0
	// 		struct _ObjectTracker *otr; // $v0
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8003DED4
	// End Line: 412

	/* begin block 2 */
		// Start line: 812
	/* end block 2 */
	// End Line: 813

	/* begin block 3 */
		// Start line: 817
	/* end block 3 */
	// End Line: 818

Object * OBTABLE_FindObject(char *objectName)

{
  Object **ppOVar1;
  int iVar2;
  int in_v1;
  Object *unaff_s0;
  Object **unaff_s1;
  Object **ppOVar3;
  int unaff_s2;
  int *unaff_s3;
  
  do {
    ppOVar3 = unaff_s1;
    if (in_v1 == ((int *)objectName)[1]) {
      return unaff_s0;
    }
    do {
      do {
        unaff_s2 = unaff_s2 + -1;
        unaff_s1 = ppOVar3 + 9;
        if (unaff_s2 == 0) {
          return (Object *)0x0;
        }
        ppOVar1 = ppOVar3 + 10;
        ppOVar3 = unaff_s1;
      } while (*(short *)ppOVar1 == 0);
      unaff_s0 = *unaff_s1;
      iVar2 = FUN_800500cc(unaff_s0);
      ppOVar3 = unaff_s1;
    } while ((iVar2 == 0) ||
            (objectName = unaff_s0->name, ppOVar3 = unaff_s1, *unaff_s3 != *(int *)objectName));
    in_v1 = unaff_s3[1];
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_ChangeObjectAccessPointers(struct Object *oldObject /*$a0*/, struct Object *newObject /*$a1*/)
 // line 414, offset 0x8003def0
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x8003DEF0
		// Variables:
	// 		struct ObjectAccess *oa; // $a2
	/* end block 1 */
	// End offset: 0x8003DF30
	// End Line: 426

	/* begin block 2 */
		// Start line: 869
	/* end block 2 */
	// End Line: 870

	/* begin block 3 */
		// Start line: 870
	/* end block 3 */
	// End Line: 871

	/* begin block 4 */
		// Start line: 872
	/* end block 4 */
	// End Line: 873

void OBTABLE_ChangeObjectAccessPointers(Object *oldObject,Object *newObject)

{
  int in_v0;
  code *pcVar1;
  int in_v1;
  int in_a2;
  
  pcVar1 = *(code **)((in_v0 + in_a2) * 4 + in_v1 + 0x1c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_RelocateObjectTune(struct Object *object /*$a0*/, long offset /*$a1*/)
 // line 428, offset 0x8003df38
	/* begin block 1 */
		// Start line: 429
		// Start offset: 0x8003DF38
		// Variables:
	// 		long id; // $a2

		/* begin block 1.1 */
			// Start line: 442
			// Start offset: 0x8003DF84
		/* end block 1.1 */
		// End offset: 0x8003DF8C
		// End Line: 444
	/* end block 1 */
	// End offset: 0x8003DF8C
	// End Line: 445

	/* begin block 2 */
		// Start line: 902
	/* end block 2 */
	// End Line: 903

void OBTABLE_RelocateObjectTune(Object *object,long offset)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)((int)object->data + 4);
  if ((-1 < iVar2) &&
     (pcVar1 = *(code **)((int)_Normal_ARRAY_800c8ac0 + iVar2 * 0x24), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_RelocateInstanceObject(struct _Instance *instance /*$a0*/, long offset /*$a1*/)
 // line 447, offset 0x8003df9c
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x8003DF9C
		// Variables:
	// 		long id; // $a2
	/* end block 1 */
	// End offset: 0x8003DFE8
	// End Line: 459

	/* begin block 2 */
		// Start line: 940
	/* end block 2 */
	// End Line: 941

void OBTABLE_RelocateInstanceObject(_Instance *instance,long offset)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_s5;
  
  iVar10 = *(int *)(unaff_s5 + 0x10);
  if ((*(uint *)(iVar10 + 0x2c) & 0x10000000) != 0) {
    iVar9 = (int)*(short *)(iVar10 + 10);
    ppiVar8 = *(int ***)(iVar10 + 0x10);
    iVar11 = 0;
    while (iVar9 != 0) {
      piVar7 = *ppiVar8;
      if ((*piVar7 == 0xface0ff) && (iVar1 = FUN_80058c40((int)piVar7 + 6), iVar1 != 0)) {
        iVar4 = (unaff_s5 - loadStatus.endLoadTime) * 0x38e38e39 >> 2;
        iVar2 = (int)*(char *)(iVar1 + 0x1c);
        iVar6 = *(int *)(iVar1 + 0x10);
        iVar5 = 0;
        iVar3 = iVar1;
        if (0 < iVar2) {
          do {
            if ((int)*(char *)(iVar3 + 0x1d) == iVar4) break;
            iVar5 = iVar5 + 1;
            iVar3 = iVar1 + iVar5;
          } while (iVar5 < iVar2);
          iVar2 = (int)*(char *)(iVar1 + 0x1c);
        }
        if (iVar5 == iVar2) {
          *(char *)(iVar1 + 0x1c) = *(char *)(iVar1 + 0x1c) + '\x01';
          *(undefined *)(iVar1 + iVar5 + 0x1d) = (char)iVar4;
        }
        if (*(short *)(iVar1 + 0x14) == 2) {
          *ppiVar8 = *(int **)((int)*(short *)(piVar7 + 1) * 4 + *(int *)(iVar6 + 0x10));
        }
        else {
          iVar11 = (int)piVar7 + 6;
        }
      }
      iVar9 = iVar9 + -1;
      ppiVar8 = ppiVar8 + 1;
    }
    if (iVar11 != 0) {
      return;
    }
    *(uint *)(iVar10 + 0x2c) = *(uint *)(iVar10 + 0x2c) & 0xefffffff;
  }
  if ((*(uint *)(iVar10 + 0x2c) & 0x80000) != 0) {
    FUN_8007eba0(iVar10);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OBTABLE_InitAnimPointers(struct _ObjectTracker *objectTracker /*$s5*/)
 // line 461, offset 0x8003dff8
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8003DFF8
		// Variables:
	// 		struct Object *object; // $s3

		/* begin block 1.1 */
			// Start line: 467
			// Start offset: 0x8003E038
			// Variables:
		// 		int i; // $s2
		// 		char *earlyOut; // $s4
		// 		struct _G2AnimKeylist_Type **keyPtr; // $s1

			/* begin block 1.1.1 */
				// Start line: 473
				// Start offset: 0x8003E048
				// Variables:
			// 		struct _ObjectOwnerInfo *oi; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 477
					// Start offset: 0x8003E060
					// Variables:
				// 		struct _ObjectTracker *otr; // $a2
				// 		struct Object *ownerOb; // $a3
				// 		int j; // $a1
				// 		int objectIndex; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8003E130
				// End Line: 504
			/* end block 1.1.1 */
			// End offset: 0x8003E130
			// End Line: 505
		/* end block 1.1 */
		// End offset: 0x8003E154
		// End Line: 514
	/* end block 1 */
	// End offset: 0x8003E170
	// End Line: 521

	/* begin block 2 */
		// Start line: 968
	/* end block 2 */
	// End Line: 969

void OBTABLE_InitAnimPointers(_ObjectTracker *objectTracker)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_s0;
  int **unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    iVar1 = FUN_80058c40((int)unaff_s0 + 6);
    if (iVar1 != 0) {
      iVar4 = (unaff_s5 - loadStatus.endLoadTime) * 0x38e38e39 >> 2;
      iVar2 = (int)*(char *)(iVar1 + 0x1c);
      iVar6 = *(int *)(iVar1 + 0x10);
      iVar5 = 0;
      iVar3 = iVar1;
      if (0 < iVar2) {
        do {
          if ((int)*(char *)(iVar3 + 0x1d) == iVar4) break;
          iVar5 = iVar5 + 1;
          iVar3 = iVar1 + iVar5;
        } while (iVar5 < iVar2);
        iVar2 = (int)*(char *)(iVar1 + 0x1c);
      }
      if (iVar5 == iVar2) {
        *(char *)(iVar1 + 0x1c) = *(char *)(iVar1 + 0x1c) + '\x01';
        *(undefined *)(iVar1 + iVar5 + 0x1d) = (char)iVar4;
      }
      if (*(short *)(iVar1 + 0x14) == 2) {
        *unaff_s1 = *(int **)((int)*(short *)(unaff_s0 + 1) * 4 + *(int *)(iVar6 + 0x10));
      }
      else {
        unaff_s4 = (int)unaff_s0 + 6;
      }
    }
    do {
      unaff_s2 = unaff_s2 + -1;
      unaff_s1 = unaff_s1 + 1;
      if (unaff_s2 == 0) {
        if ((unaff_s4 == 0) &&
           (*(uint *)(unaff_s3 + 0x2c) = *(uint *)(unaff_s3 + 0x2c) & 0xefffffff,
           (*(uint *)(unaff_s3 + 0x2c) & 0x80000) != 0)) {
          FUN_8007eba0();
        }
        return;
      }
      unaff_s0 = *unaff_s1;
    } while (*unaff_s0 != 0xface0ff);
  } while( true );
}





