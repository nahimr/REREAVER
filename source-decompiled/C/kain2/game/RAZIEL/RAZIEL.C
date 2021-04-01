#include "THISDUST.H"
#include "RAZIEL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitStates(struct _Instance *PlayerInstance /*$s2*/)
 // line 192, offset 0x800a80c8
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x800A80C8
		// Variables:
	// 		unsigned char i; // $s1

		/* begin block 1.1 */
			// Start line: 222
			// Start offset: 0x800A8174
			// Variables:
		// 		struct _G2AnimSection_Type *animSection; // $v0
		/* end block 1.1 */
		// End offset: 0x800A8174
		// End Line: 223
	/* end block 1 */
	// End offset: 0x800A81E0
	// End Line: 234

	/* begin block 2 */
		// Start line: 384
	/* end block 2 */
	// End Line: 385

	/* begin block 3 */
		// Start line: 388
	/* end block 3 */
	// End Line: 389

void InitStates(_Instance *PlayerInstance)

{
  uint in_v0;
  uint unaff_s0;
  
  if ((in_v0 & unaff_s0) == 0) {
    FUN_80040a64();
  }
  Raziel.lastInput = Raziel.lastInput | unaff_s0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateInitIdle(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Ptr /*$a2*/)
 // line 459, offset 0x800a83b0
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x800A83B0
		// Variables:
	// 		struct evControlInitIdleData *data; // $s0
	// 		struct _Instance *linkWeapon; // $a0
	/* end block 1 */
	// End offset: 0x800A8650
	// End Line: 575

	/* begin block 2 */
		// Start line: 918
	/* end block 2 */
	// End Line: 919

void StateInitIdle(__CharacterState *In,int CurrentSection,int Ptr)

{
  int in_v0;
  int unaff_s2;
  int unaff_s3;
  undefined4 uStack00000010;
  
  *(undefined2 *)(unaff_s2 + 0x74) = 0;
  Raziel.State.SectionList[1].Defer.Queue[15].ID = -0x7ff2a9dc;
  Raziel.State.SectionList[1].Defer.Queue[11].ID._0_2_ = 0x100;
  Raziel.State.SectionList[1].Defer.Queue[8].ID = 0;
  Raziel.State.SectionList[2].Event.Queue[2].Data = 0;
  Raziel.State.SectionList[2].Event.Queue[0].ID = 0;
  Raziel.State.SectionList[1].Defer.Queue[11].ID._2_2_ = 0xffe0;
  uStack00000010 = 0;
  Raziel.State.SectionList[1].Defer.Queue[7].Data = in_v0;
  FUN_80072054();
  FUN_8007210c(0x800d5038,0,2);
  uStack00000010 = 0;
  FUN_80072054(unaff_s3 + 4,1,0,0);
  FUN_8007210c(0x800d5038,1,2);
  uStack00000010 = 0;
  FUN_80072054(0x800d5038,2,0,0);
  FUN_8007210c(0x800d5038,2,2);
  Raziel.currentHint = 0x519;
  *(undefined4 *)(unaff_s2 + 0x16c) = 0x100;
  *(undefined4 *)(unaff_s2 + 0x170) = 0x100;
  *(undefined4 *)(unaff_s2 + 0x174) = 0x100;
  FUN_800a798c(1);
  FUN_8009a604(0x800d56e4,4);
  FUN_8009a338();
  Raziel.padCommands.Queue[7].ID = 0;
  FUN_8001bf6c(&standardMenu);
  FUN_800a7a3c();
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerIdle(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$fp*/)
 // line 624, offset 0x800a8668
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x800A8668
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		int Anim; // $s5
	// 		int blockForwardMotion; // $s7

		/* begin block 1.1 */
			// Start line: 777
			// Start offset: 0x800A8C7C
			// Variables:
		// 		struct _Instance *heldInst; // $v0
		/* end block 1.1 */
		// End offset: 0x800A8CA4
		// End Line: 783

		/* begin block 1.2 */
			// Start line: 821
			// Start offset: 0x800A8D40
			// Variables:
		// 		struct evPhysicsEdgeData *EdgeData; // $v0
		/* end block 1.2 */
		// End offset: 0x800A8D98
		// End Line: 828
	/* end block 1 */
	// End offset: 0x800A8EF8
	// End Line: 898

	/* begin block 2 */
		// Start line: 1248
	/* end block 2 */
	// End Line: 1249

void StateHandlerIdle(__CharacterState *In,int CurrentSection,int Data)

{
  int unaff_s0;
  undefined4 uStack00000010;
  
  uStack00000010 = *(undefined4 *)(unaff_s0 + 8);
  FUN_80071b48(In,2,0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerLookAround(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s1*/, int Data /*$a2*/)
 // line 902, offset 0x800a8f28
	/* begin block 1 */
		// Start line: 903
		// Start offset: 0x800A8F28
		// Variables:
	// 		struct __Event *Ptr; // $s0

		/* begin block 1.1 */
			// Start line: 910
			// Start offset: 0x800A9018
			// Variables:
		// 		struct _Instance *instance; // $s0
		/* end block 1.1 */
		// End offset: 0x800A905C
		// End Line: 918

		/* begin block 1.2 */
			// Start line: 925
			// Start offset: 0x800A9094
			// Variables:
		// 		struct _Instance *instance; // $s0
		/* end block 1.2 */
		// End offset: 0x800A9094
		// End Line: 926

		/* begin block 1.3 */
			// Start line: 938
			// Start offset: 0x800A90DC
			// Variables:
		// 		int message; // stack offset -32
		// 		int messageData; // stack offset -28
		/* end block 1.3 */
		// End offset: 0x800A9190
		// End Line: 956
	/* end block 1 */
	// End offset: 0x800A9254
	// End Line: 979

	/* begin block 2 */
		// Start line: 1925
	/* end block 2 */
	// End Line: 1926

void StateHandlerLookAround(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  do {
    FUN_80070800(In,CurrentSection | 0x10,0);
LAB_800a883c:
    while( true ) {
      PurgeMessageQueue((__MessageQueue *)((int)unaff_s1 + unaff_s6 + 0xc));
      puVar1 = (undefined4 *)FUN_800707ac((int)unaff_s1 + unaff_s6 + 0xc);
      if (puVar1 == (undefined4 *)0x0) {
        if (((((unaff_s2 == 0) && (iVar2 = FUN_800b3f2c(*unaff_s1), iVar2 == 0)) &&
             (unaff_s5 != 0x37)) &&
            ((unaff_s5 != 0xd6 &&
             (Raziel.State.SectionList[2].Event.Queue[2].ID =
                   Raziel.State.SectionList[2].Event.Queue[2].ID + 1,
             300 < (uint)Raziel.State.SectionList[2].Event.Queue[2].ID)))) &&
           (Raziel.State.SectionList[2].Event.Queue[2].ID ==
            ((uint)Raziel.State.SectionList[2].Event.Queue[2].ID / 900) * 900)) {
          if (Raziel.State.SectionList[2].Event.Queue[2].Data == 0) {
            FUN_80071eb8();
            FUN_8002482c(*unaff_s1,1);
          }
          else {
            FUN_80071dcc(*unaff_s1,Raziel.State.SectionList[2].Event.Queue[2].Data,1,0);
          }
        }
        return;
      }
      puVar3 = (undefined *)*puVar1;
      if (puVar3 != (undefined *)0x2000000) break;
      if (((Raziel.State.SectionList[1].Defer.Queue[8].ID & 1U) == 0) ||
         (Raziel.State.SectionList[1].Defer.Queue[10].ID == 3)) {
        if (((Raziel.State.SectionList[1].Defer.Queue[8].ID & 8U) == 0) ||
           (Raziel.State.SectionList[1].Defer.Queue[10].ID == 3)) {
          if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x2010U) == 0) {
            if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x800U) == 0) {
              if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x4000U) != 0)
              goto joined_r0x800a8e44;
              iVar2 = FUN_800a5b98();
              if (((iVar2 != 0) && (unaff_s2 == 0)) &&
                 ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0)) goto LAB_800a8f44;
            }
            else {
              if (unaff_s2 == unaff_s3) {
                FUN_800a61a8(*unaff_s1,
                             *(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x58)
                            );
              }
            }
          }
          else {
            if (unaff_s2 == 0) {
              if (Raziel.State.SectionList[1].Defer.Queue[10].ID != 3) goto LAB_800a8f44;
              iVar2 = FUN_800a5f34();
              if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_8003432c(iVar2,2);
              }
            }
          }
        }
        else {
joined_r0x800a8e44:
          if (unaff_s2 == 0) {
LAB_800a8f44:
            FUN_80072698();
          }
        }
      }
      else {
        Raziel.State.SectionList[1].Event.Queue[9].Data = 0x200;
        *(undefined4 *)(unaff_s4 + 0x11c) = 0;
        if (unaff_s2 == 0) {
          FUN_80071eb8();
          FUN_80072698();
        }
        Raziel.currentHint = Raziel.currentHint & 0xfffffffe;
      }
    }
    if (0x2000000 < (int)puVar3) {
      if (puVar3 == (undefined *)0x4010400) {
        if ((((*(uint *)(puVar1[1] + 0x20) & 0x20000) != 0) &&
            ((Raziel.State.SectionList[1].Defer.Queue[13].Data & 1U) != 0)) &&
           (Raziel.State.SectionList[2].Event.Queue[1].ID == 2)) {
          Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x10000);
        }
        goto LAB_800a883c;
      }
      if ((int)puVar3 < 0x4010401) {
        if ((int)puVar3 < 0x2000003) goto LAB_800a883c;
        if (puVar3 == (undefined *)0x4010080) {
          if (unaff_s2 == 0) {
            if (puVar1[1] == 0) {
              FUN_800a6648(*unaff_s1);
            }
            else {
              FUN_800a66bc(*unaff_s1);
            }
          }
          goto LAB_800a883c;
        }
      }
      else {
        if (puVar3 == (undefined *)0x8000000) {
          if (unaff_s5 == 0xd7) {
            Raziel.currentHint = Raziel.currentHint & 0xff7fffff;
          }
          if (unaff_s5 != 0xd6) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,3);
          }
          FUN_80071b48();
          goto LAB_800a883c;
        }
        if ((int)puVar3 < 0x8000001) {
          if (puVar3 == (undefined *)0x4010401) {
            unaff_s7 = 1;
            goto LAB_800a883c;
          }
        }
        else {
          if (puVar3 == (undefined *)0x10000000) {
            if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_ARRAY_800cf57c[0]) == 0) {
              if ((short)Raziel.State.SectionList[1].Event.Queue[14].ID < -0x200) {
                if ((unaff_s2 != unaff_s3) || (iVar2 = FUN_800a5f6c(), iVar2 == 0)) {
                  FUN_80071b48();
                }
                FUN_800725cc();
                *(undefined4 *)(unaff_s4 + 0x11c) = 0x34;
                goto LAB_800a883c;
              }
              if (0x200 < (short)Raziel.State.SectionList[1].Event.Queue[14].ID) {
                if ((unaff_s2 != unaff_s3) || (*(int *)(*unaff_s1 + 0x130) == 0)) {
                  FUN_80071b48();
                }
                FUN_800725cc();
                *(undefined4 *)(unaff_s4 + 0x11c) = 0x33;
                goto LAB_800a883c;
              }
              if (unaff_s7 != 0) goto LAB_800a883c;
              if (0xfff < Raziel.State.SectionList[1].Event.Queue[12].ID) goto LAB_800a8c88;
            }
            FUN_800725cc();
            goto LAB_800a883c;
          }
        }
      }
LAB_800a8f58:
      FUN_800b0280();
      goto LAB_800a883c;
    }
    if (puVar3 == &DAT_80000002) {
      if ((unaff_s2 == 0) && ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf564) != 0)) {
        Raziel.State.SectionList[2].Defer.Queue[10].ID = 0;
        goto LAB_800a8f44;
      }
      goto LAB_800a883c;
    }
    if ((int)puVar3 < -0x7ffffffd) {
      if (puVar3 == (undefined *)0x80000000) {
        if ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0) {
LAB_800a8c88:
          FUN_800725cc();
        }
        goto LAB_800a883c;
      }
      if (puVar3 == (undefined *)0x80000001) {
        if (unaff_s2 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x10;
          Raziel.currentHint = Raziel.currentHint | 0x10;
          iVar2 = FUN_800a7384(*unaff_s1,0x10,0,0);
          if (iVar2 != 0) {
            FUN_80071eb8();
          }
          goto LAB_800a8f44;
        }
        goto LAB_800a883c;
      }
      goto LAB_800a8f58;
    }
    if (puVar3 == &DAT_00100001) {
      if (unaff_s2 == 0) {
        Raziel.State.SectionList[2].Event.Queue[2].ID = 0;
        Raziel.currentHint = (int)&DAT_0002a109;
        Raziel._1312_4_ = 3;
        Raziel.State.SectionList[1].Event.Queue[9].Data = unaff_s3;
                    /* WARNING: Subroutine does not return */
        FUN_800a3070(*unaff_s1,0);
      }
      FUN_800a8504();
      goto LAB_800a883c;
    }
    if (0x100001 < (int)puVar3) {
      if (puVar3 == &DAT_00100004) {
        if (unaff_s2 == 0) {
          FUN_800a62e0(0x1000);
          FUN_800a66bc(*unaff_s1);
          FUN_800247b4(*unaff_s1,1);
        }
        goto LAB_800a883c;
      }
      goto LAB_800a8f58;
    }
    if (puVar3 != &DAT_80000010) goto LAB_800a8f58;
    if ((unaff_s2 != 0) || ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 4U) == 0))
    goto LAB_800a883c;
    In = (__CharacterState *)(unaff_s1 + 0x25);
    if (((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0) &&
       ((draw[1].dr_env.code[10] & 4) == 0)) goto LAB_800a8f44;
    CurrentSection = 0x80000000;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerCrouch(struct __CharacterState *In /*$s3*/, int CurrentSection /*$s4*/, int Data /*stack 8*/)
 // line 982, offset 0x800a9270
	/* begin block 1 */
		// Start line: 983
		// Start offset: 0x800A9270
		// Variables:
	// 		struct __Event *Ptr; // $s1
	// 		int Anim; // $s0
	// 		struct _Instance *heldInst; // $s5
	// 		int DropThisFrame; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1097
			// Start offset: 0x800A96A0
			// Variables:
		// 		struct evObjectData *data; // $s0
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800A9788
		// End Line: 1124
	/* end block 1 */
	// End offset: 0x800A99B8
	// End Line: 1186

	/* begin block 2 */
		// Start line: 2095
	/* end block 2 */
	// End Line: 2096

void StateHandlerCrouch(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  int in_stack_00000010;
  
  do {
    FUN_800a5ea4(*unaff_s2);
    FUN_800725cc();
    do {
      FUN_800725cc();
      if ((Raziel.State.SectionList[1].Defer.Queue[10].ID != 0x1000) &&
         (Raziel.State.SectionList[1].Defer.Queue[10].ID != 8)) {
        FUN_800a58a4((int)*(short *)(*unaff_s2 + 0xec),
                     (int)*(short *)(Raziel.Senses.EngagedMask + 0x24),
                     (int)*(short *)(Raziel.Senses.EngagedMask + 0x26));
      }
      Raziel.State.SectionList[2].Event.Queue[7].ID = 2;
      Raziel.State.SectionList[2].Defer.Queue[10].ID = (int)FUN_800a87bc;
LAB_800a90b8:
      while( true ) {
        PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
        puVar1 = (undefined4 *)FUN_800707ac(unaff_s3 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          if (((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf574) == 0) ||
             ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf570) == 0)) {
            FUN_80070800(unaff_s2 + unaff_s1 * 0x47 + 0x25,0x100000,0);
          }
          return;
        }
        puVar3 = (undefined *)*puVar1;
        if (puVar3 != (undefined *)0x100000) break;
LAB_800a9350:
        FUN_800725cc();
      }
      if (0x100000 < (int)puVar3) {
        if (puVar3 == &DAT_00100004) {
          if (unaff_s1 == 1) {
            iVar2 = *unaff_s2 + 0x194;
            FUN_8009060c(iVar2,0x11,0xe,300);
            FUN_8009060c(iVar2,0x10,0xe,300);
            FUN_8009060c(iVar2,0xe,0xe,300);
          }
        }
        else {
          if ((int)puVar3 < 0x100005) {
            if (puVar3 == &DAT_00100001) {
              if (unaff_s1 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_800904f0(*unaff_s2 + 0x194,0x11,0xe);
              }
              iVar2 = FUN_8007216c();
              if (iVar2 == 0x18) {
                FUN_800a8504();
              }
            }
          }
          else {
            if (puVar3 == (undefined *)0x1000000) {
              if (unaff_s1 == 0) {
                FUN_8001b848(&standardMenu);
              }
              goto LAB_800a9350;
            }
          }
        }
        goto LAB_800a90b8;
      }
      if (puVar3 == &DAT_00040005) goto LAB_800a9350;
      if (0x40005 < (int)puVar3) {
        if (puVar3 == (undefined *)0x40025) goto LAB_800a9350;
        goto LAB_800a90b8;
      }
      if (((puVar3 != &DAT_80000020) ||
          (iVar2 = FUN_8009bc14(&stack0x00000010,&stack0x00000014), iVar2 == 0)) ||
         (in_stack_00000010 == -0x80000000)) goto LAB_800a90b8;
    } while ((in_stack_00000010 != 0x80000) || (unaff_s1 != 0));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerDropAction(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$s4*/)
 // line 1189, offset 0x800a99e8
	/* begin block 1 */
		// Start line: 1190
		// Start offset: 0x800A99E8
		// Variables:
	// 		struct __Event *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800A9C48
	// End Line: 1260

	/* begin block 2 */
		// Start line: 2528
	/* end block 2 */
	// End Line: 2529

void StateHandlerDropAction(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000018;
  
  FUN_800725cc();
  Raziel.State.SectionList[1].Event.Queue[9].Data = 0x1000000;
LAB_800a9440:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)((int)unaff_s3 + unaff_s8 + 0xc));
    puVar1 = (undefined4 *)FUN_800707ac((int)unaff_s3 + unaff_s8 + 0xc);
    if (puVar1 == (undefined4 *)0x0) {
      if (((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) == 0) &&
         ((code *)unaff_s3[unaff_s4 * 0x47 + 2] == FUN_800a93dc)) {
        FUN_80070800(unaff_s3 + unaff_s4 * 0x47 + 3,0x20000008,0);
      }
      return;
    }
    iVar2 = FUN_8007216c();
    puVar4 = (undefined *)*puVar1;
    if (puVar4 != &DAT_00100001) break;
    if (unaff_s4 == 0) {
      Raziel.State.SectionList[1].Event.Queue[9].Data = 0x40;
      Raziel.currentHint = (int)&DAT_00008109;
      Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s3,0);
    }
    if (puVar1[1] == 0) {
      *(undefined4 *)(unaff_s6 + 0x120) = 0;
    }
    else {
      *(undefined4 *)(unaff_s6 + 0x120) = 0x48;
    }
  }
  if ((int)puVar4 < 0x100002) {
    if (puVar4 == &DAT_80000008) goto LAB_800a9440;
    if ((int)puVar4 < -0x7ffffff7) {
      if (puVar4 == (undefined *)0x80000001) {
        if (((unaff_s4 == 0) && (iVar2 != 5)) && (iVar2 != 0x55)) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x20;
          iVar2 = FUN_800a7384(*unaff_s3,0x20,0,0);
          if (iVar2 != 0) {
            FUN_80071eb8();
          }
          FUN_80072698();
        }
      }
      else {
        if ((int)puVar4 < -0x7fffffff) {
          if (unaff_s5 != 0) {
            FUN_800a7440(*unaff_s3);
                    /* WARNING: Subroutine does not return */
            *(undefined4 *)(unaff_s6 + 0x120) = 0x50;
            FUN_80034368();
          }
        }
        else {
          if (puVar4 != &DAT_80000004) goto LAB_800a9aac;
        }
      }
      goto LAB_800a9440;
    }
    if (puVar4 != &DAT_80000020) {
      if ((int)puVar4 < -0x7fffffdf) {
        if (puVar4 == &DAT_80000010) {
          if ((unaff_s4 == 0) && (*(int *)(*unaff_s3 + 0xb4) != 0)) {
            FUN_80070800(unaff_s3 + 0x25,&DAT_80000010,0);
            Raziel.currentHint = Raziel.currentHint | 0x800000;
          }
          goto LAB_800a99b4;
        }
      }
      else {
        if (puVar4 == (undefined *)0x100000) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,3);
        }
      }
      goto LAB_800a9aac;
    }
    if ((iVar2 == 5) || (iVar2 == 0x55)) goto LAB_800a9440;
  }
  else {
    if (puVar4 == (undefined *)0x4020000) goto LAB_800a9440;
    if ((int)puVar4 < 0x4020001) {
      if (puVar4 == (undefined *)0x2000000) {
        if (((((Raziel.State.SectionList[1].Defer.Queue[8].ID & 4U) != 0) &&
             (Raziel.State.SectionList[1].Defer.Queue[10].ID != 3)) && (iVar2 != 5)) &&
           (iVar2 != 0x55)) {
          Raziel.currentHint = Raziel.currentHint & 0xfffffff7U | 0x8041000;
          iVar2 = 0;
          if (unaff_s4 == 0) {
            iVar6 = 8;
            piVar5 = unaff_s3;
            do {
              piVar5[0x47] = 0;
              FUN_800707a0((int)unaff_s3 + iVar6 + 4);
              iVar6 = iVar6 + 0x11c;
              iVar2 = iVar2 + 1;
              piVar5 = piVar5 + 0x47;
            } while (iVar2 < 3);
            FUN_800a6478(*unaff_s3,
                         *(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x10),
                         0xffffff73);
            uVar3 = FUN_80070b4c(-(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                                 -(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,0,0);
                    /* WARNING: Subroutine does not return */
            FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x10),
                         0x800001,uVar3);
          }
        }
        goto LAB_800a9440;
      }
      if ((int)puVar4 < 0x2000001) {
        if (puVar4 == &DAT_00100004) {
          if ((unaff_s4 == 0) && (FUN_800247b4(*unaff_s3,1), unaff_s5 != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_80034368();
          }
          goto LAB_800a9440;
        }
      }
      else {
        if (puVar4 == (undefined *)0x4010400) goto LAB_800a9440;
      }
    }
    else {
      if (puVar4 == (undefined *)0x10000000) {
        if (((Raziel.State.SectionList[1].Defer.Queue[10].ID != 3) && (iVar2 != 5)) &&
           (iVar2 != 0x55)) {
          FUN_800725cc();
        }
        goto LAB_800a9440;
      }
      if ((int)puVar4 < 0x10000001) {
        if (puVar4 == (undefined *)0x8000000) {
          if ((iVar2 == 5) || (iVar2 == 0x55)) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,3);
          }
          if (unaff_s4 == unaff_s7) {
            if (((unaff_s3[0x8f] == 0x50) && (unaff_s5 != 0)) && (in_stack_00000018 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_80034368();
            }
            unaff_s3[0x48] = 0x4c;
            *(undefined4 *)(unaff_s6 + 0x120) = 0x4c;
            unaff_s3[0xd6] = 0x4c;
            iVar2 = FUN_800a7384(*unaff_s3,0x4c,0,0);
            if (iVar2 != 0) {
              FUN_80071eb8();
            }
          }
          goto LAB_800a9440;
        }
      }
      else {
        if (puVar4 == (undefined *)0x20000008) {
LAB_800a99b4:
          if (((iVar2 != 5) && (iVar2 != 0x55)) && (*(int *)(unaff_s6 + 0x120) != 0x50)) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,3);
          }
          goto LAB_800a9440;
        }
      }
    }
  }
