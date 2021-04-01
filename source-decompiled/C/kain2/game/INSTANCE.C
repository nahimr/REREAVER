#include "THISDUST.H"
#include "INSTANCE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ClearTfaces(struct _Instance *instance /*$a0*/)
 // line 52, offset 0x80031ed8
	/* begin block 1 */
		// Start line: 104
	/* end block 1 */
	// End Line: 105

	/* begin block 2 */
		// Start line: 111
	/* end block 2 */
	// End Line: 112

void INSTANCE_ClearTfaces(_Instance *instance)

{
  int in_v0;
  uint in_a1;
  int in_a2;
  int unaff_s0;
  
  if (in_v0 == 0) {
    *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) & 0xfffbffff;
    *(uint *)(unaff_s0 + 0x18) = *(uint *)(unaff_s0 + 0x18) | in_a1;
  }
  else {
    *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0x40000;
  }
  if ((*(int *)(in_a2 + 0x10) != 0) && ((*(uint *)(in_a2 + 0x2c) & 0x40000000) == 0)) {
    FUN_80092c6c(unaff_s0 + 0x194);
  }
  FUN_80031e70();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_Deactivate(struct _Instance *instance /*$s0*/)
 // line 66, offset 0x80031f04
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x80031F04
		// Variables:
	// 		struct Object *object; // $a2
	/* end block 1 */
	// End offset: 0x80031FB0
	// End Line: 91

	/* begin block 2 */
		// Start line: 138
	/* end block 2 */
	// End Line: 139

void INSTANCE_Deactivate(_Instance *instance)

{
  uint in_v0;
  uint in_v1;
  uint in_a1;
  int in_a2;
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 0x14) = in_v1 & in_v0;
  *(uint *)(unaff_s0 + 0x18) = (uint)instance | in_a1;
  if ((*(int *)(in_a2 + 0x10) != 0) && ((*(uint *)(in_a2 + 0x2c) & 0x40000000) == 0)) {
    FUN_80092c6c(unaff_s0 + 0x194);
  }
  FUN_80031e70();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_Reactivate(struct _Instance *instance /*$a0*/)
 // line 94, offset 0x80031fc0
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80031FC0
		// Variables:
	// 		struct Object *object; // $a2
	/* end block 1 */
	// End offset: 0x80032048
	// End Line: 117

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

void INSTANCE_Reactivate(_Instance *instance)

