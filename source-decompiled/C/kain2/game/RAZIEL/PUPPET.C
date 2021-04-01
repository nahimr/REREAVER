#include "THISDUST.H"
#include "PUPPET.H"


// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerPuppetShow(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s1*/, int Data /*$s4*/)
 // line 8, offset 0x8009a984
	/* begin block 1 */
		// Start line: 9
		// Start offset: 0x8009A984
		// Variables:
	// 		struct __Event *Ptr; // $s0

		/* begin block 1.1 */
			// Start line: 38
			// Start offset: 0x8009AB48
			// Variables:
		// 		struct evActionPlayHostAnimationData *data; // $v0
		/* end block 1.1 */
		// End offset: 0x8009AB48
		// End Line: 40

		/* begin block 1.2 */
			// Start line: 53
			// Start offset: 0x8009ABB8
			// Variables:
		// 		struct evAnimationInstanceSwitchData *data; // $v1
		/* end block 1.2 */
		// End offset: 0x8009ABB8
		// End Line: 55

		/* begin block 1.3 */
			// Start line: 67
			// Start offset: 0x8009AC34
			// Variables:
		// 		struct evPositionData *data; // $v0
		/* end block 1.3 */
		// End offset: 0x8009AC34
		// End Line: 67

		/* begin block 1.4 */
			// Start line: 78
			// Start offset: 0x8009AC78
			// Variables:
		// 		struct evPositionData *data; // $v0

			/* begin block 1.4.1 */
				// Start line: 78
				// Start offset: 0x8009AC78
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $a1
			// 		struct _Position *_v0; // $v0
			/* end block 1.4.1 */
			// End offset: 0x8009AC78
			// End Line: 78
		/* end block 1.4 */
		// End offset: 0x8009AC78
		// End Line: 78
	/* end block 1 */
	// End offset: 0x8009ACF4
	// End Line: 98

	/* begin block 2 */
		// Start line: 16
	/* end block 2 */
	// End Line: 17

void StateHandlerPuppetShow(__CharacterState *In,int CurrentSection,int Data)

{
  int iVar1;
  int in_v0;
  int iVar2;
  int *piVar3;
  int in_a3;
  int *in_t0;
  int in_t1;
  int iVar4;
  
  do {
    in_t0[2] = in_v0;
    do {
      if (*(int *)Data == 2) {
        *in_t0 = *in_t0 + ((int *)Data)[1];
        in_t0[1] = in_t0[1] - ((int *)Data)[2];
        in_t0[2] = in_t0[2] + ((int *)Data)[3];
        *(short *)((int *)Data + 4) = *(short *)((int *)Data + 4) + -1;
      }
      else {
        iVar2 = (int)*(short *)((int *)Data + 4);
        iVar1 = ((int *)Data)[1] * iVar2;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0xfff;
        }
        iVar4 = ((int *)Data)[2] * iVar2;
        ((int *)Data)[1] = iVar1 >> 0xc;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        iVar2 = ((int *)Data)[3] * iVar2;
        ((int *)Data)[2] = iVar4 >> 0xc;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xfff;
        }
        ((int *)Data)[3] = iVar2 >> 0xc;
        if (((((int *)Data)[1] == 0) && (((int *)Data)[2] == 0)) && (iVar2 >> 0xc == 0)) {
          *(undefined2 *)((int *)Data + 4) = 0;
        }
      }
      do {
        piVar3 = (int *)Data;
        in_t1 = in_t1 + 1;
        Data = (int)(piVar3 + 5);
        if (in_a3 <= in_t1) {
          in_t0[1] = -in_t0[1];
          return;
        }
      } while (*(short *)(piVar3 + 9) == 0);
      if (*(int *)Data == 0) {
        *in_t0 = *in_t0 + piVar3[6];
        iVar1 = in_t0[1] - piVar3[7];
        goto LAB_8009a970;
      }
    } while (*(int *)Data != 1);
    *in_t0 = *in_t0 + piVar3[6];
    iVar1 = in_t0[1] + piVar3[7];
