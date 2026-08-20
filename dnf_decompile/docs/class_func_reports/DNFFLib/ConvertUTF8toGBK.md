# ConvertUTF8toGBK

`_ZN7DNFFLib16ConvertUTF8toGBKEPcS0_`

`DNFFLib::ConvertUTF8toGBK(char*, char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108d4b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108d4b  _ZN7DNFFLib16ConvertUTF8toGBKEPcS0_
#           DNFFLib::ConvertUTF8toGBK(char*, char*)
# range [0x08108d4b, 0x08108d87]
08108d4b +0x00:  push   %ebp
08108d4c +0x01:  mov    %esp,%ebp
08108d4e +0x03:  sub    $0x18,%esp
08108d51 +0x06:  mov    0xc(%ebp),%eax
08108d54 +0x09:  mov    %eax,0xc(%esp)
08108d58 +0x0d:  mov    0x8(%ebp),%eax
08108d5b +0x10:  mov    %eax,0x8(%esp)
08108d5f +0x14:  movl   $"GBK",0x4(%esp)
08108d67 +0x1c:  movl   $"UTF-8",(%esp)
08108d6e +0x23:  call   08108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>  ; DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
08108d73 +0x28:  xor    $0x1,%eax
08108d76 +0x2b:  test   %al,%al
08108d78 +0x2d:  je     08108d81 <+0x36>
08108d7a +0x2f:  mov    $0x0,%eax
08108d7f +0x34:  jmp    08108d86 <+0x3b>
08108d81 +0x36:  mov    $0x1,%eax
08108d86 +0x3b:  leave
08108d87 +0x3c:  ret
```

## 反编译 C

```c
// DNFFLib::ConvertUTF8toGBK @ 0x8108d4b

/* DNFFLib::ConvertUTF8toGBK(char*, char*) */

bool DNFFLib::ConvertUTF8toGBK(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CharacSetSwitch("UTF-8","GBK",param_1,param_2);
  return cVar1 == '\x01';
}
```
