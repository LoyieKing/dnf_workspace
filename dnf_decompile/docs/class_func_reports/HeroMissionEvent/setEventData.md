# setEventData

`_ZN16HeroMissionEvent12setEventDataEP5CUserPKc`

`HeroMissionEvent::setEventData(CUser*, char const*)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08166752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166752  _ZN16HeroMissionEvent12setEventDataEP5CUserPKc
#           HeroMissionEvent::setEventData(CUser*, char const*)
# range [0x08166752, 0x08166d0d]
08166752 +0x000:  push   %ebp
08166753 +0x001:  mov    %esp,%ebp
08166755 +0x003:  push   %esi
08166756 +0x004:  push   %ebx
08166757 +0x005:  sub    $0x110,%esp
0816675d +0x00b:  mov    0x8(%ebp),%eax
08166760 +0x00e:  mov    (%eax),%eax
08166762 +0x010:  add    $0x34,%eax
08166765 +0x013:  mov    (%eax),%edx
08166767 +0x015:  mov    0x8(%ebp),%eax
0816676a +0x018:  movl   $0x0,0x4(%esp)
08166772 +0x020:  mov    %eax,(%esp)
08166775 +0x023:  call   *%edx
08166777 +0x025:  xor    $0x1,%eax
0816677a +0x028:  test   %al,%al
0816677c +0x02a:  jne    08166d00 <+0x5ae>
08166782 +0x030:  movl   $0xffffffff,0x4(%esp)
0816678a +0x038:  mov    0xc(%ebp),%eax
0816678d +0x03b:  mov    %eax,(%esp)
08166790 +0x03e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166795 +0x043:  test   %eax,%eax
08166797 +0x045:  sete   %al
0816679a +0x048:  test   %al,%al
0816679c +0x04a:  jne    08166d03 <+0x5b1>
081667a2 +0x050:  lea    -0x8c(%ebp),%eax
081667a8 +0x056:  mov    %eax,(%esp)
081667ab +0x059:  call   08168686 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x4e7>  ; global constructors keyed to HeroMissionValue::clear()+0x4e7
081667b0 +0x05e:  lea    -0x71(%ebp),%eax
081667b3 +0x061:  mov    %eax,(%esp)
081667b6 +0x064:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081667bb +0x069:  lea    -0x71(%ebp),%eax
081667be +0x06c:  mov    %eax,0x8(%esp)
081667c2 +0x070:  mov    0x10(%ebp),%eax
081667c5 +0x073:  mov    %eax,0x4(%esp)
081667c9 +0x077:  lea    -0x90(%ebp),%eax
081667cf +0x07d:  mov    %eax,(%esp)
081667d2 +0x080:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081667d7 +0x085:  jmp    081667f1 <+0x9f>
081667d9 +0x087:  mov    %edx,%ebx
081667db +0x089:  mov    %eax,%esi
081667dd +0x08b:  lea    -0x71(%ebp),%eax
081667e0 +0x08e:  mov    %eax,(%esp)
081667e3 +0x091:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081667e8 +0x096:  mov    %esi,%eax
081667ea +0x098:  mov    %ebx,%edx
081667ec +0x09a:  jmp    08166cd2 <+0x580>
081667f1 +0x09f:  lea    -0x71(%ebp),%eax
081667f4 +0x0a2:  mov    %eax,(%esp)
081667f7 +0x0a5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081667fc +0x0aa:  lea    -0x90(%ebp),%eax
08166802 +0x0b0:  mov    %eax,(%esp)
08166805 +0x0b3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0816680a +0x0b8:  test   %eax,%eax
0816680c +0x0ba:  sete   %al
0816680f +0x0bd:  test   %al,%al
08166811 +0x0bf:  je     0816693a <+0x1e8>
08166817 +0x0c5:  mov    0x8(%ebp),%eax
0816681a +0x0c8:  lea    0xc(%eax),%edx
0816681d +0x0cb:  lea    -0x98(%ebp),%eax
08166823 +0x0d1:  mov    %edx,0x4(%esp)
08166827 +0x0d5:  mov    %eax,(%esp)
0816682a +0x0d8:  call   081686f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x559>  ; global constructors keyed to HeroMissionValue::clear()+0x559
0816682f +0x0dd:  sub    $0x4,%esp
08166832 +0x0e0:  jmp    08166900 <+0x1ae>
08166837 +0x0e5:  lea    -0x80(%ebp),%eax
0816683a +0x0e8:  mov    %eax,(%esp)
0816683d +0x0eb:  call   08164b80 <_ZN16HeroMissionValue5clearEv>  ; HeroMissionValue::clear()
08166842 +0x0f0:  lea    -0x98(%ebp),%eax
08166848 +0x0f6:  mov    %eax,(%esp)
0816684b +0x0f9:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
08166850 +0x0fe:  mov    (%eax),%eax
08166852 +0x100:  mov    %eax,-0x80(%ebp)
08166855 +0x103:  lea    -0x98(%ebp),%eax
0816685b +0x109:  mov    %eax,(%esp)
0816685e +0x10c:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
08166863 +0x111:  mov    (%eax),%eax
08166865 +0x113:  cmp    $0x4,%eax
08166868 +0x116:  jne    08166881 <+0x12f>
0816686a +0x118:  mov    0xc(%ebp),%eax
0816686d +0x11b:  mov    %eax,(%esp)
08166870 +0x11e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08166875 +0x123:  cmp    $0x46,%eax
08166878 +0x126:  jne    08166881 <+0x12f>
0816687a +0x128:  mov    $0x1,%eax
0816687f +0x12d:  jmp    08166886 <+0x134>
08166881 +0x12f:  mov    $0x0,%eax
08166886 +0x134:  test   %al,%al
08166888 +0x136:  je     081668a2 <+0x150>
0816688a +0x138:  movw   $0x1,-0x7c(%ebp)
08166890 +0x13e:  movw   $0x1,-0x7a(%ebp)
08166896 +0x144:  movw   $0x46,-0x78(%ebp)
0816689c +0x14a:  movw   $0x1,-0x76(%ebp)
081668a2 +0x150:  lea    -0x98(%ebp),%eax
081668a8 +0x156:  mov    %eax,(%esp)
081668ab +0x159:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
081668b0 +0x15e:  mov    (%eax),%eax
081668b2 +0x160:  cmp    $0x6,%eax
081668b5 +0x163:  jne    081668ce <+0x17c>
081668b7 +0x165:  mov    0xc(%ebp),%eax
081668ba +0x168:  mov    %eax,(%esp)
081668bd +0x16b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081668c2 +0x170:  cmp    $0x46,%eax
081668c5 +0x173:  jne    081668ce <+0x17c>
081668c7 +0x175:  mov    $0x1,%eax
081668cc +0x17a:  jmp    081668d3 <+0x181>
081668ce +0x17c:  mov    $0x0,%eax
081668d3 +0x181:  test   %al,%al
081668d5 +0x183:  je     081668dd <+0x18b>
081668d7 +0x185:  movw   $0x1,-0x7c(%ebp)
081668dd +0x18b:  lea    -0x80(%ebp),%eax
081668e0 +0x18e:  mov    %eax,0x4(%esp)
081668e4 +0x192:  lea    -0x8c(%ebp),%eax
081668ea +0x198:  mov    %eax,(%esp)
081668ed +0x19b:  call   08168784 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5e5>  ; global constructors keyed to HeroMissionValue::clear()+0x5e5
081668f2 +0x1a0:  lea    -0x98(%ebp),%eax
081668f8 +0x1a6:  mov    %eax,(%esp)
081668fb +0x1a9:  call   08168758 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5b9>  ; global constructors keyed to HeroMissionValue::clear()+0x5b9
08166900 +0x1ae:  mov    0x8(%ebp),%eax
08166903 +0x1b1:  lea    0xc(%eax),%edx
08166906 +0x1b4:  lea    -0x70(%ebp),%eax
08166909 +0x1b7:  mov    %edx,0x4(%esp)
0816690d +0x1bb:  mov    %eax,(%esp)
08166910 +0x1be:  call   0816871e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x57f>  ; global constructors keyed to HeroMissionValue::clear()+0x57f
08166915 +0x1c3:  sub    $0x4,%esp
08166918 +0x1c6:  lea    -0x70(%ebp),%eax
0816691b +0x1c9:  mov    %eax,0x4(%esp)
0816691f +0x1cd:  lea    -0x98(%ebp),%eax
08166925 +0x1d3:  mov    %eax,(%esp)
08166928 +0x1d6:  call   08168744 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5a5>  ; global constructors keyed to HeroMissionValue::clear()+0x5a5
0816692d +0x1db:  test   %al,%al
0816692f +0x1dd:  jne    08166837 <+0xe5>
08166935 +0x1e3:  jmp    08166b29 <+0x3d7>
0816693a +0x1e8:  movl   $0x0,0xc(%esp)
08166942 +0x1f0:  movl   $0x0,0x8(%esp)
0816694a +0x1f8:  movl   $",",0x4(%esp)
08166952 +0x200:  lea    -0xac(%ebp),%eax
08166958 +0x206:  mov    %eax,(%esp)
0816695b +0x209:  call   080d02ae <_GLOBAL__I__ZN10BingoEventC2Ev+0x50fb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x50fb
08166960 +0x20e:  lea    -0xac(%ebp),%eax
08166966 +0x214:  mov    %eax,0x8(%esp)
0816696a +0x218:  lea    -0x90(%ebp),%eax
08166970 +0x21e:  mov    %eax,0x4(%esp)
08166974 +0x222:  lea    -0xc8(%ebp),%eax
0816697a +0x228:  mov    %eax,(%esp)
0816697d +0x22b:  call   080d037a <_GLOBAL__I__ZN10BingoEventC2Ev+0x51c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x51c7
08166982 +0x230:  lea    -0xec(%ebp),%eax
08166988 +0x236:  lea    -0xc8(%ebp),%edx
0816698e +0x23c:  mov    %edx,0x4(%esp)
08166992 +0x240:  mov    %eax,(%esp)
08166995 +0x243:  call   080d03c4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5211>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5211
0816699a +0x248:  sub    $0x4,%esp
0816699d +0x24b:  jmp    08166a55 <+0x303>
081669a2 +0x250:  lea    -0x41(%ebp),%eax
081669a5 +0x253:  mov    %eax,(%esp)
081669a8 +0x256:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081669ad +0x25b:  lea    -0xec(%ebp),%eax
081669b3 +0x261:  mov    %eax,(%esp)
081669b6 +0x264:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
081669bb +0x269:  mov    %eax,(%esp)
081669be +0x26c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081669c3 +0x271:  lea    -0x41(%ebp),%edx
081669c6 +0x274:  mov    %edx,0x8(%esp)
081669ca +0x278:  mov    %eax,0x4(%esp)
081669ce +0x27c:  lea    -0x48(%ebp),%eax
081669d1 +0x27f:  mov    %eax,(%esp)
081669d4 +0x282:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081669d9 +0x287:  lea    -0x48(%ebp),%eax
081669dc +0x28a:  mov    %eax,0x4(%esp)
081669e0 +0x28e:  lea    -0x80(%ebp),%eax
081669e3 +0x291:  mov    %eax,(%esp)
081669e6 +0x294:  call   08164d68 <_ZN16HeroMissionValue14setStringTokenESs>  ; HeroMissionValue::setStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
081669eb +0x299:  jmp    08166a02 <+0x2b0>
081669ed +0x29b:  mov    %edx,%ebx
081669ef +0x29d:  mov    %eax,%esi
081669f1 +0x29f:  lea    -0x48(%ebp),%eax
081669f4 +0x2a2:  mov    %eax,(%esp)
081669f7 +0x2a5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081669fc +0x2aa:  mov    %esi,%eax
081669fe +0x2ac:  mov    %ebx,%edx
08166a00 +0x2ae:  jmp    08166a0f <+0x2bd>
08166a02 +0x2b0:  lea    -0x48(%ebp),%eax
08166a05 +0x2b3:  mov    %eax,(%esp)
08166a08 +0x2b6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08166a0d +0x2bb:  jmp    08166a27 <+0x2d5>
08166a0f +0x2bd:  mov    %edx,%ebx
08166a11 +0x2bf:  mov    %eax,%esi
08166a13 +0x2c1:  lea    -0x41(%ebp),%eax
08166a16 +0x2c4:  mov    %eax,(%esp)
08166a19 +0x2c7:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08166a1e +0x2cc:  mov    %esi,%eax
08166a20 +0x2ce:  mov    %ebx,%edx
08166a22 +0x2d0:  jmp    08166ab0 <+0x35e>
08166a27 +0x2d5:  lea    -0x41(%ebp),%eax
08166a2a +0x2d8:  mov    %eax,(%esp)
08166a2d +0x2db:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08166a32 +0x2e0:  lea    -0x80(%ebp),%eax
08166a35 +0x2e3:  mov    %eax,0x4(%esp)
08166a39 +0x2e7:  lea    -0x8c(%ebp),%eax
08166a3f +0x2ed:  mov    %eax,(%esp)
08166a42 +0x2f0:  call   08168784 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5e5>  ; global constructors keyed to HeroMissionValue::clear()+0x5e5
08166a47 +0x2f5:  lea    -0xec(%ebp),%eax
08166a4d +0x2fb:  mov    %eax,(%esp)
08166a50 +0x2fe:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
08166a55 +0x303:  lea    -0x6c(%ebp),%eax
08166a58 +0x306:  lea    -0xc8(%ebp),%edx
08166a5e +0x30c:  mov    %edx,0x4(%esp)
08166a62 +0x310:  mov    %eax,(%esp)
08166a65 +0x313:  call   080d043e <_GLOBAL__I__ZN10BingoEventC2Ev+0x528b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x528b
08166a6a +0x318:  sub    $0x4,%esp
08166a6d +0x31b:  lea    -0x6c(%ebp),%edx
08166a70 +0x31e:  lea    -0xec(%ebp),%eax
08166a76 +0x324:  mov    %edx,0x4(%esp)
08166a7a +0x328:  mov    %eax,(%esp)
08166a7d +0x32b:  call   080d04b8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5305>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5305
08166a82 +0x330:  mov    %eax,%ebx
08166a84 +0x332:  lea    -0x6c(%ebp),%eax
08166a87 +0x335:  mov    %eax,(%esp)
08166a8a +0x338:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08166a8f +0x33d:  jmp    08166aa6 <+0x354>
08166a91 +0x33f:  mov    %edx,%ebx
08166a93 +0x341:  mov    %eax,%esi
08166a95 +0x343:  lea    -0x6c(%ebp),%eax
08166a98 +0x346:  mov    %eax,(%esp)
08166a9b +0x349:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08166aa0 +0x34e:  mov    %esi,%eax
08166aa2 +0x350:  mov    %ebx,%edx
08166aa4 +0x352:  jmp    08166ab0 <+0x35e>
08166aa6 +0x354:  test   %bl,%bl
08166aa8 +0x356:  jne    081669a2 <+0x250>
08166aae +0x35c:  jmp    08166ac8 <+0x376>
08166ab0 +0x35e:  mov    %edx,%ebx
08166ab2 +0x360:  mov    %eax,%esi
08166ab4 +0x362:  lea    -0xec(%ebp),%eax
08166aba +0x368:  mov    %eax,(%esp)
08166abd +0x36b:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08166ac2 +0x370:  mov    %esi,%eax
08166ac4 +0x372:  mov    %ebx,%edx
08166ac6 +0x374:  jmp    08166ad8 <+0x386>
08166ac8 +0x376:  lea    -0xec(%ebp),%eax
08166ace +0x37c:  mov    %eax,(%esp)
08166ad1 +0x37f:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08166ad6 +0x384:  jmp    08166af0 <+0x39e>
08166ad8 +0x386:  mov    %edx,%ebx
08166ada +0x388:  mov    %eax,%esi
08166adc +0x38a:  lea    -0xc8(%ebp),%eax
08166ae2 +0x390:  mov    %eax,(%esp)
08166ae5 +0x393:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
08166aea +0x398:  mov    %esi,%eax
08166aec +0x39a:  mov    %ebx,%edx
08166aee +0x39c:  jmp    08166b00 <+0x3ae>
08166af0 +0x39e:  lea    -0xc8(%ebp),%eax
08166af6 +0x3a4:  mov    %eax,(%esp)
08166af9 +0x3a7:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
08166afe +0x3ac:  jmp    08166b1b <+0x3c9>
08166b00 +0x3ae:  mov    %edx,%ebx
08166b02 +0x3b0:  mov    %eax,%esi
08166b04 +0x3b2:  lea    -0xac(%ebp),%eax
08166b0a +0x3b8:  mov    %eax,(%esp)
08166b0d +0x3bb:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
08166b12 +0x3c0:  mov    %esi,%eax
08166b14 +0x3c2:  mov    %ebx,%edx
08166b16 +0x3c4:  jmp    08166caa <+0x558>
08166b1b +0x3c9:  lea    -0xac(%ebp),%eax
08166b21 +0x3cf:  mov    %eax,(%esp)
08166b24 +0x3d2:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
08166b29 +0x3d7:  movl   $0xffffffff,0x4(%esp)
08166b31 +0x3df:  mov    0xc(%ebp),%eax
08166b34 +0x3e2:  mov    %eax,(%esp)
08166b37 +0x3e5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166b3c +0x3ea:  mov    %eax,-0x40(%ebp)
08166b3f +0x3ed:  mov    0x8(%ebp),%eax
08166b42 +0x3f0:  lea    0x24(%eax),%ecx
08166b45 +0x3f3:  lea    -0x94(%ebp),%eax
08166b4b +0x3f9:  lea    -0x40(%ebp),%edx
08166b4e +0x3fc:  mov    %edx,0x8(%esp)
08166b52 +0x400:  mov    %ecx,0x4(%esp)
08166b56 +0x404:  mov    %eax,(%esp)
08166b59 +0x407:  call   081687f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x659>  ; global constructors keyed to HeroMissionValue::clear()+0x659
08166b5e +0x40c:  sub    $0x4,%esp
08166b61 +0x40f:  mov    0x8(%ebp),%eax
08166b64 +0x412:  lea    0x24(%eax),%edx
08166b67 +0x415:  lea    -0x3c(%ebp),%eax
08166b6a +0x418:  mov    %edx,0x4(%esp)
08166b6e +0x41c:  mov    %eax,(%esp)
08166b71 +0x41f:  call   08168824 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x685>  ; global constructors keyed to HeroMissionValue::clear()+0x685
08166b76 +0x424:  sub    $0x4,%esp
08166b79 +0x427:  lea    -0x3c(%ebp),%eax
08166b7c +0x42a:  mov    %eax,0x4(%esp)
08166b80 +0x42e:  lea    -0x94(%ebp),%eax
08166b86 +0x434:  mov    %eax,(%esp)
08166b89 +0x437:  call   0816884a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x6ab>  ; global constructors keyed to HeroMissionValue::clear()+0x6ab
08166b8e +0x43c:  test   %al,%al
08166b90 +0x43e:  je     08166c00 <+0x4ae>
08166b92 +0x440:  movl   $0xffffffff,0x4(%esp)
08166b9a +0x448:  mov    0xc(%ebp),%eax
08166b9d +0x44b:  mov    %eax,(%esp)
08166ba0 +0x44e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166ba5 +0x453:  mov    %eax,0x14(%esp)
08166ba9 +0x457:  movl   $"[HeroMission] Already exist character data. (charac:%u)",0x10(%esp)
08166bb1 +0x45f:  movl   $0x24b,0xc(%esp)
08166bb9 +0x467:  movl   $&_ZZN16HeroMissionEvent12setEventDataEP5CUserPKcE19__PRETTY_FUNCTION__,0x8(%esp)
08166bc1 +0x46f:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08166bc9 +0x477:  movl   $0x1,(%esp)
08166bd0 +0x47e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08166bd5 +0x483:  movl   $0xffffffff,0x4(%esp)
08166bdd +0x48b:  mov    0xc(%ebp),%eax
08166be0 +0x48e:  mov    %eax,(%esp)
08166be3 +0x491:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166be8 +0x496:  mov    %eax,-0x38(%ebp)
08166beb +0x499:  mov    0x8(%ebp),%eax
08166bee +0x49c:  lea    0x24(%eax),%edx
08166bf1 +0x49f:  lea    -0x38(%ebp),%eax
08166bf4 +0x4a2:  mov    %eax,0x4(%esp)
08166bf8 +0x4a6:  mov    %edx,(%esp)
08166bfb +0x4a9:  call   0816885e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x6bf>  ; global constructors keyed to HeroMissionValue::clear()+0x6bf
08166c00 +0x4ae:  movl   $0xffffffff,0x4(%esp)
08166c08 +0x4b6:  mov    0xc(%ebp),%eax
08166c0b +0x4b9:  mov    %eax,(%esp)
08166c0e +0x4bc:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166c13 +0x4c1:  mov    %eax,-0xc(%ebp)
08166c16 +0x4c4:  lea    -0x1c(%ebp),%eax
08166c19 +0x4c7:  lea    -0x8c(%ebp),%edx
08166c1f +0x4cd:  mov    %edx,0x8(%esp)
08166c23 +0x4d1:  lea    -0xc(%ebp),%edx
08166c26 +0x4d4:  mov    %edx,0x4(%esp)
08166c2a +0x4d8:  mov    %eax,(%esp)
08166c2d +0x4db:  call   08168878 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x6d9>  ; global constructors keyed to HeroMissionValue::clear()+0x6d9
08166c32 +0x4e0:  sub    $0x4,%esp
08166c35 +0x4e3:  lea    -0x1c(%ebp),%eax
08166c38 +0x4e6:  mov    %eax,0x4(%esp)
08166c3c +0x4ea:  lea    -0x2c(%ebp),%eax
08166c3f +0x4ed:  mov    %eax,(%esp)
08166c42 +0x4f0:  call   081688c4 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x725>  ; global constructors keyed to HeroMissionValue::clear()+0x725
08166c47 +0x4f5:  mov    0x8(%ebp),%eax
08166c4a +0x4f8:  lea    0x24(%eax),%ecx
08166c4d +0x4fb:  lea    -0x34(%ebp),%eax
08166c50 +0x4fe:  lea    -0x2c(%ebp),%edx
08166c53 +0x501:  mov    %edx,0x8(%esp)
08166c57 +0x505:  mov    %ecx,0x4(%esp)
08166c5b +0x509:  mov    %eax,(%esp)
08166c5e +0x50c:  call   08168900 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x761>  ; global constructors keyed to HeroMissionValue::clear()+0x761
08166c63 +0x511:  sub    $0x4,%esp
08166c66 +0x514:  lea    -0x2c(%ebp),%eax
08166c69 +0x517:  mov    %eax,(%esp)
08166c6c +0x51a:  call   0816833a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x19b>  ; global constructors keyed to HeroMissionValue::clear()+0x19b
08166c71 +0x51f:  jmp    08166c9d <+0x54b>
08166c73 +0x521:  mov    %edx,%ebx
08166c75 +0x523:  mov    %eax,%esi
08166c77 +0x525:  lea    -0x2c(%ebp),%eax
08166c7a +0x528:  mov    %eax,(%esp)
08166c7d +0x52b:  call   0816833a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x19b>  ; global constructors keyed to HeroMissionValue::clear()+0x19b
08166c82 +0x530:  mov    %esi,%eax
08166c84 +0x532:  mov    %ebx,%edx
08166c86 +0x534:  jmp    08166c88 <+0x536>
08166c88 +0x536:  mov    %edx,%ebx
08166c8a +0x538:  mov    %eax,%esi
08166c8c +0x53a:  lea    -0x1c(%ebp),%eax
08166c8f +0x53d:  mov    %eax,(%esp)
08166c92 +0x540:  call   08168324 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x185>  ; global constructors keyed to HeroMissionValue::clear()+0x185
08166c97 +0x545:  mov    %esi,%eax
08166c99 +0x547:  mov    %ebx,%edx
08166c9b +0x549:  jmp    08166caa <+0x558>
08166c9d +0x54b:  lea    -0x1c(%ebp),%eax
08166ca0 +0x54e:  mov    %eax,(%esp)
08166ca3 +0x551:  call   08168324 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x185>  ; global constructors keyed to HeroMissionValue::clear()+0x185
08166ca8 +0x556:  jmp    08166cc2 <+0x570>
08166caa +0x558:  mov    %edx,%ebx
08166cac +0x55a:  mov    %eax,%esi
08166cae +0x55c:  lea    -0x90(%ebp),%eax
08166cb4 +0x562:  mov    %eax,(%esp)
08166cb7 +0x565:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08166cbc +0x56a:  mov    %esi,%eax
08166cbe +0x56c:  mov    %ebx,%edx
08166cc0 +0x56e:  jmp    08166cd2 <+0x580>
08166cc2 +0x570:  lea    -0x90(%ebp),%eax
08166cc8 +0x576:  mov    %eax,(%esp)
08166ccb +0x579:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08166cd0 +0x57e:  jmp    08166cf0 <+0x59e>
08166cd2 +0x580:  mov    %edx,%ebx
08166cd4 +0x582:  mov    %eax,%esi
08166cd6 +0x584:  lea    -0x8c(%ebp),%eax
08166cdc +0x58a:  mov    %eax,(%esp)
08166cdf +0x58d:  call   0816869a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x4fb>  ; global constructors keyed to HeroMissionValue::clear()+0x4fb
08166ce4 +0x592:  mov    %esi,%eax
08166ce6 +0x594:  mov    %ebx,%edx
08166ce8 +0x596:  mov    %eax,(%esp)
08166ceb +0x599:  call   08ae3750 <_Unwind_Resume>
08166cf0 +0x59e:  lea    -0x8c(%ebp),%eax
08166cf6 +0x5a4:  mov    %eax,(%esp)
08166cf9 +0x5a7:  call   0816869a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x4fb>  ; global constructors keyed to HeroMissionValue::clear()+0x4fb
08166cfe +0x5ac:  jmp    08166d04 <+0x5b2>
08166d00 +0x5ae:  nop
08166d01 +0x5af:  jmp    08166d04 <+0x5b2>
08166d03 +0x5b1:  nop
08166d04 +0x5b2:  lea    -0x8(%ebp),%esp
08166d07 +0x5b5:  add    $0x0,%esp
08166d0a +0x5b8:  pop    %ebx
08166d0b +0x5b9:  pop    %esi
08166d0c +0x5ba:  pop    %ebp
08166d0d +0x5bb:  ret
```

