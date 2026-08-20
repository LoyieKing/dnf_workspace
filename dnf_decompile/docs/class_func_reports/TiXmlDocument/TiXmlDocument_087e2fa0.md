# TiXmlDocument

`_ZN13TiXmlDocumentC1EPKc`

`TiXmlDocument::TiXmlDocument(char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2fa0  _ZN13TiXmlDocumentC1EPKc
#           TiXmlDocument::TiXmlDocument(char const*)
# range [0x087e2fa0, 0x087e308e]
087e2fa0 +0x00:  push   %ebp
087e2fa1 +0x01:  mov    %esp,%ebp
087e2fa3 +0x03:  push   %esi
087e2fa4 +0x04:  push   %ebx
087e2fa5 +0x05:  sub    $0x20,%esp
087e2fa8 +0x08:  mov    0x8(%ebp),%ebx
087e2fab +0x0b:  mov    0xc(%ebp),%esi
087e2fae +0x0e:  movl   $0xffffffff,0x8(%ebx)
087e2fb5 +0x15:  movl   $0xffffffff,0x4(%ebx)
087e2fbc +0x1c:  movl   $0x0,0xc(%ebx)
087e2fc3 +0x23:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e2fca +0x2a:  movl   $0x0,0x10(%ebx)
087e2fd1 +0x31:  movl   $0x0,0x14(%ebx)
087e2fd8 +0x38:  movl   $0x0,0x18(%ebx)
087e2fdf +0x3f:  movl   $0x0,0x1c(%ebx)
087e2fe6 +0x46:  movl   $0x0,0x24(%ebx)
087e2fed +0x4d:  movl   $0x0,0x28(%ebx)
087e2ff4 +0x54:  movl   $&_ZTV13TiXmlDocument+0x8,(%ebx)
087e2ffa +0x5a:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e3001 +0x61:  movl   $0xffffffff,0x40(%ebx)
087e3008 +0x68:  movl   $0xffffffff,0x3c(%ebx)
087e300f +0x6f:  movl   $0x4,0x38(%ebx)
087e3016 +0x76:  movb   $0x0,0x44(%ebx)
087e301a +0x7a:  mov    %esi,(%esp)
087e301d +0x7d:  call   0807e3b0 <_init+0xca8>
087e3022 +0x82:  mov    %esi,0x4(%esp)
087e3026 +0x86:  lea    0x34(%ebx),%esi
087e3029 +0x89:  mov    %eax,0x8(%esp)
087e302d +0x8d:  lea    0x20(%ebx),%eax
087e3030 +0x90:  mov    %eax,(%esp)
087e3033 +0x93:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e3038 +0x98:  movb   $0x0,0x2c(%ebx)
087e303c +0x9c:  movl   $0x0,0x30(%ebx)
087e3043 +0xa3:  movl   $0x0,0x8(%esp)
087e304b +0xab:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e3053 +0xb3:  mov    %esi,(%esp)
087e3056 +0xb6:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e305b +0xbb:  movl   $0x0,0x40(%ebx)
087e3062 +0xc2:  movl   $0x0,0x3c(%ebx)
087e3069 +0xc9:  add    $0x20,%esp
087e306c +0xcc:  pop    %ebx
087e306d +0xcd:  pop    %esi
087e306e +0xce:  pop    %ebp
087e306f +0xcf:  ret
087e3070 +0xd0:  mov    %eax,-0xc(%ebp)
087e3073 +0xd3:  mov    %esi,(%esp)
087e3076 +0xd6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e307b +0xdb:  mov    %ebx,(%esp)
087e307e +0xde:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3083 +0xe3:  mov    -0xc(%ebp),%eax
087e3086 +0xe6:  mov    %eax,(%esp)
087e3089 +0xe9:  call   08ae3750 <_Unwind_Resume>
087e308e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlDocument::TiXmlDocument @ 0x87e2fa0

/* TiXmlDocument::TiXmlDocument(char const*) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,char *param_1)

{
  size_t sVar1;
  
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
  sVar1 = strlen(param_1);
                    /* try { // try from 087e3033 to 087e305a has its CatchHandler @ 087e3070 */
  std::string::assign((string *)(this + 0x20),param_1,sVar1);
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}
```
