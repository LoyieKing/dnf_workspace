# process

`_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081bdc7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bdc7e  _ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081bdc7e, 0x081be209]
081bdc7e +0x000:  push   %ebp
081bdc7f +0x001:  mov    %esp,%ebp
081bdc81 +0x003:  push   %edi
081bdc82 +0x004:  push   %esi
081bdc83 +0x005:  push   %ebx
081bdc84 +0x006:  sub    $0x8c,%esp
081bdc8a +0x00c:  mov    0x10(%ebp),%eax
081bdc8d +0x00f:  mov    %eax,0x8(%esp)
081bdc91 +0x013:  mov    0xc(%ebp),%eax
081bdc94 +0x016:  mov    %eax,0x4(%esp)
081bdc98 +0x01a:  mov    0x8(%ebp),%eax
081bdc9b +0x01d:  mov    %eax,(%esp)
081bdc9e +0x020:  call   081be46a <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_BuyItem::check_error(CUser*, MSG_BASE&)
081bdca3 +0x025:  mov    %eax,-0x30(%ebp)
081bdca6 +0x028:  cmpl   $0x0,-0x30(%ebp)
081bdcaa +0x02c:  jle    081bdcd3 <+0x55>
081bdcac +0x02e:  mov    -0x30(%ebp),%eax
081bdcaf +0x031:  movzbl %al,%eax
081bdcb2 +0x034:  mov    %eax,0x8(%esp)
081bdcb6 +0x038:  movl   $0x15,0x4(%esp)
081bdcbe +0x040:  mov    0xc(%ebp),%eax
081bdcc1 +0x043:  mov    %eax,(%esp)
081bdcc4 +0x046:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bdcc9 +0x04b:  mov    $0xffffffff,%eax
081bdcce +0x050:  jmp    081be1ff <+0x581>
081bdcd3 +0x055:  cmpl   $0x0,-0x30(%ebp)
081bdcd7 +0x059:  jns    081bdd24 <+0xa6>
081bdcd9 +0x05b:  movl   $0x15,0x8(%esp)
081bdce1 +0x063:  movl   $0x15,0x4(%esp)
081bdce9 +0x06b:  mov    0xc(%ebp),%eax
081bdcec +0x06e:  mov    %eax,(%esp)
081bdcef +0x071:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bdcf4 +0x076:  mov    0xc(%ebp),%eax
081bdcf7 +0x079:  mov    %eax,(%esp)
081bdcfa +0x07c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bdcff +0x081:  mov    %eax,0xc(%esp)
081bdd03 +0x085:  movl   $0x0,0x8(%esp)
081bdd0b +0x08d:  movl   $&_ZZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081bdd13 +0x095:  movl   $0x1a1,(%esp)
081bdd1a +0x09c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bdd1f +0x0a1:  jmp    081be1ff <+0x581>
081bdd24 +0x0a6:  mov    0x14(%ebp),%eax
081bdd27 +0x0a9:  mov    %eax,-0x2c(%ebp)
081bdd2a +0x0ac:  mov    0x10(%ebp),%eax
081bdd2d +0x0af:  mov    %eax,-0x28(%ebp)
081bdd30 +0x0b2:  mov    -0x2c(%ebp),%eax
081bdd33 +0x0b5:  mov    %eax,0xc(%esp)
081bdd37 +0x0b9:  mov    -0x28(%ebp),%eax
081bdd3a +0x0bc:  mov    %eax,0x8(%esp)
081bdd3e +0x0c0:  mov    0xc(%ebp),%eax
081bdd41 +0x0c3:  mov    %eax,0x4(%esp)
081bdd45 +0x0c7:  mov    0x8(%ebp),%eax
081bdd48 +0x0ca:  mov    %eax,(%esp)
081bdd4b +0x0cd:  call   081be658 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam>  ; DisPatcher_BuyItem::get_data(CUser*, MSG_BUY_ITEM&, BuyItemParam&)
081bdd50 +0x0d2:  mov    %eax,-0x30(%ebp)
081bdd53 +0x0d5:  cmpl   $0x0,-0x30(%ebp)
081bdd57 +0x0d9:  setne  %al
081bdd5a +0x0dc:  test   %al,%al
081bdd5c +0x0de:  je     081bdd85 <+0x107>
081bdd5e +0x0e0:  mov    -0x30(%ebp),%eax
081bdd61 +0x0e3:  movzbl %al,%eax
081bdd64 +0x0e6:  mov    %eax,0x8(%esp)
081bdd68 +0x0ea:  movl   $0x15,0x4(%esp)
081bdd70 +0x0f2:  mov    0xc(%ebp),%eax
081bdd73 +0x0f5:  mov    %eax,(%esp)
081bdd76 +0x0f8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bdd7b +0x0fd:  mov    $0xffffffff,%eax
081bdd80 +0x102:  jmp    081be1ff <+0x581>
081bdd85 +0x107:  movl   $0x29f2a7,-0x24(%ebp)
081bdd8c +0x10e:  mov    -0x2c(%ebp),%eax
081bdd8f +0x111:  mov    0x98(%eax),%eax
081bdd95 +0x117:  cmp    $0x29f2a7,%eax
081bdd9a +0x11c:  jne    081bde2f <+0x1b1>
081bdda0 +0x122:  mov    0xc(%ebp),%eax
081bdda3 +0x125:  mov    %eax,(%esp)
081bdda6 +0x128:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081bddab +0x12d:  cmp    $0x3,%eax
081bddae +0x130:  sete   %al
081bddb1 +0x133:  test   %al,%al
081bddb3 +0x135:  je     081bddde <+0x160>
081bddb5 +0x137:  movl   $0x0,0xc(%esp)
081bddbd +0x13f:  movl   $0x0,0x8(%esp)
081bddc5 +0x147:  movl   $&_ZZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081bddcd +0x14f:  movl   $0x1b4,(%esp)
081bddd4 +0x156:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bddd9 +0x15b:  jmp    081be1ff <+0x581>
081bddde +0x160:  mov    0xc(%ebp),%eax
081bdde1 +0x163:  mov    %eax,(%esp)
081bdde4 +0x166:  call   0822fe94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x553e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x553e
081bdde9 +0x16b:  movswl %ax,%ebx
081bddec +0x16e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081bddf1 +0x173:  mov    %ebx,0x4(%esp)
081bddf5 +0x177:  mov    %eax,(%esp)
081bddf8 +0x17a:  call   082959fa <_ZN12CGameManager12getBossTowerEi>  ; CGameManager::getBossTower(int)
081bddfd +0x17f:  mov    %eax,-0x1c(%ebp)
081bde00 +0x182:  cmpl   $0x0,-0x1c(%ebp)
081bde04 +0x186:  jne    081bde2f <+0x1b1>
081bde06 +0x188:  movl   $0x0,0xc(%esp)
081bde0e +0x190:  movl   $0x0,0x8(%esp)
081bde16 +0x198:  movl   $&_ZZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081bde1e +0x1a0:  movl   $0x1b8,(%esp)
081bde25 +0x1a7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bde2a +0x1ac:  jmp    081be1ff <+0x581>
081bde2f +0x1b1:  mov    -0x28(%ebp),%eax
081bde32 +0x1b4:  mov    0xd(%eax),%edx
081bde35 +0x1b7:  mov    -0x2c(%ebp),%eax
081bde38 +0x1ba:  mov    %edx,0x6(%eax)
081bde3b +0x1bd:  mov    -0x2c(%ebp),%eax
081bde3e +0x1c0:  mov    0xa8(%eax),%eax
081bde44 +0x1c6:  mov    (%eax),%eax
081bde46 +0x1c8:  add    $0x8,%eax
081bde49 +0x1cb:  mov    (%eax),%edx
081bde4b +0x1cd:  mov    -0x2c(%ebp),%eax
081bde4e +0x1d0:  lea    0x4(%eax),%ecx
081bde51 +0x1d3:  mov    -0x2c(%ebp),%eax
081bde54 +0x1d6:  mov    0xa8(%eax),%eax
081bde5a +0x1dc:  mov    %ecx,0x4(%esp)
081bde5e +0x1e0:  mov    %eax,(%esp)
081bde61 +0x1e3:  call   *%edx
081bde63 +0x1e5:  mov    -0x2c(%ebp),%eax
081bde66 +0x1e8:  mov    0xa8(%eax),%eax
081bde6c +0x1ee:  mov    (%eax),%eax
081bde6e +0x1f0:  add    $0x14,%eax
081bde71 +0x1f3:  mov    (%eax),%edx
081bde73 +0x1f5:  mov    -0x2c(%ebp),%eax
081bde76 +0x1f8:  mov    0xa8(%eax),%eax
081bde7c +0x1fe:  mov    %eax,(%esp)
081bde7f +0x201:  call   *%edx
081bde81 +0x203:  xor    $0x1,%eax
081bde84 +0x206:  test   %al,%al
081bde86 +0x208:  je     081bdeb4 <+0x236>
081bde88 +0x20a:  mov    -0x2c(%ebp),%eax
081bde8b +0x20d:  mov    0xa8(%eax),%eax
081bde91 +0x213:  mov    (%eax),%eax
081bde93 +0x215:  add    $0x10,%eax
081bde96 +0x218:  mov    (%eax),%edx
081bde98 +0x21a:  mov    -0x2c(%ebp),%eax
081bde9b +0x21d:  mov    0xa8(%eax),%eax
081bdea1 +0x223:  mov    %eax,(%esp)
081bdea4 +0x226:  call   *%edx
081bdea6 +0x228:  xor    $0x1,%eax
081bdea9 +0x22b:  test   %al,%al
081bdeab +0x22d:  je     081bdeb4 <+0x236>
081bdead +0x22f:  mov    $0x1,%eax
081bdeb2 +0x234:  jmp    081bdeb9 <+0x23b>
081bdeb4 +0x236:  mov    $0x0,%eax
081bdeb9 +0x23b:  test   %al,%al
081bdebb +0x23d:  je     081bdecb <+0x24d>
081bdebd +0x23f:  mov    -0x28(%ebp),%eax
081bdec0 +0x242:  mov    0x11(%eax),%eax
081bdec3 +0x245:  mov    %eax,%edx
081bdec5 +0x247:  mov    -0x2c(%ebp),%eax
081bdec8 +0x24a:  mov    %edx,0xb(%eax)
081bdecb +0x24d:  mov    0xc(%ebp),%eax
081bdece +0x250:  mov    %eax,(%esp)
081bded1 +0x253:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081bded6 +0x258:  mov    %eax,%edx
081bded8 +0x25a:  movl   $0x0,0x4c(%esp)
081bdee0 +0x262:  movl   $0x1,0x48(%esp)
081bdee8 +0x26a:  movl   $0x0,0x44(%esp)
081bdef0 +0x272:  mov    -0x2c(%ebp),%eax
081bdef3 +0x275:  mov    0x4(%eax),%ecx
081bdef6 +0x278:  mov    %ecx,0x4(%esp)
081bdefa +0x27c:  mov    0x8(%eax),%ecx
081bdefd +0x27f:  mov    %ecx,0x8(%esp)
081bdf01 +0x283:  mov    0xc(%eax),%ecx
081bdf04 +0x286:  mov    %ecx,0xc(%esp)
081bdf08 +0x28a:  mov    0x10(%eax),%ecx
081bdf0b +0x28d:  mov    %ecx,0x10(%esp)
081bdf0f +0x291:  mov    0x14(%eax),%ecx
081bdf12 +0x294:  mov    %ecx,0x14(%esp)
081bdf16 +0x298:  mov    0x18(%eax),%ecx
081bdf19 +0x29b:  mov    %ecx,0x18(%esp)
081bdf1d +0x29f:  mov    0x1c(%eax),%ecx
081bdf20 +0x2a2:  mov    %ecx,0x1c(%esp)
081bdf24 +0x2a6:  mov    0x20(%eax),%ecx
081bdf27 +0x2a9:  mov    %ecx,0x20(%esp)
081bdf2b +0x2ad:  mov    0x24(%eax),%ecx
081bdf2e +0x2b0:  mov    %ecx,0x24(%esp)
081bdf32 +0x2b4:  mov    0x28(%eax),%ecx
081bdf35 +0x2b7:  mov    %ecx,0x28(%esp)
081bdf39 +0x2bb:  mov    0x2c(%eax),%ecx
081bdf3c +0x2be:  mov    %ecx,0x2c(%esp)
081bdf40 +0x2c2:  mov    0x30(%eax),%ecx
081bdf43 +0x2c5:  mov    %ecx,0x30(%esp)
081bdf47 +0x2c9:  mov    0x34(%eax),%ecx
081bdf4a +0x2cc:  mov    %ecx,0x34(%esp)
081bdf4e +0x2d0:  mov    0x38(%eax),%ecx
081bdf51 +0x2d3:  mov    %ecx,0x38(%esp)
081bdf55 +0x2d7:  mov    0x3c(%eax),%ecx
081bdf58 +0x2da:  mov    %ecx,0x3c(%esp)
081bdf5c +0x2de:  movzbl 0x40(%eax),%eax
081bdf60 +0x2e2:  mov    %al,0x40(%esp)
081bdf64 +0x2e6:  mov    %edx,(%esp)
081bdf67 +0x2e9:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081bdf6c +0x2ee:  mov    -0x2c(%ebp),%edx
081bdf6f +0x2f1:  mov    %eax,0xa0(%edx)
081bdf75 +0x2f7:  mov    -0x2c(%ebp),%eax
081bdf78 +0x2fa:  mov    0xa0(%eax),%eax
081bdf7e +0x300:  test   %eax,%eax
081bdf80 +0x302:  jns    081bdfa7 <+0x329>
081bdf82 +0x304:  movl   $0x4,0x8(%esp)
081bdf8a +0x30c:  movl   $0x15,0x4(%esp)
081bdf92 +0x314:  mov    0xc(%ebp),%eax
081bdf95 +0x317:  mov    %eax,(%esp)
081bdf98 +0x31a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bdf9d +0x31f:  mov    $0xffffffff,%eax
081bdfa2 +0x324:  jmp    081be1ff <+0x581>
081bdfa7 +0x329:  mov    -0x2c(%ebp),%eax
081bdfaa +0x32c:  mov    0x6(%eax),%eax
081bdfad +0x32f:  mov    %eax,%ebx
081bdfaf +0x331:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081bdfb4 +0x336:  mov    %ebx,0x4(%esp)
081bdfb8 +0x33a:  mov    %eax,(%esp)
081bdfbb +0x33d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081bdfc0 +0x342:  mov    %eax,-0x20(%ebp)
081bdfc3 +0x345:  cmpl   $0x0,-0x20(%ebp)
081bdfc7 +0x349:  jne    081bdfee <+0x370>
081bdfc9 +0x34b:  movl   $0x13,0x8(%esp)
081bdfd1 +0x353:  movl   $0x15,0x4(%esp)
081bdfd9 +0x35b:  mov    0xc(%ebp),%eax
081bdfdc +0x35e:  mov    %eax,(%esp)
081bdfdf +0x361:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bdfe4 +0x366:  mov    $0xffffffff,%eax
081bdfe9 +0x36b:  jmp    081be1ff <+0x581>
081bdfee +0x370:  mov    -0x20(%ebp),%eax
081bdff1 +0x373:  mov    (%eax),%eax
081bdff3 +0x375:  add    $0x14,%eax
081bdff6 +0x378:  mov    (%eax),%edx
081bdff8 +0x37a:  mov    -0x20(%ebp),%eax
081bdffb +0x37d:  mov    %eax,(%esp)
081bdffe +0x380:  call   *%edx
081be000 +0x382:  test   %al,%al
081be002 +0x384:  je     081be022 <+0x3a4>
081be004 +0x386:  mov    -0x20(%ebp),%eax
081be007 +0x389:  mov    (%eax),%eax
081be009 +0x38b:  add    $0xc,%eax
081be00c +0x38e:  mov    (%eax),%edx
081be00e +0x390:  mov    -0x20(%ebp),%eax
081be011 +0x393:  mov    %eax,(%esp)
081be014 +0x396:  call   *%edx
081be016 +0x398:  cmp    $0x16,%eax
081be019 +0x39b:  jne    081be022 <+0x3a4>
081be01b +0x39d:  mov    $0x1,%eax
081be020 +0x3a2:  jmp    081be027 <+0x3a9>
081be022 +0x3a4:  mov    $0x0,%eax
081be027 +0x3a9:  test   %al,%al
081be029 +0x3ab:  je     081be08d <+0x40f>
081be02b +0x3ad:  mov    -0x20(%ebp),%eax
081be02e +0x3b0:  mov    %eax,(%esp)
081be031 +0x3b3:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
081be036 +0x3b8:  mov    %eax,%esi
081be038 +0x3ba:  mov    -0x20(%ebp),%eax
081be03b +0x3bd:  mov    %eax,(%esp)
081be03e +0x3c0:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
081be043 +0x3c5:  mov    %eax,%ebx
081be045 +0x3c7:  mov    -0x2c(%ebp),%eax
081be048 +0x3ca:  mov    0xa0(%eax),%edi
081be04e +0x3d0:  mov    -0x2c(%ebp),%eax
081be051 +0x3d3:  add    $0x4,%eax
081be054 +0x3d6:  mov    %eax,-0x3c(%ebp)
081be057 +0x3d9:  mov    0xc(%ebp),%eax
081be05a +0x3dc:  mov    %eax,(%esp)
081be05d +0x3df:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081be062 +0x3e4:  mov    %eax,(%esp)
081be065 +0x3e7:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081be06a +0x3ec:  mov    %esi,0x14(%esp)
081be06e +0x3f0:  mov    %ebx,0x10(%esp)
081be072 +0x3f4:  movl   $0x0,0xc(%esp)
081be07a +0x3fc:  mov    %edi,0x8(%esp)
081be07e +0x400:  mov    -0x3c(%ebp),%edx
081be081 +0x403:  mov    %edx,0x4(%esp)
081be085 +0x407:  mov    %eax,(%esp)
081be088 +0x40a:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
081be08d +0x40f:  mov    -0x2c(%ebp),%eax
081be090 +0x412:  mov    0x94(%eax),%edi
081be096 +0x418:  mov    -0x2c(%ebp),%eax
081be099 +0x41b:  mov    0x90(%eax),%esi
081be09f +0x421:  mov    -0x2c(%ebp),%eax
081be0a2 +0x424:  mov    0xa8(%eax),%ebx
081be0a8 +0x42a:  mov    0xc(%ebp),%eax
081be0ab +0x42d:  mov    %eax,(%esp)
081be0ae +0x430:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081be0b3 +0x435:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081be0b9 +0x43b:  mov    %eax,0x4(%esp)
081be0bd +0x43f:  mov    %edx,(%esp)
081be0c0 +0x442:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081be0c5 +0x447:  mov    %edi,0x10(%esp)
081be0c9 +0x44b:  mov    %esi,0xc(%esp)
081be0cd +0x44f:  mov    %ebx,0x8(%esp)
081be0d1 +0x453:  mov    0xc(%ebp),%edx
081be0d4 +0x456:  mov    %edx,0x4(%esp)
081be0d8 +0x45a:  mov    %eax,(%esp)
081be0db +0x45d:  call   0846ef24 <_ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj>  ; CGuildServerProxy::OnBuyItem(CUser*, CItem const*, unsigned int, unsigned int)
081be0e0 +0x462:  mov    -0x2c(%ebp),%eax
081be0e3 +0x465:  mov    0x80(%eax),%eax
081be0e9 +0x46b:  mov    %eax,%ebx
081be0eb +0x46d:  mov    0xc(%ebp),%eax
081be0ee +0x470:  mov    %eax,(%esp)
081be0f1 +0x473:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081be0f6 +0x478:  movl   $0x1,0xc(%esp)
081be0fe +0x480:  movl   $0x0,0x8(%esp)
081be106 +0x488:  mov    %ebx,0x4(%esp)
081be10a +0x48c:  mov    %eax,(%esp)
081be10d +0x48f:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081be112 +0x494:  mov    -0x2c(%ebp),%eax
081be115 +0x497:  mov    0x98(%eax),%eax
081be11b +0x49d:  cmp    $0xffffffff,%eax
081be11e +0x4a0:  je     081be165 <+0x4e7>
081be120 +0x4a2:  mov    -0x2c(%ebp),%eax
081be123 +0x4a5:  mov    0x9c(%eax),%esi
081be129 +0x4ab:  mov    -0x2c(%ebp),%eax
081be12c +0x4ae:  mov    0xa4(%eax),%ebx
081be132 +0x4b4:  mov    0xc(%ebp),%eax
081be135 +0x4b7:  mov    %eax,(%esp)
081be138 +0x4ba:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081be13d +0x4bf:  movl   $0x1,0x14(%esp)
081be145 +0x4c7:  movl   $0x1a,0x10(%esp)
081be14d +0x4cf:  mov    %esi,0xc(%esp)
081be151 +0x4d3:  mov    %ebx,0x8(%esp)
081be155 +0x4d7:  movl   $0x1,0x4(%esp)
081be15d +0x4df:  mov    %eax,(%esp)
081be160 +0x4e2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081be165 +0x4e7:  mov    0xc(%ebp),%eax
081be168 +0x4ea:  mov    %eax,0x8(%esp)
081be16c +0x4ee:  mov    -0x2c(%ebp),%eax
081be16f +0x4f1:  mov    %eax,0x4(%esp)
081be173 +0x4f5:  mov    0x8(%ebp),%eax
081be176 +0x4f8:  mov    %eax,(%esp)
081be179 +0x4fb:  call   081bed44 <_ZN18DisPatcher_BuyItem15_onBuyItemEventERK12BuyItemParamP5CUser>  ; DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam const&, CUser*)
081be17e +0x500:  mov    -0x2c(%ebp),%eax
081be181 +0x503:  mov    %eax,0x8(%esp)
081be185 +0x507:  mov    0xc(%ebp),%eax
081be188 +0x50a:  mov    %eax,0x4(%esp)
081be18c +0x50e:  mov    0x8(%ebp),%eax
081be18f +0x511:  mov    %eax,(%esp)
081be192 +0x514:  call   081bec5e <_ZN18DisPatcher_BuyItem17statistic_processEP5CUserR12BuyItemParam>  ; DisPatcher_BuyItem::statistic_process(CUser*, BuyItemParam&)
081be197 +0x519:  mov    -0x2c(%ebp),%eax
081be19a +0x51c:  mov    0xb(%eax),%ecx
081be19d +0x51f:  mov    -0x2c(%ebp),%eax
081be1a0 +0x522:  mov    0x6(%eax),%eax
081be1a3 +0x525:  mov    %eax,%edx
081be1a5 +0x527:  mov    0xc(%ebp),%eax
081be1a8 +0x52a:  mov    0x796f8(%eax),%eax
081be1ae +0x530:  mov    %ecx,0x8(%esp)
081be1b2 +0x534:  mov    %edx,0x4(%esp)
081be1b6 +0x538:  mov    %eax,(%esp)
081be1b9 +0x53b:  call   084ba1f4 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii>  ; HistoryLog::WriteBuyItem(_IO_FILE*, int, int)
081be1be +0x540:  mov    -0x2c(%ebp),%eax
081be1c1 +0x543:  mov    0xb(%eax),%edx
081be1c4 +0x546:  mov    -0x2c(%ebp),%eax
081be1c7 +0x549:  mov    0x6(%eax),%eax
081be1ca +0x54c:  mov    %edx,0x8(%esp)
081be1ce +0x550:  mov    %eax,0x4(%esp)
081be1d2 +0x554:  mov    0xc(%ebp),%eax
081be1d5 +0x557:  mov    %eax,(%esp)
081be1d8 +0x55a:  call   08692b84 <_ZN5CUser20SendAradEventItemLogEmi>  ; CUser::SendAradEventItemLog(unsigned long, int)
081be1dd +0x55f:  mov    -0x2c(%ebp),%eax
081be1e0 +0x562:  lea    0x4(%eax),%edx
081be1e3 +0x565:  mov    -0x28(%ebp),%eax
081be1e6 +0x568:  mov    0x15(%eax),%eax
081be1e9 +0x56b:  mov    %edx,0x8(%esp)
081be1ed +0x56f:  mov    %eax,0x4(%esp)
081be1f1 +0x573:  mov    0xc(%ebp),%eax
081be1f4 +0x576:  mov    %eax,(%esp)
081be1f7 +0x579:  call   0866463c <_ZN5CUser20eventDeliveryBuyItemEiRK10Inven_Item>  ; CUser::eventDeliveryBuyItem(int, Inven_Item const&)
081be1fc +0x57e:  mov    -0x30(%ebp),%eax
081be1ff +0x581:  add    $0x8c,%esp
081be205 +0x587:  pop    %ebx
081be206 +0x588:  pop    %esi
081be207 +0x589:  pop    %edi
081be208 +0x58a:  pop    %ebp
081be209 +0x58b:  ret
```

