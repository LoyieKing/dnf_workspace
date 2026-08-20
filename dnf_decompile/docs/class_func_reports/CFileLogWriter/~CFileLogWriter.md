# ~CFileLogWriter

`_ZN14CFileLogWriterD1Ev`

`CFileLogWriter::~CFileLogWriter()`

| 类 | 地址 |
|---|---|
| `CFileLogWriter` | `0x0810701e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810701e  _ZN14CFileLogWriterD1Ev
#           CFileLogWriter::~CFileLogWriter()
# range [0x0810701e, 0x0810705f]
0810701e +0x00:  push   %ebp
0810701f +0x01:  mov    %esp,%ebp
08107021 +0x03:  sub    $0x18,%esp
08107024 +0x06:  mov    0x8(%ebp),%eax
08107027 +0x09:  movl   $&_ZTV14CFileLogWriter+0x8,(%eax)
0810702d +0x0f:  mov    0x8(%ebp),%eax
08107030 +0x12:  add    $0x1c,%eax
08107033 +0x15:  mov    %eax,(%esp)
08107036 +0x18:  call   08107b72 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x38>  ; global constructors keyed to CFileLogWriterInstance()+0x38
0810703b +0x1d:  mov    0x8(%ebp),%eax
0810703e +0x20:  add    $0x4,%eax
08107041 +0x23:  mov    %eax,(%esp)
08107044 +0x26:  call   08107bae <_GLOBAL__I__Z22CFileLogWriterInstancev+0x74>  ; global constructors keyed to CFileLogWriterInstance()+0x74
08107049 +0x2b:  mov    $0x0,%eax
0810704e +0x30:  test   %al,%al
08107050 +0x32:  je     0810705d <+0x3f>
08107052 +0x34:  mov    0x8(%ebp),%eax
08107055 +0x37:  mov    %eax,(%esp)
08107058 +0x3a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810705d +0x3f:  leave
0810705e +0x40:  ret
0810705f +0x41:  nop
```

## 反编译 C

```c
// CFileLogWriter::~CFileLogWriter @ 0x810701e

/* WARNING: Removing unreachable block (ram,0x08107052) */
/* CFileLogWriter::~CFileLogWriter() */

void __thiscall CFileLogWriter::~CFileLogWriter(CFileLogWriter *this)

{
  *(undefined ***)this = &PTR__CFileLogWriter_08b44640;
  CMutex::~CMutex((CMutex *)(this + 0x1c));
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::~map((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
          *)(this + 4));
  return;
}
```
