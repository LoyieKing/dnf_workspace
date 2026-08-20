# failure

`_ZNSt8ios_base7failureC1ERKSs`

`std::ios_base::failure::failure(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::ios_base::failure` | `0x086da0e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da0e0  _ZNSt8ios_base7failureC1ERKSs
#           std::ios_base::failure::failure(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086da0e0, 0x086da13f]
086da0e0 +0x00:  push   %ebp
086da0e1 +0x01:  mov    %esp,%ebp
086da0e3 +0x03:  push   %ebx
086da0e4 +0x04:  sub    $0x24,%esp
086da0e7 +0x07:  mov    0x8(%ebp),%ebx
086da0ea +0x0a:  mov    0xc(%ebp),%eax
086da0ed +0x0d:  movl   $&_ZTVNSt8ios_base7failureE+0x8,(%ebx)
086da0f3 +0x13:  mov    %eax,0x4(%esp)
086da0f7 +0x17:  lea    0x4(%ebx),%eax
086da0fa +0x1a:  mov    %eax,(%esp)
086da0fd +0x1d:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086da102 +0x22:  add    $0x24,%esp
086da105 +0x25:  pop    %ebx
086da106 +0x26:  pop    %ebp
086da107 +0x27:  ret
086da108 +0x28:  mov    %eax,-0xc(%ebp)
086da10b +0x2b:  mov    %edx,-0x10(%ebp)
086da10e +0x2e:  mov    %ebx,(%esp)
086da111 +0x31:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086da116 +0x36:  mov    -0x10(%ebp),%edx
086da119 +0x39:  mov    -0xc(%ebp),%eax
086da11c +0x3c:  cmp    $0xffffffff,%edx
086da11f +0x3f:  je     086da129 <+0x49>
086da121 +0x41:  mov    %eax,(%esp)
086da124 +0x44:  call   08ae3750 <_Unwind_Resume>
086da129 +0x49:  mov    %eax,(%esp)
086da12c +0x4c:  call   08723df0 <__cxa_call_unexpected>
086da131 +0x51:  nop
086da132 +0x52:  nop
086da133 +0x53:  nop
086da134 +0x54:  nop
086da135 +0x55:  nop
086da136 +0x56:  nop
086da137 +0x57:  nop
086da138 +0x58:  nop
086da139 +0x59:  nop
086da13a +0x5a:  nop
086da13b +0x5b:  nop
086da13c +0x5c:  nop
086da13d +0x5d:  nop
086da13e +0x5e:  nop
086da13f +0x5f:  nop
```

## 反编译 C

```c
// std::ios_base::failure::failure @ 0x86da0e0

/* std::ios_base::failure::failure(std::string const&) */

void __thiscall std::ios_base::failure::failure(failure *this,string *param_1)

{
  *(undefined ***)this = &PTR__failure_08cfdf10;
                    /* try { // try from 086da0fd to 086da101 has its CatchHandler @ 086da108 */
  string::string((string *)(this + 4),(string *)param_1);
  return;
}
```
