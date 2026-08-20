# makeGuildItemSeparateUpgradMessage

`_ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi`

`CUser::makeGuildItemSeparateUpgradMessage(char const*, int, int, bool, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867a242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867a242  _ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi
#           CUser::makeGuildItemSeparateUpgradMessage(char const*, int, int, bool, int)
# range [0x0867a242, 0x0867a95b]
0867a242 +0x000:  push   %ebp
0867a243 +0x001:  mov    %esp,%ebp
0867a245 +0x003:  push   %edi
0867a246 +0x004:  push   %esi
0867a247 +0x005:  push   %ebx
0867a248 +0x006:  sub    $0x2dc,%esp
0867a24e +0x00c:  mov    0x18(%ebp),%eax
0867a251 +0x00f:  mov    %al,-0x2bc(%ebp)
0867a257 +0x015:  lea    -0xb8(%ebp),%ebx
0867a25d +0x01b:  mov    $0x0,%eax
0867a262 +0x020:  mov    $0x1e,%edx
0867a267 +0x025:  mov    %ebx,%edi
0867a269 +0x027:  mov    %edx,%ecx
0867a26b +0x029:  rep stos %eax,%es:(%edi)
0867a26d +0x02b:  movl   $0x0,-0x28(%ebp)
0867a274 +0x032:  movl   $0x0,-0x24(%ebp)
0867a27b +0x039:  movw   $0x0,-0x20(%ebp)
0867a281 +0x03f:  movl   $0x0,0xc(%esp)
0867a289 +0x047:  movl   $"game_server_msg_247",0x8(%esp)
0867a291 +0x04f:  movl   $0x4,0x4(%esp)
0867a299 +0x057:  movl   $&g_scriptStringManager_,(%esp)
0867a2a0 +0x05e:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867a2a5 +0x063:  movl   $0xa,0x8(%esp)
0867a2ad +0x06b:  mov    %eax,0x4(%esp)
0867a2b1 +0x06f:  lea    -0x28(%ebp),%eax
0867a2b4 +0x072:  mov    %eax,(%esp)
0867a2b7 +0x075:  call   0807d8d0 <_init+0x1c8>
0867a2bc +0x07a:  cmpb   $0x0,-0x2bc(%ebp)
0867a2c3 +0x081:  je     0867a5cd <+0x38b>
0867a2c9 +0x087:  cmpl   $0x5,0x14(%ebp)
0867a2cd +0x08b:  jle    0867a5cd <+0x38b>
0867a2d3 +0x091:  movl   $0x0,0xc(%esp)
0867a2db +0x099:  movl   $"game_server_msg_248",0x8(%esp)
0867a2e3 +0x0a1:  movl   $0x4,0x4(%esp)
0867a2eb +0x0a9:  movl   $&g_scriptStringManager_,(%esp)
0867a2f2 +0x0b0:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867a2f7 +0x0b5:  movl   $0xff,0x8(%esp)
0867a2ff +0x0bd:  mov    %eax,0x4(%esp)
0867a303 +0x0c1:  lea    -0x2b7(%ebp),%eax
0867a309 +0x0c7:  mov    %eax,(%esp)
0867a30c +0x0ca:  call   0807d8d0 <_init+0x1c8>
0867a311 +0x0cf:  lea    -0x1e(%ebp),%eax
0867a314 +0x0d2:  mov    %eax,(%esp)
0867a317 +0x0d5:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a31c +0x0da:  mov    0x8(%ebp),%eax
0867a31f +0x0dd:  mov    %eax,(%esp)
0867a322 +0x0e0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867a327 +0x0e5:  lea    -0x1e(%ebp),%edx
0867a32a +0x0e8:  mov    %edx,0x8(%esp)
0867a32e +0x0ec:  mov    %eax,0x4(%esp)
0867a332 +0x0f0:  lea    -0x2c(%ebp),%eax
0867a335 +0x0f3:  mov    %eax,(%esp)
0867a338 +0x0f6:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a33d +0x0fb:  jmp    0867a35a <+0x118>
0867a33f +0x0fd:  mov    %edx,%ebx
0867a341 +0x0ff:  mov    %eax,%esi
0867a343 +0x101:  lea    -0x1e(%ebp),%eax
0867a346 +0x104:  mov    %eax,(%esp)
0867a349 +0x107:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a34e +0x10c:  mov    %esi,%eax
0867a350 +0x10e:  mov    %ebx,%edx
0867a352 +0x110:  mov    %eax,(%esp)
0867a355 +0x113:  call   08ae3750 <_Unwind_Resume>
0867a35a +0x118:  lea    -0x1e(%ebp),%eax
0867a35d +0x11b:  mov    %eax,(%esp)
0867a360 +0x11e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a365 +0x123:  lea    -0x1d(%ebp),%eax
0867a368 +0x126:  mov    %eax,(%esp)
0867a36b +0x129:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a370 +0x12e:  lea    -0x1d(%ebp),%eax
0867a373 +0x131:  mov    %eax,0x8(%esp)
0867a377 +0x135:  lea    -0x28(%ebp),%eax
0867a37a +0x138:  mov    %eax,0x4(%esp)
0867a37e +0x13c:  lea    -0x30(%ebp),%eax
0867a381 +0x13f:  mov    %eax,(%esp)
0867a384 +0x142:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a389 +0x147:  jmp    0867a3a3 <+0x161>
0867a38b +0x149:  mov    %edx,%ebx
0867a38d +0x14b:  mov    %eax,%esi
0867a38f +0x14d:  lea    -0x1d(%ebp),%eax
0867a392 +0x150:  mov    %eax,(%esp)
0867a395 +0x153:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a39a +0x158:  mov    %esi,%eax
0867a39c +0x15a:  mov    %ebx,%edx
0867a39e +0x15c:  jmp    0867a59a <+0x358>
0867a3a3 +0x161:  lea    -0x1d(%ebp),%eax
0867a3a6 +0x164:  mov    %eax,(%esp)
0867a3a9 +0x167:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a3ae +0x16c:  lea    -0x1c(%ebp),%eax
0867a3b1 +0x16f:  mov    %eax,(%esp)
0867a3b4 +0x172:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a3b9 +0x177:  lea    -0x1c(%ebp),%eax
0867a3bc +0x17a:  mov    %eax,0x8(%esp)
0867a3c0 +0x17e:  lea    -0x2b7(%ebp),%eax
0867a3c6 +0x184:  mov    %eax,0x4(%esp)
0867a3ca +0x188:  lea    -0x34(%ebp),%eax
0867a3cd +0x18b:  mov    %eax,(%esp)
0867a3d0 +0x18e:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a3d5 +0x193:  jmp    0867a3ef <+0x1ad>
0867a3d7 +0x195:  mov    %edx,%ebx
0867a3d9 +0x197:  mov    %eax,%esi
0867a3db +0x199:  lea    -0x1c(%ebp),%eax
0867a3de +0x19c:  mov    %eax,(%esp)
0867a3e1 +0x19f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a3e6 +0x1a4:  mov    %esi,%eax
0867a3e8 +0x1a6:  mov    %ebx,%edx
0867a3ea +0x1a8:  jmp    0867a568 <+0x326>
0867a3ef +0x1ad:  lea    -0x1c(%ebp),%eax
0867a3f2 +0x1b0:  mov    %eax,(%esp)
0867a3f5 +0x1b3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a3fa +0x1b8:  lea    -0x1b7(%ebp),%edx
0867a400 +0x1be:  mov    $0xff,%ebx
0867a405 +0x1c3:  mov    $0x0,%eax
0867a40a +0x1c8:  mov    %edx,%ecx
0867a40c +0x1ca:  and    $0x1,%ecx
0867a40f +0x1cd:  test   %ecx,%ecx
0867a411 +0x1cf:  je     0867a41b <+0x1d9>
0867a413 +0x1d1:  mov    %al,(%edx)
0867a415 +0x1d3:  add    $0x1,%edx
0867a418 +0x1d6:  sub    $0x1,%ebx
0867a41b +0x1d9:  mov    %edx,%ecx
0867a41d +0x1db:  and    $0x2,%ecx
0867a420 +0x1de:  test   %ecx,%ecx
0867a422 +0x1e0:  je     0867a42d <+0x1eb>
0867a424 +0x1e2:  mov    %ax,(%edx)
0867a427 +0x1e5:  add    $0x2,%edx
0867a42a +0x1e8:  sub    $0x2,%ebx
0867a42d +0x1eb:  mov    %ebx,%ecx
0867a42f +0x1ed:  shr    $0x2,%ecx
0867a432 +0x1f0:  mov    %edx,%edi
0867a434 +0x1f2:  rep stos %eax,%es:(%edi)
0867a436 +0x1f4:  mov    %edi,%edx
0867a438 +0x1f6:  mov    %ebx,%ecx
0867a43a +0x1f8:  and    $0x2,%ecx
0867a43d +0x1fb:  test   %ecx,%ecx
0867a43f +0x1fd:  je     0867a447 <+0x205>
0867a441 +0x1ff:  mov    %ax,(%edx)
0867a444 +0x202:  add    $0x2,%edx
0867a447 +0x205:  mov    %ebx,%ecx
0867a449 +0x207:  and    $0x1,%ecx
0867a44c +0x20a:  test   %ecx,%ecx
0867a44e +0x20c:  je     0867a455 <+0x213>
0867a450 +0x20e:  mov    %al,(%edx)
0867a452 +0x210:  add    $0x1,%edx
0867a455 +0x213:  cmpl   $0x0,0x1c(%ebp)
0867a459 +0x217:  je     0867a488 <+0x246>
0867a45b +0x219:  mov    0x14(%ebp),%eax
0867a45e +0x21c:  mov    %eax,0x10(%esp)
0867a462 +0x220:  mov    0xc(%ebp),%eax
0867a465 +0x223:  mov    %eax,0xc(%esp)
0867a469 +0x227:  mov    0x1c(%ebp),%eax
0867a46c +0x22a:  mov    %eax,0x8(%esp)
0867a470 +0x22e:  movl   $"+%d %s %d",0x4(%esp)
0867a478 +0x236:  lea    -0x1b7(%ebp),%eax
0867a47e +0x23c:  mov    %eax,(%esp)
0867a481 +0x23f:  call   0807e440 <_init+0xd38>
0867a486 +0x244:  jmp    0867a4ac <+0x26a>
0867a488 +0x246:  mov    0x14(%ebp),%eax
0867a48b +0x249:  mov    %eax,0xc(%esp)
0867a48f +0x24d:  mov    0xc(%ebp),%eax
0867a492 +0x250:  mov    %eax,0x8(%esp)
0867a496 +0x254:  movl   $"%s %d",0x4(%esp)
0867a49e +0x25c:  lea    -0x1b7(%ebp),%eax
0867a4a4 +0x262:  mov    %eax,(%esp)
0867a4a7 +0x265:  call   0807e440 <_init+0xd38>
0867a4ac +0x26a:  lea    -0x1b7(%ebp),%eax
0867a4b2 +0x270:  mov    %eax,0x4(%esp)
0867a4b6 +0x274:  lea    -0x30(%ebp),%eax
0867a4b9 +0x277:  mov    %eax,(%esp)
0867a4bc +0x27a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0867a4c1 +0x27f:  lea    -0x34(%ebp),%eax
0867a4c4 +0x282:  mov    %eax,0x4(%esp)
0867a4c8 +0x286:  lea    -0x30(%ebp),%eax
0867a4cb +0x289:  mov    %eax,(%esp)
0867a4ce +0x28c:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a4d3 +0x291:  lea    -0x30(%ebp),%eax
0867a4d6 +0x294:  mov    %eax,0x4(%esp)
0867a4da +0x298:  lea    -0x2c(%ebp),%eax
0867a4dd +0x29b:  mov    %eax,(%esp)
0867a4e0 +0x29e:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a4e5 +0x2a3:  lea    -0x2c(%ebp),%eax
0867a4e8 +0x2a6:  mov    %eax,(%esp)
0867a4eb +0x2a9:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a4f0 +0x2ae:  cmp    $0x77,%eax
0867a4f3 +0x2b1:  seta   %al
0867a4f6 +0x2b4:  test   %al,%al
0867a4f8 +0x2b6:  je     0867a501 <+0x2bf>
0867a4fa +0x2b8:  mov    $0x0,%ebx
0867a4ff +0x2bd:  jmp    0867a54b <+0x309>
0867a501 +0x2bf:  lea    -0x2c(%ebp),%eax
0867a504 +0x2c2:  mov    %eax,(%esp)
0867a507 +0x2c5:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a50c +0x2ca:  mov    %eax,%ebx
0867a50e +0x2cc:  lea    -0x2c(%ebp),%eax
0867a511 +0x2cf:  mov    %eax,(%esp)
0867a514 +0x2d2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0867a519 +0x2d7:  mov    %ebx,0x8(%esp)
0867a51d +0x2db:  mov    %eax,0x4(%esp)
0867a521 +0x2df:  lea    -0xb8(%ebp),%eax
0867a527 +0x2e5:  mov    %eax,(%esp)
0867a52a +0x2e8:  call   0807d8a0 <_init+0x198>
0867a52f +0x2ed:  mov    $0x1,%ebx
0867a534 +0x2f2:  jmp    0867a54b <+0x309>
0867a536 +0x2f4:  mov    %edx,%ebx
0867a538 +0x2f6:  mov    %eax,%esi
0867a53a +0x2f8:  lea    -0x34(%ebp),%eax
0867a53d +0x2fb:  mov    %eax,(%esp)
0867a540 +0x2fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a545 +0x303:  mov    %esi,%eax
0867a547 +0x305:  mov    %ebx,%edx
0867a549 +0x307:  jmp    0867a568 <+0x326>
0867a54b +0x309:  lea    -0x34(%ebp),%eax
0867a54e +0x30c:  mov    %eax,(%esp)
0867a551 +0x30f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a556 +0x314:  test   %ebx,%ebx
0867a558 +0x316:  jne    0867a561 <+0x31f>
0867a55a +0x318:  mov    $0x0,%ebx
0867a55f +0x31d:  jmp    0867a57d <+0x33b>
0867a561 +0x31f:  mov    $0x1,%ebx
0867a566 +0x324:  jmp    0867a57d <+0x33b>
0867a568 +0x326:  mov    %edx,%ebx
0867a56a +0x328:  mov    %eax,%esi
0867a56c +0x32a:  lea    -0x30(%ebp),%eax
0867a56f +0x32d:  mov    %eax,(%esp)
0867a572 +0x330:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a577 +0x335:  mov    %esi,%eax
0867a579 +0x337:  mov    %ebx,%edx
0867a57b +0x339:  jmp    0867a59a <+0x358>
0867a57d +0x33b:  lea    -0x30(%ebp),%eax
0867a580 +0x33e:  mov    %eax,(%esp)
0867a583 +0x341:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a588 +0x346:  test   %ebx,%ebx
0867a58a +0x348:  jne    0867a593 <+0x351>
0867a58c +0x34a:  mov    $0x0,%ebx
0867a591 +0x34f:  jmp    0867a5b5 <+0x373>
0867a593 +0x351:  mov    $0x1,%ebx
0867a598 +0x356:  jmp    0867a5b5 <+0x373>
0867a59a +0x358:  mov    %edx,%ebx
0867a59c +0x35a:  mov    %eax,%esi
0867a59e +0x35c:  lea    -0x2c(%ebp),%eax
0867a5a1 +0x35f:  mov    %eax,(%esp)
0867a5a4 +0x362:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a5a9 +0x367:  mov    %esi,%eax
0867a5ab +0x369:  mov    %ebx,%edx
0867a5ad +0x36b:  mov    %eax,(%esp)
0867a5b0 +0x36e:  call   08ae3750 <_Unwind_Resume>
0867a5b5 +0x373:  lea    -0x2c(%ebp),%eax
0867a5b8 +0x376:  mov    %eax,(%esp)
0867a5bb +0x379:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a5c0 +0x37e:  test   %ebx,%ebx
0867a5c2 +0x380:  je     0867a950 <+0x70e>
0867a5c8 +0x386:  jmp    0867a8e1 <+0x69f>
0867a5cd +0x38b:  movzbl -0x2bc(%ebp),%eax
0867a5d4 +0x392:  xor    $0x1,%eax
0867a5d7 +0x395:  test   %al,%al
0867a5d9 +0x397:  je     0867a94c <+0x70a>
0867a5df +0x39d:  cmpl   $0x5,0x10(%ebp)
0867a5e3 +0x3a1:  jle    0867a94f <+0x70d>
0867a5e9 +0x3a7:  movl   $0x0,0xc(%esp)
0867a5f1 +0x3af:  movl   $"game_server_msg_249",0x8(%esp)
0867a5f9 +0x3b7:  movl   $0x4,0x4(%esp)
0867a601 +0x3bf:  movl   $&g_scriptStringManager_,(%esp)
0867a608 +0x3c6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867a60d +0x3cb:  movl   $0xff,0x8(%esp)
0867a615 +0x3d3:  mov    %eax,0x4(%esp)
0867a619 +0x3d7:  lea    -0x2b7(%ebp),%eax
0867a61f +0x3dd:  mov    %eax,(%esp)
0867a622 +0x3e0:  call   0807d8d0 <_init+0x1c8>
0867a627 +0x3e5:  lea    -0x1b(%ebp),%eax
0867a62a +0x3e8:  mov    %eax,(%esp)
0867a62d +0x3eb:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a632 +0x3f0:  mov    0x8(%ebp),%eax
0867a635 +0x3f3:  mov    %eax,(%esp)
0867a638 +0x3f6:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867a63d +0x3fb:  lea    -0x1b(%ebp),%edx
0867a640 +0x3fe:  mov    %edx,0x8(%esp)
0867a644 +0x402:  mov    %eax,0x4(%esp)
0867a648 +0x406:  lea    -0x38(%ebp),%eax
0867a64b +0x409:  mov    %eax,(%esp)
0867a64e +0x40c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a653 +0x411:  jmp    0867a670 <+0x42e>
0867a655 +0x413:  mov    %edx,%ebx
0867a657 +0x415:  mov    %eax,%esi
0867a659 +0x417:  lea    -0x1b(%ebp),%eax
0867a65c +0x41a:  mov    %eax,(%esp)
0867a65f +0x41d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a664 +0x422:  mov    %esi,%eax
0867a666 +0x424:  mov    %ebx,%edx
0867a668 +0x426:  mov    %eax,(%esp)
0867a66b +0x429:  call   08ae3750 <_Unwind_Resume>
0867a670 +0x42e:  lea    -0x1b(%ebp),%eax
0867a673 +0x431:  mov    %eax,(%esp)
0867a676 +0x434:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a67b +0x439:  lea    -0x1a(%ebp),%eax
0867a67e +0x43c:  mov    %eax,(%esp)
0867a681 +0x43f:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a686 +0x444:  lea    -0x1a(%ebp),%eax
0867a689 +0x447:  mov    %eax,0x8(%esp)
0867a68d +0x44b:  lea    -0x28(%ebp),%eax
0867a690 +0x44e:  mov    %eax,0x4(%esp)
0867a694 +0x452:  lea    -0x3c(%ebp),%eax
0867a697 +0x455:  mov    %eax,(%esp)
0867a69a +0x458:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a69f +0x45d:  jmp    0867a6b9 <+0x477>
0867a6a1 +0x45f:  mov    %edx,%ebx
0867a6a3 +0x461:  mov    %eax,%esi
0867a6a5 +0x463:  lea    -0x1a(%ebp),%eax
0867a6a8 +0x466:  mov    %eax,(%esp)
0867a6ab +0x469:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a6b0 +0x46e:  mov    %esi,%eax
0867a6b2 +0x470:  mov    %ebx,%edx
0867a6b4 +0x472:  jmp    0867a8b6 <+0x674>
0867a6b9 +0x477:  lea    -0x1a(%ebp),%eax
0867a6bc +0x47a:  mov    %eax,(%esp)
0867a6bf +0x47d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a6c4 +0x482:  lea    -0x19(%ebp),%eax
0867a6c7 +0x485:  mov    %eax,(%esp)
0867a6ca +0x488:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867a6cf +0x48d:  lea    -0x19(%ebp),%eax
0867a6d2 +0x490:  mov    %eax,0x8(%esp)
0867a6d6 +0x494:  lea    -0x2b7(%ebp),%eax
0867a6dc +0x49a:  mov    %eax,0x4(%esp)
0867a6e0 +0x49e:  lea    -0x40(%ebp),%eax
0867a6e3 +0x4a1:  mov    %eax,(%esp)
0867a6e6 +0x4a4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867a6eb +0x4a9:  jmp    0867a705 <+0x4c3>
0867a6ed +0x4ab:  mov    %edx,%ebx
0867a6ef +0x4ad:  mov    %eax,%esi
0867a6f1 +0x4af:  lea    -0x19(%ebp),%eax
0867a6f4 +0x4b2:  mov    %eax,(%esp)
0867a6f7 +0x4b5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a6fc +0x4ba:  mov    %esi,%eax
0867a6fe +0x4bc:  mov    %ebx,%edx
0867a700 +0x4be:  jmp    0867a884 <+0x642>
0867a705 +0x4c3:  lea    -0x19(%ebp),%eax
0867a708 +0x4c6:  mov    %eax,(%esp)
0867a70b +0x4c9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867a710 +0x4ce:  lea    -0x1b7(%ebp),%edx
0867a716 +0x4d4:  mov    $0xff,%ebx
0867a71b +0x4d9:  mov    $0x0,%eax
0867a720 +0x4de:  mov    %edx,%ecx
0867a722 +0x4e0:  and    $0x1,%ecx
0867a725 +0x4e3:  test   %ecx,%ecx
0867a727 +0x4e5:  je     0867a731 <+0x4ef>
0867a729 +0x4e7:  mov    %al,(%edx)
0867a72b +0x4e9:  add    $0x1,%edx
0867a72e +0x4ec:  sub    $0x1,%ebx
0867a731 +0x4ef:  mov    %edx,%ecx
0867a733 +0x4f1:  and    $0x2,%ecx
0867a736 +0x4f4:  test   %ecx,%ecx
0867a738 +0x4f6:  je     0867a743 <+0x501>
0867a73a +0x4f8:  mov    %ax,(%edx)
0867a73d +0x4fb:  add    $0x2,%edx
0867a740 +0x4fe:  sub    $0x2,%ebx
0867a743 +0x501:  mov    %ebx,%ecx
0867a745 +0x503:  shr    $0x2,%ecx
0867a748 +0x506:  mov    %edx,%edi
0867a74a +0x508:  rep stos %eax,%es:(%edi)
0867a74c +0x50a:  mov    %edi,%edx
0867a74e +0x50c:  mov    %ebx,%ecx
0867a750 +0x50e:  and    $0x2,%ecx
0867a753 +0x511:  test   %ecx,%ecx
0867a755 +0x513:  je     0867a75d <+0x51b>
0867a757 +0x515:  mov    %ax,(%edx)
0867a75a +0x518:  add    $0x2,%edx
0867a75d +0x51b:  mov    %ebx,%ecx
0867a75f +0x51d:  and    $0x1,%ecx
0867a762 +0x520:  test   %ecx,%ecx
0867a764 +0x522:  je     0867a76b <+0x529>
0867a766 +0x524:  mov    %al,(%edx)
0867a768 +0x526:  add    $0x1,%edx
0867a76b +0x529:  cmpl   $0x0,0x1c(%ebp)
0867a76f +0x52d:  je     0867a7a1 <+0x55f>
0867a771 +0x52f:  mov    0x10(%ebp),%eax
0867a774 +0x532:  add    $0x1,%eax
0867a777 +0x535:  mov    %eax,0x10(%esp)
0867a77b +0x539:  mov    0xc(%ebp),%eax
0867a77e +0x53c:  mov    %eax,0xc(%esp)
0867a782 +0x540:  mov    0x1c(%ebp),%eax
0867a785 +0x543:  mov    %eax,0x8(%esp)
0867a789 +0x547:  movl   $"+%d %s %d",0x4(%esp)
0867a791 +0x54f:  lea    -0x1b7(%ebp),%eax
0867a797 +0x555:  mov    %eax,(%esp)
0867a79a +0x558:  call   0807e440 <_init+0xd38>
0867a79f +0x55d:  jmp    0867a7c8 <+0x586>
0867a7a1 +0x55f:  mov    0x10(%ebp),%eax
0867a7a4 +0x562:  add    $0x1,%eax
0867a7a7 +0x565:  mov    %eax,0xc(%esp)
0867a7ab +0x569:  mov    0xc(%ebp),%eax
0867a7ae +0x56c:  mov    %eax,0x8(%esp)
0867a7b2 +0x570:  movl   $"%s %d",0x4(%esp)
0867a7ba +0x578:  lea    -0x1b7(%ebp),%eax
0867a7c0 +0x57e:  mov    %eax,(%esp)
0867a7c3 +0x581:  call   0807e440 <_init+0xd38>
0867a7c8 +0x586:  lea    -0x1b7(%ebp),%eax
0867a7ce +0x58c:  mov    %eax,0x4(%esp)
0867a7d2 +0x590:  lea    -0x3c(%ebp),%eax
0867a7d5 +0x593:  mov    %eax,(%esp)
0867a7d8 +0x596:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0867a7dd +0x59b:  lea    -0x40(%ebp),%eax
0867a7e0 +0x59e:  mov    %eax,0x4(%esp)
0867a7e4 +0x5a2:  lea    -0x3c(%ebp),%eax
0867a7e7 +0x5a5:  mov    %eax,(%esp)
0867a7ea +0x5a8:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a7ef +0x5ad:  lea    -0x3c(%ebp),%eax
0867a7f2 +0x5b0:  mov    %eax,0x4(%esp)
0867a7f6 +0x5b4:  lea    -0x38(%ebp),%eax
0867a7f9 +0x5b7:  mov    %eax,(%esp)
0867a7fc +0x5ba:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0867a801 +0x5bf:  lea    -0x38(%ebp),%eax
0867a804 +0x5c2:  mov    %eax,(%esp)
0867a807 +0x5c5:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a80c +0x5ca:  cmp    $0x77,%eax
0867a80f +0x5cd:  seta   %al
0867a812 +0x5d0:  test   %al,%al
0867a814 +0x5d2:  je     0867a81d <+0x5db>
0867a816 +0x5d4:  mov    $0x0,%ebx
0867a81b +0x5d9:  jmp    0867a867 <+0x625>
0867a81d +0x5db:  lea    -0x38(%ebp),%eax
0867a820 +0x5de:  mov    %eax,(%esp)
0867a823 +0x5e1:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867a828 +0x5e6:  mov    %eax,%ebx
0867a82a +0x5e8:  lea    -0x38(%ebp),%eax
0867a82d +0x5eb:  mov    %eax,(%esp)
0867a830 +0x5ee:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0867a835 +0x5f3:  mov    %ebx,0x8(%esp)
0867a839 +0x5f7:  mov    %eax,0x4(%esp)
0867a83d +0x5fb:  lea    -0xb8(%ebp),%eax
0867a843 +0x601:  mov    %eax,(%esp)
0867a846 +0x604:  call   0807d8a0 <_init+0x198>
0867a84b +0x609:  mov    $0x1,%ebx
0867a850 +0x60e:  jmp    0867a867 <+0x625>
0867a852 +0x610:  mov    %edx,%ebx
0867a854 +0x612:  mov    %eax,%esi
0867a856 +0x614:  lea    -0x40(%ebp),%eax
0867a859 +0x617:  mov    %eax,(%esp)
0867a85c +0x61a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a861 +0x61f:  mov    %esi,%eax
0867a863 +0x621:  mov    %ebx,%edx
0867a865 +0x623:  jmp    0867a884 <+0x642>
0867a867 +0x625:  lea    -0x40(%ebp),%eax
0867a86a +0x628:  mov    %eax,(%esp)
0867a86d +0x62b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a872 +0x630:  test   %ebx,%ebx
0867a874 +0x632:  jne    0867a87d <+0x63b>
0867a876 +0x634:  mov    $0x0,%ebx
0867a87b +0x639:  jmp    0867a899 <+0x657>
0867a87d +0x63b:  mov    $0x1,%ebx
0867a882 +0x640:  jmp    0867a899 <+0x657>
0867a884 +0x642:  mov    %edx,%ebx
0867a886 +0x644:  mov    %eax,%esi
0867a888 +0x646:  lea    -0x3c(%ebp),%eax
0867a88b +0x649:  mov    %eax,(%esp)
0867a88e +0x64c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a893 +0x651:  mov    %esi,%eax
0867a895 +0x653:  mov    %ebx,%edx
0867a897 +0x655:  jmp    0867a8b6 <+0x674>
0867a899 +0x657:  lea    -0x3c(%ebp),%eax
0867a89c +0x65a:  mov    %eax,(%esp)
0867a89f +0x65d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a8a4 +0x662:  test   %ebx,%ebx
0867a8a6 +0x664:  jne    0867a8af <+0x66d>
0867a8a8 +0x666:  mov    $0x0,%ebx
0867a8ad +0x66b:  jmp    0867a8d1 <+0x68f>
0867a8af +0x66d:  mov    $0x1,%ebx
0867a8b4 +0x672:  jmp    0867a8d1 <+0x68f>
0867a8b6 +0x674:  mov    %edx,%ebx
0867a8b8 +0x676:  mov    %eax,%esi
0867a8ba +0x678:  lea    -0x38(%ebp),%eax
0867a8bd +0x67b:  mov    %eax,(%esp)
0867a8c0 +0x67e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a8c5 +0x683:  mov    %esi,%eax
0867a8c7 +0x685:  mov    %ebx,%edx
0867a8c9 +0x687:  mov    %eax,(%esp)
0867a8cc +0x68a:  call   08ae3750 <_Unwind_Resume>
0867a8d1 +0x68f:  lea    -0x38(%ebp),%eax
0867a8d4 +0x692:  mov    %eax,(%esp)
0867a8d7 +0x695:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867a8dc +0x69a:  test   %ebx,%ebx
0867a8de +0x69c:  je     0867a950 <+0x70e>
0867a8e0 +0x69e:  nop
0867a8e1 +0x69f:  mov    0x8(%ebp),%eax
0867a8e4 +0x6a2:  mov    %eax,(%esp)
0867a8e7 +0x6a5:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0867a8ec +0x6aa:  mov    %eax,%esi
0867a8ee +0x6ac:  mov    0x8(%ebp),%eax
0867a8f1 +0x6af:  mov    %eax,(%esp)
0867a8f4 +0x6b2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0867a8f9 +0x6b7:  mov    %eax,%ebx
0867a8fb +0x6b9:  mov    0x8(%ebp),%eax
0867a8fe +0x6bc:  mov    %eax,(%esp)
0867a901 +0x6bf:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0867a906 +0x6c4:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0867a90c +0x6ca:  mov    %eax,0x4(%esp)
0867a910 +0x6ce:  mov    %edx,(%esp)
0867a913 +0x6d1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0867a918 +0x6d6:  mov    %esi,0x18(%esp)
0867a91c +0x6da:  movl   $0xffffffff,0x14(%esp)
0867a924 +0x6e2:  movl   $0xffffffff,0x10(%esp)
0867a92c +0x6ea:  mov    %ebx,0xc(%esp)
0867a930 +0x6ee:  movl   $0x0,0x8(%esp)
0867a938 +0x6f6:  lea    -0xb8(%ebp),%edx
0867a93e +0x6fc:  mov    %edx,0x4(%esp)
0867a942 +0x700:  mov    %eax,(%esp)
0867a945 +0x703:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
0867a94a +0x708:  jmp    0867a950 <+0x70e>
0867a94c +0x70a:  nop
0867a94d +0x70b:  jmp    0867a950 <+0x70e>
0867a94f +0x70d:  nop
0867a950 +0x70e:  add    $0x2dc,%esp
0867a956 +0x714:  pop    %ebx
0867a957 +0x715:  pop    %esi
0867a958 +0x716:  pop    %edi
0867a959 +0x717:  pop    %ebp
0867a95a +0x718:  ret
0867a95b +0x719:  nop
```

