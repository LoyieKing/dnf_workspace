# GetDouble

`_ZN11Arad_Script9GetDoubleEPcS0_`

`Arad_Script::GetDouble(char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c8e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c8e8  _ZN11Arad_Script9GetDoubleEPcS0_
#           Arad_Script::GetDouble(char*, char*)
# range [0x0817c8e8, 0x0817c92d]
0817c8e8 +0x00:  push   %ebp
0817c8e9 +0x01:  mov    %esp,%ebp
0817c8eb +0x03:  push   %ebx
0817c8ec +0x04:  sub    $0x14,%esp
0817c8ef +0x07:  mov    0x10(%ebp),%eax
0817c8f2 +0x0a:  mov    %eax,0x4(%esp)
0817c8f6 +0x0e:  mov    0x8(%ebp),%eax
0817c8f9 +0x11:  mov    %eax,(%esp)
0817c8fc +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c901 +0x19:  mov    %eax,%ebx
0817c903 +0x1b:  mov    0xc(%ebp),%eax
0817c906 +0x1e:  mov    %eax,0x4(%esp)
0817c90a +0x22:  mov    0x8(%ebp),%eax
0817c90d +0x25:  mov    %eax,(%esp)
0817c910 +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c915 +0x2d:  mov    %ebx,0x8(%esp)
0817c919 +0x31:  mov    %eax,0x4(%esp)
0817c91d +0x35:  mov    0x8(%ebp),%eax
0817c920 +0x38:  mov    %eax,(%esp)
0817c923 +0x3b:  call   0817c8b4 <_ZN11Arad_Script9GetDoubleEii>  ; Arad_Script::GetDouble(int, int)
0817c928 +0x40:  add    $0x14,%esp
0817c92b +0x43:  pop    %ebx
0817c92c +0x44:  pop    %ebp
0817c92d +0x45:  ret
```

## 反编译 C

```c
// Arad_Script::GetDouble @ 0x817c8e8

/* Arad_Script::GetDouble(char*, char*) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetDouble(this,iVar2,iVar1);
  return;
}
```