{
  int in_a2;
  
  if ((*(uint *)(in_a2 + 0x2c) & 0x40000000) == 0) {
    FUN_80092d28(&instance->anim);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ForceActive(struct _Instance *instance /*$a0*/)
 // line 120, offset 0x80032058
	/* begin block 1 */
		// Start line: 262
	/* end block 1 */
	// End Line: 263

void INSTANCE_ForceActive(_Instance *instance)

{
  int iVar1;
  int unaff_s0;
  int iVar2;
  
  iVar2 = ((int)instance >> 3) + 1;
  if ((int)instance <= iRam800ce3a8) {
    iRam800ce3a8 = 0;
  }
  iVar1 = iRam800ce3a8;
  iRam800ce3a8 = iRam800ce3a8 + iVar2;
  if ((int)instance <= iRam800ce3a8) {
    iRam800ce3a8 = 0;
  }
  while (iVar1 != 0) {
    unaff_s0 = *(int *)(unaff_s0 + 8);
    iVar1 = iVar1 + -1;
  }
  while( true ) {
    if ((unaff_s0 == 0) || (iVar2 == 0)) {
      return;
    }
    if (((*(uint *)(unaff_s0 + 0x18) & 0x80) == 0) &&
       ((**(uint **)(unaff_s0 + 0x1c) & 0x10000) == 0)) break;
    if ((*(uint *)(unaff_s0 + 0x18) & 1) != 0) {
      FUN_80031f58(unaff_s0);
    }
    unaff_s0 = *(int *)(unaff_s0 + 8);
    iVar2 = iVar2 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(unaff_s0,0x23);
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_DeactivatedProcess(struct _Instance *instance /*$a0*/, struct GameTracker *gameTracker /*$a1*/)
 // line 130, offset 0x8003208c
	/* begin block 1 */
		// Start line: 282
	/* end block 1 */
	// End Line: 283

	/* begin block 2 */
		// Start line: 284
	/* end block 2 */
	// End Line: 285

void INSTANCE_DeactivatedProcess(_Instance *instance,GameTracker *gameTracker)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 == 0) {
    uRam800ce3a8 = 0;
  }
  if (in_v1 != 0) {
    do {
      unaff_s0 = *(int *)(unaff_s0 + 8);
      in_v1 = in_v1 + -1;
    } while (in_v1 != 0);
  }
  while( true ) {
    if ((unaff_s0 == 0) || (unaff_s1 == 0)) {
      return;
    }
    if (((*(uint *)(unaff_s0 + 0x18) & 0x80) == 0) &&
       ((**(uint **)(unaff_s0 + 0x1c) & 0x10000) == 0)) break;
    if ((*(uint *)(unaff_s0 + 0x18) & 1) != 0) {
      FUN_80031f58(unaff_s0);
    }
    unaff_s0 = *(int *)(unaff_s0 + 8);
    unaff_s1 = unaff_s1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(unaff_s0,0x23);
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_DeactivateFarInstances(struct GameTracker *gameTracker /*$s3*/)
 // line 136, offset 0x80032094
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80032094
		// Variables:
	// 		struct _InstanceList *instanceList; // $v0
	// 		struct _Instance *instance; // $s0
	// 		struct SVECTOR *line; // $s2
	// 		long distSq; // $v1
	// 		int numInstances; // $a0
	// 		int numToProcess; // $s1
	// 		int cntInst; // $v1
	// 		static int lastInst; // offset 0x0
	/* end block 1 */
	// End offset: 0x800322F4
	// End Line: 234

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

void INSTANCE_DeactivateFarInstances(GameTracker *gameTracker)

{
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  uRam800ce3a8 = 0;
  if (in_v1 != 0) {
    do {
      unaff_s0 = *(int *)(unaff_s0 + 8);
      in_v1 = in_v1 + -1;
    } while (in_v1 != 0);
  }
  while( true ) {
    if ((unaff_s0 == 0) || (unaff_s1 == 0)) {
      return;
    }
    if (((*(uint *)(unaff_s0 + 0x18) & 0x80) == 0) &&
       ((**(uint **)(unaff_s0 + 0x1c) & 0x10000) == 0)) break;
    if ((*(uint *)(unaff_s0 + 0x18) & 1) != 0) {
      FUN_80031f58(unaff_s0);
    }
    unaff_s0 = *(int *)(unaff_s0 + 8);
    unaff_s1 = unaff_s1 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(unaff_s0,0x23);
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_InitInstanceList(struct _InstanceList *list /*$a0*/, struct _InstancePool *pool /*$a1*/)
 // line 257, offset 0x80032310
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x80032310
		// Variables:
	// 		long i; // $a3
	/* end block 1 */
	// End offset: 0x800323A4
	// End Line: 292

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

	/* begin block 3 */
		// Start line: 563
	/* end block 3 */
	// End Line: 564

	/* begin block 4 */
		// Start line: 566
	/* end block 4 */
	// End Line: 567

void INSTANCE_InitInstanceList(_InstanceList *list,_InstancePool *pool)

{
  undefined4 in_v0;
  int in_v1;
  int in_a3;
  
  *(undefined4 *)(in_v1 + 0x12d8) = 0;
  *(undefined4 *)(in_v1 + 0x1538) = in_v0;
  list->pool = pool;
  list->numInstances = 0;
  list->first = (_Instance *)0x0;
  do {
    list->group[0].next = (NodeType *)0x0;
    list->group[0].prev = (NodeType *)0x0;
    in_a3 = in_a3 + 1;
    list = (_InstanceList *)&list->pool;
  } while (in_a3 < 0x20);
  pool->nextInstanceID = 1;
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_NewInstance(struct _InstanceList *list /*$a0*/)
 // line 348, offset 0x800323b0
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x800323B0
		// Variables:
	// 		struct _Instance *temp; // $v0
	// 		struct _Instance *instance; // $a1
	/* end block 1 */
	// End offset: 0x80032434
	// End Line: 389

	/* begin block 2 */
		// Start line: 779
	/* end block 2 */
	// End Line: 780

	/* begin block 3 */
		// Start line: 780
	/* end block 3 */
	// End Line: 781

	/* begin block 4 */
		// Start line: 785
	/* end block 4 */
	// End Line: 786

_Instance * INSTANCE_NewInstance(_InstanceList *list)

{
  int *in_v0;
  int in_v1;
  _Instance *in_a1;
  
  *in_v0 = in_v1 + 1;
  list->numInstances = list->numInstances + 1;
  return in_a1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ INSTANCE_InstanceGroupNumber(struct _Instance *instance /*$a0*/)
 // line 391, offset 0x8003243c
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x8003243C
		// Variables:
	// 		long result; // $s0
	/* end block 1 */
	// End offset: 0x80032544
	// End Line: 431

	/* begin block 2 */
		// Start line: 868
	/* end block 2 */
	// End Line: 869

long INSTANCE_InstanceGroupNumber(_Instance *instance)

{
  uint in_v0;
  int iVar1;
  uint unaff_s0;
  
  if (((in_v0 & 0x40) != 0) && ((instance->flags & 0x4000U) == 0)) {
    unaff_s0 = unaff_s0 | 4;
  }
  if (((instance->object->oflags & 0x10U) != 0) && ((instance->flags & 0x1000U) == 0)) {
    unaff_s0 = unaff_s0 | 0x10;
  }
  if ((instance->object->oflags & 1U) == 0) {
    iVar1 = FUN_800be300(instance->object->name,0x800ce5f0);
    if (iVar1 != 0) {
      unaff_s0 = unaff_s0 & 0xfffffffc;
    }
  }
  else {
    unaff_s0 = unaff_s0 | 8;
  }
  return unaff_s0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_InsertInstanceGroup(struct _InstanceList *list /*$s1*/, struct _Instance *instance /*$s0*/)
 // line 450, offset 0x80032558
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x80032558
	/* end block 1 */
	// End offset: 0x80032558
	// End Line: 451

	/* begin block 2 */
		// Start line: 986
	/* end block 2 */
	// End Line: 987

void INSTANCE_InsertInstanceGroup(_InstanceList *list,_Instance *instance)

{
  int iVar1;
  int iVar2;
  int unaff_s0;
  int *unaff_s1;
  uint unaff_s2;
  
  FUN_800675a0();
  if ((*(uint *)(unaff_s0 + 0x14) & 0x800000) != 0) {
    FUN_800b6a80();
  }
  if ((*(uint *)(unaff_s0 + 0x14) & 2) == 0) {
    iVar1 = *(int *)(unaff_s0 + 0x20);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & ~unaff_s2;
      *(undefined4 *)(*(int *)(unaff_s0 + 0x20) + 0x34) = 0;
    }
  }
  if (*(int *)(unaff_s0 + 0xc) == 0) {
    unaff_s1[1] = *(int *)(unaff_s0 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_s0 + 0xc) + 8) = *(undefined4 *)(unaff_s0 + 8);
  }
  if (*(int *)(unaff_s0 + 8) != 0) {
    *(undefined4 *)(*(int *)(unaff_s0 + 8) + 0xc) = *(undefined4 *)(unaff_s0 + 0xc);
  }
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  *unaff_s1 = *unaff_s1 + -1;
  *(int *)(unaff_s1[2] + 4) = *(int *)(unaff_s1[2] + 4) + 1;
  iVar1 = *(int *)(&DAT_00009538 + unaff_s1[2]);
  *(int *)(&DAT_00009538 + unaff_s1[2]) = unaff_s0;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(int *)(unaff_s0 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = unaff_s0;
  }
  FUN_8004f52c();
  FUN_8004d004();
  if ((*(uint *)(unaff_s0 + 0x14) & 0x10000) != 0) {
    *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0x20000;
    FUN_8003d944();
  }
  iVar1 = *(int *)(unaff_s0 + 0x1c);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if ((*(uint *)(iVar1 + 0x2c) & 0x40000000) == 0) {
      FUN_80092c6c(unaff_s0 + 0x194);
    }
    iVar1 = *(int *)(unaff_s0 + 0x1c);
  }
  if ((*(uint *)(iVar1 + 0x2c) & 4) != 0) {
    FUN_8003e804(*(undefined4 *)(iVar1 + 0x28),unaff_s0 + 0x48);
  }
  if (*(int *)(unaff_s0 + 300) != 0) {
    FUN_800352c8();
  }
  if (*(int *)(unaff_s0 + 0x130) != 0) {
    FUN_8003542c();
  }
  if (*(int *)(unaff_s0 + 0xe8) == 0) {
    if (*(int *)(unaff_s0 + 0x264) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8004fe84();
    }
    iVar2 = 0;
    iVar1 = -0x7ff2f234;
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar1 + 0xc) == unaff_s0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        return;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fe84();
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ReallyRemoveInstance(struct _InstanceList *list /*$s1*/, struct _Instance *instance /*$s0*/, long reset /*$s2*/)
 // line 499, offset 0x800325a0
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x800325A0
		// Variables:
	// 		struct _Instance *temp; // $v1

		/* begin block 1.1 */
			// Start line: 602
			// Start offset: 0x800327AC
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800327CC
		// End Line: 611
	/* end block 1 */
	// End offset: 0x800327CC
	// End Line: 612

	/* begin block 2 */
		// Start line: 998
	/* end block 2 */
	// End Line: 999

void INSTANCE_ReallyRemoveInstance(_InstanceList *list,_Instance *instance,long reset)

{
  uint in_v1;
  int iVar1;
  int iVar2;
  int unaff_s0;
  int *unaff_s1;
  
  list->group[4].prev = (NodeType *)((uint)list->group[4].prev & in_v1);
  *(undefined4 *)(*(int *)(unaff_s0 + 0x20) + 0x34) = 0;
  if (*(int *)(unaff_s0 + 0xc) == 0) {
    unaff_s1[1] = *(int *)(unaff_s0 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_s0 + 0xc) + 8) = *(undefined4 *)(unaff_s0 + 8);
  }
  if (*(int *)(unaff_s0 + 8) != 0) {
    *(undefined4 *)(*(int *)(unaff_s0 + 8) + 0xc) = *(undefined4 *)(unaff_s0 + 0xc);
  }
  *(undefined4 *)(unaff_s0 + 0x10) = 0;
  *unaff_s1 = *unaff_s1 + -1;
  *(int *)(unaff_s1[2] + 4) = *(int *)(unaff_s1[2] + 4) + 1;
  iVar1 = *(int *)(&DAT_00009538 + unaff_s1[2]);
  *(int *)(&DAT_00009538 + unaff_s1[2]) = unaff_s0;
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  *(int *)(unaff_s0 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = unaff_s0;
  }
  FUN_8004f52c();
  FUN_8004d004();
  if ((*(uint *)(unaff_s0 + 0x14) & 0x10000) != 0) {
    *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0x20000;
    FUN_8003d944();
  }
  iVar1 = *(int *)(unaff_s0 + 0x1c);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if ((*(uint *)(iVar1 + 0x2c) & 0x40000000) == 0) {
      FUN_80092c6c(unaff_s0 + 0x194);
    }
    iVar1 = *(int *)(unaff_s0 + 0x1c);
  }
  if ((*(uint *)(iVar1 + 0x2c) & 4) != 0) {
    FUN_8003e804(*(undefined4 *)(iVar1 + 0x28),unaff_s0 + 0x48);
  }
  if (*(int *)(unaff_s0 + 300) != 0) {
    FUN_800352c8();
  }
  if (*(int *)(unaff_s0 + 0x130) != 0) {
    FUN_8003542c();
  }
  if (*(int *)(unaff_s0 + 0xe8) == 0) {
    if (*(int *)(unaff_s0 + 0x264) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8004fe84();
    }
    iVar2 = 0;
    iVar1 = -0x7ff2f234;
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar1 + 0xc) == unaff_s0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        return;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fe84();
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_CleanUpInstanceList(struct _InstanceList *list /*$s1*/, long reset /*$s2*/)
 // line 615, offset 0x800327e4
	/* begin block 1 */
		// Start line: 616
		// Start offset: 0x800327E4
		// Variables:
	// 		struct _Instance *instance; // $a1
	// 		struct _Instance *next; // $s0
	/* end block 1 */
	// End offset: 0x80032888
	// End Line: 650

	/* begin block 2 */
		// Start line: 1354
	/* end block 2 */
	// End Line: 1355

void INSTANCE_CleanUpInstanceList(_InstanceList *list,long reset)

{
  uint *puVar1;
  int iVar2;
  int unaff_s1;
  
  iVar2 = *(int *)(unaff_s1 + 4);
  do {
    if (iVar2 == 0) {
      return;
    }
    puVar1 = (uint *)(iVar2 + 0x14);
    iVar2 = *(int *)(iVar2 + 8);
  } while ((*puVar1 & 0x20) == 0);
                    /* WARNING: Subroutine does not return */
  FUN_80032538();
}



// decompiled code
// original method signature: 
// long /*$ra*/ INSTANCE_Introduced(struct Intro *intro /*$s0*/, short streamUnitID /*$a1*/)
 // line 720, offset 0x800328a0
	/* begin block 1 */
		// Start line: 721
		// Start offset: 0x800328A0
		// Variables:
	// 		struct _Instance *instance; // $v1
	// 		struct _Instance *next; // $v1
	// 		long ret; // $s1
	/* end block 1 */
	// End offset: 0x80032940
	// End Line: 761

	/* begin block 2 */
		// Start line: 1440
	/* end block 2 */
	// End Line: 1441

	/* begin block 3 */
		// Start line: 1496
	/* end block 3 */
	// End Line: 1497

/* WARNING: Removing unreachable block (ram,0x80032884) */
/* WARNING: Removing unreachable block (ram,0x800328b8) */
/* WARNING: Removing unreachable block (ram,0x8003289c) */
/* WARNING: Removing unreachable block (ram,0x800328c8) */

long INSTANCE_Introduced(Intro *intro,short streamUnitID)

{
  int unaff_s0;
  
  *(uint *)(unaff_s0 + 0x2c) = *(uint *)(unaff_s0 + 0x2c) | 8;
  return 1;
}



// decompiled code
// original method signature: 
// struct INICommand * /*$ra*/ INSTANCE_GetIntroCommand(struct INICommand *command /*$a0*/, int cmd /*$a1*/)
 // line 765, offset 0x80032958
	/* begin block 1 */
		// Start line: 1606
	/* end block 1 */
	// End Line: 1607

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

INICommand * INSTANCE_GetIntroCommand(INICommand *command,int cmd)

{
  INICommand *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// struct INICommand * /*$ra*/ INSTANCE_FindIntroCommand(struct _Instance *instance /*$a0*/, int cmd /*$a1*/)
 // line 780, offset 0x800329a8
	/* begin block 1 */
		// Start line: 1638
	/* end block 1 */
	// End Line: 1639

INICommand * INSTANCE_FindIntroCommand(_Instance *instance,int cmd)

{
  int in_a2;
  
  do {
    instance->currentModel = ((ushort *)cmd)[2];
    do {
      cmd = (int)((ushort *)cmd + (int)(short)((ushort *)cmd)[1] * 2 + 2);
      if (*(ushort *)cmd == 0) {
        return (INICommand *)((uint)*(ushort *)cmd << 0x10);
      }
    } while ((int)(INICommand *)((uint)*(ushort *)cmd << 0x10) >> 0x10 != in_a2);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ProcessIntro(struct _Instance *instance /*$a0*/)
 // line 787, offset 0x800329cc
	/* begin block 1 */
		// Start line: 789
		// Start offset: 0x800329CC

		/* begin block 1.1 */
			// Start line: 789
			// Start offset: 0x800329F0
			// Variables:
		// 		struct INICommand *command; // $a1
		/* end block 1.1 */
		// End offset: 0x80032A40
		// End Line: 809
	/* end block 1 */
	// End offset: 0x80032A40
	// End Line: 810

	/* begin block 2 */
		// Start line: 1652
	/* end block 2 */
	// End Line: 1653

	/* begin block 3 */
		// Start line: 1653
	/* end block 3 */
	// End Line: 1654

void INSTANCE_ProcessIntro(_Instance *instance)

{
  int in_v0;
  short *in_a1;
  int in_a2;
  
  while (in_v0 != 0) {
    if ((int)*in_a1 == in_a2) {
      instance->currentModel = in_a1[2];
    }
    in_a1 = in_a1 + (int)in_a1[1] * 2 + 2;
    in_v0 = (int)*in_a1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_InitEffects(struct _Instance *instance /*$s2*/, struct Object *object /*$s1*/)
 // line 812, offset 0x80032a48
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x80032A48
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80032AB8
	// End Line: 825

	/* begin block 2 */
		// Start line: 1707
	/* end block 2 */
	// End Line: 1708

void INSTANCE_InitEffects(_Instance *instance,Object *object)

{
  uint in_v0;
  int unaff_s0;
  int unaff_s1;
  
  while (in_v0 != 0) {
    FUN_8004cbe4();
    unaff_s0 = unaff_s0 + 1;
    in_v0 = (uint)(unaff_s0 < (int)*(short *)(unaff_s1 + 0x36));
  }
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_IntroduceInstance(struct Intro *intro /*$s2*/, short streamUnitID /*$a1*/)
 // line 827, offset 0x80032ad0
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x80032AD0
		// Variables:
	// 		struct Object *object; // $s6
	// 		struct _Instance *instance; // $s0
	// 		struct _Instance *attachInst; // $s5
	// 		struct _ObjectTracker *objectTracker; // $s1

		/* begin block 1.1 */
			// Start line: 843
			// Start offset: 0x80032B14
			// Variables:
		// 		struct INICommand *index; // $v0
		// 		long attachedUniqueID; // $s4

			/* begin block 1.1.1 */
				// Start line: 980
				// Start offset: 0x80032DE0
			/* end block 1.1.1 */
			// End offset: 0x80032E1C
			// End Line: 990

			/* begin block 1.1.2 */
				// Start line: 1040
				// Start offset: 0x80032F10
				// Variables:
			// 		struct SavedIntroSpline *savedIntroSpline; // $s1
			// 		struct MultiSpline *spline; // $s2
			/* end block 1.1.2 */
			// End offset: 0x80033168
			// End Line: 1090

			/* begin block 1.1.3 */
				// Start line: 1092
				// Start offset: 0x80033168
				// Variables:
			// 		struct SavedIntroSmall *savedIntroSmall; // $v0

				/* begin block 1.1.3.1 */
					// Start line: 1106
					// Start offset: 0x80033194
				/* end block 1.1.3.1 */
				// End offset: 0x800331BC
				// End Line: 1113
			/* end block 1.1.3 */
			// End offset: 0x800331BC
			// End Line: 1115
		/* end block 1.1 */
		// End offset: 0x800331C4
		// End Line: 1131
	/* end block 1 */
	// End offset: 0x800331C8
	// End Line: 1133

	/* begin block 2 */
		// Start line: 1739
	/* end block 2 */
	// End Line: 1740

_Instance * INSTANCE_IntroduceInstance(Intro *intro,short streamUnitID)

{
  byte bVar1;
  short sVar2;
  int in_v0;
  _Instance *p_Var3;
  long lVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  Intro *unaff_s2;
  long unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar9;
  
  if (in_v0 != 0) {
    iVar9 = *(int *)(in_v0 + 0x10);
    if (*(short *)(in_v0 + 0x14) != 2) {
      return (_Instance *)0x0;
    }
    if ((unaff_s4 != 0) && (unaff_s5 = FUN_8003466c(), unaff_s5 == 0)) {
      return (_Instance *)0x0;
    }
    if (((*(uint *)(iVar9 + 0x2c) & 0x10000000) != 0) &&
       (FUN_8003df90(), (*(uint *)(iVar9 + 0x2c) & 0x10000000) != 0)) {
      return (_Instance *)0x0;
    }
    p_Var3 = (_Instance *)FUN_80032348(loadStatus.bigFile.subDirList);
    if (p_Var3 != (_Instance *)0x0) {
      unaff_s2->flags = unaff_s2->flags | 8;
      *(short *)(in_v0 + 0x16) = *(short *)(in_v0 + 0x16) + 1;
      FUN_80033e0c(p_Var3,iVar9,0);
      FUN_800bd564(p_Var3->introName);
      p_Var3->introUniqueID = unaff_s2->UniqueID;
      lVar4 = unaff_s2->intronum;
      p_Var3->birthStreamUnitID = unaff_s3;
      p_Var3->currentStreamUnitID = unaff_s3;
      p_Var3->introNum = lVar4;
      unaff_s2->instance = p_Var3;
      p_Var3->intro = unaff_s2;
      p_Var3->introData = unaff_s2->data;
      sVar2 = (unaff_s2->position).z;
      *(undefined4 *)&p_Var3->position = *(undefined4 *)&unaff_s2->position;
      (p_Var3->position).z = sVar2;
      if ((loadStatus.decompressLen._2_2_ == 1) &&
         ((*(int *)&unaff_s2->spectralPosition != 0 || ((unaff_s2->spectralPosition).z != 0)))) {
        (p_Var3->position).x = (unaff_s2->position).x + (unaff_s2->spectralPosition).x;
        (p_Var3->position).y = (unaff_s2->position).y + (unaff_s2->spectralPosition).y;
        (p_Var3->position).z = (unaff_s2->position).z + (unaff_s2->spectralPosition).z;
      }
      sVar2 = (p_Var3->position).z;
      *(undefined4 *)&p_Var3->initialPos = *(undefined4 *)&p_Var3->position;
      (p_Var3->initialPos).z = sVar2;
      sVar2 = (unaff_s2->position).z;
      *(undefined4 *)&p_Var3->oldPos = *(undefined4 *)&unaff_s2->position;
      (p_Var3->oldPos).z = sVar2;
      p_Var3->attachedID = unaff_s4;
      FUN_80035cac(&p_Var3->light_color,p_Var3);
      uVar8 = *(undefined4 *)&(unaff_s2->rotation).z;
      *(undefined4 *)&p_Var3->rotation = *(undefined4 *)&unaff_s2->rotation;
      *(undefined4 *)&(p_Var3->rotation).z = uVar8;
      if ((p_Var3->object->oflags & 0x100U) != 0) {
        FUN_80033e04(p_Var3);
      }
      (p_Var3->scale).x = 0x1000;
      (p_Var3->scale).y = 0x1000;
      (p_Var3->scale).z = 0x1000;
      if ((unaff_s2->flags & 0x2000U) != 0) {
        p_Var3->flags = p_Var3->flags | 0x400;
      }
      if ((unaff_s2->flags & 0x10000U) != 0) {
        p_Var3->flags2 = p_Var3->flags2 | 0x20000;
      }
      if (unaff_s5 != 0) {
        FUN_80031ff0(unaff_s5);
        *(uint *)(unaff_s5 + 0x18) = *(uint *)(unaff_s5 + 0x18) | 0x80;
      }
      if ((*(uint *)(iVar9 + 0x2c) & 0x80) != 0) {
        p_Var3->flags = p_Var3->flags | 0x800;
      }
      if (((unaff_s2->flags & 0x800U) != 0) && (*(short *)(iVar9 + 4) == -1)) {
        sVar2 = FUN_8003c918(p_Var3);
        FUN_8003ce58(p_Var3,(int)sVar2,0,0);
        p_Var3->flags = p_Var3->flags ^ 0x1000000U | 0x100000;
      }
      p_Var3->lightGroup = *(uchar *)&(unaff_s2->rotation).pad;
      p_Var3->spectralLightGroup = *(uchar *)&unaff_s2->specturalLightGroup;
      FUN_800324f0(loadStatus.bigFile.subDirList,p_Var3);
      FUN_8003da28(p_Var3);
      FUN_8003dab0(p_Var3);
      FUN_8003daf8(p_Var3);
      FUN_8003db40(p_Var3);
      FUN_8003da70(p_Var3);
      if ((unaff_s2->flags & 0x10U) == 0) {
        FUN_8003d944(p_Var3);
      }
      FUN_8005c1cc(p_Var3);
      if ((unaff_s2->flags & 0x80U) != 0) {
        uVar7 = p_Var3->flags2;
        p_Var3->flags = p_Var3->flags | 0x800;
        p_Var3->flags2 = uVar7 | 0x20000000;
        if ((*(uint *)(iVar9 + 0x2c) & 0x80000) != 0) {
          p_Var3->flags2 = uVar7 | 0x30000000;
        }
      }
      iVar5 = FUN_8003cb38(p_Var3,0,0);
      if (iVar5 == 0) {
        p_Var3->flags = p_Var3->flags & 0xfdffffffU | 0x100000;
      }
      else {
        piVar6 = (int *)FUN_8003cb38(p_Var3,0,0);
        iVar5 = FUN_800b6b54(p_Var3);
        if (iVar5 != 0) {
          FUN_8003ce58(p_Var3,(int)*(short *)(iVar5 + 6),0,0);
          sVar2 = (p_Var3->position).z;
          *(undefined4 *)&p_Var3->oldPos = *(undefined4 *)&p_Var3->position;
          (p_Var3->oldPos).z = sVar2;
          p_Var3->splineFlags = *(short *)(iVar5 + 4);
          p_Var3->clipBeg = *(short *)(iVar5 + 8);
          p_Var3->clipEnd = *(short *)(iVar5 + 10);
          if ((p_Var3->splineFlags & 0x80U) != 0) {
            p_Var3->flags = p_Var3->flags | 0x1000000;
          }
          if ((p_Var3->splineFlags & 0x100U) != 0) {
            p_Var3->flags = p_Var3->flags | 0x2000000;
          }
          if ((*(ushort *)(iVar5 + 4) & 0x10) == 0) {
            if ((p_Var3->splineFlags & 0x20U) == 0) {
              if ((p_Var3->splineFlags & 0x40U) == 0) goto LAB_80033100;
              iVar5 = *piVar6;
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 4;
              }
              iVar5 = piVar6[1];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 4;
              }
              iVar5 = piVar6[2];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 4;
              }
              iVar5 = piVar6[3];
              if (iVar5 == 0) goto LAB_80033100;
              bVar1 = *(byte *)(iVar5 + 7) | 4;
            }
            else {
              iVar5 = *piVar6;
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 2;
              }
              iVar5 = piVar6[1];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 2;
              }
              iVar5 = piVar6[2];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 2;
              }
              iVar5 = piVar6[3];
              if (iVar5 == 0) goto LAB_80033100;
              bVar1 = *(byte *)(iVar5 + 7) | 2;
            }
          }
          else {
            iVar5 = *piVar6;
            if (iVar5 != 0) {
              *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 1;
            }
            iVar5 = piVar6[1];
            if (iVar5 != 0) {
              *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 1;
            }
            iVar5 = piVar6[2];
            if (iVar5 != 0) {
              *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) | 1;
            }
            iVar5 = piVar6[3];
            if (iVar5 == 0) goto LAB_80033100;
            bVar1 = *(byte *)(iVar5 + 7) | 1;
          }
          *(byte *)(iVar5 + 7) = bVar1;
        }
      }
LAB_80033100:
      FUN_8006772c(p_Var3);
      FUN_80032964(p_Var3);
      iVar9 = FUN_800329e0(p_Var3,iVar9);
      SAVE_RestoreGlobalSaveTracker();
      if (iVar9 == 0) {
        return p_Var3;
      }
      iVar9 = SetObjectIdleData((uint)*(byte *)(iVar9 + 1) * 4 + -4,(_Instance *)(iVar9 + 4));
                    /* WARNING: Subroutine does not return */
      FUN_80034368(p_Var3,&DAT_00100007,iVar9);
    }
  }
  return (_Instance *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_AdditionalCollideFunctions(struct _InstanceList *instanceList /*$a0*/)
 // line 1138, offset 0x800331f0
	/* begin block 1 */
		// Start line: 1139
		// Start offset: 0x800331F0
		// Variables:
	// 		struct _Instance *instance; // $s0
	/* end block 1 */
	// End offset: 0x80033300
	// End Line: 1170

	/* begin block 2 */
		// Start line: 2429
	/* end block 2 */
	// End Line: 2430

void INSTANCE_AdditionalCollideFunctions(_InstanceList *instanceList)

{
  uint in_v0;
  uint in_v1;
  int unaff_s0;
  
  do {
    if ((in_v0 & in_v1) == 0) goto LAB_80033288;
    do {
      if ((*(int *)(unaff_s0 + 0xf8) != 0) && ((*(uint *)(unaff_s0 + 0x18) & 0x24000000) == 0)) {
        gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
        if ((*(int *)(unaff_s0 + 0x1c) != 0) &&
           ((gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2],
            (*(uint *)(*(int *)(unaff_s0 + 0x1c) + 0x2c) & 0x2000000) != 0 &&
            (gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][4],
            (*(uint *)(unaff_s0 + 0x18) & 0x8000000) != 0)))) {
          gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][3];
        }
        (**(code **)(unaff_s0 + 0xf8))(unaff_s0,0x800d0dcc);
      }
LAB_80033288:
      do {
        unaff_s0 = *(int *)(unaff_s0 + 8);
        if (unaff_s0 == 0) {
          gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
          return;
        }
      } while ((BmenuLines[1].vramBlock._2_2_ == 6) &&
              ((**(uint **)(unaff_s0 + 0x1c) & 0x20000) == 0));
      in_v1 = 0x40000;
    } while ((draw[1].dr_env.code[10] & 0x100000) == 0);
    in_v0 = **(uint **)(unaff_s0 + 0x1c);
  } while( true );
}



// decompiled code
// original method signature: 
// long /*$ra*/ INSTANCE_GetSplineFrameNumber(struct _Instance *instance /*$s0*/, struct MultiSpline *spline /*$a1*/)
 // line 1173, offset 0x80033318
	/* begin block 1 */
		// Start line: 1174
		// Start offset: 0x80033318
	/* end block 1 */
	// End offset: 0x80033318
	// End Line: 1174

	/* begin block 2 */
		// Start line: 2520
	/* end block 2 */
	// End Line: 2521

long INSTANCE_GetSplineFrameNumber(_Instance *instance,MultiSpline *spline)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  short sVar7;
  uint in_v0;
  NodeType *pNVar8;
  Spline *spline_00;
  int iVar9;
  int iVar10;
  int iVar11;
  SplineKey *pSVar12;
  uint uVar13;
  uint in_v1;
  int iVar14;
  SplineDef *def;
  NodeType *pNVar15;
  int iVar16;
  ushort uVar17;
  
  if ((in_v0 & in_v1) == 0) {
    if ((BmenuLines[1].vramBlock._2_2_ != 6) && ((draw[1].dr_env.code[10] & 0x100000) == 0)) {
      draw[1].dr_env.code[10] = draw[1].dr_env.code[10] & 0xfffffffb;
    }
    pNVar15 = (instance->node).next;
    while (pNVar15 != (NodeType *)0x0) {
      gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
      if (((pNVar15[3].next != (NodeType *)0x0) &&
          (gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2],
          ((uint)pNVar15[3].next[5].next & 0x2000000) != 0)) &&
         (gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][4],
         ((uint)pNVar15[3].prev & 0x8000000) != 0)) {
        gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][3];
      }
      if (((uint)pNVar15[3].next[5].next & 4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_8003432c(pNVar15,2);
      }
      if (((((pNVar15[4].prev == (NodeType *)0x0) || (((uint)pNVar15[4].prev[5].next & 0x100) == 0))
           && ((BmenuLines[1].vramBlock._2_2_ != 6 ||
               (((uint)(pNVar15[3].next)->prev & 0x20000) != 0)))) &&
          (((draw[1].dr_env.code[10] & 0x100000) == 0 ||
           (((uint)(pNVar15[3].next)->prev & 0x40000) != 0)))) &&
         (((uint)pNVar15[3].prev & 0x10000000) == 0)) {
        uVar1 = *(undefined2 *)((int)&pNVar15[0xb].next + 2);
        uVar2 = *(undefined2 *)&pNVar15[0xc].prev;
        uVar3 = *(undefined2 *)&pNVar15[0xe].next;
        uVar4 = *(undefined2 *)((int)&pNVar15[0xe].next + 2);
        pNVar8 = pNVar15[2].next;
        uVar5 = *(undefined2 *)&pNVar15[0xf].prev;
        *(undefined2 *)&pNVar15[0xc].next = *(undefined2 *)&pNVar15[0xb].next;
        *(undefined2 *)((int)&pNVar15[0xc].next + 2) = uVar1;
        *(undefined2 *)&pNVar15[0xd].prev = uVar2;
        *(undefined2 *)&pNVar15[0xf].next = uVar3;
        *(undefined2 *)((int)&pNVar15[0xf].next + 2) = uVar4;
        *(undefined2 *)&pNVar15[0x10].prev = uVar5;
        if (((uint)pNVar8 & 0x100000) != 0) goto LAB_80033a68;
        def = (SplineDef *)0x0;
        spline_00 = (Spline *)FUN_8003cb38(pNVar15,0,0);
        if ((spline_00 == (Spline *)0x0) ||
           (pNVar8 = pNVar15[2].next, ((uint)pNVar8 & 0x2000000) == 0)) goto LAB_80033a68;
        uVar17 = 1;
        if (((uint)pNVar8 & 0x1000000) != 0) {
          uVar17 = 0xffff;
        }
        if (((uint)(pNVar15[3].next)->prev & 0x10000000) != 0) {
          pNVar15[2].next = (NodeType *)((uint)pNVar8 | 0x400);
          sVar7 = SplineIsWhere(spline_00,def);
          if (sVar7 != 0) {
            if ((int)((uint)uVar17 << 0x10) < 1) {
              pNVar15[4].prev[5].next = (NodeType *)((uint)pNVar15[4].prev[5].next & 0xfffff7ff);
            }
            else {
              pNVar15[4].prev[5].next = (NodeType *)((uint)pNVar15[4].prev[5].next | 0x800);
            }
          }
        }
        iVar9 = FUN_800332b0(pNVar15,spline_00);
        iVar10 = FUN_8003d418(pNVar15,spline_00 + 2,spline_00 + 3,spline_00 + 4);
        if (*(short *)&pNVar15[0x49].next == 0) {
          if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
            FUN_800332b0(pNVar15,spline_00);
            FUN_8002d310(0x800ce680,pNVar15 + 0x28,pNVar15[6].prev,iVar9);
          }
        }
        else {
          iVar11 = FUN_800332b0(pNVar15,spline_00);
          sVar7 = FUN_8003c918(pNVar15);
          iVar16 = (int)sVar7;
          if ((*(ushort *)&pNVar15[0x49].next & 1) != 0) {
            if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
              FUN_800741ac(0x800ce5fc,pNVar15 + 0x28,pNVar15[6].prev,
                           (int)*(short *)((int)&pNVar15[0x49].next + 2));
            }
            if ((short)uVar17 < 1) {
              iVar14 = (int)*(short *)((int)&pNVar15[0x49].next + 2);
              if (iVar11 <= iVar14) {
                if (iVar14 <= iVar9) goto LAB_8003373c;
                if (iVar9 < iVar11) {
                  bVar6 = iVar9 + iVar16 < iVar14;
                  goto LAB_80033734;
                }
              }
            }
            else {
              if (iVar16 < iVar9) {
                iVar9 = iVar16;
              }
              iVar14 = (int)*(short *)((int)&pNVar15[0x49].next + 2);
              if ((iVar11 < iVar14) || (iVar14 < iVar9)) {
                if ((iVar11 < iVar9) && (iVar11 >= iVar14)) {
                  bVar6 = iVar14 + iVar16 < iVar9;
LAB_80033734:
                  if (!bVar6) goto LAB_8003373c;
                }
              }
              else {
LAB_8003373c:
                sVar7 = *(short *)((int)&pNVar15[0x49].next + 2);
                pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next & 0xfdffffff);
                FUN_8003ce58(pNVar15,(int)sVar7,0,0);
                iVar10 = 0;
                *(ushort *)&pNVar15[0x49].next = *(ushort *)&pNVar15[0x49].next & 0xfffe;
              }
            }
          }
          if ((*(ushort *)&pNVar15[0x49].next & 2) != 0) {
            if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
              FUN_8002d310(0x800ce64c,pNVar15 + 0x28,pNVar15[6].prev,
                           (int)*(short *)&pNVar15[0x4a].prev);
            }
            if (uVar17 == 1) {
              iVar16 = (int)*(short *)((int)&pNVar15[0x4a].prev + 2);
              if (((iVar9 <= iVar16) && (iVar16 <= iVar11)) ||
                 (iVar11 < (int)*(short *)&pNVar15[0x4a].prev)) {
                if ((*(uint *)&(spline_00->key->point).y & 0x6000000) == 0) {
                  sVar7 = *(short *)((int)&pNVar15[0x4a].prev + 2);
LAB_800338a4:
                  iVar9 = (int)sVar7;
                  iVar10 = 1;
                }
                else {
                  iVar9 = (int)*(short *)&pNVar15[0x4a].prev;
                }
LAB_800338a8:
                FUN_8003ce58(pNVar15,iVar9,0,0);
              }
            }
            else {
              if ((((int)*(short *)&pNVar15[0x4a].prev <= iVar9) &&
                  (iVar11 <= (int)*(short *)&pNVar15[0x4a].prev)) ||
                 ((int)*(short *)((int)&pNVar15[0x4a].prev + 2) < iVar11)) {
                if ((*(uint *)&(spline_00->key->point).y & 0x6000000) == 0) {
                  sVar7 = *(short *)&pNVar15[0x4a].prev;
                  goto LAB_800338a4;
                }
                iVar9 = (int)*(short *)((int)&pNVar15[0x4a].prev + 2);
                goto LAB_800338a8;
              }
            }
          }
        }
        if (iVar10 < 1) {
LAB_80033a68:
          if (pNVar15[0x1e].prev != (NodeType *)0x0) {
            if (((uint)pNVar15[3].prev & 1) == 0) {
              (*(code *)pNVar15[0x1e].prev)(pNVar15,0x800d0dcc);
            }
            else {
              FUN_80032024(pNVar15,0x800d0dcc);
            }
          }
          iVar9 = (int)*(short *)&pNVar15[0xc].prev - (int)*(short *)&pNVar15[0xd].prev;
          if (0x8000 < iVar9) {
            FUN_800341c8(pNVar15);
          }
          if (iVar9 < -0x8000) {
            FUN_800341c8(pNVar15);
          }
                    /* WARNING: Subroutine does not return */
          FUN_8003432c(pNVar15,0x2f);
        }
        if (((uint)(pNVar15[3].next)->prev & 0x10000000) != 0) {
          pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next & 0xfdfffbff | 0x100000);
        }
        pNVar8 = (pNVar15[3].next)->prev;
        if (((uint)pNVar8 & 0x2000) == 0) {
          if (((uint)pNVar8 & 0x1000) == 0) {
            if (((uint)pNVar8 & 0x1000000) != 0) {
              pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next & 0xfdffffff);
            }
          }
          else {
            pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next & 0xfdffffff);
            if (((uint)(pNVar15[3].next)->prev & 0x800000) != 0) {
              FUN_8003c6c8(pNVar15);
            }
          }
          pSVar12 = spline_00->key;
          if (((pSVar12 != (SplineKey *)0x0) ||
              (pSVar12 = *(SplineKey **)&spline_00->numkeys, pSVar12 != (SplineKey *)0x0)) &&
             (((*(byte *)((int)&(pSVar12->point).z + 1) & 4) == 0 &&
              (((uint)(pNVar15[3].next)->prev & 0x800000) == 0)))) {
            pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next ^ 0x1000000);
          }
          if (((((uint)(pNVar15[3].next)->prev & 0x200000) != 0) &&
              (pNVar15[5].prev != (NodeType *)0x0)) &&
             (pNVar8 = (pNVar15[5].prev)->prev, pNVar8 != (NodeType *)0x0)) {
            FUN_8001e174(pNVar15,pNVar8 + 1,0);
          }
          goto LAB_80033a68;
        }
        pNVar15[2].next = (NodeType *)((uint)pNVar15[2].next | 0x100000);
        FUN_800342f8(pNVar15);
      }
      pNVar15 = pNVar15[1].prev;
    }
  }
  gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
  if ((short)loadStatus.decompressLen != 1000) {
    draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
  }
  uVar13 = FUN_800b78d4();
  if (uVar13 != 0) {
    uVar13 = draw[1].dr_env.code[10] | 4;
    draw[1].dr_env.code[10] = uVar13;
  }
  return uVar13;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ProcessFunctions(struct _InstanceList *instanceList /*$a0*/)
 // line 1186, offset 0x80033350
	/* begin block 1 */
		// Start line: 1187
		// Start offset: 0x80033350

		/* begin block 1.1 */
			// Start line: 1193
			// Start offset: 0x80033390
			// Variables:
		// 		struct _Instance *instance; // $s0

			/* begin block 1.1.1 */
				// Start line: 1215
				// Start offset: 0x8003344C
				// Variables:
			// 		int hidden; // $s2
			// 		int burning; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80033500
			// End Line: 1238

			/* begin block 1.1.2 */
				// Start line: 1264
				// Start offset: 0x800335D0
				// Variables:
			// 		long prevFrame; // $s2
			// 		struct MultiSpline *multi; // $s4

				/* begin block 1.1.2.1 */
					// Start line: 1271
					// Start offset: 0x80033600
					// Variables:
				// 		long endOfSpline; // $s6
				// 		short direction; // $s7

					/* begin block 1.1.2.1.1 */
						// Start line: 1310
						// Start offset: 0x800336C0
						// Variables:
					// 		long frame; // $s3
					// 		long maxFrames; // $s1
					/* end block 1.1.2.1.1 */
					// End offset: 0x80033900
					// End Line: 1389

					/* begin block 1.1.2.1.2 */
						// Start line: 1400
						// Start offset: 0x80033934
					/* end block 1.1.2.1.2 */
					// End offset: 0x80033958
					// End Line: 1405
				/* end block 1.1.2.1 */
				// End offset: 0x80033AD0
				// End Line: 1465
			/* end block 1.1.2 */
			// End offset: 0x80033AD0
			// End Line: 1467

			/* begin block 1.1.3 */
				// Start line: 1490
				// Start offset: 0x80033B14
				// Variables:
			// 		int killTest; // $s1
			/* end block 1.1.3 */
			// End offset: 0x80033B50
			// End Line: 1497
		/* end block 1.1 */
		// End offset: 0x80033B84
		// End Line: 1509
	/* end block 1 */
	// End offset: 0x80033BCC
	// End Line: 1523

	/* begin block 2 */
		// Start line: 2550
	/* end block 2 */
	// End Line: 2551

