# dispatch_sig

`_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci`

`Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MailBox_Req_CheckReceiver` | `0x084cf95a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf95a  _ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci
#           Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser*, char*, int)
# range [0x084cf95a, 0x084cff17]
084cf95a +0x000:  push   %ebp
084cf95b +0x001:  mov    %esp,%ebp
084cf95d +0x003:  push   %esi
084cf95e +0x004:  push   %ebx
084cf95f +0x005:  sub    $0x60,%esp
084cf962 +0x008:  mov    0xc(%ebp),%eax
084cf965 +0x00b:  mov    %eax,(%esp)
084cf968 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf96d +0x013:  cmp    $0x2,%eax
084cf970 +0x016:  setle  %al
084cf973 +0x019:  test   %al,%al
084cf975 +0x01b:  je     084cf981 <+0x27>
084cf977 +0x01d:  mov    $0x0,%eax
084cf97c +0x022:  jmp    084cff11 <+0x5b7>
084cf981 +0x027:  mov    0x10(%ebp),%eax
084cf984 +0x02a:  mov    %eax,-0x30(%ebp)
084cf987 +0x02d:  movl   $0x61,-0x2c(%ebp)
084cf98e +0x034:  mov    -0x30(%ebp),%eax
084cf991 +0x037:  mov    0x31(%eax),%eax
084cf994 +0x03a:  cmp    $0x1,%eax
084cf997 +0x03d:  jne    084cf9a2 <+0x48>
084cf999 +0x03f:  movl   $0x43,-0x2c(%ebp)
084cf9a0 +0x046:  jmp    084cf9b4 <+0x5a>
084cf9a2 +0x048:  mov    -0x30(%ebp),%eax
084cf9a5 +0x04b:  mov    0x31(%eax),%eax
084cf9a8 +0x04e:  cmp    $0x2,%eax
084cf9ab +0x051:  jne    084cf9b4 <+0x5a>
084cf9ad +0x053:  movl   $0x13c,-0x2c(%ebp)
084cf9b4 +0x05a:  mov    -0x30(%ebp),%eax
084cf9b7 +0x05d:  mov    0x1d(%eax),%eax
084cf9ba +0x060:  test   %eax,%eax
084cf9bc +0x062:  jne    084cf9e9 <+0x8f>
084cf9be +0x064:  movl   $0x3,0xc(%esp)
084cf9c6 +0x06c:  mov    -0x2c(%ebp),%eax
084cf9c9 +0x06f:  mov    %eax,0x8(%esp)
084cf9cd +0x073:  mov    0xc(%ebp),%eax
084cf9d0 +0x076:  mov    %eax,0x4(%esp)
084cf9d4 +0x07a:  mov    0x8(%ebp),%eax
084cf9d7 +0x07d:  mov    %eax,(%esp)
084cf9da +0x080:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cf9df +0x085:  mov    $0x0,%eax
084cf9e4 +0x08a:  jmp    084cff11 <+0x5b7>
084cf9e9 +0x08f:  mov    -0x30(%ebp),%eax
084cf9ec +0x092:  mov    0x25(%eax),%eax
084cf9ef +0x095:  test   %eax,%eax
084cf9f1 +0x097:  je     084cfa1e <+0xc4>
084cf9f3 +0x099:  movl   $0x18,0xc(%esp)
084cf9fb +0x0a1:  mov    -0x2c(%ebp),%eax
084cf9fe +0x0a4:  mov    %eax,0x8(%esp)
084cfa02 +0x0a8:  mov    0xc(%ebp),%eax
084cfa05 +0x0ab:  mov    %eax,0x4(%esp)
084cfa09 +0x0af:  mov    0x8(%ebp),%eax
084cfa0c +0x0b2:  mov    %eax,(%esp)
084cfa0f +0x0b5:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cfa14 +0x0ba:  mov    $0x0,%eax
084cfa19 +0x0bf:  jmp    084cff11 <+0x5b7>
084cfa1e +0x0c4:  mov    -0x30(%ebp),%eax
084cfa21 +0x0c7:  mov    0x29(%eax),%edx
084cfa24 +0x0ca:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
084cfa29 +0x0cf:  mov    %edx,0x4(%esp)
084cfa2d +0x0d3:  mov    %eax,(%esp)
084cfa30 +0x0d6:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
084cfa35 +0x0db:  test   %al,%al
084cfa37 +0x0dd:  je     084cfa64 <+0x10a>
084cfa39 +0x0df:  movl   $0x5a,0xc(%esp)
084cfa41 +0x0e7:  mov    -0x2c(%ebp),%eax
084cfa44 +0x0ea:  mov    %eax,0x8(%esp)
084cfa48 +0x0ee:  mov    0xc(%ebp),%eax
084cfa4b +0x0f1:  mov    %eax,0x4(%esp)
084cfa4f +0x0f5:  mov    0x8(%ebp),%eax
084cfa52 +0x0f8:  mov    %eax,(%esp)
084cfa55 +0x0fb:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cfa5a +0x100:  mov    $0x0,%eax
084cfa5f +0x105:  jmp    084cff11 <+0x5b7>
084cfa64 +0x10a:  mov    -0x30(%ebp),%eax
084cfa67 +0x10d:  mov    0x3fb9(%eax),%eax
084cfa6d +0x113:  cmp    $0x4d,%eax
084cfa70 +0x116:  jne    084cfa9d <+0x143>
084cfa72 +0x118:  movl   $0x4d,0xc(%esp)
084cfa7a +0x120:  mov    -0x2c(%ebp),%eax
084cfa7d +0x123:  mov    %eax,0x8(%esp)
084cfa81 +0x127:  mov    0xc(%ebp),%eax
084cfa84 +0x12a:  mov    %eax,0x4(%esp)
084cfa88 +0x12e:  mov    0x8(%ebp),%eax
084cfa8b +0x131:  mov    %eax,(%esp)
084cfa8e +0x134:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cfa93 +0x139:  mov    $0x0,%eax
084cfa98 +0x13e:  jmp    084cff11 <+0x5b7>
084cfa9d +0x143:  movl   $0x0,-0x28(%ebp)
084cfaa4 +0x14a:  mov    -0x30(%ebp),%eax
084cfaa7 +0x14d:  mov    0x31(%eax),%eax
084cfaaa +0x150:  cmp    $0x1,%eax
084cfaad +0x153:  jne    084cfafc <+0x1a2>
084cfaaf +0x155:  mov    -0x30(%ebp),%eax
084cfab2 +0x158:  mov    0x1d(%eax),%eax
084cfab5 +0x15b:  mov    %eax,%edx
084cfab7 +0x15d:  mov    -0x30(%ebp),%eax
084cfaba +0x160:  mov    %edx,0x67(%eax)
084cfabd +0x163:  mov    -0x30(%ebp),%eax
084cfac0 +0x166:  mov    0x29(%eax),%edx
084cfac3 +0x169:  mov    -0x30(%ebp),%eax
084cfac6 +0x16c:  mov    %edx,0x63(%eax)
084cfac9 +0x16f:  mov    -0x30(%ebp),%eax
084cfacc +0x172:  lea    0x35(%eax),%edx
084cfacf +0x175:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
084cfad4 +0x17a:  mov    %edx,0x8(%esp)
084cfad8 +0x17e:  mov    0xc(%ebp),%edx
084cfadb +0x181:  mov    %edx,0x4(%esp)
084cfadf +0x185:  mov    %eax,(%esp)
084cfae2 +0x188:  call   0854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)
084cfae7 +0x18d:  test   %al,%al
084cfae9 +0x18f:  je     084cfaf2 <+0x198>
084cfaeb +0x191:  mov    $0x0,%eax
084cfaf0 +0x196:  jmp    084cfaf7 <+0x19d>
084cfaf2 +0x198:  mov    $0x2d12,%eax
084cfaf7 +0x19d:  jmp    084cff11 <+0x5b7>
084cfafc +0x1a2:  mov    -0x30(%ebp),%eax
084cfaff +0x1a5:  mov    0x31(%eax),%eax
084cfb02 +0x1a8:  test   %eax,%eax
084cfb04 +0x1aa:  jne    084cfd50 <+0x3f6>
084cfb0a +0x1b0:  mov    -0x30(%ebp),%eax
084cfb0d +0x1b3:  mov    0x6e(%eax),%eax
084cfb10 +0x1b6:  mov    %eax,-0x24(%ebp)
084cfb13 +0x1b9:  cmpl   $0x0,-0x24(%ebp)
084cfb17 +0x1bd:  je     084cfbec <+0x292>
084cfb1d +0x1c3:  mov    -0x24(%ebp),%ebx
084cfb20 +0x1c6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084cfb25 +0x1cb:  mov    %ebx,0x4(%esp)
084cfb29 +0x1cf:  mov    %eax,(%esp)
084cfb2c +0x1d2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084cfb31 +0x1d7:  mov    %eax,-0x20(%ebp)
084cfb34 +0x1da:  cmpl   $0x0,-0x20(%ebp)
084cfb38 +0x1de:  je     084cfbec <+0x292>
084cfb3e +0x1e4:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084cfb43 +0x1e9:  mov    -0x24(%ebp),%edx
084cfb46 +0x1ec:  mov    %edx,0x8(%esp)
084cfb4a +0x1f0:  movl   $0x1,0x4(%esp)
084cfb52 +0x1f8:  mov    %eax,(%esp)
084cfb55 +0x1fb:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
084cfb5a +0x200:  test   %al,%al
084cfb5c +0x202:  je     084cfb68 <+0x20e>
084cfb5e +0x204:  mov    $0x11,%eax
084cfb63 +0x209:  jmp    084cff11 <+0x5b7>
084cfb68 +0x20e:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084cfb6d +0x213:  mov    -0x24(%ebp),%edx
084cfb70 +0x216:  mov    %edx,0x8(%esp)
084cfb74 +0x21a:  movl   $0x2,0x4(%esp)
084cfb7c +0x222:  mov    %eax,(%esp)
084cfb7f +0x225:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
084cfb84 +0x22a:  test   %al,%al
084cfb86 +0x22c:  je     084cfb92 <+0x238>
084cfb88 +0x22e:  mov    $0x11,%eax
084cfb8d +0x233:  jmp    084cff11 <+0x5b7>
084cfb92 +0x238:  mov    -0x20(%ebp),%eax
084cfb95 +0x23b:  mov    %eax,(%esp)
084cfb98 +0x23e:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084cfb9d +0x243:  cmp    $0x5,%eax
084cfba0 +0x246:  jne    084cfbbe <+0x264>
084cfba2 +0x248:  mov    0xc(%ebp),%eax
084cfba5 +0x24b:  mov    %eax,(%esp)
084cfba8 +0x24e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084cfbad +0x253:  mov    -0x30(%ebp),%edx
084cfbb0 +0x256:  mov    0x29(%edx),%edx
084cfbb3 +0x259:  cmp    %edx,%eax
084cfbb5 +0x25b:  je     084cfbbe <+0x264>
084cfbb7 +0x25d:  mov    $0x1,%eax
084cfbbc +0x262:  jmp    084cfbc3 <+0x269>
084cfbbe +0x264:  mov    $0x0,%eax
084cfbc3 +0x269:  test   %al,%al
084cfbc5 +0x26b:  je     084cfbec <+0x292>
084cfbc7 +0x26d:  movl   $0xd8,0x8(%esp)
084cfbcf +0x275:  movl   $0x61,0x4(%esp)
084cfbd7 +0x27d:  mov    0xc(%ebp),%eax
084cfbda +0x280:  mov    %eax,(%esp)
084cfbdd +0x283:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084cfbe2 +0x288:  mov    $0x0,%eax
084cfbe7 +0x28d:  jmp    084cff11 <+0x5b7>
084cfbec +0x292:  mov    -0x30(%ebp),%eax
084cfbef +0x295:  mov    0x63(%eax),%eax
084cfbf2 +0x298:  test   %eax,%eax
084cfbf4 +0x29a:  je     084cfc5c <+0x302>
084cfbf6 +0x29c:  movl   $0x7fffffff,-0x1c(%ebp)
084cfbfd +0x2a3:  mov    -0x30(%ebp),%eax
084cfc00 +0x2a6:  lea    0x46(%eax),%esi
084cfc03 +0x2a9:  mov    -0x30(%ebp),%eax
084cfc06 +0x2ac:  mov    0x21(%eax),%eax
084cfc09 +0x2af:  mov    %eax,%ebx
084cfc0b +0x2b1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084cfc10 +0x2b6:  mov    %esi,0x8(%esp)
084cfc14 +0x2ba:  mov    %ebx,0x4(%esp)
084cfc18 +0x2be:  mov    %eax,(%esp)
084cfc1b +0x2c1:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
084cfc20 +0x2c6:  mov    %eax,-0x1c(%ebp)
084cfc23 +0x2c9:  mov    -0x1c(%ebp),%edx
084cfc26 +0x2cc:  mov    -0x30(%ebp),%eax
084cfc29 +0x2cf:  mov    0x63(%eax),%eax
084cfc2c +0x2d2:  cmp    %eax,%edx
084cfc2e +0x2d4:  jae    084cfc5c <+0x302>
084cfc30 +0x2d6:  movl   $0xe,0xc(%esp)
084cfc38 +0x2de:  movl   $0x61,0x8(%esp)
084cfc40 +0x2e6:  mov    0xc(%ebp),%eax
084cfc43 +0x2e9:  mov    %eax,0x4(%esp)
084cfc47 +0x2ed:  mov    0x8(%ebp),%eax
084cfc4a +0x2f0:  mov    %eax,(%esp)
084cfc4d +0x2f3:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cfc52 +0x2f8:  mov    $0x0,%eax
084cfc57 +0x2fd:  jmp    084cff11 <+0x5b7>
084cfc5c +0x302:  mov    -0x30(%ebp),%eax
084cfc5f +0x305:  mov    0x29(%eax),%edx
084cfc62 +0x308:  mov    -0x30(%ebp),%eax
084cfc65 +0x30b:  mov    0x1d(%eax),%eax
084cfc68 +0x30e:  mov    -0x30(%ebp),%ecx
084cfc6b +0x311:  add    $0x35,%ecx
084cfc6e +0x314:  movl   $0x0,0x14(%esp)
084cfc76 +0x31c:  mov    %edx,0x10(%esp)
084cfc7a +0x320:  movl   $0x0,0xc(%esp)
084cfc82 +0x328:  mov    %eax,0x8(%esp)
084cfc86 +0x32c:  mov    %ecx,0x4(%esp)
084cfc8a +0x330:  mov    0xc(%ebp),%eax
084cfc8d +0x333:  mov    %eax,(%esp)
084cfc90 +0x336:  call   08555b14 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool, unsigned int, int)
084cfc95 +0x33b:  mov    %eax,-0x28(%ebp)
084cfc98 +0x33e:  cmpl   $0x0,-0x28(%ebp)
084cfc9c +0x342:  je     084cfcc6 <+0x36c>
084cfc9e +0x344:  mov    -0x28(%ebp),%eax
084cfca1 +0x347:  movzwl %ax,%eax
084cfca4 +0x34a:  mov    %eax,0xc(%esp)
084cfca8 +0x34e:  mov    -0x2c(%ebp),%eax
084cfcab +0x351:  mov    %eax,0x8(%esp)
084cfcaf +0x355:  mov    0xc(%ebp),%eax
084cfcb2 +0x358:  mov    %eax,0x4(%esp)
084cfcb6 +0x35c:  mov    0x8(%ebp),%eax
084cfcb9 +0x35f:  mov    %eax,(%esp)
084cfcbc +0x362:  call   084d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>  ; Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
084cfcc1 +0x367:  jmp    084cff0c <+0x5b2>
084cfcc6 +0x36c:  lea    -0x3c(%ebp),%eax
084cfcc9 +0x36f:  mov    %eax,(%esp)
084cfccc +0x372:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cfcd1 +0x377:  mov    -0x2c(%ebp),%eax
084cfcd4 +0x37a:  mov    %eax,0x8(%esp)
084cfcd8 +0x37e:  movl   $0x1,0x4(%esp)
084cfce0 +0x386:  lea    -0x3c(%ebp),%eax
084cfce3 +0x389:  mov    %eax,(%esp)
084cfce6 +0x38c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cfceb +0x391:  movl   $0x1,0x4(%esp)
084cfcf3 +0x399:  lea    -0x3c(%ebp),%eax
084cfcf6 +0x39c:  mov    %eax,(%esp)
084cfcf9 +0x39f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cfcfe +0x3a4:  movl   $0x1,0x4(%esp)
084cfd06 +0x3ac:  lea    -0x3c(%ebp),%eax
084cfd09 +0x3af:  mov    %eax,(%esp)
084cfd0c +0x3b2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cfd11 +0x3b7:  lea    -0x3c(%ebp),%eax
084cfd14 +0x3ba:  mov    %eax,0x4(%esp)
084cfd18 +0x3be:  mov    0xc(%ebp),%eax
084cfd1b +0x3c1:  mov    %eax,(%esp)
084cfd1e +0x3c4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cfd23 +0x3c9:  jmp    084cfd40 <+0x3e6>
084cfd25 +0x3cb:  mov    %edx,%ebx
084cfd27 +0x3cd:  mov    %eax,%esi
084cfd29 +0x3cf:  lea    -0x3c(%ebp),%eax
084cfd2c +0x3d2:  mov    %eax,(%esp)
084cfd2f +0x3d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cfd34 +0x3da:  mov    %esi,%eax
084cfd36 +0x3dc:  mov    %ebx,%edx
084cfd38 +0x3de:  mov    %eax,(%esp)
084cfd3b +0x3e1:  call   08ae3750 <_Unwind_Resume>
084cfd40 +0x3e6:  lea    -0x3c(%ebp),%eax
084cfd43 +0x3e9:  mov    %eax,(%esp)
084cfd46 +0x3ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cfd4b +0x3f1:  jmp    084cff0c <+0x5b2>
084cfd50 +0x3f6:  mov    -0x30(%ebp),%eax
084cfd53 +0x3f9:  mov    0x31(%eax),%eax
084cfd56 +0x3fc:  cmp    $0x2,%eax
084cfd59 +0x3ff:  jne    084cff0c <+0x5b2>
084cfd5f +0x405:  movl   $0x0,-0x18(%ebp)
084cfd66 +0x40c:  jmp    084cfe65 <+0x50b>
084cfd6b +0x411:  mov    -0x18(%ebp),%edx
084cfd6e +0x414:  mov    -0x30(%ebp),%ecx
084cfd71 +0x417:  mov    %edx,%eax
084cfd73 +0x419:  shl    $0x2,%eax
084cfd76 +0x41c:  add    %edx,%eax
084cfd78 +0x41e:  add    %eax,%eax
084cfd7a +0x420:  add    %edx,%eax
084cfd7c +0x422:  lea    (%ecx,%eax,1),%eax
084cfd7f +0x425:  add    $0x60,%eax
084cfd82 +0x428:  mov    0xc(%eax),%eax
084cfd85 +0x42b:  mov    %eax,-0x14(%ebp)
084cfd88 +0x42e:  cmpl   $0x0,-0x14(%ebp)
084cfd8c +0x432:  je     084cfe61 <+0x507>
084cfd92 +0x438:  mov    -0x14(%ebp),%ebx
084cfd95 +0x43b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084cfd9a +0x440:  mov    %ebx,0x4(%esp)
084cfd9e +0x444:  mov    %eax,(%esp)
084cfda1 +0x447:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084cfda6 +0x44c:  mov    %eax,-0x10(%ebp)
084cfda9 +0x44f:  cmpl   $0x0,-0x10(%ebp)
084cfdad +0x453:  je     084cfe61 <+0x507>
084cfdb3 +0x459:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084cfdb8 +0x45e:  mov    -0x14(%ebp),%edx
084cfdbb +0x461:  mov    %edx,0x8(%esp)
084cfdbf +0x465:  movl   $0x1,0x4(%esp)
084cfdc7 +0x46d:  mov    %eax,(%esp)
084cfdca +0x470:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
084cfdcf +0x475:  test   %al,%al
084cfdd1 +0x477:  je     084cfddd <+0x483>
084cfdd3 +0x479:  mov    $0x11,%eax
084cfdd8 +0x47e:  jmp    084cff11 <+0x5b7>
084cfddd +0x483:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084cfde2 +0x488:  mov    -0x14(%ebp),%edx
084cfde5 +0x48b:  mov    %edx,0x8(%esp)
084cfde9 +0x48f:  movl   $0x2,0x4(%esp)
084cfdf1 +0x497:  mov    %eax,(%esp)
084cfdf4 +0x49a:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
084cfdf9 +0x49f:  test   %al,%al
084cfdfb +0x4a1:  je     084cfe07 <+0x4ad>
084cfdfd +0x4a3:  mov    $0x11,%eax
084cfe02 +0x4a8:  jmp    084cff11 <+0x5b7>
084cfe07 +0x4ad:  mov    -0x10(%ebp),%eax
084cfe0a +0x4b0:  mov    %eax,(%esp)
084cfe0d +0x4b3:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084cfe12 +0x4b8:  cmp    $0x5,%eax
084cfe15 +0x4bb:  jne    084cfe33 <+0x4d9>
084cfe17 +0x4bd:  mov    0xc(%ebp),%eax
084cfe1a +0x4c0:  mov    %eax,(%esp)
084cfe1d +0x4c3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084cfe22 +0x4c8:  mov    -0x30(%ebp),%edx
084cfe25 +0x4cb:  mov    0x29(%edx),%edx
084cfe28 +0x4ce:  cmp    %edx,%eax
084cfe2a +0x4d0:  je     084cfe33 <+0x4d9>
084cfe2c +0x4d2:  mov    $0x1,%eax
084cfe31 +0x4d7:  jmp    084cfe38 <+0x4de>
084cfe33 +0x4d9:  mov    $0x0,%eax
084cfe38 +0x4de:  test   %al,%al
084cfe3a +0x4e0:  je     084cfe61 <+0x507>
084cfe3c +0x4e2:  movl   $0xd8,0x8(%esp)
084cfe44 +0x4ea:  movl   $0x13c,0x4(%esp)
084cfe4c +0x4f2:  mov    0xc(%ebp),%eax
084cfe4f +0x4f5:  mov    %eax,(%esp)
084cfe52 +0x4f8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084cfe57 +0x4fd:  mov    $0x0,%eax
084cfe5c +0x502:  jmp    084cff11 <+0x5b7>
084cfe61 +0x507:  addl   $0x1,-0x18(%ebp)
084cfe65 +0x50b:  mov    -0x30(%ebp),%eax
084cfe68 +0x50e:  movzbl 0x68(%eax),%eax
084cfe6c +0x512:  movzbl %al,%eax
084cfe6f +0x515:  cmp    -0x18(%ebp),%eax
084cfe72 +0x518:  setg   %al
084cfe75 +0x51b:  test   %al,%al
084cfe77 +0x51d:  jne    084cfd6b <+0x411>
084cfe7d +0x523:  mov    -0x30(%ebp),%eax
084cfe80 +0x526:  mov    0x64(%eax),%eax
084cfe83 +0x529:  test   %eax,%eax
084cfe85 +0x52b:  je     084cfee5 <+0x58b>
084cfe87 +0x52d:  movl   $0x7fffffff,-0xc(%ebp)
084cfe8e +0x534:  mov    -0x30(%ebp),%eax
084cfe91 +0x537:  add    $0x46,%eax
084cfe94 +0x53a:  mov    %eax,%esi
084cfe96 +0x53c:  mov    -0x30(%ebp),%eax
084cfe99 +0x53f:  mov    0x21(%eax),%eax
084cfe9c +0x542:  mov    %eax,%ebx
084cfe9e +0x544:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084cfea3 +0x549:  mov    %esi,0x8(%esp)
084cfea7 +0x54d:  mov    %ebx,0x4(%esp)
084cfeab +0x551:  mov    %eax,(%esp)
084cfeae +0x554:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
084cfeb3 +0x559:  mov    %eax,-0xc(%ebp)
084cfeb6 +0x55c:  mov    -0xc(%ebp),%edx
084cfeb9 +0x55f:  mov    -0x30(%ebp),%eax
084cfebc +0x562:  mov    0x64(%eax),%eax
084cfebf +0x565:  cmp    %eax,%edx
084cfec1 +0x567:  jae    084cfee5 <+0x58b>
084cfec3 +0x569:  movl   $0xe,0x8(%esp)
084cfecb +0x571:  movl   $0x13c,0x4(%esp)
084cfed3 +0x579:  mov    0xc(%ebp),%eax
084cfed6 +0x57c:  mov    %eax,(%esp)
084cfed9 +0x57f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084cfede +0x584:  mov    $0x0,%eax
084cfee3 +0x589:  jmp    084cff11 <+0x5b7>
084cfee5 +0x58b:  mov    -0x30(%ebp),%eax
084cfee8 +0x58e:  mov    %eax,0x8(%esp)
084cfeec +0x592:  mov    0xc(%ebp),%eax
084cfeef +0x595:  mov    %eax,0x4(%esp)
084cfef3 +0x599:  mov    0x8(%ebp),%eax
084cfef6 +0x59c:  mov    %eax,(%esp)
084cfef9 +0x59f:  call   084cff18 <_ZN31Inter_MailBox_Req_CheckReceiver21SendDBThread_forchinaEP5CUserP26SIG_MAILBOX_CHECK_RECEIVER>  ; Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*)
084cfefe +0x5a4:  xor    $0x1,%eax
084cff01 +0x5a7:  test   %al,%al
084cff03 +0x5a9:  je     084cff0c <+0x5b2>
084cff05 +0x5ab:  mov    $0x0,%eax
084cff0a +0x5b0:  jmp    084cff11 <+0x5b7>
084cff0c +0x5b2:  mov    $0x0,%eax
084cff11 +0x5b7:  add    $0x60,%esp
084cff14 +0x5ba:  pop    %ebx
084cff15 +0x5bb:  pop    %esi
084cff16 +0x5bc:  pop    %ebp
084cff17 +0x5bd:  ret
```

