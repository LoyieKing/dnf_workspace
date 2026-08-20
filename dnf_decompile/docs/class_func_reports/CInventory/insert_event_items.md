# insert_event_items

`_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_`

`CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08506bb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08506bb2  _ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_
#           CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
# range [0x08506bb2, 0x08507acb]
08506bb2 +0x000:  push   %ebp
08506bb3 +0x001:  mov    %esp,%ebp
08506bb5 +0x003:  push   %edi
08506bb6 +0x004:  push   %esi
08506bb7 +0x005:  push   %ebx
08506bb8 +0x006:  sub    $0x2dc,%esp
08506bbe +0x00c:  mov    0x1c(%ebp),%eax
08506bc1 +0x00f:  mov    %al,-0x28c(%ebp)
08506bc7 +0x015:  movl   $0x0,-0x34(%ebp)
08506bce +0x01c:  mov    0xc(%ebp),%eax
08506bd1 +0x01f:  mov    %eax,(%esp)
08506bd4 +0x022:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08506bd9 +0x027:  test   %eax,%eax
08506bdb +0x029:  sete   %al
08506bde +0x02c:  test   %al,%al
08506be0 +0x02e:  je     08506bea <+0x38>
08506be2 +0x030:  mov    -0x34(%ebp),%eax
08506be5 +0x033:  jmp    08507ac1 <+0xf0f>
08506bea +0x038:  lea    -0xd8(%ebp),%eax
08506bf0 +0x03e:  mov    %eax,(%esp)
08506bf3 +0x041:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08506bf8 +0x046:  lea    -0xdc(%ebp),%eax
08506bfe +0x04c:  mov    %eax,(%esp)
08506c01 +0x04f:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
08506c06 +0x054:  lea    -0x290(%ebp),%eax
08506c0c +0x05a:  mov    0xc(%ebp),%edx
08506c0f +0x05d:  mov    %edx,0x4(%esp)
08506c13 +0x061:  mov    %eax,(%esp)
08506c16 +0x064:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08506c1b +0x069:  sub    $0x4,%esp
08506c1e +0x06c:  mov    -0x290(%ebp),%eax
08506c24 +0x072:  mov    %eax,-0xdc(%ebp)
08506c2a +0x078:  lea    -0x185(%ebp),%eax
08506c30 +0x07e:  mov    %eax,(%esp)
08506c33 +0x081:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08506c38 +0x086:  movl   $0x0,-0x28(%ebp)
08506c3f +0x08d:  jmp    08507a46 <+0xe94>
08506c44 +0x092:  lea    -0x185(%ebp),%eax
08506c4a +0x098:  mov    %eax,(%esp)
08506c4d +0x09b:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08506c52 +0x0a0:  lea    -0xdc(%ebp),%eax
08506c58 +0x0a6:  mov    %eax,(%esp)
08506c5b +0x0a9:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08506c60 +0x0ae:  mov    0x4(%eax),%edx
08506c63 +0x0b1:  mov    (%eax),%eax
08506c65 +0x0b3:  mov    %eax,-0xcc(%ebp)
08506c6b +0x0b9:  mov    %edx,-0xc8(%ebp)
08506c71 +0x0bf:  lea    -0xcc(%ebp),%eax
08506c77 +0x0c5:  mov    %eax,0x4(%esp)
08506c7b +0x0c9:  lea    -0xd8(%ebp),%eax
08506c81 +0x0cf:  mov    %eax,(%esp)
08506c84 +0x0d2:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08506c89 +0x0d7:  mov    -0xd8(%ebp),%eax
08506c8f +0x0dd:  mov    %eax,-0x2c(%ebp)
08506c92 +0x0e0:  mov    -0xd4(%ebp),%eax
08506c98 +0x0e6:  mov    %eax,-0xe0(%ebp)
08506c9e +0x0ec:  cmpl   $0x0,-0x2c(%ebp)
08506ca2 +0x0f0:  jne    08506f74 <+0x3c2>
08506ca8 +0x0f6:  mov    -0xe0(%ebp),%eax
08506cae +0x0fc:  cmp    $0x7a11f,%eax
08506cb3 +0x101:  jle    08506d5d <+0x1ab>
08506cb9 +0x107:  mov    0x8(%ebp),%eax
08506cbc +0x10a:  mov    (%eax),%eax
08506cbe +0x10c:  test   %eax,%eax
08506cc0 +0x10e:  je     08506d5d <+0x1ab>
08506cc6 +0x114:  mov    0x14(%ebp),%eax
08506cc9 +0x117:  mov    %eax,-0x294(%ebp)
08506ccf +0x11d:  mov    0x8(%ebp),%eax
08506cd2 +0x120:  mov    (%eax),%eax
08506cd4 +0x122:  movl   $0xffffffff,0x4(%esp)
08506cdc +0x12a:  mov    %eax,(%esp)
08506cdf +0x12d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08506ce4 +0x132:  mov    %eax,%esi
08506ce6 +0x134:  mov    0x8(%ebp),%eax
08506ce9 +0x137:  mov    (%eax),%eax
08506ceb +0x139:  mov    %eax,(%esp)
08506cee +0x13c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08506cf3 +0x141:  movl   $0x0,0x4(%esp)
08506cfb +0x149:  mov    %eax,(%esp)
08506cfe +0x14c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08506d03 +0x151:  mov    %eax,%ebx
08506d05 +0x153:  mov    -0xe0(%ebp),%edi
08506d0b +0x159:  movl   $0x4,0xc(%esp)
08506d13 +0x161:  movl   $0x1dc7,0x8(%esp)
08506d1b +0x169:  movl   $&_ZZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_E19__PRETTY_FUNCTION__,0x4(%esp)
08506d23 +0x171:  lea    -0xc4(%ebp),%eax
08506d29 +0x177:  mov    %eax,(%esp)
08506d2c +0x17a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08506d31 +0x17f:  mov    -0x294(%ebp),%eax
08506d37 +0x185:  mov    %eax,0x14(%esp)
08506d3b +0x189:  mov    %esi,0x10(%esp)
08506d3f +0x18d:  mov    %ebx,0xc(%esp)
08506d43 +0x191:  mov    %edi,0x8(%esp)
08506d47 +0x195:  movl   $"Quest reward money(%d) mid(%s) characno(%d) reason(%d)",0x4(%esp)
08506d4f +0x19d:  lea    -0xc4(%ebp),%eax
08506d55 +0x1a3:  mov    %eax,(%esp)
08506d58 +0x1a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08506d5d +0x1ab:  mov    0x8(%ebp),%eax
08506d60 +0x1ae:  mov    (%eax),%eax
08506d62 +0x1b0:  test   %eax,%eax
08506d64 +0x1b2:  je     08506d7e <+0x1cc>
08506d66 +0x1b4:  mov    0x8(%ebp),%eax
08506d69 +0x1b7:  mov    (%eax),%eax
08506d6b +0x1b9:  mov    %eax,(%esp)
08506d6e +0x1bc:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08506d73 +0x1c1:  test   %eax,%eax
08506d75 +0x1c3:  je     08506d7e <+0x1cc>
08506d77 +0x1c5:  mov    $0x1,%eax
08506d7c +0x1ca:  jmp    08506d83 <+0x1d1>
08506d7e +0x1cc:  mov    $0x0,%eax
08506d83 +0x1d1:  test   %al,%al
08506d85 +0x1d3:  je     08506dc3 <+0x211>
08506d87 +0x1d5:  mov    -0xe0(%ebp),%ebx
08506d8d +0x1db:  mov    0x8(%ebp),%eax
08506d90 +0x1de:  mov    (%eax),%eax
08506d92 +0x1e0:  mov    %eax,(%esp)
08506d95 +0x1e3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08506d9a +0x1e8:  movl   $0x0,0x10(%esp)
08506da2 +0x1f0:  movl   $0x1,0xc(%esp)
08506daa +0x1f8:  mov    0x14(%ebp),%edx
08506dad +0x1fb:  mov    %edx,0x8(%esp)
08506db1 +0x1ff:  mov    %ebx,0x4(%esp)
08506db5 +0x203:  mov    %eax,(%esp)
08506db8 +0x206:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08506dbd +0x20b:  mov    %eax,-0xe0(%ebp)
08506dc3 +0x211:  movl   $0x0,-0xb4(%ebp)
08506dcd +0x21b:  lea    -0xb4(%ebp),%eax
08506dd3 +0x221:  mov    %eax,0x4(%esp)
08506dd7 +0x225:  mov    0x10(%ebp),%eax
08506dda +0x228:  mov    %eax,(%esp)
08506ddd +0x22b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08506de2 +0x230:  movl   $0x0,-0xb0(%ebp)
08506dec +0x23a:  lea    -0xb0(%ebp),%eax
08506df2 +0x240:  mov    %eax,0x4(%esp)
08506df6 +0x244:  mov    0x10(%ebp),%eax
08506df9 +0x247:  mov    %eax,(%esp)
08506dfc +0x24a:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08506e01 +0x24f:  lea    -0xe0(%ebp),%eax
08506e07 +0x255:  mov    %eax,0x4(%esp)
08506e0b +0x259:  mov    0x10(%ebp),%eax
08506e0e +0x25c:  mov    %eax,(%esp)
08506e11 +0x25f:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08506e16 +0x264:  addl   $0x1,-0x34(%ebp)
08506e1a +0x268:  lea    -0xac(%ebp),%eax
08506e20 +0x26e:  movl   $0x0,0x8(%esp)
08506e28 +0x276:  lea    -0xdc(%ebp),%edx
08506e2e +0x27c:  mov    %edx,0x4(%esp)
08506e32 +0x280:  mov    %eax,(%esp)
08506e35 +0x283:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08506e3a +0x288:  sub    $0x4,%esp
08506e3d +0x28b:  cmpl   $0x3,0x14(%ebp)
08506e41 +0x28f:  jne    08506e4c <+0x29a>
08506e43 +0x291:  mov    -0xe0(%ebp),%eax
08506e49 +0x297:  add    %eax,-0x28(%ebp)
08506e4c +0x29a:  mov    -0xd4(%ebp),%edx
08506e52 +0x2a0:  mov    -0xe0(%ebp),%eax
08506e58 +0x2a6:  cmp    %eax,%edx
08506e5a +0x2a8:  jle    08507a39 <+0xe87>
08506e60 +0x2ae:  cmpb   $0x0,-0x28c(%ebp)
08506e67 +0x2b5:  je     08507a3c <+0xe8a>
08506e6d +0x2bb:  movl   $0x0,0xc(%esp)
08506e75 +0x2c3:  mov    0x20(%ebp),%eax
08506e78 +0x2c6:  mov    %eax,0x8(%esp)
08506e7c +0x2ca:  movl   $0x4,0x4(%esp)
08506e84 +0x2d2:  movl   $&g_scriptStringManager_,(%esp)
08506e8b +0x2d9:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08506e90 +0x2de:  movl   $0x14,0x8(%esp)
08506e98 +0x2e6:  mov    %eax,0x4(%esp)
08506e9c +0x2ea:  lea    -0xf9(%ebp),%eax
08506ea2 +0x2f0:  mov    %eax,(%esp)
08506ea5 +0x2f3:  call   0807d8d0 <_init+0x1c8>
08506eaa +0x2f8:  movl   $0x0,0xc(%esp)
08506eb2 +0x300:  mov    0x24(%ebp),%eax
08506eb5 +0x303:  mov    %eax,0x8(%esp)
08506eb9 +0x307:  movl   $0x4,0x4(%esp)
08506ec1 +0x30f:  movl   $&g_scriptStringManager_,(%esp)
08506ec8 +0x316:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08506ecd +0x31b:  movl   $0xff,0x8(%esp)
08506ed5 +0x323:  mov    %eax,0x4(%esp)
08506ed9 +0x327:  lea    -0x285(%ebp),%eax
08506edf +0x32d:  mov    %eax,(%esp)
08506ee2 +0x330:  call   0807d8d0 <_init+0x1c8>
08506ee7 +0x335:  mov    0x8(%ebp),%eax
08506eea +0x338:  mov    (%eax),%eax
08506eec +0x33a:  mov    %eax,(%esp)
08506eef +0x33d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08506ef4 +0x342:  mov    %eax,%ebx
08506ef6 +0x344:  lea    -0x285(%ebp),%eax
08506efc +0x34a:  mov    %eax,(%esp)
08506eff +0x34d:  call   0807e3b0 <_init+0xca8>
08506f04 +0x352:  mov    %eax,%esi
08506f06 +0x354:  mov    0x8(%ebp),%eax
08506f09 +0x357:  mov    (%eax),%eax
08506f0b +0x359:  mov    %eax,(%esp)
08506f0e +0x35c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08506f13 +0x361:  mov    -0xd4(%ebp),%ecx
08506f19 +0x367:  mov    -0xe0(%ebp),%edx
08506f1f +0x36d:  mov    %ecx,%edi
08506f21 +0x36f:  sub    %edx,%edi
08506f23 +0x371:  mov    %edi,%edx
08506f25 +0x373:  movl   $0x0,0x24(%esp)
08506f2d +0x37b:  movl   $0x0,0x20(%esp)
08506f35 +0x383:  mov    %ebx,0x1c(%esp)
08506f39 +0x387:  movl   $0x0,0x18(%esp)
08506f41 +0x38f:  mov    %esi,0x14(%esp)
08506f45 +0x393:  lea    -0x285(%ebp),%ecx
08506f4b +0x399:  mov    %ecx,0x10(%esp)
08506f4f +0x39d:  mov    %eax,0xc(%esp)
08506f53 +0x3a1:  mov    %edx,0x8(%esp)
08506f57 +0x3a5:  lea    -0x185(%ebp),%eax
08506f5d +0x3ab:  mov    %eax,0x4(%esp)
08506f61 +0x3af:  lea    -0xf9(%ebp),%eax
08506f67 +0x3b5:  mov    %eax,(%esp)
08506f6a +0x3b8:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08506f6f +0x3bd:  jmp    08507a46 <+0xe94>
08506f74 +0x3c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08506f79 +0x3c7:  mov    -0x2c(%ebp),%edx
08506f7c +0x3ca:  mov    %edx,0x4(%esp)
08506f80 +0x3ce:  mov    %eax,(%esp)
08506f83 +0x3d1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08506f88 +0x3d6:  mov    %eax,-0x30(%ebp)
08506f8b +0x3d9:  cmpl   $0x0,-0x30(%ebp)
08506f8f +0x3dd:  jne    08506ffc <+0x44a>
08506f91 +0x3df:  movl   $0x5,0xc(%esp)
08506f99 +0x3e7:  movl   $0x1e14,0x8(%esp)
08506fa1 +0x3ef:  movl   $&_ZZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_E19__PRETTY_FUNCTION__,0x4(%esp)
08506fa9 +0x3f7:  lea    -0xa8(%ebp),%eax
08506faf +0x3fd:  mov    %eax,(%esp)
08506fb2 +0x400:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08506fb7 +0x405:  mov    -0x2c(%ebp),%eax
08506fba +0x408:  mov    %eax,0x8(%esp)
08506fbe +0x40c:  movl   $"CInventory::insert_event_items, G_CDataManager()->find_item(%d)",0x4(%esp)
08506fc6 +0x414:  lea    -0xa8(%ebp),%eax
08506fcc +0x41a:  mov    %eax,(%esp)
08506fcf +0x41d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08506fd4 +0x422:  lea    -0x98(%ebp),%eax
08506fda +0x428:  movl   $0x0,0x8(%esp)
08506fe2 +0x430:  lea    -0xdc(%ebp),%edx
08506fe8 +0x436:  mov    %edx,0x4(%esp)
08506fec +0x43a:  mov    %eax,(%esp)
08506fef +0x43d:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08506ff4 +0x442:  sub    $0x4,%esp
08506ff7 +0x445:  jmp    08507a46 <+0xe94>
08506ffc +0x44a:  mov    -0x2c(%ebp),%eax
08506fff +0x44d:  mov    %eax,-0x183(%ebp)
08507005 +0x453:  mov    -0x30(%ebp),%eax
08507008 +0x456:  mov    %eax,(%esp)
0850700b +0x459:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08507010 +0x45e:  test   %al,%al
08507012 +0x460:  je     0850732f <+0x77d>
08507018 +0x466:  mov    -0xe0(%ebp),%eax
0850701e +0x46c:  mov    %eax,-0x17e(%ebp)
08507024 +0x472:  mov    -0x30(%ebp),%eax
08507027 +0x475:  mov    (%eax),%eax
08507029 +0x477:  add    $0x8,%eax
0850702c +0x47a:  mov    (%eax),%edx
0850702e +0x47c:  lea    -0x185(%ebp),%eax
08507034 +0x482:  mov    %eax,0x4(%esp)
08507038 +0x486:  mov    -0x30(%ebp),%eax
0850703b +0x489:  mov    %eax,(%esp)
0850703e +0x48c:  call   *%edx
08507040 +0x48e:  movl   $0x1,0x4c(%esp)
08507048 +0x496:  movl   $0x1,0x48(%esp)
08507050 +0x49e:  mov    0x18(%ebp),%eax
08507053 +0x4a1:  mov    %eax,0x44(%esp)
08507057 +0x4a5:  mov    -0x185(%ebp),%eax
0850705d +0x4ab:  mov    %eax,0x4(%esp)
08507061 +0x4af:  mov    -0x181(%ebp),%eax
08507067 +0x4b5:  mov    %eax,0x8(%esp)
0850706b +0x4b9:  mov    -0x17d(%ebp),%eax
08507071 +0x4bf:  mov    %eax,0xc(%esp)
08507075 +0x4c3:  mov    -0x179(%ebp),%eax
0850707b +0x4c9:  mov    %eax,0x10(%esp)
0850707f +0x4cd:  mov    -0x175(%ebp),%eax
08507085 +0x4d3:  mov    %eax,0x14(%esp)
08507089 +0x4d7:  mov    -0x171(%ebp),%eax
0850708f +0x4dd:  mov    %eax,0x18(%esp)
08507093 +0x4e1:  mov    -0x16d(%ebp),%eax
08507099 +0x4e7:  mov    %eax,0x1c(%esp)
0850709d +0x4eb:  mov    -0x169(%ebp),%eax
085070a3 +0x4f1:  mov    %eax,0x20(%esp)
085070a7 +0x4f5:  mov    -0x165(%ebp),%eax
085070ad +0x4fb:  mov    %eax,0x24(%esp)
085070b1 +0x4ff:  mov    -0x161(%ebp),%eax
085070b7 +0x505:  mov    %eax,0x28(%esp)
085070bb +0x509:  mov    -0x15d(%ebp),%eax
085070c1 +0x50f:  mov    %eax,0x2c(%esp)
085070c5 +0x513:  mov    -0x159(%ebp),%eax
085070cb +0x519:  mov    %eax,0x30(%esp)
085070cf +0x51d:  mov    -0x155(%ebp),%eax
085070d5 +0x523:  mov    %eax,0x34(%esp)
085070d9 +0x527:  mov    -0x151(%ebp),%eax
085070df +0x52d:  mov    %eax,0x38(%esp)
085070e3 +0x531:  mov    -0x14d(%ebp),%eax
085070e9 +0x537:  mov    %eax,0x3c(%esp)
085070ed +0x53b:  movzbl -0x149(%ebp),%eax
085070f4 +0x542:  mov    %al,0x40(%esp)
085070f8 +0x546:  mov    0x8(%ebp),%eax
085070fb +0x549:  mov    %eax,(%esp)
085070fe +0x54c:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08507103 +0x551:  mov    %eax,-0xe4(%ebp)
08507109 +0x557:  mov    -0xe4(%ebp),%eax
0850710f +0x55d:  cmp    $0xffffffff,%eax
08507112 +0x560:  jne    08507246 <+0x694>
08507118 +0x566:  movzbl -0x28c(%ebp),%eax
0850711f +0x56d:  xor    $0x1,%eax
08507122 +0x570:  test   %al,%al
08507124 +0x572:  jne    08507a80 <+0xece>
0850712a +0x578:  movl   $0x0,0xc(%esp)
08507132 +0x580:  mov    0x20(%ebp),%eax
08507135 +0x583:  mov    %eax,0x8(%esp)
08507139 +0x587:  movl   $0x4,0x4(%esp)
08507141 +0x58f:  movl   $&g_scriptStringManager_,(%esp)
08507148 +0x596:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0850714d +0x59b:  movl   $0x14,0x8(%esp)
08507155 +0x5a3:  mov    %eax,0x4(%esp)
08507159 +0x5a7:  lea    -0x10e(%ebp),%eax
0850715f +0x5ad:  mov    %eax,(%esp)
08507162 +0x5b0:  call   0807d8d0 <_init+0x1c8>
08507167 +0x5b5:  movl   $0x0,0xc(%esp)
0850716f +0x5bd:  mov    0x24(%ebp),%eax
08507172 +0x5c0:  mov    %eax,0x8(%esp)
08507176 +0x5c4:  movl   $0x4,0x4(%esp)
0850717e +0x5cc:  movl   $&g_scriptStringManager_,(%esp)
08507185 +0x5d3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0850718a +0x5d8:  movl   $0xff,0x8(%esp)
08507192 +0x5e0:  mov    %eax,0x4(%esp)
08507196 +0x5e4:  lea    -0x285(%ebp),%eax
0850719c +0x5ea:  mov    %eax,(%esp)
0850719f +0x5ed:  call   0807d8d0 <_init+0x1c8>
085071a4 +0x5f2:  mov    0x8(%ebp),%eax
085071a7 +0x5f5:  mov    (%eax),%eax
085071a9 +0x5f7:  mov    %eax,(%esp)
085071ac +0x5fa:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085071b1 +0x5ff:  mov    %eax,%ebx
085071b3 +0x601:  lea    -0x285(%ebp),%eax
085071b9 +0x607:  mov    %eax,(%esp)
085071bc +0x60a:  call   0807e3b0 <_init+0xca8>
085071c1 +0x60f:  mov    %eax,%esi
085071c3 +0x611:  mov    0x8(%ebp),%eax
085071c6 +0x614:  mov    (%eax),%eax
085071c8 +0x616:  mov    %eax,(%esp)
085071cb +0x619:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085071d0 +0x61e:  movl   $0x0,0x24(%esp)
085071d8 +0x626:  movl   $0x0,0x20(%esp)
085071e0 +0x62e:  mov    %ebx,0x1c(%esp)
085071e4 +0x632:  movl   $0x0,0x18(%esp)
085071ec +0x63a:  mov    %esi,0x14(%esp)
085071f0 +0x63e:  lea    -0x285(%ebp),%edx
085071f6 +0x644:  mov    %edx,0x10(%esp)
085071fa +0x648:  mov    %eax,0xc(%esp)
085071fe +0x64c:  movl   $0x0,0x8(%esp)
08507206 +0x654:  lea    -0x185(%ebp),%eax
0850720c +0x65a:  mov    %eax,0x4(%esp)
08507210 +0x65e:  lea    -0x10e(%ebp),%eax
08507216 +0x664:  mov    %eax,(%esp)
08507219 +0x667:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0850721e +0x66c:  lea    -0x94(%ebp),%eax
08507224 +0x672:  movl   $0x0,0x8(%esp)
0850722c +0x67a:  lea    -0xdc(%ebp),%edx
08507232 +0x680:  mov    %edx,0x4(%esp)
08507236 +0x684:  mov    %eax,(%esp)
08507239 +0x687:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850723e +0x68c:  sub    $0x4,%esp
08507241 +0x68f:  jmp    08507a46 <+0xe94>
08507246 +0x694:  addl   $0x1,-0x34(%ebp)
0850724a +0x698:  lea    -0xe4(%ebp),%eax
08507250 +0x69e:  mov    %eax,0x4(%esp)
08507254 +0x6a2:  mov    0x10(%ebp),%eax
08507257 +0x6a5:  mov    %eax,(%esp)
0850725a +0x6a8:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850725f +0x6ad:  mov    -0x183(%ebp),%eax
08507265 +0x6b3:  mov    %eax,-0x90(%ebp)
0850726b +0x6b9:  lea    -0x90(%ebp),%eax
08507271 +0x6bf:  mov    %eax,0x4(%esp)
08507275 +0x6c3:  mov    0x10(%ebp),%eax
08507278 +0x6c6:  mov    %eax,(%esp)
0850727b +0x6c9:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08507280 +0x6ce:  lea    -0x185(%ebp),%eax
08507286 +0x6d4:  add    $0x7,%eax
08507289 +0x6d7:  mov    %eax,0x4(%esp)
0850728d +0x6db:  mov    0x10(%ebp),%eax
08507290 +0x6de:  mov    %eax,(%esp)
08507293 +0x6e1:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08507298 +0x6e6:  cmpl   $0x8,0x18(%ebp)
0850729c +0x6ea:  jne    08507a17 <+0xe65>
085072a2 +0x6f0:  mov    0x8(%ebp),%eax
085072a5 +0x6f3:  mov    (%eax),%eax
085072a7 +0x6f5:  test   %eax,%eax
085072a9 +0x6f7:  je     085072da <+0x728>
085072ab +0x6f9:  mov    0x8(%ebp),%eax
085072ae +0x6fc:  mov    (%eax),%esi
085072b0 +0x6fe:  mov    -0x17e(%ebp),%ebx
085072b6 +0x704:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
085072bb +0x709:  movl   $0x4,0x10(%esp)
085072c3 +0x711:  mov    %esi,0xc(%esp)
085072c7 +0x715:  mov    %ebx,0x8(%esp)
085072cb +0x719:  mov    -0x30(%ebp),%edx
085072ce +0x71c:  mov    %edx,0x4(%esp)
085072d2 +0x720:  mov    %eax,(%esp)
085072d5 +0x723:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
085072da +0x728:  movl   $0x0,-0x114(%ebp)
085072e4 +0x732:  mov    -0x17e(%ebp),%eax
085072ea +0x738:  movswl %ax,%ebx
085072ed +0x73b:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085072f2 +0x740:  lea    -0x114(%ebp),%edx
085072f8 +0x746:  mov    %edx,0x14(%esp)
085072fc +0x74a:  movl   $0x0,0x10(%esp)
08507304 +0x752:  mov    %ebx,0xc(%esp)
08507308 +0x756:  mov    -0x30(%ebp),%edx
0850730b +0x759:  mov    %edx,0x8(%esp)
0850730f +0x75d:  lea    -0x185(%ebp),%edx
08507315 +0x763:  mov    %edx,0x4(%esp)
08507319 +0x767:  mov    %eax,(%esp)
0850731c +0x76a:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
08507321 +0x76f:  mov    -0x114(%ebp),%eax
08507327 +0x775:  add    %eax,-0x28(%ebp)
0850732a +0x778:  jmp    08507a17 <+0xe65>
0850732f +0x77d:  mov    -0x30(%ebp),%eax
08507332 +0x780:  mov    (%eax),%eax
08507334 +0x782:  add    $0x10,%eax
08507337 +0x785:  mov    (%eax),%edx
08507339 +0x787:  mov    -0x30(%ebp),%eax
0850733c +0x78a:  mov    %eax,(%esp)
0850733f +0x78d:  call   *%edx
08507341 +0x78f:  test   %al,%al
08507343 +0x791:  je     08507530 <+0x97e>
08507349 +0x797:  cmpl   $0x8,0x18(%ebp)
0850734d +0x79b:  jne    08507a3f <+0xe8d>
08507353 +0x7a1:  mov    0x8(%ebp),%eax
08507356 +0x7a4:  mov    (%eax),%eax
08507358 +0x7a6:  mov    %eax,(%esp)
0850735b +0x7a9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08507360 +0x7ae:  lea    -0x12c(%ebp),%edx
08507366 +0x7b4:  mov    %edx,0x8(%esp)
0850736a +0x7b8:  mov    %eax,0x4(%esp)
0850736e +0x7bc:  movl   $0x2,(%esp)
08507375 +0x7c3:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0850737a +0x7c8:  mov    %eax,%ebx
0850737c +0x7ca:  mov    -0x30(%ebp),%eax
0850737f +0x7cd:  mov    %eax,(%esp)
08507382 +0x7d0:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08507387 +0x7d5:  movl   $0x0,0x24(%esp)
0850738f +0x7dd:  movl   $0x0,0x20(%esp)
08507397 +0x7e5:  movl   $0x8,0x1c(%esp)
0850739f +0x7ed:  mov    %ebx,0x18(%esp)
085073a3 +0x7f1:  movl   $0xffffffff,0x14(%esp)
085073ab +0x7f9:  movl   $0x0,0x10(%esp)
085073b3 +0x801:  movl   $0x0,0xc(%esp)
085073bb +0x809:  mov    %eax,0x8(%esp)
085073bf +0x80d:  mov    -0x2c(%ebp),%eax
085073c2 +0x810:  mov    %eax,0x4(%esp)
085073c6 +0x814:  mov    0x8(%ebp),%eax
085073c9 +0x817:  mov    %eax,(%esp)
085073cc +0x81a:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
085073d1 +0x81f:  mov    %eax,-0xe4(%ebp)
085073d7 +0x825:  mov    -0xe4(%ebp),%eax
085073dd +0x82b:  cmp    $0xffffffff,%eax
085073e0 +0x82e:  jne    0850747f <+0x8cd>
085073e6 +0x834:  movzbl -0x28c(%ebp),%eax
085073ed +0x83b:  xor    $0x1,%eax
085073f0 +0x83e:  test   %al,%al
085073f2 +0x840:  jne    08507a83 <+0xed1>
085073f8 +0x846:  movl   $0x0,-0x20(%ebp)
085073ff +0x84d:  mov    0x8(%ebp),%eax
08507402 +0x850:  mov    (%eax),%eax
08507404 +0x852:  mov    %eax,(%esp)
08507407 +0x855:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0850740c +0x85a:  mov    %eax,%edx
0850740e +0x85c:  mov    0x8(%ebp),%eax
08507411 +0x85f:  mov    (%eax),%eax
08507413 +0x861:  movl   $0x0,0x20(%esp)
0850741b +0x869:  movl   $0x0,0x1c(%esp)
08507423 +0x871:  lea    -0x12c(%ebp),%ecx
08507429 +0x877:  mov    %ecx,0x18(%esp)
0850742d +0x87b:  movl   $0xffffffff,0x14(%esp)
08507435 +0x883:  movl   $0x0,0x10(%esp)
0850743d +0x88b:  mov    -0x20(%ebp),%ecx
08507440 +0x88e:  mov    %ecx,0xc(%esp)
08507444 +0x892:  mov    -0x2c(%ebp),%ecx
08507447 +0x895:  mov    %ecx,0x8(%esp)
0850744b +0x899:  mov    %edx,0x4(%esp)
0850744f +0x89d:  mov    %eax,(%esp)
08507452 +0x8a0:  call   085561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
08507457 +0x8a5:  lea    -0x8c(%ebp),%eax
0850745d +0x8ab:  movl   $0x0,0x8(%esp)
08507465 +0x8b3:  lea    -0xdc(%ebp),%edx
0850746b +0x8b9:  mov    %edx,0x4(%esp)
0850746f +0x8bd:  mov    %eax,(%esp)
08507472 +0x8c0:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507477 +0x8c5:  sub    $0x4,%esp
0850747a +0x8c8:  jmp    08507a46 <+0xe94>
0850747f +0x8cd:  addl   $0x1,-0x34(%ebp)
08507483 +0x8d1:  lea    -0xe4(%ebp),%eax
08507489 +0x8d7:  mov    %eax,0x4(%esp)
0850748d +0x8db:  mov    0x10(%ebp),%eax
08507490 +0x8de:  mov    %eax,(%esp)
08507493 +0x8e1:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08507498 +0x8e6:  mov    -0x183(%ebp),%eax
0850749e +0x8ec:  mov    %eax,-0x88(%ebp)
085074a4 +0x8f2:  lea    -0x88(%ebp),%eax
085074aa +0x8f8:  mov    %eax,0x4(%esp)
085074ae +0x8fc:  mov    0x10(%ebp),%eax
085074b1 +0x8ff:  mov    %eax,(%esp)
085074b4 +0x902:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
085074b9 +0x907:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085074c0 +0x90e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085074c5 +0x913:  mov    %eax,-0x24(%ebp)
085074c8 +0x916:  mov    -0xe4(%ebp),%edx
085074ce +0x91c:  lea    -0x7d(%ebp),%eax
085074d1 +0x91f:  mov    %edx,0xc(%esp)
085074d5 +0x923:  movl   $0x2,0x8(%esp)
085074dd +0x92b:  mov    0x8(%ebp),%edx
085074e0 +0x92e:  mov    %edx,0x4(%esp)
085074e4 +0x932:  mov    %eax,(%esp)
085074e7 +0x935:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085074ec +0x93a:  sub    $0x4,%esp
085074ef +0x93d:  mov    -0x76(%ebp),%ebx
085074f2 +0x940:  mov    0x8(%ebp),%eax
085074f5 +0x943:  mov    %eax,(%esp)
085074f8 +0x946:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085074fd +0x94b:  mov    -0x24(%ebp),%edx
08507500 +0x94e:  mov    %edx,0x8(%esp)
08507504 +0x952:  mov    %ebx,0x4(%esp)
08507508 +0x956:  mov    %eax,(%esp)
0850750b +0x959:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08507510 +0x95e:  mov    %eax,-0x84(%ebp)
08507516 +0x964:  lea    -0x84(%ebp),%eax
0850751c +0x96a:  mov    %eax,0x4(%esp)
08507520 +0x96e:  mov    0x10(%ebp),%eax
08507523 +0x971:  mov    %eax,(%esp)
08507526 +0x974:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0850752b +0x979:  jmp    08507a17 <+0xe65>
08507530 +0x97e:  mov    -0x30(%ebp),%eax
08507533 +0x981:  mov    (%eax),%eax
08507535 +0x983:  add    $0x14,%eax
08507538 +0x986:  mov    (%eax),%edx
0850753a +0x988:  mov    -0x30(%ebp),%eax
0850753d +0x98b:  mov    %eax,(%esp)
08507540 +0x98e:  call   *%edx
08507542 +0x990:  test   %al,%al
08507544 +0x992:  je     08507564 <+0x9b2>
08507546 +0x994:  mov    -0x30(%ebp),%eax
08507549 +0x997:  mov    (%eax),%eax
0850754b +0x999:  add    $0xc,%eax
0850754e +0x99c:  mov    (%eax),%edx
08507550 +0x99e:  mov    -0x30(%ebp),%eax
08507553 +0x9a1:  mov    %eax,(%esp)
08507556 +0x9a4:  call   *%edx
08507558 +0x9a6:  cmp    $0x16,%eax
0850755b +0x9a9:  jne    08507564 <+0x9b2>
0850755d +0x9ab:  mov    $0x1,%eax
08507562 +0x9b0:  jmp    08507569 <+0x9b7>
08507564 +0x9b2:  mov    $0x0,%eax
08507569 +0x9b7:  test   %al,%al
0850756b +0x9b9:  je     0850774f <+0xb9d>
08507571 +0x9bf:  cmpl   $0x8,0x18(%ebp)
08507575 +0x9c3:  jne    08507a42 <+0xe90>
0850757b +0x9c9:  mov    -0x2c(%ebp),%eax
0850757e +0x9cc:  mov    %eax,-0x183(%ebp)
08507584 +0x9d2:  mov    -0xe0(%ebp),%ebx
0850758a +0x9d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850758f +0x9dd:  mov    0xc(%eax),%eax
08507592 +0x9e0:  mov    %ebx,0xc(%esp)
08507596 +0x9e4:  lea    -0x185(%ebp),%edx
0850759c +0x9ea:  mov    %edx,0x8(%esp)
085075a0 +0x9ee:  movl   $0x0,0x4(%esp)
085075a8 +0x9f6:  mov    %eax,(%esp)
085075ab +0x9f9:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085075b0 +0x9fe:  movzbl -0x184(%ebp),%eax
085075b7 +0xa05:  cmp    $0x5,%al
085075b9 +0xa07:  jne    08507a17 <+0xe65>
085075bf +0xa0d:  lea    -0x185(%ebp),%eax
085075c5 +0xa13:  mov    %eax,(%esp)
085075c8 +0xa16:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
085075cd +0xa1b:  xor    $0x1,%eax
085075d0 +0xa1e:  test   %al,%al
085075d2 +0xa20:  jne    08507a45 <+0xe93>
085075d8 +0xa26:  movl   $0x0,0x4c(%esp)
085075e0 +0xa2e:  movl   $0x1,0x48(%esp)
085075e8 +0xa36:  movl   $0x8,0x44(%esp)
085075f0 +0xa3e:  mov    -0x185(%ebp),%eax
085075f6 +0xa44:  mov    %eax,0x4(%esp)
085075fa +0xa48:  mov    -0x181(%ebp),%eax
08507600 +0xa4e:  mov    %eax,0x8(%esp)
08507604 +0xa52:  mov    -0x17d(%ebp),%eax
0850760a +0xa58:  mov    %eax,0xc(%esp)
0850760e +0xa5c:  mov    -0x179(%ebp),%eax
08507614 +0xa62:  mov    %eax,0x10(%esp)
08507618 +0xa66:  mov    -0x175(%ebp),%eax
0850761e +0xa6c:  mov    %eax,0x14(%esp)
08507622 +0xa70:  mov    -0x171(%ebp),%eax
08507628 +0xa76:  mov    %eax,0x18(%esp)
0850762c +0xa7a:  mov    -0x16d(%ebp),%eax
08507632 +0xa80:  mov    %eax,0x1c(%esp)
08507636 +0xa84:  mov    -0x169(%ebp),%eax
0850763c +0xa8a:  mov    %eax,0x20(%esp)
08507640 +0xa8e:  mov    -0x165(%ebp),%eax
08507646 +0xa94:  mov    %eax,0x24(%esp)
0850764a +0xa98:  mov    -0x161(%ebp),%eax
08507650 +0xa9e:  mov    %eax,0x28(%esp)
08507654 +0xaa2:  mov    -0x15d(%ebp),%eax
0850765a +0xaa8:  mov    %eax,0x2c(%esp)
0850765e +0xaac:  mov    -0x159(%ebp),%eax
08507664 +0xab2:  mov    %eax,0x30(%esp)
08507668 +0xab6:  mov    -0x155(%ebp),%eax
0850766e +0xabc:  mov    %eax,0x34(%esp)
08507672 +0xac0:  mov    -0x151(%ebp),%eax
08507678 +0xac6:  mov    %eax,0x38(%esp)
0850767c +0xaca:  mov    -0x14d(%ebp),%eax
08507682 +0xad0:  mov    %eax,0x3c(%esp)
08507686 +0xad4:  movzbl -0x149(%ebp),%eax
0850768d +0xadb:  mov    %al,0x40(%esp)
08507691 +0xadf:  mov    0x8(%ebp),%eax
08507694 +0xae2:  mov    %eax,(%esp)
08507697 +0xae5:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0850769c +0xaea:  mov    %eax,-0xe4(%ebp)
085076a2 +0xaf0:  mov    -0xe4(%ebp),%eax
085076a8 +0xaf6:  test   %eax,%eax
085076aa +0xaf8:  js     08507a17 <+0xe65>
085076b0 +0xafe:  mov    -0x30(%ebp),%eax
085076b3 +0xb01:  mov    %eax,(%esp)
085076b6 +0xb04:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
085076bb +0xb09:  mov    %eax,%esi
085076bd +0xb0b:  mov    -0x30(%ebp),%eax
085076c0 +0xb0e:  mov    %eax,(%esp)
085076c3 +0xb11:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
085076c8 +0xb16:  mov    %eax,%ebx
085076ca +0xb18:  mov    -0xe4(%ebp),%edi
085076d0 +0xb1e:  mov    0x8(%ebp),%eax
085076d3 +0xb21:  mov    %eax,(%esp)
085076d6 +0xb24:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
085076db +0xb29:  mov    %esi,0x14(%esp)
085076df +0xb2d:  mov    %ebx,0x10(%esp)
085076e3 +0xb31:  movl   $0x8,0xc(%esp)
085076eb +0xb39:  mov    %edi,0x8(%esp)
085076ef +0xb3d:  lea    -0x185(%ebp),%edx
085076f5 +0xb43:  mov    %edx,0x4(%esp)
085076f9 +0xb47:  mov    %eax,(%esp)
085076fc +0xb4a:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
08507701 +0xb4f:  addl   $0x1,-0x34(%ebp)
08507705 +0xb53:  lea    -0xe4(%ebp),%eax
0850770b +0xb59:  mov    %eax,0x4(%esp)
0850770f +0xb5d:  mov    0x10(%ebp),%eax
08507712 +0xb60:  mov    %eax,(%esp)
08507715 +0xb63:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850771a +0xb68:  mov    -0x183(%ebp),%eax
08507720 +0xb6e:  mov    %eax,-0x40(%ebp)
08507723 +0xb71:  lea    -0x40(%ebp),%eax
08507726 +0xb74:  mov    %eax,0x4(%esp)
0850772a +0xb78:  mov    0x10(%ebp),%eax
0850772d +0xb7b:  mov    %eax,(%esp)
08507730 +0xb7e:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08507735 +0xb83:  lea    -0xe0(%ebp),%eax
0850773b +0xb89:  mov    %eax,0x4(%esp)
0850773f +0xb8d:  mov    0x10(%ebp),%eax
08507742 +0xb90:  mov    %eax,(%esp)
08507745 +0xb93:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850774a +0xb98:  jmp    08507a17 <+0xe65>
0850774f +0xb9d:  movl   $0x0,-0x1c(%ebp)
08507756 +0xba4:  jmp    08507a00 <+0xe4e>
0850775b +0xba9:  mov    -0x30(%ebp),%eax
0850775e +0xbac:  mov    (%eax),%eax
08507760 +0xbae:  add    $0x8,%eax
08507763 +0xbb1:  mov    (%eax),%edx
08507765 +0xbb3:  lea    -0x185(%ebp),%eax
0850776b +0xbb9:  mov    %eax,0x4(%esp)
0850776f +0xbbd:  mov    -0x30(%ebp),%eax
08507772 +0xbc0:  mov    %eax,(%esp)
08507775 +0xbc3:  call   *%edx
08507777 +0xbc5:  movl   $0x1,0x4c(%esp)
0850777f +0xbcd:  movl   $0x1,0x48(%esp)
08507787 +0xbd5:  mov    0x18(%ebp),%eax
0850778a +0xbd8:  mov    %eax,0x44(%esp)
0850778e +0xbdc:  mov    -0x185(%ebp),%eax
08507794 +0xbe2:  mov    %eax,0x4(%esp)
08507798 +0xbe6:  mov    -0x181(%ebp),%eax
0850779e +0xbec:  mov    %eax,0x8(%esp)
085077a2 +0xbf0:  mov    -0x17d(%ebp),%eax
085077a8 +0xbf6:  mov    %eax,0xc(%esp)
085077ac +0xbfa:  mov    -0x179(%ebp),%eax
085077b2 +0xc00:  mov    %eax,0x10(%esp)
085077b6 +0xc04:  mov    -0x175(%ebp),%eax
085077bc +0xc0a:  mov    %eax,0x14(%esp)
085077c0 +0xc0e:  mov    -0x171(%ebp),%eax
085077c6 +0xc14:  mov    %eax,0x18(%esp)
085077ca +0xc18:  mov    -0x16d(%ebp),%eax
085077d0 +0xc1e:  mov    %eax,0x1c(%esp)
085077d4 +0xc22:  mov    -0x169(%ebp),%eax
085077da +0xc28:  mov    %eax,0x20(%esp)
085077de +0xc2c:  mov    -0x165(%ebp),%eax
085077e4 +0xc32:  mov    %eax,0x24(%esp)
085077e8 +0xc36:  mov    -0x161(%ebp),%eax
085077ee +0xc3c:  mov    %eax,0x28(%esp)
085077f2 +0xc40:  mov    -0x15d(%ebp),%eax
085077f8 +0xc46:  mov    %eax,0x2c(%esp)
085077fc +0xc4a:  mov    -0x159(%ebp),%eax
08507802 +0xc50:  mov    %eax,0x30(%esp)
08507806 +0xc54:  mov    -0x155(%ebp),%eax
0850780c +0xc5a:  mov    %eax,0x34(%esp)
08507810 +0xc5e:  mov    -0x151(%ebp),%eax
08507816 +0xc64:  mov    %eax,0x38(%esp)
0850781a +0xc68:  mov    -0x14d(%ebp),%eax
08507820 +0xc6e:  mov    %eax,0x3c(%esp)
08507824 +0xc72:  movzbl -0x149(%ebp),%eax
0850782b +0xc79:  mov    %al,0x40(%esp)
0850782f +0xc7d:  mov    0x8(%ebp),%eax
08507832 +0xc80:  mov    %eax,(%esp)
08507835 +0xc83:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0850783a +0xc88:  mov    %eax,-0xe4(%ebp)
08507840 +0xc8e:  mov    -0xe4(%ebp),%eax
08507846 +0xc94:  cmp    $0xffffffff,%eax
08507849 +0xc97:  jne    0850795a <+0xda8>
0850784f +0xc9d:  movzbl -0x28c(%ebp),%eax
08507856 +0xca4:  xor    $0x1,%eax
08507859 +0xca7:  test   %al,%al
0850785b +0xca9:  jne    08507a16 <+0xe64>
08507861 +0xcaf:  movl   $0x0,0xc(%esp)
08507869 +0xcb7:  mov    0x20(%ebp),%eax
0850786c +0xcba:  mov    %eax,0x8(%esp)
08507870 +0xcbe:  movl   $0x4,0x4(%esp)
08507878 +0xcc6:  movl   $&g_scriptStringManager_,(%esp)
0850787f +0xccd:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08507884 +0xcd2:  movl   $0x14,0x8(%esp)
0850788c +0xcda:  mov    %eax,0x4(%esp)
08507890 +0xcde:  lea    -0x141(%ebp),%eax
08507896 +0xce4:  mov    %eax,(%esp)
08507899 +0xce7:  call   0807d8d0 <_init+0x1c8>
0850789e +0xcec:  movl   $0x0,0xc(%esp)
085078a6 +0xcf4:  mov    0x24(%ebp),%eax
085078a9 +0xcf7:  mov    %eax,0x8(%esp)
085078ad +0xcfb:  movl   $0x4,0x4(%esp)
085078b5 +0xd03:  movl   $&g_scriptStringManager_,(%esp)
085078bc +0xd0a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085078c1 +0xd0f:  movl   $0xff,0x8(%esp)
085078c9 +0xd17:  mov    %eax,0x4(%esp)
085078cd +0xd1b:  lea    -0x285(%ebp),%eax
085078d3 +0xd21:  mov    %eax,(%esp)
085078d6 +0xd24:  call   0807d8d0 <_init+0x1c8>
085078db +0xd29:  mov    0x8(%ebp),%eax
085078de +0xd2c:  mov    (%eax),%eax
085078e0 +0xd2e:  mov    %eax,(%esp)
085078e3 +0xd31:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085078e8 +0xd36:  mov    %eax,%ebx
085078ea +0xd38:  lea    -0x285(%ebp),%eax
085078f0 +0xd3e:  mov    %eax,(%esp)
085078f3 +0xd41:  call   0807e3b0 <_init+0xca8>
085078f8 +0xd46:  mov    %eax,%esi
085078fa +0xd48:  mov    0x8(%ebp),%eax
085078fd +0xd4b:  mov    (%eax),%eax
085078ff +0xd4d:  mov    %eax,(%esp)
08507902 +0xd50:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08507907 +0xd55:  movl   $0x0,0x24(%esp)
0850790f +0xd5d:  movl   $0x0,0x20(%esp)
08507917 +0xd65:  mov    %ebx,0x1c(%esp)
0850791b +0xd69:  movl   $0x0,0x18(%esp)
08507923 +0xd71:  mov    %esi,0x14(%esp)
08507927 +0xd75:  lea    -0x285(%ebp),%edx
0850792d +0xd7b:  mov    %edx,0x10(%esp)
08507931 +0xd7f:  mov    %eax,0xc(%esp)
08507935 +0xd83:  movl   $0x0,0x8(%esp)
0850793d +0xd8b:  lea    -0x185(%ebp),%eax
08507943 +0xd91:  mov    %eax,0x4(%esp)
08507947 +0xd95:  lea    -0x141(%ebp),%eax
0850794d +0xd9b:  mov    %eax,(%esp)
08507950 +0xd9e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08507955 +0xda3:  jmp    085079fc <+0xe4a>
0850795a +0xda8:  addl   $0x1,-0x34(%ebp)
0850795e +0xdac:  lea    -0xe4(%ebp),%eax
08507964 +0xdb2:  mov    %eax,0x4(%esp)
08507968 +0xdb6:  mov    0x10(%ebp),%eax
0850796b +0xdb9:  mov    %eax,(%esp)
0850796e +0xdbc:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08507973 +0xdc1:  mov    -0x183(%ebp),%eax
08507979 +0xdc7:  mov    %eax,-0x3c(%ebp)
0850797c +0xdca:  lea    -0x3c(%ebp),%eax
0850797f +0xdcd:  mov    %eax,0x4(%esp)
08507983 +0xdd1:  mov    0x10(%ebp),%eax
08507986 +0xdd4:  mov    %eax,(%esp)
08507989 +0xdd7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0850798e +0xddc:  lea    -0x185(%ebp),%eax
08507994 +0xde2:  add    $0x7,%eax
08507997 +0xde5:  mov    %eax,0x4(%esp)
0850799b +0xde9:  mov    0x10(%ebp),%eax
0850799e +0xdec:  mov    %eax,(%esp)
085079a1 +0xdef:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085079a6 +0xdf4:  cmpl   $0x8,0x18(%ebp)
085079aa +0xdf8:  jne    085079fc <+0xe4a>
085079ac +0xdfa:  movl   $0x0,-0x148(%ebp)
085079b6 +0xe04:  mov    -0x17e(%ebp),%eax
085079bc +0xe0a:  movswl %ax,%ebx
085079bf +0xe0d:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085079c4 +0xe12:  lea    -0x148(%ebp),%edx
085079ca +0xe18:  mov    %edx,0x14(%esp)
085079ce +0xe1c:  movl   $0x0,0x10(%esp)
085079d6 +0xe24:  mov    %ebx,0xc(%esp)
085079da +0xe28:  mov    -0x30(%ebp),%edx
085079dd +0xe2b:  mov    %edx,0x8(%esp)
085079e1 +0xe2f:  lea    -0x185(%ebp),%edx
085079e7 +0xe35:  mov    %edx,0x4(%esp)
085079eb +0xe39:  mov    %eax,(%esp)
085079ee +0xe3c:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085079f3 +0xe41:  mov    -0x148(%ebp),%eax
085079f9 +0xe47:  add    %eax,-0x28(%ebp)
085079fc +0xe4a:  addl   $0x1,-0x1c(%ebp)
08507a00 +0xe4e:  mov    -0xe0(%ebp),%eax
08507a06 +0xe54:  cmp    %eax,-0x1c(%ebp)
08507a09 +0xe57:  setl   %al
08507a0c +0xe5a:  test   %al,%al
08507a0e +0xe5c:  jne    0850775b <+0xba9>
08507a14 +0xe62:  jmp    08507a17 <+0xe65>
08507a16 +0xe64:  nop
08507a17 +0xe65:  lea    -0x38(%ebp),%eax
08507a1a +0xe68:  movl   $0x0,0x8(%esp)
08507a22 +0xe70:  lea    -0xdc(%ebp),%edx
08507a28 +0xe76:  mov    %edx,0x4(%esp)
08507a2c +0xe7a:  mov    %eax,(%esp)
08507a2f +0xe7d:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507a34 +0xe82:  sub    $0x4,%esp
08507a37 +0xe85:  jmp    08507a46 <+0xe94>
08507a39 +0xe87:  nop
08507a3a +0xe88:  jmp    08507a46 <+0xe94>
08507a3c +0xe8a:  nop
08507a3d +0xe8b:  jmp    08507a46 <+0xe94>
08507a3f +0xe8d:  nop
08507a40 +0xe8e:  jmp    08507a46 <+0xe94>
08507a42 +0xe90:  nop
08507a43 +0xe91:  jmp    08507a46 <+0xe94>
08507a45 +0xe93:  nop
08507a46 +0xe94:  lea    -0xd0(%ebp),%eax
08507a4c +0xe9a:  mov    0xc(%ebp),%edx
08507a4f +0xe9d:  mov    %edx,0x4(%esp)
08507a53 +0xea1:  mov    %eax,(%esp)
08507a56 +0xea4:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08507a5b +0xea9:  sub    $0x4,%esp
08507a5e +0xeac:  lea    -0xd0(%ebp),%eax
08507a64 +0xeb2:  mov    %eax,0x4(%esp)
08507a68 +0xeb6:  lea    -0xdc(%ebp),%eax
08507a6e +0xebc:  mov    %eax,(%esp)
08507a71 +0xebf:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08507a76 +0xec4:  test   %al,%al
08507a78 +0xec6:  jne    08506c44 <+0x92>
08507a7e +0xecc:  jmp    08507a84 <+0xed2>
08507a80 +0xece:  nop
08507a81 +0xecf:  jmp    08507a84 <+0xed2>
08507a83 +0xed1:  nop
08507a84 +0xed2:  cmpl   $0x8,0x18(%ebp)
08507a88 +0xed6:  je     08507a90 <+0xede>
08507a8a +0xed8:  cmpl   $0x3,0x14(%ebp)
08507a8e +0xedc:  jne    08507abe <+0xf0c>
08507a90 +0xede:  mov    0x8(%ebp),%eax
08507a93 +0xee1:  mov    (%eax),%eax
08507a95 +0xee3:  test   %eax,%eax
08507a97 +0xee5:  je     08507abe <+0xf0c>
08507a99 +0xee7:  mov    -0x28(%ebp),%esi
08507a9c +0xeea:  mov    0x8(%ebp),%eax
08507a9f +0xeed:  mov    (%eax),%ebx
08507aa1 +0xeef:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08507aa6 +0xef4:  mov    %esi,0xc(%esp)
08507aaa +0xef8:  mov    %ebx,0x8(%esp)
08507aae +0xefc:  movl   $0xa,0x4(%esp)
08507ab6 +0xf04:  mov    %eax,(%esp)
08507ab9 +0xf07:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08507abe +0xf0c:  mov    -0x34(%ebp),%eax
08507ac1 +0xf0f:  lea    -0xc(%ebp),%esp
08507ac4 +0xf12:  add    $0x0,%esp
08507ac7 +0xf15:  pop    %ebx
08507ac8 +0xf16:  pop    %esi
08507ac9 +0xf17:  pop    %edi
08507aca +0xf18:  pop    %ebp
08507acb +0xf19:  ret
```

