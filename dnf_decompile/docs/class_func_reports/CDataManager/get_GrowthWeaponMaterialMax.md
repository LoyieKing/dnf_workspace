# get_GrowthWeaponMaterialMax

`_ZN12CDataManager27get_GrowthWeaponMaterialMaxEv`

`CDataManager::get_GrowthWeaponMaterialMax()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365638  _ZN12CDataManager27get_GrowthWeaponMaterialMaxEv
#           CDataManager::get_GrowthWeaponMaterialMax()
# range [0x08365638, 0x08365647]
08365638 +0x00:  push   %ebp
08365639 +0x01:  mov    %esp,%ebp
0836563b +0x03:  mov    0x8(%ebp),%eax
0836563e +0x06:  movzwl 0x4bcc(%eax),%eax
08365645 +0x0d:  pop    %ebp
08365646 +0x0e:  ret
08365647 +0x0f:  nop
```

## 反编译 C

```c
// CDataManager::get_GrowthWeaponMaterialMax @ 0x8365638

/* CDataManager::get_GrowthWeaponMaterialMax() */

undefined2 __thiscall CDataManager::get_GrowthWeaponMaterialMax(CDataManager *this)

{
  return *(undefined2 *)(this + 0x4bcc);
}
```