## 反编译 C

```c
// CUser::makeGuildItemSeparateUpgradMessage @ 0x867a242

/* CUser::makeGuildItemSeparateUpgradMessage(char const*, int, int, bool, int) */

void __thiscall
CUser::makeGuildItemSeparateUpgradMessage
          (CUser *this,char *param_1,int param_2,int param_3,bool param_4,int param_5)

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
  char local_2bb [256];
  char local_1bb;
  char local_1ba [254];
  char local_bc [120];
  string local_44 [4];
  string local_40 [4];
  string local_3c [4];
  string local_38 [4];
  string local_34 [4];
  string local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  allocator<char> local_22;
  allocator<char> local_21;
  allocator<char> local_20;
  allocator<char> local_1f;
  allocator<char> local_1e;
  allocator<char> local_1d [13];
  
  bVar9 = 0;
  pcVar1 = local_bc;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  pcVar1 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_247",(bool *)0x0);
  strncpy((char *)&local_2c,pcVar1,10);
  if ((param_4) && (5 < param_3)) {
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_248",(bool *)0x0);
    strncpy(local_2bb,pcVar1,0xff);
    std::allocator<char>::allocator();
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
                    /* try { // try from 0867a338 to 0867a33c has its CatchHandler @ 0867a33f */
    std::string::string(local_30,pcVar1,(allocator *)&local_22);
    std::allocator<char>::~allocator(&local_22);
    std::allocator<char>::allocator();
                    /* try { // try from 0867a384 to 0867a388 has its CatchHandler @ 0867a38b */
    std::string::string(local_34,(char *)&local_2c,(allocator *)&local_21);
    std::allocator<char>::~allocator(&local_21);
    std::allocator<char>::allocator();
                    /* try { // try from 0867a3d0 to 0867a3d4 has its CatchHandler @ 0867a3d7 */
    std::string::string(local_38,local_2bb,(allocator *)&local_20);
    std::allocator<char>::~allocator(&local_20);
    pcVar1 = &local_1bb;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar1 & 1) != 0;
    if (bVar8) {
      local_1bb = '\0';
      pcVar1 = local_1ba;
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
    if (param_5 == 0) {
      sprintf(&local_1bb,"%s %d",param_1,param_3);
    }
    else {
      sprintf(&local_1bb,"+%d %s %d",param_5,param_1,param_3);
    }
                    /* try { // try from 0867a4bc to 0867a518 has its CatchHandler @ 0867a536 */
    std::string::operator+=(local_34,&local_1bb);
    std::string::operator+=(local_34,local_38);
    std::string::operator+=(local_30,local_34);
    uVar7 = std::string::length(local_30);
    bVar8 = uVar7 < 0x78;
    if (bVar8) {
      sVar2 = std::string::length(local_30);
      pvVar3 = (void *)std::string::c_str(local_30);
      memcpy(local_bc,pvVar3,sVar2);
    }
                    /* try { // try from 0867a551 to 0867a555 has its CatchHandler @ 0867a568 */
    std::string::~string(local_38);
                    /* try { // try from 0867a583 to 0867a587 has its CatchHandler @ 0867a59a */
    std::string::~string(local_34);
    std::string::~string(local_30);
  }
  else {
    if (param_4) {
      return;
    }
    if (param_2 < 6) {
      return;
    }
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_249",(bool *)0x0);
    strncpy(local_2bb,pcVar1,0xff);
    std::allocator<char>::allocator();
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
                    /* try { // try from 0867a64e to 0867a652 has its CatchHandler @ 0867a655 */
    std::string::string(local_3c,pcVar1,(allocator *)&local_1f);
    std::allocator<char>::~allocator(&local_1f);
    std::allocator<char>::allocator();
                    /* try { // try from 0867a69a to 0867a69e has its CatchHandler @ 0867a6a1 */
    std::string::string(local_40,(char *)&local_2c,(allocator *)&local_1e);
    std::allocator<char>::~allocator(&local_1e);
    std::allocator<char>::allocator();
                    /* try { // try from 0867a6e6 to 0867a6ea has its CatchHandler @ 0867a6ed */
    std::string::string(local_44,local_2bb,(allocator *)local_1d);
    std::allocator<char>::~allocator(local_1d);
    pcVar1 = &local_1bb;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar1 & 1) != 0;
    if (bVar8) {
      local_1bb = '\0';
      pcVar1 = local_1ba;
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
    if (param_5 == 0) {
      sprintf(&local_1bb,"%s %d",param_1,param_2 + 1);
    }
    else {
      sprintf(&local_1bb,"+%d %s %d",param_5,param_1,param_2 + 1);
    }
                    /* try { // try from 0867a7d8 to 0867a834 has its CatchHandler @ 0867a852 */
    std::string::operator+=(local_40,&local_1bb);
    std::string::operator+=(local_40,local_44);
    std::string::operator+=(local_3c,local_40);
    uVar7 = std::string::length(local_3c);
    bVar8 = uVar7 < 0x78;
    if (bVar8) {
      sVar2 = std::string::length(local_3c);
      pvVar3 = (void *)std::string::c_str(local_3c);
      memcpy(local_bc,pvVar3,sVar2);
    }
                    /* try { // try from 0867a86d to 0867a871 has its CatchHandler @ 0867a884 */
    std::string::~string(local_44);
                    /* try { // try from 0867a89f to 0867a8a3 has its CatchHandler @ 0867a8b6 */
    std::string::~string(local_40);
    std::string::~string(local_3c);
  }
  if (bVar8) {
    uVar7 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar4 = GetServerGroup(this);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendGuildBoardWrite(this_00,local_bc,0,uVar6,-1,-1,uVar7);
  }
  return;
}
```
