# arad_secret_shop_event_item

`_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem`

`ARAD::ARAD_ITEM::arad_secret_shop_event_item(CUser*, unsigned long, CStackableItem*)`

| 类 | 地址 |
|---|---|
| `ARAD::ARAD_ITEM` | `0x08196ed7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196ed7  _ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem
#           ARAD::ARAD_ITEM::arad_secret_shop_event_item(CUser*, unsigned long, CStackableItem*)
# range [0x08196ed7, 0x08197374]
08196ed7 +0x000:  push   %ebp
08196ed8 +0x001:  mov    %esp,%ebp
08196eda +0x003:  push   %esi
08196edb +0x004:  push   %ebx
08196edc +0x005:  sub    $0xe0,%esp
08196ee2 +0x00b:  mov    0x10(%ebp),%eax
08196ee5 +0x00e:  add    $0x168,%eax
08196eea +0x013:  mov    %eax,(%esp)
08196eed +0x016:  call   08197fa4 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x1af>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x1af
08196ef2 +0x01b:  test   %al,%al
08196ef4 +0x01d:  jne    08197367 <+0x490>
08196efa +0x023:  mov    0x10(%ebp),%eax
08196efd +0x026:  mov    %eax,(%esp)
08196f00 +0x029:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08196f05 +0x02e:  cmp    $0x28be4b,%eax
08196f0a +0x033:  sete   %al
08196f0d +0x036:  test   %al,%al
08196f0f +0x038:  jne    0819736a <+0x493>
08196f15 +0x03e:  mov    0x10(%ebp),%eax
08196f18 +0x041:  mov    %eax,(%esp)
08196f1b +0x044:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08196f20 +0x049:  cmp    $0x28be6a,%eax
08196f25 +0x04e:  sete   %al
08196f28 +0x051:  test   %al,%al
08196f2a +0x053:  je     0819702a <+0x153>
08196f30 +0x059:  lea    -0x44(%ebp),%eax
08196f33 +0x05c:  mov    %eax,(%esp)
08196f36 +0x05f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08196f3b +0x064:  lea    -0x44(%ebp),%eax
08196f3e +0x067:  mov    %eax,(%esp)
08196f41 +0x06a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08196f46 +0x06f:  movl   $0x100,0x8(%esp)
08196f4e +0x077:  movl   $0x0,0x4(%esp)
08196f56 +0x07f:  lea    -0x44(%ebp),%eax
08196f59 +0x082:  mov    %eax,(%esp)
08196f5c +0x085:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08196f61 +0x08a:  movl   $0x1,0x4(%esp)
08196f69 +0x092:  lea    -0x44(%ebp),%eax
08196f6c +0x095:  mov    %eax,(%esp)
08196f6f +0x098:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08196f74 +0x09d:  mov    0xc(%ebp),%eax
08196f77 +0x0a0:  mov    %eax,0x4(%esp)
08196f7b +0x0a4:  lea    -0x44(%ebp),%eax
08196f7e +0x0a7:  mov    %eax,(%esp)
08196f81 +0x0aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08196f86 +0x0af:  movl   $0x708,0x4(%esp)
08196f8e +0x0b7:  lea    -0x44(%ebp),%eax
08196f91 +0x0ba:  mov    %eax,(%esp)
08196f94 +0x0bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08196f99 +0x0c2:  movl   $0x1,0x4(%esp)
08196fa1 +0x0ca:  lea    -0x44(%ebp),%eax
08196fa4 +0x0cd:  mov    %eax,(%esp)
08196fa7 +0x0d0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08196fac +0x0d5:  lea    -0x44(%ebp),%eax
08196faf +0x0d8:  mov    %eax,0x4(%esp)
08196fb3 +0x0dc:  mov    0x8(%ebp),%eax
08196fb6 +0x0df:  mov    %eax,(%esp)
08196fb9 +0x0e2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08196fbe +0x0e7:  movl   $0x0,0x4(%esp)
08196fc6 +0x0ef:  mov    0x8(%ebp),%eax
08196fc9 +0x0f2:  mov    %eax,(%esp)
08196fcc +0x0f5:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08196fd1 +0x0fa:  mov    %eax,%ebx
08196fd3 +0x0fc:  mov    0x8(%ebp),%eax
08196fd6 +0x0ff:  mov    %eax,(%esp)
08196fd9 +0x102:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08196fde +0x107:  movsbl %al,%esi
08196fe1 +0x10a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08196fe6 +0x10f:  lea    -0x44(%ebp),%edx
08196fe9 +0x112:  mov    %edx,0xc(%esp)
08196fed +0x116:  mov    %ebx,0x8(%esp)
08196ff1 +0x11a:  mov    %esi,0x4(%esp)
08196ff5 +0x11e:  mov    %eax,(%esp)
08196ff8 +0x121:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
08196ffd +0x126:  jmp    0819701a <+0x143>
08196fff +0x128:  mov    %edx,%ebx
08197001 +0x12a:  mov    %eax,%esi
08197003 +0x12c:  lea    -0x44(%ebp),%eax
08197006 +0x12f:  mov    %eax,(%esp)
08197009 +0x132:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819700e +0x137:  mov    %esi,%eax
08197010 +0x139:  mov    %ebx,%edx
08197012 +0x13b:  mov    %eax,(%esp)
08197015 +0x13e:  call   08ae3750 <_Unwind_Resume>
0819701a +0x143:  lea    -0x44(%ebp),%eax
0819701d +0x146:  mov    %eax,(%esp)
08197020 +0x149:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08197025 +0x14e:  jmp    0819736b <+0x494>
0819702a +0x153:  movl   $0xffffffff,-0x10(%ebp)
08197031 +0x15a:  lea    -0x28(%ebp),%eax
08197034 +0x15d:  mov    %eax,(%esp)
08197037 +0x160:  call   08197e1e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x29>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x29
0819703c +0x165:  lea    -0x2c(%ebp),%eax
0819703f +0x168:  mov    %eax,(%esp)
08197042 +0x16b:  call   08197fe8 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x1f3>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x1f3
08197047 +0x170:  mov    0x10(%ebp),%eax
0819704a +0x173:  lea    0x168(%eax),%edx
08197050 +0x179:  lea    -0x8c(%ebp),%eax
08197056 +0x17f:  mov    %edx,0x4(%esp)
0819705a +0x183:  mov    %eax,(%esp)
0819705d +0x186:  call   08197ff6 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x201>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x201
08197062 +0x18b:  sub    $0x4,%esp
08197065 +0x18e:  mov    -0x8c(%ebp),%eax
0819706b +0x194:  mov    %eax,-0x2c(%ebp)
0819706e +0x197:  jmp    0819722b <+0x354>
08197073 +0x19c:  lea    -0x2c(%ebp),%eax
08197076 +0x19f:  mov    %eax,(%esp)
08197079 +0x1a2:  call   08198082 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x28d>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x28d
0819707e +0x1a7:  mov    %eax,0x4(%esp)
08197082 +0x1ab:  lea    -0x28(%ebp),%eax
08197085 +0x1ae:  mov    %eax,(%esp)
08197088 +0x1b1:  call   08197ec2 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0xcd>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0xcd
0819708d +0x1b6:  lea    -0x28(%ebp),%eax
08197090 +0x1b9:  mov    %eax,(%esp)
08197093 +0x1bc:  call   08197e9e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0xa9>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0xa9
08197098 +0x1c1:  mov    %eax,%ebx
0819709a +0x1c3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819709f +0x1c8:  mov    %ebx,0x4(%esp)
081970a3 +0x1cc:  mov    %eax,(%esp)
081970a6 +0x1cf:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081970ab +0x1d4:  mov    %eax,-0xc(%ebp)
081970ae +0x1d7:  cmpl   $0x0,-0xc(%ebp)
081970b2 +0x1db:  je     0819721f <+0x348>
081970b8 +0x1e1:  lea    -0x81(%ebp),%eax
081970be +0x1e7:  mov    %eax,(%esp)
081970c1 +0x1ea:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081970c6 +0x1ef:  lea    -0x28(%ebp),%eax
081970c9 +0x1f2:  mov    %eax,(%esp)
081970cc +0x1f5:  call   08197e9e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0xa9>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0xa9
081970d1 +0x1fa:  mov    %eax,-0x7f(%ebp)
081970d4 +0x1fd:  lea    -0x28(%ebp),%eax
081970d7 +0x200:  mov    %eax,(%esp)
081970da +0x203:  call   08197eaa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0xb5>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0xb5
081970df +0x208:  mov    %eax,-0x7a(%ebp)
081970e2 +0x20b:  mov    -0xc(%ebp),%eax
081970e5 +0x20e:  mov    (%eax),%eax
081970e7 +0x210:  add    $0x8,%eax
081970ea +0x213:  mov    (%eax),%edx
081970ec +0x215:  lea    -0x81(%ebp),%eax
081970f2 +0x21b:  mov    %eax,0x4(%esp)
081970f6 +0x21f:  mov    -0xc(%ebp),%eax
081970f9 +0x222:  mov    %eax,(%esp)
081970fc +0x225:  call   *%edx
081970fe +0x227:  mov    0x8(%ebp),%eax
08197101 +0x22a:  mov    %eax,(%esp)
08197104 +0x22d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08197109 +0x232:  movl   $0x0,0x4c(%esp)
08197111 +0x23a:  movl   $0x1,0x48(%esp)
08197119 +0x242:  movl   $0xd,0x44(%esp)
08197121 +0x24a:  mov    -0x81(%ebp),%edx
08197127 +0x250:  mov    %edx,0x4(%esp)
0819712b +0x254:  mov    -0x7d(%ebp),%edx
0819712e +0x257:  mov    %edx,0x8(%esp)
08197132 +0x25b:  mov    -0x79(%ebp),%edx
08197135 +0x25e:  mov    %edx,0xc(%esp)
08197139 +0x262:  mov    -0x75(%ebp),%edx
0819713c +0x265:  mov    %edx,0x10(%esp)
08197140 +0x269:  mov    -0x71(%ebp),%edx
08197143 +0x26c:  mov    %edx,0x14(%esp)
08197147 +0x270:  mov    -0x6d(%ebp),%edx
0819714a +0x273:  mov    %edx,0x18(%esp)
0819714e +0x277:  mov    -0x69(%ebp),%edx
08197151 +0x27a:  mov    %edx,0x1c(%esp)
08197155 +0x27e:  mov    -0x65(%ebp),%edx
08197158 +0x281:  mov    %edx,0x20(%esp)
0819715c +0x285:  mov    -0x61(%ebp),%edx
0819715f +0x288:  mov    %edx,0x24(%esp)
08197163 +0x28c:  mov    -0x5d(%ebp),%edx
08197166 +0x28f:  mov    %edx,0x28(%esp)
0819716a +0x293:  mov    -0x59(%ebp),%edx
0819716d +0x296:  mov    %edx,0x2c(%esp)
08197171 +0x29a:  mov    -0x55(%ebp),%edx
08197174 +0x29d:  mov    %edx,0x30(%esp)
08197178 +0x2a1:  mov    -0x51(%ebp),%edx
0819717b +0x2a4:  mov    %edx,0x34(%esp)
0819717f +0x2a8:  mov    -0x4d(%ebp),%edx
08197182 +0x2ab:  mov    %edx,0x38(%esp)
08197186 +0x2af:  mov    -0x49(%ebp),%edx
08197189 +0x2b2:  mov    %edx,0x3c(%esp)
0819718d +0x2b6:  movzbl -0x45(%ebp),%edx
08197191 +0x2ba:  mov    %dl,0x40(%esp)
08197195 +0x2be:  mov    %eax,(%esp)
08197198 +0x2c1:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0819719d +0x2c6:  mov    %eax,-0x10(%ebp)
081971a0 +0x2c9:  cmpl   $0xffffffff,-0x10(%ebp)
081971a4 +0x2cd:  setne  %al
081971a7 +0x2d0:  test   %al,%al
081971a9 +0x2d2:  je     081971d9 <+0x302>
081971ab +0x2d4:  mov    -0x10(%ebp),%eax
081971ae +0x2d7:  mov    %eax,0xc(%esp)
081971b2 +0x2db:  movl   $0x0,0x8(%esp)
081971ba +0x2e3:  movl   $0x1,0x4(%esp)
081971c2 +0x2eb:  mov    0x8(%ebp),%eax
081971c5 +0x2ee:  mov    %eax,(%esp)
081971c8 +0x2f1:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081971cd +0x2f6:  xor    $0x1,%eax
081971d0 +0x2f9:  test   %al,%al
081971d2 +0x2fb:  je     08197220 <+0x349>
081971d4 +0x2fd:  jmp    0819735a <+0x483>
081971d9 +0x302:  mov    0x8(%ebp),%eax
081971dc +0x305:  mov    %eax,(%esp)
081971df +0x308:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081971e4 +0x30d:  movl   $0x0,0x18(%esp)
081971ec +0x315:  movl   $0x0,0x14(%esp)
081971f4 +0x31d:  movl   $0x1,0x10(%esp)
081971fc +0x325:  mov    %eax,0xc(%esp)
08197200 +0x329:  movl   $0x0,0x8(%esp)
08197208 +0x331:  lea    -0x81(%ebp),%eax
0819720e +0x337:  mov    %eax,0x4(%esp)
08197212 +0x33b:  mov    0x8(%ebp),%eax
08197215 +0x33e:  mov    %eax,(%esp)
08197218 +0x341:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
0819721d +0x346:  jmp    08197220 <+0x349>
0819721f +0x348:  nop
08197220 +0x349:  lea    -0x2c(%ebp),%eax
08197223 +0x34c:  mov    %eax,(%esp)
08197226 +0x34f:  call   0819806c <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x277>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x277
0819722b +0x354:  mov    0x10(%ebp),%eax
0819722e +0x357:  lea    0x168(%eax),%edx
08197234 +0x35d:  lea    -0x14(%ebp),%eax
08197237 +0x360:  mov    %edx,0x4(%esp)
0819723b +0x364:  mov    %eax,(%esp)
0819723e +0x367:  call   0819801a <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x225>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x225
08197243 +0x36c:  sub    $0x4,%esp
08197246 +0x36f:  lea    -0x14(%ebp),%eax
08197249 +0x372:  mov    %eax,0x4(%esp)
0819724d +0x376:  lea    -0x2c(%ebp),%eax
08197250 +0x379:  mov    %eax,(%esp)
08197253 +0x37c:  call   08198040 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x24b>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x24b
08197258 +0x381:  test   %al,%al
0819725a +0x383:  jne    08197073 <+0x19c>
08197260 +0x389:  lea    -0x38(%ebp),%eax
08197263 +0x38c:  mov    %eax,(%esp)
08197266 +0x38f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0819726b +0x394:  lea    -0x38(%ebp),%eax
0819726e +0x397:  mov    %eax,(%esp)
08197271 +0x39a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08197276 +0x39f:  movl   $0x100,0x8(%esp)
0819727e +0x3a7:  movl   $0x0,0x4(%esp)
08197286 +0x3af:  lea    -0x38(%ebp),%eax
08197289 +0x3b2:  mov    %eax,(%esp)
0819728c +0x3b5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08197291 +0x3ba:  movl   $0x1,0x4(%esp)
08197299 +0x3c2:  lea    -0x38(%ebp),%eax
0819729c +0x3c5:  mov    %eax,(%esp)
0819729f +0x3c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081972a4 +0x3cd:  mov    0xc(%ebp),%eax
081972a7 +0x3d0:  mov    %eax,0x4(%esp)
081972ab +0x3d4:  lea    -0x38(%ebp),%eax
081972ae +0x3d7:  mov    %eax,(%esp)
081972b1 +0x3da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081972b6 +0x3df:  movl   $0x708,0x4(%esp)
081972be +0x3e7:  lea    -0x38(%ebp),%eax
081972c1 +0x3ea:  mov    %eax,(%esp)
081972c4 +0x3ed:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081972c9 +0x3f2:  movl   $0x1,0x4(%esp)
081972d1 +0x3fa:  lea    -0x38(%ebp),%eax
081972d4 +0x3fd:  mov    %eax,(%esp)
081972d7 +0x400:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081972dc +0x405:  movl   $0x0,0x4(%esp)
081972e4 +0x40d:  mov    0x8(%ebp),%eax
081972e7 +0x410:  mov    %eax,(%esp)
081972ea +0x413:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081972ef +0x418:  mov    %eax,%ebx
081972f1 +0x41a:  mov    0x8(%ebp),%eax
081972f4 +0x41d:  mov    %eax,(%esp)
081972f7 +0x420:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081972fc +0x425:  movsbl %al,%esi
081972ff +0x428:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08197304 +0x42d:  lea    -0x38(%ebp),%edx
08197307 +0x430:  mov    %edx,0xc(%esp)
0819730b +0x434:  mov    %ebx,0x8(%esp)
0819730f +0x438:  mov    %esi,0x4(%esp)
08197313 +0x43c:  mov    %eax,(%esp)
08197316 +0x43f:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
0819731b +0x444:  jmp    08197332 <+0x45b>
0819731d +0x446:  mov    %edx,%ebx
0819731f +0x448:  mov    %eax,%esi
08197321 +0x44a:  lea    -0x38(%ebp),%eax
08197324 +0x44d:  mov    %eax,(%esp)
08197327 +0x450:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819732c +0x455:  mov    %esi,%eax
0819732e +0x457:  mov    %ebx,%edx
08197330 +0x459:  jmp    0819733f <+0x468>
08197332 +0x45b:  lea    -0x38(%ebp),%eax
08197335 +0x45e:  mov    %eax,(%esp)
08197338 +0x461:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819733d +0x466:  jmp    0819735a <+0x483>
0819733f +0x468:  mov    %edx,%ebx
08197341 +0x46a:  mov    %eax,%esi
08197343 +0x46c:  lea    -0x28(%ebp),%eax
08197346 +0x46f:  mov    %eax,(%esp)
08197349 +0x472:  call   08197e5a <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x65>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x65
0819734e +0x477:  mov    %esi,%eax
08197350 +0x479:  mov    %ebx,%edx
08197352 +0x47b:  mov    %eax,(%esp)
08197355 +0x47e:  call   08ae3750 <_Unwind_Resume>
0819735a +0x483:  lea    -0x28(%ebp),%eax
0819735d +0x486:  mov    %eax,(%esp)
08197360 +0x489:  call   08197e5a <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x65>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x65
08197365 +0x48e:  jmp    0819736b <+0x494>
08197367 +0x490:  nop
08197368 +0x491:  jmp    0819736b <+0x494>
0819736a +0x493:  nop
0819736b +0x494:  lea    -0x8(%ebp),%esp
0819736e +0x497:  add    $0x0,%esp
08197371 +0x49a:  pop    %ebx
08197372 +0x49b:  pop    %esi
08197373 +0x49c:  pop    %ebp
08197374 +0x49d:  ret
```

