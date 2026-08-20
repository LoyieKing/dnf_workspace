# IsEquipAvatar

`_ZN5CUser13IsEquipAvatarEv`

`CUser::IsEquipAvatar()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c80e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c80e  _ZN5CUser13IsEquipAvatarEv
#           CUser::IsEquipAvatar()
# range [0x0867c80e, 0x0867c843]
0867c80e +0x00:  push   %ebp
0867c80f +0x01:  mov    %esp,%ebp
0867c811 +0x03:  sub    $0x18,%esp
0867c814 +0x06:  mov    0x8(%ebp),%eax
0867c817 +0x09:  mov    %eax,(%esp)
0867c81a +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867c81f +0x11:  test   %eax,%eax
0867c821 +0x13:  setne  %al
0867c824 +0x16:  test   %al,%al
0867c826 +0x18:  je     0867c83d <+0x2f>
0867c828 +0x1a:  mov    0x8(%ebp),%eax
0867c82b +0x1d:  mov    %eax,(%esp)
0867c82e +0x20:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c833 +0x25:  mov    %eax,(%esp)
0867c836 +0x28:  call   084fb638 <_ZNK10CInventory13IsEquipAvatarEv>  ; CInventory::IsEquipAvatar() const
0867c83b +0x2d:  jmp    0867c842 <+0x34>
0867c83d +0x2f:  mov    $0x0,%eax
0867c842 +0x34:  leave
0867c843 +0x35:  ret
```

## 反编译 C

```c
// CUser::IsEquipAvatar @ 0x867c80e

/* CUser::IsEquipAvatar() */

undefined4 __thiscall CUser::IsEquipAvatar(CUser *this)

{
  int iVar1;
  CInventory *this_00;
  undefined4 uVar2;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar2 = CInventory::IsEquipAvatar(this_00);
  }
  return uVar2;
}
```
