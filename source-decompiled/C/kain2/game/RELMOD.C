#include "THISDUST.H"
#include "RELMOD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ RELMOD_InitModulePointers(int baseaddr /*$a0*/, int *relocs /*$a1*/)
 // line 11, offset 0x8007c974
	/* begin block 1 */
		// Start line: 13
		// Start offset: 0x8007C974
		// Variables:
	// 		unsigned int *rel_addr; // $a2
	/* end block 1 */
	// End offset: 0x8007CA50
	// End Line: 38

	/* begin block 2 */
		// Start line: 22
	/* end block 2 */
	// End Line: 23

	/* begin block 3 */
		// Start line: 23
	/* end block 3 */
	// End Line: 24

	/* begin block 4 */
		// Start line: 25
	/* end block 4 */
	// End Line: 26

void RELMOD_InitModulePointers(int baseaddr,int *relocs)

{
  int in_v1;
  uint unaff_s0;
  code **unaff_s1;
  int unaff_s2;
  uint uStack00000014;
  
  while( true ) {
    uStack00000014 = (uint)((int)unaff_s0 < in_v1) ^ 1;
    FUN_8004db0c(baseaddr,relocs);
    unaff_s0 = unaff_s0 + 1;
    if (4 < (int)unaff_s0) {
      return;
    }
    relocs = (int *)0x0;
    if (unaff_s0 < 5) break;
    unaff_s1 = unaff_s1 + 1;
    baseaddr = *(int *)(unaff_s2 + 0xc4);
    in_v1 = (int)vramBlockList[79].area._2_2_;
  }
                    /* WARNING: Could not recover jumptable at 0x8007c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**unaff_s1)();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RELMOD_RelocModulePointers(int baseaddr /*$a0*/, int offset /*$a1*/, int *relocs /*$a2*/)
 // line 42, offset 0x8007ca58
	/* begin block 1 */
		// Start line: 44
		// Start offset: 0x8007CA58
		// Variables:
	// 		int oldbaseaddr; // $v0
	// 		int *rel_addr; // $a3
	/* end block 1 */
	// End offset: 0x8007CB38
	// End Line: 69

	/* begin block 2 */
		// Start line: 86
	/* end block 2 */
	// End Line: 87

	/* begin block 3 */
		// Start line: 87
	/* end block 3 */
	// End Line: 88

	/* begin block 4 */
		// Start line: 90
	/* end block 4 */
	// End Line: 91

void RELMOD_RelocModulePointers(int baseaddr,int offset,int *relocs)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int in_a3;
  int in_t0;
  uint in_t1;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  
  do {
    *(short *)relocs = *(short *)relocs + (short)baseaddr;
    puVar3 = (uint *)offset;
    while( true ) {
      while( true ) {
        while( true ) {
          uVar2 = *puVar3;
          offset = (int)(puVar3 + 1);
          if (uVar2 == 0xffffffff) {
            return;
          }
          uVar1 = uVar2 & 3;
          relocs = (int *)(baseaddr + (uVar2 & in_t4));
          if (uVar1 != in_t3) break;
          *(short *)relocs = (short)(baseaddr + *(uint *)offset + in_t0 >> 0x10);
          puVar3 = puVar3 + 2;
        }
        if (1 < uVar1) break;
        puVar3 = (uint *)offset;
        if ((uVar1 == 0) && (puVar3 = (uint *)offset, -1 < *relocs)) {
          *relocs = *relocs + baseaddr;
          puVar3 = (uint *)offset;
        }
      }
      if (uVar1 == in_t2) break;
      puVar3 = (uint *)offset;
      if (uVar1 == in_t1) {
        *relocs = *relocs + in_a3;
        puVar3 = (uint *)offset;
      }
    }
  } while( true );
}





