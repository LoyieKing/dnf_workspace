# GetString

`_ZN11Arad_Script9GetStringEPci`

`Arad_Script::GetString(char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c676  _ZN11Arad_Script9GetStringEPci
#           Arad_Script::GetString(char*, int)
# range [0x0817c676, 0x0817c6a5]
0817c676 +0x00:  push   %ebp
0817c677 +0x01:  mov    %esp,%ebp
0817c679 +0x03:  sub    $0x18,%esp
0817c67c +0x06:  mov    0xc(%ebp),%eax
0817c67f +0x09:  mov    %eax,0x4(%esp)
0817c683 +0x0d:  mov    0x8(%ebp),%eax
0817c686 +0x10:  mov    %eax,(%esp)
0817c689 +0x13:  call   0817c52e <_ZN11Arad_Script10GetIdx4RowEPc>  ; Arad_Script::GetIdx4Row(char*)
0817c68e +0x18:  mov    0x10(%ebp),%edx
0817c691 +0x1b:  mov    %edx,0x8(%esp)
0817c695 +0x1f:  mov    %eax,0x4(%esp)
0817c699 +0x23:  mov    0x8(%ebp),%eax
0817c69c +0x26:  mov    %eax,(%esp)
0817c69f +0x29:  call   0817c60e <_ZN11Arad_Script9GetStringEii>  ; Arad_Script::GetString(int, int)
0817c6a4 +0x2e:  leave
0817c6a5 +0x2f:  ret
```

## 反编译 C

```c
// Arad_Script::GetString @ 0x817c676

/* Arad_Script::GetString(char*, int) */

void __thiscall Arad_Script::GetString(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  GetString(this,iVar1,param_2);
  return;
}
```
