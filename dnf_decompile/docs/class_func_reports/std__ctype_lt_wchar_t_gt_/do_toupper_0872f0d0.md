# do_toupper

`_ZNKSt5ctypeIwE10do_toupperEw`

`std::ctype<wchar_t>::do_toupper(wchar_t) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f0d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f0d0  _ZNKSt5ctypeIwE10do_toupperEw
#           std::ctype<wchar_t>::do_toupper(wchar_t) const
# range [0x0872f0d0, 0x0872f0ef]
0872f0d0 +0x00:  push   %ebp
0872f0d1 +0x01:  mov    %esp,%ebp
0872f0d3 +0x03:  sub    $0x8,%esp
0872f0d6 +0x06:  mov    0x8(%ebp),%edx
0872f0d9 +0x09:  mov    0xc(%ebp),%eax
0872f0dc +0x0c:  mov    0x8(%edx),%edx
0872f0df +0x0f:  mov    %eax,0x8(%ebp)
0872f0e2 +0x12:  mov    %edx,0xc(%ebp)
0872f0e5 +0x15:  leave
0872f0e6 +0x16:  jmp    0807dff0 <_init+0x8e8>
0872f0eb +0x1b:  nop
0872f0ec +0x1c:  nop
0872f0ed +0x1d:  nop
0872f0ee +0x1e:  nop
0872f0ef +0x1f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_toupper @ 0x872f0d0

/* std::ctype<wchar_t>::do_toupper(wchar_t) const */

void std::ctype<wchar_t>::do_toupper(wchar_t param_1)

{
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(param_1 + L'\b');
  __towupper_l();
  return;
}
```
