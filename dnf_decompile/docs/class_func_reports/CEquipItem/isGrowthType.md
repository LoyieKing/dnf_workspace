# isGrowthType

`_ZNK10CEquipItem12isGrowthTypeEv`

`CEquipItem::isGrowthType() const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085137a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085137a8  _ZNK10CEquipItem12isGrowthTypeEv
#           CEquipItem::isGrowthType() const
# range [0x085137a8, 0x085137b7]
085137a8 +0x00:  push   %ebp
085137a9 +0x01:  mov    %esp,%ebp
085137ab +0x03:  mov    0x8(%ebp),%eax
085137ae +0x06:  movzbl 0x21a(%eax),%eax
085137b5 +0x0d:  pop    %ebp
085137b6 +0x0e:  ret
085137b7 +0x0f:  nop
```

## 反编译 C

```c
// CEquipItem::isGrowthType @ 0x85137a8

/* CEquipItem::isGrowthType() const */

CEquipItem __thiscall CEquipItem::isGrowthType(CEquipItem *this)

{
  return this[0x21a];
}
```