## 反编译 C

```c
// HeroMissionEvent::setEventData @ 0x8166752

/* HeroMissionEvent::setEventData(CUser*, char const*) */

void __thiscall HeroMissionEvent::setEventData(HeroMissionEvent *this,CUser *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  string *this_00;
  char *pcVar6;
  undefined4 uVar7;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_f0 [36];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_cc [28];
  char_separator<char,std::char_traits<char>> local_b0 [20];
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_9c [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_98 [4];
  string local_94;
  vector<HeroMissionValue,std::allocator<HeroMissionValue>> local_90 [12];
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  allocator<char> local_75;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_74 [4];
  iterator_facade local_70 [36];
  string local_4c [7];
  allocator<char> local_45;
  undefined4 local_44;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_40 [4];
  undefined4 local_3c;
  pair local_38 [8];
  pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_30 [16];
  pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>> local_20 [16];
  undefined4 local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if ((cVar2 == '\x01') && (iVar3 = CUser::get_charac_no(param_1,-1), iVar3 != 0)) {
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::vector(local_90);
    std::allocator<char>::allocator();
                    /* try { // try from 081667d2 to 081667d6 has its CatchHandler @ 081667d9 */
    std::string::string((string *)&local_94,param_2,(allocator *)&local_75);
    std::allocator<char>::~allocator(&local_75);
                    /* try { // try from 08166805 to 0816695f has its CatchHandler @ 08166caa */
    iVar3 = std::string::length((string *)&local_94);
    if (iVar3 == 0) {
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::begin(local_9c);
      while( true ) {
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::end(local_74);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                ::operator!=((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                              *)local_9c,(_Rb_tree_iterator *)local_74);
        if (cVar2 == '\0') break;
        HeroMissionValue::clear((HeroMissionValue *)&local_84);
        puVar4 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                 ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                               *)local_9c);
        local_84 = *puVar4;
        piVar5 = (int *)std::
                        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                        ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                                      *)local_9c);
        if ((*piVar5 == 4) &&
           (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 == 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_80 = 1;
          local_7e = 1;
          local_7c = 0x46;
          local_7a = 1;
        }
        piVar5 = (int *)std::
                        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                        ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                                      *)local_9c);
        if ((*piVar5 == 6) &&
           (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 == 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_80 = 1;
        }
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::push_back
                  (local_90,(HeroMissionValue *)&local_84);
        std::
        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
        ::operator++((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                      *)local_9c);
      }
    }
    else {
      boost::char_separator<char,std::char_traits<char>>::char_separator(local_b0,&DAT_08b7dcb2,0,0)
      ;
                    /* try { // try from 0816697d to 08166981 has its CatchHandler @ 08166b00 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::tokenizer<std::string>(local_cc,&local_94,(char_separator *)local_b0);
                    /* try { // try from 08166995 to 08166999 has its CatchHandler @ 08166ad8 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::begin();
      while( true ) {
        boost::
        tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
        ::end();
                    /* try { // try from 08166a7d to 08166a81 has its CatchHandler @ 08166a91 */
        cVar2 = boost::operator!=((iterator_facade *)local_f0,local_70);
                    /* try { // try from 08166a8a to 08166a8e has its CatchHandler @ 08166ab0 */
        boost::
        token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
        ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                           *)local_70);
        if (cVar2 == '\0') break;
        std::allocator<char>::allocator();
                    /* try { // try from 081669b6 to 081669d8 has its CatchHandler @ 08166a0f */
        this_00 = (string *)
                  boost::
                  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
                  ::operator->(local_f0);
        pcVar6 = (char *)std::string::c_str(this_00);
        std::string::string(local_4c,pcVar6,(allocator *)&local_45);
                    /* try { // try from 081669e6 to 081669ea has its CatchHandler @ 081669ed */
        HeroMissionValue::setStringToken((HeroMissionValue *)&local_84,(string)local_4c);
                    /* try { // try from 08166a08 to 08166a0c has its CatchHandler @ 08166a0f */
        std::string::~string(local_4c);
        std::allocator<char>::~allocator(&local_45);
                    /* try { // try from 08166a42 to 08166a69 has its CatchHandler @ 08166ab0 */
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::push_back
                  (local_90,(HeroMissionValue *)&local_84);
        boost::
        iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
        ::operator++(local_f0);
      }
                    /* try { // try from 08166ad1 to 08166ad5 has its CatchHandler @ 08166ad8 */
      boost::
      token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                         *)local_f0);
                    /* try { // try from 08166af9 to 08166afd has its CatchHandler @ 08166b00 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::~tokenizer(local_cc);
                    /* try { // try from 08166b24 to 08166c31 has its CatchHandler @ 08166caa */
      boost::char_separator<char,std::char_traits<char>>::~char_separator(local_b0);
    }
    local_44 = CUser::get_charac_no(param_1,-1);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::find((uint *)local_98);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::end(local_40);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator!=(local_98,(_Rb_tree_iterator *)local_40);
    if (cVar2 != '\0') {
      uVar7 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::setEventData(CUser*, const char*)",0x24b,
                 "[HeroMission] Already exist character data. (charac:%u)",uVar7);
      local_3c = CUser::get_charac_no(param_1,-1);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::erase((uint *)(this + 0x24));
    }
    local_10 = CUser::get_charac_no(param_1,-1);
    std::make_pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>&>
              ((int *)local_20,(vector *)&local_10);
                    /* try { // try from 08166c42 to 08166c46 has its CatchHandler @ 08166c88 */
    std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::
    pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>(local_30,local_20);
                    /* try { // try from 08166c5e to 08166c62 has its CatchHandler @ 08166c73 */
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::insert(local_38);
                    /* try { // try from 08166c6c to 08166c70 has its CatchHandler @ 08166c88 */
    std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::
    ~pair(local_30);
                    /* try { // try from 08166ca3 to 08166ca7 has its CatchHandler @ 08166caa */
    std::pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::~pair(local_20);
                    /* try { // try from 08166ccb to 08166ccf has its CatchHandler @ 08166cd2 */
    std::string::~string((string *)&local_94);
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::~vector(local_90);
  }
  return;
}
```
