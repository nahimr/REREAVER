#include "THISDUST.H"
#include "SOUND.H"


// decompiled code
// original method signature: 
// struct SoundEffectChannel * /*$ra*/ SndOpenSfxChannel(unsigned char *channelNum /*$a0*/)
 // line 40, offset 0x8003e64c
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x8003E64C
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8003E68C
	// End Line: 56

	/* begin block 2 */
		// Start line: 80
	/* end block 2 */
	// End Line: 81

	/* begin block 3 */
		// Start line: 81
	/* end block 3 */
	// End Line: 82

	/* begin block 4 */
		// Start line: 83
	/* end block 4 */
	// End Line: 84

SoundEffectChannel * SndOpenSfxChannel(uchar *channelNum)

{
  SoundEffectChannel *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SndCloseSfxChannel(int channelNum /*$a0*/)
 // line 59, offset 0x8003e694
	/* begin block 1 */
		// Start line: 126
	/* end block 1 */
	// End Line: 127

	/* begin block 2 */
		// Start line: 127
	/* end block 2 */
	// End Line: 128

void SndCloseSfxChannel(int channelNum)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int in_a1;
  byte *pbVar4;
  int iVar5;
  
  if ((((BmenuLines[1].vramBlock._2_2_ != 6) && (channelNum != 0)) && (in_a1 != 0)) &&
     ((*(char *)channelNum == -0x42 && (*(char *)(channelNum + 1) == -0x11)))) {
    bVar1 = *(byte *)(channelNum + 2);
    pbVar4 = (byte *)(channelNum + 4);
    iVar5 = 0;
    if (bVar1 != 0) {
      do {
        bVar2 = *pbVar4;
        if (bVar2 == 1) {
          FUN_8003efb0();
LAB_8003e7ac:
          iVar3 = (uint)pbVar4[1] * 2 + 0xe;
LAB_8003e7bc:
          pbVar4 = pbVar4 + iVar3;
        }
        else {
          if (bVar2 < 2) {
            if (bVar2 == 0) {
              FUN_8003eb10();
              iVar3 = (uint)pbVar4[1] * 2 + 0x12;
              goto LAB_8003e7bc;
            }
          }
          else {
            if (bVar2 < 5) {
              FUN_8003f690();
              goto LAB_8003e7ac;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)bVar1);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// struct SoundEffectChannel * /*$ra*/ SndGetSfxChannel(int channelNum /*$a0*/)
 // line 66, offset 0x8003e6bc
	/* begin block 1 */
		// Start line: 140
	/* end block 1 */
	// End Line: 141

	/* begin block 2 */
		// Start line: 141
	/* end block 2 */
	// End Line: 142

SoundEffectChannel * SndGetSfxChannel(int channelNum)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  SoundEffectChannel *in_v0;
  int iVar4;
  SoundEffectChannel *in_v1;
  int in_a1;
  char *unaff_s0;
  byte *pbVar5;
  int iVar6;
  
  if ((((in_v0 != in_v1) && (unaff_s0 != (char *)0x0)) &&
      (in_v0 = (SoundEffectChannel *)0xbe, in_a1 != 0)) && (*unaff_s0 == -0x42)) {
    in_v0 = (SoundEffectChannel *)0xef;
    if (unaff_s0[1] == -0x11) {
      bVar1 = unaff_s0[2];
      pbVar5 = (byte *)(unaff_s0 + 4);
      iVar6 = 0;
      if (bVar1 != 0) {
        do {
          bVar2 = *pbVar5;
          if (bVar2 == 1) {
            FUN_8003efb0();
LAB_8003e7ac:
            iVar4 = (uint)pbVar5[1] * 2 + 0xe;
LAB_8003e7bc:
            pbVar5 = pbVar5 + iVar4;
          }
          else {
            if (bVar2 < 2) {
              if (bVar2 == 0) {
                FUN_8003eb10();
                iVar4 = (uint)pbVar5[1] * 2 + 0x12;
                goto LAB_8003e7bc;
              }
            }
            else {
              if (bVar2 < 5) {
                FUN_8003f690();
                goto LAB_8003e7ac;
              }
            }
          }
          iVar6 = iVar6 + 1;
          bVar3 = iVar6 < (int)(uint)bVar1;
          in_v0 = (SoundEffectChannel *)(uint)bVar3;
        } while (bVar3);
      }
    }
  }
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_ProcessInstanceSounds(unsigned char *sfxFileData /*$s0*/, struct SoundInstance *soundInstTbl /*$a1*/, struct _Position *position /*$s4*/, int livesInOnePlace /*stack 12*/, int inSpectral /*stack 16*/, int hidden /*stack 20*/, int burning /*stack 24*/, long *triggerFlags /*stack 28*/)
 // line 97, offset 0x8003e6e4
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x8003E6E4
		// Variables:
	// 		int numSounds; // $s3
	// 		int numSfxIDs; // $v0
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8003E83C
	// End Line: 141

	/* begin block 2 */
		// Start line: 177
	/* end block 2 */
	// End Line: 178

	/* begin block 3 */
		// Start line: 204
	/* end block 3 */
	// End Line: 205

/* WARNING: Variable defined which should be unmapped: inSpectral */

void SOUND_ProcessInstanceSounds
               (uchar *sfxFileData,SoundInstance *soundInstTbl,_Position *position,
               int livesInOnePlace,int inSpectral,int hidden,int burning,long *triggerFlags)

{
  byte bVar1;
  byte bVar2;
  int in_v0;
  int iVar3;
  int in_v1;
  int unaff_s0;
  byte *pbVar4;
  int iVar5;
  
  if ((in_v1 == in_v0) && (*(char *)(unaff_s0 + 1) == -0x11)) {
    bVar1 = *(byte *)(unaff_s0 + 2);
    pbVar4 = (byte *)(unaff_s0 + 4);
    iVar5 = 0;
    if (bVar1 != 0) {
      do {
        bVar2 = *pbVar4;
        if (bVar2 == 1) {
          FUN_8003efb0();
LAB_8003e7ac:
          iVar3 = (uint)pbVar4[1] * 2 + 0xe;
LAB_8003e7bc:
          pbVar4 = pbVar4 + iVar3;
        }
        else {
          if (bVar2 < 2) {
            if (bVar2 == 0) {
              FUN_8003eb10();
              iVar3 = (uint)pbVar4[1] * 2 + 0x12;
              goto LAB_8003e7bc;
            }
          }
          else {
            if (bVar2 < 5) {
              FUN_8003f690();
              goto LAB_8003e7ac;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)bVar1);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_EndInstanceSounds(unsigned char *sfxFileData /*$s0*/, struct SoundInstance *soundInstTbl /*$a1*/)
 // line 149, offset 0x8003e86c
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8003E86C
		// Variables:
	// 		int numSounds; // $s3
	// 		int numSfxIDs; // $v0
	// 		int i; // $s2
	// 		struct SoundEffectChannel *channel; // $v0
	/* end block 1 */
	// End offset: 0x8003E9B8
	// End Line: 211

	/* begin block 2 */
		// Start line: 336
	/* end block 2 */
	// End Line: 337

void SOUND_EndInstanceSounds(uchar *sfxFileData,SoundInstance *soundInstTbl)

{
  int iVar1;
  uint in_v1;
  byte *unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte unaff_s4;
  
  while( true ) {
    if (in_v1 == 1) {
      unaff_s0 = unaff_s0 + (uint)unaff_s0[1] * 2 + 0xe;
      iVar1 = FUN_8003e654((uint)*unaff_s1);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_800401fc(*(undefined4 *)(iVar1 + 4));
      }
    }
    else {
      if ((int)in_v1 < 2) {
        if (in_v1 == 0) {
          unaff_s0 = unaff_s0 + (uint)unaff_s0[1] * 2 + 0x12;
          iVar1 = FUN_8003e654((uint)*unaff_s1);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_800401fc(*(undefined4 *)(iVar1 + 4));
          }
        }
      }
      else {
        if ((int)in_v1 < 5) {
          unaff_s0 = unaff_s0 + (uint)unaff_s0[1] * 2 + 0xe;
          iVar1 = FUN_8003e654((uint)*unaff_s1);
          if (iVar1 != 0) {
            FUN_8003e62c((uint)*unaff_s1);
            *unaff_s1 = unaff_s4;
            unaff_s1[1] = 0;
          }
        }
      }
    }
    unaff_s1 = unaff_s1 + 3;
    unaff_s2 = unaff_s2 + 1;
    if (unaff_s3 <= unaff_s2) break;
    in_v1 = (uint)*unaff_s0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ isOkayToPlaySound(int flags /*$s0*/, int spectralPlane /*$s1*/, int hidden /*$s2*/, int burning /*$s3*/)
 // line 218, offset 0x8003e9d8
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x8003E9D8

		/* begin block 1.1 */
			// Start line: 224
			// Start offset: 0x8003EA08
			// Variables:
		// 		int mask; // $v0
		// 		int tod; // $v1
		/* end block 1.1 */
		// End offset: 0x8003EA7C
		// End Line: 245
	/* end block 1 */
	// End offset: 0x8003EAD0
	// End Line: 259

	/* begin block 2 */
		// Start line: 515
	/* end block 2 */
	// End Line: 516

int isOkayToPlaySound(int flags,int spectralPlane,int hidden,int burning)

{
  uint uVar1;
  int iVar2;
  int in_v1;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  if (in_v1 == 0x76c) {
    uVar1 = unaff_s0 & 8;
  }
  else {
    uVar1 = unaff_s0 & 2;
  }
  iVar2 = 0;
  if ((((uVar1 != 0) && (((unaff_s0 & 0x10) == 0 || (iVar2 = 0, unaff_s1 != 0)))) &&
      (((unaff_s0 & 0x20) == 0 || (iVar2 = 0, unaff_s1 == 0)))) &&
     (((((unaff_s0 & 0x40) == 0 || (iVar2 = 0, unaff_s2 == 0)) &&
       (iVar2 = 1, (unaff_s0 & 0x80) != 0)) && (iVar2 = 0, unaff_s3 != 0)))) {
    iVar2 = 1;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ setPeriodicSoundStateOff(struct SoundInstance *soundInst /*$s0*/, struct ObjectPeriodicSound *sound /*$s1*/)
 // line 266, offset 0x8003eaec
	/* begin block 1 */
		// Start line: 611
	/* end block 1 */
	// End Line: 612

void setPeriodicSoundStateOff(SoundInstance *soundInst,ObjectPeriodicSound *sound)

{
  char in_v1;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 2) = *(char *)(unaff_s0 + 2) + ((char)soundInst - in_v1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ processPeriodicSound(struct _Position *position /*$fp*/, int livesInOnePlane /*$s4*/, int inSpectral /*$s5*/, int hidden /*$s7*/, int burning /*stack 16*/, struct SoundInstance *soundInst /*stack 20*/, struct ObjectPeriodicSound *sound /*stack 24*/)
 // line 280, offset 0x8003eb78
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x8003EB78
		// Variables:
	// 		struct SoundEffectChannel *channel; // $s0
	// 		int sfxIDNum; // $v1
	// 		int sfxToneID; // $a1
	// 		int spectralPlane; // $s2
	/* end block 1 */
	// End offset: 0x8003EFE8
	// End Line: 443

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

void processPeriodicSound
               (_Position *position,int livesInOnePlane,int inSpectral,int hidden,int burning,
               SoundInstance *soundInst,ObjectPeriodicSound *sound)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int in_v1;
  int unaff_s1;
  int unaff_s2;
  byte *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  if (in_v1 == 2) {
    iVar2 = FUN_8003e654((uint)*unaff_s3);
    iVar3 = FUN_80040184(*(undefined4 *)(iVar2 + 4));
    if (iVar3 == 0) {
      FUN_8003ea84();
      return;
    }
    iVar3 = FUN_80040164(*(undefined4 *)(iVar2 + 4));
    if (iVar3 == 0) {
      return;
    }
    if (unaff_s4 != 0) {
      if (unaff_s5 == 0) {
        if (unaff_s2 != 0) goto LAB_8003ef58;
      }
      else {
        if (unaff_s2 == 0) goto LAB_8003ef58;
      }
    }
    iVar3 = FUN_8003e970((uint)*(byte *)(unaff_s1 + 3));
    if (iVar3 == 0) {
LAB_8003ef58:
                    /* WARNING: Subroutine does not return */
      FUN_800401fc(*(undefined4 *)(iVar2 + 4));
    }
    if (unaff_s3[2] == 0) {
      if (*(char *)(unaff_s1 + 0x10) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_800401fc(*(undefined4 *)(iVar2 + 4));
      }
      if (*(char *)(unaff_s1 + 0xb) != '\0') {
                    /* WARNING: Subroutine does not return */
        *(ushort *)(iVar2 + 8) = (ushort)*(byte *)(unaff_s1 + 10);
        FUN_800bcddc();
      }
      if (*(short *)(unaff_s1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined2 *)(iVar2 + 0x16) = *(undefined2 *)(unaff_s1 + 6);
        FUN_800bcddc();
      }
      unaff_s3[2] = *(byte *)(unaff_s1 + 0xe);
      if (*(char *)(unaff_s1 + 0xf) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
    }
    else {
      unaff_s3[2] = unaff_s3[2] - 1;
    }
    bVar1 = unaff_s3[1];
    if ((bVar1 & 0x10) == 0) {
      unaff_s3[1] = bVar1 | 0x10;
    }
    else {
      unaff_s3[1] = bVar1 & 0xef;
      iVar3 = FUN_8003fc14();
      if (iVar3 == 0) goto LAB_8003ef58;
    }
  }
  else {
    if (in_v1 == 3) {
      if (unaff_s4 != 0) {
        if (unaff_s5 == 0) {
          if (unaff_s2 != 0) {
            return;
          }
        }
        else {
          if (unaff_s2 == 0) {
            return;
          }
        }
      }
      iVar2 = FUN_8003e970((uint)*(byte *)(unaff_s1 + 3));
      if (iVar2 != 0) {
        if (unaff_s3[2] == 0) {
          iVar2 = FUN_8003e5e4();
          if (iVar2 != 0) {
            *(ushort *)(iVar2 + 8) = (ushort)*(byte *)(unaff_s1 + 10);
            if (*(char *)(unaff_s1 + 0xb) != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_800bcddc();
            }
            *(undefined2 *)(iVar2 + 0x16) = *(undefined2 *)(unaff_s1 + 6);
            if (*(short *)(unaff_s1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_800bcddc();
            }
            if (1 < *(byte *)(unaff_s1 + 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_800bcddc();
            }
            iVar3 = FUN_8003f9d8();
            *(int *)(iVar2 + 4) = iVar3;
            if (iVar3 == 0) {
              FUN_8003e62c((uint)*unaff_s3);
              *unaff_s3 = 0xff;
            }
            else {
              unaff_s3[1] = 2;
              unaff_s3[2] = *(byte *)(unaff_s1 + 0xe);
              if (*(char *)(unaff_s1 + 0xf) != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_800bcddc();
              }
            }
          }
        }
        else {
          unaff_s3[2] = unaff_s3[2] - 1;
        }
      }
    }
    else {
      *unaff_s3 = 0xff;
      unaff_s3[1] = (byte)position;
      unaff_s3[2] = *(byte *)(unaff_s1 + 0xc);
      if (*(char *)(unaff_s1 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ processEventSound(struct _Position *position /*$s5*/, struct SoundInstance *soundInst /*$s1*/, struct ObjectEventSound *sound /*$s3*/)
 // line 449, offset 0x8003f018
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x8003F018
		// Variables:
	// 		struct SoundEffectChannel *channel; // $s0
	// 		int sfxIDNum; // $v1
	// 		int sfxToneID; // $a1
	// 		int spectralPlane; // $s4
	/* end block 1 */
	// End offset: 0x8003F398
	// End Line: 564

	/* begin block 2 */
		// Start line: 986
	/* end block 2 */
	// End Line: 987

void processEventSound(_Position *position,SoundInstance *soundInst,ObjectEventSound *sound)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *unaff_s1;
  byte unaff_s2;
  int unaff_s3;
  
  iVar3 = FUN_8003e654((uint)*unaff_s1);
  if (iVar3 == 0) {
    iVar3 = FUN_8003e970((uint)*(byte *)(unaff_s3 + 3));
    if ((iVar3 != 0) && (iVar3 = FUN_8003e5e4(), iVar3 != 0)) {
      *(ushort *)(iVar3 + 8) = (ushort)*(byte *)(unaff_s3 + 10);
      if (*(char *)(unaff_s3 + 0xb) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
      *(undefined2 *)(iVar3 + 0x16) = *(undefined2 *)(unaff_s3 + 6);
      if (*(short *)(unaff_s3 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
      if (1 < *(byte *)(unaff_s3 + 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
      iVar4 = FUN_8003f9d8();
      *(int *)(iVar3 + 4) = iVar4;
      if (iVar4 == 0) {
        FUN_8003e62c((uint)*unaff_s1);
        *unaff_s1 = 0xff;
      }
    }
  }
  else {
    iVar4 = FUN_80040184(*(undefined4 *)(iVar3 + 4));
    if (iVar4 == 0) {
      FUN_8003e62c((uint)*unaff_s1);
      *unaff_s1 = 0xff;
      unaff_s1[1] = unaff_s2;
    }
    else {
      iVar4 = FUN_80040164(*(undefined4 *)(iVar3 + 4));
      if (iVar4 != 0) {
        if (*(short *)(iVar3 + 0x18) != 0) {
          sVar2 = *(short *)(iVar3 + 0x22) + *(short *)(iVar3 + 0x20);
          *(short *)(iVar3 + 0x22) = sVar2;
          *(short *)(iVar3 + 0x16) = *(short *)(iVar3 + 0x16) + *(short *)(iVar3 + 0x1c);
          if (*(short *)(iVar3 + 0x1a) <= sVar2) {
            *(short *)(iVar3 + 0x16) = *(short *)(iVar3 + 0x16) + *(short *)(iVar3 + 0x1e);
            *(short *)(iVar3 + 0x22) = *(short *)(iVar3 + 0x22) - *(short *)(iVar3 + 0x1a);
          }
          *(short *)(iVar3 + 0x18) = *(short *)(iVar3 + 0x18) + -1;
        }
        if (*(short *)(iVar3 + 10) != 0) {
          sVar2 = *(short *)(iVar3 + 0x14) + *(short *)(iVar3 + 0x12);
          *(short *)(iVar3 + 0x14) = sVar2;
          *(short *)(iVar3 + 8) = *(short *)(iVar3 + 8) + *(short *)(iVar3 + 0xe);
          if (*(short *)(iVar3 + 0xc) <= sVar2) {
            *(short *)(iVar3 + 8) = *(short *)(iVar3 + 8) + *(short *)(iVar3 + 0x10);
            *(short *)(iVar3 + 0x14) = *(short *)(iVar3 + 0x14) - *(short *)(iVar3 + 0xc);
          }
          *(short *)(iVar3 + 10) = *(short *)(iVar3 + 10) + -1;
        }
        bVar1 = unaff_s1[1];
        if ((bVar1 & 0x10) == 0) {
          unaff_s1[1] = bVar1 | 0x10;
        }
        else {
          unaff_s1[1] = bVar1 & 0xef;
          iVar4 = FUN_8003fc14();
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_800401fc(*(undefined4 *)(iVar3 + 4));
          }
        }
        iVar4 = FUN_8003e970((uint)*(byte *)(unaff_s3 + 3));
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_800401fc(*(undefined4 *)(iVar3 + 4));
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_StartInstanceSound(struct SoundInstance *soundInst /*$a0*/)
 // line 566, offset 0x8003f3bc
	/* begin block 1 */
		// Start line: 1241
	/* end block 1 */
	// End Line: 1242

	/* begin block 2 */
		// Start line: 1242
	/* end block 2 */
	// End Line: 1243

void SOUND_StartInstanceSound(SoundInstance *soundInst)

{
  undefined in_v0;
  int unaff_s0;
  
  *(undefined *)(unaff_s0 + 1) = in_v0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_StopInstanceSound(struct SoundInstance *soundInst /*$s0*/)
 // line 573, offset 0x8003f3dc
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x8003F3DC
		// Variables:
	// 		struct SoundEffectChannel *channel; // $v0
	/* end block 1 */
	// End offset: 0x8003F420
	// End Line: 585

	/* begin block 2 */
		// Start line: 1255
	/* end block 2 */
	// End Line: 1256

void SOUND_StopInstanceSound(SoundInstance *soundInst)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int in_a1;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  
  if (((soundInst != (SoundInstance *)0x0) && (soundInst->channel == -0x42)) &&
     (soundInst->state == -0x11)) {
    pbVar4 = &soundInst[1].state;
    iVar5 = 0;
    if (soundInst->delay != 0) {
      do {
        bVar1 = *pbVar4;
        if (((bVar1 == 1) || (1 < bVar1)) || (puVar7 = (ushort *)(pbVar4 + 0x12), bVar1 != 0)) {
          uVar6 = (uint)pbVar4[1];
          puVar7 = (ushort *)(pbVar4 + 0xe);
          iVar3 = uVar6 * 2 + 0xe;
        }
        else {
          uVar6 = (uint)pbVar4[1];
          iVar3 = uVar6 * 2 + 0x12;
        }
        pbVar4 = pbVar4 + iVar3;
        if (iVar5 == in_a1) {
          while( true ) {
            uVar6 = uVar6 - 1;
            if (uVar6 == 0xffffffff) {
              return;
            }
            uVar2 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar5 = FUN_80053e34((uint)uVar2);
            if (iVar5 == 0) break;
            if (iVar5 == -1) {
              return;
            }
          }
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)soundInst->delay);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SOUND_IsInstanceSoundLoaded(unsigned char *sfxFileData /*$a0*/, long soundNumber /*$a1*/)
 // line 594, offset 0x8003f438
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x8003F438
		// Variables:
	// 		unsigned short *sfxIDList; // $s1
	// 		int numSounds; // $a3
	// 		int numSfxIDs; // $s0
	// 		int i; // $a2
	// 		int status; // $v0
	/* end block 1 */
	// End offset: 0x8003F51C
	// End Line: 652

	/* begin block 2 */
		// Start line: 1297
	/* end block 2 */
	// End Line: 1298

int SOUND_IsInstanceSoundLoaded(uchar *sfxFileData,long soundNumber)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int in_a2;
  int in_a3;
  uint uVar5;
  ushort *puVar6;
  uint unaff_s2;
  
  puVar6 = (ushort *)(sfxFileData + 0x12);
  do {
    uVar5 = (uint)sfxFileData[1];
    iVar3 = uVar5 * 2 + 0x12;
    while( true ) {
      sfxFileData = sfxFileData + iVar3;
      if (in_a2 == soundNumber) {
        while( true ) {
          uVar5 = uVar5 - 1;
          if (uVar5 == unaff_s2) {
            return 1;
          }
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          uVar4 = FUN_80053e34((uint)uVar2);
          if (uVar4 == 0) break;
          if (uVar4 == unaff_s2) {
            return -1;
          }
        }
        return 0;
      }
      in_a2 = in_a2 + 1;
      if (in_a3 <= in_a2) {
        return -1;
      }
      bVar1 = *sfxFileData;
      if (((bVar1 != 1) && (bVar1 < 2)) && (puVar6 = (ushort *)(sfxFileData + 0x12), bVar1 == 0))
      break;
      uVar5 = (uint)sfxFileData[1];
      puVar6 = (ushort *)(sfxFileData + 0xe);
      iVar3 = uVar5 * 2 + 0xe;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetInstanceSoundPitch(struct SoundInstance *soundInst /*$a0*/, long pitchChangeAmt /*$s1*/, long time /*$s0*/)
 // line 665, offset 0x8003f534
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x8003F534
		// Variables:
	// 		struct SoundEffectChannel *channel; // $a0
	/* end block 1 */
	// End offset: 0x8003F5E0
	// End Line: 687

	/* begin block 2 */
		// Start line: 1474
	/* end block 2 */
	// End Line: 1475

void SOUND_SetInstanceSoundPitch(SoundInstance *soundInst,long pitchChangeAmt,long time)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(soundInst + 10) = 1;
  sVar1 = (short)(unaff_s1 % unaff_s0);
  *(undefined2 *)&soundInst[0xb].state = 0;
  *(short *)(soundInst + 8) = (short)unaff_s0;
  *(short *)&soundInst[8].delay = (short)unaff_s0;
  if (unaff_s1 % unaff_s0 < 0) {
    sVar1 = -sVar1;
  }
  *(short *)&soundInst[10].delay = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetInstanceSoundVolume(struct SoundInstance *soundInst /*$a0*/, long volumeChangeAmt /*$s0*/, long time /*$s1*/)
 // line 694, offset 0x8003f5f4
	/* begin block 1 */
		// Start line: 695
		// Start offset: 0x8003F5F4
		// Variables:
	// 		struct SoundEffectChannel *channel; // $a0
	/* end block 1 */
	// End offset: 0x8003F6E4
	// End Line: 720

	/* begin block 2 */
		// Start line: 1535
	/* end block 2 */
	// End Line: 1536

void SOUND_SetInstanceSoundVolume(SoundInstance *soundInst,long volumeChangeAmt,long time)

{
  undefined2 uVar1;
  short sVar2;
  int in_v1;
  int iVar3;
  int unaff_s1;
  
  iVar3 = 0x7f - in_v1;
  if ((iVar3 < 0) && ((int)*(short *)&soundInst[2].delay + iVar3 < 0)) {
    iVar3 = -(int)*(short *)&soundInst[2].delay;
  }
  if (unaff_s1 == 0) {
    sVar2 = *(short *)&soundInst[2].delay;
    *(undefined2 *)&soundInst[3].state = 0;
    *(short *)&soundInst[2].delay = sVar2 + (short)iVar3;
  }
  else {
    *(short *)&soundInst[4].delay = (short)(iVar3 / unaff_s1);
    if (iVar3 < 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = 1;
    }
    *(undefined2 *)&soundInst[5].state = uVar1;
    sVar2 = (short)(iVar3 % unaff_s1);
    *(undefined2 *)&soundInst[6].delay = 0;
    *(short *)&soundInst[3].state = (short)unaff_s1;
    *(short *)(soundInst + 4) = (short)unaff_s1;
    if (iVar3 % unaff_s1 < 0) {
      sVar2 = -sVar2;
    }
    *(short *)(soundInst + 6) = sVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ processOneShotSound(struct _Position *position /*$s6*/, int hidden /*$t0*/, int burning /*$t1*/, long *triggerFlags /*$s4*/, struct SoundInstance *soundInst /*stack 16*/, struct ObjectOneShotSound *sound /*stack 20*/)
 // line 741, offset 0x8003f6f8
	/* begin block 1 */
		// Start line: 742
		// Start offset: 0x8003F6F8
		// Variables:
	// 		struct SoundEffectChannel *channel; // $s0
	// 		int sfxIDNum; // $v1
	// 		int sfxToneID; // $a1
	// 		long triggerMask; // $s3
	// 		int spectralPlane; // $a1
	/* end block 1 */
	// End offset: 0x8003FA18
	// End Line: 848

	/* begin block 2 */
		// Start line: 1482
	/* end block 2 */
	// End Line: 1483

void processOneShotSound(_Position *position,int hidden,int burning,long *triggerFlags,
                        SoundInstance *soundInst,ObjectOneShotSound *sound)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint *unaff_s4;
  byte unaff_s5;
  
  if (1 < (int)position) {
    if (position == (_Position *)&DAT_00000002) {
      if (unaff_s1[2] != 0) {
        unaff_s1[2] = unaff_s1[2] - 1;
        return;
      }
      unaff_s1[1] = 3;
      return;
    }
    if (position == (_Position *)&DAT_00000003) {
      iVar2 = FUN_8003e654((uint)*unaff_s1);
      if (iVar2 == 0) {
        iVar2 = FUN_8003e5e4();
        if (iVar2 == 0) {
          return;
        }
        *(ushort *)(iVar2 + 8) = (ushort)*(byte *)(unaff_s2 + 10);
        if (*(char *)(unaff_s2 + 0xb) != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_800bcddc();
        }
        *(undefined2 *)(iVar2 + 0x16) = *(undefined2 *)(unaff_s2 + 6);
        if (*(short *)(unaff_s2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_800bcddc();
        }
        if (*(byte *)(unaff_s2 + 1) < 2) {
          iVar3 = FUN_8003f9d8();
          *(int *)(iVar2 + 4) = iVar3;
          if (iVar3 != 0) {
            return;
          }
          FUN_8003e62c((uint)*unaff_s1);
          *unaff_s1 = 0xff;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_800bcddc();
      }
      iVar3 = FUN_80040184(*(undefined4 *)(iVar2 + 4));
      if (iVar3 == 0) {
        FUN_8003e62c((uint)*unaff_s1);
        *unaff_s1 = 0xff;
        unaff_s1[1] = unaff_s5;
        *unaff_s4 = *unaff_s4 & ~unaff_s3;
        return;
      }
      iVar3 = FUN_80040164(*(undefined4 *)(iVar2 + 4));
      if (iVar3 == 0) {
        return;
      }
      bVar1 = unaff_s1[1];
      if ((bVar1 & 0x10) == 0) {
        unaff_s1[1] = bVar1 | 0x10;
        return;
      }
      unaff_s1[1] = bVar1 & 0xef;
      iVar3 = FUN_8003fc14();
      if (iVar3 != 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_800401fc(*(undefined4 *)(iVar2 + 4));
    }
  }
  *unaff_s1 = 0xff;
  unaff_s1[1] = unaff_s5;
  unaff_s1[2] = 0;
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SOUND_Play3dSound(struct _Position *position /*$t0*/, int sfxToneID /*$s5*/, int pitch /*$s6*/, int maxVolume /*$s4*/, int minVolDist /*stack 16*/)
 // line 863, offset 0x8003fa40
	/* begin block 1 */
		// Start line: 864
		// Start offset: 0x8003FA40
		// Variables:
	// 		long dx; // $s1
	// 		long dy; // $s0
	// 		long dz; // $a0
	// 		long objDist; // $s3
	// 		long workMinVolDist; // $s2
	// 		int angle; // $v0
	// 		int quadrant; // $a0
	// 		int qpos; // $v1
	// 		int pan; // $a2
	// 		int volume; // $a1
	/* end block 1 */
	// End offset: 0x8003FC54
	// End Line: 956

	/* begin block 2 */
		// Start line: 1873
	/* end block 2 */
	// End Line: 1874

ulong SOUND_Play3dSound(_Position *position,int sfxToneID,int pitch,int maxVolume,int minVolDist)

{
  short sVar1;
  short sVar2;
  uint in_v0;
  int iVar3;
  short *in_t0;
  int iVar4;
  int iVar5;
  int unaff_s2;
  
  if ((in_v0 & 0x10) == 0) {
    iVar5 = (int)*in_t0 - (int)*(short *)(cwTransform2X.m._4_4_ + 0x5c);
    sVar1 = in_t0[2];
    sVar2 = *(short *)(cwTransform2X.m._4_4_ + 0x60);
    iVar4 = (int)in_t0[1] - (int)*(short *)(cwTransform2X.m._4_4_ + 0x5e);
  }
  else {
    sVar1 = in_t0[2];
    iVar5 = (int)*in_t0 - (int)(short)standardMenu.type;
    iVar4 = (int)in_t0[1] - (int)standardMenu.type._2_2_;
    sVar2 = (short)standardMenu.lower;
  }
  iVar3 = FUN_80039850(iVar5 * iVar5 + iVar4 * iVar4 +
                       ((int)sVar1 - (int)sVar2) * ((int)sVar1 - (int)sVar2));
  if (iVar3 <= unaff_s2) {
                    /* WARNING: Subroutine does not return */
    FUN_800bd18c(iVar4,iVar5);
  }
  return 0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SOUND_Update3dSound(struct _Position *position /*$t0*/, unsigned long handle /*$s5*/, int pitch /*$s6*/, int maxVolume /*$s4*/, int minVolDist /*stack 16*/)
 // line 962, offset 0x8003fc7c
	/* begin block 1 */
		// Start line: 963
		// Start offset: 0x8003FC7C
		// Variables:
	// 		long dx; // $s1
	// 		long dy; // $s0
	// 		long dz; // $a0
	// 		long objDist; // $s3
	// 		long workMinVolDist; // $s2
	// 		int angle; // $v0
	// 		int quadrant; // $a0
	// 		int qpos; // $v1
	// 		int pan; // $a2
	// 		int volume; // $a1
	/* end block 1 */
	// End offset: 0x8003FE88
	// End Line: 1054

	/* begin block 2 */
		// Start line: 2084
	/* end block 2 */
	// End Line: 2085

ulong SOUND_Update3dSound(_Position *position,ulong handle,int pitch,int maxVolume,int minVolDist)

{
  short sVar1;
  short sVar2;
  int in_v0;
  int iVar3;
  short *in_t0;
  int iVar4;
  int iVar5;
  int unaff_s2;
  
  if (in_v0 == 0) {
    iVar5 = (int)*in_t0 - (int)*(short *)(cwTransform2X.m._4_4_ + 0x5c);
    sVar1 = in_t0[2];
    sVar2 = *(short *)(cwTransform2X.m._4_4_ + 0x60);
    iVar4 = (int)in_t0[1] - (int)*(short *)(cwTransform2X.m._4_4_ + 0x5e);
  }
  else {
    sVar1 = in_t0[2];
    iVar5 = (int)*in_t0 - (int)(short)standardMenu.type;
    iVar4 = (int)in_t0[1] - (int)standardMenu.type._2_2_;
    sVar2 = (short)standardMenu.lower;
  }
  iVar3 = FUN_80039850(iVar5 * iVar5 + iVar4 * iVar4 +
                       ((int)sVar1 - (int)sVar2) * ((int)sVar1 - (int)sVar2));
  if (iVar3 <= unaff_s2) {
                    /* WARNING: Subroutine does not return */
    FUN_800bd18c(iVar4,iVar5);
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_HandleGlobalValueSignal(int name /*$a0*/, long data /*$a1*/)
 // line 1087, offset 0x8003feb0
	/* begin block 1 */
		// Start line: 2174
	/* end block 1 */
	// End Line: 2175

	/* begin block 2 */
		// Start line: 2314
	/* end block 2 */
	// End Line: 2315

void SOUND_HandleGlobalValueSignal(int name,long data)

{
  uchar unaff_s0;
  
  uRam800d0f7c = 0x3fff;
  FUN_8003ff48(0x7f,data + 0x5c6c);
  FUN_8003ff7c(0x7f);
  SOUND_SetMusicVolume(0x50);
  clearRect[0].code = '\0';
  clearRect[0].r0 = unaff_s0;
  clearRect[0].g0 = unaff_s0;
  clearRect[0].b0 = unaff_s0;
  FUN_80040370();
  FUN_80053fbc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_Init()
 // line 1100, offset 0x8003feb8
	/* begin block 1 */
		// Start line: 1101
		// Start offset: 0x8003FEB8
		// Variables:
	// 		struct AadInitAttr initAttr; // stack offset -32
	/* end block 1 */
	// End offset: 0x8003FEB8
	// End Line: 1101

	/* begin block 2 */
		// Start line: 2339
	/* end block 2 */
	// End Line: 2340

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_Init(void)

{
  undefined4 in_v0;
  uchar unaff_s0;
  
  uRam800d0f7c = in_v0;
  FUN_8003ff48(0x7f);
  FUN_8003ff7c(0x7f);
  SOUND_SetMusicVolume(0x50);
  clearRect[0].code = '\0';
  clearRect[0].r0 = unaff_s0;
  clearRect[0].g0 = unaff_s0;
  clearRect[0].b0 = unaff_s0;
  FUN_80040370();
  FUN_80053fbc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_Free()
 // line 1195, offset 0x8003ff6c
	/* begin block 1 */
		// Start line: 2571
	/* end block 1 */
	// End Line: 2572

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_Free(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetMusicVariable(int variable /*$a0*/, int value /*$a1*/)
 // line 1228, offset 0x8003ff90
	/* begin block 1 */
		// Start line: 2456
	/* end block 1 */
	// End Line: 2457

void SOUND_SetMusicVariable(int variable,int value)

{
  __timerEvent = variable;
  FUN_80051830();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetMusicVolume(int newVolume /*$a0*/)
 // line 1238, offset 0x8003ffb0
	/* begin block 1 */
		// Start line: 2476
	/* end block 1 */
	// End Line: 2477

void SOUND_SetMusicVolume(int newVolume)

{
  if (newVolume == -1) {
    newVolume = clearRect[0].tag;
  }
  clearRect[0].tag = newVolume;
  return;
}



// autogenerated function stub: 
// void /*$ra*/ SOUND_SetSfxVolume(int newVolume /*$a0*/)
void SOUND_SetSfxVolume(int newVolume)
{ // line 1245, offset 0x8003ffe4
	/* begin block 1 */
		// Start line: 2631
	/* end block 1 */
	// End Line: 2632

}


// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetVoiceVolume(int newVolume /*$a0*/)
 // line 1252, offset 0x80040018
	/* begin block 1 */
		// Start line: 2645
	/* end block 1 */
	// End Line: 2646

	/* begin block 2 */
		// Start line: 2646
	/* end block 2 */
	// End Line: 2647

void SOUND_SetVoiceVolume(int newVolume)

{
  FUN_80054884();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_PauseAllSound()
 // line 1268, offset 0x80040038
	/* begin block 1 */
		// Start line: 2536
	/* end block 1 */
	// End Line: 2537

	/* begin block 2 */
		// Start line: 2664
	/* end block 2 */
	// End Line: 2665

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_PauseAllSound(void)

{
  int in_v0;
  
  if (in_v0 != 0) {
    FUN_80056aa4();
    FUN_800543b0();
    FUN_80054040();
    FUN_80054868();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_ResumeAllSound()
 // line 1277, offset 0x80040068
	/* begin block 1 */
		// Start line: 2682
	/* end block 1 */
	// End Line: 2683

	/* begin block 2 */
		// Start line: 2683
	/* end block 2 */
	// End Line: 2684

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_ResumeAllSound(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_StopAllSound()
 // line 1286, offset 0x80040098
	/* begin block 1 */
		// Start line: 2701
	/* end block 1 */
	// End Line: 2702

	/* begin block 2 */
		// Start line: 2702
	/* end block 2 */
	// End Line: 2703

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_StopAllSound(void)

{
  return;
}



// autogenerated function stub: 
// void /*$ra*/ SOUND_ResetAllSound()
void SOUND_ResetAllSound()
{ // line 1297, offset 0x800400d8
	/* begin block 1 */
		// Start line: 2724
	/* end block 1 */
	// End Line: 2725

	/* begin block 2 */
		// Start line: 2725
	/* end block 2 */
	// End Line: 2726

}


// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_MusicOff()
 // line 1306, offset 0x80040108
	/* begin block 1 */
		// Start line: 1307
		// Start offset: 0x80040108
		// Variables:
	// 		int slotNumber; // $s0
	/* end block 1 */
	// End offset: 0x80040158
	// End Line: 1322

	/* begin block 2 */
		// Start line: 2743
	/* end block 2 */
	// End Line: 2744

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_MusicOff(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_80054490(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_MusicOn()
 // line 1324, offset 0x8004016c
	/* begin block 1 */
		// Start line: 1325
		// Start offset: 0x8004016C
		// Variables:
	// 		int slotNumber; // $s0
	/* end block 1 */
	// End offset: 0x80040194
	// End Line: 1330

	/* begin block 2 */
		// Start line: 2795
	/* end block 2 */
	// End Line: 2796

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_MusicOn(void)

{
  FUN_80056ad4();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SfxOff()
 // line 1333, offset 0x800401a4
	/* begin block 1 */
		// Start line: 2817
	/* end block 1 */
	// End Line: 2818

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_SfxOff(void)

{
  FUN_80056c70();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SfxOn()
 // line 1339, offset 0x800401c4
	/* begin block 1 */
		// Start line: 2829
	/* end block 1 */
	// End Line: 2830

	/* begin block 2 */
		// Start line: 2831
	/* end block 2 */
	// End Line: 2832

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_SfxOn(void)

{
  ulong handle;
  
  if (clearRect[0].r0 == '\0') {
    SndIsPlayingOrRequested(handle);
    return;
  }
  FUN_80056a04(handle,0x5a,0x40,0);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SndIsPlaying(unsigned long handle /*$a0*/)
 // line 1361, offset 0x800401cc
	/* begin block 1 */
		// Start line: 2722
	/* end block 1 */
	// End Line: 2723

int SndIsPlaying(ulong handle)

{
  int in_v0;
  int iVar1;
  
  if (in_v0 == 0) {
    iVar1 = SndIsPlayingOrRequested(handle);
    return iVar1;
  }
  iVar1 = FUN_80056a04(handle,0x5a,0x40,0);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SndIsPlayingOrRequested(unsigned long handle /*$a0*/)
 // line 1366, offset 0x800401ec
	/* begin block 1 */
		// Start line: 2863
	/* end block 1 */
	// End Line: 2864

int SndIsPlayingOrRequested(ulong handle)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SndTypeIsPlayingOrRequested(unsigned int sfxToneID /*$a0*/)
 // line 1376, offset 0x8004020c
	/* begin block 1 */
		// Start line: 2752
	/* end block 1 */
	// End Line: 2753

int SndTypeIsPlayingOrRequested(uint sfxToneID)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SndPlay(unsigned int sample /*$a0*/)
 // line 1387, offset 0x8004022c
	/* begin block 1 */
		// Start line: 2774
	/* end block 1 */
	// End Line: 2775

	/* begin block 2 */
		// Start line: 2887
	/* end block 2 */
	// End Line: 2888

ulong SndPlay(uint sample)

{
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SndEndLoop(unsigned long handle /*$a0*/)
 // line 1395, offset 0x80040264
	/* begin block 1 */
		// Start line: 2901
	/* end block 1 */
	// End Line: 2902

	/* begin block 2 */
		// Start line: 2905
	/* end block 2 */
	// End Line: 2906

void SndEndLoop(ulong handle)

{
  uint in_a1;
  uint in_a2;
  short in_a3;
  
  if (clearRect[0].r0 != '\0') {
    FUN_80056d28(handle,in_a1 & 0xffff,in_a2 & 0xffff,(int)in_a3);
  }
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SndPlayVolPan(unsigned int sample /*$a0*/, unsigned short vol /*$a1*/, unsigned short pan /*$a2*/, short pitch /*$a3*/)
 // line 1400, offset 0x80040284
	/* begin block 1 */
		// Start line: 1401
		// Start offset: 0x80040284
	/* end block 1 */
	// End offset: 0x800402B0
	// End Line: 1411

	/* begin block 2 */
		// Start line: 2915
	/* end block 2 */
	// End Line: 2916

	/* begin block 3 */
		// Start line: 2918
	/* end block 3 */
	// End Line: 2919

ulong SndPlayVolPan(uint sample,ushort vol,ushort pan,short pitch)

{
  ulong in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SndUpdateVolPanPitch(unsigned long handle /*$a0*/, unsigned short vol /*$a1*/, unsigned short pan /*$a2*/, short pitch /*$a3*/)
 // line 1421, offset 0x800402c0
	/* begin block 1 */
		// Start line: 2842
	/* end block 1 */
	// End Line: 2843

ulong SndUpdateVolPanPitch(ulong handle,ushort vol,ushort pan,short pitch)

{
  ulong in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ musicLoadReturnFunc(int dynamicBankIndex /*$a0*/, int errorStatus /*$a1*/)
 // line 1454, offset 0x80040308
	/* begin block 1 */
		// Start line: 3019
	/* end block 1 */
	// End Line: 3020

	/* begin block 2 */
		// Start line: 3021
	/* end block 2 */
	// End Line: 3022

void musicLoadReturnFunc(int dynamicBankIndex,int errorStatus)

{
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + -0xc) = soundEffectChannelTbl[3]._8_4_;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ musicFadeoutReturnFunc()
 // line 1461, offset 0x8004031c
	/* begin block 1 */
		// Start line: 3034
	/* end block 1 */
	// End Line: 3035

	/* begin block 2 */
		// Start line: 3035
	/* end block 2 */
	// End Line: 3036

/* WARNING: Unknown calling convention yet parameter storage is locked */

void musicFadeoutReturnFunc(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ musicEndCallbackFunc(long userData /*$a0*/, int slot /*$a1*/, int loopFlag /*$a2*/)
 // line 1467, offset 0x80040330
	/* begin block 1 */
		// Start line: 3046
	/* end block 1 */
	// End Line: 3047

void musicEndCallbackFunc(long userData,int slot,int loopFlag)

{
  int in_v0;
  long *plVar1;
  int in_v1;
  
  plVar1 = (long *)(in_v0 * 8 + in_v1);
  *plVar1 = userData;
  plVar1[1] = slot;
  if ((int)SoundEffectChannel_ARRAY_800d1374[0].handle < 3) {
    soundEffectChannelTbl[4]._32_4_ = soundEffectChannelTbl[4]._32_4_ + 1 & 3;
    SoundEffectChannel_ARRAY_800d1374[0].handle = SoundEffectChannel_ARRAY_800d1374[0].handle + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_PutMusicCommand(int cmdType /*$a0*/, int cmdData /*$a1*/)
 // line 1487, offset 0x80040390
	/* begin block 1 */
		// Start line: 1489
		// Start offset: 0x80040390
		// Variables:
	// 		struct MusicLoadCmd *cmd; // $v0
	/* end block 1 */
	// End offset: 0x800403D0
	// End Line: 1498

	/* begin block 2 */
		// Start line: 3086
	/* end block 2 */
	// End Line: 3087

	/* begin block 3 */
		// Start line: 3087
	/* end block 3 */
	// End Line: 3088

void SOUND_PutMusicCommand(int cmdType,int cmdData)

{
  soundEffectChannelTbl[4]._32_4_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_MusicInit()
 // line 1501, offset 0x800403d8
	/* begin block 1 */
		// Start line: 3115
	/* end block 1 */
	// End Line: 3116

	/* begin block 2 */
		// Start line: 3119
	/* end block 2 */
	// End Line: 3120

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_MusicInit(void)

{
  int iVar1;
  undefined4 in_v1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puStack00000010;
  undefined uStack00000018;
  undefined uStack00000019;
  undefined uStack0000001a;
  undefined uStack0000001b;
  undefined uStack0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined2 in_stack_00000038;
  char in_stack_0000003a;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined2 in_stack_00000058;
  char in_stack_0000005a;
  
  switch(in_v1) {
  case 0:
    if (SoundEffectChannel_ARRAY_800d1374[0].handle != 0) {
      if (*(int *)(&soundEffectChannelTbl[4].inUse + SoundEffectChannel_ARRAY_800d1374[0]._0_4_ * 8)
          == 0) {
        soundEffectChannelTbl[3].handle = 0xb;
        soundEffectChannelTbl[3]._8_4_ = 0xd;
        soundEffectChannelTbl[3]._24_4_ =
             (&soundEffectChannelTbl[4].handle)[SoundEffectChannel_ARRAY_800d1374[0]._0_4_ * 2];
        FUN_800518a4(0,0xfffffffd,&DAT_800402b4);
      }
      SoundEffectChannel_ARRAY_800d1374[0]._0_4_ =
           SoundEffectChannel_ARRAY_800d1374[0]._0_4_ + 1 & 3;
      SoundEffectChannel_ARRAY_800d1374[0].handle = SoundEffectChannel_ARRAY_800d1374[0].handle - 1;
      return;
    }
    if (soundEffectChannelTbl[3]._20_4_ != 0) {
      soundEffectChannelTbl[3]._20_4_ = soundEffectChannelTbl[3]._20_4_ + -1;
      return;
    }
    if ((aadMem->sramDefragInfo).status != 0) {
      return;
    }
    soundEffectChannelTbl[3]._20_4_ = 0x1e;
    iVar1 = FUN_80059340(*(undefined4 *)(loadStatus.bigFile.searchDirID + 0x38));
    if (iVar1 != 0) {
      if (*(undefined **)(iVar1 + 0xf4) == (undefined *)0x0) {
        if ((char)soundEffectChannelTbl[3].pitchChangePerUpdate != '\0') {
          soundEffectChannelTbl[3].pitchChangePerUpdate._0_1_ = 0;
          soundEffectChannelTbl[3].handle = 0xb;
          soundEffectChannelTbl[3]._8_4_ = 0xc;
          FUN_800518a4(0,0xffffffff,&DAT_800402b4);
          return;
        }
        return;
      }
      uStack00000018 = **(undefined **)(iVar1 + 0xf4);
      uStack00000019 = *(undefined *)(*(int *)(iVar1 + 0xf4) + 1);
      if (soundEffectChannelTbl[3]._24_4_ == 0xffffffff) {
        soundEffectChannelTbl[3]._24_4_ = SEXT24(loadStatus.decompressLen._2_2_);
      }
      if (soundEffectChannelTbl[3]._24_4_ == 0) {
        uStack0000001a = 0x6d;
        uStack0000001b = 0x61;
      }
      else {
        uStack0000001a = 0x73;
        uStack0000001b = 0x70;
      }
      uStack0000001c = 0;
      iVar1 = FUN_80074604(&stack0x00000018,0x800d1348);
      if (iVar1 != 0) {
        if ((char)soundEffectChannelTbl[3].pitchChangePerUpdate == '\0') {
          FUN_800741fc(&stack0x00000020,s__kain2_music__s__s_snd_800cece0,&stack0x00000018,
                       &stack0x00000018);
          FUN_800741fc(&stack0x00000040,s__kain2_music__s__s_smp_800ced30,&stack0x00000018,
                       &stack0x00000018);
          iVar1 = FUN_80037944(&stack0x00000020);
          if (iVar1 == 0) {
            return;
          }
          FUN_800bd564(0x800d1348,&stack0x00000018);
          uVar2 = 0;
          uVar3 = 1;
          soundEffectChannelTbl[3].handle = 1;
          soundEffectChannelTbl[3]._8_4_ = 2;
        }
        else {
          FUN_800741fc(&stack0x00000020,s__kain2_music__s__s_snd_800cece0,&stack0x00000018,
                       &stack0x00000018);
          iVar1 = FUN_80037944(&stack0x00000020);
          if (iVar1 == 0) {
            return;
          }
          FUN_800bd564(0x800d1348,&stack0x00000018);
          uVar2 = 1;
          uVar3 = 0;
          in_stack_00000020 = s__kain2_music_uwtr_uwtr_snd_800cecf8._0_4_;
          in_stack_00000024 = s__kain2_music_uwtr_uwtr_snd_800cecf8._4_4_;
          in_stack_00000028 = s__kain2_music_uwtr_uwtr_snd_800cecf8._8_4_;
          in_stack_0000002c = s__kain2_music_uwtr_uwtr_snd_800cecf8._12_4_;
          in_stack_00000030 = s__kain2_music_uwtr_uwtr_snd_800cecf8._16_4_;
          in_stack_00000034 = s__kain2_music_uwtr_uwtr_snd_800cecf8._20_4_;
          in_stack_00000038 = s__kain2_music_uwtr_uwtr_snd_800cecf8._24_2_;
          in_stack_0000003a = s__kain2_music_uwtr_uwtr_snd_800cecf8[26];
          in_stack_00000040 = s__kain2_music_uwtr_uwtr_smp_800ced14._0_4_;
          in_stack_00000044 = s__kain2_music_uwtr_uwtr_smp_800ced14._4_4_;
          in_stack_00000048 = s__kain2_music_uwtr_uwtr_smp_800ced14._8_4_;
          in_stack_0000004c = s__kain2_music_uwtr_uwtr_smp_800ced14._12_4_;
          in_stack_00000050 = s__kain2_music_uwtr_uwtr_smp_800ced14._16_4_;
          in_stack_00000054 = s__kain2_music_uwtr_uwtr_smp_800ced14._20_4_;
          in_stack_00000058 = s__kain2_music_uwtr_uwtr_smp_800ced14._24_2_;
          in_stack_0000005a = s__kain2_music_uwtr_uwtr_smp_800ced14[26];
          soundEffectChannelTbl[3].handle = 3;
          soundEffectChannelTbl[3]._8_4_ = 4;
        }
        puStack00000010 = &LAB_800402a0;
        FUN_80051ef8(&stack0x00000020,&stack0x00000040,uVar2,uVar3);
        return;
      }
      return;
    }
    return;
  default:
    goto LAB_800408b0;
  case 2:
    iVar1 = FUN_800540e8(0,0,0);
    if (iVar1 == 0) {
      FUN_800542c8(0);
    }
    break;
  case 4:
    if (soundEffectChannelTbl[3]._12_4_ != 0) {
      soundEffectChannelTbl[3].handle = 0;
      return;
    }
    soundEffectChannelTbl[3].handle = 5;
    soundEffectChannelTbl[3]._8_4_ = 6;
    soundEffectChannelTbl[3]._16_4_ = 1;
    goto LAB_80040828;
  case 6:
    if ((aadMem->sramDefragInfo).status == 0) {
      FUN_800741fc(&stack0x00000020,s__kain2_music__s__s_snd_800cece0,0x800d1348,0x800d1348);
      FUN_800741fc(&stack0x00000040,s__kain2_music__s__s_smp_800ced30,0x800d1348,0x800d1348);
      puStack00000010 = &LAB_800402a0;
      FUN_80051ef8(&stack0x00000020,&stack0x00000040,0,1);
      soundEffectChannelTbl[3].handle = 7;
      soundEffectChannelTbl[3]._8_4_ = 8;
      return;
    }
    return;
  case 8:
    if (soundEffectChannelTbl[3]._12_4_ != 0) {
      soundEffectChannelTbl[3].handle = 0;
      return;
    }
    soundEffectChannelTbl[3].handle = 9;
    soundEffectChannelTbl[3]._8_4_ = 10;
    soundEffectChannelTbl[3]._16_4_ = 0;
LAB_80040828:
    FUN_80054764(FUN_800402c8,0);
    FUN_8005477c(0x7f,1);
    return;
  case 10:
    FUN_8005234c(1);
    break;
  case 0xc:
    FUN_800543b0();
    FUN_8005234c(0);
    FUN_800518a4(DAT_800d0f80,1,0);
    break;
  case 0xd:
    FUN_800543b0();
    FUN_8005234c(0);
    FUN_800518a4(DAT_800d0f80,1,0);
    soundEffectChannelTbl[3].pitchChangePerUpdate._0_1_ = '\0';
    soundEffectChannelTbl[3]._20_4_ = 0;
  }
  soundEffectChannelTbl[3].handle = 0;
LAB_800408b0:
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SOUND_IsMusicLoading()
 // line 1512, offset 0x80040404
	/* begin block 1 */
		// Start line: 3140
	/* end block 1 */
	// End Line: 3141

	/* begin block 2 */
		// Start line: 3141
	/* end block 2 */
	// End Line: 3142

/* WARNING: Unknown calling convention yet parameter storage is locked */

int SOUND_IsMusicLoading(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x80040404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_ProcessMusicLoad()
 // line 1533, offset 0x80040434
	/* begin block 1 */
		// Start line: 1534
		// Start offset: 0x80040434
		// Variables:
	// 		char musicName[8]; // stack offset -88
	// 		char sndFileName[32]; // stack offset -80
	// 		char smpFileName[32]; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1546
			// Start offset: 0x80040484
			// Variables:
		// 		struct MusicLoadCmd *cmd; // $v1
		/* end block 1.1 */
		// End offset: 0x800404F4
		// End Line: 1558

		/* begin block 1.2 */
			// Start line: 1562
			// Start offset: 0x80040504
			// Variables:
		// 		struct Level *level; // $v1
		/* end block 1.2 */
		// End offset: 0x8004074C
		// End Line: 1630
	/* end block 1 */
	// End offset: 0x80040918
	// End Line: 1724

	/* begin block 2 */
		// Start line: 3182
	/* end block 2 */
	// End Line: 3183

	/* begin block 3 */
		// Start line: 3188
	/* end block 3 */
	// End Line: 3189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_ProcessMusicLoad(void)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v0 == 0) {
    *(undefined4 *)(unaff_s0 + -0x48) = 0xb;
    soundEffectChannelTbl[3]._8_4_ = 0xd;
    soundEffectChannelTbl[3]._24_4_ = *(undefined4 *)(in_v1 + 4);
    FUN_800518a4(0,0xfffffffd,&DAT_800402b4);
  }
  SoundEffectChannel_ARRAY_800d1374[0]._0_4_ = SoundEffectChannel_ARRAY_800d1374[0]._0_4_ + 1 & 3;
  SoundEffectChannel_ARRAY_800d1374[0].handle = SoundEffectChannel_ARRAY_800d1374[0].handle - 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_UpdateSound()
 // line 1730, offset 0x80040930
	/* begin block 1 */
		// Start line: 3609
	/* end block 1 */
	// End Line: 3610

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SOUND_UpdateSound(void)

{
  int in_a0;
  
  FUN_8002d310(in_a0 + -0x12b8,soundEffectChannelTbl[2]._32_4_,soundEffectChannelTbl[2]._28_4_,
               soundEffectChannelTbl[3]._0_4_);
  if (clearRect[0].g0 != '\0') {
    FUN_800403cc();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_PlaneShift(int newPlane /*$a1*/)
 // line 1763, offset 0x800409dc
	/* begin block 1 */
		// Start line: 3675
	/* end block 1 */
	// End Line: 3676

void SOUND_PlaneShift(int newPlane)

{
  int in_v1;
  
  if (in_v1 == 7) {
    soundEffectChannelTbl[3]._8_4_ = 0;
                    /* WARNING: Subroutine does not return */
    FUN_800bf428();
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bf428();
}



// autogenerated function stub: 
// void /*$ra*/ SOUND_ShutdownMusic()
void SOUND_ShutdownMusic()
{ // line 1793, offset 0x80040a18
	/* begin block 1 */
		// Start line: 1794
		// Start offset: 0x80040A18
	/* end block 1 */
	// End offset: 0x80040A94
	// End Line: 1814

	/* begin block 2 */
		// Start line: 3736
	/* end block 2 */
	// End Line: 3737

}


// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_SetMusicModifier(long modifier /*$a0*/)
 // line 1826, offset 0x80040acc
	/* begin block 1 */
		// Start line: 3804
	/* end block 1 */
	// End Line: 3805

void SOUND_SetMusicModifier(long modifier)

{
  FUN_8003ff28(1,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUND_ResetMusicModifier(long modifier /*$a0*/)
 // line 1883, offset 0x80040b8c
	/* begin block 1 */
		// Start line: 3918
	/* end block 1 */
	// End Line: 3919

void SOUND_ResetMusicModifier(long modifier)

{
  FUN_8003ff28(3,0);
  return;
}





