#include "THISDUST.H"
#include "AADVOICE.H"


// decompiled code
// original method signature: 
// struct AadSynthVoice * /*$ra*/ aadAllocateVoice(int priority /*$a0*/)
 // line 28, offset 0x80057a98
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x80057A98
		// Variables:
	// 		int i; // $a2
	// 		int lowestPriSus; // $t2
	// 		int lowestPriRel; // $t1
	// 		struct AadSynthVoice *lowestPriSusVoice; // $t4
	// 		struct AadSynthVoice *lowestPriRelVoice; // $t3
	// 		struct AadSynthVoice *voice; // $a1
	/* end block 1 */
	// End offset: 0x80057B84
	// End Line: 90

	/* begin block 2 */
		// Start line: 56
	/* end block 2 */
	// End Line: 57

	/* begin block 3 */
		// Start line: 57
	/* end block 3 */
	// End Line: 58

	/* begin block 4 */
		// Start line: 63
	/* end block 4 */
	// End Line: 64

AadSynthVoice * aadAllocateVoice(int priority)

{
  uint uVar1;
  uint in_v1;
  int in_a1;
  
  *(uint *)(in_a1 + 0x4c4) = *(uint *)(in_a1 + 0x4c4) | in_v1;
  uVar1 = *(uint *)(priority + 4);
  *(uint *)(in_a1 + 0x4c8) = *(uint *)(in_a1 + 0x4c8) & (uint)(AadSynthVoice *)~uVar1;
  return (AadSynthVoice *)~uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpuSetVoiceADSR1ADSR2(int vNum /*$a0*/, unsigned short adsr1 /*$a1*/, unsigned short adsr2 /*$a3*/)
 // line 109, offset 0x80057b8c
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x80057B8C
		// Variables:
	// 		unsigned short sl; // $t3
	// 		unsigned short dr; // $v1
	// 		unsigned short ar; // $t4
	// 		unsigned short arm; // $t1
	// 		unsigned short rr; // $t2
	// 		unsigned short rrm; // $t0
	// 		unsigned short sr; // $a3
	// 		unsigned short srm; // $a1
	/* end block 1 */
	// End offset: 0x80057C04
	// End Line: 133

	/* begin block 2 */
		// Start line: 291
	/* end block 2 */
	// End Line: 292

void SpuSetVoiceADSR1ADSR2(int vNum,ushort adsr1,ushort adsr2)

{
  int in_v1;
  undefined2 in_register_00000016;
  
  *(undefined *)(in_v1 + 0x47c) = 1;
  *(ushort *)(CONCAT22(in_register_00000016,adsr1) + 0x12) =
       *(ushort *)(CONCAT22(in_register_00000016,adsr1) + 0x12) | 2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadPlayTone(struct AadToneAtr *toneAtr /*$s0*/, unsigned long waveStartAddr /*$s3*/, struct AadProgramAtr *progAtr /*$a2*/, int midiNote /*$s2*/, int volume /*stack 16*/, int masterVolume /*stack 20*/, int masterPan /*stack 24*/, int slotVolume /*stack 28*/, int masterMasterVol /*stack 32*/, struct AadSynthVoice *voice /*stack 36*/, int pitchOffset /*stack 40*/)
 // line 156, offset 0x80057c34
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x80057C34
		// Variables:
	// 		struct AadVolume voiceVol; // stack offset -32
	// 		int pitch; // $a1
	// 		int finePitch; // $a1
	// 		int pitchIndex; // $a3

		/* begin block 1.1 */
			// Start line: 166
			// Start offset: 0x80057C9C
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x80057C9C
		// End Line: 166

		/* begin block 1.2 */
			// Start line: 167
			// Start offset: 0x80057CF8
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x80057CF8
		// End Line: 167

		/* begin block 1.3 */
			// Start line: 168
			// Start offset: 0x80057D68
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x80057D68
		// End Line: 168

		/* begin block 1.4 */
			// Start line: 170
			// Start offset: 0x80057DD0
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x80057DD0
		// End Line: 170

		/* begin block 1.5 */
			// Start line: 170
			// Start offset: 0x80057DD0
			// Variables:
		// 		unsigned long masterVolumeSquared; // $a1
		/* end block 1.5 */
		// End offset: 0x80057DD0
		// End Line: 170

		/* begin block 1.6 */
			// Start line: 170
			// Start offset: 0x80057DD0
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.6 */
		// End offset: 0x80057DD0
		// End Line: 170

		/* begin block 1.7 */
			// Start line: 170
			// Start offset: 0x80057DD0
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.7 */
		// End offset: 0x80057DD0
		// End Line: 170
	/* end block 1 */
	// End offset: 0x80058030
	// End Line: 205

	/* begin block 2 */
		// Start line: 392
	/* end block 2 */
	// End Line: 393

void aadPlayTone(AadToneAtr *toneAtr,ulong waveStartAddr,AadProgramAtr *progAtr,int midiNote,
                int volume,int masterVolume,int masterPan,int slotVolume,int masterMasterVol,
                AadSynthVoice *voice,int pitchOffset)

{
  FUN_800c0934();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadPlayTonePitchBend(struct AadToneAtr *toneAtr /*$s0*/, unsigned long waveStartAddr /*$s4*/, struct AadProgramAtr *progAtr /*$a2*/, int midiNote /*$s3*/, int volume /*stack 16*/, int masterVolume /*stack 20*/, int masterPan /*stack 24*/, int slotVolume /*stack 28*/, int masterMasterVol /*stack 32*/, struct AadSynthVoice *voice /*stack 36*/, int pitchWheelPos /*stack 40*/)
 // line 246, offset 0x80058064
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x80058064
		// Variables:
	// 		struct AadVolume voiceVol; // stack offset -32
	// 		int pitch; // $a1
	// 		int finePitch; // $a1
	// 		int pitchIndex; // $a3
	// 		long pitchValueBendAmount; // $t0

		/* begin block 1.1 */
			// Start line: 258
			// Start offset: 0x800580D4
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x800580D4
		// End Line: 258

		/* begin block 1.2 */
			// Start line: 259
			// Start offset: 0x80058130
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x80058130
		// End Line: 259

		/* begin block 1.3 */
			// Start line: 260
			// Start offset: 0x800581A0
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x800581A0
		// End Line: 260

		/* begin block 1.4 */
			// Start line: 262
			// Start offset: 0x80058208
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x80058208
		// End Line: 262

		/* begin block 1.5 */
			// Start line: 262
			// Start offset: 0x80058208
			// Variables:
		// 		unsigned long masterVolumeSquared; // $a1
		/* end block 1.5 */
		// End offset: 0x80058208
		// End Line: 262

		/* begin block 1.6 */
			// Start line: 262
			// Start offset: 0x80058208
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.6 */
		// End offset: 0x80058208
		// End Line: 262

		/* begin block 1.7 */
			// Start line: 262
			// Start offset: 0x80058208
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.7 */
		// End offset: 0x80058208
		// End Line: 262
	/* end block 1 */
	// End offset: 0x800584AC
	// End Line: 313

	/* begin block 2 */
		// Start line: 620
	/* end block 2 */
	// End Line: 621

void aadPlayTonePitchBend
               (AadToneAtr *toneAtr,ulong waveStartAddr,AadProgramAtr *progAtr,int midiNote,
               int volume,int masterVolume,int masterPan,int slotVolume,int masterMasterVol,
               AadSynthVoice *voice,int pitchWheelPos)

{
  int in_v0;
  uint in_v1;
  
  *(uint *)(in_v0 + 0x4c8) = in_v1 | (uint)toneAtr;
  return;
}





