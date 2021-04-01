#include "THISDUST.H"
#include "AADSEQEV.H"


// decompiled code
// original method signature: 
// int /*$ra*/ aadQueueNextEvent(struct _AadSequenceSlot *slot /*$t0*/, int track /*$a1*/)
 // line 24, offset 0x800548e8
	/* begin block 1 */
		// Start line: 25
		// Start offset: 0x800548E8
		// Variables:
	// 		struct AadSeqEvent seqEvent; // stack offset -16
	// 		unsigned char *seqData; // $a2
	// 		unsigned long deltaTime; // $v1
	// 		int c; // $a0
	// 		int n; // $a3
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80054AD4
	// End Line: 99

	/* begin block 2 */
		// Start line: 48
	/* end block 2 */
	// End Line: 49

int aadQueueNextEvent(_AadSequenceSlot *slot,int track)

{
  ushort *puVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  
  while( true ) {
    unaff_s0 = unaff_s0 + 1;
    iVar2 = unaff_s1 + 0x1c;
    if (unaff_s0 >= 0x18) break;
    puVar1 = (ushort *)((int)&aadMem->synthVoice[1].flags + unaff_s1);
    unaff_s1 = iVar2;
    if ((*puVar1 & 2) == 0) {
      FUN_800bff68(unaff_s0,(uint)aadMem->voicePitchSave[unaff_s0]);
      unaff_s1 = iVar2;
    }
  }
  return (uint)(unaff_s0 < 0x18);
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadExecuteEvent(struct AadSeqEvent *event /*$s0*/, struct _AadSequenceSlot *slot /*$s1*/)
 // line 103, offset 0x80054adc
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x80054ADC
		// Variables:
	// 		int eventType; // $v1
	/* end block 1 */
	// End offset: 0x80054B60
	// End Line: 123

	/* begin block 2 */
		// Start line: 210
	/* end block 2 */
	// End Line: 211

void aadExecuteEvent(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  undefined in_v0;
  char in_v1;
  int in_a2;
  
  *(char *)(in_a2 + 0x318) = in_v1 + '\x01';
  *(undefined *)(in_a2 + 0x338) = in_v0;
  if ((char)(in_v1 + '\x01') == '\x04') {
    *(undefined *)(in_a2 + 0x318) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiNoteOff(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 127, offset 0x80054b74
	/* begin block 1 */
		// Start line: 258
	/* end block 1 */
	// End Line: 259

	/* begin block 2 */
		// Start line: 262
	/* end block 2 */
	// End Line: 263

void midiNoteOff(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  int in_v1;
  
  (**(code **)(in_v0 + in_v1))();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiNoteOn(struct AadSeqEvent *event /*$fp*/, struct _AadSequenceSlot *slot /*$s5*/)
 // line 139, offset 0x80054b7c
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x80054B7C
		// Variables:
	// 		struct AadProgramAtr *progAtr; // $s4
	// 		struct AadToneAtr *toneAtrTbl; // $v1
	// 		struct AadSynthVoice *voice; // $s0
	// 		int channel; // $s7
	// 		int midiNote; // $s6
	// 		int transposedNote; // stack offset -56
	// 		int t; // $s2
	// 		int dynBank; // stack offset -52

		/* begin block 1.1 */
			// Start line: 220
			// Start offset: 0x80054D5C
			// Variables:
		// 		unsigned long waveStartAddr; // $a1
		/* end block 1.1 */
		// End offset: 0x80054EA4
		// End Line: 245
	/* end block 1 */
	// End offset: 0x80054EC0
	// End Line: 249

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

void midiNoteOn(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  code *in_v0;
  
  (*in_v0)();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadUpdateChannelVolPan(struct _AadSequenceSlot *slot /*$s4*/, int channel /*$s5*/)
 // line 253, offset 0x80054ef0
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80054EF0
		// Variables:
	// 		struct AadSynthVoice *voice; // $s0
	// 		int i; // $s2
	// 		struct AadVolume newVoiceVol; // stack offset -40

		/* begin block 1.1 */
			// Start line: 267
			// Start offset: 0x80054F90
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x80054F90
		// End Line: 267

		/* begin block 1.2 */
			// Start line: 268
			// Start offset: 0x80054FF8
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x80054FF8
		// End Line: 268

		/* begin block 1.3 */
			// Start line: 269
			// Start offset: 0x80055078
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x80055078
		// End Line: 269

		/* begin block 1.4 */
			// Start line: 270
			// Start offset: 0x800550E4
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x800550E4
		// End Line: 270

		/* begin block 1.5 */
			// Start line: 270
			// Start offset: 0x800550E4
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.5 */
		// End offset: 0x800550E4
		// End Line: 270

		/* begin block 1.6 */
			// Start line: 270
			// Start offset: 0x800550E4
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.6 */
		// End offset: 0x800550E4
		// End Line: 270

		/* begin block 1.7 */
			// Start line: 270
			// Start offset: 0x800550E4
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.7 */
		// End offset: 0x800550E4
		// End Line: 270
	/* end block 1 */
	// End offset: 0x80055250
	// End Line: 282

	/* begin block 2 */
		// Start line: 583
	/* end block 2 */
	// End Line: 584

void aadUpdateChannelVolPan(_AadSequenceSlot *slot,int channel)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadUpdateSlotVolPan(struct _AadSequenceSlot *slot /*$s1*/)
 // line 286, offset 0x80055274
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x80055274
		// Variables:
	// 		struct AadSynthVoice *voice; // $t0
	// 		int channel; // $t1
	// 		int i; // $s0
	// 		struct AadVolume newVoiceVol; // stack offset -24

		/* begin block 1.1 */
			// Start line: 302
			// Start offset: 0x80055308
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.1 */
		// End offset: 0x80055308
		// End Line: 302

		/* begin block 1.2 */
			// Start line: 303
			// Start offset: 0x80055374
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.2 */
		// End offset: 0x80055374
		// End Line: 303

		/* begin block 1.3 */
			// Start line: 304
			// Start offset: 0x800553F4
			// Variables:
		// 		unsigned long tmp; // $v0
		/* end block 1.3 */
		// End offset: 0x800553F4
		// End Line: 304

		/* begin block 1.4 */
			// Start line: 305
			// Start offset: 0x80055460
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v1
		/* end block 1.4 */
		// End offset: 0x80055460
		// End Line: 305

		/* begin block 1.5 */
			// Start line: 305
			// Start offset: 0x80055460
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.5 */
		// End offset: 0x80055460
		// End Line: 305

		/* begin block 1.6 */
			// Start line: 305
			// Start offset: 0x80055460
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.6 */
		// End offset: 0x80055460
		// End Line: 305

		/* begin block 1.7 */
			// Start line: 305
			// Start offset: 0x80055460
			// Variables:
		// 		unsigned long masterVolumeSquared; // $v0
		/* end block 1.7 */
		// End offset: 0x80055460
		// End Line: 305
	/* end block 1 */
	// End offset: 0x800555B8
	// End Line: 314

	/* begin block 2 */
		// Start line: 686
	/* end block 2 */
	// End Line: 687

void aadUpdateSlotVolPan(_AadSequenceSlot *slot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ aadUpdateChannelPitchBend(struct _AadSequenceSlot *slot /*$s5*/, int channel /*$s6*/)
 // line 318, offset 0x800555d0
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x800555D0
		// Variables:
	// 		struct AadSynthVoice *voice; // $a0
	// 		int i; // $s0
	// 		int finePitch; // $a1
	// 		int newPitch; // $a1
	// 		int pitchWheelPos; // $s2
	// 		int pitchIndex; // $a0
	// 		long pitchValueBendAmount; // $a2
	/* end block 1 */
	// End offset: 0x80055758
	// End Line: 366

	/* begin block 2 */
		// Start line: 785
	/* end block 2 */
	// End Line: 786

void aadUpdateChannelPitchBend(_AadSequenceSlot *slot,int channel)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  short sStack00000010;
  short sStack00000012;
  
  do {
    unaff_s0 = unaff_s0 + 1;
    if (0x17 < unaff_s0) {
      return;
    }
    iVar2 = (int)&aadMem->sfxMasterVol + unaff_s2;
    unaff_s2 = unaff_s2 + 0x1c;
  } while (((uint)*(byte *)(iVar2 + 8) & 0xf0) != (uint)*(byte *)(unaff_s1 + 0x551));
  sStack00000010 = (ushort)*(byte *)(iVar2 + 0xe) * (ushort)*(byte *)(iVar2 + 0xe);
  sStack00000012 = (ushort)*(byte *)(iVar2 + 0xe) * (ushort)*(byte *)(iVar2 + 0xe);
  uVar6 = (uint)*(byte *)(iVar2 + 8) & 0xf;
  if ((aadMem->flags & 1U) == 0) {
    iVar4 = unaff_s1 + uVar6;
    bVar1 = *(byte *)(iVar4 + 0x5b0);
    if (bVar1 < 0x41) {
      if (bVar1 < 0x3f) {
        iVar4 = (uint)*(byte *)(iVar4 + 0x5b0) + 1;
        sStack00000012 = (short)((int)sStack00000010 * (iVar4 * iVar4 + 1) >> 0xc);
      }
    }
    else {
      sStack00000010 =
           (short)((int)sStack00000012 * ((0x80 - (uint)bVar1) * (0x80 - (uint)bVar1) + -1) >> 0xc);
    }
  }
  iVar4 = (uint)*(byte *)(*(int *)(iVar2 + 0x14) + 2) + 1;
  iVar4 = iVar4 * iVar4 + -1;
  sStack00000010 = (short)((uint)((int)sStack00000010 * iVar4) >> 0xe);
  sStack00000012 = (short)((uint)((int)sStack00000012 * iVar4) >> 0xe);
  if ((aadMem->flags & 1U) == 0) {
    bVar1 = *(byte *)(*(int *)(iVar2 + 0x14) + 3);
    if (bVar1 < 0x41) {
      if (bVar1 < 0x3f) {
        iVar4 = (uint)*(byte *)(*(int *)(iVar2 + 0x14) + 3) + 1;
        sStack00000012 = (short)((int)sStack00000010 * (iVar4 * iVar4 + 1) >> 0xc);
      }
    }
    else {
      sStack00000010 =
           (short)((int)sStack00000012 * ((0x80 - (uint)bVar1) * (0x80 - (uint)bVar1) + -1) >> 0xc);
    }
  }
  iVar4 = (uint)*(byte *)(unaff_s1 + uVar6 + 0x5a0) + 1;
  iVar5 = iVar4 * iVar4 + -1;
  iVar2 = (uint)*(byte *)(*(int *)(iVar2 + 0x18) + 4) + 1;
  iVar2 = iVar2 * iVar2 + -1;
  iVar4 = (uint)*(byte *)(unaff_s1 + 0x552) + 1;
  iVar4 = iVar4 * iVar4 + -1;
  iVar3 = **(int **)(unaff_s1 + 0x554) + 1;
  iVar3 = iVar3 * iVar3 + -1;
  sStack00000010 =
       (short)((uint)((int)(short)((uint)((int)(short)((uint)((int)(short)((uint)((int)
                                                  sStack00000010 * iVar5) >> 0xe) * iVar2) >> 0xe) *
                                         iVar4) >> 0xe) * iVar3) >> 0xe);
  sStack00000012 =
       (short)((uint)((int)(short)((uint)((int)(short)((uint)((int)(short)((uint)((int)
                                                  sStack00000012 * iVar5) >> 0xe) * iVar2) >> 0xe) *
                                         iVar4) >> 0xe) * iVar3) >> 0xe);
                    /* WARNING: Subroutine does not return */
  FUN_800c0834(unaff_s0,(int)sStack00000010,(int)sStack00000012);
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiPolyphonicAftertouch(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 369, offset 0x80055780
	/* begin block 1 */
		// Start line: 974
	/* end block 1 */
	// End Line: 975

	/* begin block 2 */
		// Start line: 975
	/* end block 2 */
	// End Line: 976

void midiPolyphonicAftertouch(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlChange(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 374, offset 0x80055788
	/* begin block 1 */
		// Start line: 375
		// Start offset: 0x80055788
		// Variables:
	// 		int controlNumber; // $v0
	/* end block 1 */
	// End offset: 0x80055788
	// End Line: 375

	/* begin block 2 */
		// Start line: 984
	/* end block 2 */
	// End Line: 985

void midiControlChange(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiProgramChange(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 385, offset 0x800557c4
	/* begin block 1 */
		// Start line: 387
		// Start offset: 0x800557C4
		// Variables:
	// 		int channel; // $v0
	/* end block 1 */
	// End offset: 0x800557C4
	// End Line: 389

	/* begin block 2 */
		// Start line: 1007
	/* end block 2 */
	// End Line: 1008

	/* begin block 3 */
		// Start line: 1008
	/* end block 3 */
	// End Line: 1009

	/* begin block 4 */
		// Start line: 1010
	/* end block 4 */
	// End Line: 1011

void midiProgramChange(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  int in_v1;
  
  (**(code **)(in_v0 * 4 + in_v1))();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiChannelAftertouch(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 396, offset 0x800557dc
	/* begin block 1 */
		// Start line: 1030
	/* end block 1 */
	// End Line: 1031

	/* begin block 2 */
		// Start line: 1031
	/* end block 2 */
	// End Line: 1032

void midiChannelAftertouch(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiPitchWheelControl(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a3*/)
 // line 401, offset 0x800557e4
	/* begin block 1 */
		// Start line: 402
		// Start offset: 0x800557E4
		// Variables:
	// 		int channel; // $a1
	/* end block 1 */
	// End offset: 0x800557E4
	// End Line: 402

	/* begin block 2 */
		// Start line: 1040
	/* end block 2 */
	// End Line: 1041

void midiPitchWheelControl(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiMetaEvent(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 413, offset 0x8005582c
	/* begin block 1 */
		// Start line: 1067
	/* end block 1 */
	// End Line: 1068

	/* begin block 2 */
		// Start line: 1070
	/* end block 2 */
	// End Line: 1071

void midiMetaEvent(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  ushort in_v1;
  int in_a3;
  
  *(ushort *)(in_a3 + (int)slot * 2 + 0x570) = in_v1 | (ushort)(in_v0 << 7);
  FUN_800555f8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlBankSelect(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 421, offset 0x80055834
	/* begin block 1 */
		// Start line: 1083
	/* end block 1 */
	// End Line: 1084

	/* begin block 2 */
		// Start line: 1104
	/* end block 2 */
	// End Line: 1105

void midiControlBankSelect(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  ushort in_v1;
  int in_a2;
  
  *(ushort *)(in_a2 + 0x570) = in_v1 | (ushort)(in_v0 << 7);
  FUN_800555f8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlVolume(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a2*/)
 // line 446, offset 0x8005583c
	/* begin block 1 */
		// Start line: 447
		// Start offset: 0x8005583C
		// Variables:
	// 		int channel; // $a1
	/* end block 1 */
	// End offset: 0x8005587C
	// End Line: 458

	/* begin block 2 */
		// Start line: 1133
	/* end block 2 */
	// End Line: 1134

void midiControlVolume(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  undefined2 in_v1;
  int in_a2;
  
  *(undefined2 *)(in_a2 + 0x570) = in_v1;
  FUN_800555f8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlPan(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a2*/)
 // line 461, offset 0x8005588c
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8005588C
		// Variables:
	// 		int channel; // $a1
	/* end block 1 */
	// End offset: 0x800558CC
	// End Line: 473

	/* begin block 2 */
		// Start line: 1164
	/* end block 2 */
	// End Line: 1165

void midiControlPan(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  
  if ((in_v0 >> ((uint)slot & 0x1f) & 1U) != 0) {
    FUN_80054f18();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlCallback(struct AadSeqEvent *event /*$a3*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 476, offset 0x800558dc
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x800558DC
	/* end block 1 */
	// End offset: 0x80055910
	// End Line: 488

	/* begin block 2 */
		// Start line: 1195
	/* end block 2 */
	// End Line: 1196

	/* begin block 3 */
		// Start line: 1198
	/* end block 3 */
	// End Line: 1199

void midiControlCallback(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  
  if ((in_v0 >> ((uint)slot & 0x1f) & 1U) != 0) {
    FUN_80054f18();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ midiControlDummy(struct AadSeqEvent *event /*$a0*/, struct _AadSequenceSlot *slot /*$a1*/)
 // line 491, offset 0x80055920
	/* begin block 1 */
		// Start line: 1228
	/* end block 1 */
	// End Line: 1229

	/* begin block 2 */
		// Start line: 1229
	/* end block 2 */
	// End Line: 1230

void midiControlDummy(AadSeqEvent *event,_AadSequenceSlot *slot)

{
  int in_v0;
  code *in_v1;
  int in_a3;
  
  (*in_v1)(*(undefined4 *)(in_v0 + 0x1c00),(uint)slot->thisSlotNumber,
           (uint)*(byte *)(in_a3 + 5) & 0xf,(uint)*(byte *)(in_a3 + 7));
  return;
}





