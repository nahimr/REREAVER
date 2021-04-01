#include "THISDUST.H"
#include "MONTABLE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MONTABLE_SetupTablePointer(struct Object *object /*$a0*/)
 // line 376, offset 0x8008ce88
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x8008CE88
		// Variables:
	// 		long whatAmI; // $a1
	/* end block 1 */
	// End offset: 0x8008CED0
	// End Line: 390

	/* begin block 2 */
		// Start line: 752
	/* end block 2 */
	// End Line: 753

	/* begin block 3 */
		// Start line: 753
	/* end block 3 */
	// End Line: 754

	/* begin block 4 */
		// Start line: 758
	/* end block 4 */
	// End Line: 759

void MONTABLE_SetupTablePointer(Object *object)

{
  byte bVar1;
  int unaff_s1;
  int unaff_s2;
  
  FUN_80090428();
  bVar1 = *(byte *)(unaff_s1 + 0x22);
  if ((bVar1 != 0) && ((uint)bVar1 != (uint)*(byte *)(unaff_s1 + 0x1a))) {
    FUN_80090428(unaff_s2 + 0x194,(uint)bVar1,0xe);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c();
}



// decompiled code
// original method signature: 
// struct _MonsterState * /*$ra*/ MONTABLE_GetStateFuncs(struct _Instance *instance /*$a0*/, int state /*$a1*/)
 // line 392, offset 0x8008ced8
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x8008CED8
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0

		/* begin block 1.1 */
			// Start line: 398
			// Start offset: 0x8008CEF0
			// Variables:
		// 		struct _MonsterStateChoice *choice; // $a0
		/* end block 1.1 */
		// End offset: 0x8008CF2C
		// End Line: 403
	/* end block 1 */
	// End offset: 0x8008CF38
	// End Line: 406

	/* begin block 2 */
		// Start line: 798
	/* end block 2 */
	// End Line: 799

	/* begin block 3 */
		// Start line: 799
	/* end block 3 */
	// End Line: 800

_MonsterState * MONTABLE_GetStateFuncs(_Instance *instance,int state)

{
  _MonsterState *p_Var1;
  
  p_Var1 = (_MonsterState *)((uint)(ushort)GlobalSave->humanOpinionOfRaziel + 1);
  GlobalSave->humanOpinionOfRaziel = (short)p_Var1;
  return p_Var1;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_MONTABLE_GetDamageEffectFunc /*$ra*/ MONTABLE_GetDamageEffectFunc(struct _Instance *instance /*$a0*/)
 // line 408, offset 0x8008cf48
	/* begin block 1 */
		// Start line: 410
		// Start offset: 0x8008CF48
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0
	/* end block 1 */
	// End offset: 0x8008CF74
	// End Line: 416

	/* begin block 2 */
		// Start line: 831
	/* end block 2 */
	// End Line: 832

	/* begin block 3 */
		// Start line: 832
	/* end block 3 */
	// End Line: 833

TDRFuncPtr_MONTABLE_GetDamageEffectFunc MONTABLE_GetDamageEffectFunc(_Instance *instance)

{
  int in_v0;
  int *in_v1;
  int in_a1;
  
  while (in_v0 != 0) {
    if (in_a1 == in_v0) {
      instance->matrix = (MATRIX *)in_v1[1];
    }
    in_v1 = in_v1 + 2;
    in_v0 = *in_v1;
  }
  return (TDRFuncPtr_MONTABLE_GetDamageEffectFunc)0x0;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_MONTABLE_GetInitFunc /*$ra*/ MONTABLE_GetInitFunc(struct _Instance *instance /*$a0*/)
 // line 418, offset 0x8008cf7c
	/* begin block 1 */
		// Start line: 420
		// Start offset: 0x8008CF7C
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0
	/* end block 1 */
	// End offset: 0x8008CFA8
	// End Line: 426

	/* begin block 2 */
		// Start line: 851
	/* end block 2 */
	// End Line: 852

	/* begin block 3 */
		// Start line: 852
	/* end block 3 */
	// End Line: 853

TDRFuncPtr_MONTABLE_GetInitFunc MONTABLE_GetInitFunc(_Instance *instance)

{
  int in_v1;
  NodeType *in_a1;
  
  if (in_v1 != -1) {
    do {
      if (in_a1 == (instance->node).prev) {
        return (TDRFuncPtr_MONTABLE_GetInitFunc)&(instance->node).next;
      }
      instance = (_Instance *)&instance->prev;
    } while ((instance->node).prev != (NodeType *)0xffffffff);
  }
  return (TDRFuncPtr_MONTABLE_GetInitFunc)(INT_ARRAY_800cac3c + (int)in_a1 * 2 + 10);
}



// decompiled code
// original method signature: 
// TDRFuncPtr_MONTABLE_GetCleanUpFunc /*$ra*/ MONTABLE_GetCleanUpFunc(struct _Instance *instance /*$a0*/)
 // line 428, offset 0x8008cfb0
	/* begin block 1 */
		// Start line: 430
		// Start offset: 0x8008CFB0
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0
	/* end block 1 */
	// End offset: 0x8008CFDC
	// End Line: 436

	/* begin block 2 */
		// Start line: 871
	/* end block 2 */
	// End Line: 872

	/* begin block 3 */
		// Start line: 872
	/* end block 3 */
	// End Line: 873

TDRFuncPtr_MONTABLE_GetCleanUpFunc MONTABLE_GetCleanUpFunc(_Instance *instance)

{
  int in_v1;
  
  return (TDRFuncPtr_MONTABLE_GetCleanUpFunc)((int)INT_ARRAY_800cac3c + in_v1 + 0x28);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONTABLE_SetQueryFunc(struct _Instance *instance /*$a0*/)
 // line 438, offset 0x8008cfe4
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8008CFE4
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0
	/* end block 1 */
	// End offset: 0x8008D010
	// End Line: 444

	/* begin block 2 */
		// Start line: 891
	/* end block 2 */
	// End Line: 892

	/* begin block 3 */
		// Start line: 892
	/* end block 3 */
	// End Line: 893

void MONTABLE_SetQueryFunc(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONTABLE_SetMessageFunc(struct _Instance *instance /*$a0*/)
 // line 446, offset 0x8008d018
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x8008D018
		// Variables:
	// 		struct _MonsterFunctionTable *ft; // $v0
	/* end block 1 */
	// End offset: 0x8008D044
	// End Line: 452

	/* begin block 2 */
		// Start line: 907
	/* end block 2 */
	// End Line: 908

	/* begin block 3 */
		// Start line: 908
	/* end block 3 */
	// End Line: 909

void MONTABLE_SetMessageFunc(_Instance *instance)

{
  return;
}





