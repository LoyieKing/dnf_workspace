# get_GiftGrowthWeaponBox

`_ZN12CDataManager23get_GiftGrowthWeaponBoxEv`

`CDataManager::get_GiftGrowthWeaponBox()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836561c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836561c  _ZN12CDataManager23get_GiftGrowthWeaponBoxEv
#           CDataManager::get_GiftGrowthWeaponBox()
# range [0x0836561c, 0x08365629]
0836561c +0x00:  push   %ebp
0836561d +0x01:  mov    %esp,%ebp
0836561f +0x03:  mov    0x8(%ebp),%eax
08365622 +0x06:  mov    0x4bc4(%eax),%eax
08365628 +0x0c:  pop    %ebp
08365629 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::get_GiftGrowthWeaponBox @ 0x836561c

/* CDataManager::get_GiftGrowthWeaponBox() */

undefined4 __thiscall CDataManager::get_GiftGrowthWeaponBox(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4bc4);
}
```
