# dispatch_sig

`_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompleteDisplay` | `0x08202cda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08202cda  _ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)
# range [0x08202cda, 0x0820334f]
08202cda +0x000:  push   %ebp
08202cdb +0x001:  mov    %esp,%ebp
08202cdd +0x003:  push   %edi
08202cde +0x004:  push   %esi
08202cdf +0x005:  push   %ebx
08202ce0 +0x006:  sub    $0xbc,%esp
08202ce6 +0x00c:  mov    0xc(%ebp),%eax
08202ce9 +0x00f:  mov    %eax,(%esp)
08202cec +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08202cf1 +0x017:  cmp    $0x3,%eax
08202cf4 +0x01a:  jne    08202d05 <+0x2b>
08202cf6 +0x01c:  mov    0xc(%ebp),%eax
08202cf9 +0x01f:  mov    %eax,(%esp)
08202cfc +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08202d01 +0x027:  test   %eax,%eax
08202d03 +0x029:  jne    08202d0c <+0x32>
08202d05 +0x02b:  mov    $0x1,%eax
08202d0a +0x030:  jmp    08202d11 <+0x37>
08202d0c +0x032:  mov    $0x0,%eax
08202d11 +0x037:  test   %al,%al
08202d13 +0x039:  je     08202d40 <+0x66>
08202d15 +0x03b:  movl   $0x0,0xc(%esp)
08202d1d +0x043:  movl   $0x0,0x8(%esp)
08202d25 +0x04b:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202d2d +0x053:  movl   $0x9984,(%esp)
08202d34 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202d39 +0x05f:  mov    %eax,%ebx
08202d3b +0x061:  jmp    08203343 <+0x669>
08202d40 +0x066:  movl   $0x0,-0x20(%ebp)
08202d47 +0x06d:  movb   $0x0,-0x32(%ebp)
08202d4b +0x071:  lea    -0x6b(%ebp),%edx
08202d4e +0x074:  mov    $0x29,%ebx
08202d53 +0x079:  mov    $0x0,%eax
08202d58 +0x07e:  mov    %edx,%ecx
08202d5a +0x080:  and    $0x1,%ecx
08202d5d +0x083:  test   %ecx,%ecx
08202d5f +0x085:  je     08202d69 <+0x8f>
08202d61 +0x087:  mov    %al,(%edx)
08202d63 +0x089:  add    $0x1,%edx
08202d66 +0x08c:  sub    $0x1,%ebx
08202d69 +0x08f:  mov    %edx,%ecx
08202d6b +0x091:  and    $0x2,%ecx
08202d6e +0x094:  test   %ecx,%ecx
08202d70 +0x096:  je     08202d7b <+0xa1>
08202d72 +0x098:  mov    %ax,(%edx)
08202d75 +0x09b:  add    $0x2,%edx
08202d78 +0x09e:  sub    $0x2,%ebx
08202d7b +0x0a1:  mov    %ebx,%ecx
08202d7d +0x0a3:  shr    $0x2,%ecx
08202d80 +0x0a6:  mov    %edx,%edi
08202d82 +0x0a8:  rep stos %eax,%es:(%edi)
08202d84 +0x0aa:  mov    %edi,%edx
08202d86 +0x0ac:  mov    %ebx,%ecx
08202d88 +0x0ae:  and    $0x2,%ecx
08202d8b +0x0b1:  test   %ecx,%ecx
08202d8d +0x0b3:  je     08202d95 <+0xbb>
08202d8f +0x0b5:  mov    %ax,(%edx)
08202d92 +0x0b8:  add    $0x2,%edx
08202d95 +0x0bb:  mov    %ebx,%ecx
08202d97 +0x0bd:  and    $0x1,%ecx
08202d9a +0x0c0:  test   %ecx,%ecx
08202d9c +0x0c2:  je     08202da3 <+0xc9>
08202d9e +0x0c4:  mov    %al,(%edx)
08202da0 +0x0c6:  add    $0x1,%edx
08202da3 +0x0c9:  movl   $0x0,-0x38(%ebp)
08202daa +0x0d0:  lea    -0xb8(%ebp),%eax
08202db0 +0x0d6:  mov    %eax,(%esp)
08202db3 +0x0d9:  call   0823457c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c26
08202db8 +0x0de:  movl   $0x0,-0x3c(%ebp)
08202dbf +0x0e5:  lea    -0x3c(%ebp),%eax
08202dc2 +0x0e8:  mov    %eax,0x4(%esp)
08202dc6 +0x0ec:  mov    0x10(%ebp),%eax
08202dc9 +0x0ef:  mov    %eax,(%esp)
08202dcc +0x0f2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08202dd1 +0x0f7:  xor    $0x1,%eax
08202dd4 +0x0fa:  test   %al,%al
08202dd6 +0x0fc:  je     08202e03 <+0x129>
08202dd8 +0x0fe:  movl   $0x0,0xc(%esp)
08202de0 +0x106:  movl   $0x0,0x8(%esp)
08202de8 +0x10e:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202df0 +0x116:  movl   $0x998e,(%esp)
08202df7 +0x11d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202dfc +0x122:  mov    %eax,%ebx
08202dfe +0x124:  jmp    08203343 <+0x669>
08202e03 +0x129:  mov    -0x3c(%ebp),%eax
08202e06 +0x12c:  cmp    $0x28,%eax
08202e09 +0x12f:  jle    08202e36 <+0x15c>
08202e0b +0x131:  movl   $0x0,0xc(%esp)
08202e13 +0x139:  movl   $0x0,0x8(%esp)
08202e1b +0x141:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202e23 +0x149:  movl   $0x9990,(%esp)
08202e2a +0x150:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202e2f +0x155:  mov    %eax,%ebx
08202e31 +0x157:  jmp    08203343 <+0x669>
08202e36 +0x15c:  mov    -0x3c(%ebp),%eax
08202e39 +0x15f:  mov    %eax,0xc(%esp)
08202e3d +0x163:  movl   $0x29,0x8(%esp)
08202e45 +0x16b:  lea    -0x6b(%ebp),%eax
08202e48 +0x16e:  mov    %eax,0x4(%esp)
08202e4c +0x172:  mov    0x10(%ebp),%eax
08202e4f +0x175:  mov    %eax,(%esp)
08202e52 +0x178:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08202e57 +0x17d:  xor    $0x1,%eax
08202e5a +0x180:  test   %al,%al
08202e5c +0x182:  je     08202e89 <+0x1af>
08202e5e +0x184:  movl   $0x0,0xc(%esp)
08202e66 +0x18c:  movl   $0x0,0x8(%esp)
08202e6e +0x194:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202e76 +0x19c:  movl   $0x9993,(%esp)
08202e7d +0x1a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202e82 +0x1a8:  mov    %eax,%ebx
08202e84 +0x1aa:  jmp    08203343 <+0x669>
08202e89 +0x1af:  lea    -0x31(%ebp),%eax
08202e8c +0x1b2:  mov    %eax,(%esp)
08202e8f +0x1b5:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08202e94 +0x1ba:  lea    -0x31(%ebp),%eax
08202e97 +0x1bd:  mov    %eax,0x8(%esp)
08202e9b +0x1c1:  lea    -0x6b(%ebp),%eax
08202e9e +0x1c4:  mov    %eax,0x4(%esp)
08202ea2 +0x1c8:  lea    -0x40(%ebp),%eax
08202ea5 +0x1cb:  mov    %eax,(%esp)
08202ea8 +0x1ce:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08202ead +0x1d3:  jmp    08202eca <+0x1f0>
08202eaf +0x1d5:  mov    %edx,%ebx
08202eb1 +0x1d7:  mov    %eax,%esi
08202eb3 +0x1d9:  lea    -0x31(%ebp),%eax
08202eb6 +0x1dc:  mov    %eax,(%esp)
08202eb9 +0x1df:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08202ebe +0x1e4:  mov    %esi,%eax
08202ec0 +0x1e6:  mov    %ebx,%edx
08202ec2 +0x1e8:  mov    %eax,(%esp)
08202ec5 +0x1eb:  call   08ae3750 <_Unwind_Resume>
08202eca +0x1f0:  lea    -0x31(%ebp),%eax
08202ecd +0x1f3:  mov    %eax,(%esp)
08202ed0 +0x1f6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08202ed5 +0x1fb:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
08202eda +0x200:  lea    -0x40(%ebp),%edx
08202edd +0x203:  mov    %edx,0x4(%esp)
08202ee1 +0x207:  mov    %eax,(%esp)
08202ee4 +0x20a:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08202ee9 +0x20f:  test   %al,%al
08202eeb +0x211:  jne    08202f05 <+0x22b>
08202eed +0x213:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08202ef2 +0x218:  lea    -0x6b(%ebp),%edx
08202ef5 +0x21b:  mov    %edx,0x4(%esp)
08202ef9 +0x21f:  mov    %eax,(%esp)
08202efc +0x222:  call   08363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>  ; CDataManager::hasSpecialCharacter(char const*)
08202f01 +0x227:  test   %al,%al
08202f03 +0x229:  je     08202f0c <+0x232>
08202f05 +0x22b:  mov    $0x1,%eax
08202f0a +0x230:  jmp    08202f11 <+0x237>
08202f0c +0x232:  mov    $0x0,%eax
08202f11 +0x237:  test   %al,%al
08202f13 +0x239:  je     08202f3a <+0x260>
08202f15 +0x23b:  movl   $0x9f,0x8(%esp)
08202f1d +0x243:  movl   $0x5a,0x4(%esp)
08202f25 +0x24b:  mov    0xc(%ebp),%eax
08202f28 +0x24e:  mov    %eax,(%esp)
08202f2b +0x251:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08202f30 +0x256:  mov    $0x0,%ebx
08202f35 +0x25b:  jmp    08203338 <+0x65e>
08202f3a +0x260:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202f3f +0x265:  mov    0xc(%ebp),%edx
08202f42 +0x268:  mov    %edx,0x8(%esp)
08202f46 +0x26c:  lea    -0x38(%ebp),%edx
08202f49 +0x26f:  mov    %edx,0x4(%esp)
08202f4d +0x273:  mov    %eax,(%esp)
08202f50 +0x276:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
08202f55 +0x27b:  lea    -0x32(%ebp),%eax
08202f58 +0x27e:  mov    %eax,0x4(%esp)
08202f5c +0x282:  mov    0x10(%ebp),%eax
08202f5f +0x285:  mov    %eax,(%esp)
08202f62 +0x288:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08202f67 +0x28d:  xor    $0x1,%eax
08202f6a +0x290:  test   %al,%al
08202f6c +0x292:  je     08202f99 <+0x2bf>
08202f6e +0x294:  movl   $0x0,0xc(%esp)
08202f76 +0x29c:  movl   $0x0,0x8(%esp)
08202f7e +0x2a4:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202f86 +0x2ac:  movl   $0x99a4,(%esp)
08202f8d +0x2b3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202f92 +0x2b8:  mov    %eax,%ebx
08202f94 +0x2ba:  jmp    08203338 <+0x65e>
08202f99 +0x2bf:  mov    -0x38(%ebp),%eax
08202f9c +0x2c2:  mov    %eax,(%esp)
08202f9f +0x2c5:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
08202fa4 +0x2ca:  movzbl %al,%ebx
08202fa7 +0x2cd:  movl   $0x0,0xc(%esp)
08202faf +0x2d5:  movl   $0x99a6,0x8(%esp)
08202fb7 +0x2dd:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202fbf +0x2e5:  lea    -0x30(%ebp),%eax
08202fc2 +0x2e8:  mov    %eax,(%esp)
08202fc5 +0x2eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08202fca +0x2f0:  mov    %ebx,0x8(%esp)
08202fce +0x2f4:  movl   $"(private_store::CPrivateStore*)seller)->GetState()=%d",0x4(%esp)
08202fd6 +0x2fc:  lea    -0x30(%ebp),%eax
08202fd9 +0x2ff:  mov    %eax,(%esp)
08202fdc +0x302:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08202fe1 +0x307:  mov    -0x38(%ebp),%eax
08202fe4 +0x30a:  mov    %eax,(%esp)
08202fe7 +0x30d:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
08202fec +0x312:  movzbl %al,%eax
08202fef +0x315:  mov    %eax,0x4(%esp)
08202ff3 +0x319:  movl   $"(private_store::CPrivateStore*)seller)->GetState()=%d",(%esp)
08202ffa +0x320:  call   0807db60 <_init+0x458>
08202fff +0x325:  mov    -0x38(%ebp),%eax
08203002 +0x328:  mov    %eax,(%esp)
08203005 +0x32b:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
0820300a +0x330:  cmp    $0x1,%al
0820300c +0x332:  setne  %al
0820300f +0x335:  test   %al,%al
08203011 +0x337:  je     0820301d <+0x343>
08203013 +0x339:  mov    $0x0,%ebx
08203018 +0x33e:  jmp    08203338 <+0x65e>
0820301d +0x343:  movzbl -0x32(%ebp),%eax
08203021 +0x347:  test   %al,%al
08203023 +0x349:  jne    08203050 <+0x376>
08203025 +0x34b:  movl   $0x0,0xc(%esp)
0820302d +0x353:  movl   $0x0,0x8(%esp)
08203035 +0x35b:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820303d +0x363:  movl   $0x99ad,(%esp)
08203044 +0x36a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203049 +0x36f:  mov    %eax,%ebx
0820304b +0x371:  jmp    08203338 <+0x65e>
08203050 +0x376:  movl   $0x0,-0x20(%ebp)
08203057 +0x37d:  jmp    0820322a <+0x550>
0820305c +0x382:  lea    -0xb8(%ebp),%eax
08203062 +0x388:  add    $0x44,%eax
08203065 +0x38b:  mov    %eax,0x4(%esp)
08203069 +0x38f:  mov    0x10(%ebp),%eax
0820306c +0x392:  mov    %eax,(%esp)
0820306f +0x395:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08203074 +0x39a:  xor    $0x1,%eax
08203077 +0x39d:  test   %al,%al
08203079 +0x39f:  jne    082030f7 <+0x41d>
0820307b +0x3a1:  lea    -0xb8(%ebp),%eax
08203081 +0x3a7:  add    $0x40,%eax
08203084 +0x3aa:  mov    %eax,0x4(%esp)
08203088 +0x3ae:  mov    0x10(%ebp),%eax
0820308b +0x3b1:  mov    %eax,(%esp)
0820308e +0x3b4:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08203093 +0x3b9:  xor    $0x1,%eax
08203096 +0x3bc:  test   %al,%al
08203098 +0x3be:  jne    082030f7 <+0x41d>
0820309a +0x3c0:  lea    -0xb8(%ebp),%eax
082030a0 +0x3c6:  add    $0x46,%eax
082030a3 +0x3c9:  mov    %eax,0x4(%esp)
082030a7 +0x3cd:  mov    0x10(%ebp),%eax
082030aa +0x3d0:  mov    %eax,(%esp)
082030ad +0x3d3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082030b2 +0x3d8:  xor    $0x1,%eax
082030b5 +0x3db:  test   %al,%al
082030b7 +0x3dd:  jne    082030f7 <+0x41d>
082030b9 +0x3df:  lea    -0xb8(%ebp),%eax
082030bf +0x3e5:  add    $0x48,%eax
082030c2 +0x3e8:  mov    %eax,0x4(%esp)
082030c6 +0x3ec:  mov    0x10(%ebp),%eax
082030c9 +0x3ef:  mov    %eax,(%esp)
082030cc +0x3f2:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082030d1 +0x3f7:  xor    $0x1,%eax
082030d4 +0x3fa:  test   %al,%al
082030d6 +0x3fc:  jne    082030f7 <+0x41d>
082030d8 +0x3fe:  lea    -0xb8(%ebp),%eax
082030de +0x404:  add    $0x7,%eax
082030e1 +0x407:  mov    %eax,0x4(%esp)
082030e5 +0x40b:  mov    0x10(%ebp),%eax
082030e8 +0x40e:  mov    %eax,(%esp)
082030eb +0x411:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082030f0 +0x416:  xor    $0x1,%eax
082030f3 +0x419:  test   %al,%al
082030f5 +0x41b:  je     082030fe <+0x424>
082030f7 +0x41d:  mov    $0x1,%eax
082030fc +0x422:  jmp    08203103 <+0x429>
082030fe +0x424:  mov    $0x0,%eax
08203103 +0x429:  test   %al,%al
08203105 +0x42b:  je     08203132 <+0x458>
08203107 +0x42d:  movl   $0x0,0xc(%esp)
0820310f +0x435:  movl   $0x0,0x8(%esp)
08203117 +0x43d:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820311f +0x445:  movl   $0x99bd,(%esp)
08203126 +0x44c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820312b +0x451:  mov    %eax,%ebx
0820312d +0x453:  jmp    08203338 <+0x65e>
08203132 +0x458:  movzbl -0x72(%ebp),%eax
08203136 +0x45c:  cmp    $0x1,%al
08203138 +0x45e:  je     0820316f <+0x495>
0820313a +0x460:  mov    -0xb1(%ebp),%eax
08203140 +0x466:  test   %eax,%eax
08203142 +0x468:  jg     0820316f <+0x495>
08203144 +0x46a:  movl   $0x0,0xc(%esp)
0820314c +0x472:  movl   $0x0,0x8(%esp)
08203154 +0x47a:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820315c +0x482:  movl   $0x99c0,(%esp)
08203163 +0x489:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203168 +0x48e:  mov    %eax,%ebx
0820316a +0x490:  jmp    08203338 <+0x65e>
0820316f +0x495:  movzwl -0x70(%ebp),%eax
08203173 +0x499:  movswl %ax,%ebx
08203176 +0x49c:  movzbl -0x72(%ebp),%eax
0820317a +0x4a0:  movsbl %al,%eax
0820317d +0x4a3:  mov    %eax,(%esp)
08203180 +0x4a6:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08203185 +0x4ab:  mov    %ebx,0x8(%esp)
08203189 +0x4af:  mov    %eax,0x4(%esp)
0820318d +0x4b3:  mov    0xc(%ebp),%eax
08203190 +0x4b6:  mov    %eax,(%esp)
08203193 +0x4b9:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08203198 +0x4be:  test   %al,%al
0820319a +0x4c0:  je     082031cc <+0x4f2>
0820319c +0x4c2:  mov    -0x38(%ebp),%eax
0820319f +0x4c5:  mov    %eax,(%esp)
082031a2 +0x4c8:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
082031a7 +0x4cd:  movl   $0xd5,0x8(%esp)
082031af +0x4d5:  movl   $0x5a,0x4(%esp)
082031b7 +0x4dd:  mov    0xc(%ebp),%eax
082031ba +0x4e0:  mov    %eax,(%esp)
082031bd +0x4e3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082031c2 +0x4e8:  mov    $0x0,%ebx
082031c7 +0x4ed:  jmp    08203338 <+0x65e>
082031cc +0x4f2:  mov    -0x38(%ebp),%eax
082031cf +0x4f5:  mov    (%eax),%eax
082031d1 +0x4f7:  add    $0x10,%eax
082031d4 +0x4fa:  mov    (%eax),%ecx
082031d6 +0x4fc:  mov    -0x38(%ebp),%eax
082031d9 +0x4ff:  mov    -0x20(%ebp),%edx
082031dc +0x502:  mov    %edx,0x8(%esp)
082031e0 +0x506:  lea    -0xb8(%ebp),%edx
082031e6 +0x50c:  mov    %edx,0x4(%esp)
082031ea +0x510:  mov    %eax,(%esp)
082031ed +0x513:  call   *%ecx
082031ef +0x515:  xor    $0x1,%eax
082031f2 +0x518:  test   %al,%al
082031f4 +0x51a:  je     08203226 <+0x54c>
082031f6 +0x51c:  mov    -0x38(%ebp),%eax
082031f9 +0x51f:  mov    %eax,(%esp)
082031fc +0x522:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
08203201 +0x527:  movl   $0x11,0x8(%esp)
08203209 +0x52f:  movl   $0x5a,0x4(%esp)
08203211 +0x537:  mov    0xc(%ebp),%eax
08203214 +0x53a:  mov    %eax,(%esp)
08203217 +0x53d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820321c +0x542:  mov    $0x0,%ebx
08203221 +0x547:  jmp    08203338 <+0x65e>
08203226 +0x54c:  addl   $0x1,-0x20(%ebp)
0820322a +0x550:  movzbl -0x32(%ebp),%eax
0820322e +0x554:  movzbl %al,%eax
08203231 +0x557:  cmp    -0x20(%ebp),%eax
08203234 +0x55a:  setg   %al
08203237 +0x55d:  test   %al,%al
08203239 +0x55f:  jne    0820305c <+0x382>
0820323f +0x565:  lea    -0x42(%ebp),%eax
08203242 +0x568:  mov    %eax,0x4(%esp)
08203246 +0x56c:  mov    0x10(%ebp),%eax
08203249 +0x56f:  mov    %eax,(%esp)
0820324c +0x572:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08203251 +0x577:  xor    $0x1,%eax
08203254 +0x57a:  test   %al,%al
08203256 +0x57c:  je     08203283 <+0x5a9>
08203258 +0x57e:  movl   $0x0,0xc(%esp)
08203260 +0x586:  movl   $0x0,0x8(%esp)
08203268 +0x58e:  movl   $&_ZZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203270 +0x596:  movl   $0x99e9,(%esp)
08203277 +0x59d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820327c +0x5a2:  mov    %eax,%ebx
0820327e +0x5a4:  jmp    08203338 <+0x65e>
08203283 +0x5a9:  mov    -0x38(%ebp),%eax
08203286 +0x5ac:  mov    %eax,(%esp)
08203289 +0x5af:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
0820328e +0x5b4:  test   %al,%al
08203290 +0x5b6:  je     082032e0 <+0x606>
08203292 +0x5b8:  movzwl -0x42(%ebp),%eax
08203296 +0x5bc:  movzwl %ax,%edx
08203299 +0x5bf:  mov    -0x38(%ebp),%eax
0820329c +0x5c2:  mov    %edx,0x4(%esp)
082032a0 +0x5c6:  mov    %eax,(%esp)
082032a3 +0x5c9:  call   085c532c <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt>  ; private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short)
082032a8 +0x5ce:  mov    %eax,-0x1c(%ebp)
082032ab +0x5d1:  cmpl   $0x0,-0x1c(%ebp)
082032af +0x5d5:  je     082032e0 <+0x606>
082032b1 +0x5d7:  mov    -0x38(%ebp),%eax
082032b4 +0x5da:  mov    %eax,(%esp)
082032b7 +0x5dd:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
082032bc +0x5e2:  mov    -0x1c(%ebp),%eax
082032bf +0x5e5:  movzbl %al,%eax
082032c2 +0x5e8:  mov    %eax,0x8(%esp)
082032c6 +0x5ec:  movl   $0x5a,0x4(%esp)
082032ce +0x5f4:  mov    0xc(%ebp),%eax
082032d1 +0x5f7:  mov    %eax,(%esp)
082032d4 +0x5fa:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082032d9 +0x5ff:  mov    $0x0,%ebx
082032de +0x604:  jmp    08203338 <+0x65e>
082032e0 +0x606:  mov    -0x38(%ebp),%eax
082032e3 +0x609:  mov    (%eax),%eax
082032e5 +0x60b:  add    $0x8,%eax
082032e8 +0x60e:  mov    (%eax),%ecx
082032ea +0x610:  movzwl -0x42(%ebp),%eax
082032ee +0x614:  movzwl %ax,%edx
082032f1 +0x617:  mov    -0x38(%ebp),%eax
082032f4 +0x61a:  mov    %edx,0x8(%esp)
082032f8 +0x61e:  lea    -0x6b(%ebp),%edx
082032fb +0x621:  mov    %edx,0x4(%esp)
082032ff +0x625:  mov    %eax,(%esp)
08203302 +0x628:  call   *%ecx
08203304 +0x62a:  xor    $0x1,%eax
08203307 +0x62d:  test   %al,%al
08203309 +0x62f:  je     08203316 <+0x63c>
0820330b +0x631:  mov    -0x38(%ebp),%eax
0820330e +0x634:  mov    %eax,(%esp)
08203311 +0x637:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
08203316 +0x63c:  mov    $0x0,%ebx
0820331b +0x641:  jmp    08203338 <+0x65e>
0820331d +0x643:  mov    %edx,%ebx
0820331f +0x645:  mov    %eax,%esi
08203321 +0x647:  lea    -0x40(%ebp),%eax
08203324 +0x64a:  mov    %eax,(%esp)
08203327 +0x64d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820332c +0x652:  mov    %esi,%eax
0820332e +0x654:  mov    %ebx,%edx
08203330 +0x656:  mov    %eax,(%esp)
08203333 +0x659:  call   08ae3750 <_Unwind_Resume>
08203338 +0x65e:  lea    -0x40(%ebp),%eax
0820333b +0x661:  mov    %eax,(%esp)
0820333e +0x664:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08203343 +0x669:  mov    %ebx,%eax
08203345 +0x66b:  add    $0xbc,%esp
0820334b +0x671:  pop    %ebx
0820334c +0x672:  pop    %esi
0820334d +0x673:  pop    %edi
0820334e +0x674:  pop    %ebp
0820334f +0x675:  ret
```

