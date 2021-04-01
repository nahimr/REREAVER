#include "THISDUST.H"
#include "LOAD3D.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_InitCd()
 // line 231, offset 0x80036d44
	/* begin block 1 */
		// Start line: 279
	/* end block 1 */
	// End Line: 280

	/* begin block 2 */
		// Start line: 462
	/* end block 2 */
	// End Line: 463

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_InitCd(void)

{
  fontTracker.font_buffer[251]._2_4_ = 4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CdSeekCallback(unsigned char intr /*$a0*/, unsigned char *result /*$a1*/)
 // line 255, offset 0x80036d74
	/* begin block 1 */
		// Start line: 327
	/* end block 1 */
	// End Line: 328

	/* begin block 2 */
		// Start line: 328
	/* end block 2 */
	// End Line: 329

void LOAD_CdSeekCallback(uchar intr,uchar *result)

{
  int in_v0;
  uchar *puVar1;
  int in_a2;
  int unaff_s0;
  int iVar2;
  undefined4 uStack00000010;
  
  puVar1 = result + in_v0;
  *(uchar **)(unaff_s0 + 8) = puVar1;
  if (*(int *)(unaff_s0 + 0x14) == in_a2) {
    *(uchar **)(unaff_s0 + 0x10) = result + *(int *)(unaff_s0 + 0x10);
    if (puVar1 == *(uchar **)(unaff_s0 + 4)) {
      fontTracker.font_buffer[251]._2_4_ = 5;
    }
    else {
      fontTracker.font_buffer[251]._2_4_ = 2;
    }
  }
  else {
    if (*(int *)(unaff_s0 + 0x14) == 6) {
      iVar2 = 2;
      if (puVar1 == *(uchar **)(unaff_s0 + 4)) {
        iVar2 = 5;
      }
      if (*(int *)(unaff_s0 + 0x20) != 0) {
        uStack00000010 = *(undefined4 *)(unaff_s0 + 0x28);
        (**(code **)(unaff_s0 + 0x20))
                  (*(undefined4 *)(unaff_s0 + 0x10),result,(uint)(iVar2 == 5),
                   *(undefined4 *)(unaff_s0 + 0x24));
      }
      if (*(_InstancePool **)(unaff_s0 + 0x10) == instancePool) {
        *(_VertexPool **)(unaff_s0 + 0x10) = gVertexPool;
        fontTracker.font_buffer[251]._2_4_ = iVar2;
      }
      else {
        *(_InstancePool **)(unaff_s0 + 0x10) = instancePool;
        fontTracker.font_buffer[251]._2_4_ = iVar2;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CdDataReady()
 // line 267, offset 0x80036d90
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x80036D90

		/* begin block 1.1 */
			// Start line: 275
			// Start offset: 0x80036DCC
			// Variables:
		// 		struct _ReadQueueEntry *currentQueueFile; // $s0
		// 		long actualReadSize; // $a1

			/* begin block 1.1.1 */
				// Start line: 292
				// Start offset: 0x80036E30
				// Variables:
			// 		int status; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80036E9C
			// End Line: 324
		/* end block 1.1 */
		// End offset: 0x80036E9C
		// End Line: 325
	/* end block 1 */
	// End offset: 0x80036E9C
	// End Line: 330

	/* begin block 2 */
		// Start line: 351
	/* end block 2 */
	// End Line: 352

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_CdDataReady(void)

{
  undefined4 in_v0;
  int in_v1;
  int in_a0;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x10) = in_v0;
  if (in_a0 == in_v1) {
    fontTracker.font_buffer[251]._2_4_ = 5;
  }
  else {
    fontTracker.font_buffer[251]._2_4_ = 2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CdReadReady(unsigned char intr /*$a0*/, unsigned char *result /*$a1*/)
 // line 333, offset 0x80036eb0
	/* begin block 1 */
		// Start line: 334
		// Start offset: 0x80036EB0

		/* begin block 1.1 */
			// Start line: 344
			// Start offset: 0x80036EDC
			// Variables:
		// 		long crap[3]; // stack offset -40
		// 		int bytes; // $s0

			/* begin block 1.1.1 */
				// Start line: 367
				// Start offset: 0x80036F50
				// Variables:
			// 		struct CdlLOC loc; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x80036F50
			// End Line: 370
		/* end block 1.1 */
		// End offset: 0x80036F50
		// End Line: 370
	/* end block 1 */
	// End offset: 0x80036F88
	// End Line: 396

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

void LOAD_CdReadReady(uchar intr,uchar *result)

{
  _ObjectTracker *p_Var1;
  uint unaff_s0;
  undefined4 unaff_s1;
  
  p_Var1 = (_ObjectTracker *)FUN_800bf53c(&stack0x00000010);
  if (GlobalObjects == p_Var1) {
    GlobalObjects = (_ObjectTracker *)(GlobalObjects->name + 1);
    FUN_800be8e0(fontTracker.font_buffer._1480_4_,unaff_s0 >> 2);
    FUN_80036d28();
  }
  else {
    fontTracker.font_buffer[251]._2_4_ = unaff_s1;
    FUN_800bf438(GlobalObjects,&stack0x00000020);
    FUN_800be524(6,&stack0x00000020,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_UpdateCheckSum(long bytes /*$a1*/)
 // line 398, offset 0x80036f9c
	/* begin block 1 */
		// Start line: 632
	/* end block 1 */
	// End Line: 633

	/* begin block 2 */
		// Start line: 635
	/* end block 2 */
	// End Line: 636

void LOAD_UpdateCheckSum(long bytes)

{
  int unaff_s0;
  
  if (fontTracker.font_buffer._1492_4_ != 0) {
    FUN_80036f34();
  }
  if (unaff_s0 == 5) {
    if ((fontTracker.font_buffer._1492_4_ == 0) ||
       (fontTracker._1548_4_ == fontTracker.font_buffer[248]._0_4_)) {
      fontTracker.font_buffer[247]._2_4_ = 0;
      if (planningPool != (void *)0x0) {
        planningPool = (void *)0x0;
        FUN_800500c0(fontTracker._1564_4_);
      }
    }
    else {
      fontTracker.font_buffer[247]._2_4_ = 7;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_DoCDReading()
 // line 413, offset 0x80036fe0
	/* begin block 1 */
		// Start line: 414
		// Start offset: 0x80036FE0
		// Variables:
	// 		long bytesLoaded; // $a0
	// 		long readSoFar; // $v0
	// 		long state; // $s0
	// 		long lastCheck; // $v1
	/* end block 1 */
	// End offset: 0x8003707C
	// End Line: 509

	/* begin block 2 */
		// Start line: 665
	/* end block 2 */
	// End Line: 666

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_DoCDReading(void)

{
  int in_v0;
  int in_v1;
  
  if (in_v1 == in_v0) {
    fontTracker.font_buffer[247]._2_4_ = 0;
    if (planningPool != (void *)0x0) {
      planningPool = (void *)0x0;
      FUN_800500c0(fontTracker._1564_4_);
    }
  }
  else {
    fontTracker.font_buffer[247]._2_4_ = 7;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_DoCDBufferedReading()
 // line 516, offset 0x8003708c
	/* begin block 1 */
		// Start line: 879
	/* end block 1 */
	// End Line: 880

	/* begin block 2 */
		// Start line: 881
	/* end block 2 */
	// End Line: 882

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_DoCDBufferedReading(void)

{
  undefined4 in_a0;
  
  FUN_800bf438(in_a0,&stack0x00000010);
  FUN_800be524(6,&stack0x00000010,0);
  fontTracker.font_buffer[253]._2_4_ = FUN_8003d748();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_SetupFileToDoCDReading()
 // line 527, offset 0x800370a8
	/* begin block 1 */
		// Start line: 528
		// Start offset: 0x800370A8

		/* begin block 1.1 */
			// Start line: 528
			// Start offset: 0x800370A8
			// Variables:
		// 		struct CdlLOC loc; // stack offset -16
		/* end block 1.1 */
		// End offset: 0x800370E4
		// End Line: 543
	/* end block 1 */
	// End offset: 0x800370E4
	// End Line: 544

	/* begin block 2 */
		// Start line: 901
	/* end block 2 */
	// End Line: 902

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_SetupFileToDoCDReading(void)

{
  undefined4 in_v0;
  
  fontTracker.font_buffer[253]._2_4_ = in_v0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_SetupFileToDoBufferedCDReading()
 // line 602, offset 0x80037124
	/* begin block 1 */
		// Start line: 603
		// Start offset: 0x80037124

		/* begin block 1.1 */
			// Start line: 603
			// Start offset: 0x80037124
			// Variables:
		// 		struct CdlLOC loc; // stack offset -16
		/* end block 1.1 */
		// End offset: 0x80037158
		// End Line: 619
	/* end block 1 */
	// End offset: 0x80037158
	// End Line: 620

	/* begin block 2 */
		// Start line: 1093
	/* end block 2 */
	// End Line: 1094

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_SetupFileToDoBufferedCDReading(void)

{
  undefined4 in_v0;
  
  fontTracker.font_buffer[253]._2_4_ = in_v0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_ProcessReadQueue()
 // line 627, offset 0x80037198
	/* begin block 1 */
		// Start line: 628
		// Start offset: 0x80037198

		/* begin block 1.1 */
			// Start line: 668
			// Start offset: 0x80037248
			// Variables:
		// 		long cdWaitTimeDiff; // $v0

			/* begin block 1.1.1 */
				// Start line: 674
				// Start offset: 0x80037298
				// Variables:
			// 		struct CdlLOC loc; // stack offset -16
			/* end block 1.1.1 */
			// End offset: 0x80037298
			// End Line: 675
		/* end block 1.1 */
		// End offset: 0x80037304
		// End Line: 699
	/* end block 1 */
	// End offset: 0x80037304
	// End Line: 701

	/* begin block 2 */
		// Start line: 1179
	/* end block 2 */
	// End Line: 1180

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_ProcessReadQueue(void)

{
  int iVar1;
  
  FUN_80037040();
  if (fontTracker.font_buffer[247]._2_4_ == 7) {
    fontTracker.font_buffer[247]._2_4_ = 1;
  }
  else {
    if ((fontTracker.font_buffer[253]._2_4_ != 0) &&
       ((iVar1 = FUN_8003d748(), 0x41a0 < iVar1 - fontTracker.font_buffer[253]._2_4_ ||
        (fontTracker.font_buffer[251]._2_4_ == 6)))) {
      if ((fontTracker.font_buffer[247]._2_4_ == 3) || (fontTracker.font_buffer[247]._2_4_ == 6)) {
        fontTracker.font_buffer[251]._2_4_ = 0;
        FUN_800be41c();
        FUN_80037c6c();
        fontTracker.font_buffer[251]._2_4_ = 1;
        FUN_800bf438(GlobalObjects,&stack0x00000010);
        FUN_800be524(6,&stack0x00000010,0);
        fontTracker.font_buffer[253]._2_4_ = FUN_8003d748();
      }
      else {
        iVar1 = FUN_800b7894(0);
        if (iVar1 == 0) {
          FUN_800be660(9,0);
        }
        fontTracker.font_buffer[253]._2_4_ = 0;
      }
    }
  }
  return;
}



// autogenerated function stub: 
// char * /*$ra*/ LOAD_ReadFileFromCD(char *filename /*$s1*/, int memType /*$s2*/)
char * LOAD_ReadFileFromCD(char *filename, int memType)
{ // line 705, offset 0x80037314
	/* begin block 1 */
		// Start line: 706
		// Start offset: 0x80037314
		// Variables:
			struct CdlFILE fp; // stack offset -40
			int i; // $s0
			char *readBuffer; // $s0
	/* end block 1 */
	// End offset: 0x800373DC
	// End Line: 750

	/* begin block 2 */
		// Start line: 1336
	/* end block 2 */
	// End Line: 1337

	return null;
}


// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CdReadFromBigFile(long fileOffset /*$a0*/, unsigned long *loadAddr /*$a1*/, long bytes /*$a2*/, long chksumLevel /*$a3*/, long checksum /*stack 16*/)
 // line 752, offset 0x800373f4
	/* begin block 1 */
		// Start line: 1449
	/* end block 1 */
	// End Line: 1450

void LOAD_CdReadFromBigFile
               (long fileOffset,ulong *loadAddr,long bytes,long chksumLevel,long checksum)

{
  int unaff_s0;
  
  FUN_8003738c(*(undefined4 *)(unaff_s0 + 4),loadAddr,bytes,0);
  return;
}



// decompiled code
// original method signature: 
// struct _BigFileDir * /*$ra*/ LOAD_ReadDirectory(struct _BigFileDirEntry *dirEntry /*$s0*/)
 // line 765, offset 0x80037420
	/* begin block 1 */
		// Start line: 766
		// Start offset: 0x80037420
		// Variables:
	// 		struct _BigFileDir *dir; // $s2
	// 		long sizeOfDir; // $s1
	/* end block 1 */
	// End offset: 0x80037420
	// End Line: 766

	/* begin block 2 */
		// Start line: 1479
	/* end block 2 */
	// End Line: 1480

_BigFileDir * LOAD_ReadDirectory(_BigFileDirEntry *dirEntry)

{
  int iVar1;
  int iVar2;
  undefined auStack40 [24];
  
  iVar2 = 0;
  fontTracker.font_buffer[251]._2_4_ = 0;
  do {
    iVar1 = FUN_800beab8(auStack40,dirEntry);
    if (iVar1 != 0) break;
    FUN_800be41c(0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  if (iVar2 != 10) {
    FUN_80037c6c();
    fontTracker._1556_4_ = FUN_800bf53c(auStack40);
    fontTracker.font_buffer[253]._2_4_ = 0;
    fontTracker.font_buffer[247]._2_4_ = 0;
    fontTracker._1564_4_ = 0;
    PTR_800d0c10 = (ulong **)0x0;
    gOt2 = (ulong **)0x0;
    primPool2 = (_PrimPool *)0x0;
    PTR_800d0c18 = (_PrimPool *)0x0;
    FUN_8003738c(0,&gPolytopeList,4,0,0);
    do {
      FUN_80037130();
      iVar2 = FUN_80037e60();
    } while (iVar2 != 0);
    FUN_800be660(9,0);
                    /* WARNING: Subroutine does not return */
    FUN_8004fbb0((int)gPolytopeList * 8 + 4,8);
  }
  return (_BigFileDir *)&DAT_0000000a;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_InitCdLoader(char *bigFileName /*$s0*/, char *voiceFileName /*$a1*/)
 // line 828, offset 0x80037488
	/* begin block 1 */
		// Start line: 829
		// Start offset: 0x80037488
		// Variables:
	// 		struct CdlFILE fp; // stack offset -40
	// 		long i; // $s1

		/* begin block 1.1 */
			// Start line: 896
			// Start offset: 0x80037538
			// Variables:
		// 		char *ptr; // $s0
		/* end block 1.1 */
		// End offset: 0x800375A0
		// End Line: 920
	/* end block 1 */
	// End offset: 0x800375C8
	// End Line: 932

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

void LOAD_InitCdLoader(char *bigFileName,char *voiceFileName)

{
  undefined4 in_v0;
  int iVar1;
  undefined4 uStack00000010;
  
  fontTracker.font_buffer[253]._2_4_ = 0;
  fontTracker.font_buffer[247]._2_4_ = 0;
  fontTracker._1564_4_ = 0;
  PTR_800d0c10 = (ulong **)0x0;
  gOt2 = (ulong **)0x0;
  primPool2 = (_PrimPool *)0x0;
  PTR_800d0c18 = (_PrimPool *)0x0;
  uStack00000010 = 0;
  fontTracker._1556_4_ = in_v0;
  FUN_8003738c(bigFileName,voiceFileName,4,bigFileName);
  do {
    FUN_80037130();
    iVar1 = FUN_80037e60();
  } while (iVar1 != 0);
  FUN_800be660(9,0);
                    /* WARNING: Subroutine does not return */
  FUN_8004fbb0((int)gPolytopeList * 8 + 4,8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ LOAD_SetupFileInfo(struct _NonBlockLoadEntry *loadEntry /*$s0*/)
 // line 934, offset 0x800375dc
	/* begin block 1 */
		// Start line: 935
		// Start offset: 0x800375DC
		// Variables:
	// 		struct _BigFileEntry *fileInfo; // $v1
	/* end block 1 */
	// End offset: 0x80037654
	// End Line: 958

	/* begin block 2 */
		// Start line: 1869
	/* end block 2 */
	// End Line: 1870

int LOAD_SetupFileInfo(_NonBlockLoadEntry *loadEntry)

{
  undefined4 in_v0;
  int in_v1;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x10) = in_v0;
  *(undefined4 *)(unaff_s0 + 0x14) = *(undefined4 *)(in_v1 + 0xc);
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CD_ReadPartOfFile(struct _NonBlockLoadEntry *loadEntry /*$s0*/)
 // line 963, offset 0x80037664
	/* begin block 1 */
		// Start line: 964
		// Start offset: 0x80037664
		// Variables:
	// 		struct _ReadQueueEntry *currentQueueReq; // $v1
	/* end block 1 */
	// End offset: 0x800376F4
	// End Line: 989

	/* begin block 2 */
		// Start line: 1928
	/* end block 2 */
	// End Line: 1929

void LOAD_CD_ReadPartOfFile(_NonBlockLoadEntry *loadEntry)

{
  undefined4 in_v0;
  int in_v1;
  int unaff_s0;
  
  *(undefined4 *)(in_v1 + 0x20) = in_v0;
  *(undefined4 *)(in_v1 + 0x24) = *(undefined4 *)(unaff_s0 + 0x2c);
  gLightInfo = (LightInfo *)0x0;
  *(undefined4 *)(in_v1 + 0x28) = *(undefined4 *)(unaff_s0 + 0x30);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LOAD_HashName(char *string /*stack 0*/)
 // line 1002, offset 0x80037704
	/* begin block 1 */
		// Start line: 1003
		// Start offset: 0x80037704
		// Variables:
	// 		long sum; // $s5
	// 		long xor; // $s6
	// 		long length; // $s4
	// 		long ext; // $s7
	// 		char c; // $v1
	// 		long strl; // $s2
	// 		long endPos; // $fp
	// 		long i; // $s0
	// 		char *pos; // $s3
	/* end block 1 */
	// End offset: 0x80037814
	// End Line: 1046

	/* begin block 2 */
		// Start line: 2014
	/* end block 2 */
	// End Line: 2015

long LOAD_HashName(char *string)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint uVar4;
  int unaff_s8;
  uint uVar5;
  int in_stack_00000038;
  
  do {
    iVar2 = FUN_80074604();
    uVar4 = unaff_s0;
    if (iVar2 == 0) break;
    unaff_s0 = unaff_s0 + 1;
    uVar4 = unaff_s7;
  } while ((int)unaff_s0 < 7);
  bVar1 = unaff_s2 < unaff_s8;
  if ((int)unaff_s0 < 7) {
    unaff_s2 = unaff_s2 + -4;
    bVar1 = unaff_s2 < unaff_s8;
  }
  uVar3 = unaff_s4 << 0x1b;
  if (!bVar1) {
    do {
      uVar3 = (uint)*(byte *)(in_stack_00000038 + unaff_s2);
      if (*(byte *)(in_stack_00000038 + unaff_s2) != 0x5c) {
        if (uVar3 - 0x61 < 0x1a) {
          uVar3 = uVar3 & 0xdf;
        }
        uVar3 = uVar3 - 0x1a & 0xff;
        uVar5 = uVar3 * unaff_s4;
        unaff_s5 = unaff_s5 + uVar3;
        unaff_s4 = unaff_s4 + 1;
        unaff_s6 = unaff_s6 ^ uVar5;
      }
      unaff_s2 = unaff_s2 + -1;
      uVar3 = unaff_s4 << 0x1b;
    } while (unaff_s8 <= unaff_s2);
  }
  return uVar3 | unaff_s5 << 0xf | unaff_s6 << 3 | uVar4;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LOAD_HashUnit(char *name /*$a0*/)
 // line 1049, offset 0x80037858
	/* begin block 1 */
		// Start line: 1051
		// Start offset: 0x80037858
		// Variables:
	// 		int val; // $v1
	// 		int last; // $t0
	// 		int hash; // $a2
	// 		int num; // $a3
	// 		int flag; // $t1
	// 		char *c; // $a0
	/* end block 1 */
	// End offset: 0x800378EC
	// End Line: 1085

	/* begin block 2 */
		// Start line: 2121
	/* end block 2 */
	// End Line: 2122

	/* begin block 3 */
		// Start line: 2122
	/* end block 3 */
	// End Line: 2123

	/* begin block 4 */
		// Start line: 2123
	/* end block 4 */
	// End Line: 2124

long LOAD_HashUnit(char *name)

{
  int in_v0;
  int iVar1;
  uint uVar2;
  uint in_v1;
  uint uVar3;
  int in_a2;
  int in_a3;
  uint in_t1;
  
  do {
    iVar1 = in_v0 << 5;
    uVar3 = in_v1;
    while( true ) {
      in_t1 = in_t1 ^ 1;
      while( true ) {
        name = (char *)((byte *)name + 1);
        if (*name == 0) {
          return (in_a2 + iVar1 + in_a3) * 0x10000 >> 0x10;
        }
        uVar2 = (uint)(byte)*name;
        if (9 < uVar2 - 0x30) break;
        in_a3 = in_a3 * 10 + -0x30 + uVar2;
      }
      in_v1 = uVar2 - 0x61;
      if (uVar2 - 0x41 < 0x1a) {
        in_v1 = uVar2 - 0x41;
      }
      in_a2 = (in_a2 + iVar1) * 4;
      if (in_t1 != 0) break;
      iVar1 = in_v1 - uVar3;
      uVar3 = in_v1;
    }
    in_v0 = in_v1 - uVar3;
  } while( true );
}



// decompiled code
// original method signature: 
// struct _BigFileEntry * /*$ra*/ LOAD_GetBigFileEntryByHash(long hash /*$a0*/)
 // line 1090, offset 0x800378fc
	/* begin block 1 */
		// Start line: 1092
		// Start offset: 0x800378FC
		// Variables:
	// 		int i; // $a1
	// 		struct _BigFileEntry *entry; // $v1
	/* end block 1 */
	// End offset: 0x8003797C
	// End Line: 1111

	/* begin block 2 */
		// Start line: 2226
	/* end block 2 */
	// End Line: 2227

	/* begin block 3 */
		// Start line: 2227
	/* end block 3 */
	// End Line: 2228

	/* begin block 4 */
		// Start line: 2230
	/* end block 4 */
	// End Line: 2231

_BigFileEntry * LOAD_GetBigFileEntryByHash(long hash)

{
  _BigFileEntry *in_v1;
  int in_a1;
  
  do {
    in_a1 = in_a1 + -1;
    if (in_v1->fileHash == hash) {
      return in_v1;
    }
    in_v1 = in_v1 + 1;
  } while (in_a1 != 0);
  return (_BigFileEntry *)0x0;
}



// decompiled code
// original method signature: 
// struct _BigFileEntry * /*$ra*/ LOAD_GetBigFileEntry(char *fileName /*$a0*/)
 // line 1113, offset 0x80037984
	/* begin block 1 */
		// Start line: 1114
		// Start offset: 0x80037984
	/* end block 1 */
	// End offset: 0x80037984
	// End Line: 1114

	/* begin block 2 */
		// Start line: 2277
	/* end block 2 */
	// End Line: 2278

_BigFileEntry * LOAD_GetBigFileEntry(char *fileName)

{
  int iVar1;
  _BigFileEntry *p_Var2;
  _NonBlockLoadEntry *loadEntry;
  undefined4 uStack00000010;
  
  iVar1 = FUN_80037574();
  p_Var2 = (_BigFileEntry *)&DAT_00000001;
  if (iVar1 == 0) {
    gLightInfo = (LightInfo *)&DAT_00000001;
  }
  else {
    if (*(int *)(fileName + 0xc) == 0) {
      if (*(int *)(fileName + 0x24) != 0) {
        loadEntry = *(_NonBlockLoadEntry **)(fileName + 0x10);
        p_Var2 = (_BigFileEntry *)FUN_8004fc2c(loadEntry,(uint)(byte)fileName[0x1c]);
        *(_BigFileEntry **)(fileName + 0xc) = p_Var2;
        LOAD_NonBlockingReadFile(loadEntry);
        return p_Var2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_8004fbb0(*(undefined4 *)(fileName + 0x10),(uint)(byte)fileName[0x1c]);
    }
    uStack00000010 = *(undefined4 *)(fileName + 0x14);
    p_Var2 = (_BigFileEntry *)
             FUN_8003738c(*(undefined4 *)(fileName + 8),*(undefined4 *)(fileName + 0xc),
                          *(undefined4 *)(fileName + 0x10),*(undefined4 *)(fileName + 0x18));
    gLightInfo = (LightInfo *)0x0;
  }
  return p_Var2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LOAD_DoesFileExist(char *fileName /*$a0*/)
 // line 1169, offset 0x800379ac
	/* begin block 1 */
		// Start line: 1170
		// Start offset: 0x800379AC
		// Variables:
	// 		struct _BigFileEntry *entry; // $v0
	/* end block 1 */
	// End offset: 0x800379D0
	// End Line: 1175

	/* begin block 2 */
		// Start line: 2338
	/* end block 2 */
	// End Line: 2339

long LOAD_DoesFileExist(char *fileName)

{
  int in_v0;
  long lVar1;
  _NonBlockLoadEntry *loadEntry;
  int unaff_s0;
  
  if (in_v0 != 0) {
    loadEntry = *(_NonBlockLoadEntry **)(unaff_s0 + 0x10);
    lVar1 = FUN_8004fc2c(loadEntry,(uint)*(byte *)(unaff_s0 + 0x1c));
    *(long *)(unaff_s0 + 0xc) = lVar1;
    LOAD_NonBlockingReadFile(loadEntry);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8004fbb0(*(undefined4 *)(unaff_s0 + 0x10),(uint)*(byte *)(unaff_s0 + 0x1c));
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_NonBlockingReadFile(struct _NonBlockLoadEntry *loadEntry /*$s0*/)
 // line 1181, offset 0x800379e0
	/* begin block 1 */
		// Start line: 2363
	/* end block 1 */
	// End Line: 2364

void LOAD_NonBlockingReadFile(_NonBlockLoadEntry *loadEntry)

{
  int unaff_s0;
  undefined4 uStack00000010;
  
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    uStack00000010 = *(undefined4 *)(unaff_s0 + 0x14);
    FUN_8003738c(*(undefined4 *)(unaff_s0 + 8),*(undefined4 *)(unaff_s0 + 0xc),
                 *(undefined4 *)(unaff_s0 + 0x10),*(undefined4 *)(unaff_s0 + 0x18));
  }
  gLightInfo = (LightInfo *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_LoadTIM(long *addr /*$a1*/, long x_pos /*$t0*/, long y_pos /*$a2*/, long clut_x /*$s1*/, long clut_y /*stack 16*/)
 // line 1226, offset 0x80037a9c
	/* begin block 1 */
		// Start line: 1227
		// Start offset: 0x80037A9C
		// Variables:
	// 		struct RECT rect; // stack offset -24
	// 		long *clutAddr; // $s0
	/* end block 1 */
	// End offset: 0x80037B28
	// End Line: 1256

	/* begin block 2 */
		// Start line: 2453
	/* end block 2 */
	// End Line: 2454

void LOAD_LoadTIM(long *addr,long x_pos,long y_pos,long clut_x,long clut_y)

{
  undefined2 uStack00000014;
  undefined2 uStack00000016;
  
  uStack00000014 = 0x10;
                    /* WARNING: Subroutine does not return */
  uStack00000016 = 1;
  FUN_800ba930();
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_LoadTIM2(long *addr /*$a1*/, long x_pos /*$a1*/, long y_pos /*$a2*/, long width /*$a3*/, long height /*stack 16*/)
 // line 1258, offset 0x80037b3c
	/* begin block 1 */
		// Start line: 1259
		// Start offset: 0x80037B3C
		// Variables:
	// 		struct RECT rect; // stack offset -16
	/* end block 1 */
	// End offset: 0x80037B3C
	// End Line: 1259

	/* begin block 2 */
		// Start line: 2525
	/* end block 2 */
	// End Line: 2526

void LOAD_LoadTIM2(long *addr,long x_pos,long y_pos,long width,long height)

{
  long in_v0;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_s0;
  
  addr[1] = in_v0;
  iVar1 = *unaff_s0 + 0x200;
  if (iVar1 < 0) {
    iVar1 = *unaff_s0 + 0x3ff;
  }
  iVar1 = iVar1 >> 9;
  FUN_8003c610(addr,unaff_s0 + iVar1 * 0x200);
  piVar3 = unaff_s0 + (x_pos >> 2) + iVar1 * -0x200;
  if (unaff_s0 < piVar3) {
    piVar2 = unaff_s0 + iVar1 * 0x200;
    do {
      *unaff_s0 = *piVar2;
      unaff_s0 = unaff_s0 + 1;
      piVar2 = unaff_s0 + iVar1 * 0x200;
    } while (unaff_s0 < piVar3);
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LOAD_RelocBinaryData(long *data /*$s0*/, long fileSize /*$s1*/)
 // line 1296, offset 0x80037b84
	/* begin block 1 */
		// Start line: 1297
		// Start offset: 0x80037B84
		// Variables:
	// 		long *lastMoveDest; // $v1
	// 		long tableSize; // $s3
	// 		struct RedirectList redirectListX; // stack offset -32
	// 		struct RedirectList *redirectList; // $a0
	/* end block 1 */
	// End offset: 0x80037C1C
	// End Line: 1317

	/* begin block 2 */
		// Start line: 2592
	/* end block 2 */
	// End Line: 2593

long LOAD_RelocBinaryData(long *data,long fileSize)

{
  undefined4 *puVar1;
  undefined4 *in_v1;
  undefined4 *unaff_s0;
  int unaff_s2;
  int unaff_s3;
  
  if (unaff_s0 < in_v1) {
    puVar1 = (undefined4 *)(unaff_s2 + (int)unaff_s0);
    do {
      *unaff_s0 = *puVar1;
      unaff_s0 = unaff_s0 + 1;
      puVar1 = (undefined4 *)(unaff_s2 + (int)unaff_s0);
    } while (unaff_s0 < in_v1);
  }
  return unaff_s3 << 2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_CleanUpBuffers()
 // line 1389, offset 0x80037c3c
	/* begin block 1 */
		// Start line: 2778
	/* end block 1 */
	// End Line: 2779

	/* begin block 2 */
		// Start line: 2711
	/* end block 2 */
	// End Line: 2712

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_CleanUpBuffers(void)

{
  undefined4 in_a0;
  
  gVertexPool = (_VertexPool *)FUN_8004fc2c(in_a0,0x23);
  if (gVertexPool == (_VertexPool *)0x0) {
    FUN_80037bd4();
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LOAD_InitBuffers()
 // line 1403, offset 0x80037c84
	/* begin block 1 */
		// Start line: 2739
	/* end block 1 */
	// End Line: 2740

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * LOAD_InitBuffers(void)

{
  void *pvVar1;
  
  FUN_800be4fc(&LAB_80036d0c);
  pvVar1 = (void *)FUN_800be524(0xe,&stack0x00000010,0);
  return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_InitCdStreamMode()
 // line 1418, offset 0x80037cd4
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x80037CD4
		// Variables:
	// 		unsigned char cdMode; // stack offset -16
	/* end block 1 */
	// End offset: 0x80037CD4
	// End Line: 1419

	/* begin block 2 */
		// Start line: 2772
	/* end block 2 */
	// End Line: 2773

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_InitCdStreamMode(void)

{
  if (gOt2 != (ulong **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_8004fe84();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_DumpCurrentDir()
 // line 1428, offset 0x80037d1c
	/* begin block 1 */
		// Start line: 2795
	/* end block 1 */
	// End Line: 2796

	/* begin block 2 */
		// Start line: 2796
	/* end block 2 */
	// End Line: 2797

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_DumpCurrentDir(void)

{
  ulong **ppuVar1;
  int iVar2;
  int iVar3;
  _PrimPool *unaff_s1;
  
  ppuVar1 = gOt2;
  if ((_PrimPool *)PTR_800d0c10 != unaff_s1) {
    if (primPool2 == unaff_s1) {
      primPool2 = (_PrimPool *)PTR_800d0c10;
      gOt2 = fontTracker._1564_4_;
      fontTracker._1564_4_ = ppuVar1;
      PTR_800d0c10 = (ulong **)unaff_s1;
    }
    else {
      iVar2 = 0;
      if (0 < (int)gPolytopeList) {
        do {
          iVar3 = iVar2 + 1;
          if (unaff_s1 == (_PrimPool *)(int)*(short *)(&instanceList->numInstances + iVar2 * 2)) {
            if (gOt2 == (ulong **)0x0) {
              planningPool = &DAT_00000001;
              primPool2 = (_PrimPool *)PTR_800d0c10;
              gOt2 = fontTracker._1564_4_;
              fontTracker._1564_4_ = (ulong **)FUN_800373b8(&instanceList->numInstances + iVar2 * 2)
              ;
              FUN_800500b4();
              PTR_800d0c10 = (ulong **)unaff_s1;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_8004fe84();
          }
          iVar2 = iVar3;
        } while (iVar3 < (int)gPolytopeList);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ LOAD_ChangeDirectoryByID(int id /*$s1*/)
 // line 1444, offset 0x80037d6c
	/* begin block 1 */
		// Start line: 1445
		// Start offset: 0x80037D6C

		/* begin block 1.1 */
			// Start line: 1449
			// Start offset: 0x80037D84
			// Variables:
		// 		int i; // $v1

			/* begin block 1.1.1 */
				// Start line: 1456
				// Start offset: 0x80037DA4
				// Variables:
			// 		struct _BigFileDir *dir; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80037DC4
			// End Line: 1462
		/* end block 1.1 */
		// End offset: 0x80037E5C
		// End Line: 1481
	/* end block 1 */
	// End offset: 0x80037E60
	// End Line: 1484

	/* begin block 2 */
		// Start line: 2828
	/* end block 2 */
	// End Line: 2829

int LOAD_ChangeDirectoryByID(int id)

{
  int in_v1;
  int iVar1;
  ulong **unaff_s1;
  
  do {
    iVar1 = in_v1 + 1;
    if (unaff_s1 == (ulong **)(int)*(short *)(&instanceList->numInstances + in_v1 * 2)) {
      if (gOt2 == (ulong **)0x0) {
        planningPool = &DAT_00000001;
        primPool2 = (_PrimPool *)PTR_800d0c10;
        gOt2 = fontTracker._1564_4_;
        fontTracker._1564_4_ = (ulong **)FUN_800373b8(&instanceList->numInstances + in_v1 * 2);
        FUN_800500b4();
        PTR_800d0c10 = unaff_s1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_8004fe84();
    }
    in_v1 = iVar1;
  } while (iVar1 < (int)gPolytopeList);
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_SetSearchDirectory(long id /*$a0*/)
 // line 1491, offset 0x80037e74
	/* begin block 1 */
		// Start line: 2982
	/* end block 1 */
	// End Line: 2983

	/* begin block 2 */
		// Start line: 2937
	/* end block 2 */
	// End Line: 2938

void LOAD_SetSearchDirectory(long id)

{
  undefined4 in_v0;
  int in_v1;
  
  if (in_v1 != 0) {
    planningPool = (void *)0x0;
  }
  fontTracker.font_buffer[247]._2_4_ = 0;
  fontTracker.font_buffer[251]._2_4_ = in_v0;
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LOAD_GetSearchDirectory()
 // line 1496, offset 0x80037e80
	/* begin block 1 */
		// Start line: 2946
	/* end block 1 */
	// End Line: 2947

	/* begin block 2 */
		// Start line: 2947
	/* end block 2 */
	// End Line: 2948

/* WARNING: Unknown calling convention yet parameter storage is locked */

long LOAD_GetSearchDirectory(void)

{
  long in_v0;
  
  planningPool = (void *)0x0;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ LOAD_ChangeDirectoryFlag()
 // line 1501, offset 0x80037e8c
	/* begin block 1 */
		// Start line: 2956
	/* end block 1 */
	// End Line: 2957

	/* begin block 2 */
		// Start line: 2957
	/* end block 2 */
	// End Line: 2958

/* WARNING: Unknown calling convention yet parameter storage is locked */

int LOAD_ChangeDirectoryFlag(void)

{
  FUN_800badd4(loadStatus.compEndBytes * 0x5c + -0x7ff2f374);
  *(undefined *)(&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 4) = 0;
  *(undefined *)((int)&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 0x10 + 1) =
       0;
  *(undefined *)((int)&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 0x10 + 2) =
       0;
  FUN_800bad08(loadStatus.compEndBytes * 0x10 + -0x7ff2f258);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_UpdateBigFilePointers(struct _BigFileDir *oldDir /*$a0*/, struct _BigFileDir *newDir /*$a1*/)
 // line 1506, offset 0x80037e98
	/* begin block 1 */
		// Start line: 2966
	/* end block 1 */
	// End Line: 2967

	/* begin block 2 */
		// Start line: 2967
	/* end block 2 */
	// End Line: 2968

void LOAD_UpdateBigFilePointers(_BigFileDir *oldDir,_BigFileDir *newDir)

{
  int in_v0;
  
  FUN_800badd4(in_v0 * 0x5c + -0x7ff2f374);
  *(undefined *)(&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 4) = 0;
  *(undefined *)((int)&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 0x10 + 1) =
       0;
  *(undefined *)((int)&loadStatus.currentQueueFile.retData2 + loadStatus.compEndBytes * 0x10 + 2) =
       0;
  FUN_800bad08(loadStatus.compEndBytes * 0x10 + -0x7ff2f258);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ LOAD_IsFileLoading()
 // line 1521, offset 0x80037ec8
	/* begin block 1 */
		// Start line: 2996
	/* end block 1 */
	// End Line: 2997

	/* begin block 2 */
		// Start line: 3002
	/* end block 2 */
	// End Line: 3003

/* WARNING: Unknown calling convention yet parameter storage is locked */

int LOAD_IsFileLoading(void)

{
  int in_v0;
  int in_v1;
  
  *(undefined *)(in_v0 + in_v1 + 4) = 0;
  *(undefined *)(loadStatus.compEndBytes * 0x10 + in_v1 + 5) = 0;
  *(undefined *)(loadStatus.compEndBytes * 0x10 + in_v1 + 6) = 0;
  FUN_800bad08(loadStatus.compEndBytes * 0x10 + in_v1);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ LOAD_StopLoad()
 // line 1563, offset 0x80037ed4
	/* begin block 1 */
		// Start line: 3126
	/* end block 1 */
	// End Line: 3127

	/* begin block 2 */
		// Start line: 3048
	/* end block 2 */
	// End Line: 3049

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LOAD_StopLoad(void)

{
  int in_v0;
  int in_v1;
  
  *(undefined *)(in_v0 * 0x10 + in_v1 + 5) = 0;
  *(undefined *)(loadStatus.compEndBytes * 0x10 + in_v1 + 6) = 0;
  FUN_800bad08(loadStatus.compEndBytes * 0x10 + in_v1);
                    /* WARNING: Subroutine does not return */
  FUN_800ba930(0);
}





