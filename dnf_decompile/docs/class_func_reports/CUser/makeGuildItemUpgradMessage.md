# makeGuildItemUpgradMessage

`_ZN5CUser26makeGuildItemUpgradMessageEPKciib`

`CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08679cee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08679cee  _ZN5CUser26makeGuildItemUpgradMessageEPKciib
#           CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)
# range [0x08679cee, 0x0867a241]
08679cee +0x000:  push   %ebp
08679cef +0x001:  mov    %esp,%ebp
08679cf1 +0x003:  push   %edi
08679cf2 +0x004:  push   %esi
08679cf3 +0x005:  push   %ebx
08679cf4 +0x006:  sub    $0x1dc,%esp
08679cfa +0x00c:  mov    0x18(%ebp),%eax
08679cfd +0x00f:  mov    %al,-0x1bc(%ebp)
08679d03 +0x015:  lea    -0xac(%ebp),%ebx
08679d09 +0x01b:  mov    $0x0,%eax
08679d0e +0x020:  mov    $0x1e,%edx
08679d13 +0x025:  mov    %ebx,%edi
08679d15 +0x027:  mov    %edx,%ecx
08679d17 +0x029:  rep stos %eax,%es:(%edi)
08679d19 +0x02b:  cmpb   $0x0,-0x1bc(%ebp)
08679d20 +0x032:  je     08679f70 <+0x282>
08679d26 +0x038:  cmpl   $0xa,0x14(%ebp)
08679d2a +0x03c:  jle    08679f70 <+0x282>
08679d30 +0x042:  lea    -0x1a(%ebp),%eax
08679d33 +0x045:  mov    %eax,(%esp)
08679d36 +0x048:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08679d3b +0x04d:  mov    0x8(%ebp),%eax
08679d3e +0x050:  mov    %eax,(%esp)
08679d41 +0x053:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08679d46 +0x058:  lea    -0x1a(%ebp),%edx
08679d49 +0x05b:  mov    %edx,0x8(%esp)
08679d4d +0x05f:  mov    %eax,0x4(%esp)
08679d51 +0x063:  lea    -0x20(%ebp),%eax
08679d54 +0x066:  mov    %eax,(%esp)
08679d57 +0x069:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08679d5c +0x06e:  jmp    08679d79 <+0x8b>
08679d5e +0x070:  mov    %edx,%ebx
08679d60 +0x072:  mov    %eax,%esi
08679d62 +0x074:  lea    -0x1a(%ebp),%eax
08679d65 +0x077:  mov    %eax,(%esp)
08679d68 +0x07a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679d6d +0x07f:  mov    %esi,%eax
08679d6f +0x081:  mov    %ebx,%edx
08679d71 +0x083:  mov    %eax,(%esp)
08679d74 +0x086:  call   08ae3750 <_Unwind_Resume>
08679d79 +0x08b:  lea    -0x1a(%ebp),%eax
08679d7c +0x08e:  mov    %eax,(%esp)
08679d7f +0x091:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679d84 +0x096:  lea    -0x24(%ebp),%eax
08679d87 +0x099:  movl   $0x0,0xc(%esp)
08679d8f +0x0a1:  movl   $0x3e8,0x8(%esp)
08679d97 +0x0a9:  movl   $&g_ServerString_,0x4(%esp)
08679d9f +0x0b1:  mov    %eax,(%esp)
08679da2 +0x0b4:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
08679da7 +0x0b9:  sub    $0x4,%esp
08679daa +0x0bc:  lea    -0x28(%ebp),%eax
08679dad +0x0bf:  movl   $0x0,0xc(%esp)
08679db5 +0x0c7:  movl   $0x3ec,0x8(%esp)
08679dbd +0x0cf:  movl   $&g_ServerString_,0x4(%esp)
08679dc5 +0x0d7:  mov    %eax,(%esp)
08679dc8 +0x0da:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
08679dcd +0x0df:  sub    $0x4,%esp
08679dd0 +0x0e2:  lea    -0x1ab(%ebp),%edx
08679dd6 +0x0e8:  mov    $0xff,%ebx
08679ddb +0x0ed:  mov    $0x0,%eax
08679de0 +0x0f2:  mov    %edx,%ecx
08679de2 +0x0f4:  and    $0x1,%ecx
08679de5 +0x0f7:  test   %ecx,%ecx
08679de7 +0x0f9:  je     08679df1 <+0x103>
08679de9 +0x0fb:  mov    %al,(%edx)
08679deb +0x0fd:  add    $0x1,%edx
08679dee +0x100:  sub    $0x1,%ebx
08679df1 +0x103:  mov    %edx,%ecx
08679df3 +0x105:  and    $0x2,%ecx
08679df6 +0x108:  test   %ecx,%ecx
08679df8 +0x10a:  je     08679e03 <+0x115>
08679dfa +0x10c:  mov    %ax,(%edx)
08679dfd +0x10f:  add    $0x2,%edx
08679e00 +0x112:  sub    $0x2,%ebx
08679e03 +0x115:  mov    %ebx,%ecx
08679e05 +0x117:  shr    $0x2,%ecx
08679e08 +0x11a:  mov    %edx,%edi
08679e0a +0x11c:  rep stos %eax,%es:(%edi)
08679e0c +0x11e:  mov    %edi,%edx
08679e0e +0x120:  mov    %ebx,%ecx
08679e10 +0x122:  and    $0x2,%ecx
08679e13 +0x125:  test   %ecx,%ecx
08679e15 +0x127:  je     08679e1d <+0x12f>
08679e17 +0x129:  mov    %ax,(%edx)
08679e1a +0x12c:  add    $0x2,%edx
08679e1d +0x12f:  mov    %ebx,%ecx
08679e1f +0x131:  and    $0x1,%ecx
08679e22 +0x134:  test   %ecx,%ecx
08679e24 +0x136:  je     08679e2b <+0x13d>
08679e26 +0x138:  mov    %al,(%edx)
08679e28 +0x13a:  add    $0x1,%edx
08679e2b +0x13d:  mov    0xc(%ebp),%eax
08679e2e +0x140:  mov    %eax,0xc(%esp)
08679e32 +0x144:  mov    0x14(%ebp),%eax
08679e35 +0x147:  mov    %eax,0x8(%esp)
08679e39 +0x14b:  movl   $"+%d %s",0x4(%esp)
08679e41 +0x153:  lea    -0x1ab(%ebp),%eax
08679e47 +0x159:  mov    %eax,(%esp)
08679e4a +0x15c:  call   0807e440 <_init+0xd38>
08679e4f +0x161:  lea    -0x1ab(%ebp),%eax
08679e55 +0x167:  mov    %eax,0x4(%esp)
08679e59 +0x16b:  lea    -0x24(%ebp),%eax
08679e5c +0x16e:  mov    %eax,(%esp)
08679e5f +0x171:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08679e64 +0x176:  lea    -0x28(%ebp),%eax
08679e67 +0x179:  mov    %eax,0x4(%esp)
08679e6b +0x17d:  lea    -0x24(%ebp),%eax
08679e6e +0x180:  mov    %eax,(%esp)
08679e71 +0x183:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08679e76 +0x188:  lea    -0x24(%ebp),%eax
08679e79 +0x18b:  mov    %eax,0x4(%esp)
08679e7d +0x18f:  lea    -0x20(%ebp),%eax
08679e80 +0x192:  mov    %eax,(%esp)
08679e83 +0x195:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08679e88 +0x19a:  lea    -0x20(%ebp),%eax
08679e8b +0x19d:  mov    %eax,(%esp)
08679e8e +0x1a0:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08679e93 +0x1a5:  cmp    $0x77,%eax
08679e96 +0x1a8:  seta   %al
08679e99 +0x1ab:  test   %al,%al
08679e9b +0x1ad:  je     08679ea4 <+0x1b6>
08679e9d +0x1af:  mov    $0x0,%ebx
08679ea2 +0x1b4:  jmp    08679eee <+0x200>
08679ea4 +0x1b6:  lea    -0x20(%ebp),%eax
08679ea7 +0x1b9:  mov    %eax,(%esp)
08679eaa +0x1bc:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08679eaf +0x1c1:  mov    %eax,%ebx
08679eb1 +0x1c3:  lea    -0x20(%ebp),%eax
08679eb4 +0x1c6:  mov    %eax,(%esp)
08679eb7 +0x1c9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08679ebc +0x1ce:  mov    %ebx,0x8(%esp)
08679ec0 +0x1d2:  mov    %eax,0x4(%esp)
08679ec4 +0x1d6:  lea    -0xac(%ebp),%eax
08679eca +0x1dc:  mov    %eax,(%esp)
08679ecd +0x1df:  call   0807d8a0 <_init+0x198>
08679ed2 +0x1e4:  mov    $0x1,%ebx
08679ed7 +0x1e9:  jmp    08679eee <+0x200>
08679ed9 +0x1eb:  mov    %edx,%ebx
08679edb +0x1ed:  mov    %eax,%esi
08679edd +0x1ef:  lea    -0x28(%ebp),%eax
08679ee0 +0x1f2:  mov    %eax,(%esp)
08679ee3 +0x1f5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679ee8 +0x1fa:  mov    %esi,%eax
08679eea +0x1fc:  mov    %ebx,%edx
08679eec +0x1fe:  jmp    08679f0b <+0x21d>
08679eee +0x200:  lea    -0x28(%ebp),%eax
08679ef1 +0x203:  mov    %eax,(%esp)
08679ef4 +0x206:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679ef9 +0x20b:  test   %ebx,%ebx
08679efb +0x20d:  jne    08679f04 <+0x216>
08679efd +0x20f:  mov    $0x0,%ebx
08679f02 +0x214:  jmp    08679f20 <+0x232>
08679f04 +0x216:  mov    $0x1,%ebx
08679f09 +0x21b:  jmp    08679f20 <+0x232>
08679f0b +0x21d:  mov    %edx,%ebx
08679f0d +0x21f:  mov    %eax,%esi
08679f0f +0x221:  lea    -0x24(%ebp),%eax
08679f12 +0x224:  mov    %eax,(%esp)
08679f15 +0x227:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679f1a +0x22c:  mov    %esi,%eax
08679f1c +0x22e:  mov    %ebx,%edx
08679f1e +0x230:  jmp    08679f3d <+0x24f>
08679f20 +0x232:  lea    -0x24(%ebp),%eax
08679f23 +0x235:  mov    %eax,(%esp)
08679f26 +0x238:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679f2b +0x23d:  test   %ebx,%ebx
08679f2d +0x23f:  jne    08679f36 <+0x248>
08679f2f +0x241:  mov    $0x0,%ebx
08679f34 +0x246:  jmp    08679f58 <+0x26a>
08679f36 +0x248:  mov    $0x1,%ebx
08679f3b +0x24d:  jmp    08679f58 <+0x26a>
08679f3d +0x24f:  mov    %edx,%ebx
08679f3f +0x251:  mov    %eax,%esi
08679f41 +0x253:  lea    -0x20(%ebp),%eax
08679f44 +0x256:  mov    %eax,(%esp)
08679f47 +0x259:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679f4c +0x25e:  mov    %esi,%eax
08679f4e +0x260:  mov    %ebx,%edx
08679f50 +0x262:  mov    %eax,(%esp)
08679f53 +0x265:  call   08ae3750 <_Unwind_Resume>
08679f58 +0x26a:  lea    -0x20(%ebp),%eax
08679f5b +0x26d:  mov    %eax,(%esp)
08679f5e +0x270:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679f63 +0x275:  test   %ebx,%ebx
08679f65 +0x277:  je     0867a236 <+0x548>
08679f6b +0x27d:  jmp    0867a1c7 <+0x4d9>
08679f70 +0x282:  movzbl -0x1bc(%ebp),%eax
08679f77 +0x289:  xor    $0x1,%eax
08679f7a +0x28c:  test   %al,%al
08679f7c +0x28e:  je     0867a232 <+0x544>
08679f82 +0x294:  cmpl   $0xa,0x10(%ebp)
08679f86 +0x298:  jle    0867a235 <+0x547>
08679f8c +0x29e:  lea    -0x19(%ebp),%eax
08679f8f +0x2a1:  mov    %eax,(%esp)
08679f92 +0x2a4:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08679f97 +0x2a9:  mov    0x8(%ebp),%eax
08679f9a +0x2ac:  mov    %eax,(%esp)
08679f9d +0x2af:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08679fa2 +0x2b4:  lea    -0x19(%ebp),%edx
08679fa5 +0x2b7:  mov    %edx,0x8(%esp)
08679fa9 +0x2bb:  mov    %eax,0x4(%esp)
08679fad +0x2bf:  lea    -0x2c(%ebp),%eax
08679fb0 +0x2c2:  mov    %eax,(%esp)
08679fb3 +0x2c5:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08679fb8 +0x2ca:  jmp    08679fd5 <+0x2e7>
08679fba +0x2cc:  mov    %edx,%ebx
08679fbc +0x2ce:  mov    %eax,%esi
08679fbe +0x2d0:  lea    -0x19(%ebp),%eax
08679fc1 +0x2d3:  mov    %eax,(%esp)
08679fc4 +0x2d6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679fc9 +0x2db:  mov    %esi,%eax
08679fcb +0x2dd:  mov    %ebx,%edx
08679fcd +0x2df:  mov    %eax,(%esp)
08679fd0 +0x2e2:  call   08ae3750 <_Unwind_Resume>
08679fd5 +0x2e7:  lea    -0x19(%ebp),%eax
08679fd8 +0x2ea:  mov    %eax,(%esp)
08679fdb +0x2ed:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679fe0 +0x2f2:  lea    -0x30(%ebp),%eax
08679fe3 +0x2f5:  movl   $0x0,0xc(%esp)
08679feb +0x2fd:  movl   $0x3e8,0x8(%esp)
08679ff3 +0x305:  movl   $&g_ServerString_,0x4(%esp)
08679ffb +0x30d:  mov    %eax,(%esp)
08679ffe +0x310:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
0867a003 +0x315:  sub    $0x4,%esp
0867a006 +0x318:  lea    -0x34(%ebp),%eax
0867a009 +0x31b:  movl   $0x0,0xc(%esp)
0867a011 +0x323:  movl   $0x3ed,0x8(%esp)
0867a019 +0x32b:  movl   $&g_ServerString_,0x4(%esp)
0867a021 +0x333:  mov    %eax,(%esp)
0867a024 +0x336:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
0867a029 +0x33b:  sub    $0x4,%esp
0867a02c +0x33e:  lea    -0x1ab(%ebp),%edx
0867a032 +0x344:  mov    $0xff,%ebx
0867a037 +0x349:  mov    $0x0,%eax
0867a03c +0x34e:  mov    %edx,%ecx
0867a03e +0x350:  and    $0x1,%ecx
0867a041 +0x353:  test   %ecx,%ecx
0867a043 +0x355:  je     0867a04d <+0x35f>
0867a045 +0x357:  mov    %al,(%edx)
0867a047 +0x359:  add    $0x1,%edx
0867a04a +0x35c:  sub    $0x1,%ebx
0867a04d +0x35f:  mov    %edx,%ecx
0867a04f +0x361:  and    $0x2,%ecx
0867a052 +0x364:  test   %ecx,%ecx
0867a054 +0x366:  je     0867a05f <+0x371>
0867a056 +0x368:  mov    %ax,(%edx)
0867a059 +0x36b:  add    $0x2,%edx
0867a05c +0x36e:  sub    $0x2,%ebx
0867a05f +0x371:  mov    %ebx,%ecx
0867a061 +0x373:  shr    $0x2,%ecx
0867a064 +0x376:  mov    %edx,%edi
0867a066 +0x378:  rep stos %eax,%es:(%edi)
0867a068 +0x37a:  mov    %edi,%edx
0867a06a +0x37c:  mov    %ebx,%ecx
0867a06c +0x37e:  and    $0x2,%ecx
0867a06f +0x381:  test   %ecx,%ecx
0867a071 +0x383:  je     0867a079 <+0x38b>
0867a073 +0x385:  mov    %ax,(%edx)
0867a076 +0x388:  add    $0x2,%edx
0867a079 +0x38b:  mov    %ebx,%ecx
0867a07b +0x38d:  and    $0x1,%ecx
0867a07e +0x390:  test   %ecx,%ecx
0867a080 +0x392:  je     0867a087 <+0x399>
0867a082 +0x394:  mov    %al,(%edx)
0867a084 +0x396:  add    $0x1,%edx
0867a087 +0x399:  mov    0x10(%ebp),%eax
0867a08a +0x39c:  lea    0x1(%eax),%edx
0867a08d +0x39f:  mov    0xc(%ebp),%eax
0867a090 +0x3a2:  mov    %eax,0xc(%esp)
0867a094 +0x3a6:  mov    %edx,0x8(%esp)
0867a098 +0x3aa:  movl   $"+%d %s",0x4(%esp)
0867a0a0 +0x3b2:  lea    -0x1ab(%ebp),%eax
0867a0a6 +0x3b8:  mov    %eax,(%esp)
0867a0a9 +0x3bb:  call   0807e440 <_init+0xd38>
0867a0ae +0x3c0:  lea    -0x1ab(%ebp),%eax
0867a0b4 +0x3c6:  mov    %eax,0x4(%esp)
0867a0b8 +0x3ca:  lea    -0x30(%ebp),%eax
0867a0bb +0x3cd:  mov    %eax,(%esp)
0867a0be +0x3d0:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0867a0c3 +0x3d5:  lea    -0x34(%ebp),%eax
0867a0c6 +0x3d8:  mov    %eax,0x4(%esp)
0867a0ca +0x3dc:  lea    -0x30(%ebp),%eax
0867a0cd +0x3df:  mov    %eax,(%esp)
0867a0d0 +0x3e2:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a0d5 +0x3e7:  lea    -0x30(%ebp),%eax
0867a0d8 +0x3ea:  mov    %eax,0x4(%esp)
0867a0dc +0x3ee:  lea    -0x2c(%ebp),%eax
0867a0df +0x3f1:  mov    %eax,(%esp)
0867a0e2 +0x3f4:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a0e7 +0x3f9:  lea    -0x2c(%ebp),%eax
0867a0ea +0x3fc:  mov    %eax,(%esp)
0867a0ed +0x3ff:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a0f2 +0x404:  cmp    $0x77,%eax
0867a0f5 +0x407:  seta   %al
0867a0f8 +0x40a:  test   %al,%al
0867a0fa +0x40c:  je     0867a103 <+0x415>
0867a0fc +0x40e:  mov    $0x0,%ebx
0867a101 +0x413:  jmp    0867a14d <+0x45f>
0867a103 +0x415:  lea    -0x2c(%ebp),%eax
0867a106 +0x418:  mov    %eax,(%esp)
0867a109 +0x41b:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a10e +0x420:  mov    %eax,%ebx
0867a110 +0x422:  lea    -0x2c(%ebp),%eax
0867a113 +0x425:  mov    %eax,(%esp)
0867a116 +0x428:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0867a11b +0x42d:  mov    %ebx,0x8(%esp)
0867a11f +0x431:  mov    %eax,0x4(%esp)
0867a123 +0x435:  lea    -0xac(%ebp),%eax
0867a129 +0x43b:  mov    %eax,(%esp)
0867a12c +0x43e:  call   0807d8a0 <_init+0x198>
0867a131 +0x443:  mov    $0x1,%ebx
0867a136 +0x448:  jmp    0867a14d <+0x45f>
0867a138 +0x44a:  mov    %edx,%ebx
0867a13a +0x44c:  mov    %eax,%esi
0867a13c +0x44e:  lea    -0x34(%ebp),%eax
0867a13f +0x451:  mov    %eax,(%esp)
0867a142 +0x454:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a147 +0x459:  mov    %esi,%eax
0867a149 +0x45b:  mov    %ebx,%edx
0867a14b +0x45d:  jmp    0867a16a <+0x47c>
0867a14d +0x45f:  lea    -0x34(%ebp),%eax
0867a150 +0x462:  mov    %eax,(%esp)
0867a153 +0x465:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a158 +0x46a:  test   %ebx,%ebx
0867a15a +0x46c:  jne    0867a163 <+0x475>
0867a15c +0x46e:  mov    $0x0,%ebx
0867a161 +0x473:  jmp    0867a17f <+0x491>
0867a163 +0x475:  mov    $0x1,%ebx
0867a168 +0x47a:  jmp    0867a17f <+0x491>
0867a16a +0x47c:  mov    %edx,%ebx
0867a16c +0x47e:  mov    %eax,%esi
0867a16e +0x480:  lea    -0x30(%ebp),%eax
0867a171 +0x483:  mov    %eax,(%esp)
0867a174 +0x486:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a179 +0x48b:  mov    %esi,%eax
0867a17b +0x48d:  mov    %ebx,%edx
0867a17d +0x48f:  jmp    0867a19c <+0x4ae>
0867a17f +0x491:  lea    -0x30(%ebp),%eax
0867a182 +0x494:  mov    %eax,(%esp)
0867a185 +0x497:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a18a +0x49c:  test   %ebx,%ebx
0867a18c +0x49e:  jne    0867a195 <+0x4a7>
0867a18e +0x4a0:  mov    $0x0,%ebx
0867a193 +0x4a5:  jmp    0867a1b7 <+0x4c9>
0867a195 +0x4a7:  mov    $0x1,%ebx
0867a19a +0x4ac:  jmp    0867a1b7 <+0x4c9>
0867a19c +0x4ae:  mov    %edx,%ebx
0867a19e +0x4b0:  mov    %eax,%esi
0867a1a0 +0x4b2:  lea    -0x2c(%ebp),%eax
0867a1a3 +0x4b5:  mov    %eax,(%esp)
0867a1a6 +0x4b8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a1ab +0x4bd:  mov    %esi,%eax
0867a1ad +0x4bf:  mov    %ebx,%edx
0867a1af +0x4c1:  mov    %eax,(%esp)
0867a1b2 +0x4c4:  call   08ae3750 <_Unwind_Resume>
0867a1b7 +0x4c9:  lea    -0x2c(%ebp),%eax
0867a1ba +0x4cc:  mov    %eax,(%esp)
0867a1bd +0x4cf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a1c2 +0x4d4:  test   %ebx,%ebx
0867a1c4 +0x4d6:  je     0867a236 <+0x548>
0867a1c6 +0x4d8:  nop
0867a1c7 +0x4d9:  mov    0x8(%ebp),%eax
0867a1ca +0x4dc:  mov    %eax,(%esp)
0867a1cd +0x4df:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0867a1d2 +0x4e4:  mov    %eax,%esi
0867a1d4 +0x4e6:  mov    0x8(%ebp),%eax
0867a1d7 +0x4e9:  mov    %eax,(%esp)
0867a1da +0x4ec:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0867a1df +0x4f1:  mov    %eax,%ebx
0867a1e1 +0x4f3:  mov    0x8(%ebp),%eax
0867a1e4 +0x4f6:  mov    %eax,(%esp)
0867a1e7 +0x4f9:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0867a1ec +0x4fe:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0867a1f2 +0x504:  mov    %eax,0x4(%esp)
0867a1f6 +0x508:  mov    %edx,(%esp)
0867a1f9 +0x50b:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0867a1fe +0x510:  mov    %esi,0x18(%esp)
0867a202 +0x514:  movl   $0xffffffff,0x14(%esp)
0867a20a +0x51c:  movl   $0xffffffff,0x10(%esp)
0867a212 +0x524:  mov    %ebx,0xc(%esp)
0867a216 +0x528:  movl   $0x0,0x8(%esp)
0867a21e +0x530:  lea    -0xac(%ebp),%edx
0867a224 +0x536:  mov    %edx,0x4(%esp)
0867a228 +0x53a:  mov    %eax,(%esp)
0867a22b +0x53d:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
0867a230 +0x542:  jmp    0867a236 <+0x548>
0867a232 +0x544:  nop
0867a233 +0x545:  jmp    0867a236 <+0x548>
0867a235 +0x547:  nop
0867a236 +0x548:  lea    -0xc(%ebp),%esp
0867a239 +0x54b:  add    $0x0,%esp
0867a23c +0x54e:  pop    %ebx
0867a23d +0x54f:  pop    %esi
0867a23e +0x550:  pop    %edi
0867a23f +0x551:  pop    %ebp
0867a240 +0x552:  ret
0867a241 +0x553:  nop
```

