# getTagByName

`_ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw`

`RDARScriptStringManager::getTagByName(std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > >*, std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > >*, int, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa59f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa59f0  _ZNK23RDARScriptStringManager12getTagByNameEPSt6vectorISbIwSt11char_traitsIwESaIwEESaIS4_EES7_iPKw
#           RDARScriptStringManager::getTagByName(std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > >*, std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >, std::allocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > > >*, int, wchar_t const*) const
# range [0x08aa59f0, 0x08aa5cb9]
08aa59f0 +0x000:  push   %ebp
08aa59f1 +0x001:  mov    %esp,%ebp
08aa59f3 +0x003:  push   %esi
08aa59f4 +0x004:  push   %ebx
08aa59f5 +0x005:  sub    $0x50,%esp
08aa59f8 +0x008:  cmpl   $0x0,0xc(%ebp)
08aa59fc +0x00c:  je     08aa5a04 <+0x14>
08aa59fe +0x00e:  cmpl   $0x0,0x10(%ebp)
08aa5a02 +0x012:  jne    08aa5a0e <+0x1e>
08aa5a04 +0x014:  mov    $0x0,%eax
08aa5a09 +0x019:  jmp    08aa5caf <+0x2bf>
08aa5a0e +0x01e:  mov    0x14(%ebp),%ebx
08aa5a11 +0x021:  mov    0x8(%ebp),%eax
08aa5a14 +0x024:  add    $0x18,%eax
08aa5a17 +0x027:  mov    %eax,(%esp)
08aa5a1a +0x02a:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5a1f +0x02f:  cmp    %eax,%ebx
08aa5a21 +0x031:  setae  %al
08aa5a24 +0x034:  test   %al,%al
08aa5a26 +0x036:  je     08aa5a32 <+0x42>
08aa5a28 +0x038:  mov    $0x0,%eax
08aa5a2d +0x03d:  jmp    08aa5caf <+0x2bf>
08aa5a32 +0x042:  mov    0x14(%ebp),%eax
08aa5a35 +0x045:  mov    0x8(%ebp),%edx
08aa5a38 +0x048:  add    $0x18,%edx
08aa5a3b +0x04b:  mov    %eax,0x4(%esp)
08aa5a3f +0x04f:  mov    %edx,(%esp)
08aa5a42 +0x052:  call   08aa69ea <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2cc>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2cc
08aa5a47 +0x057:  mov    %eax,-0x18(%ebp)
08aa5a4a +0x05a:  movl   $0x0,-0x14(%ebp)
08aa5a51 +0x061:  jmp    08aa5c8f <+0x29f>
08aa5a56 +0x066:  mov    -0x18(%ebp),%eax
08aa5a59 +0x069:  mov    (%eax),%eax
08aa5a5b +0x06b:  mov    -0x14(%ebp),%edx
08aa5a5e +0x06e:  mov    %edx,0x4(%esp)
08aa5a62 +0x072:  mov    %eax,(%esp)
08aa5a65 +0x075:  call   08ab2668 <_ZNK16StringDictionary8getValueEi>  ; StringDictionary::getValue(int) const
08aa5a6a +0x07a:  mov    %eax,-0x10(%ebp)
08aa5a6d +0x07d:  cmpl   $0x0,-0x10(%ebp)
08aa5a71 +0x081:  je     08aa5c8b <+0x29b>
08aa5a77 +0x087:  lea    -0x39(%ebp),%eax
08aa5a7a +0x08a:  mov    %eax,(%esp)
08aa5a7d +0x08d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08aa5a82 +0x092:  lea    -0x39(%ebp),%eax
08aa5a85 +0x095:  mov    %eax,0x8(%esp)
08aa5a89 +0x099:  mov    -0x10(%ebp),%eax
08aa5a8c +0x09c:  mov    %eax,0x4(%esp)
08aa5a90 +0x0a0:  lea    -0x40(%ebp),%eax
08aa5a93 +0x0a3:  mov    %eax,(%esp)
08aa5a96 +0x0a6:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08aa5a9b +0x0ab:  jmp    08aa5ab8 <+0xc8>
08aa5a9d +0x0ad:  mov    %edx,%ebx
08aa5a9f +0x0af:  mov    %eax,%esi
08aa5aa1 +0x0b1:  lea    -0x39(%ebp),%eax
08aa5aa4 +0x0b4:  mov    %eax,(%esp)
08aa5aa7 +0x0b7:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08aa5aac +0x0bc:  mov    %esi,%eax
08aa5aae +0x0be:  mov    %ebx,%edx
08aa5ab0 +0x0c0:  mov    %eax,(%esp)
08aa5ab3 +0x0c3:  call   08ae3750 <_Unwind_Resume>
08aa5ab8 +0x0c8:  lea    -0x39(%ebp),%eax
08aa5abb +0x0cb:  mov    %eax,(%esp)
08aa5abe +0x0ce:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08aa5ac3 +0x0d3:  movb   $0x20,-0x31(%ebp)
08aa5ac7 +0x0d7:  lea    -0x30(%ebp),%eax
08aa5aca +0x0da:  lea    -0x40(%ebp),%edx
08aa5acd +0x0dd:  mov    %edx,0x4(%esp)
08aa5ad1 +0x0e1:  mov    %eax,(%esp)
08aa5ad4 +0x0e4:  call   08708ef0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b00
08aa5ad9 +0x0e9:  sub    $0x4,%esp
08aa5adc +0x0ec:  lea    -0x2c(%ebp),%eax
08aa5adf +0x0ef:  lea    -0x40(%ebp),%edx
08aa5ae2 +0x0f2:  mov    %edx,0x4(%esp)
08aa5ae6 +0x0f6:  mov    %eax,(%esp)
08aa5ae9 +0x0f9:  call   08708f30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b40
08aa5aee +0x0fe:  sub    $0x4,%esp
08aa5af1 +0x101:  lea    -0x38(%ebp),%eax
08aa5af4 +0x104:  lea    -0x31(%ebp),%edx
08aa5af7 +0x107:  mov    %edx,0xc(%esp)
08aa5afb +0x10b:  mov    -0x30(%ebp),%edx
08aa5afe +0x10e:  mov    %edx,0x8(%esp)
08aa5b02 +0x112:  mov    -0x2c(%ebp),%edx
08aa5b05 +0x115:  mov    %edx,0x4(%esp)
08aa5b09 +0x119:  mov    %eax,(%esp)
08aa5b0c +0x11c:  call   08a66271 <_GLOBAL__I_g_questScriptBaseDirectory+0x2c8>  ; global constructors keyed to g_questScriptBaseDirectory+0x2c8
08aa5b11 +0x121:  sub    $0x4,%esp
08aa5b14 +0x124:  lea    -0x40(%ebp),%eax
08aa5b17 +0x127:  mov    %eax,(%esp)
08aa5b1a +0x12a:  call   08adf0f6 <_Z9toUnicodeRKSs>  ; toUnicode(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08aa5b1f +0x12f:  mov    0x18(%ebp),%edx
08aa5b22 +0x132:  mov    %edx,0x4(%esp)
08aa5b26 +0x136:  mov    %eax,(%esp)
08aa5b29 +0x139:  call   0807e180 <_init+0xa78>
08aa5b2e +0x13e:  test   %eax,%eax
08aa5b30 +0x140:  setne  %al
08aa5b33 +0x143:  test   %al,%al
08aa5b35 +0x145:  je     08aa5c80 <+0x290>
08aa5b3b +0x14b:  mov    -0x18(%ebp),%eax
08aa5b3e +0x14e:  mov    (%eax),%eax
08aa5b40 +0x150:  mov    -0x14(%ebp),%edx
08aa5b43 +0x153:  mov    %edx,0x4(%esp)
08aa5b47 +0x157:  mov    %eax,(%esp)
08aa5b4a +0x15a:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5b4f +0x15f:  mov    %eax,-0xc(%ebp)
08aa5b52 +0x162:  cmpl   $0x0,-0xc(%ebp)
08aa5b56 +0x166:  je     08aa5c80 <+0x290>
08aa5b5c +0x16c:  lea    -0x21(%ebp),%eax
08aa5b5f +0x16f:  mov    %eax,(%esp)
08aa5b62 +0x172:  call   086e0100 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x60>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x60
08aa5b67 +0x177:  mov    -0xc(%ebp),%eax
08aa5b6a +0x17a:  mov    %eax,(%esp)
08aa5b6d +0x17d:  call   08adf1b3 <_Z9toUnicodePKc>  ; toUnicode(char const*)
08aa5b72 +0x182:  lea    -0x21(%ebp),%edx
08aa5b75 +0x185:  mov    %edx,0x8(%esp)
08aa5b79 +0x189:  mov    %eax,0x4(%esp)
08aa5b7d +0x18d:  lea    -0x28(%ebp),%eax
08aa5b80 +0x190:  mov    %eax,(%esp)
08aa5b83 +0x193:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
08aa5b88 +0x198:  lea    -0x28(%ebp),%eax
08aa5b8b +0x19b:  mov    %eax,0x4(%esp)
08aa5b8f +0x19f:  mov    0xc(%ebp),%eax
08aa5b92 +0x1a2:  mov    %eax,(%esp)
08aa5b95 +0x1a5:  call   08aa69fc <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2de>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2de
08aa5b9a +0x1aa:  jmp    08aa5bb1 <+0x1c1>
08aa5b9c +0x1ac:  mov    %edx,%ebx
08aa5b9e +0x1ae:  mov    %eax,%esi
08aa5ba0 +0x1b0:  lea    -0x28(%ebp),%eax
08aa5ba3 +0x1b3:  mov    %eax,(%esp)
08aa5ba6 +0x1b6:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa5bab +0x1bb:  mov    %esi,%eax
08aa5bad +0x1bd:  mov    %ebx,%edx
08aa5baf +0x1bf:  jmp    08aa5bbe <+0x1ce>
08aa5bb1 +0x1c1:  lea    -0x28(%ebp),%eax
08aa5bb4 +0x1c4:  mov    %eax,(%esp)
08aa5bb7 +0x1c7:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa5bbc +0x1cc:  jmp    08aa5bd6 <+0x1e6>
08aa5bbe +0x1ce:  mov    %edx,%ebx
08aa5bc0 +0x1d0:  mov    %eax,%esi
08aa5bc2 +0x1d2:  lea    -0x21(%ebp),%eax
08aa5bc5 +0x1d5:  mov    %eax,(%esp)
08aa5bc8 +0x1d8:  call   086e0120 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x80>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x80
08aa5bcd +0x1dd:  mov    %esi,%eax
08aa5bcf +0x1df:  mov    %ebx,%edx
08aa5bd1 +0x1e1:  jmp    08aa5c65 <+0x275>
08aa5bd6 +0x1e6:  lea    -0x21(%ebp),%eax
08aa5bd9 +0x1e9:  mov    %eax,(%esp)
08aa5bdc +0x1ec:  call   086e0120 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x80>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x80
08aa5be1 +0x1f1:  lea    -0x19(%ebp),%eax
08aa5be4 +0x1f4:  mov    %eax,(%esp)
08aa5be7 +0x1f7:  call   086e0100 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x60>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x60
08aa5bec +0x1fc:  mov    -0x10(%ebp),%eax
08aa5bef +0x1ff:  mov    %eax,(%esp)
08aa5bf2 +0x202:  call   08adf1b3 <_Z9toUnicodePKc>  ; toUnicode(char const*)
08aa5bf7 +0x207:  lea    -0x19(%ebp),%edx
08aa5bfa +0x20a:  mov    %edx,0x8(%esp)
08aa5bfe +0x20e:  mov    %eax,0x4(%esp)
08aa5c02 +0x212:  lea    -0x20(%ebp),%eax
08aa5c05 +0x215:  mov    %eax,(%esp)
08aa5c08 +0x218:  call   0871d180 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7b64
08aa5c0d +0x21d:  lea    -0x20(%ebp),%eax
08aa5c10 +0x220:  mov    %eax,0x4(%esp)
08aa5c14 +0x224:  mov    0x10(%ebp),%eax
08aa5c17 +0x227:  mov    %eax,(%esp)
08aa5c1a +0x22a:  call   08aa69fc <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2de>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2de
08aa5c1f +0x22f:  jmp    08aa5c36 <+0x246>
08aa5c21 +0x231:  mov    %edx,%ebx
08aa5c23 +0x233:  mov    %eax,%esi
08aa5c25 +0x235:  lea    -0x20(%ebp),%eax
08aa5c28 +0x238:  mov    %eax,(%esp)
08aa5c2b +0x23b:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa5c30 +0x240:  mov    %esi,%eax
08aa5c32 +0x242:  mov    %ebx,%edx
08aa5c34 +0x244:  jmp    08aa5c43 <+0x253>
08aa5c36 +0x246:  lea    -0x20(%ebp),%eax
08aa5c39 +0x249:  mov    %eax,(%esp)
08aa5c3c +0x24c:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa5c41 +0x251:  jmp    08aa5c58 <+0x268>
08aa5c43 +0x253:  mov    %edx,%ebx
08aa5c45 +0x255:  mov    %eax,%esi
08aa5c47 +0x257:  lea    -0x19(%ebp),%eax
08aa5c4a +0x25a:  mov    %eax,(%esp)
08aa5c4d +0x25d:  call   086e0120 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x80>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x80
08aa5c52 +0x262:  mov    %esi,%eax
08aa5c54 +0x264:  mov    %ebx,%edx
08aa5c56 +0x266:  jmp    08aa5c65 <+0x275>
08aa5c58 +0x268:  lea    -0x19(%ebp),%eax
08aa5c5b +0x26b:  mov    %eax,(%esp)
08aa5c5e +0x26e:  call   086e0120 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x80>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x80
08aa5c63 +0x273:  jmp    08aa5c80 <+0x290>
08aa5c65 +0x275:  mov    %edx,%ebx
08aa5c67 +0x277:  mov    %eax,%esi
08aa5c69 +0x279:  lea    -0x40(%ebp),%eax
08aa5c6c +0x27c:  mov    %eax,(%esp)
08aa5c6f +0x27f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa5c74 +0x284:  mov    %esi,%eax
08aa5c76 +0x286:  mov    %ebx,%edx
08aa5c78 +0x288:  mov    %eax,(%esp)
08aa5c7b +0x28b:  call   08ae3750 <_Unwind_Resume>
08aa5c80 +0x290:  lea    -0x40(%ebp),%eax
08aa5c83 +0x293:  mov    %eax,(%esp)
08aa5c86 +0x296:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08aa5c8b +0x29b:  addl   $0x1,-0x14(%ebp)
08aa5c8f +0x29f:  mov    -0x18(%ebp),%eax
08aa5c92 +0x2a2:  mov    (%eax),%eax
08aa5c94 +0x2a4:  mov    %eax,(%esp)
08aa5c97 +0x2a7:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5c9c +0x2ac:  cmp    -0x14(%ebp),%eax
08aa5c9f +0x2af:  setg   %al
08aa5ca2 +0x2b2:  test   %al,%al
08aa5ca4 +0x2b4:  jne    08aa5a56 <+0x66>
08aa5caa +0x2ba:  mov    $0x1,%eax
08aa5caf +0x2bf:  lea    -0x8(%ebp),%esp
08aa5cb2 +0x2c2:  add    $0x0,%esp
08aa5cb5 +0x2c5:  pop    %ebx
08aa5cb6 +0x2c6:  pop    %esi
08aa5cb7 +0x2c7:  pop    %ebp
08aa5cb8 +0x2c8:  ret
08aa5cb9 +0x2c9:  nop
```

