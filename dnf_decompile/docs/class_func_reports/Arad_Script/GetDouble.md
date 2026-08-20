# GetDouble

`_ZN11Arad_Script9GetDoubleEii`

`Arad_Script::GetDouble(int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c8b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c8b4  _ZN11Arad_Script9GetDoubleEii
#           Arad_Script::GetDouble(int, int)
# range [0x0817c8b4, 0x0817c8e7]
0817c8b4 +0x00:  push   %ebp
0817c8b5 +0x01:  mov    %esp,%ebp
0817c8b7 +0x03:  sub    $0x28,%esp
0817c8ba +0x06:  mov    0x8(%ebp),%eax
0817c8bd +0x09:  mov    0x14(%eax),%edx
0817c8c0 +0x0c:  mov    0x8(%ebp),%eax
0817c8c3 +0x0f:  mov    (%eax),%eax
0817c8c5 +0x11:  imul   0xc(%ebp),%eax
0817c8c9 +0x15:  mov    %eax,%ecx
0817c8cb +0x17:  mov    0x10(%ebp),%eax
0817c8ce +0x1a:  lea    (%ecx,%eax,1),%eax
0817c8d1 +0x1d:  shl    $0x7,%eax
0817c8d4 +0x20:  lea    (%edx,%eax,1),%eax
0817c8d7 +0x23:  mov    %eax,-0xc(%ebp)
0817c8da +0x26:  mov    -0xc(%ebp),%eax
0817c8dd +0x29:  mov    %eax,(%esp)
0817c8e0 +0x2c:  call   0807e500 <_init+0xdf8>
0817c8e5 +0x31:  leave
0817c8e6 +0x32:  ret
0817c8e7 +0x33:  nop
```

## 反编译 C

```c
// Arad_Script::GetDouble @ 0x817c8b4

/* Arad_Script::GetDouble(int, int) */

longdouble __thiscall Arad_Script::GetDouble(Arad_Script *this,int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return (longdouble)dVar1;
}
```
