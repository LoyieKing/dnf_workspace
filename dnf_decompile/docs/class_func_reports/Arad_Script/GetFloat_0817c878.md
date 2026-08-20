# GetFloat

`_ZN11Arad_Script8GetFloatEiPc`

`Arad_Script::GetFloat(int, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c878  _ZN11Arad_Script8GetFloatEiPc
#           Arad_Script::GetFloat(int, char*)
# range [0x0817c878, 0x0817c8b3]
0817c878 +0x00:  push   %ebp
0817c879 +0x01:  mov    %esp,%ebp
0817c87b +0x03:  sub    $0x28,%esp
0817c87e +0x06:  mov    0x10(%ebp),%eax
0817c881 +0x09:  mov    %eax,0x4(%esp)
0817c885 +0x0d:  mov    0x8(%ebp),%eax
0817c888 +0x10:  mov    %eax,(%esp)
0817c88b +0x13:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c890 +0x18:  mov    %eax,0x8(%esp)
0817c894 +0x1c:  mov    0xc(%ebp),%eax
0817c897 +0x1f:  mov    %eax,0x4(%esp)
0817c89b +0x23:  mov    0x8(%ebp),%eax
0817c89e +0x26:  mov    %eax,(%esp)
0817c8a1 +0x29:  call   0817c7b0 <_ZN11Arad_Script8GetFloatEii>  ; Arad_Script::GetFloat(int, int)
0817c8a6 +0x2e:  fstps  -0xc(%ebp)
0817c8a9 +0x31:  mov    -0xc(%ebp),%eax
0817c8ac +0x34:  mov    %eax,-0xc(%ebp)
0817c8af +0x37:  flds   -0xc(%ebp)
0817c8b2 +0x3a:  leave
0817c8b3 +0x3b:  ret
```

## 反编译 C

```c
// Arad_Script::GetFloat @ 0x817c878

/* Arad_Script::GetFloat(int, char*) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  lVar2 = (longdouble)GetFloat(this,param_1,iVar1);
  return (longdouble)(float)lVar2;
}
```
