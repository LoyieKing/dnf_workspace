# dispatch_sig

`_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_QuestAction` | `0x081ee010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ee010  _ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ee010, 0x081ee59b]
081ee010 +0x000:  push   %ebp
081ee011 +0x001:  mov    %esp,%ebp
081ee013 +0x003:  push   %edi
081ee014 +0x004:  push   %esi
081ee015 +0x005:  push   %ebx
081ee016 +0x006:  sub    $0x6c,%esp
081ee019 +0x009:  mov    0xc(%ebp),%eax
081ee01c +0x00c:  mov    %eax,(%esp)
081ee01f +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ee024 +0x014:  cmp    $0x2,%eax
081ee027 +0x017:  setle  %al
081ee02a +0x01a:  test   %al,%al
081ee02c +0x01c:  je     081ee038 <+0x28>
081ee02e +0x01e:  mov    $0x0,%eax
081ee033 +0x023:  jmp    081ee594 <+0x584>
081ee038 +0x028:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ee03d +0x02d:  mov    %eax,(%esp)
081ee040 +0x030:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
081ee045 +0x035:  test   %al,%al
081ee047 +0x037:  je     081ee080 <+0x70>
081ee049 +0x039:  movl   $0x1,0x4(%esp)
081ee051 +0x041:  mov    0x10(%ebp),%eax
081ee054 +0x044:  mov    %eax,(%esp)
081ee057 +0x047:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee05c +0x04c:  movzbl %al,%eax
081ee05f +0x04f:  movl   $0x1,0x8(%esp)
081ee067 +0x057:  mov    %eax,0x4(%esp)
081ee06b +0x05b:  mov    0xc(%ebp),%eax
081ee06e +0x05e:  mov    %eax,(%esp)
081ee071 +0x061:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ee076 +0x066:  mov    $0x0,%eax
081ee07b +0x06b:  jmp    081ee594 <+0x584>
081ee080 +0x070:  movw   $0x0,-0x22(%ebp)
081ee086 +0x076:  lea    -0x22(%ebp),%eax
081ee089 +0x079:  mov    %eax,0x4(%esp)
081ee08d +0x07d:  mov    0x10(%ebp),%eax
081ee090 +0x080:  mov    %eax,(%esp)
081ee093 +0x083:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee098 +0x088:  test   %al,%al
081ee09a +0x08a:  je     081ee135 <+0x125>
081ee0a0 +0x090:  movl   $0x1,0x4(%esp)
081ee0a8 +0x098:  mov    0x10(%ebp),%eax
081ee0ab +0x09b:  mov    %eax,(%esp)
081ee0ae +0x09e:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee0b3 +0x0a3:  movzbl %al,%edx
081ee0b6 +0x0a6:  movzwl -0x22(%ebp),%eax
081ee0ba +0x0aa:  cwtl
081ee0bb +0x0ab:  cmp    %eax,%edx
081ee0bd +0x0ad:  setne  %al
081ee0c0 +0x0b0:  test   %al,%al
081ee0c2 +0x0b2:  je     081ee135 <+0x125>
081ee0c4 +0x0b4:  mov    0xc(%ebp),%eax
081ee0c7 +0x0b7:  mov    %eax,(%esp)
081ee0ca +0x0ba:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ee0cf +0x0bf:  movl   $0x0,0x14(%esp)
081ee0d7 +0x0c7:  movl   $0x0,0x10(%esp)
081ee0df +0x0cf:  movl   $0x1,0xc(%esp)
081ee0e7 +0x0d7:  movl   $0x333,0x8(%esp)
081ee0ef +0x0df:  mov    0xc(%ebp),%edx
081ee0f2 +0x0e2:  mov    %edx,0x4(%esp)
081ee0f6 +0x0e6:  mov    %eax,(%esp)
081ee0f9 +0x0e9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ee0fe +0x0ee:  movl   $0x1,0x4(%esp)
081ee106 +0x0f6:  mov    0x10(%ebp),%eax
081ee109 +0x0f9:  mov    %eax,(%esp)
081ee10c +0x0fc:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee111 +0x101:  movzbl %al,%eax
081ee114 +0x104:  movl   $0x1,0x8(%esp)
081ee11c +0x10c:  mov    %eax,0x4(%esp)
081ee120 +0x110:  mov    0xc(%ebp),%eax
081ee123 +0x113:  mov    %eax,(%esp)
081ee126 +0x116:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ee12b +0x11b:  mov    $0x0,%eax
081ee130 +0x120:  jmp    081ee594 <+0x584>
081ee135 +0x125:  movl   $0x1,0x4(%esp)
081ee13d +0x12d:  mov    0x10(%ebp),%eax
081ee140 +0x130:  mov    %eax,(%esp)
081ee143 +0x133:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee148 +0x138:  movzbl %al,%eax
081ee14b +0x13b:  cmp    $0x21,%eax
081ee14e +0x13e:  jl     081ee58f <+0x57f>
081ee154 +0x144:  cmp    $0x22,%eax
081ee157 +0x147:  jle    081ee170 <+0x160>
081ee159 +0x149:  cmp    $0x23,%eax
081ee15c +0x14c:  je     081ee3b2 <+0x3a2>
081ee162 +0x152:  cmp    $0x24,%eax
081ee165 +0x155:  je     081ee278 <+0x268>
081ee16b +0x15b:  jmp    081ee58f <+0x57f>
081ee170 +0x160:  lea    -0x31(%ebp),%eax
081ee173 +0x163:  add    $0xd,%eax
081ee176 +0x166:  mov    %eax,0x4(%esp)
081ee17a +0x16a:  mov    0x10(%ebp),%eax
081ee17d +0x16d:  mov    %eax,(%esp)
081ee180 +0x170:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee185 +0x175:  xor    $0x1,%eax
081ee188 +0x178:  test   %al,%al
081ee18a +0x17a:  je     081ee1b5 <+0x1a5>
081ee18c +0x17c:  movl   $0x0,0xc(%esp)
081ee194 +0x184:  movl   $0x0,0x8(%esp)
081ee19c +0x18c:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee1a4 +0x194:  movl   $0x7149,(%esp)
081ee1ab +0x19b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee1b0 +0x1a0:  jmp    081ee594 <+0x584>
081ee1b5 +0x1a5:  movzwl -0x24(%ebp),%eax
081ee1b9 +0x1a9:  movswl %ax,%ebx
081ee1bc +0x1ac:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ee1c1 +0x1b1:  mov    %ebx,0x4(%esp)
081ee1c5 +0x1b5:  mov    %eax,(%esp)
081ee1c8 +0x1b8:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
081ee1cd +0x1bd:  mov    %eax,-0x20(%ebp)
081ee1d0 +0x1c0:  cmpl   $0x0,-0x20(%ebp)
081ee1d4 +0x1c4:  jne    081ee1e0 <+0x1d0>
081ee1d6 +0x1c6:  mov    $0x0,%eax
081ee1db +0x1cb:  jmp    081ee594 <+0x584>
081ee1e0 +0x1d0:  movl   $0x1,0x4(%esp)
081ee1e8 +0x1d8:  mov    0x10(%ebp),%eax
081ee1eb +0x1db:  mov    %eax,(%esp)
081ee1ee +0x1de:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee1f3 +0x1e3:  cmp    $0x21,%al
081ee1f5 +0x1e5:  sete   %al
081ee1f8 +0x1e8:  test   %al,%al
081ee1fa +0x1ea:  je     081ee233 <+0x223>
081ee1fc +0x1ec:  movzwl -0x24(%ebp),%eax
081ee200 +0x1f0:  movswl %ax,%edx
081ee203 +0x1f3:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
081ee208 +0x1f8:  mov    %edx,0x4(%esp)
081ee20c +0x1fc:  mov    %eax,(%esp)
081ee20f +0x1ff:  call   08234e46 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4f0
081ee214 +0x204:  test   %al,%al
081ee216 +0x206:  je     081ee233 <+0x223>
081ee218 +0x208:  movl   $0x8,0x8(%esp)
081ee220 +0x210:  movl   $0x21,0x4(%esp)
081ee228 +0x218:  mov    0xc(%ebp),%eax
081ee22b +0x21b:  mov    %eax,(%esp)
081ee22e +0x21e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ee233 +0x223:  movzwl -0x24(%ebp),%eax
081ee237 +0x227:  movswl %ax,%ebx
081ee23a +0x22a:  movl   $0x1,0x4(%esp)
081ee242 +0x232:  mov    0x10(%ebp),%eax
081ee245 +0x235:  mov    %eax,(%esp)
081ee248 +0x238:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee24d +0x23d:  movzbl %al,%eax
081ee250 +0x240:  movl   $0x0,0x10(%esp)
081ee258 +0x248:  movl   $0x0,0xc(%esp)
081ee260 +0x250:  mov    %ebx,0x8(%esp)
081ee264 +0x254:  mov    %eax,0x4(%esp)
081ee268 +0x258:  mov    0xc(%ebp),%eax
081ee26b +0x25b:  mov    %eax,(%esp)
081ee26e +0x25e:  call   0866da8a <_ZN5CUser12quest_actionEiiii>  ; CUser::quest_action(int, int, int, int)
081ee273 +0x263:  jmp    081ee58f <+0x57f>
081ee278 +0x268:  lea    -0x44(%ebp),%eax
081ee27b +0x26b:  add    $0xd,%eax
081ee27e +0x26e:  mov    %eax,0x4(%esp)
081ee282 +0x272:  mov    0x10(%ebp),%eax
081ee285 +0x275:  mov    %eax,(%esp)
081ee288 +0x278:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee28d +0x27d:  xor    $0x1,%eax
081ee290 +0x280:  test   %al,%al
081ee292 +0x282:  je     081ee2bd <+0x2ad>
081ee294 +0x284:  movl   $0x0,0xc(%esp)
081ee29c +0x28c:  movl   $0x0,0x8(%esp)
081ee2a4 +0x294:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee2ac +0x29c:  movl   $0x719a,(%esp)
081ee2b3 +0x2a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee2b8 +0x2a8:  jmp    081ee594 <+0x584>
081ee2bd +0x2ad:  lea    -0x44(%ebp),%eax
081ee2c0 +0x2b0:  add    $0xf,%eax
081ee2c3 +0x2b3:  mov    %eax,0x4(%esp)
081ee2c7 +0x2b7:  mov    0x10(%ebp),%eax
081ee2ca +0x2ba:  mov    %eax,(%esp)
081ee2cd +0x2bd:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee2d2 +0x2c2:  xor    $0x1,%eax
081ee2d5 +0x2c5:  test   %al,%al
081ee2d7 +0x2c7:  je     081ee302 <+0x2f2>
081ee2d9 +0x2c9:  movl   $0x0,0xc(%esp)
081ee2e1 +0x2d1:  movl   $0x0,0x8(%esp)
081ee2e9 +0x2d9:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee2f1 +0x2e1:  movl   $0x719b,(%esp)
081ee2f8 +0x2e8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee2fd +0x2ed:  jmp    081ee594 <+0x584>
081ee302 +0x2f2:  lea    -0x44(%ebp),%eax
081ee305 +0x2f5:  add    $0x11,%eax
081ee308 +0x2f8:  mov    %eax,0x4(%esp)
081ee30c +0x2fc:  mov    0x10(%ebp),%eax
081ee30f +0x2ff:  mov    %eax,(%esp)
081ee312 +0x302:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee317 +0x307:  xor    $0x1,%eax
081ee31a +0x30a:  test   %al,%al
081ee31c +0x30c:  je     081ee347 <+0x337>
081ee31e +0x30e:  movl   $0x0,0xc(%esp)
081ee326 +0x316:  movl   $0x0,0x8(%esp)
081ee32e +0x31e:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee336 +0x326:  movl   $0x719c,(%esp)
081ee33d +0x32d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee342 +0x332:  jmp    081ee594 <+0x584>
081ee347 +0x337:  movzwl -0x33(%ebp),%eax
081ee34b +0x33b:  test   %ax,%ax
081ee34e +0x33e:  jle    081ee58e <+0x57e>
081ee354 +0x344:  movzwl -0x33(%ebp),%eax
081ee358 +0x348:  movswl %ax,%edi
081ee35b +0x34b:  movzwl -0x35(%ebp),%eax
081ee35f +0x34f:  movswl %ax,%esi
081ee362 +0x352:  movzwl -0x37(%ebp),%eax
081ee366 +0x356:  movswl %ax,%ebx
081ee369 +0x359:  movl   $0x1,0x4(%esp)
081ee371 +0x361:  mov    0x10(%ebp),%eax
081ee374 +0x364:  mov    %eax,(%esp)
081ee377 +0x367:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee37c +0x36c:  movzbl %al,%eax
081ee37f +0x36f:  mov    %edi,0x10(%esp)
081ee383 +0x373:  mov    %esi,0xc(%esp)
081ee387 +0x377:  mov    %ebx,0x8(%esp)
081ee38b +0x37b:  mov    %eax,0x4(%esp)
081ee38f +0x37f:  mov    0xc(%ebp),%eax
081ee392 +0x382:  mov    %eax,(%esp)
081ee395 +0x385:  call   0866da8a <_ZN5CUser12quest_actionEiiii>  ; CUser::quest_action(int, int, int, int)
081ee39a +0x38a:  movl   $0x0,0x4(%esp)
081ee3a2 +0x392:  mov    0xc(%ebp),%eax
081ee3a5 +0x395:  mov    %eax,(%esp)
081ee3a8 +0x398:  call   0822fc8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5338>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5338
081ee3ad +0x39d:  jmp    081ee58f <+0x57f>
081ee3b2 +0x3a2:  mov    0xc(%ebp),%eax
081ee3b5 +0x3a5:  mov    %eax,(%esp)
081ee3b8 +0x3a8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ee3bd +0x3ad:  cmp    $0x5,%eax
081ee3c0 +0x3b0:  sete   %al
081ee3c3 +0x3b3:  test   %al,%al
081ee3c5 +0x3b5:  je     081ee45e <+0x44e>
081ee3cb +0x3bb:  mov    0xc(%ebp),%eax
081ee3ce +0x3be:  mov    %eax,(%esp)
081ee3d1 +0x3c1:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ee3d6 +0x3c6:  mov    %eax,-0x1c(%ebp)
081ee3d9 +0x3c9:  cmpl   $0x0,-0x1c(%ebp)
081ee3dd +0x3cd:  jne    081ee446 <+0x436>
081ee3df +0x3cf:  mov    0xc(%ebp),%eax
081ee3e2 +0x3d2:  mov    %eax,(%esp)
081ee3e5 +0x3d5:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ee3ea +0x3da:  movswl %ax,%ebx
081ee3ed +0x3dd:  mov    0xc(%ebp),%eax
081ee3f0 +0x3e0:  mov    %eax,(%esp)
081ee3f3 +0x3e3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ee3f8 +0x3e8:  movl   $0x0,0x4(%esp)
081ee400 +0x3f0:  mov    %eax,(%esp)
081ee403 +0x3f3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081ee408 +0x3f8:  mov    %ebx,0x18(%esp)
081ee40c +0x3fc:  mov    %eax,0x14(%esp)
081ee410 +0x400:  movl   $"<IN_DUNGEON_NULL_PARTY> error m_id(%s), PartyIndex(%d)",0x10(%esp)
081ee418 +0x408:  movl   $0x71af,0xc(%esp)
081ee420 +0x410:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081ee428 +0x418:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081ee430 +0x420:  movl   $0x1,(%esp)
081ee437 +0x427:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081ee43c +0x42c:  mov    $0x0,%eax
081ee441 +0x431:  jmp    081ee594 <+0x584>
081ee446 +0x436:  mov    -0x1c(%ebp),%eax
081ee449 +0x439:  mov    0xcd8(%eax),%eax
081ee44f +0x43f:  cmp    $0x1,%eax
081ee452 +0x442:  jne    081ee45e <+0x44e>
081ee454 +0x444:  mov    $0x0,%eax
081ee459 +0x449:  jmp    081ee594 <+0x584>
081ee45e +0x44e:  lea    -0x55(%ebp),%eax
081ee461 +0x451:  add    $0xd,%eax
081ee464 +0x454:  mov    %eax,0x4(%esp)
081ee468 +0x458:  mov    0x10(%ebp),%eax
081ee46b +0x45b:  mov    %eax,(%esp)
081ee46e +0x45e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ee473 +0x463:  xor    $0x1,%eax
081ee476 +0x466:  test   %al,%al
081ee478 +0x468:  je     081ee4a3 <+0x493>
081ee47a +0x46a:  movl   $0x0,0xc(%esp)
081ee482 +0x472:  movl   $0x0,0x8(%esp)
081ee48a +0x47a:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee492 +0x482:  movl   $0x71b9,(%esp)
081ee499 +0x489:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee49e +0x48e:  jmp    081ee594 <+0x584>
081ee4a3 +0x493:  lea    -0x55(%ebp),%eax
081ee4a6 +0x496:  add    $0xf,%eax
081ee4a9 +0x499:  mov    %eax,0x4(%esp)
081ee4ad +0x49d:  mov    0x10(%ebp),%eax
081ee4b0 +0x4a0:  mov    %eax,(%esp)
081ee4b3 +0x4a3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ee4b8 +0x4a8:  xor    $0x1,%eax
081ee4bb +0x4ab:  test   %al,%al
081ee4bd +0x4ad:  je     081ee4e8 <+0x4d8>
081ee4bf +0x4af:  movl   $0x0,0xc(%esp)
081ee4c7 +0x4b7:  movl   $0x0,0x8(%esp)
081ee4cf +0x4bf:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee4d7 +0x4c7:  movl   $0x71ba,(%esp)
081ee4de +0x4ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee4e3 +0x4d3:  jmp    081ee594 <+0x584>
081ee4e8 +0x4d8:  movb   $0x0,-0x45(%ebp)
081ee4ec +0x4dc:  movzbl -0x46(%ebp),%eax
081ee4f0 +0x4e0:  cmp    $0x10,%al
081ee4f2 +0x4e2:  je     081ee504 <+0x4f4>
081ee4f4 +0x4e4:  movzbl -0x46(%ebp),%eax
081ee4f8 +0x4e8:  cmp    $0x20,%al
081ee4fa +0x4ea:  je     081ee504 <+0x4f4>
081ee4fc +0x4ec:  movzbl -0x46(%ebp),%eax
081ee500 +0x4f0:  cmp    $0x40,%al
081ee502 +0x4f2:  jne    081ee546 <+0x536>
081ee504 +0x4f4:  lea    -0x55(%ebp),%eax
081ee507 +0x4f7:  add    $0x10,%eax
081ee50a +0x4fa:  mov    %eax,0x4(%esp)
081ee50e +0x4fe:  mov    0x10(%ebp),%eax
081ee511 +0x501:  mov    %eax,(%esp)
081ee514 +0x504:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ee519 +0x509:  xor    $0x1,%eax
081ee51c +0x50c:  test   %al,%al
081ee51e +0x50e:  je     081ee546 <+0x536>
081ee520 +0x510:  movl   $0x0,0xc(%esp)
081ee528 +0x518:  movl   $0x0,0x8(%esp)
081ee530 +0x520:  movl   $&_ZZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee538 +0x528:  movl   $0x71c4,(%esp)
081ee53f +0x52f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee544 +0x534:  jmp    081ee594 <+0x584>
081ee546 +0x536:  movzbl -0x45(%ebp),%eax
081ee54a +0x53a:  movsbl %al,%edi
081ee54d +0x53d:  movzbl -0x46(%ebp),%eax
081ee551 +0x541:  movsbl %al,%esi
081ee554 +0x544:  movzwl -0x48(%ebp),%eax
081ee558 +0x548:  movswl %ax,%ebx
081ee55b +0x54b:  movl   $0x1,0x4(%esp)
081ee563 +0x553:  mov    0x10(%ebp),%eax
081ee566 +0x556:  mov    %eax,(%esp)
081ee569 +0x559:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
081ee56e +0x55e:  movzbl %al,%eax
081ee571 +0x561:  mov    %edi,0x10(%esp)
081ee575 +0x565:  mov    %esi,0xc(%esp)
081ee579 +0x569:  mov    %ebx,0x8(%esp)
081ee57d +0x56d:  mov    %eax,0x4(%esp)
081ee581 +0x571:  mov    0xc(%ebp),%eax
081ee584 +0x574:  mov    %eax,(%esp)
081ee587 +0x577:  call   0866da8a <_ZN5CUser12quest_actionEiiii>  ; CUser::quest_action(int, int, int, int)
081ee58c +0x57c:  jmp    081ee58f <+0x57f>
081ee58e +0x57e:  nop
081ee58f +0x57f:  mov    $0x0,%eax
081ee594 +0x584:  add    $0x6c,%esp
081ee597 +0x587:  pop    %ebx
081ee598 +0x588:  pop    %esi
081ee599 +0x589:  pop    %edi
081ee59a +0x58a:  pop    %ebp
081ee59b +0x58b:  ret
```