void INSTANCE_ProcessFunctions(_InstanceList *instanceList)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  short sVar6;
  uint in_v0;
  long lVar7;
  uint uVar8;
  Spline *spline;
  int iVar9;
  int iVar10;
  int iVar11;
  SplineKey *pSVar12;
  int iVar13;
  SplineDef *def;
  _Instance *p_Var14;
  int iVar15;
  ushort uVar16;
  
  p_Var14 = instanceList->first;
  draw[1].dr_env.code[10] = in_v0;
  gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
  do {
    if (p_Var14 == (_Instance *)0x0) {
      if ((short)loadStatus.decompressLen != 1000) {
        draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
      }
      gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1];
      iVar9 = FUN_800b78d4();
      if (iVar9 != 0) {
        draw[1].dr_env.code[10] = draw[1].dr_env.code[10] | 4;
      }
      return;
    }
    lVar7 = gameTrackerX.controlCommand[1][1];
    if (((p_Var14->object != (Object *)0x0) &&
        (lVar7 = gameTrackerX.controlCommand[1][1], (p_Var14->object->oflags2 & 0x2000000U) != 0))
       && (lVar7 = gameTrackerX.controlCommand[1][4], (p_Var14->flags2 & 0x8000000U) != 0)) {
      lVar7 = gameTrackerX.controlCommand[1][3];
    }
    if ((p_Var14->object->oflags2 & 4U) != 0) {
      gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1];
      gameTrackerX.controlCommand[1][1] = lVar7;
                    /* WARNING: Subroutine does not return */
      FUN_8003432c(p_Var14,2);
    }
    if (((((p_Var14->intro == (Intro *)0x0) ||
          (gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1],
          (p_Var14->intro->flags & 0x100U) == 0)) &&
         ((BmenuLines[1].vramBlock._2_2_ != 6 ||
          (gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1],
          (p_Var14->object->oflags & 0x20000U) != 0)))) &&
        (((draw[1].dr_env.code[10] & 0x100000) == 0 ||
         (gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1],
         (p_Var14->object->oflags & 0x40000U) != 0)))) &&
       (gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1],
       (p_Var14->flags2 & 0x10000000U) == 0)) {
      sVar6 = (p_Var14->position).y;
      sVar1 = (p_Var14->position).z;
      sVar2 = (p_Var14->rotation).x;
      sVar3 = (p_Var14->rotation).y;
      uVar8 = p_Var14->flags;
      sVar4 = (p_Var14->rotation).z;
      gameTrackerX.controlCommand[1][2] = gameTrackerX.controlCommand[1][1];
      (p_Var14->oldPos).x = (p_Var14->position).x;
      gameTrackerX.controlCommand[1][1] = lVar7;
      (p_Var14->oldPos).y = sVar6;
      (p_Var14->oldPos).z = sVar1;
      (p_Var14->oldRotation).x = sVar2;
      (p_Var14->oldRotation).y = sVar3;
      (p_Var14->oldRotation).z = sVar4;
      if ((uVar8 & 0x100000) != 0) goto LAB_80033a68;
      def = (SplineDef *)0x0;
      spline = (Spline *)FUN_8003cb38(p_Var14,0,0);
      if ((spline == (Spline *)0x0) || (uVar8 = p_Var14->flags, (uVar8 & 0x2000000) == 0))
      goto LAB_80033a68;
      uVar16 = 1;
      if ((uVar8 & 0x1000000) != 0) {
        uVar16 = 0xffff;
      }
      if ((p_Var14->object->oflags & 0x10000000U) != 0) {
        p_Var14->flags = uVar8 | 0x400;
        sVar6 = SplineIsWhere(spline,def);
        if (sVar6 != 0) {
          if ((int)((uint)uVar16 << 0x10) < 1) {
            p_Var14->intro->flags = p_Var14->intro->flags & 0xfffff7ff;
          }
          else {
            p_Var14->intro->flags = p_Var14->intro->flags | 0x800;
          }
        }
      }
      iVar9 = FUN_800332b0(p_Var14,spline);
      iVar10 = FUN_8003d418(p_Var14,spline + 2,spline + 3,spline + 4);
      if (p_Var14->splineFlags == 0) {
        if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
          FUN_800332b0(p_Var14,spline);
          FUN_8002d310(0x800ce680,p_Var14->introName,p_Var14->introNum,iVar9);
        }
      }
      else {
        iVar11 = FUN_800332b0(p_Var14,spline);
        sVar6 = FUN_8003c918(p_Var14);
        iVar15 = (int)sVar6;
        if ((p_Var14->splineFlags & 1U) != 0) {
          if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
            FUN_800741ac(0x800ce5fc,p_Var14->introName,p_Var14->introNum,(int)p_Var14->targetFrame);
          }
          if ((short)uVar16 < 1) {
            iVar13 = (int)p_Var14->targetFrame;
            if (iVar11 <= iVar13) {
              if (iVar13 <= iVar9) goto LAB_8003373c;
              if (iVar9 < iVar11) {
                bVar5 = iVar9 + iVar15 < iVar13;
                goto LAB_80033734;
              }
            }
          }
          else {
            if (iVar15 < iVar9) {
              iVar9 = iVar15;
            }
            iVar13 = (int)p_Var14->targetFrame;
            if ((iVar11 < iVar13) || (iVar13 < iVar9)) {
              if ((iVar11 < iVar9) && (iVar11 >= iVar13)) {
                bVar5 = iVar13 + iVar15 < iVar9;
LAB_80033734:
                if (!bVar5) goto LAB_8003373c;
              }
            }
            else {
LAB_8003373c:
              p_Var14->flags = p_Var14->flags & 0xfdffffff;
              FUN_8003ce58(p_Var14,(int)p_Var14->targetFrame,0,0);
              iVar10 = 0;
              p_Var14->splineFlags = p_Var14->splineFlags & 0xfffe;
            }
          }
        }
        if ((p_Var14->splineFlags & 2U) != 0) {
          if ((draw[0].dr_env.code[1] & 0x400000) != 0) {
            FUN_8002d310(0x800ce64c,p_Var14->introName,p_Var14->introNum,(int)p_Var14->clipBeg);
          }
          if (uVar16 == 1) {
            if (((iVar9 <= (int)p_Var14->clipEnd) && ((int)p_Var14->clipEnd <= iVar11)) ||
               (iVar11 < (int)p_Var14->clipBeg)) {
              if ((*(uint *)&(spline->key->point).y & 0x6000000) == 0) {
                sVar6 = p_Var14->clipEnd;
LAB_800338a4:
                iVar9 = (int)sVar6;
                iVar10 = 1;
              }
              else {
                iVar9 = (int)p_Var14->clipBeg;
              }
LAB_800338a8:
              FUN_8003ce58(p_Var14,iVar9,0,0);
            }
          }
          else {
            if ((((int)p_Var14->clipBeg <= iVar9) && (iVar11 <= (int)p_Var14->clipBeg)) ||
               ((int)p_Var14->clipEnd < iVar11)) {
              if ((*(uint *)&(spline->key->point).y & 0x6000000) == 0) {
                sVar6 = p_Var14->clipBeg;
                goto LAB_800338a4;
              }
              iVar9 = (int)p_Var14->clipEnd;
              goto LAB_800338a8;
            }
          }
        }
      }
      if (iVar10 < 1) {
LAB_80033a68:
        if (p_Var14->processFunc != (_func_1 *)0x0) {
          if ((p_Var14->flags2 & 1U) == 0) {
            (*p_Var14->processFunc)(p_Var14,0x800d0dcc);
          }
          else {
            FUN_80032024(p_Var14,0x800d0dcc);
          }
        }
        iVar9 = (int)(p_Var14->position).z - (int)(p_Var14->oldPos).z;
        if (0x8000 < iVar9) {
          FUN_800341c8(p_Var14);
        }
        if (iVar9 < -0x8000) {
          FUN_800341c8(p_Var14);
        }
                    /* WARNING: Subroutine does not return */
        FUN_8003432c(p_Var14,0x2f);
      }
      if ((p_Var14->object->oflags & 0x10000000U) != 0) {
        p_Var14->flags = p_Var14->flags & 0xfdfffbffU | 0x100000;
      }
      uVar8 = p_Var14->object->oflags;
      if ((uVar8 & 0x2000) == 0) {
        if ((uVar8 & 0x1000) == 0) {
          if ((uVar8 & 0x1000000) != 0) {
            p_Var14->flags = p_Var14->flags & 0xfdffffff;
          }
        }
        else {
          p_Var14->flags = p_Var14->flags & 0xfdffffff;
          if ((p_Var14->object->oflags & 0x800000U) != 0) {
            FUN_8003c6c8(p_Var14);
          }
        }
        pSVar12 = spline->key;
        if (((pSVar12 != (SplineKey *)0x0) ||
            (pSVar12 = *(SplineKey **)&spline->numkeys, pSVar12 != (SplineKey *)0x0)) &&
           (((*(byte *)((int)&(pSVar12->point).z + 1) & 4) == 0 &&
            ((p_Var14->object->oflags & 0x800000U) == 0)))) {
          p_Var14->flags = p_Var14->flags ^ 0x1000000;
        }
        if ((((p_Var14->object->oflags & 0x200000U) != 0) &&
            ((int *)p_Var14->introData != (int *)0x0)) &&
           (iVar9 = *(int *)p_Var14->introData, iVar9 != 0)) {
          FUN_8001e174(p_Var14,iVar9 + 8,0);
        }
        goto LAB_80033a68;
      }
      p_Var14->flags = p_Var14->flags | 0x100000;
      FUN_800342f8(p_Var14);
    }
    p_Var14 = p_Var14->next;
    gameTrackerX.controlCommand[1][1] = gameTrackerX.controlCommand[1][2];
  } while( true );
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_BirthObject(struct _Instance *parent /*$s2*/, struct Object *object /*$s4*/, int modelNum /*$s1*/)
 // line 1526, offset 0x80033bfc
	/* begin block 1 */
		// Start line: 1527
		// Start offset: 0x80033BFC
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80033E4C
	// End Line: 1598

	/* begin block 2 */
		// Start line: 3577
	/* end block 2 */
	// End Line: 3578

