# getCommonBuffer

`_ZN16IPackFileProcess15getCommonBufferEv`

`IPackFileProcess::getCommonBuffer()`

| 类 | 地址 |
|---|---|
| `IPackFileProcess` | `0x08ac7734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac7734  _ZN16IPackFileProcess15getCommonBufferEv
#           IPackFileProcess::getCommonBuffer()
# range [0x08ac7734, 0x08ac773d]
08ac7734 +0x00:  push   %ebp
08ac7735 +0x01:  mov    %esp,%ebp
08ac7737 +0x03:  mov    &_ZN16IPackFileProcess16s_common_buffer_E,%eax
08ac773c +0x08:  pop    %ebp
08ac773d +0x09:  ret
```

## 反编译 C

```c
// IPackFileProcess::getCommonBuffer @ 0x8ac7734

/* DWARF original prototype: uchar * getCommonBuffer(IPackFileProcess * this) */

uchar * __thiscall IPackFileProcess::getCommonBuffer(IPackFileProcess *this)

{
  return s_common_buffer_;
}
```
