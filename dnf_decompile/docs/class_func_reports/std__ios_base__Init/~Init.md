# ~Init

`_ZNSt8ios_base4InitD1Ev`

`std::ios_base::Init::~Init()`

| 类 | 地址 |
|---|---|
| `std::ios_base::Init` | `0x086da140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da140  _ZNSt8ios_base4InitD1Ev
#           std::ios_base::Init::~Init()
# range [0x086da140, 0x086da1df]
086da140 +0x00:  push   %ebp
086da141 +0x01:  mov    $&data#bb92cc41(.plt),%eax
086da146 +0x06:  mov    %esp,%ebp
086da148 +0x08:  sub    $0x18,%esp
086da14b +0x0b:  test   %eax,%eax
086da14d +0x0d:  je     086da1b2 <+0x72>
086da14f +0x0f:  mov    $0xffffffff,%eax
086da154 +0x14:  lock xadd %eax,&_ZNSt8ios_base4Init11_S_refcountE
086da15c +0x1c:  cmp    $0x2,%eax
086da15f +0x1f:  je     086da168 <+0x28>
086da161 +0x21:  leave
086da162 +0x22:  ret
086da163 +0x23:  nop
086da164 +0x24:  lea    0x0(%esi,%eiz,1),%esi
086da168 +0x28:  movl   $&_ZSt4cout,(%esp)
086da16f +0x2f:  call   086fc340 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4
086da174 +0x34:  movl   $&_ZSt4cerr,(%esp)
086da17b +0x3b:  call   086fc340 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4
086da180 +0x40:  movl   $&_ZSt4clog,(%esp)
086da187 +0x47:  call   086fc340 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4
086da18c +0x4c:  movl   $&_ZSt5wcout,(%esp)
086da193 +0x53:  call   086fc6c0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54
086da198 +0x58:  movl   $&_ZSt5wcerr,(%esp)
086da19f +0x5f:  call   086fc6c0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54
086da1a4 +0x64:  movl   $&_ZSt5wclog,(%esp)
086da1ab +0x6b:  call   086fc6c0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54
086da1b0 +0x70:  leave
086da1b1 +0x71:  ret
086da1b2 +0x72:  mov    &_ZNSt8ios_base4Init11_S_refcountE,%eax
086da1b7 +0x77:  lea    -0x1(%eax),%edx
086da1ba +0x7a:  mov    %edx,&_ZNSt8ios_base4Init11_S_refcountE
086da1c0 +0x80:  jmp    086da15c <+0x1c>
086da1c2 +0x82:  mov    %eax,(%esp)
086da1c5 +0x85:  call   08725ce0 <__cxa_begin_catch>
086da1ca +0x8a:  call   08725c30 <__cxa_end_catch>
086da1cf +0x8f:  leave
086da1d0 +0x90:  ret
086da1d1 +0x91:  nop
086da1d2 +0x92:  nop
086da1d3 +0x93:  nop
086da1d4 +0x94:  nop
086da1d5 +0x95:  nop
086da1d6 +0x96:  nop
086da1d7 +0x97:  nop
086da1d8 +0x98:  nop
086da1d9 +0x99:  nop
086da1da +0x9a:  nop
086da1db +0x9b:  nop
086da1dc +0x9c:  nop
086da1dd +0x9d:  nop
086da1de +0x9e:  nop
086da1df +0x9f:  nop
```

## 反编译 C

```c
// std::ios_base::Init::~Init @ 0x86da140

/* WARNING: Removing unreachable block (ram,0x086da1b2) */
/* std::ios_base::Init::~Init() */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
  int iVar1;
  
  iVar1 = _S_refcount;
  LOCK();
  _S_refcount = _S_refcount + -1;
  UNLOCK();
  if (iVar1 == 2) {
                    /* try { // try from 086da16f to 086da1af has its CatchHandler @ 086da1c2 */
    ostream::flush((ostream *)cout);
    ostream::flush((ostream *)&cerr);
    ostream::flush((ostream *)clog);
    wostream::flush((wostream *)wcout);
    wostream::flush((wostream *)wcerr);
    wostream::flush((wostream *)wclog);
    return;
  }
  return;
}
```