## 反编译 C

```c
// DisPatcher_BuyItem::process @ 0x81bdc7e

/* DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_BuyItem::process
          (DisPatcher_BuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  CDataManager *this_00;
  CItem *pCVar8;
  int iVar9;
  int iVar10;
  CInventory *pCVar11;
  CCreatureMgr *this_01;
  CGuildServerProxy *this_02;
  
  uVar5 = check_error(this,param_1,param_2);
  if (0 < (int)uVar5) {
    CUser::SendCmdErrorPacket(param_1,0x15,uVar5 & 0xff);
    return 0xffffffff;
  }
  if ((int)uVar5 < 0) {
    CUser::SendCmdErrorPacket(param_1,0x15,0x15);
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x1a1,"virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",
                     0,uVar5);
    return uVar6;
  }
  uVar5 = get_data(this,param_1,(MSG_BUY_ITEM *)param_2,(BuyItemParam *)param_3);
  if (uVar5 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x15,uVar5 & 0xff);
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x98) == 0x29f2a7) {
    iVar7 = CUser::get_state(param_1);
    if (iVar7 == 3) {
      uVar6 = LineFunc(0x1b4,
                       "virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0)
      ;
      return uVar6;
    }
    CUser::getBossTowerIndex(param_1);
    iVar7 = G_CGameManager();
    iVar7 = CGameManager::getBossTower(iVar7);
    if (iVar7 == 0) {
      uVar6 = LineFunc(0x1b8,
                       "virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0)
      ;
      return uVar6;
    }
  }
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_2 + 0xd);
  (**(code **)(**(int **)(param_3 + 0xa8) + 8))(*(undefined4 *)(param_3 + 0xa8),param_3 + 4);
  cVar4 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x14))(*(undefined4 *)(param_3 + 0xa8));
  if ((cVar4 == '\x01') ||
     (cVar4 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x10))(*(undefined4 *)(param_3 + 0xa8)),
     cVar4 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(param_2 + 0x11);
  }
  uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  uVar6 = CInventory::insertItemIntoInventory
                    (uVar6,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),
                     *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),
                     *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                     *(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),
                     *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
                     *(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
                     *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                     *(undefined4 *)(param_3 + 0x3c),param_3[0x40],0,1,0);
  *(undefined4 *)(param_3 + 0xa0) = uVar6;
  if (-1 < *(int *)(param_3 + 0xa0)) {
    iVar7 = *(int *)(param_3 + 6);
    this_00 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItem *)CDataManager::find_item(this_00,iVar7);
    if (pCVar8 != (CItem *)0x0) {
      cVar4 = (**(code **)(*(int *)pCVar8 + 0x14))(pCVar8);
      if ((cVar4 == '\0') || (iVar7 = (**(code **)(*(int *)pCVar8 + 0xc))(pCVar8), iVar7 != 0x16)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar9 = CItem::getExpirationDate(pCVar8);
        iVar10 = CItem::getUsablePeriod(pCVar8);
        iVar7 = *(int *)(param_3 + 0xa0);
        pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar11);
        user_creature::CCreatureMgr::InsertCreatureItem
                  (this_01,(Inven_Item *)(param_3 + 4),iVar7,0,iVar10,iVar9);
      }
      uVar5 = *(uint *)(param_3 + 0x94);
      uVar1 = *(uint *)(param_3 + 0x90);
      pCVar8 = *(CItem **)(param_3 + 0xa8);
      uVar6 = CUser::GetServerGroup(param_1);
      this_02 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar6);
      CGuildServerProxy::OnBuyItem(this_02,param_1,pCVar8,uVar1,uVar5);
      uVar6 = *(undefined4 *)(param_3 + 0x80);
      pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar11,uVar6,0,1);
      if (*(int *)(param_3 + 0x98) != -1) {
        uVar6 = *(undefined4 *)(param_3 + 0x9c);
        uVar2 = *(undefined4 *)(param_3 + 0xa4);
        pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::delete_item(pCVar11,1,uVar2,uVar6,0x1a,1);
      }
      _onBuyItemEvent((BuyItemParam *)this,(CUser *)param_3);
      statistic_process(this,param_1,(BuyItemParam *)param_3);
      HistoryLog::WriteBuyItem
                (*(_IO_FILE **)(param_1 + 0x796f8),*(int *)(param_3 + 6),*(int *)(param_3 + 0xb));
      CUser::SendAradEventItemLog(param_1,*(ulong *)(param_3 + 6),*(int *)(param_3 + 0xb));
      CUser::eventDeliveryBuyItem(param_1,*(int *)(param_2 + 0x15),(Inven_Item *)(param_3 + 4));
      return 0;
    }
    CUser::SendCmdErrorPacket(param_1,0x15,0x13);
    return 0xffffffff;
  }
  CUser::SendCmdErrorPacket(param_1,0x15,4);
  return 0xffffffff;
}
```