## 反编译 C

```c
// CInventory::insert_event_items @ 0x8506bb2

/* CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool,
   char const*, char const*) */

int __thiscall
CInventory::insert_event_items
          (CInventory *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1,
          vector<int,std::allocator<int>> *param_2,int param_4,int param_5,char param_6,
          char *param_7,char *param_8)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  CInventory *pCVar9;
  char *pcVar10;
  size_t sVar11;
  CDataManager *this_00;
  CCubeStatistic *pCVar12;
  Store *pSVar13;
  CAvatarItemMgr *this_01;
  int iVar14;
  int iVar15;
  CCreatureMgr *this_02;
  CValueStatistic *pCVar16;
  char local_289 [256];
  Inven_Item local_189;
  char cStack_188;
  undefined2 uStack_187;
  undefined2 uStack_185;
  undefined1 uStack_183;
  int iStack_182;
  undefined1 uStack_17e;
  undefined4 local_17d;
  undefined4 local_179;
  undefined4 local_175;
  undefined4 local_171;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_161;
  undefined4 local_15d;
  undefined4 local_159;
  undefined4 local_155;
  undefined4 local_151;
  undefined1 local_14d;
  int local_14c;
  char local_145 [21];
  char local_130 [24];
  int local_118;
  char local_112 [21];
  char local_fd [21];
  int local_e8;
  int local_e4;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_e0 [4];
  int local_dc;
  int local_d8;
  __normal_iterator local_d4 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  cMyTrace local_c8 [16];
  int local_b8 [2];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_b0 [4];
  cMyTrace local_ac [16];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_98 [4];
  int local_94;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_90 [4];
  int local_8c;
  int local_88;
  undefined1 local_81 [7];
  int local_7a;
  int local_44;
  int local_40;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_3c [4];
  int local_38;
  CItem *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = 0;
  iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_1);
  if (iVar4 != 0) {
    std::pair<int,int>::pair((pair<int,int> *)&local_dc);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_e0);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    Inven_Item::Inven_Item(&local_189);
    local_2c = 0;
LAB_08507a46:
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_e0,local_d4);
    if (bVar2) {
      Inven_Item::reset(&local_189);
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_e0);
      local_cc = puVar5[1];
      local_d0 = *puVar5;
      std::pair<int,int>::operator=((pair<int,int> *)&local_dc,(pair *)&local_d0);
      local_30 = local_dc;
      local_e4 = local_d8;
      if (local_dc == 0) {
        if ((499999 < local_d8) && (*(int *)this != 0)) {
          uVar6 = CUser::get_charac_no(*(CUser **)this,-1);
          uVar7 = CUser::get_acc_id(*(CUser **)this);
          uVar8 = NumberToString(uVar7,0);
          iVar4 = local_e4;
          cMyTrace::cMyTrace(local_c8,
                             "int CInventory::insert_event_items(const std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, const char*, const char*)"
                             ,0x1dc7,4);
          cMyTrace::operator()
                    (local_c8,"Quest reward money(%d) mid(%s) characno(%d) reason(%d)",iVar4,uVar8,
                     uVar6,param_4);
        }
        if ((*(int *)this == 0) ||
           (iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this), iVar4 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar4 = local_e4;
        if (bVar2) {
          pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
          local_e4 = gain_money(pCVar9,iVar4,param_4,1,0);
        }
        local_b8[0] = 0;
        std::vector<int,std::allocator<int>>::push_back(param_2,local_b8);
        local_b8[1] = 0;
        std::vector<int,std::allocator<int>>::push_back(param_2,local_b8 + 1);
        std::vector<int,std::allocator<int>>::push_back(param_2,&local_e4);
        local_38 = local_38 + 1;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_b0,(int)local_e0);
        if (param_4 == 3) {
          local_2c = local_2c + local_e4;
        }
        if ((local_e4 < local_d8) && (param_6 != '\0')) {
          pcVar10 = (char *)RDARScriptStringManager::findString
                                      ((RDARScriptStringManager *)g_scriptStringManager_,4,param_7,
                                       (bool *)0x0);
          strncpy(local_fd,pcVar10,0x14);
          pcVar10 = (char *)RDARScriptStringManager::findString
                                      ((RDARScriptStringManager *)g_scriptStringManager_,4,param_8,
                                       (bool *)0x0);
          strncpy(local_289,pcVar10,0xff);
          uVar6 = CUser::GetServerGroup(*(CUser **)this);
          sVar11 = strlen(local_289);
          uVar8 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_fd,&local_189,local_d8 - local_e4,uVar8,local_289,sVar11,0,uVar6,0,0);
        }
      }
      else {
        this_00 = (CDataManager *)G_CDataManager();
        local_34 = (CItem *)CDataManager::find_item(this_00,local_30);
        if (local_34 != (CItem *)0x0) {
          uStack_187 = (undefined2)local_30;
          uStack_185 = (undefined2)((uint)local_30 >> 0x10);
          cVar1 = CItem::is_stackable(local_34);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*(int *)local_34 + 0x14))(local_34);
              if ((cVar1 == '\0') ||
                 (iVar4 = (**(code **)(*(int *)local_34 + 0xc))(local_34), iVar4 != 0x16)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              iVar4 = local_e4;
              if (bVar2) {
                if (param_5 != 8) goto LAB_08507a46;
                uStack_187 = (undefined2)local_30;
                uStack_185 = (undefined2)((uint)local_30 >> 0x10);
                iVar14 = G_CDataManager();
                CItemList::create_item(*(CItemList **)(iVar14 + 0xc),0,&local_189,iVar4);
                if (cStack_188 == '\x05') {
                  cVar1 = user_creature::CCreatureItemConverter::SetEggItem(&local_189);
                  if (cVar1 != '\x01') goto LAB_08507a46;
                  local_e8 = insertItemIntoInventory
                                       (this,CONCAT22(uStack_187,CONCAT11(cStack_188,local_189)),
                                        CONCAT13((undefined1)iStack_182,
                                                 CONCAT12(uStack_183,uStack_185)),
                                        CONCAT13(uStack_17e,iStack_182._1_3_),local_17d,local_179,
                                        local_175,local_171,local_16d,local_169,local_165,local_161,
                                        local_15d,local_159,local_155,local_151,local_14d,8,1,0);
                  if (-1 < local_e8) {
                    iVar14 = CItem::getExpirationDate(local_34);
                    iVar15 = CItem::getUsablePeriod(local_34);
                    iVar4 = local_e8;
                    this_02 = (CCreatureMgr *)GetCreatureMgrW(this);
                    user_creature::CCreatureMgr::InsertCreatureItem
                              (this_02,&local_189,iVar4,8,iVar15,iVar14);
                    local_38 = local_38 + 1;
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_e8);
                    local_44 = CONCAT22(uStack_185,uStack_187);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_44);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_e4);
                  }
                }
              }
              else {
                for (local_20 = 0; local_20 < local_e4; local_20 = local_20 + 1) {
                  (**(code **)(*(int *)local_34 + 8))(local_34,&local_189);
                  local_e8 = insertItemIntoInventory
                                       (this,CONCAT22(uStack_187,CONCAT11(cStack_188,local_189)),
                                        CONCAT13((undefined1)iStack_182,
                                                 CONCAT12(uStack_183,uStack_185)),
                                        CONCAT13(uStack_17e,iStack_182._1_3_),local_17d,local_179,
                                        local_175,local_171,local_16d,local_169,local_165,local_161,
                                        local_15d,local_159,local_155,local_151,local_14d,param_5,1,
                                        1);
                  if (local_e8 == -1) {
                    if (param_6 != '\x01') break;
                    pcVar10 = (char *)RDARScriptStringManager::findString
                                                ((RDARScriptStringManager *)g_scriptStringManager_,4
                                                 ,param_7,(bool *)0x0);
                    strncpy(local_145,pcVar10,0x14);
                    pcVar10 = (char *)RDARScriptStringManager::findString
                                                ((RDARScriptStringManager *)g_scriptStringManager_,4
                                                 ,param_8,(bool *)0x0);
                    strncpy(local_289,pcVar10,0xff);
                    uVar6 = CUser::GetServerGroup(*(CUser **)this);
                    sVar11 = strlen(local_289);
                    uVar8 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                              (local_145,&local_189,0,uVar8,local_289,sVar11,0,uVar6,0,0);
                  }
                  else {
                    local_38 = local_38 + 1;
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_e8);
                    local_40 = CONCAT22(uStack_185,uStack_187);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_40);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&iStack_182);
                    if (param_5 == 8) {
                      local_14c = 0;
                      sVar3 = (short)iStack_182;
                      pSVar13 = (Store *)G_Store();
                      Store::GetSellItemPrice(pSVar13,&local_189,local_34,sVar3,false,&local_14c);
                      local_2c = local_2c + local_14c;
                    }
                  }
                }
              }
            }
            else {
              if (param_5 != 8) goto LAB_08507a46;
              uVar6 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
              uVar6 = WongWork::CGenUniqueNo::genIPGNo(2,uVar6,local_130);
              uVar8 = CItem::getUsablePeriod(local_34);
              local_e8 = AddAvatarItem(this,local_30,uVar8,0,0,0xffffffff,uVar6,8,0,0);
              if (local_e8 == -1) {
                if (param_6 != '\x01') goto LAB_08507a84;
                local_24 = 0;
                iVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail
                          (*(CUser **)this,iVar4,local_30,local_24,'\0',-1,local_130,(char *)0x0,0);
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator++(local_90,(int)local_e0);
                goto LAB_08507a46;
              }
              local_38 = local_38 + 1;
              std::vector<int,std::allocator<int>>::push_back(param_2,&local_e8);
              local_8c = CONCAT22(uStack_185,uStack_187);
              std::vector<int,std::allocator<int>>::push_back(param_2,&local_8c);
              local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              GetInvenSlot((int)local_81,(int)this);
              iVar4 = local_7a;
              this_01 = (CAvatarItemMgr *)GetAvatarItemMgrR(this);
              local_88 = WongWork::CAvatarItemMgr::GetRemainDate(this_01,iVar4,local_28);
              std::vector<int,std::allocator<int>>::push_back(param_2,&local_88);
            }
          }
          else {
            iStack_182 = local_e4;
            (**(code **)(*(int *)local_34 + 8))(local_34,&local_189);
            local_e8 = insertItemIntoInventory
                                 (this,CONCAT22(uStack_187,CONCAT11(cStack_188,local_189)),
                                  CONCAT13((undefined1)iStack_182,CONCAT12(uStack_183,uStack_185)),
                                  CONCAT13(uStack_17e,iStack_182._1_3_),local_17d,local_179,
                                  local_175,local_171,local_16d,local_169,local_165,local_161,
                                  local_15d,local_159,local_155,local_151,local_14d,param_5,1,1);
            if (local_e8 == -1) {
              if (param_6 != '\x01') goto LAB_08507a84;
              pcVar10 = (char *)RDARScriptStringManager::findString
                                          ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                           param_7,(bool *)0x0);
              strncpy(local_112,pcVar10,0x14);
              pcVar10 = (char *)RDARScriptStringManager::findString
                                          ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                           param_8,(bool *)0x0);
              strncpy(local_289,pcVar10,0xff);
              uVar6 = CUser::GetServerGroup(*(CUser **)this);
              sVar11 = strlen(local_289);
              uVar8 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_112,&local_189,0,uVar8,local_289,sVar11,0,uVar6,0,0);
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator++(local_98,(int)local_e0);
              goto LAB_08507a46;
            }
            local_38 = local_38 + 1;
            std::vector<int,std::allocator<int>>::push_back(param_2,&local_e8);
            local_94 = CONCAT22(uStack_185,uStack_187);
            std::vector<int,std::allocator<int>>::push_back(param_2,&local_94);
            std::vector<int,std::allocator<int>>::push_back(param_2,&iStack_182);
            iVar4 = iStack_182;
            if (param_5 == 8) {
              if (*(int *)this != 0) {
                uVar6 = *(undefined4 *)this;
                pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
                CCubeStatistic::collectCubeStatistics(pCVar12,local_34,iVar4,uVar6,4);
              }
              local_118 = 0;
              sVar3 = (short)iStack_182;
              pSVar13 = (Store *)G_Store();
              Store::GetSellItemPrice(pSVar13,&local_189,local_34,sVar3,false,&local_118);
              local_2c = local_2c + local_118;
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_3c,(int)local_e0);
          goto LAB_08507a46;
        }
        cMyTrace::cMyTrace(local_ac,
                           "int CInventory::insert_event_items(const std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, const char*, const char*)"
                           ,0x1e14,5);
        cMyTrace::operator()
                  (local_ac,"CInventory::insert_event_items, G_CDataManager()->find_item(%d)",
                   local_30);
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_9c,(int)local_e0);
      }
      goto LAB_08507a46;
    }
LAB_08507a84:
    iVar4 = local_2c;
    if (((param_5 == 8) || (param_4 == 3)) && (*(int *)this != 0)) {
      uVar6 = *(undefined4 *)this;
      pCVar16 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar16,10,uVar6,iVar4);
    }
  }
  return local_38;
}
```
