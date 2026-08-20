# ~CFileLogWriter

`_ZN14CFileLogWriterD0Ev`

`CFileLogWriter::~CFileLogWriter()`

| 类 | 地址 |
|---|---|
| `CFileLogWriter` | `0x08107060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08107060  _ZN14CFileLogWriterD0Ev
#           CFileLogWriter::~CFileLogWriter()
# range [0x08107060, 0x0810707d]
08107060 +0x00:  push   %ebp
08107061 +0x01:  mov    %esp,%ebp
08107063 +0x03:  sub    $0x18,%esp
08107066 +0x06:  mov    0x8(%ebp),%eax
08107069 +0x09:  mov    %eax,(%esp)
0810706c +0x0c:  call   0810701e <_ZN14CFileLogWriterD1Ev>  ; CFileLogWriter::~CFileLogWriter()
08107071 +0x11:  mov    0x8(%ebp),%eax
08107074 +0x14:  mov    %eax,(%esp)
08107077 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810707c +0x1c:  leave
0810707d +0x1d:  ret
```

## 反编译 C

```c
// CFileLogWriter::~CFileLogWriter @ 0x8107060

/* CFileLogWriter::~CFileLogWriter() */

void __thiscall CFileLogWriter::~CFileLogWriter(CFileLogWriter *this)

{
  ~CFileLogWriter(this);
  operator_delete(this);
  return;
}
```
