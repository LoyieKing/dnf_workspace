# Load

`_ZN11Arad_Script4LoadEPKc`

`Arad_Script::Load(char const*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817bea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817bea4  _ZN11Arad_Script4LoadEPKc
#           Arad_Script::Load(char const*)
# range [0x0817bea4, 0x0817c44d]
0817bea4 +0x000:  push   %ebp
0817bea5 +0x001:  mov    %esp,%ebp
0817bea7 +0x003:  push   %edi
0817bea8 +0x004:  push   %esi
0817bea9 +0x005:  push   %ebx
0817beaa +0x006:  sub    $0x66c,%esp
0817beb0 +0x00c:  mov    0x8(%ebp),%eax
0817beb3 +0x00f:  add    $0x20,%eax
0817beb6 +0x012:  mov    %eax,(%esp)
0817beb9 +0x015:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0817bebe +0x01a:  movl   $"rt",0x4(%esp)
0817bec6 +0x022:  mov    %eax,(%esp)
0817bec9 +0x025:  call   0807e770 <_init+0x1068>
0817bece +0x02a:  mov    %eax,-0x44(%ebp)
0817bed1 +0x02d:  cmpl   $0x0,-0x44(%ebp)
0817bed5 +0x031:  jne    0817bee1 <+0x3d>
0817bed7 +0x033:  mov    $0x0,%eax
0817bedc +0x038:  jmp    0817c443 <+0x59f>
0817bee1 +0x03d:  mov    0x8(%ebp),%eax
0817bee4 +0x040:  mov    %eax,(%esp)
0817bee7 +0x043:  call   0817b72a <_ZN11Arad_Script6CreateEv>  ; Arad_Script::Create()
0817beec +0x048:  xor    $0x1,%eax
0817beef +0x04b:  test   %al,%al
0817bef1 +0x04d:  je     0817befd <+0x59>
0817bef3 +0x04f:  mov    $0x0,%eax
0817bef8 +0x054:  jmp    0817c443 <+0x59f>
0817befd +0x059:  movl   $0x0,-0x40(%ebp)
0817bf04 +0x060:  lea    -0x65c(%ebp),%ebx
0817bf0a +0x066:  mov    $0x0,%eax
0817bf0f +0x06b:  mov    $0x100,%edx
0817bf14 +0x070:  mov    %ebx,%edi
0817bf16 +0x072:  mov    %edx,%ecx
0817bf18 +0x074:  rep stos %eax,%es:(%edi)
0817bf1a +0x076:  mov    0xc(%ebp),%eax
0817bf1d +0x079:  mov    %eax,0x8(%esp)
0817bf21 +0x07d:  movl   $"[%s]",0x4(%esp)
0817bf29 +0x085:  lea    -0x65c(%ebp),%eax
0817bf2f +0x08b:  mov    %eax,(%esp)
0817bf32 +0x08e:  call   0807e440 <_init+0xd38>
0817bf37 +0x093:  movl   $0x0,-0x3c(%ebp)
0817bf3e +0x09a:  movl   $0x0,-0x38(%ebp)
0817bf45 +0x0a1:  movl   $0x0,-0x34(%ebp)
0817bf4c +0x0a8:  lea    -0x65c(%ebp),%eax
0817bf52 +0x0ae:  mov    %eax,(%esp)
0817bf55 +0x0b1:  call   0807e3b0 <_init+0xca8>
0817bf5a +0x0b6:  mov    %eax,-0x30(%ebp)
0817bf5d +0x0b9:  movl   $0x0,-0x2c(%ebp)
0817bf64 +0x0c0:  movl   $0x0,-0x28(%ebp)
0817bf6b +0x0c7:  movl   $0x0,-0x24(%ebp)
0817bf72 +0x0ce:  movl   $0x0,-0x20(%ebp)
0817bf79 +0x0d5:  jmp    0817bf82 <+0xde>
0817bf7b +0x0d7:  nop
0817bf7c +0x0d8:  jmp    0817bf82 <+0xde>
0817bf7e +0x0da:  nop
0817bf7f +0x0db:  jmp    0817bf82 <+0xde>
0817bf81 +0x0dd:  nop
0817bf82 +0x0de:  mov    -0x20(%ebp),%eax
0817bf85 +0x0e1:  addl   $0x1,-0x20(%ebp)
0817bf89 +0x0e5:  mov    0x8(%ebp),%edx
0817bf8c +0x0e8:  add    $0x20,%edx
0817bf8f +0x0eb:  mov    %eax,0x4(%esp)
0817bf93 +0x0ef:  mov    %edx,(%esp)
0817bf96 +0x0f2:  call   08708ec0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2ad0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2ad0
0817bf9b +0x0f7:  movzbl (%eax),%eax
0817bf9e +0x0fa:  movsbl %al,%eax
0817bfa1 +0x0fd:  mov    %eax,-0x1c(%ebp)
0817bfa4 +0x100:  mov    -0x44(%ebp),%eax
0817bfa7 +0x103:  mov    %eax,(%esp)
0817bfaa +0x106:  call   0807ded0 <_init+0x7c8>
0817bfaf +0x10b:  mov    %eax,-0x2c(%ebp)
0817bfb2 +0x10e:  cmpl   $0xffffffff,-0x2c(%ebp)
0817bfb6 +0x112:  jne    0817bfc2 <+0x11e>
0817bfb8 +0x114:  mov    $0x0,%eax
0817bfbd +0x119:  jmp    0817c443 <+0x59f>
0817bfc2 +0x11e:  cmpl   $0x20,-0x2c(%ebp)
0817bfc6 +0x122:  jle    0817bf7b <+0xd7>
0817bfc8 +0x124:  cmpl   $0x7e,-0x2c(%ebp)
0817bfcc +0x128:  jg     0817bf7e <+0xda>
0817bfce +0x12a:  mov    -0x34(%ebp),%eax
0817bfd1 +0x12d:  movzbl -0x65c(%ebp,%eax,1),%eax
0817bfd9 +0x135:  movsbl %al,%eax
0817bfdc +0x138:  cmp    -0x2c(%ebp),%eax
0817bfdf +0x13b:  jne    0817bfef <+0x14b>
0817bfe1 +0x13d:  addl   $0x1,-0x34(%ebp)
0817bfe5 +0x141:  mov    -0x34(%ebp),%eax
0817bfe8 +0x144:  cmp    -0x30(%ebp),%eax
0817bfeb +0x147:  jne    0817bf81 <+0xdd>
0817bfed +0x149:  jmp    0817bff8 <+0x154>
0817bfef +0x14b:  movl   $0x0,-0x34(%ebp)
0817bff6 +0x152:  jmp    0817bf82 <+0xde>
0817bff8 +0x154:  lea    -0x25c(%ebp),%ebx
0817bffe +0x15a:  mov    $0x0,%eax
0817c003 +0x15f:  mov    $0x80,%edx
0817c008 +0x164:  mov    %ebx,%edi
0817c00a +0x166:  mov    %edx,%ecx
0817c00c +0x168:  rep stos %eax,%es:(%edi)
0817c00e +0x16a:  movl   $0x0,-0x24(%ebp)
0817c015 +0x171:  mov    -0x44(%ebp),%eax
0817c018 +0x174:  mov    %eax,(%esp)
0817c01b +0x177:  call   0807ded0 <_init+0x7c8>
0817c020 +0x17c:  mov    %eax,-0x2c(%ebp)
0817c023 +0x17f:  cmpl   $0xffffffff,-0x2c(%ebp)
0817c027 +0x183:  jne    0817c033 <+0x18f>
0817c029 +0x185:  mov    $0x0,%eax
0817c02e +0x18a:  jmp    0817c443 <+0x59f>
0817c033 +0x18f:  cmpl   $0x20,-0x2c(%ebp)
0817c037 +0x193:  je     0817c04f <+0x1ab>
0817c039 +0x195:  cmpl   $0x9,-0x2c(%ebp)
0817c03d +0x199:  je     0817c04f <+0x1ab>
0817c03f +0x19b:  cmpl   $0xa,-0x2c(%ebp)
0817c043 +0x19f:  je     0817c04f <+0x1ab>
0817c045 +0x1a1:  cmpl   $0xd,-0x2c(%ebp)
0817c049 +0x1a5:  jne    0817c22c <+0x388>
0817c04f +0x1ab:  cmpl   $0x0,-0x24(%ebp)
0817c053 +0x1af:  jle    0817c220 <+0x37c>
0817c059 +0x1b5:  mov    -0x24(%ebp),%eax
0817c05c +0x1b8:  movb   $0x0,-0x25c(%ebp,%eax,1)
0817c064 +0x1c0:  movl   $0x0,-0x24(%ebp)
0817c06b +0x1c7:  lea    -0x25c(%ebp),%eax
0817c071 +0x1cd:  mov    %eax,-0x40(%ebp)
0817c074 +0x1d0:  lea    -0x25c(%ebp),%eax
0817c07a +0x1d6:  mov    %eax,(%esp)
0817c07d +0x1d9:  call   0807e3b0 <_init+0xca8>
0817c082 +0x1de:  mov    %eax,-0x38(%ebp)
0817c085 +0x1e1:  movl   $0x0,-0x3c(%ebp)
0817c08c +0x1e8:  jmp    0817c14d <+0x2a9>
0817c091 +0x1ed:  mov    -0x3c(%ebp),%eax
0817c094 +0x1f0:  movzbl -0x25c(%ebp,%eax,1),%eax
0817c09c +0x1f8:  cmp    $0x2f,%al
0817c09e +0x1fa:  jne    0817c149 <+0x2a5>
0817c0a4 +0x200:  mov    -0x3c(%ebp),%eax
0817c0a7 +0x203:  movb   $0x0,-0x25c(%ebp,%eax,1)
0817c0af +0x20b:  lea    -0x55(%ebp),%eax
0817c0b2 +0x20e:  mov    %eax,(%esp)
0817c0b5 +0x211:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817c0ba +0x216:  lea    -0x55(%ebp),%eax
0817c0bd +0x219:  mov    %eax,0x8(%esp)
0817c0c1 +0x21d:  mov    -0x40(%ebp),%eax
0817c0c4 +0x220:  mov    %eax,0x4(%esp)
0817c0c8 +0x224:  lea    -0x5c(%ebp),%eax
0817c0cb +0x227:  mov    %eax,(%esp)
0817c0ce +0x22a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817c0d3 +0x22f:  mov    0x8(%ebp),%eax
0817c0d6 +0x232:  lea    0x24(%eax),%edx
0817c0d9 +0x235:  lea    -0x5c(%ebp),%eax
0817c0dc +0x238:  mov    %eax,0x4(%esp)
0817c0e0 +0x23c:  mov    %edx,(%esp)
0817c0e3 +0x23f:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817c0e8 +0x244:  mov    0x8(%ebp),%edx
0817c0eb +0x247:  mov    0x8(%edx),%edx
0817c0ee +0x24a:  mov    %edx,(%eax)
0817c0f0 +0x24c:  lea    -0x5c(%ebp),%eax
0817c0f3 +0x24f:  mov    %eax,(%esp)
0817c0f6 +0x252:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c0fb +0x257:  jmp    0817c12d <+0x289>
0817c0fd +0x259:  mov    %edx,%ebx
0817c0ff +0x25b:  mov    %eax,%esi
0817c101 +0x25d:  lea    -0x5c(%ebp),%eax
0817c104 +0x260:  mov    %eax,(%esp)
0817c107 +0x263:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c10c +0x268:  mov    %esi,%eax
0817c10e +0x26a:  mov    %ebx,%edx
0817c110 +0x26c:  jmp    0817c112 <+0x26e>
0817c112 +0x26e:  mov    %edx,%ebx
0817c114 +0x270:  mov    %eax,%esi
0817c116 +0x272:  lea    -0x55(%ebp),%eax
0817c119 +0x275:  mov    %eax,(%esp)
0817c11c +0x278:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c121 +0x27d:  mov    %esi,%eax
0817c123 +0x27f:  mov    %ebx,%edx
0817c125 +0x281:  mov    %eax,(%esp)
0817c128 +0x284:  call   08ae3750 <_Unwind_Resume>
0817c12d +0x289:  lea    -0x55(%ebp),%eax
0817c130 +0x28c:  mov    %eax,(%esp)
0817c133 +0x28f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c138 +0x294:  mov    -0x3c(%ebp),%eax
0817c13b +0x297:  lea    0x1(%eax),%edx
0817c13e +0x29a:  lea    -0x25c(%ebp),%eax
0817c144 +0x2a0:  add    %edx,%eax
0817c146 +0x2a2:  mov    %eax,-0x40(%ebp)
0817c149 +0x2a5:  addl   $0x1,-0x3c(%ebp)
0817c14d +0x2a9:  mov    -0x3c(%ebp),%eax
0817c150 +0x2ac:  cmp    -0x38(%ebp),%eax
0817c153 +0x2af:  setb   %al
0817c156 +0x2b2:  test   %al,%al
0817c158 +0x2b4:  jne    0817c091 <+0x1ed>
0817c15e +0x2ba:  lea    -0x4d(%ebp),%eax
0817c161 +0x2bd:  mov    %eax,(%esp)
0817c164 +0x2c0:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817c169 +0x2c5:  lea    -0x4d(%ebp),%eax
0817c16c +0x2c8:  mov    %eax,0x8(%esp)
0817c170 +0x2cc:  mov    -0x40(%ebp),%eax
0817c173 +0x2cf:  mov    %eax,0x4(%esp)
0817c177 +0x2d3:  lea    -0x54(%ebp),%eax
0817c17a +0x2d6:  mov    %eax,(%esp)
0817c17d +0x2d9:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817c182 +0x2de:  mov    0x8(%ebp),%eax
0817c185 +0x2e1:  lea    0x24(%eax),%edx
0817c188 +0x2e4:  lea    -0x54(%ebp),%eax
0817c18b +0x2e7:  mov    %eax,0x4(%esp)
0817c18f +0x2eb:  mov    %edx,(%esp)
0817c192 +0x2ee:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817c197 +0x2f3:  mov    %eax,%edx
0817c199 +0x2f5:  mov    0x8(%ebp),%eax
0817c19c +0x2f8:  mov    0x8(%eax),%eax
0817c19f +0x2fb:  mov    %eax,(%edx)
0817c1a1 +0x2fd:  lea    0x1(%eax),%edx
0817c1a4 +0x300:  mov    0x8(%ebp),%eax
0817c1a7 +0x303:  mov    %edx,0x8(%eax)
0817c1aa +0x306:  lea    -0x54(%ebp),%eax
0817c1ad +0x309:  mov    %eax,(%esp)
0817c1b0 +0x30c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c1b5 +0x311:  jmp    0817c1e7 <+0x343>
0817c1b7 +0x313:  mov    %edx,%ebx
0817c1b9 +0x315:  mov    %eax,%esi
0817c1bb +0x317:  lea    -0x54(%ebp),%eax
0817c1be +0x31a:  mov    %eax,(%esp)
0817c1c1 +0x31d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c1c6 +0x322:  mov    %esi,%eax
0817c1c8 +0x324:  mov    %ebx,%edx
0817c1ca +0x326:  jmp    0817c1cc <+0x328>
0817c1cc +0x328:  mov    %edx,%ebx
0817c1ce +0x32a:  mov    %eax,%esi
0817c1d0 +0x32c:  lea    -0x4d(%ebp),%eax
0817c1d3 +0x32f:  mov    %eax,(%esp)
0817c1d6 +0x332:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c1db +0x337:  mov    %esi,%eax
0817c1dd +0x339:  mov    %ebx,%edx
0817c1df +0x33b:  mov    %eax,(%esp)
0817c1e2 +0x33e:  call   08ae3750 <_Unwind_Resume>
0817c1e7 +0x343:  lea    -0x4d(%ebp),%eax
0817c1ea +0x346:  mov    %eax,(%esp)
0817c1ed +0x349:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c1f2 +0x34e:  mov    0x8(%ebp),%eax
0817c1f5 +0x351:  mov    0x8(%eax),%eax
0817c1f8 +0x354:  lea    0x1(%eax),%edx
0817c1fb +0x357:  mov    0x8(%ebp),%eax
0817c1fe +0x35a:  mov    (%eax),%eax
0817c200 +0x35c:  cmp    %eax,%edx
0817c202 +0x35e:  jl     0817c220 <+0x37c>
0817c204 +0x360:  mov    0x8(%ebp),%eax
0817c207 +0x363:  mov    %eax,(%esp)
0817c20a +0x366:  call   0817b800 <_ZN11Arad_Script9ExpandColEv>  ; Arad_Script::ExpandCol()
0817c20f +0x36b:  xor    $0x1,%eax
0817c212 +0x36e:  test   %al,%al
0817c214 +0x370:  je     0817c220 <+0x37c>
0817c216 +0x372:  mov    $0x0,%eax
0817c21b +0x377:  jmp    0817c443 <+0x59f>
0817c220 +0x37c:  cmpl   $0xa,-0x2c(%ebp)
0817c224 +0x380:  je     0817c242 <+0x39e>
0817c226 +0x382:  nop
0817c227 +0x383:  jmp    0817c015 <+0x171>
0817c22c +0x388:  mov    -0x24(%ebp),%eax
0817c22f +0x38b:  mov    -0x2c(%ebp),%edx
0817c232 +0x38e:  mov    %dl,-0x25c(%ebp,%eax,1)
0817c239 +0x395:  addl   $0x1,-0x24(%ebp)
0817c23d +0x399:  jmp    0817c015 <+0x171>
0817c242 +0x39e:  nop
0817c243 +0x39f:  jmp    0817c246 <+0x3a2>
0817c245 +0x3a1:  nop
0817c246 +0x3a2:  movl   $0xffffffff,-0x28(%ebp)
0817c24d +0x3a9:  movl   $0x0,-0x24(%ebp)
0817c254 +0x3b0:  mov    -0x44(%ebp),%eax
0817c257 +0x3b3:  mov    %eax,(%esp)
0817c25a +0x3b6:  call   0807ded0 <_init+0x7c8>
0817c25f +0x3bb:  mov    %eax,-0x2c(%ebp)
0817c262 +0x3be:  cmpl   $0x20,-0x2c(%ebp)
0817c266 +0x3c2:  je     0817c284 <+0x3e0>
0817c268 +0x3c4:  cmpl   $0x9,-0x2c(%ebp)
0817c26c +0x3c8:  je     0817c284 <+0x3e0>
0817c26e +0x3ca:  cmpl   $0xa,-0x2c(%ebp)
0817c272 +0x3ce:  je     0817c284 <+0x3e0>
0817c274 +0x3d0:  cmpl   $0xd,-0x2c(%ebp)
0817c278 +0x3d4:  je     0817c284 <+0x3e0>
0817c27a +0x3d6:  cmpl   $0xffffffff,-0x2c(%ebp)
0817c27e +0x3da:  jne    0817c40e <+0x56a>
0817c284 +0x3e0:  cmpl   $0x0,-0x24(%ebp)
0817c288 +0x3e4:  jle    0817c2a7 <+0x403>
0817c28a +0x3e6:  mov    -0x24(%ebp),%eax
0817c28d +0x3e9:  movb   $0x0,-0x25c(%ebp,%eax,1)
0817c295 +0x3f1:  movl   $0x0,-0x24(%ebp)
0817c29c +0x3f8:  cmpl   $0xffffffff,-0x28(%ebp)
0817c2a0 +0x3fc:  je     0817c2b3 <+0x40f>
0817c2a2 +0x3fe:  jmp    0817c341 <+0x49d>
0817c2a7 +0x403:  movl   $0xffffffff,-0x2c(%ebp)
0817c2ae +0x40a:  jmp    0817c428 <+0x584>
0817c2b3 +0x40f:  lea    -0x45(%ebp),%eax
0817c2b6 +0x412:  mov    %eax,(%esp)
0817c2b9 +0x415:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817c2be +0x41a:  lea    -0x45(%ebp),%eax
0817c2c1 +0x41d:  mov    %eax,0x8(%esp)
0817c2c5 +0x421:  lea    -0x25c(%ebp),%eax
0817c2cb +0x427:  mov    %eax,0x4(%esp)
0817c2cf +0x42b:  lea    -0x4c(%ebp),%eax
0817c2d2 +0x42e:  mov    %eax,(%esp)
0817c2d5 +0x431:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817c2da +0x436:  mov    0x8(%ebp),%eax
0817c2dd +0x439:  lea    0x3c(%eax),%edx
0817c2e0 +0x43c:  lea    -0x4c(%ebp),%eax
0817c2e3 +0x43f:  mov    %eax,0x4(%esp)
0817c2e7 +0x443:  mov    %edx,(%esp)
0817c2ea +0x446:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817c2ef +0x44b:  mov    0x8(%ebp),%edx
0817c2f2 +0x44e:  mov    0xc(%edx),%edx
0817c2f5 +0x451:  mov    %edx,(%eax)
0817c2f7 +0x453:  lea    -0x4c(%ebp),%eax
0817c2fa +0x456:  mov    %eax,(%esp)
0817c2fd +0x459:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c302 +0x45e:  jmp    0817c334 <+0x490>
0817c304 +0x460:  mov    %edx,%ebx
0817c306 +0x462:  mov    %eax,%esi
0817c308 +0x464:  lea    -0x4c(%ebp),%eax
0817c30b +0x467:  mov    %eax,(%esp)
0817c30e +0x46a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c313 +0x46f:  mov    %esi,%eax
0817c315 +0x471:  mov    %ebx,%edx
0817c317 +0x473:  jmp    0817c319 <+0x475>
0817c319 +0x475:  mov    %edx,%ebx
0817c31b +0x477:  mov    %eax,%esi
0817c31d +0x479:  lea    -0x45(%ebp),%eax
0817c320 +0x47c:  mov    %eax,(%esp)
0817c323 +0x47f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c328 +0x484:  mov    %esi,%eax
0817c32a +0x486:  mov    %ebx,%edx
0817c32c +0x488:  mov    %eax,(%esp)
0817c32f +0x48b:  call   08ae3750 <_Unwind_Resume>
0817c334 +0x490:  lea    -0x45(%ebp),%eax
0817c337 +0x493:  mov    %eax,(%esp)
0817c33a +0x496:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c33f +0x49b:  jmp    0817c374 <+0x4d0>
0817c341 +0x49d:  mov    0x8(%ebp),%eax
0817c344 +0x4a0:  mov    0x14(%eax),%edx
0817c347 +0x4a3:  mov    0x8(%ebp),%eax
0817c34a +0x4a6:  mov    0xc(%eax),%ecx
0817c34d +0x4a9:  mov    0x8(%ebp),%eax
0817c350 +0x4ac:  mov    (%eax),%eax
0817c352 +0x4ae:  imul   %ecx,%eax
0817c355 +0x4b1:  mov    %eax,%ecx
0817c357 +0x4b3:  mov    -0x28(%ebp),%eax
0817c35a +0x4b6:  lea    (%ecx,%eax,1),%eax
0817c35d +0x4b9:  shl    $0x7,%eax
0817c360 +0x4bc:  add    %eax,%edx
0817c362 +0x4be:  lea    -0x25c(%ebp),%eax
0817c368 +0x4c4:  mov    %eax,0x4(%esp)
0817c36c +0x4c8:  mov    %edx,(%esp)
0817c36f +0x4cb:  call   0807def0 <_init+0x7e8>
0817c374 +0x4d0:  addl   $0x1,-0x28(%ebp)
0817c378 +0x4d4:  mov    0x8(%ebp),%eax
0817c37b +0x4d7:  mov    0x8(%eax),%eax
0817c37e +0x4da:  cmp    -0x28(%ebp),%eax
0817c381 +0x4dd:  jne    0817c3af <+0x50b>
0817c383 +0x4df:  jmp    0817c393 <+0x4ef>
0817c385 +0x4e1:  mov    -0x44(%ebp),%eax
0817c388 +0x4e4:  mov    %eax,(%esp)
0817c38b +0x4e7:  call   0807ded0 <_init+0x7c8>
0817c390 +0x4ec:  mov    %eax,-0x2c(%ebp)
0817c393 +0x4ef:  cmpl   $0xffffffff,-0x2c(%ebp)
0817c397 +0x4f3:  je     0817c3a6 <+0x502>
0817c399 +0x4f5:  cmpl   $0xa,-0x2c(%ebp)
0817c39d +0x4f9:  je     0817c3a6 <+0x502>
0817c39f +0x4fb:  mov    $0x1,%eax
0817c3a4 +0x500:  jmp    0817c3ab <+0x507>
0817c3a6 +0x502:  mov    $0x0,%eax
0817c3ab +0x507:  test   %al,%al
0817c3ad +0x509:  jne    0817c385 <+0x4e1>
0817c3af +0x50b:  cmpl   $0xa,-0x2c(%ebp)
0817c3b3 +0x50f:  je     0817c3bb <+0x517>
0817c3b5 +0x511:  cmpl   $0xffffffff,-0x2c(%ebp)
0817c3b9 +0x515:  jne    0817c408 <+0x564>
0817c3bb +0x517:  mov    0x8(%ebp),%eax
0817c3be +0x51a:  mov    0x8(%eax),%eax
0817c3c1 +0x51d:  cmp    -0x28(%ebp),%eax
0817c3c4 +0x520:  je     0817c3cd <+0x529>
0817c3c6 +0x522:  mov    $0x0,%eax
0817c3cb +0x527:  jmp    0817c443 <+0x59f>
0817c3cd +0x529:  mov    0x8(%ebp),%eax
0817c3d0 +0x52c:  mov    0xc(%eax),%eax
0817c3d3 +0x52f:  lea    0x1(%eax),%edx
0817c3d6 +0x532:  mov    0x8(%ebp),%eax
0817c3d9 +0x535:  mov    %edx,0xc(%eax)
0817c3dc +0x538:  mov    0x8(%ebp),%eax
0817c3df +0x53b:  mov    0xc(%eax),%eax
0817c3e2 +0x53e:  lea    0x1(%eax),%edx
0817c3e5 +0x541:  mov    0x8(%ebp),%eax
0817c3e8 +0x544:  mov    0x4(%eax),%eax
0817c3eb +0x547:  cmp    %eax,%edx
0817c3ed +0x549:  jl     0817c424 <+0x580>
0817c3ef +0x54b:  mov    0x8(%ebp),%eax
0817c3f2 +0x54e:  mov    %eax,(%esp)
0817c3f5 +0x551:  call   0817b892 <_ZN11Arad_Script9ExpandRowEv>  ; Arad_Script::ExpandRow()
0817c3fa +0x556:  xor    $0x1,%eax
0817c3fd +0x559:  test   %al,%al
0817c3ff +0x55b:  je     0817c427 <+0x583>
0817c401 +0x55d:  mov    $0x0,%eax
0817c406 +0x562:  jmp    0817c443 <+0x59f>
0817c408 +0x564:  nop
0817c409 +0x565:  jmp    0817c254 <+0x3b0>
0817c40e +0x56a:  mov    -0x24(%ebp),%eax
0817c411 +0x56d:  mov    -0x2c(%ebp),%edx
0817c414 +0x570:  mov    %dl,-0x25c(%ebp,%eax,1)
0817c41b +0x577:  addl   $0x1,-0x24(%ebp)
0817c41f +0x57b:  jmp    0817c254 <+0x3b0>
0817c424 +0x580:  nop
0817c425 +0x581:  jmp    0817c428 <+0x584>
0817c427 +0x583:  nop
0817c428 +0x584:  cmpl   $0xffffffff,-0x2c(%ebp)
0817c42c +0x588:  jne    0817c245 <+0x3a1>
0817c432 +0x58e:  nop
0817c433 +0x58f:  mov    -0x44(%ebp),%eax
0817c436 +0x592:  mov    %eax,(%esp)
0817c439 +0x595:  call   0807dea0 <_init+0x798>
0817c43e +0x59a:  mov    $0x1,%eax
0817c443 +0x59f:  add    $0x66c,%esp
0817c449 +0x5a5:  pop    %ebx
0817c44a +0x5a6:  pop    %esi
0817c44b +0x5a7:  pop    %edi
0817c44c +0x5a8:  pop    %ebp
0817c44d +0x5a9:  ret
```

