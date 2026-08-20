# do_tolower

`_ZNKSt5ctypeIcE10do_tolowerEc`

`std::ctype<char>::do_tolower(char) const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x087266e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087266e0  _ZNKSt5ctypeIcE10do_tolowerEc
#           std::ctype<char>::do_tolower(char) const
# range [0x087266e0, 0x087266ff]
087266e0 +0x00:  push   %ebp
087266e1 +0x01:  mov    %esp,%ebp
087266e3 +0x03:  mov    0x8(%ebp),%eax
087266e6 +0x06:  movzbl 0xc(%ebp),%edx
087266ea +0x0a:  pop    %ebp
087266eb +0x0b:  mov    0x14(%eax),%eax
087266ee +0x0e:  mov    (%eax,%edx,4),%eax
087266f1 +0x11:  ret
087266f2 +0x12:  nop
087266f3 +0x13:  nop
087266f4 +0x14:  nop
087266f5 +0x15:  nop
087266f6 +0x16:  nop
087266f7 +0x17:  nop
087266f8 +0x18:  nop
087266f9 +0x19:  nop
087266fa +0x1a:  nop
087266fb +0x1b:  nop
087266fc +0x1c:  nop
087266fd +0x1d:  nop
087266fe +0x1e:  nop
087266ff +0x1f:  nop
```

## 反编译 C

```c
// std::ctype<char>::do_tolower @ 0x87266e0

/* std::ctype<char>::do_tolower(char) const */

undefined4 __thiscall std::ctype<char>::do_tolower(ctype<char> *this,char param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x14) + (uint)(byte)param_1 * 4);
}
```
