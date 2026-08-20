# GetFloat

`_ZN11Arad_Script8GetFloatEPci`

`Arad_Script::GetFloat(char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c83c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c83c  _ZN11Arad_Script8GetFloatEPci
#           Arad_Script::GetFloat(char*, int)
# range [0x0817c83c, 0x0817c877]
0817c83c +0x00:  push   %ebp
0817c83d +0x01:  mov    %esp,%ebp
0817c83f +0x03:  sub    $0x28,%esp
0817c842 +0x06:  mov    0xc(%ebp),%eax
0817c845 +0x09:  mov    %eax,0x4(%esp)
0817c849 +0x0d:  mov    0x8(%ebp),%eax
0817c84c +0x10:  mov    %eax,(%esp)
0817c84f +0x13:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c854 +0x18:  mov    0x10(%ebp),%edx
0817c857 +0x1b:  mov    %edx,0x8(%esp)
0817c85b +0x1f:  mov    %eax,0x4(%esp)
0817c85f +0x23:  mov    0x8(%ebp),%eax
0817c862 +0x26:  mov    %eax,(%esp)
0817c865 +0x29:  call   0817c7b0 <_ZN11Arad_Script8GetFloatEii>  ; Arad_Script::GetFloat(int, int)
0817c86a +0x2e:  fstps  -0xc(%ebp)
0817c86d +0x31:  mov    -0xc(%ebp),%eax
0817c870 +0x34:  mov    %eax,-0xc(%ebp)
0817c873 +0x37:  flds   -0xc(%ebp)
0817c876 +0x3a:  leave
0817c877 +0x3b:  ret
```

## 反编译 C

```c
// Arad_Script::GetFloat @ 0x817c83c

/* Arad_Script::GetFloat(char*, int) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = GetIdx4Row(this,param_1);
  lVar2 = (longdouble)GetFloat(this,iVar1,param_2);
  return (longdouble)(float)lVar2;
}
```
