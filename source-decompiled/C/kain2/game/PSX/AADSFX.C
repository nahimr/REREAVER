#include "THISDUST.H"
#include "AADSFX.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ aadPlaySfx(unsigned int toneID /*$a0*/, int volume /*$s1*/, int pan /*$s2*/, int pitchOffset /*$s0*/)
 // line 19, offset 0x800569dc
	/* begin block 1 */
		// Start line: 20
		// Start offset: 0x800569DC
		// Variables:
	// 		unsigned long handle; // $s0
	/* end block 1 */
	// End offset: 0x800569DC
	// End Line: 20

	/* begin block 2 */
		// Start line: 38
	/* end block 2 */
	// End Line: 39

ulong aadPlaySfx(uint toneID,int volume,int pan,int pitchOffset)

{
  ulong in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ aadStopSfx(unsigned long handle /*$s0*/)
 // line 37, offset 0x80056a40
	/* begin block 1 */
		// Start line: 75
	/* end block 1 */
	// End Line: 76

ulong aadStopSfx(ulong handle)

{
  ulong unaff_s0;
  
  FUN_80056db4();
  return unaff_s0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadStopAllSfx()
 // line 45, offset 0x80056a7c
	/* begin block 1 */
		// Start line: 92
	/* end block 1 */
	// End Line: 93

/* WARNING: Unknown calling convention yet parameter storage is locked */

void aadStopAllSfx(void)

{
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
  FUN_80056db4();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ aadIsSfxPlaying(unsigned long handle /*$a0*/)
 // line 53, offset 0x80056aac
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x80056AAC
		// Variables:
	// 		struct AadSynthVoice *voice; // $v1
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80056B14
	// End Line: 69

	/* begin block 2 */
		// Start line: 109
	/* end block 2 */
	// End Line: 110

	/* begin block 3 */
		// Start line: 110
	/* end block 3 */
	// End Line: 111

	/* begin block 4 */
		// Start line: 114
	/* end block 4 */
	// End Line: 115

int aadIsSfxPlaying(ulong handle)

{
  int iVar1;
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
  iVar1 = FUN_80056db4(handle,0,0,0);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ aadIsSfxPlayingOrRequested(unsigned long handle /*$s0*/)
 // line 72, offset 0x80056b1c
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x80056B1C
		// Variables:
	// 		int commandOut; // $a1
	// 		int i; // $a2
	// 		struct AadSfxCommand *sfxCmd; // $v1
	/* end block 1 */
	// End offset: 0x80056BC4
	// End Line: 89

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

int aadIsSfxPlayingOrRequested(ulong handle)

{
  byte bVar1;
  ulong in_v0;
  int in_a1;
  int in_a2;
  int in_a3;
  uint in_t0;
  uint in_t1;
  
  do {
    if (in_v0 == handle) {
      return 1;
    }
    do {
      in_a1 = in_a1 + 1;
      in_a2 = in_a2 + 0x1c;
      if (0x17 < in_a1) {
        return 0;
      }
    } while ((((uint)*(byte *)(in_a3 + in_a2 + 8) != in_t1) ||
             (bVar1 = *(byte *)(in_a3 + in_a1 + 0x47c), bVar1 == 0)) || ((uint)bVar1 == in_t0));
    in_v0 = *(ulong *)(in_a3 + in_a2 + 4);
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ aadIsSfxTypePlaying(unsigned int toneID /*$a0*/)
 // line 93, offset 0x80056bd4
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80056BD4
		// Variables:
	// 		struct AadSynthVoice *voice; // $v1
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80056C40
	// End Line: 108

	/* begin block 2 */
		// Start line: 202
	/* end block 2 */
	// End Line: 203

	/* begin block 3 */
		// Start line: 203
	/* end block 3 */
	// End Line: 204

	/* begin block 4 */
		// Start line: 207
	/* end block 4 */
	// End Line: 208

int aadIsSfxTypePlaying(uint toneID)

{
  char *pcVar1;
  int in_a1;
  int in_a2;
  int in_a3;
  int unaff_s0;
  
  while( true ) {
    if (in_a2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_800bf428();
    }
    pcVar1 = (char *)((int)&aadMem->updateCounter + toneID);
    if ((*pcVar1 == '\0') && (*(int *)(pcVar1 + 4) == unaff_s0)) break;
    in_a1 = in_a1 + 1;
    toneID = toneID + 0xc;
    if (in_a1 == in_a3) {
      toneID = 0x54;
      in_a1 = 0;
    }
    in_a2 = in_a2 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bf428();
}



// decompiled code
// original method signature: 
// int /*$ra*/ aadIsSfxTypePlayingOrRequested(unsigned int sfxToneID /*$s0*/)
 // line 111, offset 0x80056c48
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x80056C48
		// Variables:
	// 		int commandOut; // $a1
	// 		int i; // $a2
	// 		struct AadSfxCommand *sfxCmd; // $v1
	/* end block 1 */
	// End offset: 0x80056CF0
	// End Line: 129

	/* begin block 2 */
		// Start line: 244
	/* end block 2 */
	// End Line: 245

int aadIsSfxTypePlayingOrRequested(uint sfxToneID)

{
  byte bVar1;
  uint in_v0;
  int in_a1;
  int in_a2;
  int in_a3;
  uint in_t0;
  uint in_t1;
  
  do {
    if (in_v0 != in_t0) {
      return 1;
    }
    do {
      in_a1 = in_a1 + 1;
      in_a2 = in_a2 + 0x1c;
      if (0x17 < in_a1) {
        return 0;
      }
    } while ((((uint)*(byte *)(in_a3 + in_a2 + 8) != in_t1) ||
             ((uint)*(ushort *)(in_a3 + in_a2 + 4) != sfxToneID)) ||
            (bVar1 = *(byte *)(in_a3 + in_a1 + 0x47c), in_v0 = (uint)bVar1, bVar1 == 0));
  } while( true );
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ aadSetSfxVolPanPitch(unsigned long handle /*$s0*/, int volume /*$a1*/, int pan /*$a2*/, int pitch /*$a3*/)
 // line 160, offset 0x80056d00
	/* begin block 1 */
		// Start line: 320
	/* end block 1 */
	// End Line: 321

ulong aadSetSfxVolPanPitch(ulong handle,int volume,int pan,int pitch)

{
  char *pcVar1;
  uint unaff_s0;
  
  while( true ) {
    if (pan == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_800bf428();
    }
    pcVar1 = (char *)((int)&aadMem->updateCounter + handle);
    if ((*pcVar1 == '\0') && ((uint)*(ushort *)(pcVar1 + 4) == unaff_s0)) break;
    volume = volume + 1;
    handle = handle + 0xc;
    if (volume == pitch) {
      handle = 0x54;
      volume = 0;
    }
    pan = pan + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_800bf428();
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ createSfxHandle(unsigned int toneID /*$a0*/)
 // line 168, offset 0x80056d44
	/* begin block 1 */
		// Start line: 334
	/* end block 1 */
	// End Line: 335

	/* begin block 2 */
		// Start line: 335
	/* end block 2 */
	// End Line: 336

ulong createSfxHandle(uint toneID)

{
  undefined4 in_a1;
  uint in_a2;
  ulong unaff_s0;
  
  FUN_80056db4(toneID,in_a1,in_a2 & 0xff);
  return unaff_s0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadPutSfxCommand(int statusByte /*$s0*/, int dataByte0 /*$s2*/, int dataByte1 /*$s3*/, unsigned long ulongParam /*$s4*/, int shortParam /*stack 16*/)
 // line 177, offset 0x80056d8c
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x80056D8C
		// Variables:
	// 		struct AadSfxCommand *sfxCmd; // $v1
	/* end block 1 */
	// End offset: 0x80056E60
	// End Line: 209

	/* begin block 2 */
		// Start line: 352
	/* end block 2 */
	// End Line: 353

	/* begin block 3 */
		// Start line: 354
	/* end block 3 */
	// End Line: 355

void aadPutSfxCommand(int statusByte,int dataByte0,int dataByte1,ulong ulongParam,int shortParam)

{
  *(short *)(dataByte0 + 0x1d8) = (short)dataByte1 + 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadExecuteSfxCommand(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 229, offset 0x80056e80
	/* begin block 1 */
		// Start line: 463
	/* end block 1 */
	// End Line: 464

void aadExecuteSfxCommand(AadSfxCommand *sfxCmd)

{
  undefined2 in_v0;
  int in_v1;
  
                    /* WARNING: Subroutine does not return */
  *(undefined2 *)(in_v1 + 0x1d6) = in_v0;
  FUN_800bf428();
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdPlayTone(struct AadSfxCommand *sfxCmd /*$s4*/)
 // line 248, offset 0x80056ecc
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x80056ECC
		// Variables:
	// 		unsigned long handle; // $s7
	// 		struct AadProgramAtr *progAtr; // $fp
	// 		struct AadToneAtr *toneAtr; // $s2
	// 		struct AadSynthVoice *voice; // $s1
	// 		unsigned short midiNote; // $s5
	// 		unsigned long waveAddr; // $s6
	// 		struct AadLoadedSfxToneAttr *sfxToneAttr; // $s3
	// 		struct AadLoadedSfxWaveAttr *sfxWaveAttr; // $v0
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80057008
	// End Line: 340

	/* begin block 2 */
		// Start line: 501
	/* end block 2 */
	// End Line: 502

void sfxCmdPlayTone(AadSfxCommand *sfxCmd)

{
  int in_v0;
  int in_v1;
  
  (**(code **)(in_v0 * 4 + in_v1))();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdStopTone(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 344, offset 0x80057038
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x80057038
		// Variables:
	// 		unsigned long handle; // $t0
	// 		struct AadSynthVoice *voice; // $a0
	// 		unsigned short i; // $a3
	// 		unsigned long vmask; // $v1
	/* end block 1 */
	// End offset: 0x800570C4
	// End Line: 366

	/* begin block 2 */
		// Start line: 749
	/* end block 2 */
	// End Line: 750

	/* begin block 3 */
		// Start line: 750
	/* end block 3 */
	// End Line: 751

	/* begin block 4 */
		// Start line: 753
	/* end block 4 */
	// End Line: 754

void sfxCmdStopTone(AadSfxCommand *sfxCmd)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdStopAllTones(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 372, offset 0x800570f0
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x800570F0
		// Variables:
	// 		struct AadSynthVoice *voice; // $a0
	// 		unsigned long vmask; // $v1
	// 		unsigned short i; // $a3
	/* end block 1 */
	// End offset: 0x80057168
	// End Line: 393

	/* begin block 2 */
		// Start line: 816
	/* end block 2 */
	// End Line: 817

	/* begin block 3 */
		// Start line: 817
	/* end block 3 */
	// End Line: 818

	/* begin block 4 */
		// Start line: 821
	/* end block 4 */
	// End Line: 822

void sfxCmdStopAllTones(AadSfxCommand *sfxCmd)

{
  uint in_v1;
  
  *(uint *)&sfxCmd[0x65].shortParam = *(uint *)&sfxCmd[0x65].shortParam | in_v1;
  *(uint *)(sfxCmd + 0x66) = *(uint *)(sfxCmd + 0x66) & ~in_v1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdSetToneVolumeAndPan(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 399, offset 0x80057194
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x80057194
		// Variables:
	// 		unsigned long handle; // $a3
	// 		struct AadSynthVoice *voice; // $t0
	// 		unsigned short i; // $t1
	// 		struct AadVolume newVoiceVol; // stack offset -16

		/* begin block 1.1 */
			// Start line: 418
			// Start offset: 0x80057248
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x80057248
		// End Line: 418

		/* begin block 1.2 */
			// Start line: 419
			// Start offset: 0x800572B0
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x800572B0
		// End Line: 419

		/* begin block 1.3 */
			// Start line: 420
			// Start offset: 0x80057330
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x80057330
		// End Line: 420

		/* begin block 1.4 */
			// Start line: 421
			// Start offset: 0x8005739C
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x8005739C
		// End Line: 421

		/* begin block 1.5 */
			// Start line: 421
			// Start offset: 0x8005739C
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.5 */
		// End offset: 0x8005739C
		// End Line: 421

		/* begin block 1.6 */
			// Start line: 421
			// Start offset: 0x8005739C
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.6 */
		// End offset: 0x8005739C
		// End Line: 421

		/* begin block 1.7 */
			// Start line: 421
			// Start offset: 0x8005739C
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.7 */
		// End offset: 0x8005739C
		// End Line: 421
	/* end block 1 */
	// End offset: 0x800574F8
	// End Line: 436

	/* begin block 2 */
		// Start line: 881
	/* end block 2 */
	// End Line: 882

void sfxCmdSetToneVolumeAndPan(AadSfxCommand *sfxCmd)

{
  uint in_v1;
  
  *(uint *)&sfxCmd[0x65].shortParam = *(uint *)&sfxCmd[0x65].shortParam | in_v1;
  *(uint *)(sfxCmd + 0x66) = *(uint *)(sfxCmd + 0x66) & ~in_v1;
  return;
}



// autogenerated function stub: 
// void /*$ra*/ sfxCmdSetToneVolPanPitch(struct AadSfxCommand *sfxCmd /*$s2*/)
void sfxCmdSetToneVolPanPitch(struct AadSfxCommand *sfxCmd)
{ // line 439, offset 0x80057508
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x80057508
		// Variables:
			unsigned long handle; // $a2
			struct AadSynthVoice *voice; // $s0
			unsigned short i; // $s1
			struct AadVolume newVoiceVol; // stack offset -24
			unsigned short newPitch; // $a1
			unsigned short finePitch; // $a1
			unsigned short pitchIndex; // $a0

		/* begin block 1.1 */
			// Start line: 459
			// Start offset: 0x800575CC
			// Variables:
				unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x800575CC
		// End Line: 459

		/* begin block 1.2 */
			// Start line: 460
			// Start offset: 0x80057634
			// Variables:
				unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x80057634
		// End Line: 460

		/* begin block 1.3 */
			// Start line: 461
			// Start offset: 0x800576B4
			// Variables:
				unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x800576B4
		// End Line: 461

		/* begin block 1.4 */
			// Start line: 462
			// Start offset: 0x80057720
			// Variables:
				unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x80057720
		// End Line: 462

		/* begin block 1.5 */
			// Start line: 462
			// Start offset: 0x80057720
			// Variables:
				unsigned long masterVolumeSquared; // $v1
		/* end block 1.5 */
		// End offset: 0x80057720
		// End Line: 462

		/* begin block 1.6 */
			// Start line: 462
			// Start offset: 0x80057720
			// Variables:
				unsigned long masterVolumeSquared; // $v0
		/* end block 1.6 */
		// End offset: 0x80057720
		// End Line: 462

		/* begin block 1.7 */
			// Start line: 462
			// Start offset: 0x80057720
			// Variables:
				unsigned long masterVolumeSquared; // $v0
		/* end block 1.7 */
		// End offset: 0x80057720
		// End Line: 462
	/* end block 1 */
	// End offset: 0x8005795C
	// End Line: 494

	/* begin block 2 */
		// Start line: 999
	/* end block 2 */
	// End Line: 1000

}


// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdLockVoice(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 498, offset 0x80057974
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x80057974
		// Variables:
	// 		void (*callbackProc)(); // $s0
	// 		struct AadSynthVoice *voice; // $v1
	/* end block 1 */
	// End offset: 0x800579B0
	// End Line: 513

	/* begin block 2 */
		// Start line: 1183
	/* end block 2 */
	// End Line: 1184

void sfxCmdLockVoice(AadSfxCommand *sfxCmd)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong in_a2;
  AadSynthVoice *pAVar6;
  ushort unaff_s1;
  int unaff_s2;
  short sStack00000010;
  short sStack00000012;
  
  while( true ) {
    if (0x17 < unaff_s1) {
      return;
    }
    pAVar6 = aadMem->synthVoice + (uint)unaff_s1;
    if ((((pAVar6->voiceID == -0x30) && (pAVar6->handle == in_a2)) &&
        (aadMem->voiceStatus[(uint)unaff_s1] != '\0')) &&
       (aadMem->voiceStatus[(uint)unaff_s1] != '\x02')) break;
    unaff_s1 = unaff_s1 + 1;
  }
  sStack00000010 = (ushort)pAVar6->volume * (ushort)pAVar6->volume;
  sStack00000012 = (ushort)pAVar6->volume * (ushort)pAVar6->volume;
  if ((aadMem->flags & 1U) == 0) {
    bVar1 = *(byte *)(unaff_s2 + 2);
    if (bVar1 < 0x41) {
      if (bVar1 < 0x3f) {
        iVar2 = (uint)*(byte *)(unaff_s2 + 2) + 1;
        sStack00000012 = (short)((int)sStack00000010 * (iVar2 * iVar2 + 1) >> 0xc);
      }
    }
    else {
      sStack00000010 =
           (short)((int)sStack00000012 * ((0x80 - (uint)bVar1) * (0x80 - (uint)bVar1) + -1) >> 0xc);
    }
  }
  iVar2 = (uint)pAVar6->toneAtr->volume + 1;
  iVar2 = iVar2 * iVar2 + -1;
  sStack00000010 = (short)((uint)((int)sStack00000010 * iVar2) >> 0xe);
  sStack00000012 = (short)((uint)((int)sStack00000012 * iVar2) >> 0xe);
  if ((aadMem->flags & 1U) == 0) {
    bVar1 = pAVar6->toneAtr->panPosition;
    if (bVar1 < 0x41) {
      if (bVar1 < 0x3f) {
        iVar2 = (uint)pAVar6->toneAtr->panPosition + 1;
        sStack00000012 = (short)((int)sStack00000010 * (iVar2 * iVar2 + 1) >> 0xc);
      }
    }
    else {
      sStack00000010 =
           (short)((int)sStack00000012 * ((0x80 - (uint)bVar1) * (0x80 - (uint)bVar1) + -1) >> 0xc);
    }
  }
  iVar2 = (uint)*(byte *)(unaff_s2 + 1) + 1;
  iVar4 = iVar2 * iVar2 + -1;
  pAVar6->updateVol = *(uchar *)(unaff_s2 + 1);
  iVar2 = (uint)pAVar6->progAtr->volume + 1;
  iVar5 = iVar2 * iVar2 + -1;
  iVar2 = (uint)(aadMem->sfxSlot).sfxVolume + 1;
  iVar2 = iVar2 * iVar2 + -1;
  iVar3 = aadMem->sfxMasterVol + 1;
  iVar3 = iVar3 * iVar3 + -1;
  sStack00000010 =
       (short)((uint)((int)(short)((uint)((int)(short)((uint)((int)(short)((uint)((int)
                                                  sStack00000010 * iVar4) >> 0xe) * iVar5) >> 0xe) *
                                         iVar2) >> 0xe) * iVar3) >> 0xe);
  sStack00000012 =
       (short)((uint)((int)(short)((uint)((int)(short)((uint)((int)(short)((uint)((int)
                                                  sStack00000012 * iVar4) >> 0xe) * iVar5) >> 0xe) *
                                         iVar2) >> 0xe) * iVar3) >> 0xe);
                    /* WARNING: Subroutine does not return */
  FUN_800c0834((uint)unaff_s1,(int)sStack00000010,(int)sStack00000012);
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdSetVoiceAttr(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 516, offset 0x800579c0
	/* begin block 1 */
		// Start line: 517
		// Start offset: 0x800579C0
		// Variables:
	// 		unsigned long v; // $s0
	// 		unsigned long vmask; // $v1
	// 		struct SpuVoiceAttr *voiceAttr; // $s1
	/* end block 1 */
	// End offset: 0x80057A00
	// End Line: 528

	/* begin block 2 */
		// Start line: 1220
	/* end block 2 */
	// End Line: 1221

void sfxCmdSetVoiceAttr(AadSfxCommand *sfxCmd)

{
  undefined4 *in_v1;
  code *unaff_s0;
  
  *(ushort *)((int)in_v1 + 0x12) = *(ushort *)((int)in_v1 + 0x12) | 1;
  (*unaff_s0)(*in_v1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdSetVoiceKeyOn(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 535, offset 0x80057a4c
	/* begin block 1 */
		// Start line: 1265
	/* end block 1 */
	// End Line: 1266

	/* begin block 2 */
		// Start line: 1266
	/* end block 2 */
	// End Line: 1267

void sfxCmdSetVoiceKeyOn(AadSfxCommand *sfxCmd)

{
  FUN_80057bb4();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ sfxCmdSetVoiceKeyOff(struct AadSfxCommand *sfxCmd /*$a0*/)
 // line 541, offset 0x80057a68
	/* begin block 1 */
		// Start line: 1277
	/* end block 1 */
	// End Line: 1278

	/* begin block 2 */
		// Start line: 1278
	/* end block 2 */
	// End Line: 1279

void sfxCmdSetVoiceKeyOff(AadSfxCommand *sfxCmd)

{
  return;
}





