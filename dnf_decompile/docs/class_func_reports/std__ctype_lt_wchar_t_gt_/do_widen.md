# do_widen

`_ZNKSt5ctypeIwE8do_widenEc`

`std::ctype<wchar_t>::do_widen(char) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872ed60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872ed60  _ZNKSt5ctypeIwE8do_widenEc
#           std::ctype<wchar_t>::do_widen(char) const
# range [0x0872ed60, 0x0872ed7f]
0872ed60 +0x00:  push   %ebp
0872ed61 +0x01:  mov    %esp,%ebp
0872ed63 +0x03:  movzbl 0xc(%ebp),%edx
0872ed67 +0x07:  mov    0x8(%ebp),%eax
0872ed6a +0x0a:  pop    %ebp
0872ed6b +0x0b:  mov    0x90(%eax,%edx,4),%eax
0872ed72 +0x12:  ret
0872ed73 +0x13:  nop
0872ed74 +0x14:  nop
0872ed75 +0x15:  nop
0872ed76 +0x16:  nop
0872ed77 +0x17:  nop
0872ed78 +0x18:  nop
0872ed79 +0x19:  nop
0872ed7a +0x1a:  nop
0872ed7b +0x1b:  nop
0872ed7c +0x1c:  nop
0872ed7d +0x1d:  nop
0872ed7e +0x1e:  nop
0872ed7f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_widen @ 0x872ed60

/* std::ctype<wchar_t>::do_widen(char) const */

undefined4 __thiscall std::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char param_1)

{
  return *(undefined4 *)(this + (uint)(byte)param_1 * 4 + 0x90);
}
```
