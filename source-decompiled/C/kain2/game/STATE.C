#include "THISDUST.H"
#include "STATE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitMessageQueue(struct __MessageQueue *In /*$a0*/)
 // line 88, offset 0x8007071c
	/* begin block 1 */
		// Start line: 117
	/* end block 1 */
	// End Line: 118

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

	/* begin block 3 */
		// Start line: 118
	/* end block 3 */
	// End Line: 119

/* WARNING: Removing unreachable block (ram,0x80070734) */

void InitMessageQueue(__MessageQueue *In)

{
  if (2 < Up) {
    Pending = 0;
  }
  Down = 0;
  return;
}



// decompiled code
// original method signature: 
// struct __Event * /*$ra*/ DeMessageQueue(struct __MessageQueue *In /*$a0*/)
 // line 95, offset 0x80070728
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x80070728
	/* end block 1 */
	// End offset: 0x8007075C
	// End Line: 109

	/* begin block 2 */
		// Start line: 131
	/* end block 2 */
	// End Line: 132

	/* begin block 3 */
		// Start line: 132
	/* end block 3 */
	// End Line: 133

	/* begin block 4 */
		// Start line: 135
	/* end block 4 */
	// End Line: 136

__Event * DeMessageQueue(__MessageQueue *In)

{
  int in_v1;
  
  if (5 < in_v1) {
    Pending = in_v1;
  }
  if (Up >= 3) {
    Pending = 0;
  }
  return (__Event *)(uint)(Up < 3);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PurgeMessageQueue(struct __MessageQueue *In /*$a0*/)
 // line 157, offset 0x80070764
	/* begin block 1 */
		// Start line: 314
	/* end block 1 */
	// End Line: 315

	/* begin block 2 */
		// Start line: 207
	/* end block 2 */
	// End Line: 208

void PurgeMessageQueue(__MessageQueue *In)

{
  int iVar1;
  
  iVar1 = In->Head + 1;
  if (In->Head == In->Tail) {
    return;
  }
  In->Head = iVar1;
  if (iVar1 == 0x10) {
    In->Head = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// struct __Event * /*$ra*/ PeekMessageQueue(struct __MessageQueue *In /*$a0*/)
 // line 164, offset 0x80070770
	/* begin block 1 */
		// Start line: 220
	/* end block 1 */
	// End Line: 221

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

__Event * PeekMessageQueue(__MessageQueue *In)

{
  int in_v0;
  int in_a1;
  
  if (in_a1 == in_v0) {
    return (__Event *)0x0;
  }
  In->Head = in_a1 + 1;
  if (in_a1 + 1 == 0x10) {
    In->Head = 0;
  }
  return In->Queue + in_a1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ EnMessageQueue(struct __MessageQueue *In /*$a0*/, struct __Event *Element /*$v0*/)
 // line 197, offset 0x80070798
	/* begin block 1 */
		// Start line: 262
	/* end block 1 */
	// End Line: 263

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

void EnMessageQueue(__MessageQueue *In,__Event *Element)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ EnMessageQueueData(struct __MessageQueue *In /*$a0*/, int ID /*$a1*/, int Data /*$a2*/)
 // line 204, offset 0x800707c4
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800707C4
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80070838
	// End Line: 251

	/* begin block 2 */
		// Start line: 303
	/* end block 2 */
	// End Line: 304

	/* begin block 3 */
		// Start line: 304
	/* end block 3 */
	// End Line: 305

	/* begin block 4 */
		// Start line: 308
	/* end block 4 */
	// End Line: 309

void EnMessageQueueData(__MessageQueue *In,int ID,int Data)

{
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CIRC_Alloc(int size /*$a0*/)
 // line 268, offset 0x80070840
	/* begin block 1 */
		// Start line: 270
		// Start offset: 0x80070840
		// Variables:
	// 		void *ret; // $v1
	/* end block 1 */
	// End offset: 0x8007087C
	// End Line: 287

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

	/* begin block 3 */
		// Start line: 433
	/* end block 3 */
	// End Line: 434

	/* begin block 4 */
		// Start line: 437
	/* end block 4 */
	// End Line: 438

void * CIRC_Alloc(int size)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)size;
  puVar1 = *(undefined4 **)(size + 4);
  if (puVar2 == puVar1) {
    do {
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      if (puVar2 == &DAT_00000010) {
        puVar2 = (undefined4 *)0x0;
      }
      puVar1 = *(undefined4 **)(size + 4);
    } while (puVar2 != puVar1);
  }
  return puVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetCollideInfoData(struct _CollideInfo *srcCI /*$s0*/)
 // line 298, offset 0x80070884
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x80070884
		// Variables:
	// 		struct _CollideInfo *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800708D0
	// End Line: 305

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

int SetCollideInfoData(_CollideInfo *srcCI)

{
  uint in_v0;
  void *pvVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((int)circWhere + ((uint)srcCI & in_v0));
  pvVar1 = circWhere;
  if (circBuf + 0xe20 < pcVar2) {
    circWhere = (void *)(((uint)srcCI & in_v0) + 0x800d2c4c);
    return -0x7ff2d3b4;
  }
  circWhere = pcVar2;
  return (int)pvVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetMonsterHitData(struct _Instance *Sender /*$s1*/, struct _Instance *lastHit /*$s2*/, int Power /*$s3*/, int knockBackDistance /*$s4*/, int knockBackFrames /*stack 16*/)
 // line 315, offset 0x800708e0
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x800708E0
		// Variables:
	// 		struct evMonsterHitData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800708E0
	// End Line: 316

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

int SetMonsterHitData(_Instance *Sender,_Instance *lastHit,int Power,int knockBackDistance,
                     int knockBackFrames)

{
  int in_v0;
  NodeType **in_v1;
  NodeType *pNVar1;
  _Instance *p_Var2;
  _Instance *p_Var3;
  _Instance *unaff_s0;
  
  do {
    pNVar1 = (unaff_s0->node).next;
    p_Var2 = unaff_s0->next;
    p_Var3 = unaff_s0->prev;
    *in_v1 = (unaff_s0->node).prev;
    in_v1[1] = pNVar1;
    *(_Instance **)(in_v1 + 2) = p_Var2;
    *(_Instance **)(in_v1 + 3) = p_Var3;
    unaff_s0 = (_Instance *)&unaff_s0->instanceID;
    in_v1 = in_v1 + 4;
  } while (unaff_s0 != Sender);
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetMonsterThrownData(struct _Instance *Sender /*$s1*/, struct _Rotation *Direction /*$s0*/, int Power /*$s2*/)
 // line 332, offset 0x8007094c
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x8007094C
		// Variables:
	// 		struct evMonsterThrownData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x8007094C
	// End Line: 333

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

int SetMonsterThrownData(_Instance *Sender,_Rotation *Direction,int Power)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x10);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetMonsterAlarmData(struct _Instance *sender /*$s1*/, struct _Position *position /*$s0*/, int type /*$s2*/)
 // line 348, offset 0x800709b4
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x800709B4
		// Variables:
	// 		struct evMonsterAlarmData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800709B4
	// End Line: 349

	/* begin block 2 */
		// Start line: 595
	/* end block 2 */
	// End Line: 596

int SetMonsterAlarmData(_Instance *sender,_Position *position,int type)

{
  undefined2 uVar1;
  int in_v0;
  undefined2 *unaff_s0;
  undefined2 unaff_s2;
  
  *(undefined2 *)(in_v0 + 4) = *unaff_s0;
  *(undefined2 *)(in_v0 + 6) = unaff_s0[1];
  uVar1 = unaff_s0[2];
  *(undefined2 *)(in_v0 + 0xc) = unaff_s2;
  *(undefined2 *)(in_v0 + 8) = uVar1;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetMonsterSoulSuckData(struct _Instance *Sender /*$s0*/, int x /*$s1*/, int y /*$s2*/, int z /*$s3*/)
 // line 365, offset 0x80070a1c
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x80070A1C
		// Variables:
	// 		struct evMonsterSoulSuckData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070A1C
	// End Line: 366

	/* begin block 2 */
		// Start line: 630
	/* end block 2 */
	// End Line: 631

int SetMonsterSoulSuckData(_Instance *Sender,int x,int y,int z)

{
  undefined2 uVar1;
  int in_v0;
  undefined2 *unaff_s0;
  undefined2 unaff_s2;
  
  *(undefined2 *)(in_v0 + 4) = *unaff_s0;
  *(undefined2 *)(in_v0 + 6) = unaff_s0[1];
  uVar1 = unaff_s0[2];
  *(undefined2 *)(in_v0 + 10) = unaff_s2;
  *(undefined2 *)(in_v0 + 8) = uVar1;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetMonsterImpaleData(struct _Instance *weapon /*$s2*/, struct _Rotation *direction /*$s0*/, struct _Position *position /*$s1*/, int distance /*$s3*/)
 // line 382, offset 0x80070a78
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x80070A78
		// Variables:
	// 		struct evMonsterImpaleData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070A78
	// End Line: 383

	/* begin block 2 */
		// Start line: 664
	/* end block 2 */
	// End Line: 665

int SetMonsterImpaleData(_Instance *weapon,_Rotation *direction,_Position *position,int distance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0xc);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectData(int x /*$s1*/, int y /*$s2*/, int PathNumber /*$s3*/, struct _Instance *Force /*$s4*/, int node /*stack 16*/)
 // line 403, offset 0x80070b10
	/* begin block 1 */
		// Start line: 404
		// Start offset: 0x80070B10
		// Variables:
	// 		struct evObjectData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070B10
	// End Line: 404

	/* begin block 2 */
		// Start line: 707
	/* end block 2 */
	// End Line: 708

int SetObjectData(int x,int y,int PathNumber,_Instance *Force,int node)

{
  undefined2 uVar1;
  int in_v0;
  undefined2 in_v1;
  int unaff_s1;
  undefined2 unaff_s3;
  
  *(undefined2 *)(in_v0 + 0xc) = in_v1;
  *(undefined2 *)(in_v0 + 0xe) = *(undefined2 *)(unaff_s1 + 2);
  uVar1 = *(undefined2 *)(unaff_s1 + 4);
  *(undefined2 *)(in_v0 + 0x12) = unaff_s3;
  *(undefined2 *)(in_v0 + 0x10) = uVar1;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPositionData(int x /*$s0*/, int y /*$s1*/, int z /*$s2*/)
 // line 420, offset 0x80070b7c
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x80070B7C
		// Variables:
	// 		struct evPositionData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070B7C
	// End Line: 421

	/* begin block 2 */
		// Start line: 741
	/* end block 2 */
	// End Line: 742

int SetPositionData(int x,int y,int z)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x10);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsGravityData(int UpperOffset /*$s2*/, int LowerOffset /*$s3*/, int x /*$s4*/, int y /*$s5*/, int z /*stack 16*/, int slope /*stack 20*/)
 // line 438, offset 0x80070bc8
	/* begin block 1 */
		// Start line: 439
		// Start offset: 0x80070BC8
		// Variables:
	// 		struct evPhysicsGravityData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070BC8
	// End Line: 439

	/* begin block 2 */
		// Start line: 777
	/* end block 2 */
	// End Line: 778

int SetPhysicsGravityData(int UpperOffset,int LowerOffset,int x,int y,int z,int slope)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(8);
}



// autogenerated function stub: 
// int /*$ra*/ SetPhysicsEdgeData(int UpperOffset /*$s5*/, int ForwardOffset /*$s6*/, int AboveOffset /*$s7*/, int x /*$fp*/, int y /*stack 16*/, int z /*stack 20*/, struct _SVector *Normal1 /*stack 24*/, struct _SVector *Normal2 /*stack 28*/, struct _SVector *Delta /*stack 32*/)
int SetPhysicsEdgeData(int UpperOffset, int ForwardOffset, int AboveOffset, int x, int y, int z, struct _SVector *Normal1, struct _SVector *Normal2, struct _SVector *Delta)
{ // line 462, offset 0x80070c44
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x80070C44
		// Variables:
			struct evPhysicsEdgeData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070C44
	// End Line: 463

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

	return 0;
}


// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsSwimData(int CheckDepth /*$s1*/, struct _SVector *iVelocity /*$s2*/, int SwimDepth /*$s3*/, int WadeDepth /*$s4*/, int TreadDepth /*stack 16*/)
 // line 485, offset 0x80070cf0
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x80070CF0
		// Variables:
	// 		struct evPhysicsSwimData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070CF0
	// End Line: 486

	/* begin block 2 */
		// Start line: 871
	/* end block 2 */
	// End Line: 872

int SetPhysicsSwimData(int CheckDepth,_SVector *iVelocity,int SwimDepth,int WadeDepth,int TreadDepth
                      )

{
  int in_v0;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  
  *(undefined4 *)(in_v0 + 0xc) = unaff_s2;
  *(undefined4 *)(in_v0 + 0x10) = unaff_s3;
  *(undefined4 *)(in_v0 + 0x14) = unaff_s4;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsDropOffData(int xOffset /*$s1*/, int yOffset /*$s2*/, int DropOffset /*$s3*/, int slipSlope /*$s4*/, int UpperOffset /*stack 16*/)
 // line 503, offset 0x80070d5c
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x80070D5C
		// Variables:
	// 		struct evPhysicsDropOffData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070D5C
	// End Line: 504

	/* begin block 2 */
		// Start line: 907
	/* end block 2 */
	// End Line: 908

int SetPhysicsDropOffData(int xOffset,int yOffset,int DropOffset,int slipSlope,int UpperOffset)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x18);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsSlideData(int Segment /*$s3*/, int ForwardVectorX /*$s4*/, int ForwardVectorY /*$s5*/, int ForwardVectorZ /*$s6*/, int DropOffset /*stack 16*/, int UpperOffset /*stack 20*/, int Height /*stack 24*/)
 // line 523, offset 0x80070dc8
	/* begin block 1 */
		// Start line: 524
		// Start offset: 0x80070DC8
		// Variables:
	// 		struct evPhysicsSlideData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070DC8
	// End Line: 524

	/* begin block 2 */
		// Start line: 947
	/* end block 2 */
	// End Line: 948

int SetPhysicsSlideData(int Segment,int ForwardVectorX,int ForwardVectorY,int ForwardVectorZ,
                       int DropOffset,int UpperOffset,int Height)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0xc);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsWallCrawlData(int Segment /*$s0*/, int Length /*$s1*/, int ForwardOffset /*$s2*/, int NormalDistance /*$s3*/)
 // line 544, offset 0x80070e54
	/* begin block 1 */
		// Start line: 545
		// Start offset: 0x80070E54
		// Variables:
	// 		struct evPhysicsWallCrawlData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070E54
	// End Line: 545

	/* begin block 2 */
		// Start line: 989
	/* end block 2 */
	// End Line: 990

int SetPhysicsWallCrawlData(int Segment,int Length,int ForwardOffset,int NormalDistance)

{
  int in_v0;
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  *(undefined2 *)(in_v0 + 2) = unaff_s5;
  *(undefined2 *)(in_v0 + 4) = unaff_s6;
  *(undefined2 *)(in_v0 + 0x1a) = unaff_s0;
  *(undefined2 *)(in_v0 + 0x1c) = unaff_s1;
  *(undefined2 *)(in_v0 + 0x1e) = unaff_s2;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsLinkedMoveData(struct _Instance *instance /*$s1*/, int segment /*$s0*/, struct _SVector *posDelta /*$s2*/, struct _SVector *rotDelta /*$s3*/)
 // line 561, offset 0x80070eb0
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x80070EB0
		// Variables:
	// 		struct evPhysicsLinkedMoveData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070F34
	// End Line: 574

	/* begin block 2 */
		// Start line: 1023
	/* end block 2 */
	// End Line: 1024

int SetPhysicsLinkedMoveData(_Instance *instance,int segment,_SVector *posDelta,_SVector *rotDelta)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x2c);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetPhysicsDropHeightData(struct _Position *offset /*$s0*/, int dropOffset /*$s1*/, int mode /*$s2*/)
 // line 582, offset 0x80070f50
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x80070F50
		// Variables:
	// 		struct evPhysicsDropHeightData *ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070F50
	// End Line: 583

	/* begin block 2 */
		// Start line: 1065
	/* end block 2 */
	// End Line: 1066

int SetPhysicsDropHeightData(_Position *offset,int dropOffset,int mode)

{
  int in_v0;
  undefined4 uVar1;
  undefined4 *unaff_s3;
  
  uVar1 = unaff_s3[1];
  *(undefined4 *)(in_v0 + 0x10) = *unaff_s3;
  *(undefined4 *)(in_v0 + 0x14) = uVar1;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetAnimationControllerDoneData(struct _Instance *instance /*$s0*/, long segment /*$s1*/, long type /*$s2*/, int data /*$s3*/)
 // line 602, offset 0x80070fc0
	/* begin block 1 */
		// Start line: 603
		// Start offset: 0x80070FC0
		// Variables:
	// 		struct evAnimationControllerDoneData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80070FC0
	// End Line: 603

	/* begin block 2 */
		// Start line: 1105
	/* end block 2 */
	// End Line: 1106

int SetAnimationControllerDoneData(_Instance *instance,long segment,long type,int data)

{
  undefined2 *in_v0;
  undefined2 in_v1;
  int unaff_s0;
  
  *in_v0 = in_v1;
  in_v0[1] = *(undefined2 *)(unaff_s0 + 2);
  in_v0[2] = *(short *)(unaff_s0 + 4) + 0x19;
  return (int)in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetAnimationInstanceSwitchData(struct _Instance *instance /*$s1*/, int anim /*$s2*/, int frame /*$s3*/, int frames /*$s4*/, int mode /*stack 16*/)
 // line 620, offset 0x8007101c
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x8007101C
		// Variables:
	// 		struct evAnimationInstanceSwitchData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x8007101C
	// End Line: 621

	/* begin block 2 */
		// Start line: 1141
	/* end block 2 */
	// End Line: 1142

int SetAnimationInstanceSwitchData(_Instance *instance,int anim,int frame,int frames,int mode)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x10);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetFXHitData(struct _Instance *hitter /*$s2*/, int segment /*$s3*/, int amount /*$s0*/, int type /*$s1*/)
 // line 639, offset 0x80071088
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x80071088
		// Variables:
	// 		struct evFXHitData *Ptr; // $a1
	/* end block 1 */
	// End offset: 0x80071164
	// End Line: 656

	/* begin block 2 */
		// Start line: 1179
	/* end block 2 */
	// End Line: 1180

int SetFXHitData(_Instance *hitter,int segment,int amount,int type)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x14);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectThrowData(void *target /*$s2*/, struct _SVector *angularVel /*$s7*/, unsigned short type /*$s0*/, unsigned short spinType /*$s1*/, int speed /*stack 16*/, int gravity /*stack 20*/, int zVel /*stack 24*/, int initialXRot /*stack 28*/)
 // line 693, offset 0x80071184
	/* begin block 1 */
		// Start line: 694
		// Start offset: 0x80071184
		// Variables:
	// 		struct evObjectThrowData *Ptr; // $a0
	/* end block 1 */
	// End offset: 0x800712B0
	// End Line: 746

	/* begin block 2 */
		// Start line: 1386
	/* end block 2 */
	// End Line: 1387

int SetObjectThrowData(void *target,_SVector *angularVel,ushort type,ushort spinType,int speed,
                      int gravity,int zVel,int initialXRot)

{
  short in_v1;
  int unaff_s2;
  
  angularVel[1].z = in_v1 - *(short *)((int)target + *(int *)(unaff_s2 + 0x44) + 0x1c);
  return (int)angularVel;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectBreakOffData(struct _Instance *force /*$s3*/, short node /*$a1*/, short distance /*$a2*/, short animation /*$a3*/, int frame /*stack 16*/, int type /*stack 20*/, int action /*stack 24*/)
 // line 750, offset 0x800712f0
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x800712F0
		// Variables:
	// 		struct evObjectBreakOffData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800712F0
	// End Line: 751

	/* begin block 2 */
		// Start line: 1369
	/* end block 2 */
	// End Line: 1370

int SetObjectBreakOffData
              (_Instance *force,short node,short distance,short animation,int frame,int type,
              int action)

{
  int in_v0;
  undefined2 unaff_s3;
  undefined2 unaff_s4;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  *(undefined2 *)(in_v0 + 0x14) = unaff_s3;
  *(undefined2 *)(in_v0 + 0x16) = unaff_s4;
  *(undefined2 *)(in_v0 + 0x1a) = unaff_s5;
  *(undefined2 *)(in_v0 + 0x18) = unaff_s6;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetControlInitHangData(struct _Instance *instance /*$s0*/, long frame /*$s1*/, long frames /*$s2*/)
 // line 767, offset 0x8007137c
	/* begin block 1 */
		// Start line: 768
		// Start offset: 0x8007137C
		// Variables:
	// 		struct evControlInitHangData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x8007137C
	// End Line: 768

	/* begin block 2 */
		// Start line: 1403
	/* end block 2 */
	// End Line: 1404

int SetControlInitHangData(_Instance *instance,long frame,long frames)

{
  int in_v0;
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined2 unaff_s5;
  undefined2 unaff_s6;
  
  *(undefined2 *)(in_v0 + 6) = unaff_s5;
  *(undefined2 *)(in_v0 + 8) = unaff_s6;
  *(undefined2 *)(in_v0 + 10) = unaff_s0;
  *(undefined2 *)(in_v0 + 0xc) = unaff_s1;
  *(undefined2 *)(in_v0 + 0xe) = unaff_s2;
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetControlInitIdleData(int mode /*$s0*/, long frame /*$s1*/, long frames /*$s2*/)
 // line 781, offset 0x800713c8
	/* begin block 1 */
		// Start line: 782
		// Start offset: 0x800713C8
		// Variables:
	// 		struct evControlInitIdleData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800713C8
	// End Line: 782

	/* begin block 2 */
		// Start line: 1431
	/* end block 2 */
	// End Line: 1432

int SetControlInitIdleData(int mode,long frame,long frames)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0xc);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectDraftData(short force /*$a0*/, unsigned short radius /*$a1*/, unsigned short radiusCoef /*$a2*/, unsigned short height /*$a3*/, int maxVelocity /*stack 16*/)
 // line 795, offset 0x80071414
	/* begin block 1 */
		// Start line: 796
		// Start offset: 0x80071414
		// Variables:
	// 		struct evObjectDraftData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80071414
	// End Line: 796

	/* begin block 2 */
		// Start line: 1459
	/* end block 2 */
	// End Line: 1460

int SetObjectDraftData(short force,ushort radius,ushort radiusCoef,ushort height,int maxVelocity)

{
  undefined2 in_register_00000016;
  undefined2 in_register_0000001a;
  
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0xc,CONCAT22(in_register_00000016,radius),CONCAT22(in_register_0000001a,radiusCoef));
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectAbsorbData(struct _Instance *force /*$s0*/, unsigned short node /*$a1*/, unsigned short steps /*$a2*/)
 // line 811, offset 0x80071480
	/* begin block 1 */
		// Start line: 812
		// Start offset: 0x80071480
		// Variables:
	// 		struct evObjectAbsorbData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80071480
	// End Line: 812

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

int SetObjectAbsorbData(_Instance *force,ushort node,ushort steps)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(10);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetControlSaveDataData(long length /*$s0*/, void *data /*$s1*/)
 // line 827, offset 0x800714cc
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x800714CC
		// Variables:
	// 		struct evControlSaveDataData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800714CC
	// End Line: 828

	/* begin block 2 */
		// Start line: 1523
	/* end block 2 */
	// End Line: 1524

int SetControlSaveDataData(long length,void *data)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetObjectIdleData(long mode /*$s0*/, struct _Instance *instance /*$s1*/)
 // line 840, offset 0x80071508
	/* begin block 1 */
		// Start line: 841
		// Start offset: 0x80071508
		// Variables:
	// 		struct evObjectIdleData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80071508
	// End Line: 841

	/* begin block 2 */
		// Start line: 1549
	/* end block 2 */
	// End Line: 1550

int SetObjectIdleData(long mode,_Instance *instance)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetActionPlayHostAnimationData(struct _Instance *instance /*$s2*/, struct _Instance *host /*$s3*/, int newAnim /*$s4*/, int newFrame /*$s5*/, int frames /*stack 16*/, int mode /*stack 20*/)
 // line 869, offset 0x80071544
	/* begin block 1 */
		// Start line: 870
		// Start offset: 0x80071544
		// Variables:
	// 		struct evActionPlayHostAnimationData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80071544
	// End Line: 870

	/* begin block 2 */
		// Start line: 1738
	/* end block 2 */
	// End Line: 1739

int SetActionPlayHostAnimationData
              (_Instance *instance,_Instance *host,int newAnim,int newFrame,int frames,int mode)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(8);
}



// autogenerated function stub: 
// int /*$ra*/ SetObjectBirthProjectileData(struct _Instance *instance /*$s0*/, int joint /*$s1*/, int type /*$s2*/)
int SetObjectBirthProjectileData(struct _Instance *instance, int joint, int type)
{ // line 888, offset 0x800715c0
	/* begin block 1 */
		// Start line: 889
		// Start offset: 0x800715C0
		// Variables:
			struct evObjectBirthProjectileData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x800715C0
	// End Line: 889

	/* begin block 2 */
		// Start line: 1625
	/* end block 2 */
	// End Line: 1626

	return 0;
}


// decompiled code
// original method signature: 
// int /*$ra*/ SetShadowSegmentData(unsigned long total /*$s0*/)
 // line 907, offset 0x80071610
	/* begin block 1 */
		// Start line: 908
		// Start offset: 0x80071610
		// Variables:
	// 		struct evShadowSegmentData *Ptr; // $v0
	/* end block 1 */
	// End offset: 0x80071610
	// End Line: 908

	/* begin block 2 */
		// Start line: 1663
	/* end block 2 */
	// End Line: 1664

int SetShadowSegmentData(ulong total)

{
                    /* WARNING: Subroutine does not return */
  FUN_8007087c(0x10);
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInit()
 // line 921, offset 0x8007163c
	/* begin block 1 */
		// Start line: 1691
	/* end block 1 */
	// End Line: 1692

	/* begin block 2 */
		// Start line: 1695
	/* end block 2 */
	// End Line: 1696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void G2EmulationInit(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstancePlayAnimation(struct _Instance *instance /*$a0*/)
 // line 978, offset 0x80071828
	/* begin block 1 */
		// Start line: 979
		// Start offset: 0x80071828
		// Variables:
	// 		int i; // $s0
	// 		struct _G2Anim_Type *anim; // $s1
	/* end block 1 */
	// End offset: 0x8007187C
	// End Line: 990

	/* begin block 2 */
		// Start line: 1815
	/* end block 2 */
	// End Line: 1816

void G2EmulationInstancePlayAnimation(_Instance *instance)

{
  int in_v0;
  
  *(undefined4 *)(in_v0 + 4) = 0;
  PTR_DAT_800cf5ac[2] = (_G2AnimAlphaTable_Type)0xe00;
  PTR_DAT_800cf5ac[3] = (_G2AnimAlphaTable_Type)0xf80;
  PTR_DAT_800cf5ac[4] = (_G2AnimAlphaTable_Type)0x1000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulatePlayAnimation(struct __CharacterState *In /*$a0*/)
 // line 995, offset 0x80071890
	/* begin block 1 */
		// Start line: 1858
	/* end block 1 */
	// End Line: 1859

void G2EmulatePlayAnimation(__CharacterState *In)

{
  uint in_v0;
  uint unaff_s0;
  byte *unaff_s1;
  
  while( true ) {
    FUN_80090044(unaff_s1 + ((int)&In->CharacterInstance + in_v0) * 0x10 + 0x24);
    unaff_s0 = unaff_s0 + 1;
    in_v0 = unaff_s0 & 0xff;
    if ((int)(uint)*unaff_s1 <= (int)unaff_s0) break;
    In = (__CharacterState *)(in_v0 << 1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceToInstanceSwitchAnimation(struct _Instance *instance /*$a0*/, struct _Instance *host /*$a1*/, int CurrentSection /*$a2*/, int NewAnim /*$s2*/, int NewFrame /*stack 16*/, int Frames /*stack 20*/, int Mode /*stack 24*/)
 // line 1006, offset 0x800718b4
	/* begin block 1 */
		// Start line: 1007
		// Start offset: 0x800718B4
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s4
	// 		struct _G2AnimKeylist_Type *keylist; // $s1
	/* end block 1 */
	// End offset: 0x80071988
	// End Line: 1028

	/* begin block 2 */
		// Start line: 1880
	/* end block 2 */
	// End Line: 1881

void G2EmulationInstanceToInstanceSwitchAnimation
               (_Instance *instance,_Instance *host,int CurrentSection,int NewAnim,int NewFrame,
               int Frames,int Mode)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSwitchAnimation(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$s2*/, int NewFrame /*$s3*/, int Frames /*stack 16*/, int Mode /*stack 20*/)
 // line 1032, offset 0x800719ac
	/* begin block 1 */
		// Start line: 1033
		// Start offset: 0x800719AC
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s4
	// 		struct _G2AnimKeylist_Type *keylist; // $s1
	/* end block 1 */
	// End offset: 0x80071A7C
	// End Line: 1054

	/* begin block 2 */
		// Start line: 1954
	/* end block 2 */
	// End Line: 1955

void G2EmulationInstanceSwitchAnimation
               (_Instance *instance,int CurrentSection,int NewAnim,int NewFrame,int Frames,int Mode)

{
  FUN_800900ec();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSwitchAnimationAlpha(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$a2*/, int NewFrame /*$a3*/, int Frames /*stack 16*/, int Mode /*stack 20*/, int AlphaTable /*stack 24*/)
 // line 1057, offset 0x80071aa0
	/* begin block 1 */
		// Start line: 1058
		// Start offset: 0x80071AA0
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s1
	/* end block 1 */
	// End offset: 0x80071AA0
	// End Line: 1058

	/* begin block 2 */
		// Start line: 2021
	/* end block 2 */
	// End Line: 2022

void G2EmulationInstanceSwitchAnimationAlpha
               (_Instance *instance,int CurrentSection,int NewAnim,int NewFrame,int Frames,int Mode,
               int AlphaTable)

{
  FUN_800900ec();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSwitchAnimation(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$a2*/, int NewFrame /*$a3*/, int Frames /*stack 16*/, int Mode /*stack 20*/)
 // line 1067, offset 0x80071b0c
	/* begin block 1 */
		// Start line: 2043
	/* end block 1 */
	// End Line: 2044

void G2EmulationSwitchAnimation
               (__CharacterState *In,int CurrentSection,int NewAnim,int NewFrame,int Frames,int Mode
               )

{
  int in_v0;
  int unaff_s0;
  
  FUN_800719e8();
  FUN_800900a0(In->SectionList[1].Defer.Queue + in_v0 * 2,G2AlphaTables7[unaff_s0]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSwitchAnimationAlpha(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$a2*/, int NewFrame /*$a3*/, int Frames /*stack 16*/, int Mode /*stack 20*/, int AlphaTable /*stack 24*/)
 // line 1081, offset 0x80071b50
	/* begin block 1 */
		// Start line: 1082
		// Start offset: 0x80071B50
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s1
	/* end block 1 */
	// End offset: 0x80071B50
	// End Line: 1082

	/* begin block 2 */
		// Start line: 2071
	/* end block 2 */
	// End Line: 2072

/* WARNING: Variable defined which should be unmapped: AlphaTable */

void G2EmulationSwitchAnimationAlpha
               (__CharacterState *In,int CurrentSection,int NewAnim,int NewFrame,int Frames,int Mode
               ,int AlphaTable)

{
  FUN_800719e8(In->CharacterInstance,CurrentSection,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSwitchAnimationSync(struct __CharacterState *In /*stack 0*/, int SlaveSectionID /*$fp*/, int MasterSectionID /*$a2*/, int Frames /*stack 12*/)
 // line 1093, offset 0x80071bc4
	/* begin block 1 */
		// Start line: 1094
		// Start offset: 0x80071BC4
		// Variables:
	// 		struct _Instance *instance; // $a1
	// 		struct _G2AnimSection_Type *masterAnimSection; // $s6
	// 		struct _G2AnimSection_Type *slaveAnimSection; // $s5
	// 		struct _G2AnimKeylist_Type *keylist; // $s1
	// 		int keylistID; // $s3
	// 		struct __State *masterSection; // $s7
	// 		struct __State *slaveSection; // $s2
	/* end block 1 */
	// End offset: 0x80071D34
	// End Line: 1130

	/* begin block 2 */
		// Start line: 2097
	/* end block 2 */
	// End Line: 2098

void G2EmulationSwitchAnimationSync
               (__CharacterState *In,int SlaveSectionID,int MasterSectionID,int Frames)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  FUN_800719e8(In->CharacterInstance);
  FUN_800900a0(unaff_s1 + in_v0 + 0x1b8,G2AlphaTables7[unaff_s0]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceToInstanceSwitchAnimationCharacter(struct _Instance *instance /*$s0*/, struct _Instance *host /*$a1*/, int NewAnim /*$s2*/, int NewFrame /*$s3*/, int Frames /*stack 16*/, int Mode /*stack 20*/)
 // line 1137, offset 0x80071d90
	/* begin block 1 */
		// Start line: 1138
		// Start offset: 0x80071D90
		// Variables:
	// 		struct _G2AnimKeylist_Type *keylist1; // $s0
	/* end block 1 */
	// End offset: 0x80071E58
	// End Line: 1160

	/* begin block 2 */
		// Start line: 2208
	/* end block 2 */
	// End Line: 2209

void G2EmulationInstanceToInstanceSwitchAnimationCharacter
               (_Instance *instance,_Instance *host,int NewAnim,int NewFrame,int Frames,int Mode)

{
  int unaff_s2;
  int unaff_s7;
  
  *(undefined4 *)(unaff_s2 + 0x118) = *(undefined4 *)(unaff_s7 + 0x118);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSwitchAnimationCharacter(struct __CharacterState *In /*$a0*/, int NewAnim /*$s2*/, int NewFrame /*$s5*/, int Frames /*$s3*/, int Mode /*stack 16*/)
 // line 1164, offset 0x80071e7c
	/* begin block 1 */
		// Start line: 1165
		// Start offset: 0x80071E7C
		// Variables:
	// 		struct _Instance *instance; // $s0
	// 		struct _G2AnimKeylist_Type *keylist; // $s0
	/* end block 1 */
	// End offset: 0x80071F4C
	// End Line: 1192

	/* begin block 2 */
		// Start line: 2270
	/* end block 2 */
	// End Line: 2271

void G2EmulationSwitchAnimationCharacter
               (__CharacterState *In,int NewAnim,int NewFrame,int Frames,int Mode)

{
  FUN_8008fcb0();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSetAnimation(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$s3*/, int NewFrame /*$s4*/, int Frames /*stack 16*/)
 // line 1203, offset 0x80071f70
	/* begin block 1 */
		// Start line: 1204
		// Start offset: 0x80071F70
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s2
	// 		struct _G2AnimKeylist_Type *keylist; // $s1
	/* end block 1 */
	// End offset: 0x80071F70
	// End Line: 1204

	/* begin block 2 */
		// Start line: 2406
	/* end block 2 */
	// End Line: 2407

void G2EmulationInstanceSetAnimation
               (_Instance *instance,int CurrentSection,int NewAnim,int NewFrame,int Frames)

{
  FUN_8008fcb0();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSetAnimation(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/, int NewAnim /*$a2*/, int NewFrame /*$a3*/, int Frames /*stack 16*/)
 // line 1217, offset 0x80072018
	/* begin block 1 */
		// Start line: 2385
	/* end block 1 */
	// End Line: 2386

void G2EmulationSetAnimation
               (__CharacterState *In,int CurrentSection,int NewAnim,int NewFrame,int Frames)

{
                    /* WARNING: Subroutine does not return */
  FUN_8008ffd4();
}



// autogenerated function stub: 
// void /*$ra*/ G2EmulationInstanceSetMode(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, int Mode /*$s1*/)
void G2EmulationInstanceSetMode(struct _Instance *instance, int CurrentSection, int Mode)
{ // line 1232, offset 0x80072050
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x80072050
		// Variables:
			struct _G2AnimSection_Type *animSection; // $s0
	/* end block 1 */
	// End offset: 0x800720BC
	// End Line: 1249

	/* begin block 2 */
		// Start line: 2415
	/* end block 2 */
	// End Line: 2416

}


// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSetMode(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/, int Mode /*$a2*/)
 // line 1253, offset 0x800720d0
	/* begin block 1 */
		// Start line: 2465
	/* end block 1 */
	// End Line: 2466

void G2EmulationSetMode(__CharacterState *In,int CurrentSection,int Mode)

{
  int unaff_s1;
  
  if (unaff_s1 == 1) {
    FUN_8009015c();
  }
  else {
    FUN_800900ec();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSetAnimSpeed(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, int speed /*$a2*/)
 // line 1262, offset 0x800720f4
	/* begin block 1 */
		// Start line: 1264
		// Start offset: 0x800720F4
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $v0
	/* end block 1 */
	// End offset: 0x800720F4
	// End Line: 1266

	/* begin block 2 */
		// Start line: 2483
	/* end block 2 */
	// End Line: 2484

	/* begin block 3 */
		// Start line: 2484
	/* end block 3 */
	// End Line: 2485

	/* begin block 4 */
		// Start line: 2486
	/* end block 4 */
	// End Line: 2487

void G2EmulationInstanceSetAnimSpeed(_Instance *instance,int CurrentSection,int speed)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationInstanceQueryAnimation(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/)
 // line 1272, offset 0x80072110
	/* begin block 1 */
		// Start line: 1275
		// Start offset: 0x80072110
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $v0
	/* end block 1 */
	// End offset: 0x80072110
	// End Line: 1277

	/* begin block 2 */
		// Start line: 2503
	/* end block 2 */
	// End Line: 2504

	/* begin block 3 */
		// Start line: 2505
	/* end block 3 */
	// End Line: 2506

	/* begin block 4 */
		// Start line: 2507
	/* end block 4 */
	// End Line: 2508

int G2EmulationInstanceQueryAnimation(_Instance *instance,int CurrentSection)

{
  int iVar1;
  
  iVar1 = FUN_8007208c((instance->node).prev);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationQueryAnimation(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/)
 // line 1283, offset 0x80072130
	/* begin block 1 */
		// Start line: 2525
	/* end block 1 */
	// End Line: 2526

int G2EmulationQueryAnimation(__CharacterState *In,int CurrentSection)

{
  _Instance *in_a2;
  
  (&In->CharacterInstance + (CurrentSection & 0xffU) * 0xc)[0x72] = in_a2;
  return (int)(&In->CharacterInstance + (CurrentSection & 0xffU) * 0xc);
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationInstanceQueryFrame(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/)
 // line 1291, offset 0x80072154
	/* begin block 1 */
		// Start line: 1292
		// Start offset: 0x80072154
	/* end block 1 */
	// End offset: 0x80072154
	// End Line: 1292

	/* begin block 2 */
		// Start line: 2541
	/* end block 2 */
	// End Line: 2542

int G2EmulationInstanceQueryFrame(_Instance *instance,int CurrentSection)

{
  int in_v0;
  
  return (uint)(&(instance->anim).section[0].keylistID)[(in_v0 + CurrentSection) * 8];
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationInstanceQueryLastFrame(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/)
 // line 1303, offset 0x80072188
	/* begin block 1 */
		// Start line: 1304
		// Start offset: 0x80072188
	/* end block 1 */
	// End offset: 0x80072188
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2569
	/* end block 2 */
	// End Line: 2570

int G2EmulationInstanceQueryLastFrame(_Instance *instance,int CurrentSection)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationInstanceQueryPassedFrame(struct _Instance *instance /*$s2*/, int CurrentSection /*$a1*/, int frame /*$s1*/)
 // line 1314, offset 0x800721bc
	/* begin block 1 */
		// Start line: 1315
		// Start offset: 0x800721BC
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $s0
	/* end block 1 */
	// End offset: 0x8007224C
	// End Line: 1329

	/* begin block 2 */
		// Start line: 2594
	/* end block 2 */
	// End Line: 2595

int G2EmulationInstanceQueryPassedFrame(_Instance *instance,int CurrentSection,int frame)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationQueryFrame(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/)
 // line 1333, offset 0x80072264
	/* begin block 1 */
		// Start line: 2640
	/* end block 1 */
	// End Line: 2641

int G2EmulationQueryFrame(__CharacterState *In,int CurrentSection)

{
  int in_v0;
  int in_v1;
  uint uVar1;
  int unaff_s0;
  
  uVar1 = 0;
  if (in_v0 < in_v1 >> 0x10) {
    uVar1 = (uint)((int)*(short *)(unaff_s0 + 4) < in_v1 >> 0x10) ^ 1;
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationInstanceQueryMode(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/)
 // line 1341, offset 0x80072288
	/* begin block 1 */
		// Start line: 1344
		// Start offset: 0x80072288
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $v0
	/* end block 1 */
	// End offset: 0x800722C8
	// End Line: 1356

	/* begin block 2 */
		// Start line: 2656
	/* end block 2 */
	// End Line: 2657

	/* begin block 3 */
		// Start line: 2658
	/* end block 3 */
	// End Line: 2659

	/* begin block 4 */
		// Start line: 2660
	/* end block 4 */
	// End Line: 2661

int G2EmulationInstanceQueryMode(_Instance *instance,int CurrentSection)

{
  int in_v0;
  
  return in_v0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ G2EmulationQueryMode(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/)
 // line 1360, offset 0x800722d0
	/* begin block 1 */
		// Start line: 2700
	/* end block 1 */
	// End Line: 2701

int G2EmulationQueryMode(__CharacterState *In,int CurrentSection)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  
  bVar1 = *(byte *)&In->SectionList[1].Defer.Queue[in_v0 * 2].ID;
  iVar2 = 0;
  if (((bVar1 & 1) == 0) && (iVar2 = 2, (bVar1 & 2) == 0)) {
    return 1;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSetStartAndEndSegment(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, short Start /*$a2*/, short End /*$a3*/)
 // line 1368, offset 0x800722f4
	/* begin block 1 */
		// Start line: 1371
		// Start offset: 0x800722F4
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $a0
	/* end block 1 */
	// End offset: 0x800722F4
	// End Line: 1373

	/* begin block 2 */
		// Start line: 2716
	/* end block 2 */
	// End Line: 2717

	/* begin block 3 */
		// Start line: 2718
	/* end block 3 */
	// End Line: 2719

	/* begin block 4 */
		// Start line: 2720
	/* end block 4 */
	// End Line: 2721

void G2EmulationInstanceSetStartAndEndSegment
               (_Instance *instance,int CurrentSection,short Start,short End)

{
  int in_v1;
  
  if (in_v1 == 0) {
    return;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSetStartAndEndSegment(struct __CharacterState *In /*$a0*/, int CurrentSection /*$a1*/, short Start /*$a2*/, short End /*$a3*/)
 // line 1379, offset 0x80072320
	/* begin block 1 */
		// Start line: 2738
	/* end block 1 */
	// End Line: 2739

void G2EmulationSetStartAndEndSegment(__CharacterState *In,int CurrentSection,short Start,short End)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceSetTotalSections(struct _Instance *instance /*$s2*/, short Total /*$a1*/)
 // line 1387, offset 0x80072350
	/* begin block 1 */
		// Start line: 1388
		// Start offset: 0x80072350
		// Variables:
	// 		struct _G2Anim_Type *anim; // $s0
	/* end block 1 */
	// End offset: 0x800723A8
	// End Line: 1397

	/* begin block 2 */
		// Start line: 2756
	/* end block 2 */
	// End Line: 2757

void G2EmulationInstanceSetTotalSections(_Instance *instance,short Total)

{
  undefined in_a2;
  undefined in_a3;
  
  *(undefined *)((int)&(instance->node).prev + 2) = in_a2;
  *(undefined *)((int)&(instance->node).prev + 3) = in_a3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSetTotalSections(struct __CharacterState *In /*$a0*/, short Total /*$a1*/)
 // line 1404, offset 0x800723d4
	/* begin block 1 */
		// Start line: 2796
	/* end block 1 */
	// End Line: 2797

void G2EmulationSetTotalSections(__CharacterState *In,short Total)

{
  uint in_v0;
  byte *unaff_s0;
  int unaff_s1;
  
  while ((int)in_v0 < unaff_s1) {
    FUN_80092bd0();
    in_v0 = (uint)*unaff_s0;
  }
  FUN_8008fc74();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationInstanceInitSection(struct _Instance *instance /*$a0*/, int CurrentSection /*$a1*/, void *callback /*$a2*/, void *data /*$a3*/)
 // line 1414, offset 0x80072404
	/* begin block 1 */
		// Start line: 1417
		// Start offset: 0x80072404
		// Variables:
	// 		struct _G2AnimSection_Type *animSection; // $a0
	/* end block 1 */
	// End offset: 0x80072404
	// End Line: 1419

	/* begin block 2 */
		// Start line: 2818
	/* end block 2 */
	// End Line: 2819

	/* begin block 3 */
		// Start line: 2820
	/* end block 3 */
	// End Line: 2821

	/* begin block 4 */
		// Start line: 2822
	/* end block 4 */
	// End Line: 2823

void G2EmulationInstanceInitSection
               (_Instance *instance,int CurrentSection,void *callback,void *data)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ G2EmulationSetInterpController_Vector(struct _Instance *instance /*$a0*/, long segment /*$a1*/, long type /*$a2*/, struct _G2SVector3_Type *vec /*$a3*/, int Frames /*stack 16*/, int Data /*stack 20*/)
 // line 1440, offset 0x80072428
	/* begin block 1 */
		// Start line: 2880
	/* end block 1 */
	// End Line: 2881

void G2EmulationSetInterpController_Vector
               (_Instance *instance,long segment,long type,_G2SVector3_Type *vec,int Frames,int Data
               )

{
  FUN_8007238c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateSwitchStateDataDefault(struct __CharacterState *In /*$s1*/, int CurrentSection /*$s0*/, TDRFuncPtr_StateSwitchStateDataDefault2NewProcess NewProcess /*$a2*/, int Data /*$a3*/)
 // line 1456, offset 0x800724b0
	/* begin block 1 */
		// Start line: 1457
		// Start offset: 0x800724B0
		// Variables:
	// 		void (*process)(); // $s2
	/* end block 1 */
	// End offset: 0x800724B0
	// End Line: 1457

	/* begin block 2 */
		// Start line: 2907
	/* end block 2 */
	// End Line: 2908

void StateSwitchStateDataDefault
               (__CharacterState *In,int CurrentSection,
               TDRFuncPtr_StateSwitchStateDataDefault2NewProcess NewProcess,int Data)

{
  int in_v0;
  int iStack00000010;
  
  iStack00000010 = in_v0 >> 0x10;
  FUN_800909d4();
  FUN_8009092c();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateSwitchStateCharacterDataDefault(struct __CharacterState *In /*$s1*/, TDRFuncPtr_StateSwitchStateCharacterDataDefault1NewProcess NewProcess /*$s2*/, int Data /*$s3*/)
 // line 1465, offset 0x80072518
	/* begin block 1 */
		// Start line: 1466
		// Start offset: 0x80072518
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80072574
	// End Line: 1474

	/* begin block 2 */
		// Start line: 2928
	/* end block 2 */
	// End Line: 2929

void StateSwitchStateCharacterDataDefault
               (__CharacterState *In,
               TDRFuncPtr_StateSwitchStateCharacterDataDefault1NewProcess NewProcess,int Data)

{
  int in_v0;
  code *pcVar1;
  
  pcVar1 = *(code **)(in_v0 + 8);
  FUN_800725cc();
  (*pcVar1)();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateSwitchStateData(struct __CharacterState *In /*$s3*/, int CurrentSection /*$s2*/, TDRFuncPtr_StateSwitchStateData2NewProcess NewProcess /*$s5*/, int Data /*$s4*/)
 // line 1478, offset 0x80072590
	/* begin block 1 */
		// Start line: 2955
	/* end block 1 */
	// End Line: 2956

void StateSwitchStateData
               (__CharacterState *In,int CurrentSection,
               TDRFuncPtr_StateSwitchStateData2NewProcess NewProcess,int Data)

{
  int unaff_s0;
  int unaff_s1;
  
  do {
    FUN_800724ec();
    unaff_s0 = unaff_s0 + 1;
  } while (unaff_s0 < *(int *)(unaff_s1 + 4));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateSwitchStateCharacterData(struct __CharacterState *In /*$s3*/, TDRFuncPtr_StateSwitchStateCharacterData1NewProcess NewProcess /*$s5*/, int Data /*$s6*/)
 // line 1492, offset 0x8007265c
	/* begin block 1 */
		// Start line: 1493
		// Start offset: 0x8007265C
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80072728
	// End Line: 1509

	/* begin block 2 */
		// Start line: 2987
	/* end block 2 */
	// End Line: 2988

void StateSwitchStateCharacterData
               (__CharacterState *In,TDRFuncPtr_StateSwitchStateCharacterData1NewProcess NewProcess,
               int Data)

{
  FUN_80070800();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateGovernState(struct __CharacterState *In /*$s7*/, int Frames /*$fp*/)
 // line 1513, offset 0x80072750
	/* begin block 1 */
		// Start line: 1514
		// Start offset: 0x80072750
		// Variables:
	// 		struct __State *pSectionA; // $v0
	// 		struct __State *pSectionB; // $v1
	// 		struct _G2AnimSection_Type *animSectionA; // $s1
	// 		struct _G2AnimSection_Type *animSectionB; // $s3
	// 		struct _G2AnimKeylist_Type *keylist; // $s1
	// 		int keylistID; // $s2
	// 		int i; // $s4
	/* end block 1 */
	// End offset: 0x800728A0
	// End Line: 1563

	/* begin block 2 */
		// Start line: 3040
	/* end block 2 */
	// End Line: 3041

void StateGovernState(__CharacterState *In,int Frames)

{
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  code *unaff_s5;
  
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    if (*(int *)(unaff_s3 + 4) <= unaff_s1) break;
    iVar1 = unaff_s3 + unaff_s4 + 4;
    FUN_800707a0(iVar1);
    FUN_80070800(iVar1,&DAT_00100004,0);
    unaff_s4 = unaff_s4 + 0x11c;
    (**(code **)(unaff_s2 + 0x124))();
    FUN_800707a0(iVar1);
    FUN_80070800(iVar1,&DAT_00100001);
    *(code **)(unaff_s2 + 0x124) = unaff_s5;
    (*unaff_s5)();
    unaff_s2 = unaff_s2 + 0x11c;
  }
  return;
}





