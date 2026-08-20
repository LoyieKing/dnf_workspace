# operator()

`_ZN13CMyRawFileLogclEPKcS1_z`

`CMyRawFileLog::operator()(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CMyRawFileLog` | `0x08107a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08107a90  _ZN13CMyRawFileLogclEPKcS1_z
#           CMyRawFileLog::operator()(char const*, char const*, ...)
# range [0x08107a90, 0x08107af9]
08107a90 +0x00:  push   %ebp
08107a91 +0x01:  mov    %esp,%ebp
08107a93 +0x03:  sub    $0x7028,%esp
08107a99 +0x09:  lea    -0x700c(%ebp),%eax
08107a9f +0x0f:  mov    $0x7000,%edx
08107aa4 +0x14:  mov    %edx,0x8(%esp)
08107aa8 +0x18:  movl   $0x0,0x4(%esp)
08107ab0 +0x20:  mov    %eax,(%esp)
08107ab3 +0x23:  call   0807dcc0 <_init+0x5b8>
08107ab8 +0x28:  lea    0x14(%ebp),%eax
08107abb +0x2b:  mov    %eax,-0xc(%ebp)
08107abe +0x2e:  mov    -0xc(%ebp),%eax
08107ac1 +0x31:  mov    %eax,0x8(%esp)
08107ac5 +0x35:  mov    0x10(%ebp),%eax
08107ac8 +0x38:  mov    %eax,0x4(%esp)
08107acc +0x3c:  lea    -0x700c(%ebp),%eax
08107ad2 +0x42:  mov    %eax,(%esp)
08107ad5 +0x45:  call   0807d7d0 <_init+0xc8>
08107ada +0x4a:  call   08106d30 <_Z22CFileLogWriterInstancev>  ; CFileLogWriterInstance()
08107adf +0x4f:  lea    -0x700c(%ebp),%edx
08107ae5 +0x55:  mov    %edx,0x8(%esp)
08107ae9 +0x59:  mov    0xc(%ebp),%edx
08107aec +0x5c:  mov    %edx,0x4(%esp)
08107af0 +0x60:  mov    %eax,(%esp)
08107af3 +0x63:  call   0810747c <_ZN14CFileLogWriter11writeRawLogEPKcS1_z>  ; CFileLogWriter::writeRawLog(char const*, char const*, ...)
08107af8 +0x68:  leave
08107af9 +0x69:  ret
```

## 反编译 C

```c
// CMyRawFileLog::operator @ 0x8107a90

/* CMyRawFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall CMyRawFileLog::operator()(CMyRawFileLog *this,char *param_1,char *param_2,...)

{
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  local_10 = &stack0x00000010;
  vsprintf(local_7010,param_2,local_10);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeRawLog(this_00,param_1,local_7010);
  return;
}
```