## 反编译 C

```c
// ARAD::ARAD_ITEM::arad_secret_shop_event_item @ 0x8196ed7

/* ARAD::ARAD_ITEM::arad_secret_shop_event_item(CUser*, unsigned long, CStackableItem*) */

void ARAD::ARAD_ITEM::arad_secret_shop_event_item
               (CUser *param_1,ulong param_2,CStackableItem *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GameWorld *pGVar4;
  CRabbitBox *pCVar5;
  CDataManager *this;
  undefined4 uVar6;
  uint uVar7;
  undefined2 local_85;
  undefined2 uStack_83;
  undefined2 uStack_81;
  undefined1 uStack_7f;
  undefined4 uStack_7e;
  undefined1 uStack_7a;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined1 local_49;
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  __normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>> local_30 [4];
  CRabbitBox local_2c [20];
  __normal_iterator local_18 [4];
  int local_14;
  int *local_10;
  
  cVar1 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::empty();
  if ((cVar1 == '\0') && (iVar3 = CItem::get_index((CItem *)param_3), iVar3 != 0x28be4b)) {
    iVar3 = CItem::get_index((CItem *)param_3);
    if (iVar3 == 0x28be6a) {
      PacketGuard::PacketGuard(local_48);
                    /* try { // try from 08196f41 to 08196ffc has its CatchHandler @ 08196fff */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x100);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,param_2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0x708);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
      CUser::Send(param_1,local_48);
      iVar3 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar4,(int)cVar1,iVar3,local_48);
      PacketGuard::~PacketGuard(local_48);
    }
    else {
      local_14 = -1;
      CRabbitBox::CRabbitBox(local_2c);
      __gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>::
      __normal_iterator(local_30);
                    /* try { // try from 0819705d to 0819726a has its CatchHandler @ 0819733f */
      std::vector<CRabbitBox,std::allocator<CRabbitBox>>::begin();
      while( true ) {
        std::vector<CRabbitBox,std::allocator<CRabbitBox>>::end();
        bVar2 = __gnu_cxx::operator!=(local_30,local_18);
        if (!bVar2) break;
        pCVar5 = (CRabbitBox *)
                 __gnu_cxx::
                 __normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>::
                 operator*(local_30);
        CRabbitBox::operator=(local_2c,pCVar5);
        iVar3 = CRabbitBox::getItemIndex(local_2c);
        this = (CDataManager *)G_CDataManager();
        local_10 = (int *)CDataManager::find_item(this,iVar3);
        if (local_10 != (int *)0x0) {
          Inven_Item::Inven_Item((Inven_Item *)&local_85);
          uVar6 = CRabbitBox::getItemIndex(local_2c);
          uStack_83 = (undefined2)uVar6;
          uStack_81 = (undefined2)((uint)uVar6 >> 0x10);
          uStack_7e = CRabbitBox::getItemCount(local_2c);
          (**(code **)(*local_10 + 8))(local_10,&local_85);
          uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_14 = CInventory::insertItemIntoInventory
                               (uVar6,CONCAT22(uStack_83,local_85),
                                CONCAT13((undefined1)uStack_7e,CONCAT12(uStack_7f,uStack_81)),
                                CONCAT13(uStack_7a,uStack_7e._1_3_),local_79,local_75,local_71,
                                local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,
                                local_51,local_4d,local_49,0xd,1,0);
          if (local_14 == -1) {
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewMail
                      (param_1,(Inven_Item *)&local_85,0,uVar7,true,(char *)0x0,0);
          }
          else {
            cVar1 = CUser::SendUpdateItemList(param_1,1,0,local_14);
            if (cVar1 != '\x01') goto LAB_0819735a;
          }
        }
        __gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>
        ::operator++(local_30);
      }
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08197271 to 0819731a has its CatchHandler @ 0819731d */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x100);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0x708);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      iVar3 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar4,(int)cVar1,iVar3,local_3c);
                    /* try { // try from 08197338 to 0819733c has its CatchHandler @ 0819733f */
      PacketGuard::~PacketGuard(local_3c);
LAB_0819735a:
      CRabbitBox::~CRabbitBox(local_2c);
    }
  }
  return;
}
```
