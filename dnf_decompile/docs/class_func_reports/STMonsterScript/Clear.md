# Clear

`_ZN15STMonsterScript5ClearEv`

`STMonsterScript::Clear()`

| 类 | 地址 |
|---|---|
| `STMonsterScript` | `0x08a398aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a398aa  _ZN15STMonsterScript5ClearEv
#           STMonsterScript::Clear()
# range [0x08a398aa, 0x08a3a537]
08a398aa +0x000:  push   %ebp
08a398ab +0x001:  mov    %esp,%ebp
08a398ad +0x003:  push   %ebx
08a398ae +0x004:  sub    $0x34,%esp
08a398b1 +0x007:  mov    0x8(%ebp),%eax
08a398b4 +0x00a:  movb   $0x0,0xc50(%eax)
08a398bb +0x011:  mov    0x8(%ebp),%eax
08a398be +0x014:  movb   $0x0,0x3a8(%eax)
08a398c5 +0x01b:  mov    0x8(%ebp),%eax
08a398c8 +0x01e:  add    $0x138,%eax
08a398cd +0x023:  mov    %eax,(%esp)
08a398d0 +0x026:  call   083673d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x13a0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x13a0
08a398d5 +0x02b:  mov    0x8(%ebp),%eax
08a398d8 +0x02e:  movb   $0x1,0x33c(%eax)
08a398df +0x035:  mov    0x8(%ebp),%eax
08a398e2 +0x038:  movb   $0x1,0x368(%eax)
08a398e9 +0x03f:  mov    0x8(%ebp),%eax
08a398ec +0x042:  movl   $0x0,0x36c(%eax)
08a398f6 +0x04c:  mov    0x8(%ebp),%eax
08a398f9 +0x04f:  movl   $0x0,0x370(%eax)
08a39903 +0x059:  mov    0x8(%ebp),%eax
08a39906 +0x05c:  movb   $0x0,0x374(%eax)
08a3990d +0x063:  mov    0x8(%ebp),%eax
08a39910 +0x066:  movl   $0x0,0x378(%eax)
08a3991a +0x070:  mov    0x8(%ebp),%eax
08a3991d +0x073:  movl   $0x0,0x37c(%eax)
08a39927 +0x07d:  mov    0x8(%ebp),%eax
08a3992a +0x080:  movl   $0x0,0x380(%eax)
08a39934 +0x08a:  mov    0x8(%ebp),%eax
08a39937 +0x08d:  movl   $0x0,(%eax)
08a3993d +0x093:  mov    0x8(%ebp),%eax
08a39940 +0x096:  add    $0x4,%eax
08a39943 +0x099:  movl   $"",0x4(%esp)
08a3994b +0x0a1:  mov    %eax,(%esp)
08a3994e +0x0a4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39953 +0x0a9:  mov    0x8(%ebp),%eax
08a39956 +0x0ac:  add    $0x8,%eax
08a39959 +0x0af:  movl   $"",0x4(%esp)
08a39961 +0x0b7:  mov    %eax,(%esp)
08a39964 +0x0ba:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39969 +0x0bf:  mov    0x8(%ebp),%eax
08a3996c +0x0c2:  movl   $0x28,0xc(%eax)
08a39973 +0x0c9:  mov    0x8(%ebp),%eax
08a39976 +0x0cc:  movl   $0x14,0x10(%eax)
08a3997d +0x0d3:  mov    0x8(%ebp),%eax
08a39980 +0x0d6:  movl   $0x0,0x14(%eax)
08a39987 +0x0dd:  mov    0x8(%ebp),%eax
08a3998a +0x0e0:  movl   $0x1,0x18(%eax)
08a39991 +0x0e7:  mov    0x8(%ebp),%eax
08a39994 +0x0ea:  add    $0x1c,%eax
08a39997 +0x0ed:  mov    %eax,(%esp)
08a3999a +0x0f0:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3999f +0x0f5:  movl   $0x0,-0x20(%ebp)
08a399a6 +0x0fc:  movl   $0x0,-0x20(%ebp)
08a399ad +0x103:  jmp    08a399d0 <+0x126>
08a399af +0x105:  mov    -0x20(%ebp),%edx
08a399b2 +0x108:  mov    %edx,%eax
08a399b4 +0x10a:  add    %eax,%eax
08a399b6 +0x10c:  add    %edx,%eax
08a399b8 +0x10e:  shl    $0x2,%eax
08a399bb +0x111:  add    $0x20,%eax
08a399be +0x114:  add    0x8(%ebp),%eax
08a399c1 +0x117:  add    $0x8,%eax
08a399c4 +0x11a:  mov    %eax,(%esp)
08a399c7 +0x11d:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08a399cc +0x122:  addl   $0x1,-0x20(%ebp)
08a399d0 +0x126:  cmpl   $0x3,-0x20(%ebp)
08a399d4 +0x12a:  setle  %al
08a399d7 +0x12d:  test   %al,%al
08a399d9 +0x12f:  jne    08a399af <+0x105>
08a399db +0x131:  mov    0x8(%ebp),%eax
08a399de +0x134:  add    $0x7c,%eax
08a399e1 +0x137:  mov    %eax,(%esp)
08a399e4 +0x13a:  call   08a3f270 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x2521>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x2521
08a399e9 +0x13f:  mov    0x8(%ebp),%eax
08a399ec +0x142:  movb   $0x1,0x3b8(%eax)
08a399f3 +0x149:  mov    0x8(%ebp),%eax
08a399f6 +0x14c:  movl   $0x0,0x3bc(%eax)
08a39a00 +0x156:  mov    0x8(%ebp),%eax
08a39a03 +0x159:  movl   $0x0,0x3c0(%eax)
08a39a0d +0x163:  movl   $0x0,-0x20(%ebp)
08a39a14 +0x16a:  jmp    08a39a2f <+0x185>
08a39a16 +0x16c:  mov    -0x20(%ebp),%edx
08a39a19 +0x16f:  mov    0x8(%ebp),%eax
08a39a1c +0x172:  lea    0xf0(%edx),%ecx
08a39a22 +0x178:  mov    $0x0,%edx
08a39a27 +0x17d:  mov    %edx,0x4(%eax,%ecx,4)
08a39a2b +0x181:  addl   $0x1,-0x20(%ebp)
08a39a2f +0x185:  cmpl   $0x9,-0x20(%ebp)
08a39a33 +0x189:  setle  %al
08a39a36 +0x18c:  test   %al,%al
08a39a38 +0x18e:  jne    08a39a16 <+0x16c>
08a39a3a +0x190:  movl   $0x0,-0x20(%ebp)
08a39a41 +0x197:  jmp    08a39c16 <+0x36c>
08a39a46 +0x19c:  movl   $0x0,-0x1c(%ebp)
08a39a4d +0x1a3:  movl   $0x0,-0x1c(%ebp)
08a39a54 +0x1aa:  jmp    08a39a76 <+0x1cc>
08a39a56 +0x1ac:  mov    -0x1c(%ebp),%ecx
08a39a59 +0x1af:  mov    -0x20(%ebp),%edx
08a39a5c +0x1b2:  mov    0x8(%ebp),%eax
08a39a5f +0x1b5:  add    %ecx,%ecx
08a39a61 +0x1b7:  lea    (%ecx,%edx,1),%edx
08a39a64 +0x1ba:  add    $0xfc,%edx
08a39a6a +0x1c0:  movl   $0x0,0x4(%eax,%edx,4)
08a39a72 +0x1c8:  addl   $0x1,-0x1c(%ebp)
08a39a76 +0x1cc:  cmpl   $0x3,-0x1c(%ebp)
08a39a7a +0x1d0:  setle  %al
08a39a7d +0x1d3:  test   %al,%al
08a39a7f +0x1d5:  jne    08a39a56 <+0x1ac>
08a39a81 +0x1d7:  movl   $0x0,-0x1c(%ebp)
08a39a88 +0x1de:  jmp    08a39aaa <+0x200>
08a39a8a +0x1e0:  mov    -0x1c(%ebp),%ecx
08a39a8d +0x1e3:  mov    -0x20(%ebp),%edx
08a39a90 +0x1e6:  mov    0x8(%ebp),%eax
08a39a93 +0x1e9:  add    %ecx,%ecx
08a39a95 +0x1eb:  lea    (%ecx,%edx,1),%edx
08a39a98 +0x1ee:  add    $0x104,%edx
08a39a9e +0x1f4:  movl   $0x0,0x4(%eax,%edx,4)
08a39aa6 +0x1fc:  addl   $0x1,-0x1c(%ebp)
08a39aaa +0x200:  cmpl   $0x10,-0x1c(%ebp)
08a39aae +0x204:  setle  %al
08a39ab1 +0x207:  test   %al,%al
08a39ab3 +0x209:  jne    08a39a8a <+0x1e0>
08a39ab5 +0x20b:  mov    -0x20(%ebp),%edx
08a39ab8 +0x20e:  mov    0x8(%ebp),%eax
08a39abb +0x211:  add    $0x124,%edx
08a39ac1 +0x217:  movl   $0x0,0xc(%eax,%edx,4)
08a39ac9 +0x21f:  mov    -0x20(%ebp),%edx
08a39acc +0x222:  mov    0x8(%ebp),%eax
08a39acf +0x225:  add    $0x128,%edx
08a39ad5 +0x22b:  movl   $0x0,0x4(%eax,%edx,4)
08a39add +0x233:  mov    -0x20(%ebp),%edx
08a39ae0 +0x236:  mov    0x8(%ebp),%eax
08a39ae3 +0x239:  add    $0x128,%edx
08a39ae9 +0x23f:  movl   $0x0,0xc(%eax,%edx,4)
08a39af1 +0x247:  mov    -0x20(%ebp),%edx
08a39af4 +0x24a:  mov    0x8(%ebp),%eax
08a39af7 +0x24d:  add    $0x12c,%edx
08a39afd +0x253:  movl   $0x0,0x4(%eax,%edx,4)
08a39b05 +0x25b:  mov    -0x20(%ebp),%edx
08a39b08 +0x25e:  mov    0x8(%ebp),%eax
08a39b0b +0x261:  add    $0x12c,%edx
08a39b11 +0x267:  movl   $0x0,0xc(%eax,%edx,4)
08a39b19 +0x26f:  mov    -0x20(%ebp),%edx
08a39b1c +0x272:  mov    0x8(%ebp),%eax
08a39b1f +0x275:  add    $0x130,%edx
08a39b25 +0x27b:  movl   $0x0,0x4(%eax,%edx,4)
08a39b2d +0x283:  mov    -0x20(%ebp),%edx
08a39b30 +0x286:  mov    0x8(%ebp),%eax
08a39b33 +0x289:  add    $0x130,%edx
08a39b39 +0x28f:  movl   $0x0,0xc(%eax,%edx,4)
08a39b41 +0x297:  mov    -0x20(%ebp),%edx
08a39b44 +0x29a:  mov    0x8(%ebp),%eax
08a39b47 +0x29d:  add    $0x134,%edx
08a39b4d +0x2a3:  movl   $0x64,0x4(%eax,%edx,4)
08a39b55 +0x2ab:  mov    -0x20(%ebp),%edx
08a39b58 +0x2ae:  mov    0x8(%ebp),%eax
08a39b5b +0x2b1:  add    $0x134,%edx
08a39b61 +0x2b7:  movl   $0x0,0xc(%eax,%edx,4)
08a39b69 +0x2bf:  mov    -0x20(%ebp),%edx
08a39b6c +0x2c2:  mov    0x8(%ebp),%eax
08a39b6f +0x2c5:  add    $0x138,%edx
08a39b75 +0x2cb:  movl   $0x0,0x4(%eax,%edx,4)
08a39b7d +0x2d3:  mov    -0x20(%ebp),%edx
08a39b80 +0x2d6:  mov    0x8(%ebp),%eax
08a39b83 +0x2d9:  add    $0x138,%edx
08a39b89 +0x2df:  movl   $0x0,0xc(%eax,%edx,4)
08a39b91 +0x2e7:  mov    -0x20(%ebp),%edx
08a39b94 +0x2ea:  mov    0x8(%ebp),%eax
08a39b97 +0x2ed:  add    $0x9e,%edx
08a39b9d +0x2f3:  movl   $0x0,0x4(%eax,%edx,8)
08a39ba5 +0x2fb:  mov    -0x20(%ebp),%edx
08a39ba8 +0x2fe:  mov    0x8(%ebp),%eax
08a39bab +0x301:  movl   $0x0,0x4f8(%eax,%edx,8)
08a39bb6 +0x30c:  movl   $0x0,-0x1c(%ebp)
08a39bbd +0x313:  jmp    08a39bdf <+0x335>
08a39bbf +0x315:  mov    -0x1c(%ebp),%ecx
08a39bc2 +0x318:  mov    -0x20(%ebp),%edx
08a39bc5 +0x31b:  mov    0x8(%ebp),%eax
08a39bc8 +0x31e:  add    %ecx,%ecx
08a39bca +0x320:  lea    (%ecx,%edx,1),%edx
08a39bcd +0x323:  add    $0x140,%edx
08a39bd3 +0x329:  movl   $0x0,0x8(%eax,%edx,4)
08a39bdb +0x331:  addl   $0x1,-0x1c(%ebp)
08a39bdf +0x335:  cmpl   $0x3,-0x1c(%ebp)
08a39be3 +0x339:  setle  %al
08a39be6 +0x33c:  test   %al,%al
08a39be8 +0x33e:  jne    08a39bbf <+0x315>
08a39bea +0x340:  mov    -0x20(%ebp),%edx
08a39bed +0x343:  mov    0x8(%ebp),%eax
08a39bf0 +0x346:  add    $0x148,%edx
08a39bf6 +0x34c:  movl   $0x0,0x8(%eax,%edx,4)
08a39bfe +0x354:  mov    -0x20(%ebp),%edx
08a39c01 +0x357:  mov    0x8(%ebp),%eax
08a39c04 +0x35a:  add    $0xf8,%edx
08a39c0a +0x360:  movl   $0x0,0xc(%eax,%edx,4)
08a39c12 +0x368:  addl   $0x1,-0x20(%ebp)
08a39c16 +0x36c:  cmpl   $0x1,-0x20(%ebp)
08a39c1a +0x370:  setle  %al
08a39c1d +0x373:  test   %al,%al
08a39c1f +0x375:  jne    08a39a46 <+0x19c>
08a39c25 +0x37b:  mov    0x8(%ebp),%eax
08a39c28 +0x37e:  movl   $0xc8,0x504(%eax)
08a39c32 +0x388:  mov    0x8(%ebp),%eax
08a39c35 +0x38b:  add    $0x530,%eax
08a39c3a +0x390:  movl   $"",0x4(%esp)
08a39c42 +0x398:  mov    %eax,(%esp)
08a39c45 +0x39b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39c4a +0x3a0:  mov    0x8(%ebp),%eax
08a39c4d +0x3a3:  add    $0x534,%eax
08a39c52 +0x3a8:  movl   $"",0x4(%esp)
08a39c5a +0x3b0:  mov    %eax,(%esp)
08a39c5d +0x3b3:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39c62 +0x3b8:  mov    0x8(%ebp),%eax
08a39c65 +0x3bb:  movl   $0x64,0x538(%eax)
08a39c6f +0x3c5:  mov    0x8(%ebp),%eax
08a39c72 +0x3c8:  movl   $0xc8,0x53c(%eax)
08a39c7c +0x3d2:  mov    0x8(%ebp),%eax
08a39c7f +0x3d5:  mov    $0xbf800000,%edx
08a39c84 +0x3da:  mov    %edx,0x540(%eax)
08a39c8a +0x3e0:  mov    0x8(%ebp),%eax
08a39c8d +0x3e3:  mov    $0xbf800000,%edx
08a39c92 +0x3e8:  mov    %edx,0x544(%eax)
08a39c98 +0x3ee:  mov    0x8(%ebp),%eax
08a39c9b +0x3f1:  movb   $0x0,0x548(%eax)
08a39ca2 +0x3f8:  mov    0x8(%ebp),%eax
08a39ca5 +0x3fb:  mov    $0x41a00000,%edx
08a39caa +0x400:  mov    %edx,0x54c(%eax)
08a39cb0 +0x406:  mov    0x8(%ebp),%eax
08a39cb3 +0x409:  mov    $0xc3960000,%edx
08a39cb8 +0x40e:  mov    %edx,0x550(%eax)
08a39cbe +0x414:  mov    0x8(%ebp),%eax
08a39cc1 +0x417:  add    $0x554,%eax
08a39cc6 +0x41c:  mov    %eax,(%esp)
08a39cc9 +0x41f:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a39cce +0x424:  mov    0x8(%ebp),%eax
08a39cd1 +0x427:  add    $0x560,%eax
08a39cd6 +0x42c:  mov    %eax,(%esp)
08a39cd9 +0x42f:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a39cde +0x434:  mov    0x8(%ebp),%eax
08a39ce1 +0x437:  movb   $0x0,0x56c(%eax)
08a39ce8 +0x43e:  mov    0x8(%ebp),%eax
08a39ceb +0x441:  movl   $0x3e8,0x574(%eax)
08a39cf5 +0x44b:  mov    0x8(%ebp),%eax
08a39cf8 +0x44e:  movb   $0x0,0x580(%eax)
08a39cff +0x455:  mov    0x8(%ebp),%eax
08a39d02 +0x458:  movb   $0x0,0x581(%eax)
08a39d09 +0x45f:  mov    0x8(%ebp),%eax
08a39d0c +0x462:  movl   $0x0,0x584(%eax)
08a39d16 +0x46c:  mov    0x8(%ebp),%eax
08a39d19 +0x46f:  movl   $0x0,0x588(%eax)
08a39d23 +0x479:  mov    0x8(%ebp),%eax
08a39d26 +0x47c:  movl   $0x0,0x58c(%eax)
08a39d30 +0x486:  mov    0x8(%ebp),%eax
08a39d33 +0x489:  movb   $0x0,0x590(%eax)
08a39d3a +0x490:  mov    0x8(%ebp),%eax
08a39d3d +0x493:  movb   $0x0,0x591(%eax)
08a39d44 +0x49a:  mov    0x8(%ebp),%eax
08a39d47 +0x49d:  movb   $0x0,0x592(%eax)
08a39d4e +0x4a4:  mov    0x8(%ebp),%eax
08a39d51 +0x4a7:  movl   $0x0,0x594(%eax)
08a39d5b +0x4b1:  mov    0x8(%ebp),%eax
08a39d5e +0x4b4:  movl   $0x0,0x598(%eax)
08a39d68 +0x4be:  mov    0x8(%ebp),%eax
08a39d6b +0x4c1:  movl   $0x0,0x59c(%eax)
08a39d75 +0x4cb:  mov    0x8(%ebp),%eax
08a39d78 +0x4ce:  movl   $0x0,0x5a0(%eax)
08a39d82 +0x4d8:  mov    0x8(%ebp),%eax
08a39d85 +0x4db:  movb   $0x0,0x5a4(%eax)
08a39d8c +0x4e2:  mov    0x8(%ebp),%eax
08a39d8f +0x4e5:  movl   $0x32,0x578(%eax)
08a39d99 +0x4ef:  mov    0x8(%ebp),%eax
08a39d9c +0x4f2:  movl   $0x3e8,0x57c(%eax)
08a39da6 +0x4fc:  mov    0x8(%ebp),%eax
08a39da9 +0x4ff:  movb   $0x0,0x5a5(%eax)
08a39db0 +0x506:  mov    0x8(%ebp),%eax
08a39db3 +0x509:  movl   $0x0,0x5a8(%eax)
08a39dbd +0x513:  mov    0x8(%ebp),%eax
08a39dc0 +0x516:  add    $0x5ac,%eax
08a39dc5 +0x51b:  movl   $"",0x4(%esp)
08a39dcd +0x523:  mov    %eax,(%esp)
08a39dd0 +0x526:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39dd5 +0x52b:  mov    0x8(%ebp),%eax
08a39dd8 +0x52e:  movl   $0x0,0x5b0(%eax)
08a39de2 +0x538:  mov    0x8(%ebp),%eax
08a39de5 +0x53b:  add    $0x5b4,%eax
08a39dea +0x540:  movl   $"",0x4(%esp)
08a39df2 +0x548:  mov    %eax,(%esp)
08a39df5 +0x54b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39dfa +0x550:  mov    0x8(%ebp),%eax
08a39dfd +0x553:  add    $0x5b8,%eax
08a39e02 +0x558:  movl   $"",0x4(%esp)
08a39e0a +0x560:  mov    %eax,(%esp)
08a39e0d +0x563:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39e12 +0x568:  mov    0x8(%ebp),%eax
08a39e15 +0x56b:  add    $0x5c8,%eax
08a39e1a +0x570:  movl   $"",0x4(%esp)
08a39e22 +0x578:  mov    %eax,(%esp)
08a39e25 +0x57b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39e2a +0x580:  movl   $0x0,-0x20(%ebp)
08a39e31 +0x587:  jmp    08a39e58 <+0x5ae>
08a39e33 +0x589:  mov    -0x20(%ebp),%eax
08a39e36 +0x58c:  add    $0x170,%eax
08a39e3b +0x591:  shl    $0x2,%eax
08a39e3e +0x594:  add    0x8(%ebp),%eax
08a39e41 +0x597:  add    $0xc,%eax
08a39e44 +0x59a:  movl   $"",0x4(%esp)
08a39e4c +0x5a2:  mov    %eax,(%esp)
08a39e4f +0x5a5:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39e54 +0x5aa:  addl   $0x1,-0x20(%ebp)
08a39e58 +0x5ae:  cmpl   $0x1,-0x20(%ebp)
08a39e5c +0x5b2:  setle  %al
08a39e5f +0x5b5:  test   %al,%al
08a39e61 +0x5b7:  jne    08a39e33 <+0x589>
08a39e63 +0x5b9:  mov    0x8(%ebp),%eax
08a39e66 +0x5bc:  add    $0x5d4,%eax
08a39e6b +0x5c1:  movl   $"",0x4(%esp)
08a39e73 +0x5c9:  mov    %eax,(%esp)
08a39e76 +0x5cc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39e7b +0x5d1:  mov    0x8(%ebp),%eax
08a39e7e +0x5d4:  add    $0x5d8,%eax
08a39e83 +0x5d9:  movl   $"",0x4(%esp)
08a39e8b +0x5e1:  mov    %eax,(%esp)
08a39e8e +0x5e4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39e93 +0x5e9:  mov    0x8(%ebp),%eax
08a39e96 +0x5ec:  add    $0x5dc,%eax
08a39e9b +0x5f1:  movl   $"",0x4(%esp)
08a39ea3 +0x5f9:  mov    %eax,(%esp)
08a39ea6 +0x5fc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39eab +0x601:  mov    0x8(%ebp),%eax
08a39eae +0x604:  add    $0x5e0,%eax
08a39eb3 +0x609:  movl   $"",0x4(%esp)
08a39ebb +0x611:  mov    %eax,(%esp)
08a39ebe +0x614:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39ec3 +0x619:  mov    0x8(%ebp),%eax
08a39ec6 +0x61c:  add    $0x5e4,%eax
08a39ecb +0x621:  mov    %eax,(%esp)
08a39ece +0x624:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a39ed3 +0x629:  mov    0x8(%ebp),%eax
08a39ed6 +0x62c:  add    $0x5f0,%eax
08a39edb +0x631:  mov    %eax,(%esp)
08a39ede +0x634:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a39ee3 +0x639:  mov    0x8(%ebp),%eax
08a39ee6 +0x63c:  add    $0x6b4,%eax
08a39eeb +0x641:  movl   $"",0x4(%esp)
08a39ef3 +0x649:  mov    %eax,(%esp)
08a39ef6 +0x64c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39efb +0x651:  mov    0x8(%ebp),%eax
08a39efe +0x654:  add    $0x6b8,%eax
08a39f03 +0x659:  mov    %eax,(%esp)
08a39f06 +0x65c:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a39f0b +0x661:  mov    0x8(%ebp),%eax
08a39f0e +0x664:  add    $0x6c4,%eax
08a39f13 +0x669:  mov    %eax,(%esp)
08a39f16 +0x66c:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a39f1b +0x671:  mov    0x8(%ebp),%eax
08a39f1e +0x674:  add    $0x6d4,%eax
08a39f23 +0x679:  mov    %eax,(%esp)
08a39f26 +0x67c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a39f2b +0x681:  mov    0x8(%ebp),%eax
08a39f2e +0x684:  movl   $0xffffffff,0x6e0(%eax)
08a39f38 +0x68e:  mov    0x8(%ebp),%eax
08a39f3b +0x691:  movb   $0x0,0x6e4(%eax)
08a39f42 +0x698:  mov    0x8(%ebp),%eax
08a39f45 +0x69b:  add    $0x6e8,%eax
08a39f4a +0x6a0:  mov    %eax,(%esp)
08a39f4d +0x6a3:  call   08a3f300 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x25b1>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x25b1
08a39f52 +0x6a8:  mov    0x8(%ebp),%eax
08a39f55 +0x6ab:  add    $0x5fc,%eax
08a39f5a +0x6b0:  movl   $"",0x4(%esp)
08a39f62 +0x6b8:  mov    %eax,(%esp)
08a39f65 +0x6bb:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39f6a +0x6c0:  mov    0x8(%ebp),%eax
08a39f6d +0x6c3:  add    $0x600,%eax
08a39f72 +0x6c8:  movl   $"",0x4(%esp)
08a39f7a +0x6d0:  mov    %eax,(%esp)
08a39f7d +0x6d3:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39f82 +0x6d8:  mov    0x8(%ebp),%eax
08a39f85 +0x6db:  add    $0x604,%eax
08a39f8a +0x6e0:  movl   $"",0x4(%esp)
08a39f92 +0x6e8:  mov    %eax,(%esp)
08a39f95 +0x6eb:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39f9a +0x6f0:  mov    0x8(%ebp),%eax
08a39f9d +0x6f3:  add    $0x608,%eax
08a39fa2 +0x6f8:  movl   $"",0x4(%esp)
08a39faa +0x700:  mov    %eax,(%esp)
08a39fad +0x703:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39fb2 +0x708:  mov    0x8(%ebp),%eax
08a39fb5 +0x70b:  add    $0x60c,%eax
08a39fba +0x710:  movl   $"",0x4(%esp)
08a39fc2 +0x718:  mov    %eax,(%esp)
08a39fc5 +0x71b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39fca +0x720:  mov    0x8(%ebp),%eax
08a39fcd +0x723:  add    $0x610,%eax
08a39fd2 +0x728:  movl   $"",0x4(%esp)
08a39fda +0x730:  mov    %eax,(%esp)
08a39fdd +0x733:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a39fe2 +0x738:  movl   $0x0,-0x20(%ebp)
08a39fe9 +0x73f:  jmp    08a3a010 <+0x766>
08a39feb +0x741:  mov    -0x20(%ebp),%eax
08a39fee +0x744:  add    $0x184,%eax
08a39ff3 +0x749:  shl    $0x2,%eax
08a39ff6 +0x74c:  add    0x8(%ebp),%eax
08a39ff9 +0x74f:  add    $0x4,%eax
08a39ffc +0x752:  movl   $"",0x4(%esp)
08a3a004 +0x75a:  mov    %eax,(%esp)
08a3a007 +0x75d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a00c +0x762:  addl   $0x1,-0x20(%ebp)
08a3a010 +0x766:  cmpl   $0x1,-0x20(%ebp)
08a3a014 +0x76a:  setle  %al
08a3a017 +0x76d:  test   %al,%al
08a3a019 +0x76f:  jne    08a39feb <+0x741>
08a3a01b +0x771:  mov    0x8(%ebp),%eax
08a3a01e +0x774:  add    $0x61c,%eax
08a3a023 +0x779:  movl   $"",0x4(%esp)
08a3a02b +0x781:  mov    %eax,(%esp)
08a3a02e +0x784:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a033 +0x789:  mov    0x8(%ebp),%eax
08a3a036 +0x78c:  add    $0x620,%eax
08a3a03b +0x791:  movl   $"",0x4(%esp)
08a3a043 +0x799:  mov    %eax,(%esp)
08a3a046 +0x79c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a04b +0x7a1:  mov    0x8(%ebp),%eax
08a3a04e +0x7a4:  add    $0x624,%eax
08a3a053 +0x7a9:  movl   $"",0x4(%esp)
08a3a05b +0x7b1:  mov    %eax,(%esp)
08a3a05e +0x7b4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a063 +0x7b9:  mov    0x8(%ebp),%eax
08a3a066 +0x7bc:  add    $0x628,%eax
08a3a06b +0x7c1:  movl   $"",0x4(%esp)
08a3a073 +0x7c9:  mov    %eax,(%esp)
08a3a076 +0x7cc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a07b +0x7d1:  mov    0x8(%ebp),%eax
08a3a07e +0x7d4:  add    $0x62c,%eax
08a3a083 +0x7d9:  mov    %eax,(%esp)
08a3a086 +0x7dc:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3a08b +0x7e1:  mov    0x8(%ebp),%eax
08a3a08e +0x7e4:  add    $0x638,%eax
08a3a093 +0x7e9:  mov    %eax,(%esp)
08a3a096 +0x7ec:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3a09b +0x7f1:  mov    0x8(%ebp),%eax
08a3a09e +0x7f4:  add    $0x644,%eax
08a3a0a3 +0x7f9:  movl   $"",0x4(%esp)
08a3a0ab +0x801:  mov    %eax,(%esp)
08a3a0ae +0x804:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a0b3 +0x809:  mov    0x8(%ebp),%eax
08a3a0b6 +0x80c:  add    $0x648,%eax
08a3a0bb +0x811:  movl   $"",0x4(%esp)
08a3a0c3 +0x819:  mov    %eax,(%esp)
08a3a0c6 +0x81c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a0cb +0x821:  mov    0x8(%ebp),%eax
08a3a0ce +0x824:  add    $0x688,%eax
08a3a0d3 +0x829:  mov    %eax,(%esp)
08a3a0d6 +0x82c:  call   08382838 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x122d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x122d8
08a3a0db +0x831:  mov    0x8(%ebp),%eax
08a3a0de +0x834:  add    $0x694,%eax
08a3a0e3 +0x839:  movl   $"",0x4(%esp)
08a3a0eb +0x841:  mov    %eax,(%esp)
08a3a0ee +0x844:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a0f3 +0x849:  mov    0x8(%ebp),%eax
08a3a0f6 +0x84c:  add    $0x698,%eax
08a3a0fb +0x851:  movl   $"",0x4(%esp)
08a3a103 +0x859:  mov    %eax,(%esp)
08a3a106 +0x85c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a10b +0x861:  mov    0x8(%ebp),%eax
08a3a10e +0x864:  add    $0x69c,%eax
08a3a113 +0x869:  movl   $"",0x4(%esp)
08a3a11b +0x871:  mov    %eax,(%esp)
08a3a11e +0x874:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a123 +0x879:  mov    0x8(%ebp),%eax
08a3a126 +0x87c:  add    $0x6a0,%eax
08a3a12b +0x881:  movl   $"",0x4(%esp)
08a3a133 +0x889:  mov    %eax,(%esp)
08a3a136 +0x88c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a13b +0x891:  mov    0x8(%ebp),%eax
08a3a13e +0x894:  add    $0x6a4,%eax
08a3a143 +0x899:  movl   $"",0x4(%esp)
08a3a14b +0x8a1:  mov    %eax,(%esp)
08a3a14e +0x8a4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a153 +0x8a9:  mov    0x8(%ebp),%eax
08a3a156 +0x8ac:  add    $0x6a8,%eax
08a3a15b +0x8b1:  movl   $"",0x4(%esp)
08a3a163 +0x8b9:  mov    %eax,(%esp)
08a3a166 +0x8bc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a16b +0x8c1:  mov    0x8(%ebp),%eax
08a3a16e +0x8c4:  add    $0x6ac,%eax
08a3a173 +0x8c9:  movl   $"",0x4(%esp)
08a3a17b +0x8d1:  mov    %eax,(%esp)
08a3a17e +0x8d4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a183 +0x8d9:  mov    0x8(%ebp),%eax
08a3a186 +0x8dc:  add    $0x6b0,%eax
08a3a18b +0x8e1:  movl   $"",0x4(%esp)
08a3a193 +0x8e9:  mov    %eax,(%esp)
08a3a196 +0x8ec:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a19b +0x8f1:  mov    0x8(%ebp),%eax
08a3a19e +0x8f4:  movl   $0x0,0x6f4(%eax)
08a3a1a8 +0x8fe:  mov    0x8(%ebp),%eax
08a3a1ab +0x901:  movl   $0x0,0x6f8(%eax)
08a3a1b5 +0x90b:  mov    0x8(%ebp),%eax
08a3a1b8 +0x90e:  movl   $0xffffffff,0x6fc(%eax)
08a3a1c2 +0x918:  mov    0x8(%ebp),%eax
08a3a1c5 +0x91b:  movl   $0x0,0x700(%eax)
08a3a1cf +0x925:  mov    0x8(%ebp),%eax
08a3a1d2 +0x928:  movl   $0x0,0x704(%eax)
08a3a1dc +0x932:  mov    0x8(%ebp),%eax
08a3a1df +0x935:  add    $0x708,%eax
08a3a1e4 +0x93a:  movl   $"",0x4(%esp)
08a3a1ec +0x942:  mov    %eax,(%esp)
08a3a1ef +0x945:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a1f4 +0x94a:  movl   $0x0,-0x18(%ebp)
08a3a1fb +0x951:  jmp    08a3a220 <+0x976>
08a3a1fd +0x953:  mov    -0x18(%ebp),%edx
08a3a200 +0x956:  mov    %edx,%eax
08a3a202 +0x958:  add    %eax,%eax
08a3a204 +0x95a:  add    %edx,%eax
08a3a206 +0x95c:  shl    $0x2,%eax
08a3a209 +0x95f:  add    $0x700,%eax
08a3a20e +0x964:  add    0x8(%ebp),%eax
08a3a211 +0x967:  add    $0xc,%eax
08a3a214 +0x96a:  mov    %eax,(%esp)
08a3a217 +0x96d:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3a21c +0x972:  addl   $0x1,-0x18(%ebp)
08a3a220 +0x976:  cmpl   $0x6e,-0x18(%ebp)
08a3a224 +0x97a:  setle  %al
08a3a227 +0x97d:  test   %al,%al
08a3a229 +0x97f:  jne    08a3a1fd <+0x953>
08a3a22b +0x981:  mov    0x8(%ebp),%eax
08a3a22e +0x984:  add    $0xc40,%eax
08a3a233 +0x989:  mov    %eax,(%esp)
08a3a236 +0x98c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3a23b +0x991:  mov    0x8(%ebp),%eax
08a3a23e +0x994:  movl   $0x0,0xc4c(%eax)
08a3a248 +0x99e:  mov    0x8(%ebp),%eax
08a3a24b +0x9a1:  movl   $0x0,0x88(%eax)
08a3a255 +0x9ab:  mov    0x8(%ebp),%eax
08a3a258 +0x9ae:  add    $0x8c,%eax
08a3a25d +0x9b3:  mov    %eax,(%esp)
08a3a260 +0x9b6:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08a3a265 +0x9bb:  mov    0x8(%ebp),%eax
08a3a268 +0x9be:  mov    $0x0,%edx
08a3a26d +0x9c3:  mov    %edx,0xc54(%eax)
08a3a273 +0x9c9:  mov    0x8(%ebp),%eax
08a3a276 +0x9cc:  mov    $0x0,%edx
08a3a27b +0x9d1:  mov    %edx,0xc58(%eax)
08a3a281 +0x9d7:  mov    0x8(%ebp),%eax
08a3a284 +0x9da:  add    $0x58,%eax
08a3a287 +0x9dd:  mov    %eax,(%esp)
08a3a28a +0x9e0:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08a3a28f +0x9e5:  movl   $0x0,-0x14(%ebp)
08a3a296 +0x9ec:  jmp    08a3a2b0 <+0xa06>
08a3a298 +0x9ee:  mov    -0x14(%ebp),%edx
08a3a29b +0x9f1:  mov    0x8(%ebp),%eax
08a3a29e +0x9f4:  add    $0x314,%edx
08a3a2a4 +0x9fa:  movl   $0x0,0xc(%eax,%edx,4)
08a3a2ac +0xa02:  addl   $0x1,-0x14(%ebp)
08a3a2b0 +0xa06:  cmpl   $0x4,-0x14(%ebp)
08a3a2b4 +0xa0a:  setle  %al
08a3a2b7 +0xa0d:  test   %al,%al
08a3a2b9 +0xa0f:  jne    08a3a298 <+0x9ee>
08a3a2bb +0xa11:  mov    0x8(%ebp),%eax
08a3a2be +0xa14:  add    $0x3ac,%eax
08a3a2c3 +0xa19:  mov    %eax,(%esp)
08a3a2c6 +0xa1c:  call   088cc82a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x73b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x73b
08a3a2cb +0xa21:  mov    0x8(%ebp),%eax
08a3a2ce +0xa24:  movb   $0x0,0xc70(%eax)
08a3a2d5 +0xa2b:  mov    0x8(%ebp),%eax
08a3a2d8 +0xa2e:  movb   $0x0,0xc71(%eax)
08a3a2df +0xa35:  mov    0x8(%ebp),%eax
08a3a2e2 +0xa38:  movl   $0x0,0xc74(%eax)
08a3a2ec +0xa42:  mov    0x8(%ebp),%eax
08a3a2ef +0xa45:  movl   $0x0,0xc78(%eax)
08a3a2f9 +0xa4f:  mov    0x8(%ebp),%eax
08a3a2fc +0xa52:  movl   $0x0,0xc7c(%eax)
08a3a306 +0xa5c:  mov    0x8(%ebp),%eax
08a3a309 +0xa5f:  add    $0xc80,%eax
08a3a30e +0xa64:  mov    %eax,(%esp)
08a3a311 +0xa67:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3a316 +0xa6c:  mov    0x8(%ebp),%eax
08a3a319 +0xa6f:  add    $0xc8c,%eax
08a3a31e +0xa74:  mov    %eax,(%esp)
08a3a321 +0xa77:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3a326 +0xa7c:  mov    0x8(%ebp),%eax
08a3a329 +0xa7f:  add    $0xc98,%eax
08a3a32e +0xa84:  mov    %eax,(%esp)
08a3a331 +0xa87:  call   088cc10c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x1d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x1d
08a3a336 +0xa8c:  mov    0x8(%ebp),%eax
08a3a339 +0xa8f:  movb   $0x0,0xcd4(%eax)
08a3a340 +0xa96:  mov    0x8(%ebp),%eax
08a3a343 +0xa99:  movl   $0x3,0x1c9c(%eax)
08a3a34d +0xaa3:  mov    0x8(%ebp),%eax
08a3a350 +0xaa6:  movl   $0x0,0x1ca0(%eax)
08a3a35a +0xab0:  mov    0x8(%ebp),%eax
08a3a35d +0xab3:  mov    $0x0,%edx
08a3a362 +0xab8:  mov    %edx,0x1ca4(%eax)
08a3a368 +0xabe:  movl   $0x0,-0x10(%ebp)
08a3a36f +0xac5:  jmp    08a3a3ae <+0xb04>
08a3a371 +0xac7:  movl   $0x0,-0xc(%ebp)
08a3a378 +0xace:  jmp    08a3a39f <+0xaf5>
08a3a37a +0xad0:  mov    -0x10(%ebp),%edx
08a3a37d +0xad3:  mov    -0xc(%ebp),%ebx
08a3a380 +0xad6:  mov    0x8(%ebp),%ecx
08a3a383 +0xad9:  mov    %edx,%eax
08a3a385 +0xadb:  shl    $0x2,%eax
08a3a388 +0xade:  add    %edx,%eax
08a3a38a +0xae0:  add    %ebx,%eax
08a3a38c +0xae2:  lea    0x33c(%eax),%edx
08a3a392 +0xae8:  mov    $0xbf800000,%eax
08a3a397 +0xaed:  mov    %eax,0x4(%ecx,%edx,4)
08a3a39b +0xaf1:  addl   $0x1,-0xc(%ebp)
08a3a39f +0xaf5:  cmpl   $0x4,-0xc(%ebp)
08a3a3a3 +0xaf9:  setle  %al
08a3a3a6 +0xafc:  test   %al,%al
08a3a3a8 +0xafe:  jne    08a3a37a <+0xad0>
08a3a3aa +0xb00:  addl   $0x1,-0x10(%ebp)
08a3a3ae +0xb04:  cmpl   $0xc7,-0x10(%ebp)
08a3a3b5 +0xb0b:  setle  %al
08a3a3b8 +0xb0e:  test   %al,%al
08a3a3ba +0xb10:  jne    08a3a371 <+0xac7>
08a3a3bc +0xb12:  mov    0x8(%ebp),%eax
08a3a3bf +0xb15:  movl   $0x0,0x1c94(%eax)
08a3a3c9 +0xb1f:  mov    0x8(%ebp),%eax
08a3a3cc +0xb22:  movl   $0x0,0x1c98(%eax)
08a3a3d6 +0xb2c:  mov    0x8(%ebp),%eax
08a3a3d9 +0xb2f:  movb   $0x0,0x1ca8(%eax)
08a3a3e0 +0xb36:  mov    0x8(%ebp),%eax
08a3a3e3 +0xb39:  add    $0x70,%eax
08a3a3e6 +0xb3c:  mov    %eax,(%esp)
08a3a3e9 +0xb3f:  call   08a41090 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4341>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4341
08a3a3ee +0xb44:  mov    0x8(%ebp),%eax
08a3a3f1 +0xb47:  movl   $0xffffffff,0x1cac(%eax)
08a3a3fb +0xb51:  mov    0x8(%ebp),%eax
08a3a3fe +0xb54:  movl   $0xffffffff,0x1cb0(%eax)
08a3a408 +0xb5e:  mov    0x8(%ebp),%eax
08a3a40b +0xb61:  add    $0x1cb4,%eax
08a3a410 +0xb66:  mov    %eax,(%esp)
08a3a413 +0xb69:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3a418 +0xb6e:  mov    0x8(%ebp),%eax
08a3a41b +0xb71:  add    $0x64c,%eax
08a3a420 +0xb76:  movl   $"",0x4(%esp)
08a3a428 +0xb7e:  mov    %eax,(%esp)
08a3a42b +0xb81:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a430 +0xb86:  mov    0x8(%ebp),%eax
08a3a433 +0xb89:  add    $0x650,%eax
08a3a438 +0xb8e:  movl   $"",0x4(%esp)
08a3a440 +0xb96:  mov    %eax,(%esp)
08a3a443 +0xb99:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a448 +0xb9e:  mov    0x8(%ebp),%eax
08a3a44b +0xba1:  add    $0x654,%eax
08a3a450 +0xba6:  movl   $"",0x4(%esp)
08a3a458 +0xbae:  mov    %eax,(%esp)
08a3a45b +0xbb1:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3a460 +0xbb6:  mov    0x8(%ebp),%eax
08a3a463 +0xbb9:  movl   $0xffffffff,0x658(%eax)
08a3a46d +0xbc3:  mov    0x8(%ebp),%eax
08a3a470 +0xbc6:  movl   $0x0,0x65c(%eax)
08a3a47a +0xbd0:  mov    0x8(%ebp),%eax
08a3a47d +0xbd3:  movl   $0x0,0x660(%eax)
08a3a487 +0xbdd:  mov    0x8(%ebp),%eax
08a3a48a +0xbe0:  movl   $0x0,0x664(%eax)
08a3a494 +0xbea:  mov    0x8(%ebp),%eax
08a3a497 +0xbed:  movl   $0x0,0x668(%eax)
08a3a4a1 +0xbf7:  mov    0x8(%ebp),%eax
08a3a4a4 +0xbfa:  mov    $0x0,%edx
08a3a4a9 +0xbff:  mov    %edx,0x66c(%eax)
08a3a4af +0xc05:  mov    0x8(%ebp),%eax
08a3a4b2 +0xc08:  mov    $0x0,%edx
08a3a4b7 +0xc0d:  mov    %edx,0x670(%eax)
08a3a4bd +0xc13:  mov    0x8(%ebp),%eax
08a3a4c0 +0xc16:  movb   $0x0,0x674(%eax)
08a3a4c7 +0xc1d:  mov    0x8(%ebp),%eax
08a3a4ca +0xc20:  movl   $0xff,0x678(%eax)
08a3a4d4 +0xc2a:  mov    0x8(%ebp),%eax
08a3a4d7 +0xc2d:  movl   $0xff,0x67c(%eax)
08a3a4e1 +0xc37:  mov    0x8(%ebp),%eax
08a3a4e4 +0xc3a:  movb   $0x0,0x680(%eax)
08a3a4eb +0xc41:  mov    0x8(%ebp),%eax
08a3a4ee +0xc44:  movl   $0x4,0x684(%eax)
08a3a4f8 +0xc4e:  mov    0x8(%ebp),%eax
08a3a4fb +0xc51:  movl   $0x4,0xcd8(%eax)
08a3a505 +0xc5b:  mov    0x8(%ebp),%eax
08a3a508 +0xc5e:  add    $0x120,%eax
08a3a50d +0xc63:  mov    %eax,(%esp)
08a3a510 +0xc66:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3a515 +0xc6b:  mov    0x8(%ebp),%eax
08a3a518 +0xc6e:  add    $0x12c,%eax
08a3a51d +0xc73:  mov    %eax,(%esp)
08a3a520 +0xc76:  call   08a3fd28 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x2fd9>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x2fd9
08a3a525 +0xc7b:  mov    0x8(%ebp),%eax
08a3a528 +0xc7e:  movl   $0x0,0x1cc0(%eax)
08a3a532 +0xc88:  add    $0x34,%esp
08a3a535 +0xc8b:  pop    %ebx
08a3a536 +0xc8c:  pop    %ebp
08a3a537 +0xc8d:  ret
```

