# TiXmlDocument

`_ZN13TiXmlDocumentC1Ev`

`TiXmlDocument::TiXmlDocument()`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2df0  _ZN13TiXmlDocumentC1Ev
#           TiXmlDocument::TiXmlDocument()
# range [0x087e2df0, 0x087e2ebb]
087e2df0 +0x00:  push   %ebp
087e2df1 +0x01:  mov    %esp,%ebp
087e2df3 +0x03:  push   %esi
087e2df4 +0x04:  push   %ebx
087e2df5 +0x05:  sub    $0x20,%esp
087e2df8 +0x08:  mov    0x8(%ebp),%ebx
087e2dfb +0x0b:  movl   $0xffffffff,0x8(%ebx)
087e2e02 +0x12:  lea    0x34(%ebx),%esi
087e2e05 +0x15:  movl   $0xffffffff,0x4(%ebx)
087e2e0c +0x1c:  movl   $0x0,0xc(%ebx)
087e2e13 +0x23:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e2e1a +0x2a:  movl   $0x0,0x10(%ebx)
087e2e21 +0x31:  movl   $0x0,0x14(%ebx)
087e2e28 +0x38:  movl   $0x0,0x18(%ebx)
087e2e2f +0x3f:  movl   $0x0,0x1c(%ebx)
087e2e36 +0x46:  movl   $0x0,0x24(%ebx)
087e2e3d +0x4d:  movl   $0x0,0x28(%ebx)
087e2e44 +0x54:  movl   $&_ZTV13TiXmlDocument+0x8,(%ebx)
087e2e4a +0x5a:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e2e51 +0x61:  movl   $0xffffffff,0x40(%ebx)
087e2e58 +0x68:  movl   $0xffffffff,0x3c(%ebx)
087e2e5f +0x6f:  movl   $0x4,0x38(%ebx)
087e2e66 +0x76:  movb   $0x0,0x44(%ebx)
087e2e6a +0x7a:  movb   $0x0,0x2c(%ebx)
087e2e6e +0x7e:  movl   $0x0,0x30(%ebx)
087e2e75 +0x85:  movl   $0x0,0x8(%esp)
087e2e7d +0x8d:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e2e85 +0x95:  mov    %esi,(%esp)
087e2e88 +0x98:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2e8d +0x9d:  movl   $0x0,0x40(%ebx)
087e2e94 +0xa4:  movl   $0x0,0x3c(%ebx)
087e2e9b +0xab:  add    $0x20,%esp
087e2e9e +0xae:  pop    %ebx
087e2e9f +0xaf:  pop    %esi
087e2ea0 +0xb0:  pop    %ebp
087e2ea1 +0xb1:  ret
087e2ea2 +0xb2:  mov    %eax,-0xc(%ebp)
087e2ea5 +0xb5:  mov    %esi,(%esp)
087e2ea8 +0xb8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2ead +0xbd:  mov    %ebx,(%esp)
087e2eb0 +0xc0:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e2eb5 +0xc5:  mov    -0xc(%ebp),%eax
087e2eb8 +0xc8:  mov    %eax,(%esp)
087e2ebb +0xcb:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// TiXmlDocument::TiXmlDocument @ 0x87e2df0

/* TiXmlDocument::TiXmlDocument() */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this)

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
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
                    /* try { // try from 087e2e88 to 087e2e8c has its CatchHandler @ 087e2ea2 */
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}
```
