# Redeem_Item

`_ZN5CUser11Redeem_ItemEi`

`CUser::Redeem_Item(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646df2  _ZN5CUser11Redeem_ItemEi
#           CUser::Redeem_Item(int)
# range [0x08646df2, 0x086472bf]
08646df2 +0x000:  push   %ebp
08646df3 +0x001:  mov    %esp,%ebp
08646df5 +0x003:  push   %esi
08646df6 +0x004:  push   %ebx
08646df7 +0x005:  sub    $0x120,%esp
08646dfd +0x00b:  movl   $0x6,0x4(%esp)
08646e05 +0x013:  mov    0x8(%ebp),%eax
08646e08 +0x016:  mov    %eax,(%esp)
08646e0b +0x019:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08646e10 +0x01e:  mov    %eax,-0x18(%ebp)
08646e13 +0x021:  cmpl   $0x0,-0x18(%ebp)
08646e17 +0x025:  jne    08646e3e <+0x4c>
08646e19 +0x027:  movl   $0x3,0x8(%esp)
08646e21 +0x02f:  movl   $0x137,0x4(%esp)
08646e29 +0x037:  mov    0x8(%ebp),%eax
08646e2c +0x03a:  mov    %eax,(%esp)
08646e2f +0x03d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08646e34 +0x042:  mov    $0x0,%ebx
08646e39 +0x047:  jmp    086472b3 <+0x4c1>
08646e3e +0x04c:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08646e43 +0x051:  mov    0x8(%ebp),%edx
08646e46 +0x054:  mov    %edx,0x4(%esp)
08646e4a +0x058:  mov    %eax,(%esp)
08646e4d +0x05b:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
08646e52 +0x060:  test   %al,%al
08646e54 +0x062:  je     08646eef <+0xfd>
08646e5a +0x068:  movl   $0xffffffff,0x4(%esp)
08646e62 +0x070:  mov    0x8(%ebp),%eax
08646e65 +0x073:  mov    %eax,(%esp)
08646e68 +0x076:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08646e6d +0x07b:  mov    %eax,%esi
08646e6f +0x07d:  mov    0x8(%ebp),%eax
08646e72 +0x080:  mov    %eax,(%esp)
08646e75 +0x083:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08646e7a +0x088:  movl   $0x0,0x4(%esp)
08646e82 +0x090:  mov    %eax,(%esp)
08646e85 +0x093:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08646e8a +0x098:  mov    %eax,%ebx
08646e8c +0x09a:  movl   $0x5,0xc(%esp)
08646e94 +0x0a2:  movl   $0x529,0x8(%esp)
08646e9c +0x0aa:  movl   $&_ZZN5CUser11Redeem_ItemEiE19__PRETTY_FUNCTION__,0x4(%esp)
08646ea4 +0x0b2:  lea    -0x7c(%ebp),%eax
08646ea7 +0x0b5:  mov    %eax,(%esp)
08646eaa +0x0b8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08646eaf +0x0bd:  mov    %esi,0xc(%esp)
08646eb3 +0x0c1:  mov    %ebx,0x8(%esp)
08646eb7 +0x0c5:  movl   $"redeem error : trade : m_id(%s)charac_no(%u)",0x4(%esp)
08646ebf +0x0cd:  lea    -0x7c(%ebp),%eax
08646ec2 +0x0d0:  mov    %eax,(%esp)
08646ec5 +0x0d3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08646eca +0x0d8:  movl   $0x3,0x8(%esp)
08646ed2 +0x0e0:  movl   $0x137,0x4(%esp)
08646eda +0x0e8:  mov    0x8(%ebp),%eax
08646edd +0x0eb:  mov    %eax,(%esp)
08646ee0 +0x0ee:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08646ee5 +0x0f3:  mov    $0x0,%ebx
08646eea +0x0f8:  jmp    086472b3 <+0x4c1>
08646eef +0x0fd:  mov    0x8(%ebp),%eax
08646ef2 +0x100:  mov    %eax,(%esp)
08646ef5 +0x103:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08646efa +0x108:  test   %al,%al
08646efc +0x10a:  je     08646f97 <+0x1a5>
08646f02 +0x110:  movl   $0xffffffff,0x4(%esp)
08646f0a +0x118:  mov    0x8(%ebp),%eax
08646f0d +0x11b:  mov    %eax,(%esp)
08646f10 +0x11e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08646f15 +0x123:  mov    %eax,%esi
08646f17 +0x125:  mov    0x8(%ebp),%eax
08646f1a +0x128:  mov    %eax,(%esp)
08646f1d +0x12b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08646f22 +0x130:  movl   $0x0,0x4(%esp)
08646f2a +0x138:  mov    %eax,(%esp)
08646f2d +0x13b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08646f32 +0x140:  mov    %eax,%ebx
08646f34 +0x142:  movl   $0x5,0xc(%esp)
08646f3c +0x14a:  movl   $0x52f,0x8(%esp)
08646f44 +0x152:  movl   $&_ZZN5CUser11Redeem_ItemEiE19__PRETTY_FUNCTION__,0x4(%esp)
08646f4c +0x15a:  lea    -0x6c(%ebp),%eax
08646f4f +0x15d:  mov    %eax,(%esp)
08646f52 +0x160:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08646f57 +0x165:  mov    %esi,0xc(%esp)
08646f5b +0x169:  mov    %ebx,0x8(%esp)
08646f5f +0x16d:  movl   $"redeem error : trade : m_id(%s)charac_no(%u)",0x4(%esp)
08646f67 +0x175:  lea    -0x6c(%ebp),%eax
08646f6a +0x178:  mov    %eax,(%esp)
08646f6d +0x17b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08646f72 +0x180:  movl   $0x3,0x8(%esp)
08646f7a +0x188:  movl   $0x137,0x4(%esp)
08646f82 +0x190:  mov    0x8(%ebp),%eax
08646f85 +0x193:  mov    %eax,(%esp)
08646f88 +0x196:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08646f8d +0x19b:  mov    $0x0,%ebx
08646f92 +0x1a0:  jmp    086472b3 <+0x4c1>
08646f97 +0x1a5:  movl   $0xffffffff,-0x14(%ebp)
08646f9e +0x1ac:  mov    0xc(%ebp),%eax
08646fa1 +0x1af:  mov    %eax,0x4(%esp)
08646fa5 +0x1b3:  mov    -0x18(%ebp),%eax
08646fa8 +0x1b6:  mov    %eax,(%esp)
08646fab +0x1b9:  call   085f7386 <_ZN11Redeem_Item11CRedeemItem12GetItemPriceEi>  ; Redeem_Item::CRedeemItem::GetItemPrice(int)
08646fb0 +0x1be:  mov    %eax,-0x14(%ebp)
08646fb3 +0x1c1:  mov    -0x14(%ebp),%eax
08646fb6 +0x1c4:  shr    $0x1f,%eax
08646fb9 +0x1c7:  test   %al,%al
08646fbb +0x1c9:  je     08646fe2 <+0x1f0>
08646fbd +0x1cb:  movl   $0x3,0x8(%esp)
08646fc5 +0x1d3:  movl   $0x137,0x4(%esp)
08646fcd +0x1db:  mov    0x8(%ebp),%eax
08646fd0 +0x1de:  mov    %eax,(%esp)
08646fd3 +0x1e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08646fd8 +0x1e6:  mov    $0x0,%ebx
08646fdd +0x1eb:  jmp    086472b3 <+0x4c1>
08646fe2 +0x1f0:  mov    0x8(%ebp),%eax
08646fe5 +0x1f3:  mov    %eax,(%esp)
08646fe8 +0x1f6:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08646fed +0x1fb:  cmp    -0x14(%ebp),%eax
08646ff0 +0x1fe:  setl   %al
08646ff3 +0x201:  test   %al,%al
08646ff5 +0x203:  je     0864701c <+0x22a>
08646ff7 +0x205:  movl   $0x46,0x8(%esp)
08646fff +0x20d:  movl   $0x137,0x4(%esp)
08647007 +0x215:  mov    0x8(%ebp),%eax
0864700a +0x218:  mov    %eax,(%esp)
0864700d +0x21b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08647012 +0x220:  mov    $0x0,%ebx
08647017 +0x225:  jmp    086472b3 <+0x4c1>
0864701c +0x22a:  lea    -0xcc(%ebp),%eax
08647022 +0x230:  mov    0xc(%ebp),%edx
08647025 +0x233:  mov    %edx,0x8(%esp)
08647029 +0x237:  mov    -0x18(%ebp),%edx
0864702c +0x23a:  mov    %edx,0x4(%esp)
08647030 +0x23e:  mov    %eax,(%esp)
08647033 +0x241:  call   085f7668 <_ZNK11Redeem_Item11CRedeemItem14GetRedeemInfoREi>  ; Redeem_Item::CRedeemItem::GetRedeemInfoR(int) const
08647038 +0x246:  sub    $0x4,%esp
0864703b +0x249:  lea    -0xcc(%ebp),%eax
08647041 +0x24f:  mov    %eax,-0x10(%ebp)
08647044 +0x252:  mov    -0x10(%ebp),%eax
08647047 +0x255:  mov    %eax,(%esp)
0864704a +0x258:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0864704f +0x25d:  test   %al,%al
08647051 +0x25f:  je     08647078 <+0x286>
08647053 +0x261:  movl   $0x3,0x8(%esp)
0864705b +0x269:  movl   $0x137,0x4(%esp)
08647063 +0x271:  mov    0x8(%ebp),%eax
08647066 +0x274:  mov    %eax,(%esp)
08647069 +0x277:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0864706e +0x27c:  mov    $0x0,%ebx
08647073 +0x281:  jmp    086472b3 <+0x4c1>
08647078 +0x286:  mov    0x8(%ebp),%eax
0864707b +0x289:  mov    %eax,(%esp)
0864707e +0x28c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08647083 +0x291:  mov    %eax,%edx
08647085 +0x293:  movl   $0x1,0x4c(%esp)
0864708d +0x29b:  movl   $0x1,0x48(%esp)
08647095 +0x2a3:  movl   $0x29,0x44(%esp)
0864709d +0x2ab:  mov    -0x10(%ebp),%eax
086470a0 +0x2ae:  mov    (%eax),%ecx
086470a2 +0x2b0:  mov    %ecx,0x4(%esp)
086470a6 +0x2b4:  mov    0x4(%eax),%ecx
086470a9 +0x2b7:  mov    %ecx,0x8(%esp)
086470ad +0x2bb:  mov    0x8(%eax),%ecx
086470b0 +0x2be:  mov    %ecx,0xc(%esp)
086470b4 +0x2c2:  mov    0xc(%eax),%ecx
086470b7 +0x2c5:  mov    %ecx,0x10(%esp)
086470bb +0x2c9:  mov    0x10(%eax),%ecx
086470be +0x2cc:  mov    %ecx,0x14(%esp)
086470c2 +0x2d0:  mov    0x14(%eax),%ecx
086470c5 +0x2d3:  mov    %ecx,0x18(%esp)
086470c9 +0x2d7:  mov    0x18(%eax),%ecx
086470cc +0x2da:  mov    %ecx,0x1c(%esp)
086470d0 +0x2de:  mov    0x1c(%eax),%ecx
086470d3 +0x2e1:  mov    %ecx,0x20(%esp)
086470d7 +0x2e5:  mov    0x20(%eax),%ecx
086470da +0x2e8:  mov    %ecx,0x24(%esp)
086470de +0x2ec:  mov    0x24(%eax),%ecx
086470e1 +0x2ef:  mov    %ecx,0x28(%esp)
086470e5 +0x2f3:  mov    0x28(%eax),%ecx
086470e8 +0x2f6:  mov    %ecx,0x2c(%esp)
086470ec +0x2fa:  mov    0x2c(%eax),%ecx
086470ef +0x2fd:  mov    %ecx,0x30(%esp)
086470f3 +0x301:  mov    0x30(%eax),%ecx
086470f6 +0x304:  mov    %ecx,0x34(%esp)
086470fa +0x308:  mov    0x34(%eax),%ecx
086470fd +0x30b:  mov    %ecx,0x38(%esp)
08647101 +0x30f:  mov    0x38(%eax),%ecx
08647104 +0x312:  mov    %ecx,0x3c(%esp)
08647108 +0x316:  movzbl 0x3c(%eax),%eax
0864710c +0x31a:  mov    %al,0x40(%esp)
08647110 +0x31e:  mov    %edx,(%esp)
08647113 +0x321:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08647118 +0x326:  mov    %eax,-0xc(%ebp)
0864711b +0x329:  cmpl   $0x0,-0xc(%ebp)
0864711f +0x32d:  jns    08647146 <+0x354>
08647121 +0x32f:  movl   $0x4,0x8(%esp)
08647129 +0x337:  movl   $0x137,0x4(%esp)
08647131 +0x33f:  mov    0x8(%ebp),%eax
08647134 +0x342:  mov    %eax,(%esp)
08647137 +0x345:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0864713c +0x34a:  mov    $0x0,%ebx
08647141 +0x34f:  jmp    086472b3 <+0x4c1>
08647146 +0x354:  mov    -0x8c(%ebp),%ebx
0864714c +0x35a:  mov    0x8(%ebp),%eax
0864714f +0x35d:  mov    %eax,(%esp)
08647152 +0x360:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08647157 +0x365:  movl   $0x1,0xc(%esp)
0864715f +0x36d:  movl   $0x25,0x8(%esp)
08647167 +0x375:  mov    %ebx,0x4(%esp)
0864716b +0x379:  mov    %eax,(%esp)
0864716e +0x37c:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08647173 +0x381:  mov    -0x10(%ebp),%eax
08647176 +0x384:  mov    0x2(%eax),%eax
08647179 +0x387:  mov    %eax,%ebx
0864717b +0x389:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08647180 +0x38e:  mov    %ebx,0x4(%esp)
08647184 +0x392:  mov    %eax,(%esp)
08647187 +0x395:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0864718c +0x39a:  mov    %eax,(%esp)
0864718f +0x39d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08647194 +0x3a2:  test   %al,%al
08647196 +0x3a4:  je     086471bf <+0x3cd>
08647198 +0x3a6:  mov    -0x10(%ebp),%eax
0864719b +0x3a9:  mov    0x7(%eax),%edx
0864719e +0x3ac:  mov    -0x10(%ebp),%eax
086471a1 +0x3af:  mov    0x2(%eax),%eax
086471a4 +0x3b2:  mov    0x8(%ebp),%ecx
086471a7 +0x3b5:  add    $0x79700,%ecx
086471ad +0x3bb:  mov    %edx,0x8(%esp)
086471b1 +0x3bf:  mov    %eax,0x4(%esp)
086471b5 +0x3c3:  mov    %ecx,(%esp)
086471b8 +0x3c6:  call   086869bc <_ZN15cUserHistoryLog13RedeemItemDelEii>  ; cUserHistoryLog::RedeemItemDel(int, int)
086471bd +0x3cb:  jmp    086471e2 <+0x3f0>
086471bf +0x3cd:  mov    -0x10(%ebp),%eax
086471c2 +0x3d0:  mov    0x2(%eax),%eax
086471c5 +0x3d3:  mov    0x8(%ebp),%edx
086471c8 +0x3d6:  add    $0x79700,%edx
086471ce +0x3dc:  movl   $0x1,0x8(%esp)
086471d6 +0x3e4:  mov    %eax,0x4(%esp)
086471da +0x3e8:  mov    %edx,(%esp)
086471dd +0x3eb:  call   086869bc <_ZN15cUserHistoryLog13RedeemItemDelEii>  ; cUserHistoryLog::RedeemItemDel(int, int)
086471e2 +0x3f0:  lea    -0x5c(%ebp),%eax
086471e5 +0x3f3:  mov    0xc(%ebp),%edx
086471e8 +0x3f6:  mov    %edx,0x8(%esp)
086471ec +0x3fa:  mov    -0x18(%ebp),%edx
086471ef +0x3fd:  mov    %edx,0x4(%esp)
086471f3 +0x401:  mov    %eax,(%esp)
086471f6 +0x404:  call   085f728a <_ZN11Redeem_Item11CRedeemItem10RedeemItemEi>  ; Redeem_Item::CRedeemItem::RedeemItem(int)
086471fb +0x409:  sub    $0x4,%esp
086471fe +0x40c:  lea    -0x88(%ebp),%eax
08647204 +0x412:  mov    %eax,(%esp)
08647207 +0x415:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0864720c +0x41a:  movl   $0x137,0x8(%esp)
08647214 +0x422:  movl   $0x1,0x4(%esp)
0864721c +0x42a:  lea    -0x88(%ebp),%eax
08647222 +0x430:  mov    %eax,(%esp)
08647225 +0x433:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0864722a +0x438:  movl   $0x1,0x4(%esp)
08647232 +0x440:  lea    -0x88(%ebp),%eax
08647238 +0x446:  mov    %eax,(%esp)
0864723b +0x449:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08647240 +0x44e:  mov    -0xc(%ebp),%eax
08647243 +0x451:  mov    %eax,0x4(%esp)
08647247 +0x455:  lea    -0x88(%ebp),%eax
0864724d +0x45b:  mov    %eax,(%esp)
08647250 +0x45e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08647255 +0x463:  movl   $0x1,0x4(%esp)
0864725d +0x46b:  lea    -0x88(%ebp),%eax
08647263 +0x471:  mov    %eax,(%esp)
08647266 +0x474:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0864726b +0x479:  lea    -0x88(%ebp),%eax
08647271 +0x47f:  mov    %eax,0x4(%esp)
08647275 +0x483:  mov    0x8(%ebp),%eax
08647278 +0x486:  mov    %eax,(%esp)
0864727b +0x489:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08647280 +0x48e:  mov    $0x1,%ebx
08647285 +0x493:  lea    -0x88(%ebp),%eax
0864728b +0x499:  mov    %eax,(%esp)
0864728e +0x49c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08647293 +0x4a1:  jmp    086472b3 <+0x4c1>
08647295 +0x4a3:  mov    %edx,%ebx
08647297 +0x4a5:  mov    %eax,%esi
08647299 +0x4a7:  lea    -0x88(%ebp),%eax
0864729f +0x4ad:  mov    %eax,(%esp)
086472a2 +0x4b0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086472a7 +0x4b5:  mov    %esi,%eax
086472a9 +0x4b7:  mov    %ebx,%edx
086472ab +0x4b9:  mov    %eax,(%esp)
086472ae +0x4bc:  call   08ae3750 <_Unwind_Resume>
086472b3 +0x4c1:  mov    %ebx,%eax
086472b5 +0x4c3:  lea    -0x8(%ebp),%esp
086472b8 +0x4c6:  add    $0x0,%esp
086472bb +0x4c9:  pop    %ebx
086472bc +0x4ca:  pop    %esi
086472bd +0x4cb:  pop    %ebp
086472be +0x4cc:  ret
086472bf +0x4cd:  nop
```