LAB_8009a970:
    in_t0[1] = iVar1;
    in_v0 = in_t0[2] + piVar3[8];
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerMoveToPosition(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s6*/)
 // line 102, offset 0x8009ad20
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x8009AD20
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		long distance; // $s0
	// 		int motion; // $v0
	// 		int applyMotion; // $s5

		/* begin block 1.1 */
			// Start line: 113
			// Start offset: 0x8009AE2C
			// Variables:
		// 		struct evPositionData *moveToPoint; // $v0

			/* begin block 1.1.1 */
				// Start line: 115
				// Start offset: 0x8009AE2C
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $v0
			// 		struct _Position *_v0; // $s3
			/* end block 1.1.1 */
			// End offset: 0x8009AE2C
			// End Line: 115
		/* end block 1.1 */
		// End offset: 0x8009AE2C
		// End Line: 115

		/* begin block 1.2 */
			// Start line: 134
			// Start offset: 0x8009AEC8
			// Variables:
		// 		struct evPositionData *moveToPoint; // $v0

			/* begin block 1.2.1 */
				// Start line: 136
				// Start offset: 0x8009AEC8
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8009AEC8
			// End Line: 136
		/* end block 1.2 */
		// End offset: 0x8009AEEC
		// End Line: 140
	/* end block 1 */
	// End offset: 0x8009AFA0
	// End Line: 174

	/* begin block 2 */
		// Start line: 217
	/* end block 2 */
	// End Line: 218

void StateHandlerMoveToPosition(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined *puVar3;
  int unaff_s1;
  undefined4 *unaff_s2;
  int unaff_s3;
  
code_r0x8009ad20:
  FUN_800725cc();
LAB_8009aadc:
  PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
  puVar1 = (undefined4 *)FUN_800707ac(unaff_s3 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_800a6d84();
    return;
  }
  puVar3 = (undefined *)*puVar1;
  if (puVar3 == &DAT_00040016) {
    FUN_80071b48();
    goto code_r0x8009ad20;
  }
  if (0x40016 < (int)puVar3) {
    if (puVar3 == &DAT_00100001) {
      if (puVar1[1] != 0) {
        FUN_80071b48();
      }
      Raziel.State.SectionList[1].Event.Queue[9].Data = 1;
      Raziel.State.SectionList[2].Event.Queue[2].ID = 0;
      Raziel.currentHint = 0x1020008;
      Raziel._1312_4_ = 0;
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s2,0);
    }
    if (0x100001 < (int)puVar3) goto LAB_8009ab98;
    if (puVar3 == &DAT_00040018) {
      if (unaff_s1 == 0) {
        psVar2 = (short *)puVar1[1];
        Raziel.iVelocity.pad = *psVar2;
        Raziel.Magnitude._0_2_ = psVar2[1];
        Raziel.Magnitude._2_2_ = psVar2[2];
                    /* WARNING: Subroutine does not return */
        FUN_800a3070(*unaff_s2,0xc);
      }
    }
    else {
      if (puVar3 != &DAT_00040021) goto LAB_8009adf0;
      Raziel.State.SectionList[1].Event.Queue[15].ID._0_2_ = *(undefined2 *)(puVar1 + 1);
    }
    goto LAB_8009aadc;
  }
  if (puVar3 == &DAT_0004000d) {
    if (unaff_s1 == 0) {
      Raziel.Magnitude._2_2_ = *(undefined2 *)(puVar1[1] + 4);
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s2,0xd);
    }
    goto LAB_8009aadc;
  }
  if (0x4000d < (int)puVar3) {
    if (puVar3 == &DAT_00040010) {
      Raziel.State.SectionList[1].Defer.Queue[0].ID =
           Raziel.State.SectionList[1].Defer.Queue[0].ID & 0xffffffef;
      Raziel.currentHint = Raziel.currentHint & 0xfffdffff;
    }
    else {
      if (puVar3 != &DAT_00040014) goto LAB_8009adf0;
      FUN_80071b48();
    }
    goto LAB_8009aadc;
  }
  if (puVar3 == &DAT_00040003) {
    if (unaff_s1 == 0) {
      puVar1 = (undefined4 *)puVar1[1];
      FUN_80071dcc(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    }
    goto LAB_8009aadc;
  }
  if (puVar3 == &DAT_0004000c) goto code_r0x8009ad20;
  goto LAB_8009adf0;
LAB_8009ab98:
  if (puVar3 == (undefined *)0x4000001) goto LAB_8009aadc;
  if ((int)puVar3 < 0x4000002) {
    if (puVar3 == (undefined *)0x1000001) goto LAB_8009aadc;
  }
  else {
    if (puVar3 == (undefined *)0x8000008) {
      if (unaff_s1 == 0) {
        FUN_80071eb8();
      }
      goto LAB_8009aadc;
    }
  }
LAB_8009adf0:
  FUN_8009b0dc();
  goto LAB_8009aadc;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DefaultPuppetStateHandler(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$s2*/)
 // line 174, offset 0x8009afc8
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x8009AFC8
		// Variables:
	// 		struct __Event *Ptr; // $a1

		/* begin block 1.1 */
			// Start line: 194
			// Start offset: 0x8009B190
			// Variables:
		// 		struct evPositionData *data; // $v0
		/* end block 1.1 */
		// End offset: 0x8009B190
		// End Line: 194

		/* begin block 1.2 */
			// Start line: 201
			// Start offset: 0x8009B1A4
			// Variables:
		// 		struct evPositionData *data; // $v1

			/* begin block 1.2.1 */
				// Start line: 203
				// Start offset: 0x8009B1A4
				// Variables:
			// 		long _x1; // $a0
			// 		long _y1; // $a2
			// 		long _z1; // $a1
			// 		struct _Vector *_v0; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8009B1A4
			// End Line: 203
		/* end block 1.2 */
		// End offset: 0x8009B1E4
		// End Line: 208
	/* end block 1 */
	// End offset: 0x8009B264
	// End Line: 240

	/* begin block 2 */
		// Start line: 383
	/* end block 2 */
	// End Line: 384

void DefaultPuppetStateHandler(__CharacterState *In,int CurrentSection,int Data)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
code_r0x8009afc8:
  uStack00000010 = 4;
  uStack00000014 = 2;
  FUN_80071b48();
LAB_8009afdc:
  psVar2 = (short *)unaff_s0[1];
  Raziel.iVelocity.x = *psVar2;
  sVar1 = psVar2[2];
  *(short *)(unaff_s3 + 2) = psVar2[1];
  *(short *)(unaff_s3 + 4) = sVar1;
LAB_8009ae88:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
    unaff_s0 = (undefined4 *)FUN_800707ac(unaff_s4 + 4);
    if (unaff_s0 == (undefined4 *)0x0) {
      if (unaff_s5 == 0) {
        return;
      }
      if (unaff_s2 == 0) {
        FUN_800a5594(*unaff_s1,0x800d5580,0,4);
      }
      iVar3 = *unaff_s1;
                    /* WARNING: Subroutine does not return */
      FUN_80039494((int)*(short *)(iVar3 + 0x5c) - (int)Raziel.iVelocity.x,
                   (int)*(short *)(iVar3 + 0x5e) - (int)Raziel.iVelocity.y,
                   (int)*(short *)(iVar3 + 0x60) - (int)Raziel.iVelocity.z);
    }
    puVar4 = (undefined *)*unaff_s0;
    if (puVar4 != &DAT_00100001) break;
    if (unaff_s2 == 0) {
      psVar2 = (short *)unaff_s0[1];
      Raziel.iVelocity.x = *psVar2;
      sVar1 = psVar2[2];
      *(short *)(unaff_s3 + 2) = psVar2[1];
      *(short *)(unaff_s3 + 4) = sVar1;
      FUN_800a5594(*unaff_s1);
      Raziel._1312_4_ = 0;
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s1,0);
    }
  }
  if ((int)puVar4 < 0x100002) {
    if (puVar4 == &DAT_00040016) goto code_r0x8009afc8;
    if ((int)puVar4 < 0x40017) {
      if (puVar4 == &DAT_0004000c) goto LAB_8009afdc;
    }
    else {
      if (puVar4 == (undefined *)0x100000) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
    }
  }
  else {
    if (puVar4 == (undefined *)0x4000001) {
      Raziel._1312_4_ = 0;
      FUN_8009a5cc(*unaff_s1,0x800d5034);
      goto LAB_8009ae88;
    }
    if (0x4000001 < (int)puVar4) {
      if ((puVar4 != (undefined *)0x4010400) && (puVar4 != (undefined *)0x4020000))
      goto LAB_8009b01c;
      goto LAB_8009ae88;
    }
    if (puVar4 == (undefined *)0x1000000) goto LAB_8009ae88;
  }
