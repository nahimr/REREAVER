#include "THISDUST.H"
#include "QUATVM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ G2Quat_Slerp_VM(long ratio /*$s2*/, struct _G2Quat_Type *quatA /*$s3*/, struct _G2Quat_Type *quatB /*$s5*/, struct _G2Quat_Type *quatOut /*$s6*/, int spin /*stack 16*/)
 // line 93, offset 0x800962f4
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x800962F4
		// Variables:
	// 		long beta; // $s1
	// 		short theta; // $s0
	// 		short cos_t; // $a0
	// 		long bflip; // $s4
	// 		long foo[4]; // stack offset -56
	// 		long cosTemp1; // $v1
	// 		long cosTemp2; // stack offset -40
	/* end block 1 */
	// End offset: 0x80096440
	// End Line: 150

	/* begin block 2 */
		// Start line: 135
	/* end block 2 */
	// End Line: 136

	/* begin block 3 */
		// Start line: 186
	/* end block 3 */
	// End Line: 187

void G2Quat_Slerp_VM(long ratio,_G2Quat_Type *quatA,_G2Quat_Type *quatB,_G2Quat_Type *quatOut,
                    int spin)

{
  undefined2 uVar1;
  short in_v0;
  undefined2 *unaff_s3;
  int in_stack_00000018;
  undefined2 in_stack_00000050;
  
  unaff_s3[1] = -in_v0;
  if (in_stack_00000018 == ratio) {
    uVar1 = *unaff_s3;
    *unaff_s3 = unaff_s3[2];
    unaff_s3[2] = uVar1;
  }
  unaff_s3[3] = in_stack_00000050;
  return;
}





