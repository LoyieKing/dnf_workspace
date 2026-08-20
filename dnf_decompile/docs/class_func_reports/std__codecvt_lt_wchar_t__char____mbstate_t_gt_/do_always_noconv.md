# do_always_noconv

`_ZNKSt7codecvtIwc11__mbstate_tE16do_always_noconvEv`

`std::codecvt<wchar_t, char, __mbstate_t>::do_always_noconv() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x08726040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726040  _ZNKSt7codecvtIwc11__mbstate_tE16do_always_noconvEv
#           std::codecvt<wchar_t, char, __mbstate_t>::do_always_noconv() const
# range [0x08726040, 0x0872604f]
08726040 +0x00:  push   %ebp
08726041 +0x01:  xor    %eax,%eax
08726043 +0x03:  mov    %esp,%ebp
08726045 +0x05:  pop    %ebp
08726046 +0x06:  ret
08726047 +0x07:  nop
08726048 +0x08:  nop
08726049 +0x09:  nop
0872604a +0x0a:  nop
0872604b +0x0b:  nop
0872604c +0x0c:  nop
0872604d +0x0d:  nop
0872604e +0x0e:  nop
0872604f +0x0f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x8726040

/* std::codecvt<wchar_t, char, __mbstate_t>::do_always_noconv() const */

undefined4 std::codecvt<wchar_t,char,__mbstate_t>::do_always_noconv(void)

{
  return 0;
}
```
