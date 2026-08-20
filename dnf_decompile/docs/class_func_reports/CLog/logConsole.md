# logConsole

`_ZN4CLog10logConsoleEPKcz`

`CLog::logConsole(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f414` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f414  _ZN4CLog10logConsoleEPKcz
#           CLog::logConsole(char const*, ...)
# range [0x0854f414, 0x0854f4bf]
0854f414 +0x00:  push   %ebp
0854f415 +0x01:  mov    %esp,%ebp
0854f417 +0x03:  push   %ebx
0854f418 +0x04:  sub    $0x2034,%esp
0854f41e +0x0a:  cmpl   $0x0,0x8(%ebp)
0854f422 +0x0e:  jne    0854f42e <+0x1a>
0854f424 +0x10:  mov    $0x0,%eax
0854f429 +0x15:  jmp    0854f4b7 <+0xa3>
0854f42e +0x1a:  lea    -0x10(%ebp),%eax
0854f431 +0x1d:  mov    %eax,(%esp)
0854f434 +0x20:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854f439 +0x25:  lea    0x10(%ebp),%eax
0854f43c +0x28:  mov    %eax,-0x14(%ebp)
0854f43f +0x2b:  mov    -0x14(%ebp),%eax
0854f442 +0x2e:  mov    %eax,0x8(%esp)
0854f446 +0x32:  mov    0xc(%ebp),%eax
0854f449 +0x35:  mov    %eax,0x4(%esp)
0854f44d +0x39:  lea    -0x2014(%ebp),%eax
0854f453 +0x3f:  mov    %eax,(%esp)
0854f456 +0x42:  call   0807d7d0 <_init+0xc8>
0854f45b +0x47:  movzbl -0xa(%ebp),%eax
0854f45f +0x4b:  movsbl %al,%ecx
0854f462 +0x4e:  movzbl -0xb(%ebp),%eax
0854f466 +0x52:  movsbl %al,%edx
0854f469 +0x55:  movzbl -0xc(%ebp),%eax
0854f46d +0x59:  movsbl %al,%eax
0854f470 +0x5c:  lea    -0x2014(%ebp),%ebx
0854f476 +0x62:  mov    %ebx,0x14(%esp)
0854f47a +0x66:  mov    %ecx,0x10(%esp)
0854f47e +0x6a:  mov    %edx,0xc(%esp)
0854f482 +0x6e:  mov    %eax,0x8(%esp)
0854f486 +0x72:  movl   $"[%02d:%02d:%02d] %s",0x4(%esp)
0854f48e +0x7a:  lea    -0x1014(%ebp),%eax
0854f494 +0x80:  mov    %eax,(%esp)
0854f497 +0x83:  call   0807e440 <_init+0xd38>
0854f49c +0x88:  lea    -0x1014(%ebp),%eax
0854f4a2 +0x8e:  mov    %eax,0x4(%esp)
0854f4a6 +0x92:  movl   $"%s\r\n",(%esp)
0854f4ad +0x99:  call   0807db60 <_init+0x458>
0854f4b2 +0x9e:  mov    $0x1,%eax
0854f4b7 +0xa3:  add    $0x2034,%esp
0854f4bd +0xa9:  pop    %ebx
0854f4be +0xaa:  pop    %ebp
0854f4bf +0xab:  ret
```

## 反编译 C

```c
// CLog::logConsole @ 0x854f414

/* CLog::logConsole(char const*, ...) */

bool __thiscall CLog::logConsole(CLog *this,char *param_1,...)

{
  char local_2018 [4096];
  char local_1018 [4096];
  undefined1 *local_18;
  TimeLog_ local_14 [4];
  char local_10;
  char local_f;
  char local_e;
  
  if (this != (CLog *)0x0) {
    TimeLog_::setTime(local_14);
    local_18 = &stack0x0000000c;
    vsprintf(local_2018,param_1,local_18);
    sprintf(local_1018,"[%02d:%02d:%02d] %s",(int)local_10,(int)local_f,(int)local_e,local_2018);
    printf("%s\r\n",local_1018);
  }
  return this != (CLog *)0x0;
}
```
