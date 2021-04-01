#include "THISDUST.H"
#include "SWIM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerInitSwim(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$a2*/)
 // line 5, offset 0x8009eefc
	/* begin block 1 */
		// Start line: 10
	/* end block 1 */
	// End Line: 11

void StateHandlerInitSwim(__CharacterState *In,int CurrentSection,int Data)

{
                    /* WARNING: Subroutine does not return */
  FUN_80071404(In,In);
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSwimCoil(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s7*/)
 // line 54, offset 0x8009f008
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x8009F008
		// Variables:
	// 		struct __Event *Ptr; // $s0
	// 		struct evPhysicsSwimData *SwimData; // $a0
	// 		int rc; // $s6
	// 		int release; // $s5

		/* begin block 1.1 */
			// Start line: 237
			// Start offset: 0x8009F688
			// Variables:
		// 		struct evMonsterHitData *data; // $v1
		/* end block 1.1 */
		// End offset: 0x8009F69C
		// End Line: 240
	/* end block 1 */
	// End offset: 0x8009F75C
	// End Line: 273

	/* begin block 2 */
		// Start line: 108
	/* end block 2 */
	// End Line: 109

void StateHandlerSwimCoil(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  code *CurrentSection_00;
  uint Data_00;
  __CharacterState *In_00;
  code *unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  
  do {
    CurrentSection_00 = unaff_s3;
    Data_00 = unaff_s7;
    FUN_800b0280();
LAB_8009e914:
    do {
      while( true ) {
        PurgeMessageQueue((__MessageQueue *)(unaff_s6 + 4));
        puVar1 = (undefined4 *)FUN_800707ac(unaff_s6 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        puVar4 = (undefined *)*puVar1;
        if (puVar4 != &DAT_00100015) break;
        if (unaff_s3 == (code *)0x0) {
          if (unaff_s4 == (uint)*(byte *)Raziel.State.SectionList[2].Event.Queue[6].Data) {
            CurrentSection_00 = (code *)0x1000000;
            if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x100U) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x40),
                           0x1000002,In_00->CharacterInstance);
            }
          }
          else {
            iVar3 = FUN_800a5f34();
            if (iVar3 != 0) {
LAB_8009ee28:
              draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
              uVar2 = FUN_80070988(In_00->CharacterInstance,&In_00->CharacterInstance->rotation,100)
              ;
                    /* WARNING: Subroutine does not return */
              FUN_80034368(iVar3,0x1000003,uVar2);
            }
            FUN_800a60c4();
          }
        }
      }
      if (0x100015 < (int)puVar4) {
        if (puVar4 == (undefined *)0x4010080) {
          if (unaff_s3 == (code *)0x0) {
            if (puVar1[1] != 0) {
              FUN_800a66bc(In_00->CharacterInstance);
              StateHandlerSwimCoil(In_00,(int)CurrentSection_00,Data_00);
              return;
            }
            FUN_800a6648(In_00->CharacterInstance);
          }
          break;
        }
        if ((int)puVar4 < 0x4010081) {
          if (puVar4 != (undefined *)0x1000001) {
            if (0x1000001 < (int)puVar4) {
              if (puVar4 == (undefined *)0x1000006) {
LAB_8009eef0:
                    /* WARNING: Subroutine does not return */
                FUN_80071404(0,0,(uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 9
                                                ));
              }
              break;
            }
            if (puVar4 != (undefined *)0x1000000) break;
            if (((unaff_s3 == (code *)0x0) && ((Raziel.currentHint & 0x4000U) == 0)) &&
               (Raziel.State.SectionList[1].Defer.Queue[13].ID == 0)) {
              iVar3 = FUN_800a5f34();
              if (iVar3 != 0) {
                draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
                uVar2 = FUN_80070988(In_00->CharacterInstance,&In_00->CharacterInstance->rotation);
                    /* WARNING: Subroutine does not return */
                FUN_80034368(iVar3,0x1000003,uVar2);
              }
              iVar3 = FUN_800a5f34();
              if (iVar3 != 0) {
                FUN_800352c8(iVar3);
              }
              Data_00 = puVar1[1];
              CurrentSection_00 = FUN_8009d700;
              FUN_80072698();
            }
          }
        }
        else {
          if (puVar4 == (undefined *)0x8000000) {
            if (unaff_s3 == (code *)0x0) {
              if (In_00->SectionList[0].Data2 != 0xb) {
                    /* WARNING: Subroutine does not return */
                FUN_80071404(0,0,3);
              }
              CurrentSection_00 = (code *)0x0;
              Data_00 = 0x37;
              FUN_80071b48();
              In_00->SectionList[0].Data2 = 0xe;
            }
          }
          else {
            if ((int)puVar4 < 0x8000001) {
              if (puVar4 != (undefined *)0x4020000) break;
            }
            else {
              if (puVar4 == (undefined *)0x10000000) {
                if ((((unaff_s3 == (code *)0x0) &&
                     (unaff_s4 != (uint)*(byte *)Raziel.State.SectionList[2].Event.Queue[6].Data))
                    && (unaff_s4 != 0x47)) &&
                   (unaff_s4 != (uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 6)
                   )) {
                    /* WARNING: Subroutine does not return */
                  FUN_800a3070(In_00->CharacterInstance,0x12);
                }
              }
              else {
                if (puVar4 != (undefined *)0x20000020) break;
                if (unaff_s3 == (code *)0x0) {
                  if (In_00->SectionList[0].Data1 == 0) {
                    CurrentSection_00 = (code *)0x20000020;
                    Data_00 = 0;
                    FUN_80070800(&In_00->SectionList[0].Defer);
                  }
                  else {
                    if (In_00->SectionList[0].Data2 != 0xc) {
                      Data_00 = 0;
                      CurrentSection_00 =
                           (code *)(uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data +
                                                  6);
                      FUN_80071eb8();
                      FUN_800707a0(&In_00->SectionList[0].Event);
                      Raziel.State.SectionList[1].Event.Queue[9].Data = 0x20000;
                      FUN_800b3518((uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data +
                                                  8) +
                                   (uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data +
                                                  7));
                      In_00->SectionList[0].Data2 = 0xc;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_8009e914;
      }
      if (puVar4 == (undefined *)0x0) {
        if ((((unaff_s3 == (code *)0x0) &&
             (unaff_s4 != (uint)*(byte *)Raziel.State.SectionList[2].Event.Queue[6].Data)) &&
            (unaff_s4 != 0x47)) &&
           (unaff_s4 != (uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 6))) {
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(In_00->CharacterInstance,0);
        }
        goto LAB_8009e914;
      }
      if (0 < (int)puVar4) {
        if (puVar4 == &DAT_00100004) {
          iVar3 = FUN_800a5f34();
          if (iVar3 != 0) goto LAB_8009ee28;
        }
        else {
          if (0x100004 < (int)puVar4) {
            if (puVar4 == &DAT_00100014) {
              if ((unaff_s3 == (code *)0x0) && (iVar3 = FUN_800a5f34(), iVar3 != 0)) {
                draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
                uVar2 = FUN_80070988(In_00->CharacterInstance,&In_00->CharacterInstance->rotation,10
                                    );
                    /* WARNING: Subroutine does not return */
                FUN_80034368(iVar3,0x1000003,uVar2);
              }
              goto LAB_8009eef0;
            }
            break;
          }
          if (puVar4 != &DAT_00100001) break;
          if (unaff_s3 == (code *)0x0) {
            Raziel.State.SectionList[2].Event.Queue[6].Data =
                 *(int *)(*(int *)(Raziel.Senses.EngagedMask + 0x14) + 0x18);
            Raziel.currentHint = 0x1043009;
            Raziel._1312_4_ = 3;
                    /* WARNING: Subroutine does not return */
            FUN_800a3070(In_00->CharacterInstance,0);
          }
          if (puVar1[1] == 0) {
            uVar2 = 0xd;
            if (unaff_s3 == (code *)0x0) {
              Data_00 = 0;
              FUN_80071eb8();
              CurrentSection_00 = (code *)0x1000000;
              if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x100U) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_80034368(*(undefined4 *)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x40)
                             ,0x1000002,0);
              }
              uVar2 = 0xd;
            }
          }
          else {
            FUN_800a7de8(0x40);
            if (unaff_s3 == (code *)0x2) {
              Data_00 = 0;
              CurrentSection_00 = (code *)0x2;
            }
            else {
              Data_00 = (uint)*(byte *)Raziel.State.SectionList[2].Event.Queue[6].Data;
              CurrentSection_00 = unaff_s3;
            }
            FUN_80071b48();
            if (unaff_s3 == (code *)0x0) {
              Data_00 = 200;
              if ((Raziel.State.SectionList[1].Defer.Queue[8].ID & 0x100U) != 0) {
                CurrentSection_00 =
                     *(code **)(Raziel.State.SectionList[1].Defer.Queue[7].Data + 0x40);
                FUN_800a54a0(In_00->CharacterInstance,CurrentSection_00,200,0);
              }
              FUN_800b3518((uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 4) +
                           (uint)*(byte *)(Raziel.State.SectionList[2].Event.Queue[6].Data + 1));
            }
            Raziel.State.SectionList[1].Event.Queue[9].Data = 0x20000000;
            uVar2 = 0xb;
          }
          *(undefined4 *)(unaff_s5 + 0x120) = uVar2;
          *(undefined4 *)(unaff_s5 + 0x11c) = 0;
        }
        goto LAB_8009e914;
      }
      if (puVar4 == &DAT_80000008) goto LAB_8009e914;
      if ((int)puVar4 < -0x7ffffff7) {
        if (puVar4 != (undefined *)0x80000000) break;
        goto LAB_8009e914;
      }
    } while (puVar4 == &DAT_80000020);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSwimTread(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$a2*/)
 // line 277, offset 0x8009f788
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x8009F788
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		struct evPhysicsSwimData *SwimData; // $s0

		/* begin block 1.1 */
			// Start line: 422
			// Start offset: 0x8009FCC8
			// Variables:
		// 		struct evPhysicsEdgeData *data; // $s0
		/* end block 1.1 */
		// End offset: 0x8009FD10
		// End Line: 428

		/* begin block 1.2 */
			// Start line: 448
			// Start offset: 0x8009FDAC
			// Variables:
		// 		struct evMonsterHitData *data; // $v1
		/* end block 1.2 */
		// End offset: 0x8009FDCC
		// End Line: 453
	/* end block 1 */
	// End offset: 0x8009FF24
	// End Line: 493

	/* begin block 2 */
		// Start line: 561
	/* end block 2 */
	// End Line: 562

void StateHandlerSwimTread(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  undefined4 uStack00000010;
  
  FUN_8009a644();
  Raziel._1312_4_ = 0;
LAB_8009f798:
  uStack00000010 = 0;
  FUN_80071b48();
  FUN_800725cc();
LAB_8009f26c:
  while( true ) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
    puVar1 = (undefined4 *)FUN_800707ac(unaff_s3 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      if ((unaff_s5 != 0) && ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf578) == 0)) {
        FUN_80070800(unaff_s1 + unaff_s2 * 0x47 + 0x25,0x20000008,0);
      }
      return;
    }
    puVar3 = (undefined *)*puVar1;
    if (puVar3 != (undefined *)0x1000000) break;
    if ((unaff_s2 == 0) && ((draw[0].dr_env.code[1] & 0x800) != 0)) {
      FUN_800a4848(*(undefined4 *)(puVar1[1] + 0xc));
    }
  }
  if ((int)puVar3 < 0x1000001) {
    if (puVar3 == (undefined *)0x100000) {
      if ((unaff_s6 & 0x40) == 0) {
        if (unaff_s2 == 2) {
          uStack00000010 = 3;
        }
        else {
          uStack00000010 = 0x10;
        }
        FUN_80071b48();
        FUN_800725cc();
        *(uint *)(unaff_s4 + 0x120) = *(uint *)(unaff_s4 + 0x120) | 2;
      }
      else {
        FUN_800725cc();
      }
      if (unaff_s2 == 0) {
        iVar2 = *unaff_s1;
        uVar4 = *(undefined4 *)(Raziel.Senses.EngagedMask + 0x7c);
LAB_8009f6ac:
        FUN_800a7244(iVar2,0,uVar4);
      }
      goto LAB_8009f26c;
    }
    if ((int)puVar3 < 0x100001) {
      if (puVar3 == (undefined *)0x80000001) {
        iVar2 = FUN_8007216c();
        if (iVar2 != 0x43) {
          uStack00000010 = 3;
          FUN_80071b48();
          if (unaff_s2 == 0) {
            Raziel.ZDirection._0_2_ = 300;
            *(undefined4 *)(*unaff_s1 + 0x1c4) = 0x800d5594;
          }
        }
        goto LAB_8009f26c;
      }
      if ((((int)puVar3 < -0x7fffffff) || (puVar3 == &DAT_80000008)) || (puVar3 == &DAT_80000010))
      goto LAB_8009f26c;
    }
    else {
      if (puVar3 == &DAT_00100009) goto LAB_8009f26c;
      if ((int)puVar3 < 0x10000a) {
        if (puVar3 == &DAT_00100001) {
          if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x40000) {
LAB_8009f410:
            if (unaff_s2 == 0) {
              Raziel.State.SectionList[1].Event.Queue[9].Data = 0x40000;
              Raziel.currentHint = 0x111;
              FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x68),
                           *(undefined4 *)(Raziel.Senses.EngagedMask + 0x6c));
              FUN_800b3518(5);
            }
          }
          else {
            if (unaff_s2 == 0) {
              FUN_8001bec0(&standardMenu,*unaff_s1);
              goto LAB_8009f410;
            }
          }
          Raziel._1312_4_ = 5;
          uStack00000010 = 9;
          FUN_80071b48();
          *(undefined4 *)(unaff_s4 + 0x11c) = 0;
          Raziel.State.SectionList[2].Defer.Queue[10].Data = 0;
          goto LAB_8009f26c;
        }
        if (puVar3 == &DAT_00100004) {
          if (((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x40000U) == 0) && (unaff_s2 == 0)
             ) {
            FUN_8001bf6c(&standardMenu,*unaff_s1);
          }
          goto LAB_8009f26c;
        }
      }
      else {
        if (puVar3 == &DAT_00100011) {
          iVar2 = puVar1[1];
          if (iVar2 == *(int *)(Raziel.Senses.EngagedMask + 0x68)) {
            FUN_800a7244(*unaff_s1,0,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x70));
            iVar2 = puVar1[1];
          }
          if (iVar2 == *(int *)(Raziel.Senses.EngagedMask + 0x74)) {
            iVar2 = *unaff_s1;
            uVar4 = *(undefined4 *)(Raziel.Senses.EngagedMask + 0x7c);
            goto LAB_8009f6ac;
          }
          goto LAB_8009f26c;
        }
        if (puVar3 == &DAT_00100014) {
                    /* WARNING: Subroutine does not return */
          FUN_80071404(0,0,9);
        }
      }
    }
  }
  else {
    if (puVar3 == (undefined *)0x4020000) {
      iVar2 = puVar1[1];
      *(int *)(unaff_s4 + 0x11c) = (int)*(short *)(iVar2 + 0x10);
      if ((Raziel.State.SectionList[2].Event.Queue[1].ID == 1) &&
         ((Raziel.State.SectionList[1].Defer.Queue[13].Data & 0x10U) == 0)) {
        Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&LAB_000186a0;
        goto LAB_8009f26c;
      }
      if ((*(ushort *)(iVar2 + 0x10) & 0x220) != 0) goto code_r0x8009f718;
      goto LAB_8009f26c;
    }
    if (0x4020000 < (int)puVar3) {
      if (puVar3 != (undefined *)0x8000004) {
        if (0x8000004 < (int)puVar3) {
          if (puVar3 != (undefined *)0x20000001) {
            if (puVar3 != (undefined *)0x20000008) goto LAB_8009f84c;
            iVar2 = FUN_8007216c();
            if (iVar2 != 0x43) {
              iVar2 = FUN_800722a0();
              if (iVar2 < 2) {
                if (unaff_s5 == 0) goto LAB_8009f530;
                uVar4 = 0x20000008;
              }
              else {
                uVar4 = 0x100000;
              }
              FUN_80070800(unaff_s3 + 0x8c,uVar4,0);
            }
LAB_8009f530:
            unaff_s5 = 0;
          }
          goto LAB_8009f26c;
        }
        if (puVar3 == (undefined *)0x8000000) {
          iVar2 = FUN_8007216c();
          if (iVar2 != 0x43) goto LAB_8009f26c;
          uVar4 = 0x100000;
        }
        else {
          if (puVar3 != (undefined *)0x8000003) goto LAB_8009f84c;
          if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) == 0) goto LAB_8009f26c;
          uVar4 = 0x80000001;
        }
        FUN_80070800(unaff_s3 + 0x8c,uVar4,0);
        goto LAB_8009f26c;
      }
      FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x74),
                   *(undefined4 *)(Raziel.Senses.EngagedMask + 0x78));
      goto LAB_8009f26c;
    }
    if (puVar3 == (undefined *)0x4000001) goto LAB_8009f26c;
    if (0x4000001 < (int)puVar3) {
      if ((puVar3 != (undefined *)0x4000004) && (puVar3 != (undefined *)0x4010200))
      goto LAB_8009f84c;
      goto LAB_8009f26c;
    }
    if (puVar3 == (undefined *)0x1000001) goto LAB_8009f26c;
  }
