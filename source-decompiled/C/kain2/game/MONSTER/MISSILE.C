#include "THISDUST.H"
#include "MISSILE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MISSILE_Process(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 53, offset 0x8007d7bc
	/* begin block 1 */
		// Start line: 106
	/* end block 1 */
	// End Line: 107

void MISSILE_Process(_Instance *instance,GameTracker *gameTracker)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MISSILE_Collide(struct _Instance *instance /*$s0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 65, offset 0x8007d814
	/* begin block 1 */
		// Start line: 130
	/* end block 1 */
	// End Line: 131

void MISSILE_Collide(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  
  if (in_v0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80081880();
  }
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ MISSILE_Find(struct _Instance *instance /*$a0*/, struct _MonsterMissile *missiledef /*$a1*/)
 // line 73, offset 0x8007d850
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x8007D850
		// Variables:
	// 		struct Object *ob; // $v1
	// 		struct _Instance *missile; // $a2
	/* end block 1 */
	// End offset: 0x8007D8BC
	// End Line: 87

	/* begin block 2 */
		// Start line: 146
	/* end block 2 */
	// End Line: 147

	/* begin block 3 */
		// Start line: 147
	/* end block 3 */
	// End Line: 148

	/* begin block 4 */
		// Start line: 154
	/* end block 4 */
	// End Line: 155

_Instance * MISSILE_Find(_Instance *instance,_MonsterMissile *missiledef)

{
  _Instance *p_Var1;
  
  FUN_8006d0ec();
  p_Var1 = instance->LinkParent;
  if (p_Var1 == (_Instance *)0x0) {
    p_Var1 = (_Instance *)FUN_800342f8(instance);
  }
  return p_Var1;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ MISSILE_Birth(struct _Instance *instance /*$s1*/, struct _MonsterMissile *missiledef /*$s0*/)
 // line 89, offset 0x8007d8cc
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x8007D8CC
		// Variables:
	// 		struct _Instance *missile; // $a1

		/* begin block 1.1 */
			// Start line: 122
			// Start offset: 0x8007D954
			// Variables:
		// 		struct MATRIX *matrix; // $v0
		/* end block 1.1 */
		// End offset: 0x8007D988
		// End Line: 126
	/* end block 1 */
	// End offset: 0x8007D98C
	// End Line: 159

	/* begin block 2 */
		// Start line: 181
	/* end block 2 */
	// End Line: 182

_Instance * MISSILE_Birth(_Instance *instance,_MonsterMissile *missiledef)

{
  _MonsterMissile *in_v0;
  Object *in_v1;
  _Instance *in_a2;
  
  while ((in_v0 != missiledef || (in_a2->object != in_v1))) {
    in_a2 = in_a2->LinkSibling;
    if (in_a2 == (_Instance *)0x0) {
      return (_Instance *)0x0;
    }
    in_v0 = (_MonsterMissile *)in_a2->ParentLinkNode;
  }
  return in_a2;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ MISSILE_Fire(struct _Instance *instance /*$a0*/, struct _MonsterMissile *missiledef /*$s1*/, void *target /*$s2*/, int type /*$s3*/)
 // line 161, offset 0x8007d9a0
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x8007D9A0
		// Variables:
	// 		struct _Instance *miss; // $s0

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x8007D9D4
			// Variables:
		// 		int spin; // $a3
		// 		struct _SVector rotVel; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x8007DA40
		// End Line: 190
	/* end block 1 */
	// End offset: 0x8007DA40
	// End Line: 192

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

_Instance * MISSILE_Fire(_Instance *instance,_MonsterMissile *missiledef,void *target,int type)

{
  int in_v0;
  
  *(undefined2 *)&missiledef[5].fireChance = *(undefined2 *)(in_v0 + 0x14);
  *(undefined2 *)missiledef[5].animList = *(undefined2 *)(in_v0 + 0x18);
  missiledef[6].speed = *(ushort *)(in_v0 + 0x1c);
  return (_Instance *)missiledef;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ MISSILE_FireAtInstance(struct _Instance *instance /*$a0*/, struct _MonsterMissile *missiledef /*$a1*/, struct _Instance *target /*$a2*/)
 // line 200, offset 0x8007da60
	/* begin block 1 */
		// Start line: 406
	/* end block 1 */
	// End Line: 407

_Instance *
MISSILE_FireAtInstance(_Instance *instance,_MonsterMissile *missiledef,_Instance *target)

{
                    /* WARNING: Subroutine does not return */
  FUN_80034368(instance,(uint)missiledef | 0x10);
}





