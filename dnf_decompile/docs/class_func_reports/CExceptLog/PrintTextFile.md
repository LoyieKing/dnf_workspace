# PrintTextFile

`_ZN10CExceptLog13PrintTextFileEPcS0_`

`CExceptLog::PrintTextFile(char*, char*)`

| 类 | 地址 |
|---|---|
| `CExceptLog` | `0x0846d640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d640  _ZN10CExceptLog13PrintTextFileEPcS0_
#           CExceptLog::PrintTextFile(char*, char*)
# range [0x0846d640, 0x0846d681]
0846d640 +0x00:  push   %ebp
0846d641 +0x01:  mov    %esp,%ebp
0846d643 +0x03:  sub    $0x28,%esp
0846d646 +0x06:  movl   $"a",0x4(%esp)
0846d64e +0x0e:  mov    0xc(%ebp),%eax
0846d651 +0x11:  mov    %eax,(%esp)
0846d654 +0x14:  call   0807e770 <_init+0x1068>
0846d659 +0x19:  mov    %eax,-0xc(%ebp)
0846d65c +0x1c:  cmpl   $0x0,-0xc(%ebp)
0846d660 +0x20:  je     0846d67f <+0x3f>
0846d662 +0x22:  mov    0x10(%ebp),%eax
0846d665 +0x25:  mov    %eax,0x4(%esp)
0846d669 +0x29:  mov    -0xc(%ebp),%eax
0846d66c +0x2c:  mov    %eax,(%esp)
0846d66f +0x2f:  call   0807da90 <_init+0x388>
0846d674 +0x34:  mov    -0xc(%ebp),%eax
0846d677 +0x37:  mov    %eax,(%esp)
0846d67a +0x3a:  call   0807dea0 <_init+0x798>
0846d67f +0x3f:  leave
0846d680 +0x40:  ret
0846d681 +0x41:  nop
```

## 反编译 C

```c
// CExceptLog::PrintTextFile @ 0x846d640

/* CExceptLog::PrintTextFile(char*, char*) */

void __thiscall CExceptLog::PrintTextFile(CExceptLog *this,char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"a");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,param_2);
    fclose(__stream);
  }
  return;
}
```
