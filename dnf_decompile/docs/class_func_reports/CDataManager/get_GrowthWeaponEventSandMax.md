# get_GrowthWeaponEventSandMax

`_ZN12CDataManager28get_GrowthWeaponEventSandMaxEv`

`CDataManager::get_GrowthWeaponEventSandMax()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365658  _ZN12CDataManager28get_GrowthWeaponEventSandMaxEv
#           CDataManager::get_GrowthWeaponEventSandMax()
# range [0x08365658, 0x08365667]
08365658 +0x00:  push   %ebp
08365659 +0x01:  mov    %esp,%ebp
0836565b +0x03:  mov    0x8(%ebp),%eax
0836565e +0x06:  movzwl 0x4bd0(%eax),%eax
08365665 +0x0d:  pop    %ebp
08365666 +0x0e:  ret
08365667 +0x0f:  nop
```

## 反编译 C

```c
// CDataManager::get_GrowthWeaponEventSandMax @ 0x8365658

/* CDataManager::get_GrowthWeaponEventSandMax() */

undefined2 __thiscall CDataManager::get_GrowthWeaponEventSandMax(CDataManager *this)

{
  return *(undefined2 *)(this + 0x4bd0);
}
```
