# _putItemIntoUser

`_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard`

`CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085aab84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085aab84  _ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard
#           CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
# range [0x085aab84, 0x085ab735]
085aab84 +0x000:  push   %ebp
085aab85 +0x001:  mov    %esp,%ebp
085aab87 +0x003:  push   %edi
085aab88 +0x004:  push   %esi
085aab89 +0x005:  push   %ebx
085aab8a +0x006:  sub    $0x1fc,%esp
085aab90 +0x00c:  movl   $0x0,-0x44(%ebp)
085aab97 +0x013:  movl   $0x0,-0x40(%ebp)
085aab9e +0x01a:  mov    0x14(%ebp),%eax
085aaba1 +0x01d:  mov    %eax,(%esp)
085aaba4 +0x020:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085aaba9 +0x025:  mov    0x14(%ebp),%eax
085aabac +0x028:  movl   $0xe,0x8(%esp)
085aabb4 +0x030:  movl   $0x0,0x4(%esp)
085aabbc +0x038:  mov    %eax,(%esp)
085aabbf +0x03b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085aabc4 +0x040:  mov    -0x40(%ebp),%edx
085aabc7 +0x043:  mov    0x14(%ebp),%eax
085aabca +0x046:  mov    %edx,0x4(%esp)
085aabce +0x04a:  mov    %eax,(%esp)
085aabd1 +0x04d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aabd6 +0x052:  mov    0x14(%ebp),%eax
085aabd9 +0x055:  mov    %eax,(%esp)
085aabdc +0x058:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085aabe1 +0x05d:  mov    %eax,-0x68(%ebp)
085aabe4 +0x060:  mov    0x14(%ebp),%eax
085aabe7 +0x063:  mov    -0x44(%ebp),%edx
085aabea +0x066:  mov    %edx,0x4(%esp)
085aabee +0x06a:  mov    %eax,(%esp)
085aabf1 +0x06d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085aabf6 +0x072:  mov    0x10(%ebp),%eax
085aabf9 +0x075:  mov    %eax,(%esp)
085aabfc +0x078:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aac01 +0x07d:  test   %eax,%eax
085aac03 +0x07f:  setg   %al
085aac06 +0x082:  test   %al,%al
085aac08 +0x084:  je     085aaf53 <+0x3cf>
085aac0e +0x08a:  mov    0x10(%ebp),%eax
085aac11 +0x08d:  mov    %eax,(%esp)
085aac14 +0x090:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aac19 +0x095:  cmp    $0x7a11f,%eax
085aac1e +0x09a:  setg   %al
085aac21 +0x09d:  test   %al,%al
085aac23 +0x09f:  je     085aad4c <+0x1c8>
085aac29 +0x0a5:  mov    0x8(%ebp),%eax
085aac2c +0x0a8:  add    $0xb24,%eax
085aac31 +0x0ad:  mov    %eax,(%esp)
085aac34 +0x0b0:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085aac39 +0x0b5:  mov    %eax,%edi
085aac3b +0x0b7:  mov    0x8(%ebp),%eax
085aac3e +0x0ba:  mov    %eax,(%esp)
085aac41 +0x0bd:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085aac46 +0x0c2:  mov    %eax,%esi
085aac48 +0x0c4:  mov    0x10(%ebp),%eax
085aac4b +0x0c7:  mov    %eax,(%esp)
085aac4e +0x0ca:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aac53 +0x0cf:  mov    %eax,%ebx
085aac55 +0x0d1:  mov    0x8(%ebp),%eax
085aac58 +0x0d4:  mov    0xcb8(%eax),%eax
085aac5e +0x0da:  mov    %eax,-0x1b0(%ebp)
085aac64 +0x0e0:  movl   $0x4,0xc(%esp)
085aac6c +0x0e8:  movl   $0x232d,0x8(%esp)
085aac74 +0x0f0:  movl   $&_ZZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085aac7c +0x0f8:  lea    -0x64(%ebp),%eax
085aac7f +0x0fb:  mov    %eax,(%esp)
085aac82 +0x0fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085aac87 +0x103:  mov    %edi,0x14(%esp)
085aac8b +0x107:  mov    %esi,0x10(%esp)
085aac8f +0x10b:  mov    %ebx,0xc(%esp)
085aac93 +0x10f:  mov    -0x1b0(%ebp),%eax
085aac99 +0x115:  mov    %eax,0x8(%esp)
085aac9d +0x119:  movl   $"Dungeon(%d) reward money(%d) on %d' party member with difficulty %d",0x4(%esp)
085aaca5 +0x121:  lea    -0x64(%ebp),%eax
085aaca8 +0x124:  mov    %eax,(%esp)
085aacab +0x127:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085aacb0 +0x12c:  mov    0xc(%ebp),%eax
085aacb3 +0x12f:  mov    %eax,(%esp)
085aacb6 +0x132:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085aacbb +0x137:  mov    %eax,(%esp)
085aacbe +0x13a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085aacc3 +0x13f:  mov    %eax,-0x1ac(%ebp)
085aacc9 +0x145:  mov    0x10(%ebp),%eax
085aaccc +0x148:  mov    %eax,(%esp)
085aaccf +0x14b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aacd4 +0x150:  mov    %eax,%edi
085aacd6 +0x152:  mov    0xc(%ebp),%eax
085aacd9 +0x155:  mov    %eax,(%esp)
085aacdc +0x158:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085aace1 +0x15d:  mov    %eax,%esi
085aace3 +0x15f:  mov    0xc(%ebp),%eax
085aace6 +0x162:  mov    %eax,(%esp)
085aace9 +0x165:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085aacee +0x16a:  movl   $0x0,0x4(%esp)
085aacf6 +0x172:  mov    %eax,(%esp)
085aacf9 +0x175:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085aacfe +0x17a:  mov    %eax,%ebx
085aad00 +0x17c:  movl   $0x4,0xc(%esp)
085aad08 +0x184:  movl   $0x2337,0x8(%esp)
085aad10 +0x18c:  movl   $&_ZZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
085aad18 +0x194:  lea    -0x54(%ebp),%eax
085aad1b +0x197:  mov    %eax,(%esp)
085aad1e +0x19a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085aad23 +0x19f:  mov    -0x1ac(%ebp),%eax
085aad29 +0x1a5:  mov    %eax,0x14(%esp)
085aad2d +0x1a9:  mov    %edi,0x10(%esp)
085aad31 +0x1ad:  mov    %esi,0xc(%esp)
085aad35 +0x1b1:  mov    %ebx,0x8(%esp)
085aad39 +0x1b5:  movl   $"User(%s) Charac(%s) gain money(%d), old money is %d.",0x4(%esp)
085aad41 +0x1bd:  lea    -0x54(%ebp),%eax
085aad44 +0x1c0:  mov    %eax,(%esp)
085aad47 +0x1c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085aad4c +0x1c8:  mov    0x10(%ebp),%eax
085aad4f +0x1cb:  mov    %eax,(%esp)
085aad52 +0x1ce:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aad57 +0x1d3:  mov    %eax,%ebx
085aad59 +0x1d5:  mov    0xc(%ebp),%eax
085aad5c +0x1d8:  mov    %eax,(%esp)
085aad5f +0x1db:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085aad64 +0x1e0:  movl   $0x0,0x10(%esp)
085aad6c +0x1e8:  movl   $0x1,0xc(%esp)
085aad74 +0x1f0:  movl   $0x5,0x8(%esp)
085aad7c +0x1f8:  mov    %ebx,0x4(%esp)
085aad80 +0x1fc:  mov    %eax,(%esp)
085aad83 +0x1ff:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085aad88 +0x204:  mov    %eax,-0x30(%ebp)
085aad8b +0x207:  mov    0x10(%ebp),%eax
085aad8e +0x20a:  mov    %eax,(%esp)
085aad91 +0x20d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aad96 +0x212:  cmp    -0x30(%ebp),%eax
085aad99 +0x215:  setg   %al
085aad9c +0x218:  test   %al,%al
085aad9e +0x21a:  je     085aadc9 <+0x245>
085aada0 +0x21c:  mov    -0x30(%ebp),%ebx
085aada3 +0x21f:  mov    0x10(%ebp),%eax
085aada6 +0x222:  mov    %eax,(%esp)
085aada9 +0x225:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aadae +0x22a:  mov    %ebx,0xc(%esp)
085aadb2 +0x22e:  mov    %eax,0x8(%esp)
085aadb6 +0x232:  movl   $0x0,0x4(%esp)
085aadbe +0x23a:  mov    0xc(%ebp),%eax
085aadc1 +0x23d:  mov    %eax,(%esp)
085aadc4 +0x240:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
085aadc9 +0x245:  mov    -0x30(%ebp),%ebx
085aadcc +0x248:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085aadd1 +0x24d:  mov    %ebx,0xc(%esp)
085aadd5 +0x251:  mov    0xc(%ebp),%edx
085aadd8 +0x254:  mov    %edx,0x8(%esp)
085aaddc +0x258:  movl   $0x3,0x4(%esp)
085aade4 +0x260:  mov    %eax,(%esp)
085aade7 +0x263:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085aadec +0x268:  mov    0x8(%ebp),%eax
085aadef +0x26b:  mov    0xcac(%eax),%eax
085aadf5 +0x271:  test   %eax,%eax
085aadf7 +0x273:  je     085aae55 <+0x2d1>
085aadf9 +0x275:  mov    0x8(%ebp),%eax
085aadfc +0x278:  mov    0xcac(%eax),%eax
085aae02 +0x27e:  movzbl 0x89e(%eax),%eax
085aae09 +0x285:  test   %al,%al
085aae0b +0x287:  je     085aae32 <+0x2ae>
085aae0d +0x289:  mov    -0x30(%ebp),%ebx
085aae10 +0x28c:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085aae15 +0x291:  mov    %ebx,0xc(%esp)
085aae19 +0x295:  mov    0xc(%ebp),%edx
085aae1c +0x298:  mov    %edx,0x8(%esp)
085aae20 +0x29c:  movl   $0xf,0x4(%esp)
085aae28 +0x2a4:  mov    %eax,(%esp)
085aae2b +0x2a7:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085aae30 +0x2ac:  jmp    085aae55 <+0x2d1>
085aae32 +0x2ae:  mov    -0x30(%ebp),%ebx
085aae35 +0x2b1:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085aae3a +0x2b6:  mov    %ebx,0xc(%esp)
085aae3e +0x2ba:  mov    0xc(%ebp),%edx
085aae41 +0x2bd:  mov    %edx,0x8(%esp)
085aae45 +0x2c1:  movl   $0x1,0x4(%esp)
085aae4d +0x2c9:  mov    %eax,(%esp)
085aae50 +0x2cc:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085aae55 +0x2d1:  mov    0x10(%ebp),%eax
085aae58 +0x2d4:  mov    %eax,(%esp)
085aae5b +0x2d7:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085aae60 +0x2dc:  mov    %eax,0x4(%esp)
085aae64 +0x2e0:  mov    0xc(%ebp),%eax
085aae67 +0x2e3:  mov    %eax,(%esp)
085aae6a +0x2e6:  call   0864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>  ; CUser::saveTaxMoneyForUpperMember(int)
085aae6f +0x2eb:  mov    0x14(%ebp),%eax
085aae72 +0x2ee:  movl   $0x0,0x4(%esp)
085aae7a +0x2f6:  mov    %eax,(%esp)
085aae7d +0x2f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085aae82 +0x2fe:  mov    0x14(%ebp),%eax
085aae85 +0x301:  movl   $0x0,0x4(%esp)
085aae8d +0x309:  mov    %eax,(%esp)
085aae90 +0x30c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085aae95 +0x311:  mov    0xc(%ebp),%eax
085aae98 +0x314:  mov    %eax,(%esp)
085aae9b +0x317:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085aaea0 +0x31c:  mov    %eax,(%esp)
085aaea3 +0x31f:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085aaea8 +0x324:  mov    0x14(%ebp),%edx
085aaeab +0x327:  mov    %eax,0x4(%esp)
085aaeaf +0x32b:  mov    %edx,(%esp)
085aaeb2 +0x32e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085aaeb7 +0x333:  mov    0x14(%ebp),%eax
085aaeba +0x336:  movl   $0x0,0x4(%esp)
085aaec2 +0x33e:  mov    %eax,(%esp)
085aaec5 +0x341:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aaeca +0x346:  mov    0x14(%ebp),%eax
085aaecd +0x349:  movl   $0x0,0x4(%esp)
085aaed5 +0x351:  mov    %eax,(%esp)
085aaed8 +0x354:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085aaedd +0x359:  mov    0x14(%ebp),%eax
085aaee0 +0x35c:  movl   $0x0,0x4(%esp)
085aaee8 +0x364:  mov    %eax,(%esp)
085aaeeb +0x367:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aaef0 +0x36c:  mov    0x14(%ebp),%eax
085aaef3 +0x36f:  movl   $0x0,0x4(%esp)
085aaefb +0x377:  mov    %eax,(%esp)
085aaefe +0x37a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085aaf03 +0x37f:  mov    0x14(%ebp),%eax
085aaf06 +0x382:  movl   $0x0,0x4(%esp)
085aaf0e +0x38a:  mov    %eax,(%esp)
085aaf11 +0x38d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aaf16 +0x392:  mov    0x14(%ebp),%eax
085aaf19 +0x395:  movl   $0x0,0x4(%esp)
085aaf21 +0x39d:  mov    %eax,(%esp)
085aaf24 +0x3a0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085aaf29 +0x3a5:  mov    0x14(%ebp),%eax
085aaf2c +0x3a8:  movl   $0x0,0x4(%esp)
085aaf34 +0x3b0:  mov    %eax,(%esp)
085aaf37 +0x3b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aaf3c +0x3b8:  mov    0x14(%ebp),%eax
085aaf3f +0x3bb:  movl   $&g_emptySlot,0x4(%esp)
085aaf47 +0x3c3:  mov    %eax,(%esp)
085aaf4a +0x3c6:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085aaf4f +0x3cb:  addl   $0x1,-0x44(%ebp)
085aaf53 +0x3cf:  mov    -0x40(%ebp),%ebx
085aaf56 +0x3d2:  mov    0x10(%ebp),%eax
085aaf59 +0x3d5:  add    $0x3d,%eax
085aaf5c +0x3d8:  mov    %eax,(%esp)
085aaf5f +0x3db:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
085aaf64 +0x3e0:  cmp    %eax,%ebx
085aaf66 +0x3e2:  setne  %al
085aaf69 +0x3e5:  test   %al,%al
085aaf6b +0x3e7:  je     085ab01f <+0x49b>
085aaf71 +0x3ed:  cmpl   $0x0,-0x44(%ebp)
085aaf75 +0x3f1:  jle    085aafb5 <+0x431>
085aaf77 +0x3f3:  mov    0x14(%ebp),%eax
085aaf7a +0x3f6:  mov    -0x44(%ebp),%edx
085aaf7d +0x3f9:  mov    %edx,0x8(%esp)
085aaf81 +0x3fd:  lea    -0x68(%ebp),%edx
085aaf84 +0x400:  mov    %edx,0x4(%esp)
085aaf88 +0x404:  mov    %eax,(%esp)
085aaf8b +0x407:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
085aaf90 +0x40c:  mov    0x14(%ebp),%eax
085aaf93 +0x40f:  movl   $0x1,0x4(%esp)
085aaf9b +0x417:  mov    %eax,(%esp)
085aaf9e +0x41a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085aafa3 +0x41f:  mov    0x14(%ebp),%eax
085aafa6 +0x422:  mov    %eax,0x4(%esp)
085aafaa +0x426:  mov    0xc(%ebp),%eax
085aafad +0x429:  mov    %eax,(%esp)
085aafb0 +0x42c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085aafb5 +0x431:  movl   $0x0,-0x44(%ebp)
085aafbc +0x438:  mov    0x14(%ebp),%eax
085aafbf +0x43b:  mov    %eax,(%esp)
085aafc2 +0x43e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085aafc7 +0x443:  mov    0x14(%ebp),%eax
085aafca +0x446:  movl   $0xe,0x8(%esp)
085aafd2 +0x44e:  movl   $0x0,0x4(%esp)
085aafda +0x456:  mov    %eax,(%esp)
085aafdd +0x459:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085aafe2 +0x45e:  mov    0x10(%ebp),%eax
085aafe5 +0x461:  add    $0x3d,%eax
085aafe8 +0x464:  mov    %eax,(%esp)
085aafeb +0x467:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
085aaff0 +0x46c:  mov    0x14(%ebp),%edx
085aaff3 +0x46f:  mov    %eax,0x4(%esp)
085aaff7 +0x473:  mov    %edx,(%esp)
085aaffa +0x476:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085aafff +0x47b:  mov    0x14(%ebp),%eax
085ab002 +0x47e:  mov    %eax,(%esp)
085ab005 +0x481:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085ab00a +0x486:  mov    %eax,-0x68(%ebp)
085ab00d +0x489:  mov    0x14(%ebp),%eax
085ab010 +0x48c:  mov    -0x44(%ebp),%edx
085ab013 +0x48f:  mov    %edx,0x4(%esp)
085ab017 +0x493:  mov    %eax,(%esp)
085ab01a +0x496:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ab01f +0x49b:  mov    0x10(%ebp),%eax
085ab022 +0x49e:  lea    0x3d(%eax),%ebx
085ab025 +0x4a1:  mov    0xc(%ebp),%eax
085ab028 +0x4a4:  mov    %eax,(%esp)
085ab02b +0x4a7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085ab030 +0x4ac:  movl   $0x1,0x4c(%esp)
085ab038 +0x4b4:  movl   $0x1,0x48(%esp)
085ab040 +0x4bc:  movl   $0xb,0x44(%esp)
085ab048 +0x4c4:  mov    (%ebx),%edx
085ab04a +0x4c6:  mov    %edx,0x4(%esp)
085ab04e +0x4ca:  mov    0x4(%ebx),%edx
085ab051 +0x4cd:  mov    %edx,0x8(%esp)
085ab055 +0x4d1:  mov    0x8(%ebx),%edx
085ab058 +0x4d4:  mov    %edx,0xc(%esp)
085ab05c +0x4d8:  mov    0xc(%ebx),%edx
085ab05f +0x4db:  mov    %edx,0x10(%esp)
085ab063 +0x4df:  mov    0x10(%ebx),%edx
085ab066 +0x4e2:  mov    %edx,0x14(%esp)
085ab06a +0x4e6:  mov    0x14(%ebx),%edx
085ab06d +0x4e9:  mov    %edx,0x18(%esp)
085ab071 +0x4ed:  mov    0x18(%ebx),%edx
085ab074 +0x4f0:  mov    %edx,0x1c(%esp)
085ab078 +0x4f4:  mov    0x1c(%ebx),%edx
085ab07b +0x4f7:  mov    %edx,0x20(%esp)
085ab07f +0x4fb:  mov    0x20(%ebx),%edx
085ab082 +0x4fe:  mov    %edx,0x24(%esp)
085ab086 +0x502:  mov    0x24(%ebx),%edx
085ab089 +0x505:  mov    %edx,0x28(%esp)
085ab08d +0x509:  mov    0x28(%ebx),%edx
085ab090 +0x50c:  mov    %edx,0x2c(%esp)
085ab094 +0x510:  mov    0x2c(%ebx),%edx
085ab097 +0x513:  mov    %edx,0x30(%esp)
085ab09b +0x517:  mov    0x30(%ebx),%edx
085ab09e +0x51a:  mov    %edx,0x34(%esp)
085ab0a2 +0x51e:  mov    0x34(%ebx),%edx
085ab0a5 +0x521:  mov    %edx,0x38(%esp)
085ab0a9 +0x525:  mov    0x38(%ebx),%edx
085ab0ac +0x528:  mov    %edx,0x3c(%esp)
085ab0b0 +0x52c:  movzbl 0x3c(%ebx),%edx
085ab0b4 +0x530:  mov    %dl,0x40(%esp)
085ab0b8 +0x534:  mov    %eax,(%esp)
085ab0bb +0x537:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085ab0c0 +0x53c:  mov    %eax,-0x3c(%ebp)
085ab0c3 +0x53f:  mov    0x8(%ebp),%eax
085ab0c6 +0x542:  mov    0xcac(%eax),%eax
085ab0cc +0x548:  mov    %eax,-0x38(%ebp)
085ab0cf +0x54b:  movb   $0x0,-0x31(%ebp)
085ab0d3 +0x54f:  cmpl   $0x0,-0x38(%ebp)
085ab0d7 +0x553:  je     085ab0e7 <+0x563>
085ab0d9 +0x555:  mov    -0x38(%ebp),%eax
085ab0dc +0x558:  mov    %eax,(%esp)
085ab0df +0x55b:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085ab0e4 +0x560:  mov    %al,-0x31(%ebp)
085ab0e7 +0x563:  cmpl   $0x0,-0x3c(%ebp)
085ab0eb +0x567:  jle    085ab414 <+0x890>
085ab0f1 +0x56d:  mov    0x10(%ebp),%eax
085ab0f4 +0x570:  add    $0x3d,%eax
085ab0f7 +0x573:  mov    %eax,(%esp)
085ab0fa +0x576:  call   08348170 <_ZN10Inven_Item16GetInventoryTypeEv>  ; Inven_Item::GetInventoryType()
085ab0ff +0x57b:  mov    %eax,%ebx
085ab101 +0x57d:  mov    0xc(%ebp),%eax
085ab104 +0x580:  mov    %eax,(%esp)
085ab107 +0x583:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ab10c +0x588:  mov    -0x3c(%ebp),%edx
085ab10f +0x58b:  mov    %edx,0x8(%esp)
085ab113 +0x58f:  mov    %ebx,0x4(%esp)
085ab117 +0x593:  mov    %eax,(%esp)
085ab11a +0x596:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
085ab11f +0x59b:  mov    %eax,-0x2c(%ebp)
085ab122 +0x59e:  mov    0x14(%ebp),%eax
085ab125 +0x5a1:  mov    -0x3c(%ebp),%edx
085ab128 +0x5a4:  mov    %edx,0x4(%esp)
085ab12c +0x5a8:  mov    %eax,(%esp)
085ab12f +0x5ab:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ab134 +0x5b0:  mov    -0x2c(%ebp),%eax
085ab137 +0x5b3:  mov    0x2(%eax),%eax
085ab13a +0x5b6:  mov    %eax,%edx
085ab13c +0x5b8:  mov    0x14(%ebp),%eax
085ab13f +0x5bb:  mov    %edx,0x4(%esp)
085ab143 +0x5bf:  mov    %eax,(%esp)
085ab146 +0x5c2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ab14b +0x5c7:  mov    -0x2c(%ebp),%eax
085ab14e +0x5ca:  mov    %eax,(%esp)
085ab151 +0x5cd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085ab156 +0x5d2:  mov    0x14(%ebp),%edx
085ab159 +0x5d5:  mov    %eax,0x4(%esp)
085ab15d +0x5d9:  mov    %edx,(%esp)
085ab160 +0x5dc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ab165 +0x5e1:  mov    -0x2c(%ebp),%eax
085ab168 +0x5e4:  mov    %eax,(%esp)
085ab16b +0x5e7:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085ab170 +0x5ec:  movzbl %al,%edx
085ab173 +0x5ef:  mov    0x14(%ebp),%eax
085ab176 +0x5f2:  mov    %edx,0x4(%esp)
085ab17a +0x5f6:  mov    %eax,(%esp)
085ab17d +0x5f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ab182 +0x5fe:  mov    -0x2c(%ebp),%eax
085ab185 +0x601:  movzwl 0xb(%eax),%eax
085ab189 +0x605:  movzwl %ax,%edx
085ab18c +0x608:  mov    0x14(%ebp),%eax
085ab18f +0x60b:  mov    %edx,0x4(%esp)
085ab193 +0x60f:  mov    %eax,(%esp)
085ab196 +0x612:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ab19b +0x617:  mov    -0x2c(%ebp),%eax
085ab19e +0x61a:  movzbl (%eax),%eax
085ab1a1 +0x61d:  movzbl %al,%edx
085ab1a4 +0x620:  mov    0x14(%ebp),%eax
085ab1a7 +0x623:  mov    %edx,0x4(%esp)
085ab1ab +0x627:  mov    %eax,(%esp)
085ab1ae +0x62a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ab1b3 +0x62f:  mov    -0x2c(%ebp),%eax
085ab1b6 +0x632:  mov    0xd(%eax),%eax
085ab1b9 +0x635:  mov    %eax,%edx
085ab1bb +0x637:  mov    0x14(%ebp),%eax
085ab1be +0x63a:  mov    %edx,0x4(%esp)
085ab1c2 +0x63e:  mov    %eax,(%esp)
085ab1c5 +0x641:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ab1ca +0x646:  mov    -0x2c(%ebp),%eax
085ab1cd +0x649:  add    $0x11,%eax
085ab1d0 +0x64c:  mov    %eax,(%esp)
085ab1d3 +0x64f:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085ab1d8 +0x654:  movzbl %al,%edx
085ab1db +0x657:  mov    0x14(%ebp),%eax
085ab1de +0x65a:  mov    %edx,0x4(%esp)
085ab1e2 +0x65e:  mov    %eax,(%esp)
085ab1e5 +0x661:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ab1ea +0x666:  mov    -0x2c(%ebp),%eax
085ab1ed +0x669:  add    $0x11,%eax
085ab1f0 +0x66c:  mov    %eax,(%esp)
085ab1f3 +0x66f:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085ab1f8 +0x674:  movzwl %ax,%edx
085ab1fb +0x677:  mov    0x14(%ebp),%eax
085ab1fe +0x67a:  mov    %edx,0x4(%esp)
085ab202 +0x67e:  mov    %eax,(%esp)
085ab205 +0x681:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ab20a +0x686:  mov    -0x2c(%ebp),%eax
085ab20d +0x689:  mov    %eax,(%esp)
085ab210 +0x68c:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
085ab215 +0x691:  test   %al,%al
085ab217 +0x693:  je     085ab2fe <+0x77a>
085ab21d +0x699:  mov    0x14(%ebp),%eax
085ab220 +0x69c:  movl   $0x1e,0x4(%esp)
085ab228 +0x6a4:  mov    %eax,(%esp)
085ab22b +0x6a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ab230 +0x6ac:  mov    -0x2c(%ebp),%eax
085ab233 +0x6af:  mov    %eax,(%esp)
085ab236 +0x6b2:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085ab23b +0x6b7:  mov    %eax,%ebx
085ab23d +0x6b9:  mov    0xc(%ebp),%eax
085ab240 +0x6bc:  mov    %eax,(%esp)
085ab243 +0x6bf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ab248 +0x6c4:  mov    %eax,(%esp)
085ab24b +0x6c7:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085ab250 +0x6cc:  mov    %ebx,0x4(%esp)
085ab254 +0x6d0:  mov    %eax,(%esp)
085ab257 +0x6d3:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
085ab25c +0x6d8:  mov    %eax,%edx
085ab25e +0x6da:  mov    0x14(%ebp),%eax
085ab261 +0x6dd:  movl   $0x1e,0x8(%esp)
085ab269 +0x6e5:  mov    %edx,0x4(%esp)
085ab26d +0x6e9:  mov    %eax,(%esp)
085ab270 +0x6ec:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085ab275 +0x6f1:  mov    -0x2c(%ebp),%eax
085ab278 +0x6f4:  mov    %eax,(%esp)
085ab27b +0x6f7:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085ab280 +0x6fc:  mov    %eax,%ebx
085ab282 +0x6fe:  mov    0xc(%ebp),%eax
085ab285 +0x701:  mov    %eax,(%esp)
085ab288 +0x704:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ab28d +0x709:  mov    %eax,(%esp)
085ab290 +0x70c:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085ab295 +0x711:  mov    %ebx,0x4(%esp)
085ab299 +0x715:  mov    %eax,(%esp)
085ab29c +0x718:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
085ab2a1 +0x71d:  mov    %eax,-0x24(%ebp)
085ab2a4 +0x720:  mov    0x14(%ebp),%eax
085ab2a7 +0x723:  movl   $0x4,0x4(%esp)
085ab2af +0x72b:  mov    %eax,(%esp)
085ab2b2 +0x72e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ab2b7 +0x733:  cmpl   $0x0,-0x24(%ebp)
085ab2bb +0x737:  je     085ab2d9 <+0x755>
085ab2bd +0x739:  mov    -0x24(%ebp),%edx
085ab2c0 +0x73c:  mov    0x14(%ebp),%eax
085ab2c3 +0x73f:  movl   $0x4,0x8(%esp)
085ab2cb +0x747:  mov    %edx,0x4(%esp)
085ab2cf +0x74b:  mov    %eax,(%esp)
085ab2d2 +0x74e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085ab2d7 +0x753:  jmp    085ab2fe <+0x77a>
085ab2d9 +0x755:  lea    -0x6c(%ebp),%eax
085ab2dc +0x758:  mov    %eax,(%esp)
085ab2df +0x75b:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
085ab2e4 +0x760:  lea    -0x6c(%ebp),%edx
085ab2e7 +0x763:  mov    0x14(%ebp),%eax
085ab2ea +0x766:  movl   $0x4,0x8(%esp)
085ab2f2 +0x76e:  mov    %edx,0x4(%esp)
085ab2f6 +0x772:  mov    %eax,(%esp)
085ab2f9 +0x775:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
085ab2fe +0x77a:  mov    0x14(%ebp),%eax
085ab301 +0x77d:  movl   $0x0,0x4(%esp)
085ab309 +0x785:  mov    %eax,(%esp)
085ab30c +0x788:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ab311 +0x78d:  mov    0x14(%ebp),%eax
085ab314 +0x790:  mov    -0x2c(%ebp),%edx
085ab317 +0x793:  mov    %edx,0x4(%esp)
085ab31b +0x797:  mov    %eax,(%esp)
085ab31e +0x79a:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085ab323 +0x79f:  addl   $0x1,-0x44(%ebp)
085ab327 +0x7a3:  mov    0x10(%ebp),%eax
085ab32a +0x7a6:  add    $0x3d,%eax
085ab32d +0x7a9:  mov    0x2(%eax),%eax
085ab330 +0x7ac:  mov    %eax,%ebx
085ab332 +0x7ae:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ab337 +0x7b3:  mov    %ebx,0x4(%esp)
085ab33b +0x7b7:  mov    %eax,(%esp)
085ab33e +0x7ba:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085ab343 +0x7bf:  mov    %eax,-0x28(%ebp)
085ab346 +0x7c2:  cmpl   $0x0,-0x28(%ebp)
085ab34a +0x7c6:  je     085ab3b5 <+0x831>
085ab34c +0x7c8:  movl   $0x0,-0x70(%ebp)
085ab353 +0x7cf:  mov    0x10(%ebp),%eax
085ab356 +0x7d2:  add    $0x3d,%eax
085ab359 +0x7d5:  mov    0x7(%eax),%eax
085ab35c +0x7d8:  movswl %ax,%ebx
085ab35f +0x7db:  mov    0x10(%ebp),%eax
085ab362 +0x7de:  lea    0x3d(%eax),%esi
085ab365 +0x7e1:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085ab36a +0x7e6:  lea    -0x70(%ebp),%edx
085ab36d +0x7e9:  mov    %edx,0x14(%esp)
085ab371 +0x7ed:  movl   $0x0,0x10(%esp)
085ab379 +0x7f5:  mov    %ebx,0xc(%esp)
085ab37d +0x7f9:  mov    -0x28(%ebp),%edx
085ab380 +0x7fc:  mov    %edx,0x8(%esp)
085ab384 +0x800:  mov    %esi,0x4(%esp)
085ab388 +0x804:  mov    %eax,(%esp)
085ab38b +0x807:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085ab390 +0x80c:  mov    -0x70(%ebp),%eax
085ab393 +0x80f:  mov    %eax,%ebx
085ab395 +0x811:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085ab39a +0x816:  mov    %ebx,0xc(%esp)
085ab39e +0x81a:  mov    0xc(%ebp),%edx
085ab3a1 +0x81d:  mov    %edx,0x8(%esp)
085ab3a5 +0x821:  movl   $0x4,0x4(%esp)
085ab3ad +0x829:  mov    %eax,(%esp)
085ab3b0 +0x82c:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085ab3b5 +0x831:  mov    0x10(%ebp),%eax
085ab3b8 +0x834:  add    $0x3d,%eax
085ab3bb +0x837:  movzbl 0x1(%eax),%eax
085ab3bf +0x83b:  cmp    $0x1,%al
085ab3c1 +0x83d:  jne    085ab6e3 <+0xb5f>
085ab3c7 +0x843:  cmpl   $0x0,-0x28(%ebp)
085ab3cb +0x847:  je     085ab6e3 <+0xb5f>
085ab3d1 +0x84d:  mov    -0x28(%ebp),%eax
085ab3d4 +0x850:  mov    %eax,(%esp)
085ab3d7 +0x853:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085ab3dc +0x858:  mov    %eax,%ebx
085ab3de +0x85a:  mov    -0x28(%ebp),%eax
085ab3e1 +0x85d:  mov    %eax,(%esp)
085ab3e4 +0x860:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085ab3e9 +0x865:  mov    %eax,%edx
085ab3eb +0x867:  mov    0x10(%ebp),%eax
085ab3ee +0x86a:  add    $0x3d,%eax
085ab3f1 +0x86d:  movzbl 0x1(%eax),%eax
085ab3f5 +0x871:  movzbl %al,%eax
085ab3f8 +0x874:  mov    %ebx,0xc(%esp)
085ab3fc +0x878:  mov    %edx,0x8(%esp)
085ab400 +0x87c:  mov    %eax,0x4(%esp)
085ab404 +0x880:  mov    0xc(%ebp),%eax
085ab407 +0x883:  mov    %eax,(%esp)
085ab40a +0x886:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
085ab40f +0x88b:  jmp    085ab6e3 <+0xb5f>
085ab414 +0x890:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085ab419 +0x895:  movl   $0x41,0x4(%esp)
085ab421 +0x89d:  mov    %eax,(%esp)
085ab424 +0x8a0:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085ab429 +0x8a5:  mov    (%eax),%edx
085ab42b +0x8a7:  add    $0x34,%edx
085ab42e +0x8aa:  mov    (%edx),%edx
085ab430 +0x8ac:  movl   $0x0,0x4(%esp)
085ab438 +0x8b4:  mov    %eax,(%esp)
085ab43b +0x8b7:  call   *%edx
085ab43d +0x8b9:  test   %al,%al
085ab43f +0x8bb:  je     085ab46e <+0x8ea>
085ab441 +0x8bd:  mov    0x10(%ebp),%eax
085ab444 +0x8c0:  add    $0x3d,%eax
085ab447 +0x8c3:  mov    0x2(%eax),%eax
085ab44a +0x8c6:  test   %eax,%eax
085ab44c +0x8c8:  je     085ab46e <+0x8ea>
085ab44e +0x8ca:  mov    0x10(%ebp),%eax
085ab451 +0x8cd:  add    $0x3d,%eax
085ab454 +0x8d0:  mov    0x2(%eax),%eax
085ab457 +0x8d3:  cmp    $0xffffffff,%eax
085ab45a +0x8d6:  je     085ab46e <+0x8ea>
085ab45c +0x8d8:  movzbl -0x31(%ebp),%eax
085ab460 +0x8dc:  xor    $0x1,%eax
085ab463 +0x8df:  test   %al,%al
085ab465 +0x8e1:  je     085ab46e <+0x8ea>
085ab467 +0x8e3:  mov    $0x1,%eax
085ab46c +0x8e8:  jmp    085ab473 <+0x8ef>
085ab46e +0x8ea:  mov    $0x0,%eax
085ab473 +0x8ef:  test   %al,%al
085ab475 +0x8f1:  je     085ab59b <+0xa17>
085ab47b +0x8f7:  mov    0x10(%ebp),%eax
085ab47e +0x8fa:  add    $0x3d,%eax
085ab481 +0x8fd:  mov    0x2(%eax),%eax
085ab484 +0x900:  mov    %eax,%ebx
085ab486 +0x902:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ab48b +0x907:  mov    %ebx,0x4(%esp)
085ab48f +0x90b:  mov    %eax,(%esp)
085ab492 +0x90e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085ab497 +0x913:  mov    %eax,-0x20(%ebp)
085ab49a +0x916:  cmpl   $0x0,-0x20(%ebp)
085ab49e +0x91a:  je     085ab6e3 <+0xb5f>
085ab4a4 +0x920:  movl   $0x0,0xc(%esp)
085ab4ac +0x928:  movl   $"game_server_msg_155",0x8(%esp)
085ab4b4 +0x930:  movl   $0x4,0x4(%esp)
085ab4bc +0x938:  movl   $&g_scriptStringManager_,(%esp)
085ab4c3 +0x93f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085ab4c8 +0x944:  movl   $0x14,0x8(%esp)
085ab4d0 +0x94c:  mov    %eax,0x4(%esp)
085ab4d4 +0x950:  lea    -0x85(%ebp),%eax
085ab4da +0x956:  mov    %eax,(%esp)
085ab4dd +0x959:  call   0807d8d0 <_init+0x1c8>
085ab4e2 +0x95e:  movl   $0x0,0xc(%esp)
085ab4ea +0x966:  movl   $"game_server_msg_104",0x8(%esp)
085ab4f2 +0x96e:  movl   $0x4,0x4(%esp)
085ab4fa +0x976:  movl   $&g_scriptStringManager_,(%esp)
085ab501 +0x97d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085ab506 +0x982:  movl   $0xff,0x8(%esp)
085ab50e +0x98a:  mov    %eax,0x4(%esp)
085ab512 +0x98e:  lea    -0x19a(%ebp),%eax
085ab518 +0x994:  mov    %eax,(%esp)
085ab51b +0x997:  call   0807d8d0 <_init+0x1c8>
085ab520 +0x99c:  mov    0xc(%ebp),%eax
085ab523 +0x99f:  mov    %eax,(%esp)
085ab526 +0x9a2:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085ab52b +0x9a7:  mov    %eax,%ebx
085ab52d +0x9a9:  lea    -0x19a(%ebp),%eax
085ab533 +0x9af:  mov    %eax,(%esp)
085ab536 +0x9b2:  call   0807e3b0 <_init+0xca8>
085ab53b +0x9b7:  mov    %eax,%esi
085ab53d +0x9b9:  mov    0xc(%ebp),%eax
085ab540 +0x9bc:  mov    %eax,(%esp)
085ab543 +0x9bf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ab548 +0x9c4:  mov    0x10(%ebp),%edx
085ab54b +0x9c7:  lea    0x3d(%edx),%ecx
085ab54e +0x9ca:  movl   $0x0,0x24(%esp)
085ab556 +0x9d2:  movl   $0x0,0x20(%esp)
085ab55e +0x9da:  mov    %ebx,0x1c(%esp)
085ab562 +0x9de:  movl   $0x8,0x18(%esp)
085ab56a +0x9e6:  mov    %esi,0x14(%esp)
085ab56e +0x9ea:  lea    -0x19a(%ebp),%edx
085ab574 +0x9f0:  mov    %edx,0x10(%esp)
085ab578 +0x9f4:  mov    %eax,0xc(%esp)
085ab57c +0x9f8:  movl   $0x0,0x8(%esp)
085ab584 +0xa00:  mov    %ecx,0x4(%esp)
085ab588 +0xa04:  lea    -0x85(%ebp),%eax
085ab58e +0xa0a:  mov    %eax,(%esp)
085ab591 +0xa0d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
085ab596 +0xa12:  jmp    085ab6e3 <+0xb5f>
085ab59b +0xa17:  mov    0x10(%ebp),%eax
085ab59e +0xa1a:  add    $0x3d,%eax
085ab5a1 +0xa1d:  mov    0x2(%eax),%eax
085ab5a4 +0xa20:  test   %eax,%eax
085ab5a6 +0xa22:  je     085ab6e3 <+0xb5f>
085ab5ac +0xa28:  mov    0x10(%ebp),%eax
085ab5af +0xa2b:  add    $0x3d,%eax
085ab5b2 +0xa2e:  mov    0x2(%eax),%eax
085ab5b5 +0xa31:  cmp    $0xffffffff,%eax
085ab5b8 +0xa34:  je     085ab6e3 <+0xb5f>
085ab5be +0xa3a:  cmpb   $0x0,-0x31(%ebp)
085ab5c2 +0xa3e:  je     085ab6e3 <+0xb5f>
085ab5c8 +0xa44:  mov    0x10(%ebp),%eax
085ab5cb +0xa47:  add    $0x3d,%eax
085ab5ce +0xa4a:  mov    0x2(%eax),%eax
085ab5d1 +0xa4d:  mov    %eax,%ebx
085ab5d3 +0xa4f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ab5d8 +0xa54:  mov    %ebx,0x4(%esp)
085ab5dc +0xa58:  mov    %eax,(%esp)
085ab5df +0xa5b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085ab5e4 +0xa60:  mov    %eax,-0x1c(%ebp)
085ab5e7 +0xa63:  cmpl   $0x0,-0x1c(%ebp)
085ab5eb +0xa67:  je     085ab6e3 <+0xb5f>
085ab5f1 +0xa6d:  movl   $0x0,0xc(%esp)
085ab5f9 +0xa75:  movl   $"game_server_msg_250",0x8(%esp)
085ab601 +0xa7d:  movl   $0x4,0x4(%esp)
085ab609 +0xa85:  movl   $&g_scriptStringManager_,(%esp)
085ab610 +0xa8c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085ab615 +0xa91:  movl   $0x14,0x8(%esp)
085ab61d +0xa99:  mov    %eax,0x4(%esp)
085ab621 +0xa9d:  lea    -0x9a(%ebp),%eax
085ab627 +0xaa3:  mov    %eax,(%esp)
085ab62a +0xaa6:  call   0807d8d0 <_init+0x1c8>
085ab62f +0xaab:  movl   $0x0,0xc(%esp)
085ab637 +0xab3:  movl   $"game_server_msg_104",0x8(%esp)
085ab63f +0xabb:  movl   $0x4,0x4(%esp)
085ab647 +0xac3:  movl   $&g_scriptStringManager_,(%esp)
085ab64e +0xaca:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085ab653 +0xacf:  movl   $0xff,0x8(%esp)
085ab65b +0xad7:  mov    %eax,0x4(%esp)
085ab65f +0xadb:  lea    -0x19a(%ebp),%eax
085ab665 +0xae1:  mov    %eax,(%esp)
085ab668 +0xae4:  call   0807d8d0 <_init+0x1c8>
085ab66d +0xae9:  mov    0xc(%ebp),%eax
085ab670 +0xaec:  mov    %eax,(%esp)
085ab673 +0xaef:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085ab678 +0xaf4:  mov    %eax,%ebx
085ab67a +0xaf6:  lea    -0x19a(%ebp),%eax
085ab680 +0xafc:  mov    %eax,(%esp)
085ab683 +0xaff:  call   0807e3b0 <_init+0xca8>
085ab688 +0xb04:  mov    %eax,%esi
085ab68a +0xb06:  mov    0xc(%ebp),%eax
085ab68d +0xb09:  mov    %eax,(%esp)
085ab690 +0xb0c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ab695 +0xb11:  mov    0x10(%ebp),%edx
085ab698 +0xb14:  lea    0x3d(%edx),%ecx
085ab69b +0xb17:  movl   $0x0,0x24(%esp)
085ab6a3 +0xb1f:  movl   $0x0,0x20(%esp)
085ab6ab +0xb27:  mov    %ebx,0x1c(%esp)
085ab6af +0xb2b:  movl   $0x8,0x18(%esp)
085ab6b7 +0xb33:  mov    %esi,0x14(%esp)
085ab6bb +0xb37:  lea    -0x19a(%ebp),%edx
085ab6c1 +0xb3d:  mov    %edx,0x10(%esp)
085ab6c5 +0xb41:  mov    %eax,0xc(%esp)
085ab6c9 +0xb45:  movl   $0x0,0x8(%esp)
085ab6d1 +0xb4d:  mov    %ecx,0x4(%esp)
085ab6d5 +0xb51:  lea    -0x9a(%ebp),%eax
085ab6db +0xb57:  mov    %eax,(%esp)
085ab6de +0xb5a:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
085ab6e3 +0xb5f:  cmpl   $0x0,-0x44(%ebp)
085ab6e7 +0xb63:  jle    085ab727 <+0xba3>
085ab6e9 +0xb65:  mov    0x14(%ebp),%eax
085ab6ec +0xb68:  mov    -0x44(%ebp),%edx
085ab6ef +0xb6b:  mov    %edx,0x8(%esp)
085ab6f3 +0xb6f:  lea    -0x68(%ebp),%edx
085ab6f6 +0xb72:  mov    %edx,0x4(%esp)
085ab6fa +0xb76:  mov    %eax,(%esp)
085ab6fd +0xb79:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
085ab702 +0xb7e:  mov    0x14(%ebp),%eax
085ab705 +0xb81:  movl   $0x1,0x4(%esp)
085ab70d +0xb89:  mov    %eax,(%esp)
085ab710 +0xb8c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ab715 +0xb91:  mov    0x14(%ebp),%eax
085ab718 +0xb94:  mov    %eax,0x4(%esp)
085ab71c +0xb98:  mov    0xc(%ebp),%eax
085ab71f +0xb9b:  mov    %eax,(%esp)
085ab722 +0xb9e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085ab727 +0xba3:  mov    -0x44(%ebp),%eax
085ab72a +0xba6:  add    $0x1fc,%esp
085ab730 +0xbac:  pop    %ebx
085ab731 +0xbad:  pop    %esi
085ab732 +0xbae:  pop    %edi
085ab733 +0xbaf:  pop    %ebp
085ab734 +0xbb0:  ret
085ab735 +0xbb1:  nop
```

