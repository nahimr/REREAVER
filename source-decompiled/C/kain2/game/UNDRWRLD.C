#include "THISDUST.H"
#include "UNDRWRLD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_StartProcess()
 // line 66, offset 0x800b4b90
	/* begin block 1 */
		// Start line: 132
	/* end block 1 */
	// End Line: 133

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UNDERWORLD_StartProcess(void)

{
  short in_v0;
  short in_a1;
  int unaff_s1;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  short sStack00000022;
  
  sStack00000022 = in_a1 + in_v0 + -10;
  if (unaff_s6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_800bcddc();
  }
  if (unaff_s6 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_800bcddc();
  }
  if (unaff_s7 <= unaff_s1 + 1) {
    do {
      unaff_s4 = unaff_s4 + 1;
      if (1 < unaff_s4) {
        return;
      }
    } while (unaff_s7 < 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bcddc();
}



// decompiled code
// original method signature: 
// long /*$ra*/ UNDERWORLD_RotateScreenStep(long time /*$s1*/)
 // line 93, offset 0x800b4c14
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x800B4C14
		// Variables:
	// 		int row; // $t2
	// 		int col; // $a3
	// 		int sinAngle; // $s0
	// 		int cosAngle; // $t3
	// 		int hx; // $v1
	// 		int hy; // $v0

		/* begin block 1.1 */
			// Start line: 109
			// Start offset: 0x800B4C74
			// Variables:
		// 		struct UW_ScreenXY *p; // $a0
		// 		int scaleY; // $t0
		/* end block 1.1 */
		// End offset: 0x800B4C74
		// End Line: 109
	/* end block 1 */
	// End offset: 0x800B4D68
	// End Line: 132

	/* begin block 2 */
		// Start line: 186
	/* end block 2 */
	// End Line: 187

	/* begin block 3 */
		// Start line: 192
	/* end block 3 */
	// End Line: 193

long UNDERWORLD_RotateScreenStep(long time)

{
  undefined4 in_a1;
  int unaff_s1;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  undefined *puStack00000010;
  undefined2 uStack0000002c;
  
  puStack00000010 = &stack0x00000030;
  uStack0000002c = 0;
  FUN_8004603c(time,in_a1,&stack0x00000028,*(undefined4 *)(unaff_s5 + 0x38));
  if (unaff_s7 <= unaff_s1 + 1) {
    do {
      unaff_s4 = unaff_s4 + 1;
      if (unaff_s4 >= 2) {
        return (uint)(unaff_s4 < 2);
      }
    } while (unaff_s7 < 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bcddc();
}



// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_DoUV(unsigned char *uv /*$a0*/, struct UW_ScreenXY *p0 /*$a1*/, int tx /*$a2*/)
 // line 168, offset 0x800b4d80
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800B4D80
		// Variables:
	// 		int u; // $v1
	/* end block 1 */
	// End offset: 0x800B4DC4
	// End Line: 180

	/* begin block 2 */
		// Start line: 371
	/* end block 2 */
	// End Line: 372

	/* begin block 3 */
		// Start line: 372
	/* end block 3 */
	// End Line: 373

void UNDERWORLD_DoUV(uchar *uv,UW_ScreenXY *p0,int tx)

{
  if (((uchar *)draw[1].dr_env.code[7] != uv) && (razInterpInfo._0_4_ != 0)) {
    FUN_800790d4(PlayerData);
                    /* WARNING: Subroutine does not return */
    FUN_80079104(PlayerData);
  }
  return;
}



// decompiled code
// original method signature: 
// struct POLY_GT3 * /*$ra*/ UNDERWORLD_Poly(struct POLY_GT3 *last /*$s4*/, struct UW_ScreenXY *p0 /*$a1*/, struct UW_ScreenXY *p1 /*$s3*/, struct UW_ScreenXY *p2 /*$s2*/, int drawY /*stack 16*/)
 // line 182, offset 0x800b4dcc
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x800B4DCC
		// Variables:
	// 		int tx; // $s0
	// 		struct POLY_GT3 *poly; // $s1
	// 		int col; // $v1
	/* end block 1 */
	// End offset: 0x800B4E54
	// End Line: 188

	/* begin block 2 */
		// Start line: 399
	/* end block 2 */
	// End Line: 400

POLY_GT3 * UNDERWORLD_Poly(POLY_GT3 *last,UW_ScreenXY *p0,UW_ScreenXY *p1,UW_ScreenXY *p2,int drawY)

{
  UW_ScreenXY *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UW_ScreenXY *pUVar5;
  int iVar6;
  int in_t2;
  int iVar7;
  int in_t3;
  int unaff_s0;
  POLY_GT3 *unaff_s1;
  
  iVar2 = razInterpInfo._0_4_;
  pUVar1 = ScreenMorphArray;
  iVar7 = in_t2;
  do {
    iVar6 = 0;
    iVar3 = in_t2;
    do {
      pUVar5 = pUVar1 + iVar3;
      iVar4 = (int)pUVar5->sx + -0x100;
      iVar3 = (int)pUVar5->sy + -0x78;
      iVar6 = iVar6 + 1;
      pUVar5->dx = (short)((iVar4 * in_t3 - iVar3 * unaff_s0 >> 0xc) * iVar2 >> 0xc) + 0x100;
      pUVar5->dy = (short)((iVar4 * unaff_s0 + iVar3 * in_t3 >> 0xc) * iVar2 >> 0xc) + 0x78;
      iVar3 = iVar6 + in_t2;
    } while (iVar6 < 3);
    iVar7 = iVar7 + 1;
    in_t2 = in_t2 + 3;
  } while (iVar7 < 3);
  razInterpInfo._0_4_ = (int)&(razInterpInfo.alphaTable)->size + razInterpInfo._0_4_;
  PlayerData = (RazielData *)
               ((int)&(razInterpInfo.stateBlockList)->next + (int)&PlayerData->version & 0xfff);
  if (razInterpInfo._0_4_ < 0) {
    razInterpInfo._0_4_ = 0;
  }
  FUN_800b50b0(*(undefined4 *)(loadStatus.changeDir + 4),(loadStatus.compEndBytes ^ 1U) << 8);
  return unaff_s1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_DisplayFrame(long *primStart /*$a0*/, long drawY /*$s7*/)
 // line 229, offset 0x800b4f44
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x800B4F44
		// Variables:
	// 		long row; // $s5
	// 		long col; // $s0
	// 		long d; // $v0
	// 		struct UW_ScreenXY *p0; // $s2
	// 		struct UW_ScreenXY *p1; // $s1
	// 		struct UW_ScreenXY *p2; // $s3
	// 		struct UW_ScreenXY *p3; // $s4
	// 		struct POLY_GT3 *poly; // $a1
	// 		struct POLY_GT3 *terminator; // $fp
	/* end block 1 */
	// End offset: 0x800B5050
	// End Line: 274

	/* begin block 2 */
		// Start line: 535
	/* end block 2 */
	// End Line: 536

void UNDERWORLD_DisplayFrame(long *primStart,long drawY)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *in_a2;
  short *in_a3;
  uint uVar4;
  uint unaff_s4;
  undefined4 in_stack_00000038;
  
  uVar1 = *(ushort *)drawY;
  if ((int)*(short *)drawY < (int)(short)*in_a2) {
    iVar3 = (int)*in_a3 << 0x10;
    if ((int)*in_a3 <= (int)*(short *)drawY) goto LAB_800b4fbc;
  }
  else {
    iVar3 = (int)*in_a3 << 0x10;
    uVar1 = *in_a2;
    if ((int)*in_a3 <= (int)(short)*in_a2) goto LAB_800b4fbc;
  }
  iVar3 = (uint)uVar1 << 0x10;
LAB_800b4fbc:
  uVar4 = iVar3 >> 0x10 & 0xffffffc0;
  *(undefined *)(unaff_s4 + 0x2b) = 9;
  *(undefined *)(unaff_s4 + 0x2f) = 0x34;
  *(undefined4 *)(unaff_s4 + 0x30) = *(undefined4 *)(drawY + 4);
  *(undefined4 *)(unaff_s4 + 0x3c) = *(undefined4 *)(in_a2 + 2);
  *(undefined4 *)(unaff_s4 + 0x48) = *(undefined4 *)(in_a3 + 2);
  FUN_800b4eec(unaff_s4 + 0x34,drawY,uVar4);
  FUN_800b4eec(unaff_s4 + 0x40);
  FUN_800b4eec(unaff_s4 + 0x4c);
  uVar2 = FUN_800bfbe8(2,1,uVar4,in_stack_00000038);
  *(undefined2 *)(unaff_s4 + 0x42) = uVar2;
  *(undefined *)(unaff_s4 + 0x2c) = 0x10;
  *(undefined *)(unaff_s4 + 0x2d) = 0x10;
  *(undefined *)(unaff_s4 + 0x2e) = 0x10;
  *(undefined *)(unaff_s4 + 0x38) = 0x10;
  *(undefined *)(unaff_s4 + 0x39) = 0x10;
  *(undefined *)(unaff_s4 + 0x3a) = 0x10;
  *(undefined *)(unaff_s4 + 0x44) = 0x10;
  *(undefined *)(unaff_s4 + 0x45) = 0x10;
  *(undefined *)(unaff_s4 + 0x46) = 0x10;
  *(uint *)(unaff_s4 + 0x28) = *(uint *)(unaff_s4 + 0x28) & 0xff000000 | unaff_s4 & 0xffffff;
  *(byte *)(unaff_s4 + 0x2f) = *(byte *)(unaff_s4 + 0x2f) | 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_SetupSource()
 // line 279, offset 0x800b509c
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x800B509C
		// Variables:
	// 		struct RECT rect; // stack offset -32
	// 		struct DR_STP stp; // stack offset -24
	/* end block 1 */
	// End offset: 0x800B509C
	// End Line: 280

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UNDERWORLD_SetupSource(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_InitDisplayProcess()
 // line 302, offset 0x800b5148
	/* begin block 1 */
		// Start line: 304
		// Start offset: 0x800B5150
		// Variables:
	// 		int row; // $t0
	// 		int col; // $a1

		/* begin block 1.1 */
			// Start line: 313
			// Start offset: 0x800B51A0
			// Variables:
		// 		struct UW_ScreenXY *p; // $v0
		/* end block 1.1 */
		// End offset: 0x800B51A0
		// End Line: 313
	/* end block 1 */
	// End offset: 0x800B51D4
	// End Line: 321

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UNDERWORLD_InitDisplayProcess(void)

{
  undefined4 uVar1;
  int iVar2;
  UW_ScreenXY *pUVar3;
  int unaff_s0;
  UW_ScreenXY *unaff_s1;
  UW_ScreenXY *unaff_s3;
  UW_ScreenXY *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *unaff_s8;
  
  do {
    pUVar3 = unaff_s1;
    uVar1 = FUN_800b4f38();
    while( true ) {
      uVar1 = FUN_800b4f38(uVar1,pUVar3,unaff_s3,unaff_s4);
      unaff_s0 = unaff_s0 + 1;
      iVar2 = unaff_s6 + unaff_s0;
      if (1 < unaff_s0) {
        unaff_s5 = unaff_s5 + 1;
        iVar2 = unaff_s6 + 3;
        if (1 < unaff_s5) {
          *unaff_s8 = *unaff_s8 | 0xffffff;
          FUN_800bad64(uVar1);
          return;
        }
        unaff_s0 = 0;
        unaff_s6 = iVar2;
      }
      pUVar3 = ScreenMorphArray + iVar2;
      unaff_s1 = ScreenMorphArray + iVar2 + 1;
      unaff_s3 = ScreenMorphArray + iVar2 + 4;
      unaff_s4 = ScreenMorphArray + iVar2 + 3;
      if (((unaff_s5 < 1) && (1 < unaff_s0)) || ((1 < unaff_s5 && (unaff_s0 < 1)))) break;
      uVar1 = FUN_800b4f38(uVar1,pUVar3,unaff_s1,unaff_s3);
    }
  } while( true );
}



// decompiled code
// original method signature: 
// struct _StreamUnit * /*$ra*/ UNDERWORLD_LoadLevel(char *baseAreaName /*$s0*/, struct GameTracker *gameTracker /*$s4*/)
 // line 331, offset 0x800b5208
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x800B5208
		// Variables:
	// 		struct _SVector offset; // stack offset -72
	// 		struct _StreamUnit *streamUnit; // $s3
	// 		long i; // $s1
	// 		long UW_time; // $s2

		/* begin block 1.1 */
			// Start line: 368
			// Start offset: 0x800B52B8
			// Variables:
		// 		short _x1; // $v1
		// 		short _y1; // $a0
		// 		short _z1; // $a1
		// 		struct _SVector *_v0; // $v0
		// 		struct _Position *_v1; // $v0
		/* end block 1.1 */
		// End offset: 0x800B52B8
		// End Line: 368

		/* begin block 1.2 */
			// Start line: 419
			// Start offset: 0x800B5444
			// Variables:
		// 		struct POLY_F4 poly; // stack offset -64
		// 		struct DR_TPAGE tpage; // stack offset -40
		/* end block 1.2 */
		// End offset: 0x800B54D0
		// End Line: 439
	/* end block 1 */
	// End offset: 0x800B54D0
	// End Line: 452

	/* begin block 2 */
		// Start line: 830
	/* end block 2 */
	// End Line: 831

void UNDERWORLD_LoadLevel(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined auStack24 [16];
  
  FUN_800c0bb8(auStack24,1);
  FUN_800bad08(auStack24);
  local_1c = 0x200;
  local_20 = 0;
  local_1a = 0xf0;
  local_1e = (undefined2)(uGpffffb31c << 8);
  FUN_800baba4(&local_20,0,(uGpffffb31c ^ 1) << 8);
  FUN_800c0bb8(auStack24,0);
  FUN_800bad08(auStack24);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UNDERWORLD_UpdatePlayer(struct Intro *playerIntro /*$a0*/, struct _Instance *instance /*$a2*/)
 // line 461, offset 0x800b5500
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x800B5500
		// Variables:
	// 		struct _SVector offset; // stack offset -16

		/* begin block 1.1 */
			// Start line: 462
			// Start offset: 0x800B5500
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a0
		// 		short _x1; // $a1
		// 		short _y1; // $t0
		// 		short _z1; // $a3
		// 		struct _SVector *_v; // $a1
		// 		struct _Position *_v0; // $a1
		// 		struct _Position *_v1; // $a3
		/* end block 1.1 */
		// End offset: 0x800B5500
		// End Line: 462
	/* end block 1 */
	// End offset: 0x800B5500
	// End Line: 462

	/* begin block 2 */
		// Start line: 1127
	/* end block 2 */
	// End Line: 1128

void UNDERWORLD_UpdatePlayer(Intro *playerIntro,_Instance *instance)

{
  uint in_v0;
  uchar *uv;
  uchar *puVar1;
  int in_v1;
  UW_ScreenXY *p0;
  int tx;
  int unaff_s1;
  int iVar2;
  uchar *uv_00;
  int unaff_s3;
  int unaff_s4;
  undefined uStack0000001b;
  undefined uStack0000001c;
  undefined uStack0000001d;
  undefined uStack0000001e;
  undefined uStack0000001f;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  undefined2 uStack00000026;
  undefined2 uStack00000028;
  undefined2 uStack0000002a;
  undefined2 uStack0000002c;
  undefined2 uStack0000002e;
  undefined uStack00000033;
  undefined4 uStack00000034;
  
  *(uint *)(in_v1 + 0x2c) = in_v0 | 8;
  *(undefined4 *)(loadStatus.bigFile.searchDirID + 0x38) = *(undefined4 *)(unaff_s4 + 0x178);
  p0 = (UW_ScreenXY *)loadStatus.bigFile.searchDirID;
  uv = (uchar *)FUN_800b566c(*(int *)(*(int *)(unaff_s3 + 8) + 0x7c) + unaff_s1 * 0x4c);
  UNDERWORLD_DoUV(uv_00,p0,tx);
  p0 = (UW_ScreenXY *)&stack0x00000010;
  FUN_8005b490();
  fontTracker.font_buffer[192].x = *(short *)(unaff_s4 + 0x178);
  *(undefined2 *)(unaff_s4 + 0xd0) = 10;
  *(undefined2 *)(unaff_s4 + 0xce) = 0x1e;
  *(undefined2 *)(unaff_s4 + 0xcc) = 0x1e;
  while (puVar1 = (uchar *)FUN_8005fd78(), puVar1 != (uchar *)0x0) {
    UNDERWORLD_DoUV(uv,p0,tx);
    uv = puVar1;
  }
  iVar2 = 0;
  uStack00000033 = 1;
  uStack0000001b = 5;
  uStack00000034 = 0xe1000740;
  uStack0000002a = 0xf0;
  uStack0000002e = 0xf0;
  uStack0000001c = 8;
  uStack0000001d = 8;
  uStack0000001e = 8;
  uStack00000020 = 0;
  uStack00000022 = 0;
  uStack00000024 = 0x200;
  uStack00000026 = 0;
  uStack00000028 = 0;
  uStack0000002c = 0x200;
  uStack0000001f = 0x2a;
  do {
    FUN_800bce6c(0);
    FUN_800bad08(&stack0x00000030);
    FUN_800bad08(&stack0x00000018);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1e);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}