## 反编译 C

```c
// STMonsterScript::Clear @ 0x8a398aa

/* STMonsterScript::Clear() */

void __thiscall STMonsterScript::Clear(STMonsterScript *this)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  this[0xc50] = (STMonsterScript)0x0;
  this[0x3a8] = (STMonsterScript)0x0;
  STAIInfoScript::clear((STAIInfoScript *)(this + 0x138));
  this[0x33c] = (STMonsterScript)0x1;
  this[0x368] = (STMonsterScript)0x1;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  this[0x374] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  *(undefined4 *)(this + 0xc) = 0x28;
  *(undefined4 *)(this + 0x10) = 0x14;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1c));
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_24 * 0xc + 0x28));
  }
  std::vector<STMonsterParameterCategory,std::allocator<STMonsterParameterCategory>>::clear
            ((vector<STMonsterParameterCategory,std::allocator<STMonsterParameterCategory>> *)
             (this + 0x7c));
  this[0x3b8] = (STMonsterScript)0x1;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    *(undefined4 *)(this + (local_24 + 0xf0) * 4 + 4) = 0;
  }
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0xfc) * 4 + 4) = 0;
    }
    for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0x104) * 4 + 4) = 0;
    }
    *(undefined4 *)(this + (local_24 + 0x124) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x128) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x128) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 300) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 300) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x130) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x130) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x134) * 4 + 4) = 100;
    *(undefined4 *)(this + (local_24 + 0x134) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x138) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_24 + 0x138) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_24 + 0x9e) * 8 + 4) = 0;
    *(undefined4 *)(this + local_24 * 8 + 0x4f8) = 0;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      *(undefined4 *)(this + (local_20 * 2 + local_24 + 0x140) * 4 + 8) = 0;
    }
    *(undefined4 *)(this + (local_24 + 0x148) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_24 + 0xf8) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x504) = 200;
  std::string::operator=((string *)(this + 0x530),"");
  std::string::operator=((string *)(this + 0x534),"");
  *(undefined4 *)(this + 0x538) = 100;
  *(undefined4 *)(this + 0x53c) = 200;
  *(undefined4 *)(this + 0x540) = 0xbf800000;
  *(undefined4 *)(this + 0x544) = 0xbf800000;
  this[0x548] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x54c) = 0x41a00000;
  *(undefined4 *)(this + 0x550) = 0xc3960000;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x554));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x560));
  this[0x56c] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x574) = 1000;
  this[0x580] = (STMonsterScript)0x0;
  this[0x581] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x584) = 0;
  *(undefined4 *)(this + 0x588) = 0;
  *(undefined4 *)(this + 0x58c) = 0;
  this[0x590] = (STMonsterScript)0x0;
  this[0x591] = (STMonsterScript)0x0;
  this[0x592] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x594) = 0;
  *(undefined4 *)(this + 0x598) = 0;
  *(undefined4 *)(this + 0x59c) = 0;
  *(undefined4 *)(this + 0x5a0) = 0;
  this[0x5a4] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x578) = 0x32;
  *(undefined4 *)(this + 0x57c) = 1000;
  this[0x5a5] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x5a8) = 0;
  std::string::operator=((string *)(this + 0x5ac),"");
  *(undefined4 *)(this + 0x5b0) = 0;
  std::string::operator=((string *)(this + 0x5b4),"");
  std::string::operator=((string *)(this + 0x5b8),"");
  std::string::operator=((string *)(this + 0x5c8),"");
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    std::string::operator=((string *)(this + (local_24 + 0x170) * 4 + 0xc),"");
  }
  std::string::operator=((string *)(this + 0x5d4),"");
  std::string::operator=((string *)(this + 0x5d8),"");
  std::string::operator=((string *)(this + 0x5dc),"");
  std::string::operator=((string *)(this + 0x5e0),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x5e4));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x5f0));
  std::string::operator=((string *)(this + 0x6b4),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6b8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c4));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x6d4));
  *(undefined4 *)(this + 0x6e0) = 0xffffffff;
  this[0x6e4] = (STMonsterScript)0x0;
  std::vector<STAttackMethod,std::allocator<STAttackMethod>>::clear
            ((vector<STAttackMethod,std::allocator<STAttackMethod>> *)(this + 0x6e8));
  std::string::operator=((string *)(this + 0x5fc),"");
  std::string::operator=((string *)(this + 0x600),"");
  std::string::operator=((string *)(this + 0x604),"");
  std::string::operator=((string *)(this + 0x608),"");
  std::string::operator=((string *)(this + 0x60c),"");
  std::string::operator=((string *)(this + 0x610),"");
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    std::string::operator=((string *)(this + (local_24 + 0x184) * 4 + 4),"");
  }
  std::string::operator=((string *)(this + 0x61c),"");
  std::string::operator=((string *)(this + 0x620),"");
  std::string::operator=((string *)(this + 0x624),"");
  std::string::operator=((string *)(this + 0x628),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x62c));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x638));
  std::string::operator=((string *)(this + 0x644),"");
  std::string::operator=((string *)(this + 0x648),"");
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::clear((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
           *)(this + 0x688));
  std::string::operator=((string *)(this + 0x694),"");
  std::string::operator=((string *)(this + 0x698),"");
  std::string::operator=((string *)(this + 0x69c),"");
  std::string::operator=((string *)(this + 0x6a0),"");
  std::string::operator=((string *)(this + 0x6a4),"");
  std::string::operator=((string *)(this + 0x6a8),"");
  std::string::operator=((string *)(this + 0x6ac),"");
  std::string::operator=((string *)(this + 0x6b0),"");
  *(undefined4 *)(this + 0x6f4) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x6fc) = 0xffffffff;
  *(undefined4 *)(this + 0x700) = 0;
  *(undefined4 *)(this + 0x704) = 0;
  std::string::operator=((string *)(this + 0x708),"");
  for (local_1c = 0; local_1c < 0x6f; local_1c = local_1c + 1) {
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + local_1c * 0xc + 0x70c));
  }
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc40));
  *(undefined4 *)(this + 0xc4c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x8c));
  *(undefined4 *)(this + 0xc54) = 0;
  *(undefined4 *)(this + 0xc58) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x58));
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    *(undefined4 *)(this + (local_18 + 0x314) * 4 + 0xc) = 0;
  }
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::clear
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0x3ac));
  this[0xc70] = (STMonsterScript)0x0;
  this[0xc71] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0xc74) = 0;
  *(undefined4 *)(this + 0xc78) = 0;
  *(undefined4 *)(this + 0xc7c) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc80));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc8c));
  stEnamyDropAvatarInfo_t::clear((stEnamyDropAvatarInfo_t *)(this + 0xc98));
  this[0xcd4] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x1c9c) = 3;
  *(undefined4 *)(this + 0x1ca0) = 0;
  *(undefined4 *)(this + 0x1ca4) = 0;
  for (local_14 = 0; local_14 < 200; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 5 + local_10 + 0x33c) * 4 + 4) = 0xbf800000;
    }
  }
  *(undefined4 *)(this + 0x1c94) = 0;
  *(undefined4 *)(this + 0x1c98) = 0;
  this[0x1ca8] = (STMonsterScript)0x0;
  std::vector<CatchItemInfo,std::allocator<CatchItemInfo>>::clear
            ((vector<CatchItemInfo,std::allocator<CatchItemInfo>> *)(this + 0x70));
  *(undefined4 *)(this + 0x1cac) = 0xffffffff;
  *(undefined4 *)(this + 0x1cb0) = 0xffffffff;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1cb4));
  std::string::operator=((string *)(this + 0x64c),"");
  std::string::operator=((string *)(this + 0x650),"");
  std::string::operator=((string *)(this + 0x654),"");
  *(undefined4 *)(this + 0x658) = 0xffffffff;
  *(undefined4 *)(this + 0x65c) = 0;
  *(undefined4 *)(this + 0x660) = 0;
  *(undefined4 *)(this + 0x664) = 0;
  *(undefined4 *)(this + 0x668) = 0;
  *(undefined4 *)(this + 0x66c) = 0;
  *(undefined4 *)(this + 0x670) = 0;
  this[0x674] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x678) = 0xff;
  *(undefined4 *)(this + 0x67c) = 0xff;
  this[0x680] = (STMonsterScript)0x0;
  *(undefined4 *)(this + 0x684) = 4;
  *(undefined4 *)(this + 0xcd8) = 4;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x120));
  std::vector<MonsterBaseParameter,std::allocator<MonsterBaseParameter>>::clear
            ((vector<MonsterBaseParameter,std::allocator<MonsterBaseParameter>> *)(this + 300));
  *(undefined4 *)(this + 0x1cc0) = 0;
  return;
}
```
