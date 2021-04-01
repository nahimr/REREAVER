#include "THISDUST.H"
#include "HEALTH.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitHealthSystem()
 // line 4, offset 0x800a45c8
	/* begin block 1 */
		// Start line: 8
	/* end block 1 */
	// End Line: 9

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitHealthSystem(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int *unaff_s3;
  
  if (((in_v1 == in_v0) && (unaff_s3[4] < 0x1c2)) && (unaff_s3[5] + 0x3fU < 0x7f)) {
    Raziel.State.SectionList[1].Defer.Queue[0].ID =
         Raziel.State.SectionList[1].Defer.Queue[0].ID | 0x40;
    Raziel.State.SectionList[1].Defer.Queue[7].ID = *unaff_s3;
  }
  if ((((**(uint **)(*unaff_s3 + 0x1c) & 0x100000) != 0) && (0x280 < (uint)unaff_s3[1])) &&
     (iVar1 = FUN_80039ff8(unaff_s3 + 2,0x2aa,0x2aa), iVar1 != 0)) {
    FUN_800a34e8();
  }
  if (((*(uint *)(*(int *)(*unaff_s3 + 0x1c) + 0x2c) & 0x20) != 0) && ((uint)unaff_s3[1] < 0x100)) {
    FUN_800a34e8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GainHealth(int data /*$a0*/)
 // line 32, offset 0x800a4668
	/* begin block 1 */
		// Start line: 71
	/* end block 1 */
	// End Line: 72

void GainHealth(int data)

{
  undefined4 in_a1;
  int *unaff_s3;
  
  FUN_800a34e8(data,in_a1,7);
  if (((*(uint *)(*(int *)(*unaff_s3 + 0x1c) + 0x2c) & 0x20) != 0) && ((uint)unaff_s3[1] < 0x100)) {
    FUN_800a34e8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoseHealth(int amount /*$a0*/)
 // line 47, offset 0x800a46f4
	/* begin block 1 */
		// Start line: 101
	/* end block 1 */
	// End Line: 102

void LoseHealth(int amount)

{
  int in_v0;
  int in_v1;
  int in_a1;
  int in_a2;
  
  FUN_80039654(in_a2 - in_v0,in_v1 - in_a1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrainHealth(int amount /*$a0*/)
 // line 72, offset 0x800a47f0
	/* begin block 1 */
		// Start line: 153
	/* end block 1 */
	// End Line: 154

void DrainHealth(int amount)

{
  int in_v0;
  int iVar1;
  int in_v1;
  
  Raziel.State.SectionList[1].Defer.Queue[12].ID = in_v0 + in_v1;
  iVar1 = FUN_800a4aa4();
  if ((iVar1 <= Raziel.State.SectionList[1].Defer.Queue[12].ID) &&
     (Raziel.State.SectionList[2].Event.Queue[1].ID == 1)) {
    Raziel.State.SectionList[1].Defer.Queue[12].ID = FUN_800a4aa4();
    FUN_800a60c4();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BumpUpHealth()
 // line 97, offset 0x800a490c
	/* begin block 1 */
		// Start line: 206
	/* end block 1 */
	// End Line: 207

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BumpUpHealth(void)

{
  undefined4 in_a1;
  
  FUN_800a6264(2,in_a1,0);
  if ((draw[1].dr_env.code[9] & 0x80) == 0) {
    FUN_80031430(1,&DAT_00002328);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetMaxHealth()
 // line 115, offset 0x800a4950
	/* begin block 1 */
		// Start line: 251
	/* end block 1 */
	// End Line: 252

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetMaxHealth(void)

{
  uint in_v0;
  uint uVar1;
  uint in_v1;
  int in_a0;
  int iVar2;
  
  uVar1 = in_v0 & in_v1;
  if ((in_v0 & in_v1) == 0) {
    if (in_a0 < 0) {
      in_a0 = in_a0 + 0xfff;
    }
    if (Raziel.State.SectionList[2].Event.Queue[1].ID == 1) {
      iVar2 = (int)*(short *)(Raziel.Senses.EngagedMask + 0x30) * (in_a0 >> 0xc) *
              gameTrackerX.controlCommand[1][1];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      Raziel.State.SectionList[1].Defer.Queue[12].ID =
           Raziel.State.SectionList[1].Defer.Queue[12].ID + (iVar2 >> 0xc);
      uVar1 = Raziel.State.SectionList[1].Defer.Queue[12].ID;
      if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800101,0);
      }
    }
    else {
      uVar1 = Raziel.State.SectionList[1].Defer.Queue[13].ID;
      if (Raziel.State.SectionList[1].Defer.Queue[13].ID == 0) {
        uVar1 = (uint)(Raziel.State.SectionList[1].Defer.Queue[12].ID < 0x20e);
        if (Raziel.State.SectionList[1].Defer.Queue[12].ID >= 0x20e) {
          iVar2 = -(int)*(short *)(Raziel.Senses.EngagedMask + 0x32) * (in_a0 >> 0xc) *
                  gameTrackerX.controlCommand[1][1];
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xfff;
          }
          uVar1 = Raziel.State.SectionList[1].Defer.Queue[12].ID + (iVar2 >> 0xc);
          Raziel.State.SectionList[1].Defer.Queue[12].ID = uVar1;
        }
      }
    }
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessHealth(struct _Instance *instance /*$s0*/)
 // line 132, offset 0x800a49a0
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x800A49A0

		/* begin block 1.1 */
			// Start line: 228
			// Start offset: 0x800A4BC8
		/* end block 1.1 */
		// End offset: 0x800A4C5C
		// End Line: 241
	/* end block 1 */
	// End offset: 0x800A4E3C
	// End Line: 289

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

	/* begin block 3 */
		// Start line: 319
	/* end block 3 */
	// End Line: 320

void ProcessHealth(_Instance *instance)

{
  int iVar1;
  int in_lo;
  
  iVar1 = in_lo >> 0xc;
  if (in_lo < 0) {
    iVar1 = in_lo + 0xfff >> 0xc;
  }
  Raziel.State.SectionList[1].Defer.Queue[12].ID =
       Raziel.State.SectionList[1].Defer.Queue[12].ID + iVar1;
  if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800101,0);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ HealthCheckForLowHealth()
 // line 292, offset 0x800a4e4c
	/* begin block 1 */
		// Start line: 649
	/* end block 1 */
	// End Line: 650

/* WARNING: Unknown calling convention yet parameter storage is locked */

int HealthCheckForLowHealth(void)

{
  int in_v0;
  int in_a0;
  int iVar1;
  
  iVar1 = (int)*(short *)(in_v0 + 0x32) * gameTrackerX.controlCommand[1][1];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  Raziel.State.SectionList[1].Defer.Queue[12].ID = in_a0 + (iVar1 >> 0xc);
  if (((Raziel.currentHint & 0x800000U) == 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[12].ID < 0x20d)) {
                    /* WARNING: Subroutine does not return */
    FUN_80071404(0,0,3);
  }
  if (Raziel.State.SectionList[1].Defer.Queue[12].ID < 0) {
    *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) =
         *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) | 0x80000;
    if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800105,0);
    }
    FUN_800a7de8(0x8000,0x800000);
    Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&DAT_0000c350;
    loadStatus.decompressLen._2_2_ = 1;
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x8000);
    FUN_800a51f8(loadStatus.bigFile.searchDirID);
  }
  iVar1 = FUN_8004d980(0,Raziel.State.SectionList[1].Defer.Queue[12].ID,&LAB_000186a0);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrainMana(int amount /*$a0*/)
 // line 314, offset 0x800a4eb8
	/* begin block 1 */
		// Start line: 693
	/* end block 1 */
	// End Line: 694

	/* begin block 2 */
		// Start line: 694
	/* end block 2 */
	// End Line: 695

/* WARNING: Removing unreachable block (ram,0x800a4f14) */
/* WARNING: Removing unreachable block (ram,0x800a4f3c) */
/* WARNING: Removing unreachable block (ram,0x800a4f48) */

void DrainMana(int amount)

{
  undefined4 uStack00000010;
  
  FUN_80072698(amount,FUN_800a87bc);
  uStack00000010 = 1;
  FUN_80071eb8(0x800d5038,0xd6,0,3);
  Raziel.currentHint = Raziel.currentHint | 0x804000;
  Raziel.State.SectionList[1].Defer.Queue[12].ID = 0x20d;
  FUN_8004d980(0,0x20d,&LAB_000186a0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMana(int amount /*$a0*/)
 // line 324, offset 0x800a4efc
	/* begin block 1 */
		// Start line: 713
	/* end block 1 */
	// End Line: 714

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

void SetMana(int amount)

{
  uint in_v0;
  
  Raziel.currentHint = in_v0 | amount;
  if (Raziel.State.SectionList[1].Defer.Queue[12].ID < 0) {
    *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) =
         *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) | 0x80000;
    if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800105,0);
    }
    FUN_800a7de8(0x8000,0x800000);
    Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&DAT_0000c350;
    loadStatus.decompressLen._2_2_ = 1;
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x8000);
    FUN_800a51f8(loadStatus.bigFile.searchDirID);
  }
  FUN_8004d980(0,Raziel.State.SectionList[1].Defer.Queue[12].ID,&LAB_000186a0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealthInstantDeath(struct _Instance *instance /*$a0*/)
 // line 333, offset 0x800a4f24
	/* begin block 1 */
		// Start line: 731
	/* end block 1 */
	// End Line: 732

void HealthInstantDeath(_Instance *instance)

{
  int in_v0;
  uint in_v1;
  
  *(uint *)(in_v0 + 0x144) = in_v1 | (uint)instance;
  if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800105,0);
  }
  FUN_800a7de8(0x8000,0x800000);
  Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&DAT_0000c350;
  loadStatus.decompressLen._2_2_ = 1;
  Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x8000);
  FUN_800a51f8(loadStatus.bigFile.searchDirID);
  FUN_8004d980(0,Raziel.State.SectionList[1].Defer.Queue[12].ID,&LAB_000186a0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_DebugHealthSetScale(long healthScale /*$a0*/)
 // line 352, offset 0x800a4fa4
	/* begin block 1 */
		// Start line: 773
	/* end block 1 */
	// End Line: 774

	/* begin block 2 */
		// Start line: 778
	/* end block 2 */
	// End Line: 779

void RAZIEL_DebugHealthSetScale(long healthScale)

{
  int iVar1;
  
  iVar1 = FUN_800595a8();
  if (((iVar1 == 0) && (Raziel.State.SectionList[2].Event.Queue[1].ID == 1)) &&
     (Raziel.State.SectionList[1].Defer.Queue[12].ID < 0x18704)) {
    RAZIEL_DebugManaSetMax(healthScale);
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_DebugManaSetMax(long manaScale /*$a0*/)
 // line 363, offset 0x800a4ffc
	/* begin block 1 */
		// Start line: 800
	/* end block 1 */
	// End Line: 801

	/* begin block 2 */
		// Start line: 802
	/* end block 2 */
	// End Line: 803

void RAZIEL_DebugManaSetMax(long manaScale)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_DebugHealthFillUp()
 // line 375, offset 0x800a5024
	/* begin block 1 */
		// Start line: 824
	/* end block 1 */
	// End Line: 825

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

/* WARNING: Removing unreachable block (ram,0x800a5044) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void RAZIEL_DebugHealthFillUp(void)

{
  Raziel.State.SectionList[1].Defer.Queue[14].Data._0_2_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_DebugManaFillUp()
 // line 387, offset 0x800a5084
	/* begin block 1 */
		// Start line: 848
	/* end block 1 */
	// End Line: 849

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RAZIEL_DebugManaFillUp(void)

{
  undefined2 in_v0;
  
  loadStatus.decompressLen._2_2_ = in_v0;
  FUN_800a5924();
  Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&DAT_0000c350;
  *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) =
       *(uint *)(Raziel.padCommands.Queue[5].ID + 0x144) | 0x80000;
  if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800105,0);
  }
  FUN_800a7de8(0x8000,0x800000);
  Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x8000);
  FUN_800a51f8(loadStatus.bigFile.searchDirID);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razPlayUnderworldSounds(struct _Instance *instance /*$s3*/)
 // line 395, offset 0x800a50a4
	/* begin block 1 */
		// Start line: 864
	/* end block 1 */
	// End Line: 865

void razPlayUnderworldSounds(_Instance *instance)

{
  uint in_v0;
  uint in_v1;
  
  *(uint *)(instance->introName + 4) = in_v0 | in_v1;
  if (Raziel.State.SectionList[2].Event.Queue[0].ID != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800105,0);
  }
  FUN_800a7de8(0x8000,0x800000);
  Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x8000);
  FUN_800a51f8(loadStatus.bigFile.searchDirID);
  return;
}