LAB_800a9aac:
  FUN_800b0280();
  goto LAB_800a9440;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSoulSuck(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$s5*/)
 // line 1267, offset 0x800a9c68
	/* begin block 1 */
		// Start line: 1268
		// Start offset: 0x800A9C68
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		int Anim; // $s3

		/* begin block 1.1 */
			// Start line: 1375
			// Start offset: 0x800AA130
			// Variables:
		// 		struct evPhysicsSwimData *SwimData; // $v0
		/* end block 1.1 */
		// End offset: 0x800AA160
		// End Line: 1382
	/* end block 1 */
	// End offset: 0x800AA17C
	// End Line: 1390

	/* begin block 2 */
		// Start line: 2693
	/* end block 2 */
	// End Line: 2694

	/* begin block 3 */
		// Start line: 2698
	/* end block 3 */
	// End Line: 2699

void StateHandlerSoulSuck(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 uVar1;
  undefined4 uStack00000010;
  
  uStack00000010 = 3;
  FUN_80071b48();
  uVar1 = FUN_800a5f34();
                    /* WARNING: Subroutine does not return */
  FUN_80034368(uVar1,0x80002c,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerStartTurn(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s3*/)
 // line 1396, offset 0x800aa1a0
	/* begin block 1 */
		// Start line: 1397
		// Start offset: 0x800AA1A0
		// Variables:
	// 		struct __Event *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800AA384
	// End Line: 1457

	/* begin block 2 */
		// Start line: 2961
	/* end block 2 */
	// End Line: 2962

void StateHandlerStartTurn(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 uStack00000010;
  
code_r0x800aa1a0:
  uStack00000010 = 0;
  FUN_80071b48();
LAB_800aa1b4:
  if (unaff_s3 != 0x50) goto LAB_800a9e48;
  if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf564) == 0) {
    if (Raziel.State.SectionList[2].Defer.Queue[10].ID == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80071404(0,0,3);
    }
    FUN_800725cc();
    goto LAB_800a9e48;
  }
  uStack00000010 = 8;
LAB_800aa288:
  FUN_80071b48();
LAB_800a9e48:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
    puVar1 = (undefined4 *)FUN_800707ac(unaff_s4 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    puVar2 = (undefined *)*puVar1;
    if (puVar2 != (undefined *)0x1000006) break;
LAB_800aa080:
    if (unaff_s3 == 0x4f) {
      uStack00000010 = 3;
      FUN_80071b48();
      FUN_800707a0(unaff_s4 + 4);
    }
    else {
      if (Raziel.State.SectionList[2].Defer.Queue[10].ID == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
      FUN_800725cc();
    }
    if (((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x1000U) != 0) && (unaff_s0 == 0)) {
LAB_800aa118:
                    /* WARNING: Subroutine does not return */
      FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x60),0x1000014
                   ,0);
    }
  }
  if ((int)puVar2 < 0x1000007) {
    if (puVar2 == &DAT_00100001) {
      if (unaff_s0 == 0) {
        Raziel.currentHint = 9;
        Raziel._1312_4_ = 3;
        if (((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x1000U) != 0) &&
           (Raziel.State.SectionList[1].Defer.Queue[10].ID != 3)) {
          uStack00000010 = 0;
          FUN_800a53c8(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x60),0xdc,
                       *unaff_s1 + 0x5c,*unaff_s1 + 0x74);
                    /* WARNING: Subroutine does not return */
          FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x60),
                       0x1000014,1);
        }
        uStack00000010 = 4;
        FUN_80071b8c();
      }
      if (unaff_s0 == 2) {
        uStack00000010 = 4;
        FUN_80071b48();
      }
      if (unaff_s0 == unaff_s2) {
        FUN_800a5f6c();
        uStack00000010 = 4;
        FUN_80071b48();
        Raziel.State.SectionList[1].Event.Queue[9].Data =
             Raziel.State.SectionList[1].Event.Queue[9].Data | 0x10000000;
      }
      goto LAB_800a9e48;
    }
    if ((int)puVar2 < 0x100002) {
      if (puVar2 != &DAT_80000010) goto LAB_800aa2d0;
      goto LAB_800a9e48;
    }
    if (puVar2 == &DAT_00100004) {
      if (unaff_s0 == unaff_s2) {
        FUN_800a798c(1);
        Raziel.currentHint = Raziel.currentHint & 0xffffffbf;
        Raziel.State.SectionList[1].Event.Queue[9].Data =
             Raziel.State.SectionList[1].Event.Queue[9].Data & 0xefffffff;
        if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x1000U) != 0) goto LAB_800aa118;
      }
      goto LAB_800a9e48;
    }
    if (puVar2 == (undefined *)0x1000001) goto LAB_800a9e48;
  }
  else {
    if (puVar2 == (undefined *)0x4020000) {
      if ((*(ushort *)(puVar1[1] + 0x10) & 0x40) != 0) {
        FUN_8009f050();
      }
      goto LAB_800a9e48;
    }
    if ((int)puVar2 < 0x4020001) {
      if (puVar2 == (undefined *)0x1000009) goto LAB_800aa274;
      if (puVar2 == (undefined *)0x1000016) {
        if (((draw[0].dr_env.code[1] & 0x800) != 0) && (unaff_s0 == unaff_s2)) {
          FUN_800a47bc(puVar1[1]);
          FUN_800a7de8(0x1000);
        }
        goto LAB_800a9e48;
      }
    }
    else {
      if (puVar2 == (undefined *)0x8000000) {
        if (unaff_s3 == 0x2f) {
          if (Raziel.State.SectionList[2].Defer.Queue[10].ID == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,3);
          }
          FUN_800725cc();
        }
        if (unaff_s3 == 0x4e) goto code_r0x800aa1a0;
        goto LAB_800aa1b4;
      }
      if (puVar2 == (undefined *)0x20000002) goto LAB_800aa080;
    }
  }
LAB_800aa2d0:
  FUN_800b0280();
  goto LAB_800a9e48;
LAB_800aa274:
  uStack00000010 = 2;
  goto LAB_800aa288;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateInitStartMove(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Frame /*$s3*/)
 // line 1461, offset 0x800aa3a0
	/* begin block 1 */
		// Start line: 3096
	/* end block 1 */
	// End Line: 3097

	/* begin block 2 */
		// Start line: 3099
	/* end block 2 */
	// End Line: 3100

void StateInitStartMove(__CharacterState *In,int CurrentSection,int Frame)

{
  undefined4 *puVar1;
  undefined *in_v0;
  int iVar2;
  undefined *in_v1;
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  do {
    if (in_v1 == in_v0) {
LAB_800aa420:
      if (unaff_s1 == 0) {
        if ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,3);
        }
LAB_800aa4c8:
        FUN_80072698();
      }
    }
    else {
      if ((int)in_v0 < (int)in_v1) {
        if (in_v1 != &DAT_00100001) {
          if (in_v1 != (undefined *)0x8000000) goto LAB_800aa4d8;
          goto LAB_800aa420;
        }
        if (unaff_s1 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x4000;
          Raziel.currentHint = 0x20109;
          Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s0,1);
        }
      }
      else {
        if (in_v1 == (undefined *)0x80000001) {
          if (unaff_s1 == 0) {
            Raziel.State.SectionList[1].Event.Queue[9].Data = 8;
            iVar2 = FUN_800a7384(*unaff_s0,0,0,0);
            if (iVar2 != 0) {
              FUN_80071eb8();
            }
            goto LAB_800aa4c8;
          }
        }
        else {
          if (in_v1 == (undefined *)0x0) goto LAB_800aa420;
LAB_800aa4d8:
          FUN_800b0280();
        }
      }
    }
    PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 4));
    puVar1 = (undefined4 *)FUN_800707ac(unaff_s2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    in_v1 = (undefined *)*puVar1;
    in_v0 = (undefined *)0x100000;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerStartMove(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s4*/)
 // line 1550, offset 0x800aa44c
	/* begin block 1 */
		// Start line: 1551
		// Start offset: 0x800AA44C
		// Variables:
	// 		struct __Event *Ptr; // $a1

		/* begin block 1.1 */
			// Start line: 1613
			// Start offset: 0x800AA728
			// Variables:
		// 		int mode; // $a0
		/* end block 1.1 */
		// End offset: 0x800AA780
		// End Line: 1631
	/* end block 1 */
	// End offset: 0x800AAACC
	// End Line: 1722

	/* begin block 2 */
		// Start line: 3277
	/* end block 2 */
	// End Line: 3278

void StateHandlerStartMove(__CharacterState *In,int CurrentSection,int Data)

{
                    /* WARNING: Subroutine does not return */
  FUN_80071404(In,CurrentSection,3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateInitMove(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s0*/, int Frames /*$a2*/)
 // line 1725, offset 0x800aaaec
	/* begin block 1 */
		// Start line: 3642
	/* end block 1 */
	// End Line: 3643

	/* begin block 2 */
		// Start line: 3647
	/* end block 2 */
	// End Line: 3648

void StateInitMove(__CharacterState *In,int CurrentSection,int Frames)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int unaff_s0;
  int *piVar5;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    FUN_800b0280();
LAB_800aa5fc:
    do {
      while( true ) {
        PurgeMessageQueue((__MessageQueue *)((int)unaff_s1 + unaff_s0 + 0xc));
        puVar1 = (undefined4 *)FUN_800707ac((int)unaff_s1 + unaff_s0 + 0xc);
        if (puVar1 == (undefined4 *)0x0) {
          if ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) != 0) {
            piVar5 = unaff_s1 + unaff_s2 * 0x47;
            iVar2 = piVar5[0x48] + 1;
            if ((piVar5[0x48] != 0) && (piVar5[0x48] = iVar2, 7 < iVar2)) {
              FUN_8007210c();
              piVar5[0x48] = 0;
              Raziel.currentHint = Raziel.currentHint & 0xffffdfff;
            }
          }
          iVar2 = FUN_800722a0();
          if (((10 < iVar2) && (unaff_s2 == 0)) && (iVar2 = FUN_800b3f2c(*unaff_s1), iVar2 != 0)) {
            if ((code *)unaff_s1[0x49] == FUN_800aa5b8) {
              FUN_800725cc();
            }
            if ((code *)unaff_s1[0x90] == FUN_800aa5b8) {
              FUN_800725cc();
            }
          }
          if (((Raziel.State.SectionList[1].Event.Queue[12].ID != 0) &&
              (Raziel.State.SectionList[1].Event.Queue[12].ID < 0x1000)) &&
             ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 1U) != 0)) {
            FUN_800725cc();
          }
          return;
        }
        puVar3 = (undefined *)*puVar1;
        if (puVar3 != &DAT_00100001) break;
        FUN_800aa50c();
        *(undefined4 *)(unaff_s3 + 0x120) = 1;
        if (unaff_s2 == 0) {
          Raziel.currentHint = (int)&DAT_0002a119;
          Raziel.State.SectionList[1].Event.Queue[9].Data =
               Raziel.State.SectionList[1].Event.Queue[9].Data & 0x200800U | 4;
          Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s1,2);
        }
      }
      if ((int)puVar3 < 0x100002) {
        if (puVar3 == &DAT_80000002) {
LAB_800aa82c:
          if (unaff_s2 != 0) goto LAB_800aa5fc;
          if (*(int *)(*unaff_s1 + 0xb4) != 0) {
            FUN_80070800(unaff_s1 + 0x25,*puVar1,0);
            Raziel.currentHint = Raziel.currentHint | 0x800000;
          }
        }
        else {
          if ((int)puVar3 < -0x7ffffffd) {
            if (puVar3 == (undefined *)0x80000000) {
              if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 4U) == 0) {
                if ((unaff_s2 == 0) &&
                   ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0))
                goto LAB_800aaaac;
              }
              else {
                if (unaff_s2 == 1) {
                  if ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0) {
                    FUN_800725cc();
                  }
                }
                else {
LAB_800aa9c4:
                  FUN_800725cc();
                }
              }
            }
            else {
              if (puVar3 != (undefined *)0x80000001) break;
              if (unaff_s2 == 0) {
                Raziel.State.SectionList[1].Event.Queue[9].Data = 8;
                iVar2 = FUN_800a7384(*unaff_s1,0,0,0);
                if (iVar2 != 0) {
                  FUN_80071eb8();
                }
                FUN_80072698();
LAB_800aa95c:
                Raziel.currentHint = Raziel.currentHint & 0xffffdfff;
              }
            }
            goto LAB_800aa5fc;
          }
          if (puVar3 == &DAT_80000010) goto LAB_800aa82c;
          if ((int)puVar3 < -0x7fffffef) {
            if (puVar3 != &DAT_80000004) break;
            FUN_800725cc();
            goto LAB_800aa5fc;
          }
          if (puVar3 != (undefined *)0x0) break;
        }
        if (unaff_s2 == 0) {
          if (((Raziel.State.SectionList[2].Defer.Queue[10].Data & 7U) != 0) ||
             (iVar2 = FUN_8007230c(), iVar2 == 0)) {
            if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 1U) == 0) {
              uVar4 = Raziel.State.SectionList[2].Defer.Queue[10].Data & 4;
              if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 2U) != 0) {
                uVar4 = 3;
              }
            }
            else {
              uVar4 = 2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_80071404(uVar4,5,5);
          }
          Raziel.currentHint = Raziel.currentHint | 0x2000;
        }
        goto LAB_800aa5fc;
      }
      if (puVar3 == (undefined *)0x4010401) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,5,5);
      }
      if ((int)puVar3 < 0x4010402) {
        if (puVar3 == (undefined *)0x4000001) {
          if ((unaff_s2 == 0) && (iVar2 = FUN_800722a0(), 6 < iVar2)) {
            Raziel._1312_4_ = 0;
            FUN_8009a5cc(*unaff_s1,0x800d5034);
            if (*(int *)(*unaff_s1 + 0x15c) < -0x20) {
              iVar2 = FUN_800a7384(*unaff_s1,0x18,0,0);
              if (iVar2 != 0) {
                FUN_80071eb8();
              }
LAB_800aaaac:
              FUN_80072698();
            }
          }
        }
        else {
          if ((int)puVar3 < 0x4000002) {
            if (puVar3 != (undefined *)0x2000000) break;
            if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x20U) == 0) goto LAB_800aa82c;
            FUN_800a5b98();
          }
          else {
            if (puVar3 != (undefined *)0x4010080) break;
            if (unaff_s2 != 2) {
              FUN_8007210c();
            }
            if (((Raziel.State.SectionList[2].Defer.Queue[10].Data & 2U) != 0) &&
               ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) != 0)) {
              FUN_8007210c();
              goto LAB_800aa95c;
            }
          }
        }
        goto LAB_800aa5fc;
      }
      if ((int)puVar3 < 0x8000000) break;
      if ((int)puVar3 < 0x8000002) goto LAB_800aa9c4;
    } while (puVar3 == (undefined *)0x10000000);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerMove(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s7*/)
 // line 1931, offset 0x800aad30
	/* begin block 1 */
		// Start line: 1932
		// Start offset: 0x800AAD30
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		int Anim; // $s6

		/* begin block 1.1 */
			// Start line: 1997
			// Start offset: 0x800AB0E8
			// Variables:
		// 		int data; // $a2
		/* end block 1.1 */
		// End offset: 0x800AB144
		// End Line: 2011
	/* end block 1 */
	// End offset: 0x800AB404
	// End Line: 2102

	/* begin block 2 */
		// Start line: 4090
	/* end block 2 */
	// End Line: 4091

void StateHandlerMove(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  FUN_800a7554(*unaff_s2);
  *(undefined4 *)(unaff_s3 + 0x120) = unaff_s4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerStopMove(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s4*/)
 // line 2105, offset 0x800ab430
	/* begin block 1 */
		// Start line: 2106
		// Start offset: 0x800AB430
		// Variables:
	// 		struct __Event *Ptr; // $a1
	/* end block 1 */
	// End offset: 0x800AB768
	// End Line: 2202

	/* begin block 2 */
		// Start line: 4448
	/* end block 2 */
	// End Line: 4449

void StateHandlerStopMove(__CharacterState *In,int CurrentSection,int Data)

{
  code **ppcVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  __CharacterState *In_00;
  code *CurrentSection_00;
  code *Data_00;
  __CharacterState *unaff_s1;
  code *unaff_s2;
  int unaff_s3;
  code *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  code *unaff_s7;
  
  CurrentSection_00 = (code *)CurrentSection;
  Data_00 = (code *)Data;
code_r0x800ab430:
  Raziel.currentHint = Raziel.currentHint & 0xffffdfff;
LAB_800aaf0c:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)((int)&unaff_s1->SectionList[0].Event.Head + unaff_s5));
    In_00 = (__CharacterState *)((int)&unaff_s1->SectionList[0].Event.Head + unaff_s5);
    ppcVar1 = (code **)FUN_800707ac();
    if (ppcVar1 == (code **)0x0) {
      if ((unaff_s2 == (code *)0x0) && (unaff_s1->SectionList[0].Process != FUN_800aae9c)) {
        FUN_800a6f14(unaff_s1->CharacterInstance);
      }
      return;
    }
    pcVar4 = *ppcVar1;
    if (pcVar4 != (code *)0x0) break;
