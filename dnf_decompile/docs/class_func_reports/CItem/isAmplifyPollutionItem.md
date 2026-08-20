# isAmplifyPollutionItem

`_ZNK5CItem22isAmplifyPollutionItemEv`

`CItem::isAmplifyPollutionItem() const`

| 类 | 地址 |
|---|---|
| `CItem` | `0x085136ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085136ac  _ZNK5CItem22isAmplifyPollutionItemEv
#           CItem::isAmplifyPollutionItem() const
# range [0x085136ac, 0x085136b5]
085136ac +0x00:  push   %ebp
085136ad +0x01:  mov    %esp,%ebp
085136af +0x03:  mov    $0x1,%eax
085136b4 +0x08:  pop    %ebp
085136b5 +0x09:  ret
```

## 反编译 C

```c
// CItem::isAmplifyPollutionItem @ 0x85136ac

/* CItem::isAmplifyPollutionItem() const */

undefined4 CItem::isAmplifyPollutionItem(void)

{
  return 1;
}
```
