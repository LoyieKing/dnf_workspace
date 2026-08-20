# operator()

`_ZN10CMyFileLogclEPKcS1_z`

`CMyFileLog::operator()(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CMyFileLog` | `0x08107898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08107898  _ZN10CMyFileLogclEPKcS1_z
#           CMyFileLog::operator()(char const*, char const*, ...)
# range [0x08107898, 0x08107945]
08107898 +0x00:  push   %ebp
08107899 +0x01:  mov    %esp,%ebp
0810789b +0x03:  push   %ebx
0810789c +0x04:  sub    $0x7024,%esp
081078a2 +0x0a:  lea    -0x700c(%ebp),%eax
081078a8 +0x10:  mov    $0x7000,%edx
081078ad +0x15:  mov    %edx,0x8(%esp)
081078b1 +0x19:  movl   $0x0,0x4(%esp)
081078b9 +0x21:  mov    %eax,(%esp)
081078bc +0x24:  call   0807dcc0 <_init+0x5b8>
081078c1 +0x29:  mov    0x8(%ebp),%eax
081078c4 +0x2c:  mov    0x4(%eax),%edx
081078c7 +0x2f:  mov    0x8(%ebp),%eax
081078ca +0x32:  mov    (%eax),%eax
081078cc +0x34:  mov    %edx,0xc(%esp)
081078d0 +0x38:  mov    %eax,0x8(%esp)
081078d4 +0x3c:  movl   $"%s(%d): ",0x4(%esp)
081078dc +0x44:  lea    -0x700c(%ebp),%eax
081078e2 +0x4a:  mov    %eax,(%esp)
081078e5 +0x4d:  call   0807e440 <_init+0xd38>
081078ea +0x52:  lea    0x14(%ebp),%eax
081078ed +0x55:  mov    %eax,-0xc(%ebp)
081078f0 +0x58:  mov    -0xc(%ebp),%ebx
081078f3 +0x5b:  lea    -0x700c(%ebp),%eax
081078f9 +0x61:  mov    %eax,(%esp)
081078fc +0x64:  call   0807e3b0 <_init+0xca8>
08107901 +0x69:  mov    %eax,%edx
08107903 +0x6b:  lea    -0x700c(%ebp),%eax
08107909 +0x71:  add    %edx,%eax
0810790b +0x73:  mov    %ebx,0x8(%esp)
0810790f +0x77:  mov    0x10(%ebp),%edx
08107912 +0x7a:  mov    %edx,0x4(%esp)
08107916 +0x7e:  mov    %eax,(%esp)
08107919 +0x81:  call   0807d7d0 <_init+0xc8>
0810791e +0x86:  call   08106d30 <_Z22CFileLogWriterInstancev>  ; CFileLogWriterInstance()
08107923 +0x8b:  lea    -0x700c(%ebp),%edx
08107929 +0x91:  mov    %edx,0x8(%esp)
0810792d +0x95:  mov    0xc(%ebp),%edx
08107930 +0x98:  mov    %edx,0x4(%esp)
08107934 +0x9c:  mov    %eax,(%esp)
08107937 +0x9f:  call   0810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>  ; CFileLogWriter::writeLog(char const*, char const*, ...)
0810793c +0xa4:  add    $0x7024,%esp
08107942 +0xaa:  pop    %ebx
08107943 +0xab:  pop    %ebp
08107944 +0xac:  ret
08107945 +0xad:  nop
```

## 反编译 C

```c
// CMyFileLog::operator @ 0x8107898

/* CMyFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall CMyFileLog::operator()(CMyFileLog *this,char *param_1,char *param_2,...)

{
  size_t sVar1;
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  sprintf(local_7010,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000010;
  sVar1 = strlen(local_7010);
  vsprintf(local_7010 + sVar1,param_2,&stack0x00000010);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeLog(this_00,param_1,local_7010);
  return;
}
```
