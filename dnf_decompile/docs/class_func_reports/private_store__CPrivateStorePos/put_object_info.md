# put_object_info

`_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard`

`private_store::CPrivateStorePos::put_object_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStorePos` | `0x085cadf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085cadf6  _ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard
#           private_store::CPrivateStorePos::put_object_info(PacketGuard&)
# range [0x085cadf6, 0x085cb274]
085cadf6 +0x000:  push   %ebp
085cadf7 +0x001:  mov    %esp,%ebp
085cadf9 +0x003:  push   %edi
085cadfa +0x004:  push   %esi
085cadfb +0x005:  push   %ebx
085cadfc +0x006:  sub    $0x7c,%esp
085cadff +0x009:  mov    0x8(%ebp),%eax
085cae02 +0x00c:  mov    0x14(%eax),%eax
085cae05 +0x00f:  test   %eax,%eax
085cae07 +0x011:  jne    085cae49 <+0x53>
085cae09 +0x013:  movl   $0x0,0xc(%esp)
085cae11 +0x01b:  movl   $0xd0b,0x8(%esp)
085cae19 +0x023:  movl   $&_ZZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085cae21 +0x02b:  lea    -0x58(%ebp),%eax
085cae24 +0x02e:  mov    %eax,(%esp)
085cae27 +0x031:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085cae2c +0x036:  movl   $"NOTEXIST_ERROR : private_store(null)",0x4(%esp)
085cae34 +0x03e:  lea    -0x58(%ebp),%eax
085cae37 +0x041:  mov    %eax,(%esp)
085cae3a +0x044:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085cae3f +0x049:  mov    $0x0,%eax
085cae44 +0x04e:  jmp    085cb26d <+0x477>
085cae49 +0x053:  mov    0x8(%ebp),%eax
085cae4c +0x056:  mov    0x14(%eax),%eax
085cae4f +0x059:  mov    %eax,(%esp)
085cae52 +0x05c:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cae57 +0x061:  cmp    $0x1,%al
085cae59 +0x063:  je     085cae74 <+0x7e>
085cae5b +0x065:  mov    0x8(%ebp),%eax
085cae5e +0x068:  mov    0x14(%eax),%eax
085cae61 +0x06b:  mov    %eax,(%esp)
085cae64 +0x06e:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cae69 +0x073:  cmp    $0x2,%al
085cae6b +0x075:  je     085cae74 <+0x7e>
085cae6d +0x077:  mov    $0x1,%eax
085cae72 +0x07c:  jmp    085cae79 <+0x83>
085cae74 +0x07e:  mov    $0x0,%eax
085cae79 +0x083:  test   %al,%al
085cae7b +0x085:  je     085caed2 <+0xdc>
085cae7d +0x087:  mov    0x8(%ebp),%eax
085cae80 +0x08a:  mov    0x14(%eax),%eax
085cae83 +0x08d:  mov    %eax,(%esp)
085cae86 +0x090:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cae8b +0x095:  movzbl %al,%ebx
085cae8e +0x098:  movl   $0x0,0xc(%esp)
085cae96 +0x0a0:  movl   $0xd11,0x8(%esp)
085cae9e +0x0a8:  movl   $&_ZZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085caea6 +0x0b0:  lea    -0x48(%ebp),%eax
085caea9 +0x0b3:  mov    %eax,(%esp)
085caeac +0x0b6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085caeb1 +0x0bb:  mov    %ebx,0x8(%esp)
085caeb5 +0x0bf:  movl   $"STATE_ERROR : private_store_state(%d)",0x4(%esp)
085caebd +0x0c7:  lea    -0x48(%ebp),%eax
085caec0 +0x0ca:  mov    %eax,(%esp)
085caec3 +0x0cd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085caec8 +0x0d2:  mov    $0x0,%eax
085caecd +0x0d7:  jmp    085cb26d <+0x477>
085caed2 +0x0dc:  mov    0x8(%ebp),%eax
085caed5 +0x0df:  mov    0x14(%eax),%eax
085caed8 +0x0e2:  mov    %eax,(%esp)
085caedb +0x0e5:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085caee0 +0x0ea:  test   %eax,%eax
085caee2 +0x0ec:  sete   %al
085caee5 +0x0ef:  test   %al,%al
085caee7 +0x0f1:  je     085caf5a <+0x164>
085caee9 +0x0f3:  mov    0x8(%ebp),%eax
085caeec +0x0f6:  mov    0x14(%eax),%eax
085caeef +0x0f9:  mov    %eax,(%esp)
085caef2 +0x0fc:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085caef7 +0x101:  movzbl 0x1(%eax),%eax
085caefb +0x105:  movzbl %al,%esi
085caefe +0x108:  mov    0x8(%ebp),%eax
085caf01 +0x10b:  mov    0x14(%eax),%eax
085caf04 +0x10e:  mov    %eax,(%esp)
085caf07 +0x111:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085caf0c +0x116:  movzbl (%eax),%eax
085caf0f +0x119:  movzbl %al,%ebx
085caf12 +0x11c:  movl   $0x0,0xc(%esp)
085caf1a +0x124:  movl   $0xd17,0x8(%esp)
085caf22 +0x12c:  movl   $&_ZZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085caf2a +0x134:  lea    -0x38(%ebp),%eax
085caf2d +0x137:  mov    %eax,(%esp)
085caf30 +0x13a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085caf35 +0x13f:  mov    %esi,0xc(%esp)
085caf39 +0x143:  mov    %ebx,0x8(%esp)
085caf3d +0x147:  movl   $"NOTEXIST_ERROR : private_store(%d, %d) user(null)",0x4(%esp)
085caf45 +0x14f:  lea    -0x38(%ebp),%eax
085caf48 +0x152:  mov    %eax,(%esp)
085caf4b +0x155:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085caf50 +0x15a:  mov    $0x0,%eax
085caf55 +0x15f:  jmp    085cb26d <+0x477>
085caf5a +0x164:  mov    0x8(%ebp),%eax
085caf5d +0x167:  mov    0x14(%eax),%eax
085caf60 +0x16a:  mov    %eax,(%esp)
085caf63 +0x16d:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085caf68 +0x172:  xor    $0x1,%eax
085caf6b +0x175:  test   %al,%al
085caf6d +0x177:  je     085cb0ca <+0x2d4>
085caf73 +0x17d:  mov    0x8(%ebp),%eax
085caf76 +0x180:  mov    0x14(%eax),%eax
085caf79 +0x183:  mov    %eax,(%esp)
085caf7c +0x186:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085caf81 +0x18b:  movzbl (%eax),%eax
085caf84 +0x18e:  movzbl %al,%ebx
085caf87 +0x191:  mov    0x8(%ebp),%eax
085caf8a +0x194:  mov    0x14(%eax),%eax
085caf8d +0x197:  mov    %eax,(%esp)
085caf90 +0x19a:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085caf95 +0x19f:  mov    %eax,(%esp)
085caf98 +0x1a2:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085caf9d +0x1a7:  movsbl %al,%eax
085cafa0 +0x1aa:  cmp    %eax,%ebx
085cafa2 +0x1ac:  jne    085cafdb <+0x1e5>
085cafa4 +0x1ae:  mov    0x8(%ebp),%eax
085cafa7 +0x1b1:  mov    0x14(%eax),%eax
085cafaa +0x1b4:  mov    %eax,(%esp)
085cafad +0x1b7:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cafb2 +0x1bc:  movzbl 0x1(%eax),%eax
085cafb6 +0x1c0:  movzbl %al,%ebx
085cafb9 +0x1c3:  mov    0x8(%ebp),%eax
085cafbc +0x1c6:  mov    0x14(%eax),%eax
085cafbf +0x1c9:  mov    %eax,(%esp)
085cafc2 +0x1cc:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085cafc7 +0x1d1:  movl   $0x0,0x4(%esp)
085cafcf +0x1d9:  mov    %eax,(%esp)
085cafd2 +0x1dc:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085cafd7 +0x1e1:  cmp    %eax,%ebx
085cafd9 +0x1e3:  je     085cafe2 <+0x1ec>
085cafdb +0x1e5:  mov    $0x1,%eax
085cafe0 +0x1ea:  jmp    085cafe7 <+0x1f1>
085cafe2 +0x1ec:  mov    $0x0,%eax
085cafe7 +0x1f1:  test   %al,%al
085cafe9 +0x1f3:  je     085cb0ca <+0x2d4>
085cafef +0x1f9:  mov    0x8(%ebp),%eax
085caff2 +0x1fc:  mov    0x14(%eax),%eax
085caff5 +0x1ff:  mov    %eax,(%esp)
085caff8 +0x202:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085caffd +0x207:  mov    %eax,(%esp)
085cb000 +0x20a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085cb005 +0x20f:  movzwl %ax,%eax
085cb008 +0x212:  mov    %eax,-0x60(%ebp)
085cb00b +0x215:  mov    0x8(%ebp),%eax
085cb00e +0x218:  mov    0x14(%eax),%eax
085cb011 +0x21b:  mov    %eax,(%esp)
085cb014 +0x21e:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085cb019 +0x223:  movl   $0x0,0x4(%esp)
085cb021 +0x22b:  mov    %eax,(%esp)
085cb024 +0x22e:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085cb029 +0x233:  mov    %eax,%ebx
085cb02b +0x235:  mov    0x8(%ebp),%eax
085cb02e +0x238:  mov    0x14(%eax),%eax
085cb031 +0x23b:  mov    %eax,(%esp)
085cb034 +0x23e:  call   085cb87c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x592>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x592
085cb039 +0x243:  mov    %eax,(%esp)
085cb03c +0x246:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085cb041 +0x24b:  movsbl %al,%eax
085cb044 +0x24e:  mov    %eax,-0x5c(%ebp)
085cb047 +0x251:  mov    0x8(%ebp),%eax
085cb04a +0x254:  mov    0x14(%eax),%eax
085cb04d +0x257:  mov    %eax,(%esp)
085cb050 +0x25a:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb055 +0x25f:  movzbl 0x1(%eax),%eax
085cb059 +0x263:  movzbl %al,%edi
085cb05c +0x266:  mov    0x8(%ebp),%eax
085cb05f +0x269:  mov    0x14(%eax),%eax
085cb062 +0x26c:  mov    %eax,(%esp)
085cb065 +0x26f:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb06a +0x274:  movzbl (%eax),%eax
085cb06d +0x277:  movzbl %al,%esi
085cb070 +0x27a:  movl   $0x0,0xc(%esp)
085cb078 +0x282:  movl   $0xd23,0x8(%esp)
085cb080 +0x28a:  movl   $&_ZZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085cb088 +0x292:  lea    -0x28(%ebp),%eax
085cb08b +0x295:  mov    %eax,(%esp)
085cb08e +0x298:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085cb093 +0x29d:  mov    -0x60(%ebp),%eax
085cb096 +0x2a0:  mov    %eax,0x18(%esp)
085cb09a +0x2a4:  mov    %ebx,0x14(%esp)
085cb09e +0x2a8:  mov    -0x5c(%ebp),%eax
085cb0a1 +0x2ab:  mov    %eax,0x10(%esp)
085cb0a5 +0x2af:  mov    %edi,0xc(%esp)
085cb0a9 +0x2b3:  mov    %esi,0x8(%esp)
085cb0ad +0x2b7:  movl   $"DIFFERENT_ERROR : private_store(%d,%d), user(%d,%d), uid(%d)",0x4(%esp)
085cb0b5 +0x2bf:  lea    -0x28(%ebp),%eax
085cb0b8 +0x2c2:  mov    %eax,(%esp)
085cb0bb +0x2c5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085cb0c0 +0x2ca:  mov    $0x0,%eax
085cb0c5 +0x2cf:  jmp    085cb26d <+0x477>
085cb0ca +0x2d4:  mov    0xc(%ebp),%eax
085cb0cd +0x2d7:  movl   $0x1,0x4(%esp)
085cb0d5 +0x2df:  mov    %eax,(%esp)
085cb0d8 +0x2e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb0dd +0x2e7:  mov    0x8(%ebp),%eax
085cb0e0 +0x2ea:  mov    0x14(%eax),%eax
085cb0e3 +0x2ed:  mov    %eax,(%esp)
085cb0e6 +0x2f0:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085cb0eb +0x2f5:  movzwl %ax,%edx
085cb0ee +0x2f8:  mov    0xc(%ebp),%eax
085cb0f1 +0x2fb:  mov    %edx,0x4(%esp)
085cb0f5 +0x2ff:  mov    %eax,(%esp)
085cb0f8 +0x302:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085cb0fd +0x307:  mov    0x8(%ebp),%eax
085cb100 +0x30a:  mov    0x14(%eax),%eax
085cb103 +0x30d:  mov    %eax,(%esp)
085cb106 +0x310:  call   085cb888 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x59e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x59e
085cb10b +0x315:  mov    %eax,(%esp)
085cb10e +0x318:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
085cb113 +0x31d:  mov    %eax,%edx
085cb115 +0x31f:  mov    0xc(%ebp),%eax
085cb118 +0x322:  mov    %edx,0x4(%esp)
085cb11c +0x326:  mov    %eax,(%esp)
085cb11f +0x329:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085cb124 +0x32e:  mov    0x8(%ebp),%eax
085cb127 +0x331:  mov    0x14(%eax),%eax
085cb12a +0x334:  mov    %eax,(%esp)
085cb12d +0x337:  call   085cb888 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x59e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x59e
085cb132 +0x33c:  mov    %eax,(%esp)
085cb135 +0x33f:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
085cb13a +0x344:  mov    %eax,%ebx
085cb13c +0x346:  mov    0x8(%ebp),%eax
085cb13f +0x349:  mov    0x14(%eax),%eax
085cb142 +0x34c:  mov    %eax,(%esp)
085cb145 +0x34f:  call   085cb888 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x59e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x59e
085cb14a +0x354:  mov    %eax,(%esp)
085cb14d +0x357:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085cb152 +0x35c:  mov    0xc(%ebp),%edx
085cb155 +0x35f:  mov    %ebx,0x8(%esp)
085cb159 +0x363:  mov    %eax,0x4(%esp)
085cb15d +0x367:  mov    %edx,(%esp)
085cb160 +0x36a:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085cb165 +0x36f:  mov    0x8(%ebp),%eax
085cb168 +0x372:  mov    0x14(%eax),%eax
085cb16b +0x375:  mov    %eax,(%esp)
085cb16e +0x378:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
085cb173 +0x37d:  cmp    $0x1,%al
085cb175 +0x37f:  setne  %al
085cb178 +0x382:  movzbl %al,%edx
085cb17b +0x385:  mov    0xc(%ebp),%eax
085cb17e +0x388:  mov    %edx,0x4(%esp)
085cb182 +0x38c:  mov    %eax,(%esp)
085cb185 +0x38f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb18a +0x394:  mov    0x8(%ebp),%eax
085cb18d +0x397:  mov    0x14(%eax),%eax
085cb190 +0x39a:  mov    %eax,(%esp)
085cb193 +0x39d:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb198 +0x3a2:  movzbl (%eax),%eax
085cb19b +0x3a5:  movzbl %al,%edx
085cb19e +0x3a8:  mov    0xc(%ebp),%eax
085cb1a1 +0x3ab:  mov    %edx,0x4(%esp)
085cb1a5 +0x3af:  mov    %eax,(%esp)
085cb1a8 +0x3b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb1ad +0x3b7:  mov    0x8(%ebp),%eax
085cb1b0 +0x3ba:  mov    0x14(%eax),%eax
085cb1b3 +0x3bd:  mov    %eax,(%esp)
085cb1b6 +0x3c0:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb1bb +0x3c5:  movzbl 0x1(%eax),%eax
085cb1bf +0x3c9:  movzbl %al,%edx
085cb1c2 +0x3cc:  mov    0xc(%ebp),%eax
085cb1c5 +0x3cf:  mov    %edx,0x4(%esp)
085cb1c9 +0x3d3:  mov    %eax,(%esp)
085cb1cc +0x3d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb1d1 +0x3db:  mov    0x8(%ebp),%eax
085cb1d4 +0x3de:  mov    0x14(%eax),%eax
085cb1d7 +0x3e1:  mov    %eax,(%esp)
085cb1da +0x3e4:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb1df +0x3e9:  movzwl 0x2(%eax),%eax
085cb1e3 +0x3ed:  movswl %ax,%edx
085cb1e6 +0x3f0:  mov    0xc(%ebp),%eax
085cb1e9 +0x3f3:  mov    %edx,0x4(%esp)
085cb1ed +0x3f7:  mov    %eax,(%esp)
085cb1f0 +0x3fa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085cb1f5 +0x3ff:  mov    0x8(%ebp),%eax
085cb1f8 +0x402:  mov    0x14(%eax),%eax
085cb1fb +0x405:  mov    %eax,(%esp)
085cb1fe +0x408:  call   085cb8d4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5ea>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5ea
085cb203 +0x40d:  movzwl 0x4(%eax),%eax
085cb207 +0x411:  movswl %ax,%edx
085cb20a +0x414:  mov    0xc(%ebp),%eax
085cb20d +0x417:  mov    %edx,0x4(%esp)
085cb211 +0x41b:  mov    %eax,(%esp)
085cb214 +0x41e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085cb219 +0x423:  mov    0x8(%ebp),%eax
085cb21c +0x426:  mov    0x14(%eax),%eax
085cb21f +0x429:  mov    %eax,(%esp)
085cb222 +0x42c:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085cb227 +0x431:  test   %al,%al
085cb229 +0x433:  je     085cb240 <+0x44a>
085cb22b +0x435:  mov    0xc(%ebp),%eax
085cb22e +0x438:  movl   $0x1,0x4(%esp)
085cb236 +0x440:  mov    %eax,(%esp)
085cb239 +0x443:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb23e +0x448:  jmp    085cb268 <+0x472>
085cb240 +0x44a:  mov    0x8(%ebp),%eax
085cb243 +0x44d:  mov    0x14(%eax),%eax
085cb246 +0x450:  mov    %eax,(%esp)
085cb249 +0x453:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085cb24e +0x458:  xor    $0x1,%eax
085cb251 +0x45b:  test   %al,%al
085cb253 +0x45d:  je     085cb268 <+0x472>
085cb255 +0x45f:  mov    0xc(%ebp),%eax
085cb258 +0x462:  movl   $0x0,0x4(%esp)
085cb260 +0x46a:  mov    %eax,(%esp)
085cb263 +0x46d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085cb268 +0x472:  mov    $0x1,%eax
085cb26d +0x477:  add    $0x7c,%esp
085cb270 +0x47a:  pop    %ebx
085cb271 +0x47b:  pop    %esi
085cb272 +0x47c:  pop    %edi
085cb273 +0x47d:  pop    %ebp
085cb274 +0x47e:  ret
```

