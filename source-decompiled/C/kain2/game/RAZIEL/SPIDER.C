#include "THISDUST.H"
#include "SPIDER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerWallGrab(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s4*/)
 // line 12, offset 0x800a0e58
	/* begin block 1 */
		// Start line: 13
		// Start offset: 0x800A0E58
		// Variables:
	// 		struct __Event *Ptr; // $a1

		/* begin block 1.1 */
			// Start line: 41
			// Start offset: 0x800A1000
			// Variables:
		// 		struct evPhysicsWallCrawlData *Data; // $a1
		/* end block 1.1 */
		// End offset: 0x800A1090
		// End Line: 81
	/* end block 1 */
	// End offset: 0x800A10A8
	// End Line: 94

	/* begin block 2 */
		// Start line: 24
	/* end block 2 */
	// End Line: 25

void StateHandlerWallGrab(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  int iVar2;
  uint in_v0;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
code_r0x800a0e58:
  if ((in_v0 & 0x10000000) != 0) goto LAB_800a051c;
  if (unaff_s3 != 0) goto LAB_800a051c;
  FUN_80072698();
  FUN_80071b48();
  FUN_80071b48();
LAB_800a0ed4:
  FUN_80071b48();
LAB_800a051c:
  while( true ) {
    while( true ) {
      PurgeMessageQueue((__MessageQueue *)((int)unaff_s1 + unaff_s7 + 0xc));
      iVar5 = (int)unaff_s1 + unaff_s7 + 0xc;
      puVar1 = (undefined4 *)FUN_800707ac(iVar5);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      puVar3 = (undefined *)*puVar1;
      if (puVar3 == &DAT_00100014) {
                    /* WARNING: Subroutine does not return */
        FUN_80071404(0,0,9);
      }
      if (0x100014 < (int)puVar3) goto LAB_800a0608;
      in_v0 = Raziel.State.SectionList[1].Event.Queue[9].Data;
      if (puVar3 == &DAT_80000010) goto code_r0x800a0e58;
      if (-0x7ffffff0 < (int)puVar3) break;
      if (puVar3 == &DAT_80000002) {
        if (unaff_s3 == unaff_s6) {
          Raziel.State.SectionList[2].Defer.Queue[10].ID = unaff_s1[0x49];
          FUN_800725cc();
        }
      }
      else {
        if ((int)puVar3 < -0x7ffffffd) {
          if (puVar3 != (undefined *)0x80000000) {
            if (puVar3 != (undefined *)0x80000001) goto LAB_800a0f5c;
            if (Raziel.State.SectionList[1].Event.Queue[14].Data == 6) {
              iVar5 = FUN_8007216c();
              if (iVar5 != 0x44) {
                if (unaff_s3 == 0) {
                  FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x54),
                               *(undefined4 *)(Raziel.Senses.EngagedMask + 0x58));
                  Raziel.ZDirection._0_2_ = 0x5dc;
                  *(undefined4 *)(*unaff_s1 + 0x1c4) = 0x800d5594;
                }
                goto LAB_800a0ed4;
              }
              *(uint *)(unaff_s5 + 0x120) = *(uint *)(unaff_s5 + 0x120) | 1;
            }
          }
        }
        else {
          if (puVar3 == &DAT_80000004) {
            iVar5 = *unaff_s1;
            uVar4 = *(undefined4 *)(Raziel.Senses.EngagedMask + 100);
            goto LAB_800a0e30;
          }
          if (puVar3 != &DAT_80000008) goto LAB_800a0f5c;
          if (unaff_s3 == 0) {
            iVar5 = FUN_800722a0();
            if (1 < iVar5) goto LAB_800a0a44;
            if (unaff_s8 != 0) {
              unaff_s8 = 0;
              FUN_80070800(unaff_s1 + 0x25,&DAT_80000008,0);
            }
          }
        }
      }
    }
    if (puVar3 != &DAT_00100001) break;
    if (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x40000) {
LAB_800a0708:
      if (unaff_s3 == 0) {
        Raziel.State.SectionList[1].Event.Queue[9].Data = 0x40000;
        Raziel.currentHint = 400;
        Raziel.State.SectionList[1].Event.Queue[10].Data = unaff_s6;
                    /* WARNING: Subroutine does not return */
        FUN_800a3070(*unaff_s1,6);
      }
    }
    else {
      if (unaff_s3 == 0) {
        FUN_8001bec0(&standardMenu,*unaff_s1);
        goto LAB_800a0708;
      }
    }
    FUN_80071b48();
    Raziel._1312_4_ = 5;
    *(undefined4 *)(unaff_s5 + 0x11c) = 0;
    *(undefined4 *)(unaff_s5 + 0x120) = 0;
    Raziel.State.SectionList[2].Defer.Queue[10].Data = 0;
  }
  if (0x100001 < (int)puVar3) {
    if (puVar3 != &DAT_00100004) {
      if (puVar3 != &DAT_00100009) goto LAB_800a0f5c;
      if (unaff_s3 == 0) {
        if (puVar1[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_800a3070(*unaff_s1,6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_800a3070(*unaff_s1,0);
      }
      goto LAB_800a051c;
    }
    if ((Raziel.State.SectionList[1].Event.Queue[9].Data & 0x40000U) == 0) {
      if (unaff_s3 != 0) goto LAB_800a051c;
      FUN_8008fdd0(*unaff_s1 + 0x194,0x1000);
      FUN_8001bf6c(&standardMenu,*unaff_s1);
    }
    if (unaff_s3 == 0) {
      Raziel.State.SectionList[2].Defer.Queue[10].Data = 0;
    }
    goto LAB_800a051c;
  }
  if (puVar3 == &DAT_80000020) {
    iVar2 = FUN_800a5f6c();
    if (iVar2 == 0) {
      uVar4 = 0x80000;
      if ((Raziel.State.SectionList[1].Defer.Queue[13].Data & 4U) == 0) goto LAB_800a051c;
    }
    else {
      uVar4 = 0x800010;
    }
    FUN_80070800(iVar5,uVar4,1);
    goto LAB_800a051c;
  }
  if (puVar3 == (undefined *)0x80000) {
    if (unaff_s3 == 0) {
      FUN_800a5ea4(*unaff_s1);
      goto LAB_800a0a44;
    }
    goto LAB_800a051c;
  }
  goto LAB_800a0f5c;
LAB_800a0608:
  if (puVar3 == (undefined *)0x4010200) goto LAB_800a051c;
  if ((int)puVar3 < 0x4010201) {
    if (puVar3 == (undefined *)0x1000001) goto LAB_800a051c;
    if ((int)puVar3 < 0x1000002) {
      if (puVar3 == (undefined *)0x800010) {
        if (unaff_s3 == 0) {
LAB_800a0a44:
          FUN_80072698();
        }
        goto LAB_800a051c;
      }
      if (puVar3 == (undefined *)0x1000000) {
        if ((unaff_s3 == 0) && ((draw[0].dr_env.code[1] & 0x800) != 0)) {
          FUN_800a4848(*(undefined4 *)(puVar1[1] + 0xc));
        }
        goto LAB_800a051c;
      }
    }
    else {
      if (puVar3 == (undefined *)0x2000000) {
        FUN_800a5b98();
        goto LAB_800a051c;
      }
      if (puVar3 == (undefined *)0x4000001) goto LAB_800a051c;
    }
  }
  else {
    if (puVar3 == (undefined *)0x8000001) {
      iVar5 = puVar1[1];
      if ((iVar5 == 0x44) || (iVar5 == 0x42)) {
        if ((*(uint *)(unaff_s5 + 0x120) & 1) != 0) {
          FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x54),
                       *(undefined4 *)(Raziel.Senses.EngagedMask + 0x58));
          *(uint *)(unaff_s5 + 0x120) = *(uint *)(unaff_s5 + 0x120) & 0xfffffffe;
          goto LAB_800a051c;
        }
        if ((((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) == 0) ||
            (Raziel.State.SectionList[1].Event.Queue[14].Data != 6)) && (unaff_s3 == 0)) {
          FUN_800a7244(*unaff_s1,0,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x50));
        }
      }
      else {
        if ((iVar5 == 0x3f) || ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) != 0))
        goto LAB_800a051c;
        if (unaff_s3 == 0) {
          FUN_800a7244(*unaff_s1,0,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x50));
        }
      }
      if (unaff_s3 != unaff_s4) goto LAB_800a0ed4;
      FUN_80071b48();
      goto LAB_800a051c;
    }
    if ((int)puVar3 < 0x8000002) {
      if (puVar3 == (undefined *)0x4020000) {
        iVar5 = puVar1[1];
        if ((Raziel.State.SectionList[2].Event.Queue[1].ID == unaff_s6) &&
           ((Raziel.State.SectionList[1].Defer.Queue[13].Data & 0x10U) == 0)) {
          Raziel.State.SectionList[1].Defer.Queue[12].ID = (int)&LAB_000186a0;
        }
        else {
          if (unaff_s3 == 0) {
            iVar2 = FUN_800a5f6c();
            FUN_80076b30(*unaff_s1,unaff_s1 + 0x47,(int)*(short *)(iVar5 + 0xc),
                         *(undefined4 *)(Raziel.Senses.EngagedMask + 0x48));
            if (*(short *)(iVar5 + 0xc) < -0x3f) {
              Raziel.currentHint = Raziel.currentHint & 0xfffffbff;
            }
            else {
              Raziel.currentHint = Raziel.currentHint | 0x400;
            }
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_8003432c(iVar2,4);
            }
          }
          if (((*(ushort *)(iVar5 + 0x10) & 0x200) != 0) && (unaff_s3 == 0)) {
            Raziel.padCommands.Queue[11].ID._0_2_ = 0x30;
          }
          if ((((*(ushort *)(iVar5 + 0x10) & 0x40) != 0) &&
              (Raziel.State.SectionList[1].Event.Queue[9].Data == 0x40000)) &&
             (0 < (short)Raziel.State.SectionList[1].Event.Queue[11].Data)) {
            FUN_8009f050();
          }
          if ((*(ushort *)(iVar5 + 0x10) & 0x400) != 0) {
            if (unaff_s3 == 0) {
              Raziel.State.SectionList[1].Event.Queue[9].Data = 0x10;
              FUN_8009a644(0x800d570c,0,0,0xfffffff0);
              *(int *)(*unaff_s1 + 0x154) =
                   (int)(short)Raziel.State.SectionList[1].Event.Queue[11].ID;
              *(int *)(*unaff_s1 + 0x158) =
                   (int)Raziel.State.SectionList[1].Event.Queue[11].ID._2_2_;
              *(int *)(*unaff_s1 + 0x15c) =
                   (int)(short)Raziel.State.SectionList[1].Event.Queue[11].Data;
              Raziel.padCommands.Queue[11].ID._0_2_ = 0x38;
            }
            FUN_80071b48();
                    /* WARNING: Subroutine does not return */
            FUN_800a3070(*unaff_s1,4);
          }
          if ((*(ushort *)(iVar5 + 0x10) & 0x20) != 0) {
            Raziel.State.SectionList[1].Event.Queue[9].Data = 0x100000;
            FUN_80071b48();
                    /* WARNING: Subroutine does not return */
            FUN_800a3070(*unaff_s1,4);
          }
        }
        goto LAB_800a051c;
      }
      if (puVar3 == (undefined *)0x8000000) goto LAB_800a051c;
    }
    else {
      if (puVar3 == (undefined *)0x20000001) goto LAB_800a051c;
      if ((int)puVar3 < 0x20000002) {
        if (puVar3 == (undefined *)0x8000004) {
          if ((*(uint *)Raziel.padCommands.Queue[5].Data & LONG_800cf56c) == 0) {
            FUN_800a7244(*unaff_s1,0,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x50));
          }
          else {
            FUN_800a7244(*unaff_s1,*(undefined4 *)(Raziel.Senses.EngagedMask + 0x5c),
                         *(undefined4 *)(Raziel.Senses.EngagedMask + 0x60));
          }
          goto LAB_800a051c;
        }
      }
      else {
        if (puVar3 == (undefined *)0x20000004) {
          iVar5 = *unaff_s1;
          uVar4 = 0x1000;
LAB_800a0e30:
          FUN_8008fdd0(iVar5 + 0x194,uVar4);
          goto LAB_800a051c;
        }
      }
    }
  }
