# get_GrowthWeaponEventBubbleMax

`_ZN12CDataManager30get_GrowthWeaponEventBubbleMaxEv`

`CDataManager::get_GrowthWeaponEventBubbleMax()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365648  _ZN12CDataManager30get_GrowthWeaponEventBubbleMaxEv
#           CDataManager::get_GrowthWeaponEventBubbleMax()
# range [0x08365648, 0x08365657]
08365648 +0x00:  push   %ebp
08365649 +0x01:  mov    %esp,%ebp
0836564b +0x03:  mov    0x8(%ebp),%eax
0836564e +0x06:  movzwl 0x4bce(%eax),%eax
08365655 +0x0d:  pop    %ebp
08365656 +0x0e:  ret
08365657 +0x0f:  nop
```

## 反编译 C

```c
// CDataManager::get_GrowthWeaponEventBubbleMax @ 0x8365648

/* CDataManager::get_GrowthWeaponEventBubbleMax() */

undefined2 __thiscall CDataManager::get_GrowthWeaponEventBubbleMax(CDataManager *this)

{
  return *(undefined2 *)(this + 0x4bce);
}
```
