# LogWriter

`_ZN9LogWriterC1Ev`

`LogWriter::LogWriter()`

| 类 | 地址 |
|---|---|
| `LogWriter` | `0x08ad3990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3990  _ZN9LogWriterC1Ev
#           LogWriter::LogWriter()
# range [0x08ad3990, 0x08ad399d]
08ad3990 +0x00:  push   %ebp
08ad3991 +0x01:  mov    %esp,%ebp
08ad3993 +0x03:  mov    0x8(%ebp),%eax
08ad3996 +0x06:  movl   $&_ZTV9LogWriter+0x8,(%eax)
08ad399c +0x0c:  pop    %ebp
08ad399d +0x0d:  ret
```

## 反编译 C

```c
// LogWriter::LogWriter @ 0x8ad3990

/* LogWriter::LogWriter() */

void __thiscall LogWriter::LogWriter(LogWriter *this)

{
  *(undefined ***)this = &PTR__LogWriter_08e32b68;
  return;
}
```