LAB_800ab148:
    if (unaff_s2 == (code *)0x0) {
      if (((Raziel.State.SectionList[1].Event.Queue[14].Data == 9) ||
          (Raziel.State.SectionList[1].Event.Queue[14].Data == 0xe)) ||
         (Raziel.State.SectionList[1].Event.Queue[14].Data == 0xf)) {
        CurrentSection_00 = unaff_s2;
        FUN_800a6d84();
      }
      else {
        if ((((code *)Raziel.State.SectionList[1].Event.Queue[9].Data == unaff_s4) ||
            (unaff_s6 == 0x7b)) || (unaff_s6 == 0x7c)) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,3);
        }
        if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x1000000) {
          CurrentSection_00 = FUN_800a93dc;
LAB_800ab4ec:
          Data_00 = (code *)0x0;
          FUN_80072698();
        }
        else {
          if (((int)ppcVar1[1] < 4) && ((Raziel.currentHint & 0x800000U) == 0)) {
            uVar2 = Raziel.currentHint | 0x2000;
            CurrentSection_00 = (code *)Raziel.currentHint;
            Raziel.currentHint = uVar2;
            if ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) == 0) {
              Data_00 = ppcVar1[1] + 1;
              Raziel.currentHint = uVar2;
              FUN_80070800(&unaff_s1->SectionList[0].Defer,0);
              CurrentSection_00 = (code *)0x0;
              FUN_800a6d84();
            }
          }
          else {
            Data_00 = (code *)0x0;
            if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 0x2000U) != 0) {
              Data_00 = (code *)0x1e;
            }
            if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 0x1000U) != 0) {
              Data_00 = (code *)0x3c;
            }
            FUN_80072698();
            CurrentSection_00 = (code *)0x80000000;
            if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) != 0) {
              CurrentSection_00 = (code *)&DAT_80000008;
              Data_00 = (code *)0x0;
              FUN_80070800(&unaff_s1->SectionList[0].Defer);
            }
          }
        }
      }
    }
  }
  if ((int)pcVar4 < 1) {
    if (pcVar4 == (code *)&DAT_80000002) {
LAB_800ab0f0:
      if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) == 0) {
LAB_800ab10c:
        if (unaff_s2 == (code *)0x0) {
          if (unaff_s1->CharacterInstance->tface != (_TFace *)0x0) {
            CurrentSection_00 = *ppcVar1;
            Data_00 = (code *)0x0;
            FUN_80070800(&unaff_s1->SectionList[0].Defer);
            Raziel.currentHint = Raziel.currentHint | 0x800000;
          }
          goto LAB_800ab148;
        }
      }
      goto LAB_800aaf0c;
    }
    if ((int)pcVar4 < -0x7ffffffd) {
      if (pcVar4 == (code *)0x80000000) {
        if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_ARRAY_800cf57c[0]) == 0) {
          if (*(int *)(unaff_s3 + 0x120) == 0x44) {
            if ((unaff_s2 == (code *)0x1) &&
               ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0)) {
              CurrentSection_00 = (code *)0x1;
              Data_00 = FUN_8009bf7c;
              FUN_800725cc();
            }
            Raziel.State.SectionList[1].Defer.Queue[11].ID._0_2_ = 200;
            Raziel.State.SectionList[1].Defer.Queue[11].ID._2_2_ = 0xffa0;
          }
          else {
            if (*(int *)(unaff_s3 + 0x120) != 0x38) goto LAB_800ab4fc;
            iVar3 = FUN_800a5f34();
            if ((iVar3 != 0) && (CurrentSection_00 = (code *)0x800b0000, unaff_s2 == (code *)0x0)) {
              CurrentSection_00 = FUN_800a9b54;
              goto LAB_800ab4ec;
            }
          }
        }
        else {
LAB_800ab4fc:
          if ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x80U) == 0) {
            Data_00 = FUN_8009bf7c;
            CurrentSection_00 = unaff_s2;
            FUN_800725cc();
          }
        }
        goto LAB_800aaf0c;
      }
      if (pcVar4 != (code *)0x80000001) goto LAB_800ab530;
      if (unaff_s2 != (code *)0x0) goto LAB_800aaf0c;
      if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) == 0) {
        Raziel.State.SectionList[1].Event.Queue[9].Data = 8;
        iVar3 = FUN_800a7384(unaff_s1->CharacterInstance,0,0,0);
      }
      else {
        Raziel.State.SectionList[1].Event.Queue[9].Data = 0x20;
        iVar3 = FUN_800a7384(unaff_s1->CharacterInstance,0x20,0,0);
      }
      if (iVar3 != 0) {
        FUN_80071eb8();
      }
      CurrentSection_00 = FUN_800ab8f4;
      Data_00 = (code *)0x0;
      FUN_80072698();
      goto code_r0x800ab430;
    }
    if (pcVar4 == (code *)&DAT_80000008) goto LAB_800aaf0c;
    if (-0x7ffffff8 < (int)pcVar4) {
      if (pcVar4 == (code *)&DAT_80000010) goto LAB_800ab10c;
      goto LAB_800ab530;
    }
    if (pcVar4 == (code *)&DAT_80000004) {
      if ((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x200000U) == 0) {
        CurrentSection_00 = unaff_s2;
        if (unaff_s2 == unaff_s4) {
          CurrentSection_00 = (code *)0x2;
        }
        Data_00 = (code *)(uint)(unaff_s2 != unaff_s4);
        FUN_80071b48();
        Raziel.State.SectionList[1].Event.Queue[9].Data = (int)unaff_s4;
        Raziel.currentHint = Raziel.currentHint | 0x2000;
      }
      goto LAB_800aaf0c;
    }
  }
  else {
    if (pcVar4 == (code *)0x4010080) {
      if (unaff_s2 == (code *)0x0) {
        if (ppcVar1[1] == (code *)0x0) {
          FUN_800a6648(unaff_s1->CharacterInstance);
        }
        else {
          FUN_800a66bc(unaff_s1->CharacterInstance);
        }
      }
      goto LAB_800aaf0c;
    }
    if ((int)pcVar4 < 0x4010081) {
      if (pcVar4 == (code *)&DAT_00100004) {
        CurrentSection_00 = (code *)0x0;
        FUN_80047624();
        *(undefined4 *)(unaff_s3 + 0x11c) = 0;
        goto LAB_800aaf0c;
      }
      if ((int)pcVar4 < 0x100005) {
        if (pcVar4 == (code *)&DAT_00100001) {
          *(undefined4 *)(unaff_s3 + 0x120) = 0xffffffff;
          FUN_800aac58();
          Raziel.State.SectionList[2].Process._0_2_ = 1;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(unaff_s1->CharacterInstance,2);
        }
      }
      else {
        if (pcVar4 == (code *)0x2000000) {
          if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x20U) == 0) goto LAB_800ab0f0;
          CurrentSection_00 = unaff_s2;
          FUN_800a5b98();
          goto LAB_800aaf0c;
        }
      }
    }
    else {
      if (pcVar4 == (code *)0x20000004) {
LAB_800ab370:
        Raziel.State.SectionList[1].Event.Queue[9].Data = 4;
        StateHandlerStopMove(In_00,(int)CurrentSection_00,(int)Data_00);
        return;
      }
      if ((int)pcVar4 < 0x20000005) {
        if (pcVar4 == (code *)0x10000000) {
          if (Raziel.State.SectionList[1].Event.Queue[12].ID < 0x1000) {
            Data_00 = (code *)0x3;
            CurrentSection_00 = unaff_s2;
            FUN_800aac58();
          }
          else {
            Data_00 = (code *)0x0;
            CurrentSection_00 = unaff_s2;
            FUN_800aac58();
          }
          goto LAB_800aaf0c;
        }
      }
      else {
        In_00 = unaff_s1;
        if (pcVar4 == (code *)0x20000008) goto LAB_800ab370;
      }
    }
  }
LAB_800ab530:
  CurrentSection_00 = unaff_s2;
  Data_00 = unaff_s7;
  FUN_800b0280();
  goto LAB_800aaf0c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerCompression(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s4*/)
 // line 2209, offset 0x800ab788
	/* begin block 1 */
		// Start line: 2210
		// Start offset: 0x800AB788
		// Variables:
	// 		struct __Event *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800ABB2C
	// End Line: 2305

	/* begin block 2 */
		// Start line: 4667
	/* end block 2 */
	// End Line: 4668

void StateHandlerCompression(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
LAB_800ab5e4:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 4));
    puVar1 = (undefined4 *)FUN_800707ac(unaff_s2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    puVar3 = (undefined *)*puVar1;
    if (puVar3 != &DAT_00100001) break;
    if (unaff_s1 == 0) {
      Raziel.State.SectionList[1].Event.Queue[9].Data = 4;
      if ((Raziel.currentHint & 0x800000U) == 0) {
        Raziel.currentHint = 0;
      }
      else {
        Raziel.currentHint = 0x800000;
      }
      Raziel._1312_4_ = 3;
      Raziel.currentHint = Raziel.currentHint | 0x2119;
    }
    if (puVar1[1] == 0x3c) {
      iVar2 = FUN_800a7440(*unaff_s0);
    }
    else {
      if (puVar1[1] != 0x1e) {
        uVar4 = 6;
LAB_800ab818:
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,uVar4);
      }
      iVar2 = FUN_800a7440(*unaff_s0);
    }
    if (iVar2 != 0) {
      FUN_800a7554(*unaff_s0);
      FUN_800ab8c4();
      return;
    }
  }
  if ((int)puVar3 < 0x100002) {
    if (puVar3 == &DAT_80000002) {
LAB_800ab7f4:
      FUN_80070800(unaff_s2 + 0x8c,*puVar1,0);
      FUN_800ab8c4();
      return;
    }
    if ((int)puVar3 < -0x7ffffffd) {
      if (puVar3 == (undefined *)0x80000001) {
        if (unaff_s1 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x10;
          iVar2 = FUN_800a7384(*unaff_s0,0,0,0);
          if (iVar2 != 0) {
            FUN_80071eb8();
          }
          FUN_80072698();
          FUN_800ab8c4();
          return;
        }
        goto LAB_800ab5e4;
      }
    }
    else {
      if (puVar3 == &DAT_80000008) {
        if (unaff_s1 == 0) {
          FUN_80072698();
          FUN_800ab8c4();
          return;
        }
        goto LAB_800ab5e4;
      }
      if (puVar3 == &DAT_80000010) goto LAB_800ab7f4;
    }
  }
  else {
    if ((int)puVar3 < 0x8000002) {
      if (0x7ffffff < (int)puVar3) {
        uVar4 = 5;
        goto LAB_800ab818;
      }
      if (puVar3 == (undefined *)0x2000000) goto LAB_800ab7f4;
      if (puVar3 == (undefined *)0x4010080) {
        if (unaff_s1 == 0) {
          if (puVar1[1] == 0) {
            FUN_800a6648(*unaff_s0);
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,5);
          }
          FUN_800a66bc(*unaff_s0);
          FUN_800ab8c4();
          return;
        }
        goto LAB_800ab5e4;
      }
    }
    else {
      if (puVar3 == (undefined *)0x10000000) {
        FUN_800725cc();
        goto LAB_800ab5e4;
      }
    }
  }
  FUN_800b0280();
  goto LAB_800ab5e4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerJump(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s2*/, int Data /*$s6*/)
 // line 2308, offset 0x800abb4c
	/* begin block 1 */
		// Start line: 2309
		// Start offset: 0x800ABB4C
		// Variables:
	// 		struct __Event *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800ABF5C
	// End Line: 2408

	/* begin block 2 */
		// Start line: 4888
	/* end block 2 */
	// End Line: 4889

void StateHandlerJump(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    FUN_80071eb8();
    do {
      FUN_8009a2c4(*unaff_s0,0xfffffff0,0,0x15);
      *(undefined4 *)(*unaff_s0 + 0x158) = 0;
LAB_800abc20:
      FUN_800725cc();
      while( true ) {
        while( true ) {
          do {
            PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
            puVar1 = (undefined4 *)FUN_800707ac(unaff_s3 + 4);
            if (puVar1 == (undefined4 *)0x0) {
              return;
            }
            puVar3 = (undefined *)*puVar1;
          } while (puVar3 == (undefined *)0x4000001);
          if (0x4000001 < (int)puVar3) break;
          if (puVar3 == (undefined *)0x80000001) {
            piVar4 = (int *)(unaff_s3 + 0x8c);
            uVar5 = 0x80000000;
            goto LAB_800abc6c;
          }
          if (-0x80000000 < (int)puVar3) {
            if (puVar3 != &DAT_00100001) goto LAB_800abc80;
            if (unaff_s1 == 0) {
              Raziel.currentHint = 0x111;
              FUN_8009a644(0x800d570c,0,0,0);
              unaff_s0[0x47] = 0;
              Raziel._1312_4_ = 3;
              Raziel.State.SectionList[1].Defer.Head._0_2_ = 0;
              if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x10) {
                    /* WARNING: Subroutine does not return */
                FUN_800a3070(*unaff_s0,4);
              }
              if ((0x10 < Raziel.State.SectionList[1].Event.Queue[9].Data) &&
                 (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x20)) {
                    /* WARNING: Subroutine does not return */
                FUN_800a3070(*unaff_s0,4);
              }
            }
          }
        }
        if (puVar3 == (undefined *)0x8000000) break;
        if ((int)puVar3 < 0x8000001) {
          if (puVar3 != (undefined *)0x4020000) {
LAB_800abc80:
            FUN_800b0280();
          }
        }
        else {
          if (puVar3 != (undefined *)0x20000001) goto LAB_800abc80;
          if (unaff_s1 == 0) {
            if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x10) {
              unaff_s0[0x47] = unaff_s2;
            }
            piVar4 = unaff_s0 + 0x25;
            uVar5 = 0x20000000;
LAB_800abc6c:
            FUN_80070800(piVar4,uVar5 | 1,0);
          }
        }
      }
      if (Raziel.State.SectionList[1].Event.Queue[9].Data == 8) {
        if (unaff_s1 == 0) {
          iVar2 = FUN_800a7384(*unaff_s0,4,0,0);
          if (iVar2 != 0) {
            FUN_80071eb8();
          }
          FUN_8009a2c4(*unaff_s0,0xfffffff0,0,0x53);
        }
        goto LAB_800abc20;
      }
      if (Raziel.State.SectionList[1].Event.Queue[9].Data != 0x20) {
        if (unaff_s1 == 0) {
          iVar2 = FUN_800a7384(*unaff_s0,0x14,0,0);
          if (iVar2 != 0) {
            FUN_80071eb8();
          }
          FUN_8009a2c4(*unaff_s0,0xfffffff0,0,0x28);
          *(undefined4 *)(*unaff_s0 + 0x158) = 0;
          if (unaff_s0[0x47] == unaff_s2) {
            *(int *)(*unaff_s0 + 0x15c) = (*(int *)(*unaff_s0 + 0x15c) << 1) / 3;
          }
        }
        goto LAB_800abc20;
      }
      if (unaff_s1 != 0) goto LAB_800abc20;
      iVar2 = FUN_800a7384(*unaff_s0,0x24,0,0);
    } while (iVar2 == 0);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerFall(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s3*/, int Data /*stack 8*/)
 // line 2411, offset 0x800abf84
	/* begin block 1 */
		// Start line: 2412
		// Start offset: 0x800ABF84
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		int Moving; // $s7
	// 		int DeferFlag; // $s6
	// 		struct evPhysicsSwimData *SwimData; // $s1

		/* begin block 1.1 */
			// Start line: 2430
			// Start offset: 0x800ABFC8
		/* end block 1.1 */
		// End offset: 0x800ABFFC
		// End Line: 2436
	/* end block 1 */
	// End offset: 0x800AC3C8
	// End Line: 2617

	/* begin block 2 */
		// Start line: 5132
	/* end block 2 */
	// End Line: 5133

