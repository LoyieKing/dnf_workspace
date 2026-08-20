# Load

`_ZN11Arad_Script4LoadEPKcS1_`

`Arad_Script::Load(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b950  _ZN11Arad_Script4LoadEPKcS1_
#           Arad_Script::Load(char const*, char const*)
# range [0x0817b950, 0x0817bea3]
0817b950 +0x000:  push   %ebp
0817b951 +0x001:  mov    %esp,%ebp
0817b953 +0x003:  push   %edi
0817b954 +0x004:  push   %esi
0817b955 +0x005:  push   %ebx
0817b956 +0x006:  sub    $0x65c,%esp
0817b95c +0x00c:  mov    0x8(%ebp),%eax
0817b95f +0x00f:  mov    %eax,(%esp)
0817b962 +0x012:  call   0817b72a <_ZN11Arad_Script6CreateEv>  ; Arad_Script::Create()
0817b967 +0x017:  xor    $0x1,%eax
0817b96a +0x01a:  test   %al,%al
0817b96c +0x01c:  je     0817b978 <+0x28>
0817b96e +0x01e:  mov    $0x0,%eax
0817b973 +0x023:  jmp    0817be99 <+0x549>
0817b978 +0x028:  movl   $0x0,-0x3c(%ebp)
0817b97f +0x02f:  lea    -0x654(%ebp),%ebx
0817b985 +0x035:  mov    $0x0,%eax
0817b98a +0x03a:  mov    $0x100,%edx
0817b98f +0x03f:  mov    %ebx,%edi
0817b991 +0x041:  mov    %edx,%ecx
0817b993 +0x043:  rep stos %eax,%es:(%edi)
0817b995 +0x045:  mov    0x10(%ebp),%eax
0817b998 +0x048:  mov    %eax,0x8(%esp)
0817b99c +0x04c:  movl   $"[%s]",0x4(%esp)
0817b9a4 +0x054:  lea    -0x654(%ebp),%eax
0817b9aa +0x05a:  mov    %eax,(%esp)
0817b9ad +0x05d:  call   0807e440 <_init+0xd38>
0817b9b2 +0x062:  movl   $0x0,-0x38(%ebp)
0817b9b9 +0x069:  movl   $0x0,-0x34(%ebp)
0817b9c0 +0x070:  movl   $0x0,-0x30(%ebp)
0817b9c7 +0x077:  lea    -0x654(%ebp),%eax
0817b9cd +0x07d:  mov    %eax,(%esp)
0817b9d0 +0x080:  call   0807e3b0 <_init+0xca8>
0817b9d5 +0x085:  mov    %eax,-0x2c(%ebp)
0817b9d8 +0x088:  movl   $0x0,-0x28(%ebp)
0817b9df +0x08f:  movl   $0x0,-0x24(%ebp)
0817b9e6 +0x096:  movl   $0x0,-0x20(%ebp)
0817b9ed +0x09d:  movl   $0x0,-0x1c(%ebp)
0817b9f4 +0x0a4:  jmp    0817b9fd <+0xad>
0817b9f6 +0x0a6:  nop
0817b9f7 +0x0a7:  jmp    0817b9fd <+0xad>
0817b9f9 +0x0a9:  nop
0817b9fa +0x0aa:  jmp    0817b9fd <+0xad>
0817b9fc +0x0ac:  nop
0817b9fd +0x0ad:  mov    0xc(%ebp),%eax
0817ba00 +0x0b0:  movzbl (%eax),%eax
0817ba03 +0x0b3:  movsbl %al,%eax
0817ba06 +0x0b6:  mov    %eax,-0x28(%ebp)
0817ba09 +0x0b9:  addl   $0x1,0xc(%ebp)
0817ba0d +0x0bd:  cmpl   $0xffffffff,-0x28(%ebp)
0817ba11 +0x0c1:  jne    0817ba1d <+0xcd>
0817ba13 +0x0c3:  mov    $0x0,%eax
0817ba18 +0x0c8:  jmp    0817be99 <+0x549>
0817ba1d +0x0cd:  cmpl   $0x20,-0x28(%ebp)
0817ba21 +0x0d1:  jle    0817b9f6 <+0xa6>
0817ba23 +0x0d3:  cmpl   $0x7e,-0x28(%ebp)
0817ba27 +0x0d7:  jg     0817b9f9 <+0xa9>
0817ba29 +0x0d9:  mov    -0x30(%ebp),%eax
0817ba2c +0x0dc:  movzbl -0x654(%ebp,%eax,1),%eax
0817ba34 +0x0e4:  movsbl %al,%eax
0817ba37 +0x0e7:  cmp    -0x28(%ebp),%eax
0817ba3a +0x0ea:  jne    0817ba4a <+0xfa>
0817ba3c +0x0ec:  addl   $0x1,-0x30(%ebp)
0817ba40 +0x0f0:  mov    -0x30(%ebp),%eax
0817ba43 +0x0f3:  cmp    -0x2c(%ebp),%eax
0817ba46 +0x0f6:  jne    0817b9fc <+0xac>
0817ba48 +0x0f8:  jmp    0817ba53 <+0x103>
0817ba4a +0x0fa:  movl   $0x0,-0x30(%ebp)
0817ba51 +0x101:  jmp    0817b9fd <+0xad>
0817ba53 +0x103:  lea    -0x254(%ebp),%ebx
0817ba59 +0x109:  mov    $0x0,%eax
0817ba5e +0x10e:  mov    $0x80,%edx
0817ba63 +0x113:  mov    %ebx,%edi
0817ba65 +0x115:  mov    %edx,%ecx
0817ba67 +0x117:  rep stos %eax,%es:(%edi)
0817ba69 +0x119:  movl   $0x0,-0x20(%ebp)
0817ba70 +0x120:  mov    0xc(%ebp),%eax
0817ba73 +0x123:  movzbl (%eax),%eax
0817ba76 +0x126:  movsbl %al,%eax
0817ba79 +0x129:  mov    %eax,-0x28(%ebp)
0817ba7c +0x12c:  addl   $0x1,0xc(%ebp)
0817ba80 +0x130:  cmpl   $0xffffffff,-0x28(%ebp)
0817ba84 +0x134:  jne    0817ba90 <+0x140>
0817ba86 +0x136:  mov    $0x0,%eax
0817ba8b +0x13b:  jmp    0817be99 <+0x549>
0817ba90 +0x140:  cmpl   $0x20,-0x28(%ebp)
0817ba94 +0x144:  je     0817baac <+0x15c>
0817ba96 +0x146:  cmpl   $0x9,-0x28(%ebp)
0817ba9a +0x14a:  je     0817baac <+0x15c>
0817ba9c +0x14c:  cmpl   $0xa,-0x28(%ebp)
0817baa0 +0x150:  je     0817baac <+0x15c>
0817baa2 +0x152:  cmpl   $0xd,-0x28(%ebp)
0817baa6 +0x156:  jne    0817bc89 <+0x339>
0817baac +0x15c:  cmpl   $0x0,-0x20(%ebp)
0817bab0 +0x160:  jle    0817bc7d <+0x32d>
0817bab6 +0x166:  mov    -0x20(%ebp),%eax
0817bab9 +0x169:  movb   $0x0,-0x254(%ebp,%eax,1)
0817bac1 +0x171:  movl   $0x0,-0x20(%ebp)
0817bac8 +0x178:  lea    -0x254(%ebp),%eax
0817bace +0x17e:  mov    %eax,-0x3c(%ebp)
0817bad1 +0x181:  lea    -0x254(%ebp),%eax
0817bad7 +0x187:  mov    %eax,(%esp)
0817bada +0x18a:  call   0807e3b0 <_init+0xca8>
0817badf +0x18f:  mov    %eax,-0x34(%ebp)
0817bae2 +0x192:  movl   $0x0,-0x38(%ebp)
0817bae9 +0x199:  jmp    0817bbaa <+0x25a>
0817baee +0x19e:  mov    -0x38(%ebp),%eax
0817baf1 +0x1a1:  movzbl -0x254(%ebp,%eax,1),%eax
0817baf9 +0x1a9:  cmp    $0x2f,%al
0817bafb +0x1ab:  jne    0817bba6 <+0x256>
0817bb01 +0x1b1:  mov    -0x38(%ebp),%eax
0817bb04 +0x1b4:  movb   $0x0,-0x254(%ebp,%eax,1)
0817bb0c +0x1bc:  lea    -0x4d(%ebp),%eax
0817bb0f +0x1bf:  mov    %eax,(%esp)
0817bb12 +0x1c2:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817bb17 +0x1c7:  lea    -0x4d(%ebp),%eax
0817bb1a +0x1ca:  mov    %eax,0x8(%esp)
0817bb1e +0x1ce:  mov    -0x3c(%ebp),%eax
0817bb21 +0x1d1:  mov    %eax,0x4(%esp)
0817bb25 +0x1d5:  lea    -0x54(%ebp),%eax
0817bb28 +0x1d8:  mov    %eax,(%esp)
0817bb2b +0x1db:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817bb30 +0x1e0:  mov    0x8(%ebp),%eax
0817bb33 +0x1e3:  lea    0x24(%eax),%edx
0817bb36 +0x1e6:  lea    -0x54(%ebp),%eax
0817bb39 +0x1e9:  mov    %eax,0x4(%esp)
0817bb3d +0x1ed:  mov    %edx,(%esp)
0817bb40 +0x1f0:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817bb45 +0x1f5:  mov    0x8(%ebp),%edx
0817bb48 +0x1f8:  mov    0x8(%edx),%edx
0817bb4b +0x1fb:  mov    %edx,(%eax)
0817bb4d +0x1fd:  lea    -0x54(%ebp),%eax
0817bb50 +0x200:  mov    %eax,(%esp)
0817bb53 +0x203:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bb58 +0x208:  jmp    0817bb8a <+0x23a>
0817bb5a +0x20a:  mov    %edx,%ebx
0817bb5c +0x20c:  mov    %eax,%esi
0817bb5e +0x20e:  lea    -0x54(%ebp),%eax
0817bb61 +0x211:  mov    %eax,(%esp)
0817bb64 +0x214:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bb69 +0x219:  mov    %esi,%eax
0817bb6b +0x21b:  mov    %ebx,%edx
0817bb6d +0x21d:  jmp    0817bb6f <+0x21f>
0817bb6f +0x21f:  mov    %edx,%ebx
0817bb71 +0x221:  mov    %eax,%esi
0817bb73 +0x223:  lea    -0x4d(%ebp),%eax
0817bb76 +0x226:  mov    %eax,(%esp)
0817bb79 +0x229:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bb7e +0x22e:  mov    %esi,%eax
0817bb80 +0x230:  mov    %ebx,%edx
0817bb82 +0x232:  mov    %eax,(%esp)
0817bb85 +0x235:  call   08ae3750 <_Unwind_Resume>
0817bb8a +0x23a:  lea    -0x4d(%ebp),%eax
0817bb8d +0x23d:  mov    %eax,(%esp)
0817bb90 +0x240:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bb95 +0x245:  mov    -0x38(%ebp),%eax
0817bb98 +0x248:  lea    0x1(%eax),%edx
0817bb9b +0x24b:  lea    -0x254(%ebp),%eax
0817bba1 +0x251:  add    %edx,%eax
0817bba3 +0x253:  mov    %eax,-0x3c(%ebp)
0817bba6 +0x256:  addl   $0x1,-0x38(%ebp)
0817bbaa +0x25a:  mov    -0x38(%ebp),%eax
0817bbad +0x25d:  cmp    -0x34(%ebp),%eax
0817bbb0 +0x260:  setb   %al
0817bbb3 +0x263:  test   %al,%al
0817bbb5 +0x265:  jne    0817baee <+0x19e>
0817bbbb +0x26b:  lea    -0x45(%ebp),%eax
0817bbbe +0x26e:  mov    %eax,(%esp)
0817bbc1 +0x271:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817bbc6 +0x276:  lea    -0x45(%ebp),%eax
0817bbc9 +0x279:  mov    %eax,0x8(%esp)
0817bbcd +0x27d:  mov    -0x3c(%ebp),%eax
0817bbd0 +0x280:  mov    %eax,0x4(%esp)
0817bbd4 +0x284:  lea    -0x4c(%ebp),%eax
0817bbd7 +0x287:  mov    %eax,(%esp)
0817bbda +0x28a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817bbdf +0x28f:  mov    0x8(%ebp),%eax
0817bbe2 +0x292:  lea    0x24(%eax),%edx
0817bbe5 +0x295:  lea    -0x4c(%ebp),%eax
0817bbe8 +0x298:  mov    %eax,0x4(%esp)
0817bbec +0x29c:  mov    %edx,(%esp)
0817bbef +0x29f:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817bbf4 +0x2a4:  mov    %eax,%edx
0817bbf6 +0x2a6:  mov    0x8(%ebp),%eax
0817bbf9 +0x2a9:  mov    0x8(%eax),%eax
0817bbfc +0x2ac:  mov    %eax,(%edx)
0817bbfe +0x2ae:  lea    0x1(%eax),%edx
0817bc01 +0x2b1:  mov    0x8(%ebp),%eax
0817bc04 +0x2b4:  mov    %edx,0x8(%eax)
0817bc07 +0x2b7:  lea    -0x4c(%ebp),%eax
0817bc0a +0x2ba:  mov    %eax,(%esp)
0817bc0d +0x2bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bc12 +0x2c2:  jmp    0817bc44 <+0x2f4>
0817bc14 +0x2c4:  mov    %edx,%ebx
0817bc16 +0x2c6:  mov    %eax,%esi
0817bc18 +0x2c8:  lea    -0x4c(%ebp),%eax
0817bc1b +0x2cb:  mov    %eax,(%esp)
0817bc1e +0x2ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bc23 +0x2d3:  mov    %esi,%eax
0817bc25 +0x2d5:  mov    %ebx,%edx
0817bc27 +0x2d7:  jmp    0817bc29 <+0x2d9>
0817bc29 +0x2d9:  mov    %edx,%ebx
0817bc2b +0x2db:  mov    %eax,%esi
0817bc2d +0x2dd:  lea    -0x45(%ebp),%eax
0817bc30 +0x2e0:  mov    %eax,(%esp)
0817bc33 +0x2e3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bc38 +0x2e8:  mov    %esi,%eax
0817bc3a +0x2ea:  mov    %ebx,%edx
0817bc3c +0x2ec:  mov    %eax,(%esp)
0817bc3f +0x2ef:  call   08ae3750 <_Unwind_Resume>
0817bc44 +0x2f4:  lea    -0x45(%ebp),%eax
0817bc47 +0x2f7:  mov    %eax,(%esp)
0817bc4a +0x2fa:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bc4f +0x2ff:  mov    0x8(%ebp),%eax
0817bc52 +0x302:  mov    0x8(%eax),%eax
0817bc55 +0x305:  lea    0x1(%eax),%edx
0817bc58 +0x308:  mov    0x8(%ebp),%eax
0817bc5b +0x30b:  mov    (%eax),%eax
0817bc5d +0x30d:  cmp    %eax,%edx
0817bc5f +0x30f:  jl     0817bc7d <+0x32d>
0817bc61 +0x311:  mov    0x8(%ebp),%eax
0817bc64 +0x314:  mov    %eax,(%esp)
0817bc67 +0x317:  call   0817b800 <_ZN11Arad_Script9ExpandColEv>  ; Arad_Script::ExpandCol()
0817bc6c +0x31c:  xor    $0x1,%eax
0817bc6f +0x31f:  test   %al,%al
0817bc71 +0x321:  je     0817bc7d <+0x32d>
0817bc73 +0x323:  mov    $0x0,%eax
0817bc78 +0x328:  jmp    0817be99 <+0x549>
0817bc7d +0x32d:  cmpl   $0xa,-0x28(%ebp)
0817bc81 +0x331:  je     0817bc9f <+0x34f>
0817bc83 +0x333:  nop
0817bc84 +0x334:  jmp    0817ba70 <+0x120>
0817bc89 +0x339:  mov    -0x20(%ebp),%eax
0817bc8c +0x33c:  mov    -0x28(%ebp),%edx
0817bc8f +0x33f:  mov    %dl,-0x254(%ebp,%eax,1)
0817bc96 +0x346:  addl   $0x1,-0x20(%ebp)
0817bc9a +0x34a:  jmp    0817ba70 <+0x120>
0817bc9f +0x34f:  nop
0817bca0 +0x350:  jmp    0817bca3 <+0x353>
0817bca2 +0x352:  nop
0817bca3 +0x353:  movl   $0xffffffff,-0x24(%ebp)
0817bcaa +0x35a:  movl   $0x0,-0x20(%ebp)
0817bcb1 +0x361:  mov    0xc(%ebp),%eax
0817bcb4 +0x364:  movzbl (%eax),%eax
0817bcb7 +0x367:  movsbl %al,%eax
0817bcba +0x36a:  mov    %eax,-0x28(%ebp)
0817bcbd +0x36d:  addl   $0x1,0xc(%ebp)
0817bcc1 +0x371:  cmpl   $0x20,-0x28(%ebp)
0817bcc5 +0x375:  je     0817bce3 <+0x393>
0817bcc7 +0x377:  cmpl   $0x9,-0x28(%ebp)
0817bccb +0x37b:  je     0817bce3 <+0x393>
0817bccd +0x37d:  cmpl   $0xa,-0x28(%ebp)
0817bcd1 +0x381:  je     0817bce3 <+0x393>
0817bcd3 +0x383:  cmpl   $0xd,-0x28(%ebp)
0817bcd7 +0x387:  je     0817bce3 <+0x393>
0817bcd9 +0x389:  cmpl   $0xffffffff,-0x28(%ebp)
0817bcdd +0x38d:  jne    0817be6f <+0x51f>
0817bce3 +0x393:  cmpl   $0x0,-0x20(%ebp)
0817bce7 +0x397:  jle    0817bd06 <+0x3b6>
0817bce9 +0x399:  mov    -0x20(%ebp),%eax
0817bcec +0x39c:  movb   $0x0,-0x254(%ebp,%eax,1)
0817bcf4 +0x3a4:  movl   $0x0,-0x20(%ebp)
0817bcfb +0x3ab:  cmpl   $0xffffffff,-0x24(%ebp)
0817bcff +0x3af:  je     0817bd12 <+0x3c2>
0817bd01 +0x3b1:  jmp    0817bda0 <+0x450>
0817bd06 +0x3b6:  movl   $0xffffffff,-0x28(%ebp)
0817bd0d +0x3bd:  jmp    0817be89 <+0x539>
0817bd12 +0x3c2:  lea    -0x3d(%ebp),%eax
0817bd15 +0x3c5:  mov    %eax,(%esp)
0817bd18 +0x3c8:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817bd1d +0x3cd:  lea    -0x3d(%ebp),%eax
0817bd20 +0x3d0:  mov    %eax,0x8(%esp)
0817bd24 +0x3d4:  lea    -0x254(%ebp),%eax
0817bd2a +0x3da:  mov    %eax,0x4(%esp)
0817bd2e +0x3de:  lea    -0x44(%ebp),%eax
0817bd31 +0x3e1:  mov    %eax,(%esp)
0817bd34 +0x3e4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817bd39 +0x3e9:  mov    0x8(%ebp),%eax
0817bd3c +0x3ec:  lea    0x3c(%eax),%edx
0817bd3f +0x3ef:  lea    -0x44(%ebp),%eax
0817bd42 +0x3f2:  mov    %eax,0x4(%esp)
0817bd46 +0x3f6:  mov    %edx,(%esp)
0817bd49 +0x3f9:  call   0817cc8c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xd3>  ; global constructors keyed to Arad_Script::Arad_Script()+0xd3
0817bd4e +0x3fe:  mov    0x8(%ebp),%edx
0817bd51 +0x401:  mov    0xc(%edx),%edx
0817bd54 +0x404:  mov    %edx,(%eax)
0817bd56 +0x406:  lea    -0x44(%ebp),%eax
0817bd59 +0x409:  mov    %eax,(%esp)
0817bd5c +0x40c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bd61 +0x411:  jmp    0817bd93 <+0x443>
0817bd63 +0x413:  mov    %edx,%ebx
0817bd65 +0x415:  mov    %eax,%esi
0817bd67 +0x417:  lea    -0x44(%ebp),%eax
0817bd6a +0x41a:  mov    %eax,(%esp)
0817bd6d +0x41d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817bd72 +0x422:  mov    %esi,%eax
0817bd74 +0x424:  mov    %ebx,%edx
0817bd76 +0x426:  jmp    0817bd78 <+0x428>
0817bd78 +0x428:  mov    %edx,%ebx
0817bd7a +0x42a:  mov    %eax,%esi
0817bd7c +0x42c:  lea    -0x3d(%ebp),%eax
0817bd7f +0x42f:  mov    %eax,(%esp)
0817bd82 +0x432:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bd87 +0x437:  mov    %esi,%eax
0817bd89 +0x439:  mov    %ebx,%edx
0817bd8b +0x43b:  mov    %eax,(%esp)
0817bd8e +0x43e:  call   08ae3750 <_Unwind_Resume>
0817bd93 +0x443:  lea    -0x3d(%ebp),%eax
0817bd96 +0x446:  mov    %eax,(%esp)
0817bd99 +0x449:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817bd9e +0x44e:  jmp    0817bdd3 <+0x483>
0817bda0 +0x450:  mov    0x8(%ebp),%eax
0817bda3 +0x453:  mov    0x14(%eax),%edx
0817bda6 +0x456:  mov    0x8(%ebp),%eax
0817bda9 +0x459:  mov    0xc(%eax),%ecx
0817bdac +0x45c:  mov    0x8(%ebp),%eax
0817bdaf +0x45f:  mov    (%eax),%eax
0817bdb1 +0x461:  imul   %ecx,%eax
0817bdb4 +0x464:  mov    %eax,%ecx
0817bdb6 +0x466:  mov    -0x24(%ebp),%eax
0817bdb9 +0x469:  lea    (%ecx,%eax,1),%eax
0817bdbc +0x46c:  shl    $0x7,%eax
0817bdbf +0x46f:  add    %eax,%edx
0817bdc1 +0x471:  lea    -0x254(%ebp),%eax
0817bdc7 +0x477:  mov    %eax,0x4(%esp)
0817bdcb +0x47b:  mov    %edx,(%esp)
0817bdce +0x47e:  call   0807def0 <_init+0x7e8>
0817bdd3 +0x483:  addl   $0x1,-0x24(%ebp)
0817bdd7 +0x487:  mov    0x8(%ebp),%eax
0817bdda +0x48a:  mov    0x8(%eax),%eax
0817bddd +0x48d:  cmp    -0x24(%ebp),%eax
0817bde0 +0x490:  jne    0817be10 <+0x4c0>
0817bde2 +0x492:  jmp    0817bdf4 <+0x4a4>
0817bde4 +0x494:  mov    0xc(%ebp),%eax
0817bde7 +0x497:  movzbl (%eax),%eax
0817bdea +0x49a:  movsbl %al,%eax
0817bded +0x49d:  mov    %eax,-0x28(%ebp)
0817bdf0 +0x4a0:  addl   $0x1,0xc(%ebp)
0817bdf4 +0x4a4:  cmpl   $0xffffffff,-0x28(%ebp)
0817bdf8 +0x4a8:  je     0817be07 <+0x4b7>
0817bdfa +0x4aa:  cmpl   $0xa,-0x28(%ebp)
0817bdfe +0x4ae:  je     0817be07 <+0x4b7>
0817be00 +0x4b0:  mov    $0x1,%eax
0817be05 +0x4b5:  jmp    0817be0c <+0x4bc>
0817be07 +0x4b7:  mov    $0x0,%eax
0817be0c +0x4bc:  test   %al,%al
0817be0e +0x4be:  jne    0817bde4 <+0x494>
0817be10 +0x4c0:  cmpl   $0xa,-0x28(%ebp)
0817be14 +0x4c4:  je     0817be1c <+0x4cc>
0817be16 +0x4c6:  cmpl   $0xffffffff,-0x28(%ebp)
0817be1a +0x4ca:  jne    0817be69 <+0x519>
0817be1c +0x4cc:  mov    0x8(%ebp),%eax
0817be1f +0x4cf:  mov    0x8(%eax),%eax
0817be22 +0x4d2:  cmp    -0x24(%ebp),%eax
0817be25 +0x4d5:  je     0817be2e <+0x4de>
0817be27 +0x4d7:  mov    $0x0,%eax
0817be2c +0x4dc:  jmp    0817be99 <+0x549>
0817be2e +0x4de:  mov    0x8(%ebp),%eax
0817be31 +0x4e1:  mov    0xc(%eax),%eax
0817be34 +0x4e4:  lea    0x1(%eax),%edx
0817be37 +0x4e7:  mov    0x8(%ebp),%eax
0817be3a +0x4ea:  mov    %edx,0xc(%eax)
0817be3d +0x4ed:  mov    0x8(%ebp),%eax
0817be40 +0x4f0:  mov    0xc(%eax),%eax
0817be43 +0x4f3:  lea    0x1(%eax),%edx
0817be46 +0x4f6:  mov    0x8(%ebp),%eax
0817be49 +0x4f9:  mov    0x4(%eax),%eax
0817be4c +0x4fc:  cmp    %eax,%edx
0817be4e +0x4fe:  jl     0817be85 <+0x535>
0817be50 +0x500:  mov    0x8(%ebp),%eax
0817be53 +0x503:  mov    %eax,(%esp)
0817be56 +0x506:  call   0817b892 <_ZN11Arad_Script9ExpandRowEv>  ; Arad_Script::ExpandRow()
0817be5b +0x50b:  xor    $0x1,%eax
0817be5e +0x50e:  test   %al,%al
0817be60 +0x510:  je     0817be88 <+0x538>
0817be62 +0x512:  mov    $0x0,%eax
0817be67 +0x517:  jmp    0817be99 <+0x549>
0817be69 +0x519:  nop
0817be6a +0x51a:  jmp    0817bcb1 <+0x361>
0817be6f +0x51f:  mov    -0x20(%ebp),%eax
0817be72 +0x522:  mov    -0x28(%ebp),%edx
0817be75 +0x525:  mov    %dl,-0x254(%ebp,%eax,1)
0817be7c +0x52c:  addl   $0x1,-0x20(%ebp)
0817be80 +0x530:  jmp    0817bcb1 <+0x361>
0817be85 +0x535:  nop
0817be86 +0x536:  jmp    0817be89 <+0x539>
0817be88 +0x538:  nop
0817be89 +0x539:  cmpl   $0xffffffff,-0x28(%ebp)
0817be8d +0x53d:  jne    0817bca2 <+0x352>
0817be93 +0x543:  nop
0817be94 +0x544:  mov    $0x1,%eax
0817be99 +0x549:  add    $0x65c,%esp
0817be9f +0x54f:  pop    %ebx
0817bea0 +0x550:  pop    %esi
0817bea1 +0x551:  pop    %edi
0817bea2 +0x552:  pop    %ebp
0817bea3 +0x553:  ret
```

