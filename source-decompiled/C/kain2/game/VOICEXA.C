#include "THISDUST.H"
#include "VOICEXA.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_Init()
 // line 54, offset 0x800b6e14
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x800B6E14
		// Variables:
	// 		int i; // $s1
	// 		struct CdlFILE fp; // stack offset -80
	// 		struct XAVoiceTracker *vt; // $a0
	// 		char fileName[32]; // stack offset -56
	/* end block 1 */
	// End offset: 0x800B6EC4
	// End Line: 95

	/* begin block 2 */
		// Start line: 108
	/* end block 2 */
	// End Line: 109

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VOICEXA_Init(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ putCdCommand(struct XAVoiceTracker *vt /*$a0*/, unsigned char cdCommand /*$a1*/, int numParams /*$a2*/, unsigned char *params /*$a3*/)
 // line 98, offset 0x800b6ee0
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x800B6EE0
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x800B6F5C
	// End Line: 112

	/* begin block 2 */
		// Start line: 225
	/* end block 2 */
	// End Line: 226

	/* begin block 3 */
		// Start line: 228
	/* end block 3 */
	// End Line: 229

void putCdCommand(XAVoiceTracker *vt,uchar cdCommand,int numParams,uchar *params)

{
  int in_v0;
  uint in_t0;
  undefined4 unaff_retaddr;
  
  DAT_800cafb8 = (in_v0 - (int)PTR_DAT_800ce7a0) - ((uint)vt >> 3);
  DAT_800cafb4 = (uint)vt >> 3 | in_t0;
  voiceTracker.voiceCmdQueue[0] = unaff_retaddr;
  FUN_800c0c58(DAT_800cafb4 + 4);
  FUN_80096398();
  trap(1);
  if (DAT_800cafb0 == 0) {
    DAT_800cafb0 = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_CdSyncCallback(unsigned char status /*$a0*/, unsigned char *result /*$a1*/)
 // line 115, offset 0x800b6f64
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800B6F64
		// Variables:
	// 		struct XAVoiceTracker *vt; // $a1
	/* end block 1 */
	// End offset: 0x800B6FC0
	// End Line: 137

	/* begin block 2 */
		// Start line: 263
	/* end block 2 */
	// End Line: 264

void VOICEXA_CdSyncCallback(uchar status,uchar *result)

{
  int in_at;
  undefined4 in_t0;
  
  *(undefined4 *)(in_at + -0x5050) = in_t0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ processCdCommands(struct XAVoiceTracker *vt /*$s1*/)
 // line 141, offset 0x800b6fd0
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x800B6FD0
		// Variables:
	// 		struct CdCommand *cmd; // $s0
	/* end block 1 */
	// End offset: 0x800B7064
	// End Line: 163

	/* begin block 2 */
		// Start line: 319
	/* end block 2 */
	// End Line: 320

void processCdCommands(XAVoiceTracker *vt)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined *)(unaff_s0 + 0xa0) = 0;
  *(undefined *)(unaff_s0 + 0xa1) = 0;
  *(undefined *)(unaff_s0 + 0xa2) = 0;
  *(undefined *)(unaff_s0 + 0xa6) = 0;
  *(undefined *)(unaff_s0 + 0xa7) = 0;
  *(undefined *)(unaff_s0 + 0xa8) = 0;
  do {
    FUN_800741fc();
    iVar1 = FUN_800beab8(&stack0x00000010);
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_s0 + 0xb0) = 0;
    }
    else {
      uVar2 = FUN_800bf53c(&stack0x00000010);
      *(undefined4 *)(unaff_s0 + 0xb0) = uVar2;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + 4;
  } while (unaff_s1 < 0x1e);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ putVoiceCommand(struct XAVoiceTracker *vt /*$a0*/, unsigned char voiceCmd /*$a1*/, unsigned char nextVoiceStatus /*$a2*/, int voiceCmdParam /*$a3*/)
 // line 186, offset 0x800b7078
	/* begin block 1 */
		// Start line: 414
	/* end block 1 */
	// End Line: 415

	/* begin block 2 */
		// Start line: 415
	/* end block 2 */
	// End Line: 416

void putVoiceCommand(XAVoiceTracker *vt,uchar voiceCmd,uchar nextVoiceStatus,int voiceCmdParam)

{
  uchar uVar1;
  int in_v0;
  uchar in_v1;
  undefined3 in_register_00000019;
  int in_t0;
  
  while( true ) {
    in_t0 = in_t0 + 1;
    vt->cdCmdQueue[0].cdCmdParam[in_v0] = in_v1;
    if (CONCAT31(in_register_00000019,nextVoiceStatus) <= in_t0) break;
    in_v1 = *(uchar *)(voiceCmdParam + in_t0);
    in_v0 = in_t0 + (uint)vt->cdCmdIn * 8;
  }
  if (vt->cdCmdsQueued < 7) {
    vt->cdCmdsQueued = vt->cdCmdsQueued + 1;
    uVar1 = vt->cdCmdIn + '\x01';
    vt->cdCmdIn = uVar1;
    if (uVar1 == '\b') {
      vt->cdCmdIn = '\0';
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ processVoiceCommands(struct XAVoiceTracker *vt /*$s1*/)
 // line 203, offset 0x800b70f4
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x800B70F4
		// Variables:
	// 		struct VoiceCommand *cmd; // $s0
	/* end block 1 */
	// End offset: 0x800B7190
	// End Line: 221

	/* begin block 2 */
		// Start line: 449
	/* end block 2 */
	// End Line: 450

void processVoiceCommands(XAVoiceTracker *vt)

{
  char in_v0;
  uint in_v1;
  int in_a1;
  
  *(byte *)(in_a1 + 0xa1) = in_v0 + 1U;
  if ((uint)(byte)(in_v0 + 1U) == in_v1) {
    *(undefined *)(in_a1 + 0xa1) = 0;
  }
  *(char *)(in_a1 + 0xa2) = *(char *)(in_a1 + 0xa2) + -1;
  FUN_800be4fc(*(undefined4 *)(in_a1 + 0xc));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ voiceCmdPlay(struct XAVoiceTracker *vt /*$s2*/, short voiceIndex /*$s3*/)
 // line 226, offset 0x800b71a4
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x800B71A4
		// Variables:
	// 		struct CdlFILTER filter; // stack offset -88
	// 		struct CdlLOC pos; // stack offset -80
	// 		unsigned char mode; // stack offset -32
	// 		struct SpuCommonAttr spuattr; // stack offset -72
	// 		struct XAVoiceListEntry *voice; // $s1
	// 		struct XAFileInfo *file; // $s0
	/* end block 1 */
	// End offset: 0x800B72F8
	// End Line: 299

	/* begin block 2 */
		// Start line: 499
	/* end block 2 */
	// End Line: 500

	/* begin block 3 */
		// Start line: 509
	/* end block 3 */
	// End Line: 510

void voiceCmdPlay(XAVoiceTracker *vt,short voiceIndex)

{
  int in_v0;
  undefined4 uVar1;
  int iVar2;
  int unaff_s1;
  
  *(undefined *)(unaff_s1 + 0xab) = (char)voiceIndex;
  iVar2 = unaff_s1 + in_v0 * 8 + 0x18;
  uVar1 = FUN_800be4fc();
  *(undefined4 *)(unaff_s1 + 0xc) = uVar1;
  FUN_800be524((uint)*(byte *)(iVar2 + 3),iVar2 + 4,unaff_s1 + 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ voiceCmdStop(struct XAVoiceTracker *vt /*$a0*/, short cmdParam /*$a1*/)
 // line 302, offset 0x800b7314
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x800B7314
		// Variables:
	// 		struct SpuCommonAttr spuattr; // stack offset -48
	/* end block 1 */
	// End offset: 0x800B7360
	// End Line: 318

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

void voiceCmdStop(XAVoiceTracker *vt,short cmdParam)

{
  int in_v0;
  
  if (in_v0 != 0) {
    vt->fileNum = cmdParam >> 4;
                    /* WARNING: Subroutine does not return */
    FUN_800b704c(vt,9,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ voiceCmdPause(struct XAVoiceTracker *vt /*$a0*/, short cmdParam /*$a1*/)
 // line 321, offset 0x800b7370
	/* begin block 1 */
		// Start line: 754
	/* end block 1 */
	// End Line: 755

void voiceCmdPause(XAVoiceTracker *vt,short cmdParam)

{
  undefined4 unaff_s3;
  undefined uStack00000010;
  byte bStack00000011;
  
  uStack00000010 = 1;
  bStack00000011 = (byte)unaff_s3 & 0xf;
                    /* WARNING: Subroutine does not return */
  FUN_800b704c(vt,0xd,4,&stack0x00000010);
}



// autogenerated function stub: 
// void /*$ra*/ voiceCmdResume(struct XAVoiceTracker *vt /*$a0*/, short cmdParam /*$a1*/)
void voiceCmdResume(struct XAVoiceTracker *vt, short cmdParam)
{ // line 329, offset 0x800b73ac
	/* begin block 1 */
		// Start line: 770
	/* end block 1 */
	// End Line: 771

}


// decompiled code
// original method signature: 
// void /*$ra*/ voiceCmdNull(struct XAVoiceTracker *vt /*$a0*/, short cmdParam /*$a1*/)
 // line 336, offset 0x800b73e0
	/* begin block 1 */
		// Start line: 784
	/* end block 1 */
	// End Line: 785

	/* begin block 2 */
		// Start line: 785
	/* end block 2 */
	// End Line: 786

void voiceCmdNull(XAVoiceTracker *vt,short cmdParam)

{
                    /* WARNING: Subroutine does not return */
  FUN_800b704c(vt,0x1b,4);
}



// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_Play(int voiceIndex /*$a3*/, int queueRequests /*$a1*/)
 // line 341, offset 0x800b73e8
	/* begin block 1 */
		// Start line: 342
		// Start offset: 0x800B73E8
		// Variables:
	// 		struct XAVoiceTracker *vt; // $a0
	// 		struct XAFileInfo *file; // $a2
	/* end block 1 */
	// End offset: 0x800B749C
	// End Line: 368

	/* begin block 2 */
		// Start line: 794
	/* end block 2 */
	// End Line: 795

void VOICEXA_Play(int voiceIndex,int queueRequests)

{
                    /* WARNING: Subroutine does not return */
  FUN_800b704c();
}



// decompiled code
// original method signature: 
// int /*$ra*/ VOICEXA_FinalStatus(struct XAVoiceTracker *vt /*$a0*/)
 // line 387, offset 0x800b74ac
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x800B74AC
		// Variables:
	// 		int tailIndex; // $v0
	/* end block 1 */
	// End offset: 0x800B74E8
	// End Line: 404

	/* begin block 2 */
		// Start line: 774
	/* end block 2 */
	// End Line: 775

	/* begin block 3 */
		// Start line: 872
	/* end block 3 */
	// End Line: 873

	/* begin block 4 */
		// Start line: 875
	/* end block 4 */
	// End Line: 876

int VOICEXA_FinalStatus(XAVoiceTracker *vt)

{
  int iVar1;
  undefined4 uStack00000028;
  undefined4 uStack00000034;
  
  uStack00000028 = 0;
  uStack00000034 = 0;
  FUN_800c0c68();
  iVar1 = FUN_800518a4(DAT_800d0f80,1,0);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_Pause()
 // line 406, offset 0x800b74f0
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x800B74F0
		// Variables:
	// 		struct XAVoiceTracker *vt; // $s0
	// 		int finalStatus; // $a0
	/* end block 1 */
	// End offset: 0x800B7550
	// End Line: 424

	/* begin block 2 */
		// Start line: 909
	/* end block 2 */
	// End Line: 910

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VOICEXA_Pause(void)

{
  uint in_v0;
  undefined4 in_a0;
  
  if (in_v0 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_800b704c(in_a0,9,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_Resume()
 // line 427, offset 0x800b7560
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x800B7560
		// Variables:
	// 		struct XAVoiceTracker *vt; // $s0
	// 		int finalStatus; // $a0
	/* end block 1 */
	// End offset: 0x800B75C0
	// End Line: 445

	/* begin block 2 */
		// Start line: 952
	/* end block 2 */
	// End Line: 953

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VOICEXA_Resume(void)

{
  char cVar1;
  int in_a0;
  int in_a1;
  int in_a3;
  
  if ((((draw[0].dr_env.code[0] & 0x80000) != 0) && (*(int *)((in_a3 >> 4) * 4 + 0xb0 + in_a0) != 0)
      ) && (clearRect[0].b0 != '\0')) {
    if (in_a1 == 0) {
      FUN_800b71e4(in_a0,0,1);
    }
    else {
      *(undefined2 *)((uint)*(byte *)(in_a0 + 0xa3) * 2 + in_a0 + 0x58) = (short)in_a3;
      if (*(byte *)(in_a0 + 0xa5) < 3) {
        *(char *)(in_a0 + 0xa5) = *(byte *)(in_a0 + 0xa5) + 1;
        cVar1 = *(char *)(in_a0 + 0xa3) + '\x01';
        *(char *)(in_a0 + 0xa3) = cVar1;
        if (cVar1 == '\x04') {
          *(undefined *)(in_a0 + 0xa3) = 0;
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VOICEXA_Tick()
 // line 464, offset 0x800b75d0
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x800B75D0
		// Variables:
	// 		struct XAVoiceTracker *vt; // $s0
	/* end block 1 */
	// End offset: 0x800B7718
	// End Line: 529

	/* begin block 2 */
		// Start line: 1027
	/* end block 2 */
	// End Line: 1028

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VOICEXA_Tick(void)

{
  char cVar1;
  char in_v1;
  int in_a0;
  
  *(char *)(in_a0 + 0xa5) = in_v1 + '\x01';
  cVar1 = *(char *)(in_a0 + 0xa3) + '\x01';
  *(char *)(in_a0 + 0xa3) = cVar1;
  if (cVar1 == '\x04') {
    *(undefined *)(in_a0 + 0xa3) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VOICEXA_IsPlaying()
 // line 546, offset 0x800b7728
	/* begin block 1 */
		// Start line: 548
		// Start offset: 0x800B7728
		// Variables:
	// 		struct XAVoiceTracker *vt; // $a0
	/* end block 1 */
	// End offset: 0x800B7760
	// End Line: 557

	/* begin block 2 */
		// Start line: 1092
	/* end block 2 */
	// End Line: 1093

	/* begin block 3 */
		// Start line: 1196
	/* end block 3 */
	// End Line: 1197

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VOICEXA_IsPlaying(void)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VOICEXA_IsPlayingOrPaused()
 // line 559, offset 0x800b7768
	/* begin block 1 */
		// Start line: 561
		// Start offset: 0x800B7768
	/* end block 1 */
	// End offset: 0x800B7768
	// End Line: 564

	/* begin block 2 */
		// Start line: 1221
	/* end block 2 */
	// End Line: 1222

	/* begin block 3 */
		// Start line: 1222
	/* end block 3 */
	// End Line: 1223

	/* begin block 4 */
		// Start line: 1225
	/* end block 4 */
	// End Line: 1226

/* WARNING: Unknown calling convention yet parameter storage is locked */

int VOICEXA_IsPlayingOrPaused(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int unaff_s0;
  
  uVar3 = (uint)*(byte *)(unaff_s0 + 0xa2);
  if ((*(byte *)(unaff_s0 + 0xa2) == 0) &&
     (uVar3 = (uint)*(byte *)(unaff_s0 + 0xa8), *(byte *)(unaff_s0 + 0xa8) == 0)) {
    bVar1 = *(byte *)(unaff_s0 + 0xaa);
    uVar3 = (uint)(bVar1 < 3);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        uVar3 = (uint)*(byte *)(unaff_s0 + 0xa5);
        if (*(byte *)(unaff_s0 + 0xa5) != 0) {
          FUN_800b71e4();
          cVar5 = *(char *)(unaff_s0 + 0xa4) + '\x01';
          *(char *)(unaff_s0 + 0xa4) = cVar5;
          *(char *)(unaff_s0 + 0xa5) = *(char *)(unaff_s0 + 0xa5) + -1;
          uVar3 = 4;
          if (cVar5 == '\x04') {
            *(undefined *)(unaff_s0 + 0xa4) = 0;
          }
        }
      }
      else {
        CdGetSector2(0x10,0,0x800d5904);
        uVar3 = (uint)*(byte *)(unaff_s0 + 0x13) & 2;
        if ((*(byte *)(unaff_s0 + 0x13) & 2) != 0) {
          ExternalForces[2].LinearForce.y._0_1_ = *(undefined *)(unaff_s0 + 0x10);
          *(undefined *)(unaff_s0 + 0xaa) = 2;
          *(undefined *)(unaff_s0 + 3) = 0;
          *(undefined *)(unaff_s0 + 1) = *(undefined *)(unaff_s0 + 0x11);
          *(undefined *)(unaff_s0 + 2) = *(undefined *)(unaff_s0 + 0x12);
          iVar4 = FUN_800bf53c();
          iVar4 = iVar4 + -0x96;
          *(int *)(unaff_s0 + 4) = iVar4;
          bVar2 = iVar4 < *(int *)(unaff_s0 + 8) + -8;
          uVar3 = (uint)bVar2;
          if (!bVar2) {
            uVar3 = FUN_800b71e4();
          }
        }
      }
    }
  }
  return uVar3;
}