void StateHandlerFall(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int in_v1;
  int *piVar4;
  uint uVar5;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  
  do {
    if (in_v1 == 0x20) goto LAB_800abf90;
    if (unaff_s0[0x47] == 0) {
      iVar2 = FUN_800722a0();
      unaff_s0[0x47] = iVar2 + 4;
      if (iVar2 + 4 != 0) goto LAB_800abfc4;
    }
    else {
LAB_800abfc4:
      iVar2 = FUN_800722a0();
      if (unaff_s0[0x47] < iVar2) {
        FUN_8009a5cc(*unaff_s0,unaff_s1 + -0x360);
        iVar2 = FUN_800a7384(*unaff_s0,8,0,0);
        if (iVar2 != 0) {
          FUN_80071eb8();
        }
        FUN_80072698();
        goto LAB_800abd08;
      }
    }
    piVar4 = (int *)(unaff_s3 + 0x8c);
    uVar5 = 0x20000000;
LAB_800ac08c:
    FUN_80070800(piVar4,uVar5 | 1,0);
LAB_800abd08:
    do {
      PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
      puVar1 = (undefined4 *)FUN_800707ac(unaff_s3 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      puVar3 = (undefined *)*puVar1;
    } while (puVar3 == (undefined *)0x1000001);
    if ((int)puVar3 < 0x1000002) {
      if (puVar3 == &DAT_80000008) goto LAB_800abd08;
      if ((int)puVar3 < -0x7ffffff7) {
        if (puVar3 == (undefined *)0x80000000) goto LAB_800abd08;
        if (puVar3 == (undefined *)0x80000001) {
          iVar2 = FUN_800722a0();
          piVar4 = (int *)(unaff_s3 + 0x8c);
          if (iVar2 < 2) {
            uVar5 = 0x80000000;
            goto LAB_800ac08c;
          }
          if ((Raziel.State.SectionList[1].Defer.Queue[10].ID != 3) && (unaff_s2 == 0)) {
            FUN_80072698();
          }
          goto LAB_800abd08;
        }
      }
      else {
        if (puVar3 == &DAT_00040005) goto LAB_800abd08;
        if ((int)puVar3 < 0x40006) {
          if (puVar3 == &DAT_80000020) goto LAB_800abd08;
        }
        else {
          if (puVar3 == &DAT_00100001) {
            if (unaff_s2 == 0) {
              Raziel.currentHint = 0x511;
              Raziel.ZDirection._0_2_ = 200;
              Raziel._1312_4_ = 0;
              *(undefined4 *)(*unaff_s0 + 0x1c4) = 0x800d5594;
            }
            *(undefined4 *)((int)unaff_s0 + unaff_s4 + 0x120) = 0;
            goto LAB_800abd08;
          }
        }
      }
LAB_800ac0b0:
      FUN_800b0280();
      goto LAB_800abd08;
    }
    if (puVar3 == (undefined *)0x4020000) goto LAB_800abd08;
    if ((int)puVar3 < 0x4020001) {
      if (puVar3 == (undefined *)0x4000001) goto LAB_800abd08;
      if (0x4000001 < (int)puVar3) {
        if (puVar3 != (undefined *)0x4010008) goto LAB_800ac0b0;
        goto LAB_800abd08;
      }
      if (puVar3 == (undefined *)0x2000000) {
        FUN_800a5b98();
        goto LAB_800abd08;
      }
      goto LAB_800ac0b0;
    }
    if (puVar3 == (undefined *)0x8000004) {
      Raziel.currentHint = Raziel.currentHint | 8;
      goto LAB_800abd08;
    }
    if ((int)puVar3 < 0x8000005) {
      if (puVar3 != (undefined *)0x8000000) goto LAB_800ac0b0;
      if (unaff_s2 == 0) {
        if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x10) {
          iVar2 = FUN_800a7384(*unaff_s0,0x18,0,0);
        }
        else {
          if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x20) {
            iVar2 = FUN_800a7384(*unaff_s0,0x28,0,0);
          }
          else {
            iVar2 = FUN_800a7384(*unaff_s0,8,0,0);
          }
        }
        if (iVar2 != 0) {
          FUN_80071eb8();
        }
      }
      FUN_800725cc();
      if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) == 0) {
        *(undefined4 *)((int)unaff_s0 + unaff_s4 + 0x120) = unaff_s5;
      }
      goto LAB_800abd08;
    }
    if (puVar3 != (undefined *)0x20000001) goto LAB_800ac0b0;
    *(undefined4 *)((int)unaff_s0 + unaff_s4 + 0x120) = unaff_s5;
    if (unaff_s2 != 0) goto LAB_800abd08;
    unaff_s1 = -0x7ff2ac6c;
    in_v1 = Raziel.State.SectionList[1].Event.Queue[9].Data;
    if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x10) {
LAB_800abf90:
      piVar4 = unaff_s0 + 0x25;
      uVar5 = 0x20000000;
      goto LAB_800ac08c;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSlide(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s3*/)
 // line 2621, offset 0x800ac3f8
	/* begin block 1 */
		// Start line: 2622
		// Start offset: 0x800AC3F8
		// Variables:
	// 		struct __Event *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800AC5BC
	// End Line: 2678

	/* begin block 2 */
		// Start line: 5560
	/* end block 2 */
	// End Line: 5561

void StateHandlerSlide(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s8;
  
LAB_800ac400:
  Raziel.State.SectionList[1].Event.Queue[9].Data =
       Raziel.State.SectionList[1].Event.Queue[9].Data & 0xfffbffff;
  FUN_800a6fa0();
  if (((*(short *)(unaff_s1 + 0xe) < 0) && (*(short *)(unaff_s1 + 0xe) != -0x7fff)) &&
     (Raziel.State.SectionList[2].Event.Queue[1].ID == 1)) {
    Raziel.currentHint = Raziel.currentHint | 0x2000000;
  }
LAB_800ac18c:
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
    puVar1 = (undefined4 *)FUN_800707ac();
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    puVar2 = (undefined *)*puVar1;
  } while (puVar2 == (undefined *)0x1000001);
  if ((int)puVar2 < 0x1000002) {
    if (puVar2 == &DAT_80000020) goto LAB_800ac18c;
    if ((int)puVar2 < -0x7fffffdf) {
      if (puVar2 == (undefined *)0x80000001) {
        if (((Raziel.State.SectionList[1].Defer.Queue[10].ID != 3) &&
            ((Raziel.currentHint & 0x2000000U) == 0)) && (unaff_s3 == 0)) {
          FUN_80072698();
        }
      }
      else {
        if ((-0x80000000 < (int)puVar2) && (puVar2 != &DAT_80000008)) goto LAB_800ac518;
      }
      goto LAB_800ac18c;
    }
    if (puVar2 == (undefined *)0x100000) {
      FUN_80072698();
      goto LAB_800ac18c;
    }
    if ((int)puVar2 < 0x100001) {
      if (puVar2 == &DAT_00040005) {
        if (Raziel.State.SectionList[1].Defer.Queue[12].ID < 100000) {
          FUN_800725cc();
        }
        goto LAB_800ac18c;
      }
    }
    else {
      if (puVar2 == &DAT_00100001) {
        if (unaff_s3 == 0) {
          Raziel.currentHint = 0x119;
          if (Raziel.State.SectionList[1].Event.Queue[9].Data != 0x100) {
            Raziel.currentHint = 0x519;
          }
          unaff_s2[0x47] = 0;
          Raziel.State.SectionList[1].Defer.Head._0_2_ = 0;
          Raziel._1312_4_ = 0;
        }
        if ((puVar1[1] != 0) && ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) != 0))
        {
          FUN_80070800(unaff_s4 + 0x8c,0x80000001,0);
        }
        goto LAB_800ac18c;
      }
    }
  }
  else {
    if (puVar2 == (undefined *)0x4020000) goto LAB_800ac3b0;
    if (0x4020000 < (int)puVar2) goto LAB_800ac288;
    if (puVar2 == (undefined *)0x4000001) goto LAB_800ac18c;
    if (0x4000001 < (int)puVar2) {
      if (puVar2 != (undefined *)0x4010008) goto LAB_800ac518;
      if (unaff_s6 == 0) {
        FUN_800725cc();
      }
      else {
        FUN_80070800();
        unaff_s6 = 0;
      }
      *(undefined4 *)(unaff_s8 + 0x120) = 2;
      Raziel._1312_4_ = 3;
      FUN_8009a338(*unaff_s2,0xfffffff0);
      goto LAB_800ac18c;
    }
    if (puVar2 == (undefined *)0x2000000) {
      FUN_800a5b98();
      goto LAB_800ac18c;
    }
  }
  goto LAB_800ac518;
LAB_800ac3b0:
  unaff_s1 = puVar1[1];
  if (((*(short *)(unaff_s1 + 0xc) < 0) && (iVar3 = *unaff_s2, *(int *)(iVar3 + 0x15c) == 0)) &&
     (-1 < *(int *)(iVar3 + 0x168))) {
    FUN_8009a338(iVar3,0xfffffff0);
  }
  goto LAB_800ac400;
LAB_800ac288:
  if (puVar2 == (undefined *)0x10000000) goto LAB_800ac18c;
  if ((int)puVar2 < 0x10000001) {
    if (puVar2 == (undefined *)0x8000000) goto LAB_800ac18c;
  }
  else {
    if (puVar2 == (undefined *)0x20000001) {
      if (((Raziel.State.SectionList[1].Event.Queue[9].Data != 0x10) &&
          (Raziel.State.SectionList[1].Event.Queue[9].Data != 0x20)) && (unaff_s3 == 0)) {
        FUN_8009a5cc(*unaff_s2,0x800d5034);
      }
      goto LAB_800ac18c;
    }
  }
LAB_800ac518:
  FUN_800b0280();
  goto LAB_800ac18c;
}



// autogenerated function stub: 
// void /*$ra*/ StateHandlerBlock(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s4*/, int Data /*$s7*/)
void StateHandlerBlock(struct __CharacterState *In, int CurrentSection, int Data)
{ // line 2688, offset 0x800ac5d8
	/* begin block 1 */
		// Start line: 2689
		// Start offset: 0x800AC5D8
		// Variables:
			struct __Event *Ptr; // $a0
			int Anim; // $s3

		/* begin block 1.1 */
			// Start line: 2727
			// Start offset: 0x800AC7E0
			// Variables:
				struct _Rotation rot; // stack offset -56
		/* end block 1.1 */
		// End offset: 0x800AC7E0
		// End Line: 2728

		/* begin block 1.2 */
			// Start line: 2743
			// Start offset: 0x800AC868
		/* end block 1.2 */
		// End offset: 0x800AC868
		// End Line: 2744

		/* begin block 1.3 */
			// Start line: 2757
			// Start offset: 0x800AC90C
			// Variables:
				struct evPhysicsEdgeData *EdgeData; // $s1

			/* begin block 1.3.1 */
				// Start line: 2762
				// Start offset: 0x800AC94C
				// Variables:
					struct SVECTOR startVec; // stack offset -56
					struct SVECTOR endVec; // stack offset -48
			/* end block 1.3.1 */
			// End offset: 0x800AC9A4
			// End Line: 2770
		/* end block 1.3 */
		// End offset: 0x800AC9F8
		// End Line: 2779
	/* end block 1 */
	// End offset: 0x800ACA18
	// End Line: 2792

	/* begin block 2 */
		// Start line: 5703
	/* end block 2 */
	// End Line: 5704

}


// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerDeCompression(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s2*/, int Data /*$s5*/)
 // line 2795, offset 0x800aca44
	/* begin block 1 */
		// Start line: 2796
		// Start offset: 0x800ACA44
		// Variables:
	// 		struct __Event *Ptr; // $s1

		/* begin block 1.1 */
			// Start line: 2805
			// Start offset: 0x800ACB1C
		/* end block 1.1 */
		// End offset: 0x800ACC94
		// End Line: 2844
	/* end block 1 */
	// End offset: 0x800ACD90
	// End Line: 2884

	/* begin block 2 */
		// Start line: 5926
	/* end block 2 */
	// End Line: 5927

void StateHandlerDeCompression(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_v0;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined2 in_stack_0000001c;
  
  do {
    if (unaff_s3 != in_v0) {
                    /* WARNING: Subroutine does not return */
      FUN_80071404(0,0,3);
    }
LAB_800ac7b0:
    do {
      while( true ) {
        PurgeMessageQueue(&In->SectionList[0].Event);
        puVar1 = (undefined4 *)FUN_800707ac((int)unaff_s2 + unaff_s6 + 0xc);
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        puVar4 = (undefined *)*puVar1;
        if (puVar4 != &DAT_00100004) break;
        FUN_800247b4(*unaff_s2,1);
        BlockCount = 0;
        FUN_8004f4e0(*unaff_s2);
        In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
      }
      if (0x100004 < (int)puVar4) {
        if (puVar4 == (undefined *)0x4010400) {
          iVar5 = puVar1[1];
          if (((*(uint *)(iVar5 + 0x20) & 0x20000) != 0) &&
             ((Raziel.State.SectionList[1].Defer.Queue[13].Data & 1U) != 0)) {
            In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
            if (Raziel.State.SectionList[2].Event.Queue[1].ID == 2) {
              FUN_80077e14(0,0,0,&stack0x00000018);
              FUN_80077e14(0,0xfffffec0,0,&stack0x00000020);
              iVar3 = FUN_80077bd8(loadStatus.bigFile.searchDirID,&stack0x00000018,&stack0x00000020,
                                   1);
              In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
              if ((iVar3 == 0) && (*(int *)(unaff_s5 + 0x11c) == 0)) {
                FUN_8004f404(*unaff_s2,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x14));
                *(undefined4 *)(unaff_s5 + 0x11c) = 1;
                Raziel._1312_4_ = 3;
                FUN_8009a2c4(*unaff_s2,0,0,0);
                Raziel.currentHint = Raziel.currentHint & 0xfffffff7;
                In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
              }
            }
            goto LAB_800ac7b0;
          }
        }
        else {
          if ((int)puVar4 < 0x4010401) {
            if ((puVar4 != (undefined *)0x4000001) && (puVar4 != (undefined *)0x4010200)) {
LAB_800acb68:
              FUN_800b0280();
            }
          }
          else {
            if (puVar4 != (undefined *)0x8000000) {
              if (puVar4 != (undefined *)0x8000004) goto LAB_800acb68;
              In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
              if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 1U) != 0) {
                FUN_800a6348(*unaff_s2,
                             *(undefined4 *)Raziel.State.SectionList[1].Defer.Queue[7].Data);
                FUN_800b3e3c(*unaff_s2,
                             *(undefined4 *)Raziel.State.SectionList[1].Defer.Queue[7].Data);
                uVar2 = FUN_80070b4c(-(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                                     -(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,6,0
                                    );
                    /* WARNING: Subroutine does not return */
                FUN_80034368(*(undefined4 *)Raziel.State.SectionList[1].Defer.Queue[7].Data,0x800000
                             ,uVar2);
              }
              goto LAB_800ac7b0;
            }
            In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
            if (unaff_s4 != 0) goto LAB_800ac7b0;
            if ((unaff_s3 == 0x52) || (unaff_s3 == 0x6c)) {
                    /* WARNING: Subroutine does not return */
              FUN_80071404(0,0,3);
            }
            if (unaff_s2[0x47] == 0) {
              FUN_80071eb8();
              Raziel.ZDirection._0_2_ = 0x640;
              *(undefined4 *)(*unaff_s2 + 0x1c4) = 0x800d5594;
            }
            else {
              FUN_80071eb8();
              FUN_8002482c(*unaff_s2,1);
              FUN_800a642c(0x800d53d4,&stack0x00000018);
              *(undefined2 *)(*unaff_s2 + 0x78) = in_stack_0000001c;
            }
          }
        }
LAB_800acb70:
        In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
        goto LAB_800ac7b0;
      }
      if (puVar4 == &DAT_80000008) goto LAB_800acb70;
      if ((int)puVar4 < -0x7ffffff7) {
        if (puVar4 != (undefined *)0x80000000) goto LAB_800acb68;
        goto LAB_800acb70;
      }
      if (puVar4 != (undefined *)0x0) {
        if (puVar4 != &DAT_00100001) goto LAB_800acb68;
        if (unaff_s4 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x800000;
          Raziel.currentHint = (int)&DAT_00008009;
          Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s2,0);
        }
        *(undefined4 *)(unaff_s5 + 0x11c) = 0;
        goto LAB_800acb70;
      }
      In = (__CharacterState *)(unaff_s6 + (int)unaff_s2);
    } while (unaff_s4 != 0);
    in_v0 = 0x6c;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerGlide(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s3*/, int Data /*$fp*/)
 // line 2889, offset 0x800acdb4
	/* begin block 1 */
		// Start line: 2890
		// Start offset: 0x800ACDB4
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		int Frame; // $s7
	// 		int Anim; // $s5
	// 		int moving; // $s6

		/* begin block 1.1 */
			// Start line: 3009
			// Start offset: 0x800AD32C
			// Variables:
		// 		struct evObjectDraftData *draft; // $a2
		/* end block 1.1 */
		// End offset: 0x800AD384
		// End Line: 3016

		/* begin block 1.2 */
			// Start line: 3021
			// Start offset: 0x800AD3AC
			// Variables:
		// 		struct evPhysicsSwimData *SwimData; // $v0
		/* end block 1.2 */
		// End offset: 0x800AD43C
		// End Line: 3034
	/* end block 1 */
	// End offset: 0x800AD4F0
	// End Line: 3087

	/* begin block 2 */
		// Start line: 6140
	/* end block 2 */
	// End Line: 6141

void StateHandlerGlide(__CharacterState *In,int CurrentSection,int Data)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int *unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  do {
    FUN_80071eb8();
LAB_800acc08:
    PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
    puVar2 = (undefined4 *)FUN_800707ac(unaff_s4 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    puVar4 = (undefined *)*puVar2;
    if (puVar4 != &DAT_00100001) {
      if ((int)puVar4 < 0x100002) {
        if ((puVar4 == (undefined *)0x80000000) || (puVar4 == &DAT_80000020)) goto LAB_800acc08;
      }
      else {
        if (puVar4 == (undefined *)0x8000000) {
          if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) == 0) {
            if ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_80071404(0,0,4);
            }
            if (unaff_s2 != 0) goto LAB_800acedc;
            iVar3 = FUN_8007216c();
            if (iVar3 != 0x1d) {
              FUN_80072698();
              *(undefined4 *)(unaff_s3 + 0x11c) = 0;
              goto LAB_800acc08;
            }
          }
          else {
            if (unaff_s2 != 0) {
LAB_800acedc:
              *(undefined4 *)(unaff_s3 + 0x11c) = 0;
              goto LAB_800acc08;
            }
          }
          FUN_80072698();
          *(undefined4 *)(unaff_s3 + 0x11c) = 0;
          goto LAB_800acc08;
        }
        if ((int)puVar4 < 0x8000001) {
          if (puVar4 == &DAT_00100004) {
            FUN_8009a2c4(*unaff_s0,0xfffffff0,0,0);
            goto LAB_800acc08;
          }
        }
        else {
          if (puVar4 == (undefined *)0x10000000) goto LAB_800acc08;
        }
      }
      FUN_800b0280();
      goto LAB_800acc08;
    }
    if (unaff_s2 == 0) {
      unaff_s0[0x47] = Raziel.State.SectionList[1].Event.Queue[9].Data;
      Raziel.currentHint = 0x119;
      Raziel.State.SectionList[1].Event.Queue[9].Data =
           Raziel.State.SectionList[1].Event.Queue[9].Data | 0x1000;
      Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s0,0);
    }
    *(int *)(unaff_s3 + 0x11c) = unaff_s0[(unaff_s2 + -1) * 0x47 + 0x47];
    if (unaff_s2 != 0) goto LAB_800acc08;
    sVar1 = FUN_8007216c();
    if (((((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x20U) != 0) || (sVar1 == 0x11)) ||
        (sVar1 == 0x12)) || (sVar1 == 0x13)) {
LAB_800acd50:
      iVar3 = FUN_800a7384(*unaff_s0,0x2c,0,0);
joined_r0x800acd64:
      if (iVar3 != 0) {
        FUN_80071eb8();
      }
      goto LAB_800acc08;
    }
    iVar3 = *unaff_s0;
    if (*(int *)(iVar3 + 0x15c) < -0x100) goto LAB_800acd50;
    if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x10U) != 0) || (puVar2[1] == 0)) {
      iVar3 = FUN_800a7384(iVar3,0x1c,0,0);
      goto joined_r0x800acd64;
    }
    iVar3 = FUN_800a7384(iVar3,0xc,0,0);
    if (iVar3 == 0) goto LAB_800acc08;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerHang(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$fp*/)
 // line 3090, offset 0x800ad520
	/* begin block 1 */
		// Start line: 3091
		// Start offset: 0x800AD520
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		int Anim; // $s7

		/* begin block 1.1 */
			// Start line: 3103
			// Start offset: 0x800AD6E0
			// Variables:
		// 		struct evControlInitHangData *data; // $s0
		/* end block 1.1 */
		// End offset: 0x800AD7F4
		// End Line: 3133
	/* end block 1 */
	// End offset: 0x800ADA94
	// End Line: 3244

	/* begin block 2 */
		// Start line: 6555
	/* end block 2 */
	// End Line: 6556

void StateHandlerHang(__CharacterState *In,int CurrentSection,int Data)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int in_v0;
  undefined *puVar3;
  int iVar4;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
code_r0x800ad520:
  if (-1 < *(short *)(in_v0 + 0xe)) goto LAB_800acfa8;
  if (*(short *)(in_v0 + 0xe) == -0x7fff) goto LAB_800acfa8;
  if (Raziel.State.SectionList[2].Event.Queue[1].ID != 1) goto LAB_800acfa8;
  if (unaff_s3 == 0) {
    FUN_8009a2c4(*unaff_s1,0xfffffff0,0,0);
  }
  FUN_80071b48();
LAB_800ad598:
  FUN_800725cc();
