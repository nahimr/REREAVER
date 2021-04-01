#include "THISDUST.H"
#include "MENU.H"


// decompiled code
// original method signature: 
// int /*$ra*/ menu_data_size()
 // line 83, offset 0x800b7a40
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800B7A40
	/* end block 1 */
	// End offset: 0x800B7A40
	// End Line: 86

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

	/* begin block 3 */
		// Start line: 167
	/* end block 3 */
	// End Line: 168

	/* begin block 4 */
		// Start line: 168
	/* end block 4 */
	// End Line: 169

	/* begin block 5 */
		// Start line: 169
	/* end block 5 */
	// End Line: 170

/* WARNING: Unknown calling convention yet parameter storage is locked */

int menu_data_size(void)

{
  int in_v0;
  
  return (uint)(*(int *)(in_v0 + -0x5028) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_initialize(struct menu_t *menu /*$s0*/, void *opaque /*$s1*/)
 // line 89, offset 0x800b7a48
	/* begin block 1 */
		// Start line: 178
	/* end block 1 */
	// End Line: 179

void menu_initialize(menu_t *menu,void *opaque)

{
  FUN_800ba000(FUN_80038558);
  DAT_800cafd4 = 0;
  if (DAT_800cafd8 != 0) {
    FUN_80058e80();
    DAT_800cafd8 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_format(struct menu_t *menu /*$a0*/, int center /*$a1*/, int xpos /*$a2*/, int ypos /*$a3*/, int width /*stack 16*/, int lineskip /*stack 20*/, int itemskip /*stack 24*/, int border /*stack 28*/)
 // line 97, offset 0x800b7a8c
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800B7A8C

		/* begin block 1.1 */
			// Start line: 98
			// Start offset: 0x800B7A8C
			// Variables:
		// 		struct menu_format_t *fmt; // $a0
		/* end block 1.1 */
		// End offset: 0x800B7A8C
		// End Line: 101
	/* end block 1 */
	// End offset: 0x800B7A8C
	// End Line: 101

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

	/* begin block 3 */
		// Start line: 199
	/* end block 3 */
	// End Line: 200

void menu_format(menu_t *menu,int center,int xpos,int ypos,int width,int lineskip,int itemskip,
                int border)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_set(struct menu_t *menu /*$a0*/, TDRFuncPtr_menu_set1fn fn /*$a1*/)
 // line 115, offset 0x800b7adc
	/* begin block 1 */
		// Start line: 240
	/* end block 1 */
	// End Line: 241

void menu_set(menu_t *menu,TDRFuncPtr_menu_set1fn fn)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_push(struct menu_t *menu /*$a0*/, TDRFuncPtr_menu_push1fn fn /*$a1*/)
 // line 123, offset 0x800b7b00
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x800B7B00

		/* begin block 1.1 */
			// Start line: 127
			// Start offset: 0x800B7B00
			// Variables:
		// 		struct menu_stack_t *stack; // $a0
		/* end block 1.1 */
		// End offset: 0x800B7B00
		// End Line: 127
	/* end block 1 */
	// End offset: 0x800B7B00
	// End Line: 127

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

	/* begin block 3 */
		// Start line: 257
	/* end block 3 */
	// End Line: 258

	/* begin block 4 */
		// Start line: 259
	/* end block 4 */
	// End Line: 260

void menu_push(menu_t *menu,TDRFuncPtr_menu_push1fn fn)

{
  LocalizationHeader *pLVar1;
  LocalizationHeader *pLVar2;
  int iVar3;
  
  pLVar1 = (LocalizationHeader *)FUN_800372ac(menu,6);
  pLVar2 = pLVar1 + 1;
  LocalizationTable = pLVar1;
  if (pLVar1 != (LocalizationHeader *)0x0) {
    voiceList = (XAVoiceListEntry *)((int)&pLVar1->language + pLVar1->XATableOffset);
    iVar3 = 0;
    LocalizationTable = pLVar1;
    LocalStrings = (char **)pLVar2;
    if (0 < pLVar1->numStrings) {
      do {
        iVar3 = iVar3 + 1;
        pLVar2->language = (int)&pLVar1->language + pLVar2->language;
        pLVar2 = (LocalizationHeader *)&pLVar2->numXAfiles;
      } while (iVar3 < pLVar1->numStrings);
    }
    bufferSavedIntroArray64[19] = (SavedBasic *)LocalizationTable->language;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_pop(struct menu_t *menu /*$a0*/)
 // line 134, offset 0x800b7b70
	/* begin block 1 */
		// Start line: 279
	/* end block 1 */
	// End Line: 280

	/* begin block 2 */
		// Start line: 281
	/* end block 2 */
	// End Line: 282

void menu_pop(menu_t *menu)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_item_flags(struct menu_t *menu /*$s2*/, TDRFuncPtr_menu_item_flags1fn fn /*$a1*/, long parameter /*$a2*/, long flags /*$a3*/, char *format /*stack 16*/)
 // line 152, offset 0x800b7b84
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x800B7B84

		/* begin block 1.1 */
			// Start line: 153
			// Start offset: 0x800B7B84
			// Variables:
		// 		struct menu_item_t *item; // $s1
		/* end block 1.1 */
		// End offset: 0x800B7B84
		// End Line: 153
	/* end block 1 */
	// End offset: 0x800B7B84
	// End Line: 153

	/* begin block 2 */
		// Start line: 304
	/* end block 2 */
	// End Line: 305

void menu_item_flags(menu_t *menu,TDRFuncPtr_menu_item_flags1fn fn,long parameter,long flags,
                    char *format)

{
  int in_v1;
  
  if (in_v1 == 0) {
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_item(struct menu_t *menu /*$s2*/, TDRFuncPtr_menu_item1fn fn /*$a1*/, long parameter /*$a2*/, char *format /*stack 12*/)
 // line 170, offset 0x800b7c14
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x800B7C14

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x800B7C14
			// Variables:
		// 		struct menu_item_t *item; // $s1

			/* begin block 1.1.1 */
				// Start line: 181
				// Start offset: 0x800B7C74
			/* end block 1.1.1 */
			// End offset: 0x800B7C74
			// End Line: 183
		/* end block 1.1 */
		// End offset: 0x800B7CA0
		// End Line: 192
	/* end block 1 */
	// End offset: 0x800B7CA0
	// End Line: 193

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

void menu_item(menu_t *menu,TDRFuncPtr_menu_item1fn fn,long parameter,char *format)

{
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  menu->nbytes = parameter;
  *(char **)&menu->stack[0].fn = format;
  *(TDRFuncPtr_menu_item1fn *)&menu->stack[0].format.lineskip = fn;
  menu->stack[0].index = in_stack_00000014;
  menu->stack[0].format.xpos = in_stack_00000018;
  menu->stack[0].format.ypos = in_stack_00000010;
  menu->stack[0].format.itemskip = in_stack_0000001c;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_build(struct menu_t *menu /*$a0*/)
 // line 195, offset 0x800b7cb8
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x800B7CB8

		/* begin block 1.1 */
			// Start line: 196
			// Start offset: 0x800B7CB8
			// Variables:
		// 		struct menu_stack_t *stack; // $s0
		/* end block 1.1 */
		// End offset: 0x800B7CB8
		// End Line: 196
	/* end block 1 */
	// End offset: 0x800B7CB8
	// End Line: 196

	/* begin block 2 */
		// Start line: 403
	/* end block 2 */
	// End Line: 404

void menu_build(menu_t *menu)

{
  int iVar1;
  _func_64 *p_Var2;
  int in_t1;
  
  menu->stack[0].format.xpos = in_t1;
  iVar1 = menu->nbytes;
  p_Var2 = menu->stack[0].fn;
  menu->stack[0].format.ypos = menu->nitems;
  menu->stack[0].format.lineskip = iVar1;
  *(_func_64 **)&menu->stack[0].format.itemskip = p_Var2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DisplayHintBox(int len /*$a0*/, int y /*$a1*/)
 // line 221, offset 0x800b7d10
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x800B7D10
		// Variables:
	// 		struct Extents2d ext; // stack offset -24
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 239
			// Start offset: 0x800B7D48
		/* end block 1.1 */
		// End offset: 0x800B7D48
		// End Line: 239
	/* end block 1 */
	// End offset: 0x800B7E2C
	// End Line: 255

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

void DisplayHintBox(int len,int y)

{
  int in_v0;
  int iVar1;
  int in_a2;
  int in_a3;
  int iVar2;
  int *piVar3;
  int unaff_s2;
  undefined4 in_stack_00000030;
  
  piVar3 = (int *)(unaff_s2 + in_v0 * 0x10 + 0xc0);
  *(int *)(unaff_s2 + 4) = in_v0 + 1;
  piVar3[1] = y;
  piVar3[2] = in_a2;
  iVar1 = *(int *)(unaff_s2 + 8);
  piVar3[3] = in_a3;
  iVar1 = unaff_s2 + iVar1 + 0x180;
  *piVar3 = iVar1;
  FUN_8007422c(iVar1,in_stack_00000030,&stack0x00000034);
  iVar2 = *(int *)(unaff_s2 + 8);
  iVar1 = FUN_800bd7a4(*piVar3);
  *(int *)(unaff_s2 + 8) = iVar2 + 1 + iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DisplayMenuBox(int x0 /*$a0*/, int x1 /*$a1*/, int y0 /*$a2*/, int y1 /*$a3*/)
 // line 257, offset 0x800b7e3c
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x800B7E3C
		// Variables:
	// 		struct Extents2d ext; // stack offset -56
	// 		static int dy[16]; // offset 0x0
	// 		int i; // $s3
	// 		int j; // $s6
	// 		int k; // $s2
	// 		int slice0; // $s7
	// 		unsigned long **ot; // $s5
	// 		struct _PrimPool *primPool; // $s4

		/* begin block 1.1 */
			// Start line: 276
			// Start offset: 0x800B7ED4

			/* begin block 1.1.1 */
				// Start line: 278
				// Start offset: 0x800B7EE4
			/* end block 1.1.1 */
			// End offset: 0x800B7EE4
			// End Line: 278
		/* end block 1.1 */
		// End offset: 0x800B7FDC
		// End Line: 290
	/* end block 1 */
	// End offset: 0x800B8044
	// End Line: 300

	/* begin block 2 */
		// Start line: 552
	/* end block 2 */
	// End Line: 553

void DisplayMenuBox(int x0,int x1,int y0,int y1)

{
  int iVar1;
  undefined4 uVar2;
  int in_v1;
  
  iVar1 = x0 + in_v1 * 0x24 + 0xc;
  uVar2 = (**(code **)(iVar1 + -0x24))(*(undefined4 *)(x0 + 900),*(undefined4 *)(iVar1 + -0x20));
  *(undefined4 *)(iVar1 + -0x20) = uVar2;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menu_draw_item(struct menu_t *menu /*$a0*/, int ypos /*stack 4*/, int xadj /*stack 8*/, int yadj /*$a3*/, char *text /*stack 16*/, int color /*stack 20*/, long flags /*stack 24*/, struct Extents2d *e /*stack 28*/)
 // line 311, offset 0x800b8074
	/* begin block 1 */
		// Start line: 312
		// Start offset: 0x800B8074
		// Variables:
	// 		struct menu_format_t *fmt; // stack offset -64
	// 		int numColumns; // $a1
	// 		int i; // $v1
	// 		int texLen; // $a0
	// 		int columnWidth; // $fp
	// 		char *columnText; // $a1
	// 		char tmpBuff[256]; // stack offset -320
	// 		char *lineText; // $s1
	// 		int columnYPos; // $s5
	// 		int maxColumnYPos; // stack offset -60
	// 		int center; // stack offset -56
	// 		int leftEdge; // stack offset -52
	// 		int xpos; // $s4

		/* begin block 1.1 */
			// Start line: 403
			// Start offset: 0x800B823C
			// Variables:
		// 		char *eol; // $s6

			/* begin block 1.1.1 */
				// Start line: 410
				// Start offset: 0x800B8260
				// Variables:
			// 		char *eop; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 412
					// Start offset: 0x800B8278
					// Variables:
				// 		char *tmp; // $s0
				// 		int wd; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800B82B8
				// End Line: 427

				/* begin block 1.1.1.2 */
					// Start line: 434
					// Start offset: 0x800B82E0
				/* end block 1.1.1.2 */
				// End offset: 0x800B8320
				// End Line: 440

				/* begin block 1.1.1.3 */
					// Start line: 443
					// Start offset: 0x800B8328
					// Variables:
				// 		int wd; // $s0
				/* end block 1.1.1.3 */
				// End offset: 0x800B8378
				// End Line: 450
			/* end block 1.1.1 */
			// End offset: 0x800B838C
			// End Line: 453
		/* end block 1.1 */
		// End offset: 0x800B83A4
		// End Line: 457
	/* end block 1 */
	// End offset: 0x800B8444
	// End Line: 478

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

int menu_draw_item(menu_t *menu,int ypos,int xadj,int yadj,char *text,int color,long flags,
                  Extents2d *e)

{
  int in_t0;
  int *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int iVar1;
  int unaff_s3;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000044;
  
  do {
    uStack00000020 = 0;
    uStack00000024 = 0;
    uStack00000028 = 0;
    uStack0000002c = 0;
    FUN_8002a8c0(menu,in_t0 - ypos,xadj + unaff_s2,in_t0 - yadj);
    uStack00000020 = 0;
    uStack00000024 = 0;
    uStack00000028 = 0;
    uStack0000002c = 0;
    FUN_8002a8c0(in_stack_0000003c - unaff_s3,in_stack_00000044 - *unaff_s0,
                 in_stack_0000003c - unaff_s2,in_stack_00000044 - *unaff_s1);
    iVar1 = unaff_s2 + 1;
    unaff_s3 = unaff_s2;
    if (0xe < unaff_s2) {
      do {
        unaff_s6 = unaff_s6 + 1;
        uStack00000020 = 0;
        uStack00000024 = 0;
        uStack00000028 = 0;
        uStack0000002c = 0;
        FUN_8002a8c0(in_stack_00000038 + 0xf,in_stack_00000044,in_stack_0000003c + -0xf,
                     in_stack_00000044);
        if (unaff_s6 >= 2) {
          return (uint)(unaff_s6 < 2);
        }
        iVar1 = unaff_s7 + 1;
        unaff_s3 = unaff_s7;
      } while (0xe < unaff_s7);
    }
    unaff_s0 = (int *)(unaff_s3 * 4 + unaff_s8);
    unaff_s1 = (int *)(iVar1 * 4 + unaff_s8);
    ypos = *unaff_s0;
    yadj = *unaff_s1;
    menu = (menu_t *)(in_stack_00000038 + unaff_s3);
    xadj = in_stack_00000038;
    in_t0 = in_stack_00000044;
    unaff_s2 = iVar1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_draw(struct menu_t *menu /*$s2*/)
 // line 481, offset 0x800b8478
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x800B8478

		/* begin block 1.1 */
			// Start line: 482
			// Start offset: 0x800B8478
			// Variables:
		// 		struct Extents2d ext; // stack offset -48
		// 		struct menu_stack_t *stack; // $s6
		// 		int index; // $s5
		// 		int ypos; // $s3
		// 		int i; // $s0

			/* begin block 1.1.1 */
				// Start line: 496
				// Start offset: 0x800B851C
				// Variables:
			// 		struct menu_item_t *item; // $v1
			// 		int color; // $t0
			/* end block 1.1.1 */
			// End offset: 0x800B8540
			// End Line: 504
		/* end block 1.1 */
		// End offset: 0x800B85B0
		// End Line: 517
	/* end block 1 */
	// End offset: 0x800B85B0
	// End Line: 518

	/* begin block 2 */
		// Start line: 1118
	/* end block 2 */
	// End Line: 1119

void menu_draw(menu_t *menu)

{
  undefined *puVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  int unaff_s0;
  undefined *puVar4;
  undefined *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  int *unaff_s7;
  int unaff_s8;
  int in_stack_00000110;
  int in_stack_00000114;
  int in_stack_00000118;
  int in_stack_0000011c;
  int in_stack_00000120;
  int in_stack_00000154;
  int in_stack_00000158;
  undefined4 in_stack_00000164;
  
code_r0x800b8478:
  if (unaff_s0 < in_v0) {
    *unaff_s7 = unaff_s0;
  }
  iVar2 = unaff_s7[1];
  iVar3 = unaff_s4 + unaff_s3;
  do {
    if (iVar2 < iVar3) {
      unaff_s7[1] = iVar3;
    }
    unaff_s5 = unaff_s5 + *(int *)(in_stack_00000110 + 8);
    if (unaff_s2 == (undefined *)0x0) goto LAB_800b8508;
    puVar4 = unaff_s2 + 1;
    *unaff_s2 = 0x20;
    while (puVar4 == (undefined *)0x0) {
LAB_800b8508:
      if (unaff_s6 == (undefined *)0x0) {
LAB_800b851c:
        in_stack_00000120 = in_stack_00000120 + unaff_s8;
        iVar2 = FUN_800c0fe8(0,0x800cfc38);
        iVar3 = in_stack_00000154;
        if (in_stack_00000114 < unaff_s5) {
          in_stack_00000114 = unaff_s5;
        }
        if (iVar2 == 0) {
          if (unaff_s7[3] < in_stack_00000114) {
            unaff_s7[3] = in_stack_00000114;
          }
          return;
        }
        unaff_s4 = in_stack_0000011c + in_stack_00000158 + in_stack_00000120;
        if (in_stack_00000118 != 0) {
          unaff_s4 = unaff_s4 + (unaff_s8 >> 1);
        }
        if (in_stack_00000154 < unaff_s7[2]) {
          unaff_s7[2] = in_stack_00000154;
        }
        FUN_800bd564(&stack0x00000010);
        puVar4 = &stack0x00000010;
      }
      else {
        puVar4 = unaff_s6 + 1;
        *unaff_s6 = 10;
        iVar3 = unaff_s5;
        if (puVar4 == (undefined *)0x0) goto LAB_800b851c;
      }
      unaff_s6 = (undefined *)FUN_800bd524(puVar4,10);
      unaff_s5 = iVar3;
      if (unaff_s6 != (undefined *)0x0) {
        *unaff_s6 = 0;
        unaff_s5 = iVar3;
      }
    }
    unaff_s2 = (undefined *)FUN_800bd524(puVar4,0x20);
    if (unaff_s2 != (undefined *)0x0) {
      do {
        puVar1 = (undefined *)FUN_800bd524(unaff_s2 + 1,0x20);
        if (puVar1 != (undefined *)0x0) {
          *puVar1 = 0;
        }
        iVar3 = FUN_800b8a50(puVar4);
        if (puVar1 != (undefined *)0x0) {
          *puVar1 = 0x20;
        }
      } while ((iVar3 <= unaff_s8) && (unaff_s2 = puVar1, puVar1 != (undefined *)0x0));
      if (unaff_s2 != (undefined *)0x0) {
        *unaff_s2 = 0;
      }
    }
    if (in_stack_00000118 != 0) break;
    iVar3 = FUN_800b8a50(puVar4);
    FUN_800b89e8(unaff_s4,unaff_s5,puVar4,in_stack_00000164);
    if (unaff_s4 < *unaff_s7) {
      *unaff_s7 = unaff_s4;
    }
    iVar2 = unaff_s7[1];
    iVar3 = unaff_s4 + iVar3;
  } while( true );
  iVar3 = FUN_800b8a50(puVar4);
  unaff_s3 = iVar3 >> 1;
  unaff_s0 = unaff_s4 - unaff_s3;
  FUN_800b89e8(unaff_s0,unaff_s5,puVar4,in_stack_00000164);
  in_v0 = *unaff_s7;
  goto code_r0x800b8478;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_run(struct menu_t *menu /*$s2*/)
 // line 524, offset 0x800b85d8
	/* begin block 1 */
		// Start line: 525
		// Start offset: 0x800B85D8
		// Variables:
	// 		enum menu_ctrl_t ctrl; // $s1
	// 		struct menu_stack_t *stack; // $s4
	// 		int index; // $s0
	// 		struct menu_item_t *item; // $s3

		/* begin block 1.1 */
			// Start line: 546
			// Start offset: 0x800B8640
			// Variables:
		// 		enum menu_sound_t sound; // $v0
		/* end block 1.1 */
		// End offset: 0x800B8674
		// End Line: 559
	/* end block 1 */
	// End offset: 0x800B87A8
	// End Line: 588

	/* begin block 2 */
		// Start line: 1239
	/* end block 2 */
	// End Line: 1240

void menu_run(menu_t *menu)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_process(struct menu_t *menu /*$s0*/)
 // line 592, offset 0x800b87c8
	/* begin block 1 */
		// Start line: 1379
	/* end block 1 */
	// End Line: 1380

void menu_process(menu_t *menu)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int unaff_s0;
  uint unaff_s1;
  int *unaff_s2;
  int unaff_s4;
  
  if (in_v0 == 0) {
    if (unaff_s1 == 2) {
      unaff_s0 = (unaff_s0 + 1) % unaff_s2[1];
      iVar1 = unaff_s2[unaff_s0 * 4 + 0x31];
      while (iVar1 == 0) {
        unaff_s0 = (unaff_s0 + 1) % unaff_s2[1];
        iVar1 = unaff_s2[unaff_s0 * 4 + 0x31];
      }
    }
    else {
      if (unaff_s1 < 3) {
        if (unaff_s1 == 1) {
          iVar2 = unaff_s2[1];
          unaff_s0 = (unaff_s0 + iVar2 + -1) % iVar2;
          iVar1 = unaff_s2[unaff_s0 * 4 + 0x31];
          while (iVar1 == 0) {
            unaff_s0 = (unaff_s0 + iVar2 + -1) % iVar2;
            iVar1 = unaff_s2[unaff_s0 * 4 + 0x31];
          }
        }
      }
      else {
        if ((unaff_s1 == 6) && (1 < *unaff_s2)) {
          FUN_800b8a70(5);
          FUN_800b7cdc();
        }
      }
    }
    if (unaff_s0 != *(int *)(unaff_s4 + 4)) {
      FUN_800b8a70(2);
    }
    *(int *)(unaff_s4 + 4) = unaff_s0;
  }
  else {
    FUN_800b8a70();
  }
  return;
}





