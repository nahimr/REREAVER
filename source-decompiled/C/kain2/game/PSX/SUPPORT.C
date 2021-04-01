#include "THISDUST.H"
#include "SUPPORT.H"


// decompiled code
// original method signature: 
// int /*$ra*/ printf(char *fmt /*stack 0*/)
 // line 57, offset 0x80074170
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x80074170
		// Variables:
	// 		int len; // $s0
	// 		char string[256]; // stack offset -264
	/* end block 1 */
	// End offset: 0x80074170
	// End Line: 58

	/* begin block 2 */
		// Start line: 114
	/* end block 2 */
	// End Line: 115

int printf(char *fmt)

{
  int unaff_s3;
  
  return unaff_s3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ sprintf(char *string /*$a0*/, char *fmt /*stack 4*/)
 // line 79, offset 0x800741c0
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800741C0
	/* end block 1 */
	// End offset: 0x800741C0
	// End Line: 80

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

int sprintf(char *string,char *fmt)

{
  int iVar1;
  char *pcStack00000118;
  
  pcStack00000118 = string;
  iVar1 = FUN_8007422c(&stack0x00000010,string,&stack0x0000011c);
  FUN_800c0b58(&stack0x00000010);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ vsprintf(char *str /*$s7*/, char *fmtstr /*$a1*/, void *argptr /*$s5*/)
 // line 110, offset 0x800741f0
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x800741F0
		// Variables:
	// 		int scopy; // $s4
	// 		char *fmt; // $s3

		/* begin block 1.1 */
			// Start line: 121
			// Start offset: 0x80074258
			// Variables:
		// 		int fsize; // $s0
		// 		int pad; // $s6
		// 		int left_just; // $fp
		// 		int ts_len; // $s2
		// 		char *temp_str; // $s1
		// 		char buf[16]; // stack offset -56
		/* end block 1.1 */
		// End offset: 0x80074420
		// End Line: 221
	/* end block 1 */
	// End offset: 0x80074430
	// End Line: 223

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

int vsprintf(char *str,char *fmtstr,void *argptr)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ my_itoa(unsigned long value /*$v1*/, char *str /*$a1*/, int radix /*$a2*/)
 // line 231, offset 0x8007446c
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x8007446C
		// Variables:
	// 		char *p; // $a0
	// 		char *q; // $a3
	// 		char digits[31]; // stack offset -32
	/* end block 1 */
	// End offset: 0x80074534
	// End Line: 272

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

char * my_itoa(ulong value,char *str,int radix)

{
  char *unaff_s4;
  int unaff_s7;
  
  unaff_s4[unaff_s7] = '\0';
  return unaff_s4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ atoi(char *str /*$a1*/)
 // line 295, offset 0x8007453c
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x8007453C
		// Variables:
	// 		int val; // $a2
	// 		int neg; // $a3
	/* end block 1 */
	// End offset: 0x8007459C
	// End Line: 316

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

int atoi(char *str)

{
  char cVar1;
  int in_a1;
  char *in_a3;
  undefined auStackX0 [16];
  
  do {
    cVar1 = '0';
    if (9 < (byte)*str) {
      cVar1 = 'W';
    }
    *in_a3 = *str + cVar1;
    str = (char *)((byte *)str + -1);
    in_a3 = in_a3 + 1;
  } while (register0x00000074 <= str);
  *in_a3 = '\0';
  return in_a1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ mytolower(int c /*$a0*/)
 // line 319, offset 0x800745ac
	/* begin block 1 */
		// Start line: 618
	/* end block 1 */
	// End Line: 619

	/* begin block 2 */
		// Start line: 619
	/* end block 2 */
	// End Line: 620

int mytolower(int c)

{
  byte bVar1;
  int in_v0;
  byte *in_a1;
  int in_a2;
  int in_a3;
  
  while( true ) {
    bVar1 = *in_a1;
    in_a1 = in_a1 + 1;
    in_a2 = (in_v0 + in_a2) * 2 + -0x30 + (uint)bVar1;
    if (*in_a1 == 0) break;
    in_v0 = in_a2 * 4;
  }
  if (in_a3 != 0) {
    return -in_a2;
  }
  return in_a2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ strcmpi(char *s1 /*$s1*/, char *s2 /*$s2*/)
 // line 325, offset 0x800745c8
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800745E4
		// Variables:
	// 		int c1; // $s0
	// 		int c2; // $v0
	/* end block 1 */
	// End offset: 0x80074610
	// End Line: 338

	/* begin block 2 */
		// Start line: 630
	/* end block 2 */
	// End Line: 631

int strcmpi(char *s1,char *s2)

{
  int in_v0;
  uint in_v1;
  char *pcVar1;
  int in_a3;
  
  while (pcVar1 = s1 + in_v0, in_v1 != 0) {
    s1 = (char *)(uint)(byte)*s2;
    s2 = (char *)((byte *)s2 + 1);
    in_v0 = (int)pcVar1 * 10 + -0x30;
    in_v1 = (uint)(byte)*s2;
  }
  if (in_a3 != 0) {
    return -(int)pcVar1;
  }
  return (int)pcVar1;
}





