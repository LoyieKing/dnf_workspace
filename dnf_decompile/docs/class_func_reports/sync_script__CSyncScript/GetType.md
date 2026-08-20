# GetType

`_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b`

`sync_script::CSyncScript::GetType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ENUM_CHARACTERJOB, int, int&, int&, bool)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861cf0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861cf0a  _ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b
#           sync_script::CSyncScript::GetType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ENUM_CHARACTERJOB, int, int&, int&, bool)
# range [0x0861cf0a, 0x0861d2db]
0861cf0a +0x000:  push   %ebp
0861cf0b +0x001:  mov    %esp,%ebp
0861cf0d +0x003:  push   %esi
0861cf0e +0x004:  push   %ebx
0861cf0f +0x005:  sub    $0x70,%esp
0861cf12 +0x008:  mov    0x20(%ebp),%eax
0861cf15 +0x00b:  mov    %al,-0x5c(%ebp)
0861cf18 +0x00e:  mov    0xc(%ebp),%eax
0861cf1b +0x011:  mov    %eax,(%esp)
0861cf1e +0x014:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0861cf23 +0x019:  test   %al,%al
0861cf25 +0x01b:  je     0861cf31 <+0x27>
0861cf27 +0x01d:  mov    $0x0,%ebx
0861cf2c +0x022:  jmp    0861d2d0 <+0x3c6>
0861cf31 +0x027:  movl   $0x0,0x8(%esp)
0861cf39 +0x02f:  movl   $"[",0x4(%esp)
0861cf41 +0x037:  mov    0xc(%ebp),%eax
0861cf44 +0x03a:  mov    %eax,(%esp)
0861cf47 +0x03d:  call   08706f90 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xba0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xba0
0861cf4c +0x042:  test   %eax,%eax
0861cf4e +0x044:  setne  %al
0861cf51 +0x047:  test   %al,%al
0861cf53 +0x049:  je     0861cf5f <+0x55>
0861cf55 +0x04b:  mov    $0x0,%ebx
0861cf5a +0x050:  jmp    0861d2d0 <+0x3c6>
0861cf5f +0x055:  movl   $0x1,-0x40(%ebp)
0861cf66 +0x05c:  lea    -0x3c(%ebp),%eax
0861cf69 +0x05f:  mov    0xc(%ebp),%edx
0861cf6c +0x062:  mov    %edx,0x4(%esp)
0861cf70 +0x066:  mov    %eax,(%esp)
0861cf73 +0x069:  call   08708f30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b40
0861cf78 +0x06e:  sub    $0x4,%esp
0861cf7b +0x071:  lea    -0x44(%ebp),%eax
0861cf7e +0x074:  lea    -0x40(%ebp),%edx
0861cf81 +0x077:  mov    %edx,0x8(%esp)
0861cf85 +0x07b:  lea    -0x3c(%ebp),%edx
0861cf88 +0x07e:  mov    %edx,0x4(%esp)
0861cf8c +0x082:  mov    %eax,(%esp)
0861cf8f +0x085:  call   086281f8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1856>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1856
0861cf94 +0x08a:  sub    $0x4,%esp
0861cf97 +0x08d:  lea    -0x38(%ebp),%eax
0861cf9a +0x090:  mov    0xc(%ebp),%edx
0861cf9d +0x093:  mov    %edx,0x4(%esp)
0861cfa1 +0x097:  mov    %eax,(%esp)
0861cfa4 +0x09a:  call   08708f30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b40
0861cfa9 +0x09f:  sub    $0x4,%esp
0861cfac +0x0a2:  lea    -0x48(%ebp),%eax
0861cfaf +0x0a5:  mov    -0x44(%ebp),%edx
0861cfb2 +0x0a8:  mov    %edx,0xc(%esp)
0861cfb6 +0x0ac:  mov    -0x38(%ebp),%edx
0861cfb9 +0x0af:  mov    %edx,0x8(%esp)
0861cfbd +0x0b3:  mov    0xc(%ebp),%edx
0861cfc0 +0x0b6:  mov    %edx,0x4(%esp)
0861cfc4 +0x0ba:  mov    %eax,(%esp)
0861cfc7 +0x0bd:  call   08708a20 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2630>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2630
0861cfcc +0x0c2:  sub    $0x4,%esp
0861cfcf +0x0c5:  lea    -0x30(%ebp),%eax
0861cfd2 +0x0c8:  mov    0xc(%ebp),%edx
0861cfd5 +0x0cb:  mov    %edx,0x4(%esp)
0861cfd9 +0x0cf:  mov    %eax,(%esp)
0861cfdc +0x0d2:  call   08708ef0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b00
0861cfe1 +0x0d7:  sub    $0x4,%esp
0861cfe4 +0x0da:  movl   $0x1,-0x28(%ebp)
0861cfeb +0x0e1:  lea    -0x24(%ebp),%eax
0861cfee +0x0e4:  mov    0xc(%ebp),%edx
0861cff1 +0x0e7:  mov    %edx,0x4(%esp)
0861cff5 +0x0eb:  mov    %eax,(%esp)
0861cff8 +0x0ee:  call   08708ef0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b00
0861cffd +0x0f3:  sub    $0x4,%esp
0861d000 +0x0f6:  lea    -0x2c(%ebp),%eax
0861d003 +0x0f9:  lea    -0x28(%ebp),%edx
0861d006 +0x0fc:  mov    %edx,0x8(%esp)
0861d00a +0x100:  lea    -0x24(%ebp),%edx
0861d00d +0x103:  mov    %edx,0x4(%esp)
0861d011 +0x107:  mov    %eax,(%esp)
0861d014 +0x10a:  call   0862822c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x188a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x188a
0861d019 +0x10f:  sub    $0x4,%esp
0861d01c +0x112:  lea    -0x34(%ebp),%eax
0861d01f +0x115:  mov    -0x30(%ebp),%edx
0861d022 +0x118:  mov    %edx,0xc(%esp)
0861d026 +0x11c:  mov    -0x2c(%ebp),%edx
0861d029 +0x11f:  mov    %edx,0x8(%esp)
0861d02d +0x123:  mov    0xc(%ebp),%edx
0861d030 +0x126:  mov    %edx,0x4(%esp)
0861d034 +0x12a:  mov    %eax,(%esp)
0861d037 +0x12d:  call   08708a20 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2630>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2630
0861d03c +0x132:  sub    $0x4,%esp
0861d03f +0x135:  lea    -0x1d(%ebp),%eax
0861d042 +0x138:  mov    %eax,(%esp)
0861d045 +0x13b:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0861d04a +0x140:  lea    -0x1d(%ebp),%eax
0861d04d +0x143:  mov    %eax,0x8(%esp)
0861d051 +0x147:  movl   $"stackable ",0x4(%esp)
0861d059 +0x14f:  lea    -0x4c(%ebp),%eax
0861d05c +0x152:  mov    %eax,(%esp)
0861d05f +0x155:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0861d064 +0x15a:  jmp    0861d081 <+0x177>
0861d066 +0x15c:  mov    %edx,%ebx
0861d068 +0x15e:  mov    %eax,%esi
0861d06a +0x160:  lea    -0x1d(%ebp),%eax
0861d06d +0x163:  mov    %eax,(%esp)
0861d070 +0x166:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0861d075 +0x16b:  mov    %esi,%eax
0861d077 +0x16d:  mov    %ebx,%edx
0861d079 +0x16f:  mov    %eax,(%esp)
0861d07c +0x172:  call   08ae3750 <_Unwind_Resume>
0861d081 +0x177:  lea    -0x1d(%ebp),%eax
0861d084 +0x17a:  mov    %eax,(%esp)
0861d087 +0x17d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0861d08c +0x182:  movzbl -0x5c(%ebp),%eax
0861d090 +0x186:  xor    $0x1,%eax
0861d093 +0x189:  test   %al,%al
0861d095 +0x18b:  je     0861d0b5 <+0x1ab>
0861d097 +0x18d:  movl   $"creature",0x4(%esp)
0861d09f +0x195:  mov    0xc(%ebp),%eax
0861d0a2 +0x198:  mov    %eax,(%esp)
0861d0a5 +0x19b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
0861d0aa +0x1a0:  test   %eax,%eax
0861d0ac +0x1a2:  jne    0861d0b5 <+0x1ab>
0861d0ae +0x1a4:  mov    $0x1,%eax
0861d0b3 +0x1a9:  jmp    0861d0ba <+0x1b0>
0861d0b5 +0x1ab:  mov    $0x0,%eax
0861d0ba +0x1b0:  test   %al,%al
0861d0bc +0x1b2:  je     0861d0d2 <+0x1c8>
0861d0be +0x1b4:  mov    0xc(%ebp),%eax
0861d0c1 +0x1b7:  mov    %eax,0x4(%esp)
0861d0c5 +0x1bb:  lea    -0x4c(%ebp),%eax
0861d0c8 +0x1be:  mov    %eax,(%esp)
0861d0cb +0x1c1:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0861d0d0 +0x1c6:  jmp    0861d0e4 <+0x1da>
0861d0d2 +0x1c8:  mov    0xc(%ebp),%eax
0861d0d5 +0x1cb:  mov    %eax,0x4(%esp)
0861d0d9 +0x1cf:  lea    -0x4c(%ebp),%eax
0861d0dc +0x1d2:  mov    %eax,(%esp)
0861d0df +0x1d5:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0861d0e4 +0x1da:  mov    0x8(%ebp),%eax
0861d0e7 +0x1dd:  lea    0x1c(%eax),%edx
0861d0ea +0x1e0:  lea    -0x4c(%ebp),%eax
0861d0ed +0x1e3:  mov    %eax,0x4(%esp)
0861d0f1 +0x1e7:  mov    %edx,(%esp)
0861d0f4 +0x1ea:  call   086282a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1906>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1906
0861d0f9 +0x1ef:  mov    %eax,0x4(%esp)
0861d0fd +0x1f3:  lea    -0x58(%ebp),%eax
0861d100 +0x1f6:  mov    %eax,(%esp)
0861d103 +0x1f9:  call   08627bbe <_GLOBAL__I__Z22GetSocketTypeCharactert+0x121c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x121c
0861d108 +0x1fe:  mov    0x8(%ebp),%eax
0861d10b +0x201:  add    $0x4,%eax
0861d10e +0x204:  mov    %eax,(%esp)
0861d111 +0x207:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0861d116 +0x20c:  test   %eax,%eax
0861d118 +0x20e:  je     0861d142 <+0x238>
0861d11a +0x210:  movzbl -0x57(%ebp),%ebx
0861d11e +0x214:  mov    0x8(%ebp),%eax
0861d121 +0x217:  add    $0x4,%eax
0861d124 +0x21a:  movl   $0x0,0x4(%esp)
0861d12c +0x222:  mov    %eax,(%esp)
0861d12f +0x225:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0861d134 +0x22a:  movzbl (%eax),%eax
0861d137 +0x22d:  cmp    %al,%bl
0861d139 +0x22f:  jne    0861d142 <+0x238>
0861d13b +0x231:  mov    $0x1,%eax
0861d140 +0x236:  jmp    0861d147 <+0x23d>
0861d142 +0x238:  mov    $0x0,%eax
0861d147 +0x23d:  test   %al,%al
0861d149 +0x23f:  je     0861d18d <+0x283>
0861d14b +0x241:  mov    0x14(%ebp),%eax
0861d14e +0x244:  mov    %eax,0x8(%esp)
0861d152 +0x248:  mov    0x10(%ebp),%eax
0861d155 +0x24b:  mov    %eax,0x4(%esp)
0861d159 +0x24f:  lea    -0x1c(%ebp),%eax
0861d15c +0x252:  mov    %eax,(%esp)
0861d15f +0x255:  call   08626ae2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x140>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x140
0861d164 +0x25a:  mov    0x8(%ebp),%eax
0861d167 +0x25d:  lea    0x34(%eax),%edx
0861d16a +0x260:  lea    -0x1c(%ebp),%eax
0861d16d +0x263:  mov    %eax,0x4(%esp)
0861d171 +0x267:  mov    %edx,(%esp)
0861d174 +0x26a:  call   0862840a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1a68>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1a68
0861d179 +0x26f:  mov    %eax,0x4(%esp)
0861d17d +0x273:  lea    -0x58(%ebp),%eax
0861d180 +0x276:  mov    %eax,(%esp)
0861d183 +0x279:  call   08627c28 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1286>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1286
0861d188 +0x27e:  jmp    0861d26b <+0x361>
0861d18d +0x283:  mov    0x8(%ebp),%eax
0861d190 +0x286:  add    $0x4,%eax
0861d193 +0x289:  mov    %eax,(%esp)
0861d196 +0x28c:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0861d19b +0x291:  cmp    $0x1,%eax
0861d19e +0x294:  jbe    0861d1c8 <+0x2be>
0861d1a0 +0x296:  movzbl -0x57(%ebp),%ebx
0861d1a4 +0x29a:  mov    0x8(%ebp),%eax
0861d1a7 +0x29d:  add    $0x4,%eax
0861d1aa +0x2a0:  movl   $0x1,0x4(%esp)
0861d1b2 +0x2a8:  mov    %eax,(%esp)
0861d1b5 +0x2ab:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0861d1ba +0x2b0:  movzbl (%eax),%eax
0861d1bd +0x2b3:  cmp    %al,%bl
0861d1bf +0x2b5:  jne    0861d1c8 <+0x2be>
0861d1c1 +0x2b7:  mov    $0x1,%eax
0861d1c6 +0x2bc:  jmp    0861d1cd <+0x2c3>
0861d1c8 +0x2be:  mov    $0x0,%eax
0861d1cd +0x2c3:  test   %al,%al
0861d1cf +0x2c5:  je     0861d26b <+0x361>
0861d1d5 +0x2cb:  lea    -0x4c(%ebp),%eax
0861d1d8 +0x2ce:  mov    %eax,0x4(%esp)
0861d1dc +0x2d2:  lea    -0xc(%ebp),%eax
0861d1df +0x2d5:  mov    %eax,(%esp)
0861d1e2 +0x2d8:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0861d1e7 +0x2dd:  mov    0x14(%ebp),%eax
0861d1ea +0x2e0:  movzbl %al,%eax
0861d1ed +0x2e3:  lea    -0xc(%ebp),%edx
0861d1f0 +0x2e6:  mov    %edx,0x8(%esp)
0861d1f4 +0x2ea:  mov    %eax,0x4(%esp)
0861d1f8 +0x2ee:  lea    -0x14(%ebp),%eax
0861d1fb +0x2f1:  mov    %eax,(%esp)
0861d1fe +0x2f4:  call   08626b3e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x19c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x19c
0861d203 +0x2f9:  mov    0x8(%ebp),%eax
0861d206 +0x2fc:  lea    0x4c(%eax),%edx
0861d209 +0x2ff:  lea    -0x14(%ebp),%eax
0861d20c +0x302:  mov    %eax,0x4(%esp)
0861d210 +0x306:  mov    %edx,(%esp)
0861d213 +0x309:  call   0862859c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1bfa>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1bfa
0861d218 +0x30e:  mov    %eax,0x4(%esp)
0861d21c +0x312:  lea    -0x58(%ebp),%eax
0861d21f +0x315:  mov    %eax,(%esp)
0861d222 +0x318:  call   08627c28 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1286>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1286
0861d227 +0x31d:  jmp    0861d23e <+0x334>
0861d229 +0x31f:  mov    %edx,%ebx
0861d22b +0x321:  mov    %eax,%esi
0861d22d +0x323:  lea    -0x14(%ebp),%eax
0861d230 +0x326:  mov    %eax,(%esp)
0861d233 +0x329:  call   08627c7e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12dc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12dc
0861d238 +0x32e:  mov    %esi,%eax
0861d23a +0x330:  mov    %ebx,%edx
0861d23c +0x332:  jmp    0861d24b <+0x341>
0861d23e +0x334:  lea    -0x14(%ebp),%eax
0861d241 +0x337:  mov    %eax,(%esp)
0861d244 +0x33a:  call   08627c7e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12dc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12dc
0861d249 +0x33f:  jmp    0861d260 <+0x356>
0861d24b +0x341:  mov    %edx,%ebx
0861d24d +0x343:  mov    %eax,%esi
0861d24f +0x345:  lea    -0xc(%ebp),%eax
0861d252 +0x348:  mov    %eax,(%esp)
0861d255 +0x34b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d25a +0x350:  mov    %esi,%eax
0861d25c +0x352:  mov    %ebx,%edx
0861d25e +0x354:  jmp    0861d295 <+0x38b>
0861d260 +0x356:  lea    -0xc(%ebp),%eax
0861d263 +0x359:  mov    %eax,(%esp)
0861d266 +0x35c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d26b +0x361:  movzbl -0x57(%ebp),%eax
0861d26f +0x365:  movzbl %al,%edx
0861d272 +0x368:  mov    0x18(%ebp),%eax
0861d275 +0x36b:  mov    %edx,(%eax)
0861d277 +0x36d:  movzwl -0x54(%ebp),%eax
0861d27b +0x371:  movzwl %ax,%edx
0861d27e +0x374:  mov    0x1c(%ebp),%eax
0861d281 +0x377:  mov    %edx,(%eax)
0861d283 +0x379:  mov    $0x1,%ebx
0861d288 +0x37e:  lea    -0x58(%ebp),%eax
0861d28b +0x381:  mov    %eax,(%esp)
0861d28e +0x384:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
0861d293 +0x389:  jmp    0861d2c5 <+0x3bb>
0861d295 +0x38b:  mov    %edx,%ebx
0861d297 +0x38d:  mov    %eax,%esi
0861d299 +0x38f:  lea    -0x58(%ebp),%eax
0861d29c +0x392:  mov    %eax,(%esp)
0861d29f +0x395:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
0861d2a4 +0x39a:  mov    %esi,%eax
0861d2a6 +0x39c:  mov    %ebx,%edx
0861d2a8 +0x39e:  jmp    0861d2aa <+0x3a0>
0861d2aa +0x3a0:  mov    %edx,%ebx
0861d2ac +0x3a2:  mov    %eax,%esi
0861d2ae +0x3a4:  lea    -0x4c(%ebp),%eax
0861d2b1 +0x3a7:  mov    %eax,(%esp)
0861d2b4 +0x3aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d2b9 +0x3af:  mov    %esi,%eax
0861d2bb +0x3b1:  mov    %ebx,%edx
0861d2bd +0x3b3:  mov    %eax,(%esp)
0861d2c0 +0x3b6:  call   08ae3750 <_Unwind_Resume>
0861d2c5 +0x3bb:  lea    -0x4c(%ebp),%eax
0861d2c8 +0x3be:  mov    %eax,(%esp)
0861d2cb +0x3c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d2d0 +0x3c6:  mov    %ebx,%eax
0861d2d2 +0x3c8:  lea    -0x8(%ebp),%esp
0861d2d5 +0x3cb:  add    $0x0,%esp
0861d2d8 +0x3ce:  pop    %ebx
0861d2d9 +0x3cf:  pop    %esi
0861d2da +0x3d0:  pop    %ebp
0861d2db +0x3d1:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::GetType @ 0x861cf0a

/* sync_script::CSyncScript::GetType(std::string, ENUM_CHARACTERJOB, int, int&, int&, bool) */

undefined4 __thiscall
sync_script::CSyncScript::GetType
          (CSyncScript *this,string *param_1,undefined4 param_3,undefined4 param_4,uint *param_5,
          uint *param_6,char param_7)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  SITEMTYPE *pSVar5;
  byte *pbVar6;
  uint uVar7;
  SITEMTYPE local_5c;
  byte local_5b;
  ushort local_58;
  string local_50;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  allocator<char> local_21;
  SWEAPONTYPE local_20 [8];
  SARMORTYPE local_18 [8];
  string local_10 [4];
  
  cVar3 = std::string::empty(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  iVar4 = std::string::find_first_of(param_1,"[",0);
  if (iVar4 == 0) {
    local_44 = 1;
    std::string::begin();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator+
              ((__normal_iterator<char*,std::string> *)&local_48,&local_40);
    std::string::begin();
    std::string::erase(local_4c,param_1,local_3c,local_48);
    std::string::end();
    local_2c = 1;
    std::string::end();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)&local_30,&local_28);
    std::string::erase(local_38,param_1,local_30,local_34);
    std::allocator<char>::allocator();
                    /* try { // try from 0861d05f to 0861d063 has its CatchHandler @ 0861d066 */
    std::string::string((string *)&local_50,"stackable ",(allocator *)&local_21);
    std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 0861d0a5 to 0861d107 has its CatchHandler @ 0861d2aa */
    if ((param_7 == '\x01') || (iVar4 = std::string::compare(param_1,"creature"), iVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      std::string::operator+=((string *)&local_50,param_1);
    }
    else {
      std::string::operator=((string *)&local_50,param_1);
    }
    pSVar5 = (SITEMTYPE *)
             std::
             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                           *)(this + 0x1c),&local_50);
    SITEMTYPE::SITEMTYPE(&local_5c,pSVar5);
    iVar4 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size
                      ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
    bVar2 = local_5b;
    if ((iVar4 == 0) ||
       (pbVar6 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                   ((vector<unsigned_char,std::allocator<unsigned_char>> *)
                                    (this + 4),0), bVar2 != *pbVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      SWEAPONTYPE::SWEAPONTYPE(local_20,param_3,param_4);
                    /* try { // try from 0861d174 to 0861d1e6 has its CatchHandler @ 0861d295 */
      pSVar5 = (SITEMTYPE *)
               std::
               map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x34),local_20);
      SITEMTYPE::operator=(&local_5c,pSVar5);
    }
    else {
      uVar7 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size
                        ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
      bVar2 = local_5b;
      if ((uVar7 < 2) ||
         (pbVar6 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                     ((vector<unsigned_char,std::allocator<unsigned_char>> *)
                                      (this + 4),1), bVar2 != *pbVar6)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        std::string::string(local_10,(string *)&local_50);
                    /* try { // try from 0861d1fe to 0861d202 has its CatchHandler @ 0861d24b */
        SARMORTYPE::SARMORTYPE(local_18,(uchar)param_4,(string)local_10);
                    /* try { // try from 0861d213 to 0861d226 has its CatchHandler @ 0861d229 */
        pSVar5 = (SITEMTYPE *)
                 std::
                 map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                 ::operator[]((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                               *)(this + 0x4c),local_18);
        SITEMTYPE::operator=(&local_5c,pSVar5);
                    /* try { // try from 0861d244 to 0861d248 has its CatchHandler @ 0861d24b */
        SARMORTYPE::~SARMORTYPE(local_18);
                    /* try { // try from 0861d266 to 0861d26a has its CatchHandler @ 0861d295 */
        std::string::~string(local_10);
      }
    }
    *param_5 = (uint)local_5b;
    *param_6 = (uint)local_58;
                    /* try { // try from 0861d28e to 0861d292 has its CatchHandler @ 0861d2aa */
    SITEMTYPE::~SITEMTYPE(&local_5c);
    std::string::~string((string *)&local_50);
    return 1;
  }
  return 0;
}
```
