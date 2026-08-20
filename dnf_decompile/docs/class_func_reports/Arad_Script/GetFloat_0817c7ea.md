# GetFloat

`_ZN11Arad_Script8GetFloatEPcS0_`

`Arad_Script::GetFloat(char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c7ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c7ea  _ZN11Arad_Script8GetFloatEPcS0_
#           Arad_Script::GetFloat(char*, char*)
# range [0x0817c7ea, 0x0817c83b]
0817c7ea +0x00:  push   %ebp
0817c7eb +0x01:  mov    %esp,%ebp
0817c7ed +0x03:  push   %ebx
0817c7ee +0x04:  sub    $0x24,%esp
0817c7f1 +0x07:  mov    0x10(%ebp),%eax
0817c7f4 +0x0a:  mov    %eax,0x4(%esp)
0817c7f8 +0x0e:  mov    0x8(%ebp),%eax
0817c7fb +0x11:  mov    %eax,(%esp)
0817c7fe +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c803 +0x19:  mov    %eax,%ebx
0817c805 +0x1b:  mov    0xc(%ebp),%eax
0817c808 +0x1e:  mov    %eax,0x4(%esp)
0817c80c +0x22:  mov    0x8(%ebp),%eax
0817c80f +0x25:  mov    %eax,(%esp)
0817c812 +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c817 +0x2d:  mov    %ebx,0x8(%esp)
0817c81b +0x31:  mov    %eax,0x4(%esp)
0817c81f +0x35:  mov    0x8(%ebp),%eax
0817c822 +0x38:  mov    %eax,(%esp)
0817c825 +0x3b:  call   0817c7b0 <_ZN11Arad_Script8GetFloatEii>  ; Arad_Script::GetFloat(int, int)
0817c82a +0x40:  fstps  -0xc(%ebp)
0817c82d +0x43:  mov    -0xc(%ebp),%eax
0817c830 +0x46:  mov    %eax,-0xc(%ebp)
0817c833 +0x49:  flds   -0xc(%ebp)
0817c836 +0x4c:  add    $0x24,%esp
0817c839 +0x4f:  pop    %ebx
0817c83a +0x50:  pop    %ebp
0817c83b +0x51:  ret
```

## 反编译 C

```c
// Arad_Script::GetFloat @ 0x817c7ea

/* Arad_Script::GetFloat(char*, char*) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  lVar3 = (longdouble)GetFloat(this,iVar2,iVar1);
  return (longdouble)(float)lVar3;
}
```