## 反编译 C

```c
// Dispatcher_CompleteDisplay::dispatch_sig @ 0x8202cda

/* Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompleteDisplay::dispatch_sig
          (Dispatcher_CompleteDisplay *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSyncSlangFilter *this_00;
  CDataManager *this_01;
  CPrivateStoreMgr *this_02;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  PrivateStoreItem local_bc [7];
  int local_b5 [14];
  int iStack_7c;
  short sStack_78;
  char local_76 [2];
  short local_74 [2];
  char local_6f;
  char local_6e [40];
  ushort local_46;
  string local_44;
  int local_40;
  ISeller *local_3c;
  byte local_36;
  allocator<char> local_35;
  cMyTrace local_34 [16];
  int local_24;
  uint local_20;
  
  bVar9 = 0;
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    uVar3 = LineFunc(0x9984,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  local_24 = 0;
  local_36 = 0;
  pcVar5 = &local_6f;
  uVar6 = 0x29;
  bVar8 = ((uint)pcVar5 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar5 = local_6e;
    uVar6 = 0x28;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar8) {
    *pcVar5 = '\0';
  }
  local_3c = (ISeller *)0x0;
  private_store::PrivateStoreItem::PrivateStoreItem(local_bc);
  local_40 = 0;
  cVar1 = PacketBuf::get_int(param_2,&local_40);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0x998e,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  if (0x28 < local_40) {
    uVar3 = LineFunc(0x9990,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,&local_6f,0x29,local_40);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0x9993,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08202ea8 to 08202eac has its CatchHandler @ 08202eaf */
  std::string::string((string *)&local_44,&local_6f,(allocator *)&local_35);
  std::allocator<char>::~allocator(&local_35);
                    /* try { // try from 08202ed5 to 08203315 has its CatchHandler @ 0820331d */
  this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_44);
  if (cVar1 == '\0') {
    this_01 = (CDataManager *)G_CDataManager();
    cVar1 = CDataManager::hasSpecialCharacter(this_01,&local_6f);
    if (cVar1 == '\0') {
      bVar8 = false;
      goto LAB_08202f11;
    }
  }
  bVar8 = true;
LAB_08202f11:
  if (bVar8) {
    CUser::SendCmdErrorPacket(param_1,0x5a,0x9f);
    uVar3 = 0;
  }
  else {
    this_02 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this_02,&local_3c,param_1);
    cVar1 = PacketBuf::get_byte(param_2,&local_36);
    if (cVar1 == '\x01') {
      uVar6 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",
                         0x99a6,0);
      cMyTrace::operator()
                (local_34,"(private_store::CPrivateStore*)seller)->GetState()=%d",uVar6 & 0xff);
      uVar6 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      printf("(private_store::CPrivateStore*)seller)->GetState()=%d",uVar6 & 0xff);
      cVar1 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      if (cVar1 == '\x01') {
        if (local_36 == 0) {
          uVar3 = LineFunc(0x99ad,
                           "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          for (local_24 = 0; local_24 < (int)(uint)local_36; local_24 = local_24 + 1) {
            cVar1 = PacketBuf::get_short(param_2,&sStack_78);
            if ((((cVar1 == '\x01') &&
                 (cVar1 = PacketBuf::get_int(param_2,&iStack_7c), cVar1 == '\x01')) &&
                (cVar1 = PacketBuf::get_byte(param_2,local_76), cVar1 == '\x01')) &&
               ((cVar1 = PacketBuf::get_short(param_2,local_74), cVar1 == '\x01' &&
                (cVar1 = PacketBuf::get_int(param_2,local_b5), cVar1 == '\x01')))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              uVar3 = LineFunc(0x99bd,
                               "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_08203338;
            }
            if ((local_76[0] != '\x01') && (local_b5[0] < 1)) {
              uVar3 = LineFunc(0x99c0,
                               "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_08203338;
            }
            iVar7 = (int)local_74[0];
            iVar2 = GetInvenTypeFromItemSpace((int)local_76[0]);
            cVar1 = CUser::CheckItemLock(param_1,iVar2,iVar7);
            if (cVar1 != '\0') {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,0xd5);
              uVar3 = 0;
              goto LAB_08203338;
            }
            cVar1 = (**(code **)(*(int *)local_3c + 0x10))(local_3c,local_bc,local_24);
            if (cVar1 != '\x01') {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,0x11);
              uVar3 = 0;
              goto LAB_08203338;
            }
          }
          cVar1 = PacketBuf::get_short(param_2,&local_46);
          if (cVar1 == '\x01') {
            cVar1 = private_store::CPrivateStore::isDollCreated((CPrivateStore *)local_3c);
            if ((cVar1 == '\0') ||
               (local_20 = private_store::CPrivateStore::CheckPrivateStoreDoll((ushort)local_3c),
               local_20 == 0)) {
              cVar1 = (**(code **)(*(int *)local_3c + 8))(local_3c,&local_6f,local_46);
              if (cVar1 != '\x01') {
                private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              }
              uVar3 = 0;
            }
            else {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,local_20 & 0xff);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = LineFunc(0x99e9,
                             "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0x99a4,
                       "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
LAB_08203338:
  std::string::~string((string *)&local_44);
  return uVar3;
}
```
