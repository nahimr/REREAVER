#include "THISDUST.H"
#include "GLYPH.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GlyphInit(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$a1*/)
 // line 126, offset 0x8007a8bc
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8007A8BC
		// Variables:
	// 		struct __GlyphData *data; // $s1
	/* end block 1 */
	// End offset: 0x8007A9A8
	// End Line: 170

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

void GlyphInit(_Instance *instance,GameTracker *gameTracker)

{
  uint in_v0;
  int unaff_s2;
  
  *(uint *)(unaff_s2 + 0x14) = in_v0 | 0x800;
  FUN_8007a24c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GlyphCollide(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 179, offset 0x8007a9d8
	/* begin block 1 */
		// Start line: 398
	/* end block 1 */
	// End Line: 399

	/* begin block 2 */
		// Start line: 400
	/* end block 2 */
	// End Line: 401

void GlyphCollide(_Instance *instance,GameTracker *gameTracker)

{
  undefined2 in_v0;
  uint in_v1;
  int unaff_s2;
  
  vramBlockList[79].area._0_2_ = in_v0;
  *(uint *)(unaff_s2 + 0x14) = in_v1 | (uint)instance;
  FUN_8007c258();
  vramBlockList[79].x = -0x40;
  vramBlockList[79].y = 0;
  vramBlockList[80]._8_4_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GlyphProcess(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 186, offset 0x8007a9e0
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x8007A9E0
		// Variables:
	// 		struct __GlyphData *data; // $v0
	/* end block 1 */
	// End offset: 0x8007A9E0
	// End Line: 187

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

void GlyphProcess(_Instance *instance,GameTracker *gameTracker)

{
  undefined4 in_v1;
  int unaff_s2;
  
  *(undefined4 *)(unaff_s2 + 0x14) = in_v1;
  FUN_8007c258();
  vramBlockList[79].x = -0x40;
  vramBlockList[79].y = 0;
  vramBlockList[80]._8_4_ = 0;
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GlyphQuery(struct _Instance *instance /*$a0*/, unsigned long query /*$a1*/)
 // line 216, offset 0x8007aa68
	/* begin block 1 */
		// Start line: 475
	/* end block 1 */
	// End Line: 476

	/* begin block 2 */
		// Start line: 476
	/* end block 2 */
	// End Line: 477

ulong GlyphQuery(_Instance *instance,ulong query)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x5c) = *(undefined4 *)(unaff_s0 + 100);
  *(undefined2 *)(unaff_s0 + 0x60) = *(undefined2 *)(unaff_s0 + 0x68);
  uVar2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x2c) + 0x38);
  uVar1 = *(uint *)(unaff_s0 + 0x14) | 0xc00;
  *(uint *)(unaff_s0 + 0x14) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x38) = uVar2;
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GlyphPost(struct _Instance *instance /*$a0*/, unsigned long message /*$a1*/, unsigned long messageData /*$a2*/)
 // line 233, offset 0x8007aa88
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8007AA88
		// Variables:
	// 		struct __GlyphData *data; // $a0
	/* end block 1 */
	// End offset: 0x8007AAAC
	// End Line: 251

	/* begin block 2 */
		// Start line: 509
	/* end block 2 */
	// End Line: 510

void GlyphPost(_Instance *instance,ulong message,ulong messageData)

{
  uint in_v0;
  undefined4 in_v1;
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 0x14) = in_v0 | 0xc00;
  *(undefined4 *)(unaff_s0 + 0x38) = in_v1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GlyphSwitchProcess(struct _Instance *instance /*$s1*/, TDRFuncPtr__GlyphSwitchProcess1process process /*$s3*/)
 // line 261, offset 0x8007aabc
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x8007AABC
		// Variables:
	// 		struct __GlyphData *data; // $s2
	/* end block 1 */
	// End offset: 0x8007AABC
	// End Line: 262

	/* begin block 2 */
		// Start line: 574
	/* end block 2 */
	// End Line: 575

void _GlyphSwitchProcess(_Instance *instance,TDRFuncPtr__GlyphSwitchProcess1process process)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GlyphIsGlyphOpen(struct _Instance *instance /*$a0*/)
 // line 282, offset 0x8007ab5c
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8007AB5C
		// Variables:
	// 		struct __GlyphData *data; // $v0
	/* end block 1 */
	// End offset: 0x8007AB5C
	// End Line: 287

	/* begin block 2 */
		// Start line: 620
	/* end block 2 */
	// End Line: 621

	/* begin block 3 */
		// Start line: 621
	/* end block 3 */
	// End Line: 622

	/* begin block 4 */
		// Start line: 624
	/* end block 4 */
	// End Line: 625

int GlyphIsGlyphOpen(_Instance *instance)

{
  int iVar1;
  uint in_a1;
  code **unaff_s2;
  code *unaff_s3;
  
  FUN_80070800(instance,in_a1 | 1,0);
  *unaff_s2 = unaff_s3;
  iVar1 = (*unaff_s3)();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ _GlyphIsGlyphSet(int glyph /*$s0*/)
 // line 295, offset 0x8007ab70
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x8007AB70
		// Variables:
	// 		unsigned long abilities; // $v1
	/* end block 1 */
	// End offset: 0x8007AB70
	// End Line: 296

	/* begin block 2 */
		// Start line: 646
	/* end block 2 */
	// End Line: 647

int _GlyphIsGlyphSet(int glyph)

{
  int iVar1;
  code **unaff_s2;
  code *unaff_s3;
  
  *unaff_s2 = unaff_s3;
  iVar1 = (*unaff_s3)();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ _GlyphIsGlyphUsable(int glyph /*$s0*/)
 // line 304, offset 0x8007abb4
	/* begin block 1 */
		// Start line: 673
	/* end block 1 */
	// End Line: 674

int _GlyphIsGlyphUsable(int glyph)

{
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(loadStatus.bigFile.searchDirID,0x24);
}



// decompiled code
// original method signature: 
// int /*$ra*/ _GlyphIsAnyGlyphSet()
 // line 308, offset 0x8007abf0
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x8007ABF0
		// Variables:
	// 		unsigned long abilities; // $v0
	/* end block 1 */
	// End offset: 0x8007ABF0
	// End Line: 309

	/* begin block 2 */
		// Start line: 682
	/* end block 2 */
	// End Line: 683

void _GlyphIsAnyGlyphSet(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(uGpffffb344,0x13);
}



// decompiled code
// original method signature: 
// int /*$ra*/ _GlyphCost(struct _GlyphTuneData *glyphtunedata /*$a0*/, int glyphNum /*$a1*/)
 // line 318, offset 0x8007ac20
	/* begin block 1 */
		// Start line: 708
	/* end block 1 */
	// End Line: 709

	/* begin block 2 */
		// Start line: 709
	/* end block 2 */
	// End Line: 710

int _GlyphCost(_GlyphTuneData *glyphtunedata,int glyphNum)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 & in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GlyphIsPuppetShowModeOn()
 // line 324, offset 0x8007ac30
	/* begin block 1 */
		// Start line: 720
	/* end block 1 */
	// End Line: 721

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GlyphIsPuppetShowModeOn(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(loadStatus.bigFile.searchDirID,0x24);
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GlyphDefaultProcess(struct _Instance *instance /*$s1*/, int data1 /*$a1*/, int data2 /*$a2*/)
 // line 336, offset 0x8007ac54
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8007AC54
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		struct __GlyphData *data; // $s0
	/* end block 1 */
	// End offset: 0x8007ACE0
	// End Line: 360

	/* begin block 2 */
		// Start line: 745
	/* end block 2 */
	// End Line: 746

void _GlyphDefaultProcess(_Instance *instance,int data1,int data2)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_GetPlayerScreenPt(struct DVECTOR *center /*$s0*/)
 // line 362, offset 0x8007acf8
	/* begin block 1 */
		// Start line: 363
		// Start offset: 0x8007ACF8
		// Variables:
	// 		struct _Position position; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007ACF8
	// End Line: 363

	/* begin block 2 */
		// Start line: 805
	/* end block 2 */
	// End Line: 806

void HUD_GetPlayerScreenPt(DVECTOR *center)

{
  int *piVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s2;
  
  do {
    FUN_8004021c(center);
    *(undefined2 *)(unaff_s0 + 0x8e) = 1;
    do {
      PurgeMessageQueue((__MessageQueue *)(unaff_s0 + 4));
      piVar1 = (int *)FUN_800707ac(unaff_s0 + 4);
      if (piVar1 == (int *)0x0) {
        return;
      }
    } while ((*piVar1 != unaff_s2) || (iVar2 = FUN_8007ac6c(), iVar2 != 0));
    FUN_8007aaf8();
    center = (DVECTOR *)((int)&DAT_00000010 + 1);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ GlyphDrawMenu(struct _Instance *instance /*stack 0*/)
 // line 380, offset 0x8007ad88
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x8007AD88
		// Variables:
	// 		struct _Position place; // stack offset -72
	// 		struct DVECTOR center; // stack offset -64
	// 		int n; // $s5
	// 		int rot; // $s3
	// 		int radius; // $s6
	// 		int glyph_rotation_speed; // $s0
	// 		int MANNA_Count; // $fp
	// 		struct __GlyphData *data; // $s4
	// 		struct _GlyphTuneData *glyphtunedata; // $s7

		/* begin block 1.1 */
			// Start line: 403
			// Start offset: 0x8007ADF4
			// Variables:
		// 		int diff; // $v0
		/* end block 1.1 */
		// End offset: 0x8007AE58
		// End Line: 419

		/* begin block 1.2 */
			// Start line: 430
			// Start offset: 0x8007AE88
			// Variables:
		// 		int enabled; // $v1
		// 		int scale_modify; // $s2
		// 		int num; // $s1
		/* end block 1.2 */
		// End offset: 0x8007AFC8
		// End Line: 472

		/* begin block 1.3 */
			// Start line: 481
			// Start offset: 0x8007B030
			// Variables:
		// 		struct _Vector f1; // stack offset -56
		/* end block 1.3 */
		// End offset: 0x8007B08C
		// End Line: 497

		/* begin block 1.4 */
			// Start line: 502
			// Start offset: 0x8007B08C
		/* end block 1.4 */
		// End offset: 0x8007B08C
		// End Line: 504
	/* end block 1 */
	// End offset: 0x8007B08C
	// End Line: 504

	/* begin block 2 */
		// Start line: 841
	/* end block 2 */
	// End Line: 842

	/* begin block 3 */
		// Start line: 857
	/* end block 3 */
	// End Line: 858

void GlyphDrawMenu(_Instance *instance)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  short in_v0;
  undefined4 *unaff_s0;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  
  in_stack_00000014 = in_stack_00000014 & 0xffff0000 | (uint)(ushort)(in_v0 + 0x1c0);
  setCopReg(2,in_zero,in_stack_00000010);
  setCopReg(2,in_at,in_stack_00000014);
  copFunction(2,0x180001);
  uVar1 = getCopReg(2,0xe);
  *unaff_s0 = uVar1;
  FUN_800bfccc();
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GlyphTime(int time /*$a0*/)
 // line 510, offset 0x8007b0ec
	/* begin block 1 */
		// Start line: 1238
	/* end block 1 */
	// End Line: 1239

	/* begin block 2 */
		// Start line: 1239
	/* end block 2 */
	// End Line: 1240

long GlyphTime(int time)

{
  uint in_v0;
  long lVar1;
  uint in_v1;
  uint in_a1;
  
  lVar1 = FUN_800461ec(time,in_v1 | in_a1 | in_v0);
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShrinkGlyphMenu(struct _Instance *instance /*$s1*/)
 // line 517, offset 0x8007b108
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x8007B108
		// Variables:
	// 		struct __GlyphData *data; // $s0
	// 		int time; // $a0
	// 		short accl; // stack offset -24
	/* end block 1 */
	// End offset: 0x8007B214
	// End Line: 556

	/* begin block 2 */
		// Start line: 1252
	/* end block 2 */
	// End Line: 1253

void ShrinkGlyphMenu(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ EnlargeGlyphMenu(struct _Instance *instance /*$s1*/)
 // line 559, offset 0x8007b22c
	/* begin block 1 */
		// Start line: 560
		// Start offset: 0x8007B22C
		// Variables:
	// 		struct __GlyphData *data; // $s0
	// 		int time; // $a1
	// 		short accl; // stack offset -24
	/* end block 1 */
	// End offset: 0x8007B2D4
	// End Line: 583

	/* begin block 2 */
		// Start line: 1351
	/* end block 2 */
	// End Line: 1352

void EnlargeGlyphMenu(_Instance *instance)

{
  int unaff_s0;
  
  FUN_80016d28();
  *(undefined2 *)(unaff_s0 + 0x8e) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GlyphOffProcess(struct _Instance *instance /*$s1*/, int data1 /*$s4*/, int data2 /*$s5*/)
 // line 596, offset 0x8007b328
	/* begin block 1 */
		// Start line: 597
		// Start offset: 0x8007B328
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		struct __GlyphData *data; // $s0
	/* end block 1 */
	// End offset: 0x8007B444
	// End Line: 634

	/* begin block 2 */
		// Start line: 1438
	/* end block 2 */
	// End Line: 1439

void _GlyphOffProcess(_Instance *instance,int data1,int data2)

{
  int unaff_s0;
  undefined4 uStack00000014;
  
  vramBlockList[80]._8_4_ = 0;
  uStack00000014 = 0xc;
  FUN_80016d28(instance,0x800d46dc,0x18,0x800d46de);
  *(undefined2 *)(unaff_s0 + 0x8e) = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GlyphSelectProcess(struct _Instance *instance /*$s3*/, int data1 /*$s6*/, int data2 /*$s7*/)
 // line 639, offset 0x8007b470
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x8007B470
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		struct __GlyphData *data; // $s1
	// 		struct _GlyphTuneData *glyphtunedata; // $s4
	// 		int dontdraw_flag; // $s2

		/* begin block 1.1 */
			// Start line: 712
			// Start offset: 0x8007B85C
			// Variables:
		// 		int MANNA_Count; // $s0
		/* end block 1.1 */
		// End offset: 0x8007B8B0
		// End Line: 721
	/* end block 1 */
	// End offset: 0x8007B93C
	// End Line: 751

	/* begin block 2 */
		// Start line: 1524
	/* end block 2 */
	// End Line: 1525

void _GlyphSelectProcess(_Instance *instance,int data1,int data2)

{
  FUN_8004021c(instance,0x7f,0x40,0);
  FUN_8007bf64();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Glyph_StartSpell(struct _Instance *instance /*$a0*/, int glyphnum /*$a1*/)
 // line 757, offset 0x8007b970
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x8007B970
		// Variables:
	// 		int message; // $a2
	/* end block 1 */
	// End offset: 0x8007B9F8
	// End Line: 791

	/* begin block 2 */
		// Start line: 1791
	/* end block 2 */
	// End Line: 1792

void Glyph_StartSpell(_Instance *instance,int glyphnum)

{
  FUN_8007b268();
  FUN_8007bf64();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Glyph_Broadcast(struct _Instance *sender /*$s6*/, int glyphnum /*$a1*/)
 // line 794, offset 0x8007ba18
	/* begin block 1 */
		// Start line: 795
		// Start offset: 0x8007BA18
		// Variables:
	// 		struct _Instance *instance; // $s2
	// 		int plane; // $s7
	// 		long whatAmIMask; // $s4
	// 		int Message; // $s3
	// 		int radius; // stack offset -48
	// 		int radius_old; // $fp
	// 		int range; // $s5

		/* begin block 1.1 */
			// Start line: 847
			// Start offset: 0x8007BB28
			// Variables:
		// 		int dist; // $s0
		// 		int old_dist; // $v0
		// 		int old_x; // $s0
		// 		int old_y; // $s1
		// 		int new_x; // $v0
		// 		int new_y; // $v1
		// 		long whatAmI; // $s0
		/* end block 1.1 */
		// End offset: 0x8007BC30
		// End Line: 878
	/* end block 1 */
	// End offset: 0x8007BC40
	// End Line: 879

	/* begin block 2 */
		// Start line: 1865
	/* end block 2 */
	// End Line: 1866

	/* begin block 3 */
		// Start line: 1875
	/* end block 3 */
	// End Line: 1876

void Glyph_Broadcast(_Instance *sender,int glyphnum)

{
  uint in_a2;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(loadStatus.bigFile.searchDirID,in_a2 | 1,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Glyph_DoSpell(struct _Instance *instance /*stack 0*/, int glyphnum /*$s1*/)
 // line 881, offset 0x8007bc70
	/* begin block 1 */
		// Start line: 882
		// Start offset: 0x8007BC70
		// Variables:
	// 		int fx_radius; // $fp
	// 		int fx_accl; // $v0
	// 		int fx_vel; // $s5
	// 		long fx_color; // $a3
	// 		int fx_height1; // $s7
	// 		int fx_height2; // $s6
	// 		int fx_height3; // $s4
	// 		int fx_rad2; // $s3
	// 		int fx_rad3; // $s2
	// 		int pred_offset; // $s0
	// 		int color_change_radius; // $s1
	// 		struct MATRIX mat; // stack offset -80
	// 		struct _GlyphTuneData *glyphtunedata; // $s0
	/* end block 1 */
	// End offset: 0x8007BED8
	// End Line: 981

	/* begin block 2 */
		// Start line: 2104
	/* end block 2 */
	// End Line: 2105

void Glyph_DoSpell(_Instance *instance,int glyphnum)

{
  int unaff_s2;
  
  if (unaff_s2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ Glyph_EndFX()
 // line 984, offset 0x8007bf14
	/* begin block 1 */
		// Start line: 2346
	/* end block 1 */
	// End Line: 2347

	/* begin block 2 */
		// Start line: 2347
	/* end block 2 */
	// End Line: 2348

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Glyph_EndFX(void)

{
  vramBlockList[80].next = (_BlockVramEntry *)((int)vramBlockList[80].next << 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Glyph_DoFX(struct _Instance *instance /*$a0*/)
 // line 991, offset 0x8007bf28
	/* begin block 1 */
		// Start line: 2358
	/* end block 1 */
	// End Line: 2359

	/* begin block 2 */
		// Start line: 2362
	/* end block 2 */
	// End Line: 2363

void Glyph_DoFX(_Instance *instance)

{
  int in_v0;
  
  vramBlockList[80].next = (_BlockVramEntry *)(in_v0 << 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GlyphGenericProcess(struct _Instance *instance /*$s2*/, int data1 /*$s3*/, int data2 /*$s4*/)
 // line 1024, offset 0x8007bfd8
	/* begin block 1 */
		// Start line: 1025
		// Start offset: 0x8007BFD8
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		struct __GlyphData *data; // $s1

		/* begin block 1.1 */
			// Start line: 1056
			// Start offset: 0x8007C0B0
			// Variables:
		// 		struct _GlyphTuneData *glyphtunedata; // $s0
		/* end block 1.1 */
		// End offset: 0x8007C0E8
		// End Line: 1062
	/* end block 1 */
	// End offset: 0x8007C0E8
	// End Line: 1064

	/* begin block 2 */
		// Start line: 2432
	/* end block 2 */
	// End Line: 2433

void _GlyphGenericProcess(_Instance *instance,int data1,int data2)

{
  int *piVar1;
  _FXBlastringEffect *p_Var2;
  int in_v1;
  
  p_Var2 = fx_blastring;
  if (in_v1 == 5) {
    piVar1 = &fx_blastring->height3;
    fx_blastring->height1 = fx_blastring->height1 + -0x3c;
    p_Var2->height3 = *piVar1 + 0x3c;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GlyphTrigger()
 // line 1067, offset 0x8007c110
	/* begin block 1 */
		// Start line: 2520
	/* end block 1 */
	// End Line: 2521

	/* begin block 2 */
		// Start line: 2521
	/* end block 2 */
	// End Line: 2522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GlyphTrigger(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(loadStatus.bigFile.searchDirID,&DAT_00040008);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MANNA_Pickup()
 // line 1084, offset 0x8007c12c
	/* begin block 1 */
		// Start line: 2554
	/* end block 1 */
	// End Line: 2555

	/* begin block 2 */
		// Start line: 2555
	/* end block 2 */
	// End Line: 2556

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MANNA_Pickup(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HEALTHU_Pickup(struct _Instance *instance /*$s0*/)
 // line 1090, offset 0x8007c148
	/* begin block 1 */
		// Start line: 2566
	/* end block 1 */
	// End Line: 2567

void HEALTHU_Pickup(_Instance *instance)

{
  if (fx_going == 0) {
    vramBlockList[79].h = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_Damp(short *val /*$v1*/, short target /*$a1*/, short *vel /*$a3*/, short max /*$a3*/)
 // line 1106, offset 0x8007c1d4
	/* begin block 1 */
		// Start line: 1107
		// Start offset: 0x8007C1D4
		// Variables:
	// 		short accl; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007C1D4
	// End Line: 1107

	/* begin block 2 */
		// Start line: 2601
	/* end block 2 */
	// End Line: 2602

void HUD_Damp(short *val,short target,short *vel,short max)

{
  short in_v0;
  
  _BlockVramEntry_ARRAY_800d4708[0].newX = 0;
  _BlockVramEntry_ARRAY_800d4708[0].time = 0;
  _BlockVramEntry_ARRAY_800d4708[0]._4_2_ = 0;
  _BlockVramEntry_ARRAY_800d4708[0].next._0_2_ = in_v0 + val[0xe];
  FUN_800342f8();
  HUD_Captured = 1;
  vramBlockList[80].area._0_2_ = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_Init()
 // line 1113, offset 0x8007c21c
	/* begin block 1 */
		// Start line: 2621
	/* end block 1 */
	// End Line: 2622

	/* begin block 2 */
		// Start line: 2627
	/* end block 2 */
	// End Line: 2628

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HUD_Init(void)

{
  short in_a3;
  int iStack00000014;
  
  iStack00000014 = (int)in_a3;
  FUN_80016d28(1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_Setup_Chit_Count(int chits /*$a0*/)
 // line 1128, offset 0x8007c254
	/* begin block 1 */
		// Start line: 2656
	/* end block 1 */
	// End Line: 2657

	/* begin block 2 */
		// Start line: 2658
	/* end block 2 */
	// End Line: 2659

void HUD_Setup_Chit_Count(int chits)

{
  vramBlockList[79].area._2_2_ = 0;
  vramBlockList[79].udata._0_2_ = 0;
  vramBlockList[80].x = 0;
  vramBlockList[80].y = 0;
  vramBlockList[80].w = -1000;
  vramBlockList[80].h = 0;
  vramBlockList[80].area._0_2_ = 0;
  vramBlockList[80].area._2_2_ = 0;
  _BlockVramEntry_ARRAY_800d4708[0]._12_4_ = 0;
  _BlockVramEntry_ARRAY_800d4708[0]._16_4_ = 0;
  _BlockVramEntry_ARRAY_800d4708[0].area = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_Update()
 // line 1134, offset 0x8007c28c
	/* begin block 1 */
		// Start line: 1135
		// Start offset: 0x8007C28C
		// Variables:
	// 		short accl; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007C4B0
	// End Line: 1220

	/* begin block 2 */
		// Start line: 2669
	/* end block 2 */
	// End Line: 2670

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HUD_Update(void)

{
  int in_a0;
  
  vramBlockList[79].area._2_2_ = (short)in_a0 + (short)(in_a0 / 5) * -5;
  vramBlockList[79].udata._0_2_ = (short)in_a0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HUD_Draw()
 // line 1231, offset 0x8007c4c0
	/* begin block 1 */
		// Start line: 1232
		// Start offset: 0x8007C4C0
		// Variables:
	// 		struct _SVector Rotation; // stack offset -80
	// 		struct _SVector Pos; // stack offset -72
	// 		struct _SVector offset; // stack offset -64
	// 		int n; // $s0

		/* begin block 1.1 */
			// Start line: 1238
			// Start offset: 0x8007C4F8
			// Variables:
		// 		struct DVECTOR center; // stack offset -56
		// 		int glow; // $a1
		// 		int left; // $t0
		// 		int right; // $s0
		/* end block 1.1 */
		// End offset: 0x8007C66C
		// End Line: 1276

		/* begin block 1.2 */
			// Start line: 1284
			// Start offset: 0x8007C690
			// Variables:
		// 		int oldx; // $s2
		// 		int oldy; // $s3
		// 		int MANNA_Count; // $s1
		// 		int MANNA_Max; // $s0
		/* end block 1.2 */
		// End offset: 0x8007C750
		// End Line: 1307

		/* begin block 1.3 */
			// Start line: 1313
			// Start offset: 0x8007C784
			// Variables:
		// 		struct _SVector targetPos; // stack offset -48
		// 		struct _SVector accl; // stack offset -40
		// 		struct _SVector HUD_Cap_Rot; // stack offset -32
		/* end block 1.3 */
		// End offset: 0x8007C85C
		// End Line: 1334

		/* begin block 1.4 */
			// Start line: 1345
			// Start offset: 0x8007C8C0
		/* end block 1.4 */
		// End offset: 0x8007C904
		// End Line: 1355
	/* end block 1 */
	// End offset: 0x8007C958
	// End Line: 1364

	/* begin block 2 */
		// Start line: 2880
	/* end block 2 */
	// End Line: 2881

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HUD_Draw(void)

{
  FUN_8007c210(0x800d46fc,0xfffffc18,0x800d46fe,0x60);
  if (vramBlockList[80].w < -999) {
    vramBlockList[80].area._0_2_ = 0;
  }
  return;
}





