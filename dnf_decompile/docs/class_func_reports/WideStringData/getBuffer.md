# getBuffer

`_ZN14WideStringData9getBufferEv`

`WideStringData::getBuffer()`

| 类 | 地址 |
|---|---|
| `WideStringData` | `0x08ad998e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad998e  _ZN14WideStringData9getBufferEv
#           WideStringData::getBuffer()
# range [0x08ad998e, 0x08ad9999]
08ad998e +0x00:  push   %ebp
08ad998f +0x01:  mov    %esp,%ebp
08ad9991 +0x03:  mov    0x8(%ebp),%eax
08ad9994 +0x06:  add    $0x8,%eax
08ad9997 +0x09:  pop    %ebp
08ad9998 +0x0a:  ret
08ad9999 +0x0b:  nop
```

## 反编译 C

```c
// WideStringData::getBuffer @ 0x8ad998e

/* DWARF original prototype: wchar * getBuffer(WideStringData * this) */

wchar * __thiscall WideStringData::getBuffer(WideStringData *this)

{
  return (wchar *)(this + 1);
}
```