LAB_800a0f5c:
  FUN_800b0280();
  goto LAB_800a051c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerWallIdle(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s2*/, int Data /*$s7*/)
 // line 96, offset 0x800a10c8
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x800A10C8
		// Variables:
	// 		int Anim; // $s3
	// 		struct __Event *Ptr; // $s0
	// 		struct SVECTOR startVec; // stack offset -56
	// 		struct SVECTOR endVec; // stack offset -48
	// 		int extraProcess; // $s6

		/* begin block 1.1 */
			// Start line: 140
			// Start offset: 0x800A12FC
			// Variables:
		// 		struct evMonsterHitData *data; // $v1
		/* end block 1.1 */
		// End offset: 0x800A131C
		// End Line: 145

		/* begin block 1.2 */
			// Start line: 191
			// Start offset: 0x800A14A8
			// Variables:
		// 		struct evPhysicsWallCrawlData *Data; // $a1
		/* end block 1.2 */
		// End offset: 0x800A1574
		// End Line: 239

		/* begin block 1.3 */
			// Start line: 253
			// Start offset: 0x800A15F4
			// Variables:
		// 		int rc; // $v1
		/* end block 1.3 */
		// End offset: 0x800A1648
		// End Line: 259

		/* begin block 1.4 */
			// Start line: 288
			// Start offset: 0x800A16B4
			// Variables:
		// 		int rc; // $v1
		/* end block 1.4 */
		// End offset: 0x800A1708
		// End Line: 294

		/* begin block 1.5 */
			// Start line: 371
			// Start offset: 0x800A17E8
			// Variables:
		// 		int rc; // $v1
		/* end block 1.5 */
		// End offset: 0x800A1984
		// End Line: 416
	/* end block 1 */
	// End offset: 0x800A1984
	// End Line: 420

	/* begin block 2 */
		// Start line: 209
	/* end block 2 */
	// End Line: 210

