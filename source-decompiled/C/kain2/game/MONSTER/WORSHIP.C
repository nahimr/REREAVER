#include "THISDUST.H"
#include "WORSHIP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ WORSHIP_Init(struct _Instance *instance /*$s2*/)
 // line 47, offset 0x8008ee08
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x8008EE08
		// Variables:
	// 		struct _MonsterAttributes *ma; // $s0
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _Instance *weapon; // $v0
	/* end block 1 */
	// End offset: 0x8008EE90
	// End Line: 68

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

void WORSHIP_Init(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WORSHIP_CombatEntry(struct _Instance *instance /*$s3*/)
 // line 73, offset 0x8008eea8
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x8008EEA8
		// Variables:
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 79
			// Start offset: 0x8008EF10
			// Variables:
		// 		struct _MonsterAttributes *ma; // $s2

			/* begin block 1.1.1 */
				// Start line: 83
				// Start offset: 0x8008EF20
			/* end block 1.1.1 */
			// End offset: 0x8008EF44
			// End Line: 89
		/* end block 1.1 */
		// End offset: 0x8008EF84
		// End Line: 100
	/* end block 1 */
	// End offset: 0x8008EF84
	// End Line: 102

	/* begin block 2 */
		// Start line: 150
	/* end block 2 */
	// End Line: 151

void WORSHIP_CombatEntry(_Instance *instance)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_s1;
  
  if (*(char *)(unaff_s1 + 0x14a) != '\0') {
    FUN_8007cbec();
  }
  iVar2 = FUN_8007cbec();
  if (iVar2 != 0) {
    FUN_8007ccc0();
  }
  uVar1 = 0x6000;
  if (*(char *)(unaff_s1 + 0x14a) == '\0') {
    uVar1 = 0x5000;
  }
  *(undefined2 *)(unaff_s1 + 0x134) = uVar1;
  return;
}





