# TiXmlDeclaration

`_ZN16TiXmlDeclarationC1ERKSsS1_S1_`

`TiXmlDeclaration::TiXmlDeclaration(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e32b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e32b0  _ZN16TiXmlDeclarationC1ERKSsS1_S1_
#           TiXmlDeclaration::TiXmlDeclaration(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087e32b0, 0x087e339e]
087e32b0 +0x00:  push   %ebp
087e32b1 +0x01:  mov    %esp,%ebp
087e32b3 +0x03:  sub    $0x38,%esp
087e32b6 +0x06:  mov    %ebx,-0xc(%ebp)
087e32b9 +0x09:  mov    0x8(%ebp),%ebx
087e32bc +0x0c:  mov    %esi,-0x8(%ebp)
087e32bf +0x0f:  mov    %edi,-0x4(%ebp)
087e32c2 +0x12:  lea    0x2c(%ebx),%eax
087e32c5 +0x15:  mov    %eax,-0x1c(%ebp)
087e32c8 +0x18:  mov    0xc(%ebp),%eax
087e32cb +0x1b:  lea    0x30(%ebx),%edi
087e32ce +0x1e:  mov    -0x1c(%ebp),%edx
087e32d1 +0x21:  lea    0x34(%ebx),%esi
087e32d4 +0x24:  movl   $0xffffffff,0x8(%ebx)
087e32db +0x2b:  movl   $0xffffffff,0x4(%ebx)
087e32e2 +0x32:  movl   $0x0,0xc(%ebx)
087e32e9 +0x39:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e32f0 +0x40:  movl   $0x0,0x10(%ebx)
087e32f7 +0x47:  movl   $0x5,0x14(%ebx)
087e32fe +0x4e:  movl   $0x0,0x18(%ebx)
087e3305 +0x55:  movl   $0x0,0x1c(%ebx)
087e330c +0x5c:  movl   $0x0,0x24(%ebx)
087e3313 +0x63:  movl   $0x0,0x28(%ebx)
087e331a +0x6a:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e3320 +0x70:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x2c(%ebx)
087e3327 +0x77:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x30(%ebx)
087e332e +0x7e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e3335 +0x85:  mov    %eax,0x4(%esp)
087e3339 +0x89:  mov    %edx,(%esp)
087e333c +0x8c:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e3341 +0x91:  mov    0x10(%ebp),%eax
087e3344 +0x94:  mov    %edi,(%esp)
087e3347 +0x97:  mov    %eax,0x4(%esp)
087e334b +0x9b:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e3350 +0xa0:  mov    0x14(%ebp),%eax
087e3353 +0xa3:  mov    %esi,(%esp)
087e3356 +0xa6:  mov    %eax,0x4(%esp)
087e335a +0xaa:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e335f +0xaf:  mov    -0xc(%ebp),%ebx
087e3362 +0xb2:  mov    -0x8(%ebp),%esi
087e3365 +0xb5:  mov    -0x4(%ebp),%edi
087e3368 +0xb8:  mov    %ebp,%esp
087e336a +0xba:  pop    %ebp
087e336b +0xbb:  ret
087e336c +0xbc:  mov    %eax,-0x20(%ebp)
087e336f +0xbf:  mov    %esi,(%esp)
087e3372 +0xc2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e3377 +0xc7:  mov    %edi,(%esp)
087e337a +0xca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e337f +0xcf:  mov    -0x1c(%ebp),%edx
087e3382 +0xd2:  mov    %edx,(%esp)
087e3385 +0xd5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e338a +0xda:  mov    %ebx,(%esp)
087e338d +0xdd:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3392 +0xe2:  mov    -0x20(%ebp),%eax
087e3395 +0xe5:  mov    %eax,(%esp)
087e3398 +0xe8:  call   08ae3750 <_Unwind_Resume>
087e339d +0xed:  nop
087e339e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e32b0

/* TiXmlDeclaration::TiXmlDeclaration(std::string const&, std::string const&, std::string const&) */

void __thiscall
TiXmlDeclaration::TiXmlDeclaration
          (TiXmlDeclaration *this,string *param_1,string *param_2,string *param_3)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDeclaration_08de1108;
  *(undefined1 **)(this + 0x2c) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x30) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
                    /* try { // try from 087e333c to 087e335e has its CatchHandler @ 087e336c */
  std::string::assign((string *)(this + 0x2c),param_1);
  std::string::assign((string *)(this + 0x30),param_2);
  std::string::assign((string *)(this + 0x34),param_3);
  return;
}
```
