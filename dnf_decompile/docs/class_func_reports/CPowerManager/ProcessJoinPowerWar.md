# ProcessJoinPowerWar

`_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc`

`CPowerManager::ProcessJoinPowerWar(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847fb02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847fb02  _ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc
#           CPowerManager::ProcessJoinPowerWar(CUser*, char)
# range [0x0847fb02, 0x08480101]
0847fb02 +0x000:  push   %ebp
0847fb03 +0x001:  mov    %esp,%ebp
0847fb05 +0x003:  push   %edi
0847fb06 +0x004:  push   %esi
0847fb07 +0x005:  push   %ebx
0847fb08 +0x006:  sub    $0x5c,%esp
0847fb0b +0x009:  mov    0x10(%ebp),%eax
0847fb0e +0x00c:  mov    %al,-0x4c(%ebp)
0847fb11 +0x00f:  mov    0xc(%ebp),%eax
0847fb14 +0x012:  mov    %eax,(%esp)
0847fb17 +0x015:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0847fb1c +0x01a:  cmp    $0x9,%eax
0847fb1f +0x01d:  sete   %al
0847fb22 +0x020:  test   %al,%al
0847fb24 +0x022:  je     0847fb4b <+0x49>
0847fb26 +0x024:  movl   $0x15,0x8(%esp)
0847fb2e +0x02c:  movl   $0xc3,0x4(%esp)
0847fb36 +0x034:  mov    0xc(%ebp),%eax
0847fb39 +0x037:  mov    %eax,(%esp)
0847fb3c +0x03a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fb41 +0x03f:  mov    $0x1,%eax
0847fb46 +0x044:  jmp    084800f9 <+0x5f7>
0847fb4b +0x049:  mov    0xc(%ebp),%eax
0847fb4e +0x04c:  mov    %eax,(%esp)
0847fb51 +0x04f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0847fb56 +0x054:  cmp    $0xa,%eax
0847fb59 +0x057:  sete   %al
0847fb5c +0x05a:  test   %al,%al
0847fb5e +0x05c:  je     0847fb85 <+0x83>
0847fb60 +0x05e:  movl   $0x15,0x8(%esp)
0847fb68 +0x066:  movl   $0xc3,0x4(%esp)
0847fb70 +0x06e:  mov    0xc(%ebp),%eax
0847fb73 +0x071:  mov    %eax,(%esp)
0847fb76 +0x074:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fb7b +0x079:  mov    $0x1,%eax
0847fb80 +0x07e:  jmp    084800f9 <+0x5f7>
0847fb85 +0x083:  mov    0xc(%ebp),%eax
0847fb88 +0x086:  mov    %eax,(%esp)
0847fb8b +0x089:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
0847fb90 +0x08e:  test   %al,%al
0847fb92 +0x090:  je     0847fbb9 <+0xb7>
0847fb94 +0x092:  movl   $0x15,0x8(%esp)
0847fb9c +0x09a:  movl   $0xc3,0x4(%esp)
0847fba4 +0x0a2:  mov    0xc(%ebp),%eax
0847fba7 +0x0a5:  mov    %eax,(%esp)
0847fbaa +0x0a8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fbaf +0x0ad:  mov    $0x1,%eax
0847fbb4 +0x0b2:  jmp    084800f9 <+0x5f7>
0847fbb9 +0x0b7:  mov    0xc(%ebp),%eax
0847fbbc +0x0ba:  mov    %eax,(%esp)
0847fbbf +0x0bd:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0847fbc4 +0x0c2:  test   %eax,%eax
0847fbc6 +0x0c4:  sete   %al
0847fbc9 +0x0c7:  test   %al,%al
0847fbcb +0x0c9:  je     0847fbf2 <+0xf0>
0847fbcd +0x0cb:  movl   $0x64,0x8(%esp)
0847fbd5 +0x0d3:  movl   $0xc3,0x4(%esp)
0847fbdd +0x0db:  mov    0xc(%ebp),%eax
0847fbe0 +0x0de:  mov    %eax,(%esp)
0847fbe3 +0x0e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fbe8 +0x0e6:  mov    $0x1,%eax
0847fbed +0x0eb:  jmp    084800f9 <+0x5f7>
0847fbf2 +0x0f0:  mov    0xc(%ebp),%eax
0847fbf5 +0x0f3:  mov    %eax,(%esp)
0847fbf8 +0x0f6:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847fbfd +0x0fb:  test   %al,%al
0847fbff +0x0fd:  sete   %al
0847fc02 +0x100:  test   %al,%al
0847fc04 +0x102:  je     0847fc2b <+0x129>
0847fc06 +0x104:  movl   $0x82,0x8(%esp)
0847fc0e +0x10c:  movl   $0xc3,0x4(%esp)
0847fc16 +0x114:  mov    0xc(%ebp),%eax
0847fc19 +0x117:  mov    %eax,(%esp)
0847fc1c +0x11a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fc21 +0x11f:  mov    $0x1,%eax
0847fc26 +0x124:  jmp    084800f9 <+0x5f7>
0847fc2b +0x129:  cmpb   $0x0,-0x4c(%ebp)
0847fc2f +0x12d:  je     0847fc5c <+0x15a>
0847fc31 +0x12f:  cmpb   $0x1,-0x4c(%ebp)
0847fc35 +0x133:  je     0847fc5c <+0x15a>
0847fc37 +0x135:  movl   $0x1,0x8(%esp)
0847fc3f +0x13d:  movl   $0xc3,0x4(%esp)
0847fc47 +0x145:  mov    0xc(%ebp),%eax
0847fc4a +0x148:  mov    %eax,(%esp)
0847fc4d +0x14b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fc52 +0x150:  mov    $0x1,%eax
0847fc57 +0x155:  jmp    084800f9 <+0x5f7>
0847fc5c +0x15a:  movl   $0x0,-0x24(%ebp)
0847fc63 +0x161:  cmpb   $0x1,-0x4c(%ebp)
0847fc67 +0x165:  jne    0847fe2b <+0x329>
0847fc6d +0x16b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847fc72 +0x170:  mov    0x1b0(%eax),%esi
0847fc78 +0x176:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847fc7d +0x17b:  mov    0x378(%eax),%ebx
0847fc83 +0x181:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847fc88 +0x186:  add    $0xa628,%eax
0847fc8d +0x18b:  mov    %esi,0x8(%esp)
0847fc91 +0x18f:  mov    %ebx,0x4(%esp)
0847fc95 +0x193:  mov    %eax,(%esp)
0847fc98 +0x196:  call   08a59db4 <_ZN20PowerParameterScript19checkPowerWarServerEii>  ; PowerParameterScript::checkPowerWarServer(int, int)
0847fc9d +0x19b:  xor    $0x1,%eax
0847fca0 +0x19e:  test   %al,%al
0847fca2 +0x1a0:  je     0847fcc9 <+0x1c7>
0847fca4 +0x1a2:  movl   $0x80,0x8(%esp)
0847fcac +0x1aa:  movl   $0xc3,0x4(%esp)
0847fcb4 +0x1b2:  mov    0xc(%ebp),%eax
0847fcb7 +0x1b5:  mov    %eax,(%esp)
0847fcba +0x1b8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fcbf +0x1bd:  mov    $0x1,%eax
0847fcc4 +0x1c2:  jmp    084800f9 <+0x5f7>
0847fcc9 +0x1c7:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0847fcce +0x1cc:  mov    %eax,(%esp)
0847fcd1 +0x1cf:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0847fcd6 +0x1d4:  xor    $0x1,%eax
0847fcd9 +0x1d7:  test   %al,%al
0847fcdb +0x1d9:  je     0847fd02 <+0x200>
0847fcdd +0x1db:  movl   $0x7f,0x8(%esp)
0847fce5 +0x1e3:  movl   $0xc3,0x4(%esp)
0847fced +0x1eb:  mov    0xc(%ebp),%eax
0847fcf0 +0x1ee:  mov    %eax,(%esp)
0847fcf3 +0x1f1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fcf8 +0x1f6:  mov    $0x1,%eax
0847fcfd +0x1fb:  jmp    084800f9 <+0x5f7>
0847fd02 +0x200:  mov    0xc(%ebp),%eax
0847fd05 +0x203:  mov    %eax,0x4(%esp)
0847fd09 +0x207:  mov    0x8(%ebp),%eax
0847fd0c +0x20a:  mov    %eax,(%esp)
0847fd0f +0x20d:  call   0847fa7c <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser>  ; CPowerManager::CheckPowerWarEnterLimit(CUser*)
0847fd14 +0x212:  mov    %eax,-0x24(%ebp)
0847fd17 +0x215:  cmpl   $0x0,-0x24(%ebp)
0847fd1b +0x219:  setne  %al
0847fd1e +0x21c:  test   %al,%al
0847fd20 +0x21e:  je     0847fd49 <+0x247>
0847fd22 +0x220:  mov    -0x24(%ebp),%eax
0847fd25 +0x223:  movzbl %al,%eax
0847fd28 +0x226:  mov    %eax,0x8(%esp)
0847fd2c +0x22a:  movl   $0xc3,0x4(%esp)
0847fd34 +0x232:  mov    0xc(%ebp),%eax
0847fd37 +0x235:  mov    %eax,(%esp)
0847fd3a +0x238:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fd3f +0x23d:  mov    $0x1,%eax
0847fd44 +0x242:  jmp    084800f9 <+0x5f7>
0847fd49 +0x247:  movl   $0x0,-0x1c(%ebp)
0847fd50 +0x24e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847fd55 +0x253:  mov    0xa6e0(%eax),%eax
0847fd5b +0x259:  shl    $0x2,%eax
0847fd5e +0x25c:  mov    %eax,%edx
0847fd60 +0x25e:  shl    $0x4,%edx
0847fd63 +0x261:  mov    %edx,%ecx
0847fd65 +0x263:  sub    %eax,%ecx
0847fd67 +0x265:  mov    %ecx,%eax
0847fd69 +0x267:  mov    %eax,-0x1c(%ebp)
0847fd6c +0x26a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847fd73 +0x271:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847fd78 +0x276:  mov    %eax,%ebx
0847fd7a +0x278:  mov    0xc(%ebp),%eax
0847fd7d +0x27b:  mov    %eax,(%esp)
0847fd80 +0x27e:  call   08481052 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0xd0>  ; global constructors keyed to CPowerManager::CPowerManager()+0xd0
0847fd85 +0x283:  mov    %ebx,%edx
0847fd87 +0x285:  sub    %eax,%edx
0847fd89 +0x287:  mov    %edx,%eax
0847fd8b +0x289:  cmp    -0x1c(%ebp),%eax
0847fd8e +0x28c:  setle  %al
0847fd91 +0x28f:  test   %al,%al
0847fd93 +0x291:  je     0847fdba <+0x2b8>
0847fd95 +0x293:  movl   $0x84,0x8(%esp)
0847fd9d +0x29b:  movl   $0xc3,0x4(%esp)
0847fda5 +0x2a3:  mov    0xc(%ebp),%eax
0847fda8 +0x2a6:  mov    %eax,(%esp)
0847fdab +0x2a9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fdb0 +0x2ae:  mov    $0x1,%eax
0847fdb5 +0x2b3:  jmp    084800f9 <+0x5f7>
0847fdba +0x2b8:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0847fdbf +0x2bd:  mov    0xc(%ebp),%edx
0847fdc2 +0x2c0:  mov    %edx,0x4(%esp)
0847fdc6 +0x2c4:  mov    %eax,(%esp)
0847fdc9 +0x2c7:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
0847fdce +0x2cc:  test   %al,%al
0847fdd0 +0x2ce:  je     0847fdf7 <+0x2f5>
0847fdd2 +0x2d0:  movl   $0x1,0x8(%esp)
0847fdda +0x2d8:  movl   $0xc3,0x4(%esp)
0847fde2 +0x2e0:  mov    0xc(%ebp),%eax
0847fde5 +0x2e3:  mov    %eax,(%esp)
0847fde8 +0x2e6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fded +0x2eb:  mov    $0x0,%eax
0847fdf2 +0x2f0:  jmp    084800f9 <+0x5f7>
0847fdf7 +0x2f5:  mov    0xc(%ebp),%eax
0847fdfa +0x2f8:  mov    %eax,(%esp)
0847fdfd +0x2fb:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
0847fe02 +0x300:  test   %al,%al
0847fe04 +0x302:  je     0847fe2b <+0x329>
0847fe06 +0x304:  movl   $0x1,0x8(%esp)
0847fe0e +0x30c:  movl   $0xc3,0x4(%esp)
0847fe16 +0x314:  mov    0xc(%ebp),%eax
0847fe19 +0x317:  mov    %eax,(%esp)
0847fe1c +0x31a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0847fe21 +0x31f:  mov    $0x0,%eax
0847fe26 +0x324:  jmp    084800f9 <+0x5f7>
0847fe2b +0x329:  movsbl -0x4c(%ebp),%edx
0847fe2f +0x32d:  mov    0xc(%ebp),%eax
0847fe32 +0x330:  mov    %edx,0x4(%esp)
0847fe36 +0x334:  mov    %eax,(%esp)
0847fe39 +0x337:  call   08481080 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0xfe>  ; global constructors keyed to CPowerManager::CPowerManager()+0xfe
0847fe3e +0x33c:  movb   $0x0,-0x1d(%ebp)
0847fe42 +0x340:  mov    0xc(%ebp),%eax
0847fe45 +0x343:  mov    %eax,(%esp)
0847fe48 +0x346:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847fe4d +0x34b:  cmp    $0x3,%al
0847fe4f +0x34d:  je     0847fe60 <+0x35e>
0847fe51 +0x34f:  mov    0xc(%ebp),%eax
0847fe54 +0x352:  mov    %eax,(%esp)
0847fe57 +0x355:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847fe5c +0x35a:  cmp    $0x4,%al
0847fe5e +0x35c:  jne    0847fe67 <+0x365>
0847fe60 +0x35e:  mov    $0x1,%eax
0847fe65 +0x363:  jmp    0847fe6c <+0x36a>
0847fe67 +0x365:  mov    $0x0,%eax
0847fe6c +0x36a:  test   %al,%al
0847fe6e +0x36c:  je     0847fe74 <+0x372>
0847fe70 +0x36e:  movb   $0x1,-0x1d(%ebp)
0847fe74 +0x372:  cmpb   $0x1,-0x4c(%ebp)
0847fe78 +0x376:  jne    0847ff39 <+0x437>
0847fe7e +0x37c:  cmpb   $0x0,-0x1d(%ebp)
0847fe82 +0x380:  je     0847fed5 <+0x3d3>
0847fe84 +0x382:  mov    0xc(%ebp),%eax
0847fe87 +0x385:  mov    %eax,(%esp)
0847fe8a +0x388:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847fe8f +0x38d:  movzbl %al,%edi
0847fe92 +0x390:  mov    0xc(%ebp),%eax
0847fe95 +0x393:  mov    %eax,(%esp)
0847fe98 +0x396:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0847fe9d +0x39b:  mov    %eax,%esi
0847fe9f +0x39d:  mov    0xc(%ebp),%eax
0847fea2 +0x3a0:  mov    %eax,(%esp)
0847fea5 +0x3a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0847feaa +0x3a8:  mov    %eax,%ebx
0847feac +0x3aa:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0847feb1 +0x3af:  movl   $0x0,0x4(%esp)
0847feb9 +0x3b7:  mov    %eax,(%esp)
0847febc +0x3ba:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0847fec1 +0x3bf:  mov    %edi,0xc(%esp)
0847fec5 +0x3c3:  mov    %esi,0x8(%esp)
0847fec9 +0x3c7:  mov    %ebx,0x4(%esp)
0847fecd +0x3cb:  mov    %eax,(%esp)
0847fed0 +0x3ce:  call   0846eeda <_ZN17CGuildServerProxy26SendApplyOriginalPowerSideEjjh>  ; CGuildServerProxy::SendApplyOriginalPowerSide(unsigned int, unsigned int, unsigned char)
0847fed5 +0x3d3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847fedc +0x3da:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847fee1 +0x3df:  mov    0xc(%ebp),%edx
0847fee4 +0x3e2:  mov    %eax,0x4(%esp)
0847fee8 +0x3e6:  mov    %edx,(%esp)
0847feeb +0x3e9:  call   082f0982 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x706>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x706
0847fef0 +0x3ee:  mov    0xc(%ebp),%eax
0847fef3 +0x3f1:  mov    %eax,(%esp)
0847fef6 +0x3f4:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
0847fefb +0x3f9:  movzbl %al,%edx
0847fefe +0x3fc:  mov    0xc(%ebp),%eax
0847ff01 +0x3ff:  mov    %edx,0x4(%esp)
0847ff05 +0x403:  mov    %eax,(%esp)
0847ff08 +0x406:  call   082f09c4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x748>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x748
0847ff0d +0x40b:  mov    0xc(%ebp),%eax
0847ff10 +0x40e:  mov    %eax,(%esp)
0847ff13 +0x411:  call   082f0a5c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7e0
0847ff18 +0x416:  mov    0xc(%ebp),%eax
0847ff1b +0x419:  mov    %eax,(%esp)
0847ff1e +0x41c:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847ff23 +0x421:  movsbl %al,%edx
0847ff26 +0x424:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0847ff2b +0x429:  mov    %edx,0x4(%esp)
0847ff2f +0x42d:  mov    %eax,(%esp)
0847ff32 +0x430:  call   08480102 <_ZN13CPowerManager22IncreasePowerUserCountEc>  ; CPowerManager::IncreasePowerUserCount(char)
0847ff37 +0x435:  jmp    0847ff96 <+0x494>
0847ff39 +0x437:  mov    0xc(%ebp),%eax
0847ff3c +0x43a:  mov    %eax,(%esp)
0847ff3f +0x43d:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0847ff44 +0x442:  movsbl %al,%edx
0847ff47 +0x445:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0847ff4c +0x44a:  mov    %edx,0x4(%esp)
0847ff50 +0x44e:  mov    %eax,(%esp)
0847ff53 +0x451:  call   0848013c <_ZN13CPowerManager22DecreasePowerUserCountEc>  ; CPowerManager::DecreasePowerUserCount(char)
0847ff58 +0x456:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0847ff5f +0x45d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0847ff64 +0x462:  mov    0xc(%ebp),%edx
0847ff67 +0x465:  mov    %eax,0x4(%esp)
0847ff6b +0x469:  mov    %edx,(%esp)
0847ff6e +0x46c:  call   08481060 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0xde>  ; global constructors keyed to CPowerManager::CPowerManager()+0xde
0847ff73 +0x471:  mov    0xc(%ebp),%eax
0847ff76 +0x474:  movl   $0x0,0x4(%esp)
0847ff7e +0x47c:  mov    %eax,(%esp)
0847ff81 +0x47f:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
0847ff86 +0x484:  mov    0xc(%ebp),%eax
0847ff89 +0x487:  add    $0x796f4,%eax
0847ff8e +0x48c:  mov    %eax,(%esp)
0847ff91 +0x48f:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0847ff96 +0x494:  movzbl -0x1d(%ebp),%eax
0847ff9a +0x498:  xor    $0x1,%eax
0847ff9d +0x49b:  test   %al,%al
0847ff9f +0x49d:  je     084800f4 <+0x5f2>
0847ffa5 +0x4a3:  lea    -0x30(%ebp),%eax
0847ffa8 +0x4a6:  mov    %eax,(%esp)
0847ffab +0x4a9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0847ffb0 +0x4ae:  movl   $0xc3,0x8(%esp)
0847ffb8 +0x4b6:  movl   $0x1,0x4(%esp)
0847ffc0 +0x4be:  lea    -0x30(%ebp),%eax
0847ffc3 +0x4c1:  mov    %eax,(%esp)
0847ffc6 +0x4c4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0847ffcb +0x4c9:  movl   $0x1,0x4(%esp)
0847ffd3 +0x4d1:  lea    -0x30(%ebp),%eax
0847ffd6 +0x4d4:  mov    %eax,(%esp)
0847ffd9 +0x4d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847ffde +0x4dc:  movsbl -0x4c(%ebp),%eax
0847ffe2 +0x4e0:  mov    %eax,0x4(%esp)
0847ffe6 +0x4e4:  lea    -0x30(%ebp),%eax
0847ffe9 +0x4e7:  mov    %eax,(%esp)
0847ffec +0x4ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847fff1 +0x4ef:  movl   $0x1,0x4(%esp)
0847fff9 +0x4f7:  lea    -0x30(%ebp),%eax
0847fffc +0x4fa:  mov    %eax,(%esp)
0847ffff +0x4fd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08480004 +0x502:  lea    -0x30(%ebp),%eax
08480007 +0x505:  mov    %eax,0x4(%esp)
0848000b +0x509:  mov    0xc(%ebp),%eax
0848000e +0x50c:  mov    %eax,(%esp)
08480011 +0x50f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08480016 +0x514:  lea    -0x3c(%ebp),%eax
08480019 +0x517:  mov    %eax,(%esp)
0848001c +0x51a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08480021 +0x51f:  movl   $0x2,0x8(%esp)
08480029 +0x527:  movl   $0x0,0x4(%esp)
08480031 +0x52f:  lea    -0x3c(%ebp),%eax
08480034 +0x532:  mov    %eax,(%esp)
08480037 +0x535:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0848003c +0x53a:  movl   $0x0,0x4(%esp)
08480044 +0x542:  lea    -0x3c(%ebp),%eax
08480047 +0x545:  mov    %eax,(%esp)
0848004a +0x548:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0848004f +0x54d:  movl   $0x1,0x4(%esp)
08480057 +0x555:  lea    -0x3c(%ebp),%eax
0848005a +0x558:  mov    %eax,(%esp)
0848005d +0x55b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08480062 +0x560:  lea    -0x3c(%ebp),%eax
08480065 +0x563:  movl   $0x0,0x8(%esp)
0848006d +0x56b:  mov    %eax,0x4(%esp)
08480071 +0x56f:  mov    0xc(%ebp),%eax
08480074 +0x572:  mov    %eax,(%esp)
08480077 +0x575:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0848007c +0x57a:  movl   $0x1,0x4(%esp)
08480084 +0x582:  lea    -0x3c(%ebp),%eax
08480087 +0x585:  mov    %eax,(%esp)
0848008a +0x588:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0848008f +0x58d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08480094 +0x592:  mov    0xc(%ebp),%edx
08480097 +0x595:  mov    %edx,0x8(%esp)
0848009b +0x599:  lea    -0x3c(%ebp),%edx
0848009e +0x59c:  mov    %edx,0x4(%esp)
084800a2 +0x5a0:  mov    %eax,(%esp)
084800a5 +0x5a3:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
084800aa +0x5a8:  jmp    084800c1 <+0x5bf>
084800ac +0x5aa:  mov    %edx,%ebx
084800ae +0x5ac:  mov    %eax,%esi
084800b0 +0x5ae:  lea    -0x3c(%ebp),%eax
084800b3 +0x5b1:  mov    %eax,(%esp)
084800b6 +0x5b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084800bb +0x5b9:  mov    %esi,%eax
084800bd +0x5bb:  mov    %ebx,%edx
084800bf +0x5bd:  jmp    084800ce <+0x5cc>
084800c1 +0x5bf:  lea    -0x3c(%ebp),%eax
084800c4 +0x5c2:  mov    %eax,(%esp)
084800c7 +0x5c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084800cc +0x5ca:  jmp    084800e9 <+0x5e7>
084800ce +0x5cc:  mov    %edx,%ebx
084800d0 +0x5ce:  mov    %eax,%esi
084800d2 +0x5d0:  lea    -0x30(%ebp),%eax
084800d5 +0x5d3:  mov    %eax,(%esp)
084800d8 +0x5d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084800dd +0x5db:  mov    %esi,%eax
084800df +0x5dd:  mov    %ebx,%edx
084800e1 +0x5df:  mov    %eax,(%esp)
084800e4 +0x5e2:  call   08ae3750 <_Unwind_Resume>
084800e9 +0x5e7:  lea    -0x30(%ebp),%eax
084800ec +0x5ea:  mov    %eax,(%esp)
084800ef +0x5ed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084800f4 +0x5f2:  mov    $0x1,%eax
084800f9 +0x5f7:  add    $0x5c,%esp
084800fc +0x5fa:  pop    %ebx
084800fd +0x5fb:  pop    %esi
084800fe +0x5fc:  pop    %edi
084800ff +0x5fd:  pop    %ebp
08480100 +0x5fe:  ret
08480101 +0x5ff:  nop
```

