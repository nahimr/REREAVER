#include "THISDUST.H"
#include "CINEPSX.H"


// decompiled code
// original method signature: 
// int /*$ra*/ CINE_CDIntrQuery()
 // line 40, offset 0x800b777c
	/* begin block 1 */
		// Start line: 80
	/* end block 1 */
	// End Line: 81

	/* begin block 2 */
		// Start line: 81
	/* end block 2 */
	// End Line: 82

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CINE_CDIntrQuery(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int unaff_s0;
  
  uVar3 = (uint)*(byte *)(unaff_s0 + 0xa8);
  if (*(byte *)(unaff_s0 + 0xa8) == 0) {
    bVar1 = *(byte *)(unaff_s0 + 0xaa);
    uVar3 = (uint)(bVar1 < 3);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        uVar3 = (uint)*(byte *)(unaff_s0 + 0xa5);
        if (*(byte *)(unaff_s0 + 0xa5) != 0) {
          FUN_800b71e4();
          cVar5 = *(char *)(unaff_s0 + 0xa4) + '\x01';
          *(char *)(unaff_s0 + 0xa4) = cVar5;
          *(char *)(unaff_s0 + 0xa5) = *(char *)(unaff_s0 + 0xa5) + -1;
          uVar3 = 4;
          if (cVar5 == '\x04') {
            *(undefined *)(unaff_s0 + 0xa4) = 0;
          }
        }
      }
      else {
        CdGetSector2(0x10,0,0x800d5904);
        uVar3 = (uint)*(byte *)(unaff_s0 + 0x13) & 2;
        if ((*(byte *)(unaff_s0 + 0x13) & 2) != 0) {
          ExternalForces[2].LinearForce.y._0_1_ = *(undefined *)(unaff_s0 + 0x10);
          *(undefined *)(unaff_s0 + 0xaa) = 2;
          *(undefined *)(unaff_s0 + 3) = 0;
          *(undefined *)(unaff_s0 + 1) = *(undefined *)(unaff_s0 + 0x11);
          *(undefined *)(unaff_s0 + 2) = *(undefined *)(unaff_s0 + 0x12);
          iVar4 = FUN_800bf53c();
          iVar4 = iVar4 + -0x96;
          *(int *)(unaff_s0 + 4) = iVar4;
          bVar2 = iVar4 < *(int *)(unaff_s0 + 8) + -8;
          uVar3 = (uint)bVar2;
          if (!bVar2) {
            uVar3 = FUN_800b71e4();
          }
        }
      }
    }
  }
  return uVar3;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ CINE_Pad(int pad /*$a0*/)
 // line 51, offset 0x800b77a4
	/* begin block 1 */
		// Start line: 102
	/* end block 1 */
	// End Line: 103

	/* begin block 2 */
		// Start line: 103
	/* end block 2 */
	// End Line: 104

ushort CINE_Pad(int pad)

{
  ushort in_v0;
  char cVar1;
  int in_v1;
  int unaff_s0;
  
  if ((in_v1 == 0) && (in_v0 = (ushort)*(byte *)(unaff_s0 + 0xa5), *(byte *)(unaff_s0 + 0xa5) != 0))
  {
    FUN_800b71e4();
    cVar1 = *(char *)(unaff_s0 + 0xa4) + '\x01';
    *(char *)(unaff_s0 + 0xa4) = cVar1;
    *(char *)(unaff_s0 + 0xa5) = *(char *)(unaff_s0 + 0xa5) + -1;
    in_v0 = 4;
    if (cVar1 == '\x04') {
      *(undefined *)(unaff_s0 + 0xa4) = 0;
    }
  }
  return in_v0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CINE_Play(char *strfile /*$a0*/, unsigned short mask /*$a1*/, int buffers /*$a2*/)
 // line 62, offset 0x800b77c8
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800B77C8

		/* begin block 1.1 */
			// Start line: 74
			// Start offset: 0x800B7810
		/* end block 1.1 */
		// End offset: 0x800B781C
		// End Line: 75
	/* end block 1 */
	// End offset: 0x800B781C
	// End Line: 77

	/* begin block 2 */
		// Start line: 119
	/* end block 2 */
	// End Line: 120

	/* begin block 3 */
		// Start line: 126
	/* end block 3 */
	// End Line: 127

	/* begin block 4 */
		// Start line: 128
	/* end block 4 */
	// End Line: 129

void CINE_Play(char *strfile,ushort mask,int buffers)

{
  int in_v0;
  char cVar1;
  int unaff_s0;
  
  FUN_800b71e4(strfile,mask,1,(uint)*(ushort *)(in_v0 * 2 + unaff_s0 + 0x58));
  cVar1 = *(char *)(unaff_s0 + 0xa4) + '\x01';
  *(char *)(unaff_s0 + 0xa4) = cVar1;
  *(char *)(unaff_s0 + 0xa5) = *(char *)(unaff_s0 + 0xa5) + -1;
  if (cVar1 == '\x04') {
    *(undefined *)(unaff_s0 + 0xa4) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CINE_Load()
 // line 79, offset 0x800b782c
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x800B782C
		// Variables:
	// 		struct _ObjectTracker *tracker; // $s1
	// 		int attempts; // $s0

		/* begin block 1.1 */
			// Start line: 95
			// Start offset: 0x800B788C
		/* end block 1.1 */
		// End offset: 0x800B78A8
		// End Line: 105
	/* end block 1 */
	// End offset: 0x800B78B8
	// End Line: 106

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CINE_Load(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int unaff_s0;
  
  ExternalForces[2].LinearForce.y._0_1_ = *(undefined *)(unaff_s0 + 0x10);
  *(undefined *)(unaff_s0 + 0xaa) = 2;
  *(undefined *)(unaff_s0 + 3) = 0;
  *(undefined *)(unaff_s0 + 1) = *(undefined *)(unaff_s0 + 0x11);
  *(undefined *)(unaff_s0 + 2) = *(undefined *)(unaff_s0 + 0x12);
  iVar2 = FUN_800bf53c();
  iVar2 = iVar2 + -0x96;
  *(int *)(unaff_s0 + 4) = iVar2;
  bVar1 = iVar2 < *(int *)(unaff_s0 + 8) + -8;
  uVar3 = (uint)bVar1;
  if (!bVar1) {
    uVar3 = FUN_800b71e4();
  }
  return uVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CINE_Loaded()
 // line 108, offset 0x800b78d0
	/* begin block 1 */
		// Start line: 238
	/* end block 1 */
	// End Line: 239

	/* begin block 2 */
		// Start line: 239
	/* end block 2 */
	// End Line: 240

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CINE_Loaded(void)

{
  return (uint)((Norm._0_4_ & 0xffff0000) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CINE_Unload()
 // line 113, offset 0x800b78e0
	/* begin block 1 */
		// Start line: 248
	/* end block 1 */
	// End Line: 249

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CINE_Unload(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CINE_PlayIngame(int number /*$a2*/)
 // line 126, offset 0x800b7928
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x800B7928
		// Variables:
	// 		char movie_name[24]; // stack offset -32
	/* end block 1 */
	// End offset: 0x800B7968
	// End Line: 138

	/* begin block 2 */
		// Start line: 278
	/* end block 2 */
	// End Line: 279

void CINE_PlayIngame(int number)

{
  return;
}





