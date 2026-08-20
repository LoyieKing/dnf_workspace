# ~TiXmlAttributeSet

`_ZN17TiXmlAttributeSetD1Ev`

`TiXmlAttributeSet::~TiXmlAttributeSet()`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e1cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1cd0  _ZN17TiXmlAttributeSetD1Ev
#           TiXmlAttributeSet::~TiXmlAttributeSet()
# range [0x087e1cd0, 0x087e1d7e]
087e1cd0 +0x00:  push   %ebp
087e1cd1 +0x01:  mov    %esp,%ebp
087e1cd3 +0x03:  sub    $0x28,%esp
087e1cd6 +0x06:  mov    %esi,-0x4(%ebp)
087e1cd9 +0x09:  mov    0x8(%ebp),%esi
087e1cdc +0x0c:  mov    %ebx,-0x8(%ebp)
087e1cdf +0x0f:  mov    0x20(%esi),%ebx
087e1ce2 +0x12:  cmp    %esi,%ebx
087e1ce4 +0x14:  jne    087e1d17 <+0x47>
087e1ce6 +0x16:  cmp    0x1c(%ebx),%ebx
087e1ce9 +0x19:  jne    087e1d3b <+0x6b>
087e1ceb +0x1b:  movl   $&_ZTV14TiXmlAttribute+0x8,(%ebx)
087e1cf1 +0x21:  lea    0x18(%ebx),%eax
087e1cf4 +0x24:  mov    %eax,(%esp)
087e1cf7 +0x27:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e1cfc +0x2c:  add    $0x14,%esi
087e1cff +0x2f:  mov    %esi,(%esp)
087e1d02 +0x32:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e1d07 +0x37:  movl   $&_ZTV9TiXmlBase+0x8,(%ebx)
087e1d0d +0x3d:  mov    -0x8(%ebp),%ebx
087e1d10 +0x40:  mov    -0x4(%ebp),%esi
087e1d13 +0x43:  mov    %ebp,%esp
087e1d15 +0x45:  pop    %ebp
087e1d16 +0x46:  ret
087e1d17 +0x47:  movl   $&_ZZN17TiXmlAttributeSetD1EvE19__PRETTY_FUNCTION__,0xc(%esp)
087e1d1f +0x4f:  movl   $0x5e5,0x8(%esp)
087e1d27 +0x57:  movl   $"tinyxml.cpp",0x4(%esp)
087e1d2f +0x5f:  movl   $"sentinel.next == &sentinel",(%esp)
087e1d36 +0x66:  call   0807dc50 <_init+0x548>
087e1d3b +0x6b:  movl   $&_ZZN17TiXmlAttributeSetD1EvE19__PRETTY_FUNCTION__,0xc(%esp)
087e1d43 +0x73:  movl   $0x5e6,0x8(%esp)
087e1d4b +0x7b:  movl   $"tinyxml.cpp",0x4(%esp)
087e1d53 +0x83:  movl   $"sentinel.prev == &sentinel",(%esp)
087e1d5a +0x8a:  call   0807dc50 <_init+0x548>
087e1d5f +0x8f:  movl   $&_ZTV9TiXmlBase+0x8,(%ebx)
087e1d65 +0x95:  mov    %eax,(%esp)
087e1d68 +0x98:  call   08ae3750 <_Unwind_Resume>
087e1d6d +0x9d:  add    $0x14,%esi
087e1d70 +0xa0:  mov    %eax,-0xc(%ebp)
087e1d73 +0xa3:  mov    %esi,(%esp)
087e1d76 +0xa6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e1d7b +0xab:  mov    -0xc(%ebp),%eax
087e1d7e +0xae:  jmp    087e1d5f <+0x8f>
```

## 反编译 C

```c
// TiXmlAttributeSet::~TiXmlAttributeSet @ 0x87e1cd0

/* TiXmlAttributeSet::~TiXmlAttributeSet() */

void __thiscall TiXmlAttributeSet::~TiXmlAttributeSet(TiXmlAttributeSet *this)

{
  TiXmlAttributeSet *pTVar1;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar1 != this) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sentinel.next == &sentinel","tinyxml.cpp",0x5e5,
                  "TiXmlAttributeSet::~TiXmlAttributeSet()");
  }
  if (pTVar1 == *(TiXmlAttributeSet **)(pTVar1 + 0x1c)) {
    *(undefined ***)pTVar1 = &PTR__TiXmlAttribute_08de2028;
                    /* try { // try from 087e1cf7 to 087e1cfb has its CatchHandler @ 087e1d6d */
    std::string::~string((string *)(pTVar1 + 0x18));
                    /* try { // try from 087e1d02 to 087e1d06 has its CatchHandler @ 087e1d5f */
    std::string::~string((string *)(this + 0x14));
    *(undefined ***)pTVar1 = &PTR__TiXmlBase_08de13f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("sentinel.prev == &sentinel","tinyxml.cpp",0x5e6,
                "TiXmlAttributeSet::~TiXmlAttributeSet()");
}
```
