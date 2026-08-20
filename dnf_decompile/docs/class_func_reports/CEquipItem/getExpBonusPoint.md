# getExpBonusPoint

`_ZNK10CEquipItem16getExpBonusPointEv`

`CEquipItem::getExpBonusPoint() const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x08513530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513530  _ZNK10CEquipItem16getExpBonusPointEv
#           CEquipItem::getExpBonusPoint() const
# range [0x08513530, 0x0851353d]
08513530 +0x00:  push   %ebp
08513531 +0x01:  mov    %esp,%ebp
08513533 +0x03:  mov    0x8(%ebp),%eax
08513536 +0x06:  add    $0x1e8,%eax
0851353b +0x0b:  pop    %ebp
0851353c +0x0c:  ret
0851353d +0x0d:  nop
```

## 反编译 C

```c
// CEquipItem::getExpBonusPoint @ 0x8513530

/* CEquipItem::getExpBonusPoint() const */

CEquipItem * __thiscall CEquipItem::getExpBonusPoint(CEquipItem *this)

{
  return this + 0x1e8;
}
```
