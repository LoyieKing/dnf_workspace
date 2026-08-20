# fPrintTextFile

`_ZN7DNFFLib14fPrintTextFileEPcS0_z`

`DNFFLib::fPrintTextFile(char*, char*, ...)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108968  _ZN7DNFFLib14fPrintTextFileEPcS0_z
#           DNFFLib::fPrintTextFile(char*, char*, ...)
# range [0x08108968, 0x081089c7]
08108968 +0x00:  push   %ebp
08108969 +0x01:  mov    %esp,%ebp
0810896b +0x03:  sub    $0x1028,%esp
08108971 +0x09:  movl   $0x1000,0x8(%esp)
08108979 +0x11:  movl   $0x0,0x4(%esp)
08108981 +0x19:  lea    -0x100c(%ebp),%eax
08108987 +0x1f:  mov    %eax,(%esp)
0810898a +0x22:  call   0807dcc0 <_init+0x5b8>
0810898f +0x27:  lea    0x10(%ebp),%eax
08108992 +0x2a:  mov    %eax,-0xc(%ebp)
08108995 +0x2d:  mov    -0xc(%ebp),%eax
08108998 +0x30:  mov    %eax,0x8(%esp)
0810899c +0x34:  mov    0xc(%ebp),%eax
0810899f +0x37:  mov    %eax,0x4(%esp)
081089a3 +0x3b:  lea    -0x100c(%ebp),%eax
081089a9 +0x41:  mov    %eax,(%esp)
081089ac +0x44:  call   0807d7d0 <_init+0xc8>
081089b1 +0x49:  lea    -0x100c(%ebp),%eax
081089b7 +0x4f:  mov    %eax,0x4(%esp)
081089bb +0x53:  mov    0x8(%ebp),%eax
081089be +0x56:  mov    %eax,(%esp)
081089c1 +0x59:  call   08108927 <_ZN7DNFFLib13PrintTextFileEPcS0_>  ; DNFFLib::PrintTextFile(char*, char*)
081089c6 +0x5e:  leave
081089c7 +0x5f:  ret
```

## 反编译 C

```c
// DNFFLib::fPrintTextFile @ 0x8108968

/* DNFFLib::fPrintTextFile(char*, char*, ...) */

void DNFFLib::fPrintTextFile(char *param_1,char *param_2,...)

{
  char local_1010 [4096];
  undefined1 *local_10;
  
  memset(local_1010,0,0x1000);
  local_10 = &stack0x0000000c;
  vsprintf(local_1010,param_2,local_10);
  PrintTextFile(param_1,local_1010);
  return;
}
```