## 反编译 C

```c
// CParty::_putItemIntoUser @ 0x85aab84

/* CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&) */

int __thiscall
CParty::_putItemIntoUser(CParty *this,CUser *param_1,Inven_Item *param_2,PacketGuard *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  CValueStatistic *pCVar11;
  CCirculationStatistic *pCVar12;
  CAvatarItemMgr *pCVar13;
  char *pcVar14;
  CDataManager *pCVar15;
  Store *this_00;
  int *piVar16;
  size_t sVar17;
  char local_19e [256];
  char local_9e [21];
  char local_89 [21];
  int local_74;
  stAvatarExpansionInfo_t local_70 [4];
  int local_6c;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  CDungeon *local_3c;
  char local_35;
  int local_34;
  Inven_Item *local_30;
  CItem *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  
  local_48 = 0;
  local_44 = 0;
  InterfacePacketBuf::clear((InterfacePacketBuf *)param_3);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_3,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,local_44);
  local_6c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,local_48);
  iVar3 = Inven_Item::get_add_info(param_2);
  if (0 < iVar3) {
    iVar3 = Inven_Item::get_add_info(param_2);
    if (499999 < iVar3) {
      uVar4 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
      uVar5 = get_member_count(this);
      uVar6 = Inven_Item::get_add_info(param_2);
      uVar8 = *(undefined4 *)(this + 0xcb8);
      cMyTrace::cMyTrace(local_68,"int CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)",
                         0x232d,4);
      cMyTrace::operator()
                (local_68,"Dungeon(%d) reward money(%d) on %d\' party member with difficulty %d",
                 uVar8,uVar6,uVar5,uVar4);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      uVar8 = CInventory::get_money(pCVar7);
      uVar4 = Inven_Item::get_add_info(param_2);
      uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar9 = CUser::get_acc_id(param_1);
      uVar6 = NumberToString(uVar9,0);
      cMyTrace::cMyTrace(local_58,"int CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)",
                         0x2337,4);
      cMyTrace::operator()
                (local_58,"User(%s) Charac(%s) gain money(%d), old money is %d.",uVar6,uVar5,uVar4,
                 uVar8);
    }
    uVar8 = Inven_Item::get_add_info(param_2);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_34 = CInventory::gain_money(pCVar7,uVar8,5,1,0);
    iVar10 = Inven_Item::get_add_info(param_2);
    iVar3 = local_34;
    if (local_34 < iVar10) {
      uVar8 = Inven_Item::get_add_info(param_2);
      CUser::SendMoneyFullReason(param_1,0,uVar8,iVar3);
    }
    iVar3 = local_34;
    pCVar11 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar11,3,param_1,iVar3);
    iVar3 = local_34;
    if (*(int *)(this + 0xcac) != 0) {
      if (*(char *)(*(int *)(this + 0xcac) + 0x89e) == '\0') {
        pCVar12 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
        CCirculationStatistic::AddCirculationStatistic(pCVar12,1,param_1,iVar3);
      }
      else {
        pCVar12 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
        CCirculationStatistic::AddCirculationStatistic(pCVar12,0xf,param_1,iVar3);
      }
    }
    iVar3 = Inven_Item::get_add_info(param_2);
    CUser::saveTaxMoneyForUpperMember(param_1,iVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,0);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar3 = CInventory::get_money(pCVar7);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_3,(Inven_Item *)g_emptySlot);
    local_48 = local_48 + 1;
  }
  iVar3 = local_44;
  iVar10 = Inven_Item::GetItemSpace(param_2 + 0x3d);
  if (iVar3 != iVar10) {
    if (0 < local_48) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,&local_6c,local_48);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)param_3,true);
      CUser::Send(param_1,param_3);
    }
    local_48 = 0;
    InterfacePacketBuf::clear((InterfacePacketBuf *)param_3);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)param_3,0,0xe);
    iVar3 = Inven_Item::GetItemSpace(param_2 + 0x3d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,iVar3);
    local_6c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,local_48);
  }
  uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_40 = CInventory::insertItemIntoInventory
                       (uVar8,*(undefined4 *)(param_2 + 0x3d),*(undefined4 *)(param_2 + 0x41),
                        *(undefined4 *)(param_2 + 0x45),*(undefined4 *)(param_2 + 0x49),
                        *(undefined4 *)(param_2 + 0x4d),*(undefined4 *)(param_2 + 0x51),
                        *(undefined4 *)(param_2 + 0x55),*(undefined4 *)(param_2 + 0x59),
                        *(undefined4 *)(param_2 + 0x5d),*(undefined4 *)(param_2 + 0x61),
                        *(undefined4 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x69),
                        *(undefined4 *)(param_2 + 0x6d),*(undefined4 *)(param_2 + 0x71),
                        *(undefined4 *)(param_2 + 0x75),param_2[0x79],0xb,1,1);
  local_3c = *(CDungeon **)(this + 0xcac);
  local_35 = '\0';
  if (local_3c != (CDungeon *)0x0) {
    local_35 = CDungeon::isTournamentDungeon(local_3c);
  }
  if (local_40 < 1) {
    piVar16 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x41);
    cVar2 = (**(code **)(*piVar16 + 0x34))(piVar16,0);
    if ((((cVar2 == '\0') || (*(int *)(param_2 + 0x3f) == 0)) || (*(int *)(param_2 + 0x3f) == -1))
       || (local_35 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(param_2 + 0x3f);
      pCVar15 = (CDataManager *)G_CDataManager();
      local_24 = CDataManager::find_item(pCVar15,iVar3);
      if (local_24 != 0) {
        pcVar14 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                     "game_server_msg_155",(bool *)0x0);
        strncpy(local_89,pcVar14,0x14);
        pcVar14 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                     "game_server_msg_104",(bool *)0x0);
        strncpy(local_19e,pcVar14,0xff);
        uVar8 = CUser::GetServerGroup(param_1);
        sVar17 = strlen(local_19e);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_89,param_2 + 0x3d,0,uVar4,local_19e,sVar17,8,uVar8,0,0);
      }
    }
    else if (((*(int *)(param_2 + 0x3f) != 0) && (*(int *)(param_2 + 0x3f) != -1)) &&
            (local_35 != '\0')) {
      iVar3 = *(int *)(param_2 + 0x3f);
      pCVar15 = (CDataManager *)G_CDataManager();
      local_20 = CDataManager::find_item(pCVar15,iVar3);
      if (local_20 != 0) {
        pcVar14 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                     "game_server_msg_250",(bool *)0x0);
        strncpy(local_9e,pcVar14,0x14);
        pcVar14 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                     "game_server_msg_104",(bool *)0x0);
        strncpy(local_19e,pcVar14,0xff);
        uVar8 = CUser::GetServerGroup(param_1);
        sVar17 = strlen(local_19e);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_9e,param_2 + 0x3d,0,uVar4,local_19e,sVar17,8,uVar8,0,0);
      }
    }
  }
  else {
    iVar3 = Inven_Item::GetInventoryType(param_2 + 0x3d);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_30 = (Inven_Item *)CInventory::GetInvenRef(pCVar7,iVar3,local_40);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,local_40);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,*(int *)(local_30 + 2));
    iVar3 = Inven_Item::get_add_info(local_30);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar3);
    uVar9 = Inven_Item::GetItemAttr(local_30);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,uVar9 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,(uint)*(ushort *)(local_30 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(uint)(byte)*local_30);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,*(int *)(local_30 + 0xd));
    uVar9 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_30 + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,uVar9 & 0xff);
    uVar9 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_30 + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,uVar9 & 0xffff);
    cVar2 = Inven_Item::isAvatarItemType(local_30);
    if (cVar2 != '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,0x1e);
      iVar3 = Inven_Item::get_add_info(local_30);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pCVar13 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
      pcVar14 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar13,iVar3);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_3,pcVar14,0x1e);
      iVar3 = Inven_Item::get_add_info(local_30);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pCVar13 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
      local_28 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar13,iVar3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,4);
      if (local_28 == (char *)0x0) {
        stAvatarExpansionInfo_t::init(local_70);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_3,(char *)local_70,4);
      }
      else {
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_3,local_28,4);
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_3,local_30);
    local_48 = local_48 + 1;
    iVar3 = *(int *)(param_2 + 0x3f);
    pCVar15 = (CDataManager *)G_CDataManager();
    local_2c = (CItem *)CDataManager::find_item(pCVar15,iVar3);
    if (local_2c != (CItem *)0x0) {
      local_74 = 0;
      uVar8 = *(undefined4 *)(param_2 + 0x44);
      this_00 = (Store *)G_Store();
      Store::GetSellItemPrice(this_00,param_2 + 0x3d,local_2c,(short)uVar8,false,&local_74);
      iVar3 = local_74;
      pCVar11 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar11,4,param_1,iVar3);
    }
    if ((param_2[0x3e] == (Inven_Item)0x1) && (local_2c != (CItem *)0x0)) {
      iVar3 = CItem::get_grade(local_2c);
      iVar10 = CItem::get_rarity(local_2c);
      CLuckPoint::UseLuckPoint(param_1,(uint)(byte)param_2[0x3e],iVar10,iVar3);
    }
  }
  if (0 < local_48) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,&local_6c,local_48);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)param_3,true);
    CUser::Send(param_1,param_3);
  }
  return local_48;
}
```