LAB_800acfa8:
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
    puVar2 = (undefined4 *)FUN_800707ac(unaff_s4 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      if ((unaff_s3 == 0) && ((unaff_s1[0x48] & 1U) != 0)) {
        if ((unaff_s1[0x48] & 2U) == 0) {
          FUN_8009a684(0x800d56e4,*unaff_s1,10,0);
          unaff_s1[0x48] = 0;
        }
        else {
          if (unaff_s6 == 0) {
            *(undefined4 *)(*unaff_s1 + 0x158) = 0;
          }
          else {
            *(undefined4 *)(*unaff_s1 + 0x158) = 0x34;
          }
        }
      }
      return;
    }
    puVar3 = (undefined *)*puVar2;
  } while (puVar3 == (undefined *)0x4000001);
  if ((int)puVar3 < 0x4000002) {
    if (puVar3 == &DAT_80000020) goto LAB_800acfa8;
    if ((int)puVar3 < -0x7fffffdf) {
      if (puVar3 == &DAT_80000004) {
        if (unaff_s3 == 1) {
          FUN_8009a684(0x800d56e4,*unaff_s1,4,0);
        }
        FUN_80071b48();
        *(undefined4 *)(unaff_s2 + 0x11c) = 0;
        if ((*(uint *)(unaff_s2 + 0x120) & 1) != 0) {
          FUN_800a7de8(0x4000);
        }
        goto LAB_800acfa8;
      }
      if ((int)puVar3 < -0x7ffffffb) {
        if (puVar3 == (undefined *)0x80000000) goto LAB_800acfa8;
      }
      else {
        puVar1 = &DAT_80000008;
joined_r0x800ad044:
        if (puVar3 == puVar1) goto LAB_800acfa8;
      }
    }
    else {
      if (puVar3 == &DAT_00100001) {
        if (unaff_s3 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x2000;
          Raziel.currentHint = 0x518;
          Raziel._1312_4_ = 0;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s1,8);
        }
        *(undefined4 *)(unaff_s2 + 0x11c) = 1;
        *(undefined4 *)(unaff_s2 + 0x120) = 0;
        FUN_80071b48();
        goto LAB_800acfa8;
      }
      if ((int)puVar3 < 0x100002) {
        puVar1 = &DAT_00040005;
        goto joined_r0x800ad044;
      }
      if (puVar3 == &DAT_00100004) {
        if (unaff_s3 == 0) {
          FUN_800a1d78(*unaff_s1);
          unaff_s1[0x48] = 0;
        }
        goto LAB_800acfa8;
      }
      if (puVar3 == (undefined *)0x1000001) goto LAB_800acfa8;
    }
  }
  else {
    if (puVar3 == (undefined *)0x8000000) {
      if (*(int *)(unaff_s2 + 0x11c) != 0) {
        FUN_80071b8c();
        *(undefined4 *)(unaff_s2 + 0x11c) = 0;
      }
      goto LAB_800acfa8;
    }
    if ((int)puVar3 < 0x8000001) {
      if (puVar3 == (undefined *)0x4010008) goto LAB_800ad598;
      if ((int)puVar3 < 0x4010009) {
        if (puVar3 != (undefined *)0x4000007) goto LAB_800ad5a8;
        if (unaff_s3 == 0) {
          if ((int)(uint)(ushort)((short *)puVar2[1])[4] < *(int *)(*unaff_s1 + 0x15c)) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)*(short *)puVar2[1];
          }
          FUN_8009a644(0x800d56f8,0,0,iVar4);
          *(uint *)(unaff_s2 + 0x120) = *(uint *)(unaff_s2 + 0x120) | 3;
          Raziel.Senses.LastAutoFace = (_Instance *)((uint)Raziel.Senses.LastAutoFace | 0x4000);
        }
        goto LAB_800acfa8;
      }
      if (puVar3 == (undefined *)0x4020000) {
        in_v0 = puVar2[1];
        goto code_r0x800ad520;
      }
    }
    else {
      if (puVar3 == (undefined *)0x10000000) {
        unaff_s6 = 1;
        if (unaff_s5 != 0x10) {
          if (0 < (short)Raziel.State.SectionList[1].Event.Queue[14].ID) {
            FUN_80071b48();
            *(undefined4 *)(unaff_s2 + 0x11c) = 2;
          }
          if ((short)Raziel.State.SectionList[1].Event.Queue[14].ID < 0) {
            FUN_80071b48();
            *(undefined4 *)(unaff_s2 + 0x11c) = 2;
          }
          unaff_s6 = 1;
          if (((short)Raziel.State.SectionList[1].Event.Queue[14].ID == 0) &&
             (*(int *)(unaff_s2 + 0x11c) == 2)) {
            FUN_80071b48();
            *(undefined4 *)(unaff_s2 + 0x11c) = 0;
            unaff_s6 = 1;
          }
        }
        goto LAB_800acfa8;
      }
      if ((int)puVar3 < 0x10000001) {
        if (puVar3 == (undefined *)0x8000003) {
          if (unaff_s5 == 0x10) {
            FUN_8009a2c4(*unaff_s1,0,0,0x34);
          }
          goto LAB_800acfa8;
        }
      }
      else {
        if (puVar3 == (undefined *)0x20000001) {
          if (((unaff_s7 < 0xd) && (unaff_s5 == 0x10)) ||
             ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) != 0)) {
            FUN_80070800(unaff_s4 + 0x8c,0x20000001,0);
          }
          else {
            if (unaff_s3 == 0) {
              FUN_8009a2c4(*unaff_s1,0xfffffff0,0,0);
              iVar4 = FUN_800a7384(*unaff_s1,0x18,0,0);
              if (iVar4 != 0) {
                FUN_80071eb8();
              }
            }
            FUN_80072698();
          }
          goto LAB_800acfa8;
        }
        if (puVar3 == (undefined *)0x20000004) {
          if (unaff_s3 == 0) {
            FUN_8009a684(0x800d56e4,*unaff_s1,4,0);
          }
          FUN_80071b48();
          *(undefined4 *)(unaff_s2 + 0x11c) = 0;
          goto LAB_800acfa8;
        }
      }
    }
  }
LAB_800ad5a8:
  FUN_800b0280();
  goto LAB_800acfa8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerPushObject(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s5*/)
 // line 3247, offset 0x800adac4
	/* begin block 1 */
		// Start line: 3248
		// Start offset: 0x800ADAC4
		// Variables:
	// 		struct __Event *Ptr; // $v0

		/* begin block 1.1 */
			// Start line: 3300
			// Start offset: 0x800ADD58
			// Variables:
		// 		struct evObjectData *data; // $s0
		/* end block 1.1 */
		// End offset: 0x800ADDB0
		// End Line: 3309
	/* end block 1 */
	// End offset: 0x800ADDCC
	// End Line: 3319

	/* begin block 2 */
		// Start line: 6879
	/* end block 2 */
	// End Line: 6880

	/* begin block 3 */
		// Start line: 6882
	/* end block 3 */
	// End Line: 6883

void StateHandlerPushObject(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  
LAB_800adae8:
  FUN_80071b48();
LAB_800adaf0:
  if (unaff_s2 == 0) {
    Raziel.currentHint = Raziel.currentHint & 0xfffffbff;
  }
LAB_800ad6f4:
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            do {
              PurgeMessageQueue((__MessageQueue *)(unaff_s6 + 4));
              puVar1 = (undefined4 *)FUN_800707ac();
              if (puVar1 == (undefined4 *)0x0) {
                return;
              }
              puVar3 = (undefined *)*puVar1;
              if (0x1000001 < (int)puVar3) goto LAB_800ad7b4;
            } while (0xffffff < (int)puVar3);
            if (puVar3 != (undefined *)0x100000) break;
            if ((*(uint *)Raziel.padCommands.Queue[5].Data & 0x8000000f) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_80071404(0,0,3);
            }
            FUN_800725cc();
            *(undefined4 *)(unaff_s3 + 0x11c) = 0;
          }
          if ((int)puVar3 < 0x100001) break;
          if (puVar3 == &DAT_00100004) {
            if (unaff_s2 == 0) {
              Raziel.State.SectionList[1].Defer.Queue[10].Data = 0;
              Raziel.currentHint = Raziel.currentHint & 0xfffffbff;
              *(undefined4 *)(*unaff_s1 + 0x8c) = 0;
            }
            *(uint *)(*unaff_s1 + 0x18) = *(uint *)(*unaff_s1 + 0x18) | 0x40;
          }
          else {
            if (0x100004 < (int)puVar3) {
              if (puVar3 != &DAT_00100014) goto LAB_800adbe8;
              goto LAB_800adb7c;
            }
            if (puVar3 != &DAT_00100001) goto LAB_800adbe8;
            piVar4 = (int *)puVar1[1];
            if (unaff_s2 == 0) {
              if ((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x40000U) != 0) {
                FUN_8001bf6c(&standardMenu,*unaff_s1);
              }
              unaff_s1[0x48] = *(int *)(*unaff_s1 + 0x8c);
              Raziel.currentHint = 0x8001501;
              if (*(int *)(*unaff_s1 + 0x8c) == 0) {
                Raziel.currentHint = 0xc001501;
              }
              *(undefined4 *)(*unaff_s1 + 0x8c) = 0;
              Raziel.State.SectionList[1].Event.Queue[9].Data = 0x100;
              if (*piVar4 != 0) {
                Raziel.State.SectionList[1].Defer.Queue[10].Data = *piVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_800a3070(*unaff_s1,0);
            }
            FUN_80071b48();
            *(undefined4 *)(unaff_s3 + 0x11c) = 0;
            Raziel._1312_4_ = 3;
            FUN_8009a2c4(*unaff_s1,0xfffffff0,0,0);
            *(uint *)(*unaff_s1 + 0x18) = *(uint *)(*unaff_s1 + 0x18) & 0xffffffbf;
          }
        }
      } while (puVar3 == &DAT_80000008);
      if (-0x7ffffff8 < (int)puVar3) break;
      if (puVar3 != (undefined *)0x80000000) goto LAB_800adbe8;
    }
  } while (puVar3 == &DAT_80000020);
  goto LAB_800adbe8;
LAB_800ad7b4:
  if (puVar3 == (undefined *)0x4010200) goto LAB_800ad6f4;
  if ((int)puVar3 < 0x4010201) {
    if (puVar3 == (undefined *)0x4000011) goto LAB_800ad6f4;
    if ((int)puVar3 < 0x4000012) {
      if (puVar3 == (undefined *)0x4000001) goto LAB_800ad6f4;
    }
    else {
      if (puVar3 == (undefined *)0x4010010) goto LAB_800ad6f4;
    }
  }
  else {
    if (puVar3 == (undefined *)0x8000001) {
      if (*(int *)(unaff_s3 + 0x11c) == unaff_s4) {
        FUN_80070800();
      }
      goto LAB_800ad6f4;
    }
    if ((int)puVar3 < 0x8000002) {
      if (puVar3 == (undefined *)0x8000000) goto LAB_800ada74;
    }
    else {
      if (puVar3 == (undefined *)0x8000003) {
        if ((unaff_s2 == 0) &&
           (Raziel.currentHint = Raziel.currentHint & 0xfffffbff, unaff_s1[0x48] != 0)) {
          Raziel.currentHint = Raziel.currentHint | 0x4000000;
        }
        goto LAB_800ad6f4;
      }
      if (puVar3 == (undefined *)0x10000000) {
        iVar2 = puVar1[1];
        if (iVar2 == 0x10000003) {
          if (unaff_s7 == 6) {
LAB_800adb7c:
            if (unaff_s2 == unaff_s4) {
              FUN_8009a2c4(*unaff_s1,0xfffffff0,0,0);
              iVar2 = FUN_800a7384(*unaff_s1,0x18,0,0);
              if (iVar2 != 0) {
                FUN_80071eb8();
              }
              FUN_80072698();
            }
            goto LAB_800ad6f4;
          }
          iVar2 = puVar1[1];
        }
        if ((iVar2 == 0x10000001) || ((*(uint *)Raziel.padCommands.Queue[5].Data & 1) != 0)) {
          if (*(int *)(unaff_s3 + 0x11c) == 0) {
            FUN_80071b48();
            FUN_800707a0(unaff_s6 + 4);
          }
          *(int *)(unaff_s3 + 0x11c) = unaff_s4;
        }
        goto LAB_800ad6f4;
      }
    }
  }
LAB_800adbe8:
  FUN_800b0280();
  goto LAB_800ad6f4;
LAB_800ada74:
  if (*(int *)(unaff_s3 + 0x11c) != unaff_s4) goto LAB_800adae8;
  FUN_80070800();
  *(undefined2 *)(*unaff_s1 + 0x74) = 0;
  *(undefined2 *)(*unaff_s1 + 0x76) = 0;
  goto LAB_800adaf0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerBreakOff(struct __CharacterState *In /*$s3*/, int CurrentSection /*$s4*/, int Data /*$s7*/)
 // line 3322, offset 0x800addf0
	/* begin block 1 */
		// Start line: 3323
		// Start offset: 0x800ADDF0
		// Variables:
	// 		struct __Event *Ptr; // $v0

		/* begin block 1.1 */
			// Start line: 3334
			// Start offset: 0x800ADEF4
			// Variables:
		// 		struct PhysObInteractProperties *interactProp; // $s0
		// 		struct _Instance *Inst; // $s1
		// 		int anim; // $a2
		/* end block 1.1 */
		// End offset: 0x800AE07C
		// End Line: 3383

		/* begin block 1.2 */
			// Start line: 3397
			// Start offset: 0x800AE0D4
			// Variables:
		// 		struct PhysObInteractProperties *interactProp; // $v0
		// 		int action; // $s1
		// 		int condition; // $v0
		// 		struct _Instance *Inst; // $s0
		/* end block 1.2 */
		// End offset: 0x800AE17C
		// End Line: 3428
	/* end block 1 */
	// End offset: 0x800AE1C8
	// End Line: 3443

	/* begin block 2 */
		// Start line: 7040
	/* end block 2 */
	// End Line: 7041

void StateHandlerBreakOff(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int in_v0;
  undefined4 uVar2;
  undefined *puVar3;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
code_r0x800addf0:
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80071404(0,0,3);
  }
  FUN_80071b48();
  *(undefined4 *)((int)unaff_s1 + unaff_s3 + 0x11c) = 1;
  if (unaff_s2 == 0) {
    Raziel.ZDirection._0_2_ = 400;
    *(undefined4 *)(*unaff_s1 + 0x1c4) = 0x800d5594;
  }
  do {
    while( true ) {
      while( true ) {
        PurgeMessageQueue((__MessageQueue *)(unaff_s4 + 4));
        puVar1 = (undefined4 *)FUN_800707ac(unaff_s4 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        puVar3 = (undefined *)*puVar1;
        if (puVar3 != &DAT_00100001) break;
        if (unaff_s2 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x400;
          Raziel.currentHint = 0x8001108;
          Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s1,0);
        }
        *(undefined4 *)((int)unaff_s1 + unaff_s3 + 0x11c) = 0;
        FUN_800a7de8(1);
      }
      if (0x100001 < (int)puVar3) break;
      if (puVar3 != &DAT_80000008) {
        if (puVar3 == (undefined *)0x100000) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,6);
        }
LAB_800adf20:
        FUN_800b0280();
      }
    }
    if ((int)puVar3 < 0x8000000) goto LAB_800adf20;
    if (0x8000001 < (int)puVar3) {
      if (puVar3 == (undefined *)0x8000004) {
        uVar2 = FUN_80070b4c(-(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                             -(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,6,0);
                    /* WARNING: Subroutine does not return */
        FUN_80034368(*(undefined4 *)Raziel.State.SectionList[1].Defer.Queue[7].Data,0x800000,uVar2);
      }
      goto LAB_800adf20;
    }
    if (((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf568) == 0) ||
       ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 2U) == 0)) break;
    FUN_800725cc();
  } while( true );
  in_v0 = *(int *)((int)unaff_s1 + unaff_s3 + 0x11c);
  goto code_r0x800addf0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerPullSwitch(struct __CharacterState *In /*$s4*/, int CurrentSection /*$s5*/, int Data /*stack 8*/)
 // line 3446, offset 0x800ae1f4
	/* begin block 1 */
		// Start line: 3447
		// Start offset: 0x800AE1F4
		// Variables:
	// 		struct __Event *Ptr; // $s2
	// 		int switchDone; // stack offset -56
	// 		int hitPosted; // stack offset -52

		/* begin block 1.1 */
			// Start line: 3459
			// Start offset: 0x800AE32C
			// Variables:
		// 		struct PhysObSwitchProperties *switchData; // $fp

			/* begin block 1.1.1 */
				// Start line: 3465
				// Start offset: 0x800AE35C
				// Variables:
			// 		int switchStatus; // $s1
			// 		int switchSuccess; // $s3
			// 		struct _Instance *inst; // $s2
			// 		struct PhysObSwitchProperties *switchProperties; // $s0
			// 		int extraZ; // $s6

				/* begin block 1.1.1.1 */
					// Start line: 3478
					// Start offset: 0x800AE3B0
				/* end block 1.1.1.1 */
				// End offset: 0x800AE408
				// End Line: 3490
			/* end block 1.1.1 */
			// End offset: 0x800AE534
			// End Line: 3539
		/* end block 1.1 */
		// End offset: 0x800AE534
		// End Line: 3539

		/* begin block 1.2 */
			// Start line: 3545
			// Start offset: 0x800AE544
			// Variables:
		// 		int switchStatus; // $v1
		// 		struct _Instance *inst; // $s0
		// 		struct PhysObSwitchProperties *switchProperties; // $s0
		// 		int switchClass; // $s1
		/* end block 1.2 */
		// End offset: 0x800AE6C8
		// End Line: 3586

		/* begin block 1.3 */
			// Start line: 3598
			// Start offset: 0x800AE740
			// Variables:
		// 		struct evMonsterHitData *data; // $s0
		/* end block 1.3 */
		// End offset: 0x800AE7A8
		// End Line: 3609
	/* end block 1 */
	// End offset: 0x800AE7D4
	// End Line: 3629

	/* begin block 2 */
		// Start line: 7314
	/* end block 2 */
	// End Line: 7315

void StateHandlerPullSwitch(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int in_a3;
  undefined4 uVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  FUN_800a5304(In,(int)(short)-(short)CurrentSection,in_a3 + 0x5c,in_a3 + 0x74);
LAB_800adfbc:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s6 + 4));
    puVar1 = (undefined4 *)FUN_800707ac(unaff_s6 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    puVar2 = (undefined *)*puVar1;
    if (puVar2 != &DAT_00100015) break;
    if (unaff_s4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80071404(0,0,3);
    }
  }
  if ((int)puVar2 < 0x100016) {
    if (puVar2 == &DAT_00100001) {
      if (unaff_s4 == 0) {
        if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x10U) == 0) {
          uVar3 = *(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x68);
        }
        else {
          uVar3 = *(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_8003432c(uVar3,0x15);
      }
      goto LAB_800adfbc;
    }
    if (0x100001 < (int)puVar2) {
      if (puVar2 != &DAT_00100004) goto LAB_800ae31c;
      goto LAB_800adfbc;
    }
    if (puVar2 == (undefined *)0x80000000) goto LAB_800adfbc;
  }
  else {
    if (0x7ffffff < (int)puVar2) {
      if ((int)puVar2 < 0x8000002) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
      if (puVar2 == (undefined *)0x8000004) {
                    /* WARNING: Subroutine does not return */
        FUN_8003432c(*(undefined4 *)(unaff_s5 + 0x120),0x15);
      }
    }
  }
LAB_800ae31c:
  FUN_800b0280();
  goto LAB_800adfbc;
}



// autogenerated function stub: 
// void /*$ra*/ StateHandlerDragObject(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s4*/, int Data /*$fp*/)
void StateHandlerDragObject(struct __CharacterState *In, int CurrentSection, int Data)
{ // line 3632, offset 0x800ae804
	/* begin block 1 */
		// Start line: 3633
		// Start offset: 0x800AE804
		// Variables:
			struct __Event *Ptr; // $s1
			struct _Instance *instance; // $s3
			int anim; // $s0
			int hitPosted; // $s7

		/* begin block 1.1 */
			// Start line: 3676
			// Start offset: 0x800AEA10
			// Variables:
				struct evPhysicsSlideData *slideData; // stack offset -48

			/* begin block 1.1.1 */
				// Start line: 3681
				// Start offset: 0x800AEA2C
				// Variables:
					struct evObjectData *data; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800AED18
			// End Line: 3738
		/* end block 1.1 */
		// End offset: 0x800AED18
		// End Line: 3739

		/* begin block 1.2 */
			// Start line: 3795
			// Start offset: 0x800AEEA0
			// Variables:
				struct evMonsterHitData *data; // $v0
		/* end block 1.2 */
		// End offset: 0x800AEEA0
		// End Line: 3796
	/* end block 1 */
	// End offset: 0x800AEEFC
	// End Line: 3810

	/* begin block 2 */
		// Start line: 7694
	/* end block 2 */
	// End Line: 7695

	/* begin block 3 */
		// Start line: 7700
	/* end block 3 */
	// End Line: 7701

}


// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerPickupObject(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$s4*/)
 // line 3813, offset 0x800aef2c
	/* begin block 1 */
		// Start line: 3814
		// Start offset: 0x800AEF2C
		// Variables:
	// 		struct __Event *Ptr; // $v0

		/* begin block 1.1 */
			// Start line: 3822
			// Start offset: 0x800AEFE4
			// Variables:
		// 		long colorArray[1]; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x800AEFE4
		// End Line: 3822
	/* end block 1 */
	// End offset: 0x800AF128
	// End Line: 3870

	/* begin block 2 */
		// Start line: 8073
	/* end block 2 */
	// End Line: 8074

void StateHandlerPickupObject(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int iStack00000010;
  
  FUN_800a6478(*unaff_s2,CurrentSection,0xffffff73);
LAB_800aef3c:
  if (unaff_s4 == 2) {
    iStack00000010 = 3;
  }
  else {
    iStack00000010 = 2;
  }
  FUN_80071b48();
LAB_800aef7c:
  if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf568) == 0) {
    FUN_80070800(unaff_s6 + 4,0x100000,0);
  }
LAB_800aea2c:
  PurgeMessageQueue((__MessageQueue *)(unaff_s6 + 4));
  puVar1 = (undefined4 *)FUN_800707ac(unaff_s6 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_8007216c();
  puVar5 = (undefined *)*puVar1;
  if (puVar5 == (undefined *)0x100000) {
LAB_800aefb0:
                    /* WARNING: Subroutine does not return */
    FUN_80071404(0,0,3);
  }
  if ((int)puVar5 < 0x100001) {
    if (puVar5 == &DAT_80000008) goto LAB_800aea2c;
    if (-0x7ffffff8 < (int)puVar5) {
      if ((puVar5 != &DAT_80000010) && (puVar5 != &DAT_80000020)) goto LAB_800af050;
      goto LAB_800aea2c;
    }
    if ((int)puVar5 < -0x7ffffffe) goto LAB_800aea2c;
  }
  else {
    if (puVar5 == (undefined *)0x8000000) {
      if (iVar2 == 0x17) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,3);
      }
      if (unaff_s3 == 0) goto LAB_800aefb0;
      if (unaff_s4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_80034368();
      }
      goto LAB_800aef3c;
    }
    if ((int)puVar5 < 0x8000001) {
      if (puVar5 == &DAT_00100001) {
        if (unaff_s4 == 0) {
          Raziel.State.SectionList[1].Event.Queue[9].Data = 0x400;
          Raziel.currentHint = 0x9001508;
          Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s2,0);
        }
        iStack00000010 = 3;
        FUN_80071b48();
      }
      else {
        if (puVar5 != (undefined *)0x1000000) goto LAB_800af050;
        if (unaff_s4 == 0) {
          if (iVar2 == 0x16) {
            FUN_80072698();
          }
          else {
            if (unaff_s7 == 0) {
              puVar1 = (undefined4 *)puVar1[1];
              iStack00000010 = (int)*(short *)((int)puVar1 + 10);
              unaff_s7 = 1;
              uVar4 = FUN_8007091c(*puVar1,puVar1[1],puVar1[3],(int)*(short *)(puVar1 + 2));
              FUN_80070800(unaff_s2 + 0x25,0x1000000,uVar4);
            }
          }
        }
      }
      goto LAB_800aea2c;
    }
    if (puVar5 == (undefined *)0x10000000) {
      if (unaff_s4 == 0) {
        if (((iVar2 == 0) || (iVar2 == 0x16)) && (unaff_s3 != 0)) {
          iVar2 = puVar1[1];
          if (iVar2 == 0x10000002) {
            gameTrackerX.instancePool._1_1_ = unaff_s5;
            uVar3 = FUN_80070618(*unaff_s2,
                                 -(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,
                                 (int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                                 &stack0x00000018);
            if ((uVar3 & 0x4002) == 0x4000) {
              iStack00000010 = 0;
              FUN_80070b4c(-(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,
                           (int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,2,0);
                    /* WARNING: Subroutine does not return */
              FUN_80034368();
            }
          }
          else {
            if (iVar2 < 0x10000003) {
              if (iVar2 == 0x10000001) {
                gameTrackerX.instancePool._1_1_ = 0;
                iStack00000010 = 0;
                FUN_80070b4c(-(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                             -(int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,5,0);
                    /* WARNING: Subroutine does not return */
                FUN_80034368();
              }
            }
            else {
              if (iVar2 == 0x10000003) {
                gameTrackerX.instancePool._1_1_ = unaff_s5;
                uVar3 = FUN_80070618(*unaff_s2,
                                     (int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                                     (int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,
                                     &stack0x00000018);
                if ((uVar3 & 0x4002) == 0x4000) {
                  iStack00000010 = 0;
                  FUN_80070b4c((int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,
                               (int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,4,0);
                    /* WARNING: Subroutine does not return */
                  FUN_80034368();
                }
              }
              else {
                if ((iVar2 == 0x10000004) &&
                   (gameTrackerX.instancePool._1_1_ = unaff_s5,
                   uVar3 = FUN_80070618(*unaff_s2,
                                        (int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,
                                        -(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data
                                        ,&stack0x00000018), (uVar3 & 0x4002) == 0x4000)) {
                  iStack00000010 = 0;
                  FUN_80070b4c((int)Raziel.State.SectionList[1].Defer.Queue[0].Data._2_2_,
                               -(int)(short)Raziel.State.SectionList[1].Defer.Queue[0].Data,3,0);
                    /* WARNING: Subroutine does not return */
                  FUN_80034368();
                }
              }
            }
          }
        }
        gameTrackerX.instancePool._1_1_ = 0;
      }
      goto LAB_800aea2c;
    }
    if ((int)puVar5 < 0x10000001) {
      if (puVar5 != (undefined *)0x8000001) goto LAB_800af050;
      if (((iVar2 == 0) || (iVar2 == 0x16)) || (iVar2 == 0x14)) goto LAB_800aef7c;
      goto LAB_800aea2c;
    }
    if (puVar5 == (undefined *)0x20000000) goto LAB_800aea2c;
  }
LAB_800af050:
  FUN_800b0280();
  goto LAB_800aea2c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerAutoFace(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*stack 8*/)
 // line 3870, offset 0x800af148
	/* begin block 1 */
		// Start line: 3871
		// Start offset: 0x800AF148
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		int Frames; // $s3
	// 		int Anim; // $s2
	/* end block 1 */
	// End offset: 0x800AF858
	// End Line: 4077

	/* begin block 2 */
		// Start line: 8216
	/* end block 2 */
	// End Line: 8217

void StateHandlerAutoFace(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int in_v0;
  undefined *puVar2;
  int unaff_s0;
  undefined4 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 in_stack_00000020;
  
  do {
    if (unaff_s0 == in_v0) {
      in_stack_00000020 = 0xff5400;
      Raziel.currentHint = (int)&DAT_00001108;
      Raziel.State.SectionList[1].Event.Queue[9].Data =
           Raziel.State.SectionList[1].Event.Queue[9].Data | 0x800;
      Raziel.State.SectionList[1].Defer.Queue[0].ID =
           Raziel.State.SectionList[1].Defer.Queue[0].ID | 0x80;
      Raziel._1312_4_ = 3;
      FUN_8004b0e0(*unaff_s1,0x29,&stack0x00000020,1);
      FUN_800a7de8(0x10);
    }
    while( true ) {
      PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 4));
      puVar1 = (undefined4 *)FUN_800707ac(unaff_s2 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      puVar2 = (undefined *)*puVar1;
      if (puVar2 == &DAT_00100001) break;
      if ((int)puVar2 < 0x100002) {
        if ((puVar2 != (undefined *)0x80000000) && (puVar2 != &DAT_80000020)) {
LAB_800af27c:
          FUN_800b0280();
        }
      }
      else {
        if (puVar2 == &DAT_00100004) {
          if (unaff_s0 == 1) {
            Raziel.currentHint = Raziel.currentHint & 0xffffefff;
            FUN_8004b128(*unaff_s1,0);
          }
        }
        else {
          if (puVar2 != (undefined *)0x8000000) goto LAB_800af27c;
          if (unaff_s0 == 1) {
            FUN_8004b128(*unaff_s1,0);
          }
          if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x40000U) == 0) &&
             ((Raziel.State.SectionList[2].Defer.Queue[10].ID == unaff_s3 ||
              (Raziel.State.SectionList[2].Defer.Queue[10].ID == 0)))) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,3);
          }
          FUN_800725cc();
          Raziel.State.SectionList[2].Defer.Queue[10].ID = 0;
        }
      }
    }
    in_v0 = 1;
  } while( true );
}



// autogenerated function stub: 
// void /*$ra*/ StateHandlerGlyphs(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s6*/)
void StateHandlerGlyphs(struct __CharacterState *In, int CurrentSection, int Data)
{ // line 4083, offset 0x800af888
	/* begin block 1 */
		// Start line: 4084
		// Start offset: 0x800AF888
		// Variables:
			struct __Event *Ptr; // $s0
			int hitPosted; // $s5

		/* begin block 1.1 */
			// Start line: 4285
			// Start offset: 0x800B0018
			// Variables:
				struct evActionPlayHostAnimationData *ptr; // $v0
		/* end block 1.1 */
		// End offset: 0x800B005C
		// End Line: 4292

		/* begin block 1.2 */
			// Start line: 4295
			// Start offset: 0x800B005C
			// Variables:
				struct evMonsterHitData *data; // $v1
		/* end block 1.2 */
		// End offset: 0x800B00B0
		// End Line: 4304
	/* end block 1 */
	// End offset: 0x800B00E0
	// End Line: 4333

	/* begin block 2 */
		// Start line: 8645
	/* end block 2 */
	// End Line: 8646

}


// decompiled code
// original method signature: 
// void /*$ra*/ DefaultStateHandler(struct __CharacterState *In /*$s2*/, int CurrentSection /*$s1*/, int Data /*$a2*/)
 // line 4391, offset 0x800b0114
	/* begin block 1 */
		// Start line: 4392
		// Start offset: 0x800B0114
		// Variables:
	// 		struct __Event *Ptr; // $s0

		/* begin block 1.1 */
			// Start line: 4411
			// Start offset: 0x800B03B4
			// Variables:
		// 		int message; // stack offset -32
		// 		int messageData; // stack offset -28

			/* begin block 1.1.1 */
				// Start line: 4431
				// Start offset: 0x800B0478
				// Variables:
			// 		int i; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800B04B8
			// End Line: 4437
		/* end block 1.1 */
		// End offset: 0x800B04B8
		// End Line: 4440

		/* begin block 1.2 */
			// Start line: 4602
			// Start offset: 0x800B0634
			// Variables:
		// 		struct evPhysicsGravityData *ptr; // $v1
		// 		short zRot; // $s0

			/* begin block 1.2.1 */
				// Start line: 4608
				// Start offset: 0x800B0640
				// Variables:
			// 		struct _Position pos1; // stack offset -48
			// 		struct _Position pos2; // stack offset -40
			// 		int diff; // $v0
			/* end block 1.2.1 */
			// End offset: 0x800B0720
			// End Line: 4628
		/* end block 1.2 */
		// End offset: 0x800B0720
		// End Line: 4628

		/* begin block 1.3 */
			// Start line: 4661
			// Start offset: 0x800B07B4
			// Variables:
		// 		struct evFXHitData *BloodData; // $a0
		// 		struct _SVector Accel; // stack offset -48
		/* end block 1.3 */
		// End offset: 0x800B07B4
		// End Line: 4662

		/* begin block 1.4 */
			// Start line: 4710
			// Start offset: 0x800B0960
			// Variables:
		// 		struct evPhysicsEdgeData *data; // $s0
		/* end block 1.4 */
		// End offset: 0x800B099C
		// End Line: 4716
	/* end block 1 */
	// End offset: 0x800B0A90
	// End Line: 4753

	/* begin block 2 */
		// Start line: 9276
	/* end block 2 */
	// End Line: 9277

void DefaultStateHandler(__CharacterState *In,int CurrentSection,int Data)

{
  int unaff_s0;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(In,CurrentSection | 4,*(undefined4 *)(unaff_s0 + 4));
}



// decompiled code
// original method signature: 
// long /*$ra*/ RazielAnimCallback(struct _G2Anim_Type *anim /*$s3*/, int sectionID /*$s1*/, enum _G2AnimCallbackMsg_Enum message /*$s4*/, long messageDataA /*$s5*/, long messageDataB /*stack 16*/, void *data /*stack 20*/)
 // line 4757, offset 0x800b0aac
	/* begin block 1 */
		// Start line: 4758
		// Start offset: 0x800B0AAC
		// Variables:
	// 		struct __State *pSection; // $a0
	// 		struct _G2AnimSection_Type *animSection; // $a2

		/* begin block 1.1 */
			// Start line: 4776
			// Start offset: 0x800B0B70
			// Variables:
		// 		struct evAnimationControllerDoneData *ControllerData; // $v1
		/* end block 1.1 */
		// End offset: 0x800B0BF8
		// End Line: 4792

		/* begin block 1.2 */
			// Start line: 4806
			// Start offset: 0x800B0C40
			// Variables:
		// 		struct __AlarmData *data; // $s0
		// 		struct _Instance *inst; // $a0

			/* begin block 1.2.1 */
				// Start line: 4877
				// Start offset: 0x800B0E40
				// Variables:
			// 		int test; // $a0

				/* begin block 1.2.1.1 */
					// Start line: 4897
					// Start offset: 0x800B0EA4
					// Variables:
				// 		struct _SoundRamp *soundRamp; // $t0
				/* end block 1.2.1.1 */
				// End offset: 0x800B0FC4
				// End Line: 4912
			/* end block 1.2.1 */
			// End offset: 0x800B0FC4
			// End Line: 4912
		/* end block 1.2 */
		// End offset: 0x800B0FDC
		// End Line: 4921

		/* begin block 1.3 */
			// Start line: 4925
			// Start offset: 0x800B0FE4

			/* begin block 1.3.1 */
				// Start line: 4930
				// Start offset: 0x800B1008
				// Variables:
			// 		struct _Instance *heldInstance; // $s0
			/* end block 1.3.1 */
			// End offset: 0x800B1048
			// End Line: 4936
		/* end block 1.3 */
		// End offset: 0x800B105C
		// End Line: 4945
	/* end block 1 */
	// End offset: 0x800B1088
	// End Line: 4960

	/* begin block 2 */
		// Start line: 10027
	/* end block 2 */
	// End Line: 10028

long RazielAnimCallback(_G2Anim_Type *anim,int sectionID,_G2AnimCallbackMsg_Enum message,
                       long messageDataA,long messageDataB,void *data)

{
  long lVar1;
  
  lVar1 = FUN_800724ec();
  return lVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ RazielAnimCallbackDuringPause(struct _G2Anim_Type *anim /*$a0*/, int sectionID /*$a1*/, enum _G2AnimCallbackMsg_Enum message /*$s0*/, long messageDataA /*$s1*/, long messageDataB /*stack 16*/, void *data /*stack 20*/)
 // line 4961, offset 0x800b10b0
	/* begin block 1 */
		// Start line: 4962
		// Start offset: 0x800B10B0

		/* begin block 1.1 */
			// Start line: 4971
			// Start offset: 0x800B10D0
			// Variables:
		// 		struct evAnimationControllerDoneData *ControllerData; // $v1
		/* end block 1.1 */
		// End offset: 0x800B114C
		// End Line: 4987
	/* end block 1 */
	// End offset: 0x800B114C
	// End Line: 4992

	/* begin block 2 */
		// Start line: 10454
	/* end block 2 */
	// End Line: 10455

long RazielAnimCallbackDuringPause
               (_G2Anim_Type *anim,int sectionID,_G2AnimCallbackMsg_Enum message,long messageDataA,
               long messageDataB,void *data)

{
  int in_v1;
  int iVar1;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  long unaff_s5;
  undefined4 uStack00000020;
  
  uStack00000020 = *(undefined4 *)(in_v1 * 0x14 + unaff_s1 + 0x10);
  FUN_800a8008(anim,sectionID + in_t0);
  iVar1 = (int)*(short *)(unaff_s0 + 2);
  if (*(short *)(iVar1 * 0x14 + unaff_s1) == 0) {
    Raziel.State.SectionList[2].Defer.Queue[12].Data =
         Raziel.State.SectionList[2].Defer.Queue[12].Data | 4;
    iVar1 = (int)*(short *)(unaff_s0 + 2);
  }
  if (*(short *)(iVar1 * 0x14 + unaff_s1) == 1) {
    Raziel.State.SectionList[2].Defer.Queue[12].Data =
         Raziel.State.SectionList[2].Defer.Queue[12].Data | 8;
  }
  return unaff_s5;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ RazielQuery(struct _Instance *instance /*$s0*/, unsigned long Query /*$a1*/)
 // line 5035, offset 0x800b1164
	/* begin block 1 */
		// Start line: 5036
		// Start offset: 0x800B1164

		/* begin block 1.1 */
			// Start line: 5098
			// Start offset: 0x800B1278
			// Variables:
		// 		struct _Normal *Ptr; // $a0
		/* end block 1.1 */
		// End offset: 0x800B1320
		// End Line: 5114

		/* begin block 1.2 */
			// Start line: 5117
			// Start offset: 0x800B1320
			// Variables:
		// 		unsigned long ability; // $s0
		/* end block 1.2 */
		// End offset: 0x800B1398
		// End Line: 5135

		/* begin block 1.3 */
			// Start line: 5137
			// Start offset: 0x800B1398
			// Variables:
		// 		struct PlayerSaveData *data; // $s0
		/* end block 1.3 */
		// End offset: 0x800B1404
		// End Line: 5154

		/* begin block 1.4 */
			// Start line: 5178
			// Start offset: 0x800B1484
			// Variables:
		// 		struct evShadowSegmentData *shadowData; // $v0
		/* end block 1.4 */
		// End offset: 0x800B14A0
		// End Line: 5185
	/* end block 1 */
	// End offset: 0x800B1518
	// End Line: 5212

	/* begin block 2 */
		// Start line: 10070
	/* end block 2 */
	// End Line: 10071

ulong RazielQuery(_Instance *instance,ulong Query)

{
  uint in_v0;
  int iVar1;
  ulong unaff_s5;
  
  if (((in_v0 & 0x100000) == 0) && (iVar1 = FUN_800a5f6c(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(iVar1,2);
  }
  return unaff_s5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RazielPost(struct _Instance *instance /*$s0*/, unsigned long Message /*$s2*/, unsigned long Data /*$s3*/)
 // line 5216, offset 0x800b1528
	/* begin block 1 */
		// Start line: 5217
		// Start offset: 0x800B1528
		// Variables:
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 5224
			// Start offset: 0x800B1764
		/* end block 1.1 */
		// End offset: 0x800B179C
		// End Line: 5242

		/* begin block 1.2 */
			// Start line: 5288
			// Start offset: 0x800B180C
			// Variables:
		// 		struct PlayerSaveData *data; // $s0
		/* end block 1.2 */
		// End offset: 0x800B18CC
		// End Line: 5333

		/* begin block 1.3 */
			// Start line: 5359
			// Start offset: 0x800B197C
		/* end block 1.3 */
		// End offset: 0x800B1990
		// End Line: 5365

		/* begin block 1.4 */
			// Start line: 5385
			// Start offset: 0x800B19EC
		/* end block 1.4 */
		// End offset: 0x800B1A54
		// End Line: 5401

		/* begin block 1.5 */
			// Start line: 5404
			// Start offset: 0x800B1A5C
			// Variables:
		// 		struct _G2AnimSection_Type *animSection; // $v0
		/* end block 1.5 */
		// End offset: 0x800B1A84
		// End Line: 5409

		/* begin block 1.6 */
			// Start line: 5413
			// Start offset: 0x800B1A9C
			// Variables:
		// 		struct _G2AnimSection_Type *animSection; // $v0
		/* end block 1.6 */
		// End offset: 0x800B1AC4
		// End Line: 5418

		/* begin block 1.7 */
			// Start line: 5475
			// Start offset: 0x800B1C20
		/* end block 1.7 */
		// End offset: 0x800B1C5C
		// End Line: 5485

		/* begin block 1.8 */
			// Start line: 5487
			// Start offset: 0x800B1C5C
		/* end block 1.8 */
		// End offset: 0x800B1CA0
		// End Line: 5504

		/* begin block 1.9 */
			// Start line: 5514
			// Start offset: 0x800B1CE8
			// Variables:
		// 		int i; // $s2
		// 		struct _Instance *heldWeapon; // $s0
		/* end block 1.9 */
		// End offset: 0x800B1D80
		// End Line: 5541

		/* begin block 1.10 */
			// Start line: 5548
			// Start offset: 0x800B1D94
			// Variables:
		// 		struct _Instance *heldWeapon; // $v1
		/* end block 1.10 */
		// End offset: 0x800B1E5C
		// End Line: 5576
	/* end block 1 */
	// End offset: 0x800B1EDC
	// End Line: 5593

	/* begin block 2 */
		// Start line: 10927
	/* end block 2 */
	// End Line: 10928

void RazielPost(_Instance *instance,ulong Message,ulong Data)

{
  int unaff_s0;
  
  *(int *)(unaff_s0 + 4) = Raziel.State.SectionList[2].Event.Queue[1].ID;
  *(int *)(unaff_s0 + 8) = (int)(short)Raziel.State.SectionList[1].Defer.Queue[11].Data;
  *(int *)(unaff_s0 + 0xc) = (int)Raziel.State.SectionList[1].Defer.Queue[11].Data._2_2_;
  *(undefined2 *)(unaff_s0 + 0x10) = (undefined2)Raziel.State.SectionList[1].Defer.Queue[14].Data;
  *(undefined2 *)(unaff_s0 + 0x12) = Raziel.State.SectionList[1].Defer.Queue[14].Data._2_2_;
  *(_Instance **)(unaff_s0 + 0x14) = Raziel.Senses.Portal;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetStates(struct _Instance *instance /*$s4*/, struct GameTracker *GT /*$s7*/, long *controlCommand /*$s6*/, int AnalogLength /*$a3*/)
 // line 5597, offset 0x800b1ef8
	/* begin block 1 */
		// Start line: 5598
		// Start offset: 0x800B1EF8
		// Variables:
	// 		int i; // $s1
	// 		int Event; // $s2
	// 		int Data1; // $s3
	// 		static unsigned long LastTime; // offset 0x0
	// 		struct __Event *Ptr; // $v0

		/* begin block 1.1 */
			// Start line: 5708
			// Start offset: 0x800B209C
			// Variables:
		// 		struct __Event *message; // $v0
		/* end block 1.1 */
		// End offset: 0x800B2188
		// End Line: 5746

		/* begin block 1.2 */
			// Start line: 5871
			// Start offset: 0x800B249C
		/* end block 1.2 */
		// End offset: 0x800B24B4
		// End Line: 5873

		/* begin block 1.3 */
			// Start line: 5879
			// Start offset: 0x800B24F8
		/* end block 1.3 */
		// End offset: 0x800B2558
		// End Line: 5888
	/* end block 1 */
	// End offset: 0x800B2558
	// End Line: 5890

	/* begin block 2 */
		// Start line: 11735
	/* end block 2 */
	// End Line: 11736

void SetStates(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessConstrict()
 // line 5900, offset 0x800b2588
	/* begin block 1 */
		// Start line: 5901
		// Start offset: 0x800B2588

		/* begin block 1.1 */
			// Start line: 5942
			// Start offset: 0x800B268C
			// Variables:
		// 		int i; // $s0

			/* begin block 1.1.1 */
				// Start line: 5990
				// Start offset: 0x800B2754
				// Variables:
			// 		int thisIndex; // $v1
			// 		int nextIndex; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800B27B8
			// End Line: 6011
		/* end block 1.1 */
		// End offset: 0x800B284C
		// End Line: 6034
	/* end block 1 */
	// End offset: 0x800B284C
	// End Line: 6065

	/* begin block 2 */
		// Start line: 12443
	/* end block 2 */
	// End Line: 12444

	/* begin block 3 */
		// Start line: 12446
	/* end block 3 */
	// End Line: 12447

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessConstrict(void)

{
  int iVar1;
  
  FUN_800a2010();
  if (((Raziel.currentHint & 0x200000U) != 0) && (gameTrackerX.controlData[0][4] != 0)) {
    FUN_800b26f4();
  }
  if (Raziel.State.SectionList[2].Defer.Queue[12].Data != 0) {
    FUN_800b2b28();
  }
  FUN_800b2e74();
  FUN_800b3528();
  if (((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x40U) != 0) &&
     (iVar1 = FUN_800a5b24(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(Raziel.State.SectionList[1].Defer.Queue[7].ID,0x11);
  }
  if (Raziel.State.SectionList[1].Defer.Queue[7].ID != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(Raziel.State.SectionList[1].Defer.Queue[7].ID,0x11);
  }
  Raziel.State.SectionList[1].Defer.Queue[7].ID = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RelocateConstrict(struct _SVector *offset /*$a3*/)
 // line 6068, offset 0x800b285c
	/* begin block 1 */
		// Start line: 6069
		// Start offset: 0x800B285C
		// Variables:
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x800B29B4
	// End Line: 6097

	/* begin block 2 */
		// Start line: 12827
	/* end block 2 */
	// End Line: 12828

	/* begin block 3 */
		// Start line: 12832
	/* end block 3 */
	// End Line: 12833

void RelocateConstrict(_SVector *offset)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_s0;
  
  do {
    psVar1 = (short *)(unaff_s0 * 4 + Raziel.State.SectionList[1].Defer.Queue[15].ID);
    iVar2 = FUN_8003a154((int)*psVar1 - (int)(short)Raziel.State.SectionList[1].Data1,
                         (int)psVar1[1] - (int)Raziel.State.SectionList[1].Data1._2_2_);
    if (0xc7ffe < iVar2 - 1U) {
      Raziel.State.SectionList[2].Process._2_2_ = 0;
    }
    unaff_s0 = unaff_s0 + 1;
  } while (unaff_s0 < 0x20);
  if (Raziel.State.SectionList[2].Process._2_2_ != 0) {
    iVar2 = (int)(short)Raziel.State.SectionList[1].Defer.Queue[15].Data + -1;
    iVar4 = iVar2 * 4;
    if (iVar2 < 0) {
      iVar4 = 0x7c;
    }
    psVar1 = (short *)((int)(short)Raziel.State.SectionList[1].Defer.Queue[15].Data * 4 +
                      Raziel.State.SectionList[1].Defer.Queue[15].ID);
    uVar3 = FUN_8003a154((int)*(short *)(iVar4 + Raziel.State.SectionList[1].Defer.Queue[15].ID) -
                         (int)*psVar1,
                         (int)((short *)(iVar4 + Raziel.State.SectionList[1].Defer.Queue[15].ID))[1]
                         - (int)psVar1[1],0);
    if (0x15f900 < uVar3) {
      Raziel.State.SectionList[2].Process._2_2_ = 0;
    }
    if (Raziel.State.SectionList[2].Process._2_2_ != 0) {
      Raziel.State.SectionList[2].Event.Head = 0;
      Raziel.State.SectionList[2].Event.Tail = 0;
      Raziel.State.SectionList[2].Process._0_2_ =
           (ushort)Raziel.State.SectionList[2].Process & 0xfffd | 0x1c;
      Raziel.State.SectionList[1].Defer.Queue[15].Data._2_2_ =
           (short)Raziel.State.SectionList[1].Defer.Queue[15].Data;
      if (1 < Raziel.State.SectionList[2].Process._2_2_) {
        draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
        FUN_80047624(1,0);
        Raziel.State.SectionList[2].Process._0_2_ = 1;
      }
      Raziel.State.SectionList[2].Process._2_2_ = Raziel.State.SectionList[2].Process._2_2_ + 1;
      return;
    }
  }
  Raziel.State.SectionList[2].Process._2_2_ = 1;
  Raziel.State.SectionList[2].Process._0_2_ = (ushort)Raziel.State.SectionList[2].Process & 0xffef;
  FUN_80047624(0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessEffects(struct _Instance *instance /*$s0*/)
 // line 6097, offset 0x800b29bc
	/* begin block 1 */
		// Start line: 6098
		// Start offset: 0x800B29BC
		// Variables:
	// 		struct _Instance *heldInst; // $s2

		/* begin block 1.1 */
			// Start line: 6149
			// Start offset: 0x800B2AE0
			// Variables:
		// 		int step; // $v1
		/* end block 1.1 */
		// End offset: 0x800B2BB8
		// End Line: 6188
	/* end block 1 */
	// End offset: 0x800B2BB8
	// End Line: 6190

	/* begin block 2 */
		// Start line: 12903
	/* end block 2 */
	// End Line: 12904

void ProcessEffects(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessHints()
 // line 6194, offset 0x800b2bd0
	/* begin block 1 */
		// Start line: 6195
		// Start offset: 0x800B2BD0
		// Variables:
	// 		long hint; // $s0
	/* end block 1 */
	// End offset: 0x800B2CF8
	// End Line: 6256

	/* begin block 2 */
		// Start line: 13103
	/* end block 2 */
	// End Line: 13104

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessHints(void)

{
  uint uVar1;
  uint in_v0;
  int iVar2;
  uint in_v1;
  int iVar3;
  int unaff_s0;
  int iVar4;
  int unaff_s2;
  
  Raziel.State.SectionList[2].Defer.Queue[12].Data = in_v0 & in_v1;
  iVar4 = unaff_s0;
  if (((((Raziel.State.SectionList[2].Defer.Queue[12].Data & 2U) != 0) &&
       (iVar4 = Raziel.State.SectionList[2].Event.Queue[8].Data,
       Raziel.State.SectionList[2].Event.Queue[8].Data == 0)) && (iVar4 = unaff_s0, unaff_s2 != 0))
     && (iVar4 = unaff_s2, 2 < Raziel.State.SectionList[1].Defer.Queue[10].ID - 1U)) {
    Raziel.State.SectionList[2].Defer.Queue[12].Data =
         Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffd;
    Raziel.State.SectionList[2].Event.Queue[8].Data = 0;
    iVar4 = unaff_s0;
  }
  uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data;
  if ((Raziel.State.SectionList[2].Defer.Queue[12].Data & 1U) != 0) {
    Raziel.State.SectionList[2].Defer.Queue[14].ID =
         Raziel.State.SectionList[2].Defer.Queue[14].ID +
         Raziel.State.SectionList[2].Defer.Queue[13].Data * gameTrackerX.controlCommand[1][1];
    iVar3 = Raziel.State.SectionList[2].Defer.Queue[14].ID;
    if (Raziel.State.SectionList[2].Defer.Queue[14].ID < 0) {
      iVar3 = Raziel.State.SectionList[2].Defer.Queue[14].ID + 0xfff;
    }
    iVar3 = iVar3 >> 0xc;
    iVar2 = (uint)*(ushort *)(iVar4 + 0xec) + iVar3;
    *(undefined2 *)(iVar4 + 0xec) = (short)iVar2;
    if (iVar3 < 1) {
      uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data;
      if ((iVar3 < 0) &&
         (uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data,
         iVar2 * 0x10000 >> 0x10 < (int)Raziel.State.SectionList[2].Defer.Queue[13].ID._2_2_)) {
        *(short *)(iVar4 + 0xec) = Raziel.State.SectionList[2].Defer.Queue[13].ID._2_2_;
        uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffe;
        if (iVar4 == Raziel.State.SectionList[2].Event.Queue[8].Data) {
          Raziel.State.SectionList[2].Event.Queue[8].Data = 0;
          uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffc;
        }
      }
    }
    else {
      uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data;
      if ((int)Raziel.State.SectionList[2].Defer.Queue[13].ID._2_2_ < iVar2 * 0x10000 >> 0x10) {
        *(short *)(iVar4 + 0xec) = Raziel.State.SectionList[2].Defer.Queue[13].ID._2_2_;
        uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffe;
        if (iVar4 == Raziel.State.SectionList[2].Event.Queue[8].Data) {
          uVar1 = Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffc;
        }
      }
    }
  }
  Raziel.State.SectionList[2].Defer.Queue[12].Data = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInteractiveMusic(struct _Instance *instance /*$a0*/)
 // line 6261, offset 0x800b2d08
	/* begin block 1 */
		// Start line: 6262
		// Start offset: 0x800B2D08
		// Variables:
	// 		struct Level *level; // $s1

		/* begin block 1.1 */
			// Start line: 6279
			// Start offset: 0x800B2DB4
		/* end block 1.1 */
		// End offset: 0x800B2DD8
		// End Line: 6286
	/* end block 1 */
	// End offset: 0x800B2EA4
	// End Line: 6335

	/* begin block 2 */
		// Start line: 13237
	/* end block 2 */
	// End Line: 13238

void ProcessInteractiveMusic(_Instance *instance)

{
  uint in_v0;
  uint in_v1;
  _Instance *unaff_s0;
  
  Raziel.State.SectionList[2].Defer.Queue[12].Data = in_v1 & in_v0;
  if (unaff_s0 == instance) {
    Raziel.State.SectionList[2].Defer.Queue[12].Data =
         Raziel.State.SectionList[2].Defer.Queue[12].Data & 0xfffffffd;
    Raziel.State.SectionList[2].Event.Queue[8].Data = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessTimers(struct _Instance *instance /*$s3*/)
 // line 6339, offset 0x800b2eb8
	/* begin block 1 */
		// Start line: 13393
	/* end block 1 */
	// End Line: 13394

	/* begin block 2 */
		// Start line: 13394
	/* end block 2 */
	// End Line: 13395

void ProcessTimers(_Instance *instance)

{
  uint uVar1;
  undefined4 uVar2;
  uint in_a1;
  int unaff_s1;
  
  FUN_800a80ac(10,in_a1 & 0x100);
  FUN_800a80ac(7,*(uint *)(unaff_s1 + 0xcc) & 0x40);
  FUN_800a80ac(8,*(uint *)(unaff_s1 + 0xcc) & 0x80);
  FUN_800a80ac(0xb,*(uint *)(unaff_s1 + 0xcc) & 0x400);
  FUN_800a80ac(0xe,*(uint *)(unaff_s1 + 0xcc) & 0x4000);
  if (((*(uint *)(unaff_s1 + 0xcc) & 2) != 0) && ((*(uint *)(unaff_s1 + 0xcc) & 0xc0) == 0)) {
    uVar1 = FUN_8002dafc();
    FUN_800a80ac(7,(uint)((uVar1 ^ 0x76c) != 0));
    FUN_800a80ac(8,(uint)((uVar1 ^ 0x76c) == 0));
  }
  FUN_800a80ac(0xc,(uint)(Raziel.State.SectionList[2].Event.Queue[1].ID == 2));
  FUN_800a80ac(5,Raziel.State.SectionList[1].Event.Queue[9].Data & 0x40000);
  uVar1 = *(uint *)(unaff_s1 + 0xcc);
  if (((uVar1 & 0x10) == 0) && ((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x2000000U) == 0)
     ) {
    if (((uVar1 & 8) == 0) && ((Raziel.State.SectionList[1].Defer.Queue[0].ID & 0x20U) == 0)) {
      if ((uVar1 & 4) == 0) {
        uVar2 = 4;
        if ((uVar1 & 0x20) == 0) {
          Raziel.lastInput = Raziel.lastInput & 0xffffffe1;
          FUN_80040a64(0);
          return;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  Raziel.lastInput = Raziel.lastInput & 0xffffffe1;
  FUN_800a80ac(uVar2,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTimer(int ticks /*$a0*/)
 // line 6444, offset 0x800b33ac
	/* begin block 1 */
		// Start line: 13615
	/* end block 1 */
	// End Line: 13616

	/* begin block 2 */
		// Start line: 13616
	/* end block 2 */
	// End Line: 13617

void SetTimer(int ticks)

{
  undefined4 uStack00000020;
  
  Raziel.steeringMode = 0;
  uStack00000020 = 0xdac;
  FUN_800a8008();
  Raziel.Senses.BelowPoint._0_4_ = &DAT_00005000;
  Raziel.Senses.BelowPoint._4_4_ = 8;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessSpecialAbilities(struct _Instance *instance /*$s1*/)
 // line 6452, offset 0x800b33bc
	/* begin block 1 */
		// Start line: 6453
		// Start offset: 0x800B33BC
		// Variables:
	// 		unsigned long reaver; // $s0

		/* begin block 1.1 */
			// Start line: 6460
			// Start offset: 0x800B33EC
			// Variables:
		// 		unsigned long temp; // $a0
		/* end block 1.1 */
		// End offset: 0x800B340C
		// End Line: 6469

		/* begin block 1.2 */
			// Start line: 6493
			// Start offset: 0x800B3450
			// Variables:
		// 		struct Object *soulReaverOb; // $a1

			/* begin block 1.2.1 */
				// Start line: 6497
				// Start offset: 0x800B3460
			/* end block 1.2.1 */
			// End offset: 0x800B3460
			// End Line: 6497
		/* end block 1.2 */
		// End offset: 0x800B3460
		// End Line: 6497

		/* begin block 1.3 */
			// Start line: 6518
			// Start offset: 0x800B34B8
			// Variables:
		// 		struct Level *level; // $a1
		/* end block 1.3 */
		// End offset: 0x800B351C
		// End Line: 6529
	/* end block 1 */
	// End offset: 0x800B3560
	// End Line: 6548

	/* begin block 2 */
		// Start line: 13631
	/* end block 2 */
	// End Line: 13632

	/* begin block 3 */
		// Start line: 13635
	/* end block 3 */
	// End Line: 13636

void ProcessSpecialAbilities(_Instance *instance)

{
  Raziel.Senses.BelowPoint._0_4_ = &DAT_00005000;
  Raziel.Senses.BelowPoint._4_4_ = 8;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetControllerMessages(long *controlCommand /*$s0*/)
 // line 6582, offset 0x800b3574
	/* begin block 1 */
		// Start line: 6583
		// Start offset: 0x800B3574
	/* end block 1 */
	// End offset: 0x800B3768
	// End Line: 6637

	/* begin block 2 */
		// Start line: 13895
	/* end block 2 */
	// End Line: 13896

int GetControllerMessages(long *controlCommand)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int unaff_s1;
  
  BossAreasMenu.type = (DEBUG_LINE_TYPE)controlCommand;
  iVar2 = FUN_800a62bc();
  uVar3 = 0x800d0000;
  if (Raziel.State.SectionList[2].Event.Queue[0].ID == 0) {
    if (_Normal_ARRAY_800c89d0[20]._4_4_ != 0) {
      FUN_80033b94();
      FUN_800a61a8();
      uVar3 = FUN_800a5178();
    }
  }
  else {
    if (Raziel.State.SectionList[2].Event.Queue[0].Data != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_80034368(Raziel.State.SectionList[2].Event.Queue[0].ID,0x800103,iVar2);
    }
    uVar3 = 6;
    if (iVar2 == 6) {
      iVar2 = FUN_80059340(*(undefined4 *)(unaff_s1 + 0x38),0x800000);
      if (*(int *)(unaff_s1 + 0x10c) == 0) {
        if (*(int *)(unaff_s1 + 0x40) == 0) {
          return iVar2;
        }
        bVar1 = *(int *)(*(int *)(unaff_s1 + 0x40) + 0x53c) < *(int *)(iVar2 + 0x38);
      }
      else {
        if (*(int *)(unaff_s1 + 0x40) == 0) {
          return 0;
        }
        bVar1 = *(int *)(*(int *)(unaff_s1 + 0x40) + 0x53c) < (int)*(short *)(unaff_s1 + 0x128);
      }
      uVar3 = (uint)bVar1;
      if (bVar1 != false) {
        uVar3 = FUN_800a6264(2);
      }
    }
  }
  return uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RazielAdditionalCollide(struct _Instance *instance /*$s2*/, struct GameTracker *gameTracker /*$s3*/)
 // line 6721, offset 0x800b377c
	/* begin block 1 */
		// Start line: 6722
		// Start offset: 0x800B377C
		// Variables:
	// 		int rc; // $s0
	// 		int Mode; // $s0
	// 		short Height; // $a1

		/* begin block 1.1 */
			// Start line: 6753
			// Start offset: 0x800B37F8
		/* end block 1.1 */
		// End offset: 0x800B38A0
		// End Line: 6773

		/* begin block 1.2 */
			// Start line: 6785
			// Start offset: 0x800B38E0
			// Variables:
		// 		struct evPhysicsEdgeData *Data; // $s1
		/* end block 1.2 */
		// End offset: 0x800B39EC
		// End Line: 6818

		/* begin block 1.3 */
			// Start line: 6836
			// Start offset: 0x800B3A00
			// Variables:
		// 		struct evPhysicsSwimData *swimData; // $s1
		// 		struct _Instance *Inst; // $s0
		/* end block 1.3 */
		// End offset: 0x800B3AF0
		// End Line: 6876

		/* begin block 1.4 */
			// Start line: 6967
			// Start offset: 0x800B3C18
		/* end block 1.4 */
		// End offset: 0x800B3C5C
		// End Line: 6972
	/* end block 1 */
	// End offset: 0x800B3C5C
	// End Line: 6974

	/* begin block 2 */
		// Start line: 14234
	/* end block 2 */
	// End Line: 14235

	/* begin block 3 */
		// Start line: 14239
	/* end block 3 */
	// End Line: 14240

void RazielAdditionalCollide(_Instance *instance,GameTracker *gameTracker)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_s0;
  
  if ((*(uint *)(unaff_s0 + 4) & LONG_800cf56c) == 0) {
    if ((*(uint *)(unaff_s0 + 8) & LONG_800cf56c) != 0) {
      uVar2 = 0x20000001;
      goto LAB_800b37bc;
    }
  }
  else {
    uVar2 = 0x80000001;
LAB_800b37bc:
    FUN_80070800(0x800d54b4,uVar2,0);
  }
  if ((*(uint *)(unaff_s0 + 4) & LONG_ARRAY_800cf57c[0]) == 0) {
    if ((*(uint *)(unaff_s0 + 8) & LONG_ARRAY_800cf57c[0]) != 0) {
      puVar3 = (undefined *)0x20000004;
      goto LAB_800b3804;
    }
  }
  else {
    puVar3 = &DAT_80000004;
LAB_800b3804:
    FUN_80070800(0x800d54b4,puVar3,0);
  }
  if ((*(uint *)(unaff_s0 + 4) & LONG_800cf578) == 0) {
    if ((*(uint *)(unaff_s0 + 8) & LONG_800cf578) != 0) {
      puVar3 = (undefined *)0x20000008;
      goto LAB_800b384c;
    }
  }
  else {
    puVar3 = &DAT_80000008;
LAB_800b384c:
    FUN_80070800(0x800d54b4,puVar3,0);
  }
  if ((*(uint *)(unaff_s0 + 4) & LONG_800cf584) == 0) {
    if ((*(uint *)(unaff_s0 + 8) & LONG_800cf584) == 0) goto LAB_800b389c;
    puVar3 = (undefined *)0x20000020;
  }
  else {
    puVar3 = &DAT_80000020;
  }
  FUN_80070800(0x800d54b4,puVar3,0);
LAB_800b389c:
  if (((*(uint *)(unaff_s0 + 4) & RazielCommands) != 0) && (iVar1 = FUN_800595a8(), iVar1 == 0)) {
    FUN_80070800(0x800d54b4,&DAT_80000010,0);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetEngageEvent(struct _Instance *instance /*$a0*/)
 // line 6975, offset 0x800b3c78
	/* begin block 1 */
		// Start line: 6976
		// Start offset: 0x800B3C78
		// Variables:
	// 		int Ability; // $v1
	/* end block 1 */
	// End offset: 0x800B3CC0
	// End Line: 6994

	/* begin block 2 */
		// Start line: 14764
	/* end block 2 */
	// End Line: 14765

int GetEngageEvent(_Instance *instance)

{
  uint uVar1;
  uint uVar2;
  
  if ((Raziel.currentHint & 0x8000U) != 0) {
    FUN_80070c80(0x100,0xffffff00,0x50,0);
    uVar1 = FUN_800763a8();
    if ((uVar1 & 4) == 0) {
      uVar2 = Raziel.State.SectionList[1].Defer.Queue[0].ID & 0xfffffffd;
    }
    else {
      uVar2 = Raziel.State.SectionList[1].Defer.Queue[0].ID | 2;
    }
    if ((uVar1 & 2) == 0) {
      Raziel.State.SectionList[1].Defer.Queue[0].ID = uVar2 & 0xfffffffe;
    }
    else {
      Raziel.State.SectionList[1].Defer.Queue[0].ID = uVar2 | 1;
    }
  }
  if ((Raziel.currentHint & 0x80000U) != 0) {
    FUN_80070e90(0,0xfffffe40,0xa0,0xffffff46);
    FUN_800770e8();
  }
  if (((Raziel.currentHint & 0x4000000U) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].Data != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(Raziel.State.SectionList[1].Defer.Queue[10].Data,2);
  }
  return Raziel.currentHint & 0x4000000U;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetupReaction(struct _Instance *player /*$s2*/, struct _Instance *instance /*$a0*/)
 // line 6997, offset 0x800b3cd0
	/* begin block 1 */
		// Start line: 6998
		// Start offset: 0x800B3CD0
		// Variables:
	// 		int FaceAngle; // $s3

		/* begin block 1.1 */
			// Start line: 7014
			// Start offset: 0x800B3D14
		/* end block 1.1 */
		// End offset: 0x800B3D9C
		// End Line: 7023
	/* end block 1 */
	// End offset: 0x800B3D9C
	// End Line: 7024

	/* begin block 2 */
		// Start line: 14808
	/* end block 2 */
	// End Line: 14809

int SetupReaction(_Instance *player,_Instance *instance)

{
  uint in_v0;
  uint uVar1;
  
  if ((in_v0 & 4) == 0) {
    uVar1 = Raziel.State.SectionList[1].Defer.Queue[0].ID & 0xfffffffd;
  }
  else {
    uVar1 = Raziel.State.SectionList[1].Defer.Queue[0].ID | 2;
  }
  if ((in_v0 & 2) == 0) {
    Raziel.State.SectionList[1].Defer.Queue[0].ID = uVar1 & 0xfffffffe;
  }
  else {
    Raziel.State.SectionList[1].Defer.Queue[0].ID = uVar1 | 1;
  }
  if ((Raziel.currentHint & 0x80000U) != 0) {
    FUN_80070e90(0,0xfffffe40,0xa0,0xffffff46);
    FUN_800770e8();
  }
  if (((Raziel.currentHint & 0x4000000U) != 0) &&
     (Raziel.State.SectionList[1].Defer.Queue[10].Data != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_8003432c(Raziel.State.SectionList[1].Defer.Queue[10].Data,2);
  }
  return Raziel.currentHint & 0x4000000U;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckHolding(struct _Instance *instance /*$a0*/)
 // line 7050, offset 0x800b3dc0
	/* begin block 1 */
		// Start line: 14917
	/* end block 1 */
	// End Line: 14918

	/* begin block 2 */
		// Start line: 14918
	/* end block 2 */
	// End Line: 14919

int CheckHolding(_Instance *instance)

{
  int iVar1;
  undefined4 in_a1;
  
  iVar1 = FUN_80074790(instance,in_a1,5);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DisableWristCollision(struct _Instance *instance /*$s1*/, int Side /*$s0*/)
 // line 7056, offset 0x800b3dcc
	/* begin block 1 */
		// Start line: 14929
	/* end block 1 */
	// End Line: 14930

void DisableWristCollision(_Instance *instance,int Side)

{
  return;
}



// autogenerated function stub: 
// void /*$ra*/ EnableWristCollision(struct _Instance *instance /*$s1*/, int Side /*$s0*/)
void EnableWristCollision(struct _Instance *instance, int Side)
{ // line 7065, offset 0x800b3e1c
	/* begin block 1 */
		// Start line: 14947
	/* end block 1 */
	// End Line: 14948

}


// decompiled code
// original method signature: 
// int /*$ra*/ GetCollisionType(struct _Instance *instance /*$s1*/)
 // line 7202, offset 0x800b3e6c
	/* begin block 1 */
		// Start line: 7203
		// Start offset: 0x800B3E6C
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s0
	// 		struct _HSphere *S; // $v0

		/* begin block 1.1 */
			// Start line: 7217
			// Start offset: 0x800B3EB0
			// Variables:
		// 		struct _Instance *inst; // $v1
		/* end block 1.1 */
		// End offset: 0x800B3EB0
		// End Line: 7217
	/* end block 1 */
	// End offset: 0x800B4000
	// End Line: 7273

	/* begin block 2 */
		// Start line: 15221
	/* end block 2 */
	// End Line: 15222

int GetCollisionType(_Instance *instance)

{
  short sVar1;
  int in_v0;
  int unaff_s2;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  sVar1 = *(short *)(unaff_s2 + 0x60);
  if (in_v0 != 0x2000001) {
    uStack00000010 = 0xffffff3c;
    uStack00000014 = 0x1f2;
    uStack00000018 = 0x800d53d4;
    uStack0000001c = 0x800d53dc;
    uStack00000020 = 0x800d53f4;
    FUN_80070c80(400,0xffffff00,0x90,0);
    FUN_800754a4();
    uStack00000010 = 0xffffff73;
    uStack00000014 = 0;
    uStack00000018 = 0x800d53d4;
    uStack0000001c = 0;
    uStack00000020 = 0x800d53f4;
    FUN_80070c80(0,0,0,0);
    FUN_80075b5c();
  }
  *(short *)(unaff_s2 + 0x60) = sVar1;
  return (int)sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitGlyphSystem(struct _Instance *instance /*$a0*/)
 // line 7346, offset 0x800b4014
	/* begin block 1 */
		// Start line: 7347
		// Start offset: 0x800B4014
		// Variables:
	// 		struct Object *GlyphOb; // $a1

		/* begin block 1.1 */
			// Start line: 7352
			// Start offset: 0x800B4028
			// Variables:
		// 		struct _Instance *iGlyph; // $v0
		/* end block 1.1 */
		// End offset: 0x800B403C
		// End Line: 7361
	/* end block 1 */
	// End offset: 0x800B403C
	// End Line: 7368

	/* begin block 2 */
		// Start line: 15509
	/* end block 2 */
	// End Line: 15510

	/* begin block 3 */
		// Start line: 15512
	/* end block 3 */
	// End Line: 15513

void InitGlyphSystem(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 == in_v0) {
    FUN_80024a2c();
  }
  else {
    *(uint *)(*(int *)(unaff_s0 + 0x14) + 0x14) = *(uint *)(*(int *)(unaff_s0 + 0x14) + 0x14) | 4;
  }
  if (*(char *)(unaff_s0 + 7) == '\x01') {
    if (((((*(uint *)(unaff_s0 + 4) & 0xffff0000) == 0x1010000) &&
         ((Raziel.currentHint & 0x1000U) == 0)) && (*(char *)(*(int *)(unaff_s0 + 8) + 4) == '\t'))
       && (*(char *)(*(int *)(unaff_s0 + 0xc) + 4) == '\b')) {
      if (Raziel.State.SectionList[1].Defer.Queue[5].Data == 0) {
        Raziel.State.SectionList[1].Defer.Queue[5].Data = *(int *)(unaff_s0 + 0x14);
      }
      else {
        if (Raziel.State.SectionList[1].Defer.Queue[5].Data != *(int *)(unaff_s0 + 0x14)) {
          FUN_800741ac(&menuface_t_800cfacc);
        }
      }
    }
  }
  else {
    FUN_8002482c();
    if (Raziel.State.SectionList[1].Defer.Queue[5].Data != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80034368(Raziel.State.SectionList[1].Defer.Queue[5].Data,0x1000024,0);
    }
    Raziel.State.SectionList[1].Defer.Queue[5].Data = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mdRazielProcess(struct _Instance *playerInstance /*$s0*/, struct GameTracker *gameTracker /*$s2*/, long *controlCommand /*$s1*/)
 // line 7373, offset 0x800b404c
	/* begin block 1 */
		// Start line: 15566
	/* end block 1 */
	// End Line: 15567

void mdRazielProcess(_Instance *playerInstance,GameTracker *gameTracker,long *controlCommand)

{
  FUN_8002482c();
  if (Raziel.State.SectionList[1].Defer.Queue[5].Data != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80034368(Raziel.State.SectionList[1].Defer.Queue[5].Data,0x1000024,0);
  }
  Raziel.State.SectionList[1].Defer.Queue[5].Data = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RazielProcess(struct _Instance *playerInstance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 7407, offset 0x800b4104
	/* begin block 1 */
		// Start line: 7408
		// Start offset: 0x800B4104
	/* end block 1 */
	// End offset: 0x800B4104
	// End Line: 7408

	/* begin block 2 */
		// Start line: 15640
	/* end block 2 */
	// End Line: 15641

void RazielProcess(_Instance *playerInstance,GameTracker *gameTracker)

{
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != *(int *)(unaff_s0 + 0x14)) {
    FUN_800741ac(&menuface_t_800cfacc);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RazielInit(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 7422, offset 0x800b4148
	/* begin block 1 */
		// Start line: 15671
	/* end block 1 */
	// End Line: 15672

void RazielInit(_Instance *instance,GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RazielCollide(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 7491, offset 0x800b420c
	/* begin block 1 */
		// Start line: 7492
		// Start offset: 0x800B420C
		// Variables:
	// 		struct _CollideInfo *collideInfo; // $s2

		/* begin block 1.1 */
			// Start line: 7521
			// Start offset: 0x800B42B8
			// Variables:
		// 		struct SVECTOR *offset; // $s1
		/* end block 1.1 */
		// End offset: 0x800B434C
		// End Line: 7537

		/* begin block 1.2 */
			// Start line: 7555
			// Start offset: 0x800B43EC
			// Variables:
		// 		struct SVECTOR *offset; // $a1
		/* end block 1.2 */
		// End offset: 0x800B4454
		// End Line: 7571
	/* end block 1 */
	// End offset: 0x800B4454
	// End Line: 7573

	/* begin block 2 */
		// Start line: 15836
	/* end block 2 */
	// End Line: 15837

void RazielCollide(_Instance *instance,GameTracker *gameTracker)

{
  int unaff_s0;
  
  FUN_8001b884();
  *(undefined2 *)(unaff_s0 + 0xe0) = 0;
  *(undefined2 *)(unaff_s0 + 0xe2) = 0;
  *(undefined2 *)(unaff_s0 + 0xe4) = 0;
  Raziel.Senses.Delta.z = 0;
  Raziel.Senses.Delta.pad = 0;
  Raziel.Senses.HitMonster._0_2_ = 0;
  Raziel.State.SectionList[1].Defer.Queue[5].Data = 0;
  if (Raziel.State.SectionList[1].Defer.Queue[14].ID != 0) {
    FUN_8007aa1c();
  }
  Raziel.State.SectionList[1].Defer.Queue[13].Data = eventMenu.bit_mask;
  eventMenu.bit_mask = eventMenu.bit_mask | BossAreasMenu.type;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_TurnHead(struct _Instance *instance /*$s2*/, short *rotx /*$s0*/, short *rotz /*$s1*/, struct GameTracker *gameTracker /*$a3*/)
 // line 7573, offset 0x800b4470
	/* begin block 1 */
		// Start line: 7574
		// Start offset: 0x800B4470

		/* begin block 1.1 */
			// Start line: 7578
			// Start offset: 0x800B44B4
			// Variables:
		// 		struct _Rotation rot; // stack offset -40
		/* end block 1.1 */
		// End offset: 0x800B4598
		// End Line: 7600

		/* begin block 1.2 */
			// Start line: 7603
			// Start offset: 0x800B45BC
			// Variables:
		// 		struct evActionLookAroundData data; // stack offset -32
		/* end block 1.2 */
		// End offset: 0x800B467C
		// End Line: 7621
	/* end block 1 */
	// End offset: 0x800B467C
	// End Line: 7623

	/* begin block 2 */
		// Start line: 16013
	/* end block 2 */
	// End Line: 16014

void RAZIEL_TurnHead(_Instance *instance,short *rotx,short *rotz,GameTracker *gameTracker)

{
  short in_v0;
  short in_v1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  
  *(short *)(unaff_s0 + 0xe4) = in_v0 + in_v1;
  *(short *)(unaff_s0 + 0x5c) = *(short *)(unaff_s0 + 0x5c) + *(short *)(unaff_s3 + 0x28);
  *(short *)(unaff_s0 + 0x5e) = *(short *)(unaff_s0 + 0x5e) + *(short *)(unaff_s1 + 2);
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + *(short *)(unaff_s1 + 4);
  FUN_8001e924();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_SetLookAround(struct _Instance *instance /*$s1*/)
 // line 7623, offset 0x800b4694
	/* begin block 1 */
		// Start line: 16133
	/* end block 1 */
	// End Line: 16134

void RAZIEL_SetLookAround(_Instance *instance)

{
  short in_v0;
  short in_v1;
  short *unaff_s0;
  short *unaff_s1;
  short sStack00000010;
  undefined2 uStack00000012;
  short sStack00000014;
  
  *unaff_s0 = in_v1 - in_v0;
  sStack00000010 = (short)Raziel.State.SectionList[2].Defer.Queue[11].ID + *unaff_s0 + -0x1000;
  *unaff_s0 = sStack00000010;
  uStack00000012 = 0;
  sStack00000014 = *unaff_s1;
  FUN_8009e744(&stack0x00000010);
  *unaff_s0 = (sStack00000010 + 0x1000) - (short)Raziel.State.SectionList[2].Defer.Queue[11].ID;
  *unaff_s1 = sStack00000014;
  FUN_8009e604();
  if ((short)Raziel.State.SectionList[2].Defer.Queue[11].ID != 0) {
    FUN_8001b748(&standardMenu,
                 (int)*unaff_s0 +
                 (int)*(short *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 0x1c),
                 (int)*unaff_s1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RAZIEL_ResetLookAround(struct _Instance *instance /*$s1*/)
 // line 7652, offset 0x800b470c
	/* begin block 1 */
		// Start line: 16208
	/* end block 1 */
	// End Line: 16209

void RAZIEL_ResetLookAround(_Instance *instance)

{
  int in_v0;
  short *unaff_s0;
  short *unaff_s1;
  
  FUN_8001b748(instance,(int)*unaff_s0 + (int)*(short *)(in_v0 + 0x1c),(int)*unaff_s1);
  return;
}



// autogenerated function stub: 
// long /*$ra*/ RAZIEL_OkToLookAround(struct _Instance *playerInstance /*$a0*/)
long RAZIEL_OkToLookAround(struct _Instance *playerInstance)
{ // line 7675, offset 0x800b4788
	/* begin block 1 */
		// Start line: 16266
	/* end block 1 */
	// End Line: 16267

	/* begin block 2 */
		// Start line: 16280
	/* end block 2 */
	// End Line: 16281

	return 0;
}


// decompiled code
// original method signature: 
// void /*$ra*/ TrailWaterFX(struct _Instance *instance /*$s2*/, int Segment /*$s0*/, int Bubbles /*$s7*/, int Type /*$s6*/)
 // line 7714, offset 0x800b4810
	/* begin block 1 */
		// Start line: 7715
		// Start offset: 0x800B4810
		// Variables:
	// 		struct _SVector Pos; // stack offset -88
	// 		struct _SVector Vel; // stack offset -80
	// 		struct _SVector Accl; // stack offset -72
	// 		int i; // $s4
	// 		int j; // $s1
	// 		struct Level *level; // $s5
	// 		struct __BubbleParams BP; // stack offset -64
	/* end block 1 */
	// End offset: 0x800B4B64
	// End Line: 7761

	/* begin block 2 */
		// Start line: 16358
	/* end block 2 */
	// End Line: 16359

void TrailWaterFX(_Instance *instance,int Segment,int Bubbles,int Type)

{
  int unaff_s1;
  
                    /* WARNING: Subroutine does not return */
  FUN_800904f0(unaff_s1 + 0x194,0x11,0xe);
}





