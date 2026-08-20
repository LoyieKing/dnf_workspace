# _M_setstate

`_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4`

`std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]`

| 类 | 地址 |
|---|---|
| `std::basic_ios<wchar_t, std::char_traits<wchar_t> >` | `0x086e73f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e73f0  _ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4
#           std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
# range [0x086e73f0, 0x086e740f]
086e73f0 +0x00:  push   %ebp
086e73f1 +0x01:  mov    %esp,%ebp
086e73f3 +0x03:  sub    $0x8,%esp
086e73f6 +0x06:  orl    $0x1,0x14(%eax)
086e73fa +0x0a:  testb  $0x1,0x10(%eax)
086e73fe +0x0e:  jne    086e7402 <+0x12>
086e7400 +0x10:  leave
086e7401 +0x11:  ret
086e7402 +0x12:  call   08724be0 <__cxa_rethrow>
086e7407 +0x17:  nop
086e7408 +0x18:  nop
086e7409 +0x19:  nop
086e740a +0x1a:  nop
086e740b +0x1b:  nop
086e740c +0x1c:  nop
086e740d +0x1d:  nop
086e740e +0x1e:  nop
086e740f +0x1f:  nop
```

## 反编译 C

```c
// std::basic_ios<wchar_t, @ 0x86e73f0

/* std::wios::_M_setstate(std::_Ios_Iostate) [clone .clone.4] */

void __regparm3 std::wios::_M_setstate(_Ios_Iostate param_1)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}
```
