# SetString

`_ZN11Arad_Script9SetStringEiPcS0_`

`Arad_Script::SetString(int, char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817ca48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ca48  _ZN11Arad_Script9SetStringEiPcS0_
#           Arad_Script::SetString(int, char*, char*)
# range [0x0817ca48, 0x0817ca7f]
0817ca48 +0x00:  push   %ebp
0817ca49 +0x01:  mov    %esp,%ebp
0817ca4b +0x03:  sub    $0x18,%esp
0817ca4e +0x06:  mov    0x10(%ebp),%eax
0817ca51 +0x09:  mov    %eax,0x4(%esp)
0817ca55 +0x0d:  mov    0x8(%ebp),%eax
0817ca58 +0x10:  mov    %eax,(%esp)
0817ca5b +0x13:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817ca60 +0x18:  mov    0x14(%ebp),%edx
0817ca63 +0x1b:  mov    %edx,0xc(%esp)
0817ca67 +0x1f:  mov    %eax,0x8(%esp)
0817ca6b +0x23:  mov    0xc(%ebp),%eax
0817ca6e +0x26:  mov    %eax,0x4(%esp)
0817ca72 +0x2a:  mov    0x8(%ebp),%eax
0817ca75 +0x2d:  mov    %eax,(%esp)
0817ca78 +0x30:  call   0817c98e <_ZN11Arad_Script9SetStringEiiPc>  ; Arad_Script::SetString(int, int, char*)
0817ca7d +0x35:  leave
0817ca7e +0x36:  ret
0817ca7f +0x37:  nop
```

## 反编译 C

```c
// Arad_Script::SetString @ 0x817ca48

/* Arad_Script::SetString(int, char*, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,int param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  SetString(this,param_1,iVar1,param_3);
  return;
}
```