void StateHandlerWallIdle(__CharacterState *In,int CurrentSection,int Data)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int in_v1;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s3;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  Raziel.currentHint = in_v1;
  *(undefined4 *)(*unaff_s0 + 0xb4) = 0;
  Raziel._1312_4_ = 3;
  FUN_8009a338(*unaff_s0,0xfffffff0);
  FUN_800a5fcc();
LAB_800a10f4:
  uStack00000010 = 3;
  uStack00000014 = 1;
  FUN_80071b48();
  FUN_800707a0();
  *(uint *)(*unaff_s0 + 0x18) = *(uint *)(*unaff_s0 + 0x18) & 0xffffffbf;
LAB_800a0ff4:
  PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 4));
  puVar1 = (undefined4 *)FUN_800707ac();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar2 = (undefined *)*puVar1;
  if (puVar2 == &DAT_00100001) goto LAB_800a10a4;
  if (0x100001 < (int)puVar2) goto LAB_800a105c;
  if (puVar2 == &DAT_80000008) goto LAB_800a0ff4;
  if (-0x7ffffff8 < (int)puVar2) {
    if (puVar2 != &DAT_80000020) goto LAB_800a11e4;
    goto LAB_800a0ff4;
  }
  if (puVar2 == (undefined *)0x80000000) goto LAB_800a0ff4;
  goto LAB_800a11e4;
