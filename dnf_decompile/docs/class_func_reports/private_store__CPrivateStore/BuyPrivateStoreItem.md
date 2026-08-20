# BuyPrivateStoreItem

`_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii`

`private_store::CPrivateStore::BuyPrivateStoreItem(int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7e74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7e74  _ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii
#           private_store::CPrivateStore::BuyPrivateStoreItem(int, int)
# range [0x085c7e74, 0x085c8744]
085c7e74 +0x000:  push   %ebp
085c7e75 +0x001:  mov    %esp,%ebp
085c7e77 +0x003:  push   %edi
085c7e78 +0x004:  push   %esi
085c7e79 +0x005:  push   %ebx
085c7e7a +0x006:  sub    $0xbc,%esp
085c7e80 +0x00c:  mov    0x8(%ebp),%eax
085c7e83 +0x00f:  mov    0x30(%eax),%eax
085c7e86 +0x012:  mov    0x8(%ebp),%edx
085c7e89 +0x015:  add    $0x14,%edx
085c7e8c +0x018:  movl   $0x55,0xc(%esp)
085c7e94 +0x020:  movl   $0x1,0x8(%esp)
085c7e9c +0x028:  mov    %eax,0x4(%esp)
085c7ea0 +0x02c:  mov    %edx,(%esp)
085c7ea3 +0x02f:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c7ea8 +0x034:  mov    0x8(%ebp),%eax
085c7eab +0x037:  mov    0x30(%eax),%eax
085c7eae +0x03a:  test   %eax,%eax
085c7eb0 +0x03c:  jne    085c7ebc <+0x48>
085c7eb2 +0x03e:  mov    $0x0,%ebx
085c7eb7 +0x043:  jmp    085c8738 <+0x8c4>
085c7ebc +0x048:  mov    0x8(%ebp),%eax
085c7ebf +0x04b:  mov    0x20(%eax),%eax
085c7ec2 +0x04e:  test   %eax,%eax
085c7ec4 +0x050:  jne    085c7ee6 <+0x72>
085c7ec6 +0x052:  mov    0x8(%ebp),%eax
085c7ec9 +0x055:  add    $0x14,%eax
085c7ecc +0x058:  movl   $0x3a,0x4(%esp)
085c7ed4 +0x060:  mov    %eax,(%esp)
085c7ed7 +0x063:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7edc +0x068:  mov    $0x0,%ebx
085c7ee1 +0x06d:  jmp    085c8738 <+0x8c4>
085c7ee6 +0x072:  mov    0x8(%ebp),%eax
085c7ee9 +0x075:  mov    0x30(%eax),%eax
085c7eec +0x078:  mov    %eax,0x4(%esp)
085c7ef0 +0x07c:  mov    0x8(%ebp),%eax
085c7ef3 +0x07f:  mov    %eax,(%esp)
085c7ef6 +0x082:  call   085c91b6 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser>  ; private_store::CPrivateStore::IsExistBuyerList(CUser*)
085c7efb +0x087:  xor    $0x1,%eax
085c7efe +0x08a:  test   %al,%al
085c7f00 +0x08c:  je     085c7f22 <+0xae>
085c7f02 +0x08e:  mov    0x8(%ebp),%eax
085c7f05 +0x091:  add    $0x14,%eax
085c7f08 +0x094:  movl   $0x15,0x4(%esp)
085c7f10 +0x09c:  mov    %eax,(%esp)
085c7f13 +0x09f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7f18 +0x0a4:  mov    $0x0,%ebx
085c7f1d +0x0a9:  jmp    085c8738 <+0x8c4>
085c7f22 +0x0ae:  mov    0x8(%ebp),%eax
085c7f25 +0x0b1:  mov    0x30(%eax),%eax
085c7f28 +0x0b4:  mov    %eax,(%esp)
085c7f2b +0x0b7:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c7f30 +0x0bc:  test   %eax,%eax
085c7f32 +0x0be:  sete   %al
085c7f35 +0x0c1:  test   %al,%al
085c7f37 +0x0c3:  je     085c7f59 <+0xe5>
085c7f39 +0x0c5:  mov    0x8(%ebp),%eax
085c7f3c +0x0c8:  add    $0x14,%eax
085c7f3f +0x0cb:  movl   $0x1,0x4(%esp)
085c7f47 +0x0d3:  mov    %eax,(%esp)
085c7f4a +0x0d6:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7f4f +0x0db:  mov    $0x0,%ebx
085c7f54 +0x0e0:  jmp    085c8738 <+0x8c4>
085c7f59 +0x0e5:  cmpl   $0x0,0xc(%ebp)
085c7f5d +0x0e9:  js     085c7f65 <+0xf1>
085c7f5f +0x0eb:  cmpl   $0xd,0xc(%ebp)
085c7f63 +0x0ef:  jle    085c7f85 <+0x111>
085c7f65 +0x0f1:  mov    0x8(%ebp),%eax
085c7f68 +0x0f4:  add    $0x14,%eax
085c7f6b +0x0f7:  movl   $0x39,0x4(%esp)
085c7f73 +0x0ff:  mov    %eax,(%esp)
085c7f76 +0x102:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7f7b +0x107:  mov    $0x0,%ebx
085c7f80 +0x10c:  jmp    085c8738 <+0x8c4>
085c7f85 +0x111:  mov    0x8(%ebp),%eax
085c7f88 +0x114:  mov    0x30(%eax),%edx
085c7f8b +0x117:  mov    0x8(%ebp),%eax
085c7f8e +0x11a:  mov    0x20(%eax),%eax
085c7f91 +0x11d:  mov    %edx,0x4(%esp)
085c7f95 +0x121:  mov    %eax,(%esp)
085c7f98 +0x124:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
085c7f9d +0x129:  test   %al,%al
085c7f9f +0x12b:  je     085c7fc1 <+0x14d>
085c7fa1 +0x12d:  mov    0x8(%ebp),%eax
085c7fa4 +0x130:  add    $0x14,%eax
085c7fa7 +0x133:  movl   $0x3c,0x4(%esp)
085c7faf +0x13b:  mov    %eax,(%esp)
085c7fb2 +0x13e:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7fb7 +0x143:  mov    $0x0,%ebx
085c7fbc +0x148:  jmp    085c8738 <+0x8c4>
085c7fc1 +0x14d:  movl   $0x0,-0x38(%ebp)
085c7fc8 +0x154:  mov    0xc(%ebp),%eax
085c7fcb +0x157:  mov    0x8(%ebp),%edx
085c7fce +0x15a:  add    $0x3c,%edx
085c7fd1 +0x15d:  mov    %eax,0x4(%esp)
085c7fd5 +0x161:  mov    %edx,(%esp)
085c7fd8 +0x164:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c7fdd +0x169:  mov    %eax,-0x34(%ebp)
085c7fe0 +0x16c:  mov    -0x34(%ebp),%eax
085c7fe3 +0x16f:  mov    0x2(%eax),%eax
085c7fe6 +0x172:  mov    %eax,%ebx
085c7fe8 +0x174:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c7fed +0x179:  mov    %ebx,0x4(%esp)
085c7ff1 +0x17d:  mov    %eax,(%esp)
085c7ff4 +0x180:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c7ff9 +0x185:  mov    %eax,-0x38(%ebp)
085c7ffc +0x188:  cmpl   $0x0,-0x38(%ebp)
085c8000 +0x18c:  sete   %al
085c8003 +0x18f:  test   %al,%al
085c8005 +0x191:  je     085c8027 <+0x1b3>
085c8007 +0x193:  mov    0x8(%ebp),%eax
085c800a +0x196:  add    $0x14,%eax
085c800d +0x199:  movl   $0x11,0x4(%esp)
085c8015 +0x1a1:  mov    %eax,(%esp)
085c8018 +0x1a4:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c801d +0x1a9:  mov    $0x0,%ebx
085c8022 +0x1ae:  jmp    085c8738 <+0x8c4>
085c8027 +0x1b3:  mov    -0x38(%ebp),%eax
085c802a +0x1b6:  mov    %eax,(%esp)
085c802d +0x1b9:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
085c8032 +0x1be:  mov    %eax,-0x30(%ebp)
085c8035 +0x1c1:  cmpl   $0x0,-0x30(%ebp)
085c8039 +0x1c5:  je     085c80b2 <+0x23e>
085c803b +0x1c7:  cmpl   $0x3,-0x30(%ebp)
085c803f +0x1cb:  jne    085c806e <+0x1fa>
085c8041 +0x1cd:  mov    -0x34(%ebp),%eax
085c8044 +0x1d0:  movzbl (%eax),%eax
085c8047 +0x1d3:  xor    $0x1,%eax
085c804a +0x1d6:  test   %al,%al
085c804c +0x1d8:  je     085c80b2 <+0x23e>
085c804e +0x1da:  mov    0x8(%ebp),%eax
085c8051 +0x1dd:  add    $0x14,%eax
085c8054 +0x1e0:  movl   $0x11,0x4(%esp)
085c805c +0x1e8:  mov    %eax,(%esp)
085c805f +0x1eb:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c8064 +0x1f0:  mov    $0x0,%ebx
085c8069 +0x1f5:  jmp    085c8738 <+0x8c4>
085c806e +0x1fa:  cmpl   $0x7,-0x30(%ebp)
085c8072 +0x1fe:  jne    085c8092 <+0x21e>
085c8074 +0x200:  mov    -0x34(%ebp),%eax
085c8077 +0x203:  mov    %eax,(%esp)
085c807a +0x206:  call   08120422 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x48>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x48
085c807f +0x20b:  test   %al,%al
085c8081 +0x20d:  sete   %al
085c8084 +0x210:  test   %al,%al
085c8086 +0x212:  je     085c80b2 <+0x23e>
085c8088 +0x214:  mov    $0x0,%ebx
085c808d +0x219:  jmp    085c8738 <+0x8c4>
085c8092 +0x21e:  mov    0x8(%ebp),%eax
085c8095 +0x221:  add    $0x14,%eax
085c8098 +0x224:  movl   $0x11,0x4(%esp)
085c80a0 +0x22c:  mov    %eax,(%esp)
085c80a3 +0x22f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c80a8 +0x234:  mov    $0x0,%ebx
085c80ad +0x239:  jmp    085c8738 <+0x8c4>
085c80b2 +0x23e:  mov    -0x34(%ebp),%eax
085c80b5 +0x241:  movzbl 0x1(%eax),%eax
085c80b9 +0x245:  movzbl %al,%eax
085c80bc +0x248:  mov    %eax,(%esp)
085c80bf +0x24b:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
085c80c4 +0x250:  test   %al,%al
085c80c6 +0x252:  je     085c80e8 <+0x274>
085c80c8 +0x254:  mov    0x8(%ebp),%eax
085c80cb +0x257:  add    $0x14,%eax
085c80ce +0x25a:  movl   $0x11,0x4(%esp)
085c80d6 +0x262:  mov    %eax,(%esp)
085c80d9 +0x265:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c80de +0x26a:  mov    $0x0,%ebx
085c80e3 +0x26f:  jmp    085c8738 <+0x8c4>
085c80e8 +0x274:  lea    -0x40(%ebp),%eax
085c80eb +0x277:  mov    %eax,0x18(%esp)
085c80ef +0x27b:  lea    -0x3c(%ebp),%eax
085c80f2 +0x27e:  mov    %eax,0x14(%esp)
085c80f6 +0x282:  lea    -0x44(%ebp),%eax
085c80f9 +0x285:  mov    %eax,0x10(%esp)
085c80fd +0x289:  mov    0x10(%ebp),%eax
085c8100 +0x28c:  mov    %eax,0xc(%esp)
085c8104 +0x290:  mov    -0x34(%ebp),%eax
085c8107 +0x293:  mov    %eax,0x8(%esp)
085c810b +0x297:  mov    -0x38(%ebp),%eax
085c810e +0x29a:  mov    %eax,0x4(%esp)
085c8112 +0x29e:  mov    0x8(%ebp),%eax
085c8115 +0x2a1:  mov    %eax,(%esp)
085c8118 +0x2a4:  call   085c7d04 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_>  ; private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int, int&, unsigned int&, unsigned int&)
085c811d +0x2a9:  xor    $0x1,%eax
085c8120 +0x2ac:  test   %al,%al
085c8122 +0x2ae:  je     085c812e <+0x2ba>
085c8124 +0x2b0:  mov    $0x0,%ebx
085c8129 +0x2b5:  jmp    085c8738 <+0x8c4>
085c812e +0x2ba:  mov    -0x40(%ebp),%ecx
085c8131 +0x2bd:  mov    -0x3c(%ebp),%edx
085c8134 +0x2c0:  mov    -0x44(%ebp),%eax
085c8137 +0x2c3:  mov    %ecx,0xc(%esp)
085c813b +0x2c7:  mov    %edx,0x8(%esp)
085c813f +0x2cb:  mov    %eax,0x4(%esp)
085c8143 +0x2cf:  mov    0x8(%ebp),%eax
085c8146 +0x2d2:  mov    %eax,(%esp)
085c8149 +0x2d5:  call   085c7c0a <_ZN13private_store13CPrivateStore14IsPossibleDealEijj>  ; private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int)
085c814e +0x2da:  xor    $0x1,%eax
085c8151 +0x2dd:  test   %al,%al
085c8153 +0x2df:  je     085c815f <+0x2eb>
085c8155 +0x2e1:  mov    $0x0,%ebx
085c815a +0x2e6:  jmp    085c8738 <+0x8c4>
085c815f +0x2eb:  mov    0x8(%ebp),%eax
085c8162 +0x2ee:  mov    0x30(%eax),%eax
085c8165 +0x2f1:  mov    %eax,(%esp)
085c8168 +0x2f4:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
085c816d +0x2f9:  xor    $0x1,%eax
085c8170 +0x2fc:  test   %al,%al
085c8172 +0x2fe:  je     085c81b2 <+0x33e>
085c8174 +0x300:  mov    -0x44(%ebp),%eax
085c8177 +0x303:  mov    %eax,%edx
085c8179 +0x305:  mov    0x8(%ebp),%eax
085c817c +0x308:  mov    0x30(%eax),%eax
085c817f +0x30b:  mov    %edx,0x4(%esp)
085c8183 +0x30f:  mov    %eax,(%esp)
085c8186 +0x312:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
085c818b +0x317:  xor    $0x1,%eax
085c818e +0x31a:  test   %al,%al
085c8190 +0x31c:  je     085c81b2 <+0x33e>
085c8192 +0x31e:  mov    0x8(%ebp),%eax
085c8195 +0x321:  add    $0x14,%eax
085c8198 +0x324:  movl   $0x46,0x4(%esp)
085c81a0 +0x32c:  mov    %eax,(%esp)
085c81a3 +0x32f:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c81a8 +0x334:  mov    $0x0,%ebx
085c81ad +0x339:  jmp    085c8738 <+0x8c4>
085c81b2 +0x33e:  lea    -0x91(%ebp),%eax
085c81b8 +0x344:  mov    %eax,(%esp)
085c81bb +0x347:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085c81c0 +0x34c:  mov    -0x34(%ebp),%eax
085c81c3 +0x34f:  mov    %eax,0x4(%esp)
085c81c7 +0x353:  lea    -0x91(%ebp),%eax
085c81cd +0x359:  mov    %eax,(%esp)
085c81d0 +0x35c:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085c81d5 +0x361:  mov    0x10(%ebp),%eax
085c81d8 +0x364:  mov    %eax,-0x8a(%ebp)
085c81de +0x36a:  movl   $0xffffffff,-0x2c(%ebp)
085c81e5 +0x371:  movl   $0x0,-0x48(%ebp)
085c81ec +0x378:  movzbl -0x90(%ebp),%eax
085c81f3 +0x37f:  cmp    $0x8,%al
085c81f5 +0x381:  jne    085c8203 <+0x38f>
085c81f7 +0x383:  mov    -0x34(%ebp),%eax
085c81fa +0x386:  mov    0x7(%eax),%eax
085c81fd +0x389:  mov    %eax,-0x8a(%ebp)
085c8203 +0x38f:  lea    -0x91(%ebp),%eax
085c8209 +0x395:  mov    %eax,(%esp)
085c820c +0x398:  call   081201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>  ; IsTradeLimitAttachTypeItem(Inven_Item const&)
085c8211 +0x39d:  test   %al,%al
085c8213 +0x39f:  je     085c8261 <+0x3ed>
085c8215 +0x3a1:  lea    -0x91(%ebp),%eax
085c821b +0x3a7:  mov    %eax,(%esp)
085c821e +0x3aa:  call   0812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>  ; DecreaseTradeLimitCount(Inven_Item&)
085c8223 +0x3af:  mov    -0x8f(%ebp),%eax
085c8229 +0x3b5:  mov    0x8(%ebp),%edx
085c822c +0x3b8:  mov    0x2c(%edx),%edx
085c822f +0x3bb:  add    $0x79700,%edx
085c8235 +0x3c1:  movl   $0x1,0x14(%esp)
085c823d +0x3c9:  movl   $0xffffffff,0x10(%esp)
085c8245 +0x3d1:  mov    %eax,0xc(%esp)
085c8249 +0x3d5:  movl   $0xffffffff,0x8(%esp)
085c8251 +0x3dd:  movl   $0xffffffff,0x4(%esp)
085c8259 +0x3e5:  mov    %edx,(%esp)
085c825c +0x3e8:  call   08686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>  ; cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)
085c8261 +0x3ed:  mov    -0x40(%ebp),%eax
085c8264 +0x3f0:  mov    %eax,%ecx
085c8266 +0x3f2:  mov    -0x3c(%ebp),%eax
085c8269 +0x3f5:  mov    %eax,%edx
085c826b +0x3f7:  mov    -0x44(%ebp),%eax
085c826e +0x3fa:  lea    -0x48(%ebp),%ebx
085c8271 +0x3fd:  mov    %ebx,0x18(%esp)
085c8275 +0x401:  mov    %ecx,0x14(%esp)
085c8279 +0x405:  mov    %edx,0x10(%esp)
085c827d +0x409:  mov    %eax,0xc(%esp)
085c8281 +0x40d:  lea    -0x91(%ebp),%eax
085c8287 +0x413:  mov    %eax,0x8(%esp)
085c828b +0x417:  mov    0xc(%ebp),%eax
085c828e +0x41a:  mov    %eax,0x4(%esp)
085c8292 +0x41e:  mov    0x8(%ebp),%eax
085c8295 +0x421:  mov    %eax,(%esp)
085c8298 +0x424:  call   085c924c <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi>  ; private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&)
085c829d +0x429:  mov    %eax,-0x2c(%ebp)
085c82a0 +0x42c:  mov    -0x2c(%ebp),%eax
085c82a3 +0x42f:  shr    $0x1f,%eax
085c82a6 +0x432:  test   %al,%al
085c82a8 +0x434:  je     085c82ca <+0x456>
085c82aa +0x436:  mov    0x8(%ebp),%eax
085c82ad +0x439:  add    $0x14,%eax
085c82b0 +0x43c:  movl   $0x4,0x4(%esp)
085c82b8 +0x444:  mov    %eax,(%esp)
085c82bb +0x447:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c82c0 +0x44c:  mov    $0x0,%ebx
085c82c5 +0x451:  jmp    085c8738 <+0x8c4>
085c82ca +0x456:  mov    0x8(%ebp),%eax
085c82cd +0x459:  mov    %eax,(%esp)
085c82d0 +0x45c:  call   085c9b8c <_ZN13private_store13CPrivateStore20GetCommissionPercentEv>  ; private_store::CPrivateStore::GetCommissionPercent()
085c82d5 +0x461:  mov    -0x44(%ebp),%edx
085c82d8 +0x464:  mov    %eax,%ecx
085c82da +0x466:  imul   %edx,%ecx
085c82dd +0x469:  mov    $0x51eb851f,%edx
085c82e2 +0x46e:  mov    %ecx,%eax
085c82e4 +0x470:  imul   %edx
085c82e6 +0x472:  sar    $0x5,%edx
085c82e9 +0x475:  mov    %ecx,%eax
085c82eb +0x477:  sar    $0x1f,%eax
085c82ee +0x47a:  mov    %edx,%ecx
085c82f0 +0x47c:  sub    %eax,%ecx
085c82f2 +0x47e:  mov    %ecx,%eax
085c82f4 +0x480:  mov    %eax,-0x28(%ebp)
085c82f7 +0x483:  mov    -0x34(%ebp),%eax
085c82fa +0x486:  mov    0x7(%eax),%ecx
085c82fd +0x489:  mov    -0x8a(%ebp),%edx
085c8303 +0x48f:  mov    -0x44(%ebp),%eax
085c8306 +0x492:  mov    %ecx,0x18(%esp)
085c830a +0x496:  mov    %edx,0x14(%esp)
085c830e +0x49a:  mov    -0x28(%ebp),%edx
085c8311 +0x49d:  mov    %edx,0x10(%esp)
085c8315 +0x4a1:  mov    %eax,0xc(%esp)
085c8319 +0x4a5:  lea    -0x91(%ebp),%eax
085c831f +0x4ab:  mov    %eax,0x8(%esp)
085c8323 +0x4af:  mov    0xc(%ebp),%eax
085c8326 +0x4b2:  mov    %eax,0x4(%esp)
085c832a +0x4b6:  mov    0x8(%ebp),%eax
085c832d +0x4b9:  mov    %eax,(%esp)
085c8330 +0x4bc:  call   085c97e2 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii>  ; private_store::CPrivateStore::SellItem(int, Inven_Item&, int, int, int, int)
085c8335 +0x4c1:  mov    0x10(%ebp),%eax
085c8338 +0x4c4:  mov    %eax,0xc(%esp)
085c833c +0x4c8:  mov    -0x34(%ebp),%eax
085c833f +0x4cb:  mov    %eax,0x8(%esp)
085c8343 +0x4cf:  mov    -0x38(%ebp),%eax
085c8346 +0x4d2:  mov    %eax,0x4(%esp)
085c834a +0x4d6:  mov    0x8(%ebp),%eax
085c834d +0x4d9:  mov    %eax,(%esp)
085c8350 +0x4dc:  call   085c7bbc <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi>  ; private_store::CPrivateStore::SubtractItemCount(CItem const*, private_store::PrivateStoreItem&, int)
085c8355 +0x4e1:  mov    0x8(%ebp),%eax
085c8358 +0x4e4:  mov    %eax,(%esp)
085c835b +0x4e7:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085c8360 +0x4ec:  mov    0x8(%ebp),%eax
085c8363 +0x4ef:  mov    0x2c(%eax),%eax
085c8366 +0x4f2:  mov    %eax,(%esp)
085c8369 +0x4f5:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
085c836e +0x4fa:  mov    0x8(%ebp),%eax
085c8371 +0x4fd:  mov    0x30(%eax),%eax
085c8374 +0x500:  mov    %eax,(%esp)
085c8377 +0x503:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
085c837c +0x508:  lea    -0x54(%ebp),%eax
085c837f +0x50b:  mov    %eax,(%esp)
085c8382 +0x50e:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c8387 +0x513:  mov    0x10(%ebp),%eax
085c838a +0x516:  mov    %eax,0x8(%esp)
085c838e +0x51a:  mov    0xc(%ebp),%eax
085c8391 +0x51d:  mov    %eax,0x4(%esp)
085c8395 +0x521:  lea    -0x54(%ebp),%eax
085c8398 +0x524:  mov    %eax,(%esp)
085c839b +0x527:  call   085cc0fa <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0xe10>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0xe10
085c83a0 +0x52c:  movl   $0x0,0xc(%esp)
085c83a8 +0x534:  movl   $0x0,0x8(%esp)
085c83b0 +0x53c:  lea    -0x54(%ebp),%eax
085c83b3 +0x53f:  mov    %eax,0x4(%esp)
085c83b7 +0x543:  mov    0x8(%ebp),%eax
085c83ba +0x546:  mov    %eax,(%esp)
085c83bd +0x549:  call   085c7adc <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_>  ; private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*)
085c83c2 +0x54e:  mov    -0x44(%ebp),%esi
085c83c5 +0x551:  mov    0x8(%ebp),%eax
085c83c8 +0x554:  mov    0x30(%eax),%eax
085c83cb +0x557:  mov    %eax,(%esp)
085c83ce +0x55a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c83d3 +0x55f:  mov    -0x8a(%ebp),%ebx
085c83d9 +0x565:  mov    -0x8f(%ebp),%edx
085c83df +0x56b:  mov    %edx,%ecx
085c83e1 +0x56d:  mov    0x8(%ebp),%edx
085c83e4 +0x570:  mov    0x2c(%edx),%edx
085c83e7 +0x573:  mov    -0x28(%ebp),%edi
085c83ea +0x576:  mov    %edi,0x1c(%esp)
085c83ee +0x57a:  mov    %esi,0x18(%esp)
085c83f2 +0x57e:  mov    %eax,0x14(%esp)
085c83f6 +0x582:  mov    %ebx,0x10(%esp)
085c83fa +0x586:  mov    0xc(%ebp),%eax
085c83fd +0x589:  mov    %eax,0xc(%esp)
085c8401 +0x58d:  mov    %ecx,0x8(%esp)
085c8405 +0x591:  mov    %edx,0x4(%esp)
085c8409 +0x595:  lea    -0x54(%ebp),%eax
085c840c +0x598:  mov    %eax,(%esp)
085c840f +0x59b:  call   085cbfea <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0xd00>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0xd00
085c8414 +0x5a0:  mov    0x8(%ebp),%eax
085c8417 +0x5a3:  mov    0x2c(%eax),%eax
085c841a +0x5a6:  lea    -0x54(%ebp),%edx
085c841d +0x5a9:  mov    %edx,0x4(%esp)
085c8421 +0x5ad:  mov    %eax,(%esp)
085c8424 +0x5b0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c8429 +0x5b5:  mov    -0x8a(%ebp),%ebx
085c842f +0x5bb:  mov    -0x3c(%ebp),%eax
085c8432 +0x5be:  mov    %eax,%ecx
085c8434 +0x5c0:  mov    -0x40(%ebp),%eax
085c8437 +0x5c3:  mov    %eax,%edx
085c8439 +0x5c5:  mov    0x8(%ebp),%eax
085c843c +0x5c8:  mov    0x30(%eax),%eax
085c843f +0x5cb:  mov    %ebx,0x18(%esp)
085c8443 +0x5cf:  mov    -0x2c(%ebp),%ebx
085c8446 +0x5d2:  mov    %ebx,0x14(%esp)
085c844a +0x5d6:  mov    %ecx,0x10(%esp)
085c844e +0x5da:  mov    %edx,0xc(%esp)
085c8452 +0x5de:  lea    -0x91(%ebp),%edx
085c8458 +0x5e4:  mov    %edx,0x8(%esp)
085c845c +0x5e8:  mov    %eax,0x4(%esp)
085c8460 +0x5ec:  lea    -0x54(%ebp),%eax
085c8463 +0x5ef:  mov    %eax,(%esp)
085c8466 +0x5f2:  call   085cbd38 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0xa4e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0xa4e
085c846b +0x5f7:  mov    0x8(%ebp),%eax
085c846e +0x5fa:  mov    0x30(%eax),%eax
085c8471 +0x5fd:  lea    -0x54(%ebp),%edx
085c8474 +0x600:  mov    %edx,0x4(%esp)
085c8478 +0x604:  mov    %eax,(%esp)
085c847b +0x607:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c8480 +0x60c:  movb   $0x0,-0x23(%ebp)
085c8484 +0x610:  mov    -0x38(%ebp),%eax
085c8487 +0x613:  mov    (%eax),%eax
085c8489 +0x615:  add    $0x10,%eax
085c848c +0x618:  mov    (%eax),%edx
085c848e +0x61a:  mov    -0x38(%ebp),%eax
085c8491 +0x61d:  mov    %eax,(%esp)
085c8494 +0x620:  call   *%edx
085c8496 +0x622:  xor    $0x1,%eax
085c8499 +0x625:  test   %al,%al
085c849b +0x627:  je     085c84b4 <+0x640>
085c849d +0x629:  mov    -0x38(%ebp),%eax
085c84a0 +0x62c:  mov    %eax,(%esp)
085c84a3 +0x62f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085c84a8 +0x634:  cmp    $0x1,%eax
085c84ab +0x637:  jg     085c84b4 <+0x640>
085c84ad +0x639:  mov    $0x1,%eax
085c84b2 +0x63e:  jmp    085c84b9 <+0x645>
085c84b4 +0x640:  mov    $0x0,%eax
085c84b9 +0x645:  test   %al,%al
085c84bb +0x647:  je     085c84c1 <+0x64d>
085c84bd +0x649:  movb   $0x1,-0x23(%ebp)
085c84c1 +0x64d:  movzbl -0x23(%ebp),%ecx
085c84c5 +0x651:  mov    -0x44(%ebp),%eax
085c84c8 +0x654:  mov    %eax,%edx
085c84ca +0x656:  mov    0x8(%ebp),%eax
085c84cd +0x659:  mov    0x30(%eax),%eax
085c84d0 +0x65c:  mov    %ecx,0x8(%esp)
085c84d4 +0x660:  mov    %edx,0x4(%esp)
085c84d8 +0x664:  mov    %eax,(%esp)
085c84db +0x667:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
085c84e0 +0x66c:  mov    0x8(%ebp),%eax
085c84e3 +0x66f:  mov    0x30(%eax),%eax
085c84e6 +0x672:  mov    %eax,(%esp)
085c84e9 +0x675:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
085c84ee +0x67a:  mov    %ax,-0x22(%ebp)
085c84f2 +0x67e:  movl   $0x19,(%esp)
085c84f9 +0x685:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085c84fe +0x68a:  mov    %eax,-0x20(%ebp)
085c8501 +0x68d:  movl   $0x14,(%esp)
085c8508 +0x694:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085c850d +0x699:  mov    %eax,-0x1c(%ebp)
085c8510 +0x69c:  mov    0x8(%ebp),%eax
085c8513 +0x69f:  mov    0x30(%eax),%eax
085c8516 +0x6a2:  mov    %eax,(%esp)
085c8519 +0x6a5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c851e +0x6aa:  mov    %eax,(%esp)
085c8521 +0x6ad:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085c8526 +0x6b2:  mov    -0x44(%ebp),%edx
085c8529 +0x6b5:  add    %edx,%eax
085c852b +0x6b7:  mov    %eax,-0xa0(%ebp)
085c8531 +0x6bd:  fildl  -0xa0(%ebp)
085c8537 +0x6c3:  fildl  -0x20(%ebp)
085c853a +0x6c6:  fldl   &data#f224355d(.rodata)
085c8540 +0x6cc:  fmulp  %st,%st(1)
085c8542 +0x6ce:  fstps  -0x9c(%ebp)
085c8548 +0x6d4:  flds   -0x9c(%ebp)
085c854e +0x6da:  fldl   &data#a3841abf(.rodata)
085c8554 +0x6e0:  faddp  %st,%st(1)
085c8556 +0x6e2:  fmulp  %st,%st(1)
085c8558 +0x6e4:  mov    -0x44(%ebp),%eax
085c855b +0x6e7:  mov    %eax,-0xa0(%ebp)
085c8561 +0x6ed:  fildl  -0xa0(%ebp)
085c8567 +0x6f3:  fucompp
085c8569 +0x6f5:  fnstsw %ax
085c856b +0x6f7:  test   $0x45,%ah
085c856e +0x6fa:  sete   %al
085c8571 +0x6fd:  test   %al,%al
085c8573 +0x6ff:  je     085c86bf <+0x84b>
085c8579 +0x705:  mov    0x8(%ebp),%eax
085c857c +0x708:  mov    0x2c(%eax),%eax
085c857f +0x70b:  mov    %eax,(%esp)
085c8582 +0x70e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c8587 +0x713:  mov    %eax,%edx
085c8589 +0x715:  mov    0x8(%ebp),%eax
085c858c +0x718:  mov    0x30(%eax),%eax
085c858f +0x71b:  mov    %edx,0x8(%esp)
085c8593 +0x71f:  movl   $0x2c0,0x4(%esp)
085c859b +0x727:  mov    %eax,(%esp)
085c859e +0x72a:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085c85a3 +0x72f:  mov    %eax,%esi
085c85a5 +0x731:  mov    0x8(%ebp),%eax
085c85a8 +0x734:  mov    0x30(%eax),%ebx
085c85ab +0x737:  mov    0x8(%ebp),%eax
085c85ae +0x73a:  mov    0x30(%eax),%eax
085c85b1 +0x73d:  mov    %eax,(%esp)
085c85b4 +0x740:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085c85b9 +0x745:  movl   $0x0,0x14(%esp)
085c85c1 +0x74d:  mov    %esi,0x10(%esp)
085c85c5 +0x751:  movl   $0x1,0xc(%esp)
085c85cd +0x759:  movl   $0x2c0,0x8(%esp)
085c85d5 +0x761:  mov    %ebx,0x4(%esp)
085c85d9 +0x765:  mov    %eax,(%esp)
085c85dc +0x768:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085c85e1 +0x76d:  movzwl -0x22(%ebp),%eax
085c85e5 +0x771:  mov    -0x1c(%ebp),%edx
085c85e8 +0x774:  add    $0x78,%edx
085c85eb +0x777:  cmp    %edx,%eax
085c85ed +0x779:  jl     085c8657 <+0x7e3>
085c85ef +0x77b:  mov    0x8(%ebp),%eax
085c85f2 +0x77e:  mov    0x2c(%eax),%eax
085c85f5 +0x781:  mov    %eax,(%esp)
085c85f8 +0x784:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c85fd +0x789:  mov    %eax,%edx
085c85ff +0x78b:  mov    0x8(%ebp),%eax
085c8602 +0x78e:  mov    0x30(%eax),%eax
085c8605 +0x791:  mov    %edx,0x8(%esp)
085c8609 +0x795:  movl   $0x2bd,0x4(%esp)
085c8611 +0x79d:  mov    %eax,(%esp)
085c8614 +0x7a0:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085c8619 +0x7a5:  mov    %eax,%esi
085c861b +0x7a7:  mov    0x8(%ebp),%eax
085c861e +0x7aa:  mov    0x30(%eax),%ebx
085c8621 +0x7ad:  mov    0x8(%ebp),%eax
085c8624 +0x7b0:  mov    0x30(%eax),%eax
085c8627 +0x7b3:  mov    %eax,(%esp)
085c862a +0x7b6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085c862f +0x7bb:  movl   $0x0,0x14(%esp)
085c8637 +0x7c3:  mov    %esi,0x10(%esp)
085c863b +0x7c7:  movl   $0x1,0xc(%esp)
085c8643 +0x7cf:  movl   $0x2bd,0x8(%esp)
085c864b +0x7d7:  mov    %ebx,0x4(%esp)
085c864f +0x7db:  mov    %eax,(%esp)
085c8652 +0x7de:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085c8657 +0x7e3:  mov    0x8(%ebp),%eax
085c865a +0x7e6:  mov    0x30(%eax),%eax
085c865d +0x7e9:  mov    %eax,(%esp)
085c8660 +0x7ec:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c8665 +0x7f1:  mov    %eax,%edx
085c8667 +0x7f3:  mov    0x8(%ebp),%eax
085c866a +0x7f6:  mov    0x2c(%eax),%eax
085c866d +0x7f9:  mov    %edx,0x8(%esp)
085c8671 +0x7fd:  movl   $0x2c1,0x4(%esp)
085c8679 +0x805:  mov    %eax,(%esp)
085c867c +0x808:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085c8681 +0x80d:  mov    %eax,%esi
085c8683 +0x80f:  mov    0x8(%ebp),%eax
085c8686 +0x812:  mov    0x2c(%eax),%ebx
085c8689 +0x815:  mov    0x8(%ebp),%eax
085c868c +0x818:  mov    0x2c(%eax),%eax
085c868f +0x81b:  mov    %eax,(%esp)
085c8692 +0x81e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085c8697 +0x823:  movl   $0x0,0x14(%esp)
085c869f +0x82b:  mov    %esi,0x10(%esp)
085c86a3 +0x82f:  movl   $0x1,0xc(%esp)
085c86ab +0x837:  movl   $0x2c1,0x8(%esp)
085c86b3 +0x83f:  mov    %ebx,0x4(%esp)
085c86b7 +0x843:  mov    %eax,(%esp)
085c86ba +0x846:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085c86bf +0x84b:  mov    -0x28(%ebp),%esi
085c86c2 +0x84e:  mov    0x8(%ebp),%eax
085c86c5 +0x851:  mov    0x2c(%eax),%ebx
085c86c8 +0x854:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085c86cd +0x859:  mov    %esi,0xc(%esp)
085c86d1 +0x85d:  mov    %ebx,0x8(%esp)
085c86d5 +0x861:  movl   $0x12,0x4(%esp)
085c86dd +0x869:  mov    %eax,(%esp)
085c86e0 +0x86c:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085c86e5 +0x871:  mov    -0x28(%ebp),%esi
085c86e8 +0x874:  mov    0x8(%ebp),%eax
085c86eb +0x877:  mov    0x2c(%eax),%ebx
085c86ee +0x87a:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085c86f3 +0x87f:  mov    %esi,0xc(%esp)
085c86f7 +0x883:  mov    %ebx,0x8(%esp)
085c86fb +0x887:  movl   $0x15,0x4(%esp)
085c8703 +0x88f:  mov    %eax,(%esp)
085c8706 +0x892:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085c870b +0x897:  mov    $0x1,%ebx
085c8710 +0x89c:  lea    -0x54(%ebp),%eax
085c8713 +0x89f:  mov    %eax,(%esp)
085c8716 +0x8a2:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c871b +0x8a7:  jmp    085c8738 <+0x8c4>
085c871d +0x8a9:  mov    %edx,%ebx
085c871f +0x8ab:  mov    %eax,%esi
085c8721 +0x8ad:  lea    -0x54(%ebp),%eax
085c8724 +0x8b0:  mov    %eax,(%esp)
085c8727 +0x8b3:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c872c +0x8b8:  mov    %esi,%eax
085c872e +0x8ba:  mov    %ebx,%edx
085c8730 +0x8bc:  mov    %eax,(%esp)
085c8733 +0x8bf:  call   08ae3750 <_Unwind_Resume>
085c8738 +0x8c4:  mov    %ebx,%eax
085c873a +0x8c6:  add    $0xbc,%esp
085c8740 +0x8cc:  pop    %ebx
085c8741 +0x8cd:  pop    %esi
085c8742 +0x8ce:  pop    %edi
085c8743 +0x8cf:  pop    %ebp
085c8744 +0x8d0:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::BuyPrivateStoreItem @ 0x85c7e74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private_store::CPrivateStore::BuyPrivateStoreItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::BuyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  CDataManager *this_00;
  char *pcVar6;
  CInventory *this_01;
  undefined4 uVar7;
  CHackAnalyzer *pCVar8;
  CValueStatistic *pCVar9;
  CCirculationStatistic *pCVar10;
  Inven_Item local_95;
  char local_94;
  int local_93;
  int local_8e;
  CPacketBufPrivate local_58 [12];
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  CItem *local_3c;
  Inven_Item *local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte local_27;
  ushort local_26;
  int local_24;
  int local_20;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x55);
  if (*(int *)(this + 0x30) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  cVar4 = IsExistBuyerList((CUser *)this);
  if (cVar4 != '\x01') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
    return 0;
  }
  iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x30));
  if (iVar5 == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
    return 0;
  }
  if ((param_1 < 0) || (0xd < param_1)) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x39);
    return 0;
  }
  cVar4 = CPrivateStoreMgr::IsBusyPrivateStore
                    (*(CPrivateStoreMgr **)(this + 0x20),*(CUser **)(this + 0x30));
  if (cVar4 != '\0') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3c);
    return 0;
  }
  local_3c = (CItem *)0x0;
  local_38 = (Inven_Item *)
             std::
             vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
             ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                           *)(this + 0x3c),param_1);
  iVar5 = *(int *)(local_38 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar5);
  if (local_3c == (CItem *)0x0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    return 0;
  }
  local_34 = CItem::GetAttachType(local_3c);
  if (local_34 != 0) {
    if (local_34 == 3) {
      if (*local_38 != (Inven_Item)0x1) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
    }
    else {
      if (local_34 != 7) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
      cVar4 = Inven_Item::GetTradeLimitCount(local_38);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  cVar4 = IsCreatureItemType((uint)(byte)local_38[1]);
  if (cVar4 != '\0') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    return 0;
  }
  cVar4 = GetItemPrice(this,local_3c,(PrivateStoreItem *)local_38,param_2,(int *)&local_48,&local_40
                       ,&local_44);
  if (cVar4 == '\x01') {
    cVar4 = IsPossibleDeal((int)this,local_48,local_40);
    if (cVar4 != '\x01') {
      return 0;
    }
    cVar4 = CUserCharacInfo::GetReliablePerson(*(CUserCharacInfo **)(this + 0x30));
    if ((cVar4 != '\x01') &&
       (cVar4 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                          (*(CUserCharacInfo **)(this + 0x30),local_48), cVar4 != '\x01')) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x46);
      return 0;
    }
    Inven_Item::Inven_Item(&local_95);
    Inven_Item::setCopy(&local_95,local_38);
    local_8e = param_2;
    local_30 = 0xffffffff;
    local_4c = 0;
    if (local_94 == '\b') {
      local_8e = *(int *)(local_38 + 7);
    }
    cVar4 = IsTradeLimitAttachTypeItem(&local_95);
    if (cVar4 != '\0') {
      DecreaseTradeLimitCount(&local_95);
      cUserHistoryLog::ChangeItemLimitCount
                ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),-1,-1,local_93,-1,1);
    }
    local_30 = BuyItem(this,param_1,&local_95,local_48,local_40,local_44,&local_4c);
    if (-1 < local_30) {
      iVar5 = GetCommissionPercent();
      local_2c = (int)(iVar5 * local_48) / 100;
      SellItem(this,param_1,&local_95,local_48,local_2c,local_8e,*(int *)(local_38 + 7));
      SubtractItemCount(this,local_3c,(PrivateStoreItem *)local_38,param_2);
      SavePrivateStore(this);
      CUser::UpdateData(*(CUser **)(this + 0x2c));
      CUser::UpdateData(*(CUser **)(this + 0x30));
      CPacketBufPrivate::CPacketBufPrivate(local_58);
                    /* try { // try from 085c839b to 085c870a has its CatchHandler @ 085c871d */
      CPacketBufPrivate::MakeNotipacketPrivateStoreItem(local_58,param_1,param_2);
      SendUsers(this,(PacketGuard *)local_58,(CUser *)0x0,(CUser *)0x0);
      uVar3 = local_48;
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
      CPacketBufPrivate::MakeNotipacketBuyPrivateStoreItem
                (local_58,*(CUser **)(this + 0x2c),local_93,param_1,local_8e,pcVar6,uVar3,local_2c);
      CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_58);
      CPacketBufPrivate::MakeCmdpacketBuyPrivateStoreItem
                (local_58,*(CUser **)(this + 0x30),&local_95,local_44,local_40,local_30,local_8e);
      CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_58);
      local_27 = 0;
      cVar4 = (**(code **)(*(int *)local_3c + 0x10))(local_3c);
      if ((cVar4 == '\x01') || (iVar5 = CItem::get_rarity(local_3c), 1 < iVar5)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_27 = 1;
      }
      CUser::IncrementTradeGold(*(CUser **)(this + 0x30),local_48,(uint)local_27);
      local_26 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x30));
      local_24 = get_rand_int(0x19);
      local_20 = get_rand_int(0x14);
      this_01 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30));
      iVar5 = CInventory::get_money(this_01);
      if (((float)_DAT_08cbead8 + (float)_DAT_08cbead0 * (float)local_24) *
          (float)(int)(iVar5 + local_48) < (float)(int)local_48) {
        iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
        uVar7 = CUser::SetETC(*(CUser **)(this + 0x30),0x2c0,iVar5);
        uVar1 = *(undefined4 *)(this + 0x30);
        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x30));
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2c0,1,uVar7,0);
        if (local_20 + 0x78 <= (int)(uint)local_26) {
          iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
          uVar7 = CUser::SetETC(*(CUser **)(this + 0x30),0x2bd,iVar5);
          uVar1 = *(undefined4 *)(this + 0x30);
          pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x30));
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2bd,1,uVar7,0);
        }
        iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x30));
        uVar7 = CUser::SetETC(*(CUser **)(this + 0x2c),0x2c1,iVar5);
        uVar1 = *(undefined4 *)(this + 0x2c);
        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x2c));
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2c1,1,uVar7,0);
      }
      iVar5 = local_2c;
      uVar1 = *(undefined4 *)(this + 0x2c);
      pCVar9 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar9,0x12,uVar1,iVar5);
      iVar5 = local_2c;
      uVar1 = *(undefined4 *)(this + 0x2c);
      pCVar10 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar10,0x15,uVar1,iVar5);
      CPacketBufPrivate::~CPacketBufPrivate(local_58);
      return 1;
    }
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),4);
    return 0;
  }
  return 0;
}
```