## 反编译 C

```c
// DisPatcher_QuestAction::dispatch_sig @ 0x81ee010

/* DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_QuestAction::dispatch_sig(DisPatcher_QuestAction *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  GameWorld *this_00;
  CHackAnalyzer *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  short local_4c;
  char local_4a;
  char local_49 [14];
  short local_3b;
  short local_39;
  short local_37 [7];
  short local_28;
  ushort local_26;
  int local_24;
  int local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (2 < iVar6) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      local_26 = 0;
      cVar1 = PacketBuf::get_short(param_2,(short *)&local_26);
      if ((cVar1 == '\0') || (uVar4 = PacketBuf::at(param_2,1), (uVar4 & 0xff) == local_26)) {
        bVar3 = PacketBuf::at(param_2,1);
        if (0x20 < bVar3) {
          if (bVar3 < 0x23) {
            cVar1 = PacketBuf::get_short(param_2,&local_28);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x7149,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            iVar6 = G_CDataManager();
            local_24 = CDataManager::find_quest(iVar6);
            if (local_24 == 0) {
              return 0;
            }
            cVar1 = PacketBuf::at(param_2,1);
            if ((cVar1 == '!') &&
               (cVar1 = CTimeGate::setBlindTimeGateStateQuest(GlobalData::s_timeGate_,(int)local_28)
               , cVar1 != '\0')) {
              CUser::SendCmdErrorPacket(param_1,0x21,8);
            }
            uVar9 = PacketBuf::at(param_2,1);
            CUser::quest_action(param_1,uVar9 & 0xff,(int)local_28,0,0);
          }
          else if (bVar3 == 0x23) {
            iVar6 = CUser::get_state(param_1);
            if (iVar6 == 5) {
              local_20 = CUser::GetParty(param_1);
              if (local_20 == 0) {
                sVar5 = CUser::GetPartyIndex(param_1);
                uVar9 = CUser::get_acc_id(param_1);
                uVar8 = NumberToString(uVar9,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)",
                           0x71af,"<IN_DUNGEON_NULL_PARTY> error m_id(%s), PartyIndex(%d)",uVar8,
                           (int)sVar5);
                return 0;
              }
              if (*(int *)(local_20 + 0xcd8) == 1) {
                return 0;
              }
            }
            cVar1 = PacketBuf::get_short(param_2,&local_4c);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x71b9,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_byte(param_2,&local_4a);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x71ba,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            local_49[0] = '\0';
            if ((((local_4a == '\x10') || (local_4a == ' ')) || (local_4a == '@')) &&
               (cVar1 = PacketBuf::get_byte(param_2,local_49), cVar1 != '\x01')) {
              uVar8 = LineFunc(0x71c4,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            iVar6 = (int)local_49[0];
            uVar9 = PacketBuf::at(param_2,1);
            CUser::quest_action(param_1,uVar9 & 0xff,(int)local_4c,(int)local_4a,iVar6);
          }
          else if (bVar3 == 0x24) {
            cVar1 = PacketBuf::get_short(param_2,&local_3b);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719a,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_short(param_2,&local_39);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719b,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_short(param_2,local_37);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719c,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            if (0 < local_37[0]) {
              uVar9 = PacketBuf::at(param_2,1);
              CUser::quest_action(param_1,uVar9 & 0xff,(int)local_3b,(int)local_39,(int)local_37[0])
              ;
              CUser::setGmQuestFlag(param_1,false);
            }
          }
        }
      }
      else {
        pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x333,1,0,0);
        uVar2 = PacketBuf::at(param_2,1);
        CUser::SendCmdErrorPacket(param_1,uVar2,1);
      }
    }
    else {
      uVar2 = PacketBuf::at(param_2,1);
      CUser::SendCmdErrorPacket(param_1,uVar2,1);
    }
  }
  return 0;
}
```
