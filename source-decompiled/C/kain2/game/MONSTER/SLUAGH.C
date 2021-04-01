#include "THISDUST.H"
#include "SLUAGH.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ SLUAGH_Query(struct _Instance *instance /*$a0*/, unsigned long query /*$a1*/)
 // line 48, offset 0x8008d04c
	/* begin block 1 */
		// Start line: 49
		// Start offset: 0x8008D04C
		// Variables:
	// 		struct _MonsterVars *mv; // $v1
	// 		struct _MonsterAttributes *ma; // $a2
	// 		unsigned long ret; // $v0
	/* end block 1 */
	// End offset: 0x8008D0D0
	// End Line: 79

	/* begin block 2 */
		// Start line: 96
	/* end block 2 */
	// End Line: 97

ulong SLUAGH_Query(_Instance *instance,ulong query)

{
  _func_54 *in_v0;
  
  if (in_v0 == (_func_54 *)0x0) {
    in_v0 = DefaultFunctionTable.cleanUpFunc;
  }
  return (ulong)in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_DamageEffect(struct _Instance *instance /*$s2*/, struct evFXHitData *data /*$s1*/)
 // line 84, offset 0x8008d0e0
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8008D0E0
		// Variables:
	// 		struct _MonsterVars *mv; // $s0

		/* begin block 1.1 */
			// Start line: 92
			// Start offset: 0x8008D11C
			// Variables:
		// 		struct _SVector accel; // stack offset -40
		/* end block 1.1 */
		// End offset: 0x8008D11C
		// End Line: 92

		/* begin block 1.2 */
			// Start line: 100
			// Start offset: 0x8008D178
			// Variables:
		// 		struct _FXGlowEffect *fx; // $s1

			/* begin block 1.2.1 */
				// Start line: 104
				// Start offset: 0x8008D188
				// Variables:
			// 		long color; // stack offset -24

				/* begin block 1.2.1.1 */
					// Start line: 108
					// Start offset: 0x8008D1B4
					// Variables:
				// 		struct _ColorType current; // stack offset -40
				// 		struct _ColorType target; // stack offset -32
				/* end block 1.2.1.1 */
				// End offset: 0x8008D260
				// End Line: 127
			/* end block 1.2.1 */
			// End offset: 0x8008D260
			// End Line: 128
		/* end block 1.2 */
		// End offset: 0x8008D2BC
		// End Line: 138
	/* end block 1 */
	// End offset: 0x8008D2BC
	// End Line: 139

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

void SLUAGH_DamageEffect(_Instance *instance,evFXHitData *data)

{
  if (data != (evFXHitData *)&DAT_00000001) {
    FUN_8007e414();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_Init(struct _Instance *instance /*$s2*/)
 // line 145, offset 0x8008d2d4
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8008D2D4
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	// 		struct _MonsterAttributes *ma; // $s1
	// 		long color; // stack offset -24
	/* end block 1 */
	// End offset: 0x8008D308
	// End Line: 149

	/* begin block 2 */
		// Start line: 298
	/* end block 2 */
	// End Line: 299

void SLUAGH_Init(_Instance *instance)

{
  uint *unaff_s0;
  int unaff_s1;
  undefined4 in_stack_00000018;
  
  *(undefined4 *)(unaff_s1 + 0x18) = in_stack_00000018;
  if (((unaff_s0[1] & 1) != 0) && (*(short *)(unaff_s0 + 0x4c) != 0)) {
    *unaff_s0 = *unaff_s0 & 0xffdfffff;
    *(undefined *)((int)unaff_s0 + 0x146) = *(undefined *)(unaff_s0 + 0x52);
    unaff_s0[1] = unaff_s0[1] & 0xfffffffe;
    FUN_80084050();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_DeathEntry(struct _Instance *instance /*$s1*/)
 // line 170, offset 0x8008d390
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x8008D390
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008D420
	// End Line: 192

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

void SLUAGH_DeathEntry(_Instance *instance)

{
  uint uVar1;
  uint *unaff_s0;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  uStack00000010 = 0x4b0;
  uStack00000014 = 0x68;
  uStack00000018 = 0x70;
  uVar1 = FUN_8004aec4();
  unaff_s0[0x37] = uVar1;
  FUN_8008cba8();
  *(undefined2 *)(unaff_s0 + 0x4d) = 0x2000;
  unaff_s0[1] = unaff_s0[1] & 0xfffffffe;
  *unaff_s0 = *unaff_s0 | 0x2002000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_Death(struct _Instance *instance /*$s0*/)
 // line 195, offset 0x8008d454
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x8008D454

		/* begin block 1.1 */
			// Start line: 202
			// Start offset: 0x8008D494
			// Variables:
		// 		struct _MonsterVars *mv; // $v0
		/* end block 1.1 */
		// End offset: 0x8008D4C4
		// End Line: 207
	/* end block 1 */
	// End offset: 0x8008D4C4
	// End Line: 209

	/* begin block 2 */
		// Start line: 417
	/* end block 2 */
	// End Line: 418

void SLUAGH_Death(_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007fd20();
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_AttackEntry(struct _Instance *instance /*$a0*/)
 // line 217, offset 0x8008d4dc
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x8008D4DC
		// Variables:
	// 		struct _MonsterVars *mv; // $s0
	/* end block 1 */
	// End offset: 0x8008D530
	// End Line: 229

	/* begin block 2 */
		// Start line: 461
	/* end block 2 */
	// End Line: 462

void SLUAGH_AttackEntry(_Instance *instance)

{
  undefined4 uVar1;
  
  if ((instance->flags2 & 0x10U) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8007fd20(instance,0x18,2);
  }
  if ((instance->flags2 & 2U) == 0) {
    FUN_80085a94(instance,0x18);
    return;
  }
  uVar1 = 0x13;
  if (*(int *)((int)instance->extraData + 0xc4) == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8007f88c(instance,uVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SLUAGH_Attack(struct _Instance *instance /*$s2*/)
 // line 231, offset 0x8008d540
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x8008D540
		// Variables:
	// 		struct _MonsterVars *mv; // $s1

		/* begin block 1.1 */
			// Start line: 237
			// Start offset: 0x8008D574
			// Variables:
		// 		struct __Event *mess; // $a1

			/* begin block 1.1.1 */
				// Start line: 253
				// Start offset: 0x8008D5E0
				// Variables:
			// 		struct _MonsterAttributes *ma; // $s0
			// 		long color; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x8008D630
			// End Line: 259
		/* end block 1.1 */
		// End offset: 0x8008D680
		// End Line: 272
	/* end block 1 */
	// End offset: 0x8008D6BC
	// End Line: 278

	/* begin block 2 */
		// Start line: 489
	/* end block 2 */
	// End Line: 490

void SLUAGH_Attack(_Instance *instance)

{
  FUN_80085a94();
  return;
}





