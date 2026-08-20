# getBuffer

`_ZN14CharStringData9getBufferEv`

`CharStringData::getBuffer()`

| 类 | 地址 |
|---|---|
| `CharStringData` | `0x08ad6942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6942  _ZN14CharStringData9getBufferEv
#           CharStringData::getBuffer()
# range [0x08ad6942, 0x08ad694d]
08ad6942 +0x00:  push   %ebp
08ad6943 +0x01:  mov    %esp,%ebp
08ad6945 +0x03:  mov    0x8(%ebp),%eax
08ad6948 +0x06:  add    $0x8,%eax
08ad694b +0x09:  pop    %ebp
08ad694c +0x0a:  ret
08ad694d +0x0b:  nop
```

## 反编译 C

```c
// CharStringData::getBuffer @ 0x8ad6942

/* DWARF original prototype: char * getBuffer(CharStringData * this) */

char * __thiscall CharStringData::getBuffer(CharStringData *this)

{
  return (char *)(this + 1);
}
```
