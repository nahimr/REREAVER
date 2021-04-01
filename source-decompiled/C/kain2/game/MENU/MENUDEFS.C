#include "THISDUST.H"
#include "MENUDEFS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ do_check_controller(void *gt /*$a0*/)
 // line 164, offset 0x800b8938
	/* begin block 1 */
		// Start line: 328
	/* end block 1 */
	// End Line: 329

void do_check_controller(void *gt)

{
  FUN_800b7e24();
  FUN_800b85e4(gt);
  FUN_800b8744(gt);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_push_menu(void *gt /*$a0*/, long menuparam /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 180, offset 0x800b896c
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x800B896C
	/* end block 1 */
	// End offset: 0x800B8994
	// End Line: 194

	/* begin block 2 */
		// Start line: 360
	/* end block 2 */
	// End Line: 361

int do_push_menu(void *gt,long menuparam,menu_ctrl_t ctrl)

{
  int iVar1;
  
  iVar1 = 1;
  if (((((menuparam & 1U) == 0) && (iVar1 = 2, (menuparam & 2U) == 0)) &&
      (iVar1 = 3, (menuparam & 4U) == 0)) && (iVar1 = 4, (menuparam & 8U) == 0)) {
    if (((menuparam & 0x80U) == 0) || ((*(uint *)((int)gt + 0x48) & 0x300) != 0)) {
      iVar1 = 6;
      if (((menuparam & 0x10U) == 0) && (iVar1 = 0, (menuparam & 0x4000U) != 0)) {
        iVar1 = 7;
      }
    }
    else {
      iVar1 = 5;
    }
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_pop_menu(void *gt /*$a0*/, long param /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 196, offset 0x800b89a4
	/* begin block 1 */
		// Start line: 401
	/* end block 1 */
	// End Line: 402

int do_pop_menu(void *gt,long param,menu_ctrl_t ctrl)

{
  int in_v0;
  int iVar1;
  
  if ((in_v0 == 0) || ((*(uint *)((int)gt + 0x48) & 0x300) != 0)) {
    iVar1 = 6;
    if (((param & 0x10U) == 0) && (iVar1 = 0, (param & 0x4000U) != 0)) {
      iVar1 = 7;
    }
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_function(void *gt /*$a0*/, long fnparam /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 207, offset 0x800b89dc
	/* begin block 1 */
		// Start line: 420
	/* end block 1 */
	// End Line: 421

	/* begin block 2 */
		// Start line: 426
	/* end block 2 */
	// End Line: 427

int do_function(void *gt,long fnparam,menu_ctrl_t ctrl)

{
  return 5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_start_game(void *gt /*$s0*/, long parameter /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 221, offset 0x800b8a10
	/* begin block 1 */
		// Start line: 448
	/* end block 1 */
	// End Line: 449

	/* begin block 2 */
		// Start line: 457
	/* end block 2 */
	// End Line: 458

int do_start_game(void *gt,long parameter,menu_ctrl_t ctrl)

{
  int iVar1;
  int unaff_s0;
  
  if (unaff_s0 != 0) {
    FUN_8002d6fc();
  }
  iVar1 = FUN_8002d3a0();
  if (unaff_s0 != 0) {
    iVar1 = FUN_8002d6fc(0);
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_save_menu(void *gt /*$a0*/, long parameter /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 250, offset 0x800b8a74
	/* begin block 1 */
		// Start line: 515
	/* end block 1 */
	// End Line: 516

int do_save_menu(void *gt,long parameter,menu_ctrl_t ctrl)

{
  int iVar1;
  
  iVar1 = -0x7ff35024;
  SOUND_SfxOn();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ womp_background(char *tim_path /*$s0*/)
 // line 277, offset 0x800b8ab0
	/* begin block 1 */
		// Start line: 553
	/* end block 1 */
	// End Line: 554

	/* begin block 2 */
		// Start line: 573
	/* end block 2 */
	// End Line: 574

void womp_background(char *tim_path)

{
  int in_v1;
  undefined4 uVar1;
  
  uVar1 = 200;
  if (in_v1 == 6) {
    uVar1 = 0xaa;
  }
  FUN_80031c60(uVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ play_movie(char *name /*$s0*/)
 // line 291, offset 0x800b8ae8
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x800B8AE8
	/* end block 1 */
	// End offset: 0x800B8B20
	// End Line: 311

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

void play_movie(char *name)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menudefs_reset_hack_attract_mode()
 // line 331, offset 0x800b8b30
	/* begin block 1 */
		// Start line: 688
	/* end block 1 */
	// End Line: 689

	/* begin block 2 */
		// Start line: 689
	/* end block 2 */
	// End Line: 690

/* WARNING: Unknown calling convention yet parameter storage is locked */

void menudefs_reset_hack_attract_mode(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_hack_attract()
 // line 336, offset 0x800b8b54
	/* begin block 1 */
		// Start line: 698
	/* end block 1 */
	// End Line: 699

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

/* WARNING: Unknown calling convention yet parameter storage is locked */

void check_hack_attract(void)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ get_volume(void *gt /*$a0*/, enum sfx_t sfx /*$a1*/)
 // line 377, offset 0x800b8bc4
	/* begin block 1 */
		// Start line: 379
		// Start offset: 0x800B8BC4
		// Variables:
	// 		int raw; // $a2
	/* end block 1 */
	// End offset: 0x800B8C00
	// End Line: 385

	/* begin block 2 */
		// Start line: 784
	/* end block 2 */
	// End Line: 785

	/* begin block 3 */
		// Start line: 785
	/* end block 3 */
	// End Line: 786

	/* begin block 4 */
		// Start line: 786
	/* end block 4 */
	// End Line: 787

int get_volume(void *gt,sfx_t sfx)

{
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_volume(enum sfx_t sfx /*$a2*/, int cooked /*$a1*/)
 // line 388, offset 0x800b8c30
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x800B8C30
		// Variables:
	// 		int raw; // $a0
	/* end block 1 */
	// End offset: 0x800B8CAC
	// End Line: 397

	/* begin block 2 */
		// Start line: 806
	/* end block 2 */
	// End Line: 807

	/* begin block 3 */
		// Start line: 807
	/* end block 3 */
	// End Line: 808

void set_volume(sfx_t sfx,int cooked)

{
                    /* WARNING: Subroutine does not return */
  FUN_8004fe84();
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_sound_adjust(void *gt /*$a0*/, long sfxparam /*$s0*/, enum menu_ctrl_t ctrl /*$s1*/)
 // line 399, offset 0x800b8cbc
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x800B8CBC
		// Variables:
	// 		int volume; // $a1
	/* end block 1 */
	// End offset: 0x800B8D24
	// End Line: 420

	/* begin block 2 */
		// Start line: 829
	/* end block 2 */
	// End Line: 830

int do_sound_adjust(void *gt,long sfxparam,menu_ctrl_t ctrl)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = hack_attract;
  if ((0 < hack_attract) &&
     (bVar1 = hack_attract + 2000U < draw[1].dr_env.code[7], uVar2 = (uint)bVar1, bVar1)) {
    hack_attract = 1;
    FUN_800b8c54(*(undefined4 *)(&DAT_800cb00c + hack_attract_movie * 4));
    uVar2 = hack_attract_movie + 1U & 3;
    hack_attract = draw[1].dr_env.code[7];
    hack_attract_movie = uVar2;
  }
  return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sound_item(void *gt /*$s0*/, char *text /*$s2*/, enum sfx_t sfx /*$s1*/)
 // line 422, offset 0x800b8d38
	/* begin block 1 */
		// Start line: 423
		// Start offset: 0x800B8D38
	/* end block 1 */
	// End offset: 0x800B8D38
	// End Line: 423

	/* begin block 2 */
		// Start line: 875
	/* end block 2 */
	// End Line: 876

void sound_item(void *gt,char *text,sfx_t sfx)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menudefs_toggle_dualshock(void *gt /*$a0*/, long param /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 1048, offset 0x800b8d9c
	/* begin block 1 */
		// Start line: 2127
	/* end block 1 */
	// End Line: 2128

int menudefs_toggle_dualshock(void *gt,long param,menu_ctrl_t ctrl)

{
  int iVar1;
  
  if ((undefined *)gt == &DAT_00000001) {
    iVar1 = FUN_8003ff48();
  }
  else {
    iVar1 = 2;
    if (gt == (void *)0x0) {
      iVar1 = FUN_8003ff7c();
    }
    else {
      if ((undefined *)gt == &DAT_00000002) {
        SOUND_SetMusicVolume((param * 0x7f + 9) / 10);
      }
    }
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ options_menu(void *gt /*$s1*/, int index /*$s2*/)
 // line 1066, offset 0x800b8e00
	/* begin block 1 */
		// Start line: 1067
		// Start offset: 0x800B8E00
		// Variables:
	// 		static int wasDualShock; // offset 0x0
	// 		int dualShock; // $s0
	/* end block 1 */
	// End offset: 0x800B8F30
	// End Line: 1128

	/* begin block 2 */
		// Start line: 2163
	/* end block 2 */
	// End Line: 2164

int options_menu(void *gt,int index)

{
  int iVar1;
  
  iVar1 = FUN_8003ff48();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ main_menu(void *gt /*$s0*/, int index /*$s1*/)
 // line 1145, offset 0x800b8f48
	/* begin block 1 */
		// Start line: 2321
	/* end block 1 */
	// End Line: 2322

int main_menu(void *gt,int index)

{
  FUN_8003146c(gt,0x8000);
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ do_main_menu(void *gt /*$a0*/, long param /*$a1*/, enum menu_ctrl_t ctrl /*$a2*/)
 // line 1180, offset 0x800b904c
	/* begin block 1 */
		// Start line: 2391
	/* end block 1 */
	// End Line: 2392

	/* begin block 2 */
		// Start line: 2392
	/* end block 2 */
	// End Line: 2393

int do_main_menu(void *gt,long param,menu_ctrl_t ctrl)

{
  undefined4 uVar1;
  SavedBasic *unaff_s0;
  int unaff_s1;
  SavedBasic *unaff_s2;
  
  uVar1 = FUN_800b7b80(0xe);
  FUN_800b7d80(*(undefined4 *)(unaff_s1 + 0x20),FUN_800b8b10,0,uVar1);
  if ((unaff_s0 != PTR_ARRAY_800d5a20[0]) && (3 < (int)unaff_s2)) {
    unaff_s2 = unaff_s0 + 2;
  }
  if ((int)unaff_s2 < 0) {
    unaff_s2 = (SavedBasic *)&DAT_00000001;
  }
  PTR_ARRAY_800d5a20[0] = unaff_s0;
  return (int)unaff_s2;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ flashStart()
 // line 1196, offset 0x800b90a0
	/* begin block 1 */
		// Start line: 1197
		// Start offset: 0x800B90A0

		/* begin block 1.1 */
			// Start line: 1225
			// Start offset: 0x800B9120
			// Variables:
		// 		static int counter; // offset 0x98
		// 		int intpl; // $a0
		// 		int fcols[2][3]; // stack offset -40
		// 		int r; // $s2
		// 		int g; // $s1
		// 		int b; // $s0
		/* end block 1.1 */
		// End offset: 0x800B9284
		// End Line: 1247
	/* end block 1 */
	// End offset: 0x800B928C
	// End Line: 1250

	/* begin block 2 */
		// Start line: 2427
	/* end block 2 */
	// End Line: 2428

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * flashStart(void)

{
  char *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menudefs_main_menu(void *gt /*$s0*/, int index /*$s1*/)
 // line 1252, offset 0x800b92a4
	/* begin block 1 */
		// Start line: 2554
	/* end block 1 */
	// End Line: 2555

	/* begin block 2 */
		// Start line: 2555
	/* end block 2 */
	// End Line: 2556

int menudefs_main_menu(void *gt,int index)

{
  int iVar1;
  int iVar2;
  int *in_t4;
  int in_hi;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int iStack00000020;
  int iStack00000024;
  
  iStack00000010 = *in_t4;
  iStack00000014 = in_t4[1];
  iStack00000018 = in_t4[2];
  iStack0000001c = in_t4[3];
  iStack00000020 = in_t4[4];
  iStack00000024 = in_t4[5];
  pvRam800cfaa0 = (void *)((int)gt + ((in_hi + (int)gt >> 5) - ((int)gt >> 0x1f)) * -0x3c);
  if ((int)pvRam800cfaa0 < 10) {
    iVar2 = 0;
  }
  else {
    if ((int)pvRam800cfaa0 < 0x1e) {
      iVar2 = (int)pvRam800cfaa0 + -10;
    }
    else {
      if ((int)pvRam800cfaa0 < 0x28) {
        iVar2 = 0x1000;
        goto LAB_800b9358;
      }
      iVar2 = 0x3c - (int)pvRam800cfaa0;
    }
    iVar2 = (iVar2 << 0xc) / 0x14;
  }
LAB_800b9358:
  iVar1 = 0x1000 - iVar2;
  iVar3 = iStack00000010 * iVar1;
  iVar4 = iStack0000001c * iVar2;
  iVar5 = iStack00000014 * iVar1;
  iVar6 = iStack00000020 * iVar2;
  iVar1 = iStack00000018 * iVar1;
  iVar2 = iStack00000024 * iVar2;
  FUN_8002d6fc(4,iVar6,iVar4,iVar5);
  FUN_8002d708(4,iVar3 + iVar4 >> 0xc,iVar5 + iVar6 >> 0xc,iVar1 + iVar2 >> 0xc);
  iVar2 = FUN_800b7b80(0x22);
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menudefs_confirmexit_menu(void *gt /*$s0*/, int index /*$s1*/)
 // line 1283, offset 0x800b934c
	/* begin block 1 */
		// Start line: 2619
	/* end block 1 */
	// End Line: 2620

int menudefs_confirmexit_menu(void *gt,int index)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int in_hi;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  iVar2 = (in_hi >> 3) - in_v0;
  iVar1 = 0x1000 - iVar2;
  FUN_8002d6fc(4,in_stack_00000020 * iVar2,in_stack_0000001c * iVar2,in_stack_00000014 * iVar1);
  FUN_8002d708(4,in_stack_00000010 * iVar1 + in_stack_0000001c * iVar2 >> 0xc,
               in_stack_00000014 * iVar1 + in_stack_00000020 * iVar2 >> 0xc,
               in_stack_00000018 * iVar1 + in_stack_00000024 * iVar2 >> 0xc);
  iVar1 = FUN_800b7b80(0x22);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menudefs_pause_menu(void *gt /*$s1*/, int index /*$s2*/)
 // line 1294, offset 0x800b93f4
	/* begin block 1 */
		// Start line: 2641
	/* end block 1 */
	// End Line: 2642

int menudefs_pause_menu(void *gt,int index)

{
  int in_v0;
  
  return in_v0;
}





