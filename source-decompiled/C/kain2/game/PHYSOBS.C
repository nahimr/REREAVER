#include "THISDUST.H"
#include "PHYSOBS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_PlayDropSound(struct _Instance *instance /*$a0*/)
 // line 208, offset 0x80068700
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x80068700
		// Variables:
	// 		struct PhysObProperties *Prop; // $a1
	// 		int sound; // $v1
	/* end block 1 */
	// End offset: 0x8006880C
	// End Line: 247

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

void PHYSOB_PlayDropSound(_Instance *instance)

{
  FUN_80062f40();
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ PHYSOBS_IsAPushBlockAttached(struct _Instance *block /*$s3*/)
 // line 259, offset 0x80068820
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80068820
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _Instance *next; // $s1
	// 		struct _Instance *result; // $s2
	/* end block 1 */
	// End offset: 0x80068888
	// End Line: 280

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

	/* begin block 3 */
		// Start line: 519
	/* end block 3 */
	// End Line: 520

_Instance * PHYSOBS_IsAPushBlockAttached(_Instance *block)

{
  _Instance *p_Var1;
  
  p_Var1 = (_Instance *)FUN_8003f9d8(&block->position,0xb2,0xfffffce0,0x78);
  return p_Var1;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ PHYSOBS_IsAnythingAttached(struct _Instance *block /*$a0*/)
 // line 284, offset 0x800688a8
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x800688A8
		// Variables:
	// 		struct _Instance *instance; // $v1
	// 		struct _Instance *next; // $a1
	// 		struct _Instance *result; // $a2
	/* end block 1 */
	// End offset: 0x800688E8
	// End Line: 303

	/* begin block 2 */
		// Start line: 572
	/* end block 2 */
	// End Line: 573

	/* begin block 3 */
		// Start line: 573
	/* end block 3 */
	// End Line: 574

_Instance * PHYSOBS_IsAnythingAttached(_Instance *block)

{
  int iVar1;
  _Instance *unaff_s0;
  _Instance *unaff_s1;
  _Instance *p_Var2;
  int unaff_s3;
  
  do {
    p_Var2 = unaff_s1;
    if (p_Var2 == (_Instance *)0x0) {
      return unaff_s0;
    }
    unaff_s1 = p_Var2->next;
  } while ((p_Var2->attachedID != *(int *)(unaff_s3 + 0x3c)) ||
          (iVar1 = FUN_8006894c(p_Var2,2), iVar1 == 0));
  return p_Var2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckPhysOb(struct _Instance *instance /*$a0*/)
 // line 307, offset 0x800688f0
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x800688F0
		// Variables:
	// 		struct PhysObProperties *Prop; // $v0
	/* end block 1 */
	// End offset: 0x80068914
	// End Line: 319

	/* begin block 2 */
		// Start line: 621
	/* end block 2 */
	// End Line: 622

	/* begin block 3 */
		// Start line: 622
	/* end block 3 */
	// End Line: 623

	/* begin block 4 */
		// Start line: 626
	/* end block 4 */
	// End Line: 627

int CheckPhysOb(_Instance *instance)

{
  int *piVar1;
  int in_v1;
  int in_a2;
  
  do {
    piVar1 = (int *)(in_v1 + 8);
    if (*(int *)(in_v1 + 0x8c) == instance->introUniqueID) {
      return in_v1;
    }
    in_v1 = *piVar1;
  } while (*piVar1 != 0);
  return in_a2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckPhysObAbility(struct _Instance *instance /*$a0*/, unsigned short ability /*$a3*/)
 // line 322, offset 0x8006891c
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x8006891C
		// Variables:
	// 		struct PhysObProperties *Prop; // $a2

		/* begin block 1.1 */
			// Start line: 335
			// Start offset: 0x80068954
		/* end block 1.1 */
		// End offset: 0x80068978
		// End Line: 339
	/* end block 1 */
	// End offset: 0x80068990
	// End Line: 345

	/* begin block 2 */
		// Start line: 653
	/* end block 2 */
	// End Line: 654

	/* begin block 3 */
		// Start line: 658
	/* end block 3 */
	// End Line: 659

int CheckPhysObAbility(_Instance *instance,ushort ability)

{
  if (instance->data == (void *)0x0) {
    return 0;
  }
  return (uint)(*(short *)((int)instance->data + 4) == -0x4ff5);
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckPhysObFamily(struct _Instance *instance /*$a0*/, unsigned short family /*$a1*/)
 // line 348, offset 0x80068998
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x80068998
		// Variables:
	// 		struct PhysObProperties *Prop; // $a0
	/* end block 1 */
	// End offset: 0x800689D4
	// End Line: 365

	/* begin block 2 */
		// Start line: 710
	/* end block 2 */
	// End Line: 711

	/* begin block 3 */
		// Start line: 711
	/* end block 3 */
	// End Line: 712

	/* begin block 4 */
		// Start line: 715
	/* end block 4 */
	// End Line: 716

int CheckPhysObFamily(_Instance *instance,ushort family)

{
  int in_v0;
  
  if (in_v0 != 0) {
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPhysicalAbility(struct _Instance *instance /*$a0*/)
 // line 402, offset 0x800689dc
	/* begin block 1 */
		// Start line: 404
		// Start offset: 0x800689DC
		// Variables:
	// 		struct PhysObProperties *Prop; // $a1

		/* begin block 1.1 */
			// Start line: 413
			// Start offset: 0x80068A0C
		/* end block 1.1 */
		// End offset: 0x80068A20
		// End Line: 416
	/* end block 1 */
	// End offset: 0x80068A2C
	// End Line: 422

	/* begin block 2 */
		// Start line: 818
	/* end block 2 */
	// End Line: 819

	/* begin block 3 */
		// Start line: 819
	/* end block 3 */
	// End Line: 820

	/* begin block 4 */
		// Start line: 823
	/* end block 4 */
	// End Line: 824

int GetPhysicalAbility(_Instance *instance)

{
  int in_v0;
  int in_v1;
  short in_a1;
  
  if (in_v1 != in_v0) {
    return 0;
  }
  return (uint)(*(short *)((int)&(instance->node).prev + 2) == in_a1);
}



// decompiled code
// original method signature: 
// int /*$ra*/ AnyBlocksInMotion()
 // line 426, offset 0x80068a34
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x80068A34
		// Variables:
	// 		struct _Instance *instance; // $a0

		/* begin block 1.1 */
			// Start line: 434
			// Start offset: 0x80068A6C
			// Variables:
		// 		struct PhysObProperties *Prop; // $v1
		// 		struct PhysObData *Data; // $v0
		/* end block 1.1 */
		// End offset: 0x80068AB4
		// End Line: 445
	/* end block 1 */
	// End offset: 0x80068AC4
	// End Line: 450

	/* begin block 2 */
		// Start line: 866
	/* end block 2 */
	// End Line: 867

	/* begin block 3 */
		// Start line: 867
	/* end block 3 */
	// End Line: 868

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AnyBlocksInMotion(void)

{
  int in_v0;
  int in_v1;
  int in_a0;
  int in_a1;
  
  if (in_v1 == in_v0) {
    return (int)*(short *)(*(int *)(in_a0 + 0x14c) + 4);
  }
  return (uint)*(ushort *)(in_a1 + 6);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetThrowDirection(struct _Instance *instance /*$s1*/, struct _Instance *parent /*$a1*/, struct evObjectThrowData *throwData /*$s2*/, struct PhysObData *Data /*$a3*/)
 // line 456, offset 0x80068ad4
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80068AD4

		/* begin block 1.1 */
			// Start line: 473
			// Start offset: 0x80068B58
			// Variables:
		// 		long val; // $a2
		// 		struct _Instance *itarget; // $s0
		// 		struct MATRIX *matrix; // $a1
		/* end block 1.1 */
		// End offset: 0x80068C58
		// End Line: 503

		/* begin block 1.2 */
			// Start line: 511
			// Start offset: 0x80068CB0
			// Variables:
		// 		long val; // $a1
		// 		struct _Position *ptarget; // $s0
		/* end block 1.2 */
		// End offset: 0x80068D68
		// End Line: 535
	/* end block 1 */
	// End offset: 0x80068E08
	// End Line: 558

	/* begin block 2 */
		// Start line: 926
	/* end block 2 */
	// End Line: 927

void SetThrowDirection(_Instance *instance,_Instance *parent,evObjectThrowData *throwData,
                      PhysObData *Data)

{
  uint in_v0;
  
  do {
    if ((in_v0 & 0x14e) != 0) {
      return;
    }
    do {
      instance = instance->next;
      if (instance == (_Instance *)0x0) {
        return;
      }
    } while ((((instance->object->oflags2 & (uint)throwData) == 0) ||
             ((*(ushort *)((int)instance->data + 6) & 8) == 0)) ||
            ((_Instance *)(uint)*(ushort *)((int)instance->data + 4) != parent));
    in_v0 = *(uint *)instance->extraData;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ThrowPhysOb(struct _Instance *instance /*$s3*/, struct evObjectThrowData *throwData /*$s0*/)
 // line 564, offset 0x80068e20
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80068E20
		// Variables:
	// 		struct PhysObData *Data; // $s2
	// 		int collFlg; // $s4
	// 		int endAnimFlg; // $s6

		/* begin block 1.1 */
			// Start line: 574
			// Start offset: 0x80068E5C
			// Variables:
		// 		struct _Instance *parent; // $s5
		// 		struct PhysObProperties *Prop; // $s1

			/* begin block 1.1.1 */
				// Start line: 611
				// Start offset: 0x80068F4C
				// Variables:
			// 		struct _SVector *sv; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80068F78
			// End Line: 617

			/* begin block 1.1.2 */
				// Start line: 630
				// Start offset: 0x80068FA8
				// Variables:
			// 		struct __PhysObProjectileData *ProjData; // $s0

				/* begin block 1.1.2.1 */
					// Start line: 647
					// Start offset: 0x8006901C
				/* end block 1.1.2.1 */
				// End offset: 0x8006903C
				// End Line: 650
			/* end block 1.1.2 */
			// End offset: 0x80069044
			// End Line: 654

			/* begin block 1.1.3 */
				// Start line: 672
				// Start offset: 0x80069090
				// Variables:
			// 		struct _PCollideInfo pcollideInfo; // stack offset -96
			// 		struct _Position newPos; // stack offset -48
			// 		struct _Position oldPos; // stack offset -40
			// 		struct MATRIX *mat; // $v0

				/* begin block 1.1.3.1 */
					// Start line: 697
					// Start offset: 0x80069128
					// Variables:
				// 		short _x0; // $a2
				// 		short _y0; // $a3
				// 		short _z0; // $t0
				// 		short _x1; // $v0
				// 		short _y1; // $v1
				// 		short _z1; // $a0
				/* end block 1.1.3.1 */
				// End offset: 0x80069128
				// End Line: 697

				/* begin block 1.1.3.2 */
					// Start line: 697
					// Start offset: 0x80069128
					// Variables:
				// 		short _x0; // $v0
				// 		short _y0; // $v1
				// 		short _z0; // $a0
				// 		struct _Position *_v; // $a1
				/* end block 1.1.3.2 */
				// End offset: 0x80069128
				// End Line: 697
			/* end block 1.1.3 */
			// End offset: 0x80069128
			// End Line: 697
		/* end block 1.1 */
		// End offset: 0x800691D8
		// End Line: 724
	/* end block 1 */
	// End offset: 0x800691D8
	// End Line: 729

	/* begin block 2 */
		// Start line: 1147
	/* end block 2 */
	// End Line: 1148

void ThrowPhysOb(_Instance *instance,evObjectThrowData *throwData)

{
  int unaff_s1;
  int unaff_s2;
  
  *(int *)(unaff_s1 + 0x15c) = (int)*(short *)(unaff_s2 + 8);
  *(int *)(unaff_s1 + 0x168) = (int)*(short *)(unaff_s2 + 0x16);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PushPhysOb(struct _Instance *instance /*$s1*/, short x /*stack -32*/, short y /*stack -30*/, short PathNumber /*$a3*/, struct _Instance *Force /*stack 16*/)
 // line 733, offset 0x80069200
	/* begin block 1 */
		// Start line: 734
		// Start offset: 0x80069200
		// Variables:
	// 		struct PhysObData *Data; // $s0
	// 		struct PhysObProperties *Prop; // $v1
	// 		int result; // $s2
	/* end block 1 */
	// End offset: 0x8006933C
	// End Line: 784

	/* begin block 2 */
		// Start line: 1536
	/* end block 2 */
	// End Line: 1537

int PushPhysOb(_Instance *instance,short x,short y,short PathNumber,_Instance *Force)

{
  int iVar1;
  
  iVar1 = FUN_8006d9d0(instance,4);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetSwitchPhysOb(struct _Instance *instance /*$s0*/)
 // line 788, offset 0x8006935c
	/* begin block 1 */
		// Start line: 789
		// Start offset: 0x8006935C
		// Variables:
	// 		struct PhysObData *Data; // $v1
	// 		struct PhysObSwitchProperties *Prop; // $a1
	/* end block 1 */
	// End offset: 0x800693E4
	// End Line: 809

	/* begin block 2 */
		// Start line: 1682
	/* end block 2 */
	// End Line: 1683

void ResetSwitchPhysOb(_Instance *instance)

{
  int unaff_s1;
  
  *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 8;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SwitchPhysOb(struct _Instance *instance /*$s1*/)
 // line 813, offset 0x800693f4
	/* begin block 1 */
		// Start line: 814
		// Start offset: 0x800693F4
		// Variables:
	// 		struct PhysObData *Data; // $v0
	// 		struct PhysObSwitchProperties *Prop; // $s0
	// 		struct SwitchData *switchData; // $s3
	/* end block 1 */
	// End offset: 0x800695B4
	// End Line: 874

	/* begin block 2 */
		// Start line: 1734
	/* end block 2 */
	// End Line: 1735

int SwitchPhysOb(_Instance *instance)

{
  int iVar1;
  undefined4 in_a2;
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
  FUN_80071fac(instance,0,in_a2,0);
  iVar1 = FUN_8007208c();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InteractPhysOb(struct _Instance *instance /*$s1*/, struct _Instance *Force /*$s3*/, int LinkNode /*$s7*/, int Action /*$s4*/)
 // line 878, offset 0x800695d0
	/* begin block 1 */
		// Start line: 879
		// Start offset: 0x800695D0
		// Variables:
	// 		struct PhysObData *Data; // $s5
	// 		struct PhysObInteractProperties *interactProp; // $s2

		/* begin block 1.1 */
			// Start line: 889
			// Start offset: 0x8006961C
			// Variables:
		// 		struct BreakOffData *BreakOff; // $s6

			/* begin block 1.1.1 */
				// Start line: 900
				// Start offset: 0x80069690
				// Variables:
			// 		struct _Instance *lightInst; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800696A8
			// End Line: 906

			/* begin block 1.1.2 */
				// Start line: 912
				// Start offset: 0x800696D0
				// Variables:
			// 		struct _Instance *lightInst; // $s0
			/* end block 1.1.2 */
			// End offset: 0x80069700
			// End Line: 921

			/* begin block 1.1.3 */
				// Start line: 958
				// Start offset: 0x80069820
				// Variables:
			// 		int s; // $s0
			/* end block 1.1.3 */
			// End offset: 0x80069870
			// End Line: 963

			/* begin block 1.1.4 */
				// Start line: 963
				// Start offset: 0x80069878
				// Variables:
			// 		int s; // $s0
			/* end block 1.1.4 */
			// End offset: 0x800698C8
			// End Line: 969
		/* end block 1.1 */
		// End offset: 0x80069904
		// End Line: 987
	/* end block 1 */
	// End offset: 0x80069904
	// End Line: 989

	/* begin block 2 */
		// Start line: 1873
	/* end block 2 */
	// End Line: 1874

int InteractPhysOb(_Instance *instance,_Instance *Force,int LinkNode,int Action)

{
  FUN_8007208c();
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetOrientation(struct _Instance *instance /*$s1*/)
 // line 989, offset 0x80069930
	/* begin block 1 */
		// Start line: 990
		// Start offset: 0x80069930
		// Variables:
	// 		struct _G2EulerAngles_Type ea; // stack offset -40
	// 		struct PhysObData *Data; // $a1
	// 		struct _G2SVector3_Type vec; // stack offset -32
	// 		struct _G2SVector3_Type vec2; // stack offset -24
	// 		int dp; // $a0
	// 		int fixxy; // $a2
	// 		int fixz; // $a3
	// 		int dx; // $v1
	// 		int dx2; // $v0
	// 		int dy; // $v0
	// 		int dy2; // $v1
	// 		int dz; // $v0
	// 		int dz2; // $v1

		/* begin block 1.1 */
			// Start line: 1119
			// Start offset: 0x80069BC0
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $a3
		// 		short _z1; // $a2
		// 		struct _G2SVector3_Type *_v; // $a1
		// 		struct _G2EulerAngles_Type *_v0; // $a0
		// 		struct _G2SVector3_Type *_v1; // $a2
		/* end block 1.1 */
		// End offset: 0x80069BC0
		// End Line: 1119

		/* begin block 1.2 */
			// Start line: 1121
			// Start offset: 0x80069D04
			// Variables:
		// 		short _x0; // $v1
		// 		short _y0; // $v0
		// 		short _z0; // $a0
		// 		short _x1; // $t0
		// 		short _y1; // $a2
		// 		short _z1; // $a1
		// 		struct _G2SVector3_Type *_v; // $a3
		// 		struct _G2SVector3_Type *_v1; // $a1
		/* end block 1.2 */
		// End offset: 0x80069D04
		// End Line: 1121
	/* end block 1 */
	// End offset: 0x80069E04
	// End Line: 1145

	/* begin block 2 */
		// Start line: 2115
	/* end block 2 */
	// End Line: 2116

void ResetOrientation(_Instance *instance)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x168) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishPush(struct _Instance *instance /*$a0*/)
 // line 1154, offset 0x80069e4c
	/* begin block 1 */
		// Start line: 2501
	/* end block 1 */
	// End Line: 2502

void FinishPush(_Instance *instance)

{
  FUN_8008fe64();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysOb_AlignPush(struct _Instance *instance /*$s4*/, int x /*$s5*/, int y /*$s3*/, int path /*$s6*/, struct PhysObData *Data /*stack 16*/)
 // line 1160, offset 0x80069e6c
	/* begin block 1 */
		// Start line: 1161
		// Start offset: 0x80069E6C
		// Variables:
	// 		struct _G2SVector3_Type vec; // stack offset -96
	// 		int rotZ; // $s2
	// 		short temp[3][3]; // stack offset -88
	// 		short temp2[3][3]; // stack offset -64
	// 		struct _G2EulerAngles_Type ea; // stack offset -40
	/* end block 1 */
	// End offset: 0x80069F04
	// End Line: 1189

	/* begin block 2 */
		// Start line: 2513
	/* end block 2 */
	// End Line: 2514

void PhysOb_AlignPush(_Instance *instance,int x,int y,int path,PhysObData *Data)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FlipPhysOb(struct _Instance *instance /*$s1*/, short x /*stack -32*/, short y /*stack -30*/, struct _Instance *Force /*$s3*/)
 // line 1206, offset 0x80069fdc
	/* begin block 1 */
		// Start line: 1207
		// Start offset: 0x80069FDC
		// Variables:
	// 		struct PhysObData *Data; // $s0
	// 		struct PhysObProperties *Prop; // $v0
	// 		int result; // $s2
	/* end block 1 */
	// End offset: 0x8006A100
	// End Line: 1253

	/* begin block 2 */
		// Start line: 2634
	/* end block 2 */
	// End Line: 2635

int FlipPhysOb(_Instance *instance,short x,short y,_Instance *Force)

{
  int iVar1;
  
  iVar1 = FUN_8008fe64();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CanBePickedUp(struct _Instance *instance /*$s1*/, struct _Instance *Force /*$s0*/, int LinkNode /*$s2*/)
 // line 1296, offset 0x8006a120
	/* begin block 1 */
		// Start line: 1297
		// Start offset: 0x8006A120

		/* begin block 1.1 */
			// Start line: 1320
			// Start offset: 0x8006A19C
			// Variables:
		// 		struct _PCollideInfo pcollideInfo; // stack offset -80
		// 		struct _Position newPos; // stack offset -32
		// 		struct _Position oldPos; // stack offset -24

			/* begin block 1.1.1 */
				// Start line: 1343
				// Start offset: 0x8006A268
			/* end block 1.1.1 */
			// End offset: 0x8006A29C
			// End Line: 1352
		/* end block 1.1 */
		// End offset: 0x8006A29C
		// End Line: 1354
	/* end block 1 */
	// End offset: 0x8006A2A0
	// End Line: 1358

	/* begin block 2 */
		// Start line: 2847
	/* end block 2 */
	// End Line: 2848

int CanBePickedUp(_Instance *instance,_Instance *Force,int LinkNode)

{
  int unaff_s1;
  int unaff_s2;
  
  *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 8;
  return unaff_s2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PickUpPhysOb(struct _Instance *instance /*$s1*/, short Steps /*$a1*/, struct _Instance *Force /*$s3*/, int LinkNode /*$s4*/)
 // line 1361, offset 0x8006a2b8
	/* begin block 1 */
		// Start line: 1362
		// Start offset: 0x8006A2B8
		// Variables:
	// 		struct PhysObData *Data; // $s0

		/* begin block 1.1 */
			// Start line: 1402
			// Start offset: 0x8006A374
			// Variables:
		// 		struct _PhysObLight *pLight; // $v0
		/* end block 1.1 */
		// End offset: 0x8006A38C
		// End Line: 1408
	/* end block 1 */
	// End offset: 0x8006A398
	// End Line: 1414

	/* begin block 2 */
		// Start line: 2996
	/* end block 2 */
	// End Line: 2997

int PickUpPhysOb(_Instance *instance,short Steps,_Instance *Force,int LinkNode)

{
  int in_v0;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039494(instance,Steps,in_v0 - (int)Force);
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ PHYSOB_BirthCollectible(struct _Instance *parent /*$a0*/, int x /*$s1*/, int y /*$s2*/, int z /*$s3*/, int type /*stack 16*/, int lifeTime /*stack 20*/)
 // line 1443, offset 0x8006a3b8
	/* begin block 1 */
		// Start line: 1444
		// Start offset: 0x8006A3B8
		// Variables:
	// 		struct Object *object; // $a1
	// 		struct _Instance *instance; // $a2

		/* begin block 1.1 */
			// Start line: 1457
			// Start offset: 0x8006A424
		/* end block 1.1 */
		// End offset: 0x8006A448
		// End Line: 1466
	/* end block 1 */
	// End offset: 0x8006A448
	// End Line: 1469

	/* begin block 2 */
		// Start line: 2886
	/* end block 2 */
	// End Line: 2887

_Instance * PHYSOB_BirthCollectible(_Instance *parent,int x,int y,int z,int type,int lifeTime)

{
  return (_Instance *)0x0;
}



// decompiled code
// original method signature: 
// struct evObjectBirthProjectileData * /*$ra*/ PHYSOB_BirthProjectile(struct _Instance *parent /*$s0*/, int joint /*$s1*/, int type /*$s2*/)
 // line 1473, offset 0x8006a468
	/* begin block 1 */
		// Start line: 1474
		// Start offset: 0x8006A468
		// Variables:
	// 		struct evObjectBirthProjectileData *rc; // $s0
	/* end block 1 */
	// End offset: 0x8006A468
	// End Line: 1474

	/* begin block 2 */
		// Start line: 3226
	/* end block 2 */
	// End Line: 3227

evObjectBirthProjectileData * PHYSOB_BirthProjectile(_Instance *parent,int joint,int type)

{
  undefined2 in_v0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined2 unaff_s3;
  
  *(undefined2 *)(type + 0xec) = in_v0;
  *(undefined2 *)(type + 0x5c) = unaff_s1;
  *(undefined2 *)(type + 0x5e) = unaff_s2;
  *(undefined2 *)(type + 0x60) = unaff_s3;
  return (evObjectBirthProjectileData *)type;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ BirthProjectilePhysOb(struct _Instance *instance /*$s3*/, int grabJoint /*$s4*/, int type /*$s1*/)
 // line 1484, offset 0x8006a4c0
	/* begin block 1 */
		// Start line: 1485
		// Start offset: 0x8006A4C0
		// Variables:
	// 		struct Object *ForceOb; // $a1
	// 		struct _Instance *iForce; // $s0
	// 		struct PhysObData *Data; // $s2
	// 		struct PhysObProperties *Prop; // $s1

		/* begin block 1.1 */
			// Start line: 1499
			// Start offset: 0x8006A50C
			// Variables:
		// 		struct __PhysObProjectileProperties *ProjProp; // $v1
		// 		struct __PhysObProjectileData *ProjData; // $v1

			/* begin block 1.1.1 */
				// Start line: 1514
				// Start offset: 0x8006A550
				// Variables:
			// 		struct _Position offset; // stack offset -32
			// 		struct _FXForceFieldEffect *field; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8006A598
			// End Line: 1522

			/* begin block 1.1.2 */
				// Start line: 1535
				// Start offset: 0x8006A5CC
				// Variables:
			// 		struct __PhysObProjectileData *ProjData; // $v1
			/* end block 1.1.2 */
			// End offset: 0x8006A620
			// End Line: 1547
		/* end block 1.1 */
		// End offset: 0x8006A670
		// End Line: 1569
	/* end block 1 */
	// End offset: 0x8006A674
	// End Line: 1578

	/* begin block 2 */
		// Start line: 3248
	/* end block 2 */
	// End Line: 3249

_Instance * BirthProjectilePhysOb(_Instance *instance,int grabJoint,int type)

{
  _Instance *in_v0;
  _Instance *p_Var1;
  
  p_Var1 = (_Instance *)FUN_8006a4f0();
  in_v0->prev = p_Var1;
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_SetLightTable(struct _PhysObLight *pLight /*$a0*/, struct LightInstance *li /*$a1*/, short burnAmplitude /*$a2*/)
 // line 1606, offset 0x8006a694
	/* begin block 1 */
		// Start line: 1609
		// Start offset: 0x8006A694
		// Variables:
	// 		long idx; // $a3
	// 		long frac; // $t2
	// 		struct LightTableEntry *ltable; // $t1
	// 		struct LightTableEntry *ltable2; // $a0
	/* end block 1 */
	// End offset: 0x8006A744
	// End Line: 1629

	/* begin block 2 */
		// Start line: 3507
	/* end block 2 */
	// End Line: 3508

	/* begin block 3 */
		// Start line: 3509
	/* end block 3 */
	// End Line: 3510

	/* begin block 4 */
		// Start line: 3513
	/* end block 4 */
	// End Line: 3514

void PHYSOB_SetLightTable(_PhysObLight *pLight,LightInstance *li,short burnAmplitude)

{
  int unaff_s2;
  
  *(undefined4 *)(unaff_s2 + 0x44) = 0x96000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_EndLighting(struct _Instance *instance /*$a0*/, struct _PhysObLight *pLight /*$a1*/)
 // line 1635, offset 0x8006a7fc
	/* begin block 1 */
		// Start line: 1639
		// Start offset: 0x8006A7FC

		/* begin block 1.1 */
			// Start line: 1641
			// Start offset: 0x8006A804
		/* end block 1.1 */
		// End offset: 0x8006A818
		// End Line: 1651
	/* end block 1 */
	// End offset: 0x8006A818
	// End Line: 1652

	/* begin block 2 */
		// Start line: 3571
	/* end block 2 */
	// End Line: 3572

	/* begin block 3 */
		// Start line: 3574
	/* end block 3 */
	// End Line: 3575

void PHYSOB_EndLighting(_Instance *instance,_PhysObLight *pLight)

{
  int in_v0;
  int in_v1;
  int in_t2;
  
  pLight[1].lightTable =
       (LightTableEntry *)
       (int)(short)((in_v0 * 0x1000 + in_v1 * in_t2) / (int)*(short *)(pLight + 2));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_StartLighting(struct _Instance *instance /*$a0*/, struct _PhysObLight *pLight /*$a3*/)
 // line 1654, offset 0x8006a820
	/* begin block 1 */
		// Start line: 1655
		// Start offset: 0x8006A820
		// Variables:
	// 		struct PhysObData *Data; // $a2

		/* begin block 1.1 */
			// Start line: 1670
			// Start offset: 0x8006A860
			// Variables:
		// 		struct LightInstance *li; // $a1
		/* end block 1.1 */
		// End offset: 0x8006A87C
		// End Line: 1684
	/* end block 1 */
	// End offset: 0x8006A87C
	// End Line: 1685

	/* begin block 2 */
		// Start line: 3609
	/* end block 2 */
	// End Line: 3610

void PHYSOB_StartLighting(_Instance *instance,_PhysObLight *pLight)

{
  int in_v0;
  
  pLight[1].lightTable = (LightTableEntry *)(in_v0 >> 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_StartBurnFX(struct _Instance *instance /*$s2*/)
 // line 1687, offset 0x8006a88c
	/* begin block 1 */
		// Start line: 1688
		// Start offset: 0x8006A88C
		// Variables:
	// 		struct PhysObData *Data; // $v0
	// 		struct Object *object; // $s1
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8006A900
	// End Line: 1704

	/* begin block 2 */
		// Start line: 3678
	/* end block 2 */
	// End Line: 3679

void PHYSOB_StartBurnFX(_Instance *instance)

{
  undefined4 in_v0;
  undefined4 *in_a2;
  
  *in_a2 = in_v0;
  loadStatus.checksum = (long)instance;
  FUN_8006a6c4();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_StartBurning(struct _Instance *instance /*$s0*/, struct _PhysObLight *pLight /*$s1*/)
 // line 1706, offset 0x8006a918
	/* begin block 1 */
		// Start line: 3722
	/* end block 1 */
	// End Line: 3723

void PHYSOB_StartBurning(_Instance *instance,_PhysObLight *pLight)

{
  int unaff_s0;
  int unaff_s1;
  
  while( true ) {
    unaff_s0 = unaff_s0 + 1;
    if ((int)*(short *)(unaff_s1 + 0x36) <= unaff_s0) break;
    FUN_8004cbe4();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_StopLighting(struct _Instance *instance /*$a0*/, struct _PhysObLight *pLight /*$a1*/)
 // line 1714, offset 0x8006a954
	/* begin block 1 */
		// Start line: 1716
		// Start offset: 0x8006A954
		// Variables:
	// 		struct PhysObData *Data; // $v0
	/* end block 1 */
	// End offset: 0x8006A954
	// End Line: 1716

	/* begin block 2 */
		// Start line: 3738
	/* end block 2 */
	// End Line: 3739

	/* begin block 3 */
		// Start line: 3739
	/* end block 3 */
	// End Line: 3740

void PHYSOB_StopLighting(_Instance *instance,_PhysObLight *pLight)

{
  FUN_8006a8bc();
  FUN_8006a850();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_StopBurning(struct _Instance *instance /*$a0*/, struct _PhysObLight *pLight /*$a1*/)
 // line 1726, offset 0x8006a974
	/* begin block 1 */
		// Start line: 1728
		// Start offset: 0x8006A974
		// Variables:
	// 		struct PhysObData *Data; // $a0
	/* end block 1 */
	// End offset: 0x8006A974
	// End Line: 1730

	/* begin block 2 */
		// Start line: 3763
	/* end block 2 */
	// End Line: 3764

	/* begin block 3 */
		// Start line: 3764
	/* end block 3 */
	// End Line: 3765

	/* begin block 4 */
		// Start line: 3766
	/* end block 4 */
	// End Line: 3767

void PHYSOB_StopBurning(_Instance *instance,_PhysObLight *pLight)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_EndBurning(struct _Instance *instance /*$s0*/, struct _PhysObLight *pLight /*$s2*/)
 // line 1738, offset 0x8006a998
	/* begin block 1 */
		// Start line: 1739
		// Start offset: 0x8006A998
		// Variables:
	// 		struct PhysObData *Data; // $s1
	/* end block 1 */
	// End offset: 0x8006A998
	// End Line: 1739

	/* begin block 2 */
		// Start line: 3790
	/* end block 2 */
	// End Line: 3791

void PHYSOB_EndBurning(_Instance *instance,_PhysObLight *pLight)

{
  uint *in_v0;
  uint in_v1;
  
  *in_v0 = in_v1 | 0x8000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StopPhysOb(struct _Instance *instance /*$a0*/)
 // line 1756, offset 0x8006a9f8
	/* begin block 1 */
		// Start line: 1757
		// Start offset: 0x8006A9F8
		// Variables:
	// 		struct PhysObData *Data; // $s0
	/* end block 1 */
	// End offset: 0x8006A9F8
	// End Line: 1757

	/* begin block 2 */
		// Start line: 3827
	/* end block 2 */
	// End Line: 3828

void StopPhysOb(_Instance *instance)

{
  uint *unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0xd) = 0;
  *unaff_s1 = *unaff_s1 & 0xfffeffff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPhysicalObject(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$s5*/)
 // line 1779, offset 0x8006aa34
	/* begin block 1 */
		// Start line: 1780
		// Start offset: 0x8006AA34
		// Variables:
	// 		struct PhysObData *Data; // $s3
	// 		struct PhysObProperties *Prop; // $s4

		/* begin block 1.1 */
			// Start line: 1788
			// Start offset: 0x8006AA6C
			// Variables:
		// 		struct PhysObInteractProperties *interactProp; // $v0
		/* end block 1.1 */
		// End offset: 0x8006AAD8
		// End Line: 1803

		/* begin block 1.2 */
			// Start line: 1957
			// Start offset: 0x8006AC70
			// Variables:
		// 		struct PhysObCollectibleProperties *collectibleProp; // $s0
		/* end block 1.2 */
		// End offset: 0x8006AD24
		// End Line: 1976

		/* begin block 1.3 */
			// Start line: 1984
			// Start offset: 0x8006AD58
			// Variables:
		// 		struct PhysObInteractProperties *interact; // $s1

			/* begin block 1.3.1 */
				// Start line: 2004
				// Start offset: 0x8006ADE0
				// Variables:
			// 		int s; // $s0
			/* end block 1.3.1 */
			// End offset: 0x8006AE30
			// End Line: 2009

			/* begin block 1.3.2 */
				// Start line: 2009
				// Start offset: 0x8006AE38
				// Variables:
			// 		int s; // $s0
			/* end block 1.3.2 */
			// End offset: 0x8006AE88
			// End Line: 2015
		/* end block 1.3 */
		// End offset: 0x8006AF5C
		// End Line: 2041

		/* begin block 1.4 */
			// Start line: 2055
			// Start offset: 0x8006AFB4
			// Variables:
		// 		struct _G2SVector3_Type vec; // stack offset -80
		// 		struct _G2Matrix_Type mat; // stack offset -72
		// 		struct _G2EulerAngles_Type ea; // stack offset -40
		/* end block 1.4 */
		// End offset: 0x8006AFB4
		// End Line: 2055

		/* begin block 1.5 */
			// Start line: 2093
			// Start offset: 0x8006B0E0
			// Variables:
		// 		struct SwitchData *switchData; // $s1
		// 		struct PhysObSwitchProperties *switchProp; // $s0
		/* end block 1.5 */
		// End offset: 0x8006B188
		// End Line: 2117

		/* begin block 1.6 */
			// Start line: 2131
			// Start offset: 0x8006B1C0
			// Variables:
		// 		struct _PhysObLight *pLight; // $a1

			/* begin block 1.6.1 */
				// Start line: 2134
				// Start offset: 0x8006B1D4
				// Variables:
			// 		struct INICommand *index; // $s0
			/* end block 1.6.1 */
			// End offset: 0x8006B234
			// End Line: 2147
		/* end block 1.6 */
		// End offset: 0x8006B234
		// End Line: 2149
	/* end block 1 */
	// End offset: 0x8006B28C
	// End Line: 2166

	/* begin block 2 */
		// Start line: 3558
	/* end block 2 */
	// End Line: 3559

void InitPhysicalObject(_Instance *instance,GameTracker *gameTracker)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)instance->extraData;
  *(undefined2 *)(puVar1 + 9) = 0;
  *(undefined2 *)((int)puVar1 + 0x26) = 0;
  *(undefined2 *)((int)puVar1 + 0x1a) = 1;
  FUN_80069960();
  *puVar1 = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessPhysicalObject(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$s5*/)
 // line 2172, offset 0x8006b2b0
	/* begin block 1 */
		// Start line: 2173
		// Start offset: 0x8006B2B0
		// Variables:
	// 		struct PhysObData *Data; // $s1

		/* begin block 1.1 */
			// Start line: 2182
			// Start offset: 0x8006B2E8
			// Variables:
		// 		struct _PhysObLight *pLight; // $a0

			/* begin block 1.1.1 */
				// Start line: 2189
				// Start offset: 0x8006B2FC
				// Variables:
			// 		struct LightInstance *li; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8006B344
			// End Line: 2195
		/* end block 1.1 */
		// End offset: 0x8006B344
		// End Line: 2196

		/* begin block 1.2 */
			// Start line: 2224
			// Start offset: 0x8006B404
			// Variables:
		// 		struct PhysObWeaponProperties *properties; // $v0

			/* begin block 1.2.1 */
				// Start line: 2230
				// Start offset: 0x8006B434
				// Variables:
			// 		struct _PhysObLight *pLight; // $a1
			/* end block 1.2.1 */
			// End offset: 0x8006B46C
			// End Line: 2237
		/* end block 1.2 */
		// End offset: 0x8006B46C
		// End Line: 2237

		/* begin block 1.3 */
			// Start line: 2254
			// Start offset: 0x8006B4CC
		/* end block 1.3 */
		// End offset: 0x8006B570
		// End Line: 2274

		/* begin block 1.4 */
			// Start line: 2279
			// Start offset: 0x8006B584
			// Variables:
		// 		struct PhysObAnimatedProperties *Prop; // $v0
		/* end block 1.4 */
		// End offset: 0x8006B5D4
		// End Line: 2287

		/* begin block 1.5 */
			// Start line: 2291
			// Start offset: 0x8006B5E8
		/* end block 1.5 */
		// End offset: 0x8006B630
		// End Line: 2304

		/* begin block 1.6 */
			// Start line: 2358
			// Start offset: 0x8006B738
			// Variables:
		// 		struct PhysObCollectibleProperties *collectibleProp; // $a2
		/* end block 1.6 */
		// End offset: 0x8006B788
		// End Line: 2365

		/* begin block 1.7 */
			// Start line: 2370
			// Start offset: 0x8006B79C
			// Variables:
		// 		struct Level *level; // $s2

			/* begin block 1.7.1 */
				// Start line: 2373
				// Start offset: 0x8006B7C4
				// Variables:
			// 		struct _PhysObLight *pLight; // $a1
			/* end block 1.7.1 */
			// End offset: 0x8006B800
			// End Line: 2380
		/* end block 1.7 */
		// End offset: 0x8006B800
		// End Line: 2381

		/* begin block 1.8 */
			// Start line: 2385
			// Start offset: 0x8006B814
			// Variables:
		// 		struct Level *level; // $v1

			/* begin block 1.8.1 */
				// Start line: 2393
				// Start offset: 0x8006B85C
				// Variables:
			// 		struct __PhysObProjectileProperties *ProjProp; // $s2
			// 		struct __PhysObProjectileData *ProjData; // $v1
			/* end block 1.8.1 */
			// End offset: 0x8006B8F4
			// End Line: 2419
		/* end block 1.8 */
		// End offset: 0x8006B8F4
		// End Line: 2420

		/* begin block 1.9 */
			// Start line: 2426
			// Start offset: 0x8006B918
			// Variables:
		// 		struct evPhysicsGravityData *gravityData; // $s2
		// 		int rc; // $s3
		// 		int upperOffset; // $a0
		// 		short lowerOffset; // $a1
		// 		int wasFalling; // $s4

			/* begin block 1.9.1 */
				// Start line: 2509
				// Start offset: 0x8006BB7C
			/* end block 1.9.1 */
			// End offset: 0x8006BB90
			// End Line: 2513

			/* begin block 1.9.2 */
				// Start line: 2540
				// Start offset: 0x8006BC00
			/* end block 1.9.2 */
			// End offset: 0x8006BC28
			// End Line: 2544

			/* begin block 1.9.3 */
				// Start line: 2570
				// Start offset: 0x8006BCDC
				// Variables:
			// 		struct _PCollideInfo CInfo; // stack offset -96
			// 		struct SVECTOR Old; // stack offset -48
			// 		struct SVECTOR New; // stack offset -40
			// 		short len; // $a2
			// 		long mult; // $a3
			/* end block 1.9.3 */
			// End offset: 0x8006BDC0
			// End Line: 2604
		/* end block 1.9 */
		// End offset: 0x8006BDC0
		// End Line: 2604
	/* end block 1 */
	// End offset: 0x8006BEC0
	// End Line: 2658

	/* begin block 2 */
		// Start line: 4820
	/* end block 2 */
	// End Line: 4821

void ProcessPhysicalObject(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  int unaff_s2;
  
  if (in_v0 != 0) {
    *(uint *)(unaff_s2 + 0x18) = *(uint *)(unaff_s2 + 0x18) | 0x100;
  }
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ PhysicalObjectQuery(struct _Instance *instance /*$s0*/, unsigned long Query /*$a1*/)
 // line 2663, offset 0x8006bee4
	/* begin block 1 */
		// Start line: 2664
		// Start offset: 0x8006BEE4
		// Variables:
	// 		struct PhysObData *Data; // $s2
	// 		int trueValue; // $s1

		/* begin block 1.1 */
			// Start line: 2692
			// Start offset: 0x8006BFA4
		/* end block 1.1 */
		// End offset: 0x8006BFC8
		// End Line: 2701

		/* begin block 1.2 */
			// Start line: 2708
			// Start offset: 0x8006BFF8
		/* end block 1.2 */
		// End offset: 0x8006C020
		// End Line: 2711

		/* begin block 1.3 */
			// Start line: 2716
			// Start offset: 0x8006C034
			// Variables:
		// 		struct _G2EulerAngles_Type ea; // stack offset -24
		/* end block 1.3 */
		// End offset: 0x8006C080
		// End Line: 2727

		/* begin block 1.4 */
			// Start line: 2736
			// Start offset: 0x8006C09C
			// Variables:
		// 		struct PhysObProperties *Prop; // $a0

			/* begin block 1.4.1 */
				// Start line: 2740
				// Start offset: 0x8006C0B4
			/* end block 1.4.1 */
			// End offset: 0x8006C0C8
			// End Line: 2743

			/* begin block 1.4.2 */
				// Start line: 2745
				// Start offset: 0x8006C0D0
			/* end block 1.4.2 */
			// End offset: 0x8006C0DC
			// End Line: 2748

			/* begin block 1.4.3 */
				// Start line: 2750
				// Start offset: 0x8006C0E4
			/* end block 1.4.3 */
			// End offset: 0x8006C0F0
			// End Line: 2753
		/* end block 1.4 */
		// End offset: 0x8006C0FC
		// End Line: 2761

		/* begin block 1.5 */
			// Start line: 2771
			// Start offset: 0x8006C130
			// Variables:
		// 		struct PhysObCollectibleProperties *collectibleProp; // $v0
		/* end block 1.5 */
		// End offset: 0x8006C14C
		// End Line: 2774

		/* begin block 1.6 */
			// Start line: 2820
			// Start offset: 0x8006C1A8
			// Variables:
		// 		struct PhysObDraftProperties *DraftProp; // $t0
		// 		struct INICommand *index; // $v0
		/* end block 1.6 */
		// End offset: 0x8006C200
		// End Line: 2832

		/* begin block 1.7 */
			// Start line: 2840
			// Start offset: 0x8006C200
			// Variables:
		// 		struct evControlSaveDataData *pdata; // $a1
		// 		struct _PhysObSaveData *data; // $a2
		/* end block 1.7 */
		// End offset: 0x8006C2D4
		// End Line: 2861

		/* begin block 1.8 */
			// Start line: 2869
			// Start offset: 0x8006C2EC
		/* end block 1.8 */
		// End offset: 0x8006C310
		// End Line: 2881

		/* begin block 1.9 */
			// Start line: 2884
			// Start offset: 0x8006C310
			// Variables:
		// 		struct PhysObSwitchProperties *Prop; // $v0

			/* begin block 1.9.1 */
				// Start line: 2889
				// Start offset: 0x8006C328
				// Variables:
			// 		struct PhysObData *Data; // $v0
			/* end block 1.9.1 */
			// End offset: 0x8006C34C
			// End Line: 2901
		/* end block 1.9 */
		// End offset: 0x8006C34C
		// End Line: 2902

		/* begin block 1.10 */
			// Start line: 2912
			// Start offset: 0x8006C36C
			// Variables:
		// 		struct PhysObData *physobData; // $v0
		/* end block 1.10 */
		// End offset: 0x8006C3A4
		// End Line: 2924
	/* end block 1 */
	// End offset: 0x8006C3BC
	// End Line: 2933

	/* begin block 2 */
		// Start line: 5843
	/* end block 2 */
	// End Line: 5844

ulong PhysicalObjectQuery(_Instance *instance,ulong Query)

{
  ulong uVar1;
  int in_v1;
  int unaff_s5;
  
  uVar1 = 1000;
  if (in_v1 == 1000) {
    uVar1 = FUN_800776d0(instance,&instance->position,*(undefined4 *)(unaff_s5 + 0x240));
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicalObjectPost(struct _Instance *instance /*$s4*/, unsigned long Message /*$s0*/, unsigned long Data /*$s3*/)
 // line 2937, offset 0x8006c3d4
	/* begin block 1 */
		// Start line: 2938
		// Start offset: 0x8006C3D4
		// Variables:
	// 		struct evObjectData *Ptr; // $s2
	// 		struct PhysObData *PData; // $s1

		/* begin block 1.1 */
			// Start line: 2995
			// Start offset: 0x8006C7B8
		/* end block 1.1 */
		// End offset: 0x8006C7D4
		// End Line: 3001

		/* begin block 1.2 */
			// Start line: 3021
			// Start offset: 0x8006C7E4
			// Variables:
		// 		struct PhysObSwitchProperties *Prop; // $s1

			/* begin block 1.2.1 */
				// Start line: 3025
				// Start offset: 0x8006C7F8
			/* end block 1.2.1 */
			// End offset: 0x8006C818
			// End Line: 3034

			/* begin block 1.2.2 */
				// Start line: 3041
				// Start offset: 0x8006C83C
				// Variables:
			// 		struct PhysObData *Data; // $a0
			/* end block 1.2.2 */
			// End offset: 0x8006C85C
			// End Line: 3050
		/* end block 1.2 */
		// End offset: 0x8006C85C
		// End Line: 3050

		/* begin block 1.3 */
			// Start line: 3058
			// Start offset: 0x8006C870
			// Variables:
		// 		struct _PhysObSaveData *saveData; // $v0

			/* begin block 1.3.1 */
				// Start line: 3073
				// Start offset: 0x8006C8CC
				// Variables:
			// 		struct _PhysObLight *pLight; // $a1
			/* end block 1.3.1 */
			// End offset: 0x8006C8F4
			// End Line: 3080

			/* begin block 1.3.2 */
				// Start line: 3083
				// Start offset: 0x8006C908
				// Variables:
			// 		struct PhysObSwitchProperties *Prop; // $v1
			/* end block 1.3.2 */
			// End offset: 0x8006C94C
			// End Line: 3099

			/* begin block 1.3.3 */
				// Start line: 3101
				// Start offset: 0x8006C960
			/* end block 1.3.3 */
			// End offset: 0x8006C978
			// End Line: 3105
		/* end block 1.3 */
		// End offset: 0x8006C9AC
		// End Line: 3111

		/* begin block 1.4 */
			// Start line: 3114
			// Start offset: 0x8006C9AC
		/* end block 1.4 */
		// End offset: 0x8006C9B4
		// End Line: 3121

		/* begin block 1.5 */
			// Start line: 3128
			// Start offset: 0x8006C9F4
			// Variables:
		// 		struct PhysObCollectibleProperties *collectibleProp; // $s0
		/* end block 1.5 */
		// End offset: 0x8006CAD4
		// End Line: 3159

		/* begin block 1.6 */
			// Start line: 3161
			// Start offset: 0x8006CAD4
		/* end block 1.6 */
		// End offset: 0x8006CAFC
		// End Line: 3173

		/* begin block 1.7 */
			// Start line: 3199
			// Start offset: 0x8006CB58
			// Variables:
		// 		struct _PhysObLight *pLight; // $a1

			/* begin block 1.7.1 */
				// Start line: 3213
				// Start offset: 0x8006CBAC
				// Variables:
			// 		struct PhysObData *podata; // $v1
			/* end block 1.7.1 */
			// End offset: 0x8006CBAC
			// End Line: 3213
		/* end block 1.7 */
		// End offset: 0x8006CBD4
		// End Line: 3224

		/* begin block 1.8 */
			// Start line: 3233
			// Start offset: 0x8006CC10
		/* end block 1.8 */
		// End offset: 0x8006CC10
		// End Line: 3234

		/* begin block 1.9 */
			// Start line: 3241
			// Start offset: 0x8006CC1C
		/* end block 1.9 */
		// End offset: 0x8006CC50
		// End Line: 3248

		/* begin block 1.10 */
			// Start line: 3252
			// Start offset: 0x8006CC58
			// Variables:
		// 		struct PhysObProperties *Prop; // $v0
		/* end block 1.10 */
		// End offset: 0x8006CCA4
		// End Line: 3258
	/* end block 1 */
	// End offset: 0x8006CCA4
	// End Line: 3263

	/* begin block 2 */
		// Start line: 6405
	/* end block 2 */
	// End Line: 6406

void PhysicalObjectPost(_Instance *instance,ulong Message,ulong Data)

{
  return;
}



// autogenerated function stub: 
// long /*$ra*/ PhysobAnimCallback(struct _G2Anim_Type *anim /*$v1*/, int sectionID /*$a1*/, enum _G2AnimCallbackMsg_Enum message /*$a2*/, long messageDataA /*$s2*/, long messageDataB /*stack 16*/, void *data /*stack 20*/)
long PhysobAnimCallback(struct _G2Anim_Type *anim, int sectionID, enum _G2AnimCallbackMsg_Enum message, long messageDataA, long messageDataB, void *data)
{ // line 3265, offset 0x8006ccc4
	/* begin block 1 */
		// Start line: 3266
		// Start offset: 0x8006CCC4

		/* begin block 1.1 */
			// Start line: 3268
			// Start offset: 0x8006CCEC
			// Variables:
				struct PhysObData *Data; // $s0
		/* end block 1.1 */
		// End offset: 0x8006CD38
		// End Line: 3285
	/* end block 1 */
	// End offset: 0x8006CD50
	// End Line: 3289

	/* begin block 2 */
		// Start line: 7074
	/* end block 2 */
	// End Line: 7075

	return 0;
}


// decompiled code
// original method signature: 
// void /*$ra*/ CheckForceCollision(struct _Instance *instance /*$s2*/, struct _Instance *hitinst /*$s4*/, struct _TFace *tface /*$s7*/, struct _CollideInfo *collideInfo /*$fp*/, struct _SVector *dir /*stack 16*/, int obliqueFlg /*stack 20*/)
 // line 3300, offset 0x8006cd68
	/* begin block 1 */
		// Start line: 3301
		// Start offset: 0x8006CD68
		// Variables:
	// 		struct PhysObData *Data; // $s3

		/* begin block 1.1 */
			// Start line: 3307
			// Start offset: 0x8006CDBC
			// Variables:
		// 		struct PhysObProperties *Prop; // $s1
		// 		struct ProjectileData *ProjIData; // $s0
		// 		struct __PhysObProjectileData *ProjData; // $s1
		// 		int killImmediately; // $s5
		/* end block 1.1 */
		// End offset: 0x8006CFA4
		// End Line: 3393
	/* end block 1 */
	// End offset: 0x8006CFA4
	// End Line: 3394

	/* begin block 2 */
		// Start line: 7148
	/* end block 2 */
	// End Line: 7149

void CheckForceCollision(_Instance *instance,_Instance *hitinst,_TFace *tface,
                        _CollideInfo *collideInfo,_SVector *dir,int obliqueFlg)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetObliqueDirection(struct _Instance *instance /*$a0*/, struct _SVector *dir /*$a1*/)
 // line 3397, offset 0x8006cfd4
	/* begin block 1 */
		// Start line: 3398
		// Start offset: 0x8006CFD4
		// Variables:
	// 		struct _SVector vel; // stack offset -8
	// 		int obliqueFlg; // $a3

		/* begin block 1.1 */
			// Start line: 3407
			// Start offset: 0x8006D008
			// Variables:
		// 		long axVel; // $a2
		// 		long ayVel; // $v1
		/* end block 1.1 */
		// End offset: 0x8006D090
		// End Line: 3431
	/* end block 1 */
	// End offset: 0x8006D0A4
	// End Line: 3439

	/* begin block 2 */
		// Start line: 7361
	/* end block 2 */
	// End Line: 7362

	/* begin block 3 */
		// Start line: 7365
	/* end block 3 */
	// End Line: 7366

int GetObliqueDirection(_Instance *instance,_SVector *dir)

{
  int iVar1;
  
  iVar1 = FUN_800342f8();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CollidePhysicalObject(struct _Instance *instance /*$s1*/, struct GameTracker *gameTracker /*$a1*/)
 // line 3444, offset 0x8006d0b0
	/* begin block 1 */
		// Start line: 3445
		// Start offset: 0x8006D0B0
		// Variables:
	// 		struct PhysObData *Data; // $s3
	// 		struct _CollideInfo *collideInfo; // $s2
	// 		int obliqueFlg; // stack offset -48
	// 		struct _SVector vel; // stack offset -136
	// 		struct _SVector dir; // stack offset -128
	// 		struct _Instance *hitinst; // $s5
	// 		struct _TFace *tface; // $s4
	// 		struct _Normal *norm; // $s6
	// 		struct _SVector normal; // stack offset -120
	// 		int stickFlg; // $s0
	// 		int drawFlg; // $s7
	// 		int projectile; // $fp

		/* begin block 1.1 */
			// Start line: 3470
			// Start offset: 0x8006D10C
			// Variables:
		// 		struct Level *level; // $v1
		/* end block 1.1 */
		// End offset: 0x8006D154
		// End Line: 3480

		/* begin block 1.2 */
			// Start line: 3487
			// Start offset: 0x8006D170
			// Variables:
		// 		struct BSPTree *bsp; // $s0
		// 		struct Level *level; // $a0
		/* end block 1.2 */
		// End offset: 0x8006D1C4
		// End Line: 3494

		/* begin block 1.3 */
			// Start line: 3517
			// Start offset: 0x8006D298
			// Variables:
		// 		struct _Position delta; // stack offset -112

			/* begin block 1.3.1 */
				// Start line: 3519
				// Start offset: 0x8006D298
				// Variables:
			// 		short _x0; // $t0
			// 		short _y0; // $t1
			// 		short _z0; // $t2
			// 		short _x1; // $v0
			// 		short _y1; // $v1
			// 		short _z1; // $a2
			// 		struct _Position *_v; // $a1
			// 		struct _Position *_v0; // $v0
			// 		struct _Position *_v1; // $a3
			/* end block 1.3.1 */
			// End offset: 0x8006D298
			// End Line: 3519

			/* begin block 1.3.2 */
				// Start line: 3519
				// Start offset: 0x8006D298
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a2
			/* end block 1.3.2 */
			// End offset: 0x8006D298
			// End Line: 3519
		/* end block 1.3 */
		// End offset: 0x8006D31C
		// End Line: 3525

		/* begin block 1.4 */
			// Start line: 3569
			// Start offset: 0x8006D440
		/* end block 1.4 */
		// End offset: 0x8006D474
		// End Line: 3574

		/* begin block 1.5 */
			// Start line: 3583
			// Start offset: 0x8006D4B0
			// Variables:
		// 		struct _PCollideInfo CInfo; // stack offset -104
		// 		struct _SVector newPos; // stack offset -56
		/* end block 1.5 */
		// End offset: 0x8006D50C
		// End Line: 3602

		/* begin block 1.6 */
			// Start line: 3622
			// Start offset: 0x8006D5B4
			// Variables:
		// 		struct _Position delta; // stack offset -112

			/* begin block 1.6.1 */
				// Start line: 3622
				// Start offset: 0x8006D5B4
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a2
			// 		short _y1; // $t1
			// 		short _z1; // $t2
			// 		struct _Position *_v; // $a3
			/* end block 1.6.1 */
			// End offset: 0x8006D5B4
			// End Line: 3622
		/* end block 1.6 */
		// End offset: 0x8006D624
		// End Line: 3642

		/* begin block 1.7 */
			// Start line: 3645
			// Start offset: 0x8006D634
		/* end block 1.7 */
		// End offset: 0x8006D68C
		// End Line: 3651

		/* begin block 1.8 */
			// Start line: 3684
			// Start offset: 0x8006D758
			// Variables:
		// 		struct _CollideInfo parentCI; // stack offset -112
		/* end block 1.8 */
		// End offset: 0x8006D7B0
		// End Line: 3690

		/* begin block 1.9 */
			// Start line: 3698
			// Start offset: 0x8006D7E8
			// Variables:
		// 		struct PhysObSplinter *splintDef; // $v0
		// 		struct FXSplinter *splinterData; // $v1
		/* end block 1.9 */
		// End offset: 0x8006D830
		// End Line: 3721
	/* end block 1 */
	// End offset: 0x8006D854
	// End Line: 3726

	/* begin block 2 */
		// Start line: 7463
	/* end block 2 */
	// End Line: 7464

void CollidePhysicalObject(_Instance *instance,GameTracker *gameTracker)

{
  *(undefined2 *)((int)&(gameTracker->gameData).asmData.drawBackFaces + 2) = 0xf000;
  *(undefined2 *)&(gameTracker->gameData).asmData.drawBackFaces = 0;
  return;
}



// decompiled code
// original method signature: 
// struct PhysObWeaponAttributes * /*$ra*/ PhysObGetWeapon(struct _Instance *instance /*$s1*/)
 // line 3729, offset 0x8006d884
	/* begin block 1 */
		// Start line: 3730
		// Start offset: 0x8006D884
		// Variables:
	// 		struct PhysObWeaponAttributes *weapon; // $s0

		/* begin block 1.1 */
			// Start line: 3736
			// Start offset: 0x8006D8AC
			// Variables:
		// 		struct PhysObWeaponProperties *Prop; // $v0
		/* end block 1.1 */
		// End offset: 0x8006D8B8
		// End Line: 3738

		/* begin block 1.2 */
			// Start line: 3740
			// Start offset: 0x8006D8C8
			// Variables:
		// 		struct PhysObInteractProperties *Prop; // $v0
		/* end block 1.2 */
		// End offset: 0x8006D8D4
		// End Line: 3742

		/* begin block 1.3 */
			// Start line: 3744
			// Start offset: 0x8006D8E4
			// Variables:
		// 		struct __PhysObProjectileProperties *Prop; // $a0
		/* end block 1.3 */
		// End offset: 0x8006D90C
		// End Line: 3748
	/* end block 1 */
	// End offset: 0x8006D90C
	// End Line: 3749

	/* begin block 2 */
		// Start line: 8132
	/* end block 2 */
	// End Line: 8133

PhysObWeaponAttributes * PhysObGetWeapon(_Instance *instance)

{
  PhysObWeaponAttributes *pPVar1;
  
  pPVar1 = (PhysObWeaponAttributes *)FUN_8006cda4();
  return pPVar1;
}



// decompiled code
// original method signature: 
// struct _PhysObLight * /*$ra*/ PhysObGetLight(struct _Instance *instance /*$a0*/)
 // line 3754, offset 0x8006d928
	/* begin block 1 */
		// Start line: 3755
		// Start offset: 0x8006D928
		// Variables:
	// 		struct PhysObWeaponAttributes *weapon; // $v0
	// 		struct _PhysObLight *pLight; // $s0
	/* end block 1 */
	// End offset: 0x8006D948
	// End Line: 3764

	/* begin block 2 */
		// Start line: 8186
	/* end block 2 */
	// End Line: 8187

_PhysObLight * PhysObGetLight(_Instance *instance)

{
  int in_v0;
  int unaff_s1;
  
  return *(_PhysObLight **)
          (*(int *)(in_v0 + 4) * 0xc + *(int *)(*(int *)(unaff_s1 + 0x24) + 0xc) + 8);
}



// decompiled code
// original method signature: 
// struct PhysObSplinter * /*$ra*/ PhysObGetSplinter(struct _Instance *instance /*$a0*/)
 // line 3768, offset 0x8006d960
	/* begin block 1 */
		// Start line: 3769
		// Start offset: 0x8006D960
		// Variables:
	// 		struct PhysObWeaponAttributes *weapon; // $v0
	// 		struct PhysObSplinter *pSplinter; // $s0
	/* end block 1 */
	// End offset: 0x8006D980
	// End Line: 3778

	/* begin block 2 */
		// Start line: 8214
	/* end block 2 */
	// End Line: 8215

PhysObSplinter * PhysObGetSplinter(_Instance *instance)

{
  int iVar1;
  PhysObSplinter *pPVar2;
  
  pPVar2 = (PhysObSplinter *)0x0;
  iVar1 = FUN_8006d8c0();
  if (iVar1 != 0) {
    pPVar2 = *(PhysObSplinter **)(iVar1 + 0x10);
  }
  return pPVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOnCollisionPhysOb(struct _Instance *instance /*$s1*/, int coll /*$s2*/)
 // line 3783, offset 0x8006d994
	/* begin block 1 */
		// Start line: 3784
		// Start offset: 0x8006D994
		// Variables:
	// 		struct PhysObWeaponAttributes *weapon; // $s0
	// 		struct PhysObData *Data; // $v1
	/* end block 1 */
	// End offset: 0x8006DA20
	// End Line: 3802

	/* begin block 2 */
		// Start line: 8244
	/* end block 2 */
	// End Line: 8245

void TurnOnCollisionPhysOb(_Instance *instance,int coll)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOffCollisionPhysOb(struct _Instance *instance /*$s1*/, int coll /*$s2*/)
 // line 3807, offset 0x8006da38
	/* begin block 1 */
		// Start line: 3808
		// Start offset: 0x8006DA38
		// Variables:
	// 		struct PhysObWeaponAttributes *weapon; // $s0
	/* end block 1 */
	// End offset: 0x8006DAA8
	// End Line: 3824

	/* begin block 2 */
		// Start line: 8299
	/* end block 2 */
	// End Line: 8300

void TurnOffCollisionPhysOb(_Instance *instance,int coll)

{
  uint unaff_s2;
  
  FUN_800247b4();
  if ((unaff_s2 & 4) != 0) {
    FUN_800247b4();
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPhysObCollisionType(struct _Instance *instance /*$s1*/)
 // line 3831, offset 0x8006dac0
	/* begin block 1 */
		// Start line: 3832
		// Start offset: 0x8006DAC0
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s4
	// 		struct _HSphere *S; // $s0
	// 		struct _Instance *target; // $s2
	// 		struct PhysObWeaponAttributes *weapon; // $s0
	// 		struct PhysObData *Data; // $s5

		/* begin block 1.1 */
			// Start line: 3851
			// Start offset: 0x8006DB38
			// Variables:
		// 		struct _Instance *inst; // $v1
		/* end block 1.1 */
		// End offset: 0x8006DB38
		// End Line: 3851

		/* begin block 1.2 */
			// Start line: 3919
			// Start offset: 0x8006DD18
			// Variables:
		// 		int damage; // $s3
		/* end block 1.2 */
		// End offset: 0x8006DD74
		// End Line: 3925
	/* end block 1 */
	// End offset: 0x8006DDD8
	// End Line: 3941

	/* begin block 2 */
		// Start line: 8347
	/* end block 2 */
	// End Line: 8348

int GetPhysObCollisionType(_Instance *instance)

{
  uint uVar1;
  uint unaff_s2;
  
  FUN_8002482c();
  uVar1 = unaff_s2 & 4;
  if (uVar1 != 0) {
    uVar1 = FUN_8002482c();
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteThrow(struct _Instance *instance /*$s1*/)
 // line 3944, offset 0x8006ddfc
	/* begin block 1 */
		// Start line: 3945
		// Start offset: 0x8006DDFC
		// Variables:
	// 		struct PhysObData *Data; // $s2

		/* begin block 1.1 */
			// Start line: 3953
			// Start offset: 0x8006DE30
			// Variables:
		// 		short angley; // $s0
		// 		struct _Position zero; // stack offset -32
		// 		struct _Position velocity; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x8006DE30
		// End Line: 3954
	/* end block 1 */
	// End offset: 0x8006DEF4
	// End Line: 3980

	/* begin block 2 */
		// Start line: 8590
	/* end block 2 */
	// End Line: 8591

void ExecuteThrow(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,0x400000);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteDrag(struct _Instance *instance /*$s1*/)
 // line 3984, offset 0x8006df0c
	/* begin block 1 */
		// Start line: 3985
		// Start offset: 0x8006DF0C
		// Variables:
	// 		struct PhysObData *Data; // $s0
	/* end block 1 */
	// End offset: 0x8006DFA0
	// End Line: 4019

	/* begin block 2 */
		// Start line: 8681
	/* end block 2 */
	// End Line: 8682

void ExecuteDrag(_Instance *instance)

{
  undefined2 in_v0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 0x78) = in_v0;
  iVar1 = *(int *)(unaff_s2 + 0x44) - gameTrackerX.controlCommand[1][1];
  *(int *)(unaff_s2 + 0x44) = iVar1;
  if (iVar1 < 0) {
    FUN_800342f8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteSlideToStop(struct _Instance *instance /*$s1*/)
 // line 4023, offset 0x8006dfb4
	/* begin block 1 */
		// Start line: 4024
		// Start offset: 0x8006DFB4
		// Variables:
	// 		struct PhysObData *Data; // $s0
	/* end block 1 */
	// End offset: 0x8006E05C
	// End Line: 4061

	/* begin block 2 */
		// Start line: 8759
	/* end block 2 */
	// End Line: 8760

void ExecuteSlideToStop(_Instance *instance)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x6e) = *(undefined4 *)(unaff_s1 + 0x5c);
  *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s1 + 0x60);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteFlip(struct _Instance *instance /*$s1*/)
 // line 4065, offset 0x8006e074
	/* begin block 1 */
		// Start line: 4066
		// Start offset: 0x8006E074
		// Variables:
	// 		struct PhysObData *Data; // $s0
	/* end block 1 */
	// End offset: 0x8006E14C
	// End Line: 4108

	/* begin block 2 */
		// Start line: 8843
	/* end block 2 */
	// End Line: 8844

void ExecuteFlip(_Instance *instance)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x6e) = *(undefined4 *)(unaff_s1 + 0x5c);
  *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s1 + 0x60);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckSlope(int Znormal /*$a0*/, int Slope /*$a1*/, int Slop /*$a2*/)
 // line 4168, offset 0x8006e164
	/* begin block 1 */
		// Start line: 9050
	/* end block 1 */
	// End Line: 9051

	/* begin block 2 */
		// Start line: 9051
	/* end block 2 */
	// End Line: 9052

int CheckSlope(int Znormal,int Slope,int Slop)

{
  int in_v0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x6e) = *(undefined4 *)(unaff_s1 + 0x5c);
  *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s1 + 0x60);
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckBlockSlope(struct _Instance *instance /*$a0*/, int x /*$a1*/, int y /*$a2*/, int hOff /*$a3*/, int vOff /*stack 16*/, int dH /*stack 20*/, int dV /*stack 24*/)
 // line 4177, offset 0x8006e184
	/* begin block 1 */
		// Start line: 4178
		// Start offset: 0x8006E184
		// Variables:
	// 		struct _PCollideInfo CInfo; // stack offset -72
	// 		struct SVECTOR Old; // stack offset -24
	// 		struct SVECTOR New; // stack offset -16
	// 		int xOff; // $t3
	// 		int yOff; // $t4
	// 		int dX; // $t2
	// 		int dY; // $t6
	// 		struct MATRIX *mat; // $v0
	/* end block 1 */
	// End offset: 0x8006E184
	// End Line: 4178

	/* begin block 2 */
		// Start line: 9068
	/* end block 2 */
	// End Line: 9069

	/* begin block 3 */
		// Start line: 9071
	/* end block 3 */
	// End Line: 9072

int CheckBlockSlope(_Instance *instance,int x,int y,int hOff,int vOff,int dH,int dV)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOBS_FigureDragForSlope(struct _Instance *instance /*$a0*/, int pathNumber /*$s1*/, int *result /*$s2*/)
 // line 4220, offset 0x8006e244
	/* begin block 1 */
		// Start line: 4221
		// Start offset: 0x8006E244
		// Variables:
	// 		int didSomething; // $s0
	/* end block 1 */
	// End offset: 0x8006E2A8
	// End Line: 4251

	/* begin block 2 */
		// Start line: 9220
	/* end block 2 */
	// End Line: 9221

int PHYSOBS_FigureDragForSlope(_Instance *instance,int pathNumber,int *result)

{
  short in_v0;
  short in_v1;
  short in_t1;
  short in_t2;
  short in_lo;
  short in_stack_00000010;
  short sStack00000048;
  short sStack0000004a;
  short sStack0000004c;
  
  sStack0000004c = in_v0 + in_t1;
  sStack00000048 = in_v1 + in_t2;
  sStack0000004a = (short)pathNumber + in_lo;
  FUN_800746f8(instance,&stack0x00000010);
  return (uint)(in_stack_00000010 == 5);
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckThrownLineCollision(struct _Instance *instance /*$s3*/, struct _Instance *parent /*$s1*/)
 // line 4255, offset 0x8006e2c4
	/* begin block 1 */
		// Start line: 4256
		// Start offset: 0x8006E2C4
		// Variables:
	// 		struct _PCollideInfo pcollideInfo; // stack offset -160
	// 		struct _Position newPos; // stack offset -112
	// 		struct _Position oldPos; // stack offset -104
	// 		struct _Position orgNew; // stack offset -96
	// 		struct MATRIX *mat; // $v1
	// 		struct PhysObWeaponAttributes *weapon; // $v0

		/* begin block 1.1 */
			// Start line: 4280
			// Start offset: 0x8006E32C
			// Variables:
		// 		struct _SVector line; // stack offset -88
		// 		struct _SVector delta; // stack offset -80
		// 		long dp; // $s0

			/* begin block 1.1.1 */
				// Start line: 4312
				// Start offset: 0x8006E3DC
				// Variables:
			// 		short _x0; // $a0
			// 		short _y0; // $v0
			// 		short _z0; // $v1
			// 		short _y1; // $a1
			// 		short _z1; // $a2
			// 		struct _SVector *_v; // $s1
			// 		struct _Position *_v0; // $v1
			// 		struct _Position *_v1; // $s2
			/* end block 1.1.1 */
			// End offset: 0x8006E3DC
			// End Line: 4312

			/* begin block 1.1.2 */
				// Start line: 4316
				// Start offset: 0x8006E488
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _y1; // $a1
			// 		short _z1; // $a2
			/* end block 1.1.2 */
			// End offset: 0x8006E488
			// End Line: 4316

			/* begin block 1.1.3 */
				// Start line: 4326
				// Start offset: 0x8006E4D8
				// Variables:
			// 		short _x1; // $a2
			// 		short _y1; // $v1
			// 		short _z1; // $a3
			// 		struct _Position *_v0; // $v0
			// 		struct _Position *_v1; // $v0
			/* end block 1.1.3 */
			// End offset: 0x8006E4D8
			// End Line: 4326
		/* end block 1.1 */
		// End offset: 0x8006E580
		// End Line: 4338

		/* begin block 1.2 */
			// Start line: 4349
			// Start offset: 0x8006E5B4
			// Variables:
		// 		struct _TFace *tface; // $a0
		// 		struct Level *level; // $a1
		/* end block 1.2 */
		// End offset: 0x8006E604
		// End Line: 4355

		/* begin block 1.3 */
			// Start line: 4363
			// Start offset: 0x8006E604
			// Variables:
		// 		short _x0; // $t0
		// 		short _y0; // $t1
		// 		short _z0; // $t2
		// 		short _x1; // $v0
		// 		short _y1; // $v1
		// 		short _z1; // $a2
		// 		struct _Position *_v; // $a1
		// 		struct _Position *_v0; // $v0
		/* end block 1.3 */
		// End offset: 0x8006E604
		// End Line: 4363

		/* begin block 1.4 */
			// Start line: 4363
			// Start offset: 0x8006E604
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a2
		// 		struct _Position *_v; // $a3
		/* end block 1.4 */
		// End offset: 0x8006E604
		// End Line: 4363

		/* begin block 1.5 */
			// Start line: 4363
			// Start offset: 0x8006E604
			// Variables:
		// 		struct PhysObData *Data; // $s0

			/* begin block 1.5.1 */
				// Start line: 4377
				// Start offset: 0x8006E6A8
				// Variables:
			// 		struct PhysObSplinter *splintDef; // $v0
			// 		struct FXSplinter *splinterData; // $v1
			/* end block 1.5.1 */
			// End offset: 0x8006E6F0
			// End Line: 4392

			/* begin block 1.5.2 */
				// Start line: 4395
				// Start offset: 0x8006E6F0
				// Variables:
			// 		struct _SVector dir; // stack offset -80
			// 		struct _Instance *hitInst; // $s1
			// 		struct _TFace *tface; // $s2
			// 		struct _CollideInfo collideInfo; // stack offset -72
			/* end block 1.5.2 */
			// End offset: 0x8006E714
			// End Line: 4406
		/* end block 1.5 */
		// End offset: 0x8006E714
		// End Line: 4406

		/* begin block 1.6 */
			// Start line: 4414
			// Start offset: 0x8006E760
			// Variables:
		// 		struct Level *level; // $v0
		// 		int bspID; // $a0
		// 		struct BSPTree *bsp; // $v0
		/* end block 1.6 */
		// End offset: 0x8006E768
		// End Line: 4425
	/* end block 1 */
	// End offset: 0x8006E7A0
	// End Line: 4426

	/* begin block 2 */
		// Start line: 9290
	/* end block 2 */
	// End Line: 9291

int PHYSOB_CheckThrownLineCollision(_Instance *instance,_Instance *parent)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s2;
  
  if (((unaff_s1 == in_v0) || (unaff_s1 == 2)) || (unaff_s1 == 3)) {
    *unaff_s2 = 0;
    unaff_s0 = 1;
  }
  return unaff_s0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckDroppedLineCollision(struct _Instance *instance /*$s3*/, struct _Instance *parent /*$s6*/)
 // line 4432, offset 0x8006e7bc
	/* begin block 1 */
		// Start line: 4433
		// Start offset: 0x8006E7BC
		// Variables:
	// 		struct _PCollideInfo pcollideInfo; // stack offset -208
	// 		struct _Position parentPos; // stack offset -160
	// 		struct _Position newPos; // stack offset -152
	// 		struct _Position oldPos; // stack offset -144
	// 		struct _SVector offset; // stack offset -136
	// 		struct _Position basePos; // stack offset -128
	// 		int seg; // $s2
	// 		int collided; // $s5

		/* begin block 1.1 */
			// Start line: 4466
			// Start offset: 0x8006E848
			// Variables:
		// 		struct MATRIX *mat; // $v1

			/* begin block 1.1.1 */
				// Start line: 4468
				// Start offset: 0x8006E848
				// Variables:
			// 		short _y0; // $v1
			// 		short _z0; // $a0
			// 		short _y1; // $t0
			// 		short _z1; // $t1
			// 		struct _SVector *_v; // $s1
			// 		struct _Position *_v0; // $s0
			// 		struct _Position *_v1; // $s4
			/* end block 1.1.1 */
			// End offset: 0x8006E848
			// End Line: 4468

			/* begin block 1.1.2 */
				// Start line: 4479
				// Start offset: 0x8006E948
				// Variables:
			// 		short _y0; // $v1
			// 		short _z0; // $a1
			/* end block 1.1.2 */
			// End offset: 0x8006E948
			// End Line: 4479
		/* end block 1.1 */
		// End offset: 0x8006E9D4
		// End Line: 4495

		/* begin block 1.2 */
			// Start line: 4496
			// Start offset: 0x8006E9F4
			// Variables:
		// 		struct _SVector origin; // stack offset -120
		// 		struct _SVector node2; // stack offset -112
		// 		struct _SVector orgDir; // stack offset -104
		// 		struct _SVector newDir; // stack offset -96
		// 		struct _SVector axis; // stack offset -88
		// 		short angle; // $s0
		// 		struct MATRIX mat; // stack offset -80
		// 		struct _G2EulerAngles_Type ea; // stack offset -48

			/* begin block 1.2.1 */
				// Start line: 4496
				// Start offset: 0x8006E9F4
				// Variables:
			// 		short _y0; // $v0
			// 		short _z0; // $v1
			// 		short _y1; // $a3
			// 		short _z1; // $a1
			// 		struct _SVector *_v; // $s0
			// 		struct _SVector *_v0; // $v1
			// 		struct _SVector *_v1; // $a1
			/* end block 1.2.1 */
			// End offset: 0x8006E9F4
			// End Line: 4496

			/* begin block 1.2.2 */
				// Start line: 4496
				// Start offset: 0x8006E9F4
				// Variables:
			// 		struct _SVector delta; // stack offset -40
			// 		int i; // $a0
			// 		struct _Model *model; // $a2
			// 		struct MATRIX *m; // $a1
			/* end block 1.2.2 */
			// End offset: 0x8006EC40
			// End Line: 4546
		/* end block 1.2 */
		// End offset: 0x8006EC40
		// End Line: 4547
	/* end block 1 */
	// End offset: 0x8006EC50
	// End Line: 4562

	/* begin block 2 */
		// Start line: 9698
	/* end block 2 */
	// End Line: 9699

int PHYSOB_CheckDroppedLineCollision(_Instance *instance,_Instance *parent)

{
  int in_v0;
  int iVar1;
  int in_v1;
  
  iVar1 = 3;
  if ((*(ushort *)(in_v0 + in_v1 * 4 + 0x12) & 1) == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// autogenerated function stub: 
// int /*$ra*/ PHYSOB_CheckDirectedLineCollision(struct _Instance *instance /*$a0*/, int xoffset /*$a1*/, int yoffset /*$a2*/, int startZOffset /*$a3*/)
int PHYSOB_CheckDirectedLineCollision(struct _Instance *instance, int xoffset, int yoffset, int startZOffset)
{ // line 4566, offset 0x8006ec78
	/* begin block 1 */
		// Start line: 4567
		// Start offset: 0x8006EC78
		// Variables:
			struct _PCollideInfo pcollideInfo; // stack offset -72
			struct _Position newPos; // stack offset -24
			struct _Position oldPos; // stack offset -16
			struct MATRIX *mat; // $v0
	/* end block 1 */
	// End offset: 0x8006EC78
	// End Line: 4567

	/* begin block 2 */
		// Start line: 10074
	/* end block 2 */
	// End Line: 10075

	return 0;
}


// decompiled code
// original method signature: 
// long /*$ra*/ PHYSOBS_CheckForStackedForwardHits(struct _Instance *block /*$a0*/, long xoffset /*$s2*/, long yoffset /*$s3*/)
 // line 4587, offset 0x8006ecec
	/* begin block 1 */
		// Start line: 4588
		// Start offset: 0x8006ECEC
		// Variables:
	// 		struct _Instance *attachedBlock; // $s0
	// 		long result; // $s1
	/* end block 1 */
	// End offset: 0x8006ED48
	// End Line: 4607

	/* begin block 2 */
		// Start line: 10140
	/* end block 2 */
	// End Line: 10141

long PHYSOBS_CheckForStackedForwardHits(_Instance *block,long xoffset,long yoffset)

{
  short in_a3;
  short in_t1;
  short in_stack_00000010;
  undefined *puStack00000024;
  undefined *puStack00000028;
  short sStack00000044;
  short sStack0000004c;
  
  puStack00000024 = &stack0x00000040;
  puStack00000028 = &stack0x00000048;
  sStack00000044 = in_t1 + in_a3;
  sStack0000004c = sStack00000044;
  FUN_800746f8();
  return (int)in_stack_00000010;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOBS_SetNewAnim(struct _Instance *instance /*$s1*/, struct PhysObData *Data /*$s0*/, unsigned long modeBits /*$a2*/, int path /*$s2*/, int resetflg /*stack 16*/)
 // line 4610, offset 0x8006ed68
	/* begin block 1 */
		// Start line: 10188
	/* end block 1 */
	// End Line: 10189

void PHYSOBS_SetNewAnim(_Instance *instance,PhysObData *Data,ulong modeBits,int path,int resetflg)

{
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ PHYSOB_CheckForEnemyInBlkSpot(struct _Instance *instance /*$a0*/, int dx /*$a1*/, int dy /*$a2*/)
 // line 4623, offset 0x8006ede0
	/* begin block 1 */
		// Start line: 4624
		// Start offset: 0x8006EDE0
		// Variables:
	// 		int x; // $v0
	// 		int y; // $v1
	// 		int z; // $v0
	// 		int x0; // $s6
	// 		int x1; // $s5
	// 		int y0; // $s4
	// 		int y1; // $s3
	// 		int z0; // $s2
	// 		int z1; // $s1
	// 		struct _Instance *inst; // $s0
	/* end block 1 */
	// End offset: 0x8006EEEC
	// End Line: 4646

	/* begin block 2 */
		// Start line: 10217
	/* end block 2 */
	// End Line: 10218

long PHYSOB_CheckForEnemyInBlkSpot(_Instance *instance,int dx,int dy)

{
  undefined4 in_v0;
  long lVar1;
  undefined4 *unaff_s0;
  
  *unaff_s0 = in_v0;
  FUN_80069960();
  lVar1 = FUN_80069e9c();
  return lVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ PHYSOBS_CheckForValidMove(struct _Instance *instance /*$s2*/)
 // line 4649, offset 0x8006ef14
	/* begin block 1 */
		// Start line: 4650
		// Start offset: 0x8006EF14
		// Variables:
	// 		int rc; // $s1
	// 		struct PhysObData *Data; // $s0
	// 		struct evPhysicsSlideData *Ptr; // stack offset -32
	// 		int result; // stack offset -28

		/* begin block 1.1 */
			// Start line: 4735
			// Start offset: 0x8006F070
			// Variables:
		// 		int Height; // $v0
		/* end block 1.1 */
		// End offset: 0x8006F0C0
		// End Line: 4748

		/* begin block 1.2 */
			// Start line: 4972
			// Start offset: 0x8006F32C
			// Variables:
		// 		struct evPhysicsSlideData *Ptr; // stack offset -24
		/* end block 1.2 */
		// End offset: 0x8006F420
		// End Line: 5017
	/* end block 1 */
	// End offset: 0x8006F444
	// End Line: 5033

	/* begin block 2 */
		// Start line: 10284
	/* end block 2 */
	// End Line: 10285

long PHYSOBS_CheckForValidMove(_Instance *instance)

{
  int unaff_s0;
  
  do {
    unaff_s0 = *(int *)(unaff_s0 + 8);
    if (unaff_s0 == 0) {
      return 0;
    }
  } while (((*(uint *)(*(int *)(unaff_s0 + 0x1c) + 0x2c) & 0x80000) == 0) ||
          ((*(uint *)(unaff_s0 + 0x18) & 0x8000000) != 0));
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(unaff_s0,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteGravitate(struct _Instance *instance /*$s1*/)
 // line 5037, offset 0x8006f460
	/* begin block 1 */
		// Start line: 5038
		// Start offset: 0x8006F460
		// Variables:
	// 		struct PhysObData *Data; // $s0
	// 		struct _Instance *Force; // $s4
	// 		struct _G2EulerAngles_Type ea; // stack offset -48
	// 		struct _Vector Position; // stack offset -40
	// 		struct _Model *model; // $s3
	// 		struct MATRIX *forceMatrix; // $s2
	// 		int scale; // $v1
	/* end block 1 */
	// End offset: 0x8006F7B4
	// End Line: 5154

	/* begin block 2 */
		// Start line: 11082
	/* end block 2 */
	// End Line: 11083

void ExecuteGravitate(_Instance *instance)

{
  uint *unaff_s0;
  int in_stack_00000024;
  
  gameTrackerX.instancePool._0_1_ = 0;
  if (in_stack_00000024 == 0) {
    *unaff_s0 = *unaff_s0 & 0xfffffeb5;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteFollow(struct _Instance *instance /*$a0*/)
 // line 5157, offset 0x8006f7d4
	/* begin block 1 */
		// Start line: 5159
		// Start offset: 0x8006F7D4
		// Variables:
	// 		struct PhysObData *Data; // $a1
	// 		struct _Instance *Force; // $a2
	/* end block 1 */
	// End offset: 0x8006F7D4
	// End Line: 5162

	/* begin block 2 */
		// Start line: 11364
	/* end block 2 */
	// End Line: 11365

	/* begin block 3 */
		// Start line: 11365
	/* end block 3 */
	// End Line: 11366

	/* begin block 4 */
		// Start line: 11368
	/* end block 4 */
	// End Line: 11369

void ExecuteFollow(_Instance *instance)

{
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s1 + 0x154) = 0;
  *(undefined4 *)(unaff_s1 + 0x158) = 0;
  *(undefined4 *)(unaff_s1 + 0x15c) = 0;
  *(undefined4 *)(unaff_s1 + 0x160) = 0;
  *(undefined4 *)(unaff_s1 + 0x164) = 0;
  *(undefined4 *)(unaff_s1 + 0x168) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_Normalize(struct _SVector *v /*$s0*/)
 // line 5179, offset 0x8006f82c
	/* begin block 1 */
		// Start line: 5180
		// Start offset: 0x8006F82C
		// Variables:
	// 		long len; // $a1
	/* end block 1 */
	// End offset: 0x8006F870
	// End Line: 5187

	/* begin block 2 */
		// Start line: 11408
	/* end block 2 */
	// End Line: 11409

void PHYSOB_Normalize(_SVector *v)

{
  int in_v0;
  int in_a1;
  int in_a2;
  
  v[0xb].z = *(short *)(in_v0 + 0x14) + *(short *)(in_a1 + 0xe);
  v[0xb].pad = *(short *)((int)*(short *)(in_a1 + 0x1a) * 0x20 + *(int *)(in_a2 + 0x40) + 0x18) +
               *(short *)(in_a1 + 0x10);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_MoveTowardsAlign(struct _Instance *instance /*$s2*/, struct _SVector *orgVec /*$s0*/, struct _SVector *endVec /*$s1*/)
 // line 5194, offset 0x8006f8c8
	/* begin block 1 */
		// Start line: 5195
		// Start offset: 0x8006F8C8
		// Variables:
	// 		struct MATRIX xform; // stack offset -104
	// 		struct MATRIX dest; // stack offset -72
	// 		struct MATRIX *src; // $s4
	// 		struct _G2Quat_Type rot; // stack offset -40
	// 		long len; // $s0
	// 		int theta; // $s1
	// 		int sintheta; // $v0
	// 		struct _G2EulerAngles_Type ea; // stack offset -32
	/* end block 1 */
	// End offset: 0x8006FAAC
	// End Line: 5239

	/* begin block 2 */
		// Start line: 11440
	/* end block 2 */
	// End Line: 11441

int PHYSOB_MoveTowardsAlign(_Instance *instance,_SVector *orgVec,_SVector *endVec)

{
  int in_v1;
  undefined2 *unaff_s0;
  int iVar1;
  
  iVar1 = ((int)(short)unaff_s0[2] << 0xc) / (int)orgVec;
  *unaff_s0 = (short)instance;
  unaff_s0[1] = (short)((in_v1 << 0xc) / (int)orgVec);
  unaff_s0[2] = (short)iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_ReAlignFalling(struct _Instance *instance /*$s5*/, int zEndOff /*$fp*/)
 // line 5257, offset 0x8006fba0
	/* begin block 1 */
		// Start line: 5258
		// Start offset: 0x8006FBA0
		// Variables:
	// 		struct _Model *model; // $s6
	// 		int i; // $s2
	// 		struct _Position seg0; // stack offset -208
	// 		struct _Position segn; // stack offset -200
	// 		struct _Position start0; // stack offset -192
	// 		struct _Position startn; // stack offset -184
	// 		int startFlg; // $s3
	// 		short zOff; // $s7

		/* begin block 1.1 */
			// Start line: 5309
			// Start offset: 0x8006FC08
			// Variables:
		// 		struct _PCollideInfo pcollideInfo; // stack offset -176
		// 		struct _Position newPos; // stack offset -128
		// 		struct _Position oldPos; // stack offset -120
		// 		short x; // $s1
		// 		short y; // $s0
		// 		struct MATRIX *mat; // $v0

			/* begin block 1.1.1 */
				// Start line: 5328
				// Start offset: 0x8006FC80
				// Variables:
			// 		short ax; // $a1
			// 		short ay; // $a2
			/* end block 1.1.1 */
			// End offset: 0x8006FD78
			// End Line: 5358

			/* begin block 1.1.2 */
				// Start line: 5366
				// Start offset: 0x8006FDA4
			/* end block 1.1.2 */
			// End offset: 0x8006FE90
			// End Line: 5394
		/* end block 1.1 */
		// End offset: 0x8006FE90
		// End Line: 5396

		/* begin block 1.2 */
			// Start line: 5403
			// Start offset: 0x8006FEAC
			// Variables:
		// 		short _x0; // $a3
		// 		short _y0; // $v0
		// 		short _z0; // $v1
		// 		short _x1; // $a1
		// 		short _y1; // $t0
		// 		short _z1; // $a2
		// 		struct _Position *_v; // $a0
		// 		struct _Position *_v1; // $a2
		/* end block 1.2 */
		// End offset: 0x8006FEAC
		// End Line: 5403

		/* begin block 1.3 */
			// Start line: 5403
			// Start offset: 0x8006FEAC
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a2
		// 		short _y1; // $t1
		// 		short _z1; // $t0
		// 		struct _Position *_v; // $a1
		// 		struct _Position *_v1; // $t0
		/* end block 1.3 */
		// End offset: 0x8006FEAC
		// End Line: 5403

		/* begin block 1.4 */
			// Start line: 5425
			// Start offset: 0x8006FFB4
			// Variables:
		// 		struct _PCollideInfo pcollideInfo; // stack offset -112
		// 		struct _Position newPos; // stack offset -64
		// 		struct _Position oldPos; // stack offset -56
		// 		struct _Position deltaPos; // stack offset -48
		// 		struct MATRIX *mat; // $a2
		/* end block 1.4 */
		// End offset: 0x80070058
		// End Line: 5481
	/* end block 1 */
	// End offset: 0x80070094
	// End Line: 5485

	/* begin block 2 */
		// Start line: 11588
	/* end block 2 */
	// End Line: 11589

int PHYSOB_ReAlignFalling(_Instance *instance,int zEndOff)

{
  undefined2 in_v0;
  int unaff_s1;
  int unaff_s2;
  undefined2 in_stack_0000005a;
  undefined2 in_stack_0000005c;
  
  *(undefined2 *)(unaff_s2 + 0x74) = in_v0;
  *(undefined2 *)(unaff_s2 + 0x76) = in_stack_0000005a;
  *(undefined2 *)(unaff_s2 + 0x78) = in_stack_0000005c;
  return (uint)(unaff_s1 < 0x14);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DropPhysOb(struct _Instance *instance /*$s1*/, int flags /*$s3*/)
 // line 5488, offset 0x800700c4
	/* begin block 1 */
		// Start line: 5489
		// Start offset: 0x800700C4
		// Variables:
	// 		struct PhysObData *Data; // $s0
	// 		struct _Instance *parent; // $s2
	/* end block 1 */
	// End offset: 0x80070190
	// End Line: 5549

	/* begin block 2 */
		// Start line: 12348
	/* end block 2 */
	// End Line: 12349

void DropPhysOb(_Instance *instance,int flags)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhysicalRelocateTune(struct Object *object /*$a0*/, long offset /*$a1*/)
 // line 5561, offset 0x800701c0
	/* begin block 1 */
		// Start line: 5563
		// Start offset: 0x800701C0
		// Variables:
	// 		struct PhysObWeaponProperties *properties; // $t0
	// 		struct _PhysObLight *pLight; // $v0

		/* begin block 1.1 */
			// Start line: 5580
			// Start offset: 0x8007023C
			// Variables:
		// 		struct PhysObInteractProperties *prop; // $a2
		// 		struct PhysObWeaponAttributes *weapon; // $a3
		/* end block 1.1 */
		// End offset: 0x800702B0
		// End Line: 5593

		/* begin block 1.2 */
			// Start line: 5595
			// Start offset: 0x800702C0
			// Variables:
		// 		struct __PhysObProjectileProperties *prop; // $a0

			/* begin block 1.2.1 */
				// Start line: 5601
				// Start offset: 0x800702E4
				// Variables:
			// 		int i; // $t0
			/* end block 1.2.1 */
			// End offset: 0x80070350
			// End Line: 5615
		/* end block 1.2 */
		// End offset: 0x80070350
		// End Line: 5616
	/* end block 1 */
	// End offset: 0x80070350
	// End Line: 5618

	/* begin block 2 */
		// Start line: 12498
	/* end block 2 */
	// End Line: 12499

	/* begin block 3 */
		// Start line: 12499
	/* end block 3 */
	// End Line: 12500

void PhysicalRelocateTune(Object *object,long offset)

{
  undefined4 in_v0;
  undefined4 *unaff_s0;
  int unaff_s1;
  
  *unaff_s0 = in_v0;
  *(undefined4 *)(unaff_s1 + 0x168) = 0xfffffff6;
  *(undefined4 *)(unaff_s1 + 0x154) = 0;
  *(undefined4 *)(unaff_s1 + 0x158) = 0;
  *(undefined4 *)(unaff_s1 + 0x15c) = 0;
  *(undefined4 *)(unaff_s1 + 0x160) = 0;
  *(undefined4 *)(unaff_s1 + 0x164) = 0;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOBS_CheckObjectAxisAlignment(struct MATRIX *m0 /*$a0*/, struct MATRIX *m1 /*$s1*/, struct _SVector *axis /*$s0*/)
 // line 5632, offset 0x80070358
	/* begin block 1 */
		// Start line: 5633
		// Start offset: 0x80070358
		// Variables:
	// 		struct VECTOR r0; // stack offset -64
	// 		struct VECTOR r1; // stack offset -48
	// 		struct _SVector v0; // stack offset -32
	// 		struct _SVector v1; // stack offset -24
	/* end block 1 */
	// End offset: 0x80070358
	// End Line: 5633

	/* begin block 2 */
		// Start line: 12646
	/* end block 2 */
	// End Line: 12647

int PHYSOBS_CheckObjectAxisAlignment(MATRIX *m0,MATRIX *m1,_SVector *axis)

{
  bool bVar1;
  int iVar2;
  int in_v0;
  int iVar3;
  int in_a3;
  int in_t0;
  
  do {
    iVar3 = in_a3;
    if (in_v0 != 0) {
      iVar3 = 0;
      if (*(int *)(in_v0 + 4) != 0) {
        iVar3 = (int)m1->m + *(int *)(in_v0 + 4);
      }
      *(int *)(in_v0 + 4) = iVar3;
      iVar3 = in_a3;
    }
    do {
      in_t0 = in_t0 + 1;
      bVar1 = in_t0 < *(int *)(m0->m + 4);
      in_a3 = iVar3 + 0xc;
      if (!bVar1) {
        return (uint)bVar1;
      }
      iVar2 = 0;
      if (*(int *)(iVar3 + 0x14) != 0) {
        iVar2 = (int)m1->m + *(int *)(iVar3 + 0x14);
      }
      *(int *)(iVar3 + 0x14) = iVar2;
      iVar3 = in_a3;
    } while (iVar2 == 0);
    in_v0 = *(int *)(iVar2 + 0x10);
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckSlide(struct _Instance *instance /*$s0*/, int x /*$a1*/, int y /*$a2*/, struct evPhysicsSlideData **data /*$s1*/)
 // line 5653, offset 0x80070428
	/* begin block 1 */
		// Start line: 12714
	/* end block 1 */
	// End Line: 12715

int PHYSOB_CheckSlide(_Instance *instance,int x,int y,evPhysicsSlideData **data)

{
  int in_t2;
  int in_t3;
  int in_lo;
  
  return (in_t3 + in_t2 + in_lo) * 0x10 >> 0x10;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckSlide2(struct _Instance *instance /*$s0*/, int x /*$a1*/, int y /*$a2*/, struct evPhysicsSlideData **data /*$s1*/)
 // line 5663, offset 0x800704b8
	/* begin block 1 */
		// Start line: 12736
	/* end block 1 */
	// End Line: 12737

int PHYSOB_CheckSlide2(_Instance *instance,int x,int y,evPhysicsSlideData **data)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s1;
  undefined4 uStack00000018;
  
  uStack00000018 = 0xffffff60;
  uVar1 = FUN_80070e04();
  *unaff_s1 = uVar1;
  iVar2 = FUN_80075e00();
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckDropOnSlope(struct _Instance *instance /*$s0*/, int x /*$a1*/, int y /*$a2*/, struct evPhysicsSlideData **data /*$s1*/)
 // line 5672, offset 0x80070548
	/* begin block 1 */
		// Start line: 12756
	/* end block 1 */
	// End Line: 12757

int PHYSOB_CheckDropOnSlope(_Instance *instance,int x,int y,evPhysicsSlideData **data)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s1;
  undefined4 uStack00000018;
  
  uStack00000018 = 0xffffff6a;
  uVar1 = FUN_80070e04();
  *unaff_s1 = uVar1;
  iVar2 = FUN_80075e00();
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PHYSOB_CheckSlideNormal(struct _Instance *instance /*$s0*/, int x /*stack 4*/, int y /*stack 8*/, struct evPhysicsSlideData **data /*$s1*/)
 // line 5682, offset 0x800705dc
	/* begin block 1 */
		// Start line: 12778
	/* end block 1 */
	// End Line: 12779

int PHYSOB_CheckSlideNormal(_Instance *instance,int x,int y,evPhysicsSlideData **data)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s1;
  undefined4 uStack00000018;
  
  uStack00000018 = 0xffffff60;
  uVar1 = FUN_80070e04();
  *unaff_s1 = uVar1;
  iVar2 = FUN_80075e00();
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PHYSOB_NormalToAxis(short *x /*$a0*/, short *y /*$a1*/)
 // line 5690, offset 0x80070630
	/* begin block 1 */
		// Start line: 5692
		// Start offset: 0x80070630
		// Variables:
	// 		int x1; // $v1
	// 		int y1; // $a2
	/* end block 1 */
	// End offset: 0x8007068C
	// End Line: 5706

	/* begin block 2 */
		// Start line: 12796
	/* end block 2 */
	// End Line: 12797

	/* begin block 3 */
		// Start line: 12797
	/* end block 3 */
	// End Line: 12798

void PHYSOB_NormalToAxis(short *x,short *y)

{
  short *psStack00000024;
  
  psStack00000024 = y;
  FUN_8007066c(x,&stack0x00000028);
  FUN_800704f4();
  return;
}





