# SetString

`_ZN11Arad_Script9SetStringEPciS0_`

`Arad_Script::SetString(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817ca10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ca10  _ZN11Arad_Script9SetStringEPciS0_
#           Arad_Script::SetString(char*, int, char*)
# range [0x0817ca10, 0x0817ca47]
0817ca10 +0x00:  push   %ebp
0817ca11 +0x01:  mov    %esp,%ebp
0817ca13 +0x03:  sub    $0x18,%esp
0817ca16 +0x06:  mov    0xc(%ebp),%eax
0817ca19 +0x09:  mov    %eax,0x4(%esp)
0817ca1d +0x0d:  mov    0x8(%ebp),%eax
0817ca20 +0x10:  mov    %eax,(%esp)
0817ca23 +0x13:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817ca28 +0x18:  mov    0x14(%ebp),%edx
0817ca2b +0x1b:  mov    %edx,0xc(%esp)
0817ca2f +0x1f:  mov    0x10(%ebp),%edx
0817ca32 +0x22:  mov    %edx,0x8(%esp)
0817ca36 +0x26:  mov    %eax,0x4(%esp)
0817ca3a +0x2a:  mov    0x8(%ebp),%eax
0817ca3d +0x2d:  mov    %eax,(%esp)
0817ca40 +0x30:  call   0817c98e <_ZN11Arad_Script9SetStringEiiPc>  ; Arad_Script::SetString(int, int, char*)
0817ca45 +0x35:  leave
0817ca46 +0x36:  ret
0817ca47 +0x37:  nop
```

## 反编译 C

```c
// Arad_Script::SetString @ 0x817ca10

/* Arad_Script::SetString(char*, int, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,char *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  SetString(this,iVar1,param_2,param_3);
  return;
}
```
