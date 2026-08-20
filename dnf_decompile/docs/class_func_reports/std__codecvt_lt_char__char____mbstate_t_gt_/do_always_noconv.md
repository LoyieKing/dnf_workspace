# do_always_noconv

`_ZNKSt7codecvtIcc11__mbstate_tE16do_always_noconvEv`

`std::codecvt<char, char, __mbstate_t>::do_always_noconv() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725fe0  _ZNKSt7codecvtIcc11__mbstate_tE16do_always_noconvEv
#           std::codecvt<char, char, __mbstate_t>::do_always_noconv() const
# range [0x08725fe0, 0x08725fef]
08725fe0 +0x00:  push   %ebp
08725fe1 +0x01:  mov    $0x1,%eax
08725fe6 +0x06:  mov    %esp,%ebp
08725fe8 +0x08:  pop    %ebp
08725fe9 +0x09:  ret
08725fea +0x0a:  nop
08725feb +0x0b:  nop
08725fec +0x0c:  nop
08725fed +0x0d:  nop
08725fee +0x0e:  nop
08725fef +0x0f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725fe0

/* std::codecvt<char, char, __mbstate_t>::do_always_noconv() const */

undefined4 std::codecvt<char,char,__mbstate_t>::do_always_noconv(void)

{
  return 1;
}
```
