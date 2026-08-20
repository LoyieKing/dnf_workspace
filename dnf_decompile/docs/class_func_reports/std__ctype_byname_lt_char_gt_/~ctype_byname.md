# ~ctype_byname

`_ZNSt12ctype_bynameIcED1Ev`

`std::ctype_byname<char>::~ctype_byname()`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<char>` | `0x0872f330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f330  _ZNSt12ctype_bynameIcED1Ev
#           std::ctype_byname<char>::~ctype_byname()
# range [0x0872f330, 0x0872f34f]
0872f330 +0x00:  push   %ebp
0872f331 +0x01:  mov    %esp,%ebp
0872f333 +0x03:  sub    $0x8,%esp
0872f336 +0x06:  mov    0x8(%ebp),%eax
0872f339 +0x09:  movl   $&_ZTVSt12ctype_bynameIcE+0x8,(%eax)
0872f33f +0x0f:  leave
0872f340 +0x10:  jmp    08726b20 <_ZNSt5ctypeIcED1Ev>  ; std::ctype<char>::~ctype()
0872f345 +0x15:  nop
0872f346 +0x16:  nop
0872f347 +0x17:  nop
0872f348 +0x18:  nop
0872f349 +0x19:  nop
0872f34a +0x1a:  nop
0872f34b +0x1b:  nop
0872f34c +0x1c:  nop
0872f34d +0x1d:  nop
0872f34e +0x1e:  nop
0872f34f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype_byname<char>::~ctype_byname @ 0x872f330

/* std::ctype_byname<char>::~ctype_byname() */

void __thiscall std::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  *(undefined ***)this = &PTR__ctype_byname_08d02948;
  ctype<char>::~ctype((ctype<char> *)this);
  return;
}
```
