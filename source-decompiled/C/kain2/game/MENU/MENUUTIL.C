#include "THISDUST.H"
#include "MENUUTIL.H"


// decompiled code
// original method signature: 
// enum menu_ctrl_t /*$ra*/ menu_get_ctrl(void *gt /*$a0*/)
 // line 18, offset 0x800b87fc
	/* begin block 1 */
		// Start line: 20
		// Start offset: 0x800B87FC
		// Variables:
	// 		enum menu_ctrl_t ctrl; // $v1
	/* end block 1 */
	// End offset: 0x800B8874
	// End Line: 38

	/* begin block 2 */
		// Start line: 36
	/* end block 2 */
	// End Line: 37

	/* begin block 3 */
		// Start line: 37
	/* end block 3 */
	// End Line: 38

	/* begin block 4 */
		// Start line: 38
	/* end block 4 */
	// End Line: 39

menu_ctrl_t menu_get_ctrl(void *gt)

{
  menu_ctrl_t mVar1;
  menu_ctrl_t unaff_s0;
  int unaff_s4;
  
  mVar1 = *(menu_ctrl_t *)(unaff_s4 + 4);
  if (unaff_s0 != mVar1) {
    mVar1 = FUN_800b8a70(2);
  }
  *(menu_ctrl_t *)(unaff_s4 + 4) = unaff_s0;
  return mVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_print(int xpos /*$a0*/, int ypos /*$a1*/, char *text /*$s1*/, int color /*$s0*/)
 // line 41, offset 0x800b887c
	/* begin block 1 */
		// Start line: 82
	/* end block 1 */
	// End Line: 83

void menu_print(int xpos,int ypos,char *text,int color)

{
  int iVar1;
  int unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int iVar2;
  
  iVar2 = (unaff_s0 + 1) % *(int *)(unaff_s2 + 4);
  iVar1 = *(int *)(unaff_s2 + iVar2 * 0x10 + 0xc4);
  while (iVar1 == 0) {
    iVar2 = (iVar2 + 1) % *(int *)(unaff_s2 + 4);
    iVar1 = *(int *)(unaff_s2 + iVar2 * 0x10 + 0xc4);
  }
  if (iVar2 != *(int *)(unaff_s4 + 4)) {
    FUN_800b8a70(2);
  }
  *(int *)(unaff_s4 + 4) = iVar2;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ menu_text_width(char *text /*$a0*/)
 // line 69, offset 0x800b88e4
	/* begin block 1 */
		// Start line: 158
	/* end block 1 */
	// End Line: 159

int menu_text_width(char *text)

{
  int iVar1;
  int unaff_s0;
  int unaff_s4;
  
  FUN_800b8a70(5);
  FUN_800b7cdc();
  iVar1 = *(int *)(unaff_s4 + 4);
  if (unaff_s0 != iVar1) {
    iVar1 = FUN_800b8a70(2);
  }
  *(int *)(unaff_s4 + 4) = unaff_s0;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ menu_sound(enum menu_sound_t sound /*$a0*/)
 // line 92, offset 0x800b8904
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x800B8904
		// Variables:
	// 		struct menu_sound_entry_t *entry; // $a0
	/* end block 1 */
	// End offset: 0x800B8904
	// End Line: 93

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

void menu_sound(menu_sound_t sound)

{
  undefined4 unaff_s0;
  int unaff_s4;
  
  FUN_800b8a70(2);
  *(undefined4 *)(unaff_s4 + 4) = unaff_s0;
  return;
}





