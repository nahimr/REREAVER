#include "THISDUST.H"
#include "MEMPACK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_Init()
 // line 194, offset 0x8004faa4
	/* begin block 1 */
		// Start line: 388
	/* end block 1 */
	// End Line: 389

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MEMPACK_Init(void)

{
  int iVar1;
  uint in_a0;
  
  iVar1 = DVECTOR_800d16f4;
  if (DVECTOR_800d16f4 != DVECTOR_ARRAY_800d1700[0]) {
    do {
      if ((*(char *)(iVar1 + 2) == '\0') && (in_a0 <= *(uint *)(iVar1 + 4))) {
        return;
      }
      iVar1 = iVar1 + *(int *)(iVar1 + 4);
    } while (iVar1 != DVECTOR_ARRAY_800d1700[0]);
  }
  return;
}



// decompiled code
// original method signature: 
// struct MemHeader * /*$ra*/ MEMPACK_GetSmallestBlockTopBottom(long allocSize /*$a0*/)
 // line 250, offset 0x8004fb0c
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x8004FB0C
		// Variables:
	// 		struct MemHeader *address; // $v1
	// 		struct MemHeader *bestAddress; // $a1
	/* end block 1 */
	// End offset: 0x8004FB6C
	// End Line: 273

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

	/* begin block 3 */
		// Start line: 532
	/* end block 3 */
	// End Line: 533

	/* begin block 4 */
		// Start line: 533
	/* end block 4 */
	// End Line: 534

	/* begin block 5 */
		// Start line: 535
	/* end block 5 */
	// End Line: 536

MemHeader * MEMPACK_GetSmallestBlockTopBottom(long allocSize)

{
  MemHeader *pMVar1;
  MemHeader *pMVar2;
  
  pMVar2 = (MemHeader *)0x0;
  pMVar1 = DVECTOR_800d16f4;
  if (DVECTOR_800d16f4 != DVECTOR_ARRAY_800d1700[0]) {
    do {
      if (((pMVar1->memStatus == '\0') && ((uint)allocSize <= pMVar1->memSize)) &&
         ((pMVar2 == (MemHeader *)0x0 || (pMVar2 < pMVar1)))) {
        pMVar2 = pMVar1;
      }
      pMVar1 = (MemHeader *)((int)&pMVar1->magicNumber + pMVar1->memSize);
    } while (pMVar1 != DVECTOR_ARRAY_800d1700[0]);
  }
  return pMVar2;
}



// decompiled code
// original method signature: 
// struct MemHeader * /*$ra*/ MEMPACK_GetSmallestBlockBottomTop(long allocSize /*$a0*/)
 // line 279, offset 0x8004fb74
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x8004FB74
		// Variables:
	// 		struct MemHeader *address; // $v1
	// 		struct MemHeader *bestAddress; // $a1
	/* end block 1 */
	// End offset: 0x8004FBD8
	// End Line: 309

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

	/* begin block 3 */
		// Start line: 591
	/* end block 3 */
	// End Line: 592

	/* begin block 4 */
		// Start line: 593
	/* end block 4 */
	// End Line: 594

MemHeader * MEMPACK_GetSmallestBlockBottomTop(long allocSize)

