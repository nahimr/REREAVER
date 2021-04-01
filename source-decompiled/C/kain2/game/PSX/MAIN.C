#include "THISDUST.H"
#include "MAIN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ClearDisplay()
 // line 136, offset 0x80037ef8
	/* begin block 1 */
		// Start line: 272
	/* end block 1 */
	// End Line: 273

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearDisplay(void)

{
  int in_v1;
  
  FUN_800bad08(loadStatus.compEndBytes * 0x10 + in_v1);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ screen_to_vram(long *screen /*$a0*/, int buffer /*$a1*/)
 // line 150, offset 0x80037fb4
	/* begin block 1 */
		// Start line: 302
	/* end block 1 */
	// End Line: 303

void screen_to_vram(long *screen,int buffer)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ show_screen(char *name /*$a0*/)
 // line 159, offset 0x80037fe4
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x80037FE4
		// Variables:
	// 		long *screen; // $s0
	/* end block 1 */
	// End offset: 0x80038018
	// End Line: 167

	/* begin block 2 */
		// Start line: 324
	/* end block 2 */
	// End Line: 325

void show_screen(char *name)

{
  undefined4 in_a1;
  
  FUN_80037e90(name,in_a1,2);
  FUN_800b7a4c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ play_movie(char *name /*$s0*/)
 // line 214, offset 0x80038028
	/* begin block 1 */
		// Start line: 435
	/* end block 1 */
	// End Line: 436

void play_movie(char *name)

{
  byte bVar1;
  uint in_v1;
  byte *in_a1;
  byte *pbVar2;
  byte *pbVar3;
  int in_a3;
  
  pbVar2 = (byte *)name;
  if (in_a3 != 10) {
    while (in_v1 != 0xd) {
      in_a1 = in_a1 + 1;
      pbVar3 = (byte *)name;
      if ((in_v1 | 0x20) == ((uint)*pbVar2 | 0x20)) {
        pbVar3 = pbVar2 + 1;
      }
      if (*pbVar3 == 0) {
        return;
      }
      bVar1 = *in_a1;
      in_v1 = (uint)bVar1;
      if (bVar1 == 0) {
        return;
      }
      pbVar2 = pbVar3;
      if (bVar1 == 10) {
        return;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMainTracker(struct MainTracker *mainTracker /*$a0*/)
 // line 236, offset 0x80038070
	/* begin block 1 */
		// Start line: 479
	/* end block 1 */
	// End Line: 480

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

void InitMainTracker(MainTracker *mainTracker)

{
  uint uVar1;
  byte *in_a1;
  MainTracker *pMVar2;
  MainTracker *in_a2;
  uint in_a3;
  uint in_t0;
  
  do {
    uVar1 = (uint)*in_a1;
    if (((*in_a1 == 0) || (uVar1 == in_a3)) || (uVar1 == in_t0)) {
      return;
    }
    in_a1 = in_a1 + 1;
    pMVar2 = mainTracker;
    if ((uVar1 | 0x20) == ((uint)*(byte *)&in_a2->mainState | 0x20)) {
      pMVar2 = (MainTracker *)((int)&in_a2->mainState + 1);
    }
    in_a2 = pMVar2;
  } while (*(char *)&pMVar2->mainState != '\0');
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ FindTextInLine(char *search_match /*$a0*/, char *search_str /*$a1*/)
 // line 243, offset 0x80038080
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x80038080
		// Variables:
	// 		char *match_pos; // $a2
	/* end block 1 */
	// End offset: 0x800380F8
	// End Line: 259

	/* begin block 2 */
		// Start line: 493
	/* end block 2 */
	// End Line: 494

	/* begin block 3 */
		// Start line: 494
	/* end block 3 */
	// End Line: 495

	/* begin block 4 */
		// Start line: 496
	/* end block 4 */
	// End Line: 497

char * FindTextInLine(char *search_match,char *search_str)

{
  uint in_v0;
  uint in_v1;
  byte *pbVar1;
  byte *in_a2;
  uint in_a3;
  uint in_t0;
  
  while( true ) {
    if (((in_v0 == 0) || (in_v0 == in_a3)) || (in_v1 == in_t0)) {
      return (char *)0x0;
    }
    search_str = (char *)((byte *)search_str + 1);
    pbVar1 = (byte *)search_match;
    if ((in_v1 | 0x20) == ((uint)*in_a2 | 0x20)) {
      pbVar1 = in_a2 + 1;
    }
    if (*pbVar1 == 0) break;
    in_v0 = (uint)(byte)*search_str;
    in_v1 = in_v0;
    in_a2 = pbVar1;
  }
  return (char *)(byte *)search_str;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExtractWorldName(char *worldName /*$a0*/, char *levelName /*$a1*/)
 // line 261, offset 0x80038108
	/* begin block 1 */
		// Start line: 529
	/* end block 1 */
	// End Line: 530

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

void ExtractWorldName(char *worldName,char *levelName)

{
  byte bVar1;
  uint in_a2;
  
  while( true ) {
    levelName = (char *)((byte *)levelName + 1);
    if ((uint)(byte)*levelName == in_a2) break;
    if ((uint)(byte)*levelName - 0x30 < 10) goto LAB_8003812c;
  }
  bVar1 = *levelName;
  while ((uint)bVar1 - 0x30 < 10) {
LAB_8003812c:
    bVar1 = *levelName;
    levelName = (char *)((byte *)levelName + 1);
    *worldName = bVar1;
    bVar1 = *levelName;
    worldName = (char *)((byte *)worldName + 1);
  }
  *worldName = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExtractLevelNum(char *levelNum /*$a0*/, char *levelName /*$a1*/)
 // line 270, offset 0x80038154
	/* begin block 1 */
		// Start line: 547
	/* end block 1 */
	// End Line: 548

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

void ExtractLevelNum(char *levelNum,char *levelName)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined auStack88 [32];
  undefined auStack56 [32];
  
  *levelNum = '\0';
  iVar3 = FUN_80060410(s__kain2_game_psx_kain2_arg_800ce918,10);
  cVar2 = s_under1_800ce9a4[5];
  cVar1 = s_under1_800ce9a4[4];
  if (iVar3 != 0) {
    FUN_800380a0(auStack56,iVar3);
    FUN_800380ec(auStack88,iVar3);
    FUN_800741fc(levelNum,0x800ce934,auStack56,auStack88);
    iVar4 = FUN_80038018(s__NOSOUND_800ce93c,iVar3);
    if (iVar4 != 0) {
      nosound = 1;
      nomusic = 1;
    }
    iVar4 = FUN_80038018(s__NOMUSIC_800ce948,iVar3);
    if (iVar4 != 0) {
      nomusic = 1;
    }
    iVar4 = FUN_80038018(s__TIMEOUT_800ce954,iVar3);
    if (iVar4 != 0) {
      *(uint *)(levelName + 0xc0) = *(uint *)(levelName + 0xc0) | 0x20000;
    }
    iVar4 = FUN_80038018(s__MAINMENU_800ce960,iVar3);
    if (iVar4 != 0) {
      DoMainMenu = 1;
    }
    iVar4 = FUN_80038018(s__INSPECTRAL_800ce96c,iVar3);
    if (iVar4 != 0) {
      loadStatus.decompressLen._2_2_ = 1;
    }
    iVar4 = FUN_80038018(s__VOICE_800ce978,iVar3);
    if (iVar4 != 0) {
      *(uint *)(levelName + 0xc0) = *(uint *)(levelName + 0xc0) | 0x80000;
    }
    iVar4 = FUN_80038018(s__DEBUG_CD_800ce980,iVar3);
    if (iVar4 != 0) {
      *(uint *)(levelName + 0xc0) = *(uint *)(levelName + 0xc0) | 0x80000000;
    }
    iVar4 = FUN_80038018(s__LOADGAME_800ce98c,iVar3);
    if (iVar4 != 0) {
      draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 0x200000;
    }
    iVar4 = FUN_80038018(s__ALLWARP_800ce998,iVar3);
    if (iVar4 != 0) {
      draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 0x400000;
    }
                    /* WARNING: Subroutine does not return */
    *(uint *)(levelName + 0xc0) = *(uint *)(levelName + 0xc0) | 0x80000;
    FUN_8004fe84(iVar3);
  }
  *(undefined4 *)levelNum = s_under1_800ce9a4._0_4_;
  levelNum[4] = cVar1;
  levelNum[5] = cVar2;
  levelNum[6] = s_under1_800ce9a4[6];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessArgs(char *baseAreaName /*$s3*/, struct GameTracker *gameTracker /*$s2*/)
 // line 368, offset 0x800381c0
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x800381C0
		// Variables:
	// 		char levelNum[32]; // stack offset -88
	// 		char worldName[32]; // stack offset -56
	// 		long *argData; // $s1
	/* end block 1 */
	// End offset: 0x800383BC
	// End Line: 586

	/* begin block 2 */
		// Start line: 736
	/* end block 2 */
	// End Line: 737

void ProcessArgs(char *baseAreaName,GameTracker *gameTracker)

{
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_80038018(s__NOSOUND_800ce93c);
  if (iVar1 != 0) {
    nosound = 1;
    nomusic = 1;
  }
  iVar1 = FUN_80038018(s__NOMUSIC_800ce948);
  if (iVar1 != 0) {
    nomusic = 1;
  }
  iVar1 = FUN_80038018(s__TIMEOUT_800ce954);
  if (iVar1 != 0) {
    *(uint *)(unaff_s2 + 0xc0) = *(uint *)(unaff_s2 + 0xc0) | 0x20000;
  }
  iVar1 = FUN_80038018(s__MAINMENU_800ce960);
  if (iVar1 != 0) {
    DoMainMenu = 1;
  }
  iVar1 = FUN_80038018(s__INSPECTRAL_800ce96c);
  if (iVar1 != 0) {
    loadStatus.decompressLen._2_2_ = 1;
  }
  iVar1 = FUN_80038018(s__VOICE_800ce978);
  if (iVar1 != 0) {
    *(uint *)(unaff_s2 + 0xc0) = *(uint *)(unaff_s2 + 0xc0) | 0x80000;
  }
  iVar1 = FUN_80038018(s__DEBUG_CD_800ce980);
  if (iVar1 != 0) {
    *(uint *)(unaff_s2 + 0xc0) = *(uint *)(unaff_s2 + 0xc0) | 0x80000000;
  }
  iVar1 = FUN_80038018(s__LOADGAME_800ce98c);
  if (iVar1 != 0) {
    draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 0x200000;
  }
  iVar1 = FUN_80038018(s__ALLWARP_800ce998);
  if (iVar1 != 0) {
    draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 0x400000;
  }
                    /* WARNING: Subroutine does not return */
  *(uint *)(unaff_s2 + 0xc0) = *(uint *)(unaff_s2 + 0xc0) | 0x80000;
  FUN_8004fe84();
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDisplay()
 // line 588, offset 0x800383d8
	/* begin block 1 */
		// Start line: 589
		// Start offset: 0x800383D8
		// Variables:
	// 		int i; // $a1
	// 		struct RECT r; // stack offset -16
	/* end block 1 */
	// End offset: 0x80038510
	// End Line: 650

	/* begin block 2 */
		// Start line: 1134
	/* end block 2 */
	// End Line: 1135

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDisplay(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_s0;
  
  FUN_800bd07c();
  FUN_800bf768(0x800d0ce8,0,0x100,0x200);
  FUN_800bd07c(&LONG_800d0c74,0,0x100,0x200);
  iVar2 = 0;
  iVar1 = -0x7ff2f258;
  readGPBuffer1.data[8] = 1;
  overrideCommand[0]._2_1_ = 1;
  readGPBuffer1.data[9] = 1;
  overrideCommand[0]._3_1_ = 1;
  readGPBuffer1.data[10] = 0;
  overrideCommand[1]._0_1_ = 0;
  overrideCommand[1]._1_1_ = 0;
  overrideCommand[1]._2_1_ = 0;
  overrideCommand[1]._3_1_ = 0;
  readGPBuffer1.data[11] = 0;
  readGPBuffer1.data[12] = 0;
  readGPBuffer1.data[13] = 0;
  do {
    *(undefined *)(iVar1 + 3) = 3;
    *(undefined *)(iVar1 + 7) = 2;
    *(undefined2 *)(iVar1 + 8) = 0;
    *(undefined2 *)(iVar1 + 10) = (short)(iVar2 << 8);
    *(undefined2 *)(iVar1 + 0xc) = 0x200;
    *(undefined2 *)(iVar1 + 0xe) = unaff_s0;
    *(undefined *)(iVar1 + 4) = 0;
    *(undefined *)(iVar1 + 5) = 0;
    *(undefined *)(iVar1 + 6) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x10;
  } while (iVar2 < 2);
  FUN_80037e90();
  FUN_800bac5c(clearRect[1]._8_4_,0xc00);
  FUN_800bac5c(clearRect[1]._12_4_,0xc00);
  FUN_800baab4(&stack0x00000018,0,0xff,0);
  return;
}



// autogenerated function stub: 
// void /*$ra*/ StartTimer()
void StartTimer()
{ // line 666, offset 0x80038554
	/* begin block 1 */
		// Start line: 1326
	/* end block 1 */
	// End Line: 1327

}


// decompiled code
// original method signature: 
// void /*$ra*/ VblTick()
 // line 739, offset 0x800385c0
	/* begin block 1 */
		// Start line: 1473
	/* end block 1 */
	// End Line: 1474

	/* begin block 2 */
		// Start line: 1476
	/* end block 2 */
	// End Line: 1477

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VblTick(void)

{
  undefined4 uVar1;
  
  if (draw[1].dr_env.code[0] != 0) {
    uVar1 = FUN_8003d7d8(draw[1].dr_env.code[1]);
    *(undefined4 *)draw[1].dr_env.code[0] = uVar1;
    draw[1].dr_env.code[0] = 0;
    draw[1].dr_env.tag = draw[1].dr_env.code[2] + loadStatus.compEndBytes * 0x14;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCallback()
 // line 759, offset 0x8003862c
	/* begin block 1 */
		// Start line: 1520
	/* end block 1 */
	// End Line: 1521

	/* begin block 2 */
		// Start line: 1521
	/* end block 2 */
	// End Line: 1522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawCallback(void)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int unaff_s1;
  int iVar5;
  int iVar6;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  int iStack00000034;
  
  iVar6 = *(int *)(unaff_s1 + 0x1d4);
  iVar5 = *(int *)(*(int *)(unaff_s1 + 0x40) + 4);
  uStack00000018 = 0x200;
  uStack00000010 = 0;
  uStack00000014 = 0xf0;
  uStack0000001c = 0xf0;
  uStack00000020 = 0;
  uStack00000024 = 0;
  uStack00000028 = 0;
  uStack0000002c = 2;
  uStack00000030 = *(undefined4 *)(unaff_s1 + 0x40);
  iStack00000034 = iVar6;
  FUN_8002a8c0(0,0,0x200,0);
  iVar4 = 0x10;
  FUN_8002d464();
  do {
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(int *)(unaff_s1 + 0x30) = 1 - *(int *)(unaff_s1 + 0x30);
    uVar3 = (undefined)iVar4;
    *(undefined *)(iVar5 + 8) = uVar3;
    *(undefined *)(iVar5 + 9) = uVar3;
    *(undefined *)(iVar5 + 10) = uVar3;
    do {
      iVar2 = FUN_80024e14(*(undefined4 *)(unaff_s1 + 0x11c));
    } while (iVar2 != 0);
    FUN_800badd4(*(int *)(unaff_s1 + 0x30) * 0x5c + -0x7ff2f374);
    do {
      iVar2 = FUN_80024e14(*(undefined4 *)(unaff_s1 + 0x118));
    } while (iVar2 != 0);
    *(int *)(unaff_s1 + 0x11c) = unaff_s1 + 0x228;
    *(int *)(unaff_s1 + 4) = 1 - *(int *)(unaff_s1 + 4);
    FUN_800bce6c(0);
    FUN_800bad64(&DAT_00002ffc + iVar6);
    bVar1 = iVar4 != 0xff;
    iVar4 = iVar4 + 0x10;
  } while (bVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FadeOutSayingLoading(struct GameTracker *gameTracker /*$s1*/)
 // line 770, offset 0x80038684
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x80038684
		// Variables:
	// 		struct POLY_F4_SEMITRANS *transPrim; // $s2
	// 		unsigned long **drawot; // $s3
	// 		long fadeTime; // $s0
	/* end block 1 */
	// End offset: 0x800387B4
	// End Line: 804

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

void FadeOutSayingLoading(GameTracker *gameTracker)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  int unaff_s0;
  int iVar4;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 uStack00000030;
  
  uStack00000030 = *(undefined4 *)(unaff_s1 + 0x40);
  FUN_8002a8c0();
  iVar4 = unaff_s0 + 0x10;
  FUN_8002d464();
  do {
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(int *)(unaff_s1 + 0x30) = unaff_s4 - *(int *)(unaff_s1 + 0x30);
    uVar3 = (undefined)iVar4;
    *(undefined *)(unaff_s2 + 8) = uVar3;
    *(undefined *)(unaff_s2 + 9) = uVar3;
    *(undefined *)(unaff_s2 + 10) = uVar3;
    do {
      iVar2 = FUN_80024e14(*(undefined4 *)(unaff_s1 + 0x11c));
    } while (iVar2 != 0);
    FUN_800badd4(*(int *)(unaff_s1 + 0x30) * 0x5c + -0x7ff2f374);
    do {
      iVar2 = FUN_80024e14(*(undefined4 *)(unaff_s1 + 0x118));
    } while (iVar2 != 0);
    *(int *)(unaff_s1 + 0x11c) = unaff_s1 + 0x228;
    *(int *)(unaff_s1 + 4) = unaff_s4 - *(int *)(unaff_s1 + 4);
    FUN_800bce6c(0);
    FUN_800bad64(&DAT_00002ffc + unaff_s3);
    bVar1 = iVar4 != 0xff;
    iVar4 = iVar4 + 0x10;
  } while (bVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckForDevStation()
 // line 806, offset 0x800387d4
	/* begin block 1 */
		// Start line: 807
		// Start offset: 0x800387D4
		// Variables:
	// 		long *a1; // stack offset -8
	// 		long *a2; // stack offset -4
	/* end block 1 */
	// End offset: 0x8003882C
	// End Line: 832

	/* begin block 2 */
		// Start line: 1638
	/* end block 2 */
	// End Line: 1639

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckForDevStation(void)

{
  int in_v0;
  int iVar1;
  char *pcVar2;
  byte bStackX15;
  undefined4 uStack00000010;
  undefined uStack00000014;
  
  uStack00000010 = *(undefined4 *)(in_v0 + -0x164c);
  uStack00000014 = *(undefined *)(in_v0 + -0x1648);
  FUN_800bce6c(0);
  iVar1 = FUN_800b7ae4();
  if (iVar1 == 0) {
    pcVar2 = s__kain2_game_psx_loading_tim_800ce9dc;
  }
  else {
    pcVar2 = &stack0x00000018;
    FUN_800741fc(pcVar2,s__kain2_game_psx_loading_c_tim_800ce9bc,(uint)(&bStackX15)[iVar1]);
  }
  iVar1 = FUN_80060410(pcVar2,0xb);
  if (iVar1 != 0) {
    FUN_80037f4c(iVar1,loadStatus.compEndBytes);
                    /* WARNING: Subroutine does not return */
    FUN_8004fe84(iVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_ShowLoadingScreen()
 // line 834, offset 0x80038834
	/* begin block 1 */
		// Start line: 835
		// Start offset: 0x80038834
		// Variables:
	// 		long *loadingScreen; // $s0
	// 		char langChar[5]; // stack offset -88
	// 		int lang; // $v0

		/* begin block 1.1 */
			// Start line: 856
			// Start offset: 0x8003887C
			// Variables:
		// 		char filename[64]; // stack offset -80
		/* end block 1.1 */
		// End offset: 0x8003887C
		// End Line: 857
	/* end block 1 */
	// End offset: 0x800388D0
	// End Line: 877

	/* begin block 2 */
		// Start line: 1695
	/* end block 2 */
	// End Line: 1696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_ShowLoadingScreen(void)

{
  int iVar1;
  
  iVar1 = FUN_80060410(s__kain2_game_psx_loading_tim_800ce9dc,0xb);
  if (iVar1 != 0) {
    FUN_80037f4c(iVar1,loadStatus.compEndBytes);
                    /* WARNING: Subroutine does not return */
    FUN_8004fe84(iVar1);
  }
  return;
}



// autogenerated function stub: 
// long * /*$ra*/ MAIN_LoadTim(char *name /*$a0*/)
long * MAIN_LoadTim(char *name)
{ // line 879, offset 0x800388e4
	/* begin block 1 */
		// Start line: 880
		// Start offset: 0x800388E4
	/* end block 1 */
	// End offset: 0x800388E4
	// End Line: 880

	/* begin block 2 */
		// Start line: 1804
	/* end block 2 */
	// End Line: 1805

	return null;
}


// decompiled code
// original method signature: 
// void /*$ra*/ init_menus(struct GameTracker *gt /*$s1*/)
 // line 890, offset 0x80038904
	/* begin block 1 */
		// Start line: 891
		// Start offset: 0x80038904
		// Variables:
	// 		struct menu_t *menu; // $s0
	/* end block 1 */
	// End offset: 0x80038904
	// End Line: 891

	/* begin block 2 */
		// Start line: 1826
	/* end block 2 */
	// End Line: 1827

void init_menus(GameTracker *gt)

{
  FUN_800bf688(gt,0x78);
  FUN_800bd11c(0x140);
  FUN_8007290c();
  FUN_8002cb5c();
  draw[1].dr_env.tag = 0;
  FUN_800ba000(FUN_80038558);
  FUN_800ba838(FUN_800385c4);
  FUN_800315b0();
  FUN_8003fe50();
  FUN_800b6f80();
  if (nosound != 0) {
    FUN_8004013c();
    clearRect[0].r0 = '\0';
    clearRect[0].b0 = '\0';
  }
  if (nomusic != 0) {
    FUN_800400a0();
    clearRect[0].g0 = '\0';
  }
  if ((draw[0].dr_env.code[0] & 0x80000) == 0) {
    clearRect[0].b0 = '\0';
  }
  FUN_8003889c(0x800d0dcc);
  FUN_800b57d4(0x800d0dcc);
  FUN_800bce0c(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_DoMainInit()
 // line 902, offset 0x80038950
	/* begin block 1 */
		// Start line: 1850
	/* end block 1 */
	// End Line: 1851

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_DoMainInit(void)

{
  FUN_800b6f80();
  if (nosound != 0) {
    FUN_8004013c();
    clearRect[0].r0 = '\0';
    clearRect[0].b0 = '\0';
  }
  if (nomusic != 0) {
    FUN_800400a0();
    clearRect[0].g0 = '\0';
  }
  if ((draw[0].dr_env.code[0] & 0x80000) == 0) {
    clearRect[0].b0 = '\0';
  }
  FUN_8003889c(0x800d0dcc);
  FUN_800b57d4(0x800d0dcc);
  FUN_800bce0c(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_InitVolume()
 // line 949, offset 0x80038a44
	/* begin block 1 */
		// Start line: 1898
	/* end block 1 */
	// End Line: 1899

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_InitVolume(void)

{
  uint in_v0;
  uint in_v1;
  
  draw[1].dr_env.code[9] = in_v0 & in_v1 & 0xfffffffe;
  FUN_800a8148();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_ResetGame()
 // line 957, offset 0x80038a84
	/* begin block 1 */
		// Start line: 1944
	/* end block 1 */
	// End Line: 1945

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_ResetGame(void)

{
  int in_v0;
  undefined4 *puVar1;
  undefined4 *in_v1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  loadStatus.compControlbits._0_2_ = 0;
  *(undefined *)(in_v0 + 4) = 0;
  *(undefined *)(in_v0 + 5) = 0;
  *(undefined *)(in_v0 + 6) = 0;
  loadStatus.cdWaitTime._0_1_ = 0;
  loadStatus.cdWaitTime._1_1_ = 0;
  loadStatus.cdWaitTime._2_1_ = 0;
  puVar2 = (undefined4 *)&stack0x00000010;
  if (((uint)in_v1 & 3) == 0) {
    puVar1 = in_v1 + 8;
    do {
      uVar3 = in_v1[1];
      uVar4 = in_v1[2];
      uVar5 = in_v1[3];
      *puVar2 = *in_v1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      in_v1 = in_v1 + 4;
      puVar2 = puVar2 + 4;
    } while (in_v1 != puVar1);
  }
  else {
    puVar1 = in_v1 + 8;
    do {
      uVar3 = in_v1[1];
      uVar4 = in_v1[2];
      uVar5 = in_v1[3];
      *puVar2 = *in_v1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      in_v1 = in_v1 + 4;
      puVar2 = puVar2 + 4;
    } while (in_v1 != puVar1);
  }
  uVar3 = in_v1[1];
  *puVar2 = *in_v1;
                    /* WARNING: Subroutine does not return */
  puVar2[1] = uVar3;
  FUN_800bcdac(&stack0x00000038,0,0x18);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_MainMenuInit()
 // line 967, offset 0x80038ad4
	/* begin block 1 */
		// Start line: 968
		// Start offset: 0x80038AD4

		/* begin block 1.1 */
			// Start line: 968
			// Start offset: 0x80038AD4
			// Variables:
		// 		char sfxFileName[64]; // stack offset -72
		/* end block 1.1 */
		// End offset: 0x80038C18
		// End Line: 990
	/* end block 1 */
	// End offset: 0x80038C18
	// End Line: 995

	/* begin block 2 */
		// Start line: 1965
	/* end block 2 */
	// End Line: 1966

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_MainMenuInit(void)

{
  undefined4 *in_v0;
  undefined4 *in_v1;
  undefined4 *puVar1;
  undefined4 *in_a3;
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 uVar2;
  undefined4 in_t2;
  undefined4 in_t3;
  
  while( true ) {
    *in_a3 = in_t0;
    in_a3[1] = in_t1;
    in_a3[2] = in_t2;
    in_a3[3] = in_t3;
    puVar1 = in_v1 + 4;
    if (puVar1 == in_v0) break;
    in_t0 = *puVar1;
    in_t1 = in_v1[5];
    in_t2 = in_v1[6];
    in_t3 = in_v1[7];
    in_v1 = puVar1;
    in_a3 = in_a3 + 4;
  }
  uVar2 = in_v1[5];
  in_a3[4] = *puVar1;
                    /* WARNING: Subroutine does not return */
  in_a3[5] = uVar2;
  FUN_800bcdac(&stack0x00000038,0,0x18);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_FreeMainMenuStuff()
 // line 1009, offset 0x80038c6c
	/* begin block 1 */
		// Start line: 2066
	/* end block 1 */
	// End Line: 2067

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_FreeMainMenuStuff(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_StartGame()
 // line 1044, offset 0x80038cdc
	/* begin block 1 */
		// Start line: 2136
	/* end block 1 */
	// End Line: 2137

	/* begin block 2 */
		// Start line: 2137
	/* end block 2 */
	// End Line: 2138

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_StartGame(void)

{
  GameTracker *gameTracker;
  ulong **ppuVar1;
  
  gameTrackerX.controlCommand[1][1] = 0x1000;
  ppuVar1 = gameTracker->drawOT;
  FUN_800bad08(gameTracker->drawPage * 0x10 + -0x7ff2f258);
  FUN_80031cc0();
  DEBUG_Process(gameTracker);
  if (mainMenuScreen != (long *)0x0) {
    FUN_80037f4c(mainMenuScreen,gameTracker->drawPage);
  }
  FUN_8002e1b8(ppuVar1);
  FUN_800b99e8();
  FUN_8002d464();
  loadStatus.compControlbits._0_2_ = (short)loadStatus.compControlbits + 1;
  FUN_8002f104();
  if ((mainMenuFading != 0) && (gameTracker->wipeTime == -1)) {
    FUN_80038c74();
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MAIN_DoMainMenu(struct GameTracker *gameTracker /*$s0*/, struct MainTracker *mainTracker /*$a1*/, long menuPos /*$a2*/)
 // line 1083, offset 0x80038d48
	/* begin block 1 */
		// Start line: 1084
		// Start offset: 0x80038D48
		// Variables:
	// 		unsigned long **drawot; // $s1
	/* end block 1 */
	// End offset: 0x80038E04
	// End Line: 1172

	/* begin block 2 */
		// Start line: 2220
	/* end block 2 */
	// End Line: 2221

long MAIN_DoMainMenu(GameTracker *gameTracker,MainTracker *mainTracker,long menuPos)

{
  int unaff_s0;
  
  FUN_800b99e8();
  FUN_8002d464();
  loadStatus.compControlbits._0_2_ = (short)loadStatus.compControlbits + 1;
  FUN_8002f104();
  if ((mainMenuFading != 0) && (*(short *)(unaff_s0 + 0xcc) == -1)) {
    FUN_80038c74();
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MainG2(void *appData /*$s7*/)
 // line 1187, offset 0x80038e1c
	/* begin block 1 */
		// Start line: 1188
		// Start offset: 0x80038E1C
		// Variables:
	// 		struct MainTracker *mainTracker; // $s2
	// 		struct GameTracker *gameTracker; // $s3
	// 		long menuPos; // $s5
		// Labels:
		//		0x00001718	exit

		/* begin block 1.1 */
			// Start line: 1381
			// Start offset: 0x80039038
			// Variables:
		// 		struct InterfaceItem *item; // $s1
		// 		int timer; // $s0
		/* end block 1.1 */
		// End offset: 0x800390E8
		// End Line: 1445

		/* begin block 1.2 */
			// Start line: 1625
			// Start offset: 0x800392A4
		/* end block 1.2 */
		// End offset: 0x80039390
		// End Line: 1695
	/* end block 1 */
	// End offset: 0x80039440
	// End Line: 1746

	/* begin block 2 */
		// Start line: 2374
	/* end block 2 */
	// End Line: 2375

int MainG2(void *appData)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *oldAddress;
  int offset;
  int *unaff_s2;
  char *levelName;
  int unaff_s6;
  
  FUN_800384ec();
  FUN_8005fb48(LONG_ARRAY_800cea94,&DAT_800ceaa4);
  FUN_800b7af0(0xffffffff);
  FUN_8002d91c();
  levelName[0x1c9] = -1;
  levelName[0x1c8] = -1;
  *(undefined4 *)(levelName + 0x124) = 0x800d0c60;
  ExtractLevelNum((char *)&BmenuLines[0].textureW,levelName);
  FUN_80038008();
  FUN_800388e8();
  gameTrackerX.controlData[1][3] = 6;
  unaff_s2[2] = 0;
  do {
    unaff_s2[1] = *unaff_s2;
    switch(*unaff_s2) {
    case 1:
      FUN_800408c8();
      if ((*(uint *)(levelName + 0xc0) & 0x80000) != 0) {
        FUN_800b773c();
      }
      FUN_80030e60();
      if (*(short *)(levelName + 0x16c) != 0) {
        FUN_8003861c();
        FUN_80056aa4();
        offset = 0;
        FUN_8005ac48();
        oldAddress = levelName;
        iVar2 = FUN_800592e8();
        while ((aadRelocateSfxMemory(oldAddress,offset), iVar2 != 0 ||
               ((aadMem->sramDefragInfo).status != 0))) {
          FUN_800408c8();
          iVar2 = FUN_8005fd78();
        }
        FUN_800409b0();
        FUN_8004ff34(0xe);
        FUN_8002d954();
        FUN_80050338();
        iVar2 = (int)*(short *)(levelName + 0x16c);
        if (iVar2 == unaff_s6) {
LAB_800392d4:
          *unaff_s2 = 8;
        }
        else {
          if (iVar2 == 3) {
            *unaff_s2 = 6;
            unaff_s2[2] = 3;
          }
          else {
            if (iVar2 == 4) {
              *unaff_s2 = unaff_s6;
              if ((draw[1].dr_env.code[10] & 0x200000) == 0) {
                FUN_800b5754(0x800d0dcc);
              }
            }
            else {
              *unaff_s2 = unaff_s6;
            }
          }
        }
      }
      break;
    case 2:
      if ((draw[1].dr_env.code[10] & 0x1000000) != 0) {
        FUN_80037fc0(0x800ce5e0);
        draw[1].dr_env.code[10] = draw[1].dr_env.code[10] & 0xfeffffff;
      }
      if ((draw[1].dr_env.code[10] & 0x200000) != 0) {
        draw[1].dr_env.code[10] = draw[1].dr_env.code[10] & 0xffdfffff;
      }
      if (nosound == 0) {
        FUN_800389dc();
      }
      FUN_800387cc();
      FUN_8002cc7c();
                    /* WARNING: Subroutine does not return */
      FUN_800ba930(0);
    case 4:
      FUN_8006045c(s_Menustuff_800ceaa8);
      uVar3 = unaff_s2[2];
      do {
        if (5 < uVar3) goto LAB_80039088;
        draw[1].dr_env.code[9] = draw[1].dr_env.code[9] & 0xfffffffe;
        FUN_80037f7c(&InterfaceItems + uVar3);
        iVar2 = 1;
        if ((&InterfaceItems)[uVar3].timeout != 0) {
          do {
            FUN_80031cc0();
            if (((int)(uint)(&InterfaceItems)[uVar3].buttonTimeout < iVar2) &&
               ((*(uint *)(levelName + 0x4c) & 0x80) != 0)) break;
            FUN_800bce6c(0);
            bVar1 = iVar2 < (int)(uint)(&InterfaceItems)[uVar3].timeout;
            iVar2 = iVar2 + 1;
          } while (bVar1);
        }
        uVar3 = SEXT24((&InterfaceItems)[uVar3].nextItem);
        unaff_s2[2] = uVar3;
      } while (((int)uVar3 < 0) || ((&InterfaceItems)[uVar3].itemType == 1));
      *unaff_s2 = 6;
LAB_80039088:
      FUN_8002cc7c();
      if (*unaff_s2 != 6) {
        if (DoMainMenu != 0) goto LAB_800392d4;
        FUN_80038a1c();
        BmenuLines[1].vramBlock._2_2_ = 0;
        mainMenuFading = 1;
        FUN_80038c74();
      }
      break;
    case 6:
      FUN_800b7998();
      iVar2 = unaff_s2[2];
      do {
        if (iVar2 < 0) goto LAB_80038f68;
        iVar2 = FUN_800b7a3c();
        if (iVar2 != 0) {
          FUN_800b7934(&InterfaceItems + unaff_s2[2],0xffff,2);
          FUN_80037e90();
        }
        iVar2 = (int)(&InterfaceItems)[unaff_s2[2]].nextItem;
        unaff_s2[2] = iVar2;
      } while ((&InterfaceItems)[iVar2].itemType == 0);
      *unaff_s2 = 4;
LAB_80038f68:
      FUN_800b7a4c();
      if (unaff_s2[2] < 0) {
        *unaff_s2 = 8;
      }
      if (nosound == 0) {
        FUN_80040030();
      }
      break;
    case 7:
      unaff_s2[3] = 1;
      break;
    case 8:
      loadStatus.decompressLen._2_2_ = 0;
      func_0x80038158(levelName + 0x15c);
      FUN_80038a1c();
      FUN_8006045c(s_Menustuff_800ceaa8);
      FUN_80038a6c();
      FUN_800389dc();
      FUN_800b5754(0x800d0dcc);
      *unaff_s2 = 9;
      FUN_8002cc7c();
      break;
    case 9:
      FUN_80038ce0();
    }
    FUN_8005fd78();
    if (unaff_s2[3] != 0) {
      FUN_80040030();
      FUN_8003ff04();
      FUN_800ba898(0);
                    /* WARNING: Subroutine does not return */
      FUN_800ba930(0);
    }
  } while( true );
}





