# _getOwnerTitleInfo

`_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item`

`CTitleBook::_getOwnerTitleInfo(ENUM_TITLE_BOOK_CATEGORY&, int&, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641994  _ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item
#           CTitleBook::_getOwnerTitleInfo(ENUM_TITLE_BOOK_CATEGORY&, int&, Inven_Item*)
# range [0x08641994, 0x08641a69]
08641994 +0x00:  push   %ebp
08641995 +0x01:  mov    %esp,%ebp
08641997 +0x03:  push   %ebx
08641998 +0x04:  sub    $0x54,%esp
0864199b +0x07:  mov    0x8(%ebp),%eax
0864199e +0x0a:  mov    0x8(%eax),%eax
086419a1 +0x0d:  mov    %eax,(%esp)
086419a4 +0x10:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086419a9 +0x15:  mov    0x14(%ebp),%ebx
086419ac +0x18:  lea    -0x48(%ebp),%edx
086419af +0x1b:  movl   $0xb,0xc(%esp)
086419b7 +0x23:  movl   $0x0,0x8(%esp)
086419bf +0x2b:  mov    %eax,0x4(%esp)
086419c3 +0x2f:  mov    %edx,(%esp)
086419c6 +0x32:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086419cb +0x37:  sub    $0x4,%esp
086419ce +0x3a:  mov    -0x48(%ebp),%eax
086419d1 +0x3d:  mov    %eax,(%ebx)
086419d3 +0x3f:  mov    -0x44(%ebp),%eax
086419d6 +0x42:  mov    %eax,0x4(%ebx)
086419d9 +0x45:  mov    -0x40(%ebp),%eax
086419dc +0x48:  mov    %eax,0x8(%ebx)
086419df +0x4b:  mov    -0x3c(%ebp),%eax
086419e2 +0x4e:  mov    %eax,0xc(%ebx)
086419e5 +0x51:  mov    -0x38(%ebp),%eax
086419e8 +0x54:  mov    %eax,0x10(%ebx)
086419eb +0x57:  mov    -0x34(%ebp),%eax
086419ee +0x5a:  mov    %eax,0x14(%ebx)
086419f1 +0x5d:  mov    -0x30(%ebp),%eax
086419f4 +0x60:  mov    %eax,0x18(%ebx)
086419f7 +0x63:  mov    -0x2c(%ebp),%eax
086419fa +0x66:  mov    %eax,0x1c(%ebx)
086419fd +0x69:  mov    -0x28(%ebp),%eax
08641a00 +0x6c:  mov    %eax,0x20(%ebx)
08641a03 +0x6f:  mov    -0x24(%ebp),%eax
08641a06 +0x72:  mov    %eax,0x24(%ebx)
08641a09 +0x75:  mov    -0x20(%ebp),%eax
08641a0c +0x78:  mov    %eax,0x28(%ebx)
08641a0f +0x7b:  mov    -0x1c(%ebp),%eax
08641a12 +0x7e:  mov    %eax,0x2c(%ebx)
08641a15 +0x81:  mov    -0x18(%ebp),%eax
08641a18 +0x84:  mov    %eax,0x30(%ebx)
08641a1b +0x87:  mov    -0x14(%ebp),%eax
08641a1e +0x8a:  mov    %eax,0x34(%ebx)
08641a21 +0x8d:  mov    -0x10(%ebp),%eax
08641a24 +0x90:  mov    %eax,0x38(%ebx)
08641a27 +0x93:  movzbl -0xc(%ebp),%eax
08641a2b +0x97:  mov    %al,0x3c(%ebx)
08641a2e +0x9a:  mov    0x14(%ebp),%eax
08641a31 +0x9d:  mov    0x2(%eax),%eax
08641a34 +0xa0:  test   %eax,%eax
08641a36 +0xa2:  je     08641a5f <+0xcb>
08641a38 +0xa4:  mov    0x14(%ebp),%eax
08641a3b +0xa7:  mov    0x2(%eax),%eax
08641a3e +0xaa:  mov    0x10(%ebp),%edx
08641a41 +0xad:  mov    %edx,0x8(%esp)
08641a45 +0xb1:  mov    0xc(%ebp),%edx
08641a48 +0xb4:  mov    %edx,0x4(%esp)
08641a4c +0xb8:  mov    %eax,(%esp)
08641a4f +0xbb:  call   08642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)
08641a54 +0xc0:  test   %al,%al
08641a56 +0xc2:  je     08641a5f <+0xcb>
08641a58 +0xc4:  mov    $0x1,%eax
08641a5d +0xc9:  jmp    08641a64 <+0xd0>
08641a5f +0xcb:  mov    $0x0,%eax
08641a64 +0xd0:  mov    -0x4(%ebp),%ebx
08641a67 +0xd3:  leave
08641a68 +0xd4:  ret
08641a69 +0xd5:  nop
```

## 反编译 C

```c
// CTitleBook::_getOwnerTitleInfo @ 0x8641994

/* CTitleBook::_getOwnerTitleInfo(ENUM_TITLE_BOOK_CATEGORY&, int&, Inven_Item*) */

undefined4 __thiscall
CTitleBook::_getOwnerTitleInfo
          (CTitleBook *this,ENUM_TITLE_BOOK_CATEGORY *param_1,int *param_2,Inven_Item *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  Inven_Item local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 8));
  CInventory::GetInvenSlot((int)&local_4c,iVar2);
  *(undefined4 *)param_3 = local_4c;
  *(undefined4 *)(param_3 + 4) = local_48;
  *(undefined4 *)(param_3 + 8) = local_44;
  *(undefined4 *)(param_3 + 0xc) = local_40;
  *(undefined4 *)(param_3 + 0x10) = local_3c;
  *(undefined4 *)(param_3 + 0x14) = local_38;
  *(undefined4 *)(param_3 + 0x18) = local_34;
  *(undefined4 *)(param_3 + 0x1c) = local_30;
  *(undefined4 *)(param_3 + 0x20) = local_2c;
  *(undefined4 *)(param_3 + 0x24) = local_28;
  *(undefined4 *)(param_3 + 0x28) = local_24;
  *(undefined4 *)(param_3 + 0x2c) = local_20;
  *(undefined4 *)(param_3 + 0x30) = local_1c;
  *(undefined4 *)(param_3 + 0x34) = local_18;
  *(undefined4 *)(param_3 + 0x38) = local_14;
  param_3[0x3c] = local_10;
  if ((*(int *)(param_3 + 2) != 0) &&
     (cVar1 = _getFitSlot(*(int *)(param_3 + 2),param_1,param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}
```
