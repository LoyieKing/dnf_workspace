# SetString

`_ZN11Arad_Script9SetStringEPcS0_S0_`

`Arad_Script::SetString(char*, char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c9c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c9c2  _ZN11Arad_Script9SetStringEPcS0_S0_
#           Arad_Script::SetString(char*, char*, char*)
# range [0x0817c9c2, 0x0817ca0f]
0817c9c2 +0x00:  push   %ebp
0817c9c3 +0x01:  mov    %esp,%ebp
0817c9c5 +0x03:  push   %ebx
0817c9c6 +0x04:  sub    $0x14,%esp
0817c9c9 +0x07:  mov    0x10(%ebp),%eax
0817c9cc +0x0a:  mov    %eax,0x4(%esp)
0817c9d0 +0x0e:  mov    0x8(%ebp),%eax
0817c9d3 +0x11:  mov    %eax,(%esp)
0817c9d6 +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c9db +0x19:  mov    %eax,%ebx
0817c9dd +0x1b:  mov    0xc(%ebp),%eax
0817c9e0 +0x1e:  mov    %eax,0x4(%esp)
0817c9e4 +0x22:  mov    0x8(%ebp),%eax
0817c9e7 +0x25:  mov    %eax,(%esp)
0817c9ea +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c9ef +0x2d:  mov    0x14(%ebp),%edx
0817c9f2 +0x30:  mov    %edx,0xc(%esp)
0817c9f6 +0x34:  mov    %ebx,0x8(%esp)
0817c9fa +0x38:  mov    %eax,0x4(%esp)
0817c9fe +0x3c:  mov    0x8(%ebp),%eax
0817ca01 +0x3f:  mov    %eax,(%esp)
0817ca04 +0x42:  call   0817c98e <_ZN11Arad_Script9SetStringEiiPc>  ; Arad_Script::SetString(int, int, char*)
0817ca09 +0x47:  add    $0x14,%esp
0817ca0c +0x4a:  pop    %ebx
0817ca0d +0x4b:  pop    %ebp
0817ca0e +0x4c:  ret
0817ca0f +0x4d:  nop
```

## 反编译 C

```c
// Arad_Script::SetString @ 0x817c9c2

/* Arad_Script::SetString(char*, char*, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  SetString(this,iVar2,iVar1,param_3);
  return;
}
```
