#include "THISDUST.H"
#include "DEBUG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_UpdateHealth(long *var /*$a0*/)
 // line 1261, offset 0x80012ec0
	/* begin block 1 */
		// Start line: 2482
	/* end block 1 */
	// End Line: 2483

	/* begin block 2 */
		// Start line: 2522
	/* end block 2 */
	// End Line: 2523

	/* begin block 3 */
		// Start line: 2483
	/* end block 3 */
	// End Line: 2484

void DEBUG_UpdateHealth(long *var)

{
  FUN_800a50f8(debugHealthLevel);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_UpdateMana(long *var /*$a0*/)
 // line 1266, offset 0x80012ee4
	/* begin block 1 */
		// Start line: 2493
	/* end block 1 */
	// End Line: 2494

	/* begin block 2 */
		// Start line: 2494
	/* end block 2 */
	// End Line: 2495

void DEBUG_UpdateMana(long *var)

{
  FUN_800a5150(debugManaLevel);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_FillUpHealth(long *var /*$a0*/)
 // line 1275, offset 0x80012f08
	/* begin block 1 */
		// Start line: 1276
		// Start offset: 0x80012F08
	/* end block 1 */
	// End offset: 0x80012F08
	// End Line: 1276

	/* begin block 2 */
		// Start line: 2512
	/* end block 2 */
	// End Line: 2513

void DEBUG_FillUpHealth(long *var)

{
  FUN_800a5178();
  FUN_800a51d8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ process_cheat_codes(struct GameTracker *gt /*$a0*/, long *ctrl /*$a1*/)
 // line 1474, offset 0x80012f30
	/* begin block 1 */
		// Start line: 1475
		// Start offset: 0x80012F30
		// Variables:
	// 		int i; // $s0
	// 		struct GameCheat *cheat; // $a0
	// 		unsigned long padPress; // $s2
	// 		unsigned long padOn; // $s1

		/* begin block 1.1 */
			// Start line: 1487
			// Start offset: 0x80012F70
			// Variables:
		// 		int cheatTriggered; // $s3

			/* begin block 1.1.1 */
				// Start line: 1490
				// Start offset: 0x80012F84
				// Variables:
			// 		unsigned long keyMask; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 1510
					// Start offset: 0x80013010
				/* end block 1.1.1.1 */
				// End offset: 0x800131AC
				// End Line: 1584
			/* end block 1.1.1 */
			// End offset: 0x800131AC
			// End Line: 1586
		/* end block 1.1 */
		// End offset: 0x800131D4
		// End Line: 1592
	/* end block 1 */
	// End offset: 0x800131D4
	// End Line: 1594

	/* begin block 2 */
		// Start line: 2948
	/* end block 2 */
	// End Line: 2949

void process_cheat_codes(GameTracker *gt,long *ctrl)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *ctrl;
  uVar7 = ctrl[1];
  if (cheatCodeLastCommand != 0) {
    cheatCodeLastCommand = uVar7;
    return;
  }
  if (uVar7 == 0) {
    cheatCodeLastCommand = uVar7;
    return;
  }
  bVar2 = false;
  if ((uVar6 & 0x300) == 0) {
    cheatCodeLastCommand = uVar7;
    return;
  }
  iVar5 = 0;
  iVar3 = 0;
LAB_80012f88:
  if (((uVar7 & (&CheatKeyMap)
                [(uint)GameCheats[0].cheatKeys
                       [(int)*(short *)((int)&GameCheats[0].cheatStage + iVar3) + iVar3]]) == 0) ||
     ((uVar6 & 0xfffffcff &
      ~(&CheatKeyMap)
       [(uint)GameCheats[0].cheatKeys
              [(int)*(short *)((int)&GameCheats[0].cheatStage + iVar3) + iVar3]]) != 0)) {
    *(undefined2 *)((int)&GameCheats[0].cheatStage + iVar3) = 0;
  }
  else {
    *(short *)((int)&GameCheats[0].cheatStage + iVar3) =
         *(short *)((int)&GameCheats[0].cheatStage + iVar3) + 1;
  }
  if (*(short *)((int)&GameCheats[0].cheatStage + iVar3) !=
      *(short *)((int)&GameCheats[0].cheatLen + iVar3)) goto switchD_80013008_caseD_17;
  *(undefined2 *)((int)&GameCheats[0].cheatStage + iVar3) = 0;
  bVar2 = true;
  switch(iVar5) {
  case 0:
    goto switchD_80013008_caseD_0;
  case 1:
    eventMenu.bit_mask = eventMenu.bit_mask | 0x5f;
    break;
  case 2:
    eventMenu.bit_mask = eventMenu.bit_mask | 0x8000;
    break;
  case 3:
    BossAreasMenu.type = BossAreasMenu.type | 0x1000;
    break;
  case 4:
    eventMenu.bit_mask = eventMenu.bit_mask | 0x20;
  case 9:
    eventMenu.bit_mask = eventMenu.bit_mask | 0x10;
    goto switchD_80013008_caseD_12;
  case 5:
    BossAreasMenu.type = BossAreasMenu.type | 0x10000;
    break;
  case 6:
    uVar4 = 0x800000;
    goto LAB_8001318c;
  case 7:
    debugManaLevel = 0xd;
    DEBUG_UpdateMana(&debugManaLevel);
    bVar1 = iVar5 + 1 < 0x17;
    goto LAB_800131b4;
  case 8:
    goto switchD_80013008_caseD_8;
  case 10:
    uVar4 = 0x80000;
    goto LAB_8001318c;
  case 0xb:
    uVar4 = 0x100000;
    goto LAB_8001318c;
  case 0xc:
    uVar4 = 0x400000;
    goto LAB_8001318c;
  case 0xd:
    DEBUG_FillUpHealth(&debugHealthLevel);
    bVar1 = iVar5 + 1 < 0x17;
    goto LAB_800131b4;
  case 0xe:
    debugHealthLevel = debugHealthLevel + 1;
    if (4 < debugHealthLevel) goto switchD_80013008_caseD_f;
    goto LAB_80013048;
  case 0xf:
switchD_80013008_caseD_f:
    debugHealthLevel = 4;
LAB_80013048:
    DEBUG_UpdateHealth(&debugHealthLevel);
    bVar1 = iVar5 + 1 < 0x17;
    goto LAB_800131b4;
  case 0x10:
    FUN_800a51d8();
    bVar1 = iVar5 + 1 < 0x17;
    goto LAB_800131b4;
  case 0x11:
    goto switchD_80013008_caseD_11;
  case 0x12:
    goto switchD_80013008_caseD_12;
  case 0x13:
    FUN_800a8128();
    bVar1 = iVar5 + 1 < 0x17;
    goto LAB_800131b4;
  case 0x14:
    BossAreasMenu.type = BossAreasMenu.type | 0x8000;
    break;
  case 0x15:
    uVar4 = 0x40000;
    goto LAB_8001318c;
  case 0x16:
    uVar4 = 0x200000;
LAB_8001318c:
    BossAreasMenu.lower = BossAreasMenu.lower | uVar4;
  }
switchD_80013008_caseD_17:
  bVar1 = iVar5 + 1 < 0x17;
LAB_800131b4:
  iVar5 = iVar5 + 1;
  iVar3 = iVar5 * 0x10;
  if (!bVar1) {
    if (bVar2) {
      FUN_8004021c(0x15,0x50,0x40,0x32);
    }
    cheatCodeLastCommand = uVar7;
    return;
  }
  goto LAB_80012f88;
switchD_80013008_caseD_12:
  eventMenu.bit_mask = eventMenu.bit_mask | 4;
switchD_80013008_caseD_11:
  eventMenu.bit_mask = eventMenu.bit_mask | 2;
switchD_80013008_caseD_0:
  eventMenu.bit_mask = eventMenu.bit_mask | 8;
switchD_80013008_caseD_8:
  eventMenu.bit_mask = eventMenu.bit_mask | 1;
  goto switchD_80013008_caseD_17;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_Process(struct GameTracker *gameTracker /*$s0*/)
 // line 1601, offset 0x800131f8
	/* begin block 1 */
		// Start line: 1602
		// Start offset: 0x800131F8
		// Variables:
	// 		long *controlCommand; // $s3
	// 		long oldFlags; // $s2
	// 		long oldFlags2; // $s1
	/* end block 1 */
	// End offset: 0x80013388
	// End Line: 1666

	/* begin block 2 */
		// Start line: 3068
	/* end block 2 */
	// End Line: 3069

void DEBUG_Process(GameTracker *gameTracker)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = gameTracker->debugFlags;
  sVar1 = gameTracker->gameMode;
  uVar2 = gameTracker->debugFlags2;
  if (sVar1 == 0) {
    if ((uVar3 & 8) != 0) {
      FUN_800144a8();
    }
    if (gameTracker->cheatMode == '\x01') {
      FUN_800144b0(gameTracker);
    }
    goto LAB_80013358;
  }
  if (sVar1 != 4) {
    if (sVar1 == 6) {
      process_cheat_codes(gameTracker,gameTracker->controlCommand);
      FUN_80013dfc(gameTracker);
    }
    else {
      if (sVar1 == 7) {
        FUN_80014224(gameTracker);
      }
    }
    goto LAB_80013358;
  }
  FUN_80013dfc(gameTracker);
  if ((gameTracker->debugFlags2 & 0x40000U) == 0) {
LAB_800132b0:
    if ((uVar2 & 0x40000) != 0) {
      gameTracker->debugFlags = gameTracker->debugFlags & 0xfffffff7;
    }
  }
  else {
    if ((uVar2 & 0x40000) == 0) {
      gameTracker->debugFlags = gameTracker->debugFlags | 8;
    }
    if ((gameTracker->debugFlags2 & 0x40000U) == 0) goto LAB_800132b0;
  }
  if (((gameTracker->debugFlags & 8U) != 0) && ((uVar3 & 8) == 0)) {
    wcTransformX.m[0][0] = (short)standardMenu.type;
    wcTransformX.m[0][1] = standardMenu.type._2_2_;
    wcTransformX.m[0][2] = (short)standardMenu.lower;
    wcTransformX.m[1][1] = (short)debugRazielMenu.bit_mask;
    wcTransformX.m[1][2] = debugRazielMenu.bit_mask._2_2_;
    wcTransformX.m[2][0] = point_42;
  }
LAB_80013358:
  if (((gameTracker->debugFlags & 0x4000U) != 0) && ((gameTracker->controlCommand[1] & 0x400U) != 0)
     ) {
    FUN_80014344(gameTracker);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_Draw(struct GameTracker *gameTracker /*$a0*/, unsigned long **ot /*$a1*/)
 // line 1676, offset 0x800133a4
	/* begin block 1 */
		// Start line: 3352
	/* end block 1 */
	// End Line: 3353

void DEBUG_Draw(GameTracker *gameTracker,ulong **ot)

{
  if (((gameTracker->gameMode == 0) || (gameTracker->cheatMode == '\x01')) ||
     (gameTracker->gameMode == 4)) {
    FUN_80013f10();
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DEBUG_MenuCountLength(struct DebugMenuLine *menu /*$a0*/)
 // line 1699, offset 0x800133ec
	/* begin block 1 */
		// Start line: 1701
		// Start offset: 0x800133EC
		// Variables:
	// 		int length; // $v1
	// 		struct DebugMenuLine *curLine; // $a0
	/* end block 1 */
	// End offset: 0x80013410
	// End Line: 1710

	/* begin block 2 */
		// Start line: 3260
	/* end block 2 */
	// End Line: 3261

	/* begin block 3 */
		// Start line: 3261
	/* end block 3 */
	// End Line: 3262

	/* begin block 4 */
		// Start line: 3263
	/* end block 4 */
	// End Line: 3264

long DEBUG_MenuCountLength(DebugMenuLine *menu)

{
  DEBUG_LINE_TYPE *pDVar1;
  int iVar2;
  
  iVar2 = 0;
  if (menu != (DebugMenuLine *)0x0) {
    do {
      pDVar1 = &menu->type;
      menu = menu + 1;
      if (*pDVar1 == DEBUG_LINE_TYPE_ENDLIST) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (menu != (DebugMenuLine *)0x0);
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ExitMenus()
 // line 1713, offset 0x80013418
	/* begin block 1 */
		// Start line: 1714
		// Start offset: 0x80013418
	/* end block 1 */
	// End offset: 0x800134A0
	// End Line: 1743

	/* begin block 2 */
		// Start line: 3288
	/* end block 2 */
	// End Line: 3289

	/* begin block 3 */
		// Start line: 3293
	/* end block 3 */
	// End Line: 3294

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEBUG_ExitMenus(void)

{
  long lVar1;
  
  lVar1 = DEBUG_MenuCountLength(currentMenu);
  currentMenu[lVar1].lower = debugMenuChoice;
  if (clearRect[0].g0 == '\0') {
    FUN_800400a0();
    FUN_800409b0();
  }
  else {
    FUN_80040104();
  }
  if (clearRect[0].r0 == '\0') {
    FUN_8004013c();
  }
  else {
    FUN_8004015c();
  }
  return;
}



// decompiled code
// original method signature: 
// struct DebugMenuLine * /*$ra*/ get_last_menu_line(struct DebugMenuLine *line /*$a0*/)
 // line 1749, offset 0x800134b0
	/* begin block 1 */
		// Start line: 3365
	/* end block 1 */
	// End Line: 3366

	/* begin block 2 */
		// Start line: 3366
	/* end block 2 */
	// End Line: 3367

DebugMenuLine * get_last_menu_line(DebugMenuLine *line)

{
  DebugMenuLine *pDVar1;
  
  if (line->type != DEBUG_LINE_TYPE_ENDLIST) {
    pDVar1 = line + 1;
    do {
      line = pDVar1;
      pDVar1 = line + 1;
    } while (line->type != DEBUG_LINE_TYPE_ENDLIST);
  }
  return line;
}



// decompiled code
// original method signature: 
// int /*$ra*/ num_menu_items(struct DebugMenuLine *menu /*$a0*/)
 // line 1757, offset 0x800134e0
	/* begin block 1 */
		// Start line: 1759
		// Start offset: 0x800134E0
		// Variables:
	// 		int nitems; // $a1
	/* end block 1 */
	// End offset: 0x80013508
	// End Line: 1763

	/* begin block 2 */
		// Start line: 3381
	/* end block 2 */
	// End Line: 3382

	/* begin block 3 */
		// Start line: 3382
	/* end block 3 */
	// End Line: 3383

	/* begin block 4 */
		// Start line: 3383
	/* end block 4 */
	// End Line: 3384

int num_menu_items(DebugMenuLine *menu)

{
  DEBUG_LINE_TYPE DVar1;
  int iVar2;
  
  DVar1 = menu->type;
  iVar2 = 0;
  while (DVar1 != DEBUG_LINE_TYPE_ENDLIST) {
    menu = menu + 1;
    DVar1 = menu->type;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ maybe_change_menu_choice(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *menu /*$s2*/)
 // line 1766, offset 0x80013510
	/* begin block 1 */
		// Start line: 1767
		// Start offset: 0x80013510
		// Variables:
	// 		long *command; // $s0
	// 		int choice; // $s1
	// 		int nitems; // $a0
	// 		int incr; // $v1
	/* end block 1 */
	// End offset: 0x800135C0
	// End Line: 1785

	/* begin block 2 */
		// Start line: 3399
	/* end block 2 */
	// End Line: 3400

void maybe_change_menu_choice(GameTracker *gt,DebugMenuLine *menu)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = debugMenuChoice;
  iVar1 = num_menu_items(menu);
  if ((gt->controlCommand[1] & 1U) == 0) {
    uVar2 = (uint)gt->controlCommand[1] >> 1 & 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if ((uVar2 != 0) && (-1 < iVar3)) {
    do {
      iVar3 = (int)(iVar3 + iVar1 + uVar2) % iVar1;
      if (iVar3 == debugMenuChoice) {
        return;
      }
    } while (DEBUG_LINE_TYPE_ENDLIST < menu[iVar3].type);
    if (iVar3 != debugMenuChoice) {
      SOUND_SfxOn();
      debugMenuChoice = iVar3;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ handle_line_type_long(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *line /*$a1*/)
 // line 1789, offset 0x800135d8
	/* begin block 1 */
		// Start line: 1790
		// Start offset: 0x800135D8
		// Variables:
	// 		long *command; // $v1

		/* begin block 1.1 */
			// Start line: 1794
			// Start offset: 0x800135F8
			// Variables:
		// 		int incr; // $a2
		/* end block 1.1 */
		// End offset: 0x800136B4
		// End Line: 1811
	/* end block 1 */
	// End offset: 0x800136B4
	// End Line: 1812

	/* begin block 2 */
		// Start line: 3450
	/* end block 2 */
	// End Line: 3451

void handle_line_type_long(GameTracker *gt,DebugMenuLine *line)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((gt->controlCommand[1] & 0xcU) != 0) {
    uVar1 = gt->controlCommand[0];
    iVar3 = 10;
    if ((((uVar1 & 0x400) == 0) && (iVar3 = 100, (uVar1 & 0x800) == 0)) &&
       (iVar3 = 1, (uVar1 & 0x200) != 0)) {
      iVar3 = 1000;
    }
    if ((gt->controlCommand[1] & 4U) != 0) {
      iVar3 = -iVar3;
    }
    *line->var_address = *line->var_address + iVar3;
    piVar2 = line->var_address;
    if (*piVar2 < line->lower) {
      *piVar2 = line->lower;
      piVar2 = line->var_address;
    }
    if (line->upper < *piVar2) {
      *piVar2 = line->upper;
    }
    if ((code *)line->bit_mask != (code *)0x0) {
      (*(code *)line->bit_mask)(line->var_address);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ handle_line_type_bit(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *line /*$a1*/)
 // line 1814, offset 0x800136c4
	/* begin block 1 */
		// Start line: 1816
		// Start offset: 0x800136C4
	/* end block 1 */
	// End offset: 0x80013714
	// End Line: 1823

	/* begin block 2 */
		// Start line: 3501
	/* end block 2 */
	// End Line: 3502

	/* begin block 3 */
		// Start line: 3502
	/* end block 3 */
	// End Line: 3503

	/* begin block 4 */
		// Start line: 3504
	/* end block 4 */
	// End Line: 3505

void handle_line_type_bit(GameTracker *gt,DebugMenuLine *line)

{
  if ((gt->controlCommand[1] & 4U) != 0) {
    *line->var_address = *line->var_address | line->bit_mask;
    return;
  }
  if ((gt->controlCommand[1] & 8U) != 0) {
    *line->var_address = *line->var_address & ~line->bit_mask;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ handle_line_type_action(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *line /*$a1*/)
 // line 1825, offset 0x8001371c
	/* begin block 1 */
		// Start line: 1826
		// Start offset: 0x8001371C
		// Variables:
	// 		int ok; // $v0
	/* end block 1 */
	// End offset: 0x80013748
	// End Line: 1835

	/* begin block 2 */
		// Start line: 3523
	/* end block 2 */
	// End Line: 3524

void handle_line_type_action(GameTracker *gt,DebugMenuLine *line)

{
  if ((gt->controlCommand[1] & 0x80U) != 0) {
    (*(code *)line->var_address)();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ handle_line_type_action_with_line(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *line /*$a1*/)
 // line 1837, offset 0x80013758
	/* begin block 1 */
		// Start line: 1838
		// Start offset: 0x80013758
		// Variables:
	// 		enum option_ctrl_t ctrl; // $a2
	/* end block 1 */
	// End offset: 0x800137AC
	// End Line: 1849

	/* begin block 2 */
		// Start line: 3547
	/* end block 2 */
	// End Line: 3548

void handle_line_type_action_with_line(GameTracker *gt,DebugMenuLine *line)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = gt->controlCommand[1];
  iVar2 = 2;
  if ((((uVar1 & 0x80) == 0) && (iVar2 = 3, (uVar1 & 4) == 0)) && (iVar2 = 1, (uVar1 & 8) != 0)) {
    iVar2 = 4;
  }
  if (iVar2 != 1) {
    (*(code *)line->var_address)();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ handle_line_type_menu(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *line /*$s0*/)
 // line 1853, offset 0x800137bc
	/* begin block 1 */
		// Start line: 1854
		// Start offset: 0x800137BC
		// Variables:
	// 		int ok; // $v0
	/* end block 1 */
	// End offset: 0x8001382C
	// End Line: 1870

	/* begin block 2 */
		// Start line: 3579
	/* end block 2 */
	// End Line: 3580

void handle_line_type_menu(GameTracker *gt,DebugMenuLine *line)

{
  DebugMenuLine *pDVar1;
  
  if ((gt->controlCommand[1] & 0x80U) != 0) {
    if ((code *)line->bit_mask != (code *)0x0) {
      (*(code *)line->bit_mask)();
    }
    pDVar1 = get_last_menu_line(line);
    pDVar1->lower = debugMenuChoice;
    the_previous_menu = currentMenu;
    currentMenu = (DebugMenuLine *)line->var_address;
    pDVar1 = get_last_menu_line((DebugMenuLine *)line->var_address);
    debugMenuChoice = pDVar1->lower;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ process_menu_line(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *menu /*$a1*/)
 // line 1889, offset 0x8001383c
	/* begin block 1 */
		// Start line: 1890
		// Start offset: 0x8001383C
		// Variables:
	// 		struct DebugMenuLine *line; // $a1

		/* begin block 1.1 */
			// Start line: 1893
			// Start offset: 0x8001386C
			// Variables:
		// 		struct debug_dispatch_t *dispatch; // $v1
		/* end block 1.1 */
		// End offset: 0x80013890
		// End Line: 1898
	/* end block 1 */
	// End offset: 0x80013890
	// End Line: 1899

	/* begin block 2 */
		// Start line: 3652
	/* end block 2 */
	// End Line: 3653

	/* begin block 3 */
		// Start line: 3653
	/* end block 3 */
	// End Line: 3654

void process_menu_line(GameTracker *gt,DebugMenuLine *menu)

{
  if ((menu[debugMenuChoice].type < DEBUG_LINE_TYPE_ENDLIST) &&
     ((code *)(&PTR_handle_line_type_bit_800c8720)[menu[debugMenuChoice].type * 2] != (code *)0x0))
  {
    (*(code *)(&PTR_handle_line_type_bit_800c8720)[menu[debugMenuChoice].type * 2])();
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ pre_process_functions(struct GameTracker *gt /*$a0*/, struct DebugMenuLine *menu /*$a1*/)
 // line 1903, offset 0x800138a0
	/* begin block 1 */
		// Start line: 3681
	/* end block 1 */
	// End Line: 3682

	/* begin block 2 */
		// Start line: 3682
	/* end block 2 */
	// End Line: 3683

int pre_process_functions(GameTracker *gt,DebugMenuLine *menu)

{
  _Instance *p_Var1;
  
  p_Var1 = gt->playerInstance;
  if (p_Var1 != (_Instance *)0x0) {
    p_Var1->flags = p_Var1->flags | 0x100;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ post_process_functions(struct GameTracker *gt /*$s0*/, struct DebugMenuLine *menu /*$a1*/)
 // line 1911, offset 0x800138c8
	/* begin block 1 */
		// Start line: 3697
	/* end block 1 */
	// End Line: 3698

void post_process_functions(GameTracker *gt,DebugMenuLine *menu)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_debug_leading()
 // line 1966, offset 0x8001396c
	/* begin block 1 */
		// Start line: 3807
	/* end block 1 */
	// End Line: 3808

	/* begin block 2 */
		// Start line: 3808
	/* end block 2 */
	// End Line: 3809

/* WARNING: Unknown calling convention yet parameter storage is locked */

void set_debug_leading(void)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  byte *unaff_s1;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *unaff_s4;
  int unaff_s5;
  
  while( true ) {
    pbVar3 = unaff_s1;
    if (in_v0 == 0) goto LAB_80013978;
    iVar4 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf50,7);
    if (iVar4 != 0) break;
    unaff_s4[2] = 1;
    unaff_s1 = unaff_s1 + 7;
    while( true ) {
      if (*unaff_s1 == 0) {
        return;
      }
      iVar4 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
      pbVar3 = unaff_s1;
      if (iVar4 != 0) break;
LAB_80013978:
      unaff_s1 = pbVar3 + 5;
      iVar4 = 0;
      iVar5 = 0;
      while (iVar2 = FUN_80013900((uint)*unaff_s1), iVar2 != 0) {
        bVar1 = *unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        iVar4 = iVar4 * 10 + (uint)bVar1 + -0x30;
      }
      if (*unaff_s1 != 0) {
        unaff_s1 = unaff_s1 + 1;
      }
      while (iVar2 = FUN_80013900((uint)*unaff_s1), iVar2 != 0) {
        bVar1 = *unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        iVar5 = iVar5 * 10 + (uint)bVar1 + -0x30;
      }
      if (*unaff_s1 != 0) {
        unaff_s1 = unaff_s1 + 1;
      }
      iVar2 = FUN_800ba5e8(pbVar3,unaff_s5 + -0x20c0,5);
      if (iVar2 == 0) {
        *unaff_s4 = iVar4;
        unaff_s4[1] = iVar5;
      }
      else {
        *unaff_s4 = *unaff_s4 + iVar4;
        unaff_s4[1] = unaff_s4[1] + iVar5;
      }
    }
    in_v0 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf48,5);
  }
  FUN_800741ac(LONG_ARRAY_800cdf58,unaff_s1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_user_leading()
 // line 1972, offset 0x80013984
	/* begin block 1 */
		// Start line: 3819
	/* end block 1 */
	// End Line: 3820

	/* begin block 2 */
		// Start line: 3821
	/* end block 2 */
	// End Line: 3822

/* WARNING: Unknown calling convention yet parameter storage is locked */

void set_user_leading(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  
  do {
    while (iVar2 = FUN_80013900((uint)*unaff_s0), iVar2 != 0) {
      bVar1 = *unaff_s0;
      unaff_s0 = unaff_s0 + 1;
      unaff_s2 = unaff_s2 * 10 + (uint)bVar1 + -0x30;
    }
    if (*unaff_s0 != 0) {
      unaff_s0 = unaff_s0 + 1;
    }
    while (iVar2 = FUN_80013900((uint)*unaff_s0), iVar2 != 0) {
      bVar1 = *unaff_s0;
      unaff_s0 = unaff_s0 + 1;
      unaff_s3 = unaff_s3 * 10 + (uint)bVar1 + -0x30;
    }
    if (*unaff_s0 != 0) {
      unaff_s0 = unaff_s0 + 1;
    }
    iVar2 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
    if (iVar2 == 0) {
      *unaff_s4 = unaff_s2;
      unaff_s4[1] = unaff_s3;
      unaff_s1 = unaff_s0;
    }
    else {
      *unaff_s4 = *unaff_s4 + unaff_s2;
      unaff_s4[1] = unaff_s4[1] + unaff_s3;
      unaff_s1 = unaff_s0;
    }
    while( true ) {
      if (*unaff_s1 == 0) {
        return;
      }
      iVar2 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
      if ((iVar2 == 0) || (iVar2 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf48,5), iVar2 == 0)) break;
      iVar2 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf50,7);
      if (iVar2 != 0) {
        FUN_800741ac(LONG_ARRAY_800cdf58,unaff_s1);
        return;
      }
      unaff_s4[2] = 1;
      unaff_s1 = unaff_s1 + 7;
    }
    unaff_s0 = unaff_s1 + 5;
    unaff_s2 = 0;
    unaff_s3 = 0;
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ isdigit(char c /*$a0*/)
 // line 1992, offset 0x8001399c
	/* begin block 1 */
		// Start line: 3859
	/* end block 1 */
	// End Line: 3860

	/* begin block 2 */
		// Start line: 3860
	/* end block 2 */
	// End Line: 3861

int isdigit(char c)

{
  byte bVar1;
  int iVar2;
  int in_v0;
  uint in_v1;
  byte *unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  
  do {
    unaff_s0 = unaff_s0 + 1;
    unaff_s2 = (in_v0 + unaff_s2) * 2 + in_v1 + -0x30;
    while( true ) {
      iVar2 = FUN_80013900((uint)*unaff_s0);
      in_v0 = unaff_s2 << 2;
      if (iVar2 != 0) break;
      if (*unaff_s0 != 0) {
        unaff_s0 = unaff_s0 + 1;
      }
      while (iVar2 = FUN_80013900((uint)*unaff_s0), iVar2 != 0) {
        bVar1 = *unaff_s0;
        unaff_s0 = unaff_s0 + 1;
        unaff_s3 = unaff_s3 * 10 + (uint)bVar1 + -0x30;
      }
      if (*unaff_s0 != 0) {
        unaff_s0 = unaff_s0 + 1;
      }
      iVar2 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
      if (iVar2 == 0) {
        *unaff_s4 = unaff_s2;
        unaff_s4[1] = unaff_s3;
        unaff_s1 = unaff_s0;
      }
      else {
        *unaff_s4 = *unaff_s4 + unaff_s2;
        unaff_s4[1] = unaff_s4[1] + unaff_s3;
        unaff_s1 = unaff_s0;
      }
      while( true ) {
        if (*unaff_s1 == 0) {
          return (uint)*unaff_s1;
        }
        iVar2 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
        if ((iVar2 == 0) || (iVar2 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf48,5), iVar2 == 0))
        break;
        iVar2 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf50,7);
        if (iVar2 != 0) {
          iVar2 = FUN_800741ac(LONG_ARRAY_800cdf58,unaff_s1);
          return iVar2;
        }
        unaff_s4[2] = 1;
        unaff_s1 = unaff_s1 + 7;
      }
      unaff_s0 = unaff_s1 + 5;
      unaff_s2 = 0;
      unaff_s3 = 0;
    }
    in_v1 = (uint)*unaff_s0;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ adjust_format(char *ctrl /*$s1*/, struct debug_format_t *fmt /*$s4*/)
 // line 1997, offset 0x800139ac
	/* begin block 1 */
		// Start line: 1998
		// Start offset: 0x800139AC

		/* begin block 1.1 */
			// Start line: 2002
			// Start offset: 0x80013A14
			// Variables:
		// 		char *p; // $s0
		// 		int x; // $s2
		// 		int y; // $s3
		/* end block 1.1 */
		// End offset: 0x80013AE0
		// End Line: 2016
	/* end block 1 */
	// End offset: 0x80013B30
	// End Line: 2025

	/* begin block 2 */
		// Start line: 3869
	/* end block 2 */
	// End Line: 3870

void adjust_format(char *ctrl,debug_format_t *fmt)

{
  byte bVar1;
  int iVar2;
  int in_v0;
  byte *unaff_s0;
  byte *unaff_s1;
  int iVar3;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  
  do {
    iVar3 = in_v0 + -0x30;
    while (iVar2 = FUN_80013900((uint)*unaff_s0), iVar2 == 0) {
      if (*unaff_s0 != 0) {
        unaff_s0 = unaff_s0 + 1;
      }
      while (iVar2 = FUN_80013900((uint)*unaff_s0), iVar2 != 0) {
        bVar1 = *unaff_s0;
        unaff_s0 = unaff_s0 + 1;
        unaff_s3 = unaff_s3 * 10 + (uint)bVar1 + -0x30;
      }
      if (*unaff_s0 != 0) {
        unaff_s0 = unaff_s0 + 1;
      }
      iVar2 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
      if (iVar2 == 0) {
        *unaff_s4 = iVar3;
        unaff_s4[1] = unaff_s3;
        unaff_s1 = unaff_s0;
      }
      else {
        *unaff_s4 = *unaff_s4 + iVar3;
        unaff_s4[1] = unaff_s4[1] + unaff_s3;
        unaff_s1 = unaff_s0;
      }
      while( true ) {
        if (*unaff_s1 == 0) {
          return;
        }
        iVar3 = FUN_800ba5e8(unaff_s1,unaff_s5 + -0x20c0,5);
        if ((iVar3 == 0) || (iVar3 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf48,5), iVar3 == 0))
        break;
        iVar3 = FUN_800ba5e8(unaff_s1,LONG_ARRAY_800cdf50,7);
        if (iVar3 != 0) {
          FUN_800741ac(LONG_ARRAY_800cdf58,unaff_s1);
          return;
        }
        unaff_s4[2] = 1;
        unaff_s1 = unaff_s1 + 7;
      }
      unaff_s0 = unaff_s1 + 5;
      iVar3 = 0;
      unaff_s3 = 0;
    }
    bVar1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    in_v0 = iVar3 * 10 + (uint)bVar1;
  } while( true );
}



// decompiled code
// original method signature: 
// char * /*$ra*/ find_eol(char *text /*$v0*/)
 // line 2027, offset 0x80013b54
	/* begin block 1 */
		// Start line: 3956
	/* end block 1 */
	// End Line: 3957

char * find_eol(char *text)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_s0;
  char *unaff_s1;
  ushort *unaff_s2;
  char unaff_s3;
  
  do {
    iVar3 = (int)(short)*unaff_s2;
    uVar1 = unaff_s2[2];
    while( true ) {
      FUN_8002d4f4(iVar3,(int)(short)uVar1);
      if (currentMenu->type == DEBUG_LINE_TYPE_FORMAT) {
        FUN_8002d3a0(unaff_s0);
      }
      else {
        FUN_8002d310(unaff_s0);
      }
      unaff_s0 = unaff_s1 + 1;
      if (unaff_s3 == '\0') {
        pcVar2 = (char *)(*(int *)(unaff_s2 + 2) + cem_item_leading);
        *(char **)(unaff_s2 + 2) = pcVar2;
        return pcVar2;
      }
      *unaff_s1 = unaff_s3;
      *(int *)(unaff_s2 + 2) = *(int *)(unaff_s2 + 2) + cem_line_leading;
      unaff_s1 = (char *)FUN_80013ab8(unaff_s0);
      unaff_s3 = *unaff_s1;
      *unaff_s1 = '\0';
      if (*(int *)(unaff_s2 + 4) == 0) break;
      iVar3 = FUN_8002d3f0(unaff_s0);
      uVar1 = unaff_s2[2];
      iVar3 = (int)(((uint)*unaff_s2 - (iVar3 >> 1)) * 0x10000) >> 0x10;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ draw_menu_item(struct GameTracker *gt /*$a0*/, struct debug_format_t *fmt /*$s2*/, char *text /*$s0*/)
 // line 2035, offset 0x80013b8c
	/* begin block 1 */
		// Start line: 2037
		// Start offset: 0x80013BAC

		/* begin block 1.1 */
			// Start line: 2038
			// Start offset: 0x80013BAC
			// Variables:
		// 		char *eol; // $s1
		// 		char c; // $s3

			/* begin block 1.1.1 */
				// Start line: 2042
				// Start offset: 0x80013BD0
			/* end block 1.1.1 */
			// End offset: 0x80013BD0
			// End Line: 2042
		/* end block 1.1 */
		// End offset: 0x80013C40
		// End Line: 2058
	/* end block 1 */
	// End offset: 0x80013C5C
	// End Line: 2062

	/* begin block 2 */
		// Start line: 3972
	/* end block 2 */
	// End Line: 3973

void draw_menu_item(GameTracker *gt,debug_format_t *fmt,char *text)

{
  ushort uVar1;
  int iVar2;
  char *unaff_s0;
  char *unaff_s1;
  ushort *unaff_s2;
  char unaff_s3;
  
  do {
    FUN_8002d3a0(unaff_s0);
    while( true ) {
      unaff_s0 = unaff_s1 + 1;
      if (unaff_s3 == '\0') {
        *(int *)(unaff_s2 + 2) = *(int *)(unaff_s2 + 2) + cem_item_leading;
        return;
      }
      *unaff_s1 = unaff_s3;
      *(int *)(unaff_s2 + 2) = *(int *)(unaff_s2 + 2) + cem_line_leading;
      unaff_s1 = (char *)FUN_80013ab8(unaff_s0);
      unaff_s3 = *unaff_s1;
      *unaff_s1 = '\0';
      if (*(int *)(unaff_s2 + 4) == 0) {
        iVar2 = (int)(short)*unaff_s2;
        uVar1 = unaff_s2[2];
      }
      else {
        iVar2 = FUN_8002d3f0(unaff_s0);
        uVar1 = unaff_s2[2];
        iVar2 = (int)(((uint)*unaff_s2 - (iVar2 >> 1)) * 0x10000) >> 0x10;
      }
      FUN_8002d4f4(iVar2,(int)(short)uVar1);
      if (currentMenu->type == DEBUG_LINE_TYPE_FORMAT) break;
      FUN_8002d310(unaff_s0);
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ draw_menu(struct GameTracker *gt /*$s4*/, struct DebugMenuLine *menu /*$s0*/)
 // line 2065, offset 0x80013c8c
	/* begin block 1 */
		// Start line: 2066
		// Start offset: 0x80013C8C
		// Variables:
	// 		struct debug_format_t fmt; // stack offset -56
	// 		int i; // $s3

		/* begin block 1.1 */
			// Start line: 2079
			// Start offset: 0x80013D0C
			// Variables:
		// 		int xpos; // $s2
		// 		int ypos; // $s1
		/* end block 1.1 */
		// End offset: 0x80013E60
		// End Line: 2123
	/* end block 1 */
	// End offset: 0x80013E78
	// End Line: 2124

	/* begin block 2 */
		// Start line: 4055
	/* end block 2 */
	// End Line: 4056

	/* begin block 3 */
		// Start line: 4056
	/* end block 3 */
	// End Line: 4057

void draw_menu(GameTracker *gt,DebugMenuLine *menu)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int *unaff_s0;
  int unaff_s3;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  
  do {
    FUN_80013910(gt,&stack0x00000010);
    unaff_s0 = unaff_s0 + 6;
    while( true ) {
      iVar1 = in_stack_00000010;
      unaff_s3 = unaff_s3 + 1;
      if (*unaff_s0 == 5) {
        return;
      }
      if (*unaff_s0 == 6) break;
      sVar4 = (short)in_stack_00000014;
      if (debugMenuChoice == unaff_s3) {
        if (in_stack_00000018 == 0) {
          sVar2 = (short)in_stack_00000010 - (short)cem_cursor_width;
        }
        else {
          sVar2 = ((short)in_stack_00000010 - (short)(cem_line_width >> 1)) -
                  (short)cem_cursor_width;
        }
        FUN_8002d4f4((int)sVar2,(int)sVar4);
        FUN_8002d310(&shorten_count);
      }
      FUN_80013af0();
      if (in_stack_00000018 == 0) {
        uVar3 = cem_line_width & 0xffff;
      }
      else {
        uVar3 = cem_line_width >> 1;
      }
      FUN_8002d4f4((int)((uVar3 + iVar1) * 0x10000) >> 0x10,(int)sVar4);
      if (*unaff_s0 == 0) {
        if ((*(uint *)unaff_s0[4] & unaff_s0[5]) == unaff_s0[5]) {
          FUN_8002d310(&camera_still);
          unaff_s0 = unaff_s0 + 6;
        }
        else {
          FUN_8002d310(&roll_target);
          unaff_s0 = unaff_s0 + 6;
        }
      }
      else {
        if (*unaff_s0 == 1) {
          FUN_8002d310(&current_roll_amount,*(undefined4 *)unaff_s0[4]);
          unaff_s0 = unaff_s0 + 6;
        }
        else {
          unaff_s0 = unaff_s0 + 6;
        }
      }
    }
    gt = (GameTracker *)unaff_s0[3];
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_Menu(struct GameTracker *gt /*$s1*/)
 // line 2126, offset 0x80013e98
	/* begin block 1 */
		// Start line: 2127
		// Start offset: 0x80013E98
		// Variables:
	// 		struct DebugMenuLine *menu; // $s0
	// 		int choice; // $s2
	/* end block 1 */
	// End offset: 0x80013F94
	// End Line: 2150

	/* begin block 2 */
		// Start line: 4230
	/* end block 2 */
	// End Line: 4231

void DEBUG_Menu(GameTracker *gt)

{
  int in_v0;
  DebugMenuLine *in_v1;
  DebugMenuLine *menu;
  GameTracker *gt_00;
  int unaff_s2;
  
  while( true ) {
    if (in_v1->type < DEBUG_LINE_TYPE_FORMAT) break;
    in_v1 = menu + in_v0 + 1;
    in_v0 = in_v0 + 1;
  }
  debugMenuChoice = in_v0;
  FUN_80013bf0();
  maybe_change_menu_choice(gt_00,menu);
  if ((debugMenuChoice == unaff_s2) && (process_menu_line(gt_00,menu), currentMenu == menu)) {
    post_process_functions(gt_00,menu);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_DisplayStatus(struct GameTracker *gameTracker /*$s1*/)
 // line 2165, offset 0x80013fac
	/* begin block 1 */
		// Start line: 2166
		// Start offset: 0x80013FAC

		/* begin block 1.1 */
			// Start line: 2425
			// Start offset: 0x8001414C
			// Variables:
		// 		int deg; // $a0
		/* end block 1.1 */
		// End offset: 0x800141D0
		// End Line: 2438

		/* begin block 1.2 */
			// Start line: 2444
			// Start offset: 0x800141E0
			// Variables:
		// 		long numberInQueue; // stack offset -24
		/* end block 1.2 */
		// End offset: 0x80014200
		// End Line: 2451
	/* end block 1 */
	// End offset: 0x80014200
	// End Line: 2488

	/* begin block 2 */
		// Start line: 4317
	/* end block 2 */
	// End Line: 4318

void DEBUG_DisplayStatus(GameTracker *gameTracker)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s1;
  undefined4 in_stack_00000010;
  
  FUN_8002d310(&HandleGlobalValueSignal,**(int **)(unaff_s1 + 0x34) + 1);
  FUN_8002d310(&DAT_800cdfb8,(int)*(short *)(cwTransform2X.m._4_4_ + 0x5c),
               (int)*(short *)(cwTransform2X.m._4_4_ + 0x5e),
               (int)*(short *)(cwTransform2X.m._4_4_ + 0x60));
  if ((*(uint *)(unaff_s1 + 0xc0) & 4) != 0) {
    if (*(int *)(unaff_s1 + 600) == 0) {
      FUN_8002d310(0x800cdfe0);
    }
    else {
      FUN_8002d310(0x800cdfd0,(uint)(*(int *)(unaff_s1 + 600) * 100) / 0x8235);
    }
    FUN_8002d310(0x800cdfec,*(undefined4 *)(unaff_s1 + 0x228));
    FUN_8002d310(0x800cdff8,level2SelectMenu.lower);
    FUN_8002d310(SignalInfo_ARRAY_800ce008,(uint)*(ushort *)(*(int *)(unaff_s1 + 0x28) + 0x46),
                 (uint)*(ushort *)(*(int *)(unaff_s1 + 0x28) + 0x44));
    FUN_8002d310(0x800ce028,(int)gameTrackerX.instancePool._2_2_);
  }
  uVar1 = FUN_8004ffd8();
  uVar2 = FUN_800b6e88();
  FUN_8002d310(0x800ce03c,uVar1,uVar2);
  FUN_8002d310(0x800ce058,unaff_s1 + 0x15c);
  iVar3 = (int)(short)debugRazielMenu.bit_mask;
  if (iVar3 < 0x801) {
    iVar3 = -iVar3;
  }
  else {
    iVar3 = 0x1000 - iVar3;
  }
  iVar3 = iVar3 * 0x168;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  FUN_8002d310(SignalInfo_ARRAY_800ce068,iVar3 >> 0xc,(int)camera_shakeOffset[14].z);
  if ((*(int *)(unaff_s1 + 0xc0) < 0) && (iVar3 = FUN_8005fd58(&stack0x00000010), iVar3 != 0)) {
    FUN_8002d310(SignalInfo_ARRAY_800ce080,in_stack_00000010);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_DrawShrinkCels(unsigned long **polyAddr /*$a0*/)
 // line 3564, offset 0x80014214
	/* begin block 1 */
		// Start line: 7128
	/* end block 1 */
	// End Line: 7129

	/* begin block 2 */
		// Start line: 6157
	/* end block 2 */
	// End Line: 6158

void DEBUG_DrawShrinkCels(ulong **polyAddr)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ContinueGame()
 // line 3736, offset 0x8001421c
	/* begin block 1 */
		// Start line: 7472
	/* end block 1 */
	// End Line: 7473

	/* begin block 2 */
		// Start line: 6331
	/* end block 2 */
	// End Line: 6332

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEBUG_ContinueGame(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ExitGame()
 // line 3757, offset 0x80014234
	/* begin block 1 */
		// Start line: 6371
	/* end block 1 */
	// End Line: 6372

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEBUG_ExitGame(void)

{
  int in_a0;
  int unaff_s1;
  undefined4 uStack00000010;
  
  if (((*(uint *)(in_a0 + 4) & 1) != 0) && (-1 < DAT_800cdf34)) {
    DAT_800cdf34 = DAT_800cdf34 + -0x20;
  }
  if (((*(uint *)(in_a0 + 4) & 2) != 0) && (DAT_800cdf34 < 0x110)) {
    DAT_800cdf34 = DAT_800cdf34 + 0x20;
  }
  if (((*(uint *)(in_a0 + 4) & 4) != 0) && (-1 < DAT_800cdf30)) {
    DAT_800cdf30 = DAT_800cdf30 + -0x20;
  }
  if (((*(uint *)(in_a0 + 4) & 8) != 0) && (DAT_800cdf30 < 0x200)) {
    DAT_800cdf30 = DAT_800cdf30 + 0x20;
  }
  uStack00000010 = 0xf0;
  FUN_800bd07c(&lastPad_24,DAT_800cdf30,DAT_800cdf34,0x200);
  uStack00000010 = 0xf0;
  FUN_800bd07c(&LONG_800d0c74,DAT_800cdf30,DAT_800cdf34,0x200);
  *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) = *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) | 0x100;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_EndViewVram(struct GameTracker *gameTracker /*$a0*/)
 // line 3940, offset 0x80014270
	/* begin block 1 */
		// Start line: 7880
	/* end block 1 */
	// End Line: 7881

void DEBUG_EndViewVram(GameTracker *gameTracker)

{
  int in_v0;
  int unaff_s1;
  undefined4 uStack00000010;
  
  if ((in_v0 != 0) && (DAT_800cdf34 < 0x110)) {
    DAT_800cdf34 = DAT_800cdf34 + 0x20;
  }
  if ((((gameTracker->gameData).asmData.dispPage & 4U) != 0) && (-1 < DAT_800cdf30)) {
    DAT_800cdf30 = DAT_800cdf30 + -0x20;
  }
  if ((((gameTracker->gameData).asmData.dispPage & 8U) != 0) && (DAT_800cdf30 < 0x200)) {
    DAT_800cdf30 = DAT_800cdf30 + 0x20;
  }
  uStack00000010 = 0xf0;
  FUN_800bd07c(&lastPad_24,DAT_800cdf30,DAT_800cdf34,0x200);
  uStack00000010 = 0xf0;
  FUN_800bd07c(&LONG_800d0c74,DAT_800cdf30,DAT_800cdf34,0x200);
  *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) = *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) | 0x100;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ViewVram(struct GameTracker *gameTracker /*$s1*/)
 // line 3946, offset 0x800142c0
	/* begin block 1 */
		// Start line: 3947
		// Start offset: 0x800142C0
		// Variables:
	// 		long *controlCommand; // $a0
	// 		static int xPos; // offset 0x478
	// 		static int yPos; // offset 0x47c
	/* end block 1 */
	// End offset: 0x80014380
	// End Line: 3973

	/* begin block 2 */
		// Start line: 6577
	/* end block 2 */
	// End Line: 6578

void DEBUG_ViewVram(GameTracker *gameTracker)

{
  uint in_v0;
  int unaff_s1;
  undefined4 uStack00000010;
  
  if (((in_v0 & 8) != 0) && (DAT_800cdf30 < 0x200)) {
    DAT_800cdf30 = DAT_800cdf30 + 0x20;
  }
  uStack00000010 = 0xf0;
  FUN_800bd07c(&lastPad_24,DAT_800cdf30,DAT_800cdf34,0x200);
  uStack00000010 = 0xf0;
  FUN_800bd07c(&LONG_800d0c74,DAT_800cdf30,DAT_800cdf34,0x200);
  *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) = *(uint *)(*(int *)(unaff_s1 + 0x2c) + 0x14) | 0x100;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_CaptureScreen(struct GameTracker *gameTracker /*$a0*/)
 // line 3984, offset 0x800143e0
	/* begin block 1 */
		// Start line: 6656
	/* end block 1 */
	// End Line: 6657

	/* begin block 2 */
		// Start line: 6705
	/* end block 2 */
	// End Line: 6706

void DEBUG_CaptureScreen(GameTracker *gameTracker)

{
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  undefined2 uStack00000020;
  short sStack00000022;
  undefined2 uStack00000024;
  short sStack00000026;
  
  uStack00000018 = 0;
  uStack0000001a = 0xe;
  uStack0000001c = 0x1ff;
  uStack0000001e = 0xe;
  uStack00000020 = 0;
  uStack00000024 = 0x1ff;
  sStack00000022 = fontTracker.font_buffer[176]._4_2_ + -2;
  sStack00000026 = sStack00000022;
  FUN_800bad08();
  FUN_8002d464();
  FUN_800bad64();
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_PageFlip()
 // line 4046, offset 0x800143e8
	/* begin block 1 */
		// Start line: 4047
		// Start offset: 0x800143E8
		// Variables:
	// 		struct POLY_F4 poly; // stack offset -32
	// 		unsigned long **drawot; // $s0
	/* end block 1 */
	// End offset: 0x800143E8
	// End Line: 4047

	/* begin block 2 */
		// Start line: 8086
	/* end block 2 */
	// End Line: 8087

	/* begin block 3 */
		// Start line: 6773
	/* end block 3 */
	// End Line: 6774

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEBUG_PageFlip(void)

{
  undefined2 uStack00000018;
  undefined2 uStack0000001c;
  undefined2 uStack00000020;
  short sStack00000022;
  undefined2 uStack00000024;
  short sStack00000026;
  
  uStack00000018 = 0;
  uStack0000001c = 0x1ff;
  uStack00000020 = 0;
  uStack00000024 = 0x1ff;
  sStack00000022 = fontTracker.font_buffer[176]._4_2_ + -2;
  sStack00000026 = sStack00000022;
  FUN_800bad08();
  FUN_8002d464();
  FUN_800bad64();
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_FatalError(char *fmt /*stack 0*/)
 // line 4090, offset 0x800144f0
	/* begin block 1 */
		// Start line: 4091
		// Start offset: 0x800144F0
		// Variables:
	// 		char msg[256]; // stack offset -264
	/* end block 1 */
	// End offset: 0x800144F0
	// End Line: 4091

	/* begin block 2 */
		// Start line: 8180
	/* end block 2 */
	// End Line: 8181

void DEBUG_FatalError(char *fmt)

{
  int in_v1;
  int unaff_s2;
  
  if (in_v1 == 5) {
    unaff_s2 = 0xa00;
  }
  else {
    if (((uint)fmt & 9) == 9) {
      unaff_s2 = 0x600;
    }
    else {
      if (((uint)fmt & 6) == 6) {
        unaff_s2 = 0xe00;
      }
      else {
        if (((uint)fmt & 10) == 10) {
          unaff_s2 = 0x200;
        }
        else {
          if (((uint)fmt & 2) == 0) {
            if (((uint)fmt & 4) == 0) {
              if (((uint)fmt & 8) == 0) {
                if (((uint)fmt & 1) != 0) {
                  unaff_s2 = 0x800;
                }
              }
              else {
                unaff_s2 = 0x400;
              }
            }
            else {
              unaff_s2 = 0xc00;
            }
          }
          else {
            unaff_s2 = 0x1000;
          }
        }
      }
    }
  }
  if (unaff_s2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800bcdac(&stack0x00000010,0,8);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ProcessSecondController(struct GameTracker *gameTracker /*$a0*/)
 // line 4447, offset 0x80014544
	/* begin block 1 */
		// Start line: 7580
	/* end block 1 */
	// End Line: 7581

	/* begin block 2 */
		// Start line: 7666
	/* end block 2 */
	// End Line: 7667

/* WARNING: Removing unreachable block (ram,0x80014608) */

void DEBUG_ProcessSecondController(GameTracker *gameTracker)

{
                    /* WARNING: Subroutine does not return */
  FUN_800bcdac(&stack0x00000010,0,8);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_ProcessCheat(struct GameTracker *gameTracker /*$s3*/)
 // line 4538, offset 0x8001454c
	/* begin block 1 */
		// Start line: 4539
		// Start offset: 0x8001454C
		// Variables:
	// 		long angleRelCamera; // $s2

		/* begin block 1.1 */
			// Start line: 4565
			// Start offset: 0x80014620
			// Variables:
		// 		struct SVECTOR v; // stack offset -80
		// 		struct VECTOR dv; // stack offset -72
		// 		struct MATRIX rotate_mat; // stack offset -56
		/* end block 1.1 */
		// End offset: 0x800146A4
		// End Line: 4575
	/* end block 1 */
	// End offset: 0x800146A4
	// End Line: 4576

	/* begin block 2 */
		// Start line: 7762
	/* end block 2 */
	// End Line: 7763

void DEBUG_ProcessCheat(GameTracker *gameTracker)

{
  int in_v0;
  int iVar1;
  
  iVar1 = 0x1000;
  if (in_v0 == 0) {
    if (((uint)gameTracker & 8) == 0) {
      if (((uint)gameTracker & 1) != 0) {
        iVar1 = 0x800;
      }
    }
    else {
      iVar1 = 0x400;
    }
  }
  else {
    iVar1 = 0xc00;
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800bcdac(&stack0x00000010,0,8);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEBUG_DoAreaProtection()
 // line 4593, offset 0x800146c0
	/* begin block 1 */
		// Start line: 4596
		// Start offset: 0x800146C8
	/* end block 1 */
	// End offset: 0x800146D8
	// End Line: 4603

	/* begin block 2 */
		// Start line: 7873
	/* end block 2 */
	// End Line: 7874

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEBUG_DoAreaProtection(void)

{
  undefined2 in_v0;
  short in_a1;
  short in_a2;
  int unaff_s0;
  short in_stack_00000010;
  short in_stack_00000012;
  short in_stack_00000014;
  short in_stack_00000018;
  short in_stack_0000001a;
  short in_stack_0000001c;
  short in_stack_00000020;
  short sStack00000022;
  short in_stack_00000024;
  short sStack00000028;
  short sStack0000002a;
  short in_stack_0000002c;
  
  *(undefined2 *)(unaff_s0 + 0x78) = 0;
  *(undefined2 *)(unaff_s0 + 0x7a) = 0;
  *(undefined2 *)(unaff_s0 + 0x7c) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x80) =
       (short)((int)in_stack_00000012 * (int)in_stack_0000001c -
               (int)in_stack_00000014 * (int)in_stack_0000001a >> 0xc);
  *(short *)(unaff_s0 + 0x82) =
       -(short)((int)in_stack_00000010 * (int)in_stack_0000001c -
                (int)in_stack_00000014 * (int)in_stack_00000018 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x84) =
       (short)((int)in_stack_00000010 * (int)in_stack_0000001a -
               (int)in_stack_00000012 * (int)in_stack_00000018 >> 0xc);
  sStack00000022 = in_a1;
  sStack00000028 = in_a2;
  sStack0000002a = in_a1;
  FUN_800187c0(unaff_s0 + 0x80);
  *(undefined2 *)(unaff_s0 + 0x88) =
       (short)((int)sStack00000022 * (int)in_stack_00000014 -
               (int)in_stack_00000024 * (int)in_stack_00000012 >> 0xc);
  *(short *)(unaff_s0 + 0x8a) =
       -(short)((int)in_stack_00000020 * (int)in_stack_00000014 -
                (int)in_stack_00000024 * (int)in_stack_00000010 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x8c) =
       (short)((int)in_stack_00000020 * (int)in_stack_00000012 -
               (int)sStack00000022 * (int)in_stack_00000010 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x88);
  *(undefined2 *)(unaff_s0 + 0x90) =
       (short)((int)in_stack_0000001a * (int)in_stack_0000002c -
               (int)in_stack_0000001c * (int)sStack0000002a >> 0xc);
  *(short *)(unaff_s0 + 0x92) =
       -(short)((int)in_stack_00000018 * (int)in_stack_0000002c -
                (int)in_stack_0000001c * (int)sStack00000028 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x94) =
       (short)((int)in_stack_00000018 * (int)sStack0000002a -
               (int)in_stack_0000001a * (int)sStack00000028 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x90);
  *(undefined2 *)(unaff_s0 + 0x98) =
       (short)((int)sStack0000002a * (int)in_stack_00000024 -
               (int)in_stack_0000002c * (int)sStack00000022 >> 0xc);
  *(short *)(unaff_s0 + 0x9a) =
       -(short)((int)sStack00000028 * (int)in_stack_00000024 -
                (int)in_stack_0000002c * (int)in_stack_00000020 >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x9c) =
       (short)((int)sStack00000028 * (int)sStack00000022 -
               (int)sStack0000002a * (int)in_stack_00000020 >> 0xc);
  FUN_800187c0(unaff_s0 + 0x98);
  return;
}





