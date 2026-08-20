# isAmplifyPollutionItem

`_ZNK10CEquipItem22isAmplifyPollutionItemEv`

`CEquipItem::isAmplifyPollutionItem() const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085136b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085136b6  _ZNK10CEquipItem22isAmplifyPollutionItemEv
#           CEquipItem::isAmplifyPollutionItem() const
# range [0x085136b6, 0x085136c5]
085136b6 +0x00:  push   %ebp
085136b7 +0x01:  mov    %esp,%ebp
085136b9 +0x03:  mov    0x8(%ebp),%eax
085136bc +0x06:  movzbl 0x1fc(%eax),%eax
085136c3 +0x0d:  pop    %ebp
085136c4 +0x0e:  ret
085136c5 +0x0f:  nop
```

## 反编译 C

```c
// CEquipItem::isAmplifyPollutionItem @ 0x85136b6

/* CEquipItem::isAmplifyPollutionItem() const */

CEquipItem __thiscall CEquipItem::isAmplifyPollutionItem(CEquipItem *this)

{
  return this[0x1fc];
}
```
