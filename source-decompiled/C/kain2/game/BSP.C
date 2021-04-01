#include "THISDUST.H"
#include "BSP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SBSP_IntroduceInstances(struct _Terrain *terrain /*$a0*/, int unitID /*$a1*/)
 // line 527, offset 0x8003d928
	/* begin block 1 */
		// Start line: 528
		// Start offset: 0x8003D928
		// Variables:
	// 		int i; // $s1
	// 		struct Intro *intro; // $s0
	/* end block 1 */
	// End offset: 0x8003D974
	// End Line: 561

	/* begin block 2 */
		// Start line: 580
	/* end block 2 */
	// End Line: 581

	/* begin block 3 */
		// Start line: 1054
	/* end block 3 */
	// End Line: 1055

void SBSP_IntroduceInstances(_Terrain *terrain,int unitID)

{
  FUN_8003d8c0();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SBSP_IntroduceInstancesAndLights(struct _Terrain *terrain /*$a0*/, struct _CameraCore_Type *cameraCore /*$a1*/, struct LightInfo *lightInfo /*$a2*/, int unitID /*$a3*/)
 // line 563, offset 0x8003d98c
	/* begin block 1 */
		// Start line: 657
	/* end block 1 */
	// End Line: 658

void SBSP_IntroduceInstancesAndLights
               (_Terrain *terrain,_CameraCore_Type *cameraCore,LightInfo *lightInfo,int unitID)

{
  int in_v0;
  code *pcVar1;
  int in_v1;
  int unaff_s0;
  
  pcVar1 = *(code **)(in_v0 * 4 + in_v1 + 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
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





