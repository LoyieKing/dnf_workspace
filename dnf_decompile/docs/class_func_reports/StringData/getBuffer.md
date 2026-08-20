# getBuffer

`_ZN10StringData9getBufferEv`

`StringData::getBuffer()`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad68ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad68ec  _ZN10StringData9getBufferEv
#           StringData::getBuffer()
# range [0x08ad68ec, 0x08ad68f7]
08ad68ec +0x00:  push   %ebp
08ad68ed +0x01:  mov    %esp,%ebp
08ad68ef +0x03:  mov    0x8(%ebp),%eax
08ad68f2 +0x06:  add    $0x8,%eax
08ad68f5 +0x09:  pop    %ebp
08ad68f6 +0x0a:  ret
08ad68f7 +0x0b:  nop
```

## 反编译 C

```c
// StringData::getBuffer @ 0x8ad68ec

/* DWARF original prototype: byte * getBuffer(StringData * this) */

byte * __thiscall StringData::getBuffer(StringData *this)

{
  return (byte *)(this + 1);
}
```
