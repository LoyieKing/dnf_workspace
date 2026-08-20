# CFileLogWriter

`_ZN14CFileLogWriterC1Ev`

`CFileLogWriter::CFileLogWriter()`

| 类 | 地址 |
|---|---|
| `CFileLogWriter` | `0x08106ff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106ff0  _ZN14CFileLogWriterC1Ev
#           CFileLogWriter::CFileLogWriter()
# range [0x08106ff0, 0x0810701d]
08106ff0 +0x00:  push   %ebp
08106ff1 +0x01:  mov    %esp,%ebp
08106ff3 +0x03:  sub    $0x18,%esp
08106ff6 +0x06:  mov    0x8(%ebp),%eax
08106ff9 +0x09:  movl   $&_ZTV14CFileLogWriter+0x8,(%eax)
08106fff +0x0f:  mov    0x8(%ebp),%eax
08107002 +0x12:  add    $0x4,%eax
08107005 +0x15:  mov    %eax,(%esp)
08107008 +0x18:  call   08107bea <_GLOBAL__I__Z22CFileLogWriterInstancev+0xb0>  ; global constructors keyed to CFileLogWriterInstance()+0xb0
0810700d +0x1d:  mov    0x8(%ebp),%eax
08107010 +0x20:  add    $0x1c,%eax
08107013 +0x23:  mov    %eax,(%esp)
08107016 +0x26:  call   08107b56 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1c>  ; global constructors keyed to CFileLogWriterInstance()+0x1c
0810701b +0x2b:  leave
0810701c +0x2c:  ret
0810701d +0x2d:  nop
```

## 反编译 C

```c
// CFileLogWriter::CFileLogWriter @ 0x8106ff0

/* CFileLogWriter::CFileLogWriter() */

void __thiscall CFileLogWriter::CFileLogWriter(CFileLogWriter *this)

{
  *(undefined ***)this = &PTR__CFileLogWriter_08b44640;
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::map((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
         *)(this + 4));
  CMutex::CMutex((CMutex *)(this + 0x1c));
  return;
}
```
