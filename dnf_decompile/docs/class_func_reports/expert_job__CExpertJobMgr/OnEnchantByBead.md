# OnEnchantByBead

`_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii`

`expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849ed1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ed1a  _ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii
#           expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int)
# range [0x0849ed1a, 0x0849f18e]
0849ed1a +0x000:  push   %ebp
0849ed1b +0x001:  mov    %esp,%ebp
0849ed1d +0x003:  push   %edi
0849ed1e +0x004:  push   %esi
0849ed1f +0x005:  push   %ebx
0849ed20 +0x006:  sub    $0x6c,%esp
0849ed23 +0x009:  mov    0xc(%ebp),%eax
0849ed26 +0x00c:  mov    %eax,(%esp)
0849ed29 +0x00f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849ed2e +0x014:  mov    0x14(%ebp),%edx
0849ed31 +0x017:  mov    %edx,0x8(%esp)
0849ed35 +0x01b:  movl   $0x1,0x4(%esp)
0849ed3d +0x023:  mov    %eax,(%esp)
0849ed40 +0x026:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0849ed45 +0x02b:  mov    %eax,-0x38(%ebp)
0849ed48 +0x02e:  cmpl   $0x0,-0x38(%ebp)
0849ed4c +0x032:  jne    0849ed58 <+0x3e>
0849ed4e +0x034:  mov    $0x11,%ebx
0849ed53 +0x039:  jmp    0849f185 <+0x46b>
0849ed58 +0x03e:  mov    0xc(%ebp),%eax
0849ed5b +0x041:  mov    %eax,(%esp)
0849ed5e +0x044:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849ed63 +0x049:  mov    0x1c(%ebp),%edx
0849ed66 +0x04c:  mov    %edx,0x8(%esp)
0849ed6a +0x050:  movl   $0x1,0x4(%esp)
0849ed72 +0x058:  mov    %eax,(%esp)
0849ed75 +0x05b:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0849ed7a +0x060:  mov    %eax,-0x34(%ebp)
0849ed7d +0x063:  cmpl   $0x0,-0x34(%ebp)
0849ed81 +0x067:  jne    0849ed8d <+0x73>
0849ed83 +0x069:  mov    $0x11,%ebx
0849ed88 +0x06e:  jmp    0849f185 <+0x46b>
0849ed8d +0x073:  mov    -0x34(%ebp),%eax
0849ed90 +0x076:  mov    0x2(%eax),%edx
0849ed93 +0x079:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0849ed98 +0x07e:  mov    %edx,0x8(%esp)
0849ed9c +0x082:  movl   $0x1,0x4(%esp)
0849eda4 +0x08a:  mov    %eax,(%esp)
0849eda7 +0x08d:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
0849edac +0x092:  test   %al,%al
0849edae +0x094:  je     0849edba <+0xa0>
0849edb0 +0x096:  mov    $0x11,%ebx
0849edb5 +0x09b:  jmp    0849f185 <+0x46b>
0849edba +0x0a0:  mov    -0x34(%ebp),%eax
0849edbd +0x0a3:  mov    0x2(%eax),%edx
0849edc0 +0x0a6:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0849edc5 +0x0ab:  mov    %edx,0x8(%esp)
0849edc9 +0x0af:  movl   $0x2,0x4(%esp)
0849edd1 +0x0b7:  mov    %eax,(%esp)
0849edd4 +0x0ba:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
0849edd9 +0x0bf:  test   %al,%al
0849eddb +0x0c1:  je     0849ede7 <+0xcd>
0849eddd +0x0c3:  mov    $0x11,%ebx
0849ede2 +0x0c8:  jmp    0849f185 <+0x46b>
0849ede7 +0x0cd:  mov    -0x38(%ebp),%eax
0849edea +0x0d0:  mov    0x2(%eax),%eax
0849eded +0x0d3:  mov    %eax,%ebx
0849edef +0x0d5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849edf4 +0x0da:  mov    %ebx,0x4(%esp)
0849edf8 +0x0de:  mov    %eax,(%esp)
0849edfb +0x0e1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849ee00 +0x0e6:  mov    %eax,-0x30(%ebp)
0849ee03 +0x0e9:  cmpl   $0x0,-0x30(%ebp)
0849ee07 +0x0ed:  jne    0849ee13 <+0xf9>
0849ee09 +0x0ef:  mov    $0x11,%ebx
0849ee0e +0x0f4:  jmp    0849f185 <+0x46b>
0849ee13 +0x0f9:  mov    -0x34(%ebp),%eax
0849ee16 +0x0fc:  mov    0x2(%eax),%eax
0849ee19 +0x0ff:  mov    %eax,%ebx
0849ee1b +0x101:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849ee20 +0x106:  mov    %ebx,0x4(%esp)
0849ee24 +0x10a:  mov    %eax,(%esp)
0849ee27 +0x10d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849ee2c +0x112:  mov    %eax,-0x2c(%ebp)
0849ee2f +0x115:  cmpl   $0x0,-0x2c(%ebp)
0849ee33 +0x119:  jne    0849ee3f <+0x125>
0849ee35 +0x11b:  mov    $0x11,%ebx
0849ee3a +0x120:  jmp    0849f185 <+0x46b>
0849ee3f +0x125:  mov    -0x30(%ebp),%eax
0849ee42 +0x128:  mov    %eax,(%esp)
0849ee45 +0x12b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849ee4a +0x130:  xor    $0x1,%eax
0849ee4d +0x133:  test   %al,%al
0849ee4f +0x135:  je     0849ee5b <+0x141>
0849ee51 +0x137:  mov    $0x11,%ebx
0849ee56 +0x13c:  jmp    0849f185 <+0x46b>
0849ee5b +0x141:  mov    -0x30(%ebp),%eax
0849ee5e +0x144:  mov    %eax,(%esp)
0849ee61 +0x147:  call   0849f530 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x361>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x361
0849ee66 +0x14c:  mov    %eax,-0x28(%ebp)
0849ee69 +0x14f:  mov    -0x28(%ebp),%ebx
0849ee6c +0x152:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849ee71 +0x157:  mov    %ebx,0x4(%esp)
0849ee75 +0x15b:  mov    %eax,(%esp)
0849ee78 +0x15e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849ee7d +0x163:  mov    %eax,-0x24(%ebp)
0849ee80 +0x166:  cmpl   $0x0,-0x24(%ebp)
0849ee84 +0x16a:  jne    0849ee90 <+0x176>
0849ee86 +0x16c:  mov    $0x11,%ebx
0849ee8b +0x171:  jmp    0849f185 <+0x46b>
0849ee90 +0x176:  mov    -0x30(%ebp),%eax
0849ee93 +0x179:  mov    %eax,0x4(%esp)
0849ee97 +0x17d:  mov    -0x2c(%ebp),%eax
0849ee9a +0x180:  mov    %eax,(%esp)
0849ee9d +0x183:  call   0849d768 <_Z11EnableWorldPK5CItemS1_>  ; EnableWorld(CItem const*, CItem const*)
0849eea2 +0x188:  xor    $0x1,%eax
0849eea5 +0x18b:  test   %al,%al
0849eea7 +0x18d:  je     0849eeb3 <+0x199>
0849eea9 +0x18f:  mov    $0x13,%ebx
0849eeae +0x194:  jmp    0849f185 <+0x46b>
0849eeb3 +0x199:  mov    -0x24(%ebp),%eax
0849eeb6 +0x19c:  mov    (%eax),%eax
0849eeb8 +0x19e:  add    $0x20,%eax
0849eebb +0x1a1:  mov    (%eax),%ebx
0849eebd +0x1a3:  mov    -0x2c(%ebp),%eax
0849eec0 +0x1a6:  mov    (%eax),%eax
0849eec2 +0x1a8:  add    $0xc,%eax
0849eec5 +0x1ab:  mov    (%eax),%edx
0849eec7 +0x1ad:  mov    -0x2c(%ebp),%eax
0849eeca +0x1b0:  mov    %eax,(%esp)
0849eecd +0x1b3:  call   *%edx
0849eecf +0x1b5:  mov    %eax,0x4(%esp)
0849eed3 +0x1b9:  mov    -0x24(%ebp),%eax
0849eed6 +0x1bc:  mov    %eax,(%esp)
0849eed9 +0x1bf:  call   *%ebx
0849eedb +0x1c1:  xor    $0x1,%eax
0849eede +0x1c4:  test   %al,%al
0849eee0 +0x1c6:  je     0849eeec <+0x1d2>
0849eee2 +0x1c8:  mov    $0x17,%ebx
0849eee7 +0x1cd:  jmp    0849f185 <+0x46b>
0849eeec +0x1d2:  mov    0xc(%ebp),%eax
0849eeef +0x1d5:  mov    %eax,(%esp)
0849eef2 +0x1d8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849eef7 +0x1dd:  movl   $0x1,0x14(%esp)
0849eeff +0x1e5:  movl   $0x8,0x10(%esp)
0849ef07 +0x1ed:  movl   $0x1,0xc(%esp)
0849ef0f +0x1f5:  mov    0x14(%ebp),%edx
0849ef12 +0x1f8:  mov    %edx,0x8(%esp)
0849ef16 +0x1fc:  movl   $0x1,0x4(%esp)
0849ef1e +0x204:  mov    %eax,(%esp)
0849ef21 +0x207:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0849ef26 +0x20c:  mov    %al,-0x1d(%ebp)
0849ef29 +0x20f:  movzbl -0x1d(%ebp),%eax
0849ef2d +0x213:  xor    $0x1,%eax
0849ef30 +0x216:  test   %al,%al
0849ef32 +0x218:  je     0849ef8c <+0x272>
0849ef34 +0x21a:  mov    0xc(%ebp),%eax
0849ef37 +0x21d:  mov    %eax,(%esp)
0849ef3a +0x220:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849ef3f +0x225:  mov    %eax,%ebx
0849ef41 +0x227:  movl   $0x5,0xc(%esp)
0849ef49 +0x22f:  movl   $0x6cd,0x8(%esp)
0849ef51 +0x237:  movl   $&_ZZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0849ef59 +0x23f:  lea    -0x48(%ebp),%eax
0849ef5c +0x242:  mov    %eax,(%esp)
0849ef5f +0x245:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849ef64 +0x24a:  mov    0x14(%ebp),%eax
0849ef67 +0x24d:  mov    %eax,0xc(%esp)
0849ef6b +0x251:  mov    %ebx,0x8(%esp)
0849ef6f +0x255:  movl   $"CExpertJobMgr::OnEnchantByBead, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
0849ef77 +0x25d:  lea    -0x48(%ebp),%eax
0849ef7a +0x260:  mov    %eax,(%esp)
0849ef7d +0x263:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849ef82 +0x268:  mov    $0x11,%ebx
0849ef87 +0x26d:  jmp    0849f185 <+0x46b>
0849ef8c +0x272:  mov    -0x34(%ebp),%eax
0849ef8f +0x275:  mov    0xd(%eax),%eax
0849ef92 +0x278:  mov    %eax,-0x1c(%ebp)
0849ef95 +0x27b:  mov    -0x24(%ebp),%eax
0849ef98 +0x27e:  mov    %eax,(%esp)
0849ef9b +0x281:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849efa0 +0x286:  mov    %eax,%edx
0849efa2 +0x288:  mov    -0x34(%ebp),%eax
0849efa5 +0x28b:  mov    %edx,0xd(%eax)
0849efa8 +0x28e:  lea    -0x54(%ebp),%eax
0849efab +0x291:  mov    %eax,(%esp)
0849efae +0x294:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849efb3 +0x299:  lea    -0x54(%ebp),%eax
0849efb6 +0x29c:  mov    %eax,(%esp)
0849efb9 +0x29f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849efbe +0x2a4:  movl   $0xe,0x8(%esp)
0849efc6 +0x2ac:  movl   $0x0,0x4(%esp)
0849efce +0x2b4:  lea    -0x54(%ebp),%eax
0849efd1 +0x2b7:  mov    %eax,(%esp)
0849efd4 +0x2ba:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849efd9 +0x2bf:  movl   $0x0,0x4(%esp)
0849efe1 +0x2c7:  lea    -0x54(%ebp),%eax
0849efe4 +0x2ca:  mov    %eax,(%esp)
0849efe7 +0x2cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849efec +0x2d2:  movl   $0x2,0x4(%esp)
0849eff4 +0x2da:  lea    -0x54(%ebp),%eax
0849eff7 +0x2dd:  mov    %eax,(%esp)
0849effa +0x2e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849efff +0x2e5:  mov    0xc(%ebp),%eax
0849f002 +0x2e8:  mov    %eax,(%esp)
0849f005 +0x2eb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849f00a +0x2f0:  lea    -0x54(%ebp),%edx
0849f00d +0x2f3:  mov    %edx,0xc(%esp)
0849f011 +0x2f7:  mov    0x1c(%ebp),%edx
0849f014 +0x2fa:  mov    %edx,0x8(%esp)
0849f018 +0x2fe:  movl   $0x1,0x4(%esp)
0849f020 +0x306:  mov    %eax,(%esp)
0849f023 +0x309:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0849f028 +0x30e:  mov    0xc(%ebp),%eax
0849f02b +0x311:  mov    %eax,(%esp)
0849f02e +0x314:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849f033 +0x319:  lea    -0x54(%ebp),%edx
0849f036 +0x31c:  mov    %edx,0xc(%esp)
0849f03a +0x320:  mov    0x14(%ebp),%edx
0849f03d +0x323:  mov    %edx,0x8(%esp)
0849f041 +0x327:  movl   $0x1,0x4(%esp)
0849f049 +0x32f:  mov    %eax,(%esp)
0849f04c +0x332:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0849f051 +0x337:  movl   $0x1,0x4(%esp)
0849f059 +0x33f:  lea    -0x54(%ebp),%eax
0849f05c +0x342:  mov    %eax,(%esp)
0849f05f +0x345:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849f064 +0x34a:  lea    -0x54(%ebp),%eax
0849f067 +0x34d:  mov    %eax,0x4(%esp)
0849f06b +0x351:  mov    0xc(%ebp),%eax
0849f06e +0x354:  mov    %eax,(%esp)
0849f071 +0x357:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849f076 +0x35c:  mov    -0x24(%ebp),%eax
0849f079 +0x35f:  mov    %eax,(%esp)
0849f07c +0x362:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849f081 +0x367:  mov    %eax,%ebx
0849f083 +0x369:  call   0860f940 <_Z29GetInstanceExpertJobStatisticv>  ; GetInstanceExpertJobStatistic()
0849f088 +0x36e:  movl   $0x1,0xc(%esp)
0849f090 +0x376:  mov    %ebx,0x8(%esp)
0849f094 +0x37a:  movl   $0x1,0x4(%esp)
0849f09c +0x382:  mov    %eax,(%esp)
0849f09f +0x385:  call   0860f9d4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi>  ; CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int)
0849f0a4 +0x38a:  mov    0xc(%ebp),%eax
0849f0a7 +0x38d:  mov    %eax,(%esp)
0849f0aa +0x390:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0849f0af +0x395:  mov    %eax,%ebx
0849f0b1 +0x397:  mov    0xc(%ebp),%eax
0849f0b4 +0x39a:  mov    %eax,(%esp)
0849f0b7 +0x39d:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0849f0bc +0x3a2:  mov    -0x34(%ebp),%edx
0849f0bf +0x3a5:  mov    0xd(%edx),%edx
0849f0c2 +0x3a8:  mov    %edx,%esi
0849f0c4 +0x3aa:  mov    -0x1c(%ebp),%ecx
0849f0c7 +0x3ad:  mov    -0x34(%ebp),%edx
0849f0ca +0x3b0:  mov    0x2(%edx),%edx
0849f0cd +0x3b3:  mov    0xc(%ebp),%edi
0849f0d0 +0x3b6:  add    $0x79700,%edi
0849f0d6 +0x3bc:  mov    %ebx,0x18(%esp)
0849f0da +0x3c0:  mov    %eax,0x14(%esp)
0849f0de +0x3c4:  movl   $0x1,0x10(%esp)
0849f0e6 +0x3cc:  mov    %esi,0xc(%esp)
0849f0ea +0x3d0:  mov    %ecx,0x8(%esp)
0849f0ee +0x3d4:  mov    %edx,0x4(%esp)
0849f0f2 +0x3d8:  mov    %edi,(%esp)
0849f0f5 +0x3db:  call   08684d74 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_>  ; cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*)
0849f0fa +0x3e0:  lea    -0x54(%ebp),%eax
0849f0fd +0x3e3:  mov    %eax,(%esp)
0849f100 +0x3e6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849f105 +0x3eb:  movl   $0x113,0x8(%esp)
0849f10d +0x3f3:  movl   $0x1,0x4(%esp)
0849f115 +0x3fb:  lea    -0x54(%ebp),%eax
0849f118 +0x3fe:  mov    %eax,(%esp)
0849f11b +0x401:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849f120 +0x406:  movl   $0x1,0x4(%esp)
0849f128 +0x40e:  lea    -0x54(%ebp),%eax
0849f12b +0x411:  mov    %eax,(%esp)
0849f12e +0x414:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849f133 +0x419:  movl   $0x1,0x4(%esp)
0849f13b +0x421:  lea    -0x54(%ebp),%eax
0849f13e +0x424:  mov    %eax,(%esp)
0849f141 +0x427:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849f146 +0x42c:  lea    -0x54(%ebp),%eax
0849f149 +0x42f:  mov    %eax,0x4(%esp)
0849f14d +0x433:  mov    0xc(%ebp),%eax
0849f150 +0x436:  mov    %eax,(%esp)
0849f153 +0x439:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849f158 +0x43e:  mov    $0x0,%ebx
0849f15d +0x443:  lea    -0x54(%ebp),%eax
0849f160 +0x446:  mov    %eax,(%esp)
0849f163 +0x449:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849f168 +0x44e:  jmp    0849f185 <+0x46b>
0849f16a +0x450:  mov    %edx,%ebx
0849f16c +0x452:  mov    %eax,%esi
0849f16e +0x454:  lea    -0x54(%ebp),%eax
0849f171 +0x457:  mov    %eax,(%esp)
0849f174 +0x45a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849f179 +0x45f:  mov    %esi,%eax
0849f17b +0x461:  mov    %ebx,%edx
0849f17d +0x463:  mov    %eax,(%esp)
0849f180 +0x466:  call   08ae3750 <_Unwind_Resume>
0849f185 +0x46b:  mov    %ebx,%eax
0849f187 +0x46d:  add    $0x6c,%esp
0849f18a +0x470:  pop    %ebx
0849f18b +0x471:  pop    %esi
0849f18c +0x472:  pop    %edi
0849f18d +0x473:  pop    %ebp
0849f18e +0x474:  ret
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::OnEnchantByBead @ 0x849ed1a

/* expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int) */

undefined4 __thiscall
expert_job::CExpertJobMgr::OnEnchantByBead
          (CExpertJobMgr *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  CInventory *pCVar3;
  CDataManager *pCVar4;
  int iVar5;
  CExpertJobStatistic *pCVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  PacketGuard local_58 [12];
  cMyTrace local_4c [16];
  int local_3c;
  int local_38;
  CItem *local_34;
  CItem *local_30;
  int local_2c;
  CItem *local_28;
  char local_21;
  int local_20;
  
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_3c = CInventory::GetInvenRef(pCVar3,1,param_3);
  if (local_3c == 0) {
    uVar9 = 0x11;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_38 = CInventory::GetInvenRef(pCVar3,1,param_5);
    if (local_38 == 0) {
      uVar9 = 0x11;
    }
    else {
      cVar2 = InstanceRentalSystem::CheckRentableItem
                        (GlobalData::s_rentalSystem,1,*(uint *)(local_38 + 2));
      if (cVar2 == '\0') {
        cVar2 = InstanceRentalSystem::CheckRentableItem
                          (GlobalData::s_rentalSystem,2,*(uint *)(local_38 + 2));
        if (cVar2 == '\0') {
          iVar5 = *(int *)(local_3c + 2);
          pCVar4 = (CDataManager *)G_CDataManager();
          local_34 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
          if (local_34 == (CItem *)0x0) {
            uVar9 = 0x11;
          }
          else {
            iVar5 = *(int *)(local_38 + 2);
            pCVar4 = (CDataManager *)G_CDataManager();
            local_30 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
            if (local_30 == (CItem *)0x0) {
              uVar9 = 0x11;
            }
            else {
              cVar2 = CItem::is_stackable(local_34);
              if (cVar2 == '\x01') {
                iVar5 = CStackableItem::GetMonsterCardId((CStackableItem *)local_34);
                local_2c = iVar5;
                pCVar4 = (CDataManager *)G_CDataManager();
                local_28 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
                if (local_28 == (CItem *)0x0) {
                  uVar9 = 0x11;
                }
                else {
                  cVar2 = EnableWorld(local_30,local_34);
                  if (cVar2 == '\x01') {
                    pcVar1 = *(code **)(*(int *)local_28 + 0x20);
                    uVar9 = (**(code **)(*(int *)local_30 + 0xc))(local_30);
                    cVar2 = (*pcVar1)(local_28,uVar9);
                    if (cVar2 == '\x01') {
                      pCVar3 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      local_21 = CInventory::delete_item(pCVar3,1,param_3,1,8,1);
                      if (local_21 == '\x01') {
                        local_20 = *(int *)(local_38 + 0xd);
                        uVar9 = CItem::get_index(local_28);
                        *(undefined4 *)(local_38 + 0xd) = uVar9;
                        PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0849efb9 to 0849f157 has its CatchHandler @ 0849f16a */
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0xe);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,2);
                        pCVar3 = (CInventory *)
                                 CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                        CInventory::MakeItemPacket(pCVar3,1,param_5,local_58);
                        pCVar3 = (CInventory *)
                                 CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                        CInventory::MakeItemPacket(pCVar3,1,param_3,local_58);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                        CUser::Send(param_1,local_58);
                        uVar9 = CItem::get_index(local_28);
                        pCVar6 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
                        CExpertJobStatistic::increaseItemCount(pCVar6,1,uVar9,1);
                        pcVar7 = (char *)CUserCharacInfo::getCurCharacName
                                                   ((CUserCharacInfo *)param_1);
                        pcVar8 = (char *)CUser::get_acc_name(param_1);
                        cUserHistoryLog::EnchantItem
                                  ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_38 + 2),
                                   local_20,*(int *)(local_38 + 0xd),true,pcVar8,pcVar7);
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,1,0x113);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                        CUser::Send(param_1,local_58);
                        uVar9 = 0;
                        PacketGuard::~PacketGuard(local_58);
                      }
                      else {
                        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        cMyTrace::cMyTrace(local_4c,
                                           "int expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int)"
                                           ,0x6cd,5);
                        cMyTrace::operator()
                                  (local_4c,
                                   "CExpertJobMgr::OnEnchantByBead, getCurCharacInvenW()->delete_item failed , %d %d"
                                   ,uVar9,param_3);
                        uVar9 = 0x11;
                      }
                    }
                    else {
                      uVar9 = 0x17;
                    }
                  }
                  else {
                    uVar9 = 0x13;
                  }
                }
              }
              else {
                uVar9 = 0x11;
              }
            }
          }
        }
        else {
          uVar9 = 0x11;
        }
      }
      else {
        uVar9 = 0x11;
      }
    }
  }
  return uVar9;
}
```
