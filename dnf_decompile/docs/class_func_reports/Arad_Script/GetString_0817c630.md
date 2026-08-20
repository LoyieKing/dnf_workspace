# GetString

`_ZN11Arad_Script9GetStringEPcS0_`

`Arad_Script::GetString(char*, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c630  _ZN11Arad_Script9GetStringEPcS0_
#           Arad_Script::GetString(char*, char*)
# range [0x0817c630, 0x0817c675]
0817c630 +0x00:  push   %ebp
0817c631 +0x01:  mov    %esp,%ebp
0817c633 +0x03:  push   %ebx
0817c634 +0x04:  sub    $0x14,%esp
0817c637 +0x07:  mov    0x10(%ebp),%eax
0817c63a +0x0a:  mov    %eax,0x4(%esp)
0817c63e +0x0e:  mov    0x8(%ebp),%eax
0817c641 +0x11:  mov    %eax,(%esp)
0817c644 +0x14:  call   0817c44e <_ZN11Arad_Script10GetIdx4ColEPc>  ; Arad_Script::GetIdx4Col(char*)
0817c649 +0x19:  mov    %eax,%ebx
0817c64b +0x1b:  mov    0xc(%ebp),%eax
0817c64e +0x1e:  mov    %eax,0x4(%esp)
0817c652 +0x22:  mov    0x8(%ebp),%eax
0817c655 +0x25:  mov    %eax,(%esp)
0817c658 +0x28:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c65d +0x2d:  mov    %ebx,0x8(%esp)
0817c661 +0x31:  mov    %eax,0x4(%esp)
0817c665 +0x35:  mov    0x8(%ebp),%eax
0817c668 +0x38:  mov    %eax,(%esp)
0817c66b +0x3b:  call   0817c60e <_ZN11Arad_Script9GetStringEii>  ; Arad_Script::GetString(int, int)
0817c670 +0x40:  add    $0x14,%esp
0817c673 +0x43:  pop    %ebx
0817c674 +0x44:  pop    %ebp
0817c675 +0x45:  ret
```

## 反编译 C

```c
// Arad_Script::GetString @ 0x817c630

/* Arad_Script::GetString(char*, char*) */

void __thiscall Arad_Script::GetString(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetString(this,iVar2,iVar1);
  return;
}
```
