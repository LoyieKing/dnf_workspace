# COpensslRSA

`_GLOBAL__I__ZN11COpensslRSAC2Ev`

`global constructors keyed to COpensslRSA::COpensslRSA()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to COpensslRSA` | `0x0816c6f9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c6f9  _GLOBAL__I__ZN11COpensslRSAC2Ev
#           global constructors keyed to COpensslRSA::COpensslRSA()
# range [0x0816c6f9, 0x0816d43f]
0816c6f9 +0x000:  push   %ebp
0816c6fa +0x001:  mov    %esp,%ebp
0816c6fc +0x003:  sub    $0x18,%esp
0816c6ff +0x006:  movl   $0xffff,0x4(%esp)
0816c707 +0x00e:  movl   $0x1,(%esp)
0816c70e +0x015:  call   0816c6b9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0816c713 +0x01a:  leave
0816c714 +0x01b:  ret
0816c715 +0x01c:  push   %ebp
0816c716 +0x01d:  mov    %esp,%ebp
0816c718 +0x01f:  push   %esi
0816c719 +0x020:  push   %ebx
0816c71a +0x021:  sub    $0x20,%esp
0816c71d +0x024:  mov    0x8(%ebp),%ebx
0816c720 +0x027:  mov    %ebx,%esi
0816c722 +0x029:  lea    -0x9(%ebp),%eax
0816c725 +0x02c:  mov    %eax,(%esp)
0816c728 +0x02f:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0816c72d +0x034:  lea    -0x9(%ebp),%eax
0816c730 +0x037:  mov    %eax,0x8(%esp)
0816c734 +0x03b:  movl   $"",0x4(%esp)
0816c73c +0x043:  mov    %esi,(%esp)
0816c73f +0x046:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0816c744 +0x04b:  jmp    0816c761 <+0x68>
0816c746 +0x04d:  mov    %edx,%ebx
0816c748 +0x04f:  mov    %eax,%esi
0816c74a +0x051:  lea    -0x9(%ebp),%eax
0816c74d +0x054:  mov    %eax,(%esp)
0816c750 +0x057:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0816c755 +0x05c:  mov    %esi,%eax
0816c757 +0x05e:  mov    %ebx,%edx
0816c759 +0x060:  mov    %eax,(%esp)
0816c75c +0x063:  call   08ae3750 <_Unwind_Resume>
0816c761 +0x068:  lea    -0x9(%ebp),%eax
0816c764 +0x06b:  mov    %eax,(%esp)
0816c767 +0x06e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0816c76c +0x073:  mov    %ebx,%eax
0816c76e +0x075:  mov    %ebx,%eax
0816c770 +0x077:  add    $0x20,%esp
0816c773 +0x07a:  pop    %ebx
0816c774 +0x07b:  pop    %esi
0816c775 +0x07c:  pop    %ebp
0816c776 +0x07d:  ret    $0x4
0816c779 +0x080:  push   %ebp
0816c77a +0x081:  mov    %esp,%ebp
0816c77c +0x083:  push   %edi
0816c77d +0x084:  push   %esi
0816c77e +0x085:  push   %ebx
0816c77f +0x086:  sub    $0x1c,%esp
0816c782 +0x089:  mov    0x8(%ebp),%ebx
0816c785 +0x08c:  mov    %ebx,%eax
0816c787 +0x08e:  mov    0xc(%ebp),%edx
0816c78a +0x091:  mov    %edx,0x4(%esp)
0816c78e +0x095:  mov    %eax,(%esp)
0816c791 +0x098:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0816c796 +0x09d:  mov    %ebx,%eax
0816c798 +0x09f:  mov    0x10(%ebp),%edx
0816c79b +0x0a2:  mov    %edx,0x4(%esp)
0816c79f +0x0a6:  mov    %eax,(%esp)
0816c7a2 +0x0a9:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
0816c7a7 +0x0ae:  jmp    0816c7c3 <+0xca>
0816c7a9 +0x0b0:  mov    %edx,%esi
0816c7ab +0x0b2:  mov    %eax,%edi
0816c7ad +0x0b4:  mov    %ebx,%eax
0816c7af +0x0b6:  mov    %eax,(%esp)
0816c7b2 +0x0b9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0816c7b7 +0x0be:  mov    %edi,%eax
0816c7b9 +0x0c0:  mov    %esi,%edx
0816c7bb +0x0c2:  mov    %eax,(%esp)
0816c7be +0x0c5:  call   08ae3750 <_Unwind_Resume>
0816c7c3 +0x0ca:  mov    %ebx,%eax
0816c7c5 +0x0cc:  mov    %ebx,%eax
0816c7c7 +0x0ce:  add    $0x1c,%esp
0816c7ca +0x0d1:  pop    %ebx
0816c7cb +0x0d2:  pop    %esi
0816c7cc +0x0d3:  pop    %edi
0816c7cd +0x0d4:  pop    %ebp
0816c7ce +0x0d5:  ret    $0x4
0816c7d1 +0x0d8:  nop
0816c7d2 +0x0d9:  push   %ebp
0816c7d3 +0x0da:  mov    %esp,%ebp
0816c7d5 +0x0dc:  push   %ebx
0816c7d6 +0x0dd:  sub    $0x34,%esp
0816c7d9 +0x0e0:  mov    0x10(%ebp),%eax
0816c7dc +0x0e3:  mov    %al,-0x1c(%ebp)
0816c7df +0x0e6:  mov    0x8(%ebp),%eax
0816c7e2 +0x0e9:  mov    %eax,(%esp)
0816c7e5 +0x0ec:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0816c7ea +0x0f1:  cmp    0xc(%ebp),%eax
0816c7ed +0x0f4:  seta   %al
0816c7f0 +0x0f7:  test   %al,%al
0816c7f2 +0x0f9:  je     0816c80d <+0x114>
0816c7f4 +0x0fb:  mov    0x8(%ebp),%eax
0816c7f7 +0x0fe:  mov    (%eax),%eax
0816c7f9 +0x100:  add    0xc(%ebp),%eax
0816c7fc +0x103:  mov    %eax,0x4(%esp)
0816c800 +0x107:  mov    0x8(%ebp),%eax
0816c803 +0x10a:  mov    %eax,(%esp)
0816c806 +0x10d:  call   080e4dd4 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xfa>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xfa
0816c80b +0x112:  jmp    0816c851 <+0x158>
0816c80d +0x114:  mov    0x8(%ebp),%eax
0816c810 +0x117:  mov    %eax,(%esp)
0816c813 +0x11a:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0816c818 +0x11f:  mov    0xc(%ebp),%edx
0816c81b +0x122:  mov    %edx,%ebx
0816c81d +0x124:  sub    %eax,%ebx
0816c81f +0x126:  lea    -0xc(%ebp),%eax
0816c822 +0x129:  mov    0x8(%ebp),%edx
0816c825 +0x12c:  mov    %edx,0x4(%esp)
0816c829 +0x130:  mov    %eax,(%esp)
0816c82c +0x133:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
0816c831 +0x138:  sub    $0x4,%esp
0816c834 +0x13b:  lea    -0x1c(%ebp),%eax
0816c837 +0x13e:  mov    %eax,0xc(%esp)
0816c83b +0x142:  mov    %ebx,0x8(%esp)
0816c83f +0x146:  mov    -0xc(%ebp),%eax
0816c842 +0x149:  mov    %eax,0x4(%esp)
0816c846 +0x14d:  mov    0x8(%ebp),%eax
0816c849 +0x150:  mov    %eax,(%esp)
0816c84c +0x153:  call   0816c882 <+0x189>
0816c851 +0x158:  mov    -0x4(%ebp),%ebx
0816c854 +0x15b:  leave
0816c855 +0x15c:  ret
0816c856 +0x15d:  push   %ebp
0816c857 +0x15e:  mov    %esp,%ebp
0816c859 +0x160:  sub    $0x28,%esp
0816c85c +0x163:  mov    %al,0x10(%esp)
0816c860 +0x167:  mov    0x14(%ebp),%eax
0816c863 +0x16a:  mov    %eax,0xc(%esp)
0816c867 +0x16e:  mov    0x10(%ebp),%eax
0816c86a +0x171:  mov    %eax,0x8(%esp)
0816c86e +0x175:  mov    0xc(%ebp),%eax
0816c871 +0x178:  mov    %eax,0x4(%esp)
0816c875 +0x17c:  mov    0x8(%ebp),%eax
0816c878 +0x17f:  mov    %eax,(%esp)
0816c87b +0x182:  call   0816c8aa <+0x1b1>
0816c880 +0x187:  leave
0816c881 +0x188:  ret
0816c882 +0x189:  push   %ebp
0816c883 +0x18a:  mov    %esp,%ebp
0816c885 +0x18c:  sub    $0x18,%esp
0816c888 +0x18f:  mov    0x14(%ebp),%eax
0816c88b +0x192:  mov    %eax,0xc(%esp)
0816c88f +0x196:  mov    0x10(%ebp),%eax
0816c892 +0x199:  mov    %eax,0x8(%esp)
0816c896 +0x19d:  mov    0xc(%ebp),%eax
0816c899 +0x1a0:  mov    %eax,0x4(%esp)
0816c89d +0x1a4:  mov    0x8(%ebp),%eax
0816c8a0 +0x1a7:  mov    %eax,(%esp)
0816c8a3 +0x1aa:  call   0816c8d6 <+0x1dd>
0816c8a8 +0x1af:  leave
0816c8a9 +0x1b0:  ret
0816c8aa +0x1b1:  push   %ebp
0816c8ab +0x1b2:  mov    %esp,%ebp
0816c8ad +0x1b4:  sub    $0x38,%esp
0816c8b0 +0x1b7:  mov    %al,0x10(%esp)
0816c8b4 +0x1bb:  mov    0x14(%ebp),%eax
0816c8b7 +0x1be:  mov    %eax,0xc(%esp)
0816c8bb +0x1c2:  mov    0x10(%ebp),%eax
0816c8be +0x1c5:  mov    %eax,0x8(%esp)
0816c8c2 +0x1c9:  mov    0xc(%ebp),%eax
0816c8c5 +0x1cc:  mov    %eax,0x4(%esp)
0816c8c9 +0x1d0:  mov    0x8(%ebp),%eax
0816c8cc +0x1d3:  mov    %eax,(%esp)
0816c8cf +0x1d6:  call   0816ccd8 <+0x5df>
0816c8d4 +0x1db:  leave
0816c8d5 +0x1dc:  ret
0816c8d6 +0x1dd:  push   %ebp
0816c8d7 +0x1de:  mov    %esp,%ebp
0816c8d9 +0x1e0:  push   %esi
0816c8da +0x1e1:  push   %ebx
0816c8db +0x1e2:  sub    $0x40,%esp
0816c8de +0x1e5:  cmpl   $0x0,0x10(%ebp)
0816c8e2 +0x1e9:  je     0816cccd <+0x5d4>
0816c8e8 +0x1ef:  mov    0x8(%ebp),%eax
0816c8eb +0x1f2:  mov    0x8(%eax),%eax
0816c8ee +0x1f5:  mov    %eax,%edx
0816c8f0 +0x1f7:  mov    0x8(%ebp),%eax
0816c8f3 +0x1fa:  mov    0x4(%eax),%eax
0816c8f6 +0x1fd:  mov    %edx,%ecx
0816c8f8 +0x1ff:  sub    %eax,%ecx
0816c8fa +0x201:  mov    %ecx,%eax
0816c8fc +0x203:  cmp    0x10(%ebp),%eax
0816c8ff +0x206:  jb     0816cab2 <+0x3b9>
0816c905 +0x20c:  mov    0x14(%ebp),%eax
0816c908 +0x20f:  movzbl (%eax),%eax
0816c90b +0x212:  mov    %al,-0x29(%ebp)
0816c90e +0x215:  lea    -0x28(%ebp),%eax
0816c911 +0x218:  mov    0x8(%ebp),%edx
0816c914 +0x21b:  mov    %edx,0x4(%esp)
0816c918 +0x21f:  mov    %eax,(%esp)
0816c91b +0x222:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
0816c920 +0x227:  sub    $0x4,%esp
0816c923 +0x22a:  lea    0xc(%ebp),%eax
0816c926 +0x22d:  mov    %eax,0x4(%esp)
0816c92a +0x231:  lea    -0x28(%ebp),%eax
0816c92d +0x234:  mov    %eax,(%esp)
0816c930 +0x237:  call   0807f431 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x501>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x501
0816c935 +0x23c:  mov    %eax,-0x20(%ebp)
0816c938 +0x23f:  mov    0x8(%ebp),%eax
0816c93b +0x242:  mov    0x4(%eax),%eax
0816c93e +0x245:  mov    %eax,-0x1c(%ebp)
0816c941 +0x248:  mov    -0x20(%ebp),%eax
0816c944 +0x24b:  cmp    0x10(%ebp),%eax
0816c947 +0x24e:  jbe    0816c9f7 <+0x2fe>
0816c94d +0x254:  mov    0x8(%ebp),%eax
0816c950 +0x257:  mov    %eax,(%esp)
0816c953 +0x25a:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816c958 +0x25f:  mov    0x8(%ebp),%edx
0816c95b +0x262:  mov    0x4(%edx),%ecx
0816c95e +0x265:  mov    0x8(%ebp),%edx
0816c961 +0x268:  mov    0x4(%edx),%edx
0816c964 +0x26b:  mov    0x8(%ebp),%ebx
0816c967 +0x26e:  mov    0x4(%ebx),%ebx
0816c96a +0x271:  mov    0x10(%ebp),%esi
0816c96d +0x274:  neg    %esi
0816c96f +0x276:  add    %esi,%ebx
0816c971 +0x278:  mov    %eax,0xc(%esp)
0816c975 +0x27c:  mov    %ecx,0x8(%esp)
0816c979 +0x280:  mov    %edx,0x4(%esp)
0816c97d +0x284:  mov    %ebx,(%esp)
0816c980 +0x287:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816c985 +0x28c:  mov    0x8(%ebp),%eax
0816c988 +0x28f:  mov    0x4(%eax),%eax
0816c98b +0x292:  mov    %eax,%edx
0816c98d +0x294:  add    0x10(%ebp),%edx
0816c990 +0x297:  mov    0x8(%ebp),%eax
0816c993 +0x29a:  mov    %edx,0x4(%eax)
0816c996 +0x29d:  mov    0x10(%ebp),%eax
0816c999 +0x2a0:  neg    %eax
0816c99b +0x2a2:  mov    %eax,%ebx
0816c99d +0x2a4:  add    -0x1c(%ebp),%ebx
0816c9a0 +0x2a7:  lea    0xc(%ebp),%eax
0816c9a3 +0x2aa:  mov    %eax,(%esp)
0816c9a6 +0x2ad:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816c9ab +0x2b2:  mov    (%eax),%eax
0816c9ad +0x2b4:  mov    -0x1c(%ebp),%edx
0816c9b0 +0x2b7:  mov    %edx,0x8(%esp)
0816c9b4 +0x2bb:  mov    %ebx,0x4(%esp)
0816c9b8 +0x2bf:  mov    %eax,(%esp)
0816c9bb +0x2c2:  call   0807f31e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3ee>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3ee
0816c9c0 +0x2c7:  lea    0xc(%ebp),%eax
0816c9c3 +0x2ca:  mov    %eax,(%esp)
0816c9c6 +0x2cd:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816c9cb +0x2d2:  mov    (%eax),%eax
0816c9cd +0x2d4:  mov    %eax,%ebx
0816c9cf +0x2d6:  add    0x10(%ebp),%ebx
0816c9d2 +0x2d9:  lea    0xc(%ebp),%eax
0816c9d5 +0x2dc:  mov    %eax,(%esp)
0816c9d8 +0x2df:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816c9dd +0x2e4:  mov    (%eax),%eax
0816c9df +0x2e6:  lea    -0x29(%ebp),%edx
0816c9e2 +0x2e9:  mov    %edx,0x8(%esp)
0816c9e6 +0x2ed:  mov    %ebx,0x4(%esp)
0816c9ea +0x2f1:  mov    %eax,(%esp)
0816c9ed +0x2f4:  call   0816d076 <+0x97d>
0816c9f2 +0x2f9:  jmp    0816cccd <+0x5d4>
0816c9f7 +0x2fe:  mov    0x8(%ebp),%eax
0816c9fa +0x301:  mov    %eax,(%esp)
0816c9fd +0x304:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816ca02 +0x309:  mov    -0x20(%ebp),%edx
0816ca05 +0x30c:  mov    0x10(%ebp),%ecx
0816ca08 +0x30f:  sub    %edx,%ecx
0816ca0a +0x311:  mov    0x8(%ebp),%edx
0816ca0d +0x314:  mov    0x4(%edx),%edx
0816ca10 +0x317:  mov    %eax,0xc(%esp)
0816ca14 +0x31b:  lea    -0x29(%ebp),%eax
0816ca17 +0x31e:  mov    %eax,0x8(%esp)
0816ca1b +0x322:  mov    %ecx,0x4(%esp)
0816ca1f +0x326:  mov    %edx,(%esp)
0816ca22 +0x329:  call   0816d0ae <+0x9b5>
0816ca27 +0x32e:  mov    0x8(%ebp),%eax
0816ca2a +0x331:  mov    0x4(%eax),%eax
0816ca2d +0x334:  mov    -0x20(%ebp),%edx
0816ca30 +0x337:  mov    0x10(%ebp),%ecx
0816ca33 +0x33a:  mov    %ecx,%ebx
0816ca35 +0x33c:  sub    %edx,%ebx
0816ca37 +0x33e:  mov    %ebx,%edx
0816ca39 +0x340:  lea    (%eax,%edx,1),%edx
0816ca3c +0x343:  mov    0x8(%ebp),%eax
0816ca3f +0x346:  mov    %edx,0x4(%eax)
0816ca42 +0x349:  mov    0x8(%ebp),%eax
0816ca45 +0x34c:  mov    %eax,(%esp)
0816ca48 +0x34f:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816ca4d +0x354:  mov    %eax,%ebx
0816ca4f +0x356:  mov    0x8(%ebp),%eax
0816ca52 +0x359:  mov    0x4(%eax),%esi
0816ca55 +0x35c:  lea    0xc(%ebp),%eax
0816ca58 +0x35f:  mov    %eax,(%esp)
0816ca5b +0x362:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816ca60 +0x367:  mov    (%eax),%eax
0816ca62 +0x369:  mov    %ebx,0xc(%esp)
0816ca66 +0x36d:  mov    %esi,0x8(%esp)
0816ca6a +0x371:  mov    -0x1c(%ebp),%edx
0816ca6d +0x374:  mov    %edx,0x4(%esp)
0816ca71 +0x378:  mov    %eax,(%esp)
0816ca74 +0x37b:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816ca79 +0x380:  mov    0x8(%ebp),%eax
0816ca7c +0x383:  mov    0x4(%eax),%eax
0816ca7f +0x386:  mov    %eax,%edx
0816ca81 +0x388:  add    -0x20(%ebp),%edx
0816ca84 +0x38b:  mov    0x8(%ebp),%eax
0816ca87 +0x38e:  mov    %edx,0x4(%eax)
0816ca8a +0x391:  lea    0xc(%ebp),%eax
0816ca8d +0x394:  mov    %eax,(%esp)
0816ca90 +0x397:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816ca95 +0x39c:  mov    (%eax),%eax
0816ca97 +0x39e:  lea    -0x29(%ebp),%edx
0816ca9a +0x3a1:  mov    %edx,0x8(%esp)
0816ca9e +0x3a5:  mov    -0x1c(%ebp),%edx
0816caa1 +0x3a8:  mov    %edx,0x4(%esp)
0816caa5 +0x3ac:  mov    %eax,(%esp)
0816caa8 +0x3af:  call   0816d076 <+0x97d>
0816caad +0x3b4:  jmp    0816cccd <+0x5d4>
0816cab2 +0x3b9:  movl   $"vector::_M_fill_insert",0x8(%esp)
0816caba +0x3c1:  mov    0x10(%ebp),%eax
0816cabd +0x3c4:  mov    %eax,0x4(%esp)
0816cac1 +0x3c8:  mov    0x8(%ebp),%eax
0816cac4 +0x3cb:  mov    %eax,(%esp)
0816cac7 +0x3ce:  call   0807f368 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x438>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x438
0816cacc +0x3d3:  mov    %eax,-0x18(%ebp)
0816cacf +0x3d6:  lea    -0x24(%ebp),%eax
0816cad2 +0x3d9:  mov    0x8(%ebp),%edx
0816cad5 +0x3dc:  mov    %edx,0x4(%esp)
0816cad9 +0x3e0:  mov    %eax,(%esp)
0816cadc +0x3e3:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
0816cae1 +0x3e8:  sub    $0x4,%esp
0816cae4 +0x3eb:  lea    -0x24(%ebp),%eax
0816cae7 +0x3ee:  mov    %eax,0x4(%esp)
0816caeb +0x3f2:  lea    0xc(%ebp),%eax
0816caee +0x3f5:  mov    %eax,(%esp)
0816caf1 +0x3f8:  call   0807f431 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x501>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x501
0816caf6 +0x3fd:  mov    %eax,-0x14(%ebp)
0816caf9 +0x400:  mov    0x8(%ebp),%eax
0816cafc +0x403:  mov    -0x18(%ebp),%edx
0816caff +0x406:  mov    %edx,0x4(%esp)
0816cb03 +0x40a:  mov    %eax,(%esp)
0816cb06 +0x40d:  call   0807f460 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x530>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x530
0816cb0b +0x412:  mov    %eax,-0x10(%ebp)
0816cb0e +0x415:  mov    -0x10(%ebp),%eax
0816cb11 +0x418:  mov    %eax,-0xc(%ebp)
0816cb14 +0x41b:  mov    0x8(%ebp),%eax
0816cb17 +0x41e:  mov    %eax,(%esp)
0816cb1a +0x421:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cb1f +0x426:  mov    -0x14(%ebp),%edx
0816cb22 +0x429:  mov    -0x10(%ebp),%ecx
0816cb25 +0x42c:  lea    (%ecx,%edx,1),%edx
0816cb28 +0x42f:  mov    %eax,0xc(%esp)
0816cb2c +0x433:  mov    0x14(%ebp),%eax
0816cb2f +0x436:  mov    %eax,0x8(%esp)
0816cb33 +0x43a:  mov    0x10(%ebp),%eax
0816cb36 +0x43d:  mov    %eax,0x4(%esp)
0816cb3a +0x441:  mov    %edx,(%esp)
0816cb3d +0x444:  call   0816d0ae <+0x9b5>
0816cb42 +0x449:  movl   $0x0,-0xc(%ebp)
0816cb49 +0x450:  mov    0x8(%ebp),%eax
0816cb4c +0x453:  mov    %eax,(%esp)
0816cb4f +0x456:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cb54 +0x45b:  mov    %eax,%ebx
0816cb56 +0x45d:  lea    0xc(%ebp),%eax
0816cb59 +0x460:  mov    %eax,(%esp)
0816cb5c +0x463:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816cb61 +0x468:  mov    (%eax),%edx
0816cb63 +0x46a:  mov    0x8(%ebp),%eax
0816cb66 +0x46d:  mov    (%eax),%eax
0816cb68 +0x46f:  mov    %ebx,0xc(%esp)
0816cb6c +0x473:  mov    -0x10(%ebp),%ecx
0816cb6f +0x476:  mov    %ecx,0x8(%esp)
0816cb73 +0x47a:  mov    %edx,0x4(%esp)
0816cb77 +0x47e:  mov    %eax,(%esp)
0816cb7a +0x481:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816cb7f +0x486:  mov    %eax,-0xc(%ebp)
0816cb82 +0x489:  mov    0x10(%ebp),%eax
0816cb85 +0x48c:  add    %eax,-0xc(%ebp)
0816cb88 +0x48f:  mov    0x8(%ebp),%eax
0816cb8b +0x492:  mov    %eax,(%esp)
0816cb8e +0x495:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cb93 +0x49a:  mov    %eax,%ebx
0816cb95 +0x49c:  mov    0x8(%ebp),%eax
0816cb98 +0x49f:  mov    0x4(%eax),%esi
0816cb9b +0x4a2:  lea    0xc(%ebp),%eax
0816cb9e +0x4a5:  mov    %eax,(%esp)
0816cba1 +0x4a8:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816cba6 +0x4ad:  mov    (%eax),%eax
0816cba8 +0x4af:  mov    %ebx,0xc(%esp)
0816cbac +0x4b3:  mov    -0xc(%ebp),%edx
0816cbaf +0x4b6:  mov    %edx,0x8(%esp)
0816cbb3 +0x4ba:  mov    %esi,0x4(%esp)
0816cbb7 +0x4be:  mov    %eax,(%esp)
0816cbba +0x4c1:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816cbbf +0x4c6:  mov    %eax,-0xc(%ebp)
0816cbc2 +0x4c9:  mov    0x8(%ebp),%eax
0816cbc5 +0x4cc:  mov    %eax,(%esp)
0816cbc8 +0x4cf:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cbcd +0x4d4:  mov    0x8(%ebp),%edx
0816cbd0 +0x4d7:  mov    0x4(%edx),%ecx
0816cbd3 +0x4da:  mov    0x8(%ebp),%edx
0816cbd6 +0x4dd:  mov    (%edx),%edx
0816cbd8 +0x4df:  mov    %eax,0x8(%esp)
0816cbdc +0x4e3:  mov    %ecx,0x4(%esp)
0816cbe0 +0x4e7:  mov    %edx,(%esp)
0816cbe3 +0x4ea:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
0816cbe8 +0x4ef:  mov    0x8(%ebp),%eax
0816cbeb +0x4f2:  mov    0x8(%eax),%eax
0816cbee +0x4f5:  mov    %eax,%edx
0816cbf0 +0x4f7:  mov    0x8(%ebp),%eax
0816cbf3 +0x4fa:  mov    (%eax),%eax
0816cbf5 +0x4fc:  mov    %edx,%ecx
0816cbf7 +0x4fe:  sub    %eax,%ecx
0816cbf9 +0x500:  mov    %ecx,%eax
0816cbfb +0x502:  mov    %eax,%ecx
0816cbfd +0x504:  mov    0x8(%ebp),%eax
0816cc00 +0x507:  mov    (%eax),%edx
0816cc02 +0x509:  mov    0x8(%ebp),%eax
0816cc05 +0x50c:  mov    %ecx,0x8(%esp)
0816cc09 +0x510:  mov    %edx,0x4(%esp)
0816cc0d +0x514:  mov    %eax,(%esp)
0816cc10 +0x517:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
0816cc15 +0x51c:  mov    0x8(%ebp),%eax
0816cc18 +0x51f:  mov    -0x10(%ebp),%edx
0816cc1b +0x522:  mov    %edx,(%eax)
0816cc1d +0x524:  mov    0x8(%ebp),%eax
0816cc20 +0x527:  mov    -0xc(%ebp),%edx
0816cc23 +0x52a:  mov    %edx,0x4(%eax)
0816cc26 +0x52d:  mov    -0x18(%ebp),%eax
0816cc29 +0x530:  mov    -0x10(%ebp),%edx
0816cc2c +0x533:  add    %eax,%edx
0816cc2e +0x535:  mov    0x8(%ebp),%eax
0816cc31 +0x538:  mov    %edx,0x8(%eax)
0816cc34 +0x53b:  jmp    0816cccd <+0x5d4>
0816cc39 +0x540:  mov    %eax,(%esp)
0816cc3c +0x543:  call   08725ce0 <__cxa_begin_catch>
0816cc41 +0x548:  cmpl   $0x0,-0xc(%ebp)
0816cc45 +0x54c:  jne    0816cc79 <+0x580>
0816cc47 +0x54e:  mov    0x8(%ebp),%eax
0816cc4a +0x551:  mov    %eax,(%esp)
0816cc4d +0x554:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cc52 +0x559:  mov    0x10(%ebp),%edx
0816cc55 +0x55c:  mov    -0x14(%ebp),%ecx
0816cc58 +0x55f:  lea    (%ecx,%edx,1),%edx
0816cc5b +0x562:  add    -0x10(%ebp),%edx
0816cc5e +0x565:  mov    -0x14(%ebp),%ecx
0816cc61 +0x568:  mov    -0x10(%ebp),%ebx
0816cc64 +0x56b:  lea    (%ebx,%ecx,1),%ecx
0816cc67 +0x56e:  mov    %eax,0x8(%esp)
0816cc6b +0x572:  mov    %edx,0x4(%esp)
0816cc6f +0x576:  mov    %ecx,(%esp)
0816cc72 +0x579:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
0816cc77 +0x57e:  jmp    0816cc9a <+0x5a1>
0816cc79 +0x580:  mov    0x8(%ebp),%eax
0816cc7c +0x583:  mov    %eax,(%esp)
0816cc7f +0x586:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cc84 +0x58b:  mov    %eax,0x8(%esp)
0816cc88 +0x58f:  mov    -0xc(%ebp),%eax
0816cc8b +0x592:  mov    %eax,0x4(%esp)
0816cc8f +0x596:  mov    -0x10(%ebp),%eax
0816cc92 +0x599:  mov    %eax,(%esp)
0816cc95 +0x59c:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
0816cc9a +0x5a1:  mov    0x8(%ebp),%eax
0816cc9d +0x5a4:  mov    -0x18(%ebp),%edx
0816cca0 +0x5a7:  mov    %edx,0x8(%esp)
0816cca4 +0x5ab:  mov    -0x10(%ebp),%edx
0816cca7 +0x5ae:  mov    %edx,0x4(%esp)
0816ccab +0x5b2:  mov    %eax,(%esp)
0816ccae +0x5b5:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
0816ccb3 +0x5ba:  call   08724be0 <__cxa_rethrow>
0816ccb8 +0x5bf:  mov    %edx,%ebx
0816ccba +0x5c1:  mov    %eax,%esi
0816ccbc +0x5c3:  call   08725c30 <__cxa_end_catch>
0816ccc1 +0x5c8:  mov    %esi,%eax
0816ccc3 +0x5ca:  mov    %ebx,%edx
0816ccc5 +0x5cc:  mov    %eax,(%esp)
0816ccc8 +0x5cf:  call   08ae3750 <_Unwind_Resume>
0816cccd +0x5d4:  lea    -0x8(%ebp),%esp
0816ccd0 +0x5d7:  add    $0x0,%esp
0816ccd3 +0x5da:  pop    %ebx
0816ccd4 +0x5db:  pop    %esi
0816ccd5 +0x5dc:  pop    %ebp
0816ccd6 +0x5dd:  ret
0816ccd7 +0x5de:  nop
0816ccd8 +0x5df:  push   %ebp
0816ccd9 +0x5e0:  mov    %esp,%ebp
0816ccdb +0x5e2:  push   %esi
0816ccdc +0x5e3:  push   %ebx
0816ccdd +0x5e4:  sub    $0x40,%esp
0816cce0 +0x5e7:  mov    0x10(%ebp),%eax
0816cce3 +0x5ea:  cmp    0x14(%ebp),%eax
0816cce6 +0x5ed:  je     0816d06c <+0x973>
0816ccec +0x5f3:  mov    0x14(%ebp),%eax
0816ccef +0x5f6:  mov    %eax,0x4(%esp)
0816ccf3 +0x5fa:  mov    0x10(%ebp),%eax
0816ccf6 +0x5fd:  mov    %eax,(%esp)
0816ccf9 +0x600:  call   0816d0cf <+0x9d6>
0816ccfe +0x605:  mov    %eax,-0x20(%ebp)
0816cd01 +0x608:  mov    0x8(%ebp),%eax
0816cd04 +0x60b:  mov    0x8(%eax),%eax
0816cd07 +0x60e:  mov    %eax,%edx
0816cd09 +0x610:  mov    0x8(%ebp),%eax
0816cd0c +0x613:  mov    0x4(%eax),%eax
0816cd0f +0x616:  mov    %edx,%ecx
0816cd11 +0x618:  sub    %eax,%ecx
0816cd13 +0x61a:  mov    %ecx,%eax
0816cd15 +0x61c:  cmp    -0x20(%ebp),%eax
0816cd18 +0x61f:  jb     0816cec6 <+0x7cd>
0816cd1e +0x625:  lea    -0x2c(%ebp),%eax
0816cd21 +0x628:  mov    0x8(%ebp),%edx
0816cd24 +0x62b:  mov    %edx,0x4(%esp)
0816cd28 +0x62f:  mov    %eax,(%esp)
0816cd2b +0x632:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
0816cd30 +0x637:  sub    $0x4,%esp
0816cd33 +0x63a:  lea    0xc(%ebp),%eax
0816cd36 +0x63d:  mov    %eax,0x4(%esp)
0816cd3a +0x641:  lea    -0x2c(%ebp),%eax
0816cd3d +0x644:  mov    %eax,(%esp)
0816cd40 +0x647:  call   0807f431 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x501>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x501
0816cd45 +0x64c:  mov    %eax,-0x1c(%ebp)
0816cd48 +0x64f:  mov    0x8(%ebp),%eax
0816cd4b +0x652:  mov    0x4(%eax),%eax
0816cd4e +0x655:  mov    %eax,-0x18(%ebp)
0816cd51 +0x658:  mov    -0x1c(%ebp),%eax
0816cd54 +0x65b:  cmp    -0x20(%ebp),%eax
0816cd57 +0x65e:  jbe    0816cdf8 <+0x6ff>
0816cd5d +0x664:  mov    0x8(%ebp),%eax
0816cd60 +0x667:  mov    %eax,(%esp)
0816cd63 +0x66a:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cd68 +0x66f:  mov    0x8(%ebp),%edx
0816cd6b +0x672:  mov    0x4(%edx),%ecx
0816cd6e +0x675:  mov    0x8(%ebp),%edx
0816cd71 +0x678:  mov    0x4(%edx),%edx
0816cd74 +0x67b:  mov    0x8(%ebp),%ebx
0816cd77 +0x67e:  mov    0x4(%ebx),%ebx
0816cd7a +0x681:  mov    -0x20(%ebp),%esi
0816cd7d +0x684:  neg    %esi
0816cd7f +0x686:  add    %esi,%ebx
0816cd81 +0x688:  mov    %eax,0xc(%esp)
0816cd85 +0x68c:  mov    %ecx,0x8(%esp)
0816cd89 +0x690:  mov    %edx,0x4(%esp)
0816cd8d +0x694:  mov    %ebx,(%esp)
0816cd90 +0x697:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816cd95 +0x69c:  mov    0x8(%ebp),%eax
0816cd98 +0x69f:  mov    0x4(%eax),%eax
0816cd9b +0x6a2:  mov    %eax,%edx
0816cd9d +0x6a4:  add    -0x20(%ebp),%edx
0816cda0 +0x6a7:  mov    0x8(%ebp),%eax
0816cda3 +0x6aa:  mov    %edx,0x4(%eax)
0816cda6 +0x6ad:  mov    -0x20(%ebp),%eax
0816cda9 +0x6b0:  neg    %eax
0816cdab +0x6b2:  mov    %eax,%ebx
0816cdad +0x6b4:  add    -0x18(%ebp),%ebx
0816cdb0 +0x6b7:  lea    0xc(%ebp),%eax
0816cdb3 +0x6ba:  mov    %eax,(%esp)
0816cdb6 +0x6bd:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816cdbb +0x6c2:  mov    (%eax),%eax
0816cdbd +0x6c4:  mov    -0x18(%ebp),%edx
0816cdc0 +0x6c7:  mov    %edx,0x8(%esp)
0816cdc4 +0x6cb:  mov    %ebx,0x4(%esp)
0816cdc8 +0x6cf:  mov    %eax,(%esp)
0816cdcb +0x6d2:  call   0807f31e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3ee>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3ee
0816cdd0 +0x6d7:  lea    -0x28(%ebp),%eax
0816cdd3 +0x6da:  mov    0xc(%ebp),%edx
0816cdd6 +0x6dd:  mov    %edx,0xc(%esp)
0816cdda +0x6e1:  mov    0x14(%ebp),%edx
0816cddd +0x6e4:  mov    %edx,0x8(%esp)
0816cde1 +0x6e8:  mov    0x10(%ebp),%edx
0816cde4 +0x6eb:  mov    %edx,0x4(%esp)
0816cde8 +0x6ef:  mov    %eax,(%esp)
0816cdeb +0x6f2:  call   0816d106 <+0xa0d>
0816cdf0 +0x6f7:  sub    $0x4,%esp
0816cdf3 +0x6fa:  jmp    0816d06c <+0x973>
0816cdf8 +0x6ff:  mov    0x10(%ebp),%eax
0816cdfb +0x702:  mov    %eax,-0x30(%ebp)
0816cdfe +0x705:  mov    -0x1c(%ebp),%eax
0816ce01 +0x708:  mov    %eax,0x4(%esp)
0816ce05 +0x70c:  lea    -0x30(%ebp),%eax
0816ce08 +0x70f:  mov    %eax,(%esp)
0816ce0b +0x712:  call   0816d151 <+0xa58>
0816ce10 +0x717:  mov    0x8(%ebp),%eax
0816ce13 +0x71a:  mov    %eax,(%esp)
0816ce16 +0x71d:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816ce1b +0x722:  mov    0x8(%ebp),%edx
0816ce1e +0x725:  mov    0x4(%edx),%ecx
0816ce21 +0x728:  mov    -0x30(%ebp),%edx
0816ce24 +0x72b:  mov    %eax,0xc(%esp)
0816ce28 +0x72f:  mov    %ecx,0x8(%esp)
0816ce2c +0x733:  mov    0x14(%ebp),%eax
0816ce2f +0x736:  mov    %eax,0x4(%esp)
0816ce33 +0x73a:  mov    %edx,(%esp)
0816ce36 +0x73d:  call   0816d18e <+0xa95>
0816ce3b +0x742:  mov    0x8(%ebp),%eax
0816ce3e +0x745:  mov    0x4(%eax),%eax
0816ce41 +0x748:  mov    -0x1c(%ebp),%edx
0816ce44 +0x74b:  mov    -0x20(%ebp),%ecx
0816ce47 +0x74e:  mov    %ecx,%ebx
0816ce49 +0x750:  sub    %edx,%ebx
0816ce4b +0x752:  mov    %ebx,%edx
0816ce4d +0x754:  lea    (%eax,%edx,1),%edx
0816ce50 +0x757:  mov    0x8(%ebp),%eax
0816ce53 +0x75a:  mov    %edx,0x4(%eax)
0816ce56 +0x75d:  mov    0x8(%ebp),%eax
0816ce59 +0x760:  mov    %eax,(%esp)
0816ce5c +0x763:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816ce61 +0x768:  mov    %eax,%ebx
0816ce63 +0x76a:  mov    0x8(%ebp),%eax
0816ce66 +0x76d:  mov    0x4(%eax),%esi
0816ce69 +0x770:  lea    0xc(%ebp),%eax
0816ce6c +0x773:  mov    %eax,(%esp)
0816ce6f +0x776:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816ce74 +0x77b:  mov    (%eax),%eax
0816ce76 +0x77d:  mov    %ebx,0xc(%esp)
0816ce7a +0x781:  mov    %esi,0x8(%esp)
0816ce7e +0x785:  mov    -0x18(%ebp),%edx
0816ce81 +0x788:  mov    %edx,0x4(%esp)
0816ce85 +0x78c:  mov    %eax,(%esp)
0816ce88 +0x78f:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816ce8d +0x794:  mov    0x8(%ebp),%eax
0816ce90 +0x797:  mov    0x4(%eax),%eax
0816ce93 +0x79a:  mov    %eax,%edx
0816ce95 +0x79c:  add    -0x1c(%ebp),%edx
0816ce98 +0x79f:  mov    0x8(%ebp),%eax
0816ce9b +0x7a2:  mov    %edx,0x4(%eax)
0816ce9e +0x7a5:  mov    -0x30(%ebp),%edx
0816cea1 +0x7a8:  lea    -0x24(%ebp),%eax
0816cea4 +0x7ab:  mov    0xc(%ebp),%ecx
0816cea7 +0x7ae:  mov    %ecx,0xc(%esp)
0816ceab +0x7b2:  mov    %edx,0x8(%esp)
0816ceaf +0x7b6:  mov    0x10(%ebp),%edx
0816ceb2 +0x7b9:  mov    %edx,0x4(%esp)
0816ceb6 +0x7bd:  mov    %eax,(%esp)
0816ceb9 +0x7c0:  call   0816d106 <+0xa0d>
0816cebe +0x7c5:  sub    $0x4,%esp
0816cec1 +0x7c8:  jmp    0816d06c <+0x973>
0816cec6 +0x7cd:  movl   $"vector::_M_range_insert",0x8(%esp)
0816cece +0x7d5:  mov    -0x20(%ebp),%eax
0816ced1 +0x7d8:  mov    %eax,0x4(%esp)
0816ced5 +0x7dc:  mov    0x8(%ebp),%eax
0816ced8 +0x7df:  mov    %eax,(%esp)
0816cedb +0x7e2:  call   0807f368 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x438>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x438
0816cee0 +0x7e7:  mov    %eax,-0x14(%ebp)
0816cee3 +0x7ea:  mov    0x8(%ebp),%eax
0816cee6 +0x7ed:  mov    -0x14(%ebp),%edx
0816cee9 +0x7f0:  mov    %edx,0x4(%esp)
0816ceed +0x7f4:  mov    %eax,(%esp)
0816cef0 +0x7f7:  call   0807f460 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x530>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x530
0816cef5 +0x7fc:  mov    %eax,-0x10(%ebp)
0816cef8 +0x7ff:  mov    -0x10(%ebp),%eax
0816cefb +0x802:  mov    %eax,-0xc(%ebp)
0816cefe +0x805:  mov    0x8(%ebp),%eax
0816cf01 +0x808:  mov    %eax,(%esp)
0816cf04 +0x80b:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cf09 +0x810:  mov    %eax,%ebx
0816cf0b +0x812:  lea    0xc(%ebp),%eax
0816cf0e +0x815:  mov    %eax,(%esp)
0816cf11 +0x818:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816cf16 +0x81d:  mov    (%eax),%edx
0816cf18 +0x81f:  mov    0x8(%ebp),%eax
0816cf1b +0x822:  mov    (%eax),%eax
0816cf1d +0x824:  mov    %ebx,0xc(%esp)
0816cf21 +0x828:  mov    -0x10(%ebp),%ecx
0816cf24 +0x82b:  mov    %ecx,0x8(%esp)
0816cf28 +0x82f:  mov    %edx,0x4(%esp)
0816cf2c +0x833:  mov    %eax,(%esp)
0816cf2f +0x836:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816cf34 +0x83b:  mov    %eax,-0xc(%ebp)
0816cf37 +0x83e:  mov    0x8(%ebp),%eax
0816cf3a +0x841:  mov    %eax,(%esp)
0816cf3d +0x844:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cf42 +0x849:  mov    %eax,0xc(%esp)
0816cf46 +0x84d:  mov    -0xc(%ebp),%eax
0816cf49 +0x850:  mov    %eax,0x8(%esp)
0816cf4d +0x854:  mov    0x14(%ebp),%eax
0816cf50 +0x857:  mov    %eax,0x4(%esp)
0816cf54 +0x85b:  mov    0x10(%ebp),%eax
0816cf57 +0x85e:  mov    %eax,(%esp)
0816cf5a +0x861:  call   0816d18e <+0xa95>
0816cf5f +0x866:  mov    %eax,-0xc(%ebp)
0816cf62 +0x869:  mov    0x8(%ebp),%eax
0816cf65 +0x86c:  mov    %eax,(%esp)
0816cf68 +0x86f:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cf6d +0x874:  mov    %eax,%ebx
0816cf6f +0x876:  mov    0x8(%ebp),%eax
0816cf72 +0x879:  mov    0x4(%eax),%esi
0816cf75 +0x87c:  lea    0xc(%ebp),%eax
0816cf78 +0x87f:  mov    %eax,(%esp)
0816cf7b +0x882:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816cf80 +0x887:  mov    (%eax),%eax
0816cf82 +0x889:  mov    %ebx,0xc(%esp)
0816cf86 +0x88d:  mov    -0xc(%ebp),%edx
0816cf89 +0x890:  mov    %edx,0x8(%esp)
0816cf8d +0x894:  mov    %esi,0x4(%esp)
0816cf91 +0x898:  mov    %eax,(%esp)
0816cf94 +0x89b:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
0816cf99 +0x8a0:  mov    %eax,-0xc(%ebp)
0816cf9c +0x8a3:  mov    0x8(%ebp),%eax
0816cf9f +0x8a6:  mov    %eax,(%esp)
0816cfa2 +0x8a9:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816cfa7 +0x8ae:  mov    0x8(%ebp),%edx
0816cfaa +0x8b1:  mov    0x4(%edx),%ecx
0816cfad +0x8b4:  mov    0x8(%ebp),%edx
0816cfb0 +0x8b7:  mov    (%edx),%edx
0816cfb2 +0x8b9:  mov    %eax,0x8(%esp)
0816cfb6 +0x8bd:  mov    %ecx,0x4(%esp)
0816cfba +0x8c1:  mov    %edx,(%esp)
0816cfbd +0x8c4:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
0816cfc2 +0x8c9:  mov    0x8(%ebp),%eax
0816cfc5 +0x8cc:  mov    0x8(%eax),%eax
0816cfc8 +0x8cf:  mov    %eax,%edx
0816cfca +0x8d1:  mov    0x8(%ebp),%eax
0816cfcd +0x8d4:  mov    (%eax),%eax
0816cfcf +0x8d6:  mov    %edx,%ecx
0816cfd1 +0x8d8:  sub    %eax,%ecx
0816cfd3 +0x8da:  mov    %ecx,%eax
0816cfd5 +0x8dc:  mov    %eax,%ecx
0816cfd7 +0x8de:  mov    0x8(%ebp),%eax
0816cfda +0x8e1:  mov    (%eax),%edx
0816cfdc +0x8e3:  mov    0x8(%ebp),%eax
0816cfdf +0x8e6:  mov    %ecx,0x8(%esp)
0816cfe3 +0x8ea:  mov    %edx,0x4(%esp)
0816cfe7 +0x8ee:  mov    %eax,(%esp)
0816cfea +0x8f1:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
0816cfef +0x8f6:  mov    0x8(%ebp),%eax
0816cff2 +0x8f9:  mov    -0x10(%ebp),%edx
0816cff5 +0x8fc:  mov    %edx,(%eax)
0816cff7 +0x8fe:  mov    0x8(%ebp),%eax
0816cffa +0x901:  mov    -0xc(%ebp),%edx
0816cffd +0x904:  mov    %edx,0x4(%eax)
0816d000 +0x907:  mov    -0x14(%ebp),%eax
0816d003 +0x90a:  mov    -0x10(%ebp),%edx
0816d006 +0x90d:  add    %eax,%edx
0816d008 +0x90f:  mov    0x8(%ebp),%eax
0816d00b +0x912:  mov    %edx,0x8(%eax)
0816d00e +0x915:  jmp    0816d06c <+0x973>
0816d010 +0x917:  mov    %eax,(%esp)
0816d013 +0x91a:  call   08725ce0 <__cxa_begin_catch>
0816d018 +0x91f:  mov    0x8(%ebp),%eax
0816d01b +0x922:  mov    %eax,(%esp)
0816d01e +0x925:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
0816d023 +0x92a:  mov    %eax,0x8(%esp)
0816d027 +0x92e:  mov    -0xc(%ebp),%eax
0816d02a +0x931:  mov    %eax,0x4(%esp)
0816d02e +0x935:  mov    -0x10(%ebp),%eax
0816d031 +0x938:  mov    %eax,(%esp)
0816d034 +0x93b:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
0816d039 +0x940:  mov    0x8(%ebp),%eax
0816d03c +0x943:  mov    -0x14(%ebp),%edx
0816d03f +0x946:  mov    %edx,0x8(%esp)
0816d043 +0x94a:  mov    -0x10(%ebp),%edx
0816d046 +0x94d:  mov    %edx,0x4(%esp)
0816d04a +0x951:  mov    %eax,(%esp)
0816d04d +0x954:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
0816d052 +0x959:  call   08724be0 <__cxa_rethrow>
0816d057 +0x95e:  mov    %edx,%ebx
0816d059 +0x960:  mov    %eax,%esi
0816d05b +0x962:  call   08725c30 <__cxa_end_catch>
0816d060 +0x967:  mov    %esi,%eax
0816d062 +0x969:  mov    %ebx,%edx
0816d064 +0x96b:  mov    %eax,(%esp)
0816d067 +0x96e:  call   08ae3750 <_Unwind_Resume>
0816d06c +0x973:  lea    -0x8(%ebp),%esp
0816d06f +0x976:  add    $0x0,%esp
0816d072 +0x979:  pop    %ebx
0816d073 +0x97a:  pop    %esi
0816d074 +0x97b:  pop    %ebp
0816d075 +0x97c:  ret
0816d076 +0x97d:  push   %ebp
0816d077 +0x97e:  mov    %esp,%ebp
0816d079 +0x980:  push   %ebx
0816d07a +0x981:  sub    $0x14,%esp
0816d07d +0x984:  mov    0xc(%ebp),%eax
0816d080 +0x987:  mov    %eax,(%esp)
0816d083 +0x98a:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d088 +0x98f:  mov    %eax,%ebx
0816d08a +0x991:  mov    0x8(%ebp),%eax
0816d08d +0x994:  mov    %eax,(%esp)
0816d090 +0x997:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d095 +0x99c:  mov    0x10(%ebp),%edx
0816d098 +0x99f:  mov    %edx,0x8(%esp)
0816d09c +0x9a3:  mov    %ebx,0x4(%esp)
0816d0a0 +0x9a7:  mov    %eax,(%esp)
0816d0a3 +0x9aa:  call   0816d1af <+0xab6>
0816d0a8 +0x9af:  add    $0x14,%esp
0816d0ab +0x9b2:  pop    %ebx
0816d0ac +0x9b3:  pop    %ebp
0816d0ad +0x9b4:  ret
0816d0ae +0x9b5:  push   %ebp
0816d0af +0x9b6:  mov    %esp,%ebp
0816d0b1 +0x9b8:  sub    $0x18,%esp
0816d0b4 +0x9bb:  mov    0x10(%ebp),%eax
0816d0b7 +0x9be:  mov    %eax,0x8(%esp)
0816d0bb +0x9c2:  mov    0xc(%ebp),%eax
0816d0be +0x9c5:  mov    %eax,0x4(%esp)
0816d0c2 +0x9c9:  mov    0x8(%ebp),%eax
0816d0c5 +0x9cc:  mov    %eax,(%esp)
0816d0c8 +0x9cf:  call   0816d1e5 <+0xaec>
0816d0cd +0x9d4:  leave
0816d0ce +0x9d5:  ret
0816d0cf +0x9d6:  push   %ebp
0816d0d0 +0x9d7:  mov    %esp,%ebp
0816d0d2 +0x9d9:  push   %ebx
0816d0d3 +0x9da:  sub    $0x24,%esp
0816d0d6 +0x9dd:  lea    -0x9(%ebp),%eax
0816d0d9 +0x9e0:  lea    0x8(%ebp),%edx
0816d0dc +0x9e3:  mov    %edx,0x4(%esp)
0816d0e0 +0x9e7:  mov    %eax,(%esp)
0816d0e3 +0x9ea:  call   0816d206 <+0xb0d>
0816d0e8 +0x9ef:  sub    $0x4,%esp
0816d0eb +0x9f2:  mov    0x8(%ebp),%eax
0816d0ee +0x9f5:  mov    %bl,0x8(%esp)
0816d0f2 +0x9f9:  mov    0xc(%ebp),%edx
0816d0f5 +0x9fc:  mov    %edx,0x4(%esp)
0816d0f9 +0xa00:  mov    %eax,(%esp)
0816d0fc +0xa03:  call   0816d210 <+0xb17>
0816d101 +0xa08:  mov    -0x4(%ebp),%ebx
0816d104 +0xa0b:  leave
0816d105 +0xa0c:  ret
0816d106 +0xa0d:  push   %ebp
0816d107 +0xa0e:  mov    %esp,%ebp
0816d109 +0xa10:  push   %esi
0816d10a +0xa11:  push   %ebx
0816d10b +0xa12:  sub    $0x10,%esp
0816d10e +0xa15:  mov    0x8(%ebp),%esi
0816d111 +0xa18:  mov    0x10(%ebp),%eax
0816d114 +0xa1b:  mov    %eax,(%esp)
0816d117 +0xa1e:  call   0807f554 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x624>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x624
0816d11c +0xa23:  mov    %eax,%ebx
0816d11e +0xa25:  mov    0xc(%ebp),%eax
0816d121 +0xa28:  mov    %eax,(%esp)
0816d124 +0xa2b:  call   0807f554 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x624>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x624
0816d129 +0xa30:  mov    0x14(%ebp),%edx
0816d12c +0xa33:  mov    %edx,0xc(%esp)
0816d130 +0xa37:  mov    %ebx,0x8(%esp)
0816d134 +0xa3b:  mov    %eax,0x4(%esp)
0816d138 +0xa3f:  mov    %esi,(%esp)
0816d13b +0xa42:  call   0816d221 <+0xb28>
0816d140 +0xa47:  sub    $0x4,%esp
0816d143 +0xa4a:  mov    %esi,%eax
0816d145 +0xa4c:  lea    -0x8(%ebp),%esp
0816d148 +0xa4f:  add    $0x0,%esp
0816d14b +0xa52:  pop    %ebx
0816d14c +0xa53:  pop    %esi
0816d14d +0xa54:  pop    %ebp
0816d14e +0xa55:  ret    $0x4
0816d151 +0xa58:  push   %ebp
0816d152 +0xa59:  mov    %esp,%ebp
0816d154 +0xa5b:  push   %ebx
0816d155 +0xa5c:  sub    $0x24,%esp
0816d158 +0xa5f:  mov    0xc(%ebp),%eax
0816d15b +0xa62:  mov    %eax,-0xc(%ebp)
0816d15e +0xa65:  lea    -0xd(%ebp),%eax
0816d161 +0xa68:  mov    0x8(%ebp),%edx
0816d164 +0xa6b:  mov    %edx,0x4(%esp)
0816d168 +0xa6f:  mov    %eax,(%esp)
0816d16b +0xa72:  call   0816d206 <+0xb0d>
0816d170 +0xa77:  sub    $0x4,%esp
0816d173 +0xa7a:  mov    %bl,0x8(%esp)
0816d177 +0xa7e:  mov    -0xc(%ebp),%eax
0816d17a +0xa81:  mov    %eax,0x4(%esp)
0816d17e +0xa85:  mov    0x8(%ebp),%eax
0816d181 +0xa88:  mov    %eax,(%esp)
0816d184 +0xa8b:  call   0816d280 <+0xb87>
0816d189 +0xa90:  mov    -0x4(%ebp),%ebx
0816d18c +0xa93:  leave
0816d18d +0xa94:  ret
0816d18e +0xa95:  push   %ebp
0816d18f +0xa96:  mov    %esp,%ebp
0816d191 +0xa98:  sub    $0x18,%esp
0816d194 +0xa9b:  mov    0x10(%ebp),%eax
0816d197 +0xa9e:  mov    %eax,0x8(%esp)
0816d19b +0xaa2:  mov    0xc(%ebp),%eax
0816d19e +0xaa5:  mov    %eax,0x4(%esp)
0816d1a2 +0xaa9:  mov    0x8(%ebp),%eax
0816d1a5 +0xaac:  mov    %eax,(%esp)
0816d1a8 +0xaaf:  call   0816d294 <+0xb9b>
0816d1ad +0xab4:  leave
0816d1ae +0xab5:  ret
0816d1af +0xab6:  push   %ebp
0816d1b0 +0xab7:  mov    %esp,%ebp
0816d1b2 +0xab9:  sub    $0x28,%esp
0816d1b5 +0xabc:  mov    0x10(%ebp),%eax
0816d1b8 +0xabf:  movzbl (%eax),%eax
0816d1bb +0xac2:  mov    %al,-0x9(%ebp)
0816d1be +0xac5:  mov    0xc(%ebp),%edx
0816d1c1 +0xac8:  mov    0x8(%ebp),%eax
0816d1c4 +0xacb:  mov    %edx,%ecx
0816d1c6 +0xacd:  sub    %eax,%ecx
0816d1c8 +0xacf:  mov    %ecx,%eax
0816d1ca +0xad1:  mov    %eax,%edx
0816d1cc +0xad3:  movzbl -0x9(%ebp),%eax
0816d1d0 +0xad7:  mov    %edx,0x8(%esp)
0816d1d4 +0xadb:  mov    %eax,0x4(%esp)
0816d1d8 +0xadf:  mov    0x8(%ebp),%eax
0816d1db +0xae2:  mov    %eax,(%esp)
0816d1de +0xae5:  call   0807dcc0 <_init+0x5b8>
0816d1e3 +0xaea:  leave
0816d1e4 +0xaeb:  ret
0816d1e5 +0xaec:  push   %ebp
0816d1e6 +0xaed:  mov    %esp,%ebp
0816d1e8 +0xaef:  sub    $0x18,%esp
0816d1eb +0xaf2:  mov    0x10(%ebp),%eax
0816d1ee +0xaf5:  mov    %eax,0x8(%esp)
0816d1f2 +0xaf9:  mov    0xc(%ebp),%eax
0816d1f5 +0xafc:  mov    %eax,0x4(%esp)
0816d1f9 +0xb00:  mov    0x8(%ebp),%eax
0816d1fc +0xb03:  mov    %eax,(%esp)
0816d1ff +0xb06:  call   0816d2b5 <+0xbbc>
0816d204 +0xb0b:  leave
0816d205 +0xb0c:  ret
0816d206 +0xb0d:  push   %ebp
0816d207 +0xb0e:  mov    %esp,%ebp
0816d209 +0xb10:  mov    0x8(%ebp),%eax
0816d20c +0xb13:  pop    %ebp
0816d20d +0xb14:  ret    $0x4
0816d210 +0xb17:  push   %ebp
0816d211 +0xb18:  mov    %esp,%ebp
0816d213 +0xb1a:  mov    0xc(%ebp),%edx
0816d216 +0xb1d:  mov    0x8(%ebp),%eax
0816d219 +0xb20:  mov    %edx,%ecx
0816d21b +0xb22:  sub    %eax,%ecx
0816d21d +0xb24:  mov    %ecx,%eax
0816d21f +0xb26:  pop    %ebp
0816d220 +0xb27:  ret
0816d221 +0xb28:  push   %ebp
0816d222 +0xb29:  mov    %esp,%ebp
0816d224 +0xb2b:  push   %edi
0816d225 +0xb2c:  push   %esi
0816d226 +0xb2d:  push   %ebx
0816d227 +0xb2e:  sub    $0x2c,%esp
0816d22a +0xb31:  mov    0x8(%ebp),%edi
0816d22d +0xb34:  mov    0x14(%ebp),%eax
0816d230 +0xb37:  mov    %eax,(%esp)
0816d233 +0xb3a:  call   0816d2d6 <+0xbdd>
0816d238 +0xb3f:  mov    %eax,%esi
0816d23a +0xb41:  mov    0x10(%ebp),%eax
0816d23d +0xb44:  mov    %eax,(%esp)
0816d240 +0xb47:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d245 +0xb4c:  mov    %eax,%ebx
0816d247 +0xb4e:  mov    0xc(%ebp),%eax
0816d24a +0xb51:  mov    %eax,(%esp)
0816d24d +0xb54:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d252 +0xb59:  mov    %esi,0x8(%esp)
0816d256 +0xb5d:  mov    %ebx,0x4(%esp)
0816d25a +0xb61:  mov    %eax,(%esp)
0816d25d +0xb64:  call   0816d2eb <+0xbf2>
0816d262 +0xb69:  mov    %eax,-0x1c(%ebp)
0816d265 +0xb6c:  lea    -0x1c(%ebp),%eax
0816d268 +0xb6f:  mov    %eax,0x4(%esp)
0816d26c +0xb73:  mov    %edi,(%esp)
0816d26f +0xb76:  call   0807f2c8 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x398>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x398
0816d274 +0xb7b:  mov    %edi,%eax
0816d276 +0xb7d:  add    $0x2c,%esp
0816d279 +0xb80:  pop    %ebx
0816d27a +0xb81:  pop    %esi
0816d27b +0xb82:  pop    %edi
0816d27c +0xb83:  pop    %ebp
0816d27d +0xb84:  ret    $0x4
0816d280 +0xb87:  push   %ebp
0816d281 +0xb88:  mov    %esp,%ebp
0816d283 +0xb8a:  mov    0x8(%ebp),%eax
0816d286 +0xb8d:  mov    (%eax),%edx
0816d288 +0xb8f:  mov    0xc(%ebp),%eax
0816d28b +0xb92:  add    %eax,%edx
0816d28d +0xb94:  mov    0x8(%ebp),%eax
0816d290 +0xb97:  mov    %edx,(%eax)
0816d292 +0xb99:  pop    %ebp
0816d293 +0xb9a:  ret
0816d294 +0xb9b:  push   %ebp
0816d295 +0xb9c:  mov    %esp,%ebp
0816d297 +0xb9e:  sub    $0x18,%esp
0816d29a +0xba1:  mov    0x10(%ebp),%eax
0816d29d +0xba4:  mov    %eax,0x8(%esp)
0816d2a1 +0xba8:  mov    0xc(%ebp),%eax
0816d2a4 +0xbab:  mov    %eax,0x4(%esp)
0816d2a8 +0xbaf:  mov    0x8(%ebp),%eax
0816d2ab +0xbb2:  mov    %eax,(%esp)
0816d2ae +0xbb5:  call   0816d310 <+0xc17>
0816d2b3 +0xbba:  leave
0816d2b4 +0xbbb:  ret
0816d2b5 +0xbbc:  push   %ebp
0816d2b6 +0xbbd:  mov    %esp,%ebp
0816d2b8 +0xbbf:  sub    $0x18,%esp
0816d2bb +0xbc2:  mov    0x10(%ebp),%eax
0816d2be +0xbc5:  mov    %eax,0x8(%esp)
0816d2c2 +0xbc9:  mov    0xc(%ebp),%eax
0816d2c5 +0xbcc:  mov    %eax,0x4(%esp)
0816d2c9 +0xbd0:  mov    0x8(%ebp),%eax
0816d2cc +0xbd3:  mov    %eax,(%esp)
0816d2cf +0xbd6:  call   0816d331 <+0xc38>
0816d2d4 +0xbdb:  leave
0816d2d5 +0xbdc:  ret
0816d2d6 +0xbdd:  push   %ebp
0816d2d7 +0xbde:  mov    %esp,%ebp
0816d2d9 +0xbe0:  sub    $0x18,%esp
0816d2dc +0xbe3:  lea    0x8(%ebp),%eax
0816d2df +0xbe6:  mov    %eax,(%esp)
0816d2e2 +0xbe9:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
0816d2e7 +0xbee:  mov    (%eax),%eax
0816d2e9 +0xbf0:  leave
0816d2ea +0xbf1:  ret
0816d2eb +0xbf2:  push   %ebp
0816d2ec +0xbf3:  mov    %esp,%ebp
0816d2ee +0xbf5:  sub    $0x28,%esp
0816d2f1 +0xbf8:  movb   $0x1,-0x9(%ebp)
0816d2f5 +0xbfc:  mov    0x10(%ebp),%eax
0816d2f8 +0xbff:  mov    %eax,0x8(%esp)
0816d2fc +0xc03:  mov    0xc(%ebp),%eax
0816d2ff +0xc06:  mov    %eax,0x4(%esp)
0816d303 +0xc0a:  mov    0x8(%ebp),%eax
0816d306 +0xc0d:  mov    %eax,(%esp)
0816d309 +0xc10:  call   0816d35a <+0xc61>
0816d30e +0xc15:  leave
0816d30f +0xc16:  ret
0816d310 +0xc17:  push   %ebp
0816d311 +0xc18:  mov    %esp,%ebp
0816d313 +0xc1a:  sub    $0x18,%esp
0816d316 +0xc1d:  mov    0x10(%ebp),%eax
0816d319 +0xc20:  mov    %eax,0x8(%esp)
0816d31d +0xc24:  mov    0xc(%ebp),%eax
0816d320 +0xc27:  mov    %eax,0x4(%esp)
0816d324 +0xc2b:  mov    0x8(%ebp),%eax
0816d327 +0xc2e:  mov    %eax,(%esp)
0816d32a +0xc31:  call   0816d393 <+0xc9a>
0816d32f +0xc36:  leave
0816d330 +0xc37:  ret
0816d331 +0xc38:  push   %ebp
0816d332 +0xc39:  mov    %esp,%ebp
0816d334 +0xc3b:  sub    $0x18,%esp
0816d337 +0xc3e:  mov    0x8(%ebp),%eax
0816d33a +0xc41:  mov    %eax,(%esp)
0816d33d +0xc44:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d342 +0xc49:  mov    0x10(%ebp),%edx
0816d345 +0xc4c:  mov    %edx,0x8(%esp)
0816d349 +0xc50:  mov    0xc(%ebp),%edx
0816d34c +0xc53:  mov    %edx,0x4(%esp)
0816d350 +0xc57:  mov    %eax,(%esp)
0816d353 +0xc5a:  call   0816d3cb <+0xcd2>
0816d358 +0xc5f:  leave
0816d359 +0xc60:  ret
0816d35a +0xc61:  push   %ebp
0816d35b +0xc62:  mov    %esp,%ebp
0816d35d +0xc64:  sub    $0x18,%esp
0816d360 +0xc67:  mov    0xc(%ebp),%edx
0816d363 +0xc6a:  mov    0x8(%ebp),%eax
0816d366 +0xc6d:  mov    %edx,%ecx
0816d368 +0xc6f:  sub    %eax,%ecx
0816d36a +0xc71:  mov    %ecx,%eax
0816d36c +0xc73:  mov    %eax,0x8(%esp)
0816d370 +0xc77:  mov    0x8(%ebp),%eax
0816d373 +0xc7a:  mov    %eax,0x4(%esp)
0816d377 +0xc7e:  mov    0x10(%ebp),%eax
0816d37a +0xc81:  mov    %eax,(%esp)
0816d37d +0xc84:  call   0807d880 <_init+0x178>
0816d382 +0xc89:  mov    0xc(%ebp),%edx
0816d385 +0xc8c:  mov    0x8(%ebp),%eax
0816d388 +0xc8f:  mov    %edx,%ecx
0816d38a +0xc91:  sub    %eax,%ecx
0816d38c +0xc93:  mov    %ecx,%eax
0816d38e +0xc95:  add    0x10(%ebp),%eax
0816d391 +0xc98:  leave
0816d392 +0xc99:  ret
0816d393 +0xc9a:  push   %ebp
0816d394 +0xc9b:  mov    %esp,%ebp
0816d396 +0xc9d:  push   %ebx
0816d397 +0xc9e:  sub    $0x14,%esp
0816d39a +0xca1:  mov    0xc(%ebp),%eax
0816d39d +0xca4:  mov    %eax,(%esp)
0816d3a0 +0xca7:  call   0807f554 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x624>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x624
0816d3a5 +0xcac:  mov    %eax,%ebx
0816d3a7 +0xcae:  mov    0x8(%ebp),%eax
0816d3aa +0xcb1:  mov    %eax,(%esp)
0816d3ad +0xcb4:  call   0807f554 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x624>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x624
0816d3b2 +0xcb9:  mov    0x10(%ebp),%edx
0816d3b5 +0xcbc:  mov    %edx,0x8(%esp)
0816d3b9 +0xcc0:  mov    %ebx,0x4(%esp)
0816d3bd +0xcc4:  mov    %eax,(%esp)
0816d3c0 +0xcc7:  call   0816d3fa <+0xd01>
0816d3c5 +0xccc:  add    $0x14,%esp
0816d3c8 +0xccf:  pop    %ebx
0816d3c9 +0xcd0:  pop    %ebp
0816d3ca +0xcd1:  ret
0816d3cb +0xcd2:  push   %ebp
0816d3cc +0xcd3:  mov    %esp,%ebp
0816d3ce +0xcd5:  sub    $0x18,%esp
0816d3d1 +0xcd8:  mov    0xc(%ebp),%eax
0816d3d4 +0xcdb:  mov    0x8(%ebp),%edx
0816d3d7 +0xcde:  add    %eax,%edx
0816d3d9 +0xce0:  mov    0x10(%ebp),%eax
0816d3dc +0xce3:  mov    %eax,0x8(%esp)
0816d3e0 +0xce7:  mov    %edx,0x4(%esp)
0816d3e4 +0xceb:  mov    0x8(%ebp),%eax
0816d3e7 +0xcee:  mov    %eax,(%esp)
0816d3ea +0xcf1:  call   0816d1af <+0xab6>
0816d3ef +0xcf6:  mov    0xc(%ebp),%eax
0816d3f2 +0xcf9:  mov    0x8(%ebp),%edx
0816d3f5 +0xcfc:  lea    (%edx,%eax,1),%eax
0816d3f8 +0xcff:  leave
0816d3f9 +0xd00:  ret
0816d3fa +0xd01:  push   %ebp
0816d3fb +0xd02:  mov    %esp,%ebp
0816d3fd +0xd04:  push   %esi
0816d3fe +0xd05:  push   %ebx
0816d3ff +0xd06:  sub    $0x10,%esp
0816d402 +0xd09:  mov    0x10(%ebp),%eax
0816d405 +0xd0c:  mov    %eax,(%esp)
0816d408 +0xd0f:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d40d +0xd14:  mov    %eax,%esi
0816d40f +0xd16:  mov    0xc(%ebp),%eax
0816d412 +0xd19:  mov    %eax,(%esp)
0816d415 +0xd1c:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d41a +0xd21:  mov    %eax,%ebx
0816d41c +0xd23:  mov    0x8(%ebp),%eax
0816d41f +0xd26:  mov    %eax,(%esp)
0816d422 +0xd29:  call   0807f67d <_GLOBAL__I__Z13base64_encodePKhjRSs+0x74d>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x74d
0816d427 +0xd2e:  mov    %esi,0x8(%esp)
0816d42b +0xd32:  mov    %ebx,0x4(%esp)
0816d42f +0xd36:  mov    %eax,(%esp)
0816d432 +0xd39:  call   0816d2eb <+0xbf2>
0816d437 +0xd3e:  add    $0x10,%esp
0816d43a +0xd41:  pop    %ebx
0816d43b +0xd42:  pop    %esi
0816d43c +0xd43:  pop    %ebp
0816d43d +0xd44:  ret
0816d43e +0xd45:  nop
0816d43f +0xd46:  nop
```

## 反编译 C

```c
// <global>::global @ 0x816c6f9

/* COpensslRSA::COpensslRSA() */

void COpensslRSA::_GLOBAL__I_COpensslRSA(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
