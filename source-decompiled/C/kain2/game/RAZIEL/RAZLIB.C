#include "THISDUST.H"
#include "RAZLIB.H"


// decompiled code
// original method signature: 
// void /*$ra*/ razAlignYMoveRot(struct _Instance *dest /*$s3*/, short distance /*$a1*/, struct _Position *position /*$s4*/, struct _Rotation *rotation /*$s2*/, int extraZ /*stack 16*/)
 // line 12, offset 0x800a51b0
	/* begin block 1 */
		// Start line: 13
		// Start offset: 0x800A51B0
		// Variables:
	// 		struct SVECTOR d; // stack offset -72
	// 		struct SVECTOR dd; // stack offset -64
	// 		struct MATRIX mat; // stack offset -56
	/* end block 1 */
	// End offset: 0x800A51B0
	// End Line: 13

	/* begin block 2 */
		// Start line: 24
	/* end block 2 */
	// End Line: 25

void razAlignYMoveRot(_Instance *dest,short distance,_Position *position,_Rotation *rotation,
                     int extraZ)

{
  int in_v0;
  undefined2 in_register_00000016;
  
  Raziel.State.SectionList[1].Defer.Queue[12].ID =
       in_v0 * 0x20 + CONCAT22(in_register_00000016,distance);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razAlignYRotMove(struct _Instance *dest /*$s1*/, short distance /*$a1*/, struct _Position *position /*$s2*/, struct _Rotation *rotation /*$s4*/, int extraZ /*stack 16*/)
 // line 54, offset 0x800a5274
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x800A5274
		// Variables:
	// 		struct SVECTOR d; // stack offset -88
	// 		struct SVECTOR dd; // stack offset -80
	// 		struct SVECTOR rot; // stack offset -72
	// 		struct MATRIX mat; // stack offset -64
	/* end block 1 */
	// End offset: 0x800A5274
	// End Line: 55

	/* begin block 2 */
		// Start line: 136
	/* end block 2 */
	// End Line: 137

/* WARNING: Variable defined which should be unmapped: extraZ */

void razAlignYRotMove(_Instance *dest,short distance,_Position *position,_Rotation *rotation,
                     int extraZ)

{
  undefined2 in_register_00000016;
  undefined4 uStack0000001c;
  
  uStack0000001c = 0;
  FUN_800a8008(dest,CONCAT22(in_register_00000016,distance));
  uStack0000001c = 0;
  FUN_800a8008();
  uStack0000001c = 0;
  FUN_800a8008();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razAlignYRotMoveInterp(struct _Instance *source /*$s1*/, struct _Instance *dest /*$a1*/, short distance /*$a2*/, unsigned char segNumber /*$s0*/, int Frames /*stack 16*/, int extraZ /*stack 20*/)
 // line 86, offset 0x800a534c
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x800A534C
		// Variables:
	// 		struct _Position position; // stack offset -40
	// 		struct _Rotation rotation; // stack offset -32
	// 		struct _G2SVector3_Type v; // stack offset -24
	/* end block 1 */
	// End offset: 0x800A534C
	// End Line: 87

	/* begin block 2 */
		// Start line: 210
	/* end block 2 */
	// End Line: 211

void razAlignYRotMoveInterp
               (_Instance *source,_Instance *dest,short distance,uchar segNumber,int Frames,
               int extraZ)

{
  int in_v0;
  short unaff_s1;
  int unaff_s2;
  
  *(short *)(unaff_s2 + 4) = *(short *)(in_v0 + 4) + unaff_s1 + 0x800;
  FUN_80039ae8();
                    /* WARNING: Subroutine does not return */
  FUN_80078e5c((int)*(short *)(unaff_s2 + 4));
}



// decompiled code
// original method signature: 
// void /*$ra*/ razAlignYRotInterp(struct _Instance *source /*$s0*/, struct _Position *dest /*$a1*/, unsigned char segNumber /*$a2*/, int Frames /*$a3*/)
 // line 114, offset 0x800a5440
	/* begin block 1 */
		// Start line: 306
	/* end block 1 */
	// End Line: 307

void razAlignYRotInterp(_Instance *source,_Position *dest,uchar segNumber,int Frames)

{
  undefined2 uStack00000010;
  undefined2 uStack00000014;
  
  uStack00000010 = 0;
  uStack00000014 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_800bd12c(source,dest,&stack0x00000018);
}



// decompiled code
// original method signature: 
// int /*$ra*/ razConstrictAngle(struct _Instance *instance /*$a0*/)
 // line 195, offset 0x800a546c
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x800A546C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		int k; // $a2
	// 		int Total; // $s1
	// 		int outer; // stack offset -32
	// 		int rc; // $s3
	// 		struct _SVector point; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A5564
	// End Line: 243

	/* begin block 2 */
		// Start line: 390
	/* end block 2 */
	// End Line: 391

int razConstrictAngle(_Instance *instance)

{
  int in_v0;
  int unaff_s2;
  ushort in_stack_0000001a;
  
  *(undefined2 *)(unaff_s2 + 2) = (short)(in_v0 + (uint)in_stack_0000001a);
  return in_v0 + (uint)in_stack_0000001a;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razRotateUpperBody(struct _Instance *instance /*$s3*/, struct evActionLookAroundData *data /*$a1*/)
 // line 247, offset 0x800a5580
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x800A5580
		// Variables:
	// 		int tx; // $s0
	// 		int tz; // $s2
	// 		struct _G2SVector3_Type Rot; // stack offset -32
	/* end block 1 */
	// End offset: 0x800A5608
	// End Line: 268

	/* begin block 2 */
		// Start line: 555
	/* end block 2 */
	// End Line: 556

void razRotateUpperBody(_Instance *instance,evActionLookAroundData *data)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetFadeEffect(short source /*$a0*/, short dest /*$a1*/, int steps /*$a2*/)
 // line 285, offset 0x800a5750
	/* begin block 1 */
		// Start line: 640
	/* end block 1 */
	// End Line: 641

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

void razSetFadeEffect(short source,short dest,int steps)

{
  int in_v0;
  undefined2 in_v1;
  undefined2 in_register_00000012;
  undefined2 in_register_00000016;
  int iVar1;
  int unaff_s3;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  
  if (in_v0 != 0) {
    *(undefined2 *)CONCAT22(in_register_00000012,source) = in_v1;
  }
  uStack00000012 = 0;
  iVar1 = (uint)(ushort)*((short **)CONCAT22(in_register_00000016,dest))[1] << 0x10;
  uStack00000010 = (undefined2)(-(int)**(short **)CONCAT22(in_register_00000016,dest) / 2);
  uStack00000014 = (undefined2)((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1);
  FUN_80039c0c(&stack0x00000010);
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(unaff_s3 + 0x194,0xe,0xe,&stack0x00000010);
}



// decompiled code
// original method signature: 
// int /*$ra*/ razPlaneShift(struct _Instance *instance /*$a0*/)
 // line 302, offset 0x800a5774
	/* begin block 1 */
		// Start line: 672
	/* end block 1 */
	// End Line: 673

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

int razPlaneShift(_Instance *instance)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  undefined2 uStack00000010;
  undefined2 uStack00000014;
  
  uStack00000010 = (undefined2)(-unaff_s0 / 2);
  uStack00000014 = (undefined2)(((unaff_s1 << 0x10) >> 0x10) - ((unaff_s1 << 0x10) >> 0x1f) >> 1);
  FUN_80039c0c();
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(unaff_s3 + 0x194,0xe,0xe,&stack0x00000010);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSpectralShift()
 // line 320, offset 0x800a57d0
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x800A57D0
		// Variables:
	// 		struct _Instance *inst; // $a0
	/* end block 1 */
	// End offset: 0x800A58F8
	// End Line: 357

	/* begin block 2 */
		// Start line: 715
	/* end block 2 */
	// End Line: 716

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razSpectralShift(void)

{
  int in_v0;
  int in_v1;
  int unaff_s2;
  short sStack00000010;
  undefined2 uStack00000012;
  short sStack00000014;
  
  uStack00000012 = 0;
  sStack00000010 = (short)(int)((longlong)in_v1 * (longlong)in_v0 >> 0x25) - (short)(in_v1 >> 0x1f);
  sStack00000014 =
       (short)(int)((longlong)(unaff_s2 * 0x1e) * (longlong)in_v0 >> 0x25) -
       (short)(unaff_s2 * 0x1e >> 0x1f);
  FUN_80039c0c(&stack0x00000010);
                    /* WARNING: Subroutine does not return */
  FUN_8009098c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ razMaterialShift()
 // line 360, offset 0x800a5908
	/* begin block 1 */
		// Start line: 797
	/* end block 1 */
	// End Line: 798

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razMaterialShift(void)

{
  return;
}



// autogenerated function stub: 
// int /*$ra*/ RAZIEL_OkToShift()
int RAZIEL_OkToShift()
{ // line 383, offset 0x800a59d0
	/* begin block 1 */
		// Start line: 844
	/* end block 1 */
	// End Line: 845

	return 0;
}


// decompiled code
// original method signature: 
// int /*$ra*/ razPickupAndGrab(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/)
 // line 409, offset 0x800a5a44
	/* begin block 1 */
		// Start line: 410
		// Start offset: 0x800A5A44

		/* begin block 1.1 */
			// Start line: 413
			// Start offset: 0x800A5AA0
			// Variables:
		// 		int index; // $a2

			/* begin block 1.1.1 */
				// Start line: 427
				// Start offset: 0x800A5AD0
				// Variables:
			// 		struct evObjectData *objData; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A5B9C
			// End Line: 448
		/* end block 1.1 */
		// End offset: 0x800A5C38
		// End Line: 460
	/* end block 1 */
	// End offset: 0x800A5C3C
	// End Line: 464

	/* begin block 2 */
		// Start line: 896
	/* end block 2 */
	// End Line: 897

	/* begin block 3 */
		// Start line: 898
	/* end block 3 */
	// End Line: 899

int razPickupAndGrab(__CharacterState *In,int CurrentSection)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(In,CurrentSection,0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ razZeroAxis(long *x /*$s1*/, long *y /*$s2*/, int radius /*$s0*/)
 // line 471, offset 0x800a5c54
	/* begin block 1 */
		// Start line: 472
		// Start offset: 0x800A5C54
		// Variables:
	// 		unsigned long distance; // $v0
	/* end block 1 */
	// End offset: 0x800A5C9C
	// End Line: 504

	/* begin block 2 */
		// Start line: 1023
	/* end block 2 */
	// End Line: 1024

int razZeroAxis(long *x,long *y,int radius)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uStack00000010;
  
  if (*(short *)(unaff_s0 + 6) != 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x28) + 300);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(iVar2,&DAT_0100001b,0);
  }
  uStack00000010 = 0x31;
  uVar1 = FUN_80070b4c(0,0,8,*unaff_s1);
                    /* WARNING: Subroutine does not return */
  FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x28),0x800002,
               uVar1);
}



// decompiled code
// original method signature: 
// int /*$ra*/ razAdjustSpeed(struct _Instance *instance /*$a3*/, int minSpeed /*$a1*/)
 // line 508, offset 0x800a5cb4
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x800A5CB4
		// Variables:
	// 		long adjustment; // $s0

		/* begin block 1.1 */
			// Start line: 509
			// Start offset: 0x800A5CB4
			// Variables:
		// 		int data; // $v1
		/* end block 1.1 */
		// End offset: 0x800A5D30
		// End Line: 530
	/* end block 1 */
	// End offset: 0x800A5D30
	// End Line: 537

	/* begin block 2 */
		// Start line: 1099
	/* end block 2 */
	// End Line: 1100

int razAdjustSpeed(_Instance *instance,int minSpeed)

{
  undefined4 uVar1;
  undefined4 *unaff_s1;
  
  uVar1 = FUN_80070b4c(instance,minSpeed,8,*unaff_s1);
                    /* WARNING: Subroutine does not return */
  FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x28),0x800002,
               uVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razLaunchForce(struct _Instance *instance /*$s0*/)
 // line 558, offset 0x800a5d50
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x800A5D50
	/* end block 1 */
	// End offset: 0x800A5D50
	// End Line: 559

	/* begin block 2 */
		// Start line: 1207
	/* end block 2 */
	// End Line: 1208

void razLaunchForce(_Instance *instance)

{
  int unaff_s0;
  undefined4 uStack00000010;
  
  uStack00000010 = 3;
  FUN_80071b48();
  Raziel.State.SectionList[2].Defer.Queue[10].ID = *(int *)(unaff_s0 + 8);
  FUN_800725cc();
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ razGetHeldItem()
 // line 582, offset 0x800a5de0
	/* begin block 1 */
		// Start line: 584
		// Start offset: 0x800A5DE0
		// Variables:
	// 		struct _Instance *instance; // $v0
	/* end block 1 */
	// End offset: 0x800A5E10
	// End Line: 606

	/* begin block 2 */
		// Start line: 1266
	/* end block 2 */
	// End Line: 1267

	/* begin block 3 */
		// Start line: 1267
	/* end block 3 */
	// End Line: 1268

	/* begin block 4 */
		// Start line: 1269
	/* end block 4 */
	// End Line: 1270

/* WARNING: Unknown calling convention yet parameter storage is locked */

_Instance * razGetHeldItem(void)

{
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  *unaff_s1 = 0;
  *unaff_s2 = 0;
  return (_Instance *)0x0;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ razGetHeldWeapon()
 // line 610, offset 0x800a5e18
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x800A5E18
		// Variables:
	// 		struct _Instance *instance; // $s0
	/* end block 1 */
	// End offset: 0x800A5E68
	// End Line: 628

	/* begin block 2 */
		// Start line: 1324
	/* end block 2 */
	// End Line: 1325

/* WARNING: Unknown calling convention yet parameter storage is locked */

_Instance * razGetHeldWeapon(void)

{
  int in_v1;
  int in_a1;
  int in_a3;
  _Instance *p_Var1;
  
  if (in_a1 < in_v1) {
    p_Var1 = (_Instance *)(int)Raziel.State.SectionList[1].Defer.Head._2_2_;
  }
  else {
    if (in_v1 < (int)(short)Raziel.State.SectionList[1].Defer.Tail) {
      p_Var1 = (_Instance *)(int)(short)Raziel.State.SectionList[1].Defer.Head;
    }
    else {
      p_Var1 = (_Instance *)
               ((int)Raziel.State.SectionList[1].Defer.Head._2_2_ -
               (((int)Raziel.State.SectionList[1].Defer.Head._2_2_ -
                (int)(short)Raziel.State.SectionList[1].Defer.Head) * (in_a1 - in_v1)) /
               (in_a1 - (int)(short)Raziel.State.SectionList[1].Defer.Tail));
    }
  }
  FUN_8008fdd0(in_a3 + 0x194,p_Var1);
  return p_Var1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razReaverBladeOff()
 // line 631, offset 0x800a5e78
	/* begin block 1 */
		// Start line: 1366
	/* end block 1 */
	// End Line: 1367

	/* begin block 2 */
		// Start line: 1367
	/* end block 2 */
	// End Line: 1368

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razReaverBladeOff(void)

{
  int in_a0;
  int in_a3;
  int in_lo;
  
  FUN_8008fdd0(in_a3 + 0x194,in_a0 - in_lo);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razReaverBladeOn()
 // line 639, offset 0x800a5ea8
	/* begin block 1 */
		// Start line: 1383
	/* end block 1 */
	// End Line: 1384

	/* begin block 2 */
		// Start line: 1384
	/* end block 2 */
	// End Line: 1385

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razReaverBladeOn(void)

{
  undefined4 in_a0;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  undefined *puStack00000020;
  
  FUN_8006a498(in_a0,0x31,(uint)Raziel.State.SectionList[1].Defer.Queue[13].Data._1_1_ & 1);
  Raziel.State.SectionList[2].Defer.Queue[12].Data =
       Raziel.State.SectionList[2].Defer.Queue[12].Data | 4;
  iStack00000010 = (int)*(short *)(Raziel.Senses.EngagedMask + 0x3a);
  iStack00000014 = (int)*(short *)(Raziel.Senses.EngagedMask + 0x3c);
  iStack00000018 = (int)*(short *)(Raziel.Senses.EngagedMask + 0x3e);
  puStack00000020 = &DAT_00002710;
  iStack0000001c = *(int *)(Raziel.Senses.EngagedMask + 0x40) * 0x1e;
  FUN_800a8008();
  Raziel.Senses.BelowPoint._0_4_ = 0;
  Raziel.Senses.BelowPoint._4_4_ = 0;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razReaverOff()
 // line 649, offset 0x800a5ee8
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x800A5EE8

		/* begin block 1.1 */
			// Start line: 653
			// Start offset: 0x800A5F0C
			// Variables:
		// 		struct _Instance *heldWeapon; // $s0
		/* end block 1.1 */
		// End offset: 0x800A5F5C
		// End Line: 661
	/* end block 1 */
	// End offset: 0x800A5F60
	// End Line: 663

	/* begin block 2 */
		// Start line: 1404
	/* end block 2 */
	// End Line: 1405

	/* begin block 3 */
		// Start line: 1406
	/* end block 3 */
	// End Line: 1407

/* WARNING: Unknown calling convention yet parameter storage is locked */

int razReaverOff(void)

{
  int iVar1;
  int in_v1;
  undefined4 in_a0;
  int iStack00000018;
  int iStack0000001c;
  undefined *puStack00000020;
  
  iStack00000018 = (int)*(short *)(in_v1 + 0x3e);
  puStack00000020 = &DAT_00002710;
  iStack0000001c = *(int *)(in_v1 + 0x40) * 0x1e;
  iVar1 = FUN_800a8008(in_a0,0x800d559c,0xc);
  Raziel.Senses.BelowPoint._0_4_ = 0;
  Raziel.Senses.BelowPoint._4_4_ = 0;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razReaverOn()
 // line 666, offset 0x800a5f70
	/* begin block 1 */
		// Start line: 1440
	/* end block 1 */
	// End Line: 1441

	/* begin block 2 */
		// Start line: 1442
	/* end block 2 */
	// End Line: 1443

/* WARNING: Unknown calling convention yet parameter storage is locked */

int razReaverOn(void)

{
  int iVar1;
  
  iVar1 = FUN_800a5f34();
  if (iVar1 == 0) {
    iVar1 = 0;
    if (Raziel.State.SectionList[1].Defer.Queue[10].ID != 0) {
      iVar1 = Raziel.State.SectionList[2].Event.Queue[0].ID;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(iVar1,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razReaverPickup(struct _Instance *instance /*$a2*/, struct _Instance *soulReaver /*$s0*/)
 // line 691, offset 0x800a6054
	/* begin block 1 */
		// Start line: 1495
	/* end block 1 */
	// End Line: 1496

void razReaverPickup(_Instance *instance,_Instance *soulReaver)

{
  int in_v1;
  
  if (in_v1 == 0x1000) {
    FUN_800a5f6c();
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(Raziel.State.SectionList[2].Event.Queue[0].ID,0x28);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razReaverImbue(int reaverType /*$a2*/)
 // line 719, offset 0x800a6110
	/* begin block 1 */
		// Start line: 1563
	/* end block 1 */
	// End Line: 1564

void razReaverImbue(int reaverType)

{
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(reaverType,0x28);
}



// decompiled code
// original method signature: 
// int /*$ra*/ razGetReaverFromMask(int reaverMask /*$a0*/)
 // line 731, offset 0x800a6168
	/* begin block 1 */
		// Start line: 733
		// Start offset: 0x800A6168
		// Variables:
	// 		int rc; // $v0
	/* end block 1 */
	// End offset: 0x800A6184
	// End Line: 742

	/* begin block 2 */
		// Start line: 1590
	/* end block 2 */
	// End Line: 1591

	/* begin block 3 */
		// Start line: 1591
	/* end block 3 */
	// End Line: 1592

	/* begin block 4 */
		// Start line: 1593
	/* end block 4 */
	// End Line: 1594

int razGetReaverFromMask(int reaverMask)

{
  int in_v1;
  
  if ((in_v1 == 1) && (Raziel.State.SectionList[2].Event.Queue[0].Data == 1)) {
    FUN_800a6264(2);
  }
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razReaverScale(int scale /*$s1*/)
 // line 745, offset 0x800a618c
	/* begin block 1 */
		// Start line: 746
		// Start offset: 0x800A618C
		// Variables:
	// 		struct _Instance *Inst; // $s0
	/* end block 1 */
	// End offset: 0x800A61E0
	// End Line: 757

	/* begin block 2 */
		// Start line: 1618
	/* end block 2 */
	// End Line: 1619

void razReaverScale(int scale)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razGetForwardNormal(struct _Instance *inst /*$a0*/, struct _Instance *target /*$a1*/)
 // line 760, offset 0x800a61f4
	/* begin block 1 */
		// Start line: 761
		// Start offset: 0x800A61F4
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -72
	// 		struct SVECTOR Old; // stack offset -24
	// 		struct SVECTOR New; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A62C8
	// End Line: 794

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

void razGetForwardNormal(_Instance *inst,_Instance *target)

{
  uint in_v1;
  
  if (Raziel.State.SectionList[2].Event.Queue[1].ID == 1) {
    Raziel.State.SectionList[2].Event.Queue[0].Data = 2;
    BossAreasMenu.type = 0x800;
  }
  else {
    BossAreasMenu.type = 0x400;
    Raziel.State.SectionList[2].Event.Queue[0].Data = 1;
  }
  eventMenu.bit_mask = in_v1 | 0xc08;
  Raziel.State.SectionList[1].Defer.Queue[13].Data = eventMenu.bit_mask;
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ razGetRotFromNormal(struct _SVector *normal /*$a0*/, struct _Rotation *rot /*$a2*/)
 // line 797, offset 0x800a62d8
	/* begin block 1 */
		// Start line: 798
		// Start offset: 0x800A62D8
		// Variables:
	// 		struct _Position a; // stack offset -24
	// 		struct _Position b; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A62D8
	// End Line: 798

	/* begin block 2 */
		// Start line: 1731
	/* end block 2 */
	// End Line: 1732

void razGetRotFromNormal(_SVector *normal,_Rotation *rot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razCenterWithBlock(struct _Instance *inst /*$s3*/, struct _Instance *target /*$s1*/, int dist /*$s2*/)
 // line 811, offset 0x800a6324
	/* begin block 1 */
		// Start line: 812
		// Start offset: 0x800A6324
		// Variables:
	// 		struct SVECTOR d; // stack offset -88
	// 		struct SVECTOR dd; // stack offset -80
	// 		struct _Rotation rot; // stack offset -72
	// 		struct MATRIX mat; // stack offset -64
	// 		struct _G2SVector3_Type v; // stack offset -32
	/* end block 1 */
	// End offset: 0x800A64A8
	// End Line: 863

	/* begin block 2 */
		// Start line: 1771
	/* end block 2 */
	// End Line: 1772

void razCenterWithBlock(_Instance *inst,_Instance *target,int dist)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(inst,0x800107);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetPauseTranslation(struct _Instance *instance /*$a0*/)
 // line 870, offset 0x800a64f4
	/* begin block 1 */
		// Start line: 871
		// Start offset: 0x800A64F4
		// Variables:
	// 		struct _G2SVector3_Type Vec; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A6528
	// End Line: 881

	/* begin block 2 */
		// Start line: 1909
	/* end block 2 */
	// End Line: 1910

void razSetPauseTranslation(_Instance *instance)

{
  undefined2 uStack00000018;
  undefined2 uStack0000001c;
  
  uStack0000001c = 0;
  uStack00000018 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_800bd12c();
}



// autogenerated function stub: 
// void /*$ra*/ razResetPauseTranslation(struct _Instance *instance /*$a0*/)
void razResetPauseTranslation(struct _Instance *instance)
{ // line 887, offset 0x800a6568
	/* begin block 1 */
		// Start line: 1951
	/* end block 1 */
	// End Line: 1952

}


// decompiled code
// original method signature: 
// void /*$ra*/ razSelectMotionAnim(struct __CharacterState *In /*$s6*/, int CurrentSection /*$s7*/, int Frames /*$s4*/, int *Anim /*$fp*/)
 // line 897, offset 0x800a65c0
	/* begin block 1 */
		// Start line: 898
		// Start offset: 0x800A65C0
		// Variables:
	// 		struct _G2SVector3_Type Vec; // stack offset -48
	// 		int switchType; // $s0
	// 		int frame; // $s1

		/* begin block 1.1 */
			// Start line: 1139
			// Start offset: 0x800A6A40
			// Variables:
		// 		int adjustment; // $s0
		/* end block 1.1 */
		// End offset: 0x800A6B2C
		// End Line: 1160

		/* begin block 1.2 */
			// Start line: 1165
			// Start offset: 0x800A6B48
			// Variables:
		// 		struct _G2AnimSection_Type *animSectionA; // $s1
		// 		struct _G2AnimSection_Type *animSectionB; // $s2
		// 		struct _G2AnimKeylist_Type *keylist; // $s3
		// 		int keylistID; // $s5
		/* end block 1.2 */
		// End offset: 0x800A6C00
		// End Line: 1187
	/* end block 1 */
	// End offset: 0x800A6C00
	// End Line: 1195

	/* begin block 2 */
		// Start line: 1973
	/* end block 2 */
	// End Line: 1974

	/* begin block 3 */
		// Start line: 1982
	/* end block 3 */
	// End Line: 1983

void razSelectMotionAnim(__CharacterState *In,int CurrentSection,int Frames,int *Anim)

{
  int iVar1;
  short in_v1;
  int unaff_s3;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  short in_stack_0000001a;
  short in_stack_00000022;
  undefined2 in_stack_0000002c;
  short sStack00000052;
  undefined2 uStack00000054;
  
  sStack00000052 = in_stack_00000022 + (in_v1 - in_stack_0000001a);
  uStack00000054 = *(undefined2 *)(unaff_s3 + 0x60);
  iVar1 = FUN_8009072c(In,CurrentSection,0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0();
  }
  uStack00000010 = 6;
  uStack00000014 = 0;
  FUN_80072464();
  *(undefined2 *)(unaff_s3 + 0x78) = in_stack_0000002c;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razApplyMotion(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/)
 // line 1199, offset 0x800a6c30
	/* begin block 1 */
		// Start line: 1200
		// Start offset: 0x800A6C30
		// Variables:
	// 		struct _G2SVector3_Type Vec; // stack offset -24

		/* begin block 1.1 */
			// Start line: 1205
			// Start offset: 0x800A6C60
			// Variables:
		// 		struct _G2AnimSection_Type *animSection; // $s0

			/* begin block 1.1.1 */
				// Start line: 1245
				// Start offset: 0x800A6D08
				// Variables:
			// 		long adjustment; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A6DA4
			// End Line: 1255
		/* end block 1.1 */
		// End offset: 0x800A6DA4
		// End Line: 1256
	/* end block 1 */
	// End offset: 0x800A6DA4
	// End Line: 1258

	/* begin block 2 */
		// Start line: 2604
	/* end block 2 */
	// End Line: 2605

int razApplyMotion(__CharacterState *In,int CurrentSection)

{
  int iVar1;
  short unaff_s0;
  int *unaff_s6;
  int in_hi;
  short sStack0000001a;
  
  sStack0000001a = (short)(in_hi >> 5) - unaff_s0;
  iVar1 = FUN_8009072c(*unaff_s6 + 0x194,CurrentSection,0x22);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0(*unaff_s6 + 0x194,0,0x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(*unaff_s6 + 0x194,0,0x22,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razResetMotion(struct _Instance *instance /*$a0*/)
 // line 1262, offset 0x800a6dc0
	/* begin block 1 */
		// Start line: 2733
	/* end block 1 */
	// End Line: 2734

void razResetMotion(_Instance *instance)

{
  short sVar1;
  int in_v0;
  int iVar2;
  __CharacterState *In;
  int CurrentSection;
  int CurrentSection_00;
  evPhysicsSwimData *SwimData;
  int unaff_s0;
  __CharacterState **unaff_s1;
  short in_stack_00000012;
  
  if (*(int *)(unaff_s0 + 0x24) == in_v0) {
    in_stack_00000012 = 0xffc4;
    razEnterWater((__CharacterState *)instance,CurrentSection,SwimData);
    return;
  }
  In = *unaff_s1;
  CurrentSection_00 = 0x7c;
  iVar2 = FUN_8009509c();
  if (*(int *)(unaff_s0 + 0x24) == iVar2) {
    in_stack_00000012 = 0xffdd;
    razEnterWater(In,CurrentSection_00,SwimData);
    return;
  }
  In = *unaff_s1;
  iVar2 = FUN_8009509c(In,0x7b);
  if (*(int *)(unaff_s0 + 0x24) == iVar2) {
    in_stack_00000012 = 0xfff0;
    razEnterWater(In,0,SwimData);
    return;
  }
  iVar2 = FUN_8009072c(&(*unaff_s1)->SectionList[1].Event.Queue[0xc].Data,0,0x22);
  if (iVar2 != 0) {
    FUN_800905cc(&(*unaff_s1)->SectionList[1].Event.Queue[0xc].Data,0,0x22);
  }
  if (in_stack_00000012 != 0) {
    iVar2 = FUN_8009072c(&(*unaff_s1)->SectionList[1].Event.Queue[0xc].Data,0,0x22);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_800904f0(&(*unaff_s1)->SectionList[1].Event.Queue[0xc].Data,0,0x22);
    }
    iVar2 = (*unaff_s1)->SectionList[1].Defer.Queue[2].ID;
    sVar1 = FUN_80096358();
    iVar2 = (int)in_stack_00000012 * (int)sVar1 * iVar2;
    sVar1 = (short)((uint)iVar2 >> 0x10);
    in_stack_00000012 = ((short)((iVar2 >> 0xc) / 100) + ((sVar1 >> 0xc) >> 0xf)) - (sVar1 >> 0xf);
                    /* WARNING: Subroutine does not return */
    FUN_8009098c(&(*unaff_s1)->SectionList[1].Event.Queue[0xc].Data,0,0x22,&stack0x00000010);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetDampingPhysics(struct _Instance *instance /*$a0*/)
 // line 1301, offset 0x800a6e14
	/* begin block 1 */
		// Start line: 2602
	/* end block 1 */
	// End Line: 2603

	/* begin block 2 */
		// Start line: 2783
	/* end block 2 */
	// End Line: 2784

void razSetDampingPhysics(_Instance *instance)

{
  evPhysicsSwimData *SwimData;
  undefined2 uStack00000012;
  
  uStack00000012 = 0xfff0;
  razEnterWater((__CharacterState *)instance,0,SwimData);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razEnterWater(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, struct evPhysicsSwimData *SwimData /*$s3*/)
 // line 1311, offset 0x800a6e4c
	/* begin block 1 */
		// Start line: 1312
		// Start offset: 0x800A6E4C
		// Variables:
	// 		struct _Instance *Inst; // $s2
	/* end block 1 */
	// End offset: 0x800A70D4
	// End Line: 1409

	/* begin block 2 */
		// Start line: 2804
	/* end block 2 */
	// End Line: 2805

void razEnterWater(__CharacterState *In,int CurrentSection,evPhysicsSwimData *SwimData)

{
  short sVar1;
  int iVar2;
  int *unaff_s1;
  short in_stack_00000012;
  
  if (in_stack_00000012 == 0) {
    return;
  }
  iVar2 = FUN_8009072c(*unaff_s1 + 0x194,0,0x22);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800904f0(*unaff_s1 + 0x194,0,0x22);
  }
  iVar2 = *(int *)(*unaff_s1 + 0x1c8);
  sVar1 = FUN_80096358();
  iVar2 = (int)in_stack_00000012 * (int)sVar1 * iVar2;
  sVar1 = (short)((uint)iVar2 >> 0x10);
  in_stack_00000012 = ((short)((iVar2 >> 0xc) / 100) + ((sVar1 >> 0xc) >> 0xf)) - (sVar1 >> 0xf);
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(*unaff_s1 + 0x194,0,0x22,&stack0x00000010);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetSwimVelocity(struct _Instance *instance /*$a0*/, int vel /*$a1*/, int accl /*$a2*/)
 // line 1436, offset 0x800a70f0
	/* begin block 1 */
		// Start line: 1438
		// Start offset: 0x800A70F0
	/* end block 1 */
	// End offset: 0x800A713C
	// End Line: 1452

	/* begin block 2 */
		// Start line: 3055
	/* end block 2 */
	// End Line: 3056

	/* begin block 3 */
		// Start line: 3056
	/* end block 3 */
	// End Line: 3057

	/* begin block 4 */
		// Start line: 3062
	/* end block 4 */
	// End Line: 3063

void razSetSwimVelocity(_Instance *instance,int vel,int accl)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_800b497c();
  FUN_800b497c(*unaff_s0,0xd,1,1);
  FUN_800b497c(*unaff_s0,0x1f,1,1);
  FUN_800b497c(*unaff_s0,0x29,1,1);
  if (((*(ushort *)(unaff_s3 + 0x10) & 0x800) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].ID == 1)) {
    FUN_80071b48();
  }
  if (((*(ushort *)(unaff_s3 + 0x10) & 0x100) != 0) && (unaff_s1 == 0)) {
    if (unaff_s2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8003432c();
    }
    FUN_800a6f68(*unaff_s0);
    FUN_800707a0(unaff_s0 + 3);
    FUN_800b497c(*unaff_s0,9,4,1);
    FUN_800b497c(*unaff_s0,0xd,4,1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetWallCrawlNodes(struct _Instance *instance /*$s1*/, struct evPhysicsWallCrawlData *data /*$s0*/)
 // line 1455, offset 0x800a7144
	/* begin block 1 */
		// Start line: 1456
		// Start offset: 0x800A7144
		// Variables:
	// 		struct _G2SVector3_Type vec; // stack offset -24

		/* begin block 1.1 */
			// Start line: 1463
			// Start offset: 0x800A716C
		/* end block 1.1 */
		// End offset: 0x800A71DC
		// End Line: 1501
	/* end block 1 */
	// End offset: 0x800A721C
	// End Line: 1512

	/* begin block 2 */
		// Start line: 3095
	/* end block 2 */
	// End Line: 3096

void razSetWallCrawlNodes(_Instance *instance,evPhysicsWallCrawlData *data)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  if (Raziel.State.SectionList[1].Defer.Queue[10].ID == 1) {
    FUN_80071b48();
  }
  if (((*(ushort *)(unaff_s3 + 0x10) & 0x100) != 0) && (unaff_s1 == 0)) {
    if (unaff_s2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8003432c();
    }
    FUN_800a6f68(*unaff_s0);
    FUN_800707a0(unaff_s0 + 3);
    FUN_800b497c(*unaff_s0,9,4,1);
    FUN_800b497c(*unaff_s0,0xd,4,1);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razSwitchVAnimCharacterGroup(struct _Instance *instance /*$s3*/, int animGroup /*$s4*/, int *frame /*$a2*/, int *frames /*$a3*/)
 // line 1516, offset 0x800a7230
	/* begin block 1 */
		// Start line: 1517
		// Start offset: 0x800A7230
		// Variables:
	// 		int i; // $s0
	// 		int rc; // $v1
	// 		int temp[3]; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A72CC
	// End Line: 1530

	/* begin block 2 */
		// Start line: 3233
	/* end block 2 */
	// End Line: 3234

int razSwitchVAnimCharacterGroup(_Instance *instance,int animGroup,int *frame,int *frames)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razSwitchVAnimGroup(struct _Instance *instance /*$a0*/, int section /*$a1*/, int animGroup /*$a2*/, int frame /*$a3*/, int frames /*stack 16*/)
 // line 1535, offset 0x800a72ec
	/* begin block 1 */
		// Start line: 1536
		// Start offset: 0x800A72EC
		// Variables:
	// 		int index; // $t0
	// 		int rc; // $v1
	/* end block 1 */
	// End offset: 0x800A7338
	// End Line: 1556

	/* begin block 2 */
		// Start line: 3277
	/* end block 2 */
	// End Line: 3278

int razSwitchVAnimGroup(_Instance *instance,int section,int animGroup,int frame,int frames)

{
  short in_v0;
  short in_v1;
  int unaff_s0;
  int unaff_s1;
  undefined2 uStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  
  *(short *)(unaff_s1 + 0x5c) = in_v0 - in_v1;
  *(short *)(unaff_s1 + 0x5e) = *(short *)(unaff_s1 + 0x5e) - *(short *)(unaff_s0 + 0x1a);
  uStack00000018 = *(undefined2 *)(unaff_s0 + 0x1e);
  uStack0000001a = *(undefined2 *)(unaff_s0 + 0x20);
  uStack0000001c = *(undefined2 *)(unaff_s0 + 0x22);
                    /* WARNING: Subroutine does not return */
  FUN_8009098c(instance,0,8,&stack0x00000018);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSwitchVAnimCharacterSingle(struct _Instance *instance /*$s3*/, int anim /*$s4*/, int *frame /*$a2*/, int *frames /*$a3*/)
 // line 1561, offset 0x800a7348
	/* begin block 1 */
		// Start line: 1562
		// Start offset: 0x800A7348
		// Variables:
	// 		int i; // $s0
	// 		int temp[3]; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A73E0
	// End Line: 1574

	/* begin block 2 */
		// Start line: 3336
	/* end block 2 */
	// End Line: 3337

void razSwitchVAnimCharacterSingle(_Instance *instance,int anim,int *frame,int *frames)

{
  int unaff_s0;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  short sStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  
  uStack0000001a = 0;
  uStack0000001c = 0;
  sStack00000018 = -*(short *)(unaff_s0 + 0x26);
  uStack00000010 = 3;
  uStack00000014 = 0;
  FUN_80072464();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSwitchVAnimSingle(struct _Instance *instance /*$a0*/, int section /*$a1*/, int anim /*$a2*/, int frame /*$a3*/, int frames /*stack 16*/)
 // line 1577, offset 0x800a7400
	/* begin block 1 */
		// Start line: 1578
		// Start offset: 0x800A7400
	/* end block 1 */
	// End offset: 0x800A7400
	// End Line: 1578

	/* begin block 2 */
		// Start line: 3373
	/* end block 2 */
	// End Line: 3374

void razSwitchVAnimSingle(_Instance *instance,int section,int anim,int frame,int frames)

{
  int unaff_s0;
  
  while( true ) {
    FUN_800a7440();
    if (2 < unaff_s0) break;
    unaff_s0 = unaff_s0 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSwitchVAnim(struct _Instance *instance /*$a0*/, int section /*$a1*/, struct __VAnim *vAnim /*$v1*/, int frame /*$a3*/, int frames /*stack 16*/)
 // line 1587, offset 0x800a7434
	/* begin block 1 */
		// Start line: 3396
	/* end block 1 */
	// End Line: 3397

void razSwitchVAnim(_Instance *instance,int section,__VAnim *vAnim,int frame,int frames)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razProcessSAnim(struct _Instance *instance /*$s3*/, int mode /*$a1*/)
 // line 1615, offset 0x800a7500
	/* begin block 1 */
		// Start line: 1616
		// Start offset: 0x800A7500
		// Variables:
	// 		int rc; // $s2
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 1641
			// Start offset: 0x800A75C8
			// Variables:
		// 		struct __VAnim *vanim; // $s1
		/* end block 1.1 */
		// End offset: 0x800A7630
		// End Line: 1652
	/* end block 1 */
	// End offset: 0x800A7654
	// End Line: 1663

	/* begin block 2 */
		// Start line: 3452
	/* end block 2 */
	// End Line: 3453

int razProcessSAnim(_Instance *instance,int mode)

{
  int unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uStack00000010;
  
  do {
    uStack00000010 = *unaff_s1;
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + 1;
    FUN_800a7554();
  } while (unaff_s0 < 3);
  return (uint)(unaff_s0 < 3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSwitchStringAnimation(struct _Instance *instance /*$s2*/, int anim /*$a1*/)
 // line 1667, offset 0x800a7678
	/* begin block 1 */
		// Start line: 1668
		// Start offset: 0x800A7678
		// Variables:
	// 		struct __VAnim *vanim; // $s1
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800A7724
	// End Line: 1684

	/* begin block 2 */
		// Start line: 3564
	/* end block 2 */
	// End Line: 3565

	/* begin block 3 */
		// Start line: 3568
	/* end block 3 */
	// End Line: 3569

void razSwitchStringAnimation(_Instance *instance,int anim)

{
  short sVar1;
  int in_v0;
  short sVar2;
  _Instance *p_Var3;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  undefined4 uStack00000010;
  
  if (anim == in_v0) {
    sVar2 = *(short *)&(Raziel.Senses.CurrentAutoFace)->next;
    sVar1 = 1;
  }
  else {
    if (in_v0 < anim) {
      if (anim != 0x8000003) goto LAB_800a76fc;
      sVar2 = *(short *)&(Raziel.Senses.CurrentAutoFace)->next;
      sVar1 = 3;
    }
    else {
      if ((undefined *)anim != &DAT_00100015) goto LAB_800a76fc;
      sVar2 = *(short *)&(Raziel.Senses.CurrentAutoFace)->next;
      sVar1 = 2;
    }
  }
  if (sVar2 == sVar1) {
    unaff_s2 = 1;
  }
LAB_800a76fc:
  if (unaff_s2 != 0) {
    p_Var3 = (_Instance *)((Raziel.Senses.CurrentAutoFace)->node).next;
    if (p_Var3 == (_Instance *)0x0) {
      FUN_8008fdd0(unaff_s3 + 0x194,0x1000);
      Raziel.Senses.CurrentAutoFace = (_Instance *)0x0;
    }
    else {
      iVar4 = 0;
      Raziel.Senses.CurrentAutoFace = p_Var3;
      if ((p_Var3->node).prev != (NodeType *)0x0) {
        do {
          uStack00000010 = 0xffffffff;
          FUN_800a7588();
          iVar4 = iVar4 + 1;
          FUN_8008fdd0(unaff_s3 + 0x194,(int)*(short *)&(Raziel.Senses.CurrentAutoFace)->prev);
        } while (iVar4 < 3);
        if (*(short *)&(Raziel.Senses.CurrentAutoFace)->next == 2) {
          FUN_800b3518((int)*(short *)((int)&(Raziel.Senses.CurrentAutoFace)->next + 2));
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckStringAnimation(struct _Instance *instance /*$s1*/, int mode /*$a1*/)
 // line 1687, offset 0x800a7740
	/* begin block 1 */
		// Start line: 1688
		// Start offset: 0x800A7740
		// Variables:
	// 		int rc; // $s0
	/* end block 1 */
	// End offset: 0x800A7788
	// End Line: 1698

	/* begin block 2 */
		// Start line: 3614
	/* end block 2 */
	// End Line: 3615

	/* begin block 3 */
		// Start line: 3617
	/* end block 3 */
	// End Line: 3618

int CheckStringAnimation(_Instance *instance,int mode)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  do {
    FUN_800a7588();
    unaff_s0 = unaff_s0 + 1;
    FUN_8008fdd0(unaff_s3 + 0x194,(int)*(short *)&(Raziel.Senses.CurrentAutoFace)->prev);
  } while (unaff_s0 < 3);
  if (*(short *)&(Raziel.Senses.CurrentAutoFace)->next == 2) {
    FUN_800b3518((int)*(short *)((int)&(Raziel.Senses.CurrentAutoFace)->next + 2));
  }
  return unaff_s2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razLaunchBubbles(int segments /*$s2*/, int count /*$s0*/, int type /*$s1*/)
 // line 1752, offset 0x800a77a0
	/* begin block 1 */
		// Start line: 3504
	/* end block 1 */
	// End Line: 3505

void razLaunchBubbles(int segments,int count,int type)

{
  Raziel.Senses.CurrentAutoFace = (_Instance *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetCowlNoDraw(int mode /*$t0*/)
 // line 1765, offset 0x800a7838
	/* begin block 1 */
		// Start line: 1766
		// Start offset: 0x800A7838
	/* end block 1 */
	// End offset: 0x800A78E0
	// End Line: 1775

	/* begin block 2 */
		// Start line: 3720
	/* end block 2 */
	// End Line: 3721

void razSetCowlNoDraw(int mode)

{
  uint in_v0;
  int unaff_s0;
  int unaff_s2;
  
  while (in_v0 != 0) {
    FUN_800a7588();
    unaff_s0 = unaff_s0 + 1;
    in_v0 = (uint)(unaff_s0 < 3);
  }
  FUN_8008fdd0(unaff_s2 + 0x194,(int)*(short *)&(Raziel.Senses.CurrentAutoFace)->prev);
  if (*(short *)&(Raziel.Senses.CurrentAutoFace)->next == 2) {
    FUN_800b3518((int)*(short *)((int)&(Raziel.Senses.CurrentAutoFace)->next + 2));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razAttachControllers()
 // line 1777, offset 0x800a78e8
	/* begin block 1 */
		// Start line: 1778
		// Start offset: 0x800A78E8
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800A793C
	// End Line: 1785

	/* begin block 2 */
		// Start line: 3748
	/* end block 2 */
	// End Line: 3749

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razAttachControllers(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetPlayerEvent()
 // line 1787, offset 0x800a7950
	/* begin block 1 */
		// Start line: 1788
		// Start offset: 0x800A7950
		// Variables:
	// 		void (*process)(); // $s0
	// 		int message; // stack offset -16
	// 		int data; // stack offset -12

		/* begin block 1.1 */
			// Start line: 1812
			// Start offset: 0x800A7A10
		/* end block 1.1 */
		// End offset: 0x800A7A4C
		// End Line: 1821
	/* end block 1 */
	// End offset: 0x800A7C4C
	// End Line: 1887

	/* begin block 2 */
		// Start line: 3778
	/* end block 2 */
	// End Line: 3779

	/* begin block 3 */
		// Start line: 3785
	/* end block 3 */
	// End Line: 3786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razSetPlayerEvent(void)

{
  FUN_800b497c(loadStatus.bigFile.searchDirID);
  FUN_800b497c(loadStatus.bigFile.searchDirID,0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razClearPlayerEvent()
 // line 1889, offset 0x800a7c5c
	/* begin block 1 */
		// Start line: 3993
	/* end block 1 */
	// End Line: 3994

	/* begin block 2 */
		// Start line: 3995
	/* end block 2 */
	// End Line: 3996

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razClearPlayerEvent(void)

{
  uint in_v0;
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((in_v0 & 4) == 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x20);
  }
  iVar1 = FUN_8009bc14(&stack0x00000010,&stack0x00000014);
  if ((iVar1 != 0) && (in_stack_00000014 != 0)) {
    if (in_stack_00000010 == 0x1000002) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x40);
    }
    if (in_stack_00000010 == 0x100000a) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x80);
    }
    if (in_stack_00000010 == 0x1000018) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x100);
    }
  }
  if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x20000U) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].ID - 1U < 3)) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x200);
  }
  if (in_stack_00000010 == 0x80000) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x400);
  }
  if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x4000U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x800);
  }
  if ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x40U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x2000);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetPlayerEventHistory(unsigned long event /*$a0*/)
 // line 1898, offset 0x800a7c94
	/* begin block 1 */
		// Start line: 4011
	/* end block 1 */
	// End Line: 4012

	/* begin block 2 */
		// Start line: 4012
	/* end block 2 */
	// End Line: 4013

void razSetPlayerEventHistory(ulong event)

{
  int in_v0;
  int in_stack_00000010;
  
  if (in_v0 != 0) {
    if (in_stack_00000010 == 0x1000002) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x40);
    }
    if (in_stack_00000010 == 0x100000a) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x80);
    }
    if (in_stack_00000010 == 0x1000018) {
      Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x100);
    }
  }
  if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x20000U) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].ID - 1U < 3)) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x200);
  }
  if (in_stack_00000010 == 0x80000) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x400);
  }
  if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x4000U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x800);
  }
  if ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x40U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x2000);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razSideMoveSpiderCheck(struct _Instance *instance /*$s2*/, int x /*$a1*/)
 // line 1905, offset 0x800a7cac
	/* begin block 1 */
		// Start line: 1906
		// Start offset: 0x800A7CAC
		// Variables:
	// 		struct SVECTOR startVec; // stack offset -32
	// 		struct SVECTOR endVec; // stack offset -24
	/* end block 1 */
	// End offset: 0x800A7D60
	// End Line: 1925

	/* begin block 2 */
		// Start line: 4025
	/* end block 2 */
	// End Line: 4026

int razSideMoveSpiderCheck(_Instance *instance,int x)

{
  _Instance *p_Var1;
  int in_v1;
  int in_stack_00000010;
  
  p_Var1 = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x40);
  if (in_v1 == 0x100000a) {
    p_Var1 = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0xc0);
  }
  Raziel.Senses.LastAutoFace = p_Var1;
  if (in_v1 == 0x1000018) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x100);
  }
  if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x20000U) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].ID - 1U < 3)) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x200);
  }
  if (in_stack_00000010 == 0x80000) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x400);
  }
  if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x4000U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x800);
  }
  p_Var1 = (_Instance *)(Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x40);
  if (p_Var1 != (_Instance *)0x0) {
    p_Var1 = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x2000);
    Raziel.Senses.LastAutoFace = p_Var1;
  }
  return (int)p_Var1;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ RAZIEL_QueryEngagedInstance(int index /*$a0*/)
 // line 1942, offset 0x800a7d78
	/* begin block 1 */
		// Start line: 4115
	/* end block 1 */
	// End Line: 4116

	/* begin block 2 */
		// Start line: 4117
	/* end block 2 */
	// End Line: 4118

