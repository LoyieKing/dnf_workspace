# VisitEnter

`_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute`

`TiXmlPrinter::VisitEnter(TiXmlElement const&, TiXmlAttribute const*)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e4a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4a60  _ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute
#           TiXmlPrinter::VisitEnter(TiXmlElement const&, TiXmlAttribute const*)
# range [0x087e4a60, 0x087e4d59]
087e4a60 +0x000:  push   %ebp
087e4a61 +0x001:  mov    %esp,%ebp
087e4a63 +0x003:  push   %edi
087e4a64 +0x004:  push   %esi
087e4a65 +0x005:  push   %ebx
087e4a66 +0x006:  sub    $0x3c,%esp
087e4a69 +0x009:  mov    0x8(%ebp),%eax
087e4a6c +0x00c:  mov    0x4(%eax),%ecx
087e4a6f +0x00f:  lea    0xc(%eax),%esi
087e4a72 +0x012:  test   %ecx,%ecx
087e4a74 +0x014:  jle    087e4aa2 <+0x42>
087e4a76 +0x016:  mov    %eax,%edi
087e4a78 +0x018:  xor    %ebx,%ebx
087e4a7a +0x01a:  mov    %esi,-0x2c(%ebp)
087e4a7d +0x01d:  add    $0x10,%edi
087e4a80 +0x020:  mov    %eax,%esi
087e4a82 +0x022:  lea    0x0(%esi),%esi
087e4a88 +0x028:  mov    -0x2c(%ebp),%edx
087e4a8b +0x02b:  add    $0x1,%ebx
087e4a8e +0x02e:  mov    %edi,0x4(%esp)
087e4a92 +0x032:  mov    %edx,(%esp)
087e4a95 +0x035:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4a9a +0x03a:  cmp    0x4(%esi),%ebx
087e4a9d +0x03d:  jl     087e4a88 <+0x28>
087e4a9f +0x03f:  mov    -0x2c(%ebp),%esi
087e4aa2 +0x042:  movl   $0x1,0x8(%esp)
087e4aaa +0x04a:  movl   $"<",0x4(%esp)
087e4ab2 +0x052:  mov    %esi,(%esp)
087e4ab5 +0x055:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4aba +0x05a:  mov    0xc(%ebp),%eax
087e4abd +0x05d:  mov    0x20(%eax),%ebx
087e4ac0 +0x060:  mov    %ebx,(%esp)
087e4ac3 +0x063:  call   0807e3b0 <_init+0xca8>
087e4ac8 +0x068:  mov    %ebx,0x4(%esp)
087e4acc +0x06c:  mov    %esi,(%esp)
087e4acf +0x06f:  mov    %eax,0x8(%esp)
087e4ad3 +0x073:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4ad8 +0x078:  mov    0x10(%ebp),%edx
087e4adb +0x07b:  test   %edx,%edx
087e4add +0x07d:  je     087e4be4 <+0x184>
087e4ae3 +0x083:  mov    0x10(%ebp),%ebx
087e4ae6 +0x086:  xchg   %ax,%ax
087e4ae8 +0x088:  movl   $0x1,0x8(%esp)
087e4af0 +0x090:  movl   $" ",0x4(%esp)
087e4af8 +0x098:  mov    %esi,(%esp)
087e4afb +0x09b:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4b00 +0x0a0:  lea    -0x20(%ebp),%edx
087e4b03 +0x0a3:  lea    0x14(%ebx),%eax
087e4b06 +0x0a6:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x24(%ebp)
087e4b0d +0x0ad:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e4b14 +0x0b4:  mov    %edx,0x4(%esp)
087e4b18 +0x0b8:  mov    %eax,(%esp)
087e4b1b +0x0bb:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4b20 +0x0c0:  lea    0x18(%ebx),%edi
087e4b23 +0x0c3:  lea    -0x24(%ebp),%eax
087e4b26 +0x0c6:  mov    %eax,0x4(%esp)
087e4b2a +0x0ca:  mov    %edi,(%esp)
087e4b2d +0x0cd:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4b32 +0x0d2:  movl   $0x0,0x8(%esp)
087e4b3a +0x0da:  movl   $0x22,0x4(%esp)
087e4b42 +0x0e2:  mov    %edi,(%esp)
087e4b45 +0x0e5:  call   08707000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xc10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xc10
087e4b4a +0x0ea:  cmp    $0xffffffff,%eax
087e4b4d +0x0ed:  je     087e4c50 <+0x1f0>
087e4b53 +0x0f3:  lea    -0x20(%ebp),%edx
087e4b56 +0x0f6:  mov    %edx,0x4(%esp)
087e4b5a +0x0fa:  mov    %esi,(%esp)
087e4b5d +0x0fd:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4b62 +0x102:  movl   $0x2,0x8(%esp)
087e4b6a +0x10a:  movl   $"='",0x4(%esp)
087e4b72 +0x112:  mov    %esi,(%esp)
087e4b75 +0x115:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4b7a +0x11a:  lea    -0x24(%ebp),%eax
087e4b7d +0x11d:  mov    %eax,0x4(%esp)
087e4b81 +0x121:  mov    %esi,(%esp)
087e4b84 +0x124:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4b89 +0x129:  movl   $0x1,0x8(%esp)
087e4b91 +0x131:  movl   $"'",0x4(%esp)
087e4b99 +0x139:  mov    %esi,(%esp)
087e4b9c +0x13c:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4ba1 +0x141:  mov    -0x24(%ebp),%eax
087e4ba4 +0x144:  sub    $0xc,%eax
087e4ba7 +0x147:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e4bac +0x14c:  jne    087e4cc5 <+0x265>
087e4bb2 +0x152:  mov    -0x20(%ebp),%eax
087e4bb5 +0x155:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e4bba +0x15a:  sub    $0xc,%eax
087e4bbd +0x15d:  cmp    %eax,%edx
087e4bbf +0x15f:  jne    087e4cf2 <+0x292>
087e4bc5 +0x165:  mov    0x20(%ebx),%ebx
087e4bc8 +0x168:  mov    0x18(%ebx),%eax
087e4bcb +0x16b:  mov    -0xc(%eax),%eax
087e4bce +0x16e:  test   %eax,%eax
087e4bd0 +0x170:  jne    087e4ae8 <+0x88>
087e4bd6 +0x176:  mov    0x14(%ebx),%eax
087e4bd9 +0x179:  mov    -0xc(%eax),%edi
087e4bdc +0x17c:  test   %edi,%edi
087e4bde +0x17e:  jne    087e4ae8 <+0x88>
087e4be4 +0x184:  mov    0xc(%ebp),%eax
087e4be7 +0x187:  mov    0x18(%eax),%ecx
087e4bea +0x18a:  test   %ecx,%ecx
087e4bec +0x18c:  je     087e4c93 <+0x233>
087e4bf2 +0x192:  movl   $0x1,0x8(%esp)
087e4bfa +0x19a:  movl   $">",0x4(%esp)
087e4c02 +0x1a2:  mov    %esi,(%esp)
087e4c05 +0x1a5:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4c0a +0x1aa:  mov    0xc(%ebp),%edx
087e4c0d +0x1ad:  mov    0x18(%edx),%eax
087e4c10 +0x1b0:  mov    (%eax),%edx
087e4c12 +0x1b2:  mov    %eax,(%esp)
087e4c15 +0x1b5:  call   *0x20(%edx)
087e4c18 +0x1b8:  test   %eax,%eax
087e4c1a +0x1ba:  je     087e4c27 <+0x1c7>
087e4c1c +0x1bc:  mov    0xc(%ebp),%edx
087e4c1f +0x1bf:  mov    0x1c(%edx),%eax
087e4c22 +0x1c2:  cmp    0x18(%edx),%eax
087e4c25 +0x1c5:  je     087e4ca5 <+0x245>
087e4c27 +0x1c7:  mov    0x8(%ebp),%eax
087e4c2a +0x1ca:  mov    %esi,(%esp)
087e4c2d +0x1cd:  add    $0x14,%eax
087e4c30 +0x1d0:  mov    %eax,0x4(%esp)
087e4c34 +0x1d4:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4c39 +0x1d9:  mov    0x8(%ebp),%edx
087e4c3c +0x1dc:  addl   $0x1,0x4(%edx)
087e4c40 +0x1e0:  mov    $0x1,%eax
087e4c45 +0x1e5:  add    $0x3c,%esp
087e4c48 +0x1e8:  pop    %ebx
087e4c49 +0x1e9:  pop    %esi
087e4c4a +0x1ea:  pop    %edi
087e4c4b +0x1eb:  pop    %ebp
087e4c4c +0x1ec:  ret
087e4c4d +0x1ed:  lea    0x0(%esi),%esi
087e4c50 +0x1f0:  lea    -0x20(%ebp),%edx
087e4c53 +0x1f3:  mov    %edx,0x4(%esp)
087e4c57 +0x1f7:  mov    %esi,(%esp)
087e4c5a +0x1fa:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4c5f +0x1ff:  movl   $"=\"",0x4(%esp)
087e4c67 +0x207:  mov    %esi,(%esp)
087e4c6a +0x20a:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
087e4c6f +0x20f:  lea    -0x24(%ebp),%eax
087e4c72 +0x212:  mov    %eax,0x4(%esp)
087e4c76 +0x216:  mov    %esi,(%esp)
087e4c79 +0x219:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4c7e +0x21e:  movl   $"\"",0x4(%esp)
087e4c86 +0x226:  mov    %esi,(%esp)
087e4c89 +0x229:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
087e4c8e +0x22e:  jmp    087e4ba1 <+0x141>
087e4c93 +0x233:  movl   $" />",0x4(%esp)
087e4c9b +0x23b:  mov    %esi,(%esp)
087e4c9e +0x23e:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
087e4ca3 +0x243:  jmp    087e4c27 <+0x1c7>
087e4ca5 +0x245:  mov    (%eax),%edx
087e4ca7 +0x247:  mov    %eax,(%esp)
087e4caa +0x24a:  call   *0x20(%edx)
087e4cad +0x24d:  cmpb   $0x0,0x2c(%eax)
087e4cb1 +0x251:  jne    087e4c27 <+0x1c7>
087e4cb7 +0x257:  mov    0x8(%ebp),%eax
087e4cba +0x25a:  movb   $0x1,0x8(%eax)
087e4cbe +0x25e:  mov    %eax,%edx
087e4cc0 +0x260:  jmp    087e4c3c <+0x1dc>
087e4cc5 +0x265:  mov    $&data#bb92cc41(.plt),%edx
087e4cca +0x26a:  test   %edx,%edx
087e4ccc +0x26c:  je     087e4d3f <+0x2df>
087e4cce +0x26e:  or     $0xffffffff,%edx
087e4cd1 +0x271:  lock xadd %edx,0x8(%eax)
087e4cd6 +0x276:  test   %edx,%edx
087e4cd8 +0x278:  jg     087e4bb2 <+0x152>
087e4cde +0x27e:  lea    -0x19(%ebp),%edx
087e4ce1 +0x281:  mov    %edx,0x4(%esp)
087e4ce5 +0x285:  mov    %eax,(%esp)
087e4ce8 +0x288:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e4ced +0x28d:  jmp    087e4bb2 <+0x152>
087e4cf2 +0x292:  mov    $&data#bb92cc41(.plt),%edx
087e4cf7 +0x297:  test   %edx,%edx
087e4cf9 +0x299:  je     087e4d4a <+0x2ea>
087e4cfb +0x29b:  or     $0xffffffff,%edx
087e4cfe +0x29e:  lock xadd %edx,0x8(%eax)
087e4d03 +0x2a3:  test   %edx,%edx
087e4d05 +0x2a5:  jg     087e4bc5 <+0x165>
087e4d0b +0x2ab:  lea    -0x1a(%ebp),%edx
087e4d0e +0x2ae:  mov    %edx,0x4(%esp)
087e4d12 +0x2b2:  mov    %eax,(%esp)
087e4d15 +0x2b5:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e4d1a +0x2ba:  jmp    087e4bc5 <+0x165>
087e4d1f +0x2bf:  lea    -0x24(%ebp),%edx
087e4d22 +0x2c2:  mov    %eax,%ebx
087e4d24 +0x2c4:  mov    %edx,(%esp)
087e4d27 +0x2c7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e4d2c +0x2cc:  lea    -0x20(%ebp),%eax
087e4d2f +0x2cf:  mov    %eax,(%esp)
087e4d32 +0x2d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e4d37 +0x2d7:  mov    %ebx,(%esp)
087e4d3a +0x2da:  call   08ae3750 <_Unwind_Resume>
087e4d3f +0x2df:  mov    0x8(%eax),%edx
087e4d42 +0x2e2:  lea    -0x1(%edx),%ecx
087e4d45 +0x2e5:  mov    %ecx,0x8(%eax)
087e4d48 +0x2e8:  jmp    087e4cd6 <+0x276>
087e4d4a +0x2ea:  mov    0x8(%eax),%edx
087e4d4d +0x2ed:  lea    -0x1(%edx),%ecx
087e4d50 +0x2f0:  mov    %ecx,0x8(%eax)
087e4d53 +0x2f3:  jmp    087e4d03 <+0x2a3>
087e4d55 +0x2f5:  nop
087e4d56 +0x2f6:  lea    0x0(%esi),%esi
087e4d59 +0x2f9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlPrinter::VisitEnter @ 0x87e4a60

/* WARNING: Removing unreachable block (ram,0x087e4d3f) */
/* WARNING: Removing unreachable block (ram,0x087e4d4a) */
/* TiXmlPrinter::VisitEnter(TiXmlElement const&, TiXmlAttribute const*) */

undefined4 __thiscall
TiXmlPrinter::VisitEnter(TiXmlPrinter *this,TiXmlElement *param_1,TiXmlAttribute *param_2)

{
  string *this_00;
  char *__s;
  TiXmlAttribute *pTVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *local_28;
  undefined1 *local_24 [5];
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar4 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<",1);
  __s = *(char **)(param_1 + 0x20);
  sVar3 = strlen(__s);
  std::string::append(this_00,__s,sVar3);
  pTVar1 = param_2;
  while (pTVar1 != (TiXmlAttribute *)0x0) {
    do {
      std::string::append(this_00," ",1);
      local_28 = &DAT_0948ccfc;
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4b1b to 087e4ba0 has its CatchHandler @ 087e4d1f */
      TiXmlBase::EncodeString((string *)(param_2 + 0x14),(string *)local_24);
      TiXmlBase::EncodeString((string *)(param_2 + 0x18),(string *)&local_28);
      iVar4 = std::string::find((string *)(param_2 + 0x18),'\"',0);
      if (iVar4 == -1) {
                    /* try { // try from 087e4c5a to 087e4c8d has its CatchHandler @ 087e4d1f */
        std::string::append(this_00,(string *)local_24);
        std::string::append(this_00,"=\"");
        std::string::append(this_00,(string *)&local_28);
        std::string::append(this_00,"\"");
      }
      else {
        std::string::append(this_00,(string *)local_24);
        std::string::append(this_00,"=\'",2);
        std::string::append(this_00,(string *)&local_28);
        std::string::append(this_00,"\'",1);
      }
      if ((allocator *)(local_28 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar2 = (int *)(local_28 + -4);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
        }
      }
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar2 = (int *)(local_24[0] + -4);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
      param_2 = *(TiXmlAttribute **)(param_2 + 0x20);
    } while (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != 0);
    pTVar1 = *(TiXmlAttribute **)(*(int *)(param_2 + 0x14) + -0xc);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    std::string::append(this_00," />");
  }
  else {
    std::string::append(this_00,">",1);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(*(int **)(param_1 + 0x18));
    if (((iVar4 != 0) && (piVar2 = *(int **)(param_1 + 0x1c), piVar2 == *(int **)(param_1 + 0x18)))
       && (iVar4 = (**(code **)(*piVar2 + 0x20))(piVar2), *(char *)(iVar4 + 0x2c) == '\0')) {
      this[8] = (TiXmlPrinter)0x1;
      goto LAB_087e4c3c;
    }
  }
  std::string::append(this_00,(string *)(this + 0x14));
LAB_087e4c3c:
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return 1;
}
```
