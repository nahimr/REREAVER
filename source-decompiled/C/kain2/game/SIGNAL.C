#include "THISDUST.H"
#include "SIGNAL.H"


// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleLightGroup(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 76, offset 0x8001d840
	/* begin block 1 */
		// Start line: 152
	/* end block 1 */
	// End Line: 153

	/* begin block 2 */
		// Start line: 153
	/* end block 2 */
	// End Line: 154

long SIGNAL_HandleLightGroup(_Instance *instance,Signal *signal)

{
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraAdjust(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 85, offset 0x8001d85c
	/* begin block 1 */
		// Start line: 170
	/* end block 1 */
	// End Line: 171

long SIGNAL_HandleCameraAdjust(_Instance *instance,Signal *signal)

{
  FUN_80016908(&standardMenu,*(undefined4 *)signal->data);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCamera(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 91, offset 0x8001d884
	/* begin block 1 */
		// Start line: 182
	/* end block 1 */
	// End Line: 183

long SIGNAL_HandleCamera(_Instance *instance,Signal *signal)

{
  FUN_8001691c(&standardMenu,*(undefined4 *)signal->data);
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SIGNAL_RelocateCamera(struct Signal *signal /*$a0*/, long offset /*$a1*/)
 // line 97, offset 0x8001d8ac
	/* begin block 1 */
		// Start line: 194
	/* end block 1 */
	// End Line: 195

	/* begin block 2 */
		// Start line: 195
	/* end block 2 */
	// End Line: 196

void SIGNAL_RelocateCamera(Signal *signal,long offset)

{
  FUN_80016930(&standardMenu,*(undefined4 *)(offset + 4));
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraMode(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 102, offset 0x8001d8c8
	/* begin block 1 */
		// Start line: 204
	/* end block 1 */
	// End Line: 205

long SIGNAL_HandleCameraMode(_Instance *instance,Signal *signal)

{
  FUN_80016980(&standardMenu,*(undefined4 *)signal->data);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraLock(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 110, offset 0x8001d8f0
	/* begin block 1 */
		// Start line: 220
	/* end block 1 */
	// End Line: 221

long SIGNAL_HandleCameraLock(_Instance *instance,Signal *signal)

{
  FUN_800153fc(&standardMenu,*(undefined4 *)signal->data);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraUnlock(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 116, offset 0x8001d918
	/* begin block 1 */
		// Start line: 232
	/* end block 1 */
	// End Line: 233

long SIGNAL_HandleCameraUnlock(_Instance *instance,Signal *signal)

{
  FUN_800154cc(&standardMenu,*(undefined4 *)signal->data);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraSmooth(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 122, offset 0x8001d940
	/* begin block 1 */
		// Start line: 244
	/* end block 1 */
	// End Line: 245

long SIGNAL_HandleCameraSmooth(_Instance *instance,Signal *signal)

{
  FUN_80015e6c(&standardMenu,*(undefined4 *)signal->data,*(undefined4 *)(signal->data + 4));
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraTimer(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 128, offset 0x8001d968
	/* begin block 1 */
		// Start line: 256
	/* end block 1 */
	// End Line: 257

long SIGNAL_HandleCameraTimer(_Instance *instance,Signal *signal)

{
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraSave(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 134, offset 0x8001d990
	/* begin block 1 */
		// Start line: 268
	/* end block 1 */
	// End Line: 269

long SIGNAL_HandleCameraSave(_Instance *instance,Signal *signal)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s4;
  undefined2 unaff_s5;
  
  bVar1 = false;
  FUN_800bd564(&stack0x00000010,unaff_s4 + 0xc);
  puVar2 = (undefined *)FUN_800bd524(&stack0x00000010,0x2c);
  if (puVar2 != (undefined *)0x0) {
    unaff_s5 = FUN_80074578(puVar2 + 1);
    *puVar2 = 0;
  }
  iVar3 = FUN_80074604(&stack0x00000010,0x800ce1ec);
  if (iVar3 == 0) {
    iVar3 = FUN_80059398(*(undefined4 *)(unaff_s2 + 0x38));
    if ((uint)(gameTrackerX.controlCommand[0][1] - iRam800cdfa4) < 0x65) {
      return 1;
    }
    if ((*(ushort *)(iVar3 + 6) & 8) == 0) {
      return 1;
    }
    iVar3 = (WarpRoomArray[CurrentWarpNumber].streamUnit)->StreamUnitID;
    FUN_800bd564(&stack0x00000010);
    bVar1 = true;
    if (WarpRoomArray[CurrentWarpNumber].streamUnit == (_StreamUnit *)0x0) {
      return 1;
    }
    if (((WarpRoomArray[CurrentWarpNumber].streamUnit)->flags & 8U) == 0) {
      return 1;
    }
  }
  else {
    iVar3 = *(int *)(unaff_s4 + 8);
  }
  if (*(int *)(unaff_s2 + 0x38) != iVar3) {
    if (unaff_s2 == loadStatus.bigFile.searchDirID) {
      BmenuLines[2].textureW = 1;
      iRam800cdfa4 = gameTrackerX.controlCommand[0][1];
      FUN_800bd564(0x800d0f4c,&stack0x00000010);
      uRam800d0f5e = *(undefined2 *)(unaff_s4 + 4);
      if (bVar1) {
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar3;
        if ((loadStatus.decompressLen._2_2_ == 0) &&
           (uRam800d0f5c = unaff_s5, DAT_800d0f6c = iVar3,
           iVar3 = FUN_80074604(&stack0x00000010,0x800ce1f8), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_80034368(loadStatus.bigFile.searchDirID,0x10002001,0);
        }
        BmenuLines[2].textureH = FUN_8005ae28(0x800d0f28);
      }
      else {
        BmenuLines[2].textureH = -1;
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar3;
      }
    }
    else {
      if (*(int *)(unaff_s2 + 300) == 0) {
        iVar4 = FUN_80059340(iVar3);
        if (iVar4 == 0) {
          FUN_80059340(*(undefined4 *)(unaff_s2 + 0x38));
          FUN_800b6590();
          *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 0x20;
        }
        else {
          *(undefined2 *)(unaff_s2 + 200) = 0xffff;
          *(undefined4 *)(unaff_s2 + 0xcc) = 0;
          *(int *)(unaff_s2 + 0x38) = iVar3;
          FUN_80035498();
        }
      }
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraRestore(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 140, offset 0x8001d9b8
	/* begin block 1 */
		// Start line: 280
	/* end block 1 */
	// End Line: 281

long SIGNAL_HandleCameraRestore(_Instance *instance,Signal *signal)

{
  undefined *in_v0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  
  if (in_v0 != (undefined *)0x0) {
    unaff_s5 = FUN_80074578(in_v0 + 1,0x2c);
    *in_v0 = 0;
  }
  iVar1 = FUN_80074604(&stack0x00000010,0x800ce1ec);
  if (iVar1 == 0) {
    iVar1 = FUN_80059398(*(undefined4 *)(unaff_s2 + 0x38));
    if ((uint)(gameTrackerX.controlCommand[0][1] - iRam800cdfa4) < 0x65) {
      return 1;
    }
    if ((*(ushort *)(iVar1 + 6) & 8) == 0) {
      return 1;
    }
    iVar1 = (WarpRoomArray[CurrentWarpNumber].streamUnit)->StreamUnitID;
    FUN_800bd564(&stack0x00000010);
    unaff_s3 = 1;
    if (WarpRoomArray[CurrentWarpNumber].streamUnit == (_StreamUnit *)0x0) {
      return 1;
    }
    if (((WarpRoomArray[CurrentWarpNumber].streamUnit)->flags & 8U) == 0) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(unaff_s4 + 8);
  }
  if (*(int *)(unaff_s2 + 0x38) != iVar1) {
    if (unaff_s2 == loadStatus.bigFile.searchDirID) {
      BmenuLines[2].textureW = 1;
      iRam800cdfa4 = gameTrackerX.controlCommand[0][1];
      FUN_800bd564(0x800d0f4c,&stack0x00000010);
      uRam800d0f5e = *(undefined2 *)(unaff_s4 + 4);
      if (unaff_s3 == 0) {
        BmenuLines[2].textureH = -1;
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar1;
      }
      else {
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar1;
        if ((loadStatus.decompressLen._2_2_ == 0) &&
           (uRam800d0f5c = unaff_s5, DAT_800d0f6c = iVar1,
           iVar1 = FUN_80074604(&stack0x00000010,0x800ce1f8), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_80034368(loadStatus.bigFile.searchDirID,0x10002001,0);
        }
        BmenuLines[2].textureH = FUN_8005ae28(0x800d0f28);
      }
    }
    else {
      if (*(int *)(unaff_s2 + 300) == 0) {
        iVar2 = FUN_80059340(iVar1);
        if (iVar2 == 0) {
          FUN_80059340(*(undefined4 *)(unaff_s2 + 0x38));
          FUN_800b6590();
          *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 0x20;
        }
        else {
          *(undefined2 *)(unaff_s2 + 200) = 0xffff;
          *(undefined4 *)(unaff_s2 + 0xcc) = 0;
          *(int *)(unaff_s2 + 0x38) = iVar1;
          FUN_80035498();
        }
      }
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraValue(struct _Instance *instance /*$a0*/, struct Signal *signal /*$v0*/)
 // line 146, offset 0x8001d9e0
	/* begin block 1 */
		// Start line: 292
	/* end block 1 */
	// End Line: 293

long SIGNAL_HandleCameraValue(_Instance *instance,Signal *signal)

{
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined2 unaff_s5;
  
  iVar1 = FUN_80074604(instance,signal[-0x113].data);
  if (iVar1 == 0) {
    iVar1 = FUN_80059398(*(undefined4 *)(unaff_s2 + 0x38));
    if ((uint)(gameTrackerX.controlCommand[0][1] - iRam800cdfa4) < 0x65) {
      return 1;
    }
    if ((*(ushort *)(iVar1 + 6) & 8) == 0) {
      return 1;
    }
    iVar1 = (WarpRoomArray[CurrentWarpNumber].streamUnit)->StreamUnitID;
    FUN_800bd564(&stack0x00000010);
    unaff_s3 = 1;
    if (WarpRoomArray[CurrentWarpNumber].streamUnit == (_StreamUnit *)0x0) {
      return 1;
    }
    if (((WarpRoomArray[CurrentWarpNumber].streamUnit)->flags & 8U) == 0) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(unaff_s4 + 8);
  }
  if (*(int *)(unaff_s2 + 0x38) != iVar1) {
    if (unaff_s2 == loadStatus.bigFile.searchDirID) {
      BmenuLines[2].textureW = 1;
      iRam800cdfa4 = gameTrackerX.controlCommand[0][1];
      FUN_800bd564(0x800d0f4c,&stack0x00000010);
      uRam800d0f5e = *(undefined2 *)(unaff_s4 + 4);
      if (unaff_s3 == 0) {
        BmenuLines[2].textureH = -1;
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar1;
      }
      else {
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar1;
        if ((loadStatus.decompressLen._2_2_ == 0) &&
           (uRam800d0f5c = unaff_s5, DAT_800d0f6c = iVar1,
           iVar1 = FUN_80074604(&stack0x00000010,0x800ce1f8), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_80034368(loadStatus.bigFile.searchDirID,0x10002001,0);
        }
        BmenuLines[2].textureH = FUN_8005ae28(0x800d0f28);
      }
    }
    else {
      if (*(int *)(unaff_s2 + 300) == 0) {
        iVar2 = FUN_80059340(iVar1);
        if (iVar2 == 0) {
          FUN_80059340(*(undefined4 *)(unaff_s2 + 0x38));
          FUN_800b6590();
          *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 0x20;
        }
        else {
          *(undefined2 *)(unaff_s2 + 200) = 0xffff;
          *(undefined4 *)(unaff_s2 + 0xcc) = 0;
          *(int *)(unaff_s2 + 0x38) = iVar1;
          FUN_80035498();
        }
      }
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleStreamLevel(struct _Instance *instance /*$s2*/, struct Signal *signal /*$s4*/)
 // line 157, offset 0x8001da10
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8001DA10
		// Variables:
	// 		char areaName[16]; // stack offset -48
	// 		int signalnum; // $s5
	// 		char *commapos; // $s0
	// 		long newStreamID; // $s1
	// 		static int lastTimeCrossed; // offset 0x4
	// 		long doingWarpRoom; // $s3

		/* begin block 1.1 */
			// Start line: 177
			// Start offset: 0x8001DA8C
			// Variables:
		// 		struct _StreamUnit *curStreamUnit; // $v0
		/* end block 1.1 */
		// End offset: 0x8001DB38
		// End Line: 199

		/* begin block 1.2 */
			// Start line: 246
			// Start offset: 0x8001DBF4
		/* end block 1.2 */
		// End offset: 0x8001DC44
		// End Line: 261
	/* end block 1 */
	// End offset: 0x8001DC48
	// End Line: 264

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

/* WARNING: Removing unreachable block (ram,0x8001db3c) */

long SIGNAL_HandleStreamLevel(_Instance *instance,Signal *signal)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int iVar2;
  int unaff_s2;
  int unaff_s4;
  undefined2 unaff_s5;
  
  if ((in_v1 == 0) && ((*(ushort *)(in_v0 + 6) & 8) != 0)) {
    iVar2 = (WarpRoomArray[CurrentWarpNumber].streamUnit)->StreamUnitID;
    FUN_800bd564(&stack0x00000010);
    if ((WarpRoomArray[CurrentWarpNumber].streamUnit != (_StreamUnit *)0x0) &&
       ((((WarpRoomArray[CurrentWarpNumber].streamUnit)->flags & 8U) != 0 &&
        (*(int *)(unaff_s2 + 0x38) != iVar2)))) {
      if (unaff_s2 == loadStatus.bigFile.searchDirID) {
        BmenuLines[2].textureW = 1;
        lRam800cdfa4 = gameTrackerX.controlCommand[0][1];
        FUN_800bd564(0x800d0f4c,&stack0x00000010);
        uRam800d0f5e = *(undefined2 *)(unaff_s4 + 4);
        uRam800d0f5c = unaff_s5;
        DAT_800d0f6c = iVar2;
        if ((loadStatus.decompressLen._2_2_ == 0) &&
           (uRam800d0f5c = unaff_s5, DAT_800d0f6c = iVar2,
           iVar2 = FUN_80074604(&stack0x00000010,0x800ce1f8), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_80034368(loadStatus.bigFile.searchDirID,0x10002001,0);
        }
        BmenuLines[2].textureH = FUN_8005ae28(0x800d0f28);
      }
      else {
        if (*(int *)(unaff_s2 + 300) == 0) {
          iVar1 = FUN_80059340(iVar2);
          if (iVar1 == 0) {
            FUN_80059340(*(undefined4 *)(unaff_s2 + 0x38));
            FUN_800b6590();
            *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 0x20;
          }
          else {
            *(undefined2 *)(unaff_s2 + 200) = 0xffff;
            *(undefined4 *)(unaff_s2 + 0xcc) = 0;
            *(int *)(unaff_s2 + 0x38) = iVar2;
            FUN_80035498();
          }
        }
      }
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleFogNear(struct _Instance *instance /*$a0*/, struct Signal *signal /*$s0*/)
 // line 267, offset 0x8001dc6c
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x8001DC6C
		// Variables:
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x8001DC6C
	// End Line: 268

	/* begin block 2 */
		// Start line: 557
	/* end block 2 */
	// End Line: 558

	/* begin block 3 */
		// Start line: 562
	/* end block 3 */
	// End Line: 563

long SIGNAL_HandleFogNear(_Instance *instance,Signal *signal)

{
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleFogFar(struct _Instance *instance /*$a0*/, struct Signal *signal /*$s1*/)
 // line 289, offset 0x8001dcc0
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x8001DCC0
		// Variables:
	// 		struct Level *level; // $s0
	/* end block 1 */
	// End offset: 0x8001DCC0
	// End Line: 290

	/* begin block 2 */
		// Start line: 617
	/* end block 2 */
	// End Line: 618

	/* begin block 3 */
		// Start line: 622
	/* end block 3 */
	// End Line: 623

long SIGNAL_HandleFogFar(_Instance *instance,Signal *signal)

{
  FUN_8001e174(instance,signal->data + 4);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraShake(struct _Instance *instance /*$a0*/, struct Signal *signal /*$v0*/)
 // line 316, offset 0x8001dd1c
	/* begin block 1 */
		// Start line: 632
	/* end block 1 */
	// End Line: 633

long SIGNAL_HandleCameraShake(_Instance *instance,Signal *signal)

{
  _Instance *p_Var1;
  int in_v1;
  
  p_Var1 = (_Instance *)((int)&signal->id + in_v1);
  instance->next = p_Var1;
  return (long)p_Var1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCallSignal(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 322, offset 0x8001dd4c
	/* begin block 1 */
		// Start line: 687
	/* end block 1 */
	// End Line: 688

long SIGNAL_HandleCallSignal(_Instance *instance,Signal *signal)

{
  if (*(int *)(signal->data + 4) != 0) {
    theCamera.focusDistanceList[1][1] = *(long *)(*(int *)(signal->data + 4) + 0x38);
    return 1;
  }
  theCamera.focusDistanceList[1][1] = 0;
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleStopPlayerControl(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 328, offset 0x8001dd74
	/* begin block 1 */
		// Start line: 699
	/* end block 1 */
	// End Line: 700

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

long SIGNAL_HandleStopPlayerControl(_Instance *instance,Signal *signal)

{
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleStartPlayerControl(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 335, offset 0x8001dd8c
	/* begin block 1 */
		// Start line: 713
	/* end block 1 */
	// End Line: 714

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

long SIGNAL_HandleStartPlayerControl(_Instance *instance,Signal *signal)

{
  theCamera.focusDistanceList[1][2] = signal[2].id;
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SIGNAL_RelocateCameraSpline(struct Signal *signal /*$a0*/, long offset /*$a1*/)
 // line 502, offset 0x8001ddac
	/* begin block 1 */
		// Start line: 1004
	/* end block 1 */
	// End Line: 1005

	/* begin block 2 */
		// Start line: 884
	/* end block 2 */
	// End Line: 885

void SIGNAL_RelocateCameraSpline(Signal *signal,long offset)

{
  draw[0].dr_env.code[3]._2_2_ = *(short *)(offset + 6);
  if (draw[0].dr_env.code[3]._2_2_ < 0) {
    draw[0].dr_env.code[3]._2_2_ = -draw[0].dr_env.code[3]._2_2_;
  }
  draw[0].dr_env.code[3]._0_2_ = *(undefined2 *)(offset + 6);
  draw[0].dr_env.code[4]._0_2_ = *(undefined2 *)(offset + 4);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleCameraSpline(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 507, offset 0x8001ddc8
	/* begin block 1 */
		// Start line: 893
	/* end block 1 */
	// End Line: 894

	/* begin block 2 */
		// Start line: 894
	/* end block 2 */
	// End Line: 895

long SIGNAL_HandleCameraSpline(_Instance *instance,Signal *signal)

{
  short in_v0;
  
  draw[0].dr_env.code[3]._2_2_ = -in_v0;
  draw[0].dr_env.code[4]._0_2_ = *(undefined2 *)signal->data;
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleScreenWipe(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 539, offset 0x8001de48
	/* begin block 1 */
		// Start line: 957
	/* end block 1 */
	// End Line: 958

	/* begin block 2 */
		// Start line: 958
	/* end block 2 */
	// End Line: 959

long SIGNAL_HandleScreenWipe(_Instance *instance,Signal *signal)

{
  if (instance != (_Instance *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(instance,0x4000006,0);
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleBlendStart(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 547, offset 0x8001de80
	/* begin block 1 */
		// Start line: 973
	/* end block 1 */
	// End Line: 974

	/* begin block 2 */
		// Start line: 983
	/* end block 2 */
	// End Line: 984

long SIGNAL_HandleBlendStart(_Instance *instance,Signal *signal)

{
  int in_v0;
  int iVar1;
  
  if (instance != (_Instance *)0x0) {
    iVar1 = -in_v0 % 0x168;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x168;
    }
    FUN_800169a0(&standardMenu,(iVar1 * 0x1000) / 0x168);
  }
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleScreenWipeColor(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 561, offset 0x8001de88
	/* begin block 1 */
		// Start line: 1001
	/* end block 1 */
	// End Line: 1002

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

long SIGNAL_HandleScreenWipeColor(_Instance *instance,Signal *signal)

{
  int in_v0;
  int iVar1;
  uint in_a2;
  
  iVar1 = -in_v0;
  iVar1 = iVar1 + (((int)((ulonglong)((longlong)iVar1 * (longlong)(int)(in_a2 | 0x60b7)) >> 0x20) +
                    iVar1 >> 8) - (iVar1 >> 0x1f)) * -0x168;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x168;
  }
  iVar1 = iVar1 * 0x1000;
  FUN_800169a0(&standardMenu,
               ((int)((ulonglong)((longlong)iVar1 * (longlong)(int)(in_a2 | 0x60b7)) >> 0x20) +
                iVar1 >> 8) - (iVar1 >> 0x1f));
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleSetSlideAngle(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 569, offset 0x8001deb4
	/* begin block 1 */
		// Start line: 570
		// Start offset: 0x8001DEB4
		// Variables:
	// 		long slideAngle; // $a2
	/* end block 1 */
	// End offset: 0x8001DED4
	// End Line: 580

	/* begin block 2 */
		// Start line: 1017
	/* end block 2 */
	// End Line: 1018

long SIGNAL_HandleSetSlideAngle(_Instance *instance,Signal *signal)

{
  int in_v0;
  int in_v1;
  int iVar1;
  int in_a2;
  
  instance = (_Instance *)((int)instance + (in_v0 - in_v1) * -8);
  if ((int)instance < 0) {
    instance = (_Instance *)&instance->zAccl;
  }
  iVar1 = (int)instance * 0x1000;
  FUN_800169a0(&standardMenu,
               ((int)((ulonglong)((longlong)iVar1 * (longlong)in_a2) >> 0x20) + iVar1 >> 8) -
               (iVar1 >> 0x1f));
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleResetSlideAngle(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 583, offset 0x8001dee4
	/* begin block 1 */
		// Start line: 1046
	/* end block 1 */
	// End Line: 1047

long SIGNAL_HandleResetSlideAngle(_Instance *instance,Signal *signal)

{
  int in_v0;
  
  FUN_800169a0(instance,in_v0 - ((int)signal >> 0x1f));
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleSetCameraTilt(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 595, offset 0x8001df10
	/* begin block 1 */
		// Start line: 596
		// Start offset: 0x8001DF10
		// Variables:
	// 		long tilt; // $v0
	/* end block 1 */
	// End offset: 0x8001DF8C
	// End Line: 610

	/* begin block 2 */
		// Start line: 1070
	/* end block 2 */
	// End Line: 1071

long SIGNAL_HandleSetCameraTilt(_Instance *instance,Signal *signal)

{
  FUN_800169dc(&standardMenu);
  return 1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleSetCameraDistance(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 613, offset 0x8001df9c
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x8001DF9C
		// Variables:
	// 		long distance; // $a1
	/* end block 1 */
	// End offset: 0x8001DFBC
	// End Line: 624

	/* begin block 2 */
		// Start line: 1107
	/* end block 2 */
	// End Line: 1108

long SIGNAL_HandleSetCameraDistance(_Instance *instance,Signal *signal)

{
  long in_v0;
  long lVar1;
  uint in_v1;
  _Instance **unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    if (unaff_s3 != in_v0) goto LAB_8001df68;
    do {
      if ((((draw[1].dr_env.code[9] & 0x40) == 0) || (-1 < (int)instance)) &&
         ((lVar1 = in_v1 * 2, 0x1a < (int)in_v1 ||
          (lVar1 = (**(code **)(in_v1 * 0xc + unaff_s2))(), lVar1 == 0)))) {
        return lVar1;
      }
LAB_8001df68:
      unaff_s0 = unaff_s0 + (int)*(short *)(((uint)*unaff_s0 & unaff_s1) * 0xc + unaff_s2 + 4) + 1;
      instance = *unaff_s0;
      in_v1 = (uint)instance & unaff_s1;
      in_v0 = loadStatus.bigFile.searchDirID;
    } while (*(short *)(in_v1 * 0xc + unaff_s2 + 6) == 0);
  } while( true );
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_HandleEnd(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/)
 // line 744, offset 0x8001dfcc
	/* begin block 1 */
		// Start line: 1370
	/* end block 1 */
	// End Line: 1371

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

long SIGNAL_HandleEnd(_Instance *instance,Signal *signal)

{
  int in_v0;
  int iVar1;
  uint uVar2;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
code_r0x8001dfcc:
  iVar1 = (**(code **)(in_v0 * 4 + unaff_s2))();
  if (iVar1 == 0) {
    return 0;
  }
LAB_8001dfec:
  do {
    unaff_s0 = unaff_s0 + (int)*(short *)((*unaff_s0 & unaff_s1) * 0xc + unaff_s2 + 4) + 1;
    uVar2 = *unaff_s0 & unaff_s1;
    if (*(short *)(uVar2 * 0xc + unaff_s2 + 6) != 0) {
      if (unaff_s3 != loadStatus.bigFile.searchDirID) goto LAB_8001dfec;
    }
    if (((draw[1].dr_env.code[9] & 0x40) == 0) || (-1 < (int)*unaff_s0)) break;
  } while( true );
  if (0x1a < (int)uVar2) {
    return uVar2 * 2;
  }
  in_v0 = uVar2 * 3;
  goto code_r0x8001dfcc;
}



// decompiled code
// original method signature: 
// void /*$ra*/ COLLIDE_HandleSignal(struct _Instance *instance /*$s3*/, struct Signal *signal /*$s0*/, long numSignals /*$a2*/, int dontForceDoSignal /*$a3*/)
 // line 844, offset 0x8001dfd4
	/* begin block 1 */
		// Start line: 845
		// Start offset: 0x8001DFD4
		// Variables:
	// 		long signalNumber; // $v1
	/* end block 1 */
	// End offset: 0x8001E0BC
	// End Line: 900

	/* begin block 2 */
		// Start line: 1570
	/* end block 2 */
	// End Line: 1571

void COLLIDE_HandleSignal(_Instance *instance,Signal *signal,long numSignals,int dontForceDoSignal)

{
  code **in_v0;
  int iVar1;
  uint uVar2;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
code_r0x8001dfd4:
  iVar1 = (**in_v0)();
  if (iVar1 == 0) {
    return;
  }
LAB_8001dfec:
  do {
    unaff_s0 = unaff_s0 + (int)*(short *)((*unaff_s0 & unaff_s1) * 0xc + unaff_s2 + 4) + 1;
    uVar2 = *unaff_s0 & unaff_s1;
    if (*(short *)(uVar2 * 0xc + unaff_s2 + 6) != 0) {
      if (unaff_s3 != loadStatus.bigFile.searchDirID) goto LAB_8001dfec;
    }
    if (((draw[1].dr_env.code[9] & 0x40) == 0) || (-1 < (int)*unaff_s0)) break;
  } while( true );
  if (0x1a < (int)uVar2) {
    return;
  }
  in_v0 = (code **)(uVar2 * 0xc + unaff_s2);
  goto code_r0x8001dfd4;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_IsThisStreamAWarpGate(struct Signal *signal /*$a0*/)
 // line 902, offset 0x8001e0d8
	/* begin block 1 */
		// Start line: 903
		// Start offset: 0x8001E0D8
		// Variables:
	// 		long result; // $s0
	// 		char areaName[32]; // stack offset -40
	// 		char *commapos; // $v0
	/* end block 1 */
	// End offset: 0x8001E124
	// End Line: 920

	/* begin block 2 */
		// Start line: 1686
	/* end block 2 */
	// End Line: 1687

long SIGNAL_IsThisStreamAWarpGate(Signal *signal)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  Signal *unaff_s1;
  int unaff_s2;
  long unaff_s3;
  undefined4 *unaff_s4;
  uint unaff_s5;
  
  uVar3 = unaff_s1->id & unaff_s5;
  if (uVar3 == 0xf) {
    unaff_s2 = 1;
  }
  else {
    if (uVar3 == 0x12) {
      unaff_s2 = 1;
      unaff_s3 = 1;
      iVar1 = FUN_8001e03c();
      signal = unaff_s1;
      if (iVar1 != 0) {
        *unaff_s4 = 1;
        signal = unaff_s1;
      }
    }
  }
  if (unaff_s2 == 0) {
    lVar2 = SIGNAL_IsThisStreamAWarpGate(signal);
    return lVar2;
  }
  return unaff_s3;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SIGNAL_IsStreamSignal(struct Signal *signal /*$s1*/, long *isWarpGate /*$s4*/)
 // line 923, offset 0x8001e138
	/* begin block 1 */
		// Start line: 924
		// Start offset: 0x8001E138
		// Variables:
	// 		long result; // $s3
	// 		long done; // $s2
	// 		long signalNumber; // $s0
	/* end block 1 */
	// End offset: 0x8001E1EC
	// End Line: 966

	/* begin block 2 */
		// Start line: 1732
	/* end block 2 */
	// End Line: 1733

long SIGNAL_IsStreamSignal(Signal *signal,long *isWarpGate)

{
  long lVar1;
  
  lVar1 = SIGNAL_IsThisStreamAWarpGate(signal);
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SIGNAL_HandleSignal(struct _Instance *instance /*$a0*/, struct Signal *signal /*$a1*/, int dontForceDoSignal /*$a3*/)
 // line 969, offset 0x8001e210
	/* begin block 1 */
		// Start line: 1831
	/* end block 1 */
	// End Line: 1832

void SIGNAL_HandleSignal(_Instance *instance,Signal *signal,int dontForceDoSignal)

{
  code *pcVar1;
  uint *unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + (int)*(short *)((*unaff_s0 & unaff_s2) * 0xc + unaff_s3 + 4) + 1;
    if (*unaff_s4 <= unaff_s1) break;
    pcVar1 = *(code **)((*unaff_s0 & unaff_s2) * 0xc + unaff_s3 + 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(unaff_s0);
    }
  }
  return;
}



// autogenerated function stub: 
// struct _MultiSignal * /*$ra*/ SIGNAL_RelocateSignal(struct _MultiSignal *multiSignal /*$s4*/, long offset /*$s5*/)
struct _MultiSignal * SIGNAL_RelocateSignal(struct _MultiSignal *multiSignal, long offset)
{ // line 976, offset 0x8001e234
	/* begin block 1 */
		// Start line: 977
		// Start offset: 0x8001E234
		// Variables:
			int i; // $s1
			struct Signal *signal; // $s0
	/* end block 1 */
	// End offset: 0x8001E2E8
	// End Line: 999

	/* begin block 2 */
		// Start line: 1845
	/* end block 2 */
	// End Line: 1846

	return null;
}


// decompiled code
// original method signature: 
// struct _MultiSignal * /*$ra*/ SIGNAL_FindSignal(struct Level *level /*$a0*/, long id /*$a1*/)
 // line 1002, offset 0x8001e310
	/* begin block 1 */
		// Start line: 1004
		// Start offset: 0x8001E310
		// Variables:
	// 		int i; // $a2
	// 		struct Signal *signal; // $a3
	// 		struct _MultiSignal *msignal; // $v1
	// 		long signalNumber; // $v1
	/* end block 1 */
	// End offset: 0x8001E3B8
	// End Line: 1045

	/* begin block 2 */
		// Start line: 1922
	/* end block 2 */
	// End Line: 1923

	/* begin block 3 */
		// Start line: 1923
	/* end block 3 */
	// End Line: 1924

	/* begin block 4 */
		// Start line: 1929
	/* end block 4 */
	// End Line: 1930

_MultiSignal * SIGNAL_FindSignal(Level *level,long id)

{
  _MultiSignal *in_v0;
  _MultiSignal *in_v1;
  
  if (in_v1 == in_v0) {
    in_v1 = (_MultiSignal *)0x0;
  }
  return in_v1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SIGNAL_OutOfWater(struct _Instance *instance /*$s0*/)
 // line 1049, offset 0x8001e3c0
	/* begin block 1 */
		// Start line: 1050
		// Start offset: 0x8001E3C0
		// Variables:
	// 		struct Level *level; // $v0
	/* end block 1 */
	// End offset: 0x8001E400
	// End Line: 1060

	/* begin block 2 */
		// Start line: 2042
	/* end block 2 */
	// End Line: 2043

void SIGNAL_OutOfWater(_Instance *instance)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined4 *in_a1;
  uint uVar10;
  int iVar11;
  undefined2 *in_a2;
  int iVar12;
  short *in_a3;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  short *in_stack_00000028;
  
  iVar7 = (int)*in_stack_00000028;
  iVar9 = (int)in_stack_00000028[1];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if (iVar9 < iVar7) {
    iVar9 = (int)in_stack_00000028[2];
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < iVar7) {
      sVar2 = in_a3[1];
      uVar3 = in_a3[2];
      DAT_1f800000 = *(NodeType **)((int)&(instance->node).prev + 2);
      DAT_1f800004 = *(undefined4 *)((int)in_a1 + 2);
      uVar1 = in_a2[2];
      uVar4 = in_a2[1];
      goto LAB_8001e4f8;
    }
LAB_8001e4bc:
    sVar2 = *in_a3;
    uVar3 = in_a3[1];
    DAT_1f800000 = (instance->node).prev;
    DAT_1f800004 = *in_a1;
    uVar1 = in_a2[1];
  }
  else {
    iVar7 = (int)in_stack_00000028[2];
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar9 <= iVar7) goto LAB_8001e4bc;
    sVar2 = *in_a3;
    uVar3 = in_a3[2];
    DAT_1f800000 = (NodeType *)
                   CONCAT22(*(undefined2 *)&(instance->node).next,
                            *(undefined2 *)&(instance->node).prev);
    DAT_1f800004 = CONCAT22(*(undefined2 *)(in_a1 + 1),*(undefined2 *)in_a1);
    uVar1 = in_a2[2];
  }
  uVar4 = *in_a2;
LAB_8001e4f8:
  DAT_1f800008 = CONCAT22(uVar1,uVar4);
  bVar5 = false;
  iVar16 = 3;
  iVar9 = (int)((uint)uVar3 << 0x10) >> 0x10;
  iVar7 = (int)sVar2;
  puVar14 = &DAT_1f800008;
  puVar15 = &DAT_1f800000;
  bVar8 = (int)((uint)uVar3 << 0x10) <= (int)((uint)uVar1 << 0x10);
  do {
    iVar13 = (int)*(short *)((int)puVar15 + 2);
    if (bVar8 == iVar9 <= iVar13) {
      bVar6 = bVar5;
      if ((bVar8 != false) && (bVar6 = bVar5, iVar9 == (int)*(short *)((int)puVar14 + 2))) {
        if (iVar9 == iVar13) {
          iVar12 = (int)*(short *)puVar15;
          if ((int)*(short *)puVar14 < iVar7 != iVar12 < iVar7) {
            return;
          }
          if (iVar7 == (int)*(short *)puVar14) {
            return;
          }
        }
        else {
          iVar12 = (int)*(short *)puVar14;
        }
        bVar6 = bVar5;
        if (iVar7 == iVar12) {
          return;
        }
      }
    }
    else {
      iVar12 = (int)*(short *)puVar15;
      if (iVar7 <= (int)*(short *)puVar14 != iVar7 <= iVar12) {
        uVar10 = (int)*(short *)((int)puVar14 + 2) - iVar13;
        iVar12 = (iVar12 - iVar7) * uVar10 - (iVar13 - iVar9) * ((int)*(short *)puVar14 - iVar12);
        if ((int)uVar10 < 0) {
          uVar10 = -uVar10;
          iVar12 = -iVar12;
        }
        iVar11 = (int)(uVar10 + (uVar10 >> 0x1f)) >> 1;
        if ((iVar12 <= iVar11) && (-iVar11 <= iVar12)) {
          return;
        }
      }
      bVar6 = true;
      if (bVar5) {
        return;
      }
    }
    bVar5 = bVar6;
    iVar16 = iVar16 + -1;
    puVar14 = puVar15;
    puVar15 = puVar15 + 1;
    bVar8 = iVar9 <= iVar13;
    if (iVar16 == 0) {
      return;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SIGNAL_InWater(struct _Instance *instance /*$s0*/)
 // line 1062, offset 0x8001e410
	/* begin block 1 */
		// Start line: 1063
		// Start offset: 0x8001E410
		// Variables:
	// 		struct Level *level; // $v0
	/* end block 1 */
	// End offset: 0x8001E450
	// End Line: 1072

	/* begin block 2 */
		// Start line: 2068
	/* end block 2 */
	// End Line: 2069

void SIGNAL_InWater(_Instance *instance)

{
  undefined2 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  int in_v0;
  bool bVar7;
  int iVar8;
  NodeType **in_a1;
  uint uVar9;
  int iVar10;
  undefined2 *in_a2;
  int iVar11;
  short *in_a3;
  int iVar12;
  NodeType **ppNVar13;
  NodeType **in_t2;
  int iVar14;
  int iVar15;
  
  if (in_v0 == 0) {
    sVar2 = *in_a3;
    uVar3 = in_a3[1];
    *in_t2 = (instance->node).prev;
    in_t2[1] = *in_a1;
    uVar1 = in_a2[1];
    uVar4 = *in_a2;
  }
  else {
    sVar2 = in_a3[1];
    uVar3 = in_a3[2];
    *in_t2 = *(NodeType **)((int)&(instance->node).prev + 2);
    in_t2[1] = *(NodeType **)((int)in_a1 + 2);
    uVar1 = in_a2[2];
    uVar4 = in_a2[1];
  }
  in_t2[2] = (NodeType *)CONCAT22(uVar1,uVar4);
  bVar5 = false;
  iVar15 = 3;
  iVar14 = (int)((uint)uVar3 << 0x10) >> 0x10;
  iVar8 = (int)sVar2;
  ppNVar13 = in_t2 + 2;
  bVar7 = (int)((uint)uVar3 << 0x10) <= (int)((uint)*(ushort *)((int)in_t2 + 10) << 0x10);
  do {
    iVar12 = (int)*(short *)((int)in_t2 + 2);
    if (bVar7 == iVar14 <= iVar12) {
      bVar6 = bVar5;
      if ((bVar7 != false) && (bVar6 = bVar5, iVar14 == (int)*(short *)((int)ppNVar13 + 2))) {
        if (iVar14 == iVar12) {
          iVar11 = (int)*(short *)in_t2;
          if ((int)*(short *)ppNVar13 < iVar8 != iVar11 < iVar8) {
            return;
          }
          if (iVar8 == (int)*(short *)ppNVar13) {
            return;
          }
        }
        else {
          iVar11 = (int)*(short *)ppNVar13;
        }
        bVar6 = bVar5;
        if (iVar8 == iVar11) {
          return;
        }
      }
    }
    else {
      iVar11 = (int)*(short *)in_t2;
      if (iVar8 <= (int)*(short *)ppNVar13 != iVar8 <= iVar11) {
        uVar9 = (int)*(short *)((int)ppNVar13 + 2) - iVar12;
        iVar11 = (iVar11 - iVar8) * uVar9 - (iVar12 - iVar14) * ((int)*(short *)ppNVar13 - iVar11);
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
          iVar11 = -iVar11;
        }
        iVar10 = (int)(uVar9 + (uVar9 >> 0x1f)) >> 1;
        if ((iVar11 <= iVar10) && (-iVar10 <= iVar11)) {
          return;
        }
      }
      bVar6 = true;
      if (bVar5) {
        return;
      }
    }
    bVar5 = bVar6;
    iVar15 = iVar15 + -1;
    ppNVar13 = in_t2;
    in_t2 = in_t2 + 1;
    bVar7 = iVar14 <= iVar12;
    if (iVar15 == 0) {
      return;
    }
  } while( true );
}





