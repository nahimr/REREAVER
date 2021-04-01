#include "THISDUST.H"
#include "SOUL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_QueueHandler(struct _Instance *instance /*$s0*/)
 // line 80, offset 0x8008d6d4
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x8008D6D4
		// Variables:
	// 		struct _MonsterVars *mv; // $s2
	// 		struct __Event *message; // $a1
	/* end block 1 */
	// End offset: 0x8008D754
	// End Line: 95

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

void SOUL_QueueHandler(_Instance *instance)

{
  int in_v0;
  undefined4 uVar1;
  int in_v1;
  int unaff_s1;
  
  if ((in_v1 == in_v0) && (*(int *)(unaff_s1 + 0xc4) != 0)) {
    uVar1 = FUN_80070a58();
                    /* WARNING: Subroutine does not return */
    FUN_80034368(*(undefined4 *)(*(int *)(unaff_s1 + 0xc4) + 4),0x1000009,uVar1);
  }
  *(uint *)(unaff_s1 + 4) = *(uint *)(unaff_s1 + 4) & 0xfffffffb;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Physics(struct _Instance *instance /*$a0*/, long time /*$a2*/)
 // line 100, offset 0x8008d770
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x8008D770
		// Variables:
	// 		struct _MonsterVars *mv; // $v1
	// 		int a; // $a1
	/* end block 1 */
	// End offset: 0x8008D79C
	// End Line: 114

	/* begin block 2 */
		// Start line: 208
	/* end block 2 */
	// End Line: 209

void SOUL_Physics(_Instance *instance,long time)

{
  int *in_v0;
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = *(int *)(unaff_s0 + 0x14c);
  do {
    while( true ) {
      PurgeMessageQueue((__MessageQueue *)(iVar1 + 8));
      if (in_v0 == (int *)0x0) {
        return;
      }
      if (*in_v0 == unaff_s1) break;
      in_v0 = (int *)FUN_80084c04();
    }
    in_v0 = *(int **)(unaff_s0 + 0x178);
  } while (in_v0 == (int *)&DAT_00000017);
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Fade(struct _Instance *instance /*$s0*/)
 // line 120, offset 0x8008d7d0
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x8008D7D0
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		unsigned long time; // $a0
	/* end block 1 */
	// End offset: 0x8008D870
	// End Line: 145

	/* begin block 2 */
		// Start line: 251
	/* end block 2 */
	// End Line: 252

void SOUL_Fade(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_MoveToDest(struct _Instance *instance /*$a3*/, long maxAccel /*$t0*/, long time /*$a2*/)
 // line 147, offset 0x8008d884
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x8008D884
		// Variables:
	// 		struct _MonsterVars *mv; // $a1
	/* end block 1 */
	// End offset: 0x8008D958
	// End Line: 158

	/* begin block 2 */
		// Start line: 305
	/* end block 2 */
	// End Line: 306

void SOUL_MoveToDest(_Instance *instance,long maxAccel,long time)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  
  if (*(_Instance **)(unaff_s1 + 0xf8) < instance) {
    sVar1 = *(short *)(unaff_s0 + 0xec);
    if (sVar1 == 0) {
      FUN_80084050();
      sVar1 = *(short *)(unaff_s0 + 0xec);
    }
    if (0xfff < sVar1) {
      *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) | 0x8000000;
      FUN_8005c1cc();
      *(undefined2 *)(unaff_s0 + 0xec) = 0;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_MovePastWall(struct _Instance *instance /*$s2*/, struct _Instance *sucker /*$a1*/)
 // line 162, offset 0x8008d974
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x8008D974
		// Variables:
	// 		struct _PCollideInfo pcollideInfo; // stack offset -88
	// 		struct _Position newPos; // stack offset -40
	// 		struct _Position oldPos; // stack offset -32
	// 		struct _Position delta; // stack offset -24
	// 		struct MATRIX *to; // $a0
	// 		struct MATRIX *from; // $v1
	// 		long tmp; // $v0

		/* begin block 1.1 */
			// Start line: 163
			// Start offset: 0x8008D974
			// Variables:
		// 		short _y0; // $v0
		// 		short _z0; // $a0
		// 		short _y1; // $a1
		// 		short _z1; // $a2
		// 		struct _Position *_v; // $s0
		// 		struct _Position *_v0; // $s1
		// 		struct _Position *_v1; // $t0
		/* end block 1.1 */
		// End offset: 0x8008D974
		// End Line: 163

		/* begin block 1.2 */
			// Start line: 188
			// Start offset: 0x8008DA58
			// Variables:
		// 		short _x0; // $v0
		// 		short _y0; // $v1
		// 		short _z0; // $a2
		// 		short _x1; // $a3
		// 		short _y1; // $t1
		// 		short _z1; // $t0
		// 		struct _Position *_v1; // $t0
		/* end block 1.2 */
		// End offset: 0x8008DA58
		// End Line: 188
	/* end block 1 */
	// End offset: 0x8008DACC
	// End Line: 201

	/* begin block 2 */
		// Start line: 336
	/* end block 2 */
	// End Line: 337

void SOUL_MovePastWall(_Instance *instance,_Instance *sucker)

{
  undefined4 in_v1;
  int in_a3;
  int in_t0;
  
  *(undefined4 *)(in_a3 + 0x160) = in_v1;
  if (*(int *)(in_a3 + 0x164) < -in_t0) {
    *(int *)(in_a3 + 0x164) = -in_t0;
  }
  else {
    if (in_t0 < *(int *)(in_a3 + 0x164)) {
      *(int *)(in_a3 + 0x164) = in_t0;
    }
  }
  if (*(int *)(in_a3 + 0x168) < -in_t0) {
    *(int *)(in_a3 + 0x168) = -in_t0;
  }
  else {
    if (in_t0 < *(int *)(in_a3 + 0x168)) {
      *(int *)(in_a3 + 0x168) = in_t0;
    }
  }
  FUN_8008d7f0();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Init(struct _Instance *instance /*$s0*/)
 // line 206, offset 0x8008dae4
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x8008DAE4
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8008DB94
	// End Line: 230

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

void SOUL_Init(_Instance *instance)

{
  short sVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  short sStack00000040;
  undefined4 in_stack_00000040;
  undefined2 in_stack_00000044;
  short sStack00000050;
  
  sVar1 = *(short *)(unaff_s1 + 4);
  sVar2 = *(short *)(unaff_s2 + 0x60);
  sStack00000050 = sStack00000040 - *(short *)(unaff_s2 + 0x5c);
  *(short *)(unaff_s0 + 2) = *(short *)(unaff_s1 + 2) - *(short *)(unaff_s2 + 0x5e);
  *(short *)(unaff_s0 + 4) = sVar1 - sVar2;
  FUN_8001e924();
  FUN_8001e9f4();
  *(undefined4 *)(unaff_s2 + 0x5c) = in_stack_00000040;
  *(undefined2 *)(unaff_s2 + 0x60) = in_stack_00000044;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_CleanUp(struct _Instance *instance /*$a0*/)
 // line 236, offset 0x8008dba8
	/* begin block 1 */
		// Start line: 518
	/* end block 1 */
	// End Line: 519

void SOUL_CleanUp(_Instance *instance)

{
  undefined4 in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s0 + 0x174) = in_v0;
  *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) | 0x20000;
                    /* WARNING: Subroutine does not return */
  *(undefined2 *)(unaff_s1 + 0x110) = 0;
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_BirthEntry(struct _Instance *instance /*$a0*/)
 // line 246, offset 0x8008dbc8
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x8008DBC8
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008DBC8
	// End Line: 247

	/* begin block 2 */
		// Start line: 538
	/* end block 2 */
	// End Line: 539

void SOUL_BirthEntry(_Instance *instance)

{
  undefined4 in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0xf8) = in_v0;
  if (*(int *)(unaff_s0 + 0x2c) != 0) {
    *(undefined4 *)(unaff_s1 + 0xd8) = *(undefined4 *)(*(int *)(unaff_s0 + 0x2c) + 0x3c);
  }
  if ((*(uint *)(unaff_s0 + 0x14) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) | 0x8000000;
    FUN_8007f88c();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Birth(struct _Instance *instance /*$s1*/)
 // line 257, offset 0x8008dc1c
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x8008DC1C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008DC68
	// End Line: 269

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

void SOUL_Birth(_Instance *instance)

{
  return;
}



// autogenerated function stub: 
// void /*$ra*/ SOUL_SoulSuckEntry(struct _Instance *instance /*$a0*/)
void SOUL_SoulSuckEntry(struct _Instance *instance)
{ // line 275, offset 0x8008dc84
	/* begin block 1 */
		// Start line: 603
	/* end block 1 */
	// End Line: 604

	/* begin block 2 */
		// Start line: 606
	/* end block 2 */
	// End Line: 607

}


// decompiled code
// original method signature: 
// long /*$ra*/ SOUL_CalcAccel(long delta /*$a0*/, long vel /*$a1*/, long magnitude /*$a2*/)
 // line 283, offset 0x8008dcac
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x8008DCAC
		// Variables:
	// 		long rv; // $a2
	/* end block 1 */
	// End offset: 0x8008DCE4
	// End Line: 310

	/* begin block 2 */
		// Start line: 616
	/* end block 2 */
	// End Line: 617

	/* begin block 3 */
		// Start line: 621
	/* end block 3 */
	// End Line: 622

	/* begin block 4 */
		// Start line: 622
	/* end block 4 */
	// End Line: 623

	/* begin block 5 */
		// Start line: 628
	/* end block 5 */
	// End Line: 629

long SOUL_CalcAccel(long delta,long vel,long magnitude)

{
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x168) = 0;
  FUN_8008d7f0(delta,gameTrackerX.controlCommand[1][1]);
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// autogenerated function stub: 
// void /*$ra*/ SOUL_SoulSuck(struct _Instance *instance /*$s2*/)
void SOUL_SoulSuck(struct _Instance *instance)
{ // line 313, offset 0x8008dcec
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8008DCEC
		// Variables:
			struct _MonsterVars *mv; // $s3
			struct __Event *message; // $s0
			struct _Instance *sucker; // $s4
			struct _Instance *collidedWith; // $s6
			int collisionCnt; // $s5

		/* begin block 1.1 */
			// Start line: 330
			// Start offset: 0x8008DD98
			// Variables:
				long distance; // $s1
				struct evMonsterSoulSuckData *suckData; // $s0

			/* begin block 1.1.1 */
				// Start line: 357
				// Start offset: 0x8008DEBC
				// Variables:
					struct _SVector dir; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 368
					// Start offset: 0x8008DEF0
					// Variables:
						long animLen; // $s0
						long curTim; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 379
						// Start offset: 0x8008DF88
						// Variables:
							short _x0; // $a3
							short _y0; // $a0
							short _z0; // $v1
							short _x1; // $v0
							short _y1; // $a2
							short _z1; // $a1
							struct _SVector *_v; // $s7
							struct _Position *_v0; // $v1
							struct _Position *_v1; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008DF88
					// End Line: 379
				/* end block 1.1.1.1 */
				// End offset: 0x8008E03C
				// End Line: 389
			/* end block 1.1.1 */
			// End offset: 0x8008E03C
			// End Line: 389
		/* end block 1.1 */
		// End offset: 0x8008E074
		// End Line: 398

		/* begin block 1.2 */
			// Start line: 452
			// Start offset: 0x8008E1E8
			// Variables:
				struct _Instance *body; // $v0
		/* end block 1.2 */
		// End offset: 0x8008E208
		// End Line: 456
	/* end block 1 */
	// End offset: 0x8008E264
	// End Line: 469

	/* begin block 2 */
		// Start line: 681
	/* end block 2 */
	// End Line: 682

}


// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_WanderEntry(struct _Instance *instance /*$a0*/)
 // line 474, offset 0x8008e294
	/* begin block 1 */
		// Start line: 475
		// Start offset: 0x8008E294
		// Variables:
	// 		struct _MonsterVars *mv; // $a2
	/* end block 1 */
	// End offset: 0x8008E2F4
	// End Line: 487

	/* begin block 2 */
		// Start line: 1046
	/* end block 2 */
	// End Line: 1047

void SOUL_WanderEntry(_Instance *instance)

{
  int unaff_s2;
  int unaff_s4;
  
  if (unaff_s4 == 0) {
    if ((*(uint *)(unaff_s2 + 0x18) & 0x20000000) != 0) {
      *(uint *)(unaff_s2 + 0x18) = *(uint *)(unaff_s2 + 0x18) & 0xdfffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Wander(struct _Instance *instance /*$s0*/)
 // line 489, offset 0x8008e304
	/* begin block 1 */
		// Start line: 490
		// Start offset: 0x8008E304
		// Variables:
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 502
			// Start offset: 0x8008E370
		/* end block 1.1 */
		// End offset: 0x8008E420
		// End Line: 515
	/* end block 1 */
	// End offset: 0x8008E478
	// End Line: 530

	/* begin block 2 */
		// Start line: 1076
	/* end block 2 */
	// End Line: 1077

void SOUL_Wander(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_FleeEntry(struct _Instance *instance /*$a0*/)
 // line 536, offset 0x8008e494
	/* begin block 1 */
		// Start line: 1171
	/* end block 1 */
	// End Line: 1172

void SOUL_FleeEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  uint *unaff_s1;
  
  if (in_v0 == 0) {
    *(undefined4 *)(unaff_s0 + 0x164) = 2;
  }
  *(undefined4 *)(unaff_s0 + 0x168) = 0;
  FUN_8008d7f0();
  if ((*unaff_s1 & 4) == 0) {
    if ((*(uint *)(unaff_s0 + 0x18) & 0x8000000) == 0) {
      FUN_8008d850();
    }
    if (unaff_s1[0x31] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8007f88c();
    }
  }
  FUN_8008d754();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Flee(struct _Instance *instance /*$s0*/)
 // line 543, offset 0x8008e4c4
	/* begin block 1 */
		// Start line: 544
		// Start offset: 0x8008E4C4
		// Variables:
	// 		struct _MonsterVars *mv; // $v0

		/* begin block 1.1 */
			// Start line: 553
			// Start offset: 0x8008E500
			// Variables:
		// 		struct _Instance *enemy; // $a0
		// 		int dx; // $s1
		// 		int dy; // $v0
		/* end block 1.1 */
		// End offset: 0x8008E5E4
		// End Line: 568
	/* end block 1 */
	// End offset: 0x8008E614
	// End Line: 574

	/* begin block 2 */
		// Start line: 1186
	/* end block 2 */
	// End Line: 1187

void SOUL_Flee(_Instance *instance)

{
  uint in_v1;
  int unaff_s0;
  int unaff_s1;
  
  if ((*(uint *)(unaff_s0 + 0x18) & in_v1) == 0) {
    FUN_8008d850();
  }
  if (*(int *)(unaff_s1 + 0xc4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
  FUN_8008d754();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_IdleEntry(struct _Instance *instance /*$a0*/)
 // line 579, offset 0x8008e628
	/* begin block 1 */
		// Start line: 580
		// Start offset: 0x8008E628
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	/* end block 1 */
	// End offset: 0x8008E628
	// End Line: 580

	/* begin block 2 */
		// Start line: 1261
	/* end block 2 */
	// End Line: 1262

void SOUL_IdleEntry(_Instance *instance)

{
  undefined4 uVar1;
  int unaff_s0;
  
  if (2 < (int)instance) {
    *(undefined4 *)(unaff_s0 + 0x160) = 2;
  }
  uVar1 = 0xfffffffe;
  if ((*(int *)(unaff_s0 + 0x164) < -2) || (uVar1 = 2, 2 < *(int *)(unaff_s0 + 0x164))) {
    *(undefined4 *)(unaff_s0 + 0x164) = uVar1;
  }
  *(undefined4 *)(unaff_s0 + 0x168) = 0;
  FUN_8008d7f0();
  FUN_8008d754();
  if ((*(uint *)(unaff_s0 + 0x18) & 0x8000000) == 0) {
    FUN_8008d850();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Idle(struct _Instance *instance /*$s0*/)
 // line 587, offset 0x8008e6cc
	/* begin block 1 */
		// Start line: 588
		// Start offset: 0x8008E6CC
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		long xAccl; // $a1
	// 		long yAccl; // $a0
	/* end block 1 */
	// End offset: 0x8008E7B0
	// End Line: 623

	/* begin block 2 */
		// Start line: 1278
	/* end block 2 */
	// End Line: 1279

void SOUL_Idle(_Instance *instance)

{
  long in_v0;
  
                    /* WARNING: Subroutine does not return */
  instance->maxZVel = in_v0;
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_ReanimateEntry(struct _Instance *instance /*$s1*/)
 // line 629, offset 0x8008e7cc
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x8008E7CC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _Instance *body; // $v0
	/* end block 1 */
	// End offset: 0x8008E7CC
	// End Line: 630

	/* begin block 2 */
		// Start line: 1365
	/* end block 2 */
	// End Line: 1366

void SOUL_ReanimateEntry(_Instance *instance)

{
  int in_v0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    FUN_8008d754();
    return;
  }
  if (*(int *)(unaff_s1 + 0xc4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007f88c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Reanimate(struct _Instance *instance /*$s1*/)
 // line 646, offset 0x8008e834
	/* begin block 1 */
		// Start line: 647
		// Start offset: 0x8008E834
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 659
			// Start offset: 0x8008E890
			// Variables:
		// 		struct _Instance *body; // $v0
		/* end block 1.1 */
		// End offset: 0x8008E8B8
		// End Line: 663
	/* end block 1 */
	// End offset: 0x8008E8D8
	// End Line: 671

	/* begin block 2 */
		// Start line: 1401
	/* end block 2 */
	// End Line: 1402

void SOUL_Reanimate(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SOUL_Effect(struct _Instance *instance /*$a0*/, struct evFXHitData *data /*$a1*/)
 // line 676, offset 0x8008e8ec
	/* begin block 1 */
		// Start line: 1465
	/* end block 1 */
	// End Line: 1466

	/* begin block 2 */
		// Start line: 1467
	/* end block 2 */
	// End Line: 1468

void SOUL_Effect(_Instance *instance,evFXHitData *data)

{
  int in_v0;
  
                    /* WARNING: Subroutine does not return */
  FUN_80039564(instance,in_v0 - (int)data);
}