{
  if ((((1 < allocSize - 1U) && (allocSize != 0x2c)) && (allocSize != 0x2f)) && (allocSize != 4)) {
    return (MemHeader *)0x0;
  }
  return (MemHeader *)&DAT_00000001;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MEMPACK_RelocatableType(long memType /*$a0*/)
 // line 312, offset 0x8004fbe0
	/* begin block 1 */
		// Start line: 656
	/* end block 1 */
	// End Line: 657

	/* begin block 2 */
		// Start line: 657
	/* end block 2 */
	// End Line: 658

long MEMPACK_RelocatableType(long memType)

{
  int iStack00000010;
  
  FUN_8004ffe8();
  iStack00000010 = DVECTOR_800d16f8 - DVECTOR_800d16fc;
                    /* WARNING: Subroutine does not return */
  FUN_80014454(s_Trying_to_fit_memory_size__d_Typ_800cee20);
}



// decompiled code
// original method signature: 
// char * /*$ra*/ MEMPACK_Malloc(unsigned long allocSize /*$s2*/, unsigned char memType /*$a1*/)
 // line 331, offset 0x8004fc18
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x8004FC18
		// Variables:
	// 		char *ptr; // $s0
	/* end block 1 */
	// End offset: 0x8004FC78
	// End Line: 346

	/* begin block 2 */
		// Start line: 694
	/* end block 2 */
	// End Line: 695

char * MEMPACK_Malloc(ulong allocSize,uchar memType)

{
  char *in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ MEMPACK_MallocFailOk(unsigned long allocSize /*$s1*/, unsigned char memType /*$s3*/)
 // line 349, offset 0x8004fc94
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x8004FC94
		// Variables:
	// 		struct MemHeader *bestAddress; // $a1
	// 		long relocatableMemory; // $s2

		/* begin block 1.1 */
			// Start line: 378
			// Start offset: 0x8004FD18
			// Variables:
		// 		int curMem; // $s0
		/* end block 1.1 */
		// End offset: 0x8004FD34
		// End Line: 390

		/* begin block 1.2 */
			// Start line: 404
			// Start offset: 0x8004FD60
			// Variables:
		// 		struct MemHeader *address; // $a2

			/* begin block 1.2.1 */
				// Start line: 424
				// Start offset: 0x8004FD94
				// Variables:
			// 		long topOffset; // $a0
			/* end block 1.2.1 */
			// End offset: 0x8004FD94
			// End Line: 426
		/* end block 1.2 */
		// End offset: 0x8004FD94
		// End Line: 426
	/* end block 1 */
	// End offset: 0x8004FE04
	// End Line: 457

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

char * MEMPACK_MallocFailOk(ulong allocSize,uchar memType)

{
  int iVar1;
  MemHeader *in_v0;
  ulong uVar2;
  MemHeader *pMVar3;
  undefined2 *puVar4;
  ulong allocSize_00;
  int unaff_s2;
  uchar unaff_s3;
  
  while (iVar1 = DVECTOR_800d16fc, in_v0 == (MemHeader *)0x0) {
    FUN_80058a54();
    if (iVar1 == DVECTOR_800d16fc) {
      return (char *)0x0;
    }
    in_v0 = DVECTOR_ARRAY_800d1700[1];
    if (DVECTOR_ARRAY_800d1700[1] == (MemHeader *)0x0) {
      if (unaff_s2 != 0) {
        in_v0 = (MemHeader *)FUN_80050338();
        goto LAB_8004fc84;
      }
LAB_8004fc9c:
      in_v0 = MEMPACK_GetSmallestBlockTopBottom(allocSize_00);
    }
    else {
LAB_8004fc84:
      if (unaff_s2 == 0) goto LAB_8004fc9c;
      MEMPACK_Init();
    }
  }
  uVar2 = in_v0->memSize;
  if (uVar2 - allocSize_00 < 8) {
    allocSize_00 = uVar2;
  }
  if (allocSize_00 == uVar2) {
    in_v0->magicNumber = 0xbade;
  }
  else {
    puVar4 = (undefined2 *)((int)&in_v0->magicNumber + allocSize_00);
    if (unaff_s2 == 0) {
      pMVar3 = (MemHeader *)((int)in_v0 + (uVar2 - allocSize_00));
      pMVar3->magicNumber = 0xbade;
      pMVar3->memStatus = '\x01';
      pMVar3->memType = unaff_s3;
      pMVar3->memSize = allocSize_00;
      DVECTOR_800d16fc = DVECTOR_800d16fc + allocSize_00;
      in_v0->magicNumber = 0xbade;
      in_v0->memStatus = '\0';
      in_v0->memType = '\0';
      in_v0->memSize = uVar2 - allocSize_00;
      goto LAB_8004fd98;
    }
    *puVar4 = 0xbade;
    *(undefined *)(puVar4 + 1) = 0;
    *(undefined *)((int)puVar4 + 3) = 0;
    *(ulong *)(puVar4 + 2) = in_v0->memSize - allocSize_00;
    in_v0->magicNumber = 0xbade;
  }
  in_v0->memStatus = '\x01';
  in_v0->memType = unaff_s3;
  in_v0->memSize = allocSize_00;
  DVECTOR_800d16fc = DVECTOR_800d16fc + allocSize_00;
  pMVar3 = in_v0;
LAB_8004fd98:
  return (char *)(pMVar3 + 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMORY_MergeAddresses(struct MemHeader *firstAddress /*$a0*/, struct MemHeader *secondAddress /*$a1*/)
 // line 461, offset 0x8004fe20
	/* begin block 1 */
		// Start line: 963
	/* end block 1 */
	// End Line: 964

	/* begin block 2 */
		// Start line: 969
	/* end block 2 */
	// End Line: 970

void MEMORY_MergeAddresses(MemHeader *firstAddress,MemHeader *secondAddress)

{
  int in_v0;
  undefined2 *puVar1;
  
  firstAddress->memSize = in_v0 - (int)secondAddress;
  DVECTOR_800d16fc = DVECTOR_800d16fc - (int)secondAddress;
  puVar1 = (undefined2 *)((int)&firstAddress->magicNumber + firstAddress->memSize);
  *puVar1 = 0xbade;
  *(undefined *)(puVar1 + 1) = 0;
  *(undefined *)((int)puVar1 + 3) = 0;
  *(MemHeader **)(puVar1 + 2) = secondAddress;
  if ((int)puVar1 + (int)secondAddress != DVECTOR_ARRAY_800d1700[0]) {
    FUN_8004fdb8();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_Return(char *address /*$a0*/, long takeBackSize /*$a1*/)
 // line 480, offset 0x8004fe68
	/* begin block 1 */
		// Start line: 481
		// Start offset: 0x8004FE68
		// Variables:
	// 		struct MemHeader *memAddress; // $a0
	// 		struct MemHeader *nextAddress; // $a1
	/* end block 1 */
	// End offset: 0x8004FEDC
	// End Line: 508

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

void MEMPACK_Return(char *address,long takeBackSize)

{
  FUN_8004fdb8();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_Free(char *address /*$a0*/)
 // line 539, offset 0x8004feec
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x8004FEEC
		// Variables:
	// 		struct MemHeader *memAddress; // $s0
	// 		struct MemHeader *secondAddress; // $v1
	/* end block 1 */
	// End offset: 0x8004FF8C
	// End Line: 584

	/* begin block 2 */
		// Start line: 1078
	/* end block 2 */
	// End Line: 1079

void MEMPACK_Free(char *address)

{
  int in_v1;
  int iVar1;
  int unaff_s0;
  
  do {
    iVar1 = unaff_s0 + *(int *)(unaff_s0 + 4);
    if (iVar1 == in_v1) {
      FUN_8004fdb8(unaff_s0);
      return;
    }
    unaff_s0 = iVar1;
  } while (iVar1 != DVECTOR_ARRAY_800d1700[0]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_FreeByType(unsigned char memType /*$a0*/)
 // line 586, offset 0x8004ff9c
	/* begin block 1 */
		// Start line: 587
		// Start offset: 0x8004FF9C
		// Variables:
	// 		struct MemHeader *address; // $a0
	// 		int freed; // $s0
	/* end block 1 */
	// End offset: 0x8005001C
	// End Line: 608

	/* begin block 2 */
		// Start line: 1187
	/* end block 2 */
	// End Line: 1188

void MEMPACK_FreeByType(uchar memType)

{
  int in_v0;
  undefined3 in_register_00000011;
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  
  iVar1 = CONCAT31(in_register_00000011,memType);
  while( true ) {
    iVar1 = iVar1 + in_v0;
    if (iVar1 == DVECTOR_ARRAY_800d1700[0]) {
      do {
        if (unaff_s0 != unaff_s2) {
          return;
        }
        unaff_s0 = 0;
        iVar1 = DVECTOR_800d16f4;
      } while (DVECTOR_800d16f4 == DVECTOR_ARRAY_800d1700[0]);
    }
    if (((uint)*(byte *)(iVar1 + 2) == unaff_s2) && ((uint)*(byte *)(iVar1 + 3) == unaff_s1)) break;
    in_v0 = *(int *)(iVar1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fe84(iVar1 + 8);
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MEMPACK_Size(char *address /*$a0*/)
 // line 611, offset 0x80050034
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x80050034
	/* end block 1 */
	// End offset: 0x80050034
	// End Line: 618

	/* begin block 2 */
		// Start line: 1248
	/* end block 2 */
	// End Line: 1249

	/* begin block 3 */
		// Start line: 1249
	/* end block 3 */
	// End Line: 1250

	/* begin block 4 */
		// Start line: 1254
	/* end block 4 */
	// End Line: 1255

ulong MEMPACK_Size(char *address)

{
  bool bVar1;
  int in_v0;
  char *in_v1;
  int iVar2;
  uint uVar3;
  
  while (in_v1 = in_v1 + in_v0, in_v1 != address) {
    in_v0 = *(int *)(in_v1 + 4);
  }
  uVar3 = 0;
  do {
    bVar1 = true;
    iVar2 = DVECTOR_800d16f4;
    if (DVECTOR_800d16f4 != DVECTOR_ARRAY_800d1700[0]) {
      do {
        if (((*(char *)(iVar2 + 2) != '\0') && ((uint)*(byte *)(iVar2 + 3) == uVar3)) && (bVar1)) {
          bVar1 = false;
        }
        iVar2 = iVar2 + *(int *)(iVar2 + 4);
      } while (iVar2 != DVECTOR_ARRAY_800d1700[0]);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x31);
  return (uint)((int)uVar3 < 0x31);
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ MEMPACK_ReportFreeMemory()
 // line 621, offset 0x80050040
	/* begin block 1 */
		// Start line: 1268
	/* end block 1 */
	// End Line: 1269

	/* begin block 2 */
		// Start line: 1269
	/* end block 2 */
	// End Line: 1270

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong MEMPACK_ReportFreeMemory(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    bVar1 = true;
    iVar2 = DVECTOR_800d16f4;
    if (DVECTOR_800d16f4 != DVECTOR_ARRAY_800d1700[0]) {
      do {
        if (((*(char *)(iVar2 + 2) != '\0') && ((uint)*(byte *)(iVar2 + 3) == uVar3)) && (bVar1)) {
          bVar1 = false;
        }
        iVar2 = iVar2 + *(int *)(iVar2 + 4);
      } while (iVar2 != DVECTOR_ARRAY_800d1700[0]);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x31);
  return (uint)((int)uVar3 < 0x31);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_ReportMemory2()
 // line 689, offset 0x80050050
	/* begin block 1 */
		// Start line: 691
		// Start offset: 0x80050050
		// Variables:
	// 		struct MemHeader *address; // $v1
	/* end block 1 */
	// End offset: 0x80050078
	// End Line: 725

	/* begin block 2 */
		// Start line: 1378
	/* end block 2 */
	// End Line: 1379

	/* begin block 3 */
		// Start line: 1338
	/* end block 3 */
	// End Line: 1339

	/* begin block 4 */
		// Start line: 1342
	/* end block 4 */
	// End Line: 1343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MEMPACK_ReportMemory2(void)

{
  bool bVar1;
  int in_v1;
  uint in_a1;
  int in_a3;
  
  do {
    bVar1 = true;
    if (in_v1 != in_a3) {
      do {
        if (((*(char *)(in_v1 + 2) != '\0') && ((uint)*(byte *)(in_v1 + 3) == in_a1)) && (bVar1)) {
          bVar1 = false;
        }
        in_v1 = in_v1 + *(int *)(in_v1 + 4);
      } while (in_v1 != DVECTOR_ARRAY_800d1700[0]);
    }
    in_a1 = in_a1 + 1;
    in_v1 = DVECTOR_800d16f4;
  } while ((int)in_a1 < 0x31);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_ReportMemory()
 // line 727, offset 0x80050080
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x80050080
		// Variables:
	// 		struct MemHeader *address; // $v1
	// 		long i; // $a1
	// 		long firstTime; // $a0
	/* end block 1 */
	// End offset: 0x80050114
	// End Line: 799

	/* begin block 2 */
		// Start line: 1413
	/* end block 2 */
	// End Line: 1414

	/* begin block 3 */
		// Start line: 1414
	/* end block 3 */
	// End Line: 1415

	/* begin block 4 */
		// Start line: 1421
	/* end block 4 */
	// End Line: 1422

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MEMPACK_ReportMemory(void)

{
  bool bVar1;
  int in_v1;
  uint in_a1;
  int in_a2;
  int in_a3;
  
  do {
    bVar1 = false;
    do {
      in_v1 = in_v1 + *(int *)(in_v1 + 4);
      if (in_v1 == in_a2) {
        do {
          in_a1 = in_a1 + 1;
          if (0x30 < (int)in_a1) {
            return;
          }
          bVar1 = true;
          in_v1 = DVECTOR_800d16f4;
          in_a2 = DVECTOR_ARRAY_800d1700[0];
        } while (DVECTOR_800d16f4 == in_a3);
      }
    } while (((*(char *)(in_v1 + 2) == '\0') || ((uint)*(byte *)(in_v1 + 3) != in_a1)) || (!bVar1));
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_SetMemoryBeingStreamed(char *address /*$a0*/)
 // line 801, offset 0x8005011c
	/* begin block 1 */
		// Start line: 803
		// Start offset: 0x8005011C
	/* end block 1 */
	// End offset: 0x8005011C
	// End Line: 808

	/* begin block 2 */
		// Start line: 1597
	/* end block 2 */
	// End Line: 1598

	/* begin block 3 */
		// Start line: 1598
	/* end block 3 */
	// End Line: 1599

	/* begin block 4 */
		// Start line: 1603
	/* end block 4 */
	// End Line: 1604

void MEMPACK_SetMemoryBeingStreamed(char *address)

{
  undefined2 *in_v0;
  byte in_a1;
  uint *unaff_s1;
  int *unaff_s3;
  int iStack00000010;
  
  *unaff_s1 = *unaff_s1 + 0xb & 0xfffffffc;
  MEMPACK_Init();
  if (in_v0 == (undefined2 *)0x0) {
    in_v0 = (undefined2 *)FUN_8005f8f8();
    MEMPACK_Init();
    if (in_v0 == (undefined2 *)0x0) {
      FUN_80050018();
      iStack00000010 = DVECTOR_800d16f8 - DVECTOR_800d16fc;
                    /* WARNING: Subroutine does not return */
      FUN_80014454(s_Trying_to_fit_memory_size__d_Typ_800cee70,*unaff_s1,(uint)in_a1,
                   DVECTOR_800d16fc);
    }
  }
  if (*(uint *)(in_v0 + 2) - *unaff_s1 < 8) {
    *unaff_s1 = *(uint *)(in_v0 + 2);
  }
  if (*unaff_s1 == *(uint *)(in_v0 + 2)) {
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = in_a1;
    *(uint *)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = DVECTOR_800d16fc + *unaff_s1;
    *unaff_s3 = 0;
  }
  else {
    *unaff_s3 = *(uint *)(in_v0 + 2) - *unaff_s1;
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = in_a1;
    *(uint *)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = DVECTOR_800d16fc + *unaff_s1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_SetMemoryDoneStreamed(char *address /*$a0*/)
 // line 811, offset 0x80050128
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x80050128
	/* end block 1 */
	// End offset: 0x80050128
	// End Line: 818

	/* begin block 2 */
		// Start line: 1617
	/* end block 2 */
	// End Line: 1618

	/* begin block 3 */
		// Start line: 1618
	/* end block 3 */
	// End Line: 1619

	/* begin block 4 */
		// Start line: 1623
	/* end block 4 */
	// End Line: 1624

void MEMPACK_SetMemoryDoneStreamed(char *address)

{
  undefined2 *in_v0;
  uint *unaff_s1;
  byte unaff_s2;
  int *unaff_s3;
  int iStack00000010;
  
  *unaff_s1 = (uint)(address + 0xb) & 0xfffffffc;
  MEMPACK_Init();
  if (in_v0 == (undefined2 *)0x0) {
    in_v0 = (undefined2 *)FUN_8005f8f8();
    MEMPACK_Init();
    if (in_v0 == (undefined2 *)0x0) {
      FUN_80050018();
      iStack00000010 = DVECTOR_800d16f8 - DVECTOR_800d16fc;
                    /* WARNING: Subroutine does not return */
      FUN_80014454(s_Trying_to_fit_memory_size__d_Typ_800cee70,*unaff_s1,(uint)unaff_s2,
                   DVECTOR_800d16fc);
    }
  }
  if (*(uint *)(in_v0 + 2) - *unaff_s1 < 8) {
    *unaff_s1 = *(uint *)(in_v0 + 2);
  }
  if (*unaff_s1 == *(uint *)(in_v0 + 2)) {
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = unaff_s2;
    *(uint *)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = DVECTOR_800d16fc + *unaff_s1;
    *unaff_s3 = 0;
  }
  else {
    *unaff_s3 = *(uint *)(in_v0 + 2) - *unaff_s1;
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = unaff_s2;
    *(uint *)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = DVECTOR_800d16fc + *unaff_s1;
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MEMPACK_MemoryValidFunc(char *address /*$a0*/)
 // line 826, offset 0x80050134
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x80050134
	/* end block 1 */
	// End offset: 0x80050160
	// End Line: 853

	/* begin block 2 */
		// Start line: 1647
	/* end block 2 */
	// End Line: 1648

	/* begin block 3 */
		// Start line: 1648
	/* end block 3 */
	// End Line: 1649

	/* begin block 4 */
		// Start line: 1650
	/* end block 4 */
	// End Line: 1651

long MEMPACK_MemoryValidFunc(char *address)

{
  undefined2 *in_v0;
  char **unaff_s1;
  byte unaff_s2;
  char **unaff_s3;
  int iStack00000010;
  
  *unaff_s1 = address;
  MEMPACK_Init();
  if (in_v0 == (undefined2 *)0x0) {
    in_v0 = (undefined2 *)FUN_8005f8f8();
    MEMPACK_Init();
    if (in_v0 == (undefined2 *)0x0) {
      FUN_80050018();
      iStack00000010 = DVECTOR_800d16f8 - (int)DVECTOR_800d16fc;
                    /* WARNING: Subroutine does not return */
      FUN_80014454(s_Trying_to_fit_memory_size__d_Typ_800cee70,*unaff_s1,(uint)unaff_s2,
                   DVECTOR_800d16fc);
    }
  }
  if (*(char **)(in_v0 + 2) + -(int)*unaff_s1 < &DAT_00000008) {
    *unaff_s1 = *(char **)(in_v0 + 2);
  }
  if (*unaff_s1 == *(char **)(in_v0 + 2)) {
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = unaff_s2;
    *(char **)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = *unaff_s1 + (int)DVECTOR_800d16fc;
    *unaff_s3 = (char *)0x0;
  }
  else {
    *unaff_s3 = *(char **)(in_v0 + 2) + -(int)*unaff_s1;
    *in_v0 = 0xbade;
    *(undefined *)(in_v0 + 1) = 1;
    *(byte *)((int)in_v0 + 3) = unaff_s2;
    *(char **)(in_v0 + 2) = *unaff_s1;
    DVECTOR_800d16fc = *unaff_s1 + (int)DVECTOR_800d16fc;
  }
  return (long)(in_v0 + 4);
}



// decompiled code
// original method signature: 
// char * /*$ra*/ MEMPACK_GarbageCollectMalloc(unsigned long *allocSize /*$s1*/, unsigned char memType /*$s2*/, unsigned long *freeSize /*$s3*/)
 // line 855, offset 0x80050168
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x80050168
		// Variables:
	// 		struct MemHeader *bestAddress; // $s0
	/* end block 1 */
	// End offset: 0x800502AC
	// End Line: 918

	/* begin block 2 */
		// Start line: 1705
	/* end block 2 */
	// End Line: 1706

char * MEMPACK_GarbageCollectMalloc(ulong *allocSize,uchar memType,ulong *freeSize)

{
  undefined3 in_register_00000015;
  undefined4 *unaff_s1;
  uint unaff_s2;
  int iStack00000010;
  
  FUN_80050018(allocSize,CONCAT31(in_register_00000015,memType));
  iStack00000010 = DVECTOR_800d16f8 - DVECTOR_800d16fc;
                    /* WARNING: Subroutine does not return */
  FUN_80014454(s_Trying_to_fit_memory_size__d_Typ_800cee70,*unaff_s1,unaff_s2 & 0xff,
               DVECTOR_800d16fc);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_GarbageSplitMemoryNow(unsigned long allocSize /*$a0*/, struct MemHeader *bestAddress /*$a1*/, long memType /*$a2*/, unsigned long freeSize /*$a3*/)
 // line 921, offset 0x800502cc
	/* begin block 1 */
		// Start line: 923
		// Start offset: 0x800502CC

		/* begin block 1.1 */
			// Start line: 925
			// Start offset: 0x800502D4
			// Variables:
		// 		struct MemHeader *address; // $v0
		/* end block 1.1 */
		// End offset: 0x800502E8
		// End Line: 933
	/* end block 1 */
	// End offset: 0x800502E8
	// End Line: 935

	/* begin block 2 */
		// Start line: 1842
	/* end block 2 */
	// End Line: 1843

	/* begin block 3 */
		// Start line: 1843
	/* end block 3 */
	// End Line: 1844

void MEMPACK_GarbageSplitMemoryNow
               (ulong allocSize,MemHeader *bestAddress,long memType,ulong freeSize)

{
  int iVar1;
  int iVar2;
  int unaff_s0;
  
  FUN_8004fdb8();
  iVar2 = DVECTOR_800d16f4;
  do {
    iVar1 = iVar2;
    if (iVar1 == DVECTOR_ARRAY_800d1700[0]) {
      return;
    }
    iVar2 = iVar1 + *(int *)(iVar1 + 4);
  } while (iVar2 != unaff_s0);
  FUN_8004fdb8(iVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_GarbageCollectFree(struct MemHeader *memAddress /*$s0*/)
 // line 940, offset 0x800502f0
	/* begin block 1 */
		// Start line: 941
		// Start offset: 0x800502F0
		// Variables:
	// 		struct MemHeader *secondAddress; // $v1
	/* end block 1 */
	// End offset: 0x80050390
	// End Line: 977

	/* begin block 2 */
		// Start line: 1880
	/* end block 2 */
	// End Line: 1881

void MEMPACK_GarbageCollectFree(MemHeader *memAddress)

{
  int in_v1;
  int iVar1;
  int unaff_s0;
  
  do {
    iVar1 = unaff_s0 + *(int *)(unaff_s0 + 4);
    if (iVar1 == in_v1) {
      FUN_8004fdb8(unaff_s0);
      return;
    }
    unaff_s0 = iVar1;
  } while (iVar1 != DVECTOR_ARRAY_800d1700[0]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_DoGarbageCollection()
 // line 998, offset 0x800503a0
	/* begin block 1 */
		// Start line: 999
		// Start offset: 0x800503A0
		// Variables:
	// 		struct MemHeader *relocateAddress; // $s0
	// 		long foundOpening; // $s1
	// 		long done; // $s5
	// 		long addressSize; // $s3
	// 		long addressMemType; // $s2
	// 		long holdSize; // stack offset -40
	// 		long freeSize; // stack offset -36
	// 		char *oldAddress; // $s0
	// 		char *newAddress; // $s1
	/* end block 1 */
	// End offset: 0x80050590
	// End Line: 1131

	/* begin block 2 */
		// Start line: 1996
	/* end block 2 */
	// End Line: 1997

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MEMPACK_DoGarbageCollection(void)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  int iVar3;
  uint unaff_s1;
  uint uVar4;
  int iVar5;
  uint unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  
code_r0x800503a4:
  if (in_v0 == 0) goto LAB_800503d0;
  if (unaff_s1 != unaff_s6) goto LAB_800503d0;
  if ((uint)*(byte *)(unaff_s0 + 2) == unaff_s4) goto LAB_800503d0;
  unaff_s1 = 2;
  do {
    do {
      if (unaff_s1 == unaff_s4) {
        bVar1 = *(byte *)(unaff_s0 + 3);
        uVar4 = (uint)bVar1;
        iVar5 = *(int *)(unaff_s0 + 4) + -8;
        FUN_80050288(unaff_s0);
        in_stack_00000010 = iVar5;
        iVar2 = FUN_80050100(&stack0x00000010,uVar4,&stack0x00000014);
        iVar3 = unaff_s0 + 8;
        if (iVar2 != 0) {
          if (uVar4 == unaff_s4) {
            FUN_8005a820(iVar3);
          }
          else {
            if (bVar1 == 4) {
              FUN_80052678(iVar2);
            }
          }
          FUN_8007919c(iVar2,iVar3,iVar5);
          if (uVar4 == unaff_s4) {
            FUN_80050554(iVar2 + -8,iVar2 - iVar3,iVar3);
          }
          else {
            if (uVar4 == unaff_s6) {
              FUN_80050ed8(iVar2 + -8,iVar2 - iVar3,iVar3);
            }
            else {
              if (bVar1 == 0xe) {
                FUN_8005a47c(iVar3,iVar2);
              }
              else {
                if (bVar1 == 0x2c) {
                  FUN_80051448(iVar2 + -8,iVar2 - iVar3,iVar3);
                }
                else {
                  if (bVar1 == 4) {
                    FUN_80052694(iVar2 + -8,iVar2 - iVar3,iVar3);
                  }
                  else {
                    if (bVar1 == 0x2f) {
                      FUN_800528bc(iVar3,iVar2 - iVar3);
                    }
                  }
                }
              }
            }
          }
          FUN_80050264(in_stack_00000010,iVar2 + -8,uVar4,in_stack_00000014);
        }
      }
      else {
        unaff_s5 = 1;
      }
      if (unaff_s5 != 0) {
        DVECTOR_ARRAY_800d1700[1] = 0;
        return;
      }
      unaff_s1 = 0;
      unaff_s0 = DVECTOR_800d16f4;
    } while (DVECTOR_800d16f4 == DVECTOR_ARRAY_800d1700[0]);
    do {
      if (*(char *)(unaff_s0 + 2) != '\0') {
        in_v0 = FUN_8004fb78((uint)*(byte *)(unaff_s0 + 3));
        goto code_r0x800503a4;
      }
      unaff_s1 = 1;
LAB_800503d0:
      unaff_s0 = unaff_s0 + *(int *)(unaff_s0 + 4);
    } while (unaff_s0 != DVECTOR_ARRAY_800d1700[0]);
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_RelocateAreaType(struct MemHeader *newAddress /*$a0*/, long offset /*$s1*/, struct Level *oldLevel /*$s3*/)
 // line 1163, offset 0x800505bc
	/* begin block 1 */
		// Start line: 1164
		// Start offset: 0x800505BC
		// Variables:
	// 		struct Level *level; // $s0
	// 		struct _MultiSignal *msignal; // $a0
	// 		long sizeOfLevel; // $s2
	// 		long i; // $t0
	// 		long d; // $a3

		/* begin block 1.1 */
			// Start line: 1229
			// Start offset: 0x800508DC
			// Variables:
		// 		struct _Terrain *terrain; // $t1

			/* begin block 1.1.1 */
				// Start line: 1257
				// Start offset: 0x800509F8
				// Variables:
			// 		struct Intro *intro; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 1267
					// Start offset: 0x80050A34
					// Variables:
				// 		struct MultiSpline *multiSpline; // $a2
				/* end block 1.1.1.1 */
				// End offset: 0x80050B28
				// End Line: 1290
			/* end block 1.1.1 */
			// End offset: 0x80050B3C
			// End Line: 1292

			/* begin block 1.1.2 */
				// Start line: 1310
				// Start offset: 0x80050B64
				// Variables:
			// 		struct DrMoveAniTexDestInfo **dest; // $v0
			/* end block 1.1.2 */
			// End offset: 0x80050BB8
			// End Line: 1320

			/* begin block 1.1.3 */
				// Start line: 1363
				// Start offset: 0x80050C1C
				// Variables:
			// 		struct _VMObject *vmo; // $a1
			/* end block 1.1.3 */
			// End offset: 0x80050CF4
			// End Line: 1374

			/* begin block 1.1.4 */
				// Start line: 1361
				// Start offset: 0x80050D0C
				// Variables:
			// 		struct BSPTree *bsp; // $t2
			// 		struct _BSPNode *node; // $a2
			// 		struct _BSPLeaf *leaf; // $a1
			/* end block 1.1.4 */
			// End offset: 0x80050E24
			// End Line: 1401
		/* end block 1.1 */
		// End offset: 0x80050E24
		// End Line: 1403
	/* end block 1 */
	// End offset: 0x80050E58
	// End Line: 1421

	/* begin block 2 */
		// Start line: 2348
	/* end block 2 */
	// End Line: 2349

void MEMPACK_RelocateAreaType(MemHeader *newAddress,long offset,Level *oldLevel)

{
  int in_v0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  int *unaff_s0;
  int unaff_s1;
  
  iVar4 = 0;
  unaff_s0[0x60] = in_v0 + unaff_s1;
  if (unaff_s0[0x61] != 0) {
    iVar4 = unaff_s0[0x61] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x61] = iVar4;
  if (unaff_s0[3] != 0) {
    iVar8 = unaff_s0[3] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[3] = iVar8;
  if (unaff_s0[5] != 0) {
    iVar4 = unaff_s0[5] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[5] = iVar4;
  if (unaff_s0[7] != 0) {
    iVar8 = unaff_s0[7] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[7] = iVar8;
  if (unaff_s0[9] != 0) {
    iVar4 = unaff_s0[9] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[9] = iVar4;
  if (unaff_s0[0xb] != 0) {
    iVar8 = unaff_s0[0xb] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0xb] = iVar8;
  if (unaff_s0[0xd] != 0) {
    iVar4 = unaff_s0[0xd] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0xd] = iVar4;
  if (unaff_s0[0x17] != 0) {
    iVar8 = unaff_s0[0x17] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x17] = iVar8;
  if (unaff_s0[0x1a] != 0) {
    iVar4 = unaff_s0[0x1a] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x1a] = iVar4;
  if (unaff_s0[0x1d] != 0) {
    iVar8 = unaff_s0[0x1d] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x1d] = iVar8;
  if (unaff_s0[0x1f] != 0) {
    iVar4 = unaff_s0[0x1f] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x1f] = iVar4;
  if (unaff_s0[0x20] != 0) {
    iVar8 = unaff_s0[0x20] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x20] = iVar8;
  if (unaff_s0[0x22] != 0) {
    iVar4 = unaff_s0[0x22] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x22] = iVar4;
  if (unaff_s0[0x23] != 0) {
    iVar8 = unaff_s0[0x23] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x23] = iVar8;
  if (unaff_s0[0x26] != 0) {
    iVar4 = unaff_s0[0x26] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x26] = iVar4;
  if (unaff_s0[0x2b] != 0) {
    iVar8 = unaff_s0[0x2b] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x2b] = iVar8;
  if (unaff_s0[0x2c] != 0) {
    iVar4 = unaff_s0[0x2c] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x2c] = iVar4;
  if (unaff_s0[0x2d] != 0) {
    iVar8 = unaff_s0[0x2d] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x2d] = iVar8;
  if (unaff_s0[0x2e] != 0) {
    iVar4 = unaff_s0[0x2e] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x2e] = iVar4;
  if (unaff_s0[0x2f] != 0) {
    iVar8 = unaff_s0[0x2f] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x2f] = iVar8;
  if (unaff_s0[0x30] != 0) {
    iVar4 = unaff_s0[0x30] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x30] = iVar4;
  if (unaff_s0[0x31] != 0) {
    iVar8 = unaff_s0[0x31] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x31] = iVar8;
  if (unaff_s0[0x32] != 0) {
    iVar4 = unaff_s0[0x32] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x32] = iVar4;
  if (unaff_s0[0x34] != 0) {
    iVar8 = unaff_s0[0x34] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x34] = iVar8;
  if (unaff_s0[0x35] != 0) {
    iVar4 = unaff_s0[0x35] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x35] = iVar4;
  if (unaff_s0[0x37] != 0) {
    iVar8 = unaff_s0[0x37] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x37] = iVar8;
  if (unaff_s0[0x39] != 0) {
    iVar4 = unaff_s0[0x39] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x39] = iVar4;
  if (unaff_s0[0x3b] != 0) {
    iVar8 = unaff_s0[0x3b] + unaff_s1;
  }
  iVar4 = 0;
  unaff_s0[0x3b] = iVar8;
  if (0 < unaff_s0[0x3a]) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(iVar8 + unaff_s0[0x3b]);
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = iVar1 + unaff_s1;
      }
      *(int *)(iVar8 + unaff_s0[0x3b]) = iVar5;
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x24;
    } while (iVar4 < unaff_s0[0x3a]);
  }
  iVar4 = 0;
  if (unaff_s0[0x3d] != 0) {
    iVar4 = unaff_s0[0x3d] + unaff_s1;
  }
  iVar8 = 0;
  unaff_s0[0x3d] = iVar4;
  if (unaff_s0[0x15] != 0) {
    iVar8 = unaff_s0[0x15] + unaff_s1;
  }
  iVar4 = *unaff_s0;
  unaff_s0[0x15] = iVar8;
  if (iVar4 != 0) {
    iVar8 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar8 = *(int *)(iVar4 + 0xc) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0xc) = iVar8;
    if (*(int *)(iVar4 + 0x1c) != 0) {
      iVar1 = *(int *)(iVar4 + 0x1c) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x1c) = iVar1;
    if (*(int *)(iVar4 + 0x20) != 0) {
      iVar8 = *(int *)(iVar4 + 0x20) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x20) = iVar8;
    if (*(int *)(iVar4 + 0x24) != 0) {
      iVar1 = *(int *)(iVar4 + 0x24) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x24) = iVar1;
    if (*(int *)(iVar4 + 0x28) != 0) {
      iVar8 = *(int *)(iVar4 + 0x28) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x28) = iVar8;
    if (*(int *)(iVar4 + 0x30) != 0) {
      iVar1 = *(int *)(iVar4 + 0x30) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x30) = iVar1;
    if (*(int *)(iVar4 + 0x34) != 0) {
      iVar8 = *(int *)(iVar4 + 0x34) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x34) = iVar8;
    if (*(int *)(iVar4 + 0x38) != 0) {
      iVar1 = *(int *)(iVar4 + 0x38) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x38) = iVar1;
    if (*(int *)(iVar4 + 0x3c) != 0) {
      iVar8 = *(int *)(iVar4 + 0x3c) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x3c) = iVar8;
    if (*(int *)(iVar4 + 0x40) != 0) {
      iVar1 = *(int *)(iVar4 + 0x40) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x40) = iVar1;
    if (*(int *)(iVar4 + 0x48) != 0) {
      iVar8 = *(int *)(iVar4 + 0x48) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x48) = iVar8;
    if (*(int *)(iVar4 + 0x4c) != 0) {
      iVar1 = *(int *)(iVar4 + 0x4c) + unaff_s1;
    }
    iVar8 = 0;
    *(int *)(iVar4 + 0x4c) = iVar1;
    if (*(int *)(iVar4 + 0x50) != 0) {
      iVar8 = *(int *)(iVar4 + 0x50) + unaff_s1;
    }
    iVar1 = 0;
    *(int *)(iVar4 + 0x50) = iVar8;
    if (0 < *(int *)(iVar4 + 8)) {
      iVar8 = 0;
      do {
        iVar5 = *(int *)(iVar4 + 0xc) + iVar8;
        iVar11 = 0;
        if (*(int *)(iVar5 + 0x30) != 0) {
          iVar11 = *(int *)(iVar5 + 0x30) + unaff_s1;
        }
        ppiVar6 = (int **)0x0;
        *(int *)(iVar5 + 0x30) = iVar11;
        if (*(int *)(iVar5 + 0x38) != 0) {
          ppiVar6 = (int **)(*(int *)(iVar5 + 0x38) + unaff_s1);
        }
        *(int ***)(iVar5 + 0x38) = ppiVar6;
        if (ppiVar6 != (int **)0x0) {
          piVar9 = (int *)0x0;
          if (*ppiVar6 != (int *)0x0) {
            piVar9 = (int *)((int)*ppiVar6 + unaff_s1);
          }
          piVar12 = (int *)0x0;
          *ppiVar6 = piVar9;
          if (ppiVar6[1] != (int *)0x0) {
            piVar12 = (int *)((int)ppiVar6[1] + unaff_s1);
          }
          piVar9 = (int *)0x0;
          ppiVar6[1] = piVar12;
          if (ppiVar6[2] != (int *)0x0) {
            piVar9 = (int *)((int)ppiVar6[2] + unaff_s1);
          }
          piVar12 = (int *)0x0;
          ppiVar6[2] = piVar9;
          if (ppiVar6[3] != (int *)0x0) {
            piVar12 = (int *)((int)ppiVar6[3] + unaff_s1);
          }
          piVar9 = *ppiVar6;
          ppiVar6[3] = piVar12;
          if (piVar9 != (int *)0x0) {
            iVar11 = 0;
            if (*piVar9 != 0) {
              iVar11 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar11;
          }
          piVar9 = ppiVar6[1];
          if (piVar9 != (int *)0x0) {
            iVar11 = 0;
            if (*piVar9 != 0) {
              iVar11 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar11;
          }
          piVar9 = ppiVar6[2];
          if (piVar9 != (int *)0x0) {
            iVar11 = 0;
            if (*piVar9 != 0) {
              iVar11 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar11;
          }
          piVar9 = ppiVar6[3];
          if (piVar9 != (int *)0x0) {
            iVar11 = 0;
            if (*piVar9 != 0) {
              iVar11 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar11;
          }
        }
        iVar11 = 0;
        if (*(int *)(iVar5 + 0x3c) != 0) {
          iVar11 = *(int *)(iVar5 + 0x3c) + unaff_s1;
        }
        *(int *)(iVar5 + 0x3c) = iVar11;
        iVar1 = iVar1 + 1;
        iVar8 = iVar8 + 0x4c;
      } while (iVar1 < *(int *)(iVar4 + 8));
    }
    piVar9 = *(int **)(iVar4 + 0x28);
    if (((piVar9 != (int *)0x0) && (0 < *piVar9)) && (iVar8 = 0, 0 < *piVar9)) {
      do {
        piVar9 = piVar9 + 1;
        iVar1 = 0;
        if (*piVar9 != 0) {
          iVar1 = *piVar9 + unaff_s1;
        }
        *piVar9 = iVar1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < **(int **)(iVar4 + 0x28));
    }
    iVar8 = unaff_s0[1];
    if (iVar8 != 0) {
      iVar1 = 0;
      if (*(int *)(iVar8 + 8) != 0) {
        iVar1 = *(int *)(iVar8 + 8) + unaff_s1;
      }
      *(int *)(iVar8 + 8) = iVar1;
    }
    iVar8 = unaff_s0[0x15];
    if (iVar8 != 0) {
      iVar1 = 0;
      if (*(int *)(iVar8 + 8) != 0) {
        iVar1 = *(int *)(iVar8 + 8) + unaff_s1;
      }
      *(int *)(iVar8 + 8) = iVar1;
    }
    iVar8 = 0;
    if (0 < unaff_s0[2]) {
      iVar1 = 0;
      do {
        iVar11 = unaff_s0[3] + iVar1;
        iVar5 = 0;
        if (*(int *)(iVar11 + 0x20) != 0) {
          iVar5 = *(int *)(iVar11 + 0x20) + unaff_s1;
        }
        *(int *)(iVar11 + 0x20) = iVar5;
        iVar7 = *(int *)(iVar11 + 0x24);
        if (iVar7 == *(int *)((int)*(short *)(iVar11 + 8) * 4 + iVar5)) {
          iVar5 = 0;
          if (iVar7 != 0) {
            iVar5 = iVar7 + unaff_s1;
          }
          *(int *)(iVar11 + 0x24) = iVar5;
        }
        iVar5 = 0;
        if (0 < *(int *)(iVar11 + 0x1c)) {
          do {
            piVar9 = (int *)(iVar5 * 4 + *(int *)(iVar11 + 0x20));
            iVar10 = *piVar9;
            iVar7 = 0;
            if (iVar10 != 0) {
              iVar7 = iVar10 + unaff_s1;
            }
            *piVar9 = iVar7;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar11 + 0x1c));
        }
        iVar5 = 0;
        if (*(int *)(iVar11 + 0x2c) != 0) {
          iVar5 = *(int *)(iVar11 + 0x2c) + unaff_s1;
        }
        iVar7 = 0;
        *(int *)(iVar11 + 0x2c) = iVar5;
        if (*(int *)(iVar11 + 0x34) != 0) {
          iVar7 = *(int *)(iVar11 + 0x34) + unaff_s1;
        }
        iVar5 = 0;
        *(int *)(iVar11 + 0x34) = iVar7;
        if (*(int *)(iVar11 + 0x38) != 0) {
          iVar5 = *(int *)(iVar11 + 0x38) + unaff_s1;
        }
        *(int *)(iVar11 + 0x38) = iVar5;
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar8 < unaff_s0[2]);
    }
    puVar14 = *(uint **)(iVar4 + 0x48);
    iVar8 = 0;
    if (0 < *(int *)(iVar4 + 0x44)) {
      puVar13 = puVar14 + 2;
      do {
        uVar2 = 0;
        if (*puVar14 != 0) {
          uVar2 = *puVar14 + unaff_s1;
        }
        *puVar14 = uVar2;
        uVar2 = 0;
        if (puVar13[-1] != 0) {
          uVar2 = puVar13[-1] + unaff_s1;
        }
        uVar3 = 0;
        puVar13[-1] = uVar2;
        if (*puVar13 != 0) {
          uVar3 = *puVar13 + unaff_s1;
        }
        *puVar13 = uVar3;
        uVar2 = *puVar14;
        if (uVar2 < puVar13[-1]) {
          piVar9 = (int *)(uVar2 + 0x18);
          do {
            iVar1 = 0;
            if (piVar9[-1] != 0) {
              iVar1 = piVar9[-1] + unaff_s1;
            }
            iVar5 = 0;
            piVar9[-1] = iVar1;
            if (*piVar9 != 0) {
              iVar5 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar5;
            uVar2 = uVar2 + 0x2c;
            piVar9 = piVar9 + 0xb;
          } while (uVar2 < puVar13[-1]);
        }
        uVar2 = puVar13[-1];
        if (uVar2 < *puVar13) {
          piVar9 = (int *)(uVar2 + 8);
          do {
            iVar1 = 0;
            if (*piVar9 != 0) {
              iVar1 = *piVar9 + unaff_s1;
            }
            *piVar9 = iVar1;
            uVar2 = uVar2 + 0x30;
            piVar9 = piVar9 + 0xc;
          } while (uVar2 < *puVar13);
        }
        iVar8 = iVar8 + 1;
        puVar13 = puVar13 + 9;
        puVar14 = puVar14 + 9;
      } while (iVar8 < *(int *)(iVar4 + 0x44));
    }
  }
  if ((uint)unaff_s0[0x34] < (uint)unaff_s0[0x35]) {
    do {
      uVar2 = FUN_8001e198();
    } while (uVar2 < (uint)unaff_s0[0x35]);
  }
  FUN_800670a0(unaff_s0[0x37]);
  FUN_80059e40();
  FUN_80068048();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_RelocateG2AnimKeylistType(struct _G2AnimKeylist_Type **pKeylist /*$a0*/, int offset /*$a1*/, char *start /*$a2*/, char *end /*$a3*/)
 // line 1432, offset 0x80050ea0
	/* begin block 1 */
		// Start line: 1433
		// Start offset: 0x80050EA0

		/* begin block 1.1 */
			// Start line: 1436
			// Start offset: 0x80050EBC
			// Variables:
		// 		int j; // $a2
		// 		struct _G2AnimKeylist_Type *keylist; // $a3
		/* end block 1.1 */
		// End offset: 0x80050F38
		// End Line: 1452
	/* end block 1 */
	// End offset: 0x80050F38
	// End Line: 1453

	/* begin block 2 */
		// Start line: 3034
	/* end block 2 */
	// End Line: 3035

	/* begin block 3 */
		// Start line: 3035
	/* end block 3 */
	// End Line: 3036

void MEMPACK_RelocateG2AnimKeylistType
               (_G2AnimKeylist_Type **pKeylist,int offset,char *start,char *end)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = end;
  do {
    iVar1 = 0;
    if (*(int *)(pcVar2 + 0x14) != 0) {
      iVar1 = *(int *)(pcVar2 + 0x14) + offset;
    }
    *(int *)(pcVar2 + 0x14) = iVar1;
    start = start + 1;
    pcVar2 = pcVar2 + 4;
  } while ((int)start < (int)(uint)(byte)*end);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_RelocateObjectType(struct MemHeader *newAddress /*$a0*/, long offset /*$s0*/, struct Object *oldObject /*$s3*/)
 // line 1455, offset 0x80050f40
	/* begin block 1 */
		// Start line: 1456
		// Start offset: 0x80050F40
		// Variables:
	// 		struct _Instance *instance; // $a1
	// 		struct Object *object; // $s1
	// 		int i; // $s2
	// 		int j; // $a2
	// 		int d; // $a3
	// 		int sizeOfObject; // $s4
	// 		struct _Model *model; // $t0

		/* begin block 1.1 */
			// Start line: 1502
			// Start offset: 0x80051140
			// Variables:
		// 		struct _MFace *mface; // $a0
		/* end block 1.1 */
		// End offset: 0x80051178
		// End Line: 1507

		/* begin block 1.2 */
			// Start line: 1511
			// Start offset: 0x800511A0
			// Variables:
		// 		struct _Segment *segment; // $v0

			/* begin block 1.2.1 */
				// Start line: 1515
				// Start offset: 0x800511C8
				// Variables:
			// 		struct _HInfo *hInfo; // $v1
			/* end block 1.2.1 */
			// End offset: 0x8005120C
			// End Line: 1519
		/* end block 1.2 */
		// End offset: 0x8005120C
		// End Line: 1520

		/* begin block 1.3 */
			// Start line: 1522
			// Start offset: 0x80051230
			// Variables:
		// 		struct AniTexInfo *aniTexInfo; // $a0
		/* end block 1.3 */
		// End offset: 0x80051278
		// End Line: 1531

		/* begin block 1.4 */
			// Start line: 1535
			// Start offset: 0x80051288
			// Variables:
		// 		struct MultiSpline *multiSpline; // $v0
		/* end block 1.4 */
		// End offset: 0x80051378
		// End Line: 1557
	/* end block 1 */
	// End offset: 0x80051480
	// End Line: 1607

	/* begin block 2 */
		// Start line: 3084
	/* end block 2 */
	// End Line: 3085

void MEMPACK_RelocateObjectType(MemHeader *newAddress,long offset,Object *oldObject)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int unaff_s0;
  int unaff_s1;
  uint unaff_s3;
  int unaff_s4;
  
  iVar5 = 0;
  *(int *)(unaff_s1 + 0x28) = in_v0 + unaff_s0;
  if (*(int *)(unaff_s1 + 0x1c) != 0) {
    iVar5 = *(int *)(unaff_s1 + 0x1c) + unaff_s0;
  }
  iVar10 = 0;
  *(int *)(unaff_s1 + 0x1c) = iVar5;
  if (*(int *)(unaff_s1 + 0x20) != 0) {
    iVar10 = *(int *)(unaff_s1 + 0x20) + unaff_s0;
  }
  iVar5 = 0;
  *(int *)(unaff_s1 + 0x20) = iVar10;
  if (*(int *)(unaff_s1 + 0x24) != 0) {
    iVar5 = *(int *)(unaff_s1 + 0x24) + unaff_s0;
  }
  iVar10 = 0;
  *(int *)(unaff_s1 + 0x24) = iVar5;
  if (*(int *)(unaff_s1 + 0x38) != 0) {
    iVar10 = *(int *)(unaff_s1 + 0x38) + unaff_s0;
  }
  *(int *)(unaff_s1 + 0x38) = iVar10;
  if ((*(uint *)(newAddress + 1) & 0x8000000) != 0) {
    iVar5 = 0;
    if (*(int *)(unaff_s1 + 0x3c) != 0) {
      iVar5 = *(int *)(unaff_s1 + 0x3c) + unaff_s0;
    }
    iVar10 = 0;
    *(int *)(unaff_s1 + 0x3c) = iVar5;
    if (*(int *)(unaff_s1 + 0x40) != 0) {
      iVar10 = *(int *)(unaff_s1 + 0x40) + unaff_s0;
    }
    *(int *)(unaff_s1 + 0x40) = iVar10;
  }
  iVar5 = 0;
  if (0 < *(short *)(unaff_s1 + 8)) {
    iVar10 = 0;
    do {
      piVar3 = (int *)(iVar10 + *(int *)(unaff_s1 + 0xc));
      iVar6 = *piVar3;
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar1 = iVar6 + unaff_s0;
      }
      *piVar3 = iVar1;
      iVar6 = *(int *)(iVar10 + *(int *)(unaff_s1 + 0xc));
      iVar1 = 0;
      if (*(int *)(iVar6 + 4) != 0) {
        iVar1 = *(int *)(iVar6 + 4) + unaff_s0;
      }
      iVar8 = 0;
      *(int *)(iVar6 + 4) = iVar1;
      if (*(int *)(iVar6 + 0xc) != 0) {
        iVar8 = *(int *)(iVar6 + 0xc) + unaff_s0;
      }
      iVar1 = 0;
      *(int *)(iVar6 + 0xc) = iVar8;
      if (*(int *)(iVar6 + 0x14) != 0) {
        iVar1 = *(int *)(iVar6 + 0x14) + unaff_s0;
      }
      iVar8 = 0;
      *(int *)(iVar6 + 0x14) = iVar1;
      if (*(int *)(iVar6 + 0x1c) != 0) {
        iVar8 = *(int *)(iVar6 + 0x1c) + unaff_s0;
      }
      iVar1 = 0;
      *(int *)(iVar6 + 0x1c) = iVar8;
      if (*(int *)(iVar6 + 0x20) != 0) {
        iVar1 = *(int *)(iVar6 + 0x20) + unaff_s0;
      }
      iVar8 = 0;
      *(int *)(iVar6 + 0x20) = iVar1;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        iVar8 = *(int *)(iVar6 + 0x2c) + unaff_s0;
      }
      iVar1 = 0;
      *(int *)(iVar6 + 0x2c) = iVar8;
      if (*(int *)(iVar6 + 0x30) != 0) {
        iVar1 = *(int *)(iVar6 + 0x30) + unaff_s0;
      }
      iVar8 = 0;
      *(int *)(iVar6 + 0x30) = iVar1;
      if (*(int *)(iVar6 + 0x34) != 0) {
        iVar8 = *(int *)(iVar6 + 0x34) + unaff_s0;
      }
      iVar1 = 0;
      *(int *)(iVar6 + 0x34) = iVar8;
      if (0 < *(int *)(iVar6 + 0x10)) {
        iVar8 = 0;
        do {
          iVar9 = *(int *)(iVar6 + 0x14) + iVar8;
          if ((*(byte *)(iVar9 + 7) & 2) != 0) {
            iVar2 = 0;
            if (*(int *)(iVar9 + 8) != 0) {
              iVar2 = *(int *)(iVar9 + 8) + unaff_s0;
            }
            *(int *)(iVar9 + 8) = iVar2;
          }
          iVar1 = iVar1 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar1 < *(int *)(iVar6 + 0x10));
      }
      iVar1 = 0;
      if (0 < *(int *)(iVar6 + 0x18)) {
        iVar8 = 0;
        do {
          iVar9 = *(int *)(iVar6 + 0x1c) + iVar8;
          iVar2 = *(int *)(iVar9 + 0x14);
          iVar12 = 0;
          if (iVar2 != 0) {
            iVar12 = iVar2 + unaff_s0;
          }
          *(int *)(iVar9 + 0x14) = iVar12;
          if (iVar12 != 0) {
            iVar9 = 0;
            if (*(int *)(iVar12 + 4) != 0) {
              iVar9 = *(int *)(iVar12 + 4) + unaff_s0;
            }
            iVar2 = 0;
            *(int *)(iVar12 + 4) = iVar9;
            if (*(int *)(iVar12 + 0xc) != 0) {
              iVar2 = *(int *)(iVar12 + 0xc) + unaff_s0;
            }
            iVar9 = 0;
            *(int *)(iVar12 + 0xc) = iVar2;
            if (*(int *)(iVar12 + 0x14) != 0) {
              iVar9 = *(int *)(iVar12 + 0x14) + unaff_s0;
            }
            *(int *)(iVar12 + 0x14) = iVar9;
          }
          iVar1 = iVar1 + 1;
          iVar8 = iVar8 + 0x18;
        } while (iVar1 < *(int *)(iVar6 + 0x18));
      }
      piVar3 = *(int **)(iVar6 + 0x20);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + 1;
        iVar1 = 0;
        if (0 < *piVar3) {
          do {
            iVar8 = 0;
            if (*piVar11 != 0) {
              iVar8 = *piVar11 + unaff_s0;
            }
            *piVar11 = iVar8;
            iVar1 = iVar1 + 1;
            piVar11 = piVar11 + 3;
          } while (iVar1 < **(int **)(iVar6 + 0x20));
        }
      }
      ppiVar4 = *(int ***)(iVar6 + 0x2c);
      if (ppiVar4 != (int **)0x0) {
        piVar3 = (int *)0x0;
        if (*ppiVar4 != (int *)0x0) {
          piVar3 = (int *)((int)*ppiVar4 + unaff_s0);
        }
        piVar11 = (int *)0x0;
        *ppiVar4 = piVar3;
        if (ppiVar4[1] != (int *)0x0) {
          piVar11 = (int *)((int)ppiVar4[1] + unaff_s0);
        }
        piVar3 = (int *)0x0;
        ppiVar4[1] = piVar11;
        if (ppiVar4[2] != (int *)0x0) {
          piVar3 = (int *)((int)ppiVar4[2] + unaff_s0);
        }
        piVar11 = (int *)0x0;
        ppiVar4[2] = piVar3;
        if (ppiVar4[3] != (int *)0x0) {
          piVar11 = (int *)((int)ppiVar4[3] + unaff_s0);
        }
        piVar3 = *ppiVar4;
        ppiVar4[3] = piVar11;
        if (piVar3 != (int *)0x0) {
          iVar1 = 0;
          if (*piVar3 != 0) {
            iVar1 = *piVar3 + unaff_s0;
          }
          *piVar3 = iVar1;
        }
        piVar3 = ppiVar4[1];
        if (piVar3 != (int *)0x0) {
          iVar1 = 0;
          if (*piVar3 != 0) {
            iVar1 = *piVar3 + unaff_s0;
          }
          *piVar3 = iVar1;
        }
        piVar3 = ppiVar4[2];
        if (piVar3 != (int *)0x0) {
          iVar1 = 0;
          if (*piVar3 != 0) {
            iVar1 = *piVar3 + unaff_s0;
          }
          *piVar3 = iVar1;
        }
        piVar3 = ppiVar4[3];
        if (piVar3 != (int *)0x0) {
          iVar1 = 0;
          if (*piVar3 != 0) {
            iVar1 = *piVar3 + unaff_s0;
          }
          *piVar3 = iVar1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar5 < (int)*(short *)(unaff_s1 + 8));
  }
  iVar5 = 0;
  if (0 < *(short *)(unaff_s1 + 10)) {
    do {
      FUN_80050e38(*(int *)(unaff_s1 + 0x10) + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)*(short *)(unaff_s1 + 10));
  }
  if (*(int *)(unaff_s1 + 0x10) != 0) {
    iVar5 = (loadStatus.bigFile.subDirList)->subDirOffset;
    while (iVar5 != 0) {
      if (*(uint *)(iVar5 + 0x1c) == unaff_s3) {
        iVar10 = 0;
        if (*(int *)(iVar5 + 0x1a4) != 0) {
          iVar10 = *(int *)(iVar5 + 0x1a4) + unaff_s0;
        }
        *(int *)(iVar5 + 0x1a4) = iVar10;
      }
      iVar1 = 0;
      iVar10 = iVar5;
      if (*(char *)(iVar5 + 0x194) != '\0') {
        do {
          uVar7 = *(uint *)(iVar10 + 0x1dc);
          if ((unaff_s3 <= uVar7) && (uVar7 <= unaff_s3 + unaff_s4)) {
            iVar6 = 0;
            if (uVar7 != 0) {
              iVar6 = uVar7 + unaff_s0;
            }
            *(int *)(iVar10 + 0x1dc) = iVar6;
          }
          iVar1 = iVar1 + 1;
          iVar10 = iVar10 + 0x30;
        } while (iVar1 < (int)(uint)*(byte *)(iVar5 + 0x194));
      }
      iVar5 = *(int *)(iVar5 + 8);
    }
  }
  FUN_8005a1dc();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MEMPACK_RelocateCDMemory(struct MemHeader *newAddress /*$a0*/, long offset /*$a1*/, struct _BigFileDir *oldDir /*$a2*/)
 // line 1617, offset 0x800514b0
	/* begin block 1 */
		// Start line: 1618
		// Start offset: 0x800514B0
		// Variables:
	// 		struct _BigFileDir *newDir; // $a1
	/* end block 1 */
	// End offset: 0x800514B0
	// End Line: 1618

	/* begin block 2 */
		// Start line: 3234
	/* end block 2 */
	// End Line: 3235

void MEMPACK_RelocateCDMemory(MemHeader *newAddress,long offset,_BigFileDir *oldDir)

{
  int in_at;
  undefined4 in_v0;
  AadMemoryStruct *unaff_s0;
  
  *(undefined4 *)(in_at + -0x54ac) = in_v0;
  FUN_800bf678();
  FUN_8005146c();
  if (unaff_s0 == (AadMemoryStruct *)0x0) {
    aadMem = unaff_s0;
    return;
  }
  aadMem = unaff_s0;
                    /* WARNING: Subroutine does not return */
  FUN_800bcdac();
}





