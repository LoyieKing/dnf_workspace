# _putItemIntoUser

`_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE`

`Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int, Dispatcher_UseVendingMachine::stPutItemResult_t&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821b71c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b71c  _ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE
#           Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int, Dispatcher_UseVendingMachine::stPutItemResult_t&) const
# range [0x0821b71c, 0x0821bf81]
0821b71c +0x000:  push   %ebp
0821b71d +0x001:  mov    %esp,%ebp
0821b71f +0x003:  push   %edi
0821b720 +0x004:  push   %esi
0821b721 +0x005:  push   %ebx
0821b722 +0x006:  sub    $0x11c,%esp
0821b728 +0x00c:  mov    0x18(%ebp),%eax
0821b72b +0x00f:  mov    0x10(%ebp),%edx
0821b72e +0x012:  mov    %edx,(%eax)
0821b730 +0x014:  mov    0x18(%ebp),%eax
0821b733 +0x017:  mov    0x14(%ebp),%edx
0821b736 +0x01a:  mov    %edx,0x4(%eax)
0821b739 +0x01d:  mov    0x18(%ebp),%eax
0821b73c +0x020:  movl   $0x0,0x8(%eax)
0821b743 +0x027:  mov    0x18(%ebp),%eax
0821b746 +0x02a:  movw   $0xffff,0xc(%eax)
0821b74c +0x030:  mov    0x18(%ebp),%eax
0821b74f +0x033:  movb   $0x1,0xe(%eax)
0821b753 +0x037:  mov    0x18(%ebp),%eax
0821b756 +0x03a:  mov    (%eax),%eax
0821b758 +0x03c:  cmp    $0xffffffff,%eax
0821b75b +0x03f:  je     0821bf6f <+0x853>
0821b761 +0x045:  movw   $0xffff,-0x2a(%ebp)
0821b767 +0x04b:  cmpl   $0x0,0x10(%ebp)
0821b76b +0x04f:  jne    0821b7aa <+0x8e>
0821b76d +0x051:  mov    0x14(%ebp),%ebx
0821b770 +0x054:  mov    0xc(%ebp),%eax
0821b773 +0x057:  mov    %eax,(%esp)
0821b776 +0x05a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821b77b +0x05f:  movl   $0x0,0x10(%esp)
0821b783 +0x067:  movl   $0x1,0xc(%esp)
0821b78b +0x06f:  movl   $0x15,0x8(%esp)
0821b793 +0x077:  mov    %ebx,0x4(%esp)
0821b797 +0x07b:  mov    %eax,(%esp)
0821b79a +0x07e:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0821b79f +0x083:  movw   $0x0,-0x2a(%ebp)
0821b7a5 +0x089:  jmp    0821bf37 <+0x81b>
0821b7aa +0x08e:  cmpl   $0x1,0x10(%ebp)
0821b7ae +0x092:  jne    0821b821 <+0x105>
0821b7b0 +0x094:  mov    0xc(%ebp),%eax
0821b7b3 +0x097:  mov    %eax,(%esp)
0821b7b6 +0x09a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821b7bb +0x09f:  mov    %eax,(%esp)
0821b7be +0x0a2:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0821b7c3 +0x0a7:  mov    %eax,%ebx
0821b7c5 +0x0a9:  add    0x14(%ebp),%ebx
0821b7c8 +0x0ac:  mov    0xc(%ebp),%eax
0821b7cb +0x0af:  mov    %eax,(%esp)
0821b7ce +0x0b2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821b7d3 +0x0b7:  mov    %ebx,0x4(%esp)
0821b7d7 +0x0bb:  mov    %eax,(%esp)
0821b7da +0x0be:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
0821b7df +0x0c3:  mov    0x14(%ebp),%ebx
0821b7e2 +0x0c6:  mov    0xc(%ebp),%eax
0821b7e5 +0x0c9:  mov    %eax,(%esp)
0821b7e8 +0x0cc:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821b7ed +0x0d1:  mov    %eax,(%esp)
0821b7f0 +0x0d4:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0821b7f5 +0x0d9:  mov    0xc(%ebp),%edx
0821b7f8 +0x0dc:  add    $0x79700,%edx
0821b7fe +0x0e2:  movl   $0x6,0xc(%esp)
0821b806 +0x0ea:  mov    %ebx,0x8(%esp)
0821b80a +0x0ee:  mov    %eax,0x4(%esp)
0821b80e +0x0f2:  mov    %edx,(%esp)
0821b811 +0x0f5:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
0821b816 +0x0fa:  movw   $0x1,-0x2a(%ebp)
0821b81c +0x100:  jmp    0821bf37 <+0x81b>
0821b821 +0x105:  cmpl   $0x2,0x10(%ebp)
0821b825 +0x109:  jne    0821b84c <+0x130>
0821b827 +0x10b:  mov    0x14(%ebp),%eax
0821b82a +0x10e:  movl   $0x3,0x8(%esp)
0821b832 +0x116:  mov    %eax,0x4(%esp)
0821b836 +0x11a:  mov    0xc(%ebp),%eax
0821b839 +0x11d:  mov    %eax,(%esp)
0821b83c +0x120:  call   0864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>  ; CUser::gainWinPoint(int, eWPAddReason)
0821b841 +0x125:  movw   $0x2,-0x2a(%ebp)
0821b847 +0x12b:  jmp    0821bf37 <+0x81b>
0821b84c +0x130:  mov    0x10(%ebp),%ebx
0821b84f +0x133:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821b854 +0x138:  mov    %ebx,0x4(%esp)
0821b858 +0x13c:  mov    %eax,(%esp)
0821b85b +0x13f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0821b860 +0x144:  mov    %eax,-0x28(%ebp)
0821b863 +0x147:  cmpl   $0x0,-0x28(%ebp)
0821b867 +0x14b:  jne    0821b875 <+0x159>
0821b869 +0x14d:  mov    0x18(%ebp),%eax
0821b86c +0x150:  movb   $0x0,0xe(%eax)
0821b870 +0x154:  jmp    0821bf76 <+0x85a>
0821b875 +0x159:  lea    -0xc9(%ebp),%eax
0821b87b +0x15f:  mov    %eax,(%esp)
0821b87e +0x162:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821b883 +0x167:  mov    0x10(%ebp),%eax
0821b886 +0x16a:  mov    %eax,-0xc7(%ebp)
0821b88c +0x170:  mov    0x14(%ebp),%ebx
0821b88f +0x173:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821b894 +0x178:  mov    0xc(%eax),%eax
0821b897 +0x17b:  mov    %ebx,0xc(%esp)
0821b89b +0x17f:  lea    -0xc9(%ebp),%edx
0821b8a1 +0x185:  mov    %edx,0x8(%esp)
0821b8a5 +0x189:  movl   $0x0,0x4(%esp)
0821b8ad +0x191:  mov    %eax,(%esp)
0821b8b0 +0x194:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0821b8b5 +0x199:  mov    -0x28(%ebp),%eax
0821b8b8 +0x19c:  mov    (%eax),%eax
0821b8ba +0x19e:  add    $0xc,%eax
0821b8bd +0x1a1:  mov    (%eax),%edx
0821b8bf +0x1a3:  mov    -0x28(%ebp),%eax
0821b8c2 +0x1a6:  mov    %eax,(%esp)
0821b8c5 +0x1a9:  call   *%edx
0821b8c7 +0x1ab:  cmp    $0x17,%eax
0821b8ca +0x1ae:  sete   %al
0821b8cd +0x1b1:  test   %al,%al
0821b8cf +0x1b3:  je     0821b9c6 <+0x2aa>
0821b8d5 +0x1b9:  mov    -0x28(%ebp),%eax
0821b8d8 +0x1bc:  mov    %eax,(%esp)
0821b8db +0x1bf:  call   0822ca0a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20b4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20b4
0821b8e0 +0x1c4:  mov    %eax,0x4(%esp)
0821b8e4 +0x1c8:  lea    -0x38(%ebp),%eax
0821b8e7 +0x1cb:  mov    %eax,(%esp)
0821b8ea +0x1ce:  call   08237db6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd460
0821b8ef +0x1d3:  lea    -0x3c(%ebp),%eax
0821b8f2 +0x1d6:  lea    -0x38(%ebp),%edx
0821b8f5 +0x1d9:  mov    %edx,0x4(%esp)
0821b8f9 +0x1dd:  mov    %eax,(%esp)
0821b8fc +0x1e0:  call   08237e6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd514>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd514
0821b901 +0x1e5:  sub    $0x4,%esp
0821b904 +0x1e8:  lea    -0x40(%ebp),%eax
0821b907 +0x1eb:  lea    -0x38(%ebp),%edx
0821b90a +0x1ee:  mov    %edx,0x4(%esp)
0821b90e +0x1f2:  mov    %eax,(%esp)
0821b911 +0x1f5:  call   08237e96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd540
0821b916 +0x1fa:  sub    $0x4,%esp
0821b919 +0x1fd:  jmp    0821b983 <+0x267>
0821b91b +0x1ff:  lea    -0x3c(%ebp),%eax
0821b91e +0x202:  mov    %eax,(%esp)
0821b921 +0x205:  call   08237f04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5ae
0821b926 +0x20a:  mov    0x8(%eax),%eax
0821b929 +0x20d:  mov    %eax,%edi
0821b92b +0x20f:  mov    0xc(%ebp),%eax
0821b92e +0x212:  mov    %eax,(%esp)
0821b931 +0x215:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0821b936 +0x21a:  mov    %eax,%ebx
0821b938 +0x21c:  lea    -0x3c(%ebp),%eax
0821b93b +0x21f:  mov    %eax,(%esp)
0821b93e +0x222:  call   08237f04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5ae
0821b943 +0x227:  mov    0x4(%eax),%esi
0821b946 +0x22a:  lea    -0x3c(%ebp),%eax
0821b949 +0x22d:  mov    %eax,(%esp)
0821b94c +0x230:  call   08237f04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5ae
0821b951 +0x235:  mov    (%eax),%edx
0821b953 +0x237:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0821b958 +0x23c:  mov    %edi,0x14(%esp)
0821b95c +0x240:  movl   $0x5,0x10(%esp)
0821b964 +0x248:  mov    %ebx,0xc(%esp)
0821b968 +0x24c:  mov    %esi,0x8(%esp)
0821b96c +0x250:  mov    %edx,0x4(%esp)
0821b970 +0x254:  mov    %eax,(%esp)
0821b973 +0x257:  call   084b7932 <_ZN20CGlobalEffectManager15registNewEffectEjfPKcll>  ; CGlobalEffectManager::registNewEffect(unsigned int, float, char const*, long, long)
0821b978 +0x25c:  lea    -0x3c(%ebp),%eax
0821b97b +0x25f:  mov    %eax,(%esp)
0821b97e +0x262:  call   08237eee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd598>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd598
0821b983 +0x267:  lea    -0x40(%ebp),%eax
0821b986 +0x26a:  mov    %eax,0x4(%esp)
0821b98a +0x26e:  lea    -0x3c(%ebp),%eax
0821b98d +0x271:  mov    %eax,(%esp)
0821b990 +0x274:  call   08237ec2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd56c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd56c
0821b995 +0x279:  test   %al,%al
0821b997 +0x27b:  jne    0821b91b <+0x1ff>
0821b999 +0x27d:  jmp    0821b9b6 <+0x29a>
0821b99b +0x27f:  mov    %edx,%ebx
0821b99d +0x281:  mov    %eax,%esi
0821b99f +0x283:  lea    -0x38(%ebp),%eax
0821b9a2 +0x286:  mov    %eax,(%esp)
0821b9a5 +0x289:  call   08235c2a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb2d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb2d4
0821b9aa +0x28e:  mov    %esi,%eax
0821b9ac +0x290:  mov    %ebx,%edx
0821b9ae +0x292:  mov    %eax,(%esp)
0821b9b1 +0x295:  call   08ae3750 <_Unwind_Resume>
0821b9b6 +0x29a:  lea    -0x38(%ebp),%eax
0821b9b9 +0x29d:  mov    %eax,(%esp)
0821b9bc +0x2a0:  call   08235c2a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb2d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb2d4
0821b9c1 +0x2a5:  jmp    0821bf37 <+0x81b>
0821b9c6 +0x2aa:  mov    -0x28(%ebp),%eax
0821b9c9 +0x2ad:  mov    (%eax),%eax
0821b9cb +0x2af:  add    $0x10,%eax
0821b9ce +0x2b2:  mov    (%eax),%edx
0821b9d0 +0x2b4:  mov    -0x28(%ebp),%eax
0821b9d3 +0x2b7:  mov    %eax,(%esp)
0821b9d6 +0x2ba:  call   *%edx
0821b9d8 +0x2bc:  test   %al,%al
0821b9da +0x2be:  je     0821ba76 <+0x35a>
0821b9e0 +0x2c4:  mov    0xc(%ebp),%eax
0821b9e3 +0x2c7:  mov    %eax,(%esp)
0821b9e6 +0x2ca:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821b9eb +0x2cf:  lea    -0x58(%ebp),%edx
0821b9ee +0x2d2:  mov    %edx,0x8(%esp)
0821b9f2 +0x2d6:  mov    %eax,0x4(%esp)
0821b9f6 +0x2da:  movl   $0x4,(%esp)
0821b9fd +0x2e1:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0821ba02 +0x2e6:  mov    %eax,%esi
0821ba04 +0x2e8:  mov    -0x28(%ebp),%eax
0821ba07 +0x2eb:  mov    %eax,(%esp)
0821ba0a +0x2ee:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0821ba0f +0x2f3:  mov    %eax,%ebx
0821ba11 +0x2f5:  mov    0x10(%ebp),%edi
0821ba14 +0x2f8:  mov    0xc(%ebp),%eax
0821ba17 +0x2fb:  mov    %eax,(%esp)
0821ba1a +0x2fe:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821ba1f +0x303:  movl   $0x0,0x24(%esp)
0821ba27 +0x30b:  movl   $0x0,0x20(%esp)
0821ba2f +0x313:  movl   $0xe,0x1c(%esp)
0821ba37 +0x31b:  mov    %esi,0x18(%esp)
0821ba3b +0x31f:  movl   $0xffffffff,0x14(%esp)
0821ba43 +0x327:  movl   $0x0,0x10(%esp)
0821ba4b +0x32f:  movl   $0x0,0xc(%esp)
0821ba53 +0x337:  mov    %ebx,0x8(%esp)
0821ba57 +0x33b:  mov    %edi,0x4(%esp)
0821ba5b +0x33f:  mov    %eax,(%esp)
0821ba5e +0x342:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0821ba63 +0x347:  mov    %ax,-0x2a(%ebp)
0821ba67 +0x34b:  mov    0x18(%ebp),%eax
0821ba6a +0x34e:  movl   $0x1,0x8(%eax)
0821ba71 +0x355:  jmp    0821bf37 <+0x81b>
0821ba76 +0x35a:  mov    -0x28(%ebp),%eax
0821ba79 +0x35d:  mov    (%eax),%eax
0821ba7b +0x35f:  add    $0x14,%eax
0821ba7e +0x362:  mov    (%eax),%edx
0821ba80 +0x364:  mov    -0x28(%ebp),%eax
0821ba83 +0x367:  mov    %eax,(%esp)
0821ba86 +0x36a:  call   *%edx
0821ba88 +0x36c:  test   %al,%al
0821ba8a +0x36e:  je     0821baaa <+0x38e>
0821ba8c +0x370:  mov    -0x28(%ebp),%eax
0821ba8f +0x373:  mov    (%eax),%eax
0821ba91 +0x375:  add    $0xc,%eax
0821ba94 +0x378:  mov    (%eax),%edx
0821ba96 +0x37a:  mov    -0x28(%ebp),%eax
0821ba99 +0x37d:  mov    %eax,(%esp)
0821ba9c +0x380:  call   *%edx
0821ba9e +0x382:  cmp    $0x16,%eax
0821baa1 +0x385:  jne    0821baaa <+0x38e>
0821baa3 +0x387:  mov    $0x1,%eax
0821baa8 +0x38c:  jmp    0821baaf <+0x393>
0821baaa +0x38e:  mov    $0x0,%eax
0821baaf +0x393:  test   %al,%al
0821bab1 +0x395:  je     0821bc1c <+0x500>
0821bab7 +0x39b:  movzbl -0xc8(%ebp),%eax
0821babe +0x3a2:  cmp    $0x5,%al
0821bac0 +0x3a4:  jne    0821bf37 <+0x81b>
0821bac6 +0x3aa:  lea    -0xc9(%ebp),%eax
0821bacc +0x3b0:  mov    %eax,(%esp)
0821bacf +0x3b3:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
0821bad4 +0x3b8:  xor    $0x1,%eax
0821bad7 +0x3bb:  test   %al,%al
0821bad9 +0x3bd:  jne    0821bf72 <+0x856>
0821badf +0x3c3:  mov    0xc(%ebp),%eax
0821bae2 +0x3c6:  mov    %eax,(%esp)
0821bae5 +0x3c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821baea +0x3ce:  movl   $0x0,0x4c(%esp)
0821baf2 +0x3d6:  movl   $0x1,0x48(%esp)
0821bafa +0x3de:  movl   $0x23,0x44(%esp)
0821bb02 +0x3e6:  mov    -0xc9(%ebp),%edx
0821bb08 +0x3ec:  mov    %edx,0x4(%esp)
0821bb0c +0x3f0:  mov    -0xc5(%ebp),%edx
0821bb12 +0x3f6:  mov    %edx,0x8(%esp)
0821bb16 +0x3fa:  mov    -0xc1(%ebp),%edx
0821bb1c +0x400:  mov    %edx,0xc(%esp)
0821bb20 +0x404:  mov    -0xbd(%ebp),%edx
0821bb26 +0x40a:  mov    %edx,0x10(%esp)
0821bb2a +0x40e:  mov    -0xb9(%ebp),%edx
0821bb30 +0x414:  mov    %edx,0x14(%esp)
0821bb34 +0x418:  mov    -0xb5(%ebp),%edx
0821bb3a +0x41e:  mov    %edx,0x18(%esp)
0821bb3e +0x422:  mov    -0xb1(%ebp),%edx
0821bb44 +0x428:  mov    %edx,0x1c(%esp)
0821bb48 +0x42c:  mov    -0xad(%ebp),%edx
0821bb4e +0x432:  mov    %edx,0x20(%esp)
0821bb52 +0x436:  mov    -0xa9(%ebp),%edx
0821bb58 +0x43c:  mov    %edx,0x24(%esp)
0821bb5c +0x440:  mov    -0xa5(%ebp),%edx
0821bb62 +0x446:  mov    %edx,0x28(%esp)
0821bb66 +0x44a:  mov    -0xa1(%ebp),%edx
0821bb6c +0x450:  mov    %edx,0x2c(%esp)
0821bb70 +0x454:  mov    -0x9d(%ebp),%edx
0821bb76 +0x45a:  mov    %edx,0x30(%esp)
0821bb7a +0x45e:  mov    -0x99(%ebp),%edx
0821bb80 +0x464:  mov    %edx,0x34(%esp)
0821bb84 +0x468:  mov    -0x95(%ebp),%edx
0821bb8a +0x46e:  mov    %edx,0x38(%esp)
0821bb8e +0x472:  mov    -0x91(%ebp),%edx
0821bb94 +0x478:  mov    %edx,0x3c(%esp)
0821bb98 +0x47c:  movzbl -0x8d(%ebp),%edx
0821bb9f +0x483:  mov    %dl,0x40(%esp)
0821bba3 +0x487:  mov    %eax,(%esp)
0821bba6 +0x48a:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0821bbab +0x48f:  mov    %ax,-0x2a(%ebp)
0821bbaf +0x493:  cmpw   $0x0,-0x2a(%ebp)
0821bbb4 +0x498:  js     0821bc0d <+0x4f1>
0821bbb6 +0x49a:  mov    -0x28(%ebp),%eax
0821bbb9 +0x49d:  mov    %eax,(%esp)
0821bbbc +0x4a0:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0821bbc1 +0x4a5:  mov    %eax,%esi
0821bbc3 +0x4a7:  mov    -0x28(%ebp),%eax
0821bbc6 +0x4aa:  mov    %eax,(%esp)
0821bbc9 +0x4ad:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0821bbce +0x4b2:  mov    %eax,%ebx
0821bbd0 +0x4b4:  movswl -0x2a(%ebp),%edi
0821bbd4 +0x4b8:  mov    0xc(%ebp),%eax
0821bbd7 +0x4bb:  mov    %eax,(%esp)
0821bbda +0x4be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821bbdf +0x4c3:  mov    %eax,(%esp)
0821bbe2 +0x4c6:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0821bbe7 +0x4cb:  mov    %esi,0x14(%esp)
0821bbeb +0x4cf:  mov    %ebx,0x10(%esp)
0821bbef +0x4d3:  movl   $0x23,0xc(%esp)
0821bbf7 +0x4db:  mov    %edi,0x8(%esp)
0821bbfb +0x4df:  lea    -0xc9(%ebp),%edx
0821bc01 +0x4e5:  mov    %edx,0x4(%esp)
0821bc05 +0x4e9:  mov    %eax,(%esp)
0821bc08 +0x4ec:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
0821bc0d +0x4f1:  mov    0x18(%ebp),%eax
0821bc10 +0x4f4:  movl   $0x7,0x8(%eax)
0821bc17 +0x4fb:  jmp    0821bf37 <+0x81b>
0821bc1c +0x500:  movl   $0x0,-0x5c(%ebp)
0821bc23 +0x507:  movl   $0x0,-0x60(%ebp)
0821bc2a +0x50e:  movb   $0x0,-0x61(%ebp)
0821bc2e +0x512:  movb   $0x0,-0x21(%ebp)
0821bc32 +0x516:  mov    -0xc7(%ebp),%eax
0821bc38 +0x51c:  mov    %eax,%edx
0821bc3a +0x51e:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
0821bc3f +0x523:  lea    -0x61(%ebp),%ecx
0821bc42 +0x526:  mov    %ecx,0x10(%esp)
0821bc46 +0x52a:  lea    -0x60(%ebp),%ecx
0821bc49 +0x52d:  mov    %ecx,0xc(%esp)
0821bc4d +0x531:  lea    -0x5c(%ebp),%ecx
0821bc50 +0x534:  mov    %ecx,0x8(%esp)
0821bc54 +0x538:  mov    %edx,0x4(%esp)
0821bc58 +0x53c:  mov    %eax,(%esp)
0821bc5b +0x53f:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
0821bc60 +0x544:  test   %al,%al
0821bc62 +0x546:  je     0821be4a <+0x72e>
0821bc68 +0x54c:  mov    -0x28(%ebp),%eax
0821bc6b +0x54f:  mov    (%eax),%eax
0821bc6d +0x551:  add    $0xc,%eax
0821bc70 +0x554:  mov    (%eax),%edx
0821bc72 +0x556:  mov    -0x28(%ebp),%eax
0821bc75 +0x559:  mov    %eax,(%esp)
0821bc78 +0x55c:  call   *%edx
0821bc7a +0x55e:  cmp    $0x10,%eax
0821bc7d +0x561:  setne  %al
0821bc80 +0x564:  test   %al,%al
0821bc82 +0x566:  je     0821be4a <+0x72e>
0821bc88 +0x56c:  lea    -0x70(%ebp),%eax
0821bc8b +0x56f:  mov    %eax,(%esp)
0821bc8e +0x572:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
0821bc93 +0x577:  movl   $0x0,-0x74(%ebp)
0821bc9a +0x57e:  mov    -0xc7(%ebp),%eax
0821bca0 +0x584:  mov    %eax,%ebx
0821bca2 +0x586:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821bca7 +0x58b:  mov    0xc(%eax),%eax
0821bcaa +0x58e:  mov    %ebx,0x4(%esp)
0821bcae +0x592:  mov    %eax,(%esp)
0821bcb1 +0x595:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0821bcb6 +0x59a:  mov    %eax,-0x20(%ebp)
0821bcb9 +0x59d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821bcc0 +0x5a4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0821bcc5 +0x5a9:  mov    %eax,-0x1c(%ebp)
0821bcc8 +0x5ac:  lea    -0x8c(%ebp),%eax
0821bcce +0x5b2:  mov    %eax,(%esp)
0821bcd1 +0x5b5:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
0821bcd6 +0x5ba:  mov    -0xc7(%ebp),%eax
0821bcdc +0x5c0:  mov    %eax,%edx
0821bcde +0x5c2:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
0821bce3 +0x5c7:  movl   $0x1,0x30(%esp)
0821bceb +0x5cf:  movl   $0x0,0x2c(%esp)
0821bcf3 +0x5d7:  movl   $0x0,0x28(%esp)
0821bcfb +0x5df:  movl   $0x0,0x24(%esp)
0821bd03 +0x5e7:  lea    -0x8c(%ebp),%ecx
0821bd09 +0x5ed:  mov    %ecx,0x20(%esp)
0821bd0d +0x5f1:  lea    -0x70(%ebp),%ecx
0821bd10 +0x5f4:  mov    %ecx,0x1c(%esp)
0821bd14 +0x5f8:  movl   $0x1,0x18(%esp)
0821bd1c +0x600:  mov    -0x1c(%ebp),%ecx
0821bd1f +0x603:  mov    %ecx,0x14(%esp)
0821bd23 +0x607:  lea    -0x74(%ebp),%ecx
0821bd26 +0x60a:  mov    %ecx,0x10(%esp)
0821bd2a +0x60e:  mov    -0x20(%ebp),%ecx
0821bd2d +0x611:  mov    %ecx,0xc(%esp)
0821bd31 +0x615:  mov    %edx,0x8(%esp)
0821bd35 +0x619:  mov    0xc(%ebp),%edx
0821bd38 +0x61c:  mov    %edx,0x4(%esp)
0821bd3c +0x620:  mov    %eax,(%esp)
0821bd3f +0x623:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
0821bd44 +0x628:  test   %al,%al
0821bd46 +0x62a:  je     0821bdd9 <+0x6bd>
0821bd4c +0x630:  mov    -0x74(%ebp),%eax
0821bd4f +0x633:  test   %eax,%eax
0821bd51 +0x635:  je     0821bd5d <+0x641>
0821bd53 +0x637:  mov    $0x0,%ebx
0821bd58 +0x63c:  jmp    0821bdfc <+0x6e0>
0821bd5d +0x641:  cmpl   $0x0,-0x20(%ebp)
0821bd61 +0x645:  je     0821bd83 <+0x667>
0821bd63 +0x647:  mov    -0x20(%ebp),%eax
0821bd66 +0x64a:  mov    %eax,0x4(%esp)
0821bd6a +0x64e:  mov    0xc(%ebp),%eax
0821bd6d +0x651:  mov    %eax,(%esp)
0821bd70 +0x654:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0821bd75 +0x659:  xor    $0x1,%eax
0821bd78 +0x65c:  test   %al,%al
0821bd7a +0x65e:  je     0821bd83 <+0x667>
0821bd7c +0x660:  mov    $0x1,%eax
0821bd81 +0x665:  jmp    0821bd88 <+0x66c>
0821bd83 +0x667:  mov    $0x0,%eax
0821bd88 +0x66c:  test   %al,%al
0821bd8a +0x66e:  je     0821bdd9 <+0x6bd>
0821bd8c +0x670:  mov    -0x20(%ebp),%eax
0821bd8f +0x673:  mov    %eax,0x4(%esp)
0821bd93 +0x677:  mov    0xc(%ebp),%eax
0821bd96 +0x67a:  mov    %eax,(%esp)
0821bd99 +0x67d:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
0821bd9e +0x682:  movl   $0x0,0xc(%esp)
0821bda6 +0x68a:  mov    -0x1c(%ebp),%eax
0821bda9 +0x68d:  mov    %eax,0x8(%esp)
0821bdad +0x691:  mov    -0x20(%ebp),%eax
0821bdb0 +0x694:  mov    %eax,0x4(%esp)
0821bdb4 +0x698:  mov    0xc(%ebp),%eax
0821bdb7 +0x69b:  mov    %eax,(%esp)
0821bdba +0x69e:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0821bdbf +0x6a3:  mov    -0x20(%ebp),%eax
0821bdc2 +0x6a6:  mov    %eax,0x8(%esp)
0821bdc6 +0x6aa:  movl   $0x1,0x4(%esp)
0821bdce +0x6b2:  mov    0xc(%ebp),%eax
0821bdd1 +0x6b5:  mov    %eax,(%esp)
0821bdd4 +0x6b8:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
0821bdd9 +0x6bd:  movb   $0x1,-0x21(%ebp)
0821bddd +0x6c1:  mov    $0x1,%ebx
0821bde2 +0x6c6:  jmp    0821bdfc <+0x6e0>
0821bde4 +0x6c8:  mov    %edx,%ebx
0821bde6 +0x6ca:  mov    %eax,%esi
0821bde8 +0x6cc:  lea    -0x8c(%ebp),%eax
0821bdee +0x6d2:  mov    %eax,(%esp)
0821bdf1 +0x6d5:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
0821bdf6 +0x6da:  mov    %esi,%eax
0821bdf8 +0x6dc:  mov    %ebx,%edx
0821bdfa +0x6de:  jmp    0821be1c <+0x700>
0821bdfc +0x6e0:  lea    -0x8c(%ebp),%eax
0821be02 +0x6e6:  mov    %eax,(%esp)
0821be05 +0x6e9:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
0821be0a +0x6ee:  test   %ebx,%ebx
0821be0c +0x6f0:  jne    0821be15 <+0x6f9>
0821be0e +0x6f2:  mov    $0x0,%ebx
0821be13 +0x6f7:  jmp    0821be37 <+0x71b>
0821be15 +0x6f9:  mov    $0x1,%ebx
0821be1a +0x6fe:  jmp    0821be37 <+0x71b>
0821be1c +0x700:  mov    %edx,%ebx
0821be1e +0x702:  mov    %eax,%esi
0821be20 +0x704:  lea    -0x70(%ebp),%eax
0821be23 +0x707:  mov    %eax,(%esp)
0821be26 +0x70a:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0821be2b +0x70f:  mov    %esi,%eax
0821be2d +0x711:  mov    %ebx,%edx
0821be2f +0x713:  mov    %eax,(%esp)
0821be32 +0x716:  call   08ae3750 <_Unwind_Resume>
0821be37 +0x71b:  lea    -0x70(%ebp),%eax
0821be3a +0x71e:  mov    %eax,(%esp)
0821be3d +0x721:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0821be42 +0x726:  test   %ebx,%ebx
0821be44 +0x728:  je     0821bf76 <+0x85a>
0821be4a +0x72e:  movzbl -0x21(%ebp),%eax
0821be4e +0x732:  xor    $0x1,%eax
0821be51 +0x735:  test   %al,%al
0821be53 +0x737:  je     0821bf37 <+0x81b>
0821be59 +0x73d:  mov    0xc(%ebp),%eax
0821be5c +0x740:  mov    %eax,(%esp)
0821be5f +0x743:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821be64 +0x748:  movl   $0x0,0x4c(%esp)
0821be6c +0x750:  movl   $0x1,0x48(%esp)
0821be74 +0x758:  movl   $0x23,0x44(%esp)
0821be7c +0x760:  mov    -0xc9(%ebp),%edx
0821be82 +0x766:  mov    %edx,0x4(%esp)
0821be86 +0x76a:  mov    -0xc5(%ebp),%edx
0821be8c +0x770:  mov    %edx,0x8(%esp)
0821be90 +0x774:  mov    -0xc1(%ebp),%edx
0821be96 +0x77a:  mov    %edx,0xc(%esp)
0821be9a +0x77e:  mov    -0xbd(%ebp),%edx
0821bea0 +0x784:  mov    %edx,0x10(%esp)
0821bea4 +0x788:  mov    -0xb9(%ebp),%edx
0821beaa +0x78e:  mov    %edx,0x14(%esp)
0821beae +0x792:  mov    -0xb5(%ebp),%edx
0821beb4 +0x798:  mov    %edx,0x18(%esp)
0821beb8 +0x79c:  mov    -0xb1(%ebp),%edx
0821bebe +0x7a2:  mov    %edx,0x1c(%esp)
0821bec2 +0x7a6:  mov    -0xad(%ebp),%edx
0821bec8 +0x7ac:  mov    %edx,0x20(%esp)
0821becc +0x7b0:  mov    -0xa9(%ebp),%edx
0821bed2 +0x7b6:  mov    %edx,0x24(%esp)
0821bed6 +0x7ba:  mov    -0xa5(%ebp),%edx
0821bedc +0x7c0:  mov    %edx,0x28(%esp)
0821bee0 +0x7c4:  mov    -0xa1(%ebp),%edx
0821bee6 +0x7ca:  mov    %edx,0x2c(%esp)
0821beea +0x7ce:  mov    -0x9d(%ebp),%edx
0821bef0 +0x7d4:  mov    %edx,0x30(%esp)
0821bef4 +0x7d8:  mov    -0x99(%ebp),%edx
0821befa +0x7de:  mov    %edx,0x34(%esp)
0821befe +0x7e2:  mov    -0x95(%ebp),%edx
0821bf04 +0x7e8:  mov    %edx,0x38(%esp)
0821bf08 +0x7ec:  mov    -0x91(%ebp),%edx
0821bf0e +0x7f2:  mov    %edx,0x3c(%esp)
0821bf12 +0x7f6:  movzbl -0x8d(%ebp),%edx
0821bf19 +0x7fd:  mov    %dl,0x40(%esp)
0821bf1d +0x801:  mov    %eax,(%esp)
0821bf20 +0x804:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0821bf25 +0x809:  mov    %ax,-0x2a(%ebp)
0821bf29 +0x80d:  cmpw   $0xffff,-0x2a(%ebp)
0821bf2e +0x812:  jne    0821bf37 <+0x81b>
0821bf30 +0x814:  mov    0x18(%ebp),%eax
0821bf33 +0x817:  movb   $0x0,0xe(%eax)
0821bf37 +0x81b:  mov    0x18(%ebp),%eax
0821bf3a +0x81e:  movzwl -0x2a(%ebp),%edx
0821bf3e +0x822:  mov    %dx,0xc(%eax)
0821bf42 +0x826:  mov    0x18(%ebp),%eax
0821bf45 +0x829:  movzbl 0xe(%eax),%eax
0821bf49 +0x82d:  test   %al,%al
0821bf4b +0x82f:  je     0821bf75 <+0x859>
0821bf4d +0x831:  mov    0x18(%ebp),%eax
0821bf50 +0x834:  mov    0x4(%eax),%esi
0821bf53 +0x837:  mov    0x18(%ebp),%eax
0821bf56 +0x83a:  mov    (%eax),%ebx
0821bf58 +0x83c:  call   0860f8ad <_Z34GetInstanceVendingMachineStatisticv>  ; GetInstanceVendingMachineStatistic()
0821bf5d +0x841:  mov    %esi,0x8(%esp)
0821bf61 +0x845:  mov    %ebx,0x4(%esp)
0821bf65 +0x849:  mov    %eax,(%esp)
0821bf68 +0x84c:  call   0860f5a4 <_ZN24CVendingMachineStatistic13addOutputItemEmj>  ; CVendingMachineStatistic::addOutputItem(unsigned long, unsigned int)
0821bf6d +0x851:  jmp    0821bf76 <+0x85a>
0821bf6f +0x853:  nop
0821bf70 +0x854:  jmp    0821bf76 <+0x85a>
0821bf72 +0x856:  nop
0821bf73 +0x857:  jmp    0821bf76 <+0x85a>
0821bf75 +0x859:  nop
0821bf76 +0x85a:  lea    -0xc(%ebp),%esp
0821bf79 +0x85d:  add    $0x0,%esp
0821bf7c +0x860:  pop    %ebx
0821bf7d +0x861:  pop    %esi
0821bf7e +0x862:  pop    %edi
0821bf7f +0x863:  pop    %ebp
0821bf80 +0x864:  ret
0821bf81 +0x865:  nop
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_putItemIntoUser @ 0x821b71c

/* Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int,
   Dispatcher_UseVendingMachine::stPutItemResult_t&) const */

void __thiscall
Dispatcher_UseVendingMachine::_putItemIntoUser
          (Dispatcher_UseVendingMachine *this,CUser *param_1,ulong param_2,uint param_3,
          stPutItemResult_t *param_4)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  char cVar6;
  CInventory *pCVar7;
  int iVar8;
  undefined4 uVar9;
  CDataManager *this_00;
  vector *pvVar10;
  char *pcVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  CCreatureMgr *this_01;
  CVendingMachineStatistic *this_02;
  int iVar15;
  Inven_Item local_cd;
  char cStack_cc;
  undefined4 uStack_cb;
  undefined2 uStack_c7;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined1 local_91;
  stCeraShopItemParam_t local_90 [24];
  int local_78;
  vector<Inven_Item,std::allocator<Inven_Item>> local_74 [15];
  bool local_65;
  int local_64 [2];
  undefined1 local_5c [24];
  __normal_iterator local_44 [4];
  __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
  local_40 [4];
  vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>> local_3c [14];
  short local_2e;
  CStackableItem *local_2c;
  char local_25;
  int local_24;
  long local_20;
  
  *(ulong *)param_4 = param_2;
  *(uint *)(param_4 + 4) = param_3;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined2 *)(param_4 + 0xc) = 0xffff;
  param_4[0xe] = (stPutItemResult_t)0x1;
  if (*(int *)param_4 == -1) {
    return;
  }
  local_2e = -1;
  if (param_2 == 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::gain_money(pCVar7,param_3,0x15,1,0);
    local_2e = 0;
    goto LAB_0821bf37;
  }
  if (param_2 == 1) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar8 = CInventory::GetEventCoin(pCVar7);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar7,iVar8 + param_3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar9 = CInventory::GetEventCoin(pCVar7);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar9,param_3,6);
    local_2e = 1;
    goto LAB_0821bf37;
  }
  if (param_2 == 2) {
    CUser::gainWinPoint(param_1,param_3,3);
    local_2e = 2;
    goto LAB_0821bf37;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_2c = (CStackableItem *)CDataManager::find_item(this_00,param_2);
  if (local_2c == (CStackableItem *)0x0) {
    param_4[0xe] = (stPutItemResult_t)0x0;
    return;
  }
  Inven_Item::Inven_Item(&local_cd);
  uStack_cb = param_2;
  iVar8 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar8 + 0xc),0,&local_cd,param_3);
  iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
  if (iVar8 == 0x17) {
    pvVar10 = (vector *)CStackableItem::getGlobalEffectData(local_2c);
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::vector(local_3c,pvVar10);
                    /* try { // try from 0821b8fc to 0821b994 has its CatchHandler @ 0821b99b */
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::begin();
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::end();
    while( true ) {
      bVar5 = __gnu_cxx::operator!=(local_40,local_44);
      if (!bVar5) break;
      iVar8 = __gnu_cxx::
              __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
              ::operator->(local_40);
      lVar1 = *(long *)(iVar8 + 8);
      pcVar11 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      iVar8 = __gnu_cxx::
              __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
              ::operator->(local_40);
      fVar2 = *(float *)(iVar8 + 4);
      puVar12 = (uint *)__gnu_cxx::
                        __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
                        ::operator->(local_40);
      CGlobalEffectManager::registNewEffect
                (GlobalData::s_globalEffectManager_,*puVar12,fVar2,pcVar11,5,lVar1);
      __gnu_cxx::
      __normal_iterator<stGlobalEffect_t_const*,std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>>
      ::operator++(local_40);
    }
    std::vector<stGlobalEffect_t,std::allocator<stGlobalEffect_t>>::~vector(local_3c);
    goto LAB_0821bf37;
  }
  cVar6 = (**(code **)(*(int *)local_2c + 0x10))(local_2c);
  if (cVar6 != '\0') {
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar9 = WongWork::CGenUniqueNo::genIPGNo(4,uVar9,local_5c);
    uVar13 = CItem::getUsablePeriod((CItem *)local_2c);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2e = CInventory::AddAvatarItem(pCVar7,param_2,uVar13,0,0,0xffffffff,uVar9,0xe,0,0);
    *(undefined4 *)(param_4 + 8) = 1;
    goto LAB_0821bf37;
  }
  cVar6 = (**(code **)(*(int *)local_2c + 0x14))(local_2c);
  if (cVar6 == '\0') {
LAB_0821baaa:
    bVar5 = false;
  }
  else {
    iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
    if (iVar8 != 0x16) goto LAB_0821baaa;
    bVar5 = true;
  }
  if (bVar5) {
    if (cStack_cc == '\x05') {
      cVar6 = user_creature::CCreatureItemConverter::SetEggItem(&local_cd);
      if (cVar6 != '\x01') {
        return;
      }
      uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_2e = CInventory::insertItemIntoInventory
                           (uVar9,CONCAT22((undefined2)uStack_cb,CONCAT11(cStack_cc,local_cd)),
                            CONCAT22(uStack_c7,uStack_cb._2_2_),local_c5,local_c1,local_bd,local_b9,
                            local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                            local_95,local_91,0x23,1,0);
      if (-1 < local_2e) {
        iVar8 = CItem::getExpirationDate((CItem *)local_2c);
        iVar14 = CItem::getUsablePeriod((CItem *)local_2c);
        iVar15 = (int)local_2e;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar7);
        user_creature::CCreatureMgr::InsertCreatureItem(this_01,&local_cd,iVar15,0x23,iVar14,iVar8);
      }
      *(undefined4 *)(param_4 + 8) = 7;
    }
    goto LAB_0821bf37;
  }
  local_64[1] = 0;
  local_64[0] = 0;
  local_65 = false;
  local_25 = '\0';
  cVar6 = WongWork::CCeraShop::IsSpecialItem
                    (GlobalData::s_pCeraShop,uStack_cb,local_64 + 1,local_64,&local_65);
  if (cVar6 != '\0') {
    iVar8 = (**(code **)(*(int *)local_2c + 0xc))(local_2c);
    if (iVar8 != 0x10) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_74);
      uVar4 = uStack_cb;
      local_78 = 0;
                    /* try { // try from 0821bca2 to 0821bcd5 has its CatchHandler @ 0821be1c */
      iVar8 = G_CDataManager();
      local_24 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),uVar4);
      local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_90);
                    /* try { // try from 0821bd3f to 0821bdd8 has its CatchHandler @ 0821bde4 */
      cVar6 = WongWork::CCeraShop::ProcessSpecialItem
                        (GlobalData::s_pCeraShop,param_1,uStack_cb,local_24,&local_78,local_20,true,
                         (vector *)local_74,local_90,'\0','\0',false,1);
      if (cVar6 == '\0') {
LAB_0821bdd9:
        local_25 = '\x01';
        bVar5 = true;
      }
      else {
        if (local_78 == 0) {
          if (local_24 == 0) {
LAB_0821bd83:
            bVar5 = false;
          }
          else {
            cVar6 = CUser::IsRestrictedGoods(param_1,local_24);
            if (cVar6 == '\x01') goto LAB_0821bd83;
            bVar5 = true;
          }
          if (bVar5) {
            CUser::SetRestrictedGoods(param_1,local_24);
            WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_24,local_20,0);
            CUser::SendRestrictedGoods(param_1,true,local_24);
          }
          goto LAB_0821bdd9;
        }
        bVar5 = false;
      }
                    /* try { // try from 0821be05 to 0821be09 has its CatchHandler @ 0821be1c */
      WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_90);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_74);
      if (!bVar5) {
        return;
      }
    }
  }
  if (local_25 != '\x01') {
    uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2e = CInventory::insertItemIntoInventory
                         (uVar9,CONCAT22((undefined2)uStack_cb,CONCAT11(cStack_cc,local_cd)),
                          CONCAT22(uStack_c7,uStack_cb._2_2_),local_c5,local_c1,local_bd,local_b9,
                          local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                          local_95,local_91,0x23,1,0);
    if (local_2e == -1) {
      param_4[0xe] = (stPutItemResult_t)0x0;
    }
  }
LAB_0821bf37:
  *(short *)(param_4 + 0xc) = local_2e;
  if (param_4[0xe] != (stPutItemResult_t)0x0) {
    uVar3 = *(uint *)(param_4 + 4);
    uVar4 = *(ulong *)param_4;
    this_02 = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
    CVendingMachineStatistic::addOutputItem(this_02,uVar4,uVar3);
  }
  return;
}
```