## 反编译 C

```c
// Arad_Script::Load @ 0x817b950

/* Arad_Script::Load(char const*, char const*) */

undefined4 __thiscall Arad_Script::Load(Arad_Script *this,char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_658 [1024];
  char local_258 [512];
  string local_58;
  allocator<char> local_51;
  string local_50;
  allocator<char> local_49;
  string local_48;
  allocator<char> local_41;
  char *local_40;
  uint local_3c;
  uint local_38;
  size_t local_34;
  size_t local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  bVar8 = 0;
  cVar2 = Create(this);
  if (cVar2 == '\x01') {
    local_40 = (char *)0x0;
    pcVar7 = local_658;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    sprintf(local_658,"[%s]",param_2);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = strlen(local_658);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    do {
      while( true ) {
        do {
          local_2c = (int)*param_1;
          param_1 = param_1 + 1;
          if (local_2c == -1) {
            return 0;
          }
        } while ((local_2c < 0x21) || (0x7e < local_2c));
        if (local_658[local_34] == local_2c) break;
        local_34 = 0;
      }
      local_34 = local_34 + 1;
    } while (local_34 != local_30);
    pcVar7 = local_258;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    local_24 = 0;
    do {
      while( true ) {
        cVar2 = *param_1;
        local_2c = (int)cVar2;
        param_1 = param_1 + 1;
        if (local_2c == -1) {
          return 0;
        }
        if ((((local_2c == 0x20) || (local_2c == 9)) || (local_2c == 10)) || (local_2c == 0xd))
        break;
        local_258[local_24] = cVar2;
        local_24 = local_24 + 1;
      }
      if (0 < local_24) {
        local_258[local_24] = '\0';
        local_24 = 0;
        local_40 = local_258;
        local_38 = strlen(local_258);
        for (local_3c = 0; local_3c < local_38; local_3c = local_3c + 1) {
          if (local_258[local_3c] == '/') {
            local_258[local_3c] = '\0';
            std::allocator<char>::allocator();
                    /* try { // try from 0817bb2b to 0817bb2f has its CatchHandler @ 0817bb6f */
            std::string::string((string *)&local_58,local_40,(allocator *)&local_51);
                    /* try { // try from 0817bb40 to 0817bb44 has its CatchHandler @ 0817bb5a */
            puVar5 = (undefined4 *)
                     std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                   *)(this + 0x24),&local_58);
            *puVar5 = *(undefined4 *)(this + 8);
                    /* try { // try from 0817bb53 to 0817bb57 has its CatchHandler @ 0817bb6f */
            std::string::~string((string *)&local_58);
            std::allocator<char>::~allocator(&local_51);
            local_40 = local_258 + local_3c + 1;
          }
        }
        std::allocator<char>::allocator();
                    /* try { // try from 0817bbda to 0817bbde has its CatchHandler @ 0817bc29 */
        std::string::string((string *)&local_50,local_40,(allocator *)&local_49);
                    /* try { // try from 0817bbef to 0817bbf3 has its CatchHandler @ 0817bc14 */
        piVar4 = (int *)std::
                        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      *)(this + 0x24),&local_50);
        iVar6 = *(int *)(this + 8);
        *piVar4 = iVar6;
        *(int *)(this + 8) = iVar6 + 1;
                    /* try { // try from 0817bc0d to 0817bc11 has its CatchHandler @ 0817bc29 */
        std::string::~string((string *)&local_50);
        std::allocator<char>::~allocator(&local_49);
        if ((*(int *)this <= *(int *)(this + 8) + 1) && (cVar2 = ExpandCol(this), cVar2 != '\x01'))
        {
          return 0;
        }
      }
    } while (local_2c != 10);
    do {
      local_28 = -1;
      local_24 = 0;
      do {
        while( true ) {
          cVar2 = *param_1;
          local_2c = (int)cVar2;
          param_1 = param_1 + 1;
          if (((local_2c == 0x20) || (local_2c == 9)) ||
             ((local_2c == 10 || ((local_2c == 0xd || (local_2c == -1)))))) break;
          local_258[local_24] = cVar2;
          local_24 = local_24 + 1;
        }
        if (local_24 < 1) {
          local_2c = -1;
          goto LAB_0817be89;
        }
        local_258[local_24] = '\0';
        local_24 = 0;
        if (local_28 == -1) {
          std::allocator<char>::allocator();
                    /* try { // try from 0817bd34 to 0817bd38 has its CatchHandler @ 0817bd78 */
          std::string::string((string *)&local_48,local_258,(allocator *)&local_41);
                    /* try { // try from 0817bd49 to 0817bd4d has its CatchHandler @ 0817bd63 */
          puVar5 = (undefined4 *)
                   std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                 *)(this + 0x3c),&local_48);
          *puVar5 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 0817bd5c to 0817bd60 has its CatchHandler @ 0817bd78 */
          std::string::~string((string *)&local_48);
          std::allocator<char>::~allocator(&local_41);
        }
        else {
          strcpy((char *)(*(int *)(this + 0x14) +
                         (*(int *)this * *(int *)(this + 0xc) + local_28) * 0x80),local_258);
        }
        local_28 = local_28 + 1;
        if (*(int *)(this + 8) == local_28) {
          while( true ) {
            if ((local_2c == -1) || (local_2c == 10)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            local_2c = (int)*param_1;
            param_1 = param_1 + 1;
          }
        }
      } while ((local_2c != 10) && (local_2c != -1));
      if (*(int *)(this + 8) != local_28) {
        return 0;
      }
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      if ((*(int *)(this + 4) <= *(int *)(this + 0xc) + 1) &&
         (cVar2 = ExpandRow(this), cVar2 != '\x01')) {
        return 0;
      }
LAB_0817be89:
    } while (local_2c != -1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
