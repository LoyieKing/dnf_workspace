# do_toupper

`_ZNKSt5ctypeIcE10do_toupperEc`

`std::ctype<char>::do_toupper(char) const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726690  _ZNKSt5ctypeIcE10do_toupperEc
#           std::ctype<char>::do_toupper(char) const
# range [0x08726690, 0x087266af]
08726690 +0x00:  push   %ebp
08726691 +0x01:  mov    %esp,%ebp
08726693 +0x03:  mov    0x8(%ebp),%eax
08726696 +0x06:  movzbl 0xc(%ebp),%edx
0872669a +0x0a:  pop    %ebp
0872669b +0x0b:  mov    0x10(%eax),%eax
0872669e +0x0e:  mov    (%eax,%edx,4),%eax
087266a1 +0x11:  ret
087266a2 +0x12:  nop
087266a3 +0x13:  nop
087266a4 +0x14:  nop
087266a5 +0x15:  nop
087266a6 +0x16:  nop
087266a7 +0x17:  nop
087266a8 +0x18:  nop
087266a9 +0x19:  nop
087266aa +0x1a:  nop
087266ab +0x1b:  nop
087266ac +0x1c:  nop
087266ad +0x1d:  nop
087266ae +0x1e:  nop
087266af +0x1f:  nop
```

## 反编译 C

```c
// std::ctype<char>::do_toupper @ 0x8726690

/* std::ctype<char>::do_toupper(char) const */

undefined4 __thiscall std::ctype<char>::do_toupper(ctype<char> *this,char param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x10) + (uint)(byte)param_1 * 4);
}
```
