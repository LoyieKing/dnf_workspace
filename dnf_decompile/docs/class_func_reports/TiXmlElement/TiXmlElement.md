# TiXmlElement

`_ZN12TiXmlElementC1ERKSs`

`TiXmlElement::TiXmlElement(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3570  _ZN12TiXmlElementC1ERKSs
#           TiXmlElement::TiXmlElement(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087e3570, 0x087e3639]
087e3570 +0x00:  push   %ebp
087e3571 +0x01:  mov    %esp,%ebp
087e3573 +0x03:  push   %esi
087e3574 +0x04:  push   %ebx
087e3575 +0x05:  sub    $0x20,%esp
087e3578 +0x08:  mov    0x8(%ebp),%ebx
087e357b +0x0b:  mov    0xc(%ebp),%eax
087e357e +0x0e:  lea    0x2c(%ebx),%esi
087e3581 +0x11:  movl   $0xffffffff,0x8(%ebx)
087e3588 +0x18:  movl   $0xffffffff,0x4(%ebx)
087e358f +0x1f:  movl   $0x0,0xc(%ebx)
087e3596 +0x26:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e359d +0x2d:  movl   $0x0,0x10(%ebx)
087e35a4 +0x34:  movl   $0x1,0x14(%ebx)
087e35ab +0x3b:  movl   $0x0,0x24(%ebx)
087e35b2 +0x42:  movl   $0x0,0x28(%ebx)
087e35b9 +0x49:  movl   $&_ZTV12TiXmlElement+0x8,(%ebx)
087e35bf +0x4f:  movl   $0xffffffff,0x34(%ebx)
087e35c6 +0x56:  movl   $0xffffffff,0x30(%ebx)
087e35cd +0x5d:  movl   $0x0,0x38(%ebx)
087e35d4 +0x64:  movl   $&_ZTV14TiXmlAttribute+0x8,0x2c(%ebx)
087e35db +0x6b:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x40(%ebx)
087e35e2 +0x72:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x44(%ebx)
087e35e9 +0x79:  movl   $0x0,0x3c(%ebx)
087e35f0 +0x80:  mov    %esi,0x4c(%ebx)
087e35f3 +0x83:  mov    %esi,0x48(%ebx)
087e35f6 +0x86:  movl   $0x0,0x1c(%ebx)
087e35fd +0x8d:  movl   $0x0,0x18(%ebx)
087e3604 +0x94:  mov    %eax,0x4(%esp)
087e3608 +0x98:  lea    0x20(%ebx),%eax
087e360b +0x9b:  mov    %eax,(%esp)
087e360e +0x9e:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e3613 +0xa3:  add    $0x20,%esp
087e3616 +0xa6:  pop    %ebx
087e3617 +0xa7:  pop    %esi
087e3618 +0xa8:  pop    %ebp
087e3619 +0xa9:  ret
087e361a +0xaa:  mov    %eax,-0xc(%ebp)
087e361d +0xad:  mov    %esi,(%esp)
087e3620 +0xb0:  call   087e1cd0 <_ZN17TiXmlAttributeSetD1Ev>  ; TiXmlAttributeSet::~TiXmlAttributeSet()
087e3625 +0xb5:  mov    %ebx,(%esp)
087e3628 +0xb8:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e362d +0xbd:  mov    -0xc(%ebp),%eax
087e3630 +0xc0:  mov    %eax,(%esp)
087e3633 +0xc3:  call   08ae3750 <_Unwind_Resume>
087e3638 +0xc8:  nop
087e3639 +0xc9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlElement::TiXmlElement @ 0x87e3570

/* TiXmlElement::TiXmlElement(std::string const&) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,string *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 087e360e to 087e3612 has its CatchHandler @ 087e361a */
  std::string::assign((string *)(this + 0x20),param_1);
  return;
}
```
