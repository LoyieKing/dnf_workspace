# GetInt

`_ZN11Arad_Script6GetIntEPcS0_`

`Arad_Script::GetInt(char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c70a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c70a  _ZN11Arad_Script6GetIntEPcS0_
#           Arad_Script::GetInt(char*, char*)
# range [0x0817c70a, 0x0817c74f]
0817c70a +0x00:  push   %ebp
0817c70b +0x01:  mov    %esp,%ebp
0817c70d +0x03:  push   %ebx
0817c70e +0x04:  sub    $0x14,%esp
0817c711 +0x07:  mov    0x10(%ebp),%eax
0817c714 +0x0a:  mov    %eax,0x4(%esp)
0817c718 +0x0e:  mov    0x8(%ebp),%eax
0817c71b +0x11:  mov    %eax,(%esp)
0817c71e +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c723 +0x19:  mov    %eax,%ebx
0817c725 +0x1b:  mov    0xc(%ebp),%eax
0817c728 +0x1e:  mov    %eax,0x4(%esp)
0817c72c +0x22:  mov    0x8(%ebp),%eax
0817c72f +0x25:  mov    %eax,(%esp)
0817c732 +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c737 +0x2d:  mov    %ebx,0x8(%esp)
0817c73b +0x31:  mov    %eax,0x4(%esp)
0817c73f +0x35:  mov    0x8(%ebp),%eax
0817c742 +0x38:  mov    %eax,(%esp)
0817c745 +0x3b:  call   0817c6d6 <_ZN11Arad_Script6GetIntEii>  ; Arad_Script::GetInt(int, int)
0817c74a +0x40:  add    $0x14,%esp
0817c74d +0x43:  pop    %ebx
0817c74e +0x44:  pop    %ebp
0817c74f +0x45:  ret
```

## 反编译 C

```c
// Arad_Script::GetInt @ 0x817c70a

/* Arad_Script::GetInt(char*, char*) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetInt(this,iVar2,iVar1);
  return;
}
```
