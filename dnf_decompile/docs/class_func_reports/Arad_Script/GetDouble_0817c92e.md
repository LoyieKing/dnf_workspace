# GetDouble

`_ZN11Arad_Script9GetDoubleEPci`

`Arad_Script::GetDouble(char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c92e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c92e  _ZN11Arad_Script9GetDoubleEPci
#           Arad_Script::GetDouble(char*, int)
# range [0x0817c92e, 0x0817c95d]
0817c92e +0x00:  push   %ebp
0817c92f +0x01:  mov    %esp,%ebp
0817c931 +0x03:  sub    $0x18,%esp
0817c934 +0x06:  mov    0xc(%ebp),%eax
0817c937 +0x09:  mov    %eax,0x4(%esp)
0817c93b +0x0d:  mov    0x8(%ebp),%eax
0817c93e +0x10:  mov    %eax,(%esp)
0817c941 +0x13:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c946 +0x18:  mov    0x10(%ebp),%edx
0817c949 +0x1b:  mov    %edx,0x8(%esp)
0817c94d +0x1f:  mov    %eax,0x4(%esp)
0817c951 +0x23:  mov    0x8(%ebp),%eax
0817c954 +0x26:  mov    %eax,(%esp)
0817c957 +0x29:  call   0817c8b4 <_ZN11Arad_Script9GetDoubleEii>  ; Arad_Script::GetDouble(int, int)
0817c95c +0x2e:  leave
0817c95d +0x2f:  ret
```

## 反编译 C

```c
// Arad_Script::GetDouble @ 0x817c92e

/* Arad_Script::GetDouble(char*, int) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  GetDouble(this,iVar1,param_2);
  return;
}
```
