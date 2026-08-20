# _check_need_slot

`_ZN17expert_extraction11CExtraction16_check_need_slotEP5CUser`

`expert_extraction::CExtraction::_check_need_slot(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a29f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a29f4  _ZN17expert_extraction11CExtraction16_check_need_slotEP5CUser
#           expert_extraction::CExtraction::_check_need_slot(CUser*)
# range [0x084a29f4, 0x084a2a5d]
084a29f4 +0x00:  push   %ebp
084a29f5 +0x01:  mov    %esp,%ebp
084a29f7 +0x03:  sub    $0x28,%esp
084a29fa +0x06:  mov    0xc(%ebp),%eax
084a29fd +0x09:  mov    %eax,(%esp)
084a2a00 +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a2a05 +0x11:  mov    %eax,-0x14(%ebp)
084a2a08 +0x14:  movl   $0xa,0x8(%esp)
084a2a10 +0x1c:  movl   $0x1,0x4(%esp)
084a2a18 +0x24:  mov    -0x14(%ebp),%eax
084a2a1b +0x27:  mov    %eax,(%esp)
084a2a1e +0x2a:  call   084fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
084a2a23 +0x2f:  mov    %eax,-0x10(%ebp)
084a2a26 +0x32:  movl   $0x0,0x8(%esp)
084a2a2e +0x3a:  movl   $0x1,0x4(%esp)
084a2a36 +0x42:  mov    -0x14(%ebp),%eax
084a2a39 +0x45:  mov    %eax,(%esp)
084a2a3c +0x48:  call   084fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
084a2a41 +0x4d:  mov    %eax,-0xc(%ebp)
084a2a44 +0x50:  cmpl   $0x0,-0x10(%ebp)
084a2a48 +0x54:  jns    084a2a50 <+0x5c>
084a2a4a +0x56:  cmpl   $0x0,-0xc(%ebp)
084a2a4e +0x5a:  js     084a2a57 <+0x63>
084a2a50 +0x5c:  mov    $0x1,%eax
084a2a55 +0x61:  jmp    084a2a5c <+0x68>
084a2a57 +0x63:  mov    $0x0,%eax
084a2a5c +0x68:  leave
084a2a5d +0x69:  ret
```

## 反编译 C

```c
// expert_extraction::CExtraction::_check_need_slot @ 0x84a29f4

/* expert_extraction::CExtraction::_check_need_slot(CUser*) */

undefined4 __thiscall
expert_extraction::CExtraction::_check_need_slot(CExtraction *this,CUser *param_1)

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