LAB_8009b01c:
  FUN_8009b0dc();
  goto LAB_8009ae88;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerWarpGate(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s4*/)
 // line 243, offset 0x8009b27c
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8009B27C
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		int anim; // $s3

		/* begin block 1.1 */
			// Start line: 289
			// Start offset: 0x8009B58C
			// Variables:
		// 		struct _Instance *heldInst; // $v0
		/* end block 1.1 */
		// End offset: 0x8009B5E0
		// End Line: 296

		/* begin block 1.2 */
			// Start line: 302
			// Start offset: 0x8009B614
		/* end block 1.2 */
		// End offset: 0x8009B614
		// End Line: 302
	/* end block 1 */
	// End offset: 0x8009B6F0
	// End Line: 344

	/* begin block 2 */
		// Start line: 527
	/* end block 2 */
	// End Line: 528

void StateHandlerWarpGate(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerForcedGlide(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s7*/)
 // line 348, offset 0x8009b710
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x8009B710
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		int Anim; // $s6
	// 		int extraProcess; // $s4

		/* begin block 1.1 */
			// Start line: 425
			// Start offset: 0x8009BAA0
		/* end block 1.1 */
		// End offset: 0x8009BAD4
		// End Line: 431
	/* end block 1 */
	// End offset: 0x8009BAD4
	// End Line: 435

	/* begin block 2 */
		// Start line: 741
	/* end block 2 */
	// End Line: 742

void StateHandlerForcedGlide(__CharacterState *In,int CurrentSection,int Data)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint in_v0;
  int iVar3;
  undefined *puVar4;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
code_r0x8009b710:
  if ((in_v0 == 0) && (iVar3 = FUN_8005afe8(), iVar3 != 0)) {
    LOAD_ReadFile((char *)0xef,(uchar)CurrentSection);
    FUN_800a7de8(0x20000);
  }
LAB_8009b3e8:
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 4));
    puVar2 = (undefined4 *)FUN_800707ac(unaff_s2 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      if (unaff_s1 == 0) {
        FUN_800a6d84();
      }
      return;
    }
    puVar4 = (undefined *)*puVar2;
  } while (puVar4 == &DAT_00100004);
  if ((int)puVar4 < 0x100005) {
    if (puVar4 == &DAT_80000020) goto LAB_8009b3e8;
    if ((int)puVar4 < -0x7fffffdf) {
      if (puVar4 == &DAT_80000008) goto LAB_8009b3e8;
      if ((int)puVar4 < -0x7ffffff7) {
        if (puVar4 == (undefined *)0x80000000) goto LAB_8009b5f4;
        goto LAB_8009b7dc;
      }
      puVar1 = &DAT_80000010;
joined_r0x8009b4d0:
      if (puVar4 == puVar1) goto LAB_8009b3e8;
    }
    else {
      if (puVar4 == (undefined *)0x100000) {
        iVar3 = FUN_8005afc8();
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,3);
        }
        CurrentSection = 0;
        FUN_80070800(unaff_s2 + 0x8c,0x100000,0);
        goto LAB_8009b3e8;
      }
      if ((int)puVar4 < 0x100001) {
        puVar1 = &DAT_00040005;
        goto joined_r0x8009b4d0;
      }
      if (puVar4 == &DAT_00100001) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
    }
  }
  else {
    if (puVar4 == (undefined *)0x2000000) {
LAB_8009b5f4:
      if (unaff_s3 != 0x7b) {
        CurrentSection = 0;
        FUN_80070800(unaff_s2 + 0x8c,0x100000,0);
        FUN_8005af84();
      }
      goto LAB_8009b3e8;
    }
    if ((int)puVar4 < 0x2000001) {
      if (puVar4 == &DAT_00100015) {
        if (unaff_s1 == 0) {
          FUN_80070800(unaff_s0 + 0x94,0x100000,0);
          FUN_8005af84();
        }
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
      if ((int)puVar4 < 0x100016) {
        puVar1 = &DAT_00100014;
        goto joined_r0x8009b4d0;
      }
      if (puVar4 == (undefined *)0x1000001) goto LAB_8009b3e8;
    }
    else {
      if (puVar4 == (undefined *)0x10000000) {
        if ((unaff_s1 != 0) || (unaff_s3 == 0x7b)) goto LAB_8009b3e8;
        if ((*(uint *)Raziel.padCommands.Queue[5].Data & 4) != 0) {
          FUN_8005b3b8();
        }
        if ((*(uint *)Raziel.padCommands.Queue[5].Data & 8) != 0) {
          FUN_8005b230();
        }
        if ((*(uint *)Raziel.padCommands.Queue[5].Data & 1) == 0) goto LAB_8009b3e8;
        iVar3 = WARPGATE_IsWarpgateSpectral();
        if (iVar3 != 0) {
          FUN_800b3518(0x4b);
          iVar3 = FUN_800a5f34();
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_80034368(iVar3,0x800008,0);
          }
          CurrentSection = 0x7b;
          FUN_80071eb8();
          iVar3 = FUN_8005affc();
          if (iVar3 != 0) {
            FUN_800a5924();
          }
          goto LAB_8009b3e8;
        }
        in_v0 = (uint)Raziel.Senses.Portal & 0x20000;
        goto code_r0x8009b710;
      }
      if ((int)puVar4 < 0x10000001) {
        if (puVar4 != (undefined *)0x8000000) goto LAB_8009b7dc;
        goto LAB_8009b3e8;
      }
      if (((int)puVar4 < 0x10002003) && (CurrentSection = unaff_s1, 0x10002000 < (int)puVar4))
      goto LAB_8009b3e8;
    }
  }
LAB_8009b7dc:
  CurrentSection = unaff_s1;
  FUN_800b0280();
  goto LAB_8009b3e8;
}