## 反编译 C

```c
// CUser::makeGuildItemUpgradMessage @ 0x8679cee

/* CUser::makeGuildItemUpgradMessage(char const*, int, int, bool) */

void __thiscall
CUser::makeGuildItemUpgradMessage(CUser *this,char *param_1,int param_2,int param_3,bool param_4)

{
  char *pcVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_1af;
  char local_1ae [254];
  char local_b0 [120];
  string local_38 [4];
  string local_34 [4];
  string local_30 [4];
  string local_2c [4];
  string local_28 [4];
  string local_24 [6];
  allocator<char> local_1e;
  allocator<char> local_1d [13];
  
  bVar9 = 0;
  pcVar1 = local_b0;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  if ((param_4) && (10 < param_3)) {
    std::allocator<char>::allocator();
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
                    /* try { // try from 08679d57 to 08679d5b has its CatchHandler @ 08679d5e */
    std::string::string(local_24,pcVar1,(allocator *)&local_1e);
    std::allocator<char>::~allocator(&local_1e);
                    /* try { // try from 08679da2 to 08679da6 has its CatchHandler @ 08679f3d */
    np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 08679dc8 to 08679dcc has its CatchHandler @ 08679f0b */
    np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
    pcVar1 = &local_1af;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar1 & 1) != 0;
    if (bVar8) {
      local_1af = '\0';
      pcVar1 = local_1ae;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar1 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
    }
    if (!bVar8) {
      *pcVar1 = '\0';
    }
    sprintf(&local_1af,"+%d %s",param_3,param_1);
                    /* try { // try from 08679e5f to 08679ebb has its CatchHandler @ 08679ed9 */
    std::string::operator+=(local_28,&local_1af);
    std::string::operator+=(local_28,local_2c);
    std::string::operator+=(local_24,local_28);
    uVar7 = std::string::length(local_24);
    bVar8 = uVar7 < 0x78;
    if (bVar8) {
      sVar2 = std::string::length(local_24);
      pvVar3 = (void *)std::string::c_str(local_24);
      memcpy(local_b0,pvVar3,sVar2);
    }
                    /* try { // try from 08679ef4 to 08679ef8 has its CatchHandler @ 08679f0b */
    std::string::~string(local_2c);
                    /* try { // try from 08679f26 to 08679f2a has its CatchHandler @ 08679f3d */
    std::string::~string(local_28);
    std::string::~string(local_24);
  }
  else {
    if (param_4) {
      return;
    }
    if (param_2 < 0xb) {
      return;
    }
    std::allocator<char>::allocator();
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
                    /* try { // try from 08679fb3 to 08679fb7 has its CatchHandler @ 08679fba */
    std::string::string(local_30,pcVar1,(allocator *)local_1d);
    std::allocator<char>::~allocator(local_1d);
                    /* try { // try from 08679ffe to 0867a002 has its CatchHandler @ 0867a19c */
    np_server_xml::CServerXml::GetServerString((int)local_34,(bool *)g_ServerString_);
                    /* try { // try from 0867a024 to 0867a028 has its CatchHandler @ 0867a16a */
    np_server_xml::CServerXml::GetServerString((int)local_38,(bool *)g_ServerString_);
    pcVar1 = &local_1af;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar1 & 1) != 0;
    if (bVar8) {
      local_1af = '\0';
      pcVar1 = local_1ae;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar1 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
    }
    if (!bVar8) {
      *pcVar1 = '\0';
    }
    sprintf(&local_1af,"+%d %s",param_2 + 1,param_1);
                    /* try { // try from 0867a0be to 0867a11a has its CatchHandler @ 0867a138 */
    std::string::operator+=(local_34,&local_1af);
    std::string::operator+=(local_34,local_38);
    std::string::operator+=(local_30,local_34);
    uVar7 = std::string::length(local_30);
    bVar8 = uVar7 < 0x78;
    if (bVar8) {
      sVar2 = std::string::length(local_30);
      pvVar3 = (void *)std::string::c_str(local_30);
      memcpy(local_b0,pvVar3,sVar2);
    }
                    /* try { // try from 0867a153 to 0867a157 has its CatchHandler @ 0867a16a */
    std::string::~string(local_38);
                    /* try { // try from 0867a185 to 0867a189 has its CatchHandler @ 0867a19c */
    std::string::~string(local_34);
    std::string::~string(local_30);
  }
  if (bVar8) {
    uVar7 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar4 = GetServerGroup(this);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendGuildBoardWrite(this_00,local_b0,0,uVar6,-1,-1,uVar7);
  }
  return;
}
```