LAB_8009f84c:
  FUN_800b0280();
  goto LAB_8009f26c;
code_r0x8009f718:
  if (unaff_s2 == 0) {
    Raziel.State.SectionList[1].Event.Queue[9].Data = 0x10;
    uStack00000010 = 0xc3;
    FUN_8009a2c4(*unaff_s1,0xfffffff0,0,0x15);
                    /* WARNING: Subroutine does not return */
    FUN_800a3070(*unaff_s1,4);
  }
  goto LAB_8009f798;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSwimDiveIn(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, int Data /*$a2*/)
 // line 497, offset 0x8009ff50
	/* begin block 1 */
		// Start line: 498
		// Start offset: 0x8009FF50
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		struct evPhysicsSwimData *SwimData; // $s3

		/* begin block 1.1 */
			// Start line: 581
			// Start offset: 0x800A01E8
			// Variables:
		// 		struct evMonsterHitData *data; // $v1
		/* end block 1.1 */
		// End offset: 0x800A0208
		// End Line: 586
	/* end block 1 */
	// End offset: 0x800A02B8
	// End Line: 614

	/* begin block 2 */
		// Start line: 1048
	/* end block 2 */
	// End Line: 1049

void StateHandlerSwimDiveIn(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *unaff_s1;
  int unaff_s2;
  undefined4 uStack00000010;
  
  FUN_800a78f4(3,1,0);
  if (unaff_s2 == 2) {
    if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 2U) != 0) {
      FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x8c),
                   *(undefined4 *)(Raziel.Senses.EngagedMask + 0x90));
    }
    if ((((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) != 0) &&
        (Raziel.State.SectionList[1].Event.Queue[14].Data == 6)) &&
       ((*(uint *)Raziel.padCommands.Queue[5].Data & 1) != 0)) {
      uStack00000010 = 1;
      FUN_80071eb8();
      FUN_80072698();
      FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x8c),
                   *(undefined4 *)(Raziel.Senses.EngagedMask + 0x90));
      Raziel.currentHint = Raziel.currentHint & 0xfffffbff;
    }
  }
  if (unaff_s2 == 0) {
    if (*(int *)(Raziel.Senses.EngagedMask + 0x98) <
        (int)(short)Raziel.State.SectionList[2].Defer.Queue[11].ID) {
      Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ =
           *(short *)(Raziel.Senses.EngagedMask + 0x98);
    }
    if ((int)(short)Raziel.State.SectionList[2].Defer.Queue[11].ID <
        *(int *)(Raziel.Senses.EngagedMask + 0x94)) {
      Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ =
           *(short *)(Raziel.Senses.EngagedMask + 0x94);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerSwim(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s3*/, int Data /*stack 8*/)
 // line 621, offset 0x800a02dc
	/* begin block 1 */
		// Start line: 622
		// Start offset: 0x800A02DC
		// Variables:
	// 		struct __Event *Ptr; // $a0
	// 		struct evPhysicsSwimData *SwimData; // $s2
	// 		int tap; // $fp

		/* begin block 1.1 */
			// Start line: 804
			// Start offset: 0x800A0A7C
			// Variables:
		// 		struct _Instance *Inst; // $s0
		/* end block 1.1 */
		// End offset: 0x800A0B28
		// End Line: 816

		/* begin block 1.2 */
			// Start line: 948
			// Start offset: 0x800A0DE0
			// Variables:
		// 		struct evMonsterHitData *data; // $v1
		/* end block 1.2 */
		// End offset: 0x800A0DF4
		// End Line: 951
	/* end block 1 */
	// End offset: 0x800A0E28
	// End Line: 962

	/* begin block 2 */
		// Start line: 1424
	/* end block 2 */
	// End Line: 1425

void StateHandlerSwim(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  
  FUN_800725cc();
LAB_800a00f4:
  do {
    while( true ) {
      do {
        while( true ) {
          PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 4));
          puVar1 = (undefined4 *)FUN_800707ac(unaff_s2 + 4);
          if (puVar1 == (undefined4 *)0x0) {
            if (unaff_s0 == 0) {
              *(short *)(*unaff_s1 + 0x60) = *(short *)(*unaff_s1 + 0x60) + -0x10;
              if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 1U) != 0) {
                if (((Raziel.State.SectionList[2].Defer.Queue[10].Data & 2U) != 0) ||
                   ((*(uint *)Raziel.padCommands.Queue[5].Data & 1) != 0)) {
                  Raziel.State.SectionList[2].Defer.Queue[11].ID._0_2_ =
                       (short)Raziel.State.SectionList[2].Defer.Queue[11].ID + 0x30;
                }
                if (0x400 < (short)Raziel.State.SectionList[2].Defer.Queue[11].ID) {
                  Raziel._1312_4_ = 5;
                }
                if ((Raziel.State.SectionList[2].Defer.Queue[10].Data & 4U) != 0) {
                  FUN_800a78f4(3,1,0);
                }
              }
            }
            return;
          }
          puVar2 = (undefined *)*puVar1;
          if (puVar2 == &DAT_00100014) {
                    /* WARNING: Subroutine does not return */
            FUN_80071404(0,0,9);
          }
          if ((int)puVar2 < 0x100015) break;
          if (puVar2 != (undefined *)0x4010200) {
            if ((int)puVar2 < 0x4010201) {
              if (((puVar2 == (undefined *)0x1000000) && (unaff_s0 == 0)) &&
                 ((draw[0].dr_env.code[1] & 0x800) != 0)) {
                FUN_800a4848(*(undefined4 *)(puVar1[1] + 0xc));
              }
            }
            else {
              if (puVar2 == (undefined *)0x4020000) {
                unaff_s3 = puVar1[1];
                if ((*(ushort *)(unaff_s3 + 0x10) & 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_80071404(0,0,9);
                }
              }
              else {
                if (puVar2 == (undefined *)0x8000000) {
                  if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) != 0) {
                    FUN_80070800(unaff_s2 + 0x8c,0x80000001,0);
                  }
                  if ((*(ushort *)(unaff_s3 + 0x10) & 0x40) == 0) {
                    FUN_800725cc();
                    *(uint *)(unaff_s4 + 0x120) = *(uint *)(unaff_s4 + 0x120) | 2;
                  }
                  else {
                    FUN_800725cc();
                  }
                }
              }
            }
          }
        }
      } while ((puVar2 == (undefined *)0x100000) || ((int)puVar2 < 0x100001));
      if (puVar2 == &DAT_00100001) break;
      if (((puVar2 == &DAT_00100004) &&
          ((Raziel.State.SectionList[1].Event.Queue[9].Data & unaff_s5) == 0)) && (unaff_s0 == 0)) {
        FUN_8001bf6c(&standardMenu,*unaff_s1);
        Raziel.State.SectionList[2].Defer.Queue[10].Data = 0;
      }
    }
    if (Raziel.State.SectionList[1].Event.Queue[9].Data != unaff_s5) {
      if (unaff_s0 != 0) goto LAB_800a00f4;
      FUN_8001bec0(&standardMenu,*unaff_s1);
    }
    if (unaff_s0 == 0) {
      Raziel.currentHint = 0x191;
      Raziel._1312_4_ = 6;
      Raziel.State.SectionList[1].Event.Queue[9].Data = unaff_s5;
                    /* WARNING: Subroutine does not return */
      FUN_800a3070(*unaff_s1,0x11);
    }
  } while( true );
}





