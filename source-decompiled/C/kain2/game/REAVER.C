#include "THISDUST.H"
#include "REAVER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverInit(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 55, offset 0x80079d48
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x80079D48
		// Variables:
	// 		struct __ReaverData *data; // $v1
	/* end block 1 */
	// End offset: 0x80079DD0
	// End Line: 109

	/* begin block 2 */
		// Start line: 110
	/* end block 2 */
	// End Line: 111

void SoulReaverInit(_Instance *instance,GameTracker *gameTracker)

{
  int in_v1;
  int in_t0;
  short sVar1;
  int in_t1;
  int in_t4;
  int in_t5;
  int in_t7;
  int in_t8;
  int in_t9;
  
  sVar1 = (short)(in_t1 >> 0xc);
  if (gameTracker != (GameTracker *)0x0) {
    sVar1 = -sVar1;
  }
  *(undefined2 *)((int)&(instance->node).prev + in_v1) = (short)(in_t0 >> 0xc);
  *(short *)((int)&(instance->node).prev + in_t8) = sVar1;
  *(undefined2 *)((int)&(instance->node).prev + in_t9) = (short)(in_t4 >> 0xc);
  *(undefined2 *)((int)&(instance->node).next + 2) = (short)(in_t5 + in_t7 >> 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverCollide(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$a1*/)
 // line 114, offset 0x80079de8
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80079DE8
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s0
	// 		struct _HSphere *S; // $v0
	// 		struct _Instance *target; // $s3
	// 		struct __ReaverData *reaverData; // $v0

		/* begin block 1.1 */
			// Start line: 130
			// Start offset: 0x80079E54
			// Variables:
		// 		long type; // $s1
		/* end block 1.1 */
		// End offset: 0x80079F08
		// End Line: 203

		/* begin block 1.2 */
			// Start line: 229
			// Start offset: 0x80079F18
			// Variables:
		// 		struct _Instance *inst; // $v1
		/* end block 1.2 */
		// End offset: 0x80079F18
		// End Line: 229
	/* end block 1 */
	// End offset: 0x80079F3C
	// End Line: 236

	/* begin block 2 */
		// Start line: 292
	/* end block 2 */
	// End Line: 293

void SoulReaverCollide(_Instance *instance,GameTracker *gameTracker)

{
  undefined *in_v1;
  
  *(undefined4 *)(in_v1 + 8) = 0;
  *(undefined4 *)(in_v1 + 0xc) = 0;
  *in_v1 = 0;
  *(undefined2 *)(in_v1 + 2) = 0x1000;
  *(undefined2 *)(in_v1 + 6) = 0;
  *(undefined2 *)(in_v1 + 0x1c) = 0x1000;
  *(undefined2 *)(in_v1 + 0x1e) = 0x1000;
  FUN_8002482c();
  FUN_8004a5b8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverProcess(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 240, offset 0x80079f58
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80079F58
		// Variables:
	// 		struct __ReaverData *data; // $v0
	/* end block 1 */
	// End offset: 0x80079F8C
	// End Line: 248

	/* begin block 2 */
		// Start line: 555
	/* end block 2 */
	// End Line: 556

void SoulReaverProcess(_Instance *instance,GameTracker *gameTracker)

{
  int in_v1;
  
  *(uint *)(in_v1 + 0x14) = *(uint *)(in_v1 + 0x14) | 4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CollideReaverProjectile(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$s4*/)
 // line 256, offset 0x80079fa4
	/* begin block 1 */
		// Start line: 257
		// Start offset: 0x80079FA4
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s1
	// 		struct _Instance *target; // $s3
	// 		long type; // $s0
	// 		long reavType; // $a0

		/* begin block 1.1 */
			// Start line: 279
			// Start offset: 0x8007A01C
			// Variables:
		// 		struct Level *level; // $v1
		/* end block 1.1 */
		// End offset: 0x8007A04C
		// End Line: 288

		/* begin block 1.2 */
			// Start line: 342
			// Start offset: 0x8007A0B0
			// Variables:
		// 		struct _Instance *inst; // $v1
		/* end block 1.2 */
		// End offset: 0x8007A0B0
		// End Line: 342
	/* end block 1 */
	// End offset: 0x8007A0E0
	// End Line: 350

	/* begin block 2 */
		// Start line: 587
	/* end block 2 */
	// End Line: 588

void CollideReaverProjectile(_Instance *instance,GameTracker *gameTracker)

{
  char *in_v0;
  
  if (*in_v0 != '\0') {
    instance->currentStreamUnitID = *(long *)(loadStatus.bigFile.searchDirID + 0x38);
  }
  FUN_8007a730();
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SoulReaverQuery(struct _Instance *instance /*$a0*/, unsigned long query /*$a1*/)
 // line 354, offset 0x8007a100
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x8007A100

		/* begin block 1.1 */
			// Start line: 366
			// Start offset: 0x8007A148
			// Variables:
		// 		struct __ReaverData *reaverData; // $a0
		// 		unsigned long retval; // $v1
		/* end block 1.1 */
		// End offset: 0x8007A17C
		// End Line: 375
	/* end block 1 */
	// End offset: 0x8007A17C
	// End Line: 381

	/* begin block 2 */
		// Start line: 791
	/* end block 2 */
	// End Line: 792

	/* begin block 3 */
		// Start line: 793
	/* end block 3 */
	// End Line: 794

ulong SoulReaverQuery(_Instance *instance,ulong query)

{
  undefined4 in_v0;
  ulong uVar1;
  int in_v1;
  
  *(undefined4 *)(in_v1 + 0x14) = in_v0;
  uVar1 = FUN_8006d0ec();
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverImbue(struct _Instance *instance /*$a0*/, int number /*$a1*/)
 // line 383, offset 0x8007a184
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x8007A184
		// Variables:
	// 		long color; // $a1
	// 		struct __ReaverTuneData *tuneData; // $v0
	/* end block 1 */
	// End offset: 0x8007A184
	// End Line: 384

	/* begin block 2 */
		// Start line: 849
	/* end block 2 */
	// End Line: 850

void SoulReaverImbue(_Instance *instance,int number)

{
  if (*(char *)((int)instance->extraData + 1) != '\0') {
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverCharge(struct _Instance *instance /*$s2*/, struct __ReaverData *data /*$s0*/)
 // line 415, offset 0x8007a210
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x8007A210
		// Variables:
	// 		long color; // $v1
	// 		long shock; // $a0
	// 		struct __ReaverTuneData *tuneData; // $s1
	/* end block 1 */
	// End offset: 0x8007A31C
	// End Line: 461

	/* begin block 2 */
		// Start line: 922
	/* end block 2 */
	// End Line: 923

void SoulReaverCharge(_Instance *instance,__ReaverData *data)

{
  undefined4 uStack00000020;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  __ReaverData *p_Stack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  
  uStack00000020 = 0;
  uStack00000028 = 0;
  uStack0000002c = 0;
  uStack0000003c = 0;
  uStack00000040 = 0;
  p_Stack00000038 = data;
  FUN_8004b8e4(instance,&instance->position,instance->matrix);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StopSoulReaverCharge(struct __ReaverData *data /*$v0*/, struct _Instance *instance /*$s0*/)
 // line 463, offset 0x8007a334
	/* begin block 1 */
		// Start line: 1032
	/* end block 1 */
	// End Line: 1033

void StopSoulReaverCharge(__ReaverData *data,_Instance *instance)

{
  undefined4 uStack00000020;
  undefined4 uStack00000028;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  
  uStack00000020 = 0;
  uStack00000028 = 0;
  uStack0000003c = 0;
  uStack00000040 = 0;
  FUN_8004b8e4(data,instance,*(undefined4 *)&data[1].ReaverScale,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoulReaverPost(struct _Instance *instance /*$s1*/, unsigned long message /*$a1*/, unsigned long data /*$s3*/)
 // line 475, offset 0x8007a374
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x8007A374
		// Variables:
	// 		struct __ReaverData *reaverData; // $s0

		/* begin block 1.1 */
			// Start line: 526
			// Start offset: 0x8007A55C
			// Variables:
		// 		struct SVECTOR oldVector; // stack offset -40
		// 		struct SVECTOR startPos; // stack offset -32

			/* begin block 1.1.1 */
				// Start line: 530
				// Start offset: 0x8007A55C
				// Variables:
			// 		struct __ReaverData *reaverData; // $v0
			// 		struct evObjectBirthProjectileData *pData; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 570
					// Start offset: 0x8007A5F4
					// Variables:
				// 		short _x1; // $v1
				// 		short _y1; // $a0
				// 		short _z1; // $a2
				// 		struct _Position *_v0; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x8007A5F4
				// End Line: 570

				/* begin block 1.1.1.2 */
					// Start line: 570
					// Start offset: 0x8007A5F4
					// Variables:
				// 		short _x1; // $v1
				// 		short _y1; // $a0
				// 		short _z1; // $a1
				// 		struct _Position *_v0; // $v0
				/* end block 1.1.1.2 */
				// End offset: 0x8007A5F4
				// End Line: 570
			/* end block 1.1.1 */
			// End offset: 0x8007A5F4
			// End Line: 570
		/* end block 1.1 */
		// End offset: 0x8007A5F4
		// End Line: 570
	/* end block 1 */
	// End offset: 0x8007A6B4
	// End Line: 615

	/* begin block 2 */
		// Start line: 1059
	/* end block 2 */
	// End Line: 1060

void SoulReaverPost(_Instance *instance,ulong message,ulong data)

{
  instance->next = (_Instance *)0x0;
  instance->prev = (_Instance *)0x0;
  FUN_8003146c(0,0);
  FUN_8004d004(message);
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ REAVER_GetGlowColor(struct _Instance *instance /*$a0*/)
 // line 617, offset 0x8007a6d0
	/* begin block 1 */
		// Start line: 619
		// Start offset: 0x8007A6D0
		// Variables:
	// 		struct __ReaverTuneData *tuneData; // $v1
	// 		struct __ReaverData *data; // $v0
	/* end block 1 */
	// End offset: 0x8007A6D0
	// End Line: 623

	/* begin block 2 */
		// Start line: 1357
	/* end block 2 */
	// End Line: 1358

	/* begin block 3 */
		// Start line: 1358
	/* end block 3 */
	// End Line: 1359

	/* begin block 4 */
		// Start line: 1362
	/* end block 4 */
	// End Line: 1363

ulong REAVER_GetGlowColor(_Instance *instance)

{
  uint uVar1;
  int unaff_s1;
  
  uVar1 = *(uint *)(unaff_s1 + 0x14) & 0xfffff7ff;
  *(uint *)(unaff_s1 + 0x14) = uVar1;
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _SoulReaverAnimate(struct _Instance *instance /*$s2*/)
 // line 635, offset 0x8007a6f4
	/* begin block 1 */
		// Start line: 636
		// Start offset: 0x8007A6F4
		// Variables:
	// 		struct __ReaverData *data; // $s0
	// 		struct __ReaverTuneData *tuneData; // $s1
	/* end block 1 */
	// End offset: 0x8007A88C
	// End Line: 687

	/* begin block 2 */
		// Start line: 1398
	/* end block 2 */
	// End Line: 1399

void _SoulReaverAnimate(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SoulReaverFire()
 // line 690, offset 0x8007a8b0
	/* begin block 1 */
		// Start line: 1514
	/* end block 1 */
	// End Line: 1515

	/* begin block 2 */
		// Start line: 1515
	/* end block 2 */
	// End Line: 1516

/* WARNING: Unknown calling convention yet parameter storage is locked */

int SoulReaverFire(void)

{
  uint in_v0;
  int iVar1;
  uint in_v1;
  int unaff_s2;
  
  *(uint *)(unaff_s2 + 0x14) = in_v0 & in_v1;
  iVar1 = FUN_8007a24c();
  return iVar1;
}





