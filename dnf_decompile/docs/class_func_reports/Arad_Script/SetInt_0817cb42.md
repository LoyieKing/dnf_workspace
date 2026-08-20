# SetInt

`_ZN11Arad_Script6SetIntEiPci`

`Arad_Script::SetInt(int, char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817cb42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817cb42  _ZN11Arad_Script6SetIntEiPci
#           Arad_Script::SetInt(int, char*, int)
# range [0x0817cb42, 0x0817cb78]
0817cb42 +0x00:  push   %ebp
0817cb43 +0x01:  mov    %esp,%ebp
0817cb45 +0x03:  sub    $0x18,%esp
0817cb48 +0x06:  mov    0x10(%ebp),%eax
0817cb4b +0x09:  mov    %eax,0x4(%esp)
0817cb4f +0x0d:  mov    0x8(%ebp),%eax
0817cb52 +0x10:  mov    %eax,(%esp)
0817cb55 +0x13:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817cb5a +0x18:  mov    0x14(%ebp),%edx
0817cb5d +0x1b:  mov    %edx,0xc(%esp)
0817cb61 +0x1f:  mov    %eax,0x8(%esp)
0817cb65 +0x23:  mov    0xc(%ebp),%eax
0817cb68 +0x26:  mov    %eax,0x4(%esp)
0817cb6c +0x2a:  mov    0x8(%ebp),%eax
0817cb6f +0x2d:  mov    %eax,(%esp)
0817cb72 +0x30:  call   0817ca80 <_ZN11Arad_Script6SetIntEiii>  ; Arad_Script::SetInt(int, int, int)
0817cb77 +0x35:  leave
0817cb78 +0x36:  ret
```

## 反编译 C

```c
// Arad_Script::SetInt @ 0x817cb42

/* Arad_Script::SetInt(int, char*, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  SetInt(this,param_1,iVar1,param_3);
  return;
}
```
