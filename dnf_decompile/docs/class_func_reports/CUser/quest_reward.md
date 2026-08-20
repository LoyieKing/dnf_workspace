# quest_reward

`_ZN5CUser12quest_rewardEiii`

`CUser::quest_reward(int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866ea92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866ea92  _ZN5CUser12quest_rewardEiii
#           CUser::quest_reward(int, int, int)
# range [0x0866ea92, 0x08670e37]
0866ea92 +0x0000:  push   %ebp
0866ea93 +0x0001:  mov    %esp,%ebp
0866ea95 +0x0003:  push   %edi
0866ea96 +0x0004:  push   %esi
0866ea97 +0x0005:  push   %ebx
0866ea98 +0x0006:  sub    $0xcb8c,%esp
0866ea9e +0x000c:  lea    -0xf4(%ebp),%eax
0866eaa4 +0x0012:  mov    %eax,(%esp)
0866eaa7 +0x0015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866eaac +0x001a:  movl   $0x24,0x8(%esp)
0866eab4 +0x0022:  movl   $0x1,0x4(%esp)
0866eabc +0x002a:  lea    -0xf4(%ebp),%eax
0866eac2 +0x0030:  mov    %eax,(%esp)
0866eac5 +0x0033:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866eaca +0x0038:  movl   $0x1,0x4(%esp)
0866ead2 +0x0040:  lea    -0xf4(%ebp),%eax
0866ead8 +0x0046:  mov    %eax,(%esp)
0866eadb +0x0049:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866eae0 +0x004e:  mov    0xc(%ebp),%eax
0866eae3 +0x0051:  mov    %eax,0x4(%esp)
0866eae7 +0x0055:  lea    -0xf4(%ebp),%eax
0866eaed +0x005b:  mov    %eax,(%esp)
0866eaf0 +0x005e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866eaf5 +0x0063:  mov    0x8(%ebp),%eax
0866eaf8 +0x0066:  mov    %eax,(%esp)
0866eafb +0x0069:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866eb00 +0x006e:  mov    0xc(%ebp),%edx
0866eb03 +0x0071:  mov    %edx,0x4(%esp)
0866eb07 +0x0075:  mov    %eax,(%esp)
0866eb0a +0x0078:  call   086acad0 <_ZNK9UserQuest16check_cond_clearEi>  ; UserQuest::check_cond_clear(int) const
0866eb0f +0x007d:  xor    $0x1,%eax
0866eb12 +0x0080:  test   %al,%al
0866eb14 +0x0082:  je     0866eb20 <+0x8e>
0866eb16 +0x0084:  mov    $0x16,%ebx
0866eb1b +0x0089:  jmp    08670e1c <+0x238a>
0866eb20 +0x008e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866eb25 +0x0093:  mov    0x18(%eax),%eax
0866eb28 +0x0096:  mov    0xc(%ebp),%edx
0866eb2b +0x0099:  mov    %edx,0x4(%esp)
0866eb2f +0x009d:  mov    %eax,(%esp)
0866eb32 +0x00a0:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
0866eb37 +0x00a5:  mov    %eax,-0xa0(%ebp)
0866eb3d +0x00ab:  cmpl   $0x0,-0xa0(%ebp)
0866eb44 +0x00b2:  jne    0866eb50 <+0xbe>
0866eb46 +0x00b4:  mov    $0x15,%ebx
0866eb4b +0x00b9:  jmp    08670e1c <+0x238a>
0866eb50 +0x00be:  mov    0x8(%ebp),%eax
0866eb53 +0x00c1:  mov    %eax,(%esp)
0866eb56 +0x00c4:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
0866eb5b +0x00c9:  xor    $0x1,%eax
0866eb5e +0x00cc:  test   %al,%al
0866eb60 +0x00ce:  je     0866eba2 <+0x110>
0866eb62 +0x00d0:  mov    -0xa0(%ebp),%eax
0866eb68 +0x00d6:  mov    %eax,(%esp)
0866eb6b +0x00d9:  call   08352bee <_ZNK5Quest17isRepeatableQuestEv>  ; Quest::isRepeatableQuest() const
0866eb70 +0x00de:  xor    $0x1,%eax
0866eb73 +0x00e1:  test   %al,%al
0866eb75 +0x00e3:  je     0866eba2 <+0x110>
0866eb77 +0x00e5:  mov    0xc(%ebp),%esi
0866eb7a +0x00e8:  mov    0x8(%ebp),%eax
0866eb7d +0x00eb:  mov    %eax,(%esp)
0866eb80 +0x00ee:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866eb85 +0x00f3:  add    $0x4,%eax
0866eb88 +0x00f6:  mov    %esi,0x4(%esp)
0866eb8c +0x00fa:  mov    %eax,(%esp)
0866eb8f +0x00fd:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
0866eb94 +0x0102:  test   %al,%al
0866eb96 +0x0104:  je     0866eba2 <+0x110>
0866eb98 +0x0106:  mov    $0x16,%ebx
0866eb9d +0x010b:  jmp    08670e1c <+0x238a>
0866eba2 +0x0110:  mov    -0xa0(%ebp),%eax
0866eba8 +0x0116:  mov    0x8(%eax),%eax
0866ebab +0x0119:  cmp    $0x4,%eax
0866ebae +0x011c:  je     0866ebc0 <+0x12e>
0866ebb0 +0x011e:  cmpl   $0x1,0x14(%ebp)
0866ebb4 +0x0122:  je     0866ebc0 <+0x12e>
0866ebb6 +0x0124:  mov    $0x16,%ebx
0866ebbb +0x0129:  jmp    08670e1c <+0x238a>
0866ebc0 +0x012e:  lea    -0x100(%ebp),%eax
0866ebc6 +0x0134:  mov    %eax,(%esp)
0866ebc9 +0x0137:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866ebce +0x013c:  lea    -0x10c(%ebp),%eax
0866ebd4 +0x0142:  mov    %eax,(%esp)
0866ebd7 +0x0145:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866ebdc +0x014a:  lea    -0x114(%ebp),%eax
0866ebe2 +0x0150:  mov    %eax,(%esp)
0866ebe5 +0x0153:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0866ebea +0x0158:  mov    -0xa0(%ebp),%eax
0866ebf0 +0x015e:  mov    0x7c(%eax),%eax
0866ebf3 +0x0161:  test   %eax,%eax
0866ebf5 +0x0163:  je     0866ec09 <+0x177>
0866ebf7 +0x0165:  mov    -0xa0(%ebp),%eax
0866ebfd +0x016b:  mov    0x7c(%eax),%eax
0866ec00 +0x016e:  cmp    $0x19,%eax
0866ec03 +0x0171:  jne    0866ecf9 <+0x267>
0866ec09 +0x0177:  mov    -0xa0(%ebp),%eax
0866ec0f +0x017d:  lea    0xac(%eax),%edx
0866ec15 +0x0183:  lea    -0x148(%ebp),%eax
0866ec1b +0x0189:  mov    %edx,0x4(%esp)
0866ec1f +0x018d:  mov    %eax,(%esp)
0866ec22 +0x0190:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0866ec27 +0x0195:  sub    $0x4,%esp
0866ec2a +0x0198:  jmp    0866ec8a <+0x1f8>
0866ec2c +0x019a:  lea    -0x148(%ebp),%eax
0866ec32 +0x01a0:  mov    %eax,(%esp)
0866ec35 +0x01a3:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0866ec3a +0x01a8:  mov    0x4(%eax),%edx
0866ec3d +0x01ab:  mov    (%eax),%eax
0866ec3f +0x01ad:  mov    %eax,-0x114(%ebp)
0866ec45 +0x01b3:  lea    -0x148(%ebp),%eax
0866ec4b +0x01b9:  mov    %eax,(%esp)
0866ec4e +0x01bc:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0866ec53 +0x01c1:  mov    0x4(%eax),%edx
0866ec56 +0x01c4:  mov    (%eax),%eax
0866ec58 +0x01c6:  mov    %edx,%eax
0866ec5a +0x01c8:  imul   0x14(%ebp),%eax
0866ec5e +0x01cc:  mov    %eax,-0x110(%ebp)
0866ec64 +0x01d2:  lea    -0x114(%ebp),%eax
0866ec6a +0x01d8:  mov    %eax,0x4(%esp)
0866ec6e +0x01dc:  lea    -0x100(%ebp),%eax
0866ec74 +0x01e2:  mov    %eax,(%esp)
0866ec77 +0x01e5:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0866ec7c +0x01ea:  lea    -0x148(%ebp),%eax
0866ec82 +0x01f0:  mov    %eax,(%esp)
0866ec85 +0x01f3:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0866ec8a +0x01f8:  mov    -0xa0(%ebp),%eax
0866ec90 +0x01fe:  lea    0xac(%eax),%edx
0866ec96 +0x0204:  lea    -0xe8(%ebp),%eax
0866ec9c +0x020a:  mov    %edx,0x4(%esp)
0866eca0 +0x020e:  mov    %eax,(%esp)
0866eca3 +0x0211:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0866eca8 +0x0216:  sub    $0x4,%esp
0866ecab +0x0219:  lea    -0xe8(%ebp),%eax
0866ecb1 +0x021f:  mov    %eax,0x4(%esp)
0866ecb5 +0x0223:  lea    -0x148(%ebp),%eax
0866ecbb +0x0229:  mov    %eax,(%esp)
0866ecbe +0x022c:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0866ecc3 +0x0231:  test   %al,%al
0866ecc5 +0x0233:  jne    0866ec2c <+0x19a>
0866eccb +0x0239:  mov    0x8(%ebp),%eax
0866ecce +0x023c:  mov    %eax,(%esp)
0866ecd1 +0x023f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866ecd6 +0x0244:  lea    -0x100(%ebp),%edx
0866ecdc +0x024a:  mov    %edx,0x4(%esp)
0866ece0 +0x024e:  mov    %eax,(%esp)
0866ece3 +0x0251:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
0866ece8 +0x0256:  xor    $0x1,%eax
0866eceb +0x0259:  test   %al,%al
0866eced +0x025b:  je     0866ecf9 <+0x267>
0866ecef +0x025d:  mov    $0x11,%ebx
0866ecf4 +0x0262:  jmp    08670dc6 <+0x2334>
0866ecf9 +0x0267:  mov    -0xa0(%ebp),%eax
0866ecff +0x026d:  mov    0x7c(%eax),%eax
0866ed02 +0x0270:  test   %eax,%eax
0866ed04 +0x0272:  je     0866ed28 <+0x296>
0866ed06 +0x0274:  mov    -0xa0(%ebp),%eax
0866ed0c +0x027a:  mov    0xb8(%eax),%eax
0866ed12 +0x0280:  test   %eax,%eax
0866ed14 +0x0282:  je     0866ed28 <+0x296>
0866ed16 +0x0284:  mov    -0xa0(%ebp),%eax
0866ed1c +0x028a:  mov    0x7c(%eax),%eax
0866ed1f +0x028d:  cmp    $0x19,%eax
0866ed22 +0x0290:  jne    0866f1a3 <+0x711>
0866ed28 +0x0296:  mov    -0xa0(%ebp),%eax
0866ed2e +0x029c:  mov    0xb8(%eax),%eax
0866ed34 +0x02a2:  cmp    $0x19,%eax
0866ed37 +0x02a5:  je     0866f1a3 <+0x711>
0866ed3d +0x02ab:  lea    -0x9f8(%ebp),%eax
0866ed43 +0x02b1:  mov    %eax,(%esp)
0866ed46 +0x02b4:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
0866ed4b +0x02b9:  lea    -0xcb37(%ebp),%eax
0866ed51 +0x02bf:  mov    %eax,(%esp)
0866ed54 +0x02c2:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0866ed59 +0x02c7:  lea    -0xcb37(%ebp),%eax
0866ed5f +0x02cd:  mov    %eax,0x4(%esp)
0866ed63 +0x02d1:  lea    -0x9f8(%ebp),%eax
0866ed69 +0x02d7:  mov    %eax,(%esp)
0866ed6c +0x02da:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
0866ed71 +0x02df:  mov    0x8(%ebp),%eax
0866ed74 +0x02e2:  mov    %eax,(%esp)
0866ed77 +0x02e5:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0866ed7c +0x02ea:  mov    %eax,0x4(%esp)
0866ed80 +0x02ee:  lea    -0x9f8(%ebp),%eax
0866ed86 +0x02f4:  mov    %eax,(%esp)
0866ed89 +0x02f7:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
0866ed8e +0x02fc:  lea    -0x154(%ebp),%eax
0866ed94 +0x0302:  mov    %eax,(%esp)
0866ed97 +0x0305:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0866ed9c +0x030a:  movb   $0x0,-0x89(%ebp)
0866eda3 +0x0311:  mov    -0xa0(%ebp),%eax
0866eda9 +0x0317:  mov    0x7c(%eax),%eax
0866edac +0x031a:  test   %eax,%eax
0866edae +0x031c:  je     0866edbe <+0x32c>
0866edb0 +0x031e:  mov    -0xa0(%ebp),%eax
0866edb6 +0x0324:  mov    0x7c(%eax),%eax
0866edb9 +0x0327:  cmp    $0x19,%eax
0866edbc +0x032a:  jne    0866edec <+0x35a>
0866edbe +0x032c:  lea    -0x100(%ebp),%eax
0866edc4 +0x0332:  mov    %eax,0x4(%esp)
0866edc8 +0x0336:  lea    -0x9f8(%ebp),%eax
0866edce +0x033c:  mov    %eax,(%esp)
0866edd1 +0x033f:  call   085058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0866edd6 +0x0344:  xor    $0x1,%eax
0866edd9 +0x0347:  test   %al,%al
0866eddb +0x0349:  je     0866edec <+0x35a>
0866eddd +0x034b:  mov    $0x11,%ebx
0866ede2 +0x0350:  mov    $0x0,%esi
0866ede7 +0x0355:  jmp    0866f152 <+0x6c0>
0866edec +0x035a:  mov    -0xa0(%ebp),%eax
0866edf2 +0x0360:  mov    0xb8(%eax),%eax
0866edf8 +0x0366:  test   %eax,%eax
0866edfa +0x0368:  jne    0866f133 <+0x6a1>
0866ee00 +0x036e:  mov    0x8(%ebp),%eax
0866ee03 +0x0371:  mov    %eax,0x4(%esp)
0866ee07 +0x0375:  mov    -0xa0(%ebp),%eax
0866ee0d +0x037b:  mov    %eax,(%esp)
0866ee10 +0x037e:  call   0866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>  ; CUser::getUserQuestRewardItem(Quest const*, CUser const*)
0866ee15 +0x0383:  mov    %eax,-0x88(%ebp)
0866ee1b +0x0389:  lea    -0x158(%ebp),%eax
0866ee21 +0x038f:  mov    -0x88(%ebp),%edx
0866ee27 +0x0395:  mov    %edx,0x4(%esp)
0866ee2b +0x0399:  mov    %eax,(%esp)
0866ee2e +0x039c:  call   083ad0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470a8
0866ee33 +0x03a1:  sub    $0x4,%esp
0866ee36 +0x03a4:  jmp    0866ef16 <+0x484>
0866ee3b +0x03a9:  lea    -0x158(%ebp),%eax
0866ee41 +0x03af:  mov    %eax,(%esp)
0866ee44 +0x03b2:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866ee49 +0x03b7:  mov    0x8(%eax),%eax
0866ee4c +0x03ba:  cmp    $0xb,%eax
0866ee4f +0x03bd:  je     0866eeb3 <+0x421>
0866ee51 +0x03bf:  lea    -0x158(%ebp),%eax
0866ee57 +0x03c5:  mov    %eax,(%esp)
0866ee5a +0x03c8:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866ee5f +0x03cd:  mov    0x8(%eax),%eax
0866ee62 +0x03d0:  mov    %eax,%esi
0866ee64 +0x03d2:  mov    0x8(%ebp),%eax
0866ee67 +0x03d5:  mov    %eax,(%esp)
0866ee6a +0x03d8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866ee6f +0x03dd:  cmp    %eax,%esi
0866ee71 +0x03df:  jne    0866eeac <+0x41a>
0866ee73 +0x03e1:  lea    -0x158(%ebp),%eax
0866ee79 +0x03e7:  mov    %eax,(%esp)
0866ee7c +0x03ea:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866ee81 +0x03ef:  mov    0xc(%eax),%eax
0866ee84 +0x03f2:  cmp    $0xffffffff,%eax
0866ee87 +0x03f5:  je     0866eeb3 <+0x421>
0866ee89 +0x03f7:  lea    -0x158(%ebp),%eax
0866ee8f +0x03fd:  mov    %eax,(%esp)
0866ee92 +0x0400:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866ee97 +0x0405:  mov    0xc(%eax),%esi
0866ee9a +0x0408:  mov    0x8(%ebp),%eax
0866ee9d +0x040b:  mov    %eax,(%esp)
0866eea0 +0x040e:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866eea5 +0x0413:  movsbl %al,%eax
0866eea8 +0x0416:  cmp    %eax,%esi
0866eeaa +0x0418:  je     0866eeb3 <+0x421>
0866eeac +0x041a:  mov    $0x1,%eax
0866eeb1 +0x041f:  jmp    0866eeb8 <+0x426>
0866eeb3 +0x0421:  mov    $0x0,%eax
0866eeb8 +0x0426:  test   %al,%al
0866eeba +0x0428:  jne    0866ef07 <+0x475>
0866eebc +0x042a:  lea    -0x158(%ebp),%eax
0866eec2 +0x0430:  mov    %eax,(%esp)
0866eec5 +0x0433:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866eeca +0x0438:  mov    (%eax),%eax
0866eecc +0x043a:  mov    %eax,-0x114(%ebp)
0866eed2 +0x0440:  lea    -0x158(%ebp),%eax
0866eed8 +0x0446:  mov    %eax,(%esp)
0866eedb +0x0449:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866eee0 +0x044e:  mov    0x4(%eax),%eax
0866eee3 +0x0451:  imul   0x14(%ebp),%eax
0866eee7 +0x0455:  mov    %eax,-0x110(%ebp)
0866eeed +0x045b:  lea    -0x114(%ebp),%eax
0866eef3 +0x0461:  mov    %eax,0x4(%esp)
0866eef7 +0x0465:  lea    -0x10c(%ebp),%eax
0866eefd +0x046b:  mov    %eax,(%esp)
0866ef00 +0x046e:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0866ef05 +0x0473:  jmp    0866ef08 <+0x476>
0866ef07 +0x0475:  nop
0866ef08 +0x0476:  lea    -0x158(%ebp),%eax
0866ef0e +0x047c:  mov    %eax,(%esp)
0866ef11 +0x047f:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
0866ef16 +0x0484:  lea    -0xe4(%ebp),%eax
0866ef1c +0x048a:  mov    -0x88(%ebp),%edx
0866ef22 +0x0490:  mov    %edx,0x4(%esp)
0866ef26 +0x0494:  mov    %eax,(%esp)
0866ef29 +0x0497:  call   083ad108 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470d4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470d4
0866ef2e +0x049c:  sub    $0x4,%esp
0866ef31 +0x049f:  lea    -0xe4(%ebp),%eax
0866ef37 +0x04a5:  mov    %eax,0x4(%esp)
0866ef3b +0x04a9:  lea    -0x158(%ebp),%eax
0866ef41 +0x04af:  mov    %eax,(%esp)
0866ef44 +0x04b2:  call   083e5e57 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7fe23>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7fe23
0866ef49 +0x04b7:  test   %al,%al
0866ef4b +0x04b9:  jne    0866ee3b <+0x3a9>
0866ef51 +0x04bf:  lea    -0x10c(%ebp),%eax
0866ef57 +0x04c5:  mov    %eax,0x4(%esp)
0866ef5b +0x04c9:  lea    -0x9f8(%ebp),%eax
0866ef61 +0x04cf:  mov    %eax,(%esp)
0866ef64 +0x04d2:  call   0850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0866ef69 +0x04d7:  mov    %eax,%esi
0866ef6b +0x04d9:  lea    -0x10c(%ebp),%eax
0866ef71 +0x04df:  mov    %eax,(%esp)
0866ef74 +0x04e2:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866ef79 +0x04e7:  cmp    %eax,%esi
0866ef7b +0x04e9:  setne  %al
0866ef7e +0x04ec:  test   %al,%al
0866ef80 +0x04ee:  je     0866ef91 <+0x4ff>
0866ef82 +0x04f0:  mov    $0x4,%ebx
0866ef87 +0x04f5:  mov    $0x0,%esi
0866ef8c +0x04fa:  jmp    0866f152 <+0x6c0>
0866ef91 +0x04ff:  mov    0x10(%ebp),%eax
0866ef94 +0x0502:  mov    %eax,0x8(%esp)
0866ef98 +0x0506:  mov    0x8(%ebp),%eax
0866ef9b +0x0509:  mov    %eax,0x4(%esp)
0866ef9f +0x050d:  mov    -0xa0(%ebp),%eax
0866efa5 +0x0513:  mov    %eax,(%esp)
0866efa8 +0x0516:  call   083537c2 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri>  ; Quest::ConvertRewardSelectIndex(CUser const*, int)
0866efad +0x051b:  mov    %eax,0x10(%ebp)
0866efb0 +0x051e:  mov    -0xa0(%ebp),%eax
0866efb6 +0x0524:  add    $0xd0,%eax
0866efbb +0x0529:  mov    %eax,(%esp)
0866efbe +0x052c:  call   08390e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208e0
0866efc3 +0x0531:  cmp    0x10(%ebp),%eax
0866efc6 +0x0534:  setle  %al
0866efc9 +0x0537:  test   %al,%al
0866efcb +0x0539:  je     0866efdc <+0x54a>
0866efcd +0x053b:  mov    $0x15,%ebx
0866efd2 +0x0540:  mov    $0x0,%esi
0866efd7 +0x0545:  jmp    0866f152 <+0x6c0>
0866efdc +0x054a:  cmpl   $0x0,0x10(%ebp)
0866efe0 +0x054e:  js     0866f133 <+0x6a1>
0866efe6 +0x0554:  cmpl   $0xffff,0x10(%ebp)
0866efed +0x055b:  je     0866f133 <+0x6a1>
0866eff3 +0x0561:  lea    -0x201(%ebp),%eax
0866eff9 +0x0567:  mov    %eax,(%esp)
0866effc +0x056a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866f001 +0x056f:  mov    0x10(%ebp),%eax
0866f004 +0x0572:  mov    -0xa0(%ebp),%edx
0866f00a +0x0578:  add    $0xd0,%edx
0866f010 +0x057e:  mov    %eax,0x4(%esp)
0866f014 +0x0582:  mov    %edx,(%esp)
0866f017 +0x0585:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
0866f01c +0x058a:  mov    (%eax),%eax
0866f01e +0x058c:  mov    %eax,-0x1ff(%ebp)
0866f024 +0x0592:  mov    0x10(%ebp),%eax
0866f027 +0x0595:  mov    -0xa0(%ebp),%edx
0866f02d +0x059b:  add    $0xd0,%edx
0866f033 +0x05a1:  mov    %eax,0x4(%esp)
0866f037 +0x05a5:  mov    %edx,(%esp)
0866f03a +0x05a8:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
0866f03f +0x05ad:  mov    0x4(%eax),%eax
0866f042 +0x05b0:  mov    %eax,%esi
0866f044 +0x05b2:  imul   0x14(%ebp),%esi
0866f048 +0x05b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866f04d +0x05bb:  mov    0xc(%eax),%eax
0866f050 +0x05be:  mov    %esi,0xc(%esp)
0866f054 +0x05c2:  lea    -0x201(%ebp),%edx
0866f05a +0x05c8:  mov    %edx,0x8(%esp)
0866f05e +0x05cc:  movl   $0x4,0x4(%esp)
0866f066 +0x05d4:  mov    %eax,(%esp)
0866f069 +0x05d7:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0866f06e +0x05dc:  mov    -0x201(%ebp),%eax
0866f074 +0x05e2:  mov    %eax,0x4(%esp)
0866f078 +0x05e6:  mov    -0x1fd(%ebp),%eax
0866f07e +0x05ec:  mov    %eax,0x8(%esp)
0866f082 +0x05f0:  mov    -0x1f9(%ebp),%eax
0866f088 +0x05f6:  mov    %eax,0xc(%esp)
0866f08c +0x05fa:  mov    -0x1f5(%ebp),%eax
0866f092 +0x0600:  mov    %eax,0x10(%esp)
0866f096 +0x0604:  mov    -0x1f1(%ebp),%eax
0866f09c +0x060a:  mov    %eax,0x14(%esp)
0866f0a0 +0x060e:  mov    -0x1ed(%ebp),%eax
0866f0a6 +0x0614:  mov    %eax,0x18(%esp)
0866f0aa +0x0618:  mov    -0x1e9(%ebp),%eax
0866f0b0 +0x061e:  mov    %eax,0x1c(%esp)
0866f0b4 +0x0622:  mov    -0x1e5(%ebp),%eax
0866f0ba +0x0628:  mov    %eax,0x20(%esp)
0866f0be +0x062c:  mov    -0x1e1(%ebp),%eax
0866f0c4 +0x0632:  mov    %eax,0x24(%esp)
0866f0c8 +0x0636:  mov    -0x1dd(%ebp),%eax
0866f0ce +0x063c:  mov    %eax,0x28(%esp)
0866f0d2 +0x0640:  mov    -0x1d9(%ebp),%eax
0866f0d8 +0x0646:  mov    %eax,0x2c(%esp)
0866f0dc +0x064a:  mov    -0x1d5(%ebp),%eax
0866f0e2 +0x0650:  mov    %eax,0x30(%esp)
0866f0e6 +0x0654:  mov    -0x1d1(%ebp),%eax
0866f0ec +0x065a:  mov    %eax,0x34(%esp)
0866f0f0 +0x065e:  mov    -0x1cd(%ebp),%eax
0866f0f6 +0x0664:  mov    %eax,0x38(%esp)
0866f0fa +0x0668:  mov    -0x1c9(%ebp),%eax
0866f100 +0x066e:  mov    %eax,0x3c(%esp)
0866f104 +0x0672:  movzbl -0x1c5(%ebp),%eax
0866f10b +0x0679:  mov    %al,0x40(%esp)
0866f10f +0x067d:  lea    -0x9f8(%ebp),%eax
0866f115 +0x0683:  mov    %eax,(%esp)
0866f118 +0x0686:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
0866f11d +0x068b:  cmp    $0xffffffff,%eax
0866f120 +0x068e:  sete   %al
0866f123 +0x0691:  test   %al,%al
0866f125 +0x0693:  je     0866f133 <+0x6a1>
0866f127 +0x0695:  mov    $0x4,%ebx
0866f12c +0x069a:  mov    $0x0,%esi
0866f131 +0x069f:  jmp    0866f152 <+0x6c0>
0866f133 +0x06a1:  mov    $0x1,%esi
0866f138 +0x06a6:  jmp    0866f152 <+0x6c0>
0866f13a +0x06a8:  mov    %edx,%ebx
0866f13c +0x06aa:  mov    %eax,%esi
0866f13e +0x06ac:  lea    -0x154(%ebp),%eax
0866f144 +0x06b2:  mov    %eax,(%esp)
0866f147 +0x06b5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0866f14c +0x06ba:  mov    %esi,%eax
0866f14e +0x06bc:  mov    %ebx,%edx
0866f150 +0x06be:  jmp    0866f172 <+0x6e0>
0866f152 +0x06c0:  lea    -0x154(%ebp),%eax
0866f158 +0x06c6:  mov    %eax,(%esp)
0866f15b +0x06c9:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0866f160 +0x06ce:  test   %esi,%esi
0866f162 +0x06d0:  jne    0866f16b <+0x6d9>
0866f164 +0x06d2:  mov    $0x0,%esi
0866f169 +0x06d7:  jmp    0866f18d <+0x6fb>
0866f16b +0x06d9:  mov    $0x1,%esi
0866f170 +0x06de:  jmp    0866f18d <+0x6fb>
0866f172 +0x06e0:  mov    %edx,%ebx
0866f174 +0x06e2:  mov    %eax,%esi
0866f176 +0x06e4:  lea    -0x9f8(%ebp),%eax
0866f17c +0x06ea:  mov    %eax,(%esp)
0866f17f +0x06ed:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0866f184 +0x06f2:  mov    %esi,%eax
0866f186 +0x06f4:  mov    %ebx,%edx
0866f188 +0x06f6:  jmp    08670dae <+0x231c>
0866f18d +0x06fb:  lea    -0x9f8(%ebp),%eax
0866f193 +0x0701:  mov    %eax,(%esp)
0866f196 +0x0704:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0866f19b +0x0709:  test   %esi,%esi
0866f19d +0x070b:  je     08670dc6 <+0x2334>
0866f1a3 +0x0711:  movl   $0x0,-0x118(%ebp)
0866f1ad +0x071b:  movl   $0x0,-0x11c(%ebp)
0866f1b7 +0x0725:  movl   $0x0,-0x120(%ebp)
0866f1c1 +0x072f:  movl   $0x0,-0x124(%ebp)
0866f1cb +0x0739:  movl   $0x0,0x18(%esp)
0866f1d3 +0x0741:  lea    -0x124(%ebp),%eax
0866f1d9 +0x0747:  mov    %eax,0x14(%esp)
0866f1dd +0x074b:  lea    -0x120(%ebp),%eax
0866f1e3 +0x0751:  mov    %eax,0x10(%esp)
0866f1e7 +0x0755:  lea    -0x11c(%ebp),%eax
0866f1ed +0x075b:  mov    %eax,0xc(%esp)
0866f1f1 +0x075f:  lea    -0x118(%ebp),%eax
0866f1f7 +0x0765:  mov    %eax,0x8(%esp)
0866f1fb +0x0769:  mov    -0xa0(%ebp),%eax
0866f201 +0x076f:  mov    %eax,0x4(%esp)
0866f205 +0x0773:  mov    0x8(%ebp),%eax
0866f208 +0x0776:  mov    %eax,(%esp)
0866f20b +0x0779:  call   0866e7a8 <_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b>  ; CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool)
0866f210 +0x077e:  mov    -0x118(%ebp),%eax
0866f216 +0x0784:  test   %eax,%eax
0866f218 +0x0786:  je     0866f3ce <+0x93c>
0866f21e +0x078c:  movl   $0x0,-0x15c(%ebp)
0866f228 +0x0796:  movl   $0x0,-0x160(%ebp)
0866f232 +0x07a0:  mov    0x8(%ebp),%eax
0866f235 +0x07a3:  movl   $0x0,0x4(%esp)
0866f23d +0x07ab:  mov    %eax,(%esp)
0866f240 +0x07ae:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
0866f245 +0x07b3:  mov    0x8(%ebp),%eax
0866f248 +0x07b6:  movl   $0x0,0x4(%esp)
0866f250 +0x07be:  mov    %eax,(%esp)
0866f253 +0x07c1:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0866f258 +0x07c6:  mov    0x8(%ebp),%eax
0866f25b +0x07c9:  movl   $0x0,0x4(%esp)
0866f263 +0x07d1:  mov    %eax,(%esp)
0866f266 +0x07d4:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
0866f26b +0x07d9:  mov    -0x118(%ebp),%eax
0866f271 +0x07df:  movl   $0x0,0x18(%esp)
0866f279 +0x07e7:  movl   $0x0,0x14(%esp)
0866f281 +0x07ef:  movl   $0xd,0x10(%esp)
0866f289 +0x07f7:  lea    -0x160(%ebp),%edx
0866f28f +0x07fd:  mov    %edx,0xc(%esp)
0866f293 +0x0801:  lea    -0x15c(%ebp),%edx
0866f299 +0x0807:  mov    %edx,0x8(%esp)
0866f29d +0x080b:  mov    %eax,0x4(%esp)
0866f2a1 +0x080f:  mov    0x8(%ebp),%eax
0866f2a4 +0x0812:  mov    %eax,(%esp)
0866f2a7 +0x0815:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
0866f2ac +0x081a:  mov    %al,-0x81(%ebp)
0866f2b2 +0x0820:  cmpb   $0x0,-0x81(%ebp)
0866f2b9 +0x0827:  je     0866f37b <+0x8e9>
0866f2bf +0x082d:  mov    0x8(%ebp),%eax
0866f2c2 +0x0830:  mov    %eax,(%esp)
0866f2c5 +0x0833:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
0866f2ca +0x0838:  cmp    $0x63,%al
0866f2cc +0x083a:  setbe  %al
0866f2cf +0x083d:  test   %al,%al
0866f2d1 +0x083f:  je     0866f2e6 <+0x854>
0866f2d3 +0x0841:  mov    0x8(%ebp),%eax
0866f2d6 +0x0844:  movl   $0x64,0x4(%esp)
0866f2de +0x084c:  mov    %eax,(%esp)
0866f2e1 +0x084f:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
0866f2e6 +0x0854:  mov    0x8(%ebp),%eax
0866f2e9 +0x0857:  mov    %eax,(%esp)
0866f2ec +0x085a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0866f2f1 +0x085f:  cmp    $0x3,%eax
0866f2f4 +0x0862:  sete   %al
0866f2f7 +0x0865:  test   %al,%al
0866f2f9 +0x0867:  je     0866f343 <+0x8b1>
0866f2fb +0x0869:  movl   $0x0,0xc(%esp)
0866f303 +0x0871:  movl   $0x2,0x8(%esp)
0866f30b +0x0879:  movl   $0x0,0x4(%esp)
0866f313 +0x0881:  mov    0x8(%ebp),%eax
0866f316 +0x0884:  mov    %eax,(%esp)
0866f319 +0x0887:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866f31e +0x088c:  movl   $0x1,0xc(%esp)
0866f326 +0x0894:  movl   $0x2,0x8(%esp)
0866f32e +0x089c:  movl   $0x1,0x4(%esp)
0866f336 +0x08a4:  mov    0x8(%ebp),%eax
0866f339 +0x08a7:  mov    %eax,(%esp)
0866f33c +0x08aa:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866f341 +0x08af:  jmp    0866f37b <+0x8e9>
0866f343 +0x08b1:  mov    0x8(%ebp),%eax
0866f346 +0x08b4:  mov    %eax,(%esp)
0866f349 +0x08b7:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0866f34e +0x08bc:  cmp    $0x4,%eax
0866f351 +0x08bf:  setg   %al
0866f354 +0x08c2:  test   %al,%al
0866f356 +0x08c4:  je     0866f37b <+0x8e9>
0866f358 +0x08c6:  movl   $0x1,0xc(%esp)
0866f360 +0x08ce:  movl   $0x2,0x8(%esp)
0866f368 +0x08d6:  movl   $0x2,0x4(%esp)
0866f370 +0x08de:  mov    0x8(%ebp),%eax
0866f373 +0x08e1:  mov    %eax,(%esp)
0866f376 +0x08e4:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866f37b +0x08e9:  mov    0x8(%ebp),%eax
0866f37e +0x08ec:  mov    0x8cfc4(%eax),%eax
0866f384 +0x08f2:  cmp    $0x3,%eax
0866f387 +0x08f5:  jne    0866f3ac <+0x91a>
0866f389 +0x08f7:  movl   $0x0,0xc(%esp)
0866f391 +0x08ff:  movl   $0x25,0x8(%esp)
0866f399 +0x0907:  movl   $0x1,0x4(%esp)
0866f3a1 +0x090f:  mov    0x8(%ebp),%eax
0866f3a4 +0x0912:  mov    %eax,(%esp)
0866f3a7 +0x0915:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866f3ac +0x091a:  mov    0x8(%ebp),%eax
0866f3af +0x091d:  mov    0x8cfc4(%eax),%eax
0866f3b5 +0x0923:  cmp    $0x3,%eax
0866f3b8 +0x0926:  jne    0866f3ce <+0x93c>
0866f3ba +0x0928:  cmpb   $0x0,-0x81(%ebp)
0866f3c1 +0x092f:  je     0866f3ce <+0x93c>
0866f3c3 +0x0931:  mov    0x8(%ebp),%eax
0866f3c6 +0x0934:  mov    %eax,(%esp)
0866f3c9 +0x0937:  call   0868d780 <_ZN5CUser33decide_growth_power_reward_systemEv>  ; CUser::decide_growth_power_reward_system()
0866f3ce +0x093c:  movb   $0x0,-0x125(%ebp)
0866f3d5 +0x0943:  lea    -0x134(%ebp),%eax
0866f3db +0x0949:  mov    %eax,(%esp)
0866f3de +0x094c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0866f3e3 +0x0951:  lea    -0x140(%ebp),%eax
0866f3e9 +0x0957:  mov    %eax,(%esp)
0866f3ec +0x095a:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0866f3f1 +0x095f:  lea    -0x144(%ebp),%eax
0866f3f7 +0x0965:  mov    %eax,(%esp)
0866f3fa +0x0968:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
0866f3ff +0x096d:  movl   $0x0,-0x9c(%ebp)
0866f409 +0x0977:  movl   $0x0,-0x98(%ebp)
0866f413 +0x0981:  mov    -0xa0(%ebp),%eax
0866f419 +0x0987:  mov    0x7c(%eax),%eax
0866f41c +0x098a:  test   %eax,%eax
0866f41e +0x098c:  je     0866f432 <+0x9a0>
0866f420 +0x098e:  mov    -0xa0(%ebp),%eax
0866f426 +0x0994:  mov    0x7c(%eax),%eax
0866f429 +0x0997:  cmp    $0x19,%eax
0866f42c +0x099a:  jne    0866f505 <+0xa73>
0866f432 +0x09a0:  mov    -0xa0(%ebp),%eax
0866f438 +0x09a6:  mov    0xb8(%eax),%eax
0866f43e +0x09ac:  cmp    $0x19,%eax
0866f441 +0x09af:  je     0866f505 <+0xa73>
0866f447 +0x09b5:  mov    0x8(%ebp),%eax
0866f44a +0x09b8:  mov    %eax,(%esp)
0866f44d +0x09bb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866f452 +0x09c0:  movl   $0x0,0x18(%esp)
0866f45a +0x09c8:  movl   $0x4,0x14(%esp)
0866f462 +0x09d0:  movl   $0x4,0x10(%esp)
0866f46a +0x09d8:  lea    -0x125(%ebp),%edx
0866f470 +0x09de:  mov    %edx,0xc(%esp)
0866f474 +0x09e2:  lea    -0x134(%ebp),%edx
0866f47a +0x09e8:  mov    %edx,0x8(%esp)
0866f47e +0x09ec:  lea    -0x100(%ebp),%edx
0866f484 +0x09f2:  mov    %edx,0x4(%esp)
0866f488 +0x09f6:  mov    %eax,(%esp)
0866f48b +0x09f9:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
0866f490 +0x09fe:  mov    %eax,-0x9c(%ebp)
0866f496 +0x0a04:  cmpl   $0x0,-0x9c(%ebp)
0866f49d +0x0a0b:  jne    0866f4ec <+0xa5a>
0866f49f +0x0a0d:  movl   $0x5,0xc(%esp)
0866f4a7 +0x0a15:  movl   $0x59ef,0x8(%esp)
0866f4af +0x0a1d:  movl   $&_ZZN5CUser12quest_rewardEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0866f4b7 +0x0a25:  lea    -0xe0(%ebp),%eax
0866f4bd +0x0a2b:  mov    %eax,(%esp)
0866f4c0 +0x0a2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0866f4c5 +0x0a33:  mov    0xc(%ebp),%eax
0866f4c8 +0x0a36:  mov    %eax,0x8(%esp)
0866f4cc +0x0a3a:  movl   $"CUser::quest_reward, QuestID : %d delete_object_count == 0 ",0x4(%esp)
0866f4d4 +0x0a42:  lea    -0xe0(%ebp),%eax
0866f4da +0x0a48:  mov    %eax,(%esp)
0866f4dd +0x0a4b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866f4e2 +0x0a50:  mov    $0x11,%ebx
0866f4e7 +0x0a55:  jmp    08670d76 <+0x22e4>
0866f4ec +0x0a5a:  mov    0x8(%ebp),%eax
0866f4ef +0x0a5d:  mov    %eax,(%esp)
0866f4f2 +0x0a60:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
0866f4f7 +0x0a65:  test   %al,%al
0866f4f9 +0x0a67:  je     0866f505 <+0xa73>
0866f4fb +0x0a69:  movl   $0x0,-0x9c(%ebp)
0866f505 +0x0a73:  movl   $0x0,-0x94(%ebp)
0866f50f +0x0a7d:  movl   $0x0,-0x90(%ebp)
0866f519 +0x0a87:  mov    -0xa0(%ebp),%eax
0866f51f +0x0a8d:  mov    0xb8(%eax),%eax
0866f525 +0x0a93:  test   %eax,%eax
0866f527 +0x0a95:  jne    0866f980 <+0xeee>
0866f52d +0x0a9b:  mov    0x8(%ebp),%eax
0866f530 +0x0a9e:  mov    %eax,(%esp)
0866f533 +0x0aa1:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0866f538 +0x0aa6:  mov    %eax,%edi
0866f53a +0x0aa8:  mov    0x8(%ebp),%eax
0866f53d +0x0aab:  mov    %eax,(%esp)
0866f540 +0x0aae:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866f545 +0x0ab3:  mov    %eax,%esi
0866f547 +0x0ab5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866f54c +0x0aba:  mov    %edi,0x8(%esp)
0866f550 +0x0abe:  mov    %esi,0x4(%esp)
0866f554 +0x0ac2:  mov    %eax,(%esp)
0866f557 +0x0ac5:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
0866f55c +0x0aca:  mov    %eax,-0x80(%ebp)
0866f55f +0x0acd:  mov    0x8(%ebp),%eax
0866f562 +0x0ad0:  mov    %eax,(%esp)
0866f565 +0x0ad3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866f56a +0x0ad8:  mov    %eax,(%esp)
0866f56d +0x0adb:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0866f572 +0x0ae0:  mov    %eax,-0x7c(%ebp)
0866f575 +0x0ae3:  lea    -0x16c(%ebp),%eax
0866f57b +0x0ae9:  mov    %eax,(%esp)
0866f57e +0x0aec:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866f583 +0x0af1:  movl   $0x0,-0x78(%ebp)
0866f58a +0x0af8:  mov    0x8(%ebp),%eax
0866f58d +0x0afb:  mov    %eax,0x4(%esp)
0866f591 +0x0aff:  mov    -0xa0(%ebp),%eax
0866f597 +0x0b05:  mov    %eax,(%esp)
0866f59a +0x0b08:  call   0866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>  ; CUser::getUserQuestRewardItem(Quest const*, CUser const*)
0866f59f +0x0b0d:  mov    %eax,-0x74(%ebp)
0866f5a2 +0x0b10:  lea    -0x170(%ebp),%eax
0866f5a8 +0x0b16:  mov    -0x74(%ebp),%edx
0866f5ab +0x0b19:  mov    %edx,0x4(%esp)
0866f5af +0x0b1d:  mov    %eax,(%esp)
0866f5b2 +0x0b20:  call   083ad0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470a8
0866f5b7 +0x0b25:  sub    $0x4,%esp
0866f5ba +0x0b28:  jmp    0866f69a <+0xc08>
0866f5bf +0x0b2d:  lea    -0x170(%ebp),%eax
0866f5c5 +0x0b33:  mov    %eax,(%esp)
0866f5c8 +0x0b36:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f5cd +0x0b3b:  mov    0x8(%eax),%eax
0866f5d0 +0x0b3e:  cmp    $0xb,%eax
0866f5d3 +0x0b41:  je     0866f637 <+0xba5>
0866f5d5 +0x0b43:  lea    -0x170(%ebp),%eax
0866f5db +0x0b49:  mov    %eax,(%esp)
0866f5de +0x0b4c:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f5e3 +0x0b51:  mov    0x8(%eax),%eax
0866f5e6 +0x0b54:  mov    %eax,%esi
0866f5e8 +0x0b56:  mov    0x8(%ebp),%eax
0866f5eb +0x0b59:  mov    %eax,(%esp)
0866f5ee +0x0b5c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866f5f3 +0x0b61:  cmp    %eax,%esi
0866f5f5 +0x0b63:  jne    0866f630 <+0xb9e>
0866f5f7 +0x0b65:  lea    -0x170(%ebp),%eax
0866f5fd +0x0b6b:  mov    %eax,(%esp)
0866f600 +0x0b6e:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f605 +0x0b73:  mov    0xc(%eax),%eax
0866f608 +0x0b76:  cmp    $0xffffffff,%eax
0866f60b +0x0b79:  je     0866f637 <+0xba5>
0866f60d +0x0b7b:  lea    -0x170(%ebp),%eax
0866f613 +0x0b81:  mov    %eax,(%esp)
0866f616 +0x0b84:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f61b +0x0b89:  mov    0xc(%eax),%esi
0866f61e +0x0b8c:  mov    0x8(%ebp),%eax
0866f621 +0x0b8f:  mov    %eax,(%esp)
0866f624 +0x0b92:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866f629 +0x0b97:  movsbl %al,%eax
0866f62c +0x0b9a:  cmp    %eax,%esi
0866f62e +0x0b9c:  je     0866f637 <+0xba5>
0866f630 +0x0b9e:  mov    $0x1,%eax
0866f635 +0x0ba3:  jmp    0866f63c <+0xbaa>
0866f637 +0x0ba5:  mov    $0x0,%eax
0866f63c +0x0baa:  test   %al,%al
0866f63e +0x0bac:  jne    0866f68b <+0xbf9>
0866f640 +0x0bae:  lea    -0x170(%ebp),%eax
0866f646 +0x0bb4:  mov    %eax,(%esp)
0866f649 +0x0bb7:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f64e +0x0bbc:  mov    (%eax),%eax
0866f650 +0x0bbe:  mov    %eax,-0x114(%ebp)
0866f656 +0x0bc4:  lea    -0x170(%ebp),%eax
0866f65c +0x0bca:  mov    %eax,(%esp)
0866f65f +0x0bcd:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866f664 +0x0bd2:  mov    0x4(%eax),%eax
0866f667 +0x0bd5:  imul   0x14(%ebp),%eax
0866f66b +0x0bd9:  mov    %eax,-0x110(%ebp)
0866f671 +0x0bdf:  lea    -0x114(%ebp),%eax
0866f677 +0x0be5:  mov    %eax,0x4(%esp)
0866f67b +0x0be9:  lea    -0x16c(%ebp),%eax
0866f681 +0x0bef:  mov    %eax,(%esp)
0866f684 +0x0bf2:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0866f689 +0x0bf7:  jmp    0866f68c <+0xbfa>
0866f68b +0x0bf9:  nop
0866f68c +0x0bfa:  lea    -0x170(%ebp),%eax
0866f692 +0x0c00:  mov    %eax,(%esp)
0866f695 +0x0c03:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
0866f69a +0x0c08:  lea    -0xd0(%ebp),%eax
0866f6a0 +0x0c0e:  mov    -0x74(%ebp),%edx
0866f6a3 +0x0c11:  mov    %edx,0x4(%esp)
0866f6a7 +0x0c15:  mov    %eax,(%esp)
0866f6aa +0x0c18:  call   083ad108 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470d4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470d4
0866f6af +0x0c1d:  sub    $0x4,%esp
0866f6b2 +0x0c20:  lea    -0xd0(%ebp),%eax
0866f6b8 +0x0c26:  mov    %eax,0x4(%esp)
0866f6bc +0x0c2a:  lea    -0x170(%ebp),%eax
0866f6c2 +0x0c30:  mov    %eax,(%esp)
0866f6c5 +0x0c33:  call   083e5e57 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7fe23>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7fe23
0866f6ca +0x0c38:  test   %al,%al
0866f6cc +0x0c3a:  jne    0866f5bf <+0xb2d>
0866f6d2 +0x0c40:  cmpl   $0x0,0x10(%ebp)
0866f6d6 +0x0c44:  js     0866f6f7 <+0xc65>
0866f6d8 +0x0c46:  mov    -0xa0(%ebp),%eax
0866f6de +0x0c4c:  add    $0xd0,%eax
0866f6e3 +0x0c51:  mov    %eax,(%esp)
0866f6e6 +0x0c54:  call   08390e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208e0
0866f6eb +0x0c59:  cmp    0x10(%ebp),%eax
0866f6ee +0x0c5c:  jle    0866f6f7 <+0xc65>
0866f6f0 +0x0c5e:  mov    $0x1,%eax
0866f6f5 +0x0c63:  jmp    0866f6fc <+0xc6a>
0866f6f7 +0x0c65:  mov    $0x0,%eax
0866f6fc +0x0c6a:  test   %al,%al
0866f6fe +0x0c6c:  je     0866f763 <+0xcd1>
0866f700 +0x0c6e:  mov    0x10(%ebp),%eax
0866f703 +0x0c71:  mov    -0xa0(%ebp),%edx
0866f709 +0x0c77:  add    $0xd0,%edx
0866f70f +0x0c7d:  mov    %eax,0x4(%esp)
0866f713 +0x0c81:  mov    %edx,(%esp)
0866f716 +0x0c84:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
0866f71b +0x0c89:  mov    (%eax),%eax
0866f71d +0x0c8b:  mov    %eax,-0x114(%ebp)
0866f723 +0x0c91:  mov    0x10(%ebp),%eax
0866f726 +0x0c94:  mov    -0xa0(%ebp),%edx
0866f72c +0x0c9a:  add    $0xd0,%edx
0866f732 +0x0ca0:  mov    %eax,0x4(%esp)
0866f736 +0x0ca4:  mov    %edx,(%esp)
0866f739 +0x0ca7:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
0866f73e +0x0cac:  mov    0x4(%eax),%eax
0866f741 +0x0caf:  imul   0x14(%ebp),%eax
0866f745 +0x0cb3:  mov    %eax,-0x110(%ebp)
0866f74b +0x0cb9:  lea    -0x114(%ebp),%eax
0866f751 +0x0cbf:  mov    %eax,0x4(%esp)
0866f755 +0x0cc3:  lea    -0x16c(%ebp),%eax
0866f75b +0x0cc9:  mov    %eax,(%esp)
0866f75e +0x0ccc:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0866f763 +0x0cd1:  lea    -0x174(%ebp),%eax
0866f769 +0x0cd7:  lea    -0x16c(%ebp),%edx
0866f76f +0x0cdd:  mov    %edx,0x4(%esp)
0866f773 +0x0ce1:  mov    %eax,(%esp)
0866f776 +0x0ce4:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0866f77b +0x0ce9:  sub    $0x4,%esp
0866f77e +0x0cec:  jmp    0866f884 <+0xdf2>
0866f783 +0x0cf1:  lea    -0x174(%ebp),%eax
0866f789 +0x0cf7:  mov    %eax,(%esp)
0866f78c +0x0cfa:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f791 +0x0cff:  mov    (%eax),%eax
0866f793 +0x0d01:  test   %eax,%eax
0866f795 +0x0d03:  sete   %al
0866f798 +0x0d06:  test   %al,%al
0866f79a +0x0d08:  je     0866f842 <+0xdb0>
0866f7a0 +0x0d0e:  mov    -0x11c(%ebp),%eax
0866f7a6 +0x0d14:  imul   0x14(%ebp),%eax
0866f7aa +0x0d18:  mov    %eax,-0x70(%ebp)
0866f7ad +0x0d1b:  mov    -0x70(%ebp),%eax
0866f7b0 +0x0d1e:  mov    %eax,-0x94(%ebp)
0866f7b6 +0x0d24:  mov    -0x70(%ebp),%eax
0866f7b9 +0x0d27:  mov    -0x80(%ebp),%edx
0866f7bc +0x0d2a:  mov    %edx,%ecx
0866f7be +0x0d2c:  sub    %eax,%ecx
0866f7c0 +0x0d2e:  mov    %ecx,%eax
0866f7c2 +0x0d30:  cmp    -0x7c(%ebp),%eax
0866f7c5 +0x0d33:  jl     0866f7ef <+0xd5d>
0866f7c7 +0x0d35:  mov    -0x70(%ebp),%eax
0866f7ca +0x0d38:  add    %eax,-0x7c(%ebp)
0866f7cd +0x0d3b:  mov    -0x70(%ebp),%eax
0866f7d0 +0x0d3e:  add    %eax,-0x90(%ebp)
0866f7d6 +0x0d44:  lea    -0x174(%ebp),%eax
0866f7dc +0x0d4a:  mov    %eax,(%esp)
0866f7df +0x0d4d:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f7e4 +0x0d52:  mov    -0x70(%ebp),%edx
0866f7e7 +0x0d55:  mov    %edx,0x4(%eax)
0866f7ea +0x0d58:  jmp    0866f876 <+0xde4>
0866f7ef +0x0d5d:  mov    -0x7c(%ebp),%eax
0866f7f2 +0x0d60:  cmp    -0x80(%ebp),%eax
0866f7f5 +0x0d63:  jge    0866f82b <+0xd99>
0866f7f7 +0x0d65:  mov    -0x7c(%ebp),%eax
0866f7fa +0x0d68:  mov    -0x80(%ebp),%edx
0866f7fd +0x0d6b:  mov    %edx,%ecx
0866f7ff +0x0d6d:  sub    %eax,%ecx
0866f801 +0x0d6f:  mov    %ecx,%eax
0866f803 +0x0d71:  mov    %eax,-0x6c(%ebp)
0866f806 +0x0d74:  lea    -0x174(%ebp),%eax
0866f80c +0x0d7a:  mov    %eax,(%esp)
0866f80f +0x0d7d:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f814 +0x0d82:  mov    -0x6c(%ebp),%edx
0866f817 +0x0d85:  mov    %edx,0x4(%eax)
0866f81a +0x0d88:  mov    -0x6c(%ebp),%eax
0866f81d +0x0d8b:  add    %eax,-0x90(%ebp)
0866f823 +0x0d91:  mov    -0x80(%ebp),%eax
0866f826 +0x0d94:  mov    %eax,-0x7c(%ebp)
0866f829 +0x0d97:  jmp    0866f876 <+0xde4>
0866f82b +0x0d99:  lea    -0x174(%ebp),%eax
0866f831 +0x0d9f:  mov    %eax,(%esp)
0866f834 +0x0da2:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f839 +0x0da7:  movl   $0x0,0x4(%eax)
0866f840 +0x0dae:  jmp    0866f876 <+0xde4>
0866f842 +0x0db0:  lea    -0x174(%ebp),%eax
0866f848 +0x0db6:  mov    %eax,(%esp)
0866f84b +0x0db9:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f850 +0x0dbe:  mov    0x4(%eax),%esi
0866f853 +0x0dc1:  lea    -0x174(%ebp),%eax
0866f859 +0x0dc7:  mov    %eax,(%esp)
0866f85c +0x0dca:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866f861 +0x0dcf:  mov    (%eax),%eax
0866f863 +0x0dd1:  mov    %esi,0x8(%esp)
0866f867 +0x0dd5:  mov    %eax,0x4(%esp)
0866f86b +0x0dd9:  mov    0x8(%ebp),%eax
0866f86e +0x0ddc:  mov    %eax,(%esp)
0866f871 +0x0ddf:  call   08692b84 <_ZN5CUser20SendAradEventItemLogEmi>  ; CUser::SendAradEventItemLog(unsigned long, int)
0866f876 +0x0de4:  lea    -0x174(%ebp),%eax
0866f87c +0x0dea:  mov    %eax,(%esp)
0866f87f +0x0ded:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0866f884 +0x0df2:  lea    -0xcc(%ebp),%eax
0866f88a +0x0df8:  lea    -0x16c(%ebp),%edx
0866f890 +0x0dfe:  mov    %edx,0x4(%esp)
0866f894 +0x0e02:  mov    %eax,(%esp)
0866f897 +0x0e05:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0866f89c +0x0e0a:  sub    $0x4,%esp
0866f89f +0x0e0d:  lea    -0xcc(%ebp),%eax
0866f8a5 +0x0e13:  mov    %eax,0x4(%esp)
0866f8a9 +0x0e17:  lea    -0x174(%ebp),%eax
0866f8af +0x0e1d:  mov    %eax,(%esp)
0866f8b2 +0x0e20:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0866f8b7 +0x0e25:  test   %al,%al
0866f8b9 +0x0e27:  jne    0866f783 <+0xcf1>
0866f8bf +0x0e2d:  mov    0x8(%ebp),%eax
0866f8c2 +0x0e30:  mov    %eax,(%esp)
0866f8c5 +0x0e33:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866f8ca +0x0e38:  movl   $"",0x1c(%esp)
0866f8d2 +0x0e40:  movl   $"",0x18(%esp)
0866f8da +0x0e48:  movl   $0x0,0x14(%esp)
0866f8e2 +0x0e50:  movl   $0x8,0x10(%esp)
0866f8ea +0x0e58:  movl   $0x3,0xc(%esp)
0866f8f2 +0x0e60:  lea    -0x140(%ebp),%edx
0866f8f8 +0x0e66:  mov    %edx,0x8(%esp)
0866f8fc +0x0e6a:  lea    -0x16c(%ebp),%edx
0866f902 +0x0e70:  mov    %edx,0x4(%esp)
0866f906 +0x0e74:  mov    %eax,(%esp)
0866f909 +0x0e77:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
0866f90e +0x0e7c:  mov    %eax,-0x98(%ebp)
0866f914 +0x0e82:  mov    -0x120(%ebp),%ecx
0866f91a +0x0e88:  mov    -0x11c(%ebp),%edx
0866f920 +0x0e8e:  mov    -0x118(%ebp),%eax
0866f926 +0x0e94:  mov    %ecx,0x18(%esp)
0866f92a +0x0e98:  mov    %edx,0x14(%esp)
0866f92e +0x0e9c:  mov    %eax,0x10(%esp)
0866f932 +0x0ea0:  lea    -0x16c(%ebp),%eax
0866f938 +0x0ea6:  mov    %eax,0xc(%esp)
0866f93c +0x0eaa:  mov    0x14(%ebp),%eax
0866f93f +0x0ead:  mov    %eax,0x8(%esp)
0866f943 +0x0eb1:  mov    0xc(%ebp),%eax
0866f946 +0x0eb4:  mov    %eax,0x4(%esp)
0866f94a +0x0eb8:  mov    0x8(%ebp),%eax
0866f94d +0x0ebb:  mov    %eax,(%esp)
0866f950 +0x0ebe:  call   086645a4 <_ZN5CUser23eventDeliveryQuestClearEiiRSt6vectorISt4pairIiiESaIS2_EEiii>  ; CUser::eventDeliveryQuestClear(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int, int)
0866f955 +0x0ec3:  jmp    0866f972 <+0xee0>
0866f957 +0x0ec5:  mov    %edx,%ebx
0866f959 +0x0ec7:  mov    %eax,%esi
0866f95b +0x0ec9:  lea    -0x16c(%ebp),%eax
0866f961 +0x0ecf:  mov    %eax,(%esp)
0866f964 +0x0ed2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866f969 +0x0ed7:  mov    %esi,%eax
0866f96b +0x0ed9:  mov    %ebx,%edx
0866f96d +0x0edb:  jmp    08670d5e <+0x22cc>
0866f972 +0x0ee0:  lea    -0x16c(%ebp),%eax
0866f978 +0x0ee6:  mov    %eax,(%esp)
0866f97b +0x0ee9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866f980 +0x0eee:  mov    -0xa0(%ebp),%eax
0866f986 +0x0ef4:  mov    0x7c(%eax),%eax
0866f989 +0x0ef7:  mov    %eax,0x4(%esp)
0866f98d +0x0efb:  lea    -0xf4(%ebp),%eax
0866f993 +0x0f01:  mov    %eax,(%esp)
0866f996 +0x0f04:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866f99b +0x0f09:  mov    -0x118(%ebp),%eax
0866f9a1 +0x0f0f:  mov    %eax,0x4(%esp)
0866f9a5 +0x0f13:  lea    -0xf4(%ebp),%eax
0866f9ab +0x0f19:  mov    %eax,(%esp)
0866f9ae +0x0f1c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866f9b3 +0x0f21:  mov    -0xa0(%ebp),%eax
0866f9b9 +0x0f27:  mov    0x7c(%eax),%eax
0866f9bc +0x0f2a:  test   %eax,%eax
0866f9be +0x0f2c:  je     0866f9d2 <+0xf40>
0866f9c0 +0x0f2e:  mov    -0xa0(%ebp),%eax
0866f9c6 +0x0f34:  mov    0x7c(%eax),%eax
0866f9c9 +0x0f37:  cmp    $0x19,%eax
0866f9cc +0x0f3a:  jne    0866fb9b <+0x1109>
0866f9d2 +0x0f40:  mov    -0xa0(%ebp),%eax
0866f9d8 +0x0f46:  mov    0xb8(%eax),%eax
0866f9de +0x0f4c:  cmp    $0x19,%eax
0866f9e1 +0x0f4f:  jne    0866fa40 <+0xfae>
0866f9e3 +0x0f51:  movl   $0x1,0x4(%esp)
0866f9eb +0x0f59:  lea    -0xf4(%ebp),%eax
0866f9f1 +0x0f5f:  mov    %eax,(%esp)
0866f9f4 +0x0f62:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866f9f9 +0x0f67:  movl   $0x7,0x4(%esp)
0866fa01 +0x0f6f:  lea    -0xf4(%ebp),%eax
0866fa07 +0x0f75:  mov    %eax,(%esp)
0866fa0a +0x0f78:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fa0f +0x0f7d:  movl   $0x0,0x4(%esp)
0866fa17 +0x0f85:  lea    -0xf4(%ebp),%eax
0866fa1d +0x0f8b:  mov    %eax,(%esp)
0866fa20 +0x0f8e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866fa25 +0x0f93:  movl   $0x0,0x4(%esp)
0866fa2d +0x0f9b:  lea    -0xf4(%ebp),%eax
0866fa33 +0x0fa1:  mov    %eax,(%esp)
0866fa36 +0x0fa4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866fa3b +0x0fa9:  jmp    0866fb9b <+0x1109>
0866fa40 +0x0fae:  mov    -0x9c(%ebp),%eax
0866fa46 +0x0fb4:  mov    %eax,0x4(%esp)
0866fa4a +0x0fb8:  lea    -0xf4(%ebp),%eax
0866fa50 +0x0fbe:  mov    %eax,(%esp)
0866fa53 +0x0fc1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fa58 +0x0fc6:  cmpl   $0x0,-0x9c(%ebp)
0866fa5f +0x0fcd:  jle    0866fb9b <+0x1109>
0866fa65 +0x0fd3:  lea    -0xcb3c(%ebp),%eax
0866fa6b +0x0fd9:  lea    -0x134(%ebp),%edx
0866fa71 +0x0fdf:  mov    %edx,0x4(%esp)
0866fa75 +0x0fe3:  mov    %eax,(%esp)
0866fa78 +0x0fe6:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0866fa7d +0x0feb:  sub    $0x4,%esp
0866fa80 +0x0fee:  mov    -0xcb3c(%ebp),%eax
0866fa86 +0x0ff4:  mov    %eax,-0x144(%ebp)
0866fa8c +0x0ffa:  jmp    0866fb60 <+0x10ce>
0866fa91 +0x0fff:  lea    -0x144(%ebp),%eax
0866fa97 +0x1005:  mov    %eax,(%esp)
0866fa9a +0x1008:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fa9f +0x100d:  mov    (%eax),%eax
0866faa1 +0x100f:  mov    %eax,0x4(%esp)
0866faa5 +0x1013:  lea    -0xf4(%ebp),%eax
0866faab +0x1019:  mov    %eax,(%esp)
0866faae +0x101c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fab3 +0x1021:  lea    -0xc4(%ebp),%eax
0866fab9 +0x1027:  movl   $0x0,0x8(%esp)
0866fac1 +0x102f:  lea    -0x144(%ebp),%edx
0866fac7 +0x1035:  mov    %edx,0x4(%esp)
0866facb +0x1039:  mov    %eax,(%esp)
0866face +0x103c:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fad3 +0x1041:  sub    $0x4,%esp
0866fad6 +0x1044:  lea    -0x144(%ebp),%eax
0866fadc +0x104a:  mov    %eax,(%esp)
0866fadf +0x104d:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fae4 +0x1052:  mov    (%eax),%eax
0866fae6 +0x1054:  mov    %eax,0x4(%esp)
0866faea +0x1058:  lea    -0xf4(%ebp),%eax
0866faf0 +0x105e:  mov    %eax,(%esp)
0866faf3 +0x1061:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866faf8 +0x1066:  lea    -0xc0(%ebp),%eax
0866fafe +0x106c:  movl   $0x0,0x8(%esp)
0866fb06 +0x1074:  lea    -0x144(%ebp),%edx
0866fb0c +0x107a:  mov    %edx,0x4(%esp)
0866fb10 +0x107e:  mov    %eax,(%esp)
0866fb13 +0x1081:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fb18 +0x1086:  sub    $0x4,%esp
0866fb1b +0x1089:  lea    -0x144(%ebp),%eax
0866fb21 +0x108f:  mov    %eax,(%esp)
0866fb24 +0x1092:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fb29 +0x1097:  mov    (%eax),%eax
0866fb2b +0x1099:  mov    %eax,0x4(%esp)
0866fb2f +0x109d:  lea    -0xf4(%ebp),%eax
0866fb35 +0x10a3:  mov    %eax,(%esp)
0866fb38 +0x10a6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866fb3d +0x10ab:  lea    -0xbc(%ebp),%eax
0866fb43 +0x10b1:  movl   $0x0,0x8(%esp)
0866fb4b +0x10b9:  lea    -0x144(%ebp),%edx
0866fb51 +0x10bf:  mov    %edx,0x4(%esp)
0866fb55 +0x10c3:  mov    %eax,(%esp)
0866fb58 +0x10c6:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fb5d +0x10cb:  sub    $0x4,%esp
0866fb60 +0x10ce:  lea    -0xc8(%ebp),%eax
0866fb66 +0x10d4:  lea    -0x134(%ebp),%edx
0866fb6c +0x10da:  mov    %edx,0x4(%esp)
0866fb70 +0x10de:  mov    %eax,(%esp)
0866fb73 +0x10e1:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0866fb78 +0x10e6:  sub    $0x4,%esp
0866fb7b +0x10e9:  lea    -0xc8(%ebp),%eax
0866fb81 +0x10ef:  mov    %eax,0x4(%esp)
0866fb85 +0x10f3:  lea    -0x144(%ebp),%eax
0866fb8b +0x10f9:  mov    %eax,(%esp)
0866fb8e +0x10fc:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0866fb93 +0x1101:  test   %al,%al
0866fb95 +0x1103:  jne    0866fa91 <+0xfff>
0866fb9b +0x1109:  mov    -0xa0(%ebp),%eax
0866fba1 +0x110f:  mov    0xb8(%eax),%eax
0866fba7 +0x1115:  mov    %eax,0x4(%esp)
0866fbab +0x1119:  lea    -0xf4(%ebp),%eax
0866fbb1 +0x111f:  mov    %eax,(%esp)
0866fbb4 +0x1122:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fbb9 +0x1127:  mov    -0xa0(%ebp),%eax
0866fbbf +0x112d:  mov    0xb8(%eax),%eax
0866fbc5 +0x1133:  test   %eax,%eax
0866fbc7 +0x1135:  jne    0866fe62 <+0x13d0>
0866fbcd +0x113b:  mov    -0x98(%ebp),%eax
0866fbd3 +0x1141:  mov    %eax,0x4(%esp)
0866fbd7 +0x1145:  lea    -0xf4(%ebp),%eax
0866fbdd +0x114b:  mov    %eax,(%esp)
0866fbe0 +0x114e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fbe5 +0x1153:  cmpl   $0x0,-0x98(%ebp)
0866fbec +0x115a:  jle    0866fe62 <+0x13d0>
0866fbf2 +0x1160:  lea    -0xcb3c(%ebp),%eax
0866fbf8 +0x1166:  lea    -0x140(%ebp),%edx
0866fbfe +0x116c:  mov    %edx,0x4(%esp)
0866fc02 +0x1170:  mov    %eax,(%esp)
0866fc05 +0x1173:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0866fc0a +0x1178:  sub    $0x4,%esp
0866fc0d +0x117b:  mov    -0xcb3c(%ebp),%eax
0866fc13 +0x1181:  mov    %eax,-0x144(%ebp)
0866fc19 +0x1187:  jmp    0866fe27 <+0x1395>
0866fc1e +0x118c:  lea    -0x144(%ebp),%eax
0866fc24 +0x1192:  mov    %eax,(%esp)
0866fc27 +0x1195:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fc2c +0x119a:  mov    (%eax),%eax
0866fc2e +0x119c:  mov    %eax,-0x68(%ebp)
0866fc31 +0x119f:  lea    -0x144(%ebp),%eax
0866fc37 +0x11a5:  mov    %eax,(%esp)
0866fc3a +0x11a8:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fc3f +0x11ad:  mov    (%eax),%eax
0866fc41 +0x11af:  mov    %eax,0x4(%esp)
0866fc45 +0x11b3:  lea    -0xf4(%ebp),%eax
0866fc4b +0x11b9:  mov    %eax,(%esp)
0866fc4e +0x11bc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866fc53 +0x11c1:  lea    -0xb4(%ebp),%eax
0866fc59 +0x11c7:  movl   $0x0,0x8(%esp)
0866fc61 +0x11cf:  lea    -0x144(%ebp),%edx
0866fc67 +0x11d5:  mov    %edx,0x4(%esp)
0866fc6b +0x11d9:  mov    %eax,(%esp)
0866fc6e +0x11dc:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fc73 +0x11e1:  sub    $0x4,%esp
0866fc76 +0x11e4:  lea    -0x144(%ebp),%eax
0866fc7c +0x11ea:  mov    %eax,(%esp)
0866fc7f +0x11ed:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fc84 +0x11f2:  mov    (%eax),%eax
0866fc86 +0x11f4:  mov    %eax,-0x64(%ebp)
0866fc89 +0x11f7:  lea    -0x144(%ebp),%eax
0866fc8f +0x11fd:  mov    %eax,(%esp)
0866fc92 +0x1200:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fc97 +0x1205:  mov    (%eax),%eax
0866fc99 +0x1207:  mov    %eax,0x4(%esp)
0866fc9d +0x120b:  lea    -0xf4(%ebp),%eax
0866fca3 +0x1211:  mov    %eax,(%esp)
0866fca6 +0x1214:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866fcab +0x1219:  lea    -0xb0(%ebp),%eax
0866fcb1 +0x121f:  movl   $0x0,0x8(%esp)
0866fcb9 +0x1227:  lea    -0x144(%ebp),%edx
0866fcbf +0x122d:  mov    %edx,0x4(%esp)
0866fcc3 +0x1231:  mov    %eax,(%esp)
0866fcc6 +0x1234:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fccb +0x1239:  sub    $0x4,%esp
0866fcce +0x123c:  lea    -0x144(%ebp),%eax
0866fcd4 +0x1242:  mov    %eax,(%esp)
0866fcd7 +0x1245:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866fcdc +0x124a:  mov    (%eax),%eax
0866fcde +0x124c:  mov    %eax,0x4(%esp)
0866fce2 +0x1250:  lea    -0xf4(%ebp),%eax
0866fce8 +0x1256:  mov    %eax,(%esp)
0866fceb +0x1259:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866fcf0 +0x125e:  lea    -0xac(%ebp),%eax
0866fcf6 +0x1264:  movl   $0x0,0x8(%esp)
0866fcfe +0x126c:  lea    -0x144(%ebp),%edx
0866fd04 +0x1272:  mov    %edx,0x4(%esp)
0866fd08 +0x1276:  mov    %eax,(%esp)
0866fd0b +0x1279:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0866fd10 +0x127e:  sub    $0x4,%esp
0866fd13 +0x1281:  movl   $0x1,-0x60(%ebp)
0866fd1a +0x1288:  mov    -0x64(%ebp),%esi
0866fd1d +0x128b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866fd22 +0x1290:  mov    %esi,0x4(%esp)
0866fd26 +0x1294:  mov    %eax,(%esp)
0866fd29 +0x1297:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0866fd2e +0x129c:  mov    %eax,-0x5c(%ebp)
0866fd31 +0x129f:  cmpl   $0x0,-0x5c(%ebp)
0866fd35 +0x12a3:  je     0866fd54 <+0x12c2>
0866fd37 +0x12a5:  mov    -0x5c(%ebp),%eax
0866fd3a +0x12a8:  mov    (%eax),%eax
0866fd3c +0x12aa:  add    $0x10,%eax
0866fd3f +0x12ad:  mov    (%eax),%edx
0866fd41 +0x12af:  mov    -0x5c(%ebp),%eax
0866fd44 +0x12b2:  mov    %eax,(%esp)
0866fd47 +0x12b5:  call   *%edx
0866fd49 +0x12b7:  test   %al,%al
0866fd4b +0x12b9:  je     0866fd54 <+0x12c2>
0866fd4d +0x12bb:  movl   $0x2,-0x60(%ebp)
0866fd54 +0x12c2:  mov    -0x60(%ebp),%esi
0866fd57 +0x12c5:  mov    0x8(%ebp),%eax
0866fd5a +0x12c8:  mov    %eax,(%esp)
0866fd5d +0x12cb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866fd62 +0x12d0:  lea    -0x23e(%ebp),%edx
0866fd68 +0x12d6:  mov    -0x68(%ebp),%ecx
0866fd6b +0x12d9:  mov    %ecx,0xc(%esp)
0866fd6f +0x12dd:  mov    %esi,0x8(%esp)
0866fd73 +0x12e1:  mov    %eax,0x4(%esp)
0866fd77 +0x12e5:  mov    %edx,(%esp)
0866fd7a +0x12e8:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0866fd7f +0x12ed:  sub    $0x4,%esp
0866fd82 +0x12f0:  lea    -0x23e(%ebp),%eax
0866fd88 +0x12f6:  add    $0x11,%eax
0866fd8b +0x12f9:  mov    %eax,(%esp)
0866fd8e +0x12fc:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0866fd93 +0x1301:  movzbl %al,%eax
0866fd96 +0x1304:  mov    %eax,0x4(%esp)
0866fd9a +0x1308:  lea    -0xf4(%ebp),%eax
0866fda0 +0x130e:  mov    %eax,(%esp)
0866fda3 +0x1311:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fda8 +0x1316:  lea    -0x23e(%ebp),%eax
0866fdae +0x131c:  add    $0x11,%eax
0866fdb1 +0x131f:  mov    %eax,(%esp)
0866fdb4 +0x1322:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0866fdb9 +0x1327:  movzwl %ax,%eax
0866fdbc +0x132a:  mov    %eax,0x4(%esp)
0866fdc0 +0x132e:  lea    -0xf4(%ebp),%eax
0866fdc6 +0x1334:  mov    %eax,(%esp)
0866fdc9 +0x1337:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866fdce +0x133c:  cmpl   $0x0,-0x5c(%ebp)
0866fdd2 +0x1340:  je     0866fdea <+0x1358>
0866fdd4 +0x1342:  mov    -0x5c(%ebp),%eax
0866fdd7 +0x1345:  mov    %eax,(%esp)
0866fdda +0x1348:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0866fddf +0x134d:  test   %al,%al
0866fde1 +0x134f:  je     0866fdea <+0x1358>
0866fde3 +0x1351:  mov    $0x1,%eax
0866fde8 +0x1356:  jmp    0866fdef <+0x135d>
0866fdea +0x1358:  mov    $0x0,%eax
0866fdef +0x135d:  test   %al,%al
0866fdf1 +0x135f:  je     0866fe11 <+0x137f>
0866fdf3 +0x1361:  movzwl -0x233(%ebp),%eax
0866fdfa +0x1368:  movzwl %ax,%eax
0866fdfd +0x136b:  mov    %eax,0x4(%esp)
0866fe01 +0x136f:  lea    -0xf4(%ebp),%eax
0866fe07 +0x1375:  mov    %eax,(%esp)
0866fe0a +0x1378:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866fe0f +0x137d:  jmp    0866fe27 <+0x1395>
0866fe11 +0x137f:  movl   $0x0,0x4(%esp)
0866fe19 +0x1387:  lea    -0xf4(%ebp),%eax
0866fe1f +0x138d:  mov    %eax,(%esp)
0866fe22 +0x1390:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866fe27 +0x1395:  lea    -0xb8(%ebp),%eax
0866fe2d +0x139b:  lea    -0x140(%ebp),%edx
0866fe33 +0x13a1:  mov    %edx,0x4(%esp)
0866fe37 +0x13a5:  mov    %eax,(%esp)
0866fe3a +0x13a8:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0866fe3f +0x13ad:  sub    $0x4,%esp
0866fe42 +0x13b0:  lea    -0xb8(%ebp),%eax
0866fe48 +0x13b6:  mov    %eax,0x4(%esp)
0866fe4c +0x13ba:  lea    -0x144(%ebp),%eax
0866fe52 +0x13c0:  mov    %eax,(%esp)
0866fe55 +0x13c3:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0866fe5a +0x13c8:  test   %al,%al
0866fe5c +0x13ca:  jne    0866fc1e <+0x118c>
0866fe62 +0x13d0:  mov    -0xa0(%ebp),%eax
0866fe68 +0x13d6:  mov    0xb8(%eax),%eax
0866fe6e +0x13dc:  cmp    $0x1,%eax
0866fe71 +0x13df:  jne    086700ce <+0x163c>
0866fe77 +0x13e5:  mov    -0xa0(%ebp),%eax
0866fe7d +0x13eb:  mov    0xc0(%eax),%eax
0866fe83 +0x13f1:  mov    %eax,-0x58(%ebp)
0866fe86 +0x13f4:  mov    -0x58(%ebp),%eax
0866fe89 +0x13f7:  mov    %eax,0x4(%esp)
0866fe8d +0x13fb:  lea    -0xf4(%ebp),%eax
0866fe93 +0x1401:  mov    %eax,(%esp)
0866fe96 +0x1404:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866fe9b +0x1409:  lea    -0xf4(%ebp),%esi
0866fea1 +0x140f:  mov    0x8(%ebp),%eax
0866fea4 +0x1412:  mov    %eax,(%esp)
0866fea7 +0x1415:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866feac +0x141a:  movzbl %al,%edx
0866feaf +0x141d:  mov    -0x58(%ebp),%eax
0866feb2 +0x1420:  movzbl %al,%eax
0866feb5 +0x1423:  movl   $0x0,0x10(%esp)
0866febd +0x142b:  mov    %esi,0xc(%esp)
0866fec1 +0x142f:  mov    %edx,0x8(%esp)
0866fec5 +0x1433:  mov    %eax,0x4(%esp)
0866fec9 +0x1437:  mov    0x8(%ebp),%eax
0866fecc +0x143a:  mov    %eax,(%esp)
0866fecf +0x143d:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
0866fed4 +0x1442:  lea    -0x180(%ebp),%eax
0866feda +0x1448:  mov    %eax,(%esp)
0866fedd +0x144b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866fee2 +0x1450:  movl   $0x2,0x8(%esp)
0866feea +0x1458:  movl   $0x0,0x4(%esp)
0866fef2 +0x1460:  lea    -0x180(%ebp),%eax
0866fef8 +0x1466:  mov    %eax,(%esp)
0866fefb +0x1469:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866ff00 +0x146e:  movl   $0x0,0x4(%esp)
0866ff08 +0x1476:  lea    -0x180(%ebp),%eax
0866ff0e +0x147c:  mov    %eax,(%esp)
0866ff11 +0x147f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866ff16 +0x1484:  movl   $0x1,0x4(%esp)
0866ff1e +0x148c:  lea    -0x180(%ebp),%eax
0866ff24 +0x1492:  mov    %eax,(%esp)
0866ff27 +0x1495:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866ff2c +0x149a:  lea    -0x180(%ebp),%eax
0866ff32 +0x14a0:  movl   $0x0,0x8(%esp)
0866ff3a +0x14a8:  mov    %eax,0x4(%esp)
0866ff3e +0x14ac:  mov    0x8(%ebp),%eax
0866ff41 +0x14af:  mov    %eax,(%esp)
0866ff44 +0x14b2:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0866ff49 +0x14b7:  movl   $0x1,0x4(%esp)
0866ff51 +0x14bf:  lea    -0x180(%ebp),%eax
0866ff57 +0x14c5:  mov    %eax,(%esp)
0866ff5a +0x14c8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866ff5f +0x14cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866ff64 +0x14d2:  mov    0x8(%ebp),%edx
0866ff67 +0x14d5:  mov    %edx,0x8(%esp)
0866ff6b +0x14d9:  lea    -0x180(%ebp),%edx
0866ff71 +0x14df:  mov    %edx,0x4(%esp)
0866ff75 +0x14e3:  mov    %eax,(%esp)
0866ff78 +0x14e6:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0866ff7d +0x14eb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0866ff82 +0x14f0:  movl   $0x5aed,0x8(%esp)
0866ff8a +0x14f8:  movl   $"user.cpp",0x4(%esp)
0866ff92 +0x1500:  mov    %eax,(%esp)
0866ff95 +0x1503:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0866ff9a +0x1508:  movl   $0x1,0x8(%esp)
0866ffa2 +0x1510:  mov    %eax,0x4(%esp)
0866ffa6 +0x1514:  lea    -0x188(%ebp),%eax
0866ffac +0x151a:  mov    %eax,(%esp)
0866ffaf +0x151d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0866ffb4 +0x1522:  lea    -0x188(%ebp),%eax
0866ffba +0x1528:  mov    %eax,(%esp)
0866ffbd +0x152b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0866ffc2 +0x1530:  movl   $0x24,0x4(%esp)
0866ffca +0x1538:  mov    %eax,(%esp)
0866ffcd +0x153b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0866ffd2 +0x1540:  mov    0x8(%ebp),%eax
0866ffd5 +0x1543:  mov    %eax,(%esp)
0866ffd8 +0x1546:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0866ffdd +0x154b:  mov    %eax,%esi
0866ffdf +0x154d:  lea    -0x188(%ebp),%eax
0866ffe5 +0x1553:  mov    %eax,(%esp)
0866ffe8 +0x1556:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0866ffed +0x155b:  mov    %esi,0x4(%esp)
0866fff1 +0x155f:  mov    %eax,(%esp)
0866fff4 +0x1562:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0866fff9 +0x1567:  lea    -0x188(%ebp),%eax
0866ffff +0x156d:  mov    %eax,(%esp)
08670002 +0x1570:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08670007 +0x1575:  mov    %eax,(%esp)
0867000a +0x1578:  call   08236d46 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3f0
0867000f +0x157d:  mov    %eax,-0x54(%ebp)
08670012 +0x1580:  movl   $0x414,0x8(%esp)
0867001a +0x1588:  movl   $0x0,0x4(%esp)
08670022 +0x1590:  mov    -0x54(%ebp),%eax
08670025 +0x1593:  mov    %eax,(%esp)
08670028 +0x1596:  call   0807dcc0 <_init+0x5b8>
0867002d +0x159b:  mov    0x8(%ebp),%eax
08670030 +0x159e:  mov    %eax,(%esp)
08670033 +0x15a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08670038 +0x15a6:  mov    -0x54(%ebp),%edx
0867003b +0x15a9:  mov    %eax,(%edx)
0867003d +0x15ab:  mov    -0x54(%ebp),%eax
08670040 +0x15ae:  movb   $0x1,0x410(%eax)
08670047 +0x15b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867004c +0x15ba:  movzbl 0xa850(%eax),%edx
08670053 +0x15c1:  mov    -0x54(%ebp),%eax
08670056 +0x15c4:  mov    %dl,0x411(%eax)
0867005c +0x15ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08670061 +0x15cf:  lea    -0x188(%ebp),%edx
08670067 +0x15d5:  mov    %edx,0x8(%esp)
0867006b +0x15d9:  movl   $0x2,0x4(%esp)
08670073 +0x15e1:  mov    %eax,(%esp)
08670076 +0x15e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0867007b +0x15e9:  jmp    08670095 <+0x1603>
0867007d +0x15eb:  mov    %edx,%ebx
0867007f +0x15ed:  mov    %eax,%esi
08670081 +0x15ef:  lea    -0x188(%ebp),%eax
08670087 +0x15f5:  mov    %eax,(%esp)
0867008a +0x15f8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0867008f +0x15fd:  mov    %esi,%eax
08670091 +0x15ff:  mov    %ebx,%edx
08670093 +0x1601:  jmp    086700a5 <+0x1613>
08670095 +0x1603:  lea    -0x188(%ebp),%eax
0867009b +0x1609:  mov    %eax,(%esp)
0867009e +0x160c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086700a3 +0x1611:  jmp    086700c0 <+0x162e>
086700a5 +0x1613:  mov    %edx,%ebx
086700a7 +0x1615:  mov    %eax,%esi
086700a9 +0x1617:  lea    -0x180(%ebp),%eax
086700af +0x161d:  mov    %eax,(%esp)
086700b2 +0x1620:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086700b7 +0x1625:  mov    %esi,%eax
086700b9 +0x1627:  mov    %ebx,%edx
086700bb +0x1629:  jmp    08670d5e <+0x22cc>
086700c0 +0x162e:  lea    -0x180(%ebp),%eax
086700c6 +0x1634:  mov    %eax,(%esp)
086700c9 +0x1637:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086700ce +0x163c:  mov    -0xa0(%ebp),%eax
086700d4 +0x1642:  mov    0xb8(%eax),%eax
086700da +0x1648:  cmp    $0x2,%eax
086700dd +0x164b:  jne    08670214 <+0x1782>
086700e3 +0x1651:  mov    -0xa0(%ebp),%eax
086700e9 +0x1657:  mov    0xc0(%eax),%eax
086700ef +0x165d:  mov    %eax,-0x50(%ebp)
086700f2 +0x1660:  mov    -0x50(%ebp),%eax
086700f5 +0x1663:  mov    %eax,0x4(%esp)
086700f9 +0x1667:  lea    -0xf4(%ebp),%eax
086700ff +0x166d:  mov    %eax,(%esp)
08670102 +0x1670:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670107 +0x1675:  lea    -0xf4(%ebp),%edi
0867010d +0x167b:  mov    -0x50(%ebp),%eax
08670110 +0x167e:  movzbl %al,%esi
08670113 +0x1681:  mov    0x8(%ebp),%eax
08670116 +0x1684:  mov    %eax,(%esp)
08670119 +0x1687:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867011e +0x168c:  movzbl %al,%eax
08670121 +0x168f:  movl   $0x0,0x10(%esp)
08670129 +0x1697:  mov    %edi,0xc(%esp)
0867012d +0x169b:  mov    %esi,0x8(%esp)
08670131 +0x169f:  mov    %eax,0x4(%esp)
08670135 +0x16a3:  mov    0x8(%ebp),%eax
08670138 +0x16a6:  mov    %eax,(%esp)
0867013b +0x16a9:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
08670140 +0x16ae:  lea    -0x194(%ebp),%eax
08670146 +0x16b4:  mov    %eax,(%esp)
08670149 +0x16b7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867014e +0x16bc:  movl   $0x2,0x8(%esp)
08670156 +0x16c4:  movl   $0x0,0x4(%esp)
0867015e +0x16cc:  lea    -0x194(%ebp),%eax
08670164 +0x16d2:  mov    %eax,(%esp)
08670167 +0x16d5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867016c +0x16da:  movl   $0x0,0x4(%esp)
08670174 +0x16e2:  lea    -0x194(%ebp),%eax
0867017a +0x16e8:  mov    %eax,(%esp)
0867017d +0x16eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670182 +0x16f0:  movl   $0x1,0x4(%esp)
0867018a +0x16f8:  lea    -0x194(%ebp),%eax
08670190 +0x16fe:  mov    %eax,(%esp)
08670193 +0x1701:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08670198 +0x1706:  lea    -0x194(%ebp),%eax
0867019e +0x170c:  movl   $0x0,0x8(%esp)
086701a6 +0x1714:  mov    %eax,0x4(%esp)
086701aa +0x1718:  mov    0x8(%ebp),%eax
086701ad +0x171b:  mov    %eax,(%esp)
086701b0 +0x171e:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086701b5 +0x1723:  movl   $0x1,0x4(%esp)
086701bd +0x172b:  lea    -0x194(%ebp),%eax
086701c3 +0x1731:  mov    %eax,(%esp)
086701c6 +0x1734:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086701cb +0x1739:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086701d0 +0x173e:  mov    0x8(%ebp),%edx
086701d3 +0x1741:  mov    %edx,0x8(%esp)
086701d7 +0x1745:  lea    -0x194(%ebp),%edx
086701dd +0x174b:  mov    %edx,0x4(%esp)
086701e1 +0x174f:  mov    %eax,(%esp)
086701e4 +0x1752:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086701e9 +0x1757:  jmp    08670206 <+0x1774>
086701eb +0x1759:  mov    %edx,%ebx
086701ed +0x175b:  mov    %eax,%esi
086701ef +0x175d:  lea    -0x194(%ebp),%eax
086701f5 +0x1763:  mov    %eax,(%esp)
086701f8 +0x1766:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086701fd +0x176b:  mov    %esi,%eax
086701ff +0x176d:  mov    %ebx,%edx
08670201 +0x176f:  jmp    08670d5e <+0x22cc>
08670206 +0x1774:  lea    -0x194(%ebp),%eax
0867020c +0x177a:  mov    %eax,(%esp)
0867020f +0x177d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08670214 +0x1782:  mov    -0xa0(%ebp),%eax
0867021a +0x1788:  mov    0xb8(%eax),%eax
08670220 +0x178e:  cmp    $0xa,%eax
08670223 +0x1791:  jne    08670289 <+0x17f7>
08670225 +0x1793:  mov    -0xa0(%ebp),%eax
0867022b +0x1799:  mov    0xc0(%eax),%eax
08670231 +0x179f:  test   %eax,%eax
08670233 +0x17a1:  jle    08670289 <+0x17f7>
08670235 +0x17a3:  mov    -0xa0(%ebp),%eax
0867023b +0x17a9:  mov    0xfc(%eax),%edi
08670241 +0x17af:  mov    -0xa0(%ebp),%eax
08670247 +0x17b5:  mov    0xc0(%eax),%esi
0867024d +0x17bb:  mov    0x8(%ebp),%eax
08670250 +0x17be:  mov    %eax,(%esp)
08670253 +0x17c1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08670258 +0x17c6:  mov    %eax,(%esp)
0867025b +0x17c9:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08670260 +0x17ce:  movl   $0x0,0xc(%esp)
08670268 +0x17d6:  mov    %edi,0x8(%esp)
0867026c +0x17da:  mov    %esi,0x4(%esp)
08670270 +0x17de:  mov    %eax,(%esp)
08670273 +0x17e1:  call   0833beb4 <_ZN13user_creature12CCreatureMgr7EvoluteEiib>  ; user_creature::CCreatureMgr::Evolute(int, int, bool)
08670278 +0x17e6:  xor    $0x1,%eax
0867027b +0x17e9:  test   %al,%al
0867027d +0x17eb:  je     08670289 <+0x17f7>
0867027f +0x17ed:  mov    $0x16,%ebx
08670284 +0x17f2:  jmp    08670d76 <+0x22e4>
08670289 +0x17f7:  mov    -0xa0(%ebp),%eax
0867028f +0x17fd:  mov    0xb8(%eax),%eax
08670295 +0x1803:  cmp    $0x14,%eax
08670298 +0x1806:  jne    08670761 <+0x1ccf>
0867029e +0x180c:  mov    0x8(%ebp),%eax
086702a1 +0x180f:  mov    %eax,(%esp)
086702a4 +0x1812:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086702a9 +0x1817:  mov    -0xa0(%ebp),%edx
086702af +0x181d:  mov    0x20(%edx),%edx
086702b2 +0x1820:  cmp    %edx,%eax
086702b4 +0x1822:  setl   %al
086702b7 +0x1825:  test   %al,%al
086702b9 +0x1827:  je     086702c5 <+0x1833>
086702bb +0x1829:  mov    $0x16,%ebx
086702c0 +0x182e:  jmp    08670d76 <+0x22e4>
086702c5 +0x1833:  mov    -0xa0(%ebp),%eax
086702cb +0x1839:  mov    0xc0(%eax),%eax
086702d1 +0x183f:  mov    %eax,-0x4c(%ebp)
086702d4 +0x1842:  mov    0x8(%ebp),%eax
086702d7 +0x1845:  mov    -0x4c(%ebp),%edx
086702da +0x1848:  mov    %edx,0x4(%esp)
086702de +0x184c:  mov    %eax,(%esp)
086702e1 +0x184f:  call   0849f53e <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x36f>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x36f
086702e6 +0x1854:  mov    -0x4c(%ebp),%eax
086702e9 +0x1857:  mov    %eax,0x4(%esp)
086702ed +0x185b:  lea    -0xf4(%ebp),%eax
086702f3 +0x1861:  mov    %eax,(%esp)
086702f6 +0x1864:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086702fb +0x1869:  movl   $0x0,0xc(%esp)
08670303 +0x1871:  movl   $0x0,0x8(%esp)
0867030b +0x1879:  movl   $0x22,0x4(%esp)
08670313 +0x1881:  mov    0x8(%ebp),%eax
08670316 +0x1884:  mov    %eax,(%esp)
08670319 +0x1887:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0867031e +0x188c:  mov    0x8(%ebp),%eax
08670321 +0x188f:  mov    %eax,(%esp)
08670324 +0x1892:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08670329 +0x1897:  mov    -0x4c(%ebp),%edx
0867032c +0x189a:  mov    %edx,0xc(%esp)
08670330 +0x189e:  mov    %eax,0x8(%esp)
08670334 +0x18a2:  movl   $"ExpertJob+,%d,%d",0x4(%esp)
0867033c +0x18aa:  mov    0x8(%ebp),%eax
0867033f +0x18ad:  mov    %eax,(%esp)
08670342 +0x18b0:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08670347 +0x18b5:  lea    -0xf4(%ebp),%eax
0867034d +0x18bb:  mov    %eax,(%esp)
08670350 +0x18be:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08670355 +0x18c3:  mov    %eax,-0x198(%ebp)
0867035b +0x18c9:  movl   $0x0,-0x44(%ebp)
08670362 +0x18d0:  movl   $0x0,0x4(%esp)
0867036a +0x18d8:  lea    -0xf4(%ebp),%eax
08670370 +0x18de:  mov    %eax,(%esp)
08670373 +0x18e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670378 +0x18e6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867037d +0x18eb:  mov    -0x4c(%ebp),%edx
08670380 +0x18ee:  mov    %edx,0x4(%esp)
08670384 +0x18f2:  mov    %eax,(%esp)
08670387 +0x18f5:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0867038c +0x18fa:  mov    %eax,-0x40(%ebp)
0867038f +0x18fd:  cmpl   $0x0,-0x40(%ebp)
08670393 +0x1901:  je     0867068d <+0x1bfb>
08670399 +0x1907:  movl   $0x0,-0x3c(%ebp)
086703a0 +0x190e:  jmp    086704a5 <+0x1a13>
086703a5 +0x1913:  mov    0x8(%ebp),%eax
086703a8 +0x1916:  mov    %eax,(%esp)
086703ab +0x1919:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086703b0 +0x191e:  test   %eax,%eax
086703b2 +0x1920:  setne  %al
086703b5 +0x1923:  test   %al,%al
086703b7 +0x1925:  je     086704a1 <+0x1a0f>
086703bd +0x192b:  mov    -0x40(%ebp),%eax
086703c0 +0x192e:  lea    0xc(%eax),%edx
086703c3 +0x1931:  mov    -0x3c(%ebp),%eax
086703c6 +0x1934:  mov    %eax,0x4(%esp)
086703ca +0x1938:  mov    %edx,(%esp)
086703cd +0x193b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086703d2 +0x1940:  mov    0x4(%eax),%eax
086703d5 +0x1943:  mov    %eax,-0xcb48(%ebp)
086703db +0x1949:  mov    -0x40(%ebp),%eax
086703de +0x194c:  lea    0xc(%eax),%edx
086703e1 +0x194f:  mov    -0x3c(%ebp),%eax
086703e4 +0x1952:  mov    %eax,0x4(%esp)
086703e8 +0x1956:  mov    %edx,(%esp)
086703eb +0x1959:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086703f0 +0x195e:  mov    (%eax),%edi
086703f2 +0x1960:  mov    0x8(%ebp),%eax
086703f5 +0x1963:  mov    %eax,(%esp)
086703f8 +0x1966:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086703fd +0x196b:  mov    %eax,%esi
086703ff +0x196d:  mov    0x8(%ebp),%eax
08670402 +0x1970:  mov    %eax,(%esp)
08670405 +0x1973:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867040a +0x1978:  movl   $0x0,0x10(%esp)
08670412 +0x1980:  mov    -0xcb48(%ebp),%edx
08670418 +0x1986:  mov    %edx,0xc(%esp)
0867041c +0x198a:  mov    %edi,0x8(%esp)
08670420 +0x198e:  mov    %esi,0x4(%esp)
08670424 +0x1992:  mov    %eax,(%esp)
08670427 +0x1995:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0867042c +0x199a:  mov    %eax,-0x48(%ebp)
0867042f +0x199d:  cmpl   $0x0,-0x48(%ebp)
08670433 +0x19a1:  jle    086704a1 <+0x1a0f>
08670435 +0x19a3:  mov    -0x48(%ebp),%eax
08670438 +0x19a6:  mov    %eax,0x4(%esp)
0867043c +0x19aa:  lea    -0xf4(%ebp),%eax
08670442 +0x19b0:  mov    %eax,(%esp)
08670445 +0x19b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867044a +0x19b8:  mov    -0x40(%ebp),%eax
0867044d +0x19bb:  lea    0xc(%eax),%edx
08670450 +0x19be:  mov    -0x3c(%ebp),%eax
08670453 +0x19c1:  mov    %eax,0x4(%esp)
08670457 +0x19c5:  mov    %edx,(%esp)
0867045a +0x19c8:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0867045f +0x19cd:  mov    (%eax),%eax
08670461 +0x19cf:  mov    %eax,0x4(%esp)
08670465 +0x19d3:  lea    -0xf4(%ebp),%eax
0867046b +0x19d9:  mov    %eax,(%esp)
0867046e +0x19dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670473 +0x19e1:  mov    -0x40(%ebp),%eax
08670476 +0x19e4:  lea    0xc(%eax),%edx
08670479 +0x19e7:  mov    -0x3c(%ebp),%eax
0867047c +0x19ea:  mov    %eax,0x4(%esp)
08670480 +0x19ee:  mov    %edx,(%esp)
08670483 +0x19f1:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08670488 +0x19f6:  mov    0x4(%eax),%eax
0867048b +0x19f9:  mov    %eax,0x4(%esp)
0867048f +0x19fd:  lea    -0xf4(%ebp),%eax
08670495 +0x1a03:  mov    %eax,(%esp)
08670498 +0x1a06:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867049d +0x1a0b:  addl   $0x1,-0x44(%ebp)
086704a1 +0x1a0f:  addl   $0x1,-0x3c(%ebp)
086704a5 +0x1a13:  mov    -0x40(%ebp),%eax
086704a8 +0x1a16:  add    $0xc,%eax
086704ab +0x1a19:  mov    %eax,(%esp)
086704ae +0x1a1c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086704b3 +0x1a21:  cmp    -0x3c(%ebp),%eax
086704b6 +0x1a24:  seta   %al
086704b9 +0x1a27:  test   %al,%al
086704bb +0x1a29:  jne    086703a5 <+0x1913>
086704c1 +0x1a2f:  mov    -0x44(%ebp),%eax
086704c4 +0x1a32:  mov    %eax,0x8(%esp)
086704c8 +0x1a36:  lea    -0x198(%ebp),%eax
086704ce +0x1a3c:  mov    %eax,0x4(%esp)
086704d2 +0x1a40:  lea    -0xf4(%ebp),%eax
086704d8 +0x1a46:  mov    %eax,(%esp)
086704db +0x1a49:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
086704e0 +0x1a4e:  lea    -0xf4(%ebp),%eax
086704e6 +0x1a54:  mov    %eax,(%esp)
086704e9 +0x1a57:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086704ee +0x1a5c:  mov    %eax,-0x198(%ebp)
086704f4 +0x1a62:  movl   $0x0,-0x44(%ebp)
086704fb +0x1a69:  movl   $0x0,0x4(%esp)
08670503 +0x1a71:  lea    -0xf4(%ebp),%eax
08670509 +0x1a77:  mov    %eax,(%esp)
0867050c +0x1a7a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670511 +0x1a7f:  movl   $0x0,-0x38(%ebp)
08670518 +0x1a86:  jmp    0867061d <+0x1b8b>
0867051d +0x1a8b:  mov    0x8(%ebp),%eax
08670520 +0x1a8e:  mov    %eax,(%esp)
08670523 +0x1a91:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08670528 +0x1a96:  test   %eax,%eax
0867052a +0x1a98:  setne  %al
0867052d +0x1a9b:  test   %al,%al
0867052f +0x1a9d:  je     08670619 <+0x1b87>
08670535 +0x1aa3:  mov    -0x40(%ebp),%eax
08670538 +0x1aa6:  lea    0xc(%eax),%edx
0867053b +0x1aa9:  mov    -0x38(%ebp),%eax
0867053e +0x1aac:  mov    %eax,0x4(%esp)
08670542 +0x1ab0:  mov    %edx,(%esp)
08670545 +0x1ab3:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0867054a +0x1ab8:  mov    0x4(%eax),%eax
0867054d +0x1abb:  mov    %eax,-0xcb44(%ebp)
08670553 +0x1ac1:  mov    -0x40(%ebp),%eax
08670556 +0x1ac4:  lea    0xc(%eax),%edx
08670559 +0x1ac7:  mov    -0x38(%ebp),%eax
0867055c +0x1aca:  mov    %eax,0x4(%esp)
08670560 +0x1ace:  mov    %edx,(%esp)
08670563 +0x1ad1:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08670568 +0x1ad6:  mov    (%eax),%edi
0867056a +0x1ad8:  mov    0x8(%ebp),%eax
0867056d +0x1adb:  mov    %eax,(%esp)
08670570 +0x1ade:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08670575 +0x1ae3:  mov    %eax,%esi
08670577 +0x1ae5:  mov    0x8(%ebp),%eax
0867057a +0x1ae8:  mov    %eax,(%esp)
0867057d +0x1aeb:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08670582 +0x1af0:  movl   $0x1,0x10(%esp)
0867058a +0x1af8:  mov    -0xcb44(%ebp),%ecx
08670590 +0x1afe:  mov    %ecx,0xc(%esp)
08670594 +0x1b02:  mov    %edi,0x8(%esp)
08670598 +0x1b06:  mov    %esi,0x4(%esp)
0867059c +0x1b0a:  mov    %eax,(%esp)
0867059f +0x1b0d:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086705a4 +0x1b12:  mov    %eax,-0x48(%ebp)
086705a7 +0x1b15:  cmpl   $0x0,-0x48(%ebp)
086705ab +0x1b19:  jle    08670619 <+0x1b87>
086705ad +0x1b1b:  mov    -0x48(%ebp),%eax
086705b0 +0x1b1e:  mov    %eax,0x4(%esp)
086705b4 +0x1b22:  lea    -0xf4(%ebp),%eax
086705ba +0x1b28:  mov    %eax,(%esp)
086705bd +0x1b2b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086705c2 +0x1b30:  mov    -0x40(%ebp),%eax
086705c5 +0x1b33:  lea    0xc(%eax),%edx
086705c8 +0x1b36:  mov    -0x38(%ebp),%eax
086705cb +0x1b39:  mov    %eax,0x4(%esp)
086705cf +0x1b3d:  mov    %edx,(%esp)
086705d2 +0x1b40:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086705d7 +0x1b45:  mov    (%eax),%eax
086705d9 +0x1b47:  mov    %eax,0x4(%esp)
086705dd +0x1b4b:  lea    -0xf4(%ebp),%eax
086705e3 +0x1b51:  mov    %eax,(%esp)
086705e6 +0x1b54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086705eb +0x1b59:  mov    -0x40(%ebp),%eax
086705ee +0x1b5c:  lea    0xc(%eax),%edx
086705f1 +0x1b5f:  mov    -0x38(%ebp),%eax
086705f4 +0x1b62:  mov    %eax,0x4(%esp)
086705f8 +0x1b66:  mov    %edx,(%esp)
086705fb +0x1b69:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08670600 +0x1b6e:  mov    0x4(%eax),%eax
08670603 +0x1b71:  mov    %eax,0x4(%esp)
08670607 +0x1b75:  lea    -0xf4(%ebp),%eax
0867060d +0x1b7b:  mov    %eax,(%esp)
08670610 +0x1b7e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670615 +0x1b83:  addl   $0x1,-0x44(%ebp)
08670619 +0x1b87:  addl   $0x1,-0x38(%ebp)
0867061d +0x1b8b:  mov    -0x40(%ebp),%eax
08670620 +0x1b8e:  add    $0xc,%eax
08670623 +0x1b91:  mov    %eax,(%esp)
08670626 +0x1b94:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0867062b +0x1b99:  cmp    -0x38(%ebp),%eax
0867062e +0x1b9c:  seta   %al
08670631 +0x1b9f:  test   %al,%al
08670633 +0x1ba1:  jne    0867051d <+0x1a8b>
08670639 +0x1ba7:  mov    -0x44(%ebp),%eax
0867063c +0x1baa:  mov    %eax,0x8(%esp)
08670640 +0x1bae:  lea    -0x198(%ebp),%eax
08670646 +0x1bb4:  mov    %eax,0x4(%esp)
0867064a +0x1bb8:  lea    -0xf4(%ebp),%eax
08670650 +0x1bbe:  mov    %eax,(%esp)
08670653 +0x1bc1:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08670658 +0x1bc6:  movl   $0x0,0x4(%esp)
08670660 +0x1bce:  mov    0x8(%ebp),%eax
08670663 +0x1bd1:  mov    %eax,(%esp)
08670666 +0x1bd4:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0867066b +0x1bd9:  mov    -0x40(%ebp),%edx
0867066e +0x1bdc:  mov    %edx,0x4(%esp)
08670672 +0x1be0:  mov    %eax,(%esp)
08670675 +0x1be3:  call   0832b36c <_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript>  ; expert_job::CCharacExpertJob::InitScript(STExpertJobScript*)
0867067a +0x1be8:  mov    0x8(%ebp),%eax
0867067d +0x1beb:  movl   $0x0,0x4(%esp)
08670685 +0x1bf3:  mov    %eax,(%esp)
08670688 +0x1bf6:  call   0849f56a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x39b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x39b
0867068d +0x1bfb:  lea    -0x1a4(%ebp),%eax
08670693 +0x1c01:  mov    %eax,(%esp)
08670696 +0x1c04:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867069b +0x1c09:  movl   $0x2,0x8(%esp)
086706a3 +0x1c11:  movl   $0x0,0x4(%esp)
086706ab +0x1c19:  lea    -0x1a4(%ebp),%eax
086706b1 +0x1c1f:  mov    %eax,(%esp)
086706b4 +0x1c22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086706b9 +0x1c27:  movl   $0x0,0x4(%esp)
086706c1 +0x1c2f:  lea    -0x1a4(%ebp),%eax
086706c7 +0x1c35:  mov    %eax,(%esp)
086706ca +0x1c38:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086706cf +0x1c3d:  movl   $0x1,0x4(%esp)
086706d7 +0x1c45:  lea    -0x1a4(%ebp),%eax
086706dd +0x1c4b:  mov    %eax,(%esp)
086706e0 +0x1c4e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086706e5 +0x1c53:  lea    -0x1a4(%ebp),%eax
086706eb +0x1c59:  movl   $0x0,0x8(%esp)
086706f3 +0x1c61:  mov    %eax,0x4(%esp)
086706f7 +0x1c65:  mov    0x8(%ebp),%eax
086706fa +0x1c68:  mov    %eax,(%esp)
086706fd +0x1c6b:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08670702 +0x1c70:  movl   $0x1,0x4(%esp)
0867070a +0x1c78:  lea    -0x1a4(%ebp),%eax
08670710 +0x1c7e:  mov    %eax,(%esp)
08670713 +0x1c81:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08670718 +0x1c86:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867071d +0x1c8b:  mov    0x8(%ebp),%edx
08670720 +0x1c8e:  mov    %edx,0x8(%esp)
08670724 +0x1c92:  lea    -0x1a4(%ebp),%edx
0867072a +0x1c98:  mov    %edx,0x4(%esp)
0867072e +0x1c9c:  mov    %eax,(%esp)
08670731 +0x1c9f:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
08670736 +0x1ca4:  jmp    08670753 <+0x1cc1>
08670738 +0x1ca6:  mov    %edx,%ebx
0867073a +0x1ca8:  mov    %eax,%esi
0867073c +0x1caa:  lea    -0x1a4(%ebp),%eax
08670742 +0x1cb0:  mov    %eax,(%esp)
08670745 +0x1cb3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867074a +0x1cb8:  mov    %esi,%eax
0867074c +0x1cba:  mov    %ebx,%edx
0867074e +0x1cbc:  jmp    08670d5e <+0x22cc>
08670753 +0x1cc1:  lea    -0x1a4(%ebp),%eax
08670759 +0x1cc7:  mov    %eax,(%esp)
0867075c +0x1cca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08670761 +0x1ccf:  mov    -0xa0(%ebp),%eax
08670767 +0x1cd5:  mov    0xb8(%eax),%eax
0867076d +0x1cdb:  cmp    $0x15,%eax
08670770 +0x1cde:  jne    0867087d <+0x1deb>
08670776 +0x1ce4:  mov    -0xa0(%ebp),%eax
0867077c +0x1cea:  mov    0xc0(%eax),%eax
08670782 +0x1cf0:  mov    %eax,-0x34(%ebp)
08670785 +0x1cf3:  mov    -0x34(%ebp),%eax
08670788 +0x1cf6:  mov    %eax,0x4(%esp)
0867078c +0x1cfa:  lea    -0xf4(%ebp),%eax
08670792 +0x1d00:  mov    %eax,(%esp)
08670795 +0x1d03:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867079a +0x1d08:  movl   $0x3,0x8(%esp)
086707a2 +0x1d10:  mov    -0x34(%ebp),%eax
086707a5 +0x1d13:  mov    %eax,0x4(%esp)
086707a9 +0x1d17:  mov    0x8(%ebp),%eax
086707ac +0x1d1a:  mov    %eax,(%esp)
086707af +0x1d1d:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
086707b4 +0x1d22:  movzbl %al,%eax
086707b7 +0x1d25:  mov    %eax,-0x30(%ebp)
086707ba +0x1d28:  lea    -0x1b0(%ebp),%eax
086707c0 +0x1d2e:  mov    %eax,(%esp)
086707c3 +0x1d31:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086707c8 +0x1d36:  movl   $0x5,0x8(%esp)
086707d0 +0x1d3e:  movl   $0x0,0x4(%esp)
086707d8 +0x1d46:  lea    -0x1b0(%ebp),%eax
086707de +0x1d4c:  mov    %eax,(%esp)
086707e1 +0x1d4f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086707e6 +0x1d54:  movl   $0x1,0x4(%esp)
086707ee +0x1d5c:  lea    -0x1b0(%ebp),%eax
086707f4 +0x1d62:  mov    %eax,(%esp)
086707f7 +0x1d65:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086707fc +0x1d6a:  mov    -0x34(%ebp),%eax
086707ff +0x1d6d:  mov    %eax,0x4(%esp)
08670803 +0x1d71:  lea    -0x1b0(%ebp),%eax
08670809 +0x1d77:  mov    %eax,(%esp)
0867080c +0x1d7a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08670811 +0x1d7f:  movl   $0x4,0x4(%esp)
08670819 +0x1d87:  lea    -0x1b0(%ebp),%eax
0867081f +0x1d8d:  mov    %eax,(%esp)
08670822 +0x1d90:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08670827 +0x1d95:  movl   $0x1,0x4(%esp)
0867082f +0x1d9d:  lea    -0x1b0(%ebp),%eax
08670835 +0x1da3:  mov    %eax,(%esp)
08670838 +0x1da6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867083d +0x1dab:  lea    -0x1b0(%ebp),%eax
08670843 +0x1db1:  mov    %eax,0x4(%esp)
08670847 +0x1db5:  mov    0x8(%ebp),%eax
0867084a +0x1db8:  mov    %eax,(%esp)
0867084d +0x1dbb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08670852 +0x1dc0:  jmp    0867086f <+0x1ddd>
08670854 +0x1dc2:  mov    %edx,%ebx
08670856 +0x1dc4:  mov    %eax,%esi
08670858 +0x1dc6:  lea    -0x1b0(%ebp),%eax
0867085e +0x1dcc:  mov    %eax,(%esp)
08670861 +0x1dcf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08670866 +0x1dd4:  mov    %esi,%eax
08670868 +0x1dd6:  mov    %ebx,%edx
0867086a +0x1dd8:  jmp    08670d5e <+0x22cc>
0867086f +0x1ddd:  lea    -0x1b0(%ebp),%eax
08670875 +0x1de3:  mov    %eax,(%esp)
08670878 +0x1de6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867087d +0x1deb:  mov    -0xa0(%ebp),%eax
08670883 +0x1df1:  mov    0xb8(%eax),%eax
08670889 +0x1df7:  cmp    $0x16,%eax
0867088c +0x1dfa:  jne    08670943 <+0x1eb1>
08670892 +0x1e00:  movl   $0x0,-0x2c(%ebp)
08670899 +0x1e07:  mov    -0xa0(%ebp),%eax
0867089f +0x1e0d:  mov    0xc0(%eax),%eax
086708a5 +0x1e13:  mov    %eax,-0x2c(%ebp)
086708a8 +0x1e16:  mov    0x8(%ebp),%eax
086708ab +0x1e19:  mov    %eax,(%esp)
086708ae +0x1e1c:  call   08696afe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3353>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3353
086708b3 +0x1e21:  mov    %al,-0x25(%ebp)
086708b6 +0x1e24:  cmpl   $0x14,-0x2c(%ebp)
086708ba +0x1e28:  jne    086708e3 <+0x1e51>
086708bc +0x1e2a:  cmpb   $0x0,-0x25(%ebp)
086708c0 +0x1e2e:  je     086708c8 <+0x1e36>
086708c2 +0x1e30:  cmpb   $0x2,-0x25(%ebp)
086708c6 +0x1e34:  jne    0867090e <+0x1e7c>
086708c8 +0x1e36:  movzbl -0x25(%ebp),%eax
086708cc +0x1e3a:  add    $0x1,%eax
086708cf +0x1e3d:  movsbl %al,%edx
086708d2 +0x1e40:  mov    0x8(%ebp),%eax
086708d5 +0x1e43:  mov    %edx,0x4(%esp)
086708d9 +0x1e47:  mov    %eax,(%esp)
086708dc +0x1e4a:  call   084ec44c <_GLOBAL__I__Z7getUserj+0x33fe>  ; global constructors keyed to getUser(unsigned int)+0x33fe
086708e1 +0x1e4f:  jmp    0867090e <+0x1e7c>
086708e3 +0x1e51:  cmpl   $0x15,-0x2c(%ebp)
086708e7 +0x1e55:  jne    0867090e <+0x1e7c>
086708e9 +0x1e57:  cmpb   $0x0,-0x25(%ebp)
086708ed +0x1e5b:  je     086708f5 <+0x1e63>
086708ef +0x1e5d:  cmpb   $0x1,-0x25(%ebp)
086708f3 +0x1e61:  jne    0867090e <+0x1e7c>
086708f5 +0x1e63:  movzbl -0x25(%ebp),%eax
086708f9 +0x1e67:  add    $0x2,%eax
086708fc +0x1e6a:  movsbl %al,%edx
086708ff +0x1e6d:  mov    0x8(%ebp),%eax
08670902 +0x1e70:  mov    %edx,0x4(%esp)
08670906 +0x1e74:  mov    %eax,(%esp)
08670909 +0x1e77:  call   084ec44c <_GLOBAL__I__Z7getUserj+0x33fe>  ; global constructors keyed to getUser(unsigned int)+0x33fe
0867090e +0x1e7c:  mov    0x8(%ebp),%eax
08670911 +0x1e7f:  mov    %eax,(%esp)
08670914 +0x1e82:  call   08696afe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3353>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3353
08670919 +0x1e87:  movzbl %al,%eax
0867091c +0x1e8a:  mov    %eax,0x4(%esp)
08670920 +0x1e8e:  lea    -0xf4(%ebp),%eax
08670926 +0x1e94:  mov    %eax,(%esp)
08670929 +0x1e97:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867092e +0x1e9c:  mov    -0x2c(%ebp),%eax
08670931 +0x1e9f:  mov    %eax,0x4(%esp)
08670935 +0x1ea3:  lea    -0xf4(%ebp),%eax
0867093b +0x1ea9:  mov    %eax,(%esp)
0867093e +0x1eac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08670943 +0x1eb1:  mov    -0xa0(%ebp),%eax
08670949 +0x1eb7:  mov    0xb8(%eax),%eax
0867094f +0x1ebd:  cmp    $0x19,%eax
08670952 +0x1ec0:  jne    08670cd9 <+0x2247>
08670958 +0x1ec6:  movl   $0x0,-0x24(%ebp)
0867095f +0x1ecd:  lea    -0x1bc(%ebp),%eax
08670965 +0x1ed3:  mov    %eax,(%esp)
08670968 +0x1ed6:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867096d +0x1edb:  mov    0x8(%ebp),%eax
08670970 +0x1ede:  mov    %eax,0x4(%esp)
08670974 +0x1ee2:  mov    -0xa0(%ebp),%eax
0867097a +0x1ee8:  mov    %eax,(%esp)
0867097d +0x1eeb:  call   0866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>  ; CUser::getUserQuestRewardItem(Quest const*, CUser const*)
08670982 +0x1ef0:  mov    %eax,-0x20(%ebp)
08670985 +0x1ef3:  lea    -0x1c0(%ebp),%eax
0867098b +0x1ef9:  mov    -0x20(%ebp),%edx
0867098e +0x1efc:  mov    %edx,0x4(%esp)
08670992 +0x1f00:  mov    %eax,(%esp)
08670995 +0x1f03:  call   083ad0dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470a8
0867099a +0x1f08:  sub    $0x4,%esp
0867099d +0x1f0b:  jmp    08670a7d <+0x1feb>
086709a2 +0x1f10:  lea    -0x1c0(%ebp),%eax
086709a8 +0x1f16:  mov    %eax,(%esp)
086709ab +0x1f19:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
086709b0 +0x1f1e:  mov    0x8(%eax),%eax
086709b3 +0x1f21:  cmp    $0xb,%eax
086709b6 +0x1f24:  je     08670a1a <+0x1f88>
086709b8 +0x1f26:  lea    -0x1c0(%ebp),%eax
086709be +0x1f2c:  mov    %eax,(%esp)
086709c1 +0x1f2f:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
086709c6 +0x1f34:  mov    0x8(%eax),%eax
086709c9 +0x1f37:  mov    %eax,%esi
086709cb +0x1f39:  mov    0x8(%ebp),%eax
086709ce +0x1f3c:  mov    %eax,(%esp)
086709d1 +0x1f3f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086709d6 +0x1f44:  cmp    %eax,%esi
086709d8 +0x1f46:  jne    08670a13 <+0x1f81>
086709da +0x1f48:  lea    -0x1c0(%ebp),%eax
086709e0 +0x1f4e:  mov    %eax,(%esp)
086709e3 +0x1f51:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
086709e8 +0x1f56:  mov    0xc(%eax),%eax
086709eb +0x1f59:  cmp    $0xffffffff,%eax
086709ee +0x1f5c:  je     08670a1a <+0x1f88>
086709f0 +0x1f5e:  lea    -0x1c0(%ebp),%eax
086709f6 +0x1f64:  mov    %eax,(%esp)
086709f9 +0x1f67:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
086709fe +0x1f6c:  mov    0xc(%eax),%esi
08670a01 +0x1f6f:  mov    0x8(%ebp),%eax
08670a04 +0x1f72:  mov    %eax,(%esp)
08670a07 +0x1f75:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08670a0c +0x1f7a:  movsbl %al,%eax
08670a0f +0x1f7d:  cmp    %eax,%esi
08670a11 +0x1f7f:  je     08670a1a <+0x1f88>
08670a13 +0x1f81:  mov    $0x1,%eax
08670a18 +0x1f86:  jmp    08670a1f <+0x1f8d>
08670a1a +0x1f88:  mov    $0x0,%eax
08670a1f +0x1f8d:  test   %al,%al
08670a21 +0x1f8f:  jne    08670a6e <+0x1fdc>
08670a23 +0x1f91:  lea    -0x1c0(%ebp),%eax
08670a29 +0x1f97:  mov    %eax,(%esp)
08670a2c +0x1f9a:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08670a31 +0x1f9f:  mov    (%eax),%eax
08670a33 +0x1fa1:  mov    %eax,-0x114(%ebp)
08670a39 +0x1fa7:  lea    -0x1c0(%ebp),%eax
08670a3f +0x1fad:  mov    %eax,(%esp)
08670a42 +0x1fb0:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08670a47 +0x1fb5:  mov    0x4(%eax),%eax
08670a4a +0x1fb8:  imul   0x14(%ebp),%eax
08670a4e +0x1fbc:  mov    %eax,-0x110(%ebp)
08670a54 +0x1fc2:  lea    -0x114(%ebp),%eax
08670a5a +0x1fc8:  mov    %eax,0x4(%esp)
08670a5e +0x1fcc:  lea    -0x1bc(%ebp),%eax
08670a64 +0x1fd2:  mov    %eax,(%esp)
08670a67 +0x1fd5:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08670a6c +0x1fda:  jmp    08670a6f <+0x1fdd>
08670a6e +0x1fdc:  nop
08670a6f +0x1fdd:  lea    -0x1c0(%ebp),%eax
08670a75 +0x1fe3:  mov    %eax,(%esp)
08670a78 +0x1fe6:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
08670a7d +0x1feb:  lea    -0xa8(%ebp),%eax
08670a83 +0x1ff1:  mov    -0x20(%ebp),%edx
08670a86 +0x1ff4:  mov    %edx,0x4(%esp)
08670a8a +0x1ff8:  mov    %eax,(%esp)
08670a8d +0x1ffb:  call   083ad108 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x470d4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x470d4
08670a92 +0x2000:  sub    $0x4,%esp
08670a95 +0x2003:  lea    -0xa8(%ebp),%eax
08670a9b +0x2009:  mov    %eax,0x4(%esp)
08670a9f +0x200d:  lea    -0x1c0(%ebp),%eax
08670aa5 +0x2013:  mov    %eax,(%esp)
08670aa8 +0x2016:  call   083e5e57 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7fe23>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7fe23
08670aad +0x201b:  test   %al,%al
08670aaf +0x201d:  jne    086709a2 <+0x1f10>
08670ab5 +0x2023:  cmpl   $0x0,0x10(%ebp)
08670ab9 +0x2027:  js     08670ada <+0x2048>
08670abb +0x2029:  mov    -0xa0(%ebp),%eax
08670ac1 +0x202f:  add    $0xd0,%eax
08670ac6 +0x2034:  mov    %eax,(%esp)
08670ac9 +0x2037:  call   08390e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208e0
08670ace +0x203c:  cmp    0x10(%ebp),%eax
08670ad1 +0x203f:  jle    08670ada <+0x2048>
08670ad3 +0x2041:  mov    $0x1,%eax
08670ad8 +0x2046:  jmp    08670adf <+0x204d>
08670ada +0x2048:  mov    $0x0,%eax
08670adf +0x204d:  test   %al,%al
08670ae1 +0x204f:  je     08670b46 <+0x20b4>
08670ae3 +0x2051:  mov    0x10(%ebp),%eax
08670ae6 +0x2054:  mov    -0xa0(%ebp),%edx
08670aec +0x205a:  add    $0xd0,%edx
08670af2 +0x2060:  mov    %eax,0x4(%esp)
08670af6 +0x2064:  mov    %edx,(%esp)
08670af9 +0x2067:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08670afe +0x206c:  mov    (%eax),%eax
08670b00 +0x206e:  mov    %eax,-0x114(%ebp)
08670b06 +0x2074:  mov    0x10(%ebp),%eax
08670b09 +0x2077:  mov    -0xa0(%ebp),%edx
08670b0f +0x207d:  add    $0xd0,%edx
08670b15 +0x2083:  mov    %eax,0x4(%esp)
08670b19 +0x2087:  mov    %edx,(%esp)
08670b1c +0x208a:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08670b21 +0x208f:  mov    0x4(%eax),%eax
08670b24 +0x2092:  imul   0x14(%ebp),%eax
08670b28 +0x2096:  mov    %eax,-0x110(%ebp)
08670b2e +0x209c:  lea    -0x114(%ebp),%eax
08670b34 +0x20a2:  mov    %eax,0x4(%esp)
08670b38 +0x20a6:  lea    -0x1bc(%ebp),%eax
08670b3e +0x20ac:  mov    %eax,(%esp)
08670b41 +0x20af:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08670b46 +0x20b4:  lea    -0x1bc(%ebp),%eax
08670b4c +0x20ba:  mov    %eax,(%esp)
08670b4f +0x20bd:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08670b54 +0x20c2:  cmp    $0x1,%eax
08670b57 +0x20c5:  setne  %al
08670b5a +0x20c8:  test   %al,%al
08670b5c +0x20ca:  je     08670b6d <+0x20db>
08670b5e +0x20cc:  mov    $0x16,%ebx
08670b63 +0x20d1:  mov    $0x0,%esi
08670b68 +0x20d6:  jmp    08670cc3 <+0x2231>
08670b6d +0x20db:  lea    -0x1c4(%ebp),%eax
08670b73 +0x20e1:  lea    -0x1bc(%ebp),%edx
08670b79 +0x20e7:  mov    %edx,0x4(%esp)
08670b7d +0x20eb:  mov    %eax,(%esp)
08670b80 +0x20ee:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08670b85 +0x20f3:  sub    $0x4,%esp
08670b88 +0x20f6:  jmp    08670c63 <+0x21d1>
08670b8d +0x20fb:  lea    -0x1c4(%ebp),%eax
08670b93 +0x2101:  mov    %eax,(%esp)
08670b96 +0x2104:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08670b9b +0x2109:  mov    (%eax),%esi
08670b9d +0x210b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08670ba2 +0x2110:  mov    %esi,0x4(%esp)
08670ba6 +0x2114:  mov    %eax,(%esp)
08670ba9 +0x2117:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08670bae +0x211c:  mov    %eax,-0x1c(%ebp)
08670bb1 +0x211f:  cmpl   $0x0,-0x1c(%ebp)
08670bb5 +0x2123:  jne    08670bc6 <+0x2134>
08670bb7 +0x2125:  mov    $0x16,%ebx
08670bbc +0x212a:  mov    $0x0,%esi
08670bc1 +0x212f:  jmp    08670cc3 <+0x2231>
08670bc6 +0x2134:  mov    -0x1c(%ebp),%eax
08670bc9 +0x2137:  mov    (%eax),%eax
08670bcb +0x2139:  add    $0xc,%eax
08670bce +0x213c:  mov    (%eax),%edx
08670bd0 +0x213e:  mov    -0x1c(%ebp),%eax
08670bd3 +0x2141:  mov    %eax,(%esp)
08670bd6 +0x2144:  call   *%edx
08670bd8 +0x2146:  cmp    $0x16,%eax
08670bdb +0x2149:  sete   %al
08670bde +0x214c:  test   %al,%al
08670be0 +0x214e:  je     08670c55 <+0x21c3>
08670be2 +0x2150:  lea    -0x1c4(%ebp),%eax
08670be8 +0x2156:  mov    %eax,(%esp)
08670beb +0x2159:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08670bf0 +0x215e:  mov    0x4(%eax),%eax
08670bf3 +0x2161:  mov    %eax,-0xcb40(%ebp)
08670bf9 +0x2167:  mov    -0xa0(%ebp),%eax
08670bff +0x216d:  mov    0xfc(%eax),%edi
08670c05 +0x2173:  lea    -0x1c4(%ebp),%eax
08670c0b +0x2179:  mov    %eax,(%esp)
08670c0e +0x217c:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08670c13 +0x2181:  mov    (%eax),%esi
08670c15 +0x2183:  mov    0x8(%ebp),%eax
08670c18 +0x2186:  mov    %eax,(%esp)
08670c1b +0x2189:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08670c20 +0x218e:  mov    %eax,(%esp)
08670c23 +0x2191:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08670c28 +0x2196:  mov    -0xcb40(%ebp),%edx
08670c2e +0x219c:  mov    %edx,0xc(%esp)
08670c32 +0x21a0:  mov    %edi,0x8(%esp)
08670c36 +0x21a4:  mov    %esi,0x4(%esp)
08670c3a +0x21a8:  mov    %eax,(%esp)
08670c3d +0x21ab:  call   0833da1e <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii>  ; user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)
08670c42 +0x21b0:  xor    $0x1,%eax
08670c45 +0x21b3:  test   %al,%al
08670c47 +0x21b5:  je     08670ca0 <+0x220e>
08670c49 +0x21b7:  mov    $0x16,%ebx
08670c4e +0x21bc:  mov    $0x0,%esi
08670c53 +0x21c1:  jmp    08670cc3 <+0x2231>
08670c55 +0x21c3:  lea    -0x1c4(%ebp),%eax
08670c5b +0x21c9:  mov    %eax,(%esp)
08670c5e +0x21cc:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08670c63 +0x21d1:  lea    -0xa4(%ebp),%eax
08670c69 +0x21d7:  lea    -0x1bc(%ebp),%edx
08670c6f +0x21dd:  mov    %edx,0x4(%esp)
08670c73 +0x21e1:  mov    %eax,(%esp)
08670c76 +0x21e4:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08670c7b +0x21e9:  sub    $0x4,%esp
08670c7e +0x21ec:  lea    -0xa4(%ebp),%eax
08670c84 +0x21f2:  mov    %eax,0x4(%esp)
08670c88 +0x21f6:  lea    -0x1c4(%ebp),%eax
08670c8e +0x21fc:  mov    %eax,(%esp)
08670c91 +0x21ff:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08670c96 +0x2204:  test   %al,%al
08670c98 +0x2206:  jne    08670b8d <+0x20fb>
08670c9e +0x220c:  jmp    08670ca1 <+0x220f>
08670ca0 +0x220e:  nop
08670ca1 +0x220f:  mov    $0x1,%esi
08670ca6 +0x2214:  jmp    08670cc3 <+0x2231>
08670ca8 +0x2216:  mov    %edx,%ebx
08670caa +0x2218:  mov    %eax,%esi
08670cac +0x221a:  lea    -0x1bc(%ebp),%eax
08670cb2 +0x2220:  mov    %eax,(%esp)
08670cb5 +0x2223:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670cba +0x2228:  mov    %esi,%eax
08670cbc +0x222a:  mov    %ebx,%edx
08670cbe +0x222c:  jmp    08670d5e <+0x22cc>
08670cc3 +0x2231:  lea    -0x1bc(%ebp),%eax
08670cc9 +0x2237:  mov    %eax,(%esp)
08670ccc +0x223a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670cd1 +0x223f:  test   %esi,%esi
08670cd3 +0x2241:  je     08670d76 <+0x22e4>
08670cd9 +0x2247:  movl   $0x1,0x4(%esp)
08670ce1 +0x224f:  lea    -0xf4(%ebp),%eax
08670ce7 +0x2255:  mov    %eax,(%esp)
08670cea +0x2258:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08670cef +0x225d:  lea    -0xf4(%ebp),%eax
08670cf5 +0x2263:  mov    %eax,0x4(%esp)
08670cf9 +0x2267:  mov    0x8(%ebp),%eax
08670cfc +0x226a:  mov    %eax,(%esp)
08670cff +0x226d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08670d04 +0x2272:  movzbl -0x125(%ebp),%eax
08670d0b +0x2279:  test   %al,%al
08670d0d +0x227b:  je     08670d22 <+0x2290>
08670d0f +0x227d:  movl   $0x16,0x4(%esp)
08670d17 +0x2285:  mov    0x8(%ebp),%eax
08670d1a +0x2288:  mov    %eax,(%esp)
08670d1d +0x228b:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08670d22 +0x2290:  mov    -0x90(%ebp),%eax
08670d28 +0x2296:  cmp    -0x94(%ebp),%eax
08670d2e +0x229c:  jge    08670d57 <+0x22c5>
08670d30 +0x229e:  mov    -0x90(%ebp),%edx
08670d36 +0x22a4:  mov    -0x94(%ebp),%eax
08670d3c +0x22aa:  mov    %edx,0xc(%esp)
08670d40 +0x22ae:  mov    %eax,0x8(%esp)
08670d44 +0x22b2:  movl   $0x4,0x4(%esp)
08670d4c +0x22ba:  mov    0x8(%ebp),%eax
08670d4f +0x22bd:  mov    %eax,(%esp)
08670d52 +0x22c0:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
08670d57 +0x22c5:  mov    $0x0,%ebx
08670d5c +0x22ca:  jmp    08670d76 <+0x22e4>
08670d5e +0x22cc:  mov    %edx,%ebx
08670d60 +0x22ce:  mov    %eax,%esi
08670d62 +0x22d0:  lea    -0x140(%ebp),%eax
08670d68 +0x22d6:  mov    %eax,(%esp)
08670d6b +0x22d9:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08670d70 +0x22de:  mov    %esi,%eax
08670d72 +0x22e0:  mov    %ebx,%edx
08670d74 +0x22e2:  jmp    08670d86 <+0x22f4>
08670d76 +0x22e4:  lea    -0x140(%ebp),%eax
08670d7c +0x22ea:  mov    %eax,(%esp)
08670d7f +0x22ed:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08670d84 +0x22f2:  jmp    08670d9e <+0x230c>
08670d86 +0x22f4:  mov    %edx,%ebx
08670d88 +0x22f6:  mov    %eax,%esi
08670d8a +0x22f8:  lea    -0x134(%ebp),%eax
08670d90 +0x22fe:  mov    %eax,(%esp)
08670d93 +0x2301:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08670d98 +0x2306:  mov    %esi,%eax
08670d9a +0x2308:  mov    %ebx,%edx
08670d9c +0x230a:  jmp    08670dae <+0x231c>
08670d9e +0x230c:  lea    -0x134(%ebp),%eax
08670da4 +0x2312:  mov    %eax,(%esp)
08670da7 +0x2315:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08670dac +0x231a:  jmp    08670dc6 <+0x2334>
08670dae +0x231c:  mov    %edx,%ebx
08670db0 +0x231e:  mov    %eax,%esi
08670db2 +0x2320:  lea    -0x10c(%ebp),%eax
08670db8 +0x2326:  mov    %eax,(%esp)
08670dbb +0x2329:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670dc0 +0x232e:  mov    %esi,%eax
08670dc2 +0x2330:  mov    %ebx,%edx
08670dc4 +0x2332:  jmp    08670dd6 <+0x2344>
08670dc6 +0x2334:  lea    -0x10c(%ebp),%eax
08670dcc +0x233a:  mov    %eax,(%esp)
08670dcf +0x233d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670dd4 +0x2342:  jmp    08670dee <+0x235c>
08670dd6 +0x2344:  mov    %edx,%ebx
08670dd8 +0x2346:  mov    %eax,%esi
08670dda +0x2348:  lea    -0x100(%ebp),%eax
08670de0 +0x234e:  mov    %eax,(%esp)
08670de3 +0x2351:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670de8 +0x2356:  mov    %esi,%eax
08670dea +0x2358:  mov    %ebx,%edx
08670dec +0x235a:  jmp    08670dfe <+0x236c>
08670dee +0x235c:  lea    -0x100(%ebp),%eax
08670df4 +0x2362:  mov    %eax,(%esp)
08670df7 +0x2365:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08670dfc +0x236a:  jmp    08670e1c <+0x238a>
08670dfe +0x236c:  mov    %edx,%ebx
08670e00 +0x236e:  mov    %eax,%esi
08670e02 +0x2370:  lea    -0xf4(%ebp),%eax
08670e08 +0x2376:  mov    %eax,(%esp)
08670e0b +0x2379:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08670e10 +0x237e:  mov    %esi,%eax
08670e12 +0x2380:  mov    %ebx,%edx
08670e14 +0x2382:  mov    %eax,(%esp)
08670e17 +0x2385:  call   08ae3750 <_Unwind_Resume>
08670e1c +0x238a:  lea    -0xf4(%ebp),%eax
08670e22 +0x2390:  mov    %eax,(%esp)
08670e25 +0x2393:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08670e2a +0x2398:  mov    %ebx,%eax
08670e2c +0x239a:  lea    -0xc(%ebp),%esp
08670e2f +0x239d:  add    $0x0,%esp
08670e32 +0x23a0:  pop    %ebx
08670e33 +0x23a1:  pop    %esi
08670e34 +0x23a2:  pop    %edi
08670e35 +0x23a3:  pop    %ebp
08670e36 +0x23a4:  ret
08670e37 +0x23a5:  nop
```

