#include "THISDUST.H"
#include "QUATG2.H"


// decompiled code
// original method signature: 
// void /*$ra*/ G2Quat_ToEuler(struct _G2Quat_Type *quat /*$a0*/, struct _G2EulerAngles_Type *euler /*$s0*/, int order /*$s1*/)
 // line 74, offset 0x80095ed8
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x80095ED8
		// Variables:
	// 		struct _G2Matrix_Type tempMatrix; // stack offset -48
	/* end block 1 */
	// End offset: 0x80095ED8
	// End Line: 75

	/* begin block 2 */
		// Start line: 148
	/* end block 2 */
	// End Line: 149

void G2Quat_ToEuler(_G2Quat_Type *quat,_G2EulerAngles_Type *euler,int order)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EulerAngles_FromMatrix(struct _G2EulerAngles_Type *euler /*$s3*/, struct _G2Matrix_Type *matrix /*$s4*/, long order /*stack 8*/)
 // line 328, offset 0x80095f1c
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x80095F1C
		// Variables:
	// 		long i; // $a2
	// 		long j; // $s5
	// 		long k; // stack offset -56
	// 		long n; // stack offset -52
	// 		long s; // $a1
	// 		long f; // stack offset -48

		/* begin block 1.1 */
			// Start line: 329
			// Start offset: 0x80095F1C
			// Variables:
		// 		unsigned int o; // $v1
		/* end block 1.1 */
		// End offset: 0x80095F1C
		// End Line: 329

		/* begin block 1.2 */
			// Start line: 336
			// Start offset: 0x80095FBC
			// Variables:
		// 		long sy; // $s0
		/* end block 1.2 */
		// End offset: 0x8009608C
		// End Line: 349

		/* begin block 1.3 */
			// Start line: 356
			// Start offset: 0x800960C8
			// Variables:
		// 		long cy; // $s5
		/* end block 1.3 */
		// End offset: 0x800961F0
		// End Line: 375

		/* begin block 1.4 */
			// Start line: 384
			// Start offset: 0x80096234
			// Variables:
		// 		short t; // $v1
		/* end block 1.4 */
		// End offset: 0x80096244
		// End Line: 387
	/* end block 1 */
	// End offset: 0x80096244
	// End Line: 389

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

void G2EulerAngles_FromMatrix(_G2EulerAngles_Type *euler,_G2Matrix_Type *matrix,long order)

{
  if ((ushort)euler->y < (ushort)euler->z) {
    euler->y = euler->y + 1;
    return;
  }
  return;
}