_Instance * RAZIEL_QueryEngagedInstance(int index)

{
  _Instance *in_v0;
  _Instance *p_Var1;
  
  p_Var1 = (_Instance *)(Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x40);
  Raziel.Senses.LastAutoFace = in_v0;
  if (p_Var1 != (_Instance *)0x0) {
    p_Var1 = (_Instance *)((uint)in_v0 | 0x2000);
    Raziel.Senses.LastAutoFace = p_Var1;
  }
  return p_Var1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razUpdateSoundRamp(struct _Instance *instance /*$a0*/, struct _SoundRamp *sound /*$s0*/)
 // line 1955, offset 0x800a7db0
	/* begin block 1 */
		// Start line: 1956
		// Start offset: 0x800A7DB0
		// Variables:
	// 		int volume; // $s1
	// 		int time; // $t0

		/* begin block 1.1 */
			// Start line: 1971
			// Start offset: 0x800A7E14
			// Variables:
		// 		int startPitch; // $v1
		// 		int endPitch; // $v0
		// 		int startVolume; // $a1
		// 		int endVolume; // $v0
		/* end block 1.1 */
		// End offset: 0x800A7E9C
		// End Line: 1986
	/* end block 1 */
	// End offset: 0x800A7E9C
	// End Line: 1989

	/* begin block 2 */
		// Start line: 4137
	/* end block 2 */
	// End Line: 4138

	/* begin block 3 */
		// Start line: 4144
	/* end block 3 */
	// End Line: 4145

int razUpdateSoundRamp(_Instance *instance,_SoundRamp *sound)

{
  if ((Raziel.currentHint & 0x100000U) != 0) {
    Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace & 0x2000);
    return (int)Raziel.Senses.LastAutoFace;
  }
  Raziel.Senses.LastAutoFace = (_Instance *)0x0;
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razSetupSoundRamp(struct _Instance *instance /*$a0*/, struct _SoundRamp *sound /*$s0*/, int sfx /*$a1*/, int startPitch /*$s2*/, int endPitch /*stack 16*/, int startVolume /*stack 20*/, int endVolume /*stack 24*/, int timer /*stack 28*/, int distance /*stack 32*/)
 // line 1995, offset 0x800a7eb4
	/* begin block 1 */
		// Start line: 4235
	/* end block 1 */
	// End Line: 4236

void razSetupSoundRamp(_Instance *instance,_SoundRamp *sound,int sfx,int startPitch,int endPitch,
                      int startVolume,int endVolume,int timer,int distance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_SetInteractiveMusic(int modifier /*$a0*/, int action /*$a1*/)
 // line 2019, offset 0x800a7f58
	/* begin block 1 */
		// Start line: 2020
		// Start offset: 0x800A7F58
		// Variables:
	// 		int soundFlag; // $s0
	/* end block 1 */
	// End offset: 0x800A7FC4
	// End Line: 2039

	/* begin block 2 */
		// Start line: 4290
	/* end block 2 */
	// End Line: 4291

void RAZIEL_SetInteractiveMusic(int modifier,int action)

{
  int iVar1;
  int in_a2;
  int in_t0;
  undefined4 *unaff_s0;
  undefined4 uStack00000010;
  
  if (in_a2 <= in_t0) {
    uStack00000010 = unaff_s0[3];
    iVar1 = FUN_8003fc14(modifier + 0x5c,*unaff_s0,
                         (int)*(short *)(unaff_s0 + 4) +
                         (((int)*(short *)((int)unaff_s0 + 0x12) - (int)*(short *)(unaff_s0 + 4)) *
                         in_a2) / in_t0,
                         (int)*(short *)(unaff_s0 + 5) +
                         (((int)*(short *)((int)unaff_s0 + 0x16) - (int)*(short *)(unaff_s0 + 5)) *
                         in_a2) / in_t0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_800401fc(*unaff_s0);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_DebugHurtRaziel()
 // line 2040, offset 0x800a7fd4
	/* begin block 1 */
		// Start line: 4338
	/* end block 1 */
	// End Line: 4339

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RAZIEL_DebugHurtRaziel(void)

{
  int in_v0;
  int in_v1;
  undefined4 in_a1;
  int in_a2;
  undefined4 *unaff_s0;
  
  if (in_v0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800401fc(*unaff_s0,in_a1,in_v1 + in_a2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_StartNewGame()
 // line 2045, offset 0x800a7ff4
	/* begin block 1 */
		// Start line: 4348
	/* end block 1 */
	// End Line: 4349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RAZIEL_StartNewGame(void)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ razInBaseArea(char *name /*$s1*/, int length /*$s0*/)
 // line 2054, offset 0x800a801c
	/* begin block 1 */
		// Start line: 2055
		// Start offset: 0x800A801C
		// Variables:
	// 		char string[9]; // stack offset -32
	/* end block 1 */
	// End offset: 0x800A8064
	// End Line: 2068

	/* begin block 2 */
		// Start line: 4367
	/* end block 2 */
	// End Line: 4368

int razInBaseArea(char *name,int length)

{
  int iVar1;
  undefined2 in_a3;
  int *unaff_s0;
  undefined2 unaff_s3;
  undefined2 in_stack_00000040;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  
  if (*unaff_s0 == 0) {
    iVar1 = FUN_8003f9d8(name + 0x5c);
    *unaff_s0 = iVar1;
  }
  if (in_stack_0000004c == 0) {
    *unaff_s0 = 0;
  }
  *(undefined2 *)(unaff_s0 + 4) = in_a3;
  *(undefined2 *)(unaff_s0 + 5) = unaff_s3;
  *(undefined2 *)((int)unaff_s0 + 0x12) = in_stack_00000040;
  unaff_s0[3] = in_stack_00000050;
  unaff_s0[2] = in_stack_0000004c;
  unaff_s0[1] = 0;
  *(undefined2 *)((int)unaff_s0 + 0x16) = (short)in_stack_00000048;
  return in_stack_00000048;
}



// decompiled code
// original method signature: 
// void /*$ra*/ razPrepGlyph()
 // line 2073, offset 0x800a8078
	/* begin block 1 */
		// Start line: 2074
		// Start offset: 0x800A8078
		// Variables:
	// 		struct _Instance *heldInst; // $s0
	/* end block 1 */
	// End offset: 0x800A80AC
	// End Line: 2083

	/* begin block 2 */
		// Start line: 4416
	/* end block 2 */
	// End Line: 4417

/* WARNING: Unknown calling convention yet parameter storage is locked */

void razPrepGlyph(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s4;
  undefined2 in_stack_00000048;
  
  *(undefined4 *)(unaff_s0 + 0xc) = unaff_s1;
  *(undefined4 *)(unaff_s0 + 8) = unaff_s4;
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined2 *)(unaff_s0 + 0x16) = in_stack_00000048;
  return;
}





