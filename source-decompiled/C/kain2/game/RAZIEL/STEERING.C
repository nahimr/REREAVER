#include "THISDUST.H"
#include "STEERING.H"


// decompiled code
// original method signature: 
// int /*$ra*/ UpdateZoneDelta(int rc /*$a0*/, int LastRC /*$a1*/)
 // line 20, offset 0x800a213c
	/* begin block 1 */
		// Start line: 40
	/* end block 1 */
	// End Line: 41

	/* begin block 2 */
		// Start line: 42
	/* end block 2 */
	// End Line: 43

int UpdateZoneDelta(int rc,int LastRC)

{
  short sVar1;
  int iVar2;
  int unaff_s1;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined2 uStack00000024;
  ushort in_stack_00000028;
  short in_stack_0000002c;
  
  uStack00000024 = (undefined2)Raziel.State.SectionList[1].Defer.Queue[9].Data;
  uStack00000018 = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x234);
  uStack0000001a = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x238);
  uStack0000001c = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x23c);
  FUN_80039cec(&stack0x00000018,&stack0x00000020,&stack0x00000028);
  sVar1 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x78),(int)in_stack_0000002c);
  if (0x200 < sVar1) {
    in_stack_0000002c = *(short *)(unaff_s1 + 0x78) + 0x200;
  }
  if (sVar1 < -0x200) {
    in_stack_0000002c = *(short *)(unaff_s1 + 0x78) + -0x200;
  }
  if ((uint)in_stack_00000028 - 0x201 < 0x5ff) {
    in_stack_00000028 = 0x200;
  }
  if ((uint)in_stack_00000028 - 0x801 < 0x56d) {
    in_stack_00000028 = 0xd6e;
  }
  FUN_80039c0c(&stack0x00000028);
  uStack00000010 = 3;
  uStack00000014 = 0;
  iVar2 = FUN_80072464();
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetControllerInput(int *ZDirection /*$a2*/, long *controlCommand /*$a1*/)
 // line 34, offset 0x800a2178
	/* begin block 1 */
		// Start line: 35
		// Start offset: 0x800A2178
		// Variables:
	// 		int rc; // $s0
	/* end block 1 */
	// End offset: 0x800A2348
	// End Line: 114

	/* begin block 2 */
		// Start line: 68
	/* end block 2 */
	// End Line: 69

	/* begin block 3 */
		// Start line: 71
	/* end block 3 */
	// End Line: 72

int GetControllerInput(int *ZDirection,long *controlCommand)

{
  short sVar1;
  int iVar2;
  int in_v1;
  int unaff_s1;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  undefined2 uStack00000024;
  ushort in_stack_00000028;
  short in_stack_0000002c;
  
  uStack00000024 = *(undefined2 *)(in_v1 + 0x1c);
  uStack00000018 = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x234);
  uStack0000001a = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x238);
  uStack0000001c = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 0x23c);
  FUN_80039cec(&stack0x00000018,&stack0x00000020,&stack0x00000028);
  sVar1 = FUN_80039bb0((int)*(short *)(unaff_s1 + 0x78),(int)in_stack_0000002c);
  if (0x200 < sVar1) {
    in_stack_0000002c = *(short *)(unaff_s1 + 0x78) + 0x200;
  }
  if (sVar1 < -0x200) {
    in_stack_0000002c = *(short *)(unaff_s1 + 0x78) + -0x200;
  }
  if ((uint)in_stack_00000028 - 0x201 < 0x5ff) {
    in_stack_00000028 = 0x200;
  }
  if ((uint)in_stack_00000028 - 0x801 < 0x56d) {
    in_stack_00000028 = 0xd6e;
  }
  FUN_80039c0c(&stack0x00000028);
  uStack00000010 = 3;
  uStack00000014 = 0;
  iVar2 = FUN_80072464();
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DecodeDirection(int Source /*$a0*/, int Destination /*$a1*/, short *Difference /*$s0*/, short *Zone /*$s2*/)
 // line 117, offset 0x800a2358
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x800A2358
		// Variables:
	// 		int rc; // $s1
	/* end block 1 */
	// End offset: 0x800A242C
	// End Line: 142

	/* begin block 2 */
		// Start line: 253
	/* end block 2 */
	// End Line: 254

