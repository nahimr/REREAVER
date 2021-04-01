#include "THISDUST.H"
#include "MONSENSE.H"


// decompiled code
// original method signature: 
// struct _MonsterIR * /*$ra*/ MONSENSE_FindIR(struct _MonsterVars *mv /*$a0*/, struct _Instance *instance /*$a1*/)
 // line 64, offset 0x80085aa4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80085AA4
		// Variables:
	// 		struct _MonsterIR *mir; // $v1
	/* end block 1 */
	// End offset: 0x80085AD4
	// End Line: 72

	/* begin block 2 */
		// Start line: 114
	/* end block 2 */
	// End Line: 115

	/* begin block 3 */
		// Start line: 128
	/* end block 3 */
	// End Line: 129

	/* begin block 4 */
		// Start line: 115
	/* end block 4 */
	// End Line: 116

	/* begin block 5 */
		// Start line: 117
	/* end block 5 */
	// End Line: 118

_MonsterIR * MONSENSE_FindIR(_MonsterVars *mv,_Instance *instance)

{
  int in_v0;
  int unaff_s0;
  int iVar1;
  
  iVar1 = *(int *)(unaff_s0 + 0x14c);
  while (PurgeMessageQueue((__MessageQueue *)(iVar1 + 8)), in_v0 != 0) {
    in_v0 = FUN_80084c04();
  }
  return (_MonsterIR *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSENSE_See(struct _Instance *instance /*$s2*/, struct evCollideInstanceStatsData *data /*$s1*/)
 // line 97, offset 0x80085adc
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80085ADC
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	// 		struct _MonsterSenses *senses; // $s0

		/* begin block 1.1 */
			// Start line: 104
			// Start offset: 0x80085B20
			// Variables:
		// 		int arc; // $a1
		// 		int elevation; // $a2

			/* begin block 1.1.1 */
				// Start line: 114
				// Start offset: 0x80085B70
				// Variables:
			// 		struct _Instance *target; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 118
					// Start offset: 0x80085B88
					// Variables:
				// 		struct evPhysicsLOSData losData; // stack offset -40

					/* begin block 1.1.1.1.1 */
						// Start line: 122
						// Start offset: 0x80085B98
						// Variables:
					// 		struct MATRIX *mat; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80085B98
					// End Line: 122

					/* begin block 1.1.1.1.2 */
						// Start line: 128
						// Start offset: 0x80085BD4
						// Variables:
					// 		short _x1; // $v1
					// 		short _y1; // $a0
					// 		short _z1; // $a1
					// 		struct _Position *_v0; // $v0
					// 		struct _Position *_v1; // $v0
					/* end block 1.1.1.1.2 */
					// End offset: 0x80085BF0
					// End Line: 128

					/* begin block 1.1.1.1.3 */
						// Start line: 132
						// Start offset: 0x80085C00
						// Variables:
					// 		struct MATRIX *mat; // $v1
					/* end block 1.1.1.1.3 */
					// End offset: 0x80085C00
					// End Line: 132

					/* begin block 1.1.1.1.4 */
						// Start line: 138
						// Start offset: 0x80085C24
						// Variables:
					// 		short _x1; // $v1
					// 		short _y1; // $a0
					// 		short _z1; // $a1
					// 		struct _Position *_v0; // $v0
					// 		struct _Position *_v1; // $v0
					/* end block 1.1.1.1.4 */
					// End offset: 0x80085C44
					// End Line: 138
				/* end block 1.1.1.1 */
				// End offset: 0x80085C5C
				// End Line: 141
			/* end block 1.1.1 */
			// End offset: 0x80085C5C
			// End Line: 144
		/* end block 1.1 */
		// End offset: 0x80085C5C
		// End Line: 145
	/* end block 1 */
	// End offset: 0x80085C60
	// End Line: 148

	/* begin block 2 */
		// Start line: 194
	/* end block 2 */
	// End Line: 195

int MONSENSE_See(_Instance *instance,evCollideInstanceStatsData *data)

{
  int *piVar1;
  
  piVar1 = (int *)instance->attachedSegment;
  while ((piVar1 != (int *)0x0 && ((evCollideInstanceStatsData *)piVar1[1] != data))) {
    piVar1 = (int *)*piVar1;
  }
  return (int)piVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSENSE_Hear(struct _Instance *instance /*$a0*/, struct evCollideInstanceStatsData *data /*$s1*/)
 // line 153, offset 0x80085c78
	/* begin block 1 */
		// Start line: 154
		// Start offset: 0x80085C78
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	// 		struct _MonsterSenses *senses; // $s0
	// 		long mode; // $a0
	/* end block 1 */
	// End offset: 0x80085CF4
	// End Line: 171

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

int MONSENSE_Hear(_Instance *instance,evCollideInstanceStatsData *data)

{
  int in_v0;
  int iVar1;
  
  *(undefined2 *)(in_v0 + 2) = (short)instance;
  *(undefined2 *)(in_v0 + 4) = (short)data;
  iVar1 = FUN_80076c08();
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSENSE_Smell(struct _Instance *instance /*$a0*/, struct evCollideInstanceStatsData *data /*$a1*/)
 // line 176, offset 0x80085d08
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x80085D08
		// Variables:
	// 		struct _MonsterVars *mv; // $v0
	/* end block 1 */
	// End offset: 0x80085D08
	// End Line: 178

	/* begin block 2 */
		// Start line: 319
	/* end block 2 */
	// End Line: 320

	/* begin block 3 */
		// Start line: 320
	/* end block 3 */
	// End Line: 321

int MONSENSE_Smell(_Instance *instance,evCollideInstanceStatsData *data)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  
  iVar1 = 0;
  if (*(uint *)(unaff_s1 + 4) < (uint)(int)*(short *)(unaff_s0 + 8)) {
    iVar1 = FUN_80039ff8(unaff_s1 + 8,(int)*(short *)(unaff_s0 + 6),(int)*(short *)(unaff_s0 + 10));
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// struct _MonsterIR * /*$ra*/ MONSENSE_FirstSense(struct _Instance *instance /*$s2*/, struct _Instance *sensed /*$s4*/)
 // line 186, offset 0x80085d30
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x80085D30
		// Variables:
	// 		struct _MonsterIR *mir; // $s0
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 194
			// Start offset: 0x80085D6C
			// Variables:
		// 		long whatAmI; // $s2
		// 		struct _MonsterAllegiances *allegiances; // $s3
		/* end block 1.1 */
		// End offset: 0x80085EB0
		// End Line: 224
	/* end block 1 */
	// End offset: 0x80085EB0
	// End Line: 226

	/* begin block 2 */
		// Start line: 339
	/* end block 2 */
	// End Line: 340

_MonsterIR * MONSENSE_FirstSense(_Instance *instance,_Instance *sensed)

{
  _MonsterIR *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_SetupMIR(struct _Instance *instance /*$s3*/, struct evCollideInstanceStatsData *data /*$s1*/, int flags /*$s2*/)
 // line 233, offset 0x80085ed4
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x80085ED4
		// Variables:
	// 		struct _MonsterIR *mir; // $s0
	// 		struct _MonsterVars *mv; // $s4

		/* begin block 1.1 */
			// Start line: 253
			// Start offset: 0x80085F78
			// Variables:
		// 		long mode; // $s1

			/* begin block 1.1.1 */
				// Start line: 256
				// Start offset: 0x80085F78
				// Variables:
			// 		short _x1; // $v1
			// 		short _y1; // $a0
			// 		short _z1; // $a1
			// 		struct _SVector *_v0; // $v0
			// 		struct _SVector *_v1; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80085F78
			// End Line: 256

			/* begin block 1.1.2 */
				// Start line: 301
				// Start offset: 0x80086120
				// Variables:
			// 		int run; // $s2
			// 		int distance; // $a0

				/* begin block 1.1.2.1 */
					// Start line: 312
					// Start offset: 0x8008615C
				/* end block 1.1.2.1 */
				// End offset: 0x800861BC
				// End Line: 319
			/* end block 1.1.2 */
			// End offset: 0x800861BC
			// End Line: 336
		/* end block 1.1 */
		// End offset: 0x800862E0
		// End Line: 367
	/* end block 1 */
	// End offset: 0x800862E0
	// End Line: 368

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

void MONSENSE_SetupMIR(_Instance *instance,evCollideInstanceStatsData *data,int flags)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
    *(ushort *)(unaff_s0 + 0x16) = *(ushort *)(unaff_s0 + 0x16) | 4;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_SenseInstance(struct _Instance *instance /*$s3*/, struct evCollideInstanceStatsData *data /*$s2*/)
 // line 374, offset 0x80086300
	/* begin block 1 */
		// Start line: 375
		// Start offset: 0x80086300
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		long flags; // $s0
	// 		unsigned long whatAmI; // $s4

		/* begin block 1.1 */
			// Start line: 387
			// Start offset: 0x80086358
			// Variables:
		// 		struct PhysObProperties *prop; // $s0

			/* begin block 1.1.1 */
				// Start line: 390
				// Start offset: 0x80086378
			/* end block 1.1.1 */
			// End offset: 0x80086418
			// End Line: 401
		/* end block 1.1 */
		// End offset: 0x80086418
		// End Line: 401
	/* end block 1 */
	// End offset: 0x800864D4
	// End Line: 419

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

void MONSENSE_SenseInstance(_Instance *instance,evCollideInstanceStatsData *data)

{
  int in_v1;
  int unaff_s0;
  
  if (*(short *)(unaff_s0 + 0x14) < *(short *)(in_v1 + 0xe)) {
    *(ushort *)(unaff_s0 + 0x16) = (ushort)instance | 0x200;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_StartMonsterIRList(struct _Instance *instance /*$s5*/)
 // line 424, offset 0x800864f4
	/* begin block 1 */
		// Start line: 425
		// Start offset: 0x800864F4
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _MonsterIR *mir; // $s0
	// 		struct _MonsterIR *newlist; // $s2
	// 		int enemyOnList; // $s4

		/* begin block 1.1 */
			// Start line: 435
			// Start offset: 0x80086540
			// Variables:
		// 		struct _MonsterIR *next; // $s3
		/* end block 1.1 */
		// End offset: 0x800865C8
		// End Line: 463
	/* end block 1 */
	// End offset: 0x800865E4
	// End Line: 471

	/* begin block 2 */
		// Start line: 839
	/* end block 2 */
	// End Line: 840

void MONSENSE_StartMonsterIRList(_Instance *instance)

{
  FUN_80085f10();
  return;
}



// decompiled code
// original method signature: 
// struct _MonsterIR * /*$ra*/ MONSENSE_GetMonsterIR(struct _MonsterVars *mv /*$a0*/)
 // line 476, offset 0x80086608
	/* begin block 1 */
		// Start line: 478
		// Start offset: 0x80086608
		// Variables:
	// 		struct _MonsterIR *mir; // $v1
	/* end block 1 */
	// End offset: 0x80086628
	// End Line: 488

	/* begin block 2 */
		// Start line: 975
	/* end block 2 */
	// End Line: 976

	/* begin block 3 */
		// Start line: 976
	/* end block 3 */
	// End Line: 977

	/* begin block 4 */
		// Start line: 978
	/* end block 4 */
	// End Line: 979

_MonsterIR * MONSENSE_GetMonsterIR(_MonsterVars *mv)

{
  _MonsterIR *in_v0;
  _MonsterIR *unaff_s0;
  _MonsterIR *p_Var1;
  int unaff_s1;
  _MonsterIR *unaff_s2;
  int unaff_s4;
  
  while( true ) {
    while( true ) {
      p_Var1 = unaff_s0;
      if (p_Var1 == (_MonsterIR *)0x0) {
        if (unaff_s4 == 0) {
          *(undefined4 *)(unaff_s1 + 0xc4) = 0;
        }
        *(_MonsterIR **)(unaff_s1 + 0x90) = unaff_s2;
        return in_v0;
      }
      unaff_s0 = p_Var1->next;
      if (p_Var1->handle == p_Var1->instance->instanceID) break;
      in_v0 = *(_MonsterIR **)(unaff_s1 + 0x158);
      p_Var1->next = in_v0;
      *(_MonsterIR **)(unaff_s1 + 0x158) = p_Var1;
    }
    if ((p_Var1->mirFlags & 0xe0) == 0) break;
    p_Var1->next = unaff_s2;
    p_Var1->mirFlags = p_Var1->mirFlags & 0xff1f;
    in_v0 = *(_MonsterIR **)(unaff_s1 + 0xc4);
    unaff_s2 = p_Var1;
    if (in_v0 == p_Var1) {
      unaff_s4 = 1;
      unaff_s2 = p_Var1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_80081880();
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_InitIRList(struct _MonsterVars *mv /*$a0*/, struct _MonsterIR *list /*$a1*/, int num /*$a2*/)
 // line 494, offset 0x80086630
	/* begin block 1 */
		// Start line: 496
		// Start offset: 0x80086630
		// Variables:
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x80086650
	// End Line: 505

	/* begin block 2 */
		// Start line: 1011
	/* end block 2 */
	// End Line: 1012

	/* begin block 3 */
		// Start line: 1012
	/* end block 3 */
	// End Line: 1013

	/* begin block 4 */
		// Start line: 1016
	/* end block 4 */
	// End Line: 1017

void MONSENSE_InitIRList(_MonsterVars *mv,_MonsterIR *list,int num)

{
  return;
}



// decompiled code
// original method signature: 
// struct _MonsterIR * /*$ra*/ MONSENSE_SetEnemy(struct _Instance *instance /*$s1*/, struct _Instance *newenemy /*$s2*/)
 // line 512, offset 0x8008665c
	/* begin block 1 */
		// Start line: 513
		// Start offset: 0x8008665C
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterIR *mir; // $a2

		/* begin block 1.1 */
			// Start line: 532
			// Start offset: 0x800866D0
			// Variables:
		// 		long angle; // $v0
		/* end block 1.1 */
		// End offset: 0x8008672C
		// End Line: 538
	/* end block 1 */
	// End offset: 0x80086760
	// End Line: 548

	/* begin block 2 */
		// Start line: 1049
	/* end block 2 */
	// End Line: 1050

_MonsterIR * MONSENSE_SetEnemy(_Instance *instance,_Instance *newenemy)

{
  long in_v0;
  
  instance->yVel = in_v0;
  return (_MonsterIR *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_ProcessIRList(struct _Instance *instance /*$s7*/)
 // line 554, offset 0x8008677c
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8008677C
		// Variables:
	// 		struct _MonsterVars *mv; // $s4
	// 		struct _MonsterIR *mir; // $s0
	// 		struct _MonsterIR *closestEnemy; // $s1
	// 		struct _MonsterIR *closestLeader; // $s2
	// 		struct _MonsterIR *closestAlly; // $s3
	// 		struct _MonsterIR *player; // $s6
	// 		struct _MonsterCombatAttributes *combatAttr; // $s5
	/* end block 1 */
	// End offset: 0x80086968
	// End Line: 612

	/* begin block 2 */
		// Start line: 1138
	/* end block 2 */
	// End Line: 1139

void MONSENSE_ProcessIRList(_Instance *instance)

{
  int in_v0;
  undefined4 in_a2;
  int unaff_s0;
  int unaff_s2;
  
  if ((in_v0 == 0) || (unaff_s2 == loadStatus.bigFile.searchDirID)) {
    *(undefined4 *)(unaff_s0 + 0xc4) = in_a2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_SetupSenses(struct _Instance *instance /*$s2*/)
 // line 630, offset 0x8008699c
	/* begin block 1 */
		// Start line: 631
		// Start offset: 0x8008699C
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct _MonsterAllegiances *allegiances; // $s0
	// 		int num; // $v0
	/* end block 1 */
	// End offset: 0x80086AF0
	// End Line: 697

	/* begin block 2 */
		// Start line: 1260
	/* end block 2 */
	// End Line: 1261

void MONSENSE_SetupSenses(_Instance *instance)

{
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  undefined4 unaff_s6;
  
  *(undefined4 *)(unaff_s4 + 0xc4) = unaff_s6;
  *(undefined4 *)(unaff_s4 + 0xc4) = unaff_s1;
  *(undefined4 *)(unaff_s4 + 200) = unaff_s2;
  *(undefined4 *)(unaff_s4 + 0xcc) = unaff_s3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_RemoveSenses(struct _Instance *instance /*$a0*/)
 // line 702, offset 0x80086b08
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x80086B08
		// Variables:
	// 		struct _MonsterVars *mv; // $a0
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80086BA0
	// End Line: 723

	/* begin block 2 */
		// Start line: 1541
	/* end block 2 */
	// End Line: 1542

	/* begin block 3 */
		// Start line: 1542
	/* end block 3 */
	// End Line: 1543

	/* begin block 4 */
		// Start line: 1547
	/* end block 4 */
	// End Line: 1548

void MONSENSE_RemoveSenses(_Instance *instance)

{
  int unaff_s2;
  
  *(uint *)(unaff_s2 + 0x14) = *(uint *)(unaff_s2 + 0x14) | 0x20;
  *(uint *)(unaff_s2 + 0x18) = *(uint *)(unaff_s2 + 0x18) | 0x20000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_Radar(struct _Instance *instance /*$s0*/)
 // line 847, offset 0x80086ba8
	/* begin block 1 */
		// Start line: 848
		// Start offset: 0x80086BA8
		// Variables:
	// 		struct _MonsterVars *mv; // $s1
	// 		struct SVECTOR newPos; // stack offset -96
	// 		struct SVECTOR oldPos; // stack offset -88
	// 		struct _PCollideInfo pCollideInfo; // stack offset -80
	// 		int index; // $s3
	/* end block 1 */
	// End offset: 0x80086DC0
	// End Line: 919

	/* begin block 2 */
		// Start line: 1840
	/* end block 2 */
	// End Line: 1841

void MONSENSE_Radar(_Instance *instance)

{
  int iVar1;
  int in_v1;
  int iVar2;
  int in_a1;
  
  do {
    iVar2 = in_a1 + 1;
    iVar1 = (&_BlockVramEntry_ARRAY_800d4708[0].udata)[iVar2];
    *(int *)((int)&_BlockVramEntry_ARRAY_800d4708[0].udata + in_v1) = iVar1;
    *(undefined *)(iVar1 + 0x14f) = (char)in_a1;
    in_v1 = iVar2 * 4;
    in_a1 = iVar2;
  } while (iVar2 < gNumMonsters);
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ MONSENSE_GetClosestFreeDirection(struct _Instance *instance /*$a0*/, short angle /*$t1*/, long range /*$a2*/)
 // line 924, offset 0x80086de4
	/* begin block 1 */
		// Start line: 925
		// Start offset: 0x80086DE4
		// Variables:
	// 		struct _MonsterVars *mv; // $t0
	// 		int bit; // $a1
	// 		int search; // $a0
	/* end block 1 */
	// End offset: 0x80086EE0
	// End Line: 958

	/* begin block 2 */
		// Start line: 2013
	/* end block 2 */
	// End Line: 2014

short MONSENSE_GetClosestFreeDirection(_Instance *instance,short angle,long range)

{
  ushort in_v0;
  int unaff_s1;
  
  *(ushort *)(unaff_s1 + 0xe2) = in_v0;
  if (in_v0 >= 8) {
    *(undefined2 *)(unaff_s1 + 0xe2) = 0;
  }
  return (short)(ushort)(in_v0 < 8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ MONSENSE_GetDistanceInDirection(struct _Instance *instance /*$a0*/, short angle /*$a1*/)
 // line 963, offset 0x80086ee8
	/* begin block 1 */
		// Start line: 965
		// Start offset: 0x80086EE8
		// Variables:
	// 		struct _MonsterVars *mv; // $v1
	// 		int bit; // $v0
	/* end block 1 */
	// End offset: 0x80086F08
	// End Line: 966

	/* begin block 2 */
		// Start line: 2096
	/* end block 2 */
	// End Line: 2097

	/* begin block 3 */
		// Start line: 2097
	/* end block 3 */
	// End Line: 2098

	/* begin block 4 */
		// Start line: 2098
	/* end block 4 */
	// End Line: 2099

int MONSENSE_GetDistanceInDirection(_Instance *instance,short angle)

{
  uint in_v0;
  uint uVar1;
  int in_a2;
  int in_a3;
  int in_t0;
  short in_t1;
  int in_t2;
  
  uVar1 = (uint)(ushort)angle;
  while ((uVar1 = uVar1 & 7, in_v0 != 0 &&
         (in_t1 = *(short *)(uVar1 * 6 + in_a3), (int)*(short *)(in_t0 + uVar1 * 2 + 0xe4) < in_a2))
        ) {
    if ((int)instance < 1) {
      uVar1 = uVar1 + (int)instance * 2;
      instance = (_Instance *)(in_t2 - (int)instance);
    }
    else {
      uVar1 = (uVar1 - 1) + (int)instance * 2;
      instance = (_Instance *)-(int)instance;
    }
    in_v0 = (uint)((int)instance < 4);
  }
  return (int)in_t1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_DoSenses(struct _Instance *instance /*$s1*/)
 // line 974, offset 0x80086f20
	/* begin block 1 */
		// Start line: 975
		// Start offset: 0x80086F20
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		static int doneThisFrame; // offset 0x44
	/* end block 1 */
	// End offset: 0x80087004
	// End Line: 1005

	/* begin block 2 */
		// Start line: 2119
	/* end block 2 */
	// End Line: 2120

/* WARNING: Removing unreachable block (ram,0x80086f40) */

void MONSENSE_DoSenses(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MONSENSE_AdjustRadarFromObjects(struct _Instance *instance /*$s3*/)
 // line 1010, offset 0x80087018
	/* begin block 1 */
		// Start line: 1011
		// Start offset: 0x80087018
		// Variables:
	// 		struct _MonsterVars *mv; // $s4
	// 		struct _Instance *physob; // $s2

		/* begin block 1.1 */
			// Start line: 1019
			// Start offset: 0x80087068
			// Variables:
		// 		struct PhysObProperties *prop; // $s1

			/* begin block 1.1.1 */
				// Start line: 1022
				// Start offset: 0x80087080

				/* begin block 1.1.1.1 */
					// Start line: 1028
					// Start offset: 0x800870BC
					// Variables:
				// 		long dist; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 1033
						// Start offset: 0x800870F0
						// Variables:
					// 		int i; // $v1
					// 		int min; // $a1
					// 		int max; // $a2
					// 		int ang; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800871CC
					// End Line: 1060
				/* end block 1.1.1.1 */
				// End offset: 0x800871CC
				// End Line: 1061
			/* end block 1.1.1 */
			// End offset: 0x800871CC
			// End Line: 1063
		/* end block 1.1 */
		// End offset: 0x800871CC
		// End Line: 1064
	/* end block 1 */
	// End offset: 0x800871DC
	// End Line: 1066

	/* begin block 2 */
		// Start line: 2191
	/* end block 2 */
	// End Line: 2192

	/* begin block 3 */
		// Start line: 2195
	/* end block 3 */
	// End Line: 2196

void MONSENSE_AdjustRadarFromObjects(_Instance *instance)

{
  int unaff_s0;
  
  if ((*(uint *)(unaff_s0 + 4) & 0x20000000) == 0) {
    FUN_80086be4();
  }
  return;
}