## 反编译 C

```c
// RDARScriptStringManager::getTagByName @ 0x8aa59f0

/* RDARScriptStringManager::getTagByName(std::vector<std::wstring, std::allocator<std::wstring > >*,
   std::vector<std::wstring, std::allocator<std::wstring > >*, int, wchar_t const*) const */

undefined4 __thiscall
RDARScriptStringManager::getTagByName
          (RDARScriptStringManager *this,vector *param_1,vector *param_2,int param_3,
          wchar_t *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_64 [2];
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined1 local_3c [7];
  undefined1 local_35;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  undefined1 local_24 [7];
  undefined1 local_1d;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((param_1 == (vector *)0x0) || (param_2 == (vector *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if ((uint)param_3 < uVar2) {
      local_1c = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_3);
      local_18 = 0;
      piVar6 = (int *)&stack0xffffffa4;
      while( true ) {
        *piVar6 = *local_1c;
        piVar6[-1] = 0x8aa5c9c;
        iVar4 = StringDictionary::getCount((StringDictionary *)*piVar6);
        if (iVar4 <= local_18) break;
        uVar1 = *local_1c;
        piVar6[1] = local_18;
        *piVar6 = uVar1;
        piVar6[-1] = 0x8aa5a6a;
        local_14 = StringDictionary::getValue((StringDictionary *)*piVar6,piVar6[1]);
        piVar5 = piVar6;
        if (local_14 != 0) {
          *piVar6 = (int)&local_3d;
          piVar6[-1] = 0x8aa5a82;
          std::allocator<char>::allocator();
          piVar6[2] = (int)&local_3d;
          piVar6[1] = local_14;
          *piVar6 = (int)local_44;
                    /* try { // try from 08aa5a96 to 08aa5a9a has its CatchHandler @ 08aa5a9d */
          piVar6[-1] = 0x8aa5a9b;
          std::string::string((string *)*piVar6,(char *)piVar6[1],(allocator *)piVar6[2]);
          *piVar6 = (int)&local_3d;
          piVar6[-1] = 0x8aa5ac3;
          std::allocator<char>::~allocator((allocator<char> *)*piVar6);
          local_35 = 0x20;
          piVar6[1] = (int)local_44;
          *piVar6 = (int)&local_34;
                    /* try { // try from 08aa5ad4 to 08aa5b4e has its CatchHandler @ 08aa5c65 */
          piVar6[-1] = 0x8aa5ad9;
          std::string::end();
          piVar6[1] = (int)local_44;
          *piVar6 = (int)&local_30;
          piVar6[-1] = 0x8aa5aee;
          std::string::begin();
          piVar6[3] = (int)&local_35;
          piVar6[2] = local_34;
          piVar6[1] = local_30;
          *piVar6 = (int)local_3c;
          piVar6[-1] = 0x8aa5b11;
          std::remove<__gnu_cxx::__normal_iterator<char*,std::string>,char>();
          piVar5 = piVar6 + -1;
          piVar6[-1] = (int)local_44;
          piVar6[-2] = 0x8aa5b1f;
          pwVar3 = toUnicode((string *)piVar6[-1]);
          *piVar6 = (int)param_4;
          piVar6[-1] = (int)pwVar3;
          piVar6[-2] = 0x8aa5b2e;
          pwVar3 = wcsstr((wchar_t *)piVar6[-1],(wchar_t *)*piVar6);
          if (pwVar3 != (wchar_t *)0x0) {
            uVar1 = *local_1c;
            *piVar6 = local_18;
            piVar6[-1] = uVar1;
            piVar6[-2] = 0x8aa5b4f;
            local_10 = StringDictionary::getKey((StringDictionary *)piVar6[-1],*piVar6);
            if (local_10 != 0) {
              piVar6[-1] = (int)&local_25;
              piVar6[-2] = 0x8aa5b67;
              std::allocator<wchar_t>::allocator();
              piVar6[-1] = local_10;
                    /* try { // try from 08aa5b6d to 08aa5b87 has its CatchHandler @ 08aa5bbe */
              piVar6[-2] = 0x8aa5b72;
              pwVar3 = toUnicode((char *)piVar6[-1]);
              piVar6[1] = (int)&local_25;
              *piVar6 = (int)pwVar3;
              piVar6[-1] = (int)local_2c;
              piVar6[-2] = 0x8aa5b88;
              std::wstring::wstring((wstring *)piVar6[-1],(wchar_t *)*piVar6,(allocator *)piVar6[1])
              ;
              *piVar6 = (int)local_2c;
              piVar6[-1] = (int)param_1;
                    /* try { // try from 08aa5b95 to 08aa5b99 has its CatchHandler @ 08aa5b9c */
              piVar6[-2] = 0x8aa5b9a;
              std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                        ((vector<std::wstring,std::allocator<std::wstring>> *)piVar6[-1],
                         (wstring *)*piVar6);
              piVar6[-1] = (int)local_2c;
                    /* try { // try from 08aa5bb7 to 08aa5bbb has its CatchHandler @ 08aa5bbe */
              piVar6[-2] = 0x8aa5bbc;
              std::wstring::~wstring((wstring *)piVar6[-1]);
              piVar6[-1] = (int)&local_25;
              piVar6[-2] = 0x8aa5be1;
              std::allocator<wchar_t>::~allocator((allocator<wchar_t> *)piVar6[-1]);
              piVar6[-1] = (int)&local_1d;
              piVar6[-2] = 0x8aa5bec;
              std::allocator<wchar_t>::allocator();
              piVar6[-1] = local_14;
                    /* try { // try from 08aa5bf2 to 08aa5c0c has its CatchHandler @ 08aa5c43 */
              piVar6[-2] = 0x8aa5bf7;
              pwVar3 = toUnicode((char *)piVar6[-1]);
              piVar6[1] = (int)&local_1d;
              *piVar6 = (int)pwVar3;
              piVar6[-1] = (int)local_24;
              piVar6[-2] = 0x8aa5c0d;
              std::wstring::wstring((wstring *)piVar6[-1],(wchar_t *)*piVar6,(allocator *)piVar6[1])
              ;
              *piVar6 = (int)local_24;
              piVar6[-1] = (int)param_2;
                    /* try { // try from 08aa5c1a to 08aa5c1e has its CatchHandler @ 08aa5c21 */
              piVar6[-2] = 0x8aa5c1f;
              std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                        ((vector<std::wstring,std::allocator<std::wstring>> *)piVar6[-1],
                         (wstring *)*piVar6);
              piVar6[-1] = (int)local_24;
                    /* try { // try from 08aa5c3c to 08aa5c40 has its CatchHandler @ 08aa5c43 */
              piVar6[-2] = 0x8aa5c41;
              std::wstring::~wstring((wstring *)piVar6[-1]);
              piVar6[-1] = (int)&local_1d;
              piVar6[-2] = 0x8aa5c63;
              std::allocator<wchar_t>::~allocator((allocator<wchar_t> *)piVar6[-1]);
            }
          }
          piVar6[-1] = (int)local_44;
          piVar6[-2] = 0x8aa5c8b;
          std::string::~string((string *)piVar6[-1]);
        }
        local_18 = local_18 + 1;
        piVar6 = piVar5;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
