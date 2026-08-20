# get_GrowthWeaponMaterialItem

`_ZN12CDataManager28get_GrowthWeaponMaterialItemEv`

`CDataManager::get_GrowthWeaponMaterialItem()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836562a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836562a  _ZN12CDataManager28get_GrowthWeaponMaterialItemEv
#           CDataManager::get_GrowthWeaponMaterialItem()
# range [0x0836562a, 0x08365637]
0836562a +0x00:  push   %ebp
0836562b +0x01:  mov    %esp,%ebp
0836562d +0x03:  mov    0x8(%ebp),%eax
08365630 +0x06:  mov    0x4bc8(%eax),%eax
08365636 +0x0c:  pop    %ebp
08365637 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::get_GrowthWeaponMaterialItem @ 0x836562a

/* CDataManager::get_GrowthWeaponMaterialItem() */

undefined4 __thiscall CDataManager::get_GrowthWeaponMaterialItem(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4bc8);
}
```