## 反编译 C

```c
// Arad_Script::Load @ 0x817bea4

/* Arad_Script::Load(char const*) */

undefined4 __thiscall Arad_Script::Load(Arad_Script *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  char local_660 [1024];
  char local_260 [512];
  string local_60;
  allocator<char> local_59;
  string local_58;
  allocator<char> local_51;
  string local_50;
  allocator<char> local_49;
  FILE *local_48;
  char *local_44;
  uint local_40;
  uint local_3c;
  size_t local_38;
  size_t local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  bVar9 = 0;
  pcVar4 = (char *)std::string::c_str((string *)(this + 0x20));
  local_48 = fopen(pcVar4,"rt");
  if (local_48 == (FILE *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = Create(this);
    if (cVar3 == '\x01') {
      local_44 = (char *)0x0;
      pcVar4 = local_660;
      for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
      }
      sprintf(local_660,"[%s]",param_1);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = strlen(local_660);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      do {
        while( true ) {
          do {
            uVar2 = local_24;
            local_24 = local_24 + 1;
            pcVar4 = (char *)std::string::operator[]((string *)(this + 0x20),uVar2);
            local_20 = (int)*pcVar4;
            local_30 = fgetc(local_48);
            if (local_30 == -1) {
              return 0;
            }
          } while ((local_30 < 0x21) || (0x7e < local_30));
          if (local_660[local_38] == local_30) break;
          local_38 = 0;
        }
        local_38 = local_38 + 1;
      } while (local_38 != local_34);
      pcVar4 = local_260;
      for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_28 = 0;
      do {
        while( true ) {
          local_30 = fgetc(local_48);
          if (local_30 == -1) {
            return 0;
          }
          if ((((local_30 == 0x20) || (local_30 == 9)) || (local_30 == 10)) || (local_30 == 0xd))
          break;
          local_260[local_28] = (char)local_30;
          local_28 = local_28 + 1;
        }
        if (0 < local_28) {
          local_260[local_28] = '\0';
          local_28 = 0;
          local_44 = local_260;
          local_3c = strlen(local_260);
          for (local_40 = 0; local_40 < local_3c; local_40 = local_40 + 1) {
            if (local_260[local_40] == '/') {
              local_260[local_40] = '\0';
              std::allocator<char>::allocator();
                    /* try { // try from 0817c0ce to 0817c0d2 has its CatchHandler @ 0817c112 */
              std::string::string((string *)&local_60,local_44,(allocator *)&local_59);
                    /* try { // try from 0817c0e3 to 0817c0e7 has its CatchHandler @ 0817c0fd */
              puVar7 = (undefined4 *)
                       std::
                       map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                     *)(this + 0x24),&local_60);
              *puVar7 = *(undefined4 *)(this + 8);
                    /* try { // try from 0817c0f6 to 0817c0fa has its CatchHandler @ 0817c112 */
              std::string::~string((string *)&local_60);
              std::allocator<char>::~allocator(&local_59);
              local_44 = local_260 + local_40 + 1;
            }
          }
          std::allocator<char>::allocator();
                    /* try { // try from 0817c17d to 0817c181 has its CatchHandler @ 0817c1cc */
          std::string::string((string *)&local_58,local_44,(allocator *)&local_51);
                    /* try { // try from 0817c192 to 0817c196 has its CatchHandler @ 0817c1b7 */
          piVar6 = (int *)std::
                          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                        *)(this + 0x24),&local_58);
          iVar8 = *(int *)(this + 8);
          *piVar6 = iVar8;
          *(int *)(this + 8) = iVar8 + 1;
                    /* try { // try from 0817c1b0 to 0817c1b4 has its CatchHandler @ 0817c1cc */
          std::string::~string((string *)&local_58);
          std::allocator<char>::~allocator(&local_51);
          if ((*(int *)this <= *(int *)(this + 8) + 1) && (cVar3 = ExpandCol(this), cVar3 != '\x01')
             ) {
            return 0;
          }
        }
      } while (local_30 != 10);
      do {
        local_2c = -1;
        local_28 = 0;
        do {
          while (((local_30 = fgetc(local_48), local_30 != 0x20 && (local_30 != 9)) &&
                 ((local_30 != 10 && ((local_30 != 0xd && (local_30 != -1))))))) {
            local_260[local_28] = (char)local_30;
            local_28 = local_28 + 1;
          }
          if (local_28 < 1) {
            local_30 = -1;
            goto LAB_0817c428;
          }
          local_260[local_28] = '\0';
          local_28 = 0;
          if (local_2c == -1) {
            std::allocator<char>::allocator();
                    /* try { // try from 0817c2d5 to 0817c2d9 has its CatchHandler @ 0817c319 */
            std::string::string((string *)&local_50,local_260,(allocator *)&local_49);
                    /* try { // try from 0817c2ea to 0817c2ee has its CatchHandler @ 0817c304 */
            puVar7 = (undefined4 *)
                     std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                   *)(this + 0x3c),&local_50);
            *puVar7 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 0817c2fd to 0817c301 has its CatchHandler @ 0817c319 */
            std::string::~string((string *)&local_50);
            std::allocator<char>::~allocator(&local_49);
          }
          else {
            strcpy((char *)(*(int *)(this + 0x14) +
                           (*(int *)this * *(int *)(this + 0xc) + local_2c) * 0x80),local_260);
          }
          local_2c = local_2c + 1;
          if (*(int *)(this + 8) == local_2c) {
            while( true ) {
              if ((local_30 == -1) || (local_30 == 10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              local_30 = fgetc(local_48);
            }
          }
        } while ((local_30 != 10) && (local_30 != -1));
        if (*(int *)(this + 8) != local_2c) {
          return 0;
        }
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        if ((*(int *)(this + 4) <= *(int *)(this + 0xc) + 1) &&
           (cVar3 = ExpandRow(this), cVar3 != '\x01')) {
          return 0;
        }
LAB_0817c428:
      } while (local_30 != -1);
      fclose(local_48);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
