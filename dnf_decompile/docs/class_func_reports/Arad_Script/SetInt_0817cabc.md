# SetInt

`_ZN11Arad_Script6SetIntEPcS0_i`

`Arad_Script::SetInt(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817cabc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817cabc  _ZN11Arad_Script6SetIntEPcS0_i
#           Arad_Script::SetInt(char*, char*, int)
# range [0x0817cabc, 0x0817cb09]
0817cabc +0x00:  push   %ebp
0817cabd +0x01:  mov    %esp,%ebp
0817cabf +0x03:  push   %ebx
0817cac0 +0x04:  sub    $0x14,%esp
0817cac3 +0x07:  mov    0x10(%ebp),%eax
0817cac6 +0x0a:  mov    %eax,0x4(%esp)
0817caca +0x0e:  mov    0x8(%ebp),%eax
0817cacd +0x11:  mov    %eax,(%esp)
0817cad0 +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817cad5 +0x19:  mov    %eax,%ebx
0817cad7 +0x1b:  mov    0xc(%ebp),%eax
0817cada +0x1e:  mov    %eax,0x4(%esp)
0817cade +0x22:  mov    0x8(%ebp),%eax
0817cae1 +0x25:  mov    %eax,(%esp)
0817cae4 +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817cae9 +0x2d:  mov    0x14(%ebp),%edx
0817caec +0x30:  mov    %edx,0xc(%esp)
0817caf0 +0x34:  mov    %ebx,0x8(%esp)
0817caf4 +0x38:  mov    %eax,0x4(%esp)
0817caf8 +0x3c:  mov    0x8(%ebp),%eax
0817cafb +0x3f:  mov    %eax,(%esp)
0817cafe +0x42:  call   0817ca80 <_ZN11Arad_Script6SetIntEiii>  ; Arad_Script::SetInt(int, int, int)
0817cb03 +0x47:  add    $0x14,%esp
0817cb06 +0x4a:  pop    %ebx
0817cb07 +0x4b:  pop    %ebp
0817cb08 +0x4c:  ret
0817cb09 +0x4d:  nop
```

## 反编译 C

```c
// Arad_Script::SetInt @ 0x817cabc

/* Arad_Script::SetInt(char*, char*, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  SetInt(this,iVar2,iVar1,param_3);
  return;
}
```
