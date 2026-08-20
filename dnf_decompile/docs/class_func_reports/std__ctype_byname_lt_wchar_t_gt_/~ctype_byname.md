# ~ctype_byname

`_ZNSt12ctype_bynameIwED1Ev`

`std::ctype_byname<wchar_t>::~ctype_byname()`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<wchar_t>` | `0x087267f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087267f0  _ZNSt12ctype_bynameIwED1Ev
#           std::ctype_byname<wchar_t>::~ctype_byname()
# range [0x087267f0, 0x0872680f]
087267f0 +0x00:  push   %ebp
087267f1 +0x01:  mov    %esp,%ebp
087267f3 +0x03:  sub    $0x8,%esp
087267f6 +0x06:  mov    0x8(%ebp),%eax
087267f9 +0x09:  movl   $&_ZTVSt12ctype_bynameIwE+0x8,(%eax)
087267ff +0x0f:  leave
08726800 +0x10:  jmp    087267a0 <_ZNSt5ctypeIwED1Ev>  ; std::ctype<wchar_t>::~ctype()
08726805 +0x15:  nop
08726806 +0x16:  nop
08726807 +0x17:  nop
08726808 +0x18:  nop
08726809 +0x19:  nop
0872680a +0x1a:  nop
0872680b +0x1b:  nop
0872680c +0x1c:  nop
0872680d +0x1d:  nop
0872680e +0x1e:  nop
0872680f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype_byname<wchar_t>::~ctype_byname @ 0x87267f0

/* std::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__ctype_byname_08d01d48;
  ctype<wchar_t>::~ctype((ctype<wchar_t> *)this);
  return;
}
```
