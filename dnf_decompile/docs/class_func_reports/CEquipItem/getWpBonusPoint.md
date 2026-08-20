# getWpBonusPoint

`_ZNK10CEquipItem15getWpBonusPointEv`

`CEquipItem::getWpBonusPoint() const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x08513522` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513522  _ZNK10CEquipItem15getWpBonusPointEv
#           CEquipItem::getWpBonusPoint() const
# range [0x08513522, 0x0851352f]
08513522 +0x00:  push   %ebp
08513523 +0x01:  mov    %esp,%ebp
08513525 +0x03:  mov    0x8(%ebp),%eax
08513528 +0x06:  add    $0x1e0,%eax
0851352d +0x0b:  pop    %ebp
0851352e +0x0c:  ret
0851352f +0x0d:  nop
```

## 反编译 C

```c
// CEquipItem::getWpBonusPoint @ 0x8513522

/* CEquipItem::getWpBonusPoint() const */

CEquipItem * __thiscall CEquipItem::getWpBonusPoint(CEquipItem *this)

{
  return this + 0x1e0;
}
```
