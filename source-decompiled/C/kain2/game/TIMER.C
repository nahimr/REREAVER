#include "THISDUST.H"
#include "TIMER.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ TIMER_GetTimeMS()
 // line 41, offset 0x8003d7b0
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x8003D7B0
		// Variables:
	// 		unsigned long ticks; // $s1
	// 		unsigned long mticks; // $s0
	/* end block 1 */
	// End offset: 0x8003D7B0
	// End Line: 42

	/* begin block 2 */
		// Start line: 82
	/* end block 2 */
	// End Line: 83

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong TIMER_GetTimeMS(void)

{
  int in_a0;
  int unaff_s1;
  int in_hi;
  
  return in_a0 + (in_hi + ((uint)(unaff_s1 - in_hi) >> 1) >> 0xf);
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ TIMER_TimeDiff(unsigned long x /*$s0*/)
 // line 72, offset 0x8003d840
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x8003D840
		// Variables:
	// 		unsigned long intrs; // $v1
	// 		unsigned long ticks; // $a2
	// 		unsigned long prevIntrs; // $a1
	// 		unsigned long prevTicks; // $a0
	// 		unsigned long diffIntrs; // $v1
	// 		unsigned long diffTicks; // $s0
	// 		unsigned long timeDiff; // $v1
	/* end block 1 */
	// End offset: 0x8003D914
	// End Line: 122

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

ulong TIMER_TimeDiff(ulong x)

{
  uint in_v1;
  undefined *puVar1;
  int in_a2;
  
  if (in_v1 < 0x8d3) {
    puVar1 = (undefined *)(((in_a2 - x) * 0x1d + in_v1 * 0x1cffe3) / 1000);
  }
  else {
    puVar1 = &DAT_0041828f;
  }
  if (gTimerEnabled == 0) {
    puVar1 = (undefined *)0x0;
  }
  return (ulong)puVar1;
}





