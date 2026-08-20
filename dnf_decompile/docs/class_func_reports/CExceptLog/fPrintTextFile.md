# fPrintTextFile

`_ZN10CExceptLog14fPrintTextFileEPcS0_z`

`CExceptLog::fPrintTextFile(char*, char*, ...)`

| 类 | 地址 |
|---|---|
| `CExceptLog` | `0x0846d682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d682  _ZN10CExceptLog14fPrintTextFileEPcS0_z
#           CExceptLog::fPrintTextFile(char*, char*, ...)
# range [0x0846d682, 0x0846d6c1]
0846d682 +0x00:  push   %ebp
0846d683 +0x01:  mov    %esp,%ebp
0846d685 +0x03:  sub    $0x28,%esp
0846d688 +0x06:  lea    0x14(%ebp),%eax
0846d68b +0x09:  mov    %eax,-0xc(%ebp)
0846d68e +0x0c:  mov    -0xc(%ebp),%edx
0846d691 +0x0f:  mov    0x8(%ebp),%eax
0846d694 +0x12:  mov    %edx,0x8(%esp)
0846d698 +0x16:  mov    0x10(%ebp),%edx
0846d69b +0x19:  mov    %edx,0x4(%esp)
0846d69f +0x1d:  mov    %eax,(%esp)
0846d6a2 +0x20:  call   0807d7d0 <_init+0xc8>
0846d6a7 +0x25:  mov    0x8(%ebp),%eax
0846d6aa +0x28:  mov    %eax,0x8(%esp)
0846d6ae +0x2c:  mov    0xc(%ebp),%eax
0846d6b1 +0x2f:  mov    %eax,0x4(%esp)
0846d6b5 +0x33:  mov    0x8(%ebp),%eax
0846d6b8 +0x36:  mov    %eax,(%esp)
0846d6bb +0x39:  call   0846d640 <_ZN10CExceptLog13PrintTextFileEPcS0_>  ; CExceptLog::PrintTextFile(char*, char*)
0846d6c0 +0x3e:  leave
0846d6c1 +0x3f:  ret
```

## 反编译 C

```c
// CExceptLog::fPrintTextFile @ 0x846d682

/* CExceptLog::fPrintTextFile(char*, char*, ...) */

void __thiscall CExceptLog::fPrintTextFile(CExceptLog *this,char *param_1,char *param_2,...)

{
  vsprintf((char *)this,param_2,&stack0x00000010);
  PrintTextFile(this,param_1,(char *)this);
  return;
}
```
