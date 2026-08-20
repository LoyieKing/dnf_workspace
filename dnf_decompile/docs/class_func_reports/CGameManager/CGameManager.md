# CGameManager

`_ZN12CGameManagerC1Ev`

`CGameManager::CGameManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082930c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082930c2  _ZN12CGameManagerC1Ev
#           CGameManager::CGameManager()
# range [0x082930c2, 0x08293d15]
082930c2 +0x000:  push   %ebp
082930c3 +0x001:  mov    %esp,%ebp
082930c5 +0x003:  push   %esi
082930c6 +0x004:  push   %ebx
082930c7 +0x005:  sub    $0xf0,%esp
082930cd +0x00b:  mov    0x8(%ebp),%eax
082930d0 +0x00e:  mov    %eax,(%esp)
082930d3 +0x011:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
082930d8 +0x016:  mov    0x8(%ebp),%eax
082930db +0x019:  add    $0x1c,%eax
082930de +0x01c:  mov    %eax,(%esp)
082930e1 +0x01f:  call   082ae2ee <_GLOBAL__I__ZN4CLog5this_E+0xa715>  ; global constructors keyed to CLog::this_+0xa715
082930e6 +0x024:  mov    0x8(%ebp),%eax
082930e9 +0x027:  add    $0x34,%eax
082930ec +0x02a:  mov    %eax,(%esp)
082930ef +0x02d:  call   082ae2ee <_GLOBAL__I__ZN4CLog5this_E+0xa715>  ; global constructors keyed to CLog::this_+0xa715
082930f4 +0x032:  mov    0x8(%ebp),%eax
082930f7 +0x035:  add    $0x4c,%eax
082930fa +0x038:  mov    %eax,(%esp)
082930fd +0x03b:  call   082ae390 <_GLOBAL__I__ZN4CLog5this_E+0xa7b7>  ; global constructors keyed to CLog::this_+0xa7b7
08293102 +0x040:  mov    0x8(%ebp),%eax
08293105 +0x043:  add    $0x7c,%eax
08293108 +0x046:  mov    %eax,(%esp)
0829310b +0x049:  call   082ae5ee <_GLOBAL__I__ZN4CLog5this_E+0xaa15>  ; global constructors keyed to CLog::this_+0xaa15
08293110 +0x04e:  mov    0x8(%ebp),%eax
08293113 +0x051:  add    $0xac,%eax
08293118 +0x056:  mov    %eax,(%esp)
0829311b +0x059:  call   082ae82a <_GLOBAL__I__ZN4CLog5this_E+0xac51>  ; global constructors keyed to CLog::this_+0xac51
08293120 +0x05e:  mov    0x8(%ebp),%eax
08293123 +0x061:  add    $0xdc,%eax
08293128 +0x066:  mov    %eax,(%esp)
0829312b +0x069:  call   082aea88 <_GLOBAL__I__ZN4CLog5this_E+0xaeaf>  ; global constructors keyed to CLog::this_+0xaeaf
08293130 +0x06e:  mov    0x8(%ebp),%eax
08293133 +0x071:  add    $0x10c,%eax
08293138 +0x076:  mov    %eax,(%esp)
0829313b +0x079:  call   082aece6 <_GLOBAL__I__ZN4CLog5this_E+0xb10d>  ; global constructors keyed to CLog::this_+0xb10d
08293140 +0x07e:  mov    0x8(%ebp),%eax
08293143 +0x081:  add    $0x13c,%eax
08293148 +0x086:  mov    %eax,(%esp)
0829314b +0x089:  call   082aef58 <_GLOBAL__I__ZN4CLog5this_E+0xb37f>  ; global constructors keyed to CLog::this_+0xb37f
08293150 +0x08e:  mov    0x8(%ebp),%eax
08293153 +0x091:  add    $0x16c,%eax
08293158 +0x096:  mov    %eax,(%esp)
0829315b +0x099:  call   082af1be <_GLOBAL__I__ZN4CLog5this_E+0xb5e5>  ; global constructors keyed to CLog::this_+0xb5e5
08293160 +0x09e:  mov    0x8(%ebp),%eax
08293163 +0x0a1:  add    $0x19c,%eax
08293168 +0x0a6:  mov    %eax,(%esp)
0829316b +0x0a9:  call   082af41c <_GLOBAL__I__ZN4CLog5this_E+0xb843>  ; global constructors keyed to CLog::this_+0xb843
08293170 +0x0ae:  mov    0x8(%ebp),%eax
08293173 +0x0b1:  add    $0x1cc,%eax
08293178 +0x0b6:  mov    %eax,(%esp)
0829317b +0x0b9:  call   082af67a <_GLOBAL__I__ZN4CLog5this_E+0xbaa1>  ; global constructors keyed to CLog::this_+0xbaa1
08293180 +0x0be:  mov    0x8(%ebp),%eax
08293183 +0x0c1:  add    $0x1fc,%eax
08293188 +0x0c6:  mov    %eax,(%esp)
0829318b +0x0c9:  call   082af8da <_GLOBAL__I__ZN4CLog5this_E+0xbd01>  ; global constructors keyed to CLog::this_+0xbd01
08293190 +0x0ce:  mov    0x8(%ebp),%eax
08293193 +0x0d1:  add    $0x22c,%eax
08293198 +0x0d6:  mov    %eax,(%esp)
0829319b +0x0d9:  call   082afb14 <_GLOBAL__I__ZN4CLog5this_E+0xbf3b>  ; global constructors keyed to CLog::this_+0xbf3b
082931a0 +0x0de:  mov    0x8(%ebp),%eax
082931a3 +0x0e1:  add    $0x244,%eax
082931a8 +0x0e6:  mov    %eax,(%esp)
082931ab +0x0e9:  call   082afb14 <_GLOBAL__I__ZN4CLog5this_E+0xbf3b>  ; global constructors keyed to CLog::this_+0xbf3b
082931b0 +0x0ee:  mov    0x8(%ebp),%eax
082931b3 +0x0f1:  add    $0x25c,%eax
082931b8 +0x0f6:  mov    %eax,(%esp)
082931bb +0x0f9:  call   082afb8e <_GLOBAL__I__ZN4CLog5this_E+0xbfb5>  ; global constructors keyed to CLog::this_+0xbfb5
082931c0 +0x0fe:  mov    0x8(%ebp),%eax
082931c3 +0x101:  add    $0x270,%eax
082931c8 +0x106:  mov    %eax,(%esp)
082931cb +0x109:  call   082afc62 <_GLOBAL__I__ZN4CLog5this_E+0xc089>  ; global constructors keyed to CLog::this_+0xc089
082931d0 +0x10e:  mov    0x8(%ebp),%eax
082931d3 +0x111:  add    $0x284,%eax
082931d8 +0x116:  mov    %eax,(%esp)
082931db +0x119:  call   082afd36 <_GLOBAL__I__ZN4CLog5this_E+0xc15d>  ; global constructors keyed to CLog::this_+0xc15d
082931e0 +0x11e:  mov    0x8(%ebp),%eax
082931e3 +0x121:  add    $0x298,%eax
082931e8 +0x126:  mov    %eax,(%esp)
082931eb +0x129:  call   082afe0a <_GLOBAL__I__ZN4CLog5this_E+0xc231>  ; global constructors keyed to CLog::this_+0xc231
082931f0 +0x12e:  mov    0x8(%ebp),%eax
082931f3 +0x131:  add    $0x2ac,%eax
082931f8 +0x136:  mov    %eax,(%esp)
082931fb +0x139:  call   082afede <_GLOBAL__I__ZN4CLog5this_E+0xc305>  ; global constructors keyed to CLog::this_+0xc305
08293200 +0x13e:  mov    0x8(%ebp),%eax
08293203 +0x141:  add    $0x2c0,%eax
08293208 +0x146:  mov    %eax,(%esp)
0829320b +0x149:  call   082affb2 <_GLOBAL__I__ZN4CLog5this_E+0xc3d9>  ; global constructors keyed to CLog::this_+0xc3d9
08293210 +0x14e:  mov    0x8(%ebp),%eax
08293213 +0x151:  add    $0x2d4,%eax
08293218 +0x156:  mov    %eax,(%esp)
0829321b +0x159:  call   082b0086 <_GLOBAL__I__ZN4CLog5this_E+0xc4ad>  ; global constructors keyed to CLog::this_+0xc4ad
08293220 +0x15e:  mov    0x8(%ebp),%eax
08293223 +0x161:  add    $0x2e8,%eax
08293228 +0x166:  mov    %eax,(%esp)
0829322b +0x169:  call   082b015a <_GLOBAL__I__ZN4CLog5this_E+0xc581>  ; global constructors keyed to CLog::this_+0xc581
08293230 +0x16e:  mov    0x8(%ebp),%eax
08293233 +0x171:  movw   $0x0,0x18(%eax)
08293239 +0x177:  lea    -0xd9(%ebp),%eax
0829323f +0x17d:  mov    %eax,(%esp)
08293242 +0x180:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08293247 +0x185:  lea    -0xd9(%ebp),%eax
0829324d +0x18b:  mov    %eax,0x8(%esp)
08293251 +0x18f:  movl   $"testman820",0x4(%esp)
08293259 +0x197:  lea    -0xe0(%ebp),%eax
0829325f +0x19d:  mov    %eax,(%esp)
08293262 +0x1a0:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08293267 +0x1a5:  mov    0x8(%ebp),%eax
0829326a +0x1a8:  lea    0x1c(%eax),%ecx
0829326d +0x1ab:  lea    -0xe8(%ebp),%eax
08293273 +0x1b1:  lea    -0xe0(%ebp),%edx
08293279 +0x1b7:  mov    %edx,0x8(%esp)
0829327d +0x1bb:  mov    %ecx,0x4(%esp)
08293281 +0x1bf:  mov    %eax,(%esp)
08293284 +0x1c2:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293289 +0x1c7:  sub    $0x4,%esp
0829328c +0x1ca:  lea    -0xe0(%ebp),%eax
08293292 +0x1d0:  mov    %eax,(%esp)
08293295 +0x1d3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829329a +0x1d8:  jmp    082932cf <+0x20d>
0829329c +0x1da:  mov    %edx,%ebx
0829329e +0x1dc:  mov    %eax,%esi
082932a0 +0x1de:  lea    -0xe0(%ebp),%eax
082932a6 +0x1e4:  mov    %eax,(%esp)
082932a9 +0x1e7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082932ae +0x1ec:  mov    %esi,%eax
082932b0 +0x1ee:  mov    %ebx,%edx
082932b2 +0x1f0:  jmp    082932b4 <+0x1f2>
082932b4 +0x1f2:  mov    %edx,%ebx
082932b6 +0x1f4:  mov    %eax,%esi
082932b8 +0x1f6:  lea    -0xd9(%ebp),%eax
082932be +0x1fc:  mov    %eax,(%esp)
082932c1 +0x1ff:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082932c6 +0x204:  mov    %esi,%eax
082932c8 +0x206:  mov    %ebx,%edx
082932ca +0x208:  jmp    08293acb <+0xa09>
082932cf +0x20d:  lea    -0xd9(%ebp),%eax
082932d5 +0x213:  mov    %eax,(%esp)
082932d8 +0x216:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082932dd +0x21b:  lea    -0xc9(%ebp),%eax
082932e3 +0x221:  mov    %eax,(%esp)
082932e6 +0x224:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082932eb +0x229:  lea    -0xc9(%ebp),%eax
082932f1 +0x22f:  mov    %eax,0x8(%esp)
082932f5 +0x233:  movl   $"htilil",0x4(%esp)
082932fd +0x23b:  lea    -0xd0(%ebp),%eax
08293303 +0x241:  mov    %eax,(%esp)
08293306 +0x244:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829330b +0x249:  mov    0x8(%ebp),%eax
0829330e +0x24c:  lea    0x1c(%eax),%ecx
08293311 +0x24f:  lea    -0xd8(%ebp),%eax
08293317 +0x255:  lea    -0xd0(%ebp),%edx
0829331d +0x25b:  mov    %edx,0x8(%esp)
08293321 +0x25f:  mov    %ecx,0x4(%esp)
08293325 +0x263:  mov    %eax,(%esp)
08293328 +0x266:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
0829332d +0x26b:  sub    $0x4,%esp
08293330 +0x26e:  lea    -0xd0(%ebp),%eax
08293336 +0x274:  mov    %eax,(%esp)
08293339 +0x277:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829333e +0x27c:  jmp    08293373 <+0x2b1>
08293340 +0x27e:  mov    %edx,%ebx
08293342 +0x280:  mov    %eax,%esi
08293344 +0x282:  lea    -0xd0(%ebp),%eax
0829334a +0x288:  mov    %eax,(%esp)
0829334d +0x28b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293352 +0x290:  mov    %esi,%eax
08293354 +0x292:  mov    %ebx,%edx
08293356 +0x294:  jmp    08293358 <+0x296>
08293358 +0x296:  mov    %edx,%ebx
0829335a +0x298:  mov    %eax,%esi
0829335c +0x29a:  lea    -0xc9(%ebp),%eax
08293362 +0x2a0:  mov    %eax,(%esp)
08293365 +0x2a3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829336a +0x2a8:  mov    %esi,%eax
0829336c +0x2aa:  mov    %ebx,%edx
0829336e +0x2ac:  jmp    08293acb <+0xa09>
08293373 +0x2b1:  lea    -0xc9(%ebp),%eax
08293379 +0x2b7:  mov    %eax,(%esp)
0829337c +0x2ba:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293381 +0x2bf:  lea    -0xb9(%ebp),%eax
08293387 +0x2c5:  mov    %eax,(%esp)
0829338a +0x2c8:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829338f +0x2cd:  lea    -0xb9(%ebp),%eax
08293395 +0x2d3:  mov    %eax,0x8(%esp)
08293399 +0x2d7:  movl   $"azzuman",0x4(%esp)
082933a1 +0x2df:  lea    -0xc0(%ebp),%eax
082933a7 +0x2e5:  mov    %eax,(%esp)
082933aa +0x2e8:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082933af +0x2ed:  mov    0x8(%ebp),%eax
082933b2 +0x2f0:  lea    0x1c(%eax),%ecx
082933b5 +0x2f3:  lea    -0xc8(%ebp),%eax
082933bb +0x2f9:  lea    -0xc0(%ebp),%edx
082933c1 +0x2ff:  mov    %edx,0x8(%esp)
082933c5 +0x303:  mov    %ecx,0x4(%esp)
082933c9 +0x307:  mov    %eax,(%esp)
082933cc +0x30a:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
082933d1 +0x30f:  sub    $0x4,%esp
082933d4 +0x312:  lea    -0xc0(%ebp),%eax
082933da +0x318:  mov    %eax,(%esp)
082933dd +0x31b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082933e2 +0x320:  jmp    08293417 <+0x355>
082933e4 +0x322:  mov    %edx,%ebx
082933e6 +0x324:  mov    %eax,%esi
082933e8 +0x326:  lea    -0xc0(%ebp),%eax
082933ee +0x32c:  mov    %eax,(%esp)
082933f1 +0x32f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082933f6 +0x334:  mov    %esi,%eax
082933f8 +0x336:  mov    %ebx,%edx
082933fa +0x338:  jmp    082933fc <+0x33a>
082933fc +0x33a:  mov    %edx,%ebx
082933fe +0x33c:  mov    %eax,%esi
08293400 +0x33e:  lea    -0xb9(%ebp),%eax
08293406 +0x344:  mov    %eax,(%esp)
08293409 +0x347:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829340e +0x34c:  mov    %esi,%eax
08293410 +0x34e:  mov    %ebx,%edx
08293412 +0x350:  jmp    08293acb <+0xa09>
08293417 +0x355:  lea    -0xb9(%ebp),%eax
0829341d +0x35b:  mov    %eax,(%esp)
08293420 +0x35e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293425 +0x363:  lea    -0xa9(%ebp),%eax
0829342b +0x369:  mov    %eax,(%esp)
0829342e +0x36c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08293433 +0x371:  lea    -0xa9(%ebp),%eax
08293439 +0x377:  mov    %eax,0x8(%esp)
0829343d +0x37b:  movl   $"cuwaki",0x4(%esp)
08293445 +0x383:  lea    -0xb0(%ebp),%eax
0829344b +0x389:  mov    %eax,(%esp)
0829344e +0x38c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08293453 +0x391:  mov    0x8(%ebp),%eax
08293456 +0x394:  lea    0x1c(%eax),%ecx
08293459 +0x397:  lea    -0xb8(%ebp),%eax
0829345f +0x39d:  lea    -0xb0(%ebp),%edx
08293465 +0x3a3:  mov    %edx,0x8(%esp)
08293469 +0x3a7:  mov    %ecx,0x4(%esp)
0829346d +0x3ab:  mov    %eax,(%esp)
08293470 +0x3ae:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293475 +0x3b3:  sub    $0x4,%esp
08293478 +0x3b6:  lea    -0xb0(%ebp),%eax
0829347e +0x3bc:  mov    %eax,(%esp)
08293481 +0x3bf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293486 +0x3c4:  jmp    082934bb <+0x3f9>
08293488 +0x3c6:  mov    %edx,%ebx
0829348a +0x3c8:  mov    %eax,%esi
0829348c +0x3ca:  lea    -0xb0(%ebp),%eax
08293492 +0x3d0:  mov    %eax,(%esp)
08293495 +0x3d3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829349a +0x3d8:  mov    %esi,%eax
0829349c +0x3da:  mov    %ebx,%edx
0829349e +0x3dc:  jmp    082934a0 <+0x3de>
082934a0 +0x3de:  mov    %edx,%ebx
082934a2 +0x3e0:  mov    %eax,%esi
082934a4 +0x3e2:  lea    -0xa9(%ebp),%eax
082934aa +0x3e8:  mov    %eax,(%esp)
082934ad +0x3eb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082934b2 +0x3f0:  mov    %esi,%eax
082934b4 +0x3f2:  mov    %ebx,%edx
082934b6 +0x3f4:  jmp    08293acb <+0xa09>
082934bb +0x3f9:  lea    -0xa9(%ebp),%eax
082934c1 +0x3ff:  mov    %eax,(%esp)
082934c4 +0x402:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082934c9 +0x407:  lea    -0x99(%ebp),%eax
082934cf +0x40d:  mov    %eax,(%esp)
082934d2 +0x410:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082934d7 +0x415:  lea    -0x99(%ebp),%eax
082934dd +0x41b:  mov    %eax,0x8(%esp)
082934e1 +0x41f:  movl   $"slainer",0x4(%esp)
082934e9 +0x427:  lea    -0xa0(%ebp),%eax
082934ef +0x42d:  mov    %eax,(%esp)
082934f2 +0x430:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082934f7 +0x435:  mov    0x8(%ebp),%eax
082934fa +0x438:  lea    0x1c(%eax),%ecx
082934fd +0x43b:  lea    -0xa8(%ebp),%eax
08293503 +0x441:  lea    -0xa0(%ebp),%edx
08293509 +0x447:  mov    %edx,0x8(%esp)
0829350d +0x44b:  mov    %ecx,0x4(%esp)
08293511 +0x44f:  mov    %eax,(%esp)
08293514 +0x452:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293519 +0x457:  sub    $0x4,%esp
0829351c +0x45a:  lea    -0xa0(%ebp),%eax
08293522 +0x460:  mov    %eax,(%esp)
08293525 +0x463:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829352a +0x468:  jmp    0829355f <+0x49d>
0829352c +0x46a:  mov    %edx,%ebx
0829352e +0x46c:  mov    %eax,%esi
08293530 +0x46e:  lea    -0xa0(%ebp),%eax
08293536 +0x474:  mov    %eax,(%esp)
08293539 +0x477:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829353e +0x47c:  mov    %esi,%eax
08293540 +0x47e:  mov    %ebx,%edx
08293542 +0x480:  jmp    08293544 <+0x482>
08293544 +0x482:  mov    %edx,%ebx
08293546 +0x484:  mov    %eax,%esi
08293548 +0x486:  lea    -0x99(%ebp),%eax
0829354e +0x48c:  mov    %eax,(%esp)
08293551 +0x48f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293556 +0x494:  mov    %esi,%eax
08293558 +0x496:  mov    %ebx,%edx
0829355a +0x498:  jmp    08293acb <+0xa09>
0829355f +0x49d:  lea    -0x99(%ebp),%eax
08293565 +0x4a3:  mov    %eax,(%esp)
08293568 +0x4a6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829356d +0x4ab:  lea    -0x89(%ebp),%eax
08293573 +0x4b1:  mov    %eax,(%esp)
08293576 +0x4b4:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829357b +0x4b9:  lea    -0x89(%ebp),%eax
08293581 +0x4bf:  mov    %eax,0x8(%esp)
08293585 +0x4c3:  movl   $"mrsbscom",0x4(%esp)
0829358d +0x4cb:  lea    -0x90(%ebp),%eax
08293593 +0x4d1:  mov    %eax,(%esp)
08293596 +0x4d4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829359b +0x4d9:  mov    0x8(%ebp),%eax
0829359e +0x4dc:  lea    0x1c(%eax),%ecx
082935a1 +0x4df:  lea    -0x98(%ebp),%eax
082935a7 +0x4e5:  lea    -0x90(%ebp),%edx
082935ad +0x4eb:  mov    %edx,0x8(%esp)
082935b1 +0x4ef:  mov    %ecx,0x4(%esp)
082935b5 +0x4f3:  mov    %eax,(%esp)
082935b8 +0x4f6:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
082935bd +0x4fb:  sub    $0x4,%esp
082935c0 +0x4fe:  lea    -0x90(%ebp),%eax
082935c6 +0x504:  mov    %eax,(%esp)
082935c9 +0x507:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082935ce +0x50c:  jmp    08293603 <+0x541>
082935d0 +0x50e:  mov    %edx,%ebx
082935d2 +0x510:  mov    %eax,%esi
082935d4 +0x512:  lea    -0x90(%ebp),%eax
082935da +0x518:  mov    %eax,(%esp)
082935dd +0x51b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082935e2 +0x520:  mov    %esi,%eax
082935e4 +0x522:  mov    %ebx,%edx
082935e6 +0x524:  jmp    082935e8 <+0x526>
082935e8 +0x526:  mov    %edx,%ebx
082935ea +0x528:  mov    %eax,%esi
082935ec +0x52a:  lea    -0x89(%ebp),%eax
082935f2 +0x530:  mov    %eax,(%esp)
082935f5 +0x533:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082935fa +0x538:  mov    %esi,%eax
082935fc +0x53a:  mov    %ebx,%edx
082935fe +0x53c:  jmp    08293acb <+0xa09>
08293603 +0x541:  lea    -0x89(%ebp),%eax
08293609 +0x547:  mov    %eax,(%esp)
0829360c +0x54a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293611 +0x54f:  lea    -0x79(%ebp),%eax
08293614 +0x552:  mov    %eax,(%esp)
08293617 +0x555:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829361c +0x55a:  lea    -0x79(%ebp),%eax
0829361f +0x55d:  mov    %eax,0x8(%esp)
08293623 +0x561:  movl   $"arandra",0x4(%esp)
0829362b +0x569:  lea    -0x80(%ebp),%eax
0829362e +0x56c:  mov    %eax,(%esp)
08293631 +0x56f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08293636 +0x574:  mov    0x8(%ebp),%eax
08293639 +0x577:  lea    0x1c(%eax),%ecx
0829363c +0x57a:  lea    -0x88(%ebp),%eax
08293642 +0x580:  lea    -0x80(%ebp),%edx
08293645 +0x583:  mov    %edx,0x8(%esp)
08293649 +0x587:  mov    %ecx,0x4(%esp)
0829364d +0x58b:  mov    %eax,(%esp)
08293650 +0x58e:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293655 +0x593:  sub    $0x4,%esp
08293658 +0x596:  lea    -0x80(%ebp),%eax
0829365b +0x599:  mov    %eax,(%esp)
0829365e +0x59c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293663 +0x5a1:  jmp    08293692 <+0x5d0>
08293665 +0x5a3:  mov    %edx,%ebx
08293667 +0x5a5:  mov    %eax,%esi
08293669 +0x5a7:  lea    -0x80(%ebp),%eax
0829366c +0x5aa:  mov    %eax,(%esp)
0829366f +0x5ad:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293674 +0x5b2:  mov    %esi,%eax
08293676 +0x5b4:  mov    %ebx,%edx
08293678 +0x5b6:  jmp    0829367a <+0x5b8>
0829367a +0x5b8:  mov    %edx,%ebx
0829367c +0x5ba:  mov    %eax,%esi
0829367e +0x5bc:  lea    -0x79(%ebp),%eax
08293681 +0x5bf:  mov    %eax,(%esp)
08293684 +0x5c2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293689 +0x5c7:  mov    %esi,%eax
0829368b +0x5c9:  mov    %ebx,%edx
0829368d +0x5cb:  jmp    08293acb <+0xa09>
08293692 +0x5d0:  lea    -0x79(%ebp),%eax
08293695 +0x5d3:  mov    %eax,(%esp)
08293698 +0x5d6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829369d +0x5db:  lea    -0x69(%ebp),%eax
082936a0 +0x5de:  mov    %eax,(%esp)
082936a3 +0x5e1:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082936a8 +0x5e6:  lea    -0x69(%ebp),%eax
082936ab +0x5e9:  mov    %eax,0x8(%esp)
082936af +0x5ed:  movl   $"krucef",0x4(%esp)
082936b7 +0x5f5:  lea    -0x70(%ebp),%eax
082936ba +0x5f8:  mov    %eax,(%esp)
082936bd +0x5fb:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082936c2 +0x600:  mov    0x8(%ebp),%eax
082936c5 +0x603:  lea    0x1c(%eax),%ecx
082936c8 +0x606:  lea    -0x78(%ebp),%eax
082936cb +0x609:  lea    -0x70(%ebp),%edx
082936ce +0x60c:  mov    %edx,0x8(%esp)
082936d2 +0x610:  mov    %ecx,0x4(%esp)
082936d6 +0x614:  mov    %eax,(%esp)
082936d9 +0x617:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
082936de +0x61c:  sub    $0x4,%esp
082936e1 +0x61f:  lea    -0x70(%ebp),%eax
082936e4 +0x622:  mov    %eax,(%esp)
082936e7 +0x625:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082936ec +0x62a:  jmp    0829371b <+0x659>
082936ee +0x62c:  mov    %edx,%ebx
082936f0 +0x62e:  mov    %eax,%esi
082936f2 +0x630:  lea    -0x70(%ebp),%eax
082936f5 +0x633:  mov    %eax,(%esp)
082936f8 +0x636:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082936fd +0x63b:  mov    %esi,%eax
082936ff +0x63d:  mov    %ebx,%edx
08293701 +0x63f:  jmp    08293703 <+0x641>
08293703 +0x641:  mov    %edx,%ebx
08293705 +0x643:  mov    %eax,%esi
08293707 +0x645:  lea    -0x69(%ebp),%eax
0829370a +0x648:  mov    %eax,(%esp)
0829370d +0x64b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293712 +0x650:  mov    %esi,%eax
08293714 +0x652:  mov    %ebx,%edx
08293716 +0x654:  jmp    08293acb <+0xa09>
0829371b +0x659:  lea    -0x69(%ebp),%eax
0829371e +0x65c:  mov    %eax,(%esp)
08293721 +0x65f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293726 +0x664:  lea    -0x59(%ebp),%eax
08293729 +0x667:  mov    %eax,(%esp)
0829372c +0x66a:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08293731 +0x66f:  lea    -0x59(%ebp),%eax
08293734 +0x672:  mov    %eax,0x8(%esp)
08293738 +0x676:  movl   $"dnftest126",0x4(%esp)
08293740 +0x67e:  lea    -0x60(%ebp),%eax
08293743 +0x681:  mov    %eax,(%esp)
08293746 +0x684:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829374b +0x689:  mov    0x8(%ebp),%eax
0829374e +0x68c:  lea    0x1c(%eax),%ecx
08293751 +0x68f:  lea    -0x68(%ebp),%eax
08293754 +0x692:  lea    -0x60(%ebp),%edx
08293757 +0x695:  mov    %edx,0x8(%esp)
0829375b +0x699:  mov    %ecx,0x4(%esp)
0829375f +0x69d:  mov    %eax,(%esp)
08293762 +0x6a0:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293767 +0x6a5:  sub    $0x4,%esp
0829376a +0x6a8:  lea    -0x60(%ebp),%eax
0829376d +0x6ab:  mov    %eax,(%esp)
08293770 +0x6ae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293775 +0x6b3:  jmp    082937a4 <+0x6e2>
08293777 +0x6b5:  mov    %edx,%ebx
08293779 +0x6b7:  mov    %eax,%esi
0829377b +0x6b9:  lea    -0x60(%ebp),%eax
0829377e +0x6bc:  mov    %eax,(%esp)
08293781 +0x6bf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293786 +0x6c4:  mov    %esi,%eax
08293788 +0x6c6:  mov    %ebx,%edx
0829378a +0x6c8:  jmp    0829378c <+0x6ca>
0829378c +0x6ca:  mov    %edx,%ebx
0829378e +0x6cc:  mov    %eax,%esi
08293790 +0x6ce:  lea    -0x59(%ebp),%eax
08293793 +0x6d1:  mov    %eax,(%esp)
08293796 +0x6d4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829379b +0x6d9:  mov    %esi,%eax
0829379d +0x6db:  mov    %ebx,%edx
0829379f +0x6dd:  jmp    08293acb <+0xa09>
082937a4 +0x6e2:  lea    -0x59(%ebp),%eax
082937a7 +0x6e5:  mov    %eax,(%esp)
082937aa +0x6e8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082937af +0x6ed:  lea    -0x49(%ebp),%eax
082937b2 +0x6f0:  mov    %eax,(%esp)
082937b5 +0x6f3:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082937ba +0x6f8:  lea    -0x49(%ebp),%eax
082937bd +0x6fb:  mov    %eax,0x8(%esp)
082937c1 +0x6ff:  movl   $"dnftest127",0x4(%esp)
082937c9 +0x707:  lea    -0x50(%ebp),%eax
082937cc +0x70a:  mov    %eax,(%esp)
082937cf +0x70d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082937d4 +0x712:  mov    0x8(%ebp),%eax
082937d7 +0x715:  lea    0x1c(%eax),%ecx
082937da +0x718:  lea    -0x58(%ebp),%eax
082937dd +0x71b:  lea    -0x50(%ebp),%edx
082937e0 +0x71e:  mov    %edx,0x8(%esp)
082937e4 +0x722:  mov    %ecx,0x4(%esp)
082937e8 +0x726:  mov    %eax,(%esp)
082937eb +0x729:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
082937f0 +0x72e:  sub    $0x4,%esp
082937f3 +0x731:  lea    -0x50(%ebp),%eax
082937f6 +0x734:  mov    %eax,(%esp)
082937f9 +0x737:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082937fe +0x73c:  jmp    0829382d <+0x76b>
08293800 +0x73e:  mov    %edx,%ebx
08293802 +0x740:  mov    %eax,%esi
08293804 +0x742:  lea    -0x50(%ebp),%eax
08293807 +0x745:  mov    %eax,(%esp)
0829380a +0x748:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829380f +0x74d:  mov    %esi,%eax
08293811 +0x74f:  mov    %ebx,%edx
08293813 +0x751:  jmp    08293815 <+0x753>
08293815 +0x753:  mov    %edx,%ebx
08293817 +0x755:  mov    %eax,%esi
08293819 +0x757:  lea    -0x49(%ebp),%eax
0829381c +0x75a:  mov    %eax,(%esp)
0829381f +0x75d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293824 +0x762:  mov    %esi,%eax
08293826 +0x764:  mov    %ebx,%edx
08293828 +0x766:  jmp    08293acb <+0xa09>
0829382d +0x76b:  lea    -0x49(%ebp),%eax
08293830 +0x76e:  mov    %eax,(%esp)
08293833 +0x771:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293838 +0x776:  lea    -0x39(%ebp),%eax
0829383b +0x779:  mov    %eax,(%esp)
0829383e +0x77c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08293843 +0x781:  lea    -0x39(%ebp),%eax
08293846 +0x784:  mov    %eax,0x8(%esp)
0829384a +0x788:  movl   $"dnftest128",0x4(%esp)
08293852 +0x790:  lea    -0x40(%ebp),%eax
08293855 +0x793:  mov    %eax,(%esp)
08293858 +0x796:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829385d +0x79b:  mov    0x8(%ebp),%eax
08293860 +0x79e:  lea    0x1c(%eax),%ecx
08293863 +0x7a1:  lea    -0x48(%ebp),%eax
08293866 +0x7a4:  lea    -0x40(%ebp),%edx
08293869 +0x7a7:  mov    %edx,0x8(%esp)
0829386d +0x7ab:  mov    %ecx,0x4(%esp)
08293871 +0x7af:  mov    %eax,(%esp)
08293874 +0x7b2:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293879 +0x7b7:  sub    $0x4,%esp
0829387c +0x7ba:  lea    -0x40(%ebp),%eax
0829387f +0x7bd:  mov    %eax,(%esp)
08293882 +0x7c0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293887 +0x7c5:  jmp    082938b6 <+0x7f4>
08293889 +0x7c7:  mov    %edx,%ebx
0829388b +0x7c9:  mov    %eax,%esi
0829388d +0x7cb:  lea    -0x40(%ebp),%eax
08293890 +0x7ce:  mov    %eax,(%esp)
08293893 +0x7d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293898 +0x7d6:  mov    %esi,%eax
0829389a +0x7d8:  mov    %ebx,%edx
0829389c +0x7da:  jmp    0829389e <+0x7dc>
0829389e +0x7dc:  mov    %edx,%ebx
082938a0 +0x7de:  mov    %eax,%esi
082938a2 +0x7e0:  lea    -0x39(%ebp),%eax
082938a5 +0x7e3:  mov    %eax,(%esp)
082938a8 +0x7e6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082938ad +0x7eb:  mov    %esi,%eax
082938af +0x7ed:  mov    %ebx,%edx
082938b1 +0x7ef:  jmp    08293acb <+0xa09>
082938b6 +0x7f4:  lea    -0x39(%ebp),%eax
082938b9 +0x7f7:  mov    %eax,(%esp)
082938bc +0x7fa:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082938c1 +0x7ff:  lea    -0x29(%ebp),%eax
082938c4 +0x802:  mov    %eax,(%esp)
082938c7 +0x805:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082938cc +0x80a:  lea    -0x29(%ebp),%eax
082938cf +0x80d:  mov    %eax,0x8(%esp)
082938d3 +0x811:  movl   $"59.10.138.244",0x4(%esp)
082938db +0x819:  lea    -0x30(%ebp),%eax
082938de +0x81c:  mov    %eax,(%esp)
082938e1 +0x81f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082938e6 +0x824:  mov    0x8(%ebp),%eax
082938e9 +0x827:  lea    0x34(%eax),%ecx
082938ec +0x82a:  lea    -0x38(%ebp),%eax
082938ef +0x82d:  lea    -0x30(%ebp),%edx
082938f2 +0x830:  mov    %edx,0x8(%esp)
082938f6 +0x834:  mov    %ecx,0x4(%esp)
082938fa +0x838:  mov    %eax,(%esp)
082938fd +0x83b:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293902 +0x840:  sub    $0x4,%esp
08293905 +0x843:  lea    -0x30(%ebp),%eax
08293908 +0x846:  mov    %eax,(%esp)
0829390b +0x849:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293910 +0x84e:  jmp    0829393f <+0x87d>
08293912 +0x850:  mov    %edx,%ebx
08293914 +0x852:  mov    %eax,%esi
08293916 +0x854:  lea    -0x30(%ebp),%eax
08293919 +0x857:  mov    %eax,(%esp)
0829391c +0x85a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293921 +0x85f:  mov    %esi,%eax
08293923 +0x861:  mov    %ebx,%edx
08293925 +0x863:  jmp    08293927 <+0x865>
08293927 +0x865:  mov    %edx,%ebx
08293929 +0x867:  mov    %eax,%esi
0829392b +0x869:  lea    -0x29(%ebp),%eax
0829392e +0x86c:  mov    %eax,(%esp)
08293931 +0x86f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293936 +0x874:  mov    %esi,%eax
08293938 +0x876:  mov    %ebx,%edx
0829393a +0x878:  jmp    08293acb <+0xa09>
0829393f +0x87d:  lea    -0x29(%ebp),%eax
08293942 +0x880:  mov    %eax,(%esp)
08293945 +0x883:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829394a +0x888:  lea    -0x19(%ebp),%eax
0829394d +0x88b:  mov    %eax,(%esp)
08293950 +0x88e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08293955 +0x893:  lea    -0x19(%ebp),%eax
08293958 +0x896:  mov    %eax,0x8(%esp)
0829395c +0x89a:  movl   $"218.145.141.85",0x4(%esp)
08293964 +0x8a2:  lea    -0x20(%ebp),%eax
08293967 +0x8a5:  mov    %eax,(%esp)
0829396a +0x8a8:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829396f +0x8ad:  mov    0x8(%ebp),%eax
08293972 +0x8b0:  lea    0x34(%eax),%ecx
08293975 +0x8b3:  lea    -0x28(%ebp),%eax
08293978 +0x8b6:  lea    -0x20(%ebp),%edx
0829397b +0x8b9:  mov    %edx,0x8(%esp)
0829397f +0x8bd:  mov    %ecx,0x4(%esp)
08293983 +0x8c1:  mov    %eax,(%esp)
08293986 +0x8c4:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
0829398b +0x8c9:  sub    $0x4,%esp
0829398e +0x8cc:  lea    -0x20(%ebp),%eax
08293991 +0x8cf:  mov    %eax,(%esp)
08293994 +0x8d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293999 +0x8d7:  jmp    082939c8 <+0x906>
0829399b +0x8d9:  mov    %edx,%ebx
0829399d +0x8db:  mov    %eax,%esi
0829399f +0x8dd:  lea    -0x20(%ebp),%eax
082939a2 +0x8e0:  mov    %eax,(%esp)
082939a5 +0x8e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082939aa +0x8e8:  mov    %esi,%eax
082939ac +0x8ea:  mov    %ebx,%edx
082939ae +0x8ec:  jmp    082939b0 <+0x8ee>
082939b0 +0x8ee:  mov    %edx,%ebx
082939b2 +0x8f0:  mov    %eax,%esi
082939b4 +0x8f2:  lea    -0x19(%ebp),%eax
082939b7 +0x8f5:  mov    %eax,(%esp)
082939ba +0x8f8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082939bf +0x8fd:  mov    %esi,%eax
082939c1 +0x8ff:  mov    %ebx,%edx
082939c3 +0x901:  jmp    08293acb <+0xa09>
082939c8 +0x906:  lea    -0x19(%ebp),%eax
082939cb +0x909:  mov    %eax,(%esp)
082939ce +0x90c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082939d3 +0x911:  lea    -0x9(%ebp),%eax
082939d6 +0x914:  mov    %eax,(%esp)
082939d9 +0x917:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082939de +0x91c:  lea    -0x9(%ebp),%eax
082939e1 +0x91f:  mov    %eax,0x8(%esp)
082939e5 +0x923:  movl   $"121.134.32.42",0x4(%esp)
082939ed +0x92b:  lea    -0x10(%ebp),%eax
082939f0 +0x92e:  mov    %eax,(%esp)
082939f3 +0x931:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082939f8 +0x936:  mov    0x8(%ebp),%eax
082939fb +0x939:  lea    0x34(%eax),%ecx
082939fe +0x93c:  lea    -0x18(%ebp),%eax
08293a01 +0x93f:  lea    -0x10(%ebp),%edx
08293a04 +0x942:  mov    %edx,0x8(%esp)
08293a08 +0x946:  mov    %ecx,0x4(%esp)
08293a0c +0x94a:  mov    %eax,(%esp)
08293a0f +0x94d:  call   082b022e <_GLOBAL__I__ZN4CLog5this_E+0xc655>  ; global constructors keyed to CLog::this_+0xc655
08293a14 +0x952:  sub    $0x4,%esp
08293a17 +0x955:  lea    -0x10(%ebp),%eax
08293a1a +0x958:  mov    %eax,(%esp)
08293a1d +0x95b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293a22 +0x960:  jmp    08293a4e <+0x98c>
08293a24 +0x962:  mov    %edx,%ebx
08293a26 +0x964:  mov    %eax,%esi
08293a28 +0x966:  lea    -0x10(%ebp),%eax
08293a2b +0x969:  mov    %eax,(%esp)
08293a2e +0x96c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08293a33 +0x971:  mov    %esi,%eax
08293a35 +0x973:  mov    %ebx,%edx
08293a37 +0x975:  jmp    08293a39 <+0x977>
08293a39 +0x977:  mov    %edx,%ebx
08293a3b +0x979:  mov    %eax,%esi
08293a3d +0x97b:  lea    -0x9(%ebp),%eax
08293a40 +0x97e:  mov    %eax,(%esp)
08293a43 +0x981:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293a48 +0x986:  mov    %esi,%eax
08293a4a +0x988:  mov    %ebx,%edx
08293a4c +0x98a:  jmp    08293acb <+0xa09>
08293a4e +0x98c:  lea    -0x9(%ebp),%eax
08293a51 +0x98f:  mov    %eax,(%esp)
08293a54 +0x992:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08293a59 +0x997:  mov    0x8(%ebp),%eax
08293a5c +0x99a:  movl   $0x0,0x2fc(%eax)
08293a66 +0x9a4:  mov    0x8(%ebp),%eax
08293a69 +0x9a7:  movl   $0x0,0x300(%eax)
08293a73 +0x9b1:  mov    0x8(%ebp),%eax
08293a76 +0x9b4:  movl   $0x0,0x304(%eax)
08293a80 +0x9be:  mov    0x8(%ebp),%eax
08293a83 +0x9c1:  movl   $0x0,0x308(%eax)
08293a8d +0x9cb:  mov    0x8(%ebp),%eax
08293a90 +0x9ce:  movl   $0x0,0x30c(%eax)
08293a9a +0x9d8:  mov    0x8(%ebp),%eax
08293a9d +0x9db:  movl   $0x0,0x310(%eax)
08293aa7 +0x9e5:  mov    0x8(%ebp),%eax
08293aaa +0x9e8:  movl   $0x0,0x314(%eax)
08293ab4 +0x9f2:  mov    0x8(%ebp),%eax
08293ab7 +0x9f5:  movl   $0x0,0x318(%eax)
08293ac1 +0x9ff:  lea    -0x8(%ebp),%esp
08293ac4 +0xa02:  add    $0x0,%esp
08293ac7 +0xa05:  pop    %ebx
08293ac8 +0xa06:  pop    %esi
08293ac9 +0xa07:  pop    %ebp
08293aca +0xa08:  ret
08293acb +0xa09:  mov    %edx,%ebx
08293acd +0xa0b:  mov    %eax,%esi
08293acf +0xa0d:  mov    0x8(%ebp),%eax
08293ad2 +0xa10:  add    $0x2e8,%eax
08293ad7 +0xa15:  mov    %eax,(%esp)
08293ada +0xa18:  call   082aa7ea <_GLOBAL__I__ZN4CLog5this_E+0x6c11>  ; global constructors keyed to CLog::this_+0x6c11
08293adf +0xa1d:  mov    %esi,%eax
08293ae1 +0xa1f:  mov    %ebx,%edx
08293ae3 +0xa21:  jmp    08293ae5 <+0xa23>
08293ae5 +0xa23:  mov    %edx,%ebx
08293ae7 +0xa25:  mov    %eax,%esi
08293ae9 +0xa27:  mov    0x8(%ebp),%eax
08293aec +0xa2a:  add    $0x2d4,%eax
08293af1 +0xa2f:  mov    %eax,(%esp)
08293af4 +0xa32:  call   082aa7d6 <_GLOBAL__I__ZN4CLog5this_E+0x6bfd>  ; global constructors keyed to CLog::this_+0x6bfd
08293af9 +0xa37:  mov    %esi,%eax
08293afb +0xa39:  mov    %ebx,%edx
08293afd +0xa3b:  jmp    08293aff <+0xa3d>
08293aff +0xa3d:  mov    %edx,%ebx
08293b01 +0xa3f:  mov    %eax,%esi
08293b03 +0xa41:  mov    0x8(%ebp),%eax
08293b06 +0xa44:  add    $0x2c0,%eax
08293b0b +0xa49:  mov    %eax,(%esp)
08293b0e +0xa4c:  call   082aa7c2 <_GLOBAL__I__ZN4CLog5this_E+0x6be9>  ; global constructors keyed to CLog::this_+0x6be9
08293b13 +0xa51:  mov    %esi,%eax
08293b15 +0xa53:  mov    %ebx,%edx
08293b17 +0xa55:  jmp    08293b19 <+0xa57>
08293b19 +0xa57:  mov    %edx,%ebx
08293b1b +0xa59:  mov    %eax,%esi
08293b1d +0xa5b:  mov    0x8(%ebp),%eax
08293b20 +0xa5e:  add    $0x2ac,%eax
08293b25 +0xa63:  mov    %eax,(%esp)
08293b28 +0xa66:  call   082aa7ae <_GLOBAL__I__ZN4CLog5this_E+0x6bd5>  ; global constructors keyed to CLog::this_+0x6bd5
08293b2d +0xa6b:  mov    %esi,%eax
08293b2f +0xa6d:  mov    %ebx,%edx
08293b31 +0xa6f:  jmp    08293b33 <+0xa71>
08293b33 +0xa71:  mov    %edx,%ebx
08293b35 +0xa73:  mov    %eax,%esi
08293b37 +0xa75:  mov    0x8(%ebp),%eax
08293b3a +0xa78:  add    $0x298,%eax
08293b3f +0xa7d:  mov    %eax,(%esp)
08293b42 +0xa80:  call   082aa79a <_GLOBAL__I__ZN4CLog5this_E+0x6bc1>  ; global constructors keyed to CLog::this_+0x6bc1
08293b47 +0xa85:  mov    %esi,%eax
08293b49 +0xa87:  mov    %ebx,%edx
08293b4b +0xa89:  jmp    08293b4d <+0xa8b>
08293b4d +0xa8b:  mov    %edx,%ebx
08293b4f +0xa8d:  mov    %eax,%esi
08293b51 +0xa8f:  mov    0x8(%ebp),%eax
08293b54 +0xa92:  add    $0x284,%eax
08293b59 +0xa97:  mov    %eax,(%esp)
08293b5c +0xa9a:  call   082aa786 <_GLOBAL__I__ZN4CLog5this_E+0x6bad>  ; global constructors keyed to CLog::this_+0x6bad
08293b61 +0xa9f:  mov    %esi,%eax
08293b63 +0xaa1:  mov    %ebx,%edx
08293b65 +0xaa3:  jmp    08293b67 <+0xaa5>
08293b67 +0xaa5:  mov    %edx,%ebx
08293b69 +0xaa7:  mov    %eax,%esi
08293b6b +0xaa9:  mov    0x8(%ebp),%eax
08293b6e +0xaac:  add    $0x270,%eax
08293b73 +0xab1:  mov    %eax,(%esp)
08293b76 +0xab4:  call   082aa772 <_GLOBAL__I__ZN4CLog5this_E+0x6b99>  ; global constructors keyed to CLog::this_+0x6b99
08293b7b +0xab9:  mov    %esi,%eax
08293b7d +0xabb:  mov    %ebx,%edx
08293b7f +0xabd:  jmp    08293b81 <+0xabf>
08293b81 +0xabf:  mov    %edx,%ebx
08293b83 +0xac1:  mov    %eax,%esi
08293b85 +0xac3:  mov    0x8(%ebp),%eax
08293b88 +0xac6:  add    $0x25c,%eax
08293b8d +0xacb:  mov    %eax,(%esp)
08293b90 +0xace:  call   082aa75e <_GLOBAL__I__ZN4CLog5this_E+0x6b85>  ; global constructors keyed to CLog::this_+0x6b85
08293b95 +0xad3:  mov    %esi,%eax
08293b97 +0xad5:  mov    %ebx,%edx
08293b99 +0xad7:  jmp    08293b9b <+0xad9>
08293b9b +0xad9:  mov    %edx,%ebx
08293b9d +0xadb:  mov    %eax,%esi
08293b9f +0xadd:  mov    0x8(%ebp),%eax
08293ba2 +0xae0:  add    $0x244,%eax
08293ba7 +0xae5:  mov    %eax,(%esp)
08293baa +0xae8:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293baf +0xaed:  mov    %esi,%eax
08293bb1 +0xaef:  mov    %ebx,%edx
08293bb3 +0xaf1:  jmp    08293bb5 <+0xaf3>
08293bb5 +0xaf3:  mov    %edx,%ebx
08293bb7 +0xaf5:  mov    %eax,%esi
08293bb9 +0xaf7:  mov    0x8(%ebp),%eax
08293bbc +0xafa:  add    $0x22c,%eax
08293bc1 +0xaff:  mov    %eax,(%esp)
08293bc4 +0xb02:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293bc9 +0xb07:  mov    %esi,%eax
08293bcb +0xb09:  mov    %ebx,%edx
08293bcd +0xb0b:  jmp    08293bcf <+0xb0d>
08293bcf +0xb0d:  mov    %edx,%ebx
08293bd1 +0xb0f:  mov    %eax,%esi
08293bd3 +0xb11:  mov    0x8(%ebp),%eax
08293bd6 +0xb14:  add    $0x1fc,%eax
08293bdb +0xb19:  mov    %eax,(%esp)
08293bde +0xb1c:  call   082afa8c <_GLOBAL__I__ZN4CLog5this_E+0xbeb3>  ; global constructors keyed to CLog::this_+0xbeb3
08293be3 +0xb21:  mov    %esi,%eax
08293be5 +0xb23:  mov    %ebx,%edx
08293be7 +0xb25:  jmp    08293be9 <+0xb27>
08293be9 +0xb27:  mov    %edx,%ebx
08293beb +0xb29:  mov    %eax,%esi
08293bed +0xb2b:  mov    0x8(%ebp),%eax
08293bf0 +0xb2e:  add    $0x1cc,%eax
08293bf5 +0xb33:  mov    %eax,(%esp)
08293bf8 +0xb36:  call   082af82a <_GLOBAL__I__ZN4CLog5this_E+0xbc51>  ; global constructors keyed to CLog::this_+0xbc51
08293bfd +0xb3b:  mov    %esi,%eax
08293bff +0xb3d:  mov    %ebx,%edx
08293c01 +0xb3f:  jmp    08293c03 <+0xb41>
08293c03 +0xb41:  mov    %edx,%ebx
08293c05 +0xb43:  mov    %eax,%esi
08293c07 +0xb45:  mov    0x8(%ebp),%eax
08293c0a +0xb48:  add    $0x19c,%eax
08293c0f +0xb4d:  mov    %eax,(%esp)
08293c12 +0xb50:  call   082af5ca <_GLOBAL__I__ZN4CLog5this_E+0xb9f1>  ; global constructors keyed to CLog::this_+0xb9f1
08293c17 +0xb55:  mov    %esi,%eax
08293c19 +0xb57:  mov    %ebx,%edx
08293c1b +0xb59:  jmp    08293c1d <+0xb5b>
08293c1d +0xb5b:  mov    %edx,%ebx
08293c1f +0xb5d:  mov    %eax,%esi
08293c21 +0xb5f:  mov    0x8(%ebp),%eax
08293c24 +0xb62:  add    $0x16c,%eax
08293c29 +0xb67:  mov    %eax,(%esp)
08293c2c +0xb6a:  call   082af36c <_GLOBAL__I__ZN4CLog5this_E+0xb793>  ; global constructors keyed to CLog::this_+0xb793
08293c31 +0xb6f:  mov    %esi,%eax
08293c33 +0xb71:  mov    %ebx,%edx
08293c35 +0xb73:  jmp    08293c37 <+0xb75>
08293c37 +0xb75:  mov    %edx,%ebx
08293c39 +0xb77:  mov    %eax,%esi
08293c3b +0xb79:  mov    0x8(%ebp),%eax
08293c3e +0xb7c:  add    $0x13c,%eax
08293c43 +0xb81:  mov    %eax,(%esp)
08293c46 +0xb84:  call   082af106 <_GLOBAL__I__ZN4CLog5this_E+0xb52d>  ; global constructors keyed to CLog::this_+0xb52d
08293c4b +0xb89:  mov    %esi,%eax
08293c4d +0xb8b:  mov    %ebx,%edx
08293c4f +0xb8d:  jmp    08293c51 <+0xb8f>
08293c51 +0xb8f:  mov    %edx,%ebx
08293c53 +0xb91:  mov    %eax,%esi
08293c55 +0xb93:  mov    0x8(%ebp),%eax
08293c58 +0xb96:  add    $0x10c,%eax
08293c5d +0xb9b:  mov    %eax,(%esp)
08293c60 +0xb9e:  call   082aeea0 <_GLOBAL__I__ZN4CLog5this_E+0xb2c7>  ; global constructors keyed to CLog::this_+0xb2c7
08293c65 +0xba3:  mov    %esi,%eax
08293c67 +0xba5:  mov    %ebx,%edx
08293c69 +0xba7:  jmp    08293c6b <+0xba9>
08293c6b +0xba9:  mov    %edx,%ebx
08293c6d +0xbab:  mov    %eax,%esi
08293c6f +0xbad:  mov    0x8(%ebp),%eax
08293c72 +0xbb0:  add    $0xdc,%eax
08293c77 +0xbb5:  mov    %eax,(%esp)
08293c7a +0xbb8:  call   082aec36 <_GLOBAL__I__ZN4CLog5this_E+0xb05d>  ; global constructors keyed to CLog::this_+0xb05d
08293c7f +0xbbd:  mov    %esi,%eax
08293c81 +0xbbf:  mov    %ebx,%edx
08293c83 +0xbc1:  jmp    08293c85 <+0xbc3>
08293c85 +0xbc3:  mov    %edx,%ebx
08293c87 +0xbc5:  mov    %eax,%esi
08293c89 +0xbc7:  mov    0x8(%ebp),%eax
08293c8c +0xbca:  add    $0xac,%eax
08293c91 +0xbcf:  mov    %eax,(%esp)
08293c94 +0xbd2:  call   082ae9d8 <_GLOBAL__I__ZN4CLog5this_E+0xadff>  ; global constructors keyed to CLog::this_+0xadff
08293c99 +0xbd7:  mov    %esi,%eax
08293c9b +0xbd9:  mov    %ebx,%edx
08293c9d +0xbdb:  jmp    08293c9f <+0xbdd>
08293c9f +0xbdd:  mov    %edx,%ebx
08293ca1 +0xbdf:  mov    %eax,%esi
08293ca3 +0xbe1:  mov    0x8(%ebp),%eax
08293ca6 +0xbe4:  add    $0x7c,%eax
08293ca9 +0xbe7:  mov    %eax,(%esp)
08293cac +0xbea:  call   082ae79c <_GLOBAL__I__ZN4CLog5this_E+0xabc3>  ; global constructors keyed to CLog::this_+0xabc3
08293cb1 +0xbef:  mov    %esi,%eax
08293cb3 +0xbf1:  mov    %ebx,%edx
08293cb5 +0xbf3:  jmp    08293cb7 <+0xbf5>
08293cb7 +0xbf5:  mov    %edx,%ebx
08293cb9 +0xbf7:  mov    %eax,%esi
08293cbb +0xbf9:  mov    0x8(%ebp),%eax
08293cbe +0xbfc:  add    $0x4c,%eax
08293cc1 +0xbff:  mov    %eax,(%esp)
08293cc4 +0xc02:  call   082ae53e <_GLOBAL__I__ZN4CLog5this_E+0xa965>  ; global constructors keyed to CLog::this_+0xa965
08293cc9 +0xc07:  mov    %esi,%eax
08293ccb +0xc09:  mov    %ebx,%edx
08293ccd +0xc0b:  jmp    08293ccf <+0xc0d>
08293ccf +0xc0d:  mov    %edx,%ebx
08293cd1 +0xc0f:  mov    %eax,%esi
08293cd3 +0xc11:  mov    0x8(%ebp),%eax
08293cd6 +0xc14:  add    $0x34,%eax
08293cd9 +0xc17:  mov    %eax,(%esp)
08293cdc +0xc1a:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
08293ce1 +0xc1f:  mov    %esi,%eax
08293ce3 +0xc21:  mov    %ebx,%edx
08293ce5 +0xc23:  jmp    08293ce7 <+0xc25>
08293ce7 +0xc25:  mov    %edx,%ebx
08293ce9 +0xc27:  mov    %eax,%esi
08293ceb +0xc29:  mov    0x8(%ebp),%eax
08293cee +0xc2c:  add    $0x1c,%eax
08293cf1 +0xc2f:  mov    %eax,(%esp)
08293cf4 +0xc32:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
08293cf9 +0xc37:  mov    %esi,%eax
08293cfb +0xc39:  mov    %ebx,%edx
08293cfd +0xc3b:  jmp    08293cff <+0xc3d>
08293cff +0xc3d:  mov    %edx,%ebx
08293d01 +0xc3f:  mov    %eax,%esi
08293d03 +0xc41:  mov    0x8(%ebp),%eax
08293d06 +0xc44:  mov    %eax,(%esp)
08293d09 +0xc47:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08293d0e +0xc4c:  mov    %esi,%eax
08293d10 +0xc4e:  mov    %ebx,%edx
08293d12 +0xc50:  mov    %eax,(%esp)
08293d15 +0xc53:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CGameManager::CGameManager @ 0x82930c2

/* CGameManager::CGameManager() */

void __thiscall CGameManager::CGameManager(CGameManager *this)

{
  string local_ec [2];
  string local_e4 [7];
  allocator<char> local_dd;
  string local_dc [2];
  string local_d4 [7];
  allocator<char> local_cd;
  string local_cc [2];
  string local_c4 [7];
  allocator<char> local_bd;
  string local_bc [2];
  string local_b4 [7];
  allocator<char> local_ad;
  string local_ac [2];
  string local_a4 [7];
  allocator<char> local_9d;
  string local_9c [2];
  string local_94 [7];
  allocator<char> local_8d;
  string local_8c [2];
  string local_84 [7];
  allocator<char> local_7d;
  string local_7c [2];
  string local_74 [7];
  allocator<char> local_6d;
  string local_6c [2];
  string local_64 [7];
  allocator<char> local_5d;
  string local_5c [2];
  string local_54 [7];
  allocator<char> local_4d;
  string local_4c [2];
  string local_44 [7];
  allocator<char> local_3d;
  string local_3c [2];
  string local_34 [7];
  allocator<char> local_2d;
  string local_2c [2];
  string local_24 [7];
  allocator<char> local_1d;
  string local_1c [2];
  string local_14 [7];
  allocator<char> local_d;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 082930e1 to 082930e5 has its CatchHandler @ 08293cff */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x1c));
                    /* try { // try from 082930ef to 082930f3 has its CatchHandler @ 08293ce7 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x34));
                    /* try { // try from 082930fd to 08293101 has its CatchHandler @ 08293ccf */
  StaticPool<CUser,600>::StaticPool((StaticPool<CUser,600> *)(this + 0x4c));
                    /* try { // try from 0829310b to 0829310f has its CatchHandler @ 08293cb7 */
  StaticPool<CTradeSpace,300>::StaticPool((StaticPool<CTradeSpace,300> *)(this + 0x7c));
                    /* try { // try from 0829311b to 0829311f has its CatchHandler @ 08293c9f */
  StaticPool<CParty,600>::StaticPool((StaticPool<CParty,600> *)(this + 0xac));
                    /* try { // try from 0829312b to 0829312f has its CatchHandler @ 08293c85 */
  StaticPool<PvP_Room,600>::StaticPool((StaticPool<PvP_Room,600> *)(this + 0xdc));
                    /* try { // try from 0829313b to 0829313f has its CatchHandler @ 08293c6b */
  StaticPool<WarRoom,40>::StaticPool((StaticPool<WarRoom,40> *)(this + 0x10c));
                    /* try { // try from 0829314b to 0829314f has its CatchHandler @ 08293c51 */
  StaticPool<WongWork::CDeathTower,600>::StaticPool
            ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
                    /* try { // try from 0829315b to 0829315f has its CatchHandler @ 08293c37 */
  StaticPool<WongWork::CBossTower,600>::StaticPool
            ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
                    /* try { // try from 0829316b to 0829316f has its CatchHandler @ 08293c1d */
  StaticPool<advancealtar::StageControl,600>::StaticPool
            ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
                    /* try { // try from 0829317b to 0829317f has its CatchHandler @ 08293c03 */
  StaticPool<QuickParty::CQuickParty,300>::StaticPool
            ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
                    /* try { // try from 0829318b to 0829318f has its CatchHandler @ 08293be9 */
  StaticPool<BlueMarble,300>::StaticPool((StaticPool<BlueMarble,300> *)(this + 0x1fc));
                    /* try { // try from 0829319b to 0829319f has its CatchHandler @ 08293bcf */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x22c));
                    /* try { // try from 082931ab to 082931af has its CatchHandler @ 08293bb5 */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x244));
                    /* try { // try from 082931bb to 082931bf has its CatchHandler @ 08293b9b */
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
  hash_map((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
            *)(this + 0x25c));
                    /* try { // try from 082931cb to 082931cf has its CatchHandler @ 08293b81 */
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  hash_map((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> *)
           (this + 0x270));
                    /* try { // try from 082931db to 082931df has its CatchHandler @ 08293b67 */
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::hash_map((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
              *)(this + 0x284));
                    /* try { // try from 082931eb to 082931ef has its CatchHandler @ 08293b4d */
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::hash_map((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
              *)(this + 0x298));
                    /* try { // try from 082931fb to 082931ff has its CatchHandler @ 08293b33 */
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::hash_map((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
              *)(this + 0x2ac));
                    /* try { // try from 0829320b to 0829320f has its CatchHandler @ 08293b19 */
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::hash_map((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
              *)(this + 0x2c0));
                    /* try { // try from 0829321b to 0829321f has its CatchHandler @ 08293aff */
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::hash_map((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
              *)(this + 0x2d4));
                    /* try { // try from 0829322b to 0829322f has its CatchHandler @ 08293ae5 */
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  hash_map((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
            *)(this + 0x2e8));
  *(undefined2 *)(this + 0x18) = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 08293262 to 08293266 has its CatchHandler @ 082932b4 */
  std::string::string(local_e4,"testman820",(allocator *)&local_dd);
                    /* try { // try from 08293284 to 08293288 has its CatchHandler @ 0829329c */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_ec);
                    /* try { // try from 08293295 to 08293299 has its CatchHandler @ 082932b4 */
  std::string::~string(local_e4);
  std::allocator<char>::~allocator(&local_dd);
  std::allocator<char>::allocator();
                    /* try { // try from 08293306 to 0829330a has its CatchHandler @ 08293358 */
  std::string::string(local_d4,"htilil",(allocator *)&local_cd);
                    /* try { // try from 08293328 to 0829332c has its CatchHandler @ 08293340 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_dc);
                    /* try { // try from 08293339 to 0829333d has its CatchHandler @ 08293358 */
  std::string::~string(local_d4);
  std::allocator<char>::~allocator(&local_cd);
  std::allocator<char>::allocator();
                    /* try { // try from 082933aa to 082933ae has its CatchHandler @ 082933fc */
  std::string::string(local_c4,"azzuman",(allocator *)&local_bd);
                    /* try { // try from 082933cc to 082933d0 has its CatchHandler @ 082933e4 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_cc);
                    /* try { // try from 082933dd to 082933e1 has its CatchHandler @ 082933fc */
  std::string::~string(local_c4);
  std::allocator<char>::~allocator(&local_bd);
  std::allocator<char>::allocator();
                    /* try { // try from 0829344e to 08293452 has its CatchHandler @ 082934a0 */
  std::string::string(local_b4,"cuwaki",(allocator *)&local_ad);
                    /* try { // try from 08293470 to 08293474 has its CatchHandler @ 08293488 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_bc);
                    /* try { // try from 08293481 to 08293485 has its CatchHandler @ 082934a0 */
  std::string::~string(local_b4);
  std::allocator<char>::~allocator(&local_ad);
  std::allocator<char>::allocator();
                    /* try { // try from 082934f2 to 082934f6 has its CatchHandler @ 08293544 */
  std::string::string(local_a4,"slainer",(allocator *)&local_9d);
                    /* try { // try from 08293514 to 08293518 has its CatchHandler @ 0829352c */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_ac);
                    /* try { // try from 08293525 to 08293529 has its CatchHandler @ 08293544 */
  std::string::~string(local_a4);
  std::allocator<char>::~allocator(&local_9d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293596 to 0829359a has its CatchHandler @ 082935e8 */
  std::string::string(local_94,"mrsbscom",(allocator *)&local_8d);
                    /* try { // try from 082935b8 to 082935bc has its CatchHandler @ 082935d0 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_9c);
                    /* try { // try from 082935c9 to 082935cd has its CatchHandler @ 082935e8 */
  std::string::~string(local_94);
  std::allocator<char>::~allocator(&local_8d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293631 to 08293635 has its CatchHandler @ 0829367a */
  std::string::string(local_84,"arandra",(allocator *)&local_7d);
                    /* try { // try from 08293650 to 08293654 has its CatchHandler @ 08293665 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_8c);
                    /* try { // try from 0829365e to 08293662 has its CatchHandler @ 0829367a */
  std::string::~string(local_84);
  std::allocator<char>::~allocator(&local_7d);
  std::allocator<char>::allocator();
                    /* try { // try from 082936bd to 082936c1 has its CatchHandler @ 08293703 */
  std::string::string(local_74,"krucef",(allocator *)&local_6d);
                    /* try { // try from 082936d9 to 082936dd has its CatchHandler @ 082936ee */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_7c);
                    /* try { // try from 082936e7 to 082936eb has its CatchHandler @ 08293703 */
  std::string::~string(local_74);
  std::allocator<char>::~allocator(&local_6d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293746 to 0829374a has its CatchHandler @ 0829378c */
  std::string::string(local_64,"dnftest126",(allocator *)&local_5d);
                    /* try { // try from 08293762 to 08293766 has its CatchHandler @ 08293777 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_6c);
                    /* try { // try from 08293770 to 08293774 has its CatchHandler @ 0829378c */
  std::string::~string(local_64);
  std::allocator<char>::~allocator(&local_5d);
  std::allocator<char>::allocator();
                    /* try { // try from 082937cf to 082937d3 has its CatchHandler @ 08293815 */
  std::string::string(local_54,"dnftest127",(allocator *)&local_4d);
                    /* try { // try from 082937eb to 082937ef has its CatchHandler @ 08293800 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_5c);
                    /* try { // try from 082937f9 to 082937fd has its CatchHandler @ 08293815 */
  std::string::~string(local_54);
  std::allocator<char>::~allocator(&local_4d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293858 to 0829385c has its CatchHandler @ 0829389e */
  std::string::string(local_44,"dnftest128",(allocator *)&local_3d);
                    /* try { // try from 08293874 to 08293878 has its CatchHandler @ 08293889 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_4c);
                    /* try { // try from 08293882 to 08293886 has its CatchHandler @ 0829389e */
  std::string::~string(local_44);
  std::allocator<char>::~allocator(&local_3d);
  std::allocator<char>::allocator();
                    /* try { // try from 082938e1 to 082938e5 has its CatchHandler @ 08293927 */
  std::string::string(local_34,"59.10.138.244",(allocator *)&local_2d);
                    /* try { // try from 082938fd to 08293901 has its CatchHandler @ 08293912 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_3c);
                    /* try { // try from 0829390b to 0829390f has its CatchHandler @ 08293927 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator(&local_2d);
  std::allocator<char>::allocator();
                    /* try { // try from 0829396a to 0829396e has its CatchHandler @ 082939b0 */
  std::string::string(local_24,"218.145.141.85",(allocator *)&local_1d);
                    /* try { // try from 08293986 to 0829398a has its CatchHandler @ 0829399b */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_2c);
                    /* try { // try from 08293994 to 08293998 has its CatchHandler @ 082939b0 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator(&local_1d);
  std::allocator<char>::allocator();
                    /* try { // try from 082939f3 to 082939f7 has its CatchHandler @ 08293a39 */
  std::string::string(local_14,"121.134.32.42",(allocator *)&local_d);
                    /* try { // try from 08293a0f to 08293a13 has its CatchHandler @ 08293a24 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_1c);
                    /* try { // try from 08293a1d to 08293a21 has its CatchHandler @ 08293a39 */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  return;
}
```
