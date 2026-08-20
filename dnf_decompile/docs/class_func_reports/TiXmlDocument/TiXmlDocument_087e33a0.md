# TiXmlDocument

`_ZN13TiXmlDocumentC1ERKSs`

`TiXmlDocument::TiXmlDocument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e33a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e33a0  _ZN13TiXmlDocumentC1ERKSs
#           TiXmlDocument::TiXmlDocument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087e33a0, 0x087e3489]
087e33a0 +0x00:  push   %ebp
087e33a1 +0x01:  mov    %esp,%ebp
087e33a3 +0x03:  push   %esi
087e33a4 +0x04:  push   %ebx
087e33a5 +0x05:  sub    $0x20,%esp
087e33a8 +0x08:  mov    0x8(%ebp),%ebx
087e33ab +0x0b:  mov    0xc(%ebp),%eax
087e33ae +0x0e:  movl   $0xffffffff,0x8(%ebx)
087e33b5 +0x15:  lea    0x34(%ebx),%esi
087e33b8 +0x18:  movl   $0xffffffff,0x4(%ebx)
087e33bf +0x1f:  movl   $0x0,0xc(%ebx)
087e33c6 +0x26:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e33cd +0x2d:  movl   $0x0,0x10(%ebx)
087e33d4 +0x34:  movl   $0x0,0x14(%ebx)
087e33db +0x3b:  movl   $0x0,0x18(%ebx)
087e33e2 +0x42:  movl   $0x0,0x1c(%ebx)
087e33e9 +0x49:  movl   $0x0,0x24(%ebx)
087e33f0 +0x50:  movl   $0x0,0x28(%ebx)
087e33f7 +0x57:  movl   $&_ZTV13TiXmlDocument+0x8,(%ebx)
087e33fd +0x5d:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e3404 +0x64:  movl   $0xffffffff,0x40(%ebx)
087e340b +0x6b:  movl   $0xffffffff,0x3c(%ebx)
087e3412 +0x72:  movl   $0x4,0x38(%ebx)
087e3419 +0x79:  movb   $0x0,0x44(%ebx)
087e341d +0x7d:  mov    %eax,0x4(%esp)
087e3421 +0x81:  lea    0x20(%ebx),%eax
087e3424 +0x84:  mov    %eax,(%esp)
087e3427 +0x87:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e342c +0x8c:  movb   $0x0,0x2c(%ebx)
087e3430 +0x90:  movl   $0x0,0x30(%ebx)
087e3437 +0x97:  movl   $0x0,0x8(%esp)
087e343f +0x9f:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e3447 +0xa7:  mov    %esi,(%esp)
087e344a +0xaa:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e344f +0xaf:  movl   $0x0,0x40(%ebx)
087e3456 +0xb6:  movl   $0x0,0x3c(%ebx)
087e345d +0xbd:  add    $0x20,%esp
087e3460 +0xc0:  pop    %ebx
087e3461 +0xc1:  pop    %esi
087e3462 +0xc2:  pop    %ebp
087e3463 +0xc3:  ret
087e3464 +0xc4:  mov    %eax,-0xc(%ebp)
087e3467 +0xc7:  mov    %esi,(%esp)
087e346a +0xca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e346f +0xcf:  mov    %ebx,(%esp)
087e3472 +0xd2:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3477 +0xd7:  mov    -0xc(%ebp),%eax
087e347a +0xda:  mov    %eax,(%esp)
087e347d +0xdd:  call   08ae3750 <_Unwind_Resume>
087e3482 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
087e3489 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDocument::TiXmlDocument @ 0x87e33a0

/* TiXmlDocument::TiXmlDocument(std::string const&) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,string *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 4;
  this[0x44] = (TiXmlDocument)0x0;
                    /* try { // try from 087e3427 to 087e344e has its CatchHandler @ 087e3464 */
  std::string::assign((string *)(this + 0x20),param_1);
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}
```