_Instance * INSTANCE_BirthObject(_Instance *parent,Object *object,int modelNum)

{
  short sVar1;
  _GlobalSaveTracker *p_Var2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  _Instance *unaff_s0;
  int iVar6;
  _Instance *unaff_s2;
  int unaff_s4;
  
  sVar1 = (unaff_s0->position).z;
  *(undefined4 *)&unaff_s0->initialPos = *(undefined4 *)&unaff_s0->position;
  (unaff_s0->initialPos).z = sVar1;
  sVar1 = (unaff_s2->position).z;
  *(undefined4 *)&unaff_s0->oldPos = *(undefined4 *)&unaff_s2->position;
  (unaff_s0->oldPos).z = sVar1;
  uVar5 = *(undefined4 *)&(unaff_s2->rotation).z;
  *(undefined4 *)&unaff_s0->rotation = *(undefined4 *)&unaff_s2->rotation;
  *(undefined4 *)&(unaff_s0->rotation).z = uVar5;
  uVar5 = *(undefined4 *)&(unaff_s2->scale).z;
  *(undefined4 *)&unaff_s0->scale = *(undefined4 *)&unaff_s2->scale;
  *(undefined4 *)&(unaff_s0->scale).z = uVar5;
  unaff_s0->lightGroup = unaff_s2->lightGroup;
  unaff_s0->spectralLightGroup = unaff_s2->spectralLightGroup;
  p_Var2 = GlobalSave;
  unaff_s0->currentStreamUnitID = unaff_s2->currentStreamUnitID;
  unaff_s0->birthStreamUnitID = unaff_s2->birthStreamUnitID;
  sVar1 = p_Var2->CurrentBirthID;
  iVar6 = 0;
  p_Var2->CurrentBirthID = sVar1 + 1;
  unaff_s0->introUniqueID = (int)sVar1;
  FUN_800bd564(unaff_s0->introName,*(undefined4 *)(unaff_s4 + 0x24));
  do {
    iVar3 = FUN_800bd7a4(unaff_s0->introName);
    iVar4 = (int)&(unaff_s0->node).prev + iVar6;
    if (iVar3 <= iVar6) goto LAB_80033cec;
    iVar6 = iVar6 + 1;
  } while (*(char *)(iVar4 + 0x140) != '_');
  *(undefined *)(iVar4 + 0x140) = 0;
LAB_80033cec:
  unaff_s0->parent = unaff_s2;
  unaff_s0->intro = unaff_s2->intro;
  unaff_s0->introData = unaff_s2->introData;
  FUN_80035cac(&unaff_s0->light_color);
  if ((unaff_s0->object->oflags & 0x100U) != 0) {
    FUN_80033e04();
  }
  iVar6 = FUN_8003cb38();
  if (iVar6 == 0) {
    unaff_s0->flags = unaff_s0->flags | 0x100000;
  }
  if ((unaff_s2->flags2 & 0x8000000U) != 0) {
    unaff_s0->flags2 = unaff_s0->flags2 | 0x8000000;
  }
  FUN_800324f0(loadStatus.bigFile.subDirList);
  FUN_8003da28();
  FUN_8003dab0();
  FUN_8003daf8();
  FUN_8003db40();
  FUN_8003da70();
  unaff_s0->flags = unaff_s0->flags | 2;
  FUN_8003d944();
  FUN_8006772c();
  FUN_800329e0();
  return unaff_s0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_BuildStaticShadow(struct _Instance *instance /*$a0*/)
 // line 1615, offset 0x80033e6c
	/* begin block 1 */
		// Start line: 3230
	/* end block 1 */
	// End Line: 3231

	/* begin block 2 */
		// Start line: 3761
	/* end block 2 */
	// End Line: 3762

void INSTANCE_BuildStaticShadow(_Instance *instance)

{
  undefined4 uVar1;
  uint in_v1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_s0;
  int iVar7;
  int unaff_s1;
  uint *unaff_s2;
  
  if ((unaff_s2[0xb] & in_v1) == 0) {
    iVar7 = unaff_s1 + 0x194;
    FUN_80092b3c(iVar7,*(undefined4 *)(unaff_s0 * 4 + unaff_s2[3]));
    uVar1 = FUN_8009509c();
    FUN_8008fe64(iVar7,uVar1,0);
    FUN_8008fc74(iVar7,FUN_800356b8);
  }
  if ((*unaff_s2 & 0x4000000) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 4;
  }
  if ((*unaff_s2 & 0x200) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x40;
  }
  if ((*unaff_s2 & 8) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x8000000;
  }
  if ((*unaff_s2 & 0x1000800) == 0) {
    *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x2000000;
  }
  if ((*unaff_s2 & 0x20000000) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x20;
  }
  iVar7 = (int)*(short *)(unaff_s2 + 2);
  piVar6 = (int *)unaff_s2[3];
  iVar4 = 0;
  while (iVar7 != 0) {
    iVar5 = *(int *)(*piVar6 + 0x18);
    iVar3 = *(int *)(*piVar6 + 0x1c);
    while (iVar5 != 0) {
      piVar2 = *(int **)(iVar3 + 0x14);
      if (piVar2 != (int *)0x0) {
        iVar4 = iVar4 + *piVar2 + piVar2[2] + piVar2[4];
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + 0x18;
    }
    iVar7 = iVar7 + -1;
    piVar6 = piVar6 + 1;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_s1 + 0xe8) = 0;
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x40000;
    if (*(int *)(unaff_s1 + 0x54) == 0) {
      *(undefined4 *)(unaff_s1 + 0x54) = 12000;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fbb0(((int)*(short *)(*(int *)(unaff_s1 + 0x1c) + 8) + iVar4) * 8,0xe);
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_DefaultInit(struct _Instance *instance /*$s1*/, struct Object *object /*$s2*/, int modelNum /*$s0*/)
 // line 1649, offset 0x80033e74
	/* begin block 1 */
		// Start line: 1650
		// Start offset: 0x80033E74
		// Variables:
	// 		int i; // $t3
	// 		int j; // $a3
	// 		int numHPrims; // $a2
	// 		int numModels; // $s0
	// 		struct _HPrim *hprim; // $a2
	// 		struct _Model **pModel; // $t7
	// 		struct _HModel *hmodel; // $t8

		/* begin block 1.1 */
			// Start line: 1703
			// Start offset: 0x80033FFC
			// Variables:
		// 		struct _Model *model; // $v0
		// 		struct _Segment *seg; // $a1

			/* begin block 1.1.1 */
				// Start line: 1708
				// Start offset: 0x80034014
				// Variables:
			// 		struct _HInfo *hinfo; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8003403C
			// End Line: 1712
		/* end block 1.1 */
		// End offset: 0x80034048
		// End Line: 1713

		/* begin block 1.2 */
			// Start line: 1722
			// Start offset: 0x800340A4
			// Variables:
		// 		struct _Model *model; // $s0
		// 		struct _Segment *seg; // $t4

			/* begin block 1.2.1 */
				// Start line: 1733
				// Start offset: 0x800340C0
				// Variables:
			// 		struct _HInfo *hinfo; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 1737
					// Start offset: 0x800340D0
					// Variables:
				// 		int k; // $v1
				// 		struct _HFace *hface; // $t0
				// 		struct _HSphere *hsphere; // $t1
				// 		struct _HBox *hbox; // $t2
				/* end block 1.2.1.1 */
				// End offset: 0x800341B8
				// End Line: 1776
			/* end block 1.2.1 */
			// End offset: 0x800341B8
			// End Line: 1777
		/* end block 1.2 */
		// End offset: 0x800341D0
		// End Line: 1778
	/* end block 1 */
	// End offset: 0x80034214
	// End Line: 1790

	/* begin block 2 */
		// Start line: 3820
	/* end block 2 */
	// End Line: 3821

void INSTANCE_DefaultInit(_Instance *instance,Object *object,int modelNum)

{
  uint in_v0;
  undefined4 uVar1;
  uint in_v1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_s0;
  int iVar7;
  int unaff_s1;
  uint *unaff_s2;
  
  if ((in_v0 & in_v1) == 0) {
    iVar7 = unaff_s1 + 0x194;
    FUN_80092b3c(iVar7,*(undefined4 *)(unaff_s0 * 4 + unaff_s2[3]));
    uVar1 = FUN_8009509c();
    FUN_8008fe64(iVar7,uVar1,0);
    FUN_8008fc74(iVar7,FUN_800356b8);
  }
  if ((*unaff_s2 & 0x4000000) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 4;
  }
  if ((*unaff_s2 & 0x200) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x40;
  }
  if ((*unaff_s2 & 8) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x8000000;
  }
  if ((*unaff_s2 & 0x1000800) == 0) {
    *(uint *)(unaff_s1 + 0x14) = *(uint *)(unaff_s1 + 0x14) | 0x2000000;
  }
  if ((*unaff_s2 & 0x20000000) != 0) {
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x20;
  }
  iVar7 = (int)*(short *)(unaff_s2 + 2);
  piVar6 = (int *)unaff_s2[3];
  iVar4 = 0;
  while (iVar7 != 0) {
    iVar5 = *(int *)(*piVar6 + 0x18);
    iVar3 = *(int *)(*piVar6 + 0x1c);
    while (iVar5 != 0) {
      piVar2 = *(int **)(iVar3 + 0x14);
      if (piVar2 != (int *)0x0) {
        iVar4 = iVar4 + *piVar2 + piVar2[2] + piVar2[4];
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + 0x18;
    }
    iVar7 = iVar7 + -1;
    piVar6 = piVar6 + 1;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_s1 + 0xe8) = 0;
    *(uint *)(unaff_s1 + 0x18) = *(uint *)(unaff_s1 + 0x18) | 0x40000;
    if (*(int *)(unaff_s1 + 0x54) == 0) {
      *(undefined4 *)(unaff_s1 + 0x54) = 12000;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fbb0(((int)*(short *)(*(int *)(unaff_s1 + 0x1c) + 8) + iVar4) * 8,0xe);
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_PlainDeath(struct _Instance *instance /*$s5*/)
 // line 1793, offset 0x80034230
	/* begin block 1 */
		// Start line: 1794
		// Start offset: 0x80034230

		/* begin block 1.1 */
			// Start line: 1825
			// Start offset: 0x800342FC
			// Variables:
		// 		struct _Instance *oldOn; // $a0
		/* end block 1.1 */
		// End offset: 0x80034324
		// End Line: 1832
	/* end block 1 */
	// End offset: 0x80034324
	// End Line: 1834

	/* begin block 2 */
		// Start line: 4267
	/* end block 2 */
	// End Line: 4268

void INSTANCE_PlainDeath(_Instance *instance)

{
  uint in_v0;
  int iVar1;
  int in_v1;
  undefined4 in_a1;
  undefined4 in_a2;
  uint unaff_s2;
  int unaff_s5;
  uint uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  *(uint *)(unaff_s5 + 0x18) = in_v0 | 0x1000;
  uStack00000010 = (in_v0 | 0x1000) & unaff_s2;
  uStack00000014 = 0;
  uStack00000018 = 0;
  FUN_8003e67c(*(undefined4 *)(in_v1 + 0x28),in_a1,in_a2,*(uint *)(in_v1 + 0x2c) & 0x2000000);
  uStack00000010 = *(uint *)(unaff_s5 + 0x18) & unaff_s2;
  uStack00000014 = 0;
  uStack00000018 = 0;
  FUN_8003e67c(*(undefined4 *)(*(int *)(unaff_s5 + 0x1c) + 0x28));
  iVar1 = FUN_8003466c(*(undefined4 *)(unaff_s5 + 0x8c));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffff7f;
  }
  FUN_800b6ab0();
  *(uint *)(unaff_s5 + 0x14) = *(uint *)(unaff_s5 + 0x14) | 0x20;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_KillInstance(struct _Instance *instance /*$a0*/)
 // line 1838, offset 0x80034360
	/* begin block 1 */
		// Start line: 4364
	/* end block 1 */
	// End Line: 4365

void INSTANCE_KillInstance(_Instance *instance)

{
  return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ INSTANCE_Query(struct _Instance *Inst /*$a0*/, int Query /*$a1*/)
 // line 1857, offset 0x80034394
	/* begin block 1 */
		// Start line: 1858
		// Start offset: 0x80034394
		// Variables:
	// 		unsigned long (*Func)(); // $v0
	/* end block 1 */
	// End offset: 0x800343C0
	// End Line: 1871

	/* begin block 2 */
		// Start line: 3714
	/* end block 2 */
	// End Line: 3715

ulong INSTANCE_Query(_Instance *Inst,int Query)

{
  ulong uVar1;
  code *unaff_s1;
  
  FUN_80031ff0();
  uVar1 = (*unaff_s1)();
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_Post(struct _Instance *Inst /*$s0*/, int Message /*$s2*/, int Data /*$s3*/)
 // line 1875, offset 0x800343d0
	/* begin block 1 */
		// Start line: 1876
		// Start offset: 0x800343D0
		// Variables:
	// 		void (*Func)(); // $s1
	/* end block 1 */
	// End offset: 0x80034418
	// End Line: 1886

	/* begin block 2 */
		// Start line: 4430
	/* end block 2 */
	// End Line: 4431

void INSTANCE_Post(_Instance *Inst,int Message,int Data)

{
  int in_v0;
  _Instance *p_Var1;
  
  p_Var1 = *(_Instance **)(in_v0 + 4);
  while( true ) {
    if (p_Var1 == (_Instance *)0x0) {
      return;
    }
    if (p_Var1 != Inst) break;
    p_Var1 = p_Var1->next;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8003432c(p_Var1,1);
}



// autogenerated function stub: 
// void /*$ra*/ INSTANCE_Broadcast(struct _Instance *sender /*$s2*/, long whatAmIMask /*$s3*/, int Message /*$s4*/, int Data /*$s5*/)
void INSTANCE_Broadcast(struct _Instance *sender, long whatAmIMask, int Message, int Data)
{ // line 1892, offset 0x80034434
	/* begin block 1 */
		// Start line: 1893
		// Start offset: 0x80034434
		// Variables:
			struct _Instance *instance; // $s0
			int plane; // $s1
	/* end block 1 */
	// End offset: 0x800344BC
	// End Line: 1906

	/* begin block 2 */
		// Start line: 4468
	/* end block 2 */
	// End Line: 4469

	/* begin block 3 */
		// Start line: 4472
	/* end block 3 */
	// End Line: 4473

}


// decompiled code
// original method signature: 
// int /*$ra*/ INSTANCE_InPlane(struct _Instance *instance /*$a0*/, int plane /*$a1*/)
 // line 1911, offset 0x800344e0
	/* begin block 1 */
		// Start line: 4518
	/* end block 1 */
	// End Line: 4519

	/* begin block 2 */
		// Start line: 4519
	/* end block 2 */
	// End Line: 4520

int INSTANCE_InPlane(_Instance *instance,int plane)

{
  _Instance **pp_Var1;
  int in_v1;
  
  if (in_v1 != 0) {
    do {
      pp_Var1 = (_Instance **)(in_v1 + 0x3c);
      in_v1 = *(int *)(in_v1 + 8);
      if (*pp_Var1 == instance) {
        return 1;
      }
    } while (in_v1 != 0);
  }
  return 0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ INSTANCE_FindWithID(long uniqueID /*$a0*/)
 // line 1938, offset 0x8003453c
	/* begin block 1 */
		// Start line: 1940
		// Start offset: 0x8003453C
		// Variables:
	// 		struct _Instance *instance; // $v1
	// 		struct _Instance *next; // $v1
	// 		long ret; // $a1
	/* end block 1 */
	// End offset: 0x80034574
	// End Line: 1956

	/* begin block 2 */
		// Start line: 3876
	/* end block 2 */
	// End Line: 3877

	/* begin block 3 */
		// Start line: 4547
	/* end block 3 */
	// End Line: 4548

long INSTANCE_FindWithID(long uniqueID)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int in_a2;
  int iVar3;
  int unaff_s3;
  
  iVar3 = *(int *)(in_v0 + 4);
  if (in_a2 != 0) {
    iVar3 = *(int *)(in_a2 + 8);
  }
  if (unaff_s3 == 0) {
    do {
      iVar2 = iVar3;
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 8);
      iVar1 = FUN_80074604(iVar2 + 0x140);
    } while (iVar1 != 0);
  }
  else {
    do {
      iVar2 = iVar3;
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 8);
    } while ((*(int *)(iVar2 + 0x34) != unaff_s3) ||
            (iVar1 = FUN_80074604(iVar2 + 0x140), iVar1 != 0));
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_FindWithName(long areaID /*$s3*/, char *instanceName /*$s4*/, struct _Instance *startInstance /*$a2*/)
 // line 1995, offset 0x8003457c
	/* begin block 1 */
		// Start line: 1996
		// Start offset: 0x8003457C
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _Instance *ret; // $s2
	// 		struct _Instance *next; // $s1
	/* end block 1 */
	// End offset: 0x8003462C
	// End Line: 2039

	/* begin block 2 */
		// Start line: 3990
	/* end block 2 */
	// End Line: 3991

	/* begin block 3 */
		// Start line: 4624
	/* end block 3 */
	// End Line: 4625

_Instance * INSTANCE_FindWithName(long areaID,char *instanceName,_Instance *startInstance)

{
  int iVar1;
  _Instance *unaff_s1;
  _Instance *p_Var2;
  _Instance *unaff_s2;
  int unaff_s3;
  
  do {
    p_Var2 = unaff_s1;
    if (p_Var2 == (_Instance *)0x0) {
      return unaff_s2;
    }
    unaff_s1 = p_Var2->next;
  } while ((p_Var2->birthStreamUnitID != unaff_s3) ||
          (iVar1 = FUN_80074604(p_Var2->introName), iVar1 != 0));
  return p_Var2;
}



// decompiled code
// original method signature: 
// struct Intro * /*$ra*/ INSTANCE_FindIntro(long areaID /*$a0*/, long introUniqueID /*$s1*/)
 // line 2065, offset 0x80034650
	/* begin block 1 */
		// Start line: 2066
		// Start offset: 0x80034650
		// Variables:
	// 		struct Intro *ret; // $s0
	// 		long i; // $a0
	// 		struct Level *level; // $v1
	/* end block 1 */
	// End offset: 0x800346BC
	// End Line: 2086

	/* begin block 2 */
		// Start line: 4130
	/* end block 2 */
	// End Line: 4131

Intro * INSTANCE_FindIntro(long areaID,long introUniqueID)

{
  Intro *unaff_s0;
  
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_Find(long introUniqueID /*$a0*/)
 // line 2090, offset 0x800346d4
	/* begin block 1 */
		// Start line: 2092
		// Start offset: 0x800346D4
		// Variables:
	// 		struct _Instance *instance; // $v1
	/* end block 1 */
	// End offset: 0x8003470C
	// End Line: 2098

	/* begin block 2 */
		// Start line: 4810
	/* end block 2 */
	// End Line: 4811

	/* begin block 3 */
		// Start line: 4811
	/* end block 3 */
	// End Line: 4812

	/* begin block 4 */
		// Start line: 4813
	/* end block 4 */
	// End Line: 4814

_Instance * INSTANCE_Find(long introUniqueID)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  Intro *pIVar9;
  Object *pOVar10;
  uint uVar11;
  int in_a1;
  uint uVar12;
  undefined4 *in_a2;
  _Instance *unaff_s0;
  Intro *pIVar13;
  Intro *pIVar14;
  int unaff_s2;
  _Instance *p_Var15;
  int iVar16;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined uStack00000018;
  
  iVar5 = *(int *)(**(int **)(in_a1 + 8) + 0x48);
  iVar6 = FUN_800344d4((int)*(short *)(unaff_s2 + 0xc));
  if (iVar6 == 0) {
    uStack00000010 = *(undefined4 *)(unaff_s2 + 4);
    uStack00000014 = *(undefined4 *)(unaff_s2 + 8);
    uStack00000018 = 0;
    FUN_80037e0c((int)*(short *)(unaff_s2 + 0x10));
    FUN_8005fb28();
    iVar6 = FUN_80058c40(&stack0x00000010);
    FUN_8005fb38();
    FUN_80037e0c();
    if (iVar6 != 0) {
      iVar16 = *(int *)(iVar6 + 0x10);
      if ((*(short *)(iVar6 + 0x14) == 2) &&
         ((p_Var15 = unaff_s0, *(ushort *)(unaff_s2 + 0x12) == 0 ||
          (p_Var15 = (_Instance *)FUN_8003466c((uint)*(ushort *)(unaff_s2 + 0x12)),
          p_Var15 != (_Instance *)0x0)))) {
        if ((((*(uint *)(iVar16 + 0x2c) & 0x10000000) == 0) ||
            (FUN_8003df90(iVar6), (*(uint *)(iVar16 + 0x2c) & 0x10000000) == 0)) &&
           (unaff_s0 = (_Instance *)FUN_80032348(loadStatus.bigFile.subDirList),
           unaff_s0 != (_Instance *)0x0)) {
          *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + 1;
          FUN_80033e0c(unaff_s0,iVar16,0);
          FUN_800bd564(unaff_s0->introName,&stack0x00000010);
          unaff_s0->introUniqueID = (int)*(short *)(unaff_s2 + 0xc);
          unaff_s0->currentStreamUnitID = (int)*(short *)(unaff_s2 + 0xe);
          unaff_s0->birthStreamUnitID = (int)*(short *)(unaff_s2 + 0x10);
          FUN_80035cac(&unaff_s0->light_color,unaff_s0);
          pIVar13 = (Intro *)0x0;
          piVar7 = (int *)FUN_80059340(unaff_s0->birthStreamUnitID);
          pIVar14 = pIVar13;
          if (piVar7 != (int *)0x0) {
            iVar6 = *(int *)(*piVar7 + 8);
            pIVar9 = *(Intro **)(*piVar7 + 0xc);
            pIVar14 = pIVar13;
            if (iVar6 != 0) {
              do {
                iVar6 = iVar6 + -1;
                pIVar14 = pIVar9;
                if (pIVar9->UniqueID == unaff_s0->introUniqueID) break;
                pIVar9 = pIVar9 + 1;
                pIVar14 = pIVar13;
              } while (iVar6 != 0);
            }
          }
          if (pIVar14 == (Intro *)0x0) {
            unaff_s0->intro = (Intro *)0x0;
            unaff_s0->introData = (void *)0x0;
          }
          else {
            unaff_s0->intro = pIVar14;
            unaff_s0->introData = pIVar14->data;
          }
          sVar1 = *(short *)(unaff_s2 + 0x1c);
          sVar2 = *(short *)(unaff_s2 + 0x1e);
          sVar3 = *(short *)(iVar5 + 0xe);
          sVar4 = *(short *)(iVar5 + 0x10);
          (unaff_s0->position).x = *(short *)(unaff_s2 + 0x1a) + *(short *)(iVar5 + 0xc);
          (unaff_s0->position).y = sVar1 + sVar3;
          (unaff_s0->position).z = sVar2 + sVar4;
          sVar1 = (unaff_s0->position).z;
          *(undefined4 *)&unaff_s0->initialPos = *(undefined4 *)&unaff_s0->position;
          (unaff_s0->initialPos).z = sVar1;
          sVar1 = (unaff_s0->position).z;
          *(undefined4 *)&unaff_s0->oldPos = *(undefined4 *)&unaff_s0->position;
          (unaff_s0->oldPos).z = sVar1;
          pOVar10 = unaff_s0->object;
          (unaff_s0->rotation).x = *(short *)(unaff_s2 + 0x14);
          (unaff_s0->rotation).y = *(short *)(unaff_s2 + 0x16);
          (unaff_s0->rotation).z = *(short *)(unaff_s2 + 0x18);
          if ((pOVar10->oflags & 0x100U) != 0) {
            FUN_80033e04(unaff_s0);
          }
          (unaff_s0->scale).x = 0x1000;
          (unaff_s0->scale).y = 0x1000;
          (unaff_s0->scale).z = 0x1000;
          unaff_s0->lightGroup = *(uchar *)(unaff_s2 + 2);
          unaff_s0->spectralLightGroup = *(uchar *)(unaff_s2 + 3);
          FUN_800324f0(loadStatus.bigFile.subDirList,unaff_s0);
          FUN_8003da28(unaff_s0);
          FUN_8003dab0(unaff_s0);
          FUN_8003daf8(unaff_s0);
          FUN_8003db40(unaff_s0);
          FUN_8003da70(unaff_s0);
          FUN_8003d944(unaff_s0);
          uVar12 = unaff_s0->flags;
          uVar11 = unaff_s0->flags2;
          unaff_s0->flags = *(long *)(unaff_s2 + 0x20);
          unaff_s0->flags2 = *(uint *)(unaff_s2 + 0x24) & 0xfffffffe;
          if (p_Var15 != (_Instance *)0x0) {
            FUN_80031ff0(p_Var15);
            p_Var15->flags2 = p_Var15->flags2 | 0x80;
          }
          if ((unaff_s0->flags & 0x40000U) == 0) {
            uVar8 = unaff_s0->flags2 & 0xdfffffff;
          }
          else {
            uVar8 = unaff_s0->flags2 | 0x20000000;
          }
          unaff_s0->flags2 = uVar8;
          unaff_s0->flags = unaff_s0->flags & 0xfdfbffffU | 0x100000;
          FUN_8005c1cc(unaff_s0);
          if (unaff_s0->intro != (Intro *)0x0) {
            FUN_80032964(unaff_s0);
          }
          uVar8 = (uint)*(byte *)(unaff_s2 + 1) * 4;
          if (0x28 < uVar8) {
            iVar5 = SetObjectIdleData(uVar8 - 0x28,(_Instance *)(unaff_s2 + 0x28));
                    /* WARNING: Subroutine does not return */
            FUN_80034368(unaff_s0,&DAT_00100007,iVar5);
          }
          FUN_8006772c(unaff_s0);
          FUN_800329e0(unaff_s0,iVar16);
          if ((uVar12 & 0x20) != 0) {
            unaff_s0->flags = unaff_s0->flags | 0x20;
          }
          if ((uVar11 & 0x20000) != 0) {
            unaff_s0->flags2 = unaff_s0->flags2 | 0x20000;
            FUN_800b67c4(unaff_s0);
            *in_a2 = 1;
          }
        }
      }
      else {
        FUN_800b5ed0();
      }
    }
  }
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_IntroduceSavedInstance(struct _SavedIntro *savedIntro /*$s2*/, struct _StreamUnit *streamUnit /*$a1*/, int *deleted /*$fp*/)
 // line 2102, offset 0x80034714
	/* begin block 1 */
		// Start line: 2103
		// Start offset: 0x80034714
		// Variables:
	// 		struct _ObjectTracker *objectTracker; // $s1
	// 		struct Object *object; // $s7
	// 		struct _Instance *instance; // $s0
	// 		struct _Position *levelOffset; // $s5
	// 		struct Level *level; // $v0
	// 		struct _Instance *attachInst; // $s4

		/* begin block 1.1 */
			// Start line: 2119
			// Start offset: 0x80034770
			// Variables:
		// 		char savedName[12]; // stack offset -56

			/* begin block 1.1.1 */
				// Start line: 2147
				// Start offset: 0x80034838
				// Variables:
			// 		struct Level *birthLevel; // $v0
			// 		struct Intro *oldIntro; // $s1
			// 		int nosave; // $s3
			// 		int remove; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 2173
					// Start offset: 0x80034898
					// Variables:
				// 		struct Intro *intro; // $v1
				// 		int i; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800348CC
				// End Line: 2184

				/* begin block 1.1.1.2 */
					// Start line: 2201
					// Start offset: 0x800348F4
					// Variables:
				// 		short _x0; // $v0
				// 		short _y0; // $a0
				// 		short _z0; // $v1
				// 		short _x1; // $a1
				// 		short _y1; // $a2
				// 		short _z1; // $a3
				// 		struct _Position *_v; // $v0
				// 		struct _Position *_v0; // $v1
				/* end block 1.1.1.2 */
				// End offset: 0x800348F4
				// End Line: 2201

				/* begin block 1.1.1.3 */
					// Start line: 2283
					// Start offset: 0x80034ADC
				/* end block 1.1.1.3 */
				// End offset: 0x80034AF8
				// End Line: 2294
			/* end block 1.1.1 */
			// End offset: 0x80034B2C
			// End Line: 2303
		/* end block 1.1 */
		// End offset: 0x80034B58
		// End Line: 2315
	/* end block 1 */
	// End offset: 0x80034B58
	// End Line: 2324

	/* begin block 2 */
		// Start line: 4835
	/* end block 2 */
	// End Line: 4836

_Instance *
INSTANCE_IntroduceSavedInstance(_SavedIntro *savedIntro,_StreamUnit *streamUnit,int *deleted)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  Intro *pIVar8;
  Object *pOVar9;
  uint uVar10;
  uint uVar11;
  _Instance *unaff_s0;
  Intro *pIVar12;
  Intro *pIVar13;
  int unaff_s2;
  int unaff_s4;
  short *unaff_s5;
  int iVar14;
  undefined4 *unaff_s8;
  undefined uStack00000018;
  
  uStack00000018 = 0;
  FUN_80037e0c((int)*(short *)(unaff_s2 + 0x10));
  FUN_8005fb28();
  iVar5 = FUN_80058c40(&stack0x00000010);
  FUN_8005fb38();
  FUN_80037e0c();
  if (iVar5 != 0) {
    iVar14 = *(int *)(iVar5 + 0x10);
    if ((*(short *)(iVar5 + 0x14) == 2) &&
       ((*(ushort *)(unaff_s2 + 0x12) == 0 ||
        (unaff_s4 = FUN_8003466c((uint)*(ushort *)(unaff_s2 + 0x12)), unaff_s4 != 0)))) {
      if ((((*(uint *)(iVar14 + 0x2c) & 0x10000000) == 0) ||
          (FUN_8003df90(iVar5), (*(uint *)(iVar14 + 0x2c) & 0x10000000) == 0)) &&
         (unaff_s0 = (_Instance *)FUN_80032348(loadStatus.bigFile.subDirList),
         unaff_s0 != (_Instance *)0x0)) {
        *(short *)(iVar5 + 0x16) = *(short *)(iVar5 + 0x16) + 1;
        FUN_80033e0c(unaff_s0,iVar14,0);
        FUN_800bd564(unaff_s0->introName,&stack0x00000010);
        unaff_s0->introUniqueID = (int)*(short *)(unaff_s2 + 0xc);
        unaff_s0->currentStreamUnitID = (int)*(short *)(unaff_s2 + 0xe);
        unaff_s0->birthStreamUnitID = (int)*(short *)(unaff_s2 + 0x10);
        FUN_80035cac(&unaff_s0->light_color,unaff_s0);
        pIVar12 = (Intro *)0x0;
        piVar6 = (int *)FUN_80059340(unaff_s0->birthStreamUnitID);
        pIVar13 = pIVar12;
        if (piVar6 != (int *)0x0) {
          iVar5 = *(int *)(*piVar6 + 8);
          pIVar8 = *(Intro **)(*piVar6 + 0xc);
          pIVar13 = pIVar12;
          if (iVar5 != 0) {
            do {
              iVar5 = iVar5 + -1;
              pIVar13 = pIVar8;
              if (pIVar8->UniqueID == unaff_s0->introUniqueID) break;
              pIVar8 = pIVar8 + 1;
              pIVar13 = pIVar12;
            } while (iVar5 != 0);
          }
        }
        if (pIVar13 == (Intro *)0x0) {
          unaff_s0->intro = (Intro *)0x0;
          unaff_s0->introData = (void *)0x0;
        }
        else {
          unaff_s0->intro = pIVar13;
          unaff_s0->introData = pIVar13->data;
        }
        sVar1 = *(short *)(unaff_s2 + 0x1c);
        sVar2 = *(short *)(unaff_s2 + 0x1e);
        sVar3 = unaff_s5[1];
        sVar4 = unaff_s5[2];
        (unaff_s0->position).x = *(short *)(unaff_s2 + 0x1a) + *unaff_s5;
        (unaff_s0->position).y = sVar1 + sVar3;
        (unaff_s0->position).z = sVar2 + sVar4;
        sVar1 = (unaff_s0->position).z;
        *(undefined4 *)&unaff_s0->initialPos = *(undefined4 *)&unaff_s0->position;
        (unaff_s0->initialPos).z = sVar1;
        sVar1 = (unaff_s0->position).z;
        *(undefined4 *)&unaff_s0->oldPos = *(undefined4 *)&unaff_s0->position;
        (unaff_s0->oldPos).z = sVar1;
        pOVar9 = unaff_s0->object;
        (unaff_s0->rotation).x = *(short *)(unaff_s2 + 0x14);
        (unaff_s0->rotation).y = *(short *)(unaff_s2 + 0x16);
        (unaff_s0->rotation).z = *(short *)(unaff_s2 + 0x18);
        if ((pOVar9->oflags & 0x100U) != 0) {
          FUN_80033e04(unaff_s0);
        }
        (unaff_s0->scale).x = 0x1000;
        (unaff_s0->scale).y = 0x1000;
        (unaff_s0->scale).z = 0x1000;
        unaff_s0->lightGroup = *(uchar *)(unaff_s2 + 2);
        unaff_s0->spectralLightGroup = *(uchar *)(unaff_s2 + 3);
        FUN_800324f0(loadStatus.bigFile.subDirList,unaff_s0);
        FUN_8003da28(unaff_s0);
        FUN_8003dab0(unaff_s0);
        FUN_8003daf8(unaff_s0);
        FUN_8003db40(unaff_s0);
        FUN_8003da70(unaff_s0);
        FUN_8003d944(unaff_s0);
        uVar11 = unaff_s0->flags;
        uVar10 = unaff_s0->flags2;
        unaff_s0->flags = *(long *)(unaff_s2 + 0x20);
        unaff_s0->flags2 = *(uint *)(unaff_s2 + 0x24) & 0xfffffffe;
        if (unaff_s4 != 0) {
          FUN_80031ff0(unaff_s4);
          *(uint *)(unaff_s4 + 0x18) = *(uint *)(unaff_s4 + 0x18) | 0x80;
        }
        if ((unaff_s0->flags & 0x40000U) == 0) {
          uVar7 = unaff_s0->flags2 & 0xdfffffff;
        }
        else {
          uVar7 = unaff_s0->flags2 | 0x20000000;
        }
        unaff_s0->flags2 = uVar7;
        unaff_s0->flags = unaff_s0->flags & 0xfdfbffffU | 0x100000;
        FUN_8005c1cc(unaff_s0);
        if (unaff_s0->intro != (Intro *)0x0) {
          FUN_80032964(unaff_s0);
        }
        uVar7 = (uint)*(byte *)(unaff_s2 + 1) * 4;
        if (0x28 < uVar7) {
          iVar5 = SetObjectIdleData(uVar7 - 0x28,(_Instance *)(unaff_s2 + 0x28));
                    /* WARNING: Subroutine does not return */
          FUN_80034368(unaff_s0,&DAT_00100007,iVar5);
        }
        FUN_8006772c(unaff_s0);
        FUN_800329e0(unaff_s0,iVar14);
        if ((uVar11 & 0x20) != 0) {
          unaff_s0->flags = unaff_s0->flags | 0x20;
        }
        if ((uVar10 & 0x20000) != 0) {
          unaff_s0->flags2 = unaff_s0->flags2 | 0x20000;
          FUN_800b67c4(unaff_s0);
          *unaff_s8 = 1;
        }
      }
    }
    else {
      FUN_800b5ed0();
    }
  }
  return unaff_s0;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_IntroduceSavedInstanceWithIntro(struct _SavedIntroWithIntro *savedIntro /*$s4*/, struct _StreamUnit *streamUnit /*$s6*/, int *deleted /*stack 8*/)
 // line 2327, offset 0x80034b8c
	/* begin block 1 */
		// Start line: 2328
		// Start offset: 0x80034B8C
		// Variables:
	// 		struct _ObjectTracker *objectTracker; // $s1
	// 		struct Object *object; // $s7
	// 		struct _Instance *instance; // $s0
	// 		struct _Position *levelOffset; // $fp
	// 		struct Level *level; // $v1
	// 		struct Intro *intro; // $s2
	// 		struct _Instance *attachedInst; // $s5

		/* begin block 1.1 */
			// Start line: 2372
			// Start offset: 0x80034CC4
			// Variables:
		// 		int remove; // $s1
		// 		int nosave; // $s2

			/* begin block 1.1.1 */
				// Start line: 2376
				// Start offset: 0x80034CC4
				// Variables:
			// 		short _x0; // $v0
			// 		short _y0; // $a0
			// 		short _z0; // $v1
			// 		short _x1; // $a1
			// 		short _y1; // $a2
			// 		short _z1; // $a3
			// 		struct _Position *_v; // $v0
			// 		struct _Position *_v0; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80034CC4
			// End Line: 2376

			/* begin block 1.1.2 */
				// Start line: 2513
				// Start offset: 0x80034F4C
			/* end block 1.1.2 */
			// End offset: 0x80034F68
			// End Line: 2524
		/* end block 1.1 */
		// End offset: 0x80034F9C
		// End Line: 2533
	/* end block 1 */
	// End offset: 0x80034FCC
	// End Line: 2549

	/* begin block 2 */
		// Start line: 5380
	/* end block 2 */
	// End Line: 5381

_Instance *
INSTANCE_IntroduceSavedInstanceWithIntro
          (_SavedIntroWithIntro *savedIntro,_StreamUnit *streamUnit,int *deleted)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int in_v0;
  int iVar5;
  int in_v1;
  Object *pOVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  _Instance *unaff_s0;
  Intro *pIVar11;
  int unaff_s4;
  int unaff_s5;
  long *unaff_s6;
  int iVar12;
  int iStack00000010;
  undefined4 *in_stack_00000048;
  
  pIVar11 = (Intro *)(&savedIntro->savedID + in_v0);
  iStack00000010 = in_v1;
  iVar5 = FUN_800344d4(pIVar11->UniqueID);
  if (iVar5 == 0) {
    FUN_80037e0c(*unaff_s6);
    iVar5 = FUN_80058c40(pIVar11);
    FUN_80037e0c();
    if (iVar5 != 0) {
      iVar12 = *(int *)(iVar5 + 0x10);
      if ((*(short *)(iVar5 + 0x14) == 2) &&
         ((*(ushort *)(unaff_s4 + 2) == 0 ||
          ((unaff_s5 = FUN_8003466c((uint)*(ushort *)(unaff_s4 + 2)), unaff_s5 != 0 &&
           (*(int *)(unaff_s5 + 0x40) != 0)))))) {
        if ((((*(uint *)(iVar12 + 0x2c) & 0x10000000) == 0) ||
            (FUN_8003df90(iVar5), (*(uint *)(iVar12 + 0x2c) & 0x10000000) == 0)) &&
           (unaff_s0 = (_Instance *)FUN_80032348(loadStatus.bigFile.subDirList),
           unaff_s0 != (_Instance *)0x0)) {
          *(short *)(iVar5 + 0x16) = *(short *)(iVar5 + 0x16) + 1;
          FUN_80033e0c(unaff_s0,iVar12,0);
          FUN_800bd564(unaff_s0->introName,pIVar11);
          unaff_s0->introUniqueID = pIVar11->UniqueID;
          unaff_s0->introNum = pIVar11->intronum;
          unaff_s0->birthStreamUnitID = *unaff_s6;
          unaff_s0->currentStreamUnitID = *unaff_s6;
          unaff_s0->attachedID = (uint)*(ushort *)(unaff_s4 + 2);
          FUN_80035cac(&unaff_s0->light_color,unaff_s0);
          pIVar11->instance = unaff_s0;
          FUN_80059340(unaff_s0->birthStreamUnitID);
          unaff_s0->intro = pIVar11;
          unaff_s0->introData = pIVar11->data;
          sVar1 = *(short *)(unaff_s4 + 0x1c);
          sVar2 = *(short *)(unaff_s4 + 0x1e);
          sVar3 = *(short *)(in_v1 + 0xe);
          sVar4 = *(short *)(in_v1 + 0x10);
          (unaff_s0->position).x = *(short *)(unaff_s4 + 0x1a) + *(short *)(iStack00000010 + 0xc);
          (unaff_s0->position).y = sVar1 + sVar3;
          (unaff_s0->position).z = sVar2 + sVar4;
          sVar1 = (unaff_s0->position).z;
          *(undefined4 *)&unaff_s0->initialPos = *(undefined4 *)&unaff_s0->position;
          (unaff_s0->initialPos).z = sVar1;
          sVar1 = (unaff_s0->position).z;
          *(undefined4 *)&unaff_s0->oldPos = *(undefined4 *)&unaff_s0->position;
          (unaff_s0->oldPos).z = sVar1;
          pOVar6 = unaff_s0->object;
          (unaff_s0->rotation).x = *(short *)(unaff_s4 + 0x14);
          (unaff_s0->rotation).y = *(short *)(unaff_s4 + 0x16);
          (unaff_s0->rotation).z = *(short *)(unaff_s4 + 0x18);
          if ((pOVar6->oflags & 0x100U) != 0) {
            FUN_80033e04(unaff_s0);
          }
          (unaff_s0->scale).x = 0x1000;
          (unaff_s0->scale).y = 0x1000;
          (unaff_s0->scale).z = 0x1000;
          unaff_s0->lightGroup = *(uchar *)(unaff_s4 + 10);
          unaff_s0->spectralLightGroup = *(uchar *)(unaff_s4 + 0xb);
          FUN_800324f0(loadStatus.bigFile.subDirList,unaff_s0);
          FUN_8003da28(unaff_s0);
          FUN_8003dab0(unaff_s0);
          FUN_8003daf8(unaff_s0);
          FUN_8003db40(unaff_s0);
          FUN_8003da70(unaff_s0);
          FUN_8003d944(unaff_s0);
          uVar9 = unaff_s0->flags;
          uVar7 = unaff_s0->flags2;
          unaff_s0->flags = *(long *)(unaff_s4 + 0xc);
          unaff_s0->flags2 = *(long *)(unaff_s4 + 0x10);
          if (unaff_s5 != 0) {
            FUN_80031ff0(unaff_s5);
            *(uint *)(unaff_s5 + 0x18) = *(uint *)(unaff_s5 + 0x18) | 0x80;
          }
          uVar8 = unaff_s0->flags2;
          uVar10 = uVar8 & 0xfffffffe;
          unaff_s0->flags2 = uVar10;
          if ((unaff_s0->flags & 0x40000U) == 0) {
            uVar10 = uVar8 & 0xdffffffe;
          }
          else {
            uVar10 = uVar10 | 0x20000000;
          }
          unaff_s0->flags2 = uVar10;
          unaff_s0->flags = unaff_s0->flags & 0xfffbffff;
          iVar5 = FUN_8003cb38(unaff_s0,0,0);
          if (iVar5 == 0) {
            unaff_s0->flags = unaff_s0->flags & 0xfdffffffU | 0x100000;
          }
          FUN_8005c1cc(unaff_s0);
          if (unaff_s0->intro != (Intro *)0x0) {
            FUN_80032964(unaff_s0);
          }
          uVar10 = (uint)*(byte *)(unaff_s4 + 1) * 4;
          if (0x20 < uVar10) {
            iVar5 = SetObjectIdleData(uVar10 - 0x20,(_Instance *)(unaff_s4 + 0x20));
                    /* WARNING: Subroutine does not return */
            FUN_80034368(unaff_s0,&DAT_00100007,iVar5);
          }
          FUN_8006772c(unaff_s0);
          FUN_800329e0(unaff_s0,iVar12);
          if ((uVar9 & 0x20) != 0) {
            unaff_s0->flags = unaff_s0->flags | 0x20;
          }
          if ((uVar7 & 0x20000) != 0) {
            unaff_s0->flags2 = unaff_s0->flags2 | 0x20000;
            FUN_800b67c4(unaff_s0);
            *in_stack_00000048 = 1;
          }
        }
      }
      else {
        FUN_800b5ed0();
      }
    }
  }
  return unaff_s0;
}



// autogenerated function stub: 
// void /*$ra*/ INSTANCE_SpatialRelationships(struct _InstanceList *instanceList /*$s4*/)
void INSTANCE_SpatialRelationships(struct _InstanceList *instanceList)
{ // line 2596, offset 0x80035000
	/* begin block 1 */
		// Start line: 2597
		// Start offset: 0x80035000
		// Variables:
			struct _Instance *instance; // $s1
			struct _Instance *checkee; // $s0

		/* begin block 1.1 */
			// Start line: 2606
			// Start offset: 0x8003504C
			// Variables:
				struct MATRIX *lookMatrix; // $s0
				long checkMask; // $s3

			/* begin block 1.1.1 */
				// Start line: 2615
				// Start offset: 0x80035074
				// Variables:
					struct MATRIX invMatrix; // stack offset -80

				/* begin block 1.1.1.1 */
					// Start line: 2624
					// Start offset: 0x800350D0
					// Variables:
						struct evCollideInstanceStatsData data; // stack offset -48
						struct MATRIX *mat; // $a2
				/* end block 1.1.1.1 */
				// End offset: 0x80035124
				// End Line: 2634
			/* end block 1.1.1 */
			// End offset: 0x80035134
			// End Line: 2636
		/* end block 1.1 */
		// End offset: 0x80035134
		// End Line: 2637
	/* end block 1 */
	// End offset: 0x80035144
	// End Line: 2639

	/* begin block 2 */
		// Start line: 5192
	/* end block 2 */
	// End Line: 5193

}


// autogenerated function stub: 
// int /*$ra*/ INSTANCE_SetStatsData(struct _Instance *instance /*$s1*/, struct _Instance *checkee /*$s5*/, struct _Vector *checkPoint /*$s2*/, struct evCollideInstanceStatsData *data /*$s3*/, struct MATRIX *mat /*stack 16*/)
int INSTANCE_SetStatsData(struct _Instance *instance, struct _Instance *checkee, struct _Vector *checkPoint, struct evCollideInstanceStatsData *data, struct MATRIX *mat)
{ // line 2643, offset 0x80035164
	/* begin block 1 */
		// Start line: 2644
		// Start offset: 0x80035164
		// Variables:
			long distance; // $s4

		/* begin block 1.1 */
			// Start line: 2649
			// Start offset: 0x800351D0
			// Variables:
				struct SVECTOR *delta; // $s0
		/* end block 1.1 */
		// End offset: 0x800351D8
		// End Line: 2666
	/* end block 1 */
	// End offset: 0x80035250
	// End Line: 2668

	/* begin block 2 */
		// Start line: 6097
	/* end block 2 */
	// End Line: 6098

	return 0;
}


// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_LinkToParent(struct _Instance *instance /*$s0*/, struct _Instance *parent /*$s1*/, int node /*$a2*/)
 // line 2672, offset 0x80035274
	/* begin block 1 */
		// Start line: 6180
	/* end block 1 */
	// End Line: 6181

void INSTANCE_LinkToParent(_Instance *instance,_Instance *parent,int node)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x88) = (short)((in_v0 << 0xc) / (int)*(short *)(unaff_s1 + 0x88));
  FUN_80035498();
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_UnlinkFromParent(struct _Instance *instance /*$s0*/)
 // line 2693, offset 0x80035330
	/* begin block 1 */
		// Start line: 2694
		// Start offset: 0x80035330
		// Variables:
	// 		struct _Instance *parent; // $s1

		/* begin block 1.1 */
			// Start line: 2698
			// Start offset: 0x80035354
			// Variables:
		// 		struct _G2EulerAngles_Type ea; // stack offset -24

			/* begin block 1.1.1 */
				// Start line: 2706
				// Start offset: 0x80035370
				// Variables:
			// 		struct _Instance *sibling; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800353A4
			// End Line: 2712
		/* end block 1.1 */
		// End offset: 0x80035480
		// End Line: 2732
	/* end block 1 */
	// End offset: 0x80035480
	// End Line: 2733

	/* begin block 2 */
		// Start line: 6228
	/* end block 2 */
	// End Line: 6229

void INSTANCE_UnlinkFromParent(_Instance *instance)

{
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  *(undefined4 *)(in_v1 + 0x134) = *(undefined4 *)(unaff_s0 + 0x134);
  *(undefined4 *)(unaff_s0 + 0x134) = 0;
  *(undefined4 *)(unaff_s0 + 300) = 0;
  iVar1 = (int)*(short *)(unaff_s0 + 0x84) * (int)*(short *)(unaff_s1 + 0x84);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(undefined2 *)(unaff_s0 + 0x84) = (short)(iVar1 >> 0xc);
  iVar1 = (int)*(short *)(unaff_s0 + 0x86) * (int)*(short *)(unaff_s1 + 0x86);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(undefined2 *)(unaff_s0 + 0x86) = (short)(iVar1 >> 0xc);
  iVar1 = (int)*(short *)(unaff_s0 + 0x88) * (int)*(short *)(unaff_s1 + 0x88);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(undefined2 *)(unaff_s0 + 0x88) = (short)(iVar1 >> 0xc);
  if (*(int *)(unaff_s1 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80095ff4(&stack0x00000010,*(int *)(unaff_s1 + 0x40) + *(int *)(unaff_s0 + 0x138) * 0x20,0x15
                );
  }
                    /* WARNING: Subroutine does not return */
  FUN_80034368();
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_UnlinkChildren(struct _Instance *instance /*$s2*/)
 // line 2735, offset 0x80035494
	/* begin block 1 */
		// Start line: 2736
		// Start offset: 0x80035494
		// Variables:
	// 		struct _Instance *child; // $s1

		/* begin block 1.1 */
			// Start line: 2741
			// Start offset: 0x800354BC
			// Variables:
		// 		struct _Instance *sibling; // $s0
		/* end block 1.1 */
		// End offset: 0x800354BC
		// End Line: 2741
	/* end block 1 */
	// End offset: 0x800354E4
	// End Line: 2752

	/* begin block 2 */
		// Start line: 6317
	/* end block 2 */
	// End Line: 6318

void INSTANCE_UnlinkChildren(_Instance *instance)

{
  _Instance *p_Var1;
  
  p_Var1 = instance->LinkChild;
  while (p_Var1 != (_Instance *)0x0) {
    p_Var1->currentStreamUnitID = instance->currentStreamUnitID;
    FUN_80035498(p_Var1);
    p_Var1 = p_Var1->LinkSibling;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_UpdateFamilyStreamUnitID(struct _Instance *instance /*$s1*/)
 // line 2758, offset 0x80035500
	/* begin block 1 */
		// Start line: 2759
		// Start offset: 0x80035500
		// Variables:
	// 		struct _Instance *child; // $s0
	/* end block 1 */
	// End offset: 0x80035544
	// End Line: 2767

	/* begin block 2 */
		// Start line: 6366
	/* end block 2 */
	// End Line: 6367

void INSTANCE_UpdateFamilyStreamUnitID(_Instance *instance)

{
  _Instance *p_Var1;
  
  p_Var1 = instance->LinkChild;
  if (p_Var1 != (_Instance *)0x0) {
    FUN_800354f0(p_Var1);
                    /* WARNING: Subroutine does not return */
    FUN_80032538(loadStatus.bigFile.subDirList,p_Var1,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ INSTANCE_ReallyRemoveAllChildren(struct _Instance *instance /*$a0*/)
 // line 2769, offset 0x80035558
	/* begin block 1 */
		// Start line: 2770
		// Start offset: 0x80035558
		// Variables:
	// 		struct _Instance *child; // $s1

		/* begin block 1.1 */
			// Start line: 2775
			// Start offset: 0x80035578
			// Variables:
		// 		struct _Instance *sibling; // $s0
		/* end block 1.1 */
		// End offset: 0x80035578
		// End Line: 2775
	/* end block 1 */
	// End offset: 0x800355A0
	// End Line: 2780

	/* begin block 2 */
		// Start line: 6391
	/* end block 2 */
	// End Line: 6392

void INSTANCE_ReallyRemoveAllChildren(_Instance *instance)

{
  int in_v1;
  int in_a1;
  
  do {
    if (*(int *)(in_v1 + 0x138) == in_a1) {
      return;
    }
    in_v1 = *(int *)(in_v1 + 0x134);
  } while (in_v1 != 0);
  return;
}



// decompiled code
// original method signature: 
// struct _Instance * /*$ra*/ INSTANCE_GetChildLinkedToSegment(struct _Instance *instance /*$a0*/, int segment /*$a1*/)
 // line 2785, offset 0x800355b4
	/* begin block 1 */
		// Start line: 2787
		// Start offset: 0x800355B4
		// Variables:
	// 		struct _Instance *child; // $v1
	/* end block 1 */
	// End offset: 0x800355E4
	// End Line: 2795

	/* begin block 2 */
		// Start line: 6428
	/* end block 2 */
	// End Line: 6429

	/* begin block 3 */
		// Start line: 6429
	/* end block 3 */
	// End Line: 6430

	/* begin block 4 */
		// Start line: 6431
	/* end block 4 */
	// End Line: 6432

_Instance * INSTANCE_GetChildLinkedToSegment(_Instance *instance,int segment)

{
  do {
    segment = (int)((_Instance *)segment)->LinkParent;
  } while (((_Instance *)segment)->LinkParent != (_Instance *)0x0);
  return (_Instance *)(uint)(instance == (_Instance *)segment);
}



// decompiled code
// original method signature: 
// int /*$ra*/ INSTANCE_Linked(struct _Instance *instance1 /*$a0*/, struct _Instance *instance2 /*$a1*/)
 // line 2801, offset 0x800355ec
	/* begin block 1 */
		// Start line: 2803
		// Start offset: 0x800355EC
		// Variables:
	// 		struct _Instance *root1; // $a0
	// 		struct _Instance *root2; // $a1
	/* end block 1 */
	// End offset: 0x80035634
	// End Line: 2811

	/* begin block 2 */
		// Start line: 6462
	/* end block 2 */
	// End Line: 6463

	/* begin block 3 */
		// Start line: 6463
	/* end block 3 */
	// End Line: 6464

	/* begin block 4 */
		// Start line: 6465
	/* end block 4 */
	// End Line: 6466

int INSTANCE_Linked(_Instance *instance1,_Instance *instance2)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int in_v1;
  int iVar3;
  int unaff_s1;
  
  iVar3 = (int)*(short *)(unaff_s1 + 0xec);
  if (in_v1 != in_v0) {
    iVar3 = 0x1000 - iVar3;
    iVar2 = FUN_800500cc(*(undefined4 *)(unaff_s1 + 0x1c));
    if ((iVar2 != 0) &&
       (((*(uint *)(*(int *)(unaff_s1 + 0x1c) + 0x2c) & 0x2000000) != 0 ||
        ((*(int *)(unaff_s1 + 300) != 0 &&
         ((*(uint *)(*(int *)(*(int *)(unaff_s1 + 300) + 0x1c) + 0x2c) & 0x2000000) != 0)))))) {
      sVar1 = gameTrackerX.GlobalObjects._2_2_;
      if ((*(uint *)(unaff_s1 + 0x18) & 0x8000000) != 0) {
        sVar1 = (short)gameTrackerX.GlobalObjects;
      }
      iVar2 = (int)sVar1 * iVar3;
      iVar3 = iVar2 >> 0xc;
      if (iVar2 < 0) {
        iVar3 = iVar2 + 0xfff >> 0xc;
      }
    }
    iVar3 = 0x1000 - iVar3;
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ INSTANCE_GetFadeValue(struct _Instance *instance /*$s1*/)
 // line 2819, offset 0x8003563c
	/* begin block 1 */
		// Start line: 2820
		// Start offset: 0x8003563C
		// Variables:
	// 		int fadeValue; // $s0
	/* end block 1 */
	// End offset: 0x80035708
	// End Line: 2844

	/* begin block 2 */
		// Start line: 6498
	/* end block 2 */
	// End Line: 6499

int INSTANCE_GetFadeValue(_Instance *instance)

{
  short sVar1;
  int in_v0;
  uint in_v1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  
  if ((*(uint *)(*(int *)(in_v0 + 0x1c) + 0x2c) & in_v1) != 0) {
    sVar1 = gameTrackerX.GlobalObjects._2_2_;
    if ((*(uint *)(unaff_s1 + 0x18) & 0x8000000) != 0) {
      sVar1 = (short)gameTrackerX.GlobalObjects;
    }
    iVar2 = (int)sVar1 * unaff_s0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    unaff_s0 = iVar2 >> 0xc;
  }
  return 0x1000 - unaff_s0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ INSTANCE_DefaultAnimCallback(struct _G2Anim_Type *anim /*$a0*/, int sectionID /*$a1*/, enum _G2AnimCallbackMsg_Enum message /*$a2*/, long messageDataA /*$s4*/, long messageDataB /*stack 16*/, struct _Instance *instance /*stack 20*/)
 // line 2855, offset 0x80035720
	/* begin block 1 */
		// Start line: 2856
		// Start offset: 0x80035720
		// Variables:
	// 		struct _AnimSoundData_Type *soundData; // $s2

		/* begin block 1.1 */
			// Start line: 2868
			// Start offset: 0x80035770
			// Variables:
		// 		int id; // $s0
		// 		int vol; // $s1
		/* end block 1.1 */
		// End offset: 0x800357D0
		// End Line: 2877
	/* end block 1 */
	// End offset: 0x80035804
	// End Line: 2891

	/* begin block 2 */
		// Start line: 6574
	/* end block 2 */
	// End Line: 6575

ulong INSTANCE_DefaultAnimCallback
                (_G2Anim_Type *anim,int sectionID,_G2AnimCallbackMsg_Enum message,long messageDataA,
                long messageDataB,_Instance *instance)

{
  int iVar1;
  ulong uVar2;
  int in_v1;
  int iVar3;
  int unaff_s1;
  short *unaff_s2;
  int unaff_s3;
  ulong unaff_s4;
  
  iVar3 = (unaff_s1 / 1000 + (unaff_s1 >> 0x1f)) - (in_v1 >> 0x1f);
  iVar1 = FUN_8007d78c();
  uVar2 = 0;
  if (iVar3 == iVar1) {
    FUN_8003f9d8(unaff_s3 + 0x5c,(int)*unaff_s2,(int)unaff_s2[2],unaff_s1 + iVar3 * -1000);
    uVar2 = unaff_s4;
  }
  return uVar2;
}





