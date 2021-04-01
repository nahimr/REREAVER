#include "THISDUST.H"
#include "PHYSICS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetNoPtCollideInFamily(struct _Instance *instance /*$a0*/)
 // line 57, offset 0x80074628
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x80074628
		// Variables:
	// 		struct _Instance *child; // $s0
	/* end block 1 */
	// End offset: 0x80074660
	// End Line: 65

	/* begin block 2 */
		// Start line: 114
	/* end block 2 */
	// End Line: 115

void SetNoPtCollideInFamily(_Instance *instance)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  byte *pbVar3;
  int unaff_s1;
  byte *unaff_s2;
  
  pbVar3 = (byte *)(unaff_s1 + 1);
  while( true ) {
    bVar1 = *unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    iVar2 = FUN_800745e8((uint)bVar1);
    if ((in_v0 != iVar2) || (in_v0 == 0)) break;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    in_v0 = FUN_800745e8((uint)bVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetNoPtCollideInFamily(struct _Instance *instance /*$a0*/)
 // line 67, offset 0x80074670
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80074670
		// Variables:
	// 		struct _Instance *child; // $s0
	/* end block 1 */
	// End offset: 0x800746AC
	// End Line: 75

	/* begin block 2 */
		// Start line: 137
	/* end block 2 */
	// End Line: 138

void ResetNoPtCollideInFamily(_Instance *instance)

{
  _Instance *p_Var1;
  
  p_Var1 = instance->LinkChild;
  instance->flags = instance->flags | 0x40;
  while (p_Var1 != (_Instance *)0x0) {
    FUN_80074664(p_Var1);
    p_Var1 = p_Var1->LinkSibling;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_CheckLineInWorld(struct _Instance *instance /*$a0*/, struct _PCollideInfo *pcollideInfo /*$a1*/)
 // line 79, offset 0x800746bc
	/* begin block 1 */
		// Start line: 167
	/* end block 1 */
	// End Line: 168

void PHYSICS_CheckLineInWorld(_Instance *instance,_PCollideInfo *pcollideInfo)

{
  uint in_v1;
  _Instance *p_Var1;
  
  p_Var1 = instance->LinkChild;
  instance->flags = instance->flags & in_v1;
  while (p_Var1 != (_Instance *)0x0) {
    FUN_800746ac(p_Var1);
    p_Var1 = p_Var1->LinkSibling;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_CheckLineInWorldMask(struct _Instance *instance /*$s2*/, struct _PCollideInfo *pcollideInfo /*$s1*/)
 // line 85, offset 0x800746e0
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x800746E0
		// Variables:
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x80074734
	// End Line: 113

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

void PHYSICS_CheckLineInWorldMask(_Instance *instance,_PCollideInfo *pcollideInfo)

{
  int unaff_s0;
  
  while (unaff_s0 != 0) {
    FUN_800746ac(unaff_s0);
    unaff_s0 = *(int *)(unaff_s0 + 0x134);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckLinkedMove(struct _Instance *instance /*$s2*/, int Data /*stack 4*/, short Mode /*stack -72*/)
 // line 124, offset 0x80074754
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x80074754

		/* begin block 1.1 */
			// Start line: 128
			// Start offset: 0x80074798
			// Variables:
		// 		struct evPhysicsLinkedMoveData *ptr; // $s3
		// 		struct _Instance *on; // $s0
		// 		struct MATRIX work; // stack offset -144
		// 		struct MATRIX *current; // $s4
		// 		struct VECTOR delta; // stack offset -112
		// 		long onx; // stack offset -64
		// 		long ony; // stack offset -60
		// 		long onz; // stack offset -56
		// 		long ix; // $s5
		// 		long iy; // stack offset -52
		// 		long iz; // stack offset -48

			/* begin block 1.1.1 */
				// Start line: 146
				// Start offset: 0x80074810
				// Variables:
			// 		struct _Instance *oldOn; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80074834
			// End Line: 153

			/* begin block 1.1.2 */
				// Start line: 182
				// Start offset: 0x80074920
				// Variables:
			// 		struct _G2EulerAngles_Type newRot; // stack offset -96
			// 		struct VECTOR newRelPos; // stack offset -88
			// 		long oldPosX; // $s6
			// 		long oldPosY; // $fp
			// 		long oldPosZ; // $s7
			// 		int moved; // $s1
			// 		int rotated; // $s0
			/* end block 1.1.2 */
			// End offset: 0x80074AD0
			// End Line: 245
		/* end block 1.1 */
		// End offset: 0x80074B78
		// End Line: 260
	/* end block 1 */
	// End offset: 0x80074B80
	// End Line: 266

	/* begin block 2 */
		// Start line: 263
	/* end block 2 */
	// End Line: 264

int PhysicsCheckLinkedMove(_Instance *instance,int Data,short Mode)

{
  int iVar1;
  int unaff_s0;
  undefined2 *unaff_s1;
  
  if (unaff_s0 == 0) {
    *unaff_s1 = 0;
  }
  else {
    FUN_800207c8();
  }
  iVar1 = FUN_800746ac();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsDefaultLinkedMoveResponse(struct _Instance *instance /*$s0*/, struct evPhysicsLinkedMoveData *Data /*$s1*/, int updateTransforms /*$a2*/)
 // line 272, offset 0x80074bb0
	/* begin block 1 */
		// Start line: 596
	/* end block 1 */
	// End Line: 597

void PhysicsDefaultLinkedMoveResponse
               (_Instance *instance,evPhysicsLinkedMoveData *Data,int updateTransforms)

{
  int unaff_s2;
  
  *(undefined4 *)(unaff_s2 + 0x8c) = 0;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckGravity(struct _Instance *instance /*$s0*/, int Data /*stack 4*/, short Mode /*$s7*/)
 // line 296, offset 0x80074c38
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x80074C38
		// Variables:
	// 		struct evPhysicsGravityData *Ptr; // $s3
	// 		struct SVECTOR D; // stack offset -120
	// 		struct SVECTOR N; // stack offset -112
	// 		short Dot; // $v0
	// 		int rc; // $s4
	// 		struct _PCollideInfo CInfo; // stack offset -104
	// 		struct SVECTOR Old; // stack offset -56
	// 		struct SVECTOR New; // stack offset -48
	// 		int slide; // $fp

		/* begin block 1.1 */
			// Start line: 326
			// Start offset: 0x80074D30
			// Variables:
		// 		int stillOnOldTFace; // $v0
		// 		struct Level *level; // $s2
		// 		struct _TFace *tface; // $s1
		/* end block 1.1 */
		// End offset: 0x80074DF0
		// End Line: 361

		/* begin block 1.2 */
			// Start line: 504
			// Start offset: 0x8007528C
			// Variables:
		// 		struct _Instance *oldOn; // $a0
		/* end block 1.2 */
		// End offset: 0x800752B0
		// End Line: 511
	/* end block 1 */
	// End offset: 0x800753BC
	// End Line: 564

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

int PhysicsCheckGravity(_Instance *instance,int Data,short Mode)

{
  short in_v0;
  int iVar1;
  short in_v1;
  undefined2 in_register_0000001a;
  int unaff_s0;
  int unaff_s1;
  
  *(short *)(unaff_s0 + 0x60) = in_v0 + in_v1;
  if (CONCAT22(in_register_0000001a,Mode) != 0) {
    FUN_8001e924(instance,unaff_s1 + 8);
  }
  iVar1 = (uint)*(ushort *)(unaff_s0 + 0x78) + (uint)*(ushort *)(unaff_s1 + 0x14);
  *(undefined2 *)(unaff_s0 + 0x78) = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsDefaultGravityResponse(struct _Instance *instance /*$a0*/, struct evPhysicsGravityData *Data /*$a1*/)
 // line 570, offset 0x800753f0
	/* begin block 1 */
		// Start line: 1307
	/* end block 1 */
	// End Line: 1308

	/* begin block 2 */
		// Start line: 1308
	/* end block 2 */
	// End Line: 1309

void PhysicsDefaultGravityResponse(_Instance *instance,evPhysicsGravityData *Data)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,(uint)Data | 1);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckEdgeGrabbing(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$a1*/, int Data /*stack 8*/, short Mode /*$s7*/)
 // line 589, offset 0x80075468
	/* begin block 1 */
		// Start line: 590
		// Start offset: 0x80075468
		// Variables:
	// 		struct evPhysicsEdgeData *Ptr; // $s1
	// 		int rc; // $s6
	// 		struct VECTOR OutTrans; // stack offset -120
	// 		struct SVECTOR *ExtraRot; // $v0
	// 		struct _PCollideInfo CInfo; // stack offset -104
	// 		struct SVECTOR Old; // stack offset -56
	// 		struct SVECTOR New; // stack offset -48
	// 		static struct MATRIX TempMat; // offset 0x0
	// 		static struct MATRIX *pTempMat; // offset 0x20
	// 		int wallCrawl; // $fp
	// 		int freeSpot; // $s3
	/* end block 1 */
	// End offset: 0x80075AEC
	// End Line: 873

	/* begin block 2 */
		// Start line: 1345
	/* end block 2 */
	// End Line: 1346

int PhysicsCheckEdgeGrabbing(_Instance *instance,GameTracker *gameTracker,int Data,short Mode)

{
  int in_v0;
  int iVar1;
  
  if (0x80 < in_v0) {
    iVar1 = (uint)(ushort)(instance->position).z + 0x80;
    (instance->position).z = (short)iVar1;
    return iVar1;
  }
  iVar1 = (uint)(ushort)(instance->position).z +
          (uint)(ushort)(gameTracker->gameData).asmData.MorphTime;
  (instance->position).z = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsDefaultEdgeGrabResponse(struct _Instance *instance /*$s2*/, struct evPhysicsEdgeData *Data /*$s1*/, int blockFlag /*$a2*/)
 // line 886, offset 0x80075b20
	/* begin block 1 */
		// Start line: 887
		// Start offset: 0x80075B20
		// Variables:
	// 		struct _SVector normal; // stack offset -88
	// 		struct _G2EulerAngles_Type ea1; // stack offset -80
	// 		struct VECTOR OutTrans; // stack offset -72
	// 		struct MATRIX TempMat; // stack offset -56
	// 		struct SVECTOR New; // stack offset -24

		/* begin block 1.1 */
			// Start line: 936
			// Start offset: 0x80075C3C
			// Variables:
		// 		long dp; // $v0
		/* end block 1.1 */
		// End offset: 0x80075C3C
		// End Line: 936
	/* end block 1 */
	// End offset: 0x80075C3C
	// End Line: 936

	/* begin block 2 */
		// Start line: 2031
	/* end block 2 */
	// End Line: 2032

void PhysicsDefaultEdgeGrabResponse(_Instance *instance,evPhysicsEdgeData *Data,int blockFlag)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,(uint)Data | 0x11);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckSliding(struct _Instance *instance /*$s3*/, int Data /*$a1*/, short Mode /*$s6*/)
 // line 983, offset 0x80075dc4
	/* begin block 1 */
		// Start line: 984
		// Start offset: 0x80075DC4
		// Variables:
	// 		struct evPhysicsSlideData *Ptr; // $s0
	// 		int rc; // $s1
	// 		struct VECTOR OutTrans; // stack offset -120
	// 		struct _SVector normal; // stack offset -104
	// 		struct _PCollideInfo CInfo; // stack offset -96
	// 		struct SVECTOR Old; // stack offset -48
	// 		struct SVECTOR New; // stack offset -40
	// 		static struct MATRIX *pTempMat; // offset 0x24

		/* begin block 1.1 */
			// Start line: 1015
			// Start offset: 0x80075E4C
		/* end block 1.1 */
		// End offset: 0x80075E4C
		// End Line: 1017

		/* begin block 1.2 */
			// Start line: 1024
			// Start offset: 0x80075E88
			// Variables:
		// 		int Temp; // $a3
		/* end block 1.2 */
		// End offset: 0x80075F5C
		// End Line: 1032
	/* end block 1 */
	// End offset: 0x80076244
	// End Line: 1166

	/* begin block 2 */
		// Start line: 2245
	/* end block 2 */
	// End Line: 2246

int PhysicsCheckSliding(_Instance *instance,int Data,short Mode)

{
  short in_v0;
  int iVar1;
  short in_v1;
  int unaff_s1;
  int unaff_s2;
  ushort in_stack_00000024;
  
  *(short *)(unaff_s2 + 0x5c) = in_v0 + in_v1;
  iVar1 = (uint)*(ushort *)(unaff_s2 + 0x5e) -
          ((uint)in_stack_00000024 - (uint)*(ushort *)(*(int *)(unaff_s1 + 0x14) + 2));
  *(undefined2 *)(unaff_s2 + 0x5e) = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsUpdateTface(struct _Instance *instance /*$s0*/, int Data /*$a1*/)
 // line 1177, offset 0x80076270
	/* begin block 1 */
		// Start line: 1178
		// Start offset: 0x80076270
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -72
	// 		struct SVECTOR Old; // stack offset -24
	// 		struct SVECTOR New; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007635C
	// End Line: 1219

	/* begin block 2 */
		// Start line: 2786
	/* end block 2 */
	// End Line: 2787

int PhysicsUpdateTface(_Instance *instance,int Data)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 in_stack_00000030;
  
  *(undefined4 *)(unaff_s0 + 0x20) = in_stack_00000030;
  return unaff_s1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckBlockers(struct _Instance *instance /*$s3*/, struct GameTracker *gameTracker /*$a1*/, int Data /*$s4*/, short Mode /*$s2*/)
 // line 1232, offset 0x8007636c
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x8007636C
		// Variables:
	// 		struct evPhysicsEdgeData *Ptr; // $s1
	// 		struct VECTOR OutTrans; // stack offset -120
	// 		struct _PCollideInfo CInfo; // stack offset -104
	// 		struct SVECTOR Old; // stack offset -56
	// 		struct SVECTOR New; // stack offset -48
	// 		static struct MATRIX *pTempMat; // offset 0x28

		/* begin block 1.1 */
			// Start line: 1276
			// Start offset: 0x80076418
			// Variables:
		// 		struct _TFace *tface; // $s0

			/* begin block 1.1.1 */
				// Start line: 1278
				// Start offset: 0x80076418
				// Variables:
			// 		int Dot; // $a0
			// 		struct SVECTOR Force; // stack offset -40
			/* end block 1.1.1 */
			// End offset: 0x800764FC
			// End Line: 1323

			/* begin block 1.1.2 */
				// Start line: 1351
				// Start offset: 0x800765D0
				// Variables:
			// 		struct _HFace *hface; // stack offset -32
			/* end block 1.1.2 */
			// End offset: 0x800765D0
			// End Line: 1357
		/* end block 1.1 */
		// End offset: 0x800766E8
		// End Line: 1401
	/* end block 1 */
	// End offset: 0x800766EC
	// End Line: 1404

	/* begin block 2 */
		// Start line: 2909
	/* end block 2 */
	// End Line: 2910

int PhysicsCheckBlockers(_Instance *instance,GameTracker *gameTracker,int Data,short Mode)

{
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckSwim(struct _Instance *instance /*$s1*/, int Data /*$s3*/, short Mode /*$s5*/)
 // line 1486, offset 0x8007670c
	/* begin block 1 */
		// Start line: 1487
		// Start offset: 0x8007670C
		// Variables:
	// 		struct evPhysicsSwimData *Ptr; // $s4
	// 		int rc; // $s0
	// 		int Depth; // $s0
	// 		int WaterDepth; // $v1
	// 		struct _PCollideInfo CInfo; // stack offset -96
	// 		struct SVECTOR Old; // stack offset -48
	// 		struct SVECTOR New; // stack offset -40
	// 		long waterZLevel; // $s2
	/* end block 1 */
	// End offset: 0x800768CC
	// End Line: 1576

	/* begin block 2 */
		// Start line: 3530
	/* end block 2 */
	// End Line: 3531

int PhysicsCheckSwim(_Instance *instance,int Data,short Mode)

{
  int in_v0;
  int unaff_s1;
  
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368();
  }
  return *(int *)(unaff_s1 + 0x20);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsDefaultCheckSwimResponse(struct _Instance *instance /*$s2*/, struct evPhysicsSwimData *Data /*$s3*/)
 // line 1584, offset 0x800768fc
	/* begin block 1 */
		// Start line: 1585
		// Start offset: 0x800768FC
		// Variables:
	// 		int rc; // $s0
	// 		long waterZLevel; // $s1
	/* end block 1 */
	// End offset: 0x80076AD4
	// End Line: 1638

	/* begin block 2 */
		// Start line: 3755
	/* end block 2 */
	// End Line: 3756

int PhysicsDefaultCheckSwimResponse(_Instance *instance,evPhysicsSwimData *Data)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,0x4020000);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsForceSetWater(struct _Instance *instance /*$s1*/, int *Time /*$t0*/, int Depth /*$a2*/, int rate /*$a3*/, int maxAmplitude /*stack 16*/)
 // line 1856, offset 0x80076af4
	/* begin block 1 */
		// Start line: 1857
		// Start offset: 0x80076AF4
		// Variables:
	// 		int Amplitude; // $s0
	/* end block 1 */
	// End offset: 0x80076BB8
	// End Line: 1874

	/* begin block 2 */
		// Start line: 4301
	/* end block 2 */
	// End Line: 4302

void PhysicsForceSetWater(_Instance *instance,int *Time,int Depth,int rate,int maxAmplitude)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckLOS(struct _Instance *instance /*$a0*/, int Data /*$a1*/, int Mode /*$a2*/)
 // line 1887, offset 0x80076bcc
	/* begin block 1 */
		// Start line: 1888
		// Start offset: 0x80076BCC
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -56
	/* end block 1 */
	// End offset: 0x80076BCC
	// End Line: 1888

	/* begin block 2 */
		// Start line: 4372
	/* end block 2 */
	// End Line: 4373

int PhysicsCheckLOS(_Instance *instance,int Data,int Mode)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = unaff_s0 * in_v0;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  iVar1 = (uint)*(ushort *)(unaff_s1 + 0x60) + (iVar1 >> 0xc);
  *(undefined2 *)(unaff_s1 + 0x60) = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckDropHeight(struct _Instance *instance /*$s2*/, int Data /*$a1*/, int Mode /*$s3*/)
 // line 1915, offset 0x80076bfc
	/* begin block 1 */
		// Start line: 1916
		// Start offset: 0x80076BFC
		// Variables:
	// 		struct evPhysicsDropHeightData *data; // $s0
	// 		struct Level *level; // $v0
	// 		struct SVECTOR newPos; // stack offset -104
	// 		struct SVECTOR oldPos; // stack offset -96
	// 		int rc; // $s1
	// 		int lowZ; // $v1
	// 		struct _PCollideInfo CInfo; // stack offset -88
	// 		static struct MATRIX TempMat; // offset 0x30
	// 		static struct MATRIX *pTempMat; // offset 0x50

		/* begin block 1.1 */
			// Start line: 1929
			// Start offset: 0x80076C30
			// Variables:
		// 		struct VECTOR outTrans; // stack offset -40
		// 		struct SVECTOR *ExtraRot; // $v0
		/* end block 1.1 */
		// End offset: 0x80076C74
		// End Line: 1958

		/* begin block 1.2 */
			// Start line: 1982
			// Start offset: 0x80076D40
			// Variables:
		// 		long waterZLevel; // $a0
		/* end block 1.2 */
		// End offset: 0x80076D7C
		// End Line: 2000
	/* end block 1 */
	// End offset: 0x80076E6C
	// End Line: 2048

	/* begin block 2 */
		// Start line: 4438
	/* end block 2 */
	// End Line: 4439

int PhysicsCheckDropHeight(_Instance *instance,int Data,int Mode)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsCheckDropOff(struct _Instance *instance /*$s0*/, int Data /*$a1*/, short Mode /*$s3*/)
 // line 2060, offset 0x80076e8c
	/* begin block 1 */
		// Start line: 2061
		// Start offset: 0x80076E8C
		// Variables:
	// 		struct evPhysicsDropOffData *Ptr; // $s1
	// 		int rc; // $s2
	// 		struct VECTOR OutTrans; // stack offset -104
	// 		struct SVECTOR *ExtraRot; // $v0
	// 		struct _PCollideInfo CInfo; // stack offset -88
	// 		struct SVECTOR New; // stack offset -40
	// 		struct SVECTOR Old; // stack offset -32
	// 		static struct MATRIX TempMat; // offset 0x60
	// 		static struct MATRIX *pTempMat; // offset 0x80
	/* end block 1 */
	// End offset: 0x80077090
	// End Line: 2155

	/* begin block 2 */
		// Start line: 4753
	/* end block 2 */
	// End Line: 4754

int PhysicsCheckDropOff(_Instance *instance,int Data,short Mode)

{
  short in_v0;
  short in_v1;
  int unaff_s0;
  undefined2 in_stack_00000014;
  
  *(short *)(unaff_s0 + 10) = in_v0 - in_v1;
  *(undefined2 *)(unaff_s0 + 4) = in_stack_00000014;
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PhysicsFollowWall(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$a1*/, int Data /*$s7*/, short Mode /*$s5*/)
 // line 2209, offset 0x800770ac
	/* begin block 1 */
		// Start line: 2210
		// Start offset: 0x800770AC
		// Variables:
	// 		struct VECTOR OutTrans; // stack offset -168
	// 		struct evPhysicsWallCrawlData *Ptr; // $s1
	// 		struct _PCollideInfo CInfo; // stack offset -152
	// 		struct SVECTOR New; // stack offset -104
	// 		struct SVECTOR Old; // stack offset -96
	// 		static struct MATRIX *pTempMat; // offset 0x84

		/* begin block 1.1 */
			// Start line: 2281
			// Start offset: 0x800771E8
			// Variables:
		// 		struct _Position A; // stack offset -88
		// 		struct _Position B; // stack offset -80
		// 		struct MATRIX mat; // stack offset -72
		/* end block 1.1 */
		// End offset: 0x800772E4
		// End Line: 2341
	/* end block 1 */
	// End offset: 0x8007758C
	// End Line: 2488

	/* begin block 2 */
		// Start line: 4418
	/* end block 2 */
	// End Line: 4419

int PhysicsFollowWall(_Instance *instance,GameTracker *gameTracker,int Data,short Mode)

{
  int in_v0;
  
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368();
  }
  return 8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsMoveLocalZClamp(struct _Instance *instance /*$s3*/, long segment /*$s0*/, long time /*$s1*/, long clamp /*$s2*/)
 // line 2636, offset 0x800775bc
	/* begin block 1 */
		// Start line: 2637
		// Start offset: 0x800775BC
		// Variables:
	// 		struct _Position pos; // stack offset -48
	// 		struct SVECTOR v; // stack offset -40
	// 		struct SVECTOR dv; // stack offset -32
	/* end block 1 */
	// End offset: 0x80077678
	// End Line: 2656

	/* begin block 2 */
		// Start line: 5272
	/* end block 2 */
	// End Line: 5273

void PhysicsMoveLocalZClamp(_Instance *instance,long segment,long time,long clamp)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,segment | 0x11);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsMove(struct _Instance *instance /*$a0*/, struct _Position *position /*$a1*/, long time /*$a2*/)
 // line 2662, offset 0x80077694
	/* begin block 1 */
		// Start line: 2664
		// Start offset: 0x80077694
		// Variables:
	// 		long xVel; // $t0
	// 		long yVel; // $t1
	// 		long zVel; // $t2
	// 		long xat; // $t6
	// 		long yat; // $t4
	// 		long zat; // $t5
	/* end block 1 */
	// End offset: 0x80077820
	// End Line: 2700

	/* begin block 2 */
		// Start line: 5969
	/* end block 2 */
	// End Line: 5970

	/* begin block 3 */
		// Start line: 5970
	/* end block 3 */
	// End Line: 5971

	/* begin block 4 */
		// Start line: 5979
	/* end block 4 */
	// End Line: 5980

void PhysicsMove(_Instance *instance,_Position *position,long time)

{
  short in_v0;
  short in_v1;
  int unaff_s2;
  int unaff_s3;
  short in_stack_00000024;
  
  *(short *)(unaff_s3 + 0x5e) = in_v0 + in_v1;
  if (unaff_s2 == 0) {
    *(short *)(unaff_s3 + 0x60) = *(short *)(unaff_s3 + 0x60) + in_stack_00000024;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsSetVelFromZRot(struct _Instance *instance /*$s2*/, short angle /*$a1*/, long magnitude /*$s1*/)
 // line 2734, offset 0x80077830
	/* begin block 1 */
		// Start line: 6122
	/* end block 1 */
	// End Line: 6123

void PhysicsSetVelFromZRot(_Instance *instance,short angle,long magnitude)

{
  long in_v1;
  int iVar1;
  long in_t0;
  int in_t2;
  
  iVar1 = instance->maxZVel;
  if ((iVar1 < in_t2) || (iVar1 = -iVar1, in_t2 < iVar1)) {
    in_t2 = iVar1;
  }
  instance->xVel = in_t0;
  instance->yVel = in_v1;
  instance->zVel = in_t2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicsSetVelFromRot(struct _Instance *instance /*$s0*/, struct _Rotation *rot /*$a1*/, long magnitude /*$a2*/)
 // line 2745, offset 0x800778a0
	/* begin block 1 */
		// Start line: 2746
		// Start offset: 0x800778A0
		// Variables:
	// 		struct MATRIX mat; // stack offset -56
	// 		struct SVECTOR flatPt; // stack offset -24
	// 		struct SVECTOR newPt; // stack offset -16
	/* end block 1 */
	// End offset: 0x800778A0
	// End Line: 2746

	/* begin block 2 */
		// Start line: 6148
	/* end block 2 */
	// End Line: 6149

void PhysicsSetVelFromRot(_Instance *instance,_Rotation *rot,long magnitude)

{
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  int in_lo;
  
  *(int *)(unaff_s2 + 0x154) = in_lo >> 0xc;
  iVar1 = FUN_800790d4();
  *(int *)(unaff_s2 + 0x158) = iVar1 * unaff_s1 >> 0xc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_SetVAndAFromRot(struct _Instance *instance /*$s0*/, struct _Rotation *rot /*$a1*/, long v /*$s1*/, long a /*$s2*/)
 // line 2765, offset 0x80077910
	/* begin block 1 */
		// Start line: 2766
		// Start offset: 0x80077910
		// Variables:
	// 		struct SVECTOR flatPt; // stack offset -72
	// 		struct MATRIX mat; // stack offset -64

		/* begin block 1.1 */
			// Start line: 2780
			// Start offset: 0x80077958
			// Variables:
		// 		struct SVECTOR newPt; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x80077958
		// End Line: 2782

		/* begin block 1.2 */
			// Start line: 2799
			// Start offset: 0x800779A4
			// Variables:
		// 		struct SVECTOR newPt; // stack offset -24
		/* end block 1.2 */
		// End offset: 0x800779A4
		// End Line: 2801
	/* end block 1 */
	// End offset: 0x800779E8
	// End Line: 2815

	/* begin block 2 */
		// Start line: 6198
	/* end block 2 */
	// End Line: 6199

void PHYSICS_SetVAndAFromRot(_Instance *instance,_Rotation *rot,long v,long a)

{
                    /* WARNING: Subroutine does not return */
  FUN_800bd12c(instance,rot,&stack0x00000038);
}



// decompiled code
// original method signature: 
// long /*$ra*/ PHYSICS_FindAFromDAndT(long d /*$a0*/, long t /*$a1*/)
 // line 2822, offset 0x80077a00
	/* begin block 1 */
		// Start line: 6316
	/* end block 1 */
	// End Line: 6317

	/* begin block 2 */
		// Start line: 6317
	/* end block 2 */
	// End Line: 6318

long PHYSICS_FindAFromDAndT(long d,long t)

{
  int unaff_s0;
  short in_stack_00000042;
  short in_stack_00000044;
  
  *(int *)(unaff_s0 + 0x164) = (int)in_stack_00000042;
  *(int *)(unaff_s0 + 0x168) = (int)in_stack_00000044;
  return (int)in_stack_00000044;
}



// decompiled code
// original method signature: 
// long /*$ra*/ PHYSICS_FindVFromAAndD(long a /*$a0*/, long d /*$a1*/)
 // line 2835, offset 0x80077a3c
	/* begin block 1 */
		// Start line: 2836
		// Start offset: 0x80077A3C
		// Variables:
	// 		long vsq; // $a0
	/* end block 1 */
	// End offset: 0x80077A64
	// End Line: 2842

	/* begin block 2 */
		// Start line: 6342
	/* end block 2 */
	// End Line: 6343

	/* begin block 3 */
		// Start line: 6343
	/* end block 3 */
	// End Line: 6344

long PHYSICS_FindVFromAAndD(long a,long d)

{
  int iVar1;
  
  if (d != 0) {
    iVar1 = (a << 0xd) / (d * d);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    return iVar1 >> 0xc;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_StopIfCloseToTarget(struct _Instance *instance /*$a0*/, int x /*$a1*/, int y /*$a2*/, int z /*$a3*/)
 // line 2876, offset 0x80077a74
	/* begin block 1 */
		// Start line: 6427
	/* end block 1 */
	// End Line: 6428

	/* begin block 2 */
		// Start line: 6429
	/* end block 2 */
	// End Line: 6430

void PHYSICS_StopIfCloseToTarget(_Instance *instance,int x,int y,int z)

{
  if ((int)instance * x * 2 != 0) {
    FUN_80039850();
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSICS_CheckForTerrainCollide(struct _Instance *instance /*$a0*/, struct SVECTOR *startVec /*$a1*/, struct SVECTOR *endVec /*$a2*/, int segment /*$a3*/)
 // line 2898, offset 0x80077b54
	/* begin block 1 */
		// Start line: 2899
		// Start offset: 0x80077B54
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -56
	// 		struct MATRIX *pTempMat; // $a1
	/* end block 1 */
	// End offset: 0x80077B54
	// End Line: 2899

	/* begin block 2 */
		// Start line: 6471
	/* end block 2 */
	// End Line: 6472

int PHYSICS_CheckForTerrainCollide
              (_Instance *instance,SVECTOR *startVec,SVECTOR *endVec,int segment)

{
  bool bVar1;
  int in_v0;
  uint uVar2;
  int in_v1;
  
  uVar2 = (uint)(segment < in_v0);
  if ((segment >= in_v0) ||
     ((0 < in_v1 && (bVar1 = instance->zVel < segment, uVar2 = (uint)bVar1, !bVar1)))) {
    instance->zAccl = 0;
    instance->zVel = segment;
  }
  return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSICS_CheckForObjectCollide(struct _Instance *instance /*$a0*/, struct SVECTOR *startVec /*$a1*/, struct SVECTOR *endVec /*$a2*/, int segment /*$a3*/)
 // line 2917, offset 0x80077b9c
	/* begin block 1 */
		// Start line: 2918
		// Start offset: 0x80077B9C
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -56
	// 		struct MATRIX *pTempMat; // $a1
	/* end block 1 */
	// End offset: 0x80077B9C
	// End Line: 2918

	/* begin block 2 */
		// Start line: 6524
	/* end block 2 */
	// End Line: 6525

int PHYSICS_CheckForObjectCollide(_Instance *instance,SVECTOR *startVec,SVECTOR *endVec,int segment)

{
  short in_stack_00000010;
  SVECTOR *pSStack00000024;
  SVECTOR *pSStack00000028;
  
  pSStack00000024 = endVec;
  pSStack00000028 = startVec;
  FUN_80077e48(instance,instance->matrix + segment,instance->matrix + segment,&stack0x00000010);
  return (uint)(in_stack_00000010 == 3);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSICS_CheckForValidMove(struct _Instance *instance /*$a0*/, struct SVECTOR *startVec /*$a1*/, struct SVECTOR *endVec /*$a2*/, int segment /*$a3*/)
 // line 2938, offset 0x80077be0
	/* begin block 1 */
		// Start line: 2939
		// Start offset: 0x80077BE0
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -56
	// 		struct MATRIX *pTempMat; // $a1
	// 		int rc; // $a0
	/* end block 1 */
	// End offset: 0x80077C3C
	// End Line: 2962

	/* begin block 2 */
		// Start line: 6581
	/* end block 2 */
	// End Line: 6582

int PHYSICS_CheckForValidMove(_Instance *instance,SVECTOR *startVec,SVECTOR *endVec,int segment)

{
  short in_stack_00000010;
  SVECTOR *pSStack00000024;
  SVECTOR *pSStack00000028;
  
  pSStack00000024 = endVec;
  pSStack00000028 = startVec;
  FUN_80077e48(instance,instance->matrix + segment,instance->matrix + segment,&stack0x00000010);
  return (uint)(in_stack_00000010 != 0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSICS_CheckFaceStick(struct _PCollideInfo *CInfo /*$a0*/)
 // line 2966, offset 0x80077c4c
	/* begin block 1 */
		// Start line: 2967
		// Start offset: 0x80077C4C
		// Variables:
	// 		int rc; // $a1

		/* begin block 1.1 */
			// Start line: 2973
			// Start offset: 0x80077C60
			// Variables:
		// 		struct _TFace *tface; // $a2
		/* end block 1.1 */
		// End offset: 0x80077C78
		// End Line: 2975

		/* begin block 1.2 */
			// Start line: 2979
			// Start offset: 0x80077CA4
			// Variables:
		// 		struct _HFace *hface; // stack offset -8
		/* end block 1.2 */
		// End offset: 0x80077CA4
		// End Line: 2987
	/* end block 1 */
	// End offset: 0x80077CA4
	// End Line: 2988

	/* begin block 2 */
		// Start line: 6640
	/* end block 2 */
	// End Line: 6641

int PHYSICS_CheckFaceStick(_PCollideInfo *CInfo)

{
  int in_v0;
  uint uVar1;
  ushort in_stack_00000010;
  
  uVar1 = (uint)(in_v0 != 0);
  if (((uint)in_stack_00000010 - 2 < 2) || (in_stack_00000010 == 5)) {
    uVar1 = uVar1 + 2;
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSICS_CheckDontGrabEdge(struct _PCollideInfo *CInfo /*$s0*/)
 // line 2992, offset 0x80077cb0
	/* begin block 1 */
		// Start line: 2993
		// Start offset: 0x80077CB0
		// Variables:
	// 		int rc; // $s1

		/* begin block 1.1 */
			// Start line: 2998
			// Start offset: 0x80077CD4
			// Variables:
		// 		struct _TFace *tface; // $a0
		// 		struct BSPTree *bsp; // $v0
		/* end block 1.1 */
		// End offset: 0x80077D4C
		// End Line: 3007

		/* begin block 1.2 */
			// Start line: 3012
			// Start offset: 0x80077D60
			// Variables:
		// 		struct _HFace *hface; // $v0
		/* end block 1.2 */
		// End offset: 0x80077D7C
		// End Line: 3016

		/* begin block 1.3 */
			// Start line: 3021
			// Start offset: 0x80077D8C
		/* end block 1.3 */
		// End offset: 0x80077DC0
		// End Line: 3029
	/* end block 1 */
	// End offset: 0x80077DC0
	// End Line: 3030

	/* begin block 2 */
		// Start line: 6692
	/* end block 2 */
	// End Line: 6693

int PHYSICS_CheckDontGrabEdge(_PCollideInfo *CInfo)

{
  int in_v1;
  uint in_a1;
  
  return (uint)(in_a1 < ((uint)*(ushort *)
                                ((int)&(CInfo->inst->node).prev[6].next[1].prev + in_v1 + 2) & 0x200
                        ));
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_GenericLineCheckSetup(short x /*$a0*/, short y /*$a1*/, short z /*$a2*/, struct SVECTOR *inVec /*$a3*/)
 // line 3035, offset 0x80077dd8
	/* begin block 1 */
		// Start line: 6778
	/* end block 1 */
	// End Line: 6779

	/* begin block 2 */
		// Start line: 6782
	/* end block 2 */
	// End Line: 6783

void PHYSICS_GenericLineCheckSetup(short x,short y,short z,SVECTOR *inVec)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(*(undefined4 *)(unaff_s0 + 8),3);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_GenericLineCheck(struct _Instance *instance /*$a0*/, struct MATRIX *transMat /*$a1*/, struct MATRIX *rotMat /*$a2*/, struct _PCollideInfo *cInfo /*$a3*/)
 // line 3053, offset 0x80077de8
	/* begin block 1 */
		// Start line: 6814
	/* end block 1 */
	// End Line: 6815

void PHYSICS_GenericLineCheck
               (_Instance *instance,MATRIX *transMat,MATRIX *rotMat,_PCollideInfo *cInfo)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSICS_GenericLineCheckMask(struct _Instance *instance /*$a0*/, struct MATRIX *transMat /*$a1*/, struct MATRIX *rotMat /*$a2*/, struct _PCollideInfo *cInfo /*$a3*/)
 // line 3057, offset 0x80077e0c
	/* begin block 1 */
		// Start line: 3058
		// Start offset: 0x80077E0C
		// Variables:
	// 		struct SVECTOR *startVec; // $t0
	// 		struct SVECTOR *endVec; // $t1
	// 		struct VECTOR outVec; // stack offset -24
	/* end block 1 */
	// End offset: 0x80077E0C
	// End Line: 3058

	/* begin block 2 */
		// Start line: 6823
	/* end block 2 */
	// End Line: 6824

void PHYSICS_GenericLineCheckMask
               (_Instance *instance,MATRIX *transMat,MATRIX *rotMat,_PCollideInfo *cInfo)

{
  return;
}





