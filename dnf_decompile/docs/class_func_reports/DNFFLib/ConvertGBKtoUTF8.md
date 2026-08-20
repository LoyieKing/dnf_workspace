# ConvertGBKtoUTF8

`_ZN7DNFFLib16ConvertGBKtoUTF8EPcS0_`

`DNFFLib::ConvertGBKtoUTF8(char*, char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108d0e  _ZN7DNFFLib16ConvertGBKtoUTF8EPcS0_
#           DNFFLib::ConvertGBKtoUTF8(char*, char*)
# range [0x08108d0e, 0x08108d4a]
08108d0e +0x00:  push   %ebp
08108d0f +0x01:  mov    %esp,%ebp
08108d11 +0x03:  sub    $0x18,%esp
08108d14 +0x06:  mov    0xc(%ebp),%eax
08108d17 +0x09:  mov    %eax,0xc(%esp)
08108d1b +0x0d:  mov    0x8(%ebp),%eax
08108d1e +0x10:  mov    %eax,0x8(%esp)
08108d22 +0x14:  movl   $"UTF-8",0x4(%esp)
08108d2a +0x1c:  movl   $"GBK",(%esp)
08108d31 +0x23:  call   08108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>  ; DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
08108d36 +0x28:  xor    $0x1,%eax
08108d39 +0x2b:  test   %al,%al
08108d3b +0x2d:  je     08108d44 <+0x36>
08108d3d +0x2f:  mov    $0x0,%eax
08108d42 +0x34:  jmp    08108d49 <+0x3b>
08108d44 +0x36:  mov    $0x1,%eax
08108d49 +0x3b:  leave
08108d4a +0x3c:  ret
```

## 反编译 C

```c
// DNFFLib::ConvertGBKtoUTF8 @ 0x8108d0e

/* DNFFLib::ConvertGBKtoUTF8(char*, char*) */

bool DNFFLib::ConvertGBKtoUTF8(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CharacSetSwitch("GBK","UTF-8",param_1,param_2);
  return cVar1 == '\x01';
}
```
