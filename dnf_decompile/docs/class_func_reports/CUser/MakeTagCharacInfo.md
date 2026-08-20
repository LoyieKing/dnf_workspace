# MakeTagCharacInfo

`_ZN5CUser17MakeTagCharacInfoER11PacketGuard`

`CUser::MakeTagCharacInfo(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690776` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690776  _ZN5CUser17MakeTagCharacInfoER11PacketGuard
#           CUser::MakeTagCharacInfo(PacketGuard&)
# range [0x08690776, 0x08690b57]
08690776 +0x000:  push   %ebp
08690777 +0x001:  mov    %esp,%ebp
08690779 +0x003:  push   %edi
0869077a +0x004:  push   %esi
0869077b +0x005:  push   %ebx
0869077c +0x006:  sub    $0xec,%esp
08690782 +0x00c:  mov    0x8(%ebp),%eax
08690785 +0x00f:  mov    %eax,(%esp)
08690788 +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0869078d +0x017:  test   %eax,%eax
0869078f +0x019:  sete   %al
08690792 +0x01c:  test   %al,%al
08690794 +0x01e:  je     086907a0 <+0x2a>
08690796 +0x020:  mov    $0x0,%eax
0869079b +0x025:  jmp    08690b4c <+0x3d6>
086907a0 +0x02a:  mov    0x8(%ebp),%eax
086907a3 +0x02d:  mov    %eax,(%esp)
086907a6 +0x030:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
086907ab +0x035:  test   %eax,%eax
086907ad +0x037:  sete   %al
086907b0 +0x03a:  test   %al,%al
086907b2 +0x03c:  je     086907be <+0x48>
086907b4 +0x03e:  mov    $0x0,%eax
086907b9 +0x043:  jmp    08690b4c <+0x3d6>
086907be +0x048:  mov    0x8(%ebp),%eax
086907c1 +0x04b:  mov    %eax,(%esp)
086907c4 +0x04e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086907c9 +0x053:  movzwl %ax,%edx
086907cc +0x056:  mov    0xc(%ebp),%eax
086907cf +0x059:  mov    %edx,0x4(%esp)
086907d3 +0x05d:  mov    %eax,(%esp)
086907d6 +0x060:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086907db +0x065:  mov    0x8(%ebp),%eax
086907de +0x068:  mov    %eax,(%esp)
086907e1 +0x06b:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
086907e6 +0x070:  add    $0x4,%eax
086907e9 +0x073:  mov    %eax,(%esp)
086907ec +0x076:  call   0807e3b0 <_init+0xca8>
086907f1 +0x07b:  mov    %al,-0x29(%ebp)
086907f4 +0x07e:  movzbl -0x29(%ebp),%edx
086907f8 +0x082:  mov    0xc(%ebp),%eax
086907fb +0x085:  mov    %edx,0x4(%esp)
086907ff +0x089:  mov    %eax,(%esp)
08690802 +0x08c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08690807 +0x091:  movzbl -0x29(%ebp),%ebx
0869080b +0x095:  mov    0x8(%ebp),%eax
0869080e +0x098:  mov    %eax,(%esp)
08690811 +0x09b:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690816 +0x0a0:  add    $0x4,%eax
08690819 +0x0a3:  mov    %eax,%edx
0869081b +0x0a5:  mov    0xc(%ebp),%eax
0869081e +0x0a8:  mov    %ebx,0x8(%esp)
08690822 +0x0ac:  mov    %edx,0x4(%esp)
08690826 +0x0b0:  mov    %eax,(%esp)
08690829 +0x0b3:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0869082e +0x0b8:  mov    0x8(%ebp),%eax
08690831 +0x0bb:  mov    %eax,(%esp)
08690834 +0x0be:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690839 +0x0c3:  movzwl 0x27(%eax),%eax
0869083d +0x0c7:  movswl %ax,%edx
08690840 +0x0ca:  mov    0xc(%ebp),%eax
08690843 +0x0cd:  mov    %edx,0x4(%esp)
08690847 +0x0d1:  mov    %eax,(%esp)
0869084a +0x0d4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0869084f +0x0d9:  mov    0x8(%ebp),%eax
08690852 +0x0dc:  mov    %eax,(%esp)
08690855 +0x0df:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
0869085a +0x0e4:  movzbl 0x26(%eax),%eax
0869085e +0x0e8:  movsbl %al,%edx
08690861 +0x0eb:  mov    0xc(%ebp),%eax
08690864 +0x0ee:  mov    %edx,0x4(%esp)
08690868 +0x0f2:  mov    %eax,(%esp)
0869086b +0x0f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690870 +0x0fa:  mov    0x8(%ebp),%eax
08690873 +0x0fd:  mov    %eax,(%esp)
08690876 +0x100:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
0869087b +0x105:  movzbl 0x29(%eax),%eax
0869087f +0x109:  movsbl %al,%edx
08690882 +0x10c:  mov    0xc(%ebp),%eax
08690885 +0x10f:  mov    %edx,0x4(%esp)
08690889 +0x113:  mov    %eax,(%esp)
0869088c +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690891 +0x11b:  mov    0x8(%ebp),%eax
08690894 +0x11e:  mov    %eax,(%esp)
08690897 +0x121:  call   08696018 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x286d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x286d
0869089c +0x126:  movzbl %al,%edx
0869089f +0x129:  mov    0xc(%ebp),%eax
086908a2 +0x12c:  mov    %edx,0x4(%esp)
086908a6 +0x130:  mov    %eax,(%esp)
086908a9 +0x133:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086908ae +0x138:  mov    0x8(%ebp),%eax
086908b1 +0x13b:  mov    %eax,(%esp)
086908b4 +0x13e:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
086908b9 +0x143:  test   %al,%al
086908bb +0x145:  je     08690989 <+0x213>
086908c1 +0x14b:  mov    0x8(%ebp),%eax
086908c4 +0x14e:  mov    %eax,(%esp)
086908c7 +0x151:  call   0869607a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28cf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28cf
086908cc +0x156:  mov    %eax,%edx
086908ce +0x158:  lea    -0xd2(%ebp),%eax
086908d4 +0x15e:  mov    $0x52,%ebx
086908d9 +0x163:  mov    %eax,%ecx
086908db +0x165:  and    $0x2,%ecx
086908de +0x168:  test   %ecx,%ecx
086908e0 +0x16a:  je     086908f1 <+0x17b>
086908e2 +0x16c:  movzwl (%edx),%ecx
086908e5 +0x16f:  mov    %cx,(%eax)
086908e8 +0x172:  add    $0x2,%eax
086908eb +0x175:  add    $0x2,%edx
086908ee +0x178:  sub    $0x2,%ebx
086908f1 +0x17b:  mov    %ebx,%ecx
086908f3 +0x17d:  shr    $0x2,%ecx
086908f6 +0x180:  mov    %eax,%edi
086908f8 +0x182:  mov    %edx,%esi
086908fa +0x184:  rep movsl %ds:(%esi),%es:(%edi)
086908fc +0x186:  mov    %esi,%edx
086908fe +0x188:  mov    %edi,%eax
08690900 +0x18a:  mov    $0x0,%ecx
08690905 +0x18f:  mov    %ebx,%esi
08690907 +0x191:  and    $0x2,%esi
0869090a +0x194:  test   %esi,%esi
0869090c +0x196:  je     08690919 <+0x1a3>
0869090e +0x198:  movzwl (%edx,%ecx,1),%esi
08690912 +0x19c:  mov    %si,(%eax,%ecx,1)
08690916 +0x1a0:  add    $0x2,%ecx
08690919 +0x1a3:  and    $0x1,%ebx
0869091c +0x1a6:  test   %ebx,%ebx
0869091e +0x1a8:  je     08690927 <+0x1b1>
08690920 +0x1aa:  movzbl (%edx,%ecx,1),%edx
08690924 +0x1ae:  mov    %dl,(%eax,%ecx,1)
08690927 +0x1b1:  mov    0x8(%ebp),%eax
0869092a +0x1b4:  lea    0x7121c(%eax),%edx
08690930 +0x1ba:  lea    -0x7b(%ebp),%eax
08690933 +0x1bd:  mov    %edx,0x4(%esp)
08690937 +0x1c1:  mov    %eax,(%esp)
0869093a +0x1c4:  call   08694a88 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12dd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12dd
0869093f +0x1c9:  sub    $0x4,%esp
08690942 +0x1cc:  lea    -0x7b(%ebp),%eax
08690945 +0x1cf:  mov    %eax,0x4(%esp)
08690949 +0x1d3:  lea    -0xd2(%ebp),%eax
0869094f +0x1d9:  mov    %eax,(%esp)
08690952 +0x1dc:  call   08693cea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x53f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x53f
08690957 +0x1e1:  mov    0xc(%ebp),%eax
0869095a +0x1e4:  movl   $0x52,0x4(%esp)
08690962 +0x1ec:  mov    %eax,(%esp)
08690965 +0x1ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0869096a +0x1f4:  lea    -0xd2(%ebp),%edx
08690970 +0x1fa:  mov    0xc(%ebp),%eax
08690973 +0x1fd:  movl   $0x52,0x8(%esp)
0869097b +0x205:  mov    %edx,0x4(%esp)
0869097f +0x209:  mov    %eax,(%esp)
08690982 +0x20c:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08690987 +0x211:  jmp    086909c0 <+0x24a>
08690989 +0x213:  mov    0xc(%ebp),%eax
0869098c +0x216:  movl   $0x52,0x4(%esp)
08690994 +0x21e:  mov    %eax,(%esp)
08690997 +0x221:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0869099c +0x226:  mov    0x8(%ebp),%eax
0869099f +0x229:  mov    %eax,(%esp)
086909a2 +0x22c:  call   0869607a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28cf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28cf
086909a7 +0x231:  mov    %eax,%edx
086909a9 +0x233:  mov    0xc(%ebp),%eax
086909ac +0x236:  movl   $0x52,0x8(%esp)
086909b4 +0x23e:  mov    %edx,0x4(%esp)
086909b8 +0x242:  mov    %eax,(%esp)
086909bb +0x245:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
086909c0 +0x24a:  mov    0x8(%ebp),%eax
086909c3 +0x24d:  mov    %eax,(%esp)
086909c6 +0x250:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
086909cb +0x255:  movl   $0x0,0x10(%esp)
086909d3 +0x25d:  movl   $0x1,0xc(%esp)
086909db +0x265:  movl   $0x1,0x8(%esp)
086909e3 +0x26d:  mov    0xc(%ebp),%edx
086909e6 +0x270:  mov    %edx,0x4(%esp)
086909ea +0x274:  mov    %eax,(%esp)
086909ed +0x277:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
086909f2 +0x27c:  mov    0xc(%ebp),%eax
086909f5 +0x27f:  mov    %eax,(%esp)
086909f8 +0x282:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086909fd +0x287:  mov    %eax,-0x80(%ebp)
08690a00 +0x28a:  movl   $0x0,-0x28(%ebp)
08690a07 +0x291:  mov    0xc(%ebp),%eax
08690a0a +0x294:  movl   $0x0,0x4(%esp)
08690a12 +0x29c:  mov    %eax,(%esp)
08690a15 +0x29f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690a1a +0x2a4:  movl   $0x0,-0x20(%ebp)
08690a21 +0x2ab:  jmp    08690aec <+0x376>
08690a26 +0x2b0:  mov    0x8(%ebp),%eax
08690a29 +0x2b3:  mov    %eax,(%esp)
08690a2c +0x2b6:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690a31 +0x2bb:  movzbl 0x1239(%eax),%eax
08690a38 +0x2c2:  cmp    $0xff,%al
08690a3a +0x2c4:  je     08690a52 <+0x2dc>
08690a3c +0x2c6:  mov    0x8(%ebp),%eax
08690a3f +0x2c9:  mov    %eax,(%esp)
08690a42 +0x2cc:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690a47 +0x2d1:  movzbl 0x1239(%eax),%eax
08690a4e +0x2d8:  test   %al,%al
08690a50 +0x2da:  jne    08690a59 <+0x2e3>
08690a52 +0x2dc:  mov    $0x1,%eax
08690a57 +0x2e1:  jmp    08690a5e <+0x2e8>
08690a59 +0x2e3:  mov    $0x0,%eax
08690a5e +0x2e8:  test   %al,%al
08690a60 +0x2ea:  je     08690a75 <+0x2ff>
08690a62 +0x2ec:  mov    0x8(%ebp),%eax
08690a65 +0x2ef:  mov    %eax,(%esp)
08690a68 +0x2f2:  call   084ebeb4 <_GLOBAL__I__Z7getUserj+0x2e66>  ; global constructors keyed to getUser(unsigned int)+0x2e66
08690a6d +0x2f7:  add    $0x46,%eax
08690a70 +0x2fa:  mov    %eax,-0x1c(%ebp)
08690a73 +0x2fd:  jmp    08690a88 <+0x312>
08690a75 +0x2ff:  mov    0x8(%ebp),%eax
08690a78 +0x302:  mov    %eax,(%esp)
08690a7b +0x305:  call   084ebeb4 <_GLOBAL__I__Z7getUserj+0x2e66>  ; global constructors keyed to getUser(unsigned int)+0x2e66
08690a80 +0x30a:  add    $0x1de,%eax
08690a85 +0x30f:  mov    %eax,-0x1c(%ebp)
08690a88 +0x312:  mov    -0x20(%ebp),%eax
08690a8b +0x315:  add    %eax,%eax
08690a8d +0x317:  add    -0x1c(%ebp),%eax
08690a90 +0x31a:  movzbl (%eax),%eax
08690a93 +0x31d:  test   %al,%al
08690a95 +0x31f:  je     08690ae8 <+0x372>
08690a97 +0x321:  mov    0xc(%ebp),%eax
08690a9a +0x324:  mov    -0x20(%ebp),%edx
08690a9d +0x327:  mov    %edx,0x4(%esp)
08690aa1 +0x32b:  mov    %eax,(%esp)
08690aa4 +0x32e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690aa9 +0x333:  mov    -0x20(%ebp),%eax
08690aac +0x336:  add    %eax,%eax
08690aae +0x338:  add    -0x1c(%ebp),%eax
08690ab1 +0x33b:  movzbl (%eax),%eax
08690ab4 +0x33e:  movzbl %al,%edx
08690ab7 +0x341:  mov    0xc(%ebp),%eax
08690aba +0x344:  mov    %edx,0x4(%esp)
08690abe +0x348:  mov    %eax,(%esp)
08690ac1 +0x34b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690ac6 +0x350:  mov    -0x20(%ebp),%eax
08690ac9 +0x353:  add    %eax,%eax
08690acb +0x355:  add    -0x1c(%ebp),%eax
08690ace +0x358:  movzbl 0x1(%eax),%eax
08690ad2 +0x35c:  movsbl %al,%edx
08690ad5 +0x35f:  mov    0xc(%ebp),%eax
08690ad8 +0x362:  mov    %edx,0x4(%esp)
08690adc +0x366:  mov    %eax,(%esp)
08690adf +0x369:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08690ae4 +0x36e:  addl   $0x1,-0x28(%ebp)
08690ae8 +0x372:  addl   $0x1,-0x20(%ebp)
08690aec +0x376:  cmpl   $0xcb,-0x20(%ebp)
08690af3 +0x37d:  setle  %al
08690af6 +0x380:  test   %al,%al
08690af8 +0x382:  jne    08690a26 <+0x2b0>
08690afe +0x388:  mov    0xc(%ebp),%eax
08690b01 +0x38b:  mov    -0x28(%ebp),%edx
08690b04 +0x38e:  mov    %edx,0x8(%esp)
08690b08 +0x392:  lea    -0x80(%ebp),%edx
08690b0b +0x395:  mov    %edx,0x4(%esp)
08690b0f +0x399:  mov    %eax,(%esp)
08690b12 +0x39c:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08690b17 +0x3a1:  movl   $0xb,0x4(%esp)
08690b1f +0x3a9:  mov    0x8(%ebp),%eax
08690b22 +0x3ac:  mov    %eax,(%esp)
08690b25 +0x3af:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08690b2a +0x3b4:  mov    %eax,-0x24(%ebp)
08690b2d +0x3b7:  movl   $0x1,0x8(%esp)
08690b35 +0x3bf:  mov    0xc(%ebp),%eax
08690b38 +0x3c2:  mov    %eax,0x4(%esp)
08690b3c +0x3c6:  mov    -0x24(%ebp),%eax
08690b3f +0x3c9:  mov    %eax,(%esp)
08690b42 +0x3cc:  call   085ef5dc <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb>  ; CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool)
08690b47 +0x3d1:  mov    $0x1,%eax
08690b4c +0x3d6:  lea    -0xc(%ebp),%esp
08690b4f +0x3d9:  add    $0x0,%esp
08690b52 +0x3dc:  pop    %ebx
08690b53 +0x3dd:  pop    %esi
08690b54 +0x3de:  pop    %edi
08690b55 +0x3df:  pop    %ebp
08690b56 +0x3e0:  ret
08690b57 +0x3e1:  nop
```

## 反编译 C

```c
// CUser::MakeTagCharacInfo @ 0x8690776

