#include "THISDUST.H"
#include "MAING2.H"


// decompiled code
// original method signature: 
// enum _G2Bool_Enum /*$ra*/ MainG2_InitEngine(void *appData /*$a0*/, unsigned int screenWidth /*$a1*/, unsigned int screenHeight /*$a2*/, char *filesystemName /*$a3*/)
 // line 45, offset 0x80095d8c
	/* begin block 1 */
		// Start line: 90
	/* end block 1 */
	// End Line: 91

	/* begin block 2 */
		// Start line: 121
	/* end block 2 */
	// End Line: 122

_G2Bool_Enum
MainG2_InitEngine(void *appData,uint screenWidth,uint screenHeight,char *filesystemName)

{
  short sVar1;
  short in_v1;
  void **unaff_s0;
  int unaff_s3;
  
  sVar1 = *(short *)(unaff_s3 + 2);
  *unaff_s0 = appData;
  unaff_s0[1] = (void *)(((int)screenWidth >> 0x10) - (int)sVar1);
                    /* WARNING: Subroutine does not return */
  unaff_s0[2] = (void *)((int)in_v1 - (int)*(short *)(unaff_s3 + 4));
  FUN_80039564();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MainG2_ShutDownEngine(void *appData /*$a0*/)
 // line 82, offset 0x80095d94
	/* begin block 1 */
		// Start line: 164
	/* end block 1 */
	// End Line: 165

	/* begin block 2 */
		// Start line: 173
	/* end block 2 */
	// End Line: 174

void MainG2_ShutDownEngine(void *appData)

{
  short in_v0;
  short in_v1;
  int in_a1;
  void **unaff_s0;
  int unaff_s3;
  
  *unaff_s0 = appData;
  unaff_s0[1] = (void *)(in_a1 - (int)in_v0);
                    /* WARNING: Subroutine does not return */
  unaff_s0[2] = (void *)((int)in_v1 - (int)*(short *)(unaff_s3 + 4));
  FUN_80039564();
}