## 反编译 C

```c
// CPowerManager::ProcessJoinPowerWar @ 0x847fb02

/* CPowerManager::ProcessJoinPowerWar(CUser*, char) */

undefined4 __thiscall
CPowerManager::ProcessJoinPowerWar(CPowerManager *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CPrivateStoreMgr *this_00;
  uint uVar8;
  uint uVar9;
  CGuildServerProxy *this_01;
  long lVar10;
  GameWorld *this_02;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  uint local_28;
  char local_21;
  int local_20;
  
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar5 == 9) {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar5 == 10) {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  iVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    CUser::SendCmdErrorPacket(param_1,0xc3,100);
    return 1;
  }
  cVar2 = CUser::getPowerSide(param_1);
  if (cVar2 == '\0') {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x82);
    return 1;
  }
  if ((param_2 != '\0') && (param_2 != '\x01')) {
    CUser::SendCmdErrorPacket(param_1,0xc3,1);
    return 1;
  }
  local_28 = 0;
  if (param_2 == '\x01') {
    iVar5 = G_CEnvironment();
    iVar5 = *(int *)(iVar5 + 0x1b0);
    iVar6 = G_CEnvironment();
    iVar6 = *(int *)(iVar6 + 0x378);
    iVar7 = G_CDataManager();
    cVar2 = PowerParameterScript::checkPowerWarServer
                      ((PowerParameterScript *)(iVar7 + 0xa628),iVar6,iVar5);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x80);
      return 1;
    }
    cVar2 = IsPowerWarEventOn();
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x7f);
      return 1;
    }
    local_28 = CheckPowerWarEnterLimit(this,param_1);
    if (local_28 != 0) {
      CUser::SendCmdErrorPacket(param_1,0xc3,local_28 & 0xff);
      return 1;
    }
    local_20 = 0;
    iVar5 = G_CDataManager();
    local_20 = *(int *)(iVar5 + 0xa6e0) * 0x3c;
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar6 = CUserCharacInfo::getCurCharacLastPlayTickPowerWar((CUserCharacInfo *)param_1);
    if (iVar5 - iVar6 <= local_20) {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x84);
      return 1;
    }
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xc3,1);
      return 0;
    }
    cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xc3,1);
      return 0;
    }
  }
  CUserCharacInfo::setCurrCharacJoinPower((CUserCharacInfo *)param_1,param_2);
  local_21 = '\0';
  cVar2 = CUser::getPowerSide(param_1);
  if ((cVar2 == '\x03') || (cVar2 = CUser::getPowerSide(param_1), cVar2 == '\x04')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_21 = '\x01';
  }
  if (param_2 == '\x01') {
    if (local_21 != '\0') {
      uVar3 = CUser::getPowerSide(param_1);
      uVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendApplyOriginalPowerSide(this_01,uVar9,uVar8,uVar3);
    }
    lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::SetPowerWarLastPlayTime((CUserCharacInfo *)param_1,lVar10);
    uVar4 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    CUserCharacInfo::setPowerWarHP((CUserCharacInfo *)param_1,uVar4 & 0xff);
    CUserCharacInfo::resetStraightVictories((CUserCharacInfo *)param_1);
    cVar2 = CUser::getPowerSide(param_1);
    IncreasePowerUserCount(GlobalData::s_power_manager,cVar2);
  }
  else {
    cVar2 = CUser::getPowerSide(param_1);
    DecreasePowerUserCount(GlobalData::s_power_manager,cVar2);
    lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::setCurCharacLastPlayTickPowerWar((CUserCharacInfo *)param_1,lVar10);
    CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)param_1,0);
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
  }
  if (local_21 != '\x01') {
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0847ffc6 to 08480020 has its CatchHandler @ 084800ce */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xc3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08480037 to 084800a9 has its CatchHandler @ 084800ac */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
    CUser::make_basic_info(param_1,(char *)local_40,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this_02 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_02,local_40,param_1);
                    /* try { // try from 084800c7 to 084800cb has its CatchHandler @ 084800ce */
    PacketGuard::~PacketGuard(local_40);
    PacketGuard::~PacketGuard(local_34);
  }
  return 1;
}
```