/* WARNING: Removing unreachable block (ram,0x08690920) */
/* CUser::MakeTagCharacInfo(PacketGuard&) */

undefined4 __thiscall CUser::MakeTagCharacInfo(CUser *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  CInventory *pCVar9;
  bool bVar10;
  byte bVar11;
  undefined1 local_d6 [82];
  int local_84;
  _Additioal_info local_7f [82];
  byte local_2d;
  int local_2c;
  CQuestShop *local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = get_unique_id(this);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
      iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
      sVar5 = strlen((char *)(iVar2 + 4));
      local_2d = (byte)sVar5;
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar5 & 0xff);
      uVar4 = (uint)local_2d;
      iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),uVar4);
      iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(short *)(iVar2 + 0x27));
      iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar2 + 0x26));
      iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar2 + 0x29));
      uVar4 = CUserCharacInfo::getCurCharacStrikerSkillIndex((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
      cVar1 = IsHavePremiumAdvantage(this);
      if (cVar1 == '\0') {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x52);
        pcVar8 = (char *)CUserCharacInfo::getTagCharacAddInfoR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,pcVar8,0x52);
      }
      else {
        puVar6 = (undefined4 *)CUserCharacInfo::getTagCharacAddInfoR((CUserCharacInfo *)this);
        puVar7 = (undefined4 *)local_d6;
        uVar4 = 0x52;
        bVar10 = ((uint)puVar7 & 2) != 0;
        if (bVar10) {
          local_d6._0_2_ = *(undefined2 *)puVar6;
          puVar7 = (undefined4 *)(local_d6 + 2);
          puVar6 = (undefined4 *)((int)puVar6 + 2);
          uVar4 = 0x50;
        }
        for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        }
        if (!bVar10) {
          *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
        }
        WongWork::CUserPremium::GetAdditionalInfo();
        _Additioal_info::operator+=((_Additioal_info *)local_d6,local_7f);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x52);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,local_d6,0x52);
      }
      pCVar9 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
      CInventory::MakeEquipList(pCVar9,param_1,1,1,0);
      local_84 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
      local_2c = 0;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
      for (local_24 = 0; local_24 < 0xcc; local_24 = local_24 + 1) {
        iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
        if ((*(char *)(iVar2 + 0x1239) == -1) ||
           (iVar2 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this),
           *(char *)(iVar2 + 0x1239) == '\0')) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          local_20 = CUserCharacInfo::getTagCharacSkillW((CUserCharacInfo *)this);
          local_20 = local_20 + 0x46;
        }
        else {
          local_20 = CUserCharacInfo::getTagCharacSkillW((CUserCharacInfo *)this);
          local_20 = local_20 + 0x1de;
        }
        if (*(char *)(local_24 * 2 + local_20) != '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_24);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_1,(uint)*(byte *)(local_24 * 2 + local_20));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_1,(int)*(char *)(local_24 * 2 + local_20 + 1));
          local_2c = local_2c + 1;
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_84,local_2c);
      local_28 = (CQuestShop *)GetCharacExpandData(this,0xb);
      CQuestShop::makePacket_BuyingStatusList(local_28,param_1,true);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
