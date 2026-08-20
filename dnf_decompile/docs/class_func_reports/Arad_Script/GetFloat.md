# GetFloat

`_ZN11Arad_Script8GetFloatEii`

`Arad_Script::GetFloat(int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c7b0  _ZN11Arad_Script8GetFloatEii
#           Arad_Script::GetFloat(int, int)
# range [0x0817c7b0, 0x0817c7e9]
0817c7b0 +0x00:  push   %ebp
0817c7b1 +0x01:  mov    %esp,%ebp
0817c7b3 +0x03:  sub    $0x38,%esp
0817c7b6 +0x06:  mov    0x8(%ebp),%eax
0817c7b9 +0x09:  mov    0x14(%eax),%edx
0817c7bc +0x0c:  mov    0x8(%ebp),%eax
0817c7bf +0x0f:  mov    (%eax),%eax
0817c7c1 +0x11:  imul   0xc(%ebp),%eax
0817c7c5 +0x15:  mov    %eax,%ecx
0817c7c7 +0x17:  mov    0x10(%ebp),%eax
0817c7ca +0x1a:  lea    (%ecx,%eax,1),%eax
0817c7cd +0x1d:  shl    $0x7,%eax
0817c7d0 +0x20:  lea    (%edx,%eax,1),%eax
0817c7d3 +0x23:  mov    %eax,-0xc(%ebp)
0817c7d6 +0x26:  mov    -0xc(%ebp),%eax
0817c7d9 +0x29:  mov    %eax,(%esp)
0817c7dc +0x2c:  call   0807e500 <_init+0xdf8>
0817c7e1 +0x31:  fstps  -0x1c(%ebp)
0817c7e4 +0x34:  flds   -0x1c(%ebp)
0817c7e7 +0x37:  leave
0817c7e8 +0x38:  ret
0817c7e9 +0x39:  nop
```

## 反编译 C

```c
// Arad_Script::GetFloat @ 0x817c7b0

/* Arad_Script::GetFloat(int, int) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return (longdouble)(float)dVar1;
}
```
