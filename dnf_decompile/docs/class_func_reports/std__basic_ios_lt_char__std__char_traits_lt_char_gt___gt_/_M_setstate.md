# _M_setstate

`_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1`

`std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]`

| 类 | 地址 |
|---|---|
| `std::basic_ios<char, std::char_traits<char> >` | `0x086e73d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e73d0  _ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1
#           std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
# range [0x086e73d0, 0x086e73ef]
086e73d0 +0x00:  push   %ebp
086e73d1 +0x01:  mov    %esp,%ebp
086e73d3 +0x03:  sub    $0x8,%esp
086e73d6 +0x06:  orl    $0x1,0x14(%eax)
086e73da +0x0a:  testb  $0x1,0x10(%eax)
086e73de +0x0e:  jne    086e73e2 <+0x12>
086e73e0 +0x10:  leave
086e73e1 +0x11:  ret
086e73e2 +0x12:  call   08724be0 <__cxa_rethrow>
086e73e7 +0x17:  nop
086e73e8 +0x18:  nop
086e73e9 +0x19:  nop
086e73ea +0x1a:  nop
086e73eb +0x1b:  nop
086e73ec +0x1c:  nop
086e73ed +0x1d:  nop
086e73ee +0x1e:  nop
086e73ef +0x1f:  nop
```

## 反编译 C

```c
// std::basic_ios<char, @ 0x86e73d0

/* std::ios::_M_setstate(std::_Ios_Iostate) [clone .clone.1] */

void __regparm3 std::ios::_M_setstate(_Ios_Iostate param_1)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}
```