## 反编译 C

```c
// Inter_MailBox_Req_CheckReceiver::dispatch_sig @ 0x84cf95a

/* Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  SIG_MAILBOX_CHECK_RECEIVER *pSVar7;
  PacketGuard local_40 [12];
  SIG_MAILBOX_CHECK_RECEIVER *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  CItem *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  CItem *local_14;
  uint local_10;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 3) {
    uVar5 = 0;
  }
  else {
    local_34 = (SIG_MAILBOX_CHECK_RECEIVER *)param_3;
    local_30 = 0x61;
    if (*(int *)(param_3 + 0x31) == 1) {
      local_30 = 0x43;
    }
    else if (*(int *)(param_3 + 0x31) == 2) {
      local_30 = 0x13c;
    }
    if (*(int *)(param_3 + 0x1d) == 0) {
      SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,3);
      uVar5 = 0;
    }
    else if (*(int *)(param_3 + 0x25) == 0) {
      cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)(param_3 + 0x29));
      if (cVar3 == '\0') {
        if (*(int *)(local_34 + 0x3fb9) == 0x4d) {
          SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x4d);
          uVar5 = 0;
        }
        else {
          local_2c = 0;
          if (*(int *)(local_34 + 0x31) == 1) {
            *(undefined4 *)(local_34 + 0x67) = *(undefined4 *)(local_34 + 0x1d);
            *(undefined4 *)(local_34 + 99) = *(undefined4 *)(local_34 + 0x29);
            cVar3 = ItemVendingMachine::BuyItem
                              (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                               (MSG_BUY_CERASHOP_ITEM *)(local_34 + 0x35));
            if (cVar3 == '\0') {
              uVar5 = 0x2d12;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            if (*(int *)(local_34 + 0x31) == 0) {
              uVar1 = *(uint *)(local_34 + 0x6e);
              local_28 = uVar1;
              if (uVar1 != 0) {
                pCVar6 = (CDataManager *)G_CDataManager();
                local_24 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                if (local_24 != (CItem *)0x0) {
                  cVar3 = InstanceRentalSystem::CheckRentableItem
                                    (GlobalData::s_rentalSystem,1,local_28);
                  if (cVar3 != '\0') {
                    return 0x11;
                  }
                  cVar3 = InstanceRentalSystem::CheckRentableItem
                                    (GlobalData::s_rentalSystem,2,local_28);
                  if (cVar3 != '\0') {
                    return 0x11;
                  }
                  iVar4 = CItem::GetAttachType(local_24);
                  if ((iVar4 == 5) &&
                     (iVar4 = CUser::get_acc_id((CUser *)param_2),
                     iVar4 != *(int *)(local_34 + 0x29))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x61,0xd8);
                    return 0;
                  }
                }
              }
              if (*(int *)(local_34 + 99) != 0) {
                local_20 = 0x7fffffff;
                pSVar7 = local_34 + 0x46;
                iVar4 = *(int *)(local_34 + 0x21);
                pCVar6 = (CDataManager *)G_CDataManager();
                local_20 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar4,(char *)pSVar7);
                if (local_20 < *(uint *)(local_34 + 99)) {
                  SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,0x61,0xe);
                  return 0;
                }
              }
              local_2c = WongWork::CMailBoxHelper::ReqDBSendNewMail
                                   ((CUser *)param_2,(MSG_MAILBOX_SEND *)(local_34 + 0x35),
                                    *(uint *)(local_34 + 0x1d),false,*(uint *)(local_34 + 0x29),0);
              if (local_2c == 0) {
                PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084cfce6 to 084cfd22 has its CatchHandler @ 084cfd25 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,local_30);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
                CUser::Send((CUser *)param_2,local_40);
                PacketGuard::~PacketGuard(local_40);
              }
              else {
                SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,
                                local_2c & 0xffff);
              }
            }
            else if (*(int *)(local_34 + 0x31) == 2) {
              for (local_1c = 0; local_1c < (int)(uint)(byte)local_34[0x68]; local_1c = local_1c + 1
                  ) {
                uVar1 = *(uint *)(local_34 + local_1c * 0xb + 0x6c);
                local_18 = uVar1;
                if (uVar1 != 0) {
                  pCVar6 = (CDataManager *)G_CDataManager();
                  local_14 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                  if (local_14 != (CItem *)0x0) {
                    cVar3 = InstanceRentalSystem::CheckRentableItem
                                      (GlobalData::s_rentalSystem,1,local_18);
                    if (cVar3 != '\0') {
                      return 0x11;
                    }
                    cVar3 = InstanceRentalSystem::CheckRentableItem
                                      (GlobalData::s_rentalSystem,2,local_18);
                    if (cVar3 != '\0') {
                      return 0x11;
                    }
                    iVar4 = CItem::GetAttachType(local_14);
                    if ((iVar4 == 5) &&
                       (iVar4 = CUser::get_acc_id((CUser *)param_2),
                       iVar4 != *(int *)(local_34 + 0x29))) {
                      bVar2 = true;
                    }
                    else {
                      bVar2 = false;
                    }
                    if (bVar2) {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,0xd8);
                      return 0;
                    }
                  }
                }
              }
              if (*(int *)(local_34 + 100) != 0) {
                local_10 = 0x7fffffff;
                pSVar7 = local_34 + 0x46;
                iVar4 = *(int *)(local_34 + 0x21);
                pCVar6 = (CDataManager *)G_CDataManager();
                local_10 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar4,(char *)pSVar7);
                if (local_10 < *(uint *)(local_34 + 100)) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,0xe);
                  return 0;
                }
              }
              cVar3 = SendDBThread_forchina
                                ((Inter_MailBox_Req_CheckReceiver *)param_1,(CUser *)param_2,
                                 local_34);
              if (cVar3 != '\x01') {
                return 0;
              }
            }
            uVar5 = 0;
          }
        }
      }
      else {
        SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x5a);
        uVar5 = 0;
      }
    }
    else {
      SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x18);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
