# SetInt

`_ZN11Arad_Script6SetIntEPcii`

`Arad_Script::SetInt(char*, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817cb0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817cb0a  _ZN11Arad_Script6SetIntEPcii
#           Arad_Script::SetInt(char*, int, int)
# range [0x0817cb0a, 0x0817cb41]
0817cb0a +0x00:  push   %ebp
0817cb0b +0x01:  mov    %esp,%ebp
0817cb0d +0x03:  sub    $0x18,%esp
0817cb10 +0x06:  mov    0xc(%ebp),%eax
0817cb13 +0x09:  mov    %eax,0x4(%esp)
0817cb17 +0x0d:  mov    0x8(%ebp),%eax
0817cb1a +0x10:  mov    %eax,(%esp)
0817cb1d +0x13:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817cb22 +0x18:  mov    0x14(%ebp),%edx
0817cb25 +0x1b:  mov    %edx,0xc(%esp)
0817cb29 +0x1f:  mov    0x10(%ebp),%edx
0817cb2c +0x22:  mov    %edx,0x8(%esp)
0817cb30 +0x26:  mov    %eax,0x4(%esp)
0817cb34 +0x2a:  mov    0x8(%ebp),%eax
0817cb37 +0x2d:  mov    %eax,(%esp)
0817cb3a +0x30:  call   0817ca80 <_ZN11Arad_Script6SetIntEiii>  ; Arad_Script::SetInt(int, int, int)
0817cb3f +0x35:  leave
0817cb40 +0x36:  ret
0817cb41 +0x37:  nop
```

## 反编译 C

```c
// Arad_Script::SetInt @ 0x817cb0a

/* Arad_Script::SetInt(char*, int, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  SetInt(this,iVar1,param_2,param_3);
  return;
}
```
