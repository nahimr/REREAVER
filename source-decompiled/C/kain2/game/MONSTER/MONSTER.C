#include "THISDUST.H"
#include "MONSTER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MON_DoCombatTimers(struct _Instance *instance /*$s2*/)
 // line 101, offset 0x800871fc
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800871FC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		unsigned long curtime; // $s1

		/* begin block 1.1 */
			// Start line: 117
			// Start offset: 0x80087280
			// Variables:
		// 		struct _MonsterCombatAttributes *combat; // $v0
		/* end block 1.1 */
		// End offset: 0x800872F0
		// End Line: 126
	/* end block 1 */
	// End offset: 0x800873CC
	// End Line: 142

	/* begin block 2 */
		// Start line: 202
	/* end block 2 */
	// End Line: 203

void MON_DoCombatTimers(_Instance *instance)

{
  int iVar1;
  int in_v1;
  int unaff_s2;
  int unaff_s3;
  
  while (in_v1 < 8) {
    (instance->offset).pad = 0;
    in_v1 = in_v1 + 1;
    instance = (_Instance *)((int)&(instance->node).prev + 2);
  }
  do {
    do {
      unaff_s2 = *(int *)(unaff_s2 + 8);
      if (unaff_s2 == 0) {
        return;
      }
    } while ((((*(uint *)(*(int *)(unaff_s2 + 0x1c) + 0x2c) & 0x40000) == 0) ||
             (*(short *)(*(int *)(unaff_s2 + 0x24) + 2) != 3)) ||
            ((*(ushort *)(*(int *)(unaff_s2 + 0x24) + 8) & 0x40) == 0));
    iVar1 = (int)*(short *)(unaff_s2 + 0x60) - (int)*(short *)(unaff_s3 + 0x60);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  } while (399 < iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_80039564((int)*(short *)(unaff_s2 + 0x5c) - (int)*(short *)(unaff_s3 + 0x5c),
               (int)*(short *)(unaff_s2 + 0x5e) - (int)*(short *)(unaff_s3 + 0x5e));
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ChangeHumanOpinion(struct _Instance *instance /*$a0*/)
 // line 147, offset 0x800873e4
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x800873E4
		// Variables:
	// 		int good; // $v0

		/* begin block 1.1 */
			// Start line: 172
			// Start offset: 0x80087404
			// Variables:
		// 		int opinion; // $s0
		/* end block 1.1 */
		// End offset: 0x8008747C
		// End Line: 188
	/* end block 1 */
	// End offset: 0x8008747C
	// End Line: 189

	/* begin block 2 */
		// Start line: 298
	/* end block 2 */
	// End Line: 299

void MON_ChangeHumanOpinion(_Instance *instance)

{
  char in_v0;
  char in_v1;
  int in_a3;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 0x151) = in_v0 + ((char)(in_a3 >> 5) - in_v1) * -100;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_CutOut_Monster(struct _Instance *instance /*$s2*/, int fade_amount /*$t4*/, int startseg /*$a2*/, int endseg /*$a3*/)
 // line 192, offset 0x8008748c
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x8008748C
		// Variables:
	// 		struct _SVector point; // stack offset -56
	// 		struct _SVector normal; // stack offset -48
	// 		struct _SVector p1; // stack offset -40
	// 		struct _SVector p2; // stack offset -32
	// 		int tmp; // $t0
	// 		struct MATRIX *mat; // $a0

		/* begin block 1.1 */
			// Start line: 221
			// Start offset: 0x800875D0
			// Variables:
		// 		long color; // stack offset -24

			/* begin block 1.1.1 */
				// Start line: 221
				// Start offset: 0x800875D0
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $v1
			// 		short _z0; // $a1
			// 		short _x1; // $a2
			// 		short _y1; // $a3
			// 		short _z1; // $t0
			// 		struct _SVector *_v; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800875D0
			// End Line: 221
		/* end block 1.1 */
		// End offset: 0x80087678
		// End Line: 233
	/* end block 1 */
	// End offset: 0x800876C8
	// End Line: 238

	/* begin block 2 */
		// Start line: 389
	/* end block 2 */
	// End Line: 390

void MON_CutOut_Monster(_Instance *instance,int fade_amount,int startseg,int endseg)

{
  short unaff_s0;
  
  if (0 < GlobalSave->humanOpinionOfRaziel) {
    FUN_8007d6c4();
  }
  GlobalSave->humanOpinionOfRaziel = unaff_s0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_DeadEntry(struct _Instance *instance /*$s1*/)
 // line 249, offset 0x800876e0
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x800876E0
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x800877BC
	// End Line: 278

	/* begin block 2 */
		// Start line: 524
	/* end block 2 */
	// End Line: 525

void MON_DeadEntry(_Instance *instance)

{
  int in_v1;
  int in_a1;
  int unaff_s2;
  short in_stack_0000001c;
  
  *(int *)(unaff_s2 + 0x120) =
       -((int)&(instance->node).prev + in_v1 * (int)in_stack_0000001c + in_a1 >> 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Dead(struct _Instance *instance /*$s2*/)
 // line 280, offset 0x800877d0
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x800877D0
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _Instance *soul; // $s5
	// 		struct __Event *message; // $v0
	// 		int reanimate; // $s6

		/* begin block 1.1 */
			// Start line: 304
			// Start offset: 0x8008787C
			// Variables:
		// 		struct _MonsterAttributes *ma; // $s0
		// 		int fade_amount; // $a1
		/* end block 1.1 */
		// End offset: 0x800878B0
		// End Line: 316

		/* begin block 1.2 */
			// Start line: 336
			// Start offset: 0x80087930
			// Variables:
		// 		struct _Model *model; // $s0
		// 		int i; // $s0
		// 		struct CVECTOR *ptr; // $v0
		/* end block 1.2 */
		// End offset: 0x80087980
		// End Line: 344

		/* begin block 1.3 */
			// Start line: 347
			// Start offset: 0x800879A8
			// Variables:
		// 		struct _Instance *imp; // $s0
		// 		struct _Instance *closest; // $s3

			/* begin block 1.3.1 */
				// Start line: 351
				// Start offset: 0x800879C8
				// Variables:
			// 		long closestdist; // $s4

				/* begin block 1.3.1.1 */
					// Start line: 360
					// Start offset: 0x80087A3C
					// Variables:
				// 		long dist; // $v1
				/* end block 1.3.1.1 */
				// End offset: 0x80087A7C
				// End Line: 367
			/* end block 1.3.1 */
			// End offset: 0x80087A8C
			// End Line: 370
		/* end block 1.3 */
		// End offset: 0x80087B18
		// End Line: 383

		/* begin block 1.4 */
			// Start line: 402
			// Start offset: 0x80087B98
			// Variables:
		// 		struct SVECTOR New; // stack offset -96
		// 		struct SVECTOR Old; // stack offset -88
		// 		struct _PCollideInfo pcinfo; // stack offset -80
		/* end block 1.4 */
		// End offset: 0x80087C20
		// End Line: 421

		/* begin block 1.5 */
			// Start line: 448
			// Start offset: 0x80087D20
			// Variables:
		// 		struct _MonsterAttributes *ma; // $a0
		/* end block 1.5 */
		// End offset: 0x80087E30
		// End Line: 482
	/* end block 1 */
	// End offset: 0x80087EDC
	// End Line: 522

	/* begin block 2 */
		// Start line: 587
	/* end block 2 */
	// End Line: 588

void MON_Dead(_Instance *instance)

{
  int in_v0;
  
  if (in_v0 == 0) {
    FUN_800818d4();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_MissileHitEntry(struct _Instance *instance /*$s0*/)
 // line 527, offset 0x80087f04
	/* begin block 1 */
		// Start line: 528
		// Start offset: 0x80087F04
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80087F04
	// End Line: 528

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

void MON_MissileHitEntry(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,0x100000d,0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_MissileHit(struct _Instance *instance /*$s1*/)
 // line 551, offset 0x80087fd0
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x80087FD0
		// Variables:
	// 		struct _MonsterVars *mv; // $s3
	// 		struct _MonsterAttributes *ma; // $s0
	// 		int thisFrame; // $s2
	// 		int lastFrame; // $a0
	/* end block 1 */
	// End offset: 0x80088094
	// End Line: 574

	/* begin block 2 */
		// Start line: 1208
	/* end block 2 */
	// End Line: 1209

void MON_MissileHit(_Instance *instance)

{
  int unaff_s1;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(*(undefined4 *)(unaff_s1 + 0xd0));
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BirthEntry(struct _Instance *instance /*$a0*/)
 // line 579, offset 0x800880b0
	/* begin block 1 */
		// Start line: 1266
	/* end block 1 */
	// End Line: 1267

	/* begin block 2 */
		// Start line: 1267
	/* end block 2 */
	// End Line: 1268

void MON_BirthEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s3;
  
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s3 + 8));
  } while (in_v0 != 0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Birth(struct _Instance *instance /*$a0*/)
 // line 583, offset 0x800880b8
	/* begin block 1 */
		// Start line: 1274
	/* end block 1 */
	// End Line: 1275

void MON_Birth(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c(instance,0x17);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ParryEntry(struct _Instance *instance /*$s1*/)
 // line 591, offset 0x800880d8
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x800880D8
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x800880D8
	// End Line: 592

	/* begin block 2 */
		// Start line: 1290
	/* end block 2 */
	// End Line: 1291

void MON_ParryEntry(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Parry(struct _Instance *instance /*$s0*/)
 // line 615, offset 0x80088128
	/* begin block 1 */
		// Start line: 1354
	/* end block 1 */
	// End Line: 1355

void MON_Parry(_Instance *instance)

{
  undefined4 in_a1;
  
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20(instance,in_a1,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LandOnFeetEntry(struct _Instance *instance /*$s0*/)
 // line 628, offset 0x8008816c
	/* begin block 1 */
		// Start line: 629
		// Start offset: 0x8008816C
		// Variables:
	// 		struct _MonsterVars *mv; // $v0

		/* begin block 1.1 */
			// Start line: 646
			// Start offset: 0x800881E0
			// Variables:
		// 		int damage; // $a1
		/* end block 1.1 */
		// End offset: 0x80088204
		// End Line: 656
	/* end block 1 */
	// End offset: 0x80088204
	// End Line: 657

	/* begin block 2 */
		// Start line: 1380
	/* end block 2 */
	// End Line: 1381

void MON_LandOnFeetEntry(_Instance *instance)

{
  if ((instance->flags2 & 0x10U) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c(instance,0xd);
  }
  FUN_80085a94(instance);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LandOnFeet(struct _Instance *instance /*$s1*/)
 // line 661, offset 0x80088230
	/* begin block 1 */
		// Start line: 662
		// Start offset: 0x80088230
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 680
			// Start offset: 0x80088298
			// Variables:
		// 		int state; // $a1
		/* end block 1.1 */
		// End offset: 0x80088348
		// End Line: 711
	/* end block 1 */
	// End offset: 0x800883A8
	// End Line: 725

	/* begin block 2 */
		// Start line: 1447
	/* end block 2 */
	// End Line: 1448

void MON_LandOnFeet(_Instance *instance)

{
  int unaff_s0;
  
  FUN_80082930();
  *(undefined4 *)(unaff_s0 + 0x154) = 0;
  *(undefined4 *)(unaff_s0 + 0x158) = 0;
  *(undefined4 *)(unaff_s0 + 0x15c) = 0;
  *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) & 0xffffffdf;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LandInWaterEntry(struct _Instance *instance /*$a0*/)
 // line 730, offset 0x800883bc
	/* begin block 1 */
		// Start line: 1585
	/* end block 1 */
	// End Line: 1586

	/* begin block 2 */
		// Start line: 1586
	/* end block 2 */
	// End Line: 1587

void MON_LandInWaterEntry(_Instance *instance)

{
  int unaff_s1;
  
  if (*(int *)(unaff_s1 + 0x178) != 0xf) {
    *(undefined4 *)(unaff_s1 + 0x160) = 0;
    *(undefined4 *)(unaff_s1 + 0x164) = 0;
    *(undefined4 *)(unaff_s1 + 0x168) = 0;
    *(undefined4 *)(unaff_s1 + 0x154) = 0;
    *(undefined4 *)(unaff_s1 + 0x158) = 0;
    *(undefined4 *)(unaff_s1 + 0x15c) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_LandInWater(struct _Instance *instance /*$a0*/)
 // line 735, offset 0x800883d0
	/* begin block 1 */
		// Start line: 1595
	/* end block 1 */
	// End Line: 1596

void MON_LandInWater(_Instance *instance)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x164) = 0;
  *(undefined4 *)(unaff_s1 + 0x168) = 0;
  *(undefined4 *)(unaff_s1 + 0x154) = 0;
  *(undefined4 *)(unaff_s1 + 0x158) = 0;
  *(undefined4 *)(unaff_s1 + 0x15c) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BreakHoldEntry(struct _Instance *instance /*$s1*/)
 // line 743, offset 0x800883f0
	/* begin block 1 */
		// Start line: 744
		// Start offset: 0x800883F0
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x80088448
	// End Line: 753

	/* begin block 2 */
		// Start line: 1611
	/* end block 2 */
	// End Line: 1612

void MON_BreakHoldEntry(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_BreakHold(struct _Instance *instance /*$s1*/)
 // line 755, offset 0x8008845c
	/* begin block 1 */
		// Start line: 756
		// Start offset: 0x8008845C

		/* begin block 1.1 */
			// Start line: 763
			// Start offset: 0x8008849C
			// Variables:
		// 		struct _MonsterVars *mv; // $s3
		// 		struct __Event *message; // $a1

			/* begin block 1.1.1 */
				// Start line: 773
				// Start offset: 0x80088524
				// Variables:
			// 		struct evMonsterThrownData *data; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80088524
			// End Line: 773

			/* begin block 1.1.2 */
				// Start line: 780
				// Start offset: 0x8008854C
				// Variables:
			// 		struct evMonsterHitTerrainData *data; // $v0
			/* end block 1.1.2 */
			// End offset: 0x80088568
			// End Line: 782
		/* end block 1.1 */
		// End offset: 0x800885F4
		// End Line: 808
	/* end block 1 */
	// End offset: 0x8008861C
	// End Line: 814

	/* begin block 2 */
		// Start line: 1638
	/* end block 2 */
	// End Line: 1639

void MON_BreakHold(_Instance *instance)

{
  uint *in_v0;
  int unaff_s1;
  
  if ((*in_v0 & 0x200) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x40;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ImpactEntry(struct _Instance *instance /*$s0*/)
 // line 819, offset 0x80088638
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x80088638
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _MonsterCombatAttributes *combat; // $s2
	// 		struct evFXHitData data; // stack offset -40
	/* end block 1 */
	// End offset: 0x800886F4
	// End Line: 842

	/* begin block 2 */
		// Start line: 1768
	/* end block 2 */
	// End Line: 1769

void MON_ImpactEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s1;
  
  if ((in_v0 != 0) && (*(int *)(unaff_s1 + 0x178) != 0xe)) {
    FUN_800840b8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Impact(struct _Instance *instance /*$s0*/)
 // line 845, offset 0x8008871c
	/* begin block 1 */
		// Start line: 846
		// Start offset: 0x8008871C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80088788
	// End Line: 866

	/* begin block 2 */
		// Start line: 1830
	/* end block 2 */
	// End Line: 1831

void MON_Impact(_Instance *instance)

{
  int in_v0;
  uint in_a1;
  int unaff_s0;
  uint *unaff_s1;
  
  unaff_s1[0x3e] = (int)&(instance->node).prev + in_v0;
  *unaff_s1 = *unaff_s1 | in_a1;
  *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) & 0xffffffdf;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_FallEntry(struct _Instance *instance /*$s0*/)
 // line 871, offset 0x8008879c
	/* begin block 1 */
		// Start line: 872
		// Start offset: 0x8008879C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80088820
	// End Line: 893

	/* begin block 2 */
		// Start line: 1884
	/* end block 2 */
	// End Line: 1885

void MON_FallEntry(_Instance *instance)

{
  int unaff_s1;
  
  if ((*(short *)(unaff_s1 + 0x140) == 0x20) || (*(short *)(unaff_s1 + 0x140) == 0x40)) {
    FUN_80084158();
  }
  return;
}



// autogenerated function stub: 
// void /*$ra*/ MON_Fall(struct _Instance *instance /*$s1*/)
void MON_Fall(struct _Instance *instance)
{ // line 901, offset 0x8008885c
	/* begin block 1 */
		// Start line: 902
		// Start offset: 0x8008885C
		// Variables:
			struct _MonsterVars *mv; // $s3
			struct __Event *message; // $a1
			int state; // $s2

		/* begin block 1.1 */
			// Start line: 929
			// Start offset: 0x80088910
			// Variables:
				int x; // $s0
				int y; // $v0
		/* end block 1.1 */
		// End offset: 0x80088944
		// End Line: 934
	/* end block 1 */
	// End offset: 0x800889BC
	// End Line: 963

	/* begin block 2 */
		// Start line: 1944
	/* end block 2 */
	// End Line: 1945

}


// decompiled code
// original method signature: 
// void /*$ra*/ MON_ThrownEntry(struct _Instance *instance /*$s0*/)
 // line 968, offset 0x800889d8
	/* begin block 1 */
		// Start line: 969
		// Start offset: 0x800889D8
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80088A40
	// End Line: 985

	/* begin block 2 */
		// Start line: 2081
	/* end block 2 */
	// End Line: 2082

void MON_ThrownEntry(_Instance *instance)

{
  _Instance *in_v0;
  
  if ((instance == in_v0) || (instance == (_Instance *)&the_mcmenu_table.pause)) {
    FUN_80084158();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Thrown(struct _Instance *instance /*$s0*/)
 // line 989, offset 0x80088a74
	/* begin block 1 */
		// Start line: 990
		// Start offset: 0x80088A74
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct Intro *impaler; // $v0

		/* begin block 1.1 */
			// Start line: 996
			// Start offset: 0x80088AA4
		/* end block 1.1 */
		// End offset: 0x80088AE4
		// End Line: 1006

		/* begin block 1.2 */
			// Start line: 1012
			// Start offset: 0x80088B00
			// Variables:
		// 		struct __Event *message; // $a1

			/* begin block 1.2.1 */
				// Start line: 1024
				// Start offset: 0x80088B40
				// Variables:
			// 		struct evMonsterHitTerrainData *data; // $v0
			/* end block 1.2.1 */
			// End offset: 0x80088B40
			// End Line: 1024
		/* end block 1.2 */
		// End offset: 0x80088BB8
		// End Line: 1049
	/* end block 1 */
	// End offset: 0x80088BB8
	// End Line: 1050

	/* begin block 2 */
		// Start line: 2126
	/* end block 2 */
	// End Line: 2127

void MON_Thrown(_Instance *instance)

{
  uint in_v0;
  int unaff_s0;
  uint *unaff_s1;
  
  *(uint *)(unaff_s0 + 0x18) = in_v0 | 0x40;
  *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) | 0x20;
  *unaff_s1 = *unaff_s1 & 0xfffffffd;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ImpaleDeathEntry(struct _Instance *instance /*$s0*/)
 // line 1055, offset 0x80088bcc
	/* begin block 1 */
		// Start line: 1056
		// Start offset: 0x80088BCC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80088BCC
	// End Line: 1056

	/* begin block 2 */
		// Start line: 2262
	/* end block 2 */
	// End Line: 2263

void MON_ImpaleDeathEntry(_Instance *instance)

{
  int unaff_s1;
  
  if ((*(short *)(unaff_s1 + 0x140) == 0x20) || (*(short *)(unaff_s1 + 0x140) == 0x40)) {
    FUN_80084158();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ImpaleDeath(struct _Instance *instance /*$s1*/)
 // line 1073, offset 0x80088c4c
	/* begin block 1 */
		// Start line: 1074
		// Start offset: 0x80088C4C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s2
	// 		struct __Event *message; // $v0

		/* begin block 1.1 */
			// Start line: 1081
			// Start offset: 0x80088C80
			// Variables:
		// 		int thisFrame; // $s3
		// 		int lastFrame; // $a0
		/* end block 1.1 */
		// End offset: 0x80088CF4
		// End Line: 1092
	/* end block 1 */
	// End offset: 0x80088E38
	// End Line: 1127

	/* begin block 2 */
		// Start line: 2310
	/* end block 2 */
	// End Line: 2311

void MON_ImpaleDeath(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// autogenerated function stub: 
// void /*$ra*/ MON_TerrainImpaleDeathEntry(struct _Instance *instance /*$s1*/)
void MON_TerrainImpaleDeathEntry(struct _Instance *instance)
{ // line 1132, offset 0x80088e54
	/* begin block 1 */
		// Start line: 1133
		// Start offset: 0x80088E54
		// Variables:
			struct _MonsterVars *mv; // $s2
			struct _MonsterAttributes *ma; // $s0
			struct Intro *impaler; // $s0
	/* end block 1 */
	// End offset: 0x80088F8C
	// End Line: 1173

	/* begin block 2 */
		// Start line: 2434
	/* end block 2 */
	// End Line: 2435

}


// decompiled code
// original method signature: 
// void /*$ra*/ MON_TerrainImpaleDeath(struct _Instance *instance /*$s3*/)
 // line 1176, offset 0x80088fa8
	/* begin block 1 */
		// Start line: 1177
		// Start offset: 0x80088FA8
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		struct Intro *impaler; // $v1

		/* begin block 1.1 */
			// Start line: 1201
			// Start offset: 0x80089090
		/* end block 1.1 */
		// End offset: 0x800890A0
		// End Line: 1205

		/* begin block 1.2 */
			// Start line: 1212
			// Start offset: 0x800890B0
			// Variables:
		// 		struct _MonsterAttributes *ma; // $s1
		// 		int fade_amount; // $s0
		/* end block 1.2 */
		// End offset: 0x80089118
		// End Line: 1230
	/* end block 1 */
	// End offset: 0x80089174
	// End Line: 1242

	/* begin block 2 */
		// Start line: 2525
	/* end block 2 */
	// End Line: 2526

void MON_TerrainImpaleDeath(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SurprisedEntry(struct _Instance *instance /*$s0*/)
 // line 1247, offset 0x80089190
	/* begin block 1 */
		// Start line: 1248
		// Start offset: 0x80089190
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80089190
	// End Line: 1248

	/* begin block 2 */
		// Start line: 2671
	/* end block 2 */
	// End Line: 2672

void MON_SurprisedEntry(_Instance *instance)

{
  uint in_v0;
  int iVar1;
  uint in_v1;
  uint *unaff_s2;
  
  *unaff_s2 = in_v0 & in_v1;
  iVar1 = FUN_8004b128(instance,0x40);
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s2 + 2));
  } while (iVar1 != 0);
  return;
}



// autogenerated function stub: 
// void /*$ra*/ MON_Surprised(struct _Instance *instance /*$s1*/)
void MON_Surprised(struct _Instance *instance)
{ // line 1258, offset 0x800891f0
	/* begin block 1 */
		// Start line: 1259
		// Start offset: 0x800891F0
		// Variables:
			struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x80089298
	// End Line: 1279

	/* begin block 2 */
		// Start line: 2693
	/* end block 2 */
	// End Line: 2694

}


// decompiled code
// original method signature: 
// void /*$ra*/ MON_StunnedEntry(struct _Instance *instance /*$s1*/)
 // line 1285, offset 0x800892b4
	/* begin block 1 */
		// Start line: 1286
		// Start offset: 0x800892B4
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterCombatAttributes *combat; // $s2
	/* end block 1 */
	// End offset: 0x80089434
	// End Line: 1328

	/* begin block 2 */
		// Start line: 2749
	/* end block 2 */
	// End Line: 2750

void MON_StunnedEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0x10c) = in_v0 + 0x5c;
  FUN_80080fe0(instance,*(int *)(*(int *)(unaff_s0 + 0xc4) + 4) + 0x5c,
               (int)*(short *)(*(int *)(unaff_s0 + 0x154) + 0x1c));
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Stunned(struct _Instance *instance /*$s0*/)
 // line 1332, offset 0x80089464
	/* begin block 1 */
		// Start line: 1333
		// Start offset: 0x80089464
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x80089560
	// End Line: 1363

	/* begin block 2 */
		// Start line: 2862
	/* end block 2 */
	// End Line: 2863

void MON_Stunned(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(int *)(unaff_s0 + 0xfc) = in_v0 + in_v1;
  *(undefined4 *)(unaff_s0 + 0xf4) = 0x8000;
  *(uint *)(unaff_s1 + 0x58) = *(uint *)(unaff_s1 + 0x58) | 0x20;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GrabbedEntry(struct _Instance *instance /*$s0*/)
 // line 1368, offset 0x80089574
	/* begin block 1 */
		// Start line: 1369
		// Start offset: 0x80089574
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x800895CC
	// End Line: 1385

	/* begin block 2 */
		// Start line: 2935
	/* end block 2 */
	// End Line: 2936

void MON_GrabbedEntry(_Instance *instance)

{
  int unaff_s0;
  
  FUN_800776d0(instance,unaff_s0 + 0x5c);
  if (*(int *)(unaff_s0 + 0x178) != 9) {
    *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) & 0xffffffdf;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Grabbed(struct _Instance *instance /*$s1*/)
 // line 1398, offset 0x80089658
	/* begin block 1 */
		// Start line: 1399
		// Start offset: 0x80089658
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		struct __Event *message; // $a1
	// 		int time; // $v1

		/* begin block 1.1 */
			// Start line: 1424
			// Start offset: 0x80089754
			// Variables:
		// 		struct evMonsterThrownData *data; // $s0
		/* end block 1.1 */
		// End offset: 0x80089754
		// End Line: 1424

		/* begin block 1.2 */
			// Start line: 1431
			// Start offset: 0x8008977C
			// Variables:
		// 		struct evMonsterHitTerrainData *data; // $v0
		/* end block 1.2 */
		// End offset: 0x80089798
		// End Line: 1433
	/* end block 1 */
	// End offset: 0x80089854
	// End Line: 1466

	/* begin block 2 */
		// Start line: 3000
	/* end block 2 */
	// End Line: 3001

void MON_Grabbed(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(short *)(unaff_s0 + 0x78) = *(short *)(in_v0 + 0x78) + 0x800;
  *(undefined2 *)(unaff_s1 + 0x110) = 0;
  *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) | 0x20;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_HitEntry(struct _Instance *instance /*$s1*/)
 // line 1471, offset 0x80089870
	/* begin block 1 */
		// Start line: 1472
		// Start offset: 0x80089870
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $a0
	/* end block 1 */
	// End offset: 0x800898DC
	// End Line: 1486

	/* begin block 2 */
		// Start line: 3154
	/* end block 2 */
	// End Line: 3155

void MON_HitEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s1;
  
  if ((*(int *)(unaff_s1 + 0x178) != in_v0) && (*(int *)(unaff_s1 + 0x178) != 0xe)) {
    FUN_800840b8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Hit(struct _Instance *instance /*$s0*/)
 // line 1494, offset 0x80089914
	/* begin block 1 */
		// Start line: 1495
		// Start offset: 0x80089914
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x800899E8
	// End Line: 1519

	/* begin block 2 */
		// Start line: 3207
	/* end block 2 */
	// End Line: 3208

void MON_Hit(_Instance *instance)

{
  int unaff_s0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s0 + 0xf4) = 0x8000;
                    /* WARNING: Subroutine does not return */
  *(uint *)(unaff_s1 + 0x58) = *(uint *)(unaff_s1 + 0x58) | 0x20;
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_AttackEntry(struct _Instance *instance /*$s0*/)
 // line 1524, offset 0x800899fc
	/* begin block 1 */
		// Start line: 1525
		// Start offset: 0x800899FC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _MonsterAttackAttributes *attack; // $s2
	/* end block 1 */
	// End offset: 0x800899FC
	// End Line: 1525

	/* begin block 2 */
		// Start line: 3267
	/* end block 2 */
	// End Line: 3268

void MON_AttackEntry(_Instance *instance)

{
  int unaff_s0;
  
  FUN_800776d0(instance,unaff_s0 + 0x5c);
  if (*(int *)(unaff_s0 + 0x178) != 8) {
    *(uint *)(unaff_s0 + 0x58) = *(uint *)(unaff_s0 + 0x58) & 0xffffffdf;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Attack(struct _Instance *instance /*$s2*/)
 // line 1540, offset 0x80089a70
	/* begin block 1 */
		// Start line: 1541
		// Start offset: 0x80089A70
		// Variables:
	// 		struct _MonsterVars *mv; // $s3
	// 		struct _MonsterIR *enemy; // $s4
	// 		struct _MonsterAttackAttributes *attack; // $s0
	// 		struct _MonsterAnim *anim; // $s1
	/* end block 1 */
	// End offset: 0x80089C28
	// End Line: 1584

	/* begin block 2 */
		// Start line: 3299
	/* end block 2 */
	// End Line: 3300

void MON_Attack(_Instance *instance)

{
  undefined4 in_v0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0xf4) = in_v0;
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_CombatEntry(struct _Instance *instance /*$a0*/)
 // line 1590, offset 0x80089c50
	/* begin block 1 */
		// Start line: 1592
		// Start offset: 0x80089C50
		// Variables:
	// 		struct _MonsterVars *mv; // $a0
	/* end block 1 */
	// End offset: 0x80089C50
	// End Line: 1597

	/* begin block 2 */
		// Start line: 3401
	/* end block 2 */
	// End Line: 3402

	/* begin block 3 */
		// Start line: 3402
	/* end block 3 */
	// End Line: 3403

	/* begin block 4 */
		// Start line: 3407
	/* end block 4 */
	// End Line: 3408

void MON_CombatEntry(_Instance *instance)

{
  int unaff_s3;
  int unaff_s4;
  
  FUN_80080fe0(instance,*(int *)(unaff_s4 + 4) + 0x5c,
               (int)*(short *)(*(int *)(unaff_s3 + 0x154) + 0x1c));
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Combat(struct _Instance *instance /*$s1*/)
 // line 1603, offset 0x80089c7c
	/* begin block 1 */
		// Start line: 1604
		// Start offset: 0x80089C7C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $s3

		/* begin block 1.1 */
			// Start line: 1622
			// Start offset: 0x80089D2C
			// Variables:
		// 		struct _MonsterCombatAttributes *combat; // $s2

			/* begin block 1.1.1 */
				// Start line: 1632
				// Start offset: 0x80089D7C
				// Variables:
			// 		int reason; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 1647
					// Start offset: 0x80089DCC
					// Variables:
				// 		int anim; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x80089DDC
				// End Line: 1651

				/* begin block 1.1.1.2 */
					// Start line: 1662
					// Start offset: 0x80089E38
				/* end block 1.1.1.2 */
				// End offset: 0x80089E54
				// End Line: 1665

				/* begin block 1.1.1.3 */
					// Start line: 1676
					// Start offset: 0x80089EA4
					// Variables:
				// 		int anim; // $v0
				/* end block 1.1.1.3 */
				// End offset: 0x80089EDC
				// End Line: 1687
			/* end block 1.1.1 */
			// End offset: 0x80089EDC
			// End Line: 1691

			/* begin block 1.1.2 */
				// Start line: 1695
				// Start offset: 0x80089EFC
				// Variables:
			// 		int state; // $a1
			/* end block 1.1.2 */
			// End offset: 0x80089F40
			// End Line: 1706
		/* end block 1.1 */
		// End offset: 0x80089F40
		// End Line: 1707
	/* end block 1 */
	// End offset: 0x80089F40
	// End Line: 1709

	/* begin block 2 */
		// Start line: 3434
	/* end block 2 */
	// End Line: 3435

void MON_Combat(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_ProjectileEntry(struct _Instance *instance /*$a0*/)
 // line 1715, offset 0x80089f64
	/* begin block 1 */
		// Start line: 1716
		// Start offset: 0x80089F64
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $v1
	// 		struct _MonsterMissile *missileDef; // $a1
	/* end block 1 */
	// End offset: 0x80089F64
	// End Line: 1716

	/* begin block 2 */
		// Start line: 3661
	/* end block 2 */
	// End Line: 3662

void MON_ProjectileEntry(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Projectile(struct _Instance *instance /*$s2*/)
 // line 1727, offset 0x80089fbc
	/* begin block 1 */
		// Start line: 1728
		// Start offset: 0x80089FBC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _MonsterAttributes *ma; // $v1
	// 		struct _MonsterMissile *missileDef; // $s0
	/* end block 1 */
	// End offset: 0x8008A0E0
	// End Line: 1757

	/* begin block 2 */
		// Start line: 3686
	/* end block 2 */
	// End Line: 3687

void MON_Projectile(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  
  FUN_8007fc04(instance,*(int *)((int)instance->data + 0x3c) +
                        (int)*(char *)(*(int *)(in_v0 + 8) + 0x1e) * 0x10 + 0xe,0,1);
  *(undefined *)(unaff_s0 + 0x14b) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_IdleEntry(struct _Instance *instance /*$a1*/)
 // line 1766, offset 0x8008a100
	/* begin block 1 */
		// Start line: 1767
		// Start offset: 0x8008A100
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 1777
			// Start offset: 0x8008A140
			// Variables:
		// 		struct _MonsterAttributes *ma; // $v1
		/* end block 1.1 */
		// End offset: 0x8008A160
		// End Line: 1782
	/* end block 1 */
	// End offset: 0x8008A1A8
	// End Line: 1792

	/* begin block 2 */
		// Start line: 3767
	/* end block 2 */
	// End Line: 3768

void MON_IdleEntry(_Instance *instance)

{
  FUN_80080fe0();
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Idle(struct _Instance *instance /*$s3*/)
 // line 1794, offset 0x8008a1b8
	/* begin block 1 */
		// Start line: 1795
		// Start offset: 0x8008A1B8
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		int combatIdle; // $s4

		/* begin block 1.1 */
			// Start line: 1801
			// Start offset: 0x8008A1F4
			// Variables:
		// 		int state; // $s1
		// 		struct _MonsterIR *enemy; // $s2
		/* end block 1.1 */
		// End offset: 0x8008A304
		// End Line: 1831
	/* end block 1 */
	// End offset: 0x8008A3CC
	// End Line: 1848

	/* begin block 2 */
		// Start line: 3832
	/* end block 2 */
	// End Line: 3833

void MON_Idle(_Instance *instance)

{
  int in_a1;
  uint *unaff_s0;
  
  if ((*(byte *)(in_a1 + 0x1b8) & 1) == 0) {
    FUN_8008fcb0(in_a1 + 0x194);
    *unaff_s0 = *unaff_s0 | 0x4000000;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_FleeEntry(struct _Instance *instance /*$a0*/)
 // line 1854, offset 0x8008a3f4
	/* begin block 1 */
		// Start line: 1855
		// Start offset: 0x8008A3F4
		// Variables:
	// 		struct _MonsterVars *mv; // $a1
	/* end block 1 */
	// End offset: 0x8008A3F4
	// End Line: 1855

	/* begin block 2 */
		// Start line: 3952
	/* end block 2 */
	// End Line: 3953

void MON_FleeEntry(_Instance *instance)

{
  FUN_80085a48();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Flee(struct _Instance *instance /*$s1*/)
 // line 1869, offset 0x8008a448
	/* begin block 1 */
		// Start line: 1870
		// Start offset: 0x8008A448
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 1896
			// Start offset: 0x8008A530
		/* end block 1.1 */
		// End offset: 0x8008A578
		// End Line: 1903
	/* end block 1 */
	// End offset: 0x8008A578
	// End Line: 1904

	/* begin block 2 */
		// Start line: 3993
	/* end block 2 */
	// End Line: 3994

void MON_Flee(_Instance *instance)

{
  uint *in_a1;
  uint in_a2;
  uint in_a3;
  
  in_a1[0x3d] = 4;
  *in_a1 = (*in_a1 | 0x1000) & in_a3 & (in_a2 | 0xffff);
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20(instance,3,2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PursueEntry(struct _Instance *instance /*$s1*/)
 // line 1909, offset 0x8008a58c
	/* begin block 1 */
		// Start line: 1910
		// Start offset: 0x8008A58C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008A5EC
	// End Line: 1925

	/* begin block 2 */
		// Start line: 4073
	/* end block 2 */
	// End Line: 4074

void MON_PursueEntry(_Instance *instance)

{
  short sVar1;
  undefined4 in_a1;
  int unaff_s0;
  int unaff_s1;
  
  sVar1 = FUN_80086e20(instance,in_a1,1000);
  FUN_80039b04(unaff_s1 + 0x78,(int)sVar1,(int)*(short *)(*(int *)(unaff_s0 + 0x154) + 0x22));
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Pursue(struct _Instance *instance /*$s3*/)
 // line 1930, offset 0x8008a61c
	/* begin block 1 */
		// Start line: 1931
		// Start offset: 0x8008A61C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		int anim; // $a1
	// 		int planresult; // $v1
	// 		long range; // $s6
	// 		struct _MonsterIR *target; // $s4
	// 		int pursueType; // $s2

		/* begin block 1.1 */
			// Start line: 1954
			// Start offset: 0x8008A674

			/* begin block 1.1.1 */
				// Start line: 1960
				// Start offset: 0x8008A6A4
			/* end block 1.1.1 */
			// End offset: 0x8008A6E0
			// End Line: 1966

			/* begin block 1.1.2 */
				// Start line: 1998
				// Start offset: 0x8008A794
				// Variables:
			// 		struct _MonsterCombatAttributes *combat; // $a2

				/* begin block 1.1.2.1 */
					// Start line: 2002
					// Start offset: 0x8008A7B0
					// Variables:
				// 		struct _MonsterIR *ally; // $a1
				/* end block 1.1.2.1 */
				// End offset: 0x8008A7E0
				// End Line: 2023

				/* begin block 1.1.2.2 */
					// Start line: 2060
					// Start offset: 0x8008A888
				/* end block 1.1.2.2 */
				// End offset: 0x8008A8E0
				// End Line: 2068
			/* end block 1.1.2 */
			// End offset: 0x8008A8E0
			// End Line: 2070

			/* begin block 1.1.3 */
				// Start line: 2082
				// Start offset: 0x8008A90C
				// Variables:
			// 		int state; // $s5
			/* end block 1.1.3 */
			// End offset: 0x8008A9F8
			// End Line: 2153
		/* end block 1.1 */
		// End offset: 0x8008AA2C
		// End Line: 2170
	/* end block 1 */
	// End offset: 0x8008AA2C
	// End Line: 2171

	/* begin block 2 */
		// Start line: 4119
	/* end block 2 */
	// End Line: 4120

void MON_Pursue(_Instance *instance)

{
  uint *unaff_s0;
  
  FUN_80080cbc();
  unaff_s0[0x3d] = 4;
  *unaff_s0 = *unaff_s0 & 0xfffdffff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_WanderEntry(struct _Instance *instance /*$s1*/)
 // line 2176, offset 0x8008aa54
	/* begin block 1 */
		// Start line: 2177
		// Start offset: 0x8008AA54
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008AAC4
	// End Line: 2193

	/* begin block 2 */
		// Start line: 4625
	/* end block 2 */
	// End Line: 4626

void MON_WanderEntry(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int iVar1;
  
  iVar1 = 0xd;
  if (in_v0 < in_v1) {
    iVar1 = 2;
  }
  if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Wander(struct _Instance *instance /*$s2*/)
 // line 2199, offset 0x8008aafc
	/* begin block 1 */
		// Start line: 2200
		// Start offset: 0x8008AAFC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 2205
			// Start offset: 0x8008AB34
		/* end block 1.1 */
		// End offset: 0x8008AB88
		// End Line: 2210

		/* begin block 1.2 */
			// Start line: 2220
			// Start offset: 0x8008ABD8
			// Variables:
		// 		int markerID; // $s0
		/* end block 1.2 */
		// End offset: 0x8008AC20
		// End Line: 2224

		/* begin block 1.3 */
			// Start line: 2232
			// Start offset: 0x8008AC34
			// Variables:
		// 		struct _Position *target; // $a1
		// 		short range; // $a2
		/* end block 1.3 */
		// End offset: 0x8008AC78
		// End Line: 2246

		/* begin block 1.4 */
			// Start line: 2252
			// Start offset: 0x8008AC88
			// Variables:
		// 		int planresult; // $v1
		// 		int state; // $a1
		/* end block 1.4 */
		// End offset: 0x8008AD18
		// End Line: 2289
	/* end block 1 */
	// End offset: 0x8008AD58
	// End Line: 2297

	/* begin block 2 */
		// Start line: 4673
	/* end block 2 */
	// End Line: 4674

void MON_Wander(_Instance *instance)

{
  uint in_v0;
  int iVar1;
  uint *unaff_s0;
  
  *unaff_s0 = in_v0;
  if ((in_v0 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007fd20(instance,2,2);
  }
  FUN_80082164();
  iVar1 = FUN_8007fd54();
  if (iVar1 == 0) {
    FUN_80080b18();
  }
  *unaff_s0 = *unaff_s0 & 0xfffdffff;
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_HideEntry(struct _Instance *instance /*$a0*/)
 // line 2302, offset 0x8008ad74
	/* begin block 1 */
		// Start line: 4882
	/* end block 1 */
	// End Line: 4883

/* WARNING: Removing unreachable block (ram,0x8008ad98) */
/* WARNING: Removing unreachable block (ram,0x8008ada8) */
/* WARNING: Removing unreachable block (ram,0x8008adb8) */
/* WARNING: Removing unreachable block (ram,0x8008adc0) */
/* WARNING: Removing unreachable block (ram,0x8008add8) */

void MON_HideEntry(_Instance *instance)

{
  undefined4 in_v0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x100) = in_v0;
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Hide(struct _Instance *instance /*$s1*/)
 // line 2308, offset 0x8008ad94
	/* begin block 1 */
		// Start line: 2309
		// Start offset: 0x8008AD94
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $s2
	/* end block 1 */
	// End offset: 0x8008AEF0
	// End Line: 2357

	/* begin block 2 */
		// Start line: 4894
	/* end block 2 */
	// End Line: 4895

void MON_Hide(_Instance *instance)

{
  int iVar1;
  int unaff_s1;
  
  if (*(int *)(unaff_s1 + 0xc4) != 0) {
    iVar1 = FUN_800831c0();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8007f88c();
    }
    *(int *)(unaff_s1 + 0x10c) = *(int *)(*(int *)(unaff_s1 + 0xc4) + 4) + 0x5c;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SurpriseAttackEntry(struct _Instance *instance /*$a0*/)
 // line 2363, offset 0x8008af10
	/* begin block 1 */
		// Start line: 2364
		// Start offset: 0x8008AF10
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterCombatAttributes *combatAttr; // $v0
	// 		struct _MonsterAttributes *ma; // $v1
	/* end block 1 */
	// End offset: 0x8008AF94
	// End Line: 2390

	/* begin block 2 */
		// Start line: 5006
	/* end block 2 */
	// End Line: 5007

void MON_SurpriseAttackEntry(_Instance *instance)

{
  uint *unaff_s0;
  int unaff_s1;
  
  *unaff_s0 = *unaff_s0 | 0x40000000;
  if ((*(uint *)(unaff_s1 + 0x18) & 0x10) != 0) {
    if ((*unaff_s0 & 0x40000000) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8007f88c();
    }
    FUN_80080b18();
  }
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_SurpriseAttack(struct _Instance *instance /*$a0*/)
 // line 2392, offset 0x8008afa4
	/* begin block 1 */
		// Start line: 5075
	/* end block 1 */
	// End Line: 5076

void MON_SurpriseAttack(_Instance *instance)

{
  char cVar1;
  int iVar2;
  int unaff_s0;
  
  cVar1 = *(char *)(*(int *)(*(int *)(unaff_s0 + 0x154) + 8) + 0x1f);
  iVar2 = *(int *)((int)instance->data + 0x38);
  *(undefined *)(unaff_s0 + 0x14b) = 0;
  iVar2 = iVar2 + (int)cVar1 * 0x20;
  *(int *)(unaff_s0 + 0xb8) = iVar2;
  FUN_8007fc04(instance,iVar2 + 0x1b,0,1);
  if (*(char *)(unaff_s0 + 0x146) == '\b') {
    if (*(char *)(unaff_s0 + 0x149) == -1) {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x147);
    }
    else {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x149);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_EnvironmentDamageEntry(struct _Instance *instance /*$a0*/)
 // line 2400, offset 0x8008afc4
	/* begin block 1 */
		// Start line: 5091
	/* end block 1 */
	// End Line: 5092

	/* begin block 2 */
		// Start line: 5092
	/* end block 2 */
	// End Line: 5093

void MON_EnvironmentDamageEntry(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int iVar1;
  int unaff_s0;
  
  *(undefined *)(unaff_s0 + 0x14b) = 0;
  iVar1 = in_v1 + in_v0 * 0x20;
  *(int *)(unaff_s0 + 0xb8) = iVar1;
  FUN_8007fc04(instance,iVar1 + 0x1b);
  if (*(char *)(unaff_s0 + 0x146) == '\b') {
    if (*(char *)(unaff_s0 + 0x149) == -1) {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x147);
    }
    else {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x149);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_EnvironmentDamage(struct _Instance *instance /*$a0*/)
 // line 2404, offset 0x8008afcc
	/* begin block 1 */
		// Start line: 5099
	/* end block 1 */
	// End Line: 5100

	/* begin block 2 */
		// Start line: 5100
	/* end block 2 */
	// End Line: 5101

void MON_EnvironmentDamage(_Instance *instance)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0xb8) = in_v1 + in_v0;
  FUN_8007fc04(instance,in_v1 + in_v0 + 0x1b);
  if (*(char *)(unaff_s0 + 0x146) == '\b') {
    if (*(char *)(unaff_s0 + 0x149) == -1) {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x147);
    }
    else {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x149);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_MonsterGlow(struct _Instance *instance /*$fp*/, long color /*stack 4*/, int glowtime /*$s5*/, int glowin /*$s6*/, int glowfade /*stack 16*/)
 // line 2408, offset 0x8008afd4
	/* begin block 1 */
		// Start line: 2409
		// Start offset: 0x8008AFD4
		// Variables:
	// 		struct _FXGlowEffect *glow; // $v0
	// 		struct _MonsterAttributes *ma; // $s4
	/* end block 1 */
	// End offset: 0x8008B03C
	// End Line: 2417

	/* begin block 2 */
		// Start line: 5107
	/* end block 2 */
	// End Line: 5108

void MON_MonsterGlow(_Instance *instance,long color,int glowtime,int glowin,int glowfade)

{
  int in_v1;
  int unaff_s0;
  
  FUN_8007fc04(instance,in_v1 + 0x1b);
  if (*(char *)(unaff_s0 + 0x146) == '\b') {
    if (*(char *)(unaff_s0 + 0x149) == -1) {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x147);
    }
    else {
      *(undefined *)(unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x149);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GeneralDeathEntry(struct _Instance *instance /*$s1*/)
 // line 2436, offset 0x8008b160
	/* begin block 1 */
		// Start line: 2437
		// Start offset: 0x8008B160
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s2
	/* end block 1 */
	// End offset: 0x8008B37C
	// End Line: 2511

	/* begin block 2 */
		// Start line: 5171
	/* end block 2 */
	// End Line: 5172

void MON_GeneralDeathEntry(_Instance *instance)

{
  int iVar1;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  undefined2 unaff_s7;
  
  iVar1 = FUN_8004b040();
  *(undefined2 *)(iVar1 + 0xe) = unaff_s5;
  *(undefined2 *)(iVar1 + 0x28) = unaff_s6;
  *(undefined2 *)(iVar1 + 0x2a) = unaff_s7;
  iVar1 = FUN_8004b040();
  *(undefined2 *)(iVar1 + 0xe) = unaff_s5;
  *(undefined2 *)(iVar1 + 0x28) = unaff_s6;
  *(undefined2 *)(iVar1 + 0x2a) = unaff_s7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_GeneralDeath(struct _Instance *instance /*$s1*/)
 // line 2524, offset 0x8008b3ac
	/* begin block 1 */
		// Start line: 2525
		// Start offset: 0x8008B3AC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct __Event *message; // $v0
	// 		int dead; // $s2
	/* end block 1 */
	// End offset: 0x8008B508
	// End Line: 2578

	/* begin block 2 */
		// Start line: 5359
	/* end block 2 */
	// End Line: 5360

void MON_GeneralDeath(_Instance *instance)

{
  FUN_80084344();
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_NoticeEntry(struct _Instance *instance /*$s1*/)
 // line 2583, offset 0x8008b524
	/* begin block 1 */
		// Start line: 2584
		// Start offset: 0x8008B524
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008B5C8
	// End Line: 2596

	/* begin block 2 */
		// Start line: 5481
	/* end block 2 */
	// End Line: 5482

void MON_NoticeEntry(_Instance *instance)

{
  uint in_v0;
  uint **ppuVar1;
  uint in_v1;
  uint *unaff_s0;
  int unaff_s1;
  
  *unaff_s0 = in_v0 & in_v1;
  ppuVar1 = (uint **)(*unaff_s0 & 2);
  if (ppuVar1 == (uint **)0x0) {
    ppuVar1 = (uint **)FUN_80081184();
  }
  while (PurgeMessageQueue((__MessageQueue *)(unaff_s0 + 2)), ppuVar1 != (uint **)0x0) {
    ppuVar1 = (uint **)*ppuVar1;
    if (ppuVar1 == (uint **)0x100000b) {
      *(undefined4 *)(unaff_s1 + 0x160) = 0;
      *(undefined4 *)(unaff_s1 + 0x164) = 0;
      *(undefined4 *)(unaff_s1 + 0x168) = 0xfffffff0;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Notice(struct _Instance *instance /*$s1*/)
 // line 2598, offset 0x8008b5dc
	/* begin block 1 */
		// Start line: 2599
		// Start offset: 0x8008B5DC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008B660
	// End Line: 2616

	/* begin block 2 */
		// Start line: 5511
	/* end block 2 */
	// End Line: 5512

void MON_Notice(_Instance *instance)

{
  int in_v0;
  
  if (*(int *)(in_v0 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007fd20(instance,0x2a,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PupateEntry(struct _Instance *instance /*$a0*/)
 // line 2622, offset 0x8008b67c
	/* begin block 1 */
		// Start line: 2623
		// Start offset: 0x8008B67C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8008B67C
	// End Line: 2623

	/* begin block 2 */
		// Start line: 5561
	/* end block 2 */
	// End Line: 5562

void MON_PupateEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
  if (*(int *)(unaff_s0 + 0xc4) != 0) {
    *(int *)(unaff_s0 + 0x10c) = *(int *)(*(int *)(unaff_s0 + 0xc4) + 4) + 0x5c;
    FUN_80080fe0();
  }
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Pupate(struct _Instance *instance /*$s2*/)
 // line 2632, offset 0x8008b6dc
	/* begin block 1 */
		// Start line: 2633
		// Start offset: 0x8008B6DC
		// Variables:
	// 		struct _MonsterVars *mv; // $s3

		/* begin block 1.1 */
			// Start line: 2639
			// Start offset: 0x8008B71C
			// Variables:
		// 		struct _MonsterAttributes *ma; // $s0
		// 		static unsigned char pupateObjects[4]; // offset 0x0
		// 		struct Object *cocoonOb; // $s6
		// 		struct _Instance *cocoon; // $s1
		// 		struct _Instance *closest; // $s4
		// 		long closestDist; // $s5
		// 		int burst; // $s7

			/* begin block 1.1.1 */
				// Start line: 2657
				// Start offset: 0x8008B79C
				// Variables:
			// 		long dist; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8008B89C
			// End Line: 2675
		/* end block 1.1 */
		// End offset: 0x8008B988
		// End Line: 2712
	/* end block 1 */
	// End offset: 0x8008B9F0
	// End Line: 2728

	/* begin block 2 */
		// Start line: 5586
	/* end block 2 */
	// End Line: 5587

void MON_Pupate(_Instance *instance)

{
  FUN_80085a94();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_EmbraceEntry(struct _Instance *instance /*$s0*/)
 // line 2733, offset 0x8008ba1c
	/* begin block 1 */
		// Start line: 2734
		// Start offset: 0x8008BA1C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8008BA1C
	// End Line: 2734

	/* begin block 2 */
		// Start line: 5823
	/* end block 2 */
	// End Line: 5824

void MON_EmbraceEntry(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Embrace(struct _Instance *instance /*$s3*/)
 // line 2742, offset 0x8008ba7c
	/* begin block 1 */
		// Start line: 2743
		// Start offset: 0x8008BA7C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *enemy; // $s1

		/* begin block 1.1 */
			// Start line: 2758
			// Start offset: 0x8008BB24
			// Variables:
		// 		struct _Instance *ei; // $s2
		/* end block 1.1 */
		// End offset: 0x8008BB78
		// End Line: 2762
	/* end block 1 */
	// End offset: 0x8008BBE0
	// End Line: 2773

	/* begin block 2 */
		// Start line: 5844
	/* end block 2 */
	// End Line: 5845

void MON_Embrace(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_PetrifiedEntry(struct _Instance *instance /*$a0*/)
 // line 2857, offset 0x8008bbfc
	/* begin block 1 */
		// Start line: 2858
		// Start offset: 0x8008BBFC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008BBFC
	// End Line: 2858

	/* begin block 2 */
		// Start line: 5714
	/* end block 2 */
	// End Line: 5715

void MON_PetrifiedEntry(_Instance *instance)

{
  uint in_a1;
  int in_a2;
  
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,in_a1 | 0x16,in_a2 >> 3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_Petrified(struct _Instance *instance /*$s1*/)
 // line 2865, offset 0x8008bc38
	/* begin block 1 */
		// Start line: 2866
		// Start offset: 0x8008BC38
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct __Event *message; // $v0
	// 		int time; // $v1
	/* end block 1 */
	// End offset: 0x8008BD20
	// End Line: 2889

	/* begin block 2 */
		// Start line: 6006
	/* end block 2 */
	// End Line: 6007

void MON_Petrified(_Instance *instance)

{
  int unaff_s1;
  int unaff_s3;
  
  if ((unaff_s1 != 0) && (*(int *)(unaff_s3 + 0x178) != 0x1b)) {
    *(ushort *)(unaff_s1 + 0x16) = *(ushort *)(unaff_s1 + 0x16) & 0xefff;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSTER_CalcDamageIntensity(int hp /*$a0*/, int maxHp /*$a1*/)
 // line 2897, offset 0x8008bd44
	/* begin block 1 */
		// Start line: 6074
	/* end block 1 */
	// End Line: 6075

	/* begin block 2 */
		// Start line: 6075
	/* end block 2 */
	// End Line: 6076

int MONSTER_CalcDamageIntensity(int hp,int maxHp)

{
  uint *in_v0;
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  
  do {
    PurgeMessageQueue((__MessageQueue *)(unaff_s0 + 8));
    if (in_v0 == (uint *)0x0) {
      return 0;
    }
  } while ((*in_v0 != unaff_s3) &&
          ((*in_v0 != (unaff_s2 | 0x23) ||
           (in_v0 = (uint *)in_v0[1], in_v0 != (uint *)&DAT_00001000))));
  *(undefined2 *)(unaff_s0 + 0x140) = 0x400;
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSTER_ProcessClosestVerts(struct _Instance *instance /*$fp*/, struct _SVector *location /*stack 4*/, TDRFuncPtr_MONSTER_ProcessClosestVerts2processVert_cb processVert_cb /*stack 8*/, void *cb_data /*stack 12*/)
 // line 2907, offset 0x8008bd5c
	/* begin block 1 */
		// Start line: 2908
		// Start offset: 0x8008BD5C
		// Variables:
	// 		int i; // $s2
	// 		struct _Model *model; // $s7
	// 		struct _MVertex *vertexList; // $s4
	// 		struct _Vector locVec; // stack offset -96
	// 		long flag; // stack offset -48

		/* begin block 1.1 */
			// Start line: 2925
			// Start offset: 0x8008BDE0
			// Variables:
		// 		struct _MVertex *firstVertex; // $s0
		// 		struct _MVertex *lastVertex; // $s5
		// 		struct _MVertex *modelVertex; // $s0
		// 		struct MATRIX inverse; // stack offset -80
		// 		int tmp; // $a3
		// 		int dist; // $a0
		/* end block 1.1 */
		// End offset: 0x8008BEDC
		// End Line: 2958
	/* end block 1 */
	// End offset: 0x8008BEF4
	// End Line: 2960

	/* begin block 2 */
		// Start line: 6094
	/* end block 2 */
	// End Line: 6095

void MONSTER_ProcessClosestVerts
               (_Instance *instance,_SVector *location,
               TDRFuncPtr_MONSTER_ProcessClosestVerts2processVert_cb processVert_cb,void *cb_data)

{
  int *in_v0;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  int *unaff_s5;
  
  while ((*in_v0 != unaff_s3 &&
         ((*in_v0 != unaff_s2 || (in_v0 = (int *)in_v0[1], in_v0 != unaff_s5))))) {
    PurgeMessageQueue((__MessageQueue *)(unaff_s0 + 8));
    if (in_v0 == (int *)0x0) {
      return;
    }
  }
  *(undefined2 *)(unaff_s0 + 0x140) = unaff_s4;
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessBloodyMess(struct _Instance *instance /*$a0*/, int vertidx /*$a1*/, int segidx /*$a2*/, int dist /*$a3*/, void *cb_data /*stack 16*/)
 // line 2967, offset 0x8008bf24
	/* begin block 1 */
		// Start line: 2968
		// Start offset: 0x8008BF24
		// Variables:
	// 		struct _MonsterVars *mv; // $t0

		/* begin block 1.1 */
			// Start line: 2988
			// Start offset: 0x8008BF54
			// Variables:
		// 		long scl; // $a2
		// 		struct CVECTOR *cv; // $a0
		/* end block 1.1 */
		// End offset: 0x8008C028
		// End Line: 3014
	/* end block 1 */
	// End offset: 0x8008C028
	// End Line: 3015

	/* begin block 2 */
		// Start line: 6288
	/* end block 2 */
	// End Line: 6289

void ProcessBloodyMess(_Instance *instance,int vertidx,int segidx,int dist,void *cb_data)

{
  short *psVar1;
  uint unaff_s0;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s5;
  int unaff_s7;
  code *in_stack_00000080;
  
  do {
    (*in_stack_00000080)();
    unaff_s0 = unaff_s0 + 8;
  } while (unaff_s0 <= unaff_s5);
  do {
    unaff_s2 = unaff_s2 + 1;
    if (*(int *)(unaff_s7 + 0x18) <= unaff_s2) {
      return;
    }
    psVar1 = (short *)(unaff_s3 + 0x1a);
    unaff_s3 = unaff_s3 + 0x18;
  } while (*psVar1 == -1);
  FUN_8003a58c();
  FUN_800bce3c();
                    /* WARNING: Subroutine does not return */
  FUN_800bce1c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSTER_InitVertexColors(struct _Instance *instance /*$s1*/, struct _Model *model /*$s0*/)
 // line 3017, offset 0x8008c030
	/* begin block 1 */
		// Start line: 3018
		// Start offset: 0x8008C030
		// Variables:
	// 		int i; // $s0
	// 		struct CVECTOR *ptr; // $v0
	/* end block 1 */
	// End offset: 0x8008C084
	// End Line: 3027

	/* begin block 2 */
		// Start line: 6403
	/* end block 2 */
	// End Line: 6404

void MONSTER_InitVertexColors(_Instance *instance,_Model *model)

{
  byte bVar1;
  int in_v0;
  int in_v1;
  int in_a2;
  int in_t0;
  int in_t1;
  
  *(byte *)&(instance->node).prev = ~(byte)((uint)((in_v1 - in_v0) * in_a2) >> 8);
  *(byte *)((int)&(instance->node).prev + 1) =
       ~(byte)((in_v1 - (uint)*(byte *)(*(int *)(in_t0 + 0x154) + 0x40)) * in_a2 >> 8);
  bVar1 = *(byte *)(*(int *)(in_t0 + 0x154) + 0x41);
  *(undefined *)((int)&(instance->node).prev + 3) = 1;
  *(byte *)((int)&(instance->node).prev + 2) = ~(byte)((in_v1 - (uint)bVar1) * in_a2 >> 8);
  *(undefined4 *)(in_t1 + 0xc) = 1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSTER_StartVertexBlood(struct _Instance *instance /*$s2*/, struct _SVector *location /*$s0*/, int amount /*$s4*/)
 // line 3029, offset 0x8008c098
	/* begin block 1 */
		// Start line: 3030
		// Start offset: 0x8008C098
		// Variables:
	// 		struct _Model *model; // $s1
	// 		struct bloodyMessType bmt; // stack offset -88

		/* begin block 1.1 */
			// Start line: 3041
			// Start offset: 0x8008C0FC
			// Variables:
		// 		struct _SVector localloc; // stack offset -64

			/* begin block 1.1.1 */
				// Start line: 3052
				// Start offset: 0x8008C16C
				// Variables:
			// 		struct _MVertex *vertexList; // $s1
			// 		struct _Vector locVec; // stack offset -56
			// 		long flag; // stack offset -40
			// 		struct MATRIX *segMatrix; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8008C16C
			// End Line: 3052
		/* end block 1.1 */
		// End offset: 0x8008C1FC
		// End Line: 3075
	/* end block 1 */
	// End offset: 0x8008C1FC
	// End Line: 3079

	/* begin block 2 */
		// Start line: 6428
	/* end block 2 */
	// End Line: 6429

int MONSTER_StartVertexBlood(_Instance *instance,_SVector *location,int amount)

{
  byte in_v0;
  int in_t1;
  
  *(byte *)((int)&(instance->node).prev + 2) = ~in_v0;
  *(undefined4 *)(in_t1 + 0xc) = 1;
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSTER_VertexBlood(struct _Instance *instance /*$s0*/, int vert /*$a1*/, int amount /*$a2*/)
 // line 3081, offset 0x8008c220
	/* begin block 1 */
		// Start line: 3082
		// Start offset: 0x8008C220
		// Variables:
	// 		int i; // $v1
	// 		struct _Model *model; // $t0

		/* begin block 1.1 */
			// Start line: 3088
			// Start offset: 0x8008C254
			// Variables:
		// 		struct CVECTOR *c; // $a3

			/* begin block 1.1.1 */
				// Start line: 3097
				// Start offset: 0x8008C26C
				// Variables:
			// 		struct _MonsterVars *mv; // $v1
			// 		int current; // $a1
			// 		int wanted; // $a0
			// 		int col; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8008C3DC
			// End Line: 3155
		/* end block 1.1 */
		// End offset: 0x8008C3DC
		// End Line: 3156
	/* end block 1 */
	// End offset: 0x8008C3DC
	// End Line: 3157

	/* begin block 2 */
		// Start line: 6563
	/* end block 2 */
	// End Line: 6564

void MONSTER_VertexBlood(_Instance *instance,int vert,int amount)

{
  int unaff_s1;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  
  FUN_800bd754((int)&(instance->node).prev + unaff_s1);
  uStack0000001c = 1;
  uStack00000014 = 0;
  FUN_8004a0c8();
  FUN_8008bddc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessBurntMess(struct _Instance *instance /*$a0*/, int vertidx /*$a1*/, int segidx /*$a2*/, int dist /*$a3*/, void *cb_data /*stack 16*/)
 // line 3164, offset 0x8008c3ec
	/* begin block 1 */
		// Start line: 3165
		// Start offset: 0x8008C3EC
		// Variables:
	// 		short scl; // $a2
	// 		struct burntTuneType *burntTune; // $t0
	/* end block 1 */
	// End offset: 0x8008C450
	// End Line: 3185

	/* begin block 2 */
		// Start line: 6758
	/* end block 2 */
	// End Line: 6759

void ProcessBurntMess(_Instance *instance,int vertidx,int segidx,int dist,void *cb_data)

{
  int in_v1;
  _Instance *instance_00;
  byte in_t0;
  uint in_t1;
  
  while( true ) {
    if ((uint)((byte *)vertidx)[-2] + 8 < 0x100) {
      ((byte *)vertidx)[-2] = (byte)((uint)((byte *)vertidx)[-2] + 8);
    }
    else {
      ((byte *)vertidx)[-2] = in_t0;
    }
    if ((uint)((byte *)vertidx)[-1] + 8 < 0x100) {
      ((byte *)vertidx)[-1] = (byte)((uint)((byte *)vertidx)[-1] + 8);
    }
    else {
      ((byte *)vertidx)[-1] = in_t0;
    }
    if ((*(uint *)dist & segidx) == segidx) {
      *(byte *)vertidx = 0;
    }
    do {
      in_v1 = in_v1 + -1;
      vertidx = (int)((byte *)vertidx + 4);
      dist = (int)((uint *)dist + 1);
      if (in_v1 == 0) {
        return;
      }
    } while ((uint)*(byte *)vertidx != in_t1);
    instance_00 = (_Instance *)((uint)*(byte *)dist + 8);
    if ((_Instance *)0xff < instance_00) break;
    *(byte *)dist = (byte)instance_00;
  }
  *(byte *)dist = in_t0;
  ProcessBurntMess(instance_00,vertidx,segidx,dist,cb_data);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSTER_StartVertexBurnt(struct _Instance *instance /*$s2*/, struct _SVector *location /*$s4*/, struct burntTuneType *burntTune /*$s0*/)
 // line 3195, offset 0x8008c498
	/* begin block 1 */
		// Start line: 3196
		// Start offset: 0x8008C498
		// Variables:
	// 		struct _Model *model; // $s1
	// 		struct burntMessType bmt; // stack offset -80

		/* begin block 1.1 */
			// Start line: 3206
			// Start offset: 0x8008C4FC
			// Variables:
		// 		struct _SVector localloc; // stack offset -64

			/* begin block 1.1.1 */
				// Start line: 3216
				// Start offset: 0x8008C56C
				// Variables:
			// 		struct _MVertex *vertexList; // $s1
			// 		struct _Vector locVec; // stack offset -56
			// 		long flag; // stack offset -40
			// 		struct MATRIX *segMatrix; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8008C56C
			// End Line: 3216
		/* end block 1.1 */
		// End offset: 0x8008C5F4
		// End Line: 3237
	/* end block 1 */
	// End offset: 0x8008C5F4
	// End Line: 3240

	/* begin block 2 */
		// Start line: 6822
	/* end block 2 */
	// End Line: 6823

int MONSTER_StartVertexBurnt(_Instance *instance,_SVector *location,burntTuneType *burntTune)

{
  uchar uVar1;
  int in_v1;
  int in_a3;
  
  if ((in_v1 <= in_a3) ||
     (_uVar1 = ((in_a3 << 0xc) / in_v1 << 0x10) >> 0x14, uVar1 = (uchar)_uVar1, 0xfe < _uVar1)) {
    uVar1 = -2;
  }
  instance->perVertexColor[(int)location].r = uVar1;
  instance->perVertexColor[(int)location].g = uVar1;
  instance->perVertexColor[(int)location].b = uVar1;
  instance->perVertexColor[(int)location].cd = '\x01';
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSTER_VertexBurnt(struct _Instance *instance /*$a0*/, struct burntTuneType *burntTune /*$a1*/)
 // line 3242, offset 0x8008c618
	/* begin block 1 */
		// Start line: 3244
		// Start offset: 0x8008C618
		// Variables:
	// 		int i; // $a3
	// 		int fade; // $a2
	// 		struct _Model *model; // $t0

		/* begin block 1.1 */
			// Start line: 3253
			// Start offset: 0x8008C650
			// Variables:
		// 		struct CVECTOR *c; // $v1
		/* end block 1.1 */
		// End offset: 0x8008C6A4
		// End Line: 3262
	/* end block 1 */
	// End offset: 0x8008C6BC
	// End Line: 3265

	/* begin block 2 */
		// Start line: 6940
	/* end block 2 */
	// End Line: 6941

	/* begin block 3 */
		// Start line: 6941
	/* end block 3 */
	// End Line: 6942

	/* begin block 4 */
		// Start line: 6942
	/* end block 4 */
	// End Line: 6943

void MONSTER_VertexBurnt(_Instance *instance,burntTuneType *burntTune)

{
  int unaff_s1;
  undefined4 uStack00000014;
  
  FUN_800bd754(unaff_s1 + (int)instance * 8,burntTune,&stack0x00000038);
  uStack00000014 = 0;
  FUN_8004a0c8();
  FUN_8008bddc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_DamageEffect(struct _Instance *instance /*$s2*/, struct evFXHitData *data /*$s0*/)
 // line 3272, offset 0x8008c6c4
	/* begin block 1 */
		// Start line: 3273
		// Start offset: 0x8008C6C4
		// Variables:
	// 		struct _SVector accel; // stack offset -104
	// 		struct _MonsterVars *mv; // $s4

		/* begin block 1.1 */
			// Start line: 3289
			// Start offset: 0x8008C720
			// Variables:
		// 		struct _MonsterAttributes *ma; // $s3

			/* begin block 1.1.1 */
				// Start line: 3293
				// Start offset: 0x8008C740
				// Variables:
			// 		struct MATRIX *mat; // $s1
			// 		struct _SVector location; // stack offset -96
			// 		struct _SVector vel; // stack offset -88
			// 		struct _SVector accel; // stack offset -80
			/* end block 1.1.1 */
			// End offset: 0x8008C81C
			// End Line: 3308

			/* begin block 1.1.2 */
				// Start line: 3312
				// Start offset: 0x8008C834
				// Variables:
			// 		struct MATRIX *mat; // $s0
			// 		struct _SVector location; // stack offset -72
			// 		struct _SVector vel; // stack offset -64
			/* end block 1.1.2 */
			// End offset: 0x8008C894
			// End Line: 3321

			/* begin block 1.1.3 */
				// Start line: 3325
				// Start offset: 0x8008C8A8
				// Variables:
			// 		struct Object *flame; // $v0

				/* begin block 1.1.3.1 */
					// Start line: 3332
					// Start offset: 0x8008C8B8
					// Variables:
				// 		struct _Model *model; // $s0
				/* end block 1.1.3.1 */
				// End offset: 0x8008C910
				// End Line: 3338
			/* end block 1.1.3 */
			// End offset: 0x8008C91C
			// End Line: 3340

			/* begin block 1.1.4 */
				// Start line: 3345
				// Start offset: 0x8008C95C
				// Variables:
			// 		struct MATRIX *mat; // $s0
			// 		struct _SVector location; // stack offset -56
			// 		struct _SVector vel; // stack offset -48
			// 		struct _SVector accel; // stack offset -40
			// 		int n; // $s1
			// 		int cnt; // $s4
			/* end block 1.1.4 */
			// End offset: 0x8008CA5C
			// End Line: 3364
		/* end block 1.1 */
		// End offset: 0x8008CA5C
		// End Line: 3365
	/* end block 1 */
	// End offset: 0x8008CB04
	// End Line: 3387

	/* begin block 2 */
		// Start line: 7012
	/* end block 2 */
	// End Line: 7013

void MON_DamageEffect(_Instance *instance,evFXHitData *data)

{
  char cVar1;
  int in_v0;
  CVECTOR *pCVar2;
  int in_a2;
  int iVar3;
  int *in_t0;
  
  iVar3 = 0;
  if (0 < in_v0) {
    do {
      pCVar2 = instance->perVertexColor + iVar3;
      cVar1 = (char)in_a2;
      if (in_a2 <= (int)(uint)pCVar2->r) {
        pCVar2->r = pCVar2->r - cVar1;
      }
      if (in_a2 <= (int)(uint)pCVar2->g) {
        pCVar2->g = pCVar2->g - cVar1;
      }
      if (in_a2 <= (int)(uint)pCVar2->b) {
        pCVar2->b = pCVar2->b - cVar1;
      }
      pCVar2->cd = '\0';
      iVar3 = iVar3 + 1;
    } while (iVar3 < *in_t0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_DefaultInit(struct _Instance *instance /*$s2*/)
 // line 3392, offset 0x8008cb28
	/* begin block 1 */
		// Start line: 3393
		// Start offset: 0x8008CB28
		// Variables:
	// 		struct _MonsterAttributes *ma; // $s1
	// 		struct _MonsterVars *mv; // $s3
	// 		struct _HModel *hModel; // $v0
	// 		struct _HPrim *hprim; // $v0
	// 		int i; // $a0
	// 		int state; // $a1

		/* begin block 1.1 */
			// Start line: 3440
			// Start offset: 0x8008CC84
			// Variables:
		// 		struct Level *level; // $s0
		/* end block 1.1 */
		// End offset: 0x8008CCEC
		// End Line: 3448
	/* end block 1 */
	// End offset: 0x8008CD50
	// End Line: 3466

	/* begin block 2 */
		// Start line: 7299
	/* end block 2 */
	// End Line: 7300

void MON_DefaultInit(void)

{
  int unaff_s0;
  undefined *param_5;
  undefined4 param_6;
  
  if (*(short *)(unaff_s0 + 0x10) != 0) {
    param_5 = &DAT_001800d0;
    param_6 = 8;
    FUN_80048550();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MON_CleanUp(struct _Instance *instance /*$s2*/)
 // line 3472, offset 0x8008cd74
	/* begin block 1 */
		// Start line: 3473
		// Start offset: 0x8008CD74
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s1
	/* end block 1 */
	// End offset: 0x8008CE70
	// End Line: 3515

	/* begin block 2 */
		// Start line: 7473
	/* end block 2 */
	// End Line: 7474

void MON_CleanUp(_Instance *instance)

{
  char cVar1;
  uint in_v0;
  int unaff_s3;
  
  if (((((in_v0 & 2) == 0) && (cVar1 = *(char *)(unaff_s3 + 0x146), cVar1 != '\x04')) &&
      (cVar1 != '\x10')) && (cVar1 == '\r')) {
    *(undefined2 *)(unaff_s3 + 0x140) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}





