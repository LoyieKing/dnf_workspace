# GetString

`_ZN11Arad_Script9GetStringEii`

`Arad_Script::GetString(int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c60e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c60e  _ZN11Arad_Script9GetStringEii
#           Arad_Script::GetString(int, int)
# range [0x0817c60e, 0x0817c62f]
0817c60e +0x00:  push   %ebp
0817c60f +0x01:  mov    %esp,%ebp
0817c611 +0x03:  mov    0x8(%ebp),%eax
0817c614 +0x06:  mov    0x14(%eax),%edx
0817c617 +0x09:  mov    0x8(%ebp),%eax
0817c61a +0x0c:  mov    (%eax),%eax
0817c61c +0x0e:  imul   0xc(%ebp),%eax
0817c620 +0x12:  mov    %eax,%ecx
0817c622 +0x14:  mov    0x10(%ebp),%eax
0817c625 +0x17:  lea    (%ecx,%eax,1),%eax
0817c628 +0x1a:  shl    $0x7,%eax
0817c62b +0x1d:  lea    (%edx,%eax,1),%eax
0817c62e +0x20:  pop    %ebp
0817c62f +0x21:  ret
```

## 反编译 C

```c
// Arad_Script::GetString @ 0x817c60e

/* Arad_Script::GetString(int, int) */

int __thiscall Arad_Script::GetString(Arad_Script *this,int param_1,int param_2)

{
  return *(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80;
}
```
