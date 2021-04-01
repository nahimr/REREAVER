#include "THISDUST.H"
#include "FONT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FONT_MakeSpecialFogClut(int x /*$a3*/, int y /*$a1*/)
 // line 58, offset 0x8002cb74
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x8002CB74
		// Variables:
	// 		int n; // $a0
	// 		unsigned short cl[16]; // stack offset -48
	// 		struct RECT myrect; // stack offset -16
	/* end block 1 */
	// End offset: 0x8002CB9C
	// End Line: 69

	/* begin block 2 */
		// Start line: 116
	/* end block 2 */
	// End Line: 117

void FONT_MakeSpecialFogClut(int x,int y)

{
  undefined4 uVar1;
  int iStack00000010;
  undefined4 uStack00000014;
  short in_stack_00000018;
  short in_stack_0000001a;
  
  uStack00000014 = 0xffffffff;
  fp_str._32_4_ = FUN_8007306c();
  if (fp_str._32_4_ != 0) {
    uVar1 = FUN_80060410(&DAT_800ce450,5);
    iStack00000010 = (int)in_stack_0000001a + 0x7e;
    FUN_80037a34(uVar1,(int)in_stack_00000018,(int)in_stack_0000001a,(int)in_stack_00000018);
                    /* WARNING: Subroutine does not return */
    FUN_8004fe84(uVar1);
  }
  fontTracker.font_buffer[176]._0_4_ = 10;
  fontTracker.font_buffer._1060_4_ = 0x10;
  fontTracker.font_buffer[177]._2_4_ = 0;
  fontTracker.font_buffer[179]._4_2_ = 0;
  fontTracker.font_buffer[180].c = '\0';
  fontTracker.font_buffer[180].color = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_Init()
 // line 91, offset 0x8002cbf8
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8002CBF8
		// Variables:
	// 		unsigned long *timAddr; // $s0
	// 		short x; // stack offset -16
	// 		short y; // stack offset -14
	/* end block 1 */
	// End offset: 0x8002CCE8
	// End Line: 126

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FONT_Init(void)

{
  uint in_v0;
  ushort in_v1;
  undefined4 in_a0;
  int in_a1;
  uint in_a2;
  uint in_a3;
  undefined4 in_t0;
  
  fontTracker.font_buffer[178].x = in_v1 | (ushort)(in_v0 >> 6) | (ushort)((in_a2 & 0x200) << 2);
  fontTracker.font_buffer[180].y = (short)in_a2;
  fontTracker.font_buffer[178].y =
       (fontTracker.font_buffer[180].y + 0x7eU) * 0x40 | (ushort)((int)in_t0 >> 0x14) & 0x3f;
  fontTracker.font_buffer[180].x = (short)in_a3;
  fontTracker.font_buffer[179].x = fontTracker.font_buffer[180].y & 0xff;
  fontTracker.font_buffer[178]._4_2_ = (undefined2)((in_a3 & 0x3f) << 2);
  FUN_8002cad8(in_a0,in_a1 + 0x7f);
  fontTracker.font_buffer[176]._0_4_ = 10;
  fontTracker.font_buffer._1060_4_ = 0x10;
  fontTracker.font_buffer[177]._2_4_ = 0;
  fontTracker.font_buffer[179]._4_2_ = 0;
  fontTracker.font_buffer[180].c = '\0';
  fontTracker.font_buffer[180].color = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_ReloadFont()
 // line 137, offset 0x8002cd18
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x8002CD18
		// Variables:
	// 		unsigned long *timAddr; // $s0
	/* end block 1 */
	// End offset: 0x8002CD18
	// End Line: 138

	/* begin block 2 */
		// Start line: 318
	/* end block 2 */
	// End Line: 319

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FONT_ReloadFont(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_DrawChar(struct FontChar *fontChar /*$a0*/)
 // line 149, offset 0x8002cd7c
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8002CD7C
		// Variables:
	// 		char c; // $v1
	// 		long x; // $a1
	// 		long y; // $a2
	/* end block 1 */
	// End offset: 0x8002CD7C
	// End Line: 150

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

void FONT_DrawChar(FontChar *fontChar)

{
  uint *puVar1;
  char in_v0;
  char in_v1;
  uint uVar2;
  short sVar3;
  int in_a1;
  short in_a2;
  uint *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short in_t8;
  short sVar11;
  int in_t9;
  
  puVar1 = clearRect[1]._8_4_;
  sVar11 = (short)in_t9;
  cVar9 = *(char *)(in_a1 + 3);
  sVar3 = (short)cVar9;
  cVar8 = in_v1 + in_v0;
  cVar7 = (char)fontChar + (char)fontTracker.font_buffer[179].x;
  if (in_t9 < 0) {
    sVar11 = -sVar11;
  }
  cVar10 = cVar8 + (char)sVar11;
  if (cVar9 < '\0') {
    sVar3 = -(short)cVar9;
  }
  cVar5 = cVar7 + (char)sVar3;
  sVar3 = in_a2 - (sVar3 + -0xc);
  puVar4 = *(uint **)(loadStatus.changeDir + 4);
  cVar6 = cVar7;
  if (cVar9 < '\0') {
    cVar6 = cVar5;
    cVar5 = cVar7;
  }
  cVar9 = cVar8;
  if (in_t9 < 0) {
    cVar9 = cVar10;
    cVar10 = cVar8;
  }
  *(undefined *)((int)puVar4 + 3) = 9;
  *(undefined *)((int)puVar4 + 7) = 0x2c;
  if (fontTracker.font_buffer[180].color == '\0') {
    *(undefined *)((int)puVar4 + 7) = 0x2d;
  }
  else {
    uVar2 = (uint)(byte)fontTracker.font_buffer[180].color;
    *(undefined *)((int)puVar4 + 7) = 0x2c;
    *(undefined *)(puVar4 + 1) = *(undefined *)&the_font_color_table[uVar2].r;
    *(undefined *)((int)puVar4 + 5) = *(undefined *)&the_font_color_table[uVar2].g;
    *(undefined *)((int)puVar4 + 6) = *(undefined *)&the_font_color_table[uVar2].b;
  }
  *(char *)(puVar4 + 3) = cVar9;
  *(char *)((int)puVar4 + 0xd) = cVar6;
  *(char *)(puVar4 + 5) = cVar10;
  *(char *)((int)puVar4 + 0x15) = cVar6;
  *(char *)(puVar4 + 7) = cVar9;
  *(char *)((int)puVar4 + 0x1d) = cVar5;
  *(char *)(puVar4 + 9) = cVar10;
  *(char *)((int)puVar4 + 0x25) = cVar5;
  *(short *)(puVar4 + 2) = in_t8;
  *(short *)((int)puVar4 + 10) = sVar3;
  *(short *)(puVar4 + 4) = in_t8 + sVar11;
  *(short *)((int)puVar4 + 0x12) = sVar3;
  *(short *)(puVar4 + 6) = in_t8;
  *(short *)((int)puVar4 + 0x1a) = in_a2 + 0xc;
  *(short *)(puVar4 + 8) = in_t8 + sVar11;
  *(short *)((int)puVar4 + 0x22) = in_a2 + 0xc;
  *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar4 + 7) & 0xfd;
  *(short *)((int)puVar4 + 0x16) = fontTracker.font_buffer[178].x;
  *(short *)((int)puVar4 + 0xe) = fontTracker.font_buffer[178].y;
  *puVar4 = *puVar1 & 0xffffff | 0x9000000;
  *puVar1 = (uint)puVar4 & 0xffffff;
  *(uint **)(loadStatus.changeDir + 4) = puVar4 + 10;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ FONT_Get2DImageIndex(unsigned char c /*$a0*/)
 // line 471, offset 0x8002cdb0
	/* begin block 1 */
		// Start line: 994
	/* end block 1 */
	// End Line: 995

	/* begin block 2 */
		// Start line: 1059
	/* end block 2 */
	// End Line: 1060

long FONT_Get2DImageIndex(uchar c)

{
  long lVar1;
  int in_v1;
  uint uVar2;
  short sVar3;
  undefined3 in_register_00000011;
  int in_a1;
  short in_a2;
  uint *puVar4;
  char cVar5;
  char in_t1;
  char cVar6;
  char in_t2;
  char cVar7;
  undefined in_t3;
  undefined uVar8;
  undefined in_t5;
  undefined uVar9;
  undefined in_t7;
  undefined uVar10;
  short sVar11;
  uint *unaff_s1;
  short in_t8;
  int in_t9;
  
  cVar5 = in_t1 + (char)-in_a1;
  sVar11 = in_t8 + (short)CONCAT31(in_register_00000011,c);
  sVar3 = in_a2 - ((short)-in_a1 + -0xc);
  puVar4 = *(uint **)(in_v1 + 4);
  cVar6 = in_t1;
  if (in_a1 < 0) {
    in_t2 = cVar5;
    cVar6 = cVar5;
    cVar5 = in_t1;
  }
  uVar8 = in_t3;
  cVar7 = in_t2;
  uVar9 = in_t5;
  uVar10 = in_t7;
  if (in_t9 < 0) {
    uVar8 = in_t5;
    cVar7 = cVar6;
    uVar9 = in_t3;
    cVar6 = in_t2;
    uVar10 = in_t5;
    in_t5 = in_t7;
  }
  *(undefined *)((int)puVar4 + 3) = 9;
  *(undefined *)((int)puVar4 + 7) = 0x2c;
  if (fontTracker.font_buffer[180].color == '\0') {
    *(undefined *)((int)puVar4 + 7) = 0x2d;
  }
  else {
    uVar2 = (uint)(byte)fontTracker.font_buffer[180].color;
    *(undefined *)((int)puVar4 + 7) = 0x2c;
    *(undefined *)(puVar4 + 1) = *(undefined *)&the_font_color_table[uVar2].r;
    *(undefined *)((int)puVar4 + 5) = *(undefined *)&the_font_color_table[uVar2].g;
    *(undefined *)((int)puVar4 + 6) = *(undefined *)&the_font_color_table[uVar2].b;
  }
  *(undefined *)(puVar4 + 3) = uVar8;
  *(char *)((int)puVar4 + 0xd) = cVar7;
  *(undefined *)(puVar4 + 5) = uVar9;
  *(char *)((int)puVar4 + 0x15) = cVar6;
  *(undefined *)(puVar4 + 7) = uVar10;
  *(char *)((int)puVar4 + 0x1d) = cVar5;
  *(undefined *)(puVar4 + 9) = in_t5;
  *(char *)((int)puVar4 + 0x25) = cVar5;
  *(short *)(puVar4 + 2) = in_t8;
  *(short *)((int)puVar4 + 10) = sVar3;
  *(short *)(puVar4 + 4) = sVar11;
  *(short *)((int)puVar4 + 0x12) = sVar3;
  *(short *)(puVar4 + 6) = in_t8;
  *(short *)((int)puVar4 + 0x1a) = in_a2 + 0xc;
  *(short *)(puVar4 + 8) = sVar11;
  *(short *)((int)puVar4 + 0x22) = in_a2 + 0xc;
  *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar4 + 7) & 0xfd;
  *(short *)((int)puVar4 + 0x16) = fontTracker.font_buffer[178].x;
  *(short *)((int)puVar4 + 0xe) = fontTracker.font_buffer[178].y;
  *puVar4 = *unaff_s1 & 0xffffff | 0x9000000;
  *unaff_s1 = (uint)puVar4 & 0xffffff;
  lVar1 = loadStatus.changeDir;
  *(uint **)(loadStatus.changeDir + 4) = puVar4 + 10;
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ drawChar2DPoly(long fpi /*$a0*/, long x /*$s0*/, long y /*$a2*/)
 // line 558, offset 0x8002cdc8
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x8002CDC8
		// Variables:
	// 		unsigned long **drawOT; // $s1
	// 		struct POLY_FT4 *textPoly; // $a3
	// 		long xl; // $t8
	// 		long xr; // $s0
	// 		long yt; // $a0
	// 		long yb; // $a2
	// 		long w; // $a0
	// 		long h; // $v0
	// 		int u; // $v1
	// 		int v; // $a0
	// 		int u0; // $t3
	// 		int v0; // $t2
	// 		int u1; // $t5
	// 		int v1; // $t1
	// 		int u2; // $t7
	// 		int v2; // $t0
	// 		int u3; // $t6
	// 		int v3; // $t4

		/* begin block 1.1 */
			// Start line: 606
			// Start offset: 0x8002CE78
		/* end block 1.1 */
		// End offset: 0x8002CE88
		// End Line: 615

		/* begin block 1.2 */
			// Start line: 618
			// Start offset: 0x8002CE90
			// Variables:
		// 		int holdu; // $v0
		// 		int holdv; // $v1
		/* end block 1.2 */
		// End offset: 0x8002CEC0
		// End Line: 627

		/* begin block 1.3 */
			// Start line: 636
			// Start offset: 0x8002CEEC
			// Variables:
		// 		struct font_color_t *color; // $v0
		/* end block 1.3 */
		// End offset: 0x8002CF2C
		// End Line: 639
	/* end block 1 */
	// End offset: 0x8002CF2C
	// End Line: 640

	/* begin block 2 */
		// Start line: 1116
	/* end block 2 */
	// End Line: 1117

void drawChar2DPoly(long fpi,long x,long y)

{
  short in_v0;
  int in_v1;
  uint uVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  undefined in_t0;
  undefined in_t1;
  undefined uVar5;
  undefined in_t2;
  undefined uVar6;
  undefined in_t3;
  undefined uVar7;
  undefined in_t4;
  undefined uVar8;
  undefined in_t5;
  undefined in_t6;
  undefined in_t7;
  undefined uVar9;
  undefined2 unaff_s0;
  uint *unaff_s1;
  undefined2 in_t8;
  int in_t9;
  
  sVar2 = (short)y - (in_v0 + -0xc);
  puVar4 = *(uint **)(in_v1 + 4);
  sVar3 = (short)y + 0xc;
  uVar5 = in_t1;
  if (x < 0) {
    in_t2 = in_t4;
    uVar5 = in_t4;
    in_t0 = in_t1;
    in_t4 = in_t1;
  }
  uVar7 = in_t3;
  uVar9 = in_t7;
  uVar6 = in_t2;
  uVar8 = in_t4;
  if (in_t9 < 0) {
    uVar7 = in_t5;
    in_t5 = in_t3;
    uVar9 = in_t6;
    in_t6 = in_t7;
    uVar6 = uVar5;
    uVar5 = in_t2;
    uVar8 = in_t0;
    in_t0 = in_t4;
  }
  *(undefined *)((int)puVar4 + 3) = 9;
  *(undefined *)((int)puVar4 + 7) = 0x2c;
  if (fontTracker.font_buffer[180].color == '\0') {
    *(undefined *)((int)puVar4 + 7) = 0x2d;
  }
  else {
    uVar1 = (uint)(byte)fontTracker.font_buffer[180].color;
    *(undefined *)((int)puVar4 + 7) = 0x2c;
    *(undefined *)(puVar4 + 1) = *(undefined *)&the_font_color_table[uVar1].r;
    *(undefined *)((int)puVar4 + 5) = *(undefined *)&the_font_color_table[uVar1].g;
    *(undefined *)((int)puVar4 + 6) = *(undefined *)&the_font_color_table[uVar1].b;
  }
  *(undefined *)(puVar4 + 3) = uVar7;
  *(undefined *)((int)puVar4 + 0xd) = uVar6;
  *(undefined *)(puVar4 + 5) = in_t5;
  *(undefined *)((int)puVar4 + 0x15) = uVar5;
  *(undefined *)(puVar4 + 7) = uVar9;
  *(undefined *)((int)puVar4 + 0x1d) = in_t0;
  *(undefined *)(puVar4 + 9) = in_t6;
  *(undefined *)((int)puVar4 + 0x25) = uVar8;
  *(undefined2 *)(puVar4 + 2) = in_t8;
  *(short *)((int)puVar4 + 10) = sVar2;
  *(undefined2 *)(puVar4 + 4) = unaff_s0;
  *(short *)((int)puVar4 + 0x12) = sVar2;
  *(undefined2 *)(puVar4 + 6) = in_t8;
  *(short *)((int)puVar4 + 0x1a) = sVar3;
  *(undefined2 *)(puVar4 + 8) = unaff_s0;
  *(short *)((int)puVar4 + 0x22) = sVar3;
  *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar4 + 7) & 0xfd;
  *(short *)((int)puVar4 + 0x16) = fontTracker.font_buffer[178].x;
  *(short *)((int)puVar4 + 0xe) = fontTracker.font_buffer[178].y;
  *puVar4 = *unaff_s1 & 0xffffff | 0x9000000;
  *unaff_s1 = (uint)puVar4 & 0xffffff;
  *(uint **)(loadStatus.changeDir + 4) = puVar4 + 10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_DrawChar2D(unsigned char c /*$fp*/, long x /*$s7*/, long y /*$s3*/)
 // line 660, offset 0x8002cfc8
	/* begin block 1 */
		// Start line: 661
		// Start offset: 0x8002CFC8
		// Variables:
	// 		long w; // $s0
	// 		long h; // $s6
	// 		long w1; // $a1
	// 		long w2; // $s1
	// 		long w3; // $s2
	// 		long xoff; // $a1
	// 		long yoff; // $a2
	// 		int i1; // $a0
	// 		int i2; // $s4
	// 		int i3; // $s5
	/* end block 1 */
	// End offset: 0x8002D1CC
	// End Line: 702

	/* begin block 2 */
		// Start line: 1438
	/* end block 2 */
	// End Line: 1439

	/* begin block 3 */
		// Start line: 1443
	/* end block 3 */
	// End Line: 1444

void FONT_DrawChar2D(uchar c,long x,long y)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined3 in_register_00000011;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  
  iVar1 = -x;
  iVar2 = iVar1;
  if ((-1 < unaff_s4) && (iVar2 = (int)(char)(&DAT_800c8746)[unaff_s4 * 4], iVar2 < 0)) {
    iVar2 = -iVar2;
  }
  iVar3 = iVar1;
  if ((-1 < unaff_s5) && (iVar3 = (int)(char)(&DAT_800c8746)[unaff_s5 * 4], iVar3 < 0)) {
    iVar3 = -iVar3;
  }
  if (iVar2 < iVar1) {
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
  }
  else {
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
  }
  if (-1 < CONCAT31(in_register_00000011,c)) {
    FUN_8002cd2c(CONCAT31(in_register_00000011,c),
                 unaff_s7 + ((int)(iVar3 + x + ((uint)(iVar3 + x) >> 0x1f)) >> 1));
  }
  if (-1 < unaff_s4) {
    FUN_8002cd2c();
  }
  if (-1 < unaff_s5) {
    FUN_8002cd2c();
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ FONT_CharSpacing(char c /*$a0*/, long fontXSize /*$s0*/)
 // line 704, offset 0x8002d1fc
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x8002D1FC
		// Variables:
	// 		long index; // $a0
	// 		long w; // $v1
	// 		long w1; // $a2
	// 		long w2; // $a1
	// 		long w3; // $v1
	// 		char i1; // $v1
	// 		char i2; // $a3
	// 		char i3; // $t1

		/* begin block 1.1 */
			// Start line: 717
			// Start offset: 0x8002D230
			// Variables:
		// 		int holdw; // $a0
		// 		int holdw2; // $a0
		/* end block 1.1 */
		// End offset: 0x8002D32C
		// End Line: 741
	/* end block 1 */
	// End offset: 0x8002D330
	// End Line: 746

	/* begin block 2 */
		// Start line: 1531
	/* end block 2 */
	// End Line: 1532

long FONT_CharSpacing(char c,long fontXSize)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_a2;
  char in_a3;
  int in_t0;
  char in_t1;
  
  iVar2 = (int)*(char *)((int)in_a3 * 4 + in_t0 + 2);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar3 = in_a2;
  if (-1 < (int)in_a3) {
    iVar3 = iVar2;
  }
  iVar2 = (int)*(char *)((int)in_t1 * 4 + in_t0 + 2);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = in_a2;
  if (-1 < (int)in_t1) {
    iVar1 = iVar2;
  }
  if (iVar3 < in_a2) {
    if (in_a2 <= iVar1) {
      return iVar1 + 1;
    }
  }
  else {
    in_a2 = iVar3;
    if (iVar3 <= iVar1) {
      return iVar1 + 1;
    }
  }
  return in_a2 + 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_AddCharToBuffer(char c /*$a3*/, long x /*$a1*/, long y /*$a2*/)
 // line 1059, offset 0x8002d340
	/* begin block 1 */
		// Start line: 1060
		// Start offset: 0x8002D340
		// Variables:
	// 		struct FontChar *fontChar; // $a0
	/* end block 1 */
	// End offset: 0x8002D3A4
	// End Line: 1079

	/* begin block 2 */
		// Start line: 2118
	/* end block 2 */
	// End Line: 2119

void FONT_AddCharToBuffer(char c,long x,long y)

{
  MultiSpline **ppMVar1;
  
  ppMVar1 = &theCamera.savedCinematic[1].posSpline;
  if ((char)theCamera.savedCinematic[1].posSpline != '\0') {
    do {
      if ((uint)*(byte *)ppMVar1 - 0x41 < 0x1a) {
        *(byte *)ppMVar1 = *(byte *)ppMVar1 + 0x20;
      }
      ppMVar1 = (MultiSpline **)((int)ppMVar1 + 1);
    } while (*(byte *)ppMVar1 != 0);
  }
  FUN_8002d514(0x800d0204);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_Print(char *fmt /*stack 0*/)
 // line 1096, offset 0x8002d3ac
	/* begin block 1 */
		// Start line: 1097
		// Start offset: 0x8002D3AC
		// Variables:
	// 		char *hold; // $v1
	// 		void *ap; // $s0
	/* end block 1 */
	// End offset: 0x8002D420
	// End Line: 1111

	/* begin block 2 */
		// Start line: 2007
	/* end block 2 */
	// End Line: 2008

void FONT_Print(char *fmt)

{
  undefined auStackX4 [12];
  
  FUN_8007422c(0x800d0204,fmt,auStackX4);
  FUN_8002d514(0x800d0204,auStackX4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_Print2(char *fmt /*stack 0*/)
 // line 1115, offset 0x8002d43c
	/* begin block 1 */
		// Start line: 1116
		// Start offset: 0x8002D43C
		// Variables:
	// 		void *ap; // $s0
	/* end block 1 */
	// End offset: 0x8002D43C
	// End Line: 1116

	/* begin block 2 */
		// Start line: 2060
	/* end block 2 */
	// End Line: 2061

void FONT_Print2(char *fmt)

{
  uint in_v0;
  byte *pbVar1;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  while (pbVar1 = (byte *)(unaff_s3 + unaff_s0), in_v0 != 0) {
    unaff_s0 = unaff_s0 + 1;
    FUN_8002d160((uint)*pbVar1,8);
    in_v0 = (uint)(unaff_s0 < unaff_s2);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FONT_GetStringWidth(char *str /*$s3*/)
 // line 1168, offset 0x8002d48c
	/* begin block 1 */
		// Start line: 1169
		// Start offset: 0x8002D48C
		// Variables:
	// 		int w; // $s1
	// 		int len; // $s2
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8002D4E0
	// End Line: 1176

	/* begin block 2 */
		// Start line: 2336
	/* end block 2 */
	// End Line: 2337

int FONT_GetStringWidth(char *str)

{
  byte bVar1;
  uint in_v0;
  int in_v1;
  int iVar2;
  
  fontTracker.font_buffer._1060_4_ = in_v0;
  if (in_v1 != 0) {
    iVar2 = -0x7ff2fbf4;
    fontTracker.font_buffer._1060_4_ = in_v0;
    do {
      bVar1 = *(byte *)(iVar2 + 4);
      in_v0 = (uint)bVar1;
      if ((bVar1 != 0x20) && (bVar1 != 0x40)) {
        in_v0 = FUN_8002cce0(iVar2);
      }
      in_v1 = in_v1 + -1;
      iVar2 = iVar2 + 6;
    } while (in_v1 != 0);
    fontTracker.font_buffer[177]._2_4_ = 0;
  }
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_Flush()
 // line 1212, offset 0x8002d500
	/* begin block 1 */
		// Start line: 1213
		// Start offset: 0x8002D500
		// Variables:
	// 		long i; // $s1
	// 		struct FontChar *fontChar; // $s0
	/* end block 1 */
	// End offset: 0x8002D574
	// End Line: 1239

	/* begin block 2 */
		// Start line: 2424
	/* end block 2 */
	// End Line: 2425

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FONT_Flush(void)

{
  undefined4 in_a0;
  int in_a1;
  
  fontTracker.font_buffer[176]._0_4_ = in_a0;
  fontTracker.font_buffer._1060_4_ = in_a1 >> 0x10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FONT_SetCursor(short x /*$a0*/, short y /*$a1*/)
 // line 1241, offset 0x8002d590
	/* begin block 1 */
		// Start line: 2263
	/* end block 1 */
	// End Line: 2264

	/* begin block 2 */
		// Start line: 2267
	/* end block 2 */
	// End Line: 2268

void FONT_SetCursor(short x,short y)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 in_register_00000012;
  uint unaff_s1;
  byte *unaff_s2;
  uint *unaff_s3;
  int *unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  uVar3 = CONCAT22(in_register_00000012,x);
code_r0x8002d590:
  bVar1 = unaff_s2[2];
  FUN_8002d2a4(uVar3,*unaff_s3,*unaff_s4);
  FUN_8002d2a4(0x40,(uint)bVar1 - 0x40 & 0xff,unaff_s1 - 0x40 & 0xff);
  unaff_s2 = unaff_s2 + 3;
  do {
    bVar1 = *unaff_s2;
    if (bVar1 == 0) {
      return;
    }
    if ((uint)bVar1 == unaff_s5) {
      iVar2 = *unaff_s4;
      *unaff_s3 = (uint)bVar1;
      *unaff_s4 = iVar2 + 0xc;
    }
    else {
      uVar3 = 0x40;
      if (bVar1 == 0x40) break;
      if (bVar1 == 0x24) {
        *unaff_s3 = unaff_s5;
        *unaff_s4 = 0x10;
      }
      else {
        if (bVar1 == 0xd) {
          *unaff_s3 = unaff_s5;
        }
        else {
          if (bVar1 == 9) {
            *unaff_s3 = *unaff_s3 + unaff_s6;
          }
          else {
            if ((bVar1 == 0x20) || (bVar1 == 0x5f)) {
              *unaff_s3 = *unaff_s3 + unaff_s7;
            }
            else {
              FUN_8002d2a4((uint)*unaff_s2,*unaff_s3,*unaff_s4);
              iVar2 = FUN_8002d160((uint)*unaff_s2,unaff_s8 >> 0x10);
              *unaff_s3 = *unaff_s3 + iVar2;
            }
          }
        }
      }
    }
    unaff_s2 = unaff_s2 + 1;
  } while( true );
  unaff_s1 = (uint)unaff_s2[1];
  goto code_r0x8002d590;
}



// autogenerated function stub: 
// void /*$ra*/ FONT_VaReallyPrint(char *fmt /*$a0*/, void *ap /*$a1*/)
void FONT_VaReallyPrint(char *fmt, void *ap)
{ // line 1280, offset 0x8002d5b0
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x8002D5B0
		// Variables:
			char *p; // $s2
			long *xpos; // $s3
			long *ypos; // $s4

		/* begin block 1.1 */
			// Start line: 1302
			// Start offset: 0x8002D628
			// Variables:
				unsigned char w; // $s0
				unsigned char h; // $s1
		/* end block 1.1 */
		// End offset: 0x8002D628
		// End Line: 1304
	/* end block 1 */
	// End offset: 0x8002D710
	// End Line: 1334

	/* begin block 2 */
		// Start line: 2560
	/* end block 2 */
	// End Line: 2561

}


// autogenerated function stub: 
// void /*$ra*/ FONT_FontPrintCentered(char *text /*$s1*/, long y /*$s0*/)
void FONT_FontPrintCentered(char *text, long y)
{ // line 1336, offset 0x8002d740
	/* begin block 1 */
		// Start line: 2495
	/* end block 1 */
	// End Line: 2496

}


// autogenerated function stub: 
// void /*$ra*/ FONT_SetColorIndex(int color /*$a0*/)
void FONT_SetColorIndex(int color)
{ // line 1343, offset 0x8002d798
	/* begin block 1 */
		// Start line: 2509
	/* end block 1 */
	// End Line: 2510

	/* begin block 2 */
		// Start line: 2511
	/* end block 2 */
	// End Line: 2512

}


// decompiled code
// original method signature: 
// void /*$ra*/ FONT_SetColorIndexCol(int color /*$a0*/, int r /*$a1*/, int g /*$a2*/, int b /*$a3*/)
 // line 1349, offset 0x8002d7a4
	/* begin block 1 */
		// Start line: 1351
		// Start offset: 0x8002D7A4
		// Variables:
	// 		struct font_color_t *fcol; // $v0
	/* end block 1 */
	// End offset: 0x8002D7A4
	// End Line: 1354

	/* begin block 2 */
		// Start line: 2521
	/* end block 2 */
	// End Line: 2522

	/* begin block 3 */
		// Start line: 2522
	/* end block 3 */
	// End Line: 2523

	/* begin block 4 */
		// Start line: 2525
	/* end block 4 */
	// End Line: 2526

void FONT_SetColorIndexCol(int color,int r,int g,int b)

{
                    /* WARNING: Subroutine does not return */
  FUN_800bcdac(color,r,0x47c);
}