int DecodeDirection(int Source,int Destination,short *Difference,short *Zone)

{
  ulong unaff_s0;
  
  FUN_800a2290(Source | 0x20);
  Raziel.playerEvent = unaff_s0;
  return unaff_s0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ProcessMovement(struct _Instance *instance /*$s1*/, long *controlCommand /*$s0*/, struct GameTracker *GT /*$a2*/)
 // line 188, offset 0x800a2448
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x800A2448
		// Variables:
	// 		int ZDirection; // stack offset -32
	// 		int rc; // $s2
	// 		int lag; // $v1

		/* begin block 1.1 */
			// Start line: 267
			// Start offset: 0x800A2630
			// Variables:
		// 		short diff; // stack offset -28
		// 		short zone; // stack offset -26
		/* end block 1.1 */
		// End offset: 0x800A2630
		// End Line: 268

		/* begin block 1.2 */
			// Start line: 317
			// Start offset: 0x800A2680
			// Variables:
		// 		struct _G2SVector3_Type rot; // stack offset -40
		/* end block 1.2 */
		// End offset: 0x800A26D4
		// End Line: 337

		/* begin block 1.3 */
			// Start line: 339
			// Start offset: 0x800A26D4
		/* end block 1.3 */
		// End offset: 0x800A2720
		// End Line: 356

		/* begin block 1.4 */
			// Start line: 365
			// Start offset: 0x800A2728
			// Variables:
		// 		short angle; // $s0
		/* end block 1.4 */
		// End offset: 0x800A2784
		// End Line: 376

		/* begin block 1.5 */
			// Start line: 391
			// Start offset: 0x800A27BC
		/* end block 1.5 */
		// End offset: 0x800A27EC
		// End Line: 395

		/* begin block 1.6 */
			// Start line: 426
			// Start offset: 0x800A28A4
			// Variables:
		// 		short diff; // stack offset -24
		// 		short zone; // stack offset -22
		/* end block 1.6 */
		// End offset: 0x800A28A4
		// End Line: 427

		/* begin block 1.7 */
			// Start line: 431
			// Start offset: 0x800A28C0
		/* end block 1.7 */
		// End offset: 0x800A28FC
		// End Line: 441

		/* begin block 1.8 */
			// Start line: 443
			// Start offset: 0x800A28FC
		/* end block 1.8 */
		// End offset: 0x800A2928
		// End Line: 454

		/* begin block 1.9 */
			// Start line: 456
			// Start offset: 0x800A2928
			// Variables:
		// 		short angle; // $s0
		/* end block 1.9 */
		// End offset: 0x800A2970
		// End Line: 467
	/* end block 1 */
	// End offset: 0x800A2970
	// End Line: 482

	/* begin block 2 */
		// Start line: 376
	/* end block 2 */
	// End Line: 377

int ProcessMovement(_Instance *instance,long *controlCommand,GameTracker *GT)

{
  ulong unaff_s0;
  
  FUN_800a2290((uint)instance | 2);
  Raziel.playerEvent = unaff_s0;
  return unaff_s0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerTurn(struct _Instance *instance /*$a0*/, int rc /*$a1*/)
 // line 487, offset 0x800a298c
	/* begin block 1 */
		// Start line: 488
		// Start offset: 0x800A298C

		/* begin block 1.1 */
			// Start line: 494
			// Start offset: 0x800A29B8
			// Variables:
		// 		int rot; // $v0
		/* end block 1.1 */
		// End offset: 0x800A29DC
		// End Line: 506
	/* end block 1 */
	// End offset: 0x800A2A10
	// End Line: 511

	/* begin block 2 */
		// Start line: 974
	/* end block 2 */
	// End Line: 975

void SteerTurn(_Instance *instance,int rc)

{
  int iVar1;
  int unaff_s1;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  iVar1 = FUN_8009072c(unaff_s1 + 0x194,1,0xe);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0(unaff_s1 + 0x194,1,0xe);
  }
  uStack00000010 = 4;
  uStack00000014 = 3;
  FUN_80072464();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerMove(struct _Instance *instance /*$a0*/, int rc /*$a1*/)
 // line 550, offset 0x800a2a20
	/* begin block 1 */
		// Start line: 1100
	/* end block 1 */
	// End Line: 1101

void SteerMove(_Instance *instance,int rc)

{
  short in_v0;
  int unaff_s1;
  
  Raziel.State.SectionList[1].Event.Queue[15].ID._0_2_ = 0x100;
  FUN_80039b04(unaff_s1 + 0x78,(int)in_v0,(gameTrackerX.controlCommand[1][1] << 0xc) >> 0x10);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SteerAutoFace(struct _Instance *instance /*$s3*/, long *controlCommand /*$a1*/)
 // line 589, offset 0x800a2ad0
	/* begin block 1 */
		// Start line: 590
		// Start offset: 0x800A2AD0
		// Variables:
	// 		short angle; // $s0
	// 		int rc; // $s2
	// 		struct _Instance *target; // $a1
	// 		struct _G2SVector3_Type autoFaceRot; // stack offset -32
	// 		int diff; // $s1
	// 		int predict; // $s2
	/* end block 1 */
	// End offset: 0x800A2D44
	// End Line: 675

	/* begin block 2 */
		// Start line: 1138
	/* end block 2 */
	// End Line: 1139

	/* begin block 3 */
		// Start line: 1148
	/* end block 3 */
	// End Line: 1149

int SteerAutoFace(_Instance *instance,long *controlCommand)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerSwim(struct _Instance *instance /*$s0*/)
 // line 681, offset 0x800a2d64
	/* begin block 1 */
		// Start line: 682
		// Start offset: 0x800A2D64
		// Variables:
	// 		int step; // $a0
	// 		int velocity; // $a1
	/* end block 1 */
	// End offset: 0x800A2E3C
	// End Line: 731

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

void SteerSwim(_Instance *instance)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  int unaff_s3;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  short sStack0000001c;
  
  sStack0000001c = (short)in_v0;
  if (in_v0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0();
  }
  if (Raziel.State.SectionList[1].Event.Queue[12].Data !=
      Raziel.State.SectionList[1].Event.Queue[13].ID) {
                    /* WARNING: Subroutine does not return */
    FUN_8009098c();
  }
  uStack00000010 = 4;
  uStack00000014 = 3;
  FUN_80072464();
  iVar3 = unaff_s3 + 0x194;
  sVar1 = FUN_80039bb0((int)*(short *)(unaff_s3 + 0x78),
                       (int)(short)Raziel.State.SectionList[2].Data1);
  iVar2 = FUN_80090778(iVar3,1,10);
  if (iVar2 != 0) {
    iVar2 = FUN_80090778(iVar3,0xe,0xe);
    if (iVar2 == 0) {
      uStack00000018 = 0;
      uStack0000001a = 0;
      sStack0000001c = sVar1 - (short)Raziel.State.SectionList[2].Defer.Queue[15].Data;
      uStack00000010 = 4;
      uStack00000014 = 3;
      FUN_80072464();
    }
    return;
  }
  uStack00000018 = 0;
  uStack0000001a = 0;
  sStack0000001c = sVar1 - (short)Raziel.State.SectionList[2].Defer.Queue[15].Data;
  iVar2 = FUN_8009072c(iVar3,0xe,0xe);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0(iVar3,0xe,0xe);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(iVar3,0xe,0xe,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerWallcrawling(struct _Instance *instance /*$a0*/)
 // line 735, offset 0x800a2e54
	/* begin block 1 */
		// Start line: 1517
	/* end block 1 */
	// End Line: 1518

	/* begin block 2 */
		// Start line: 1523
	/* end block 2 */
	// End Line: 1524

void SteerWallcrawling(_Instance *instance)

{
  int iVar1;
  short unaff_s1;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  short sStack0000001c;
  
  uStack00000018 = 0;
  uStack0000001a = 0;
  sStack0000001c = unaff_s1 - (short)Raziel.State.SectionList[2].Defer.Queue[15].Data;
  iVar1 = FUN_8009072c();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_8009098c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerDisableAutoFace(struct _Instance *instance /*$s1*/)
 // line 748, offset 0x800a2e88
	/* begin block 1 */
		// Start line: 1549
	/* end block 1 */
	// End Line: 1550

void SteerDisableAutoFace(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(instance,0xe,0xe,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SteerSwitchMode(struct _Instance *instance /*$s1*/, int mode /*$s2*/)
 // line 776, offset 0x800a2f1c
	/* begin block 1 */
		// Start line: 777
		// Start offset: 0x800A2F1C

		/* begin block 1.1 */
			// Start line: 846
			// Start offset: 0x800A30A8
			// Variables:
		// 		int rotx; // $v1
		/* end block 1.1 */
		// End offset: 0x800A3110
		// End Line: 856
	/* end block 1 */
	// End offset: 0x800A315C
	// End Line: 883

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

	/* begin block 3 */
		// Start line: 1611
	/* end block 3 */
	// End Line: 1612

void SteerSwitchMode(_Instance *instance,int mode)

{
  int in_v0;
  int in_v1;
  int iVar1;
  
  if ((Raziel.State.SectionList[1].Event.Queue[14].Data != 0x11) || (in_v0 < 0)) {
    iVar1 = ((uint)(in_v1 * mode) >> 0xc) * in_v0;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ =
         (short)Raziel.State.SectionList[2].Defer.Queue[11].ID - (short)(iVar1 >> 0xc);
  }
  if (0x800 < (short)Raziel.State.SectionList[2].Defer.Queue[11].ID) {
    Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = 0x800;
  }
  if ((short)Raziel.State.SectionList[2].Defer.Queue[11].ID < 0) {
    Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = 0;
  }
  Raziel.State.SectionList[2].Defer.Queue[11].ID._2_2_ = 0;
  Raziel.State.SectionList[2].Defer.Queue[11].Data._0_2_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razInitWallCrawlSteering(struct _Instance *instance /*$s0*/)
 // line 888, offset 0x800a3178
	/* begin block 1 */
		// Start line: 889
		// Start offset: 0x800A3178
		// Variables:
	// 		struct _G2SVector3_Type vec; // stack offset -24
	/* end block 1 */
	// End offset: 0x800A3178
	// End Line: 889

	/* begin block 2 */
		// Start line: 1840
	/* end block 2 */
	// End Line: 1841

void razInitWallCrawlSteering(_Instance *instance)

{
  uint uVar1;
  int x_rotation;
  int z_rotation;
  int unaff_s1;
  int unaff_s2;
  
  FUN_800a3408();
  Raziel.State.SectionList[1].Event.Queue[10].Data = 0;
  switch(unaff_s2) {
  case 0:
    Raziel.State.SectionList[2].Defer.Queue[11].Data._0_2_ = 0;
    Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = 0;
  case 1:
  case 2:
  case 4:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x12:
    Raziel.State.SectionList[1].Event.Queue[10].Data = 0;
    break;
  case 7:
    if (unaff_s2 != Raziel.State.SectionList[1].Event.Queue[14].Data) {
      FUN_800a32cc();
    }
    break;
  case 0xb:
    Raziel.State.SectionList[2].Event.Queue[9].Data =
         (int)(short)Raziel.State.SectionList[2].Defer.Queue[11].ID;
    uVar1 = 0x1000U - (int)(short)debugRazielMenu.bit_mask & 0xfff;
    Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = (short)uVar1;
    if (uVar1 - 0x401 < 0x3ff) {
      Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = 0x400;
    }
    else {
      if (uVar1 - 0x801 < 0x3ff) {
        Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ = 0xc00;
      }
    }
    CAMERA_SetLookRot((Camera *)&standardMenu,x_rotation,z_rotation);
    FUN_8001b748(&standardMenu,0x1000 - (int)(short)Raziel.State.SectionList[2].Defer.Queue[11].ID,0
                );
  case 6:
  case 0x11:
    Raziel.State.SectionList[1].Event.Queue[10].Data = 1;
    break;
  case 0xe:
                    /* WARNING: Subroutine does not return */
    FUN_80039bd4(unaff_s1 + 0x5c,
                 *(int *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x30) + 0x5c);
  }
  Raziel.State.SectionList[1].Event.Queue[14].Data = unaff_s2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razDeinitWallCrawlSteering(struct _Instance *instance /*$s0*/)
 // line 922, offset 0x800a32b4
	/* begin block 1 */
		// Start line: 1931
	/* end block 1 */
	// End Line: 1932

void razDeinitWallCrawlSteering(_Instance *instance)

{
  int unaff_s2;
  
  Raziel.State.SectionList[1].Event.Queue[14].Data = unaff_s2;
  return;
}