## 反编译 C

```c
// CUser::quest_reward @ 0x866ea92

/* CUser::quest_reward(int, int, int) */

undefined4 __thiscall CUser::quest_reward(CUser *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  UserQuest *this_00;
  int iVar7;
  CInventory *pCVar8;
  char *pcVar9;
  CDataManager *pCVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  GameWorld *pGVar13;
  Stream *pSVar14;
  CStreamGuard *pCVar15;
  undefined4 uVar16;
  CCreatureMgr *pCVar17;
  undefined4 uVar18;
  SkillSlot *pSVar19;
  CCharacExpertJob *this_01;
  int iVar20;
  int *piVar21;
  undefined4 unaff_EBX;
  uint uVar22;
  InventoryMemory local_cb3b [49471];
  CInventory local_9fc [1978];
  undefined1 local_242 [11];
  ushort local_237;
  stAmplifyOption_t asStack_231 [44];
  undefined2 local_205;
  undefined2 uStack_203;
  undefined2 uStack_201;
  undefined2 uStack_1ff;
  undefined4 local_1fd;
  undefined4 local_1f9;
  undefined4 local_1f5;
  undefined4 local_1f1;
  undefined4 local_1ed;
  undefined4 local_1e9;
  undefined4 local_1e5;
  undefined4 local_1e1;
  undefined4 local_1dd;
  undefined4 local_1d9;
  undefined4 local_1d5;
  undefined4 local_1d1;
  undefined4 local_1cd;
  undefined1 local_1c9;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c8 [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_1c4 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c0 [12];
  PacketGuard local_1b4 [12];
  PacketGuard local_1a8 [12];
  int local_19c;
  PacketGuard local_198 [12];
  CStreamGuard local_18c [8];
  PacketGuard local_184 [12];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_178 [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_174 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_170 [12];
  undefined4 local_164;
  undefined4 local_160;
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_15c [4];
  vector<int,std::allocator<int>> local_158 [12];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_148 [4];
  vector<int,std::allocator<int>> local_144 [12];
  vector<int,std::allocator<int>> local_138 [15];
  char local_129;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_110 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_104 [12];
  PacketGuard local_f8 [12];
  __normal_iterator local_ec [4];
  __normal_iterator local_e8 [4];
  cMyTrace local_e4 [16];
  __normal_iterator local_d4 [4];
  __normal_iterator local_d0 [4];
  __normal_iterator local_cc [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_c8 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_c4 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_c0 [4];
  __normal_iterator local_bc [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_b8 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_b4 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_b0 [4];
  __normal_iterator local_ac [4];
  __normal_iterator local_a8 [4];
  Quest *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 local_8d;
  undefined4 local_8c;
  char local_85;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  CItem *local_60;
  uint local_5c;
  SIG_LOAD_SKILL *local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  STExpertJobScript *local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  char local_29;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  
  PacketGuard::PacketGuard(local_f8);
                    /* try { // try from 0866eac5 to 0866ebcd has its CatchHandler @ 08670dfe */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f8,1,0x24);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,param_1);
  this_00 = (UserQuest *)getCurCharacQuestR(this);
  cVar3 = UserQuest::check_cond_clear(this_00,param_1);
  if (cVar3 != '\x01') {
    unaff_EBX = 0x16;
    goto LAB_08670e1c;
  }
  iVar7 = G_CDataManager();
  local_a4 = (Quest *)QuestList::find_quest(*(int *)(iVar7 + 0x18));
  if (local_a4 == (Quest *)0x0) {
    unaff_EBX = 0x15;
    goto LAB_08670e1c;
  }
  cVar3 = IsGameMasterMode(this);
  if ((cVar3 != '\x01') && (cVar3 = Quest::isRepeatableQuest(local_a4), cVar3 != '\x01')) {
    iVar7 = getCurCharacQuestR(this);
    cVar3 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar7 + 4),param_1);
    if (cVar3 != '\0') {
      unaff_EBX = 0x16;
      goto LAB_08670e1c;
    }
  }
  if ((*(int *)(local_a4 + 8) != 4) && (param_3 != 1)) {
    unaff_EBX = 0x16;
    goto LAB_08670e1c;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_104);
                    /* try { // try from 0866ebd7 to 0866ebdb has its CatchHandler @ 08670dd6 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_110);
  std::pair<int,int>::pair((pair<int,int> *)&local_118);
  if ((*(int *)(local_a4 + 0x7c) == 0) || (*(int *)(local_a4 + 0x7c) == 0x19)) {
                    /* try { // try from 0866ec22 to 0866ed4a has its CatchHandler @ 08670dae */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_14c,local_ec);
      if (!bVar4) break;
      puVar11 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_14c);
      local_118 = *puVar11;
      iVar7 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator*(local_14c);
      local_114 = *(int *)(iVar7 + 4) * param_3;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_104,(pair *)&local_118);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14c);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar3 = CInventory::CheckNeedItemList(pCVar8,(vector *)local_104);
    if (cVar3 == '\x01') goto LAB_0866ecf9;
    unaff_EBX = 0x11;
  }
  else {
LAB_0866ecf9:
    if ((((*(int *)(local_a4 + 0x7c) == 0) || (*(int *)(local_a4 + 0xb8) == 0)) ||
        (*(int *)(local_a4 + 0x7c) == 0x19)) && (*(int *)(local_a4 + 0xb8) != 0x19)) {
      CInventory::CInventory(local_9fc);
      InventoryMemory::InventoryMemory(local_cb3b);
      CInventory::SetInventoryMemory(local_9fc,local_cb3b);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)this);
                    /* try { // try from 0866ed89 to 0866ed9b has its CatchHandler @ 0866f172 */
      CInventory::setCopy(local_9fc,pCVar8);
      std::vector<int,std::allocator<int>>::vector(local_158);
      local_8d = 0;
                    /* try { // try from 0866edd1 to 0866f11c has its CatchHandler @ 0866f13a */
      if (((*(int *)(local_a4 + 0x7c) == 0) || (*(int *)(local_a4 + 0x7c) == 0x19)) &&
         (cVar3 = CInventory::tryDeleteEventItems(local_9fc,(vector *)local_104), cVar3 != '\x01'))
      {
        unaff_EBX = 0x11;
        bVar4 = false;
      }
      else {
        if (*(int *)(local_a4 + 0xb8) != 0) goto LAB_0866f133;
        local_8c = getUserQuestRewardItem(local_a4,this);
        std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
        while( true ) {
          std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
          bVar4 = __gnu_cxx::operator!=(local_15c,local_e8);
          if (!bVar4) break;
          iVar7 = __gnu_cxx::
                  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                  ::operator->(local_15c);
          if (*(int *)(iVar7 + 8) == 0xb) {
LAB_0866eeb3:
            bVar4 = false;
          }
          else {
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_15c);
            iVar7 = *(int *)(iVar7 + 8);
            iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            if (iVar7 == iVar20) {
              iVar7 = __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_15c);
              if (*(int *)(iVar7 + 0xc) != -1) {
                iVar7 = __gnu_cxx::
                        __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                        ::operator->(local_15c);
                iVar7 = *(int *)(iVar7 + 0xc);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                if (iVar7 != cVar3) goto LAB_0866eeac;
              }
              goto LAB_0866eeb3;
            }
LAB_0866eeac:
            bVar4 = true;
          }
          if (!bVar4) {
            puVar11 = (undefined4 *)
                      __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_15c);
            local_118 = *puVar11;
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_15c);
            local_114 = *(int *)(iVar7 + 4) * param_3;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_110,(pair *)&local_118);
          }
          __gnu_cxx::
          __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
          ::operator++(local_15c);
        }
        iVar7 = CInventory::tryInsertEventItems(local_9fc,(vector *)local_110);
        iVar20 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_110)
        ;
        if (iVar7 == iVar20) {
          param_2 = Quest::ConvertRewardSelectIndex(local_a4,this,param_2);
          iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                             (local_a4 + 0xd0));
          if (param_2 < iVar7) {
            if ((-1 < param_2) && (param_2 != 0xffff)) {
              Inven_Item::Inven_Item((Inven_Item *)&local_205);
              puVar11 = (undefined4 *)
                        std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                                  ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                                   (local_a4 + 0xd0),param_2);
              uStack_203 = (undefined2)*puVar11;
              uStack_201 = (undefined2)((uint)*puVar11 >> 0x10);
              iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                                ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                                 (local_a4 + 0xd0),param_2);
              iVar7 = *(int *)(iVar7 + 4);
              iVar20 = G_CDataManager();
              CItemList::create_item(*(CItemList **)(iVar20 + 0xc),4,&local_205,iVar7 * param_3);
              iVar7 = CInventory::tryInsertItemIntoInventory
                                (local_9fc,CONCAT22(uStack_203,local_205),
                                 CONCAT22(uStack_1ff,uStack_201),local_1fd,local_1f9,local_1f5,
                                 local_1f1,local_1ed,local_1e9,local_1e5,local_1e1,local_1dd,
                                 local_1d9,local_1d5,local_1d1,local_1cd,local_1c9);
              if (iVar7 == -1) {
                unaff_EBX = 4;
                bVar4 = false;
                goto LAB_0866f152;
              }
            }
LAB_0866f133:
            bVar4 = true;
          }
          else {
            unaff_EBX = 0x15;
            bVar4 = false;
          }
        }
        else {
          unaff_EBX = 4;
          bVar4 = false;
        }
      }
LAB_0866f152:
                    /* try { // try from 0866f15b to 0866f15f has its CatchHandler @ 0866f172 */
      std::vector<int,std::allocator<int>>::~vector(local_158);
                    /* try { // try from 0866f196 to 0866f3e2 has its CatchHandler @ 08670dae */
      CInventory::~CInventory(local_9fc);
      if (!bVar4) goto LAB_08670dc6;
    }
    local_11c = 0;
    local_120 = 0;
    local_124 = 0;
    local_128 = 0;
    quest_basic_reward(this,local_a4,&local_11c,&local_120,&local_124,&local_128,false);
    if (local_11c != 0) {
      local_160 = 0;
      local_164 = 0;
      CUserCharacInfo::set_charac_party_bonus_exp((CUserCharacInfo *)this,0);
      CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)this,0);
      CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)this,0);
      local_85 = gain_exp_sp(this,local_11c,&local_160,&local_164,0xd,0,0);
      if (local_85 != '\0') {
        bVar5 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)this);
        if (bVar5 < 100) {
          CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,'d');
        }
        iVar7 = get_state(this);
        if (iVar7 == 3) {
          SendNotiPacket(this,0,2,0);
          SendNotiPacket(this,1,2,1);
        }
        else {
          iVar7 = get_state(this);
          if (4 < iVar7) {
            SendNotiPacket(this,2,2,1);
          }
        }
      }
      if (*(int *)(this + 0x8cfc4) == 3) {
        SendNotiPacket(this,1,0x25,0);
      }
      if ((*(int *)(this + 0x8cfc4) == 3) && (local_85 != '\0')) {
        decide_growth_power_reward_system(this);
      }
    }
    local_129 = '\0';
    std::vector<int,std::allocator<int>>::vector(local_138);
                    /* try { // try from 0866f3ec to 0866f3f0 has its CatchHandler @ 08670d86 */
    std::vector<int,std::allocator<int>>::vector(local_144);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              (local_148);
    local_a0 = 0;
    local_9c = 0;
    if (((*(int *)(local_a4 + 0x7c) == 0) || (*(int *)(local_a4 + 0x7c) == 0x19)) &&
       (*(int *)(local_a4 + 0xb8) != 0x19)) {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
                    /* try { // try from 0866f48b to 0866f582 has its CatchHandler @ 08670d5e */
      local_a0 = CInventory::delete_event_items(pCVar8,local_104,local_138,&local_129,4,4,0);
      if (local_a0 != 0) {
        cVar3 = getGmQuestFlag(this);
        if (cVar3 != '\0') {
          local_a0 = 0;
        }
        goto LAB_0866f505;
      }
      cMyTrace::cMyTrace(local_e4,"int CUser::quest_reward(int, int, int)",0x59ef,5);
      cMyTrace::operator()
                (local_e4,"CUser::quest_reward, QuestID : %d delete_object_count == 0 ",param_1);
      unaff_EBX = 0x11;
    }
    else {
LAB_0866f505:
      local_98 = 0;
      local_94 = 0;
      if (*(int *)(local_a4 + 0xb8) == 0) {
        pcVar9 = (char *)get_acc_name(this);
        iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        pCVar10 = (CDataManager *)G_CDataManager();
        local_84 = CDataManager::GetMoneyLimitPerLevel(pCVar10,iVar7,pcVar9);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        local_80 = CInventory::get_money(pCVar8);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_170);
        local_7c = 0;
                    /* try { // try from 0866f59a to 0866f954 has its CatchHandler @ 0866f957 */
        local_78 = getUserQuestRewardItem(local_a4,this);
        std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
        while( true ) {
          std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
          bVar4 = __gnu_cxx::operator!=(local_174,local_d4);
          if (!bVar4) break;
          iVar7 = __gnu_cxx::
                  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                  ::operator->(local_174);
          if (*(int *)(iVar7 + 8) == 0xb) {
LAB_0866f637:
            bVar4 = false;
          }
          else {
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_174);
            iVar7 = *(int *)(iVar7 + 8);
            iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            if (iVar7 == iVar20) {
              iVar7 = __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_174);
              if (*(int *)(iVar7 + 0xc) != -1) {
                iVar7 = __gnu_cxx::
                        __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                        ::operator->(local_174);
                iVar7 = *(int *)(iVar7 + 0xc);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                if (iVar7 != cVar3) goto LAB_0866f630;
              }
              goto LAB_0866f637;
            }
LAB_0866f630:
            bVar4 = true;
          }
          if (!bVar4) {
            puVar11 = (undefined4 *)
                      __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_174);
            local_118 = *puVar11;
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_174);
            local_114 = *(int *)(iVar7 + 4) * param_3;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_170,(pair *)&local_118);
          }
          __gnu_cxx::
          __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
          ::operator++(local_174);
        }
        if ((param_2 < 0) ||
           (iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (local_a4 + 0xd0)), iVar7 <= param_2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          puVar11 = (undefined4 *)
                    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (local_a4 + 0xd0),param_2);
          local_118 = *puVar11;
          iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                             (local_a4 + 0xd0),param_2);
          local_114 = *(int *)(iVar7 + 4) * param_3;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_170,(pair *)&local_118);
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar4 = __gnu_cxx::operator!=(local_178,local_d0);
          if (!bVar4) break;
          piVar21 = (int *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator->(local_178);
          if (*piVar21 == 0) {
            local_98 = local_120 * param_3;
            local_74 = local_98;
            if (local_84 - local_98 < local_80) {
              if (local_80 < local_84) {
                local_70 = local_84 - local_80;
                iVar7 = __gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_178);
                *(int *)(iVar7 + 4) = local_70;
                local_94 = local_94 + local_70;
                local_80 = local_84;
              }
              else {
                iVar7 = __gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_178);
                *(undefined4 *)(iVar7 + 4) = 0;
              }
            }
            else {
              local_80 = local_80 + local_98;
              local_94 = local_94 + local_98;
              iVar7 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_178);
              *(int *)(iVar7 + 4) = local_74;
            }
          }
          else {
            iVar7 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_178);
            iVar7 = *(int *)(iVar7 + 4);
            puVar12 = (ulong *)__gnu_cxx::
                               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                               ::operator->(local_178);
            SendAradEventItemLog(this,*puVar12,iVar7);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_178);
        }
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_9c = CInventory::insert_event_items
                             (pCVar8,local_170,local_144,3,8,0,&DAT_08cedf41,&DAT_08cedf41);
        eventDeliveryQuestClear
                  (this,param_1,param_3,(vector *)local_170,local_11c,local_120,local_124);
                    /* try { // try from 0866f97b to 0866fee1 has its CatchHandler @ 08670d5e */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_170);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*(int *)(local_a4 + 0x7c));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f8,local_11c);
      if ((*(int *)(local_a4 + 0x7c) == 0) || (*(int *)(local_a4 + 0x7c) == 0x19)) {
        if (*(int *)(local_a4 + 0xb8) == 0x19) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,7);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f8,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_a0);
          if (0 < local_a0) {
            std::vector<int,std::allocator<int>>::begin();
            while( true ) {
              std::vector<int,std::allocator<int>>::end();
              bVar4 = __gnu_cxx::operator!=(local_148,local_cc);
              if (!bVar4) break;
              piVar21 = (int *)__gnu_cxx::
                               __normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                               operator*(local_148);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*piVar21);
              __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                        (local_c8,(int)local_148);
              piVar21 = (int *)__gnu_cxx::
                               __normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                               operator*(local_148);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,*piVar21);
              __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                        (local_c4,(int)local_148);
              piVar21 = (int *)__gnu_cxx::
                               __normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                               operator*(local_148);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f8,*piVar21);
              __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                        (local_c0,(int)local_148);
            }
          }
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*(int *)(local_a4 + 0xb8));
      if ((*(int *)(local_a4 + 0xb8) == 0) &&
         (InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_9c), 0 < local_9c)) {
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar4 = __gnu_cxx::operator!=(local_148,local_bc);
          if (!bVar4) break;
          puVar11 = (undefined4 *)
                    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_148);
          local_6c = *puVar11;
          piVar21 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                           operator*(local_148);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,*piVar21);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_b8,(int)local_148);
          piVar21 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                           operator*(local_148);
          local_68 = *piVar21;
          piVar21 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                           operator*(local_148);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f8,*piVar21);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_b4,(int)local_148);
          piVar21 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                           operator*(local_148);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f8,*piVar21);
          uVar16 = 0;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_b0,(int)local_148);
          iVar7 = local_68;
          local_64 = 1;
          pCVar10 = (CDataManager *)G_CDataManager();
          local_60 = (CItem *)CDataManager::find_item(pCVar10,iVar7);
          if ((local_60 != (CItem *)0x0) &&
             (cVar3 = (**(code **)(*(int *)local_60 + 0x10))(local_60,iVar7,uVar16), cVar3 != '\0'))
          {
            local_64 = 2;
          }
          iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          CInventory::GetInvenSlot((int)local_242,iVar7);
          uVar22 = stAmplifyOption_t::getAbilityType(asStack_231);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,uVar22 & 0xff);
          uVar22 = stAmplifyOption_t::getAbilityValue(asStack_231);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,uVar22 & 0xffff);
          if ((local_60 == (CItem *)0x0) || (cVar3 = CItem::is_stackable(local_60), cVar3 == '\0'))
          {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,(uint)local_237);
          }
          else {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,0);
          }
        }
      }
      if (*(int *)(local_a4 + 0xb8) == 1) {
        local_5c = *(uint *)(local_a4 + 0xc0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_5c);
        uVar6 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
        set_grow_type(this,local_5c & 0xff,uVar6,local_f8,0);
        PacketGuard::PacketGuard(local_184);
                    /* try { // try from 0866fefb to 0866ff99 has its CatchHandler @ 086700a5 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_184,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_184,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_184,1);
        make_basic_info(this,(char *)local_184,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_184,true);
        pGVar13 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar13,local_184,this);
        pSVar14 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x5aed);
        CStreamGuard::CStreamGuard(local_18c,pSVar14,true);
        pCVar15 = (CStreamGuard *)CStreamGuard::operator*(local_18c);
                    /* try { // try from 0866ffcd to 0867007a has its CatchHandler @ 0867007d */
        CStreamGuard::operator<<(pCVar15,0x24);
        iVar7 = GetUID(this);
        pCVar15 = (CStreamGuard *)CStreamGuard::operator*(local_18c);
        CStreamGuard::operator<<(pCVar15,iVar7);
        pCVar15 = (CStreamGuard *)CStreamGuard::operator->(local_18c);
        local_58 = CStreamGuard::GetInBuffer<SIG_LOAD_SKILL>(pCVar15);
        memset(local_58,0,0x414);
        uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        *(undefined4 *)local_58 = uVar16;
        local_58[0x410] = (SIG_LOAD_SKILL)0x1;
        iVar7 = G_CDataManager();
        local_58[0x411] = *(SIG_LOAD_SKILL *)(iVar7 + 0xa850);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18c);
                    /* try { // try from 0867009e to 086700a2 has its CatchHandler @ 086700a5 */
        CStreamGuard::~CStreamGuard(local_18c);
                    /* try { // try from 086700c9 to 0867014d has its CatchHandler @ 08670d5e */
        PacketGuard::~PacketGuard(local_184);
      }
      if (*(int *)(local_a4 + 0xb8) == 2) {
        local_54 = *(uint *)(local_a4 + 0xc0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_54);
        uVar22 = local_54 & 0xff;
        uVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
        set_grow_type(this,uVar6,uVar22,local_f8,0);
        PacketGuard::PacketGuard(local_198);
                    /* try { // try from 08670167 to 086701e8 has its CatchHandler @ 086701eb */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_198,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_198,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_198,1);
        make_basic_info(this,(char *)local_198,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_198,true);
        pGVar13 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar13,local_198,this);
                    /* try { // try from 0867020f to 0867069a has its CatchHandler @ 08670d5e */
        PacketGuard::~PacketGuard(local_198);
      }
      if ((*(int *)(local_a4 + 0xb8) == 10) && (0 < *(int *)(local_a4 + 0xc0))) {
        iVar7 = *(int *)(local_a4 + 0xfc);
        iVar20 = *(int *)(local_a4 + 0xc0);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        pCVar17 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
        cVar3 = user_creature::CCreatureMgr::Evolute(pCVar17,iVar20,iVar7,false);
        if (cVar3 != '\x01') {
          unaff_EBX = 0x16;
          goto LAB_08670d76;
        }
      }
      if (*(int *)(local_a4 + 0xb8) == 0x14) {
        iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        if (iVar7 < *(int *)(local_a4 + 0x20)) {
          unaff_EBX = 0x16;
          goto LAB_08670d76;
        }
        local_50 = *(int *)(local_a4 + 0xc0);
        CUserCharacInfo::SetCurCharacExpertJobType((CUserCharacInfo *)this,local_50);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_50);
        APSystem::CUserProc::ClearActionAndSendtoUser(this,0x22,0,0);
        uVar16 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        LogHistory(this,"ExpertJob+,%d,%d",uVar16,local_50);
        local_19c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_f8);
        local_48 = 0;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,0);
        iVar7 = G_CDataManager();
        local_44 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar7);
        if (local_44 != (STExpertJobScript *)0x0) {
          local_40 = 0;
          while (uVar22 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_44 + 0xc)), local_40 < uVar22) {
            iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
            if (iVar7 != 0) {
              iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_44 + 0xc),local_40);
              uVar16 = *(undefined4 *)(iVar7 + 4);
              puVar11 = (undefined4 *)
                        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_44 + 0xc),local_40);
              uVar1 = *puVar11;
              uVar18 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar19 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              local_4c = SkillSlot::growtype_skill(pSVar19,uVar18,uVar1,uVar16,0);
              if (0 < local_4c) {
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_4c);
                piVar21 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                               *)(local_44 + 0xc),local_40);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*piVar21);
                iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_44 + 0xc),local_40);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*(int *)(iVar7 + 4));
                local_48 = local_48 + 1;
              }
            }
            local_40 = local_40 + 1;
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,&local_19c,local_48);
          local_19c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_f8);
          local_48 = 0;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,0);
          local_3c = 0;
          while (uVar22 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_44 + 0xc)), local_3c < uVar22) {
            iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
            if (iVar7 != 0) {
              iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_44 + 0xc),local_3c);
              uVar16 = *(undefined4 *)(iVar7 + 4);
              puVar11 = (undefined4 *)
                        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_44 + 0xc),local_3c);
              uVar1 = *puVar11;
              uVar18 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar19 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              local_4c = SkillSlot::growtype_skill(pSVar19,uVar18,uVar1,uVar16,1);
              if (0 < local_4c) {
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_4c);
                piVar21 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                               *)(local_44 + 0xc),local_3c);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*piVar21);
                iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_44 + 0xc),local_3c);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,*(int *)(iVar7 + 4));
                local_48 = local_48 + 1;
              }
            }
            local_3c = local_3c + 1;
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,&local_19c,local_48);
          this_01 = (CCharacExpertJob *)GetCharacExpandData(this,0);
          expert_job::CCharacExpertJob::InitScript(this_01,local_44);
          CUserCharacInfo::SetCurCharacExpertJobExp((CUserCharacInfo *)this,0);
        }
        PacketGuard::PacketGuard(local_1a8);
                    /* try { // try from 086706b4 to 08670735 has its CatchHandler @ 08670738 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1a8,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1a8,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1a8,1);
        make_basic_info(this,(char *)local_1a8,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1a8,true);
        pGVar13 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar13,local_1a8,this);
                    /* try { // try from 0867075c to 086707c7 has its CatchHandler @ 08670d5e */
        PacketGuard::~PacketGuard(local_1a8);
      }
      if (*(int *)(local_a4 + 0xb8) == 0x15) {
        local_38 = *(int *)(local_a4 + 0xc0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f8,local_38);
        local_34 = AddDungeonClear(this,local_38,3);
        local_34 = local_34 & 0xff;
        PacketGuard::PacketGuard(local_1b4);
                    /* try { // try from 086707e1 to 08670851 has its CatchHandler @ 08670854 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1b4,0,5);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1b4,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1b4,local_38);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1b4,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1b4,true);
        Send(this,local_1b4);
                    /* try { // try from 08670878 to 0867096c has its CatchHandler @ 08670d5e */
        PacketGuard::~PacketGuard(local_1b4);
      }
      if (*(int *)(local_a4 + 0xb8) == 0x16) {
        local_30 = *(int *)(local_a4 + 0xc0);
        local_29 = CUserCharacInfo::GetCurExEquipSlotStat((CUserCharacInfo *)this);
        if (local_30 == 0x14) {
          if ((local_29 == '\0') || (local_29 == '\x02')) {
            CUserCharacInfo::SetCurExpEquipSlotStat((CUserCharacInfo *)this,local_29 + '\x01');
          }
        }
        else if ((local_30 == 0x15) && ((local_29 == '\0' || (local_29 == '\x01')))) {
          CUserCharacInfo::SetCurExpEquipSlotStat((CUserCharacInfo *)this,local_29 + '\x02');
        }
        uVar22 = CUserCharacInfo::GetCurExEquipSlotStat((CUserCharacInfo *)this);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,uVar22 & 0xff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f8,local_30);
      }
      if (*(int *)(local_a4 + 0xb8) == 0x19) {
        local_28 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_1c0);
                    /* try { // try from 0867097d to 08670c95 has its CatchHandler @ 08670ca8 */
        local_24 = getUserQuestRewardItem(local_a4,this);
        std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
        while( true ) {
          std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
          bVar4 = __gnu_cxx::operator!=(local_1c4,local_ac);
          if (!bVar4) break;
          iVar7 = __gnu_cxx::
                  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                  ::operator->(local_1c4);
          if (*(int *)(iVar7 + 8) == 0xb) {
LAB_08670a1a:
            bVar4 = false;
          }
          else {
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_1c4);
            iVar7 = *(int *)(iVar7 + 8);
            iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            if (iVar7 == iVar20) {
              iVar7 = __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_1c4);
              if (*(int *)(iVar7 + 0xc) != -1) {
                iVar7 = __gnu_cxx::
                        __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                        ::operator->(local_1c4);
                iVar7 = *(int *)(iVar7 + 0xc);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                if (iVar7 != cVar3) goto LAB_08670a13;
              }
              goto LAB_08670a1a;
            }
LAB_08670a13:
            bVar4 = true;
          }
          if (!bVar4) {
            puVar11 = (undefined4 *)
                      __gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_1c4);
            local_118 = *puVar11;
            iVar7 = __gnu_cxx::
                    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                    ::operator->(local_1c4);
            local_114 = *(int *)(iVar7 + 4) * param_3;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_1c0,(pair *)&local_118);
          }
          __gnu_cxx::
          __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
          ::operator++(local_1c4);
        }
        if ((param_2 < 0) ||
           (iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (local_a4 + 0xd0)), iVar7 <= param_2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          puVar11 = (undefined4 *)
                    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (local_a4 + 0xd0),param_2);
          local_118 = *puVar11;
          iVar7 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                             (local_a4 + 0xd0),param_2);
          local_114 = *(int *)(iVar7 + 4) * param_3;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_1c0,(pair *)&local_118);
        }
        iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_1c0);
        if (iVar7 == 1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
          while( true ) {
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            bVar4 = __gnu_cxx::operator!=(local_1c8,local_a8);
            if (!bVar4) break;
            piVar21 = (int *)__gnu_cxx::
                             __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                             ::operator->(local_1c8);
            iVar7 = *piVar21;
            pCVar10 = (CDataManager *)G_CDataManager();
            local_20 = (int *)CDataManager::find_item(pCVar10,iVar7);
            if (local_20 == (int *)0x0) {
              unaff_EBX = 0x16;
              bVar4 = false;
              goto LAB_08670cc3;
            }
            iVar7 = (**(code **)(*local_20 + 0xc))(local_20);
            if (iVar7 == 0x16) {
              iVar7 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_1c8);
              iVar7 = *(int *)(iVar7 + 4);
              iVar20 = *(int *)(local_a4 + 0xfc);
              piVar21 = (int *)__gnu_cxx::
                               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                               ::operator->(local_1c8);
              iVar2 = *piVar21;
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
              pCVar17 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
              cVar3 = user_creature::CCreatureMgr::EventEvoluteCreature(pCVar17,iVar2,iVar20,iVar7);
              if (cVar3 != '\x01') {
                unaff_EBX = 0x16;
                bVar4 = false;
                goto LAB_08670cc3;
              }
              break;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_1c8);
          }
          bVar4 = true;
        }
        else {
          unaff_EBX = 0x16;
          bVar4 = false;
        }
LAB_08670cc3:
                    /* try { // try from 08670ccc to 08670d56 has its CatchHandler @ 08670d5e */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_1c0);
        if (!bVar4) goto LAB_08670d76;
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f8,true);
      Send(this,local_f8);
      if (local_129 != '\0') {
        send_equip(this,0x16);
      }
      if (local_94 < local_98) {
        SendMoneyFullReason(this,4,local_98,local_94);
      }
      unaff_EBX = 0;
    }
LAB_08670d76:
                    /* try { // try from 08670d7f to 08670d83 has its CatchHandler @ 08670d86 */
    std::vector<int,std::allocator<int>>::~vector(local_144);
                    /* try { // try from 08670da7 to 08670dab has its CatchHandler @ 08670dae */
    std::vector<int,std::allocator<int>>::~vector(local_138);
  }
LAB_08670dc6:
                    /* try { // try from 08670dcf to 08670dd3 has its CatchHandler @ 08670dd6 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_110);
                    /* try { // try from 08670df7 to 08670dfb has its CatchHandler @ 08670dfe */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_104);
LAB_08670e1c:
  PacketGuard::~PacketGuard(local_f8);
  return unaff_EBX;
}
```