LAB_800a10a4:
  if (unaff_s1 == 0) {
    Raziel.State.SectionList[1].Event.Queue[9].Data = 0x4000000;
                    /* WARNING: Subroutine does not return */
    FUN_800a3070(*unaff_s0,7);
  }
  goto LAB_800a10f4;
LAB_800a105c:
  if (puVar2 == (undefined *)0x1000001) goto LAB_800a0ff4;
  if ((int)puVar2 < 0x1000002) {
    if (puVar2 == &DAT_00100004) goto LAB_800a0ff4;
  }
  else {
    if (puVar2 == (undefined *)0x4010011) {
      if (*(int *)(puVar1[1] + 0x28) == 0) {
        *(undefined2 *)(*unaff_s0 + 0x74) = 0;
        *(undefined2 *)(*unaff_s0 + 0x76) = 0;
                    /* WARNING: Subroutine does not return */
        *(undefined2 *)(*unaff_s0 + 0x78) = 0;
        FUN_80071404(0,0,3);
      }
      if (unaff_s1 == 0) {
        FUN_800a7298(*unaff_s0);
      }
      goto LAB_800a0ff4;
    }
    if (puVar2 == (undefined *)0x8000000) {
      if (unaff_s1 == 0) {
        FUN_80072698();
      }
      goto LAB_800a0ff4;
    }
  }
LAB_800a11e4:
  FUN_800b0280();
  goto LAB_800a0ff4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateHandlerWallDismount(struct __CharacterState *In /*$s0*/, int CurrentSection /*$s1*/, int Data /*$s5*/)
 // line 423, offset 0x800a19b0
	/* begin block 1 */
		// Start line: 424
		// Start offset: 0x800A19B0
		// Variables:
	// 		struct __Event *Ptr; // $v0
	// 		int Frame; // $s4
	/* end block 1 */
	// End offset: 0x800A1C00
	// End Line: 505

	/* begin block 2 */
		// Start line: 884
	/* end block 2 */
	// End Line: 885

void StateHandlerWallDismount(__CharacterState *In,int CurrentSection,int Data)

{
  uint in_v0;
  undefined4 uStack00000010;
  
  if (((in_v0 & 1) == 0) && (in_v0 != 0)) {
    uStack00000010 = 1;
    FUN_80071eb8();
  }
  return;
}





