# ~LogWriter

`_ZN9LogWriterD0Ev`

`LogWriter::~LogWriter()`

| 类 | 地址 |
|---|---|
| `LogWriter` | `0x08ad39c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad39c4  _ZN9LogWriterD0Ev
#           LogWriter::~LogWriter()
# range [0x08ad39c4, 0x08ad39e1]
08ad39c4 +0x00:  push   %ebp
08ad39c5 +0x01:  mov    %esp,%ebp
08ad39c7 +0x03:  sub    $0x18,%esp
08ad39ca +0x06:  mov    0x8(%ebp),%eax
08ad39cd +0x09:  mov    %eax,(%esp)
08ad39d0 +0x0c:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad39d5 +0x11:  mov    0x8(%ebp),%eax
08ad39d8 +0x14:  mov    %eax,(%esp)
08ad39db +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad39e0 +0x1c:  leave
08ad39e1 +0x1d:  ret
```

## 反编译 C

```c
// LogWriter::~LogWriter @ 0x8ad39c4

/* LogWriter::~LogWriter() */

void __thiscall LogWriter::~LogWriter(LogWriter *this)

{
  ~LogWriter(this);
  operator_delete(this);
  return;
}
```