## 反编译 C

```c
// private_store::CPrivateStorePos::put_object_info @ 0x85cadf6

/* private_store::CPrivateStorePos::put_object_info(PacketGuard&) */

undefined4 __thiscall
private_store::CPrivateStorePos::put_object_info(CPrivateStorePos *this,PacketGuard *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  CUserCharacInfo *pCVar8;
  CUser *pCVar9;
  undefined4 uVar10;
  string *psVar11;
  char *pcVar12;
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  if (*(int *)(this + 0x14) == 0) {
    cMyTrace::cMyTrace(local_5c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd0b,0);
    cMyTrace::operator()(local_5c,"NOTEXIST_ERROR : private_store(null)");
    return 0;
  }
  cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
  if ((cVar4 == '\x01') ||
     (cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14)), cVar4 == '\x02')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
    cMyTrace::cMyTrace(local_4c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd11,0);
    cMyTrace::operator()(local_4c,"STATE_ERROR : private_store_state(%d)",uVar5 & 0xff);
    return 0;
  }
  iVar6 = CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
  if (iVar6 == 0) {
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar2 = *pbVar7;
    cMyTrace::cMyTrace(local_3c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd17,0);
    cMyTrace::operator()
              (local_3c,"NOTEXIST_ERROR : private_store(%d, %d) user(null)",(uint)bVar2,(uint)bVar1)
    ;
    return 0;
  }
  cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
  if (cVar4 == '\x01') goto LAB_085cb0ca;
  pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  bVar1 = *pbVar7;
  pCVar8 = (CUserCharacInfo *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
  cVar4 = CUserCharacInfo::getCurCharacVill(pCVar8);
  if ((uint)bVar1 == (int)cVar4) {
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar5 = CUser::get_area(pCVar9,false);
    if (bVar1 != uVar5) goto LAB_085cafdb;
    bVar3 = false;
  }
  else {
LAB_085cafdb:
    bVar3 = true;
  }
  if (bVar3) {
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar5 = CUser::get_unique_id(pCVar9);
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar10 = CUser::get_area(pCVar9,false);
    pCVar8 = (CUserCharacInfo *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    cVar4 = CUserCharacInfo::getCurCharacVill(pCVar8);
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar2 = *pbVar7;
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd23,0);
    cMyTrace::operator()
              (local_2c,"DIFFERENT_ERROR : private_store(%d,%d), user(%d,%d), uid(%d)",(uint)bVar2,
               (uint)bVar1,(int)cVar4,uVar10,uVar5 & 0xffff);
    return 0;
  }
LAB_085cb0ca:
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  uVar5 = CPrivateStore::GetSellerIndex(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar5 & 0xffff);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  iVar6 = std::string::length(psVar11);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar6);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  iVar6 = std::string::length(psVar11);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  pcVar12 = (char *)std::string::c_str(psVar11);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,pcVar12,iVar6);
  cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(cVar4 != '\x01'));
  pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*pbVar7);
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar6 + 1));
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(iVar6 + 2));
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(iVar6 + 4));
  cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
  if (cVar4 == '\0') {
    cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
    if (cVar4 != '\x01') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  }
  return 1;
}
```