## 反编译 C

```c
// CUser::Redeem_Item @ 0x8646df2

/* CUser::Redeem_Item(int) */

undefined4 CUser::Redeem_Item(int param_1)

{
  char cVar1;
  CPrivateStoreMgr *this;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *pCVar5;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar6;
  Inven_Item local_d0 [64];
  undefined4 local_90;
  PacketGuard local_8c [12];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  undefined1 local_60 [68];
  int local_1c;
  int local_18;
  Inven_Item *local_14;
  int local_10;
  
  local_1c = GetCharacExpandData((CUser *)param_1,6);
  if (local_1c == 0) {
    SendCmdErrorPacket((CUser *)param_1,0x137,3);
    uVar6 = 0;
  }
  else {
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_1);
    if (cVar1 == '\0') {
      cVar1 = CheckInTrade((CUser *)param_1);
      if (cVar1 == '\0') {
        local_18 = 0xffffffff;
        local_18 = ::Redeem_Item::CRedeemItem::GetItemPrice(local_1c);
        if (local_18 < 0) {
          SendCmdErrorPacket((CUser *)param_1,0x137,3);
          uVar6 = 0;
        }
        else {
          iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
          if (iVar4 < local_18) {
            SendCmdErrorPacket((CUser *)param_1,0x137,0x46);
            uVar6 = 0;
          }
          else {
            ::Redeem_Item::CRedeemItem::GetRedeemInfoR((int)local_d0);
            local_14 = local_d0;
            cVar1 = Inven_Item::isEmpty(local_14);
            if (cVar1 == '\0') {
              uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              local_10 = CInventory::insertItemIntoInventory
                                   (uVar6,*(undefined4 *)local_14,*(undefined4 *)(local_14 + 4),
                                    *(undefined4 *)(local_14 + 8),*(undefined4 *)(local_14 + 0xc),
                                    *(undefined4 *)(local_14 + 0x10),
                                    *(undefined4 *)(local_14 + 0x14),
                                    *(undefined4 *)(local_14 + 0x18),
                                    *(undefined4 *)(local_14 + 0x1c),
                                    *(undefined4 *)(local_14 + 0x20),
                                    *(undefined4 *)(local_14 + 0x24),
                                    *(undefined4 *)(local_14 + 0x28),
                                    *(undefined4 *)(local_14 + 0x2c),
                                    *(undefined4 *)(local_14 + 0x30),
                                    *(undefined4 *)(local_14 + 0x34),
                                    *(undefined4 *)(local_14 + 0x38),local_14[0x3c],0x29,1,1);
              if (local_10 < 0) {
                SendCmdErrorPacket((CUser *)param_1,0x137,4);
                uVar6 = 0;
              }
              else {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::use_money(pCVar5,local_90,0x25,1);
                iVar4 = *(int *)(local_14 + 2);
                this_00 = (CDataManager *)G_CDataManager();
                this_01 = (CItem *)CDataManager::find_item(this_00,iVar4);
                cVar1 = CItem::is_stackable(this_01);
                if (cVar1 == '\0') {
                  cUserHistoryLog::RedeemItemDel
                            ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_14 + 2),1);
                }
                else {
                  cUserHistoryLog::RedeemItemDel
                            ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_14 + 2),
                             *(int *)(local_14 + 7));
                }
                ::Redeem_Item::CRedeemItem::RedeemItem((int)local_60);
                PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 08647225 to 0864727f has its CatchHandler @ 08647295 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,1,0x137);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,1);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_8c,local_10);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
                Send((CUser *)param_1,local_8c);
                uVar6 = 1;
                PacketGuard::~PacketGuard(local_8c);
              }
            }
            else {
              SendCmdErrorPacket((CUser *)param_1,0x137,3);
              uVar6 = 0;
            }
          }
        }
      }
      else {
        uVar6 = get_charac_no((CUser *)param_1,-1);
        uVar2 = get_acc_id((CUser *)param_1);
        uVar3 = NumberToString(uVar2,0);
        cMyTrace::cMyTrace(local_70,"bool CUser::Redeem_Item(int)",0x52f,5);
        cMyTrace::operator()(local_70,"redeem error : trade : m_id(%s)charac_no(%u)",uVar3,uVar6);
        SendCmdErrorPacket((CUser *)param_1,0x137,3);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = get_charac_no((CUser *)param_1,-1);
      uVar2 = get_acc_id((CUser *)param_1);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_80,"bool CUser::Redeem_Item(int)",0x529,5);
      cMyTrace::operator()(local_80,"redeem error : trade : m_id(%s)charac_no(%u)",uVar3,uVar6);
      SendCmdErrorPacket((CUser *)param_1,0x137,3);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
