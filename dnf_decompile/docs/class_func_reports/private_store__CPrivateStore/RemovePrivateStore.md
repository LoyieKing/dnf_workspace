# RemovePrivateStore

`_ZN13private_store13CPrivateStore18RemovePrivateStoreEb`

`private_store::CPrivateStore::RemovePrivateStore(bool)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c5fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c5fd0  _ZN13private_store13CPrivateStore18RemovePrivateStoreEb
#           private_store::CPrivateStore::RemovePrivateStore(bool)
# range [0x085c5fd0, 0x085c63c9]
085c5fd0 +0x000:  push   %ebp
085c5fd1 +0x001:  mov    %esp,%ebp
085c5fd3 +0x003:  push   %esi
085c5fd4 +0x004:  push   %ebx
085c5fd5 +0x005:  sub    $0x70,%esp
085c5fd8 +0x008:  mov    0xc(%ebp),%eax
085c5fdb +0x00b:  mov    %al,-0x4c(%ebp)
085c5fde +0x00e:  mov    0x8(%ebp),%eax
085c5fe1 +0x011:  mov    0x2c(%eax),%eax
085c5fe4 +0x014:  mov    0x8(%ebp),%edx
085c5fe7 +0x017:  add    $0x14,%edx
085c5fea +0x01a:  movl   $0x59,0xc(%esp)
085c5ff2 +0x022:  movl   $0x1,0x8(%esp)
085c5ffa +0x02a:  mov    %eax,0x4(%esp)
085c5ffe +0x02e:  mov    %edx,(%esp)
085c6001 +0x031:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c6006 +0x036:  mov    0x8(%ebp),%eax
085c6009 +0x039:  mov    0x2c(%eax),%eax
085c600c +0x03c:  test   %eax,%eax
085c600e +0x03e:  jne    085c601a <+0x4a>
085c6010 +0x040:  mov    $0x0,%ebx
085c6015 +0x045:  jmp    085c63c1 <+0x3f1>
085c601a +0x04a:  mov    0x8(%ebp),%eax
085c601d +0x04d:  mov    0x20(%eax),%eax
085c6020 +0x050:  test   %eax,%eax
085c6022 +0x052:  jne    085c6044 <+0x74>
085c6024 +0x054:  mov    0x8(%ebp),%eax
085c6027 +0x057:  add    $0x14,%eax
085c602a +0x05a:  movl   $0x3a,0x4(%esp)
085c6032 +0x062:  mov    %eax,(%esp)
085c6035 +0x065:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c603a +0x06a:  mov    $0x0,%ebx
085c603f +0x06f:  jmp    085c63c1 <+0x3f1>
085c6044 +0x074:  mov    0x8(%ebp),%eax
085c6047 +0x077:  movzbl 0x10(%eax),%eax
085c604b +0x07b:  test   %al,%al
085c604d +0x07d:  jne    085c606f <+0x9f>
085c604f +0x07f:  mov    0x8(%ebp),%eax
085c6052 +0x082:  add    $0x14,%eax
085c6055 +0x085:  movl   $0x3b,0x4(%esp)
085c605d +0x08d:  mov    %eax,(%esp)
085c6060 +0x090:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c6065 +0x095:  mov    $0x0,%ebx
085c606a +0x09a:  jmp    085c63c1 <+0x3f1>
085c606f +0x09f:  lea    -0x28(%ebp),%eax
085c6072 +0x0a2:  mov    %eax,(%esp)
085c6075 +0x0a5:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c607a +0x0aa:  mov    0x8(%ebp),%eax
085c607d +0x0ad:  movzbl 0x10(%eax),%eax
085c6081 +0x0b1:  cmp    $0x2,%al
085c6083 +0x0b3:  jne    085c61c5 <+0x1f5>
085c6089 +0x0b9:  mov    0x8(%ebp),%eax
085c608c +0x0bc:  mov    %eax,(%esp)
085c608f +0x0bf:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c6094 +0x0c4:  test   %al,%al
085c6096 +0x0c6:  je     085c60bb <+0xeb>
085c6098 +0x0c8:  mov    0x8(%ebp),%eax
085c609b +0x0cb:  mov    %eax,(%esp)
085c609e +0x0ce:  call   085c5cec <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv>  ; private_store::CPrivateStore::RecallPrivateStoreItemToMail()
085c60a3 +0x0d3:  test   %al,%al
085c60a5 +0x0d5:  je     085c6181 <+0x1b1>
085c60ab +0x0db:  mov    0x8(%ebp),%eax
085c60ae +0x0de:  mov    %eax,(%esp)
085c60b1 +0x0e1:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085c60b6 +0x0e6:  jmp    085c6181 <+0x1b1>
085c60bb +0x0eb:  mov    0x8(%ebp),%eax
085c60be +0x0ee:  mov    %eax,(%esp)
085c60c1 +0x0f1:  call   085c63ca <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv>  ; private_store::CPrivateStore::RecallPrivateStoreItem()
085c60c6 +0x0f6:  test   %al,%al
085c60c8 +0x0f8:  je     085c613d <+0x16d>
085c60ca +0x0fa:  mov    0x8(%ebp),%eax
085c60cd +0x0fd:  mov    %eax,(%esp)
085c60d0 +0x100:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085c60d5 +0x105:  mov    0x8(%ebp),%eax
085c60d8 +0x108:  mov    0x2c(%eax),%eax
085c60db +0x10b:  mov    %eax,(%esp)
085c60de +0x10e:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
085c60e3 +0x113:  mov    0x8(%ebp),%eax
085c60e6 +0x116:  mov    0x2c(%eax),%eax
085c60e9 +0x119:  movl   $0x0,0x4(%esp)
085c60f1 +0x121:  mov    %eax,(%esp)
085c60f4 +0x124:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085c60f9 +0x129:  mov    0x8(%ebp),%eax
085c60fc +0x12c:  mov    0x2c(%eax),%eax
085c60ff +0x12f:  movl   $0x1,0x4(%esp)
085c6107 +0x137:  mov    %eax,(%esp)
085c610a +0x13a:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
085c610f +0x13f:  mov    0x8(%ebp),%eax
085c6112 +0x142:  mov    0x2c(%eax),%eax
085c6115 +0x145:  mov    %eax,(%esp)
085c6118 +0x148:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c611d +0x14d:  mov    %eax,(%esp)
085c6120 +0x150:  call   084faf8e <_ZNK10CInventory21SendItemLockListInvenEv>  ; CInventory::SendItemLockListInven() const
085c6125 +0x155:  mov    0x8(%ebp),%eax
085c6128 +0x158:  mov    0x2c(%eax),%eax
085c612b +0x15b:  mov    %eax,(%esp)
085c612e +0x15e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c6133 +0x163:  mov    %eax,(%esp)
085c6136 +0x166:  call   084fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>  ; CInventory::SendItemLockListAvatar() const
085c613b +0x16b:  jmp    085c6181 <+0x1b1>
085c613d +0x16d:  mov    0x8(%ebp),%eax
085c6140 +0x170:  mov    %eax,(%esp)
085c6143 +0x173:  call   085ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>  ; private_store::CPrivateStore::SavePrivateStore()
085c6148 +0x178:  mov    0x8(%ebp),%eax
085c614b +0x17b:  mov    0x2c(%eax),%eax
085c614e +0x17e:  mov    %eax,(%esp)
085c6151 +0x181:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
085c6156 +0x186:  mov    0x8(%ebp),%eax
085c6159 +0x189:  add    $0x14,%eax
085c615c +0x18c:  movl   $0x16,0x4(%esp)
085c6164 +0x194:  mov    %eax,(%esp)
085c6167 +0x197:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c616c +0x19c:  movzbl -0x4c(%ebp),%eax
085c6170 +0x1a0:  xor    $0x1,%eax
085c6173 +0x1a3:  test   %al,%al
085c6175 +0x1a5:  je     085c6181 <+0x1b1>
085c6177 +0x1a7:  mov    $0x0,%ebx
085c617c +0x1ac:  jmp    085c63b6 <+0x3e6>
085c6181 +0x1b1:  mov    0x8(%ebp),%eax
085c6184 +0x1b4:  add    $0x34,%eax
085c6187 +0x1b7:  mov    %eax,(%esp)
085c618a +0x1ba:  call   085cd1e6 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1efc>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1efc
085c618f +0x1bf:  test   %eax,%eax
085c6191 +0x1c1:  setne  %al
085c6194 +0x1c4:  test   %al,%al
085c6196 +0x1c6:  je     085c61c5 <+0x1f5>
085c6198 +0x1c8:  lea    -0x28(%ebp),%eax
085c619b +0x1cb:  mov    %eax,(%esp)
085c619e +0x1ce:  call   085cbb88 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x89e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x89e
085c61a3 +0x1d3:  movl   $0x0,0xc(%esp)
085c61ab +0x1db:  movl   $0x0,0x8(%esp)
085c61b3 +0x1e3:  lea    -0x28(%ebp),%eax
085c61b6 +0x1e6:  mov    %eax,0x4(%esp)
085c61ba +0x1ea:  mov    0x8(%ebp),%eax
085c61bd +0x1ed:  mov    %eax,(%esp)
085c61c0 +0x1f0:  call   085c7adc <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_>  ; private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*)
085c61c5 +0x1f5:  mov    0x8(%ebp),%eax
085c61c8 +0x1f8:  mov    0x2c(%eax),%eax
085c61cb +0x1fb:  mov    %eax,(%esp)
085c61ce +0x1fe:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c61d3 +0x203:  mov    0x8(%ebp),%edx
085c61d6 +0x206:  movzbl 0x25(%edx),%edx
085c61da +0x20a:  movzbl %dl,%ecx
085c61dd +0x20d:  mov    0x8(%ebp),%edx
085c61e0 +0x210:  movzbl 0x24(%edx),%edx
085c61e4 +0x214:  movzbl %dl,%edx
085c61e7 +0x217:  mov    0x8(%ebp),%ebx
085c61ea +0x21a:  mov    0x2c(%ebx),%ebx
085c61ed +0x21d:  add    $0x79700,%ebx
085c61f3 +0x223:  mov    %eax,0xc(%esp)
085c61f7 +0x227:  mov    %ecx,0x8(%esp)
085c61fb +0x22b:  mov    %edx,0x4(%esp)
085c61ff +0x22f:  mov    %ebx,(%esp)
085c6202 +0x232:  call   08684586 <_ZN15cUserHistoryLog18RemovePrivateStoreEiiPKc>  ; cUserHistoryLog::RemovePrivateStore(int, int, char const*)
085c6207 +0x237:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c620c +0x23c:  mov    %eax,(%esp)
085c620f +0x23f:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
085c6214 +0x244:  test   %al,%al
085c6216 +0x246:  je     085c6248 <+0x278>
085c6218 +0x248:  lea    -0x3e(%ebp),%eax
085c621b +0x24b:  mov    %eax,(%esp)
085c621e +0x24e:  call   085cb3dc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0xf2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0xf2
085c6223 +0x253:  mov    0x8(%ebp),%eax
085c6226 +0x256:  mov    0x2c(%eax),%eax
085c6229 +0x259:  mov    %eax,(%esp)
085c622c +0x25c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c6231 +0x261:  mov    %eax,-0x2c(%ebp)
085c6234 +0x264:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c6239 +0x269:  lea    -0x3e(%ebp),%edx
085c623c +0x26c:  mov    %edx,0x4(%esp)
085c6240 +0x270:  mov    %eax,(%esp)
085c6243 +0x273:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
085c6248 +0x278:  lea    -0x28(%ebp),%eax
085c624b +0x27b:  mov    %eax,(%esp)
085c624e +0x27e:  call   085cbad8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x7ee>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x7ee
085c6253 +0x283:  mov    0x8(%ebp),%eax
085c6256 +0x286:  mov    0x2c(%eax),%eax
085c6259 +0x289:  lea    -0x28(%ebp),%edx
085c625c +0x28c:  mov    %edx,0x4(%esp)
085c6260 +0x290:  mov    %eax,(%esp)
085c6263 +0x293:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c6268 +0x298:  mov    0x8(%ebp),%eax
085c626b +0x29b:  mov    %eax,(%esp)
085c626e +0x29e:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085c6273 +0x2a3:  movzwl %ax,%eax
085c6276 +0x2a6:  mov    %eax,0x4(%esp)
085c627a +0x2aa:  lea    -0x28(%ebp),%eax
085c627d +0x2ad:  mov    %eax,(%esp)
085c6280 +0x2b0:  call   085cbb2c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x842>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x842
085c6285 +0x2b5:  mov    0x8(%ebp),%eax
085c6288 +0x2b8:  movzbl 0x25(%eax),%eax
085c628c +0x2bc:  movzbl %al,%edx
085c628f +0x2bf:  mov    0x8(%ebp),%eax
085c6292 +0x2c2:  movzbl 0x24(%eax),%eax
085c6296 +0x2c6:  movzbl %al,%eax
085c6299 +0x2c9:  lea    -0x28(%ebp),%ecx
085c629c +0x2cc:  mov    %ecx,0x8(%esp)
085c62a0 +0x2d0:  mov    %edx,0x4(%esp)
085c62a4 +0x2d4:  mov    %eax,(%esp)
085c62a7 +0x2d7:  call   085cca73 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1789>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1789
085c62ac +0x2dc:  mov    0x8(%ebp),%eax
085c62af +0x2df:  lea    0x4c(%eax),%ebx
085c62b2 +0x2e2:  mov    0x8(%ebp),%eax
085c62b5 +0x2e5:  movzbl 0x25(%eax),%eax
085c62b9 +0x2e9:  movzbl %al,%edx
085c62bc +0x2ec:  mov    0x8(%ebp),%eax
085c62bf +0x2ef:  movzbl 0x24(%eax),%eax
085c62c3 +0x2f3:  movzbl %al,%eax
085c62c6 +0x2f6:  mov    %edx,0x8(%esp)
085c62ca +0x2fa:  mov    %eax,0x4(%esp)
085c62ce +0x2fe:  lea    -0x1a(%ebp),%eax
085c62d1 +0x301:  mov    %eax,(%esp)
085c62d4 +0x304:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
085c62d9 +0x309:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
085c62de +0x30e:  mov    %ebx,0x8(%esp)
085c62e2 +0x312:  movzwl -0x1a(%ebp),%edx
085c62e6 +0x316:  mov    %dx,0x4(%esp)
085c62eb +0x31b:  mov    %eax,(%esp)
085c62ee +0x31e:  call   086b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::unregister_object(village_object::Zone, village_object::IObject*)
085c62f3 +0x323:  xor    $0x1,%eax
085c62f6 +0x326:  test   %al,%al
085c62f8 +0x328:  je     085c6326 <+0x356>
085c62fa +0x32a:  movl   $"unregister_object error",0x10(%esp)
085c6302 +0x332:  movl   $0x473,0xc(%esp)
085c630a +0x33a:  movl   $&_ZZN13private_store13CPrivateStore18RemovePrivateStoreEbE19__PRETTY_FUNCTION__,0x8(%esp)
085c6312 +0x342:  movl   $"PrivateStore.cpp",0x4(%esp)
085c631a +0x34a:  movl   $0x1,(%esp)
085c6321 +0x351:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6326 +0x356:  mov    0x8(%ebp),%eax
085c6329 +0x359:  mov    0x2c(%eax),%edx
085c632c +0x35c:  mov    0x8(%ebp),%eax
085c632f +0x35f:  mov    0x20(%eax),%eax
085c6332 +0x362:  mov    %edx,0x4(%esp)
085c6336 +0x366:  mov    %eax,(%esp)
085c6339 +0x369:  call   085ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)
085c633e +0x36e:  mov    0x8(%ebp),%eax
085c6341 +0x371:  mov    0x2c(%eax),%eax
085c6344 +0x374:  mov    %eax,(%esp)
085c6347 +0x377:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085c634c +0x37c:  movzwl %ax,%ebx
085c634f +0x37f:  movl   $0x0,0xc(%esp)
085c6357 +0x387:  movl   $0x478,0x8(%esp)
085c635f +0x38f:  movl   $&_ZZN13private_store13CPrivateStore18RemovePrivateStoreEbE19__PRETTY_FUNCTION__,0x4(%esp)
085c6367 +0x397:  lea    -0x18(%ebp),%eax
085c636a +0x39a:  mov    %eax,(%esp)
085c636d +0x39d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6372 +0x3a2:  mov    %ebx,0x8(%esp)
085c6376 +0x3a6:  movl   $"RemovePrivateStore() uid:%d\n",0x4(%esp)
085c637e +0x3ae:  lea    -0x18(%ebp),%eax
085c6381 +0x3b1:  mov    %eax,(%esp)
085c6384 +0x3b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6389 +0x3b9:  mov    0x8(%ebp),%eax
085c638c +0x3bc:  mov    %eax,(%esp)
085c638f +0x3bf:  call   085c4e70 <_ZN13private_store13CPrivateStore5ClearEv>  ; private_store::CPrivateStore::Clear()
085c6394 +0x3c4:  mov    $0x1,%ebx
085c6399 +0x3c9:  jmp    085c63b6 <+0x3e6>
085c639b +0x3cb:  mov    %edx,%ebx
085c639d +0x3cd:  mov    %eax,%esi
085c639f +0x3cf:  lea    -0x28(%ebp),%eax
085c63a2 +0x3d2:  mov    %eax,(%esp)
085c63a5 +0x3d5:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c63aa +0x3da:  mov    %esi,%eax
085c63ac +0x3dc:  mov    %ebx,%edx
085c63ae +0x3de:  mov    %eax,(%esp)
085c63b1 +0x3e1:  call   08ae3750 <_Unwind_Resume>
085c63b6 +0x3e6:  lea    -0x28(%ebp),%eax
085c63b9 +0x3e9:  mov    %eax,(%esp)
085c63bc +0x3ec:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c63c1 +0x3f1:  mov    %ebx,%eax
085c63c3 +0x3f3:  add    $0x70,%esp
085c63c6 +0x3f6:  pop    %ebx
085c63c7 +0x3f7:  pop    %esi
085c63c8 +0x3f8:  pop    %ebp
085c63c9 +0x3f9:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::RemovePrivateStore @ 0x85c5fd0

/* private_store::CPrivateStore::RemovePrivateStore(bool) */

undefined4 __thiscall
private_store::CPrivateStore::RemovePrivateStore(CPrivateStore *this,bool param_1)

{
  char cVar1;
  ushort uVar2;
  CInventory *pCVar3;
  int iVar4;
  undefined2 uVar6;
  uint uVar5;
  undefined4 uVar7;
  PCK_AUCTION_CLOSE_PRIVATE_STORE_GA local_42 [18];
  undefined4 local_30;
  CPacketBufPrivate local_2c [14];
  undefined2 local_1e;
  cMyTrace local_1c [16];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x59);
  if (*(int *)(this + 0x2c) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  if (this[0x10] == (CPrivateStore)0x0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3b);
    return 0;
  }
  CPacketBufPrivate::CPacketBufPrivate(local_2c);
  if (this[0x10] == (CPrivateStore)0x2) {
    cVar1 = isDollCreated(this);
    if (cVar1 == '\0') {
      cVar1 = RecallPrivateStoreItem(this);
      if (cVar1 == '\0') {
        SavePrivateStore(this);
        CUser::UpdateData(*(CUser **)(this + 0x2c));
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x16);
        if (!param_1) {
          uVar7 = 0;
          goto LAB_085c63b6;
        }
      }
      else {
        SavePrivateStore(this);
        CUser::UpdateData(*(CUser **)(this + 0x2c));
        CUser::send_itemspace(*(CUser **)(this + 0x2c),0);
        CUser::send_itemspace(*(CUser **)(this + 0x2c),1);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendItemLockListInven(pCVar3);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendItemLockListAvatar(pCVar3);
      }
    }
    else {
                    /* try { // try from 085c609e to 085c6393 has its CatchHandler @ 085c639b */
      cVar1 = RecallPrivateStoreItemToMail(this);
      if (cVar1 != '\0') {
        SavePrivateStore(this);
      }
    }
    iVar4 = std::list<CUser*,std::allocator<CUser*>>::size();
    if (iVar4 != 0) {
      CPacketBufPrivate::MakeNotipacketForceRemovePrivateStore(local_2c);
      SendUsers(this,(PacketGuard *)local_2c,(CUser *)0x0,(CUser *)0x0);
    }
  }
  CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cUserHistoryLog::RemovePrivateStore
            (*(int *)(this + 0x2c) + 0x79700,(uint)(byte)this[0x24],(char *)(uint)(byte)this[0x25]);
  cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar1 != '\0') {
    PCK_AUCTION_CLOSE_PRIVATE_STORE_GA::PCK_AUCTION_CLOSE_PRIVATE_STORE_GA(local_42);
    local_30 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_42);
  }
  CPacketBufPrivate::MakeCmdpacketRemovePrivateStore(local_2c);
  CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_2c);
  uVar2 = GetSellerIndex(this);
  CPacketBufPrivate::MakeNotipacketRemovePrivateStore(local_2c,uVar2);
  CBroadcastPrivate::Send((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_2c);
  uVar6 = 0;
  village_object::Zone::Zone((Zone *)&local_1e,(uchar)this[0x24],(uchar)this[0x25]);
  cVar1 = village_object::CVillageObjectMgr::unregister_object
                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar6,local_1e),this + 0x4c);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"PrivateStore.cpp",
               "virtual bool private_store::CPrivateStore::RemovePrivateStore(bool)",0x473,
               "unregister_object error");
  }
  CPrivateStoreMgr::FreeStoreSeller(*(CUser **)(this + 0x20));
  uVar5 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  cMyTrace::cMyTrace(local_1c,"virtual bool private_store::CPrivateStore::RemovePrivateStore(bool)",
                     0x478,0);
  cMyTrace::operator()(local_1c,"RemovePrivateStore() uid:%d\n",uVar5 & 0xffff);
  Clear(this);
  uVar7 = 1;
LAB_085c63b6:
  CPacketBufPrivate::~CPacketBufPrivate(local_2c);
  return uVar7;
}
```
