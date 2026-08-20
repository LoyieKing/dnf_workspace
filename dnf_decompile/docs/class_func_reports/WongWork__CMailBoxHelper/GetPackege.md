# GetPackege

`_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj`

`WongWork::CMailBoxHelper::GetPackege(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085549de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085549de  _ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj
#           WongWork::CMailBoxHelper::GetPackege(CUser*, unsigned int)
# range [0x085549de, 0x08554e8f]
085549de +0x000:  push   %ebp
085549df +0x001:  mov    %esp,%ebp
085549e1 +0x003:  push   %edi
085549e2 +0x004:  push   %esi
085549e3 +0x005:  push   %ebx
085549e4 +0x006:  sub    $0x8c,%esp
085549ea +0x00c:  mov    0x8(%ebp),%eax
085549ed +0x00f:  mov    %eax,(%esp)
085549f0 +0x012:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085549f5 +0x017:  mov    %eax,-0x20(%ebp)
085549f8 +0x01a:  cmpl   $0x0,-0x20(%ebp)
085549fc +0x01e:  jne    08554a1e <+0x40>
085549fe +0x020:  movl   $0x15,0x8(%esp)
08554a06 +0x028:  movl   $0x62,0x4(%esp)
08554a0e +0x030:  mov    0x8(%ebp),%eax
08554a11 +0x033:  mov    %eax,(%esp)
08554a14 +0x036:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08554a19 +0x03b:  jmp    08554e84 <+0x4a6>
08554a1e +0x040:  mov    0xc(%ebp),%eax
08554a21 +0x043:  mov    %eax,0x4(%esp)
08554a25 +0x047:  mov    -0x20(%ebp),%eax
08554a28 +0x04a:  mov    %eax,(%esp)
08554a2b +0x04d:  call   085522c4 <_ZNK8WongWork8CMailBox7GetMailEj>  ; WongWork::CMailBox::GetMail(unsigned int) const
08554a30 +0x052:  mov    %eax,-0x1c(%ebp)
08554a33 +0x055:  cmpl   $0x0,-0x1c(%ebp)
08554a37 +0x059:  jne    08554a59 <+0x7b>
08554a39 +0x05b:  movl   $0x15,0x8(%esp)
08554a41 +0x063:  movl   $0x62,0x4(%esp)
08554a49 +0x06b:  mov    0x8(%ebp),%eax
08554a4c +0x06e:  mov    %eax,(%esp)
08554a4f +0x071:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08554a54 +0x076:  jmp    08554e84 <+0x4a6>
08554a59 +0x07b:  lea    -0x34(%ebp),%eax
08554a5c +0x07e:  mov    %eax,(%esp)
08554a5f +0x081:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08554a64 +0x086:  movl   $0x0,-0x38(%ebp)
08554a6b +0x08d:  lea    -0x38(%ebp),%eax
08554a6e +0x090:  mov    %eax,0x10(%esp)
08554a72 +0x094:  movl   $0x1,0xc(%esp)
08554a7a +0x09c:  lea    -0x34(%ebp),%eax
08554a7d +0x09f:  mov    %eax,0x8(%esp)
08554a81 +0x0a3:  mov    -0x1c(%ebp),%eax
08554a84 +0x0a6:  mov    %eax,0x4(%esp)
08554a88 +0x0aa:  mov    0x8(%ebp),%eax
08554a8b +0x0ad:  mov    %eax,(%esp)
08554a8e +0x0b0:  call   08554650 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
08554a93 +0x0b5:  xor    $0x1,%eax
08554a96 +0x0b8:  test   %al,%al
08554a98 +0x0ba:  je     08554abc <+0xde>
08554a9a +0x0bc:  mov    -0x38(%ebp),%eax
08554a9d +0x0bf:  movzbl %al,%eax
08554aa0 +0x0c2:  mov    %eax,0x8(%esp)
08554aa4 +0x0c6:  movl   $0x62,0x4(%esp)
08554aac +0x0ce:  mov    0x8(%ebp),%eax
08554aaf +0x0d1:  mov    %eax,(%esp)
08554ab2 +0x0d4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08554ab7 +0x0d9:  jmp    08554e79 <+0x49b>
08554abc +0x0de:  lea    -0x38(%ebp),%eax
08554abf +0x0e1:  mov    %eax,0x10(%esp)
08554ac3 +0x0e5:  movl   $0x0,0xc(%esp)
08554acb +0x0ed:  lea    -0x34(%ebp),%eax
08554ace +0x0f0:  mov    %eax,0x8(%esp)
08554ad2 +0x0f4:  mov    -0x1c(%ebp),%eax
08554ad5 +0x0f7:  mov    %eax,0x4(%esp)
08554ad9 +0x0fb:  mov    0x8(%ebp),%eax
08554adc +0x0fe:  mov    %eax,(%esp)
08554adf +0x101:  call   08554650 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
08554ae4 +0x106:  lea    -0x44(%ebp),%eax
08554ae7 +0x109:  mov    %eax,(%esp)
08554aea +0x10c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08554aef +0x111:  lea    -0x28(%ebp),%eax
08554af2 +0x114:  lea    -0x34(%ebp),%edx
08554af5 +0x117:  mov    %edx,0x4(%esp)
08554af9 +0x11b:  mov    %eax,(%esp)
08554afc +0x11e:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08554b01 +0x123:  sub    $0x4,%esp
08554b04 +0x126:  lea    -0x28(%ebp),%eax
08554b07 +0x129:  mov    %eax,0x4(%esp)
08554b0b +0x12d:  lea    -0x48(%ebp),%eax
08554b0e +0x130:  mov    %eax,(%esp)
08554b11 +0x133:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08554b16 +0x138:  lea    -0x24(%ebp),%eax
08554b19 +0x13b:  lea    -0x34(%ebp),%edx
08554b1c +0x13e:  mov    %edx,0x4(%esp)
08554b20 +0x142:  mov    %eax,(%esp)
08554b23 +0x145:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08554b28 +0x14a:  sub    $0x4,%esp
08554b2b +0x14d:  lea    -0x24(%ebp),%eax
08554b2e +0x150:  mov    %eax,0x4(%esp)
08554b32 +0x154:  lea    -0x4c(%ebp),%eax
08554b35 +0x157:  mov    %eax,(%esp)
08554b38 +0x15a:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08554b3d +0x15f:  jmp    08554c8d <+0x2af>
08554b42 +0x164:  movl   $0xe,0x8(%esp)
08554b4a +0x16c:  movl   $0x0,0x4(%esp)
08554b52 +0x174:  lea    -0x44(%ebp),%eax
08554b55 +0x177:  mov    %eax,(%esp)
08554b58 +0x17a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08554b5d +0x17f:  lea    -0x48(%ebp),%eax
08554b60 +0x182:  mov    %eax,(%esp)
08554b63 +0x185:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554b68 +0x18a:  mov    (%eax),%eax
08554b6a +0x18c:  mov    %eax,0x4(%esp)
08554b6e +0x190:  lea    -0x44(%ebp),%eax
08554b71 +0x193:  mov    %eax,(%esp)
08554b74 +0x196:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08554b79 +0x19b:  movl   $0x1,0x4(%esp)
08554b81 +0x1a3:  lea    -0x44(%ebp),%eax
08554b84 +0x1a6:  mov    %eax,(%esp)
08554b87 +0x1a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08554b8c +0x1ae:  lea    -0x48(%ebp),%eax
08554b8f +0x1b1:  mov    %eax,(%esp)
08554b92 +0x1b4:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554b97 +0x1b9:  mov    (%eax),%eax
08554b99 +0x1bb:  cmp    $0x1,%eax
08554b9c +0x1be:  sete   %al
08554b9f +0x1c1:  test   %al,%al
08554ba1 +0x1c3:  je     08554bdc <+0x1fe>
08554ba3 +0x1c5:  lea    -0x48(%ebp),%eax
08554ba6 +0x1c8:  mov    %eax,(%esp)
08554ba9 +0x1cb:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554bae +0x1d0:  mov    0x4(%eax),%ebx
08554bb1 +0x1d3:  mov    0x8(%ebp),%eax
08554bb4 +0x1d6:  mov    %eax,(%esp)
08554bb7 +0x1d9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08554bbc +0x1de:  lea    -0x44(%ebp),%edx
08554bbf +0x1e1:  mov    %edx,0xc(%esp)
08554bc3 +0x1e5:  mov    %ebx,0x8(%esp)
08554bc7 +0x1e9:  movl   $0x2,0x4(%esp)
08554bcf +0x1f1:  mov    %eax,(%esp)
08554bd2 +0x1f4:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08554bd7 +0x1f9:  jmp    08554c5d <+0x27f>
08554bdc +0x1fe:  lea    -0x48(%ebp),%eax
08554bdf +0x201:  mov    %eax,(%esp)
08554be2 +0x204:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554be7 +0x209:  mov    (%eax),%eax
08554be9 +0x20b:  cmp    $0x7,%eax
08554bec +0x20e:  sete   %al
08554bef +0x211:  test   %al,%al
08554bf1 +0x213:  je     08554c29 <+0x24b>
08554bf3 +0x215:  lea    -0x48(%ebp),%eax
08554bf6 +0x218:  mov    %eax,(%esp)
08554bf9 +0x21b:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554bfe +0x220:  mov    0x4(%eax),%ebx
08554c01 +0x223:  mov    0x8(%ebp),%eax
08554c04 +0x226:  mov    %eax,(%esp)
08554c07 +0x229:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08554c0c +0x22e:  lea    -0x44(%ebp),%edx
08554c0f +0x231:  mov    %edx,0xc(%esp)
08554c13 +0x235:  mov    %ebx,0x8(%esp)
08554c17 +0x239:  movl   $0x3,0x4(%esp)
08554c1f +0x241:  mov    %eax,(%esp)
08554c22 +0x244:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08554c27 +0x249:  jmp    08554c5d <+0x27f>
08554c29 +0x24b:  lea    -0x48(%ebp),%eax
08554c2c +0x24e:  mov    %eax,(%esp)
08554c2f +0x251:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08554c34 +0x256:  mov    0x4(%eax),%ebx
08554c37 +0x259:  mov    0x8(%ebp),%eax
08554c3a +0x25c:  mov    %eax,(%esp)
08554c3d +0x25f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08554c42 +0x264:  lea    -0x44(%ebp),%edx
08554c45 +0x267:  mov    %edx,0xc(%esp)
08554c49 +0x26b:  mov    %ebx,0x8(%esp)
08554c4d +0x26f:  movl   $0x1,0x4(%esp)
08554c55 +0x277:  mov    %eax,(%esp)
08554c58 +0x27a:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08554c5d +0x27f:  movl   $0x1,0x4(%esp)
08554c65 +0x287:  lea    -0x44(%ebp),%eax
08554c68 +0x28a:  mov    %eax,(%esp)
08554c6b +0x28d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08554c70 +0x292:  lea    -0x44(%ebp),%eax
08554c73 +0x295:  mov    %eax,0x4(%esp)
08554c77 +0x299:  mov    0x8(%ebp),%eax
08554c7a +0x29c:  mov    %eax,(%esp)
08554c7d +0x29f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08554c82 +0x2a4:  lea    -0x48(%ebp),%eax
08554c85 +0x2a7:  mov    %eax,(%esp)
08554c88 +0x2aa:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08554c8d +0x2af:  lea    -0x4c(%ebp),%eax
08554c90 +0x2b2:  mov    %eax,0x4(%esp)
08554c94 +0x2b6:  lea    -0x48(%ebp),%eax
08554c97 +0x2b9:  mov    %eax,(%esp)
08554c9a +0x2bc:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08554c9f +0x2c1:  test   %al,%al
08554ca1 +0x2c3:  jne    08554b42 <+0x164>
08554ca7 +0x2c9:  mov    -0x1c(%ebp),%eax
08554caa +0x2cc:  mov    %eax,(%esp)
08554cad +0x2cf:  call   08557516 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x77>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x77
08554cb2 +0x2d4:  mov    %eax,%ecx
08554cb4 +0x2d6:  mov    %ecx,%eax
08554cb6 +0x2d8:  shr    $0x5,%eax
08554cb9 +0x2db:  mov    %eax,-0x6c(%ebp)
08554cbc +0x2de:  mov    $0xa7c5ac5,%edx
08554cc1 +0x2e3:  mov    -0x6c(%ebp),%eax
08554cc4 +0x2e6:  mul    %edx
08554cc6 +0x2e8:  mov    %edx,%eax
08554cc8 +0x2ea:  shr    $0x7,%eax
08554ccb +0x2ed:  imul   $&_ZL14gUnicodeBuffer+0xe174,%eax,%eax
08554cd1 +0x2f3:  mov    %ecx,%edx
08554cd3 +0x2f5:  sub    %eax,%edx
08554cd5 +0x2f7:  mov    %edx,%eax
08554cd7 +0x2f9:  test   %eax,%eax
08554cd9 +0x2fb:  setne  %al
08554cdc +0x2fe:  test   %al,%al
08554cde +0x300:  je     08554d4b <+0x36d>
08554ce0 +0x302:  mov    -0x1c(%ebp),%eax
08554ce3 +0x305:  mov    %eax,(%esp)
08554ce6 +0x308:  call   085574fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x5f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x5f
08554ceb +0x30d:  mov    %eax,(%esp)
08554cee +0x310:  call   0807e3b0 <_init+0xca8>
08554cf3 +0x315:  mov    %eax,-0x5c(%ebp)
08554cf6 +0x318:  mov    -0x1c(%ebp),%eax
08554cf9 +0x31b:  mov    %eax,(%esp)
08554cfc +0x31e:  call   085574fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x5f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x5f
08554d01 +0x323:  mov    %eax,%edi
08554d03 +0x325:  mov    -0x1c(%ebp),%eax
08554d06 +0x328:  mov    %eax,(%esp)
08554d09 +0x32b:  call   08557516 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x77>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x77
08554d0e +0x330:  mov    %eax,%esi
08554d10 +0x332:  mov    0x8(%ebp),%eax
08554d13 +0x335:  mov    %eax,(%esp)
08554d16 +0x338:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08554d1b +0x33d:  mov    %eax,%ebx
08554d1d +0x33f:  mov    0x8(%ebp),%eax
08554d20 +0x342:  mov    %eax,(%esp)
08554d23 +0x345:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08554d28 +0x34a:  mov    -0x5c(%ebp),%edx
08554d2b +0x34d:  mov    %edx,0x14(%esp)
08554d2f +0x351:  mov    %edi,0x10(%esp)
08554d33 +0x355:  mov    %esi,0xc(%esp)
08554d37 +0x359:  movl   $0x0,0x8(%esp)
08554d3f +0x361:  mov    %ebx,0x4(%esp)
08554d43 +0x365:  mov    %eax,(%esp)
08554d46 +0x368:  call   0843a13e <_ZN29DB_AccountHack_CheckMyAccount11makeRequestEjjjjPci>  ; DB_AccountHack_CheckMyAccount::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char*, int)
08554d4b +0x36d:  mov    0x8(%ebp),%eax
08554d4e +0x370:  mov    %eax,(%esp)
08554d51 +0x373:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08554d56 +0x378:  mov    %eax,%ebx
08554d58 +0x37a:  mov    -0x1c(%ebp),%eax
08554d5b +0x37d:  mov    %eax,(%esp)
08554d5e +0x380:  call   085574fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x5f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x5f
08554d63 +0x385:  mov    0x8(%ebp),%edx
08554d66 +0x388:  add    $0x79700,%edx
08554d6c +0x38e:  mov    %ebx,0xc(%esp)
08554d70 +0x392:  mov    %eax,0x8(%esp)
08554d74 +0x396:  mov    0xc(%ebp),%eax
08554d77 +0x399:  mov    %eax,0x4(%esp)
08554d7b +0x39d:  mov    %edx,(%esp)
08554d7e +0x3a0:  call   086848a8 <_ZN15cUserHistoryLog8RecvMailEjPKcS1_>  ; cUserHistoryLog::RecvMail(unsigned int, char const*, char const*)
08554d83 +0x3a5:  lea    -0x44(%ebp),%eax
08554d86 +0x3a8:  mov    %eax,(%esp)
08554d89 +0x3ab:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08554d8e +0x3b0:  movl   $0x62,0x8(%esp)
08554d96 +0x3b8:  movl   $0x1,0x4(%esp)
08554d9e +0x3c0:  lea    -0x44(%ebp),%eax
08554da1 +0x3c3:  mov    %eax,(%esp)
08554da4 +0x3c6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08554da9 +0x3cb:  movl   $0x1,0x4(%esp)
08554db1 +0x3d3:  lea    -0x44(%ebp),%eax
08554db4 +0x3d6:  mov    %eax,(%esp)
08554db7 +0x3d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08554dbc +0x3de:  mov    0xc(%ebp),%eax
08554dbf +0x3e1:  mov    %eax,0x4(%esp)
08554dc3 +0x3e5:  lea    -0x44(%ebp),%eax
08554dc6 +0x3e8:  mov    %eax,(%esp)
08554dc9 +0x3eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08554dce +0x3f0:  movl   $0x1,0x4(%esp)
08554dd6 +0x3f8:  lea    -0x44(%ebp),%eax
08554dd9 +0x3fb:  mov    %eax,(%esp)
08554ddc +0x3fe:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08554de1 +0x403:  lea    -0x44(%ebp),%eax
08554de4 +0x406:  mov    %eax,0x4(%esp)
08554de8 +0x40a:  mov    0x8(%ebp),%eax
08554deb +0x40d:  mov    %eax,(%esp)
08554dee +0x410:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08554df3 +0x415:  movl   $0x0,-0x54(%ebp)
08554dfa +0x41c:  movl   $0x0,-0x50(%ebp)
08554e01 +0x423:  movl   $0x1,-0x54(%ebp)
08554e08 +0x42a:  mov    0xc(%ebp),%eax
08554e0b +0x42d:  mov    %eax,-0x50(%ebp)
08554e0e +0x430:  movl   $0x0,0x8(%esp)
08554e16 +0x438:  lea    -0x54(%ebp),%eax
08554e19 +0x43b:  mov    %eax,0x4(%esp)
08554e1d +0x43f:  mov    0x8(%ebp),%eax
08554e20 +0x442:  mov    %eax,(%esp)
08554e23 +0x445:  call   08556772 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb>  ; WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool)
08554e28 +0x44a:  mov    0xc(%ebp),%eax
08554e2b +0x44d:  mov    %eax,0x4(%esp)
08554e2f +0x451:  mov    -0x20(%ebp),%eax
08554e32 +0x454:  mov    %eax,(%esp)
08554e35 +0x457:  call   08552138 <_ZN8WongWork8CMailBox10RemoveMailEj>  ; WongWork::CMailBox::RemoveMail(unsigned int)
08554e3a +0x45c:  jmp    08554e51 <+0x473>
08554e3c +0x45e:  mov    %edx,%ebx
08554e3e +0x460:  mov    %eax,%esi
08554e40 +0x462:  lea    -0x44(%ebp),%eax
08554e43 +0x465:  mov    %eax,(%esp)
08554e46 +0x468:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08554e4b +0x46d:  mov    %esi,%eax
08554e4d +0x46f:  mov    %ebx,%edx
08554e4f +0x471:  jmp    08554e5e <+0x480>
08554e51 +0x473:  lea    -0x44(%ebp),%eax
08554e54 +0x476:  mov    %eax,(%esp)
08554e57 +0x479:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08554e5c +0x47e:  jmp    08554e79 <+0x49b>
08554e5e +0x480:  mov    %edx,%ebx
08554e60 +0x482:  mov    %eax,%esi
08554e62 +0x484:  lea    -0x34(%ebp),%eax
08554e65 +0x487:  mov    %eax,(%esp)
08554e68 +0x48a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08554e6d +0x48f:  mov    %esi,%eax
08554e6f +0x491:  mov    %ebx,%edx
08554e71 +0x493:  mov    %eax,(%esp)
08554e74 +0x496:  call   08ae3750 <_Unwind_Resume>
08554e79 +0x49b:  lea    -0x34(%ebp),%eax
08554e7c +0x49e:  mov    %eax,(%esp)
08554e7f +0x4a1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08554e84 +0x4a6:  lea    -0xc(%ebp),%esp
08554e87 +0x4a9:  add    $0x0,%esp
08554e8a +0x4ac:  pop    %ebx
08554e8b +0x4ad:  pop    %esi
08554e8c +0x4ae:  pop    %edi
08554e8d +0x4af:  pop    %ebp
08554e8e +0x4b0:  ret
08554e8f +0x4b1:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::GetPackege @ 0x85549de

/* WongWork::CMailBoxHelper::GetPackege(CUser*, unsigned int) */

void WongWork::CMailBoxHelper::GetPackege(CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  CInventory *pCVar6;
  uint uVar7;
  char *pcVar8;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint local_58;
  uint local_54;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_50 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_4c [4];
  PacketGuard local_48 [12];
  uint local_3c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [12];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  uint local_24;
  CMail *local_20;
  
  local_24 = CUser::GetMailBox(param_1);
  if (local_24 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x62,0x15);
  }
  else {
    local_20 = (CMail *)CMailBox::GetMail(local_24);
    if (local_20 == (CMail *)0x0) {
      CUser::SendCmdErrorPacket(param_1,0x62,0x15);
    }
    else {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_38);
      local_3c = 0;
                    /* try { // try from 08554a8e to 08554aee has its CatchHandler @ 08554e5e */
      cVar2 = _DoGetPackage(param_1,local_20,(vector *)local_38,true,(ENUM_ERROR *)&local_3c);
      if (cVar2 == '\x01') {
        _DoGetPackage(param_1,local_20,(vector *)local_38,false,(ENUM_ERROR *)&local_3c);
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 08554afc to 08554e39 has its CatchHandler @ 08554e3c */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_4c,local_2c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_50,local_28);
        while( true ) {
          bVar3 = __gnu_cxx::operator!=(local_4c,local_50);
          if (!bVar3) break;
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator->(local_4c);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*piVar4);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator->(local_4c);
          if (*piVar4 == 1) {
            iVar5 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_4c);
            uVar1 = *(undefined4 *)(iVar5 + 4);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::MakeItemPacket(pCVar6,2,uVar1,local_48);
          }
          else {
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_4c);
            if (*piVar4 == 7) {
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_4c);
              uVar1 = *(undefined4 *)(iVar5 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar6,3,uVar1,local_48);
            }
            else {
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_4c);
              uVar1 = *(undefined4 *)(iVar5 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar6,1,uVar1,local_48);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(param_1,local_48);
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_4c);
        }
        uVar7 = CMailBox::CMail::GetPackageMoney(local_20);
        if (uVar7 != (uVar7 / 100000) * 100000) {
          pcVar8 = (char *)CMailBox::CMail::GetSenderName(local_20);
          sVar9 = strlen(pcVar8);
          pcVar8 = (char *)CMailBox::CMail::GetSenderName(local_20);
          uVar7 = CMailBox::CMail::GetPackageMoney(local_20);
          uVar10 = CUser::get_acc_id(param_1);
          uVar11 = CUser::GetUID(param_1);
          DB_AccountHack_CheckMyAccount::makeRequest(uVar11,uVar10,0,uVar7,pcVar8,sVar9);
        }
        pcVar8 = (char *)CUser::get_acc_name(param_1);
        pcVar12 = (char *)CMailBox::CMail::GetSenderName(local_20);
        cUserHistoryLog::RecvMail((cUserHistoryLog *)(param_1 + 0x79700),param_2,pcVar12,pcVar8);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x62);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,param_2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
        CUser::Send(param_1,local_48);
        local_58 = 1;
        local_54 = param_2;
        ReqDBRemoveMail(param_1,&local_58,false);
        CMailBox::RemoveMail(local_24);
                    /* try { // try from 08554e57 to 08554e5b has its CatchHandler @ 08554e5e */
        PacketGuard::~PacketGuard(local_48);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x62,local_3c & 0xff);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_38);
    }
  }
  return;
}
```
