#include "THISDUST.H"
#include "RAZCNTRL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ProcessRazControl(long *command /*$a0*/)
 // line 67, offset 0x80070694
	/* begin block 1 */
		// Start line: 134
	/* end block 1 */
	// End Line: 135

	/* begin block 2 */
		// Start line: 136
	/* end block 2 */
	// End Line: 137

void ProcessRazControl(long *command)

{
  undefined2 in_v0;
  undefined2 *in_a1;
  int in_a2;
  
  *(undefined2 *)command = in_v0;
  if (0x400 < in_a2) {
    *in_a1 = 1;
    return;
  }
  if (in_a2 < -0x400) {
    *in_a1 = 0xffff;
    return;
  }
  *in_a1 = 0;
  return;
}





