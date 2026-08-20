# getId

`_ZNK25StringResourceDelayedItem5getIdEv`

`StringResourceDelayedItem::getId() const`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad52f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad52f6  _ZNK25StringResourceDelayedItem5getIdEv
#           StringResourceDelayedItem::getId() const
# range [0x08ad52f6, 0x08ad5301]
08ad52f6 +0x00:  push   %ebp
08ad52f7 +0x01:  mov    %esp,%ebp
08ad52f9 +0x03:  mov    0x8(%ebp),%eax
08ad52fc +0x06:  mov    0xc(%eax),%eax
08ad52ff +0x09:  pop    %ebp
08ad5300 +0x0a:  ret
08ad5301 +0x0b:  nop
```

## 反编译 C

```c
// StringResourceDelayedItem::getId @ 0x8ad52f6

/* StringResourceDelayedItem::getId() const */

undefined4 __thiscall StringResourceDelayedItem::getId(StringResourceDelayedItem *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
