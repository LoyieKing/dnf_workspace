# getStringResource

`_ZNK25StringResourceDelayedItem17getStringResourceEv`

`StringResourceDelayedItem::getStringResource() const`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad52ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad52ea  _ZNK25StringResourceDelayedItem17getStringResourceEv
#           StringResourceDelayedItem::getStringResource() const
# range [0x08ad52ea, 0x08ad52f5]
08ad52ea +0x00:  push   %ebp
08ad52eb +0x01:  mov    %esp,%ebp
08ad52ed +0x03:  mov    0x8(%ebp),%eax
08ad52f0 +0x06:  mov    0x8(%eax),%eax
08ad52f3 +0x09:  pop    %ebp
08ad52f4 +0x0a:  ret
08ad52f5 +0x0b:  nop
```

## 反编译 C

```c
// StringResourceDelayedItem::getStringResource @ 0x8ad52ea

/* StringResourceDelayedItem::getStringResource() const */

undefined4 __thiscall StringResourceDelayedItem::getStringResource(StringResourceDelayedItem *this)

{
  return *(undefined4 *)(this + 8);
}
```
