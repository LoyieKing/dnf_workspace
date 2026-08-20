# check_need_slot

`_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser`

`Dispatcher_MonstercardBind::check_need_slot(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d83c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d83c4  _ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser
#           Dispatcher_MonstercardBind::check_need_slot(CUser*)
# range [0x081d83c4, 0x081d842d]
081d83c4 +0x00:  push   %ebp
081d83c5 +0x01:  mov    %esp,%ebp
081d83c7 +0x03:  sub    $0x28,%esp
081d83ca +0x06:  mov    0xc(%ebp),%eax
081d83cd +0x09:  mov    %eax,(%esp)
081d83d0 +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d83d5 +0x11:  mov    %eax,-0x14(%ebp)
081d83d8 +0x14:  movl   $0xa,0x8(%esp)
081d83e0 +0x1c:  movl   $0x1,0x4(%esp)
081d83e8 +0x24:  mov    -0x14(%ebp),%eax
081d83eb +0x27:  mov    %eax,(%esp)
081d83ee +0x2a:  call   084fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
081d83f3 +0x2f:  mov    %eax,-0x10(%ebp)
081d83f6 +0x32:  movl   $0x0,0x8(%esp)
081d83fe +0x3a:  movl   $0x1,0x4(%esp)
081d8406 +0x42:  mov    -0x14(%ebp),%eax
081d8409 +0x45:  mov    %eax,(%esp)
081d840c +0x48:  call   084fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
081d8411 +0x4d:  mov    %eax,-0xc(%ebp)
081d8414 +0x50:  cmpl   $0x0,-0x10(%ebp)
081d8418 +0x54:  jns    081d8420 <+0x5c>
081d841a +0x56:  cmpl   $0x0,-0xc(%ebp)
081d841e +0x5a:  js     081d8427 <+0x63>
081d8420 +0x5c:  mov    $0x1,%eax
081d8425 +0x61:  jmp    081d842c <+0x68>
081d8427 +0x63:  mov    $0x0,%eax
081d842c +0x68:  leave
081d842d +0x69:  ret
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::check_need_slot @ 0x81d83c4

/* Dispatcher_MonstercardBind::check_need_slot(CUser*) */

undefined4 __thiscall
Dispatcher_MonstercardBind::check_need_slot(Dispatcher_MonstercardBind *this,CUser *param_1)

{
  CInventory *pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_empty_slot(pCVar1,1,10);
  iVar3 = CInventory::get_empty_slot(pCVar1,1,0);
  if ((iVar2 < 0) && (iVar3 < 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
