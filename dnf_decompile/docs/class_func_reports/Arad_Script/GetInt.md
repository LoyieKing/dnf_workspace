# GetInt

`_ZN11Arad_Script6GetIntEii`

`Arad_Script::GetInt(int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c6d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c6d6  _ZN11Arad_Script6GetIntEii
#           Arad_Script::GetInt(int, int)
# range [0x0817c6d6, 0x0817c709]
0817c6d6 +0x00:  push   %ebp
0817c6d7 +0x01:  mov    %esp,%ebp
0817c6d9 +0x03:  sub    $0x28,%esp
0817c6dc +0x06:  mov    0x8(%ebp),%eax
0817c6df +0x09:  mov    0x14(%eax),%edx
0817c6e2 +0x0c:  mov    0x8(%ebp),%eax
0817c6e5 +0x0f:  mov    (%eax),%eax
0817c6e7 +0x11:  imul   0xc(%ebp),%eax
0817c6eb +0x15:  mov    %eax,%ecx
0817c6ed +0x17:  mov    0x10(%ebp),%eax
0817c6f0 +0x1a:  lea    (%ecx,%eax,1),%eax
0817c6f3 +0x1d:  shl    $0x7,%eax
0817c6f6 +0x20:  lea    (%edx,%eax,1),%eax
0817c6f9 +0x23:  mov    %eax,-0xc(%ebp)
0817c6fc +0x26:  mov    -0xc(%ebp),%eax
0817c6ff +0x29:  mov    %eax,(%esp)
0817c702 +0x2c:  call   0807e6f0 <_init+0xfe8>
0817c707 +0x31:  leave
0817c708 +0x32:  ret
0817c709 +0x33:  nop
```

## 反编译 C

```c
// Arad_Script::GetInt @ 0x817c6d6

/* Arad_Script::GetInt(int, int) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,int param_1,int param_2)

{
  atoi((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return;
}
```
