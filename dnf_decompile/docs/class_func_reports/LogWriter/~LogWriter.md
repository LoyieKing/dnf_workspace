# ~LogWriter

`_ZN9LogWriterD1Ev`

`LogWriter::~LogWriter()`

| 类 | 地址 |
|---|---|
| `LogWriter` | `0x08ad399e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad399e  _ZN9LogWriterD1Ev
#           LogWriter::~LogWriter()
# range [0x08ad399e, 0x08ad39c3]
08ad399e +0x00:  push   %ebp
08ad399f +0x01:  mov    %esp,%ebp
08ad39a1 +0x03:  sub    $0x18,%esp
08ad39a4 +0x06:  mov    0x8(%ebp),%eax
08ad39a7 +0x09:  movl   $&_ZTV9LogWriter+0x8,(%eax)
08ad39ad +0x0f:  mov    $0x0,%eax
08ad39b2 +0x14:  test   %al,%al
08ad39b4 +0x16:  je     08ad39c1 <+0x23>
08ad39b6 +0x18:  mov    0x8(%ebp),%eax
08ad39b9 +0x1b:  mov    %eax,(%esp)
08ad39bc +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad39c1 +0x23:  leave
08ad39c2 +0x24:  ret
08ad39c3 +0x25:  nop
```

## 反编译 C

```c
// LogWriter::~LogWriter @ 0x8ad399e

/* WARNING: Removing unreachable block (ram,0x08ad39b6) */
/* LogWriter::~LogWriter() */

void __thiscall LogWriter::~LogWriter(LogWriter *this)

{
  *(undefined ***)this = &PTR__LogWriter_08e32b68;
  return;
}
```
