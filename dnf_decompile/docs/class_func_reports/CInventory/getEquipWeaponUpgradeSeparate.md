# getEquipWeaponUpgradeSeparate

`_ZNK10CInventory29getEquipWeaponUpgradeSeparateEv`

`CInventory::getEquipWeaponUpgradeSeparate() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cdac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cdac  _ZNK10CInventory29getEquipWeaponUpgradeSeparateEv
#           CInventory::getEquipWeaponUpgradeSeparate() const
# range [0x0850cdac, 0x0850cdd7]
0850cdac +0x00:  push   %ebp
0850cdad +0x01:  mov    %esp,%ebp
0850cdaf +0x03:  sub    $0x18,%esp
0850cdb2 +0x06:  mov    0x8(%ebp),%eax
0850cdb5 +0x09:  mov    0x280(%eax),%eax
0850cdbb +0x0f:  test   %eax,%eax
0850cdbd +0x11:  jne    0850cdc6 <+0x1a>
0850cdbf +0x13:  mov    $0x0,%eax
0850cdc4 +0x18:  jmp    0850cdd6 <+0x2a>
0850cdc6 +0x1a:  mov    0x8(%ebp),%eax
0850cdc9 +0x1d:  add    $0x2b1,%eax
0850cdce +0x22:  mov    %eax,(%esp)
0850cdd1 +0x25:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0850cdd6 +0x2a:  leave
0850cdd7 +0x2b:  ret
```

## 反编译 C

```c
// CInventory::getEquipWeaponUpgradeSeparate @ 0x850cdac

/* CInventory::getEquipWeaponUpgradeSeparate() const */

undefined4 __thiscall CInventory::getEquipWeaponUpgradeSeparate(CInventory *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x280) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(this + 0x2b1));
  }
  return uVar1;
}
```
