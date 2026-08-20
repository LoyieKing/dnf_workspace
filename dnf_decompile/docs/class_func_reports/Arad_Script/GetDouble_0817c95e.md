# GetDouble

`_ZN11Arad_Script9GetDoubleEiPc`

`Arad_Script::GetDouble(int, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c95e  _ZN11Arad_Script9GetDoubleEiPc
#           Arad_Script::GetDouble(int, char*)
# range [0x0817c95e, 0x0817c98d]
0817c95e +0x00:  push   %ebp
0817c95f +0x01:  mov    %esp,%ebp
0817c961 +0x03:  sub    $0x18,%esp
0817c964 +0x06:  mov    0x10(%ebp),%eax
0817c967 +0x09:  mov    %eax,0x4(%esp)
0817c96b +0x0d:  mov    0x8(%ebp),%eax
0817c96e +0x10:  mov    %eax,(%esp)
0817c971 +0x13:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c976 +0x18:  mov    %eax,0x8(%esp)
0817c97a +0x1c:  mov    0xc(%ebp),%eax
0817c97d +0x1f:  mov    %eax,0x4(%esp)
0817c981 +0x23:  mov    0x8(%ebp),%eax
0817c984 +0x26:  mov    %eax,(%esp)
0817c987 +0x29:  call   0817c8b4 <_ZN11Arad_Script9GetDoubleEii>  ; Arad_Script::GetDouble(int, int)
0817c98c +0x2e:  leave
0817c98d +0x2f:  ret
```

## 反编译 C

```c
// Arad_Script::GetDouble @ 0x817c95e

/* Arad_Script::GetDouble(int, char*) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  GetDouble(this,param_1,iVar1);
  return;
}
```
