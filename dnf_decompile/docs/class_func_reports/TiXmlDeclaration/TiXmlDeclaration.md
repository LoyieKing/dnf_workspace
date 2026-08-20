# TiXmlDeclaration

`_ZN16TiXmlDeclarationC1EPKcS1_S1_`

`TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e2c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2c30  _ZN16TiXmlDeclarationC1EPKcS1_S1_
#           TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*)
# range [0x087e2c30, 0x087e2d3c]
087e2c30 +0x000:  push   %ebp
087e2c31 +0x001:  mov    %esp,%ebp
087e2c33 +0x003:  push   %edi
087e2c34 +0x004:  push   %esi
087e2c35 +0x005:  push   %ebx
087e2c36 +0x006:  sub    $0x2c,%esp
087e2c39 +0x009:  mov    0x8(%ebp),%ebx
087e2c3c +0x00c:  mov    0xc(%ebp),%esi
087e2c3f +0x00f:  movl   $0xffffffff,0x8(%ebx)
087e2c46 +0x016:  lea    0x2c(%ebx),%eax
087e2c49 +0x019:  movl   $0xffffffff,0x4(%ebx)
087e2c50 +0x020:  lea    0x30(%ebx),%edi
087e2c53 +0x023:  movl   $0x0,0xc(%ebx)
087e2c5a +0x02a:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e2c61 +0x031:  movl   $0x0,0x10(%ebx)
087e2c68 +0x038:  movl   $0x5,0x14(%ebx)
087e2c6f +0x03f:  movl   $0x0,0x18(%ebx)
087e2c76 +0x046:  movl   $0x0,0x1c(%ebx)
087e2c7d +0x04d:  movl   $0x0,0x24(%ebx)
087e2c84 +0x054:  movl   $0x0,0x28(%ebx)
087e2c8b +0x05b:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e2c91 +0x061:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x2c(%ebx)
087e2c98 +0x068:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x30(%ebx)
087e2c9f +0x06f:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e2ca6 +0x076:  mov    %esi,(%esp)
087e2ca9 +0x079:  mov    %eax,-0x1c(%ebp)
087e2cac +0x07c:  call   0807e3b0 <_init+0xca8>
087e2cb1 +0x081:  mov    -0x1c(%ebp),%edx
087e2cb4 +0x084:  mov    %esi,0x4(%esp)
087e2cb8 +0x088:  lea    0x34(%ebx),%esi
087e2cbb +0x08b:  mov    %edx,(%esp)
087e2cbe +0x08e:  mov    %eax,0x8(%esp)
087e2cc2 +0x092:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2cc7 +0x097:  mov    0x10(%ebp),%eax
087e2cca +0x09a:  mov    %eax,(%esp)
087e2ccd +0x09d:  call   0807e3b0 <_init+0xca8>
087e2cd2 +0x0a2:  mov    0x10(%ebp),%edx
087e2cd5 +0x0a5:  mov    %edi,(%esp)
087e2cd8 +0x0a8:  mov    %edx,0x4(%esp)
087e2cdc +0x0ac:  mov    %eax,0x8(%esp)
087e2ce0 +0x0b0:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2ce5 +0x0b5:  mov    0x14(%ebp),%eax
087e2ce8 +0x0b8:  mov    %eax,(%esp)
087e2ceb +0x0bb:  call   0807e3b0 <_init+0xca8>
087e2cf0 +0x0c0:  mov    0x14(%ebp),%edx
087e2cf3 +0x0c3:  mov    %esi,(%esp)
087e2cf6 +0x0c6:  mov    %edx,0x4(%esp)
087e2cfa +0x0ca:  mov    %eax,0x8(%esp)
087e2cfe +0x0ce:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2d03 +0x0d3:  add    $0x2c,%esp
087e2d06 +0x0d6:  pop    %ebx
087e2d07 +0x0d7:  pop    %esi
087e2d08 +0x0d8:  pop    %edi
087e2d09 +0x0d9:  pop    %ebp
087e2d0a +0x0da:  ret
087e2d0b +0x0db:  mov    %eax,-0x20(%ebp)
087e2d0e +0x0de:  mov    %esi,(%esp)
087e2d11 +0x0e1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2d16 +0x0e6:  mov    %edi,(%esp)
087e2d19 +0x0e9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2d1e +0x0ee:  mov    -0x1c(%ebp),%edx
087e2d21 +0x0f1:  mov    %edx,(%esp)
087e2d24 +0x0f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2d29 +0x0f9:  mov    %ebx,(%esp)
087e2d2c +0x0fc:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e2d31 +0x101:  mov    -0x20(%ebp),%eax
087e2d34 +0x104:  mov    %eax,(%esp)
087e2d37 +0x107:  call   08ae3750 <_Unwind_Resume>
087e2d3c +0x10c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e2c30

/* TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */

void __thiscall
TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this,char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  
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
  sVar1 = strlen(param_1);
                    /* try { // try from 087e2cc2 to 087e2d02 has its CatchHandler @ 087e2d0b */
  std::string::assign((string *)(this + 0x2c),param_1,sVar1);
  sVar1 = strlen(param_2);
  std::string::assign((string *)(this + 0x30),param_2,sVar1);
  sVar1 = strlen(param_3);
  std::string::assign((string *)(this + 0x34),param_3,sVar1);
  return;
}
```
