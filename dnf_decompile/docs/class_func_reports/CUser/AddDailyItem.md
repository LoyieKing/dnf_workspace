# AddDailyItem

`_ZN5CUser12AddDailyItemEv`

`CUser::AddDailyItem()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656caa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656caa  _ZN5CUser12AddDailyItemEv
#           CUser::AddDailyItem()
# range [0x08656caa, 0x0865744b]
08656caa +0x000:  push   %ebp
08656cab +0x001:  mov    %esp,%ebp
08656cad +0x003:  push   %esi
08656cae +0x004:  push   %ebx
08656caf +0x005:  sub    $0x1f0,%esp
08656cb5 +0x00b:  mov    0x8(%ebp),%eax
08656cb8 +0x00e:  mov    %eax,(%esp)
08656cbb +0x011:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08656cc0 +0x016:  cmp    $0x13,%eax
08656cc3 +0x019:  setg   %al
08656cc6 +0x01c:  test   %al,%al
08656cc8 +0x01e:  je     08656f88 <+0x2de>
08656cce +0x024:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08656cd3 +0x029:  movl   $0x1057,0x4(%esp)
08656cdb +0x031:  mov    %eax,(%esp)
08656cde +0x034:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08656ce3 +0x039:  mov    %eax,-0x10(%ebp)
08656ce6 +0x03c:  cmpl   $0x0,-0x10(%ebp)
08656cea +0x040:  je     08656f88 <+0x2de>
08656cf0 +0x046:  lea    -0x19a(%ebp),%eax
08656cf6 +0x04c:  mov    %eax,(%esp)
08656cf9 +0x04f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08656cfe +0x054:  mov    0x8(%ebp),%eax
08656d01 +0x057:  mov    %eax,(%esp)
08656d04 +0x05a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08656d09 +0x05f:  lea    -0x19a(%ebp),%edx
08656d0f +0x065:  mov    %edx,0x8(%esp)
08656d13 +0x069:  movl   $0x1057,0x4(%esp)
08656d1b +0x071:  mov    %eax,(%esp)
08656d1e +0x074:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08656d23 +0x079:  mov    %eax,-0xc(%ebp)
08656d26 +0x07c:  cmpl   $0x0,-0xc(%ebp)
08656d2a +0x080:  jns    08656e34 <+0x18a>
08656d30 +0x086:  mov    -0x10(%ebp),%eax
08656d33 +0x089:  mov    (%eax),%eax
08656d35 +0x08b:  add    $0x8,%eax
08656d38 +0x08e:  mov    (%eax),%edx
08656d3a +0x090:  lea    -0x19a(%ebp),%eax
08656d40 +0x096:  mov    %eax,0x4(%esp)
08656d44 +0x09a:  mov    -0x10(%ebp),%eax
08656d47 +0x09d:  mov    %eax,(%esp)
08656d4a +0x0a0:  call   *%edx
08656d4c +0x0a2:  movl   $0x3,-0x193(%ebp)
08656d56 +0x0ac:  movl   $0x1057,-0x198(%ebp)
08656d60 +0x0b6:  mov    0x8(%ebp),%eax
08656d63 +0x0b9:  mov    %eax,(%esp)
08656d66 +0x0bc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08656d6b +0x0c1:  movl   $0x0,0x4c(%esp)
08656d73 +0x0c9:  movl   $0x1,0x48(%esp)
08656d7b +0x0d1:  movl   $0xd,0x44(%esp)
08656d83 +0x0d9:  mov    -0x19a(%ebp),%edx
08656d89 +0x0df:  mov    %edx,0x4(%esp)
08656d8d +0x0e3:  mov    -0x196(%ebp),%edx
08656d93 +0x0e9:  mov    %edx,0x8(%esp)
08656d97 +0x0ed:  mov    -0x192(%ebp),%edx
08656d9d +0x0f3:  mov    %edx,0xc(%esp)
08656da1 +0x0f7:  mov    -0x18e(%ebp),%edx
08656da7 +0x0fd:  mov    %edx,0x10(%esp)
08656dab +0x101:  mov    -0x18a(%ebp),%edx
08656db1 +0x107:  mov    %edx,0x14(%esp)
08656db5 +0x10b:  mov    -0x186(%ebp),%edx
08656dbb +0x111:  mov    %edx,0x18(%esp)
08656dbf +0x115:  mov    -0x182(%ebp),%edx
08656dc5 +0x11b:  mov    %edx,0x1c(%esp)
08656dc9 +0x11f:  mov    -0x17e(%ebp),%edx
08656dcf +0x125:  mov    %edx,0x20(%esp)
08656dd3 +0x129:  mov    -0x17a(%ebp),%edx
08656dd9 +0x12f:  mov    %edx,0x24(%esp)
08656ddd +0x133:  mov    -0x176(%ebp),%edx
08656de3 +0x139:  mov    %edx,0x28(%esp)
08656de7 +0x13d:  mov    -0x172(%ebp),%edx
08656ded +0x143:  mov    %edx,0x2c(%esp)
08656df1 +0x147:  mov    -0x16e(%ebp),%edx
08656df7 +0x14d:  mov    %edx,0x30(%esp)
08656dfb +0x151:  mov    -0x16a(%ebp),%edx
08656e01 +0x157:  mov    %edx,0x34(%esp)
08656e05 +0x15b:  mov    -0x166(%ebp),%edx
08656e0b +0x161:  mov    %edx,0x38(%esp)
08656e0f +0x165:  mov    -0x162(%ebp),%edx
08656e15 +0x16b:  mov    %edx,0x3c(%esp)
08656e19 +0x16f:  movzbl -0x15e(%ebp),%edx
08656e20 +0x176:  mov    %dl,0x40(%esp)
08656e24 +0x17a:  mov    %eax,(%esp)
08656e27 +0x17d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08656e2c +0x182:  mov    %eax,-0xc(%ebp)
08656e2f +0x185:  jmp    08656f60 <+0x2b6>
08656e34 +0x18a:  mov    -0x193(%ebp),%eax
08656e3a +0x190:  cmp    $0x2,%eax
08656e3d +0x193:  jg     08656f60 <+0x2b6>
08656e43 +0x199:  lea    -0x19a(%ebp),%eax
08656e49 +0x19f:  mov    %eax,(%esp)
08656e4c +0x1a2:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08656e51 +0x1a7:  mov    -0x193(%ebp),%edx
08656e57 +0x1ad:  mov    $0x3,%ecx
08656e5c +0x1b2:  mov    %ecx,%ebx
08656e5e +0x1b4:  sub    %edx,%ebx
08656e60 +0x1b6:  mov    0x8(%ebp),%edx
08656e63 +0x1b9:  lea    0x79700(%edx),%ecx
08656e69 +0x1bf:  movl   $0xd,0x14(%esp)
08656e71 +0x1c7:  lea    -0x19a(%ebp),%edx
08656e77 +0x1cd:  mov    %edx,0x10(%esp)
08656e7b +0x1d1:  mov    %eax,0xc(%esp)
08656e7f +0x1d5:  mov    %ebx,0x8(%esp)
08656e83 +0x1d9:  movl   $0x1,0x4(%esp)
08656e8b +0x1e1:  mov    %ecx,(%esp)
08656e8e +0x1e4:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08656e93 +0x1e9:  movl   $0x3,-0x193(%ebp)
08656e9d +0x1f3:  mov    0x8(%ebp),%eax
08656ea0 +0x1f6:  mov    %eax,(%esp)
08656ea3 +0x1f9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08656ea8 +0x1fe:  mov    -0x19a(%ebp),%edx
08656eae +0x204:  mov    %edx,0xc(%esp)
08656eb2 +0x208:  mov    -0x196(%ebp),%edx
08656eb8 +0x20e:  mov    %edx,0x10(%esp)
08656ebc +0x212:  mov    -0x192(%ebp),%edx
08656ec2 +0x218:  mov    %edx,0x14(%esp)
08656ec6 +0x21c:  mov    -0x18e(%ebp),%edx
08656ecc +0x222:  mov    %edx,0x18(%esp)
08656ed0 +0x226:  mov    -0x18a(%ebp),%edx
08656ed6 +0x22c:  mov    %edx,0x1c(%esp)
08656eda +0x230:  mov    -0x186(%ebp),%edx
08656ee0 +0x236:  mov    %edx,0x20(%esp)
08656ee4 +0x23a:  mov    -0x182(%ebp),%edx
08656eea +0x240:  mov    %edx,0x24(%esp)
08656eee +0x244:  mov    -0x17e(%ebp),%edx
08656ef4 +0x24a:  mov    %edx,0x28(%esp)
08656ef8 +0x24e:  mov    -0x17a(%ebp),%edx
08656efe +0x254:  mov    %edx,0x2c(%esp)
08656f02 +0x258:  mov    -0x176(%ebp),%edx
08656f08 +0x25e:  mov    %edx,0x30(%esp)
08656f0c +0x262:  mov    -0x172(%ebp),%edx
08656f12 +0x268:  mov    %edx,0x34(%esp)
08656f16 +0x26c:  mov    -0x16e(%ebp),%edx
08656f1c +0x272:  mov    %edx,0x38(%esp)
08656f20 +0x276:  mov    -0x16a(%ebp),%edx
08656f26 +0x27c:  mov    %edx,0x3c(%esp)
08656f2a +0x280:  mov    -0x166(%ebp),%edx
08656f30 +0x286:  mov    %edx,0x40(%esp)
08656f34 +0x28a:  mov    -0x162(%ebp),%edx
08656f3a +0x290:  mov    %edx,0x44(%esp)
08656f3e +0x294:  movzbl -0x15e(%ebp),%edx
08656f45 +0x29b:  mov    %dl,0x48(%esp)
08656f49 +0x29f:  mov    -0xc(%ebp),%edx
08656f4c +0x2a2:  mov    %edx,0x8(%esp)
08656f50 +0x2a6:  movl   $0x1,0x4(%esp)
08656f58 +0x2ae:  mov    %eax,(%esp)
08656f5b +0x2b1:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08656f60 +0x2b6:  cmpl   $0x0,-0xc(%ebp)
08656f64 +0x2ba:  js     08656f88 <+0x2de>
08656f66 +0x2bc:  mov    -0xc(%ebp),%eax
08656f69 +0x2bf:  mov    %eax,0xc(%esp)
08656f6d +0x2c3:  movl   $0x0,0x8(%esp)
08656f75 +0x2cb:  movl   $0x1,0x4(%esp)
08656f7d +0x2d3:  mov    0x8(%ebp),%eax
08656f80 +0x2d6:  mov    %eax,(%esp)
08656f83 +0x2d9:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08656f88 +0x2de:  lea    -0x2c(%ebp),%eax
08656f8b +0x2e1:  mov    %eax,(%esp)
08656f8e +0x2e4:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08656f93 +0x2e9:  lea    -0x38(%ebp),%eax
08656f96 +0x2ec:  mov    %eax,(%esp)
08656f99 +0x2ef:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08656f9e +0x2f4:  lea    -0x2c(%ebp),%eax
08656fa1 +0x2f7:  mov    %eax,0x4(%esp)
08656fa5 +0x2fb:  mov    0x8(%ebp),%eax
08656fa8 +0x2fe:  mov    %eax,(%esp)
08656fab +0x301:  call   08689010 <_ZN5CUser17ResetItemByScriptERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::ResetItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08656fb0 +0x306:  lea    -0x2c(%ebp),%eax
08656fb3 +0x309:  mov    %eax,0x4(%esp)
08656fb7 +0x30d:  mov    0x8(%ebp),%eax
08656fba +0x310:  mov    %eax,(%esp)
08656fbd +0x313:  call   086890be <_ZN5CUser18RefillItemByScriptERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::RefillItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08656fc2 +0x318:  lea    -0x38(%ebp),%eax
08656fc5 +0x31b:  mov    %eax,0x8(%esp)
08656fc9 +0x31f:  lea    -0x2c(%ebp),%eax
08656fcc +0x322:  mov    %eax,0x4(%esp)
08656fd0 +0x326:  mov    0x8(%ebp),%eax
08656fd3 +0x329:  mov    %eax,(%esp)
08656fd6 +0x32c:  call   0867dba0 <_ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08656fdb +0x331:  lea    -0x3c(%ebp),%eax
08656fde +0x334:  lea    -0x38(%ebp),%edx
08656fe1 +0x337:  mov    %edx,0x4(%esp)
08656fe5 +0x33b:  mov    %eax,(%esp)
08656fe8 +0x33e:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08656fed +0x343:  sub    $0x4,%esp
08656ff0 +0x346:  jmp    08657096 <+0x3ec>
08656ff5 +0x34b:  lea    -0x3c(%ebp),%eax
08656ff8 +0x34e:  mov    %eax,(%esp)
08656ffb +0x351:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08657000 +0x356:  mov    (%eax),%eax
08657002 +0x358:  test   %eax,%eax
08657004 +0x35a:  js     08657018 <+0x36e>
08657006 +0x35c:  lea    -0x3c(%ebp),%eax
08657009 +0x35f:  mov    %eax,(%esp)
0865700c +0x362:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08657011 +0x367:  mov    (%eax),%eax
08657013 +0x369:  cmp    $0x1b,%eax
08657016 +0x36c:  jle    0865701f <+0x375>
08657018 +0x36e:  mov    $0x1,%eax
0865701d +0x373:  jmp    08657024 <+0x37a>
0865701f +0x375:  mov    $0x0,%eax
08657024 +0x37a:  test   %al,%al
08657026 +0x37c:  jne    08657075 <+0x3cb>
08657028 +0x37e:  lea    -0x3c(%ebp),%eax
0865702b +0x381:  mov    %eax,(%esp)
0865702e +0x384:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08657033 +0x389:  mov    0x4(%eax),%eax
08657036 +0x38c:  shr    $0x1f,%eax
08657039 +0x38f:  test   %al,%al
0865703b +0x391:  jne    08657078 <+0x3ce>
0865703d +0x393:  lea    -0x3c(%ebp),%eax
08657040 +0x396:  mov    %eax,(%esp)
08657043 +0x399:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08657048 +0x39e:  mov    0x4(%eax),%ebx
0865704b +0x3a1:  lea    -0x3c(%ebp),%eax
0865704e +0x3a4:  mov    %eax,(%esp)
08657051 +0x3a7:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08657056 +0x3ac:  mov    (%eax),%eax
08657058 +0x3ae:  mov    %ebx,0xc(%esp)
0865705c +0x3b2:  mov    %eax,0x8(%esp)
08657060 +0x3b6:  movl   $0x1,0x4(%esp)
08657068 +0x3be:  mov    0x8(%ebp),%eax
0865706b +0x3c1:  mov    %eax,(%esp)
0865706e +0x3c4:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08657073 +0x3c9:  jmp    08657079 <+0x3cf>
08657075 +0x3cb:  nop
08657076 +0x3cc:  jmp    08657079 <+0x3cf>
08657078 +0x3ce:  nop
08657079 +0x3cf:  lea    -0x1c(%ebp),%eax
0865707c +0x3d2:  movl   $0x0,0x8(%esp)
08657084 +0x3da:  lea    -0x3c(%ebp),%edx
08657087 +0x3dd:  mov    %edx,0x4(%esp)
0865708b +0x3e1:  mov    %eax,(%esp)
0865708e +0x3e4:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
08657093 +0x3e9:  sub    $0x4,%esp
08657096 +0x3ec:  lea    -0x20(%ebp),%eax
08657099 +0x3ef:  lea    -0x38(%ebp),%edx
0865709c +0x3f2:  mov    %edx,0x4(%esp)
086570a0 +0x3f6:  mov    %eax,(%esp)
086570a3 +0x3f9:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086570a8 +0x3fe:  sub    $0x4,%esp
086570ab +0x401:  lea    -0x20(%ebp),%eax
086570ae +0x404:  mov    %eax,0x4(%esp)
086570b2 +0x408:  lea    -0x3c(%ebp),%eax
086570b5 +0x40b:  mov    %eax,(%esp)
086570b8 +0x40e:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086570bd +0x413:  test   %al,%al
086570bf +0x415:  jne    08656ff5 <+0x34b>
086570c5 +0x41b:  mov    0x8(%ebp),%eax
086570c8 +0x41e:  add    $0x8df60,%eax
086570cd +0x423:  mov    %eax,(%esp)
086570d0 +0x426:  call   0813159a <_ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv>  ; advancealtar::CharacAdvanceAltarManager::refillTicketFree()
086570d5 +0x42b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086570dc +0x432:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086570e1 +0x437:  cmp    $0x4811f1ef,%eax
086570e6 +0x43c:  setg   %al
086570e9 +0x43f:  test   %al,%al
086570eb +0x441:  je     086570f7 <+0x44d>
086570ed +0x443:  mov    $0x0,%ebx
086570f2 +0x448:  jmp    08657413 <+0x769>
086570f7 +0x44d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086570fc +0x452:  movl   $0x1cab,0x4(%esp)
08657104 +0x45a:  mov    %eax,(%esp)
08657107 +0x45d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0865710c +0x462:  mov    %eax,-0x18(%ebp)
0865710f +0x465:  cmpl   $0x0,-0x18(%ebp)
08657113 +0x469:  jne    0865711f <+0x475>
08657115 +0x46b:  mov    $0x0,%ebx
0865711a +0x470:  jmp    08657413 <+0x769>
0865711f +0x475:  lea    -0x9a(%ebp),%eax
08657125 +0x47b:  mov    %eax,(%esp)
08657128 +0x47e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0865712d +0x483:  mov    -0x18(%ebp),%eax
08657130 +0x486:  mov    (%eax),%eax
08657132 +0x488:  add    $0x8,%eax
08657135 +0x48b:  mov    (%eax),%edx
08657137 +0x48d:  lea    -0x9a(%ebp),%eax
0865713d +0x493:  mov    %eax,0x4(%esp)
08657141 +0x497:  mov    -0x18(%ebp),%eax
08657144 +0x49a:  mov    %eax,(%esp)
08657147 +0x49d:  call   *%edx
08657149 +0x49f:  movl   $0x1,-0x93(%ebp)
08657153 +0x4a9:  movl   $0x1cab,-0x98(%ebp)
0865715d +0x4b3:  movl   $0xffffffff,-0x14(%ebp)
08657164 +0x4ba:  mov    0x8(%ebp),%eax
08657167 +0x4bd:  mov    %eax,(%esp)
0865716a +0x4c0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865716f +0x4c5:  movl   $0x1,0x4c(%esp)
08657177 +0x4cd:  movl   $0x1,0x48(%esp)
0865717f +0x4d5:  movl   $0xd,0x44(%esp)
08657187 +0x4dd:  mov    -0x9a(%ebp),%edx
0865718d +0x4e3:  mov    %edx,0x4(%esp)
08657191 +0x4e7:  mov    -0x96(%ebp),%edx
08657197 +0x4ed:  mov    %edx,0x8(%esp)
0865719b +0x4f1:  mov    -0x92(%ebp),%edx
086571a1 +0x4f7:  mov    %edx,0xc(%esp)
086571a5 +0x4fb:  mov    -0x8e(%ebp),%edx
086571ab +0x501:  mov    %edx,0x10(%esp)
086571af +0x505:  mov    -0x8a(%ebp),%edx
086571b5 +0x50b:  mov    %edx,0x14(%esp)
086571b9 +0x50f:  mov    -0x86(%ebp),%edx
086571bf +0x515:  mov    %edx,0x18(%esp)
086571c3 +0x519:  mov    -0x82(%ebp),%edx
086571c9 +0x51f:  mov    %edx,0x1c(%esp)
086571cd +0x523:  mov    -0x7e(%ebp),%edx
086571d0 +0x526:  mov    %edx,0x20(%esp)
086571d4 +0x52a:  mov    -0x7a(%ebp),%edx
086571d7 +0x52d:  mov    %edx,0x24(%esp)
086571db +0x531:  mov    -0x76(%ebp),%edx
086571de +0x534:  mov    %edx,0x28(%esp)
086571e2 +0x538:  mov    -0x72(%ebp),%edx
086571e5 +0x53b:  mov    %edx,0x2c(%esp)
086571e9 +0x53f:  mov    -0x6e(%ebp),%edx
086571ec +0x542:  mov    %edx,0x30(%esp)
086571f0 +0x546:  mov    -0x6a(%ebp),%edx
086571f3 +0x549:  mov    %edx,0x34(%esp)
086571f7 +0x54d:  mov    -0x66(%ebp),%edx
086571fa +0x550:  mov    %edx,0x38(%esp)
086571fe +0x554:  mov    -0x62(%ebp),%edx
08657201 +0x557:  mov    %edx,0x3c(%esp)
08657205 +0x55b:  movzbl -0x5e(%ebp),%edx
08657209 +0x55f:  mov    %dl,0x40(%esp)
0865720d +0x563:  mov    %eax,(%esp)
08657210 +0x566:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08657215 +0x56b:  mov    %eax,-0x14(%ebp)
08657218 +0x56e:  cmpl   $0xffffffff,-0x14(%ebp)
0865721c +0x572:  sete   %al
0865721f +0x575:  test   %al,%al
08657221 +0x577:  je     0865731d <+0x673>
08657227 +0x57d:  movl   $0x0,0xc(%esp)
0865722f +0x585:  movl   $"game_server_msg_24",0x8(%esp)
08657237 +0x58d:  movl   $0x4,0x4(%esp)
0865723f +0x595:  movl   $&g_scriptStringManager_,(%esp)
08657246 +0x59c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0865724b +0x5a1:  movl   $0x14,0x8(%esp)
08657253 +0x5a9:  mov    %eax,0x4(%esp)
08657257 +0x5ad:  lea    -0x5d(%ebp),%eax
0865725a +0x5b0:  mov    %eax,(%esp)
0865725d +0x5b3:  call   0807d8d0 <_init+0x1c8>
08657262 +0x5b8:  movl   $0x0,0xc(%esp)
0865726a +0x5c0:  movl   $"game_server_msg_25",0x8(%esp)
08657272 +0x5c8:  movl   $0x4,0x4(%esp)
0865727a +0x5d0:  movl   $&g_scriptStringManager_,(%esp)
08657281 +0x5d7:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08657286 +0x5dc:  movl   $0xff,0x8(%esp)
0865728e +0x5e4:  mov    %eax,0x4(%esp)
08657292 +0x5e8:  lea    -0x19a(%ebp),%eax
08657298 +0x5ee:  mov    %eax,(%esp)
0865729b +0x5f1:  call   0807d8d0 <_init+0x1c8>
086572a0 +0x5f6:  mov    0x8(%ebp),%eax
086572a3 +0x5f9:  mov    %eax,(%esp)
086572a6 +0x5fc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086572ab +0x601:  mov    %eax,%ebx
086572ad +0x603:  lea    -0x19a(%ebp),%eax
086572b3 +0x609:  mov    %eax,(%esp)
086572b6 +0x60c:  call   0807e3b0 <_init+0xca8>
086572bb +0x611:  mov    %eax,%esi
086572bd +0x613:  mov    0x8(%ebp),%eax
086572c0 +0x616:  mov    %eax,(%esp)
086572c3 +0x619:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086572c8 +0x61e:  movl   $0x0,0x24(%esp)
086572d0 +0x626:  movl   $0x0,0x20(%esp)
086572d8 +0x62e:  mov    %ebx,0x1c(%esp)
086572dc +0x632:  movl   $0x0,0x18(%esp)
086572e4 +0x63a:  mov    %esi,0x14(%esp)
086572e8 +0x63e:  lea    -0x19a(%ebp),%edx
086572ee +0x644:  mov    %edx,0x10(%esp)
086572f2 +0x648:  mov    %eax,0xc(%esp)
086572f6 +0x64c:  movl   $0x0,0x8(%esp)
086572fe +0x654:  lea    -0x9a(%ebp),%eax
08657304 +0x65a:  mov    %eax,0x4(%esp)
08657308 +0x65e:  lea    -0x5d(%ebp),%eax
0865730b +0x661:  mov    %eax,(%esp)
0865730e +0x664:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08657313 +0x669:  mov    $0x0,%ebx
08657318 +0x66e:  jmp    08657413 <+0x769>
0865731d +0x673:  lea    -0x48(%ebp),%eax
08657320 +0x676:  mov    %eax,(%esp)
08657323 +0x679:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08657328 +0x67e:  movl   $0xe,0x8(%esp)
08657330 +0x686:  movl   $0x0,0x4(%esp)
08657338 +0x68e:  lea    -0x48(%ebp),%eax
0865733b +0x691:  mov    %eax,(%esp)
0865733e +0x694:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08657343 +0x699:  movl   $0x0,0x4(%esp)
0865734b +0x6a1:  lea    -0x48(%ebp),%eax
0865734e +0x6a4:  mov    %eax,(%esp)
08657351 +0x6a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08657356 +0x6ac:  movl   $0x1,0x4(%esp)
0865735e +0x6b4:  lea    -0x48(%ebp),%eax
08657361 +0x6b7:  mov    %eax,(%esp)
08657364 +0x6ba:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08657369 +0x6bf:  mov    0x8(%ebp),%eax
0865736c +0x6c2:  mov    %eax,(%esp)
0865736f +0x6c5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08657374 +0x6ca:  lea    -0x48(%ebp),%edx
08657377 +0x6cd:  mov    %edx,0xc(%esp)
0865737b +0x6d1:  mov    -0x14(%ebp),%edx
0865737e +0x6d4:  mov    %edx,0x8(%esp)
08657382 +0x6d8:  movl   $0x1,0x4(%esp)
0865738a +0x6e0:  mov    %eax,(%esp)
0865738d +0x6e3:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08657392 +0x6e8:  xor    $0x1,%eax
08657395 +0x6eb:  test   %al,%al
08657397 +0x6ed:  je     086573a0 <+0x6f6>
08657399 +0x6ef:  mov    $0x0,%ebx
0865739e +0x6f4:  jmp    086573e1 <+0x737>
086573a0 +0x6f6:  movl   $0x1,0x4(%esp)
086573a8 +0x6fe:  lea    -0x48(%ebp),%eax
086573ab +0x701:  mov    %eax,(%esp)
086573ae +0x704:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086573b3 +0x709:  lea    -0x48(%ebp),%eax
086573b6 +0x70c:  mov    %eax,0x4(%esp)
086573ba +0x710:  mov    0x8(%ebp),%eax
086573bd +0x713:  mov    %eax,(%esp)
086573c0 +0x716:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086573c5 +0x71b:  mov    $0x1,%ebx
086573ca +0x720:  jmp    086573e1 <+0x737>
086573cc +0x722:  mov    %edx,%ebx
086573ce +0x724:  mov    %eax,%esi
086573d0 +0x726:  lea    -0x48(%ebp),%eax
086573d3 +0x729:  mov    %eax,(%esp)
086573d6 +0x72c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086573db +0x731:  mov    %esi,%eax
086573dd +0x733:  mov    %ebx,%edx
086573df +0x735:  jmp    086573fe <+0x754>
086573e1 +0x737:  lea    -0x48(%ebp),%eax
086573e4 +0x73a:  mov    %eax,(%esp)
086573e7 +0x73d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086573ec +0x742:  test   %ebx,%ebx
086573ee +0x744:  jne    086573f7 <+0x74d>
086573f0 +0x746:  mov    $0x0,%ebx
086573f5 +0x74b:  jmp    08657413 <+0x769>
086573f7 +0x74d:  mov    $0x1,%ebx
086573fc +0x752:  jmp    08657413 <+0x769>
086573fe +0x754:  mov    %edx,%ebx
08657400 +0x756:  mov    %eax,%esi
08657402 +0x758:  lea    -0x38(%ebp),%eax
08657405 +0x75b:  mov    %eax,(%esp)
08657408 +0x75e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0865740d +0x763:  mov    %esi,%eax
0865740f +0x765:  mov    %ebx,%edx
08657411 +0x767:  jmp    08657435 <+0x78b>
08657413 +0x769:  lea    -0x38(%ebp),%eax
08657416 +0x76c:  mov    %eax,(%esp)
08657419 +0x76f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0865741e +0x774:  test   %ebx,%ebx
08657420 +0x776:  lea    -0x2c(%ebp),%eax
08657423 +0x779:  mov    %eax,(%esp)
08657426 +0x77c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0865742b +0x781:  lea    -0x8(%ebp),%esp
0865742e +0x784:  add    $0x0,%esp
08657431 +0x787:  pop    %ebx
08657432 +0x788:  pop    %esi
08657433 +0x789:  pop    %ebp
08657434 +0x78a:  ret
08657435 +0x78b:  mov    %edx,%ebx
08657437 +0x78d:  mov    %eax,%esi
08657439 +0x78f:  lea    -0x2c(%ebp),%eax
0865743c +0x792:  mov    %eax,(%esp)
0865743f +0x795:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08657444 +0x79a:  mov    %esi,%eax
08657446 +0x79c:  mov    %ebx,%edx
08657448 +0x79e:  mov    %eax,(%esp)
0865744b +0x7a1:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::AddDailyItem @ 0x8656caa

/* CUser::AddDailyItem() */

void __thiscall CUser::AddDailyItem(CUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  size_t sVar10;
  undefined4 uVar11;
  undefined2 local_19e;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  undefined1 uStack_198;
  int iStack_197;
  undefined1 uStack_193;
  undefined4 local_192;
  undefined4 local_18e;
  undefined4 local_18a;
  undefined4 local_186;
  undefined4 local_182;
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_16a;
  undefined4 local_166;
  undefined1 local_162;
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined1 uStack_98;
  undefined4 uStack_97;
  undefined1 uStack_93;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined1 local_62;
  char local_61 [21];
  PacketGuard local_4c [12];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  __normal_iterator local_24 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (0x13 < iVar3) {
    pCVar4 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(pCVar4,0x1057);
    if (local_14 != (int *)0x0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_19e);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      local_10 = CInventory::GetInvenData(pCVar5,0x1057,(Inven_Item *)&local_19e);
      if (local_10 < 0) {
        (**(code **)(*local_14 + 8))(local_14,&local_19e);
        iStack_197 = 3;
        uStack_19c = 0x1057;
        uStack_19a = 0;
        uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_10 = CInventory::insertItemIntoInventory
                             (uVar6,CONCAT22(uStack_19c,local_19e),
                              CONCAT13((undefined1)iStack_197,CONCAT12(uStack_198,uStack_19a)),
                              CONCAT13(uStack_193,iStack_197._1_3_),local_192,local_18e,local_18a,
                              local_186,local_182,local_17e,local_17a,local_176,local_172,local_16e,
                              local_16a,local_166,local_162,0xd,1,0);
      }
      else if (iStack_197 < 3) {
        uVar6 = Inven_Item::get_add_info((Inven_Item *)&local_19e);
        cUserHistoryLog::ItemAdd
                  ((cUserHistoryLog *)(this + 0x79700),1,3 - iStack_197,uVar6,&local_19e,0xd);
        iStack_197 = 3;
        uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        CInventory::update_item
                  (uVar6,1,local_10,CONCAT22(uStack_19c,local_19e),
                   CONCAT13((undefined1)iStack_197,CONCAT12(uStack_198,uStack_19a)),
                   CONCAT13(uStack_193,iStack_197._1_3_),local_192,local_18e,local_18a,local_186,
                   local_182,local_17e,local_17a,local_176,local_172,local_16e,local_16a,local_166,
                   local_162);
      }
      if (-1 < local_10) {
        SendUpdateItemList(this,1,0,local_10);
      }
    }
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 08656f99 to 08656f9d has its CatchHandler @ 08657435 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
                    /* try { // try from 08656fab to 08657327 has its CatchHandler @ 086573fe */
  ResetItemByScript(this,(vector *)local_30);
  RefillItemByScript(this,(vector *)local_30);
  deleteSpecificItem(this,(vector *)local_30,(vector *)local_3c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_40,local_24);
    if (!bVar1) break;
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_40);
    if ((*piVar7 < 0) ||
       (piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_40), 0x1b < *piVar7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_40), -1 < *(int *)(iVar3 + 4))) {
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_40);
      uVar6 = *(undefined4 *)(iVar3 + 4);
      puVar8 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_40);
      SendUpdateItemList(this,1,*puVar8,uVar6);
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_20,(int)local_40);
  }
  advancealtar::CharacAdvanceAltarManager::refillTicketFree
            ((CharacAdvanceAltarManager *)(this + 0x8df60));
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar3 < 0x4811f1f0) {
    pCVar4 = (CDataManager *)G_CDataManager();
    local_1c = (int *)CDataManager::find_item(pCVar4,0x1cab);
    if (local_1c != (int *)0x0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_9e);
      (**(code **)(*local_1c + 8))(local_1c,&local_9e);
      uStack_97 = 1;
      uStack_9c = 0x1cab;
      uStack_9a = 0;
      local_18 = 0xffffffff;
      uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_18 = CInventory::insertItemIntoInventory
                           (uVar6,CONCAT22(uStack_9c,local_9e),
                            CONCAT13((undefined1)uStack_97,CONCAT12(uStack_98,uStack_9a)),
                            CONCAT13(uStack_93,uStack_97._1_3_),local_92,local_8e,local_8a,local_86,
                            local_82,local_7e,local_7a,local_76,local_72,local_6e,local_6a,local_66,
                            local_62,0xd,1,1);
      if (local_18 == -1) {
        pcVar9 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_24",(bool *)0x0);
        strncpy(local_61,pcVar9,0x14);
        pcVar9 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_25",(bool *)0x0);
        strncpy((char *)&local_19e,pcVar9,0xff);
        uVar6 = GetServerGroup(this);
        sVar10 = strlen((char *)&local_19e);
        uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_61,&local_9e,0,uVar11,&local_19e,sVar10,0,uVar6,0,0);
      }
      else {
        PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0865733e to 086573c4 has its CatchHandler @ 086573cc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xe);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,1);
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        cVar2 = CInventory::MakeItemPacket(pCVar5,1,local_18,local_4c);
        if (cVar2 == '\x01') {
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
          Send(this,local_4c);
        }
                    /* try { // try from 086573e7 to 086573eb has its CatchHandler @ 086573fe */
        PacketGuard::~PacketGuard(local_4c);
      }
    }
  }
                    /* try { // try from 08657419 to 0865741d has its CatchHandler @ 08657435 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
  return;
}
```
