# DeleteItem

`_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE`

`private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c68b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c68b4  _ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE
#           private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)
# range [0x085c68b4, 0x085c6d47]
085c68b4 +0x000:  push   %ebp
085c68b5 +0x001:  mov    %esp,%ebp
085c68b7 +0x003:  push   %edi
085c68b8 +0x004:  push   %esi
085c68b9 +0x005:  push   %ebx
085c68ba +0x006:  sub    $0x9c,%esp
085c68c0 +0x00c:  mov    0xc(%ebp),%eax
085c68c3 +0x00f:  mov    0x40(%eax),%eax
085c68c6 +0x012:  mov    %eax,-0x78(%ebp)
085c68c9 +0x015:  mov    0xc(%ebp),%eax
085c68cc +0x018:  mov    %eax,(%esp)
085c68cf +0x01b:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
085c68d4 +0x020:  movzbl %al,%eax
085c68d7 +0x023:  mov    %eax,-0x74(%ebp)
085c68da +0x026:  mov    0xc(%ebp),%eax
085c68dd +0x029:  mov    %eax,(%esp)
085c68e0 +0x02c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085c68e5 +0x031:  movzbl %al,%eax
085c68e8 +0x034:  mov    %eax,-0x70(%ebp)
085c68eb +0x037:  mov    0xc(%ebp),%eax
085c68ee +0x03a:  mov    0x7(%eax),%eax
085c68f1 +0x03d:  mov    %eax,-0x6c(%ebp)
085c68f4 +0x040:  mov    0xc(%ebp),%eax
085c68f7 +0x043:  mov    0x2(%eax),%edi
085c68fa +0x046:  mov    0x8(%ebp),%eax
085c68fd +0x049:  mov    0x2c(%eax),%eax
085c6900 +0x04c:  mov    %eax,(%esp)
085c6903 +0x04f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c6908 +0x054:  mov    %eax,%esi
085c690a +0x056:  mov    0x8(%ebp),%eax
085c690d +0x059:  mov    0x2c(%eax),%eax
085c6910 +0x05c:  mov    %eax,(%esp)
085c6913 +0x05f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c6918 +0x064:  mov    %eax,%ebx
085c691a +0x066:  movl   $0x0,0xc(%esp)
085c6922 +0x06e:  movl   $0x4d7,0x8(%esp)
085c692a +0x076:  movl   $&_ZZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemEE19__PRETTY_FUNCTION__,0x4(%esp)
085c6932 +0x07e:  lea    -0x68(%ebp),%eax
085c6935 +0x081:  mov    %eax,(%esp)
085c6938 +0x084:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c693d +0x089:  mov    -0x78(%ebp),%eax
085c6940 +0x08c:  mov    %eax,0x20(%esp)
085c6944 +0x090:  mov    -0x74(%ebp),%eax
085c6947 +0x093:  mov    %eax,0x1c(%esp)
085c694b +0x097:  mov    -0x70(%ebp),%eax
085c694e +0x09a:  mov    %eax,0x18(%esp)
085c6952 +0x09e:  mov    -0x6c(%ebp),%eax
085c6955 +0x0a1:  mov    %eax,0x14(%esp)
085c6959 +0x0a5:  mov    %edi,0x10(%esp)
085c695d +0x0a9:  mov    %esi,0xc(%esp)
085c6961 +0x0ad:  mov    %ebx,0x8(%esp)
085c6965 +0x0b1:  movl   $"PrivateStore del charac_name(%s)(%d), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)",0x4(%esp)
085c696d +0x0b9:  lea    -0x68(%ebp),%eax
085c6970 +0x0bc:  mov    %eax,(%esp)
085c6973 +0x0bf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6978 +0x0c4:  mov    0xc(%ebp),%eax
085c697b +0x0c7:  movzbl 0x46(%eax),%eax
085c697f +0x0cb:  movsbl %al,%eax
085c6982 +0x0ce:  cmp    $0x1,%eax
085c6985 +0x0d1:  je     085c6c2a <+0x376>
085c698b +0x0d7:  cmp    $0x1,%eax
085c698e +0x0da:  jg     085c6999 <+0xe5>
085c6990 +0x0dc:  test   %eax,%eax
085c6992 +0x0de:  je     085c69b0 <+0xfc>
085c6994 +0x0e0:  jmp    085c6d37 <+0x483>
085c6999 +0x0e5:  cmp    $0x2,%eax
085c699c +0x0e8:  je     085c6a83 <+0x1cf>
085c69a2 +0x0ee:  cmp    $0x3,%eax
085c69a5 +0x0f1:  je     085c6b46 <+0x292>
085c69ab +0x0f7:  jmp    085c6d37 <+0x483>
085c69b0 +0x0fc:  mov    0xc(%ebp),%eax
085c69b3 +0x0ff:  mov    0x7(%eax),%esi
085c69b6 +0x102:  mov    0xc(%ebp),%eax
085c69b9 +0x105:  movzwl 0x48(%eax),%eax
085c69bd +0x109:  movswl %ax,%ebx
085c69c0 +0x10c:  mov    0x8(%ebp),%eax
085c69c3 +0x10f:  mov    0x2c(%eax),%eax
085c69c6 +0x112:  mov    %eax,(%esp)
085c69c9 +0x115:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c69ce +0x11a:  movl   $0x1,0x14(%esp)
085c69d6 +0x122:  movl   $0xb,0x10(%esp)
085c69de +0x12a:  mov    %esi,0xc(%esp)
085c69e2 +0x12e:  mov    %ebx,0x8(%esp)
085c69e6 +0x132:  movl   $0x1,0x4(%esp)
085c69ee +0x13a:  mov    %eax,(%esp)
085c69f1 +0x13d:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085c69f6 +0x142:  xor    $0x1,%eax
085c69f9 +0x145:  test   %al,%al
085c69fb +0x147:  je     085c6d33 <+0x47f>
085c6a01 +0x14d:  mov    0xc(%ebp),%eax
085c6a04 +0x150:  mov    0x7(%eax),%edi
085c6a07 +0x153:  mov    0xc(%ebp),%eax
085c6a0a +0x156:  movzwl 0x48(%eax),%eax
085c6a0e +0x15a:  movswl %ax,%esi
085c6a11 +0x15d:  mov    0x8(%ebp),%eax
085c6a14 +0x160:  mov    0x2c(%eax),%eax
085c6a17 +0x163:  mov    %eax,(%esp)
085c6a1a +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c6a1f +0x16b:  mov    %eax,%ebx
085c6a21 +0x16d:  movl   $0x5,0xc(%esp)
085c6a29 +0x175:  movl   $0x4e0,0x8(%esp)
085c6a31 +0x17d:  movl   $&_ZZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemEE19__PRETTY_FUNCTION__,0x4(%esp)
085c6a39 +0x185:  lea    -0x58(%ebp),%eax
085c6a3c +0x188:  mov    %eax,(%esp)
085c6a3f +0x18b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6a44 +0x190:  mov    %edi,0x10(%esp)
085c6a48 +0x194:  mov    %esi,0xc(%esp)
085c6a4c +0x198:  mov    %ebx,0x8(%esp)
085c6a50 +0x19c:  movl   $"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",0x4(%esp)
085c6a58 +0x1a4:  lea    -0x58(%ebp),%eax
085c6a5b +0x1a7:  mov    %eax,(%esp)
085c6a5e +0x1aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6a63 +0x1af:  mov    0x8(%ebp),%eax
085c6a66 +0x1b2:  add    $0x14,%eax
085c6a69 +0x1b5:  movl   $0x11,0x4(%esp)
085c6a71 +0x1bd:  mov    %eax,(%esp)
085c6a74 +0x1c0:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c6a79 +0x1c5:  mov    $0x0,%eax
085c6a7e +0x1ca:  jmp    085c6d3c <+0x488>
085c6a83 +0x1cf:  mov    0xc(%ebp),%eax
085c6a86 +0x1d2:  mov    0x7(%eax),%esi
085c6a89 +0x1d5:  mov    0xc(%ebp),%eax
085c6a8c +0x1d8:  movzwl 0x48(%eax),%eax
085c6a90 +0x1dc:  movswl %ax,%ebx
085c6a93 +0x1df:  mov    0x8(%ebp),%eax
085c6a96 +0x1e2:  mov    0x2c(%eax),%eax
085c6a99 +0x1e5:  mov    %eax,(%esp)
085c6a9c +0x1e8:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
085c6aa1 +0x1ed:  movl   $0xb,0xc(%esp)
085c6aa9 +0x1f5:  mov    %esi,0x8(%esp)
085c6aad +0x1f9:  mov    %ebx,0x4(%esp)
085c6ab1 +0x1fd:  mov    %eax,(%esp)
085c6ab4 +0x200:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
085c6ab9 +0x205:  xor    $0x1,%eax
085c6abc +0x208:  test   %al,%al
085c6abe +0x20a:  je     085c6d36 <+0x482>
085c6ac4 +0x210:  mov    0xc(%ebp),%eax
085c6ac7 +0x213:  mov    0x7(%eax),%edi
085c6aca +0x216:  mov    0xc(%ebp),%eax
085c6acd +0x219:  movzwl 0x48(%eax),%eax
085c6ad1 +0x21d:  movswl %ax,%esi
085c6ad4 +0x220:  mov    0x8(%ebp),%eax
085c6ad7 +0x223:  mov    0x2c(%eax),%eax
085c6ada +0x226:  mov    %eax,(%esp)
085c6add +0x229:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c6ae2 +0x22e:  mov    %eax,%ebx
085c6ae4 +0x230:  movl   $0x5,0xc(%esp)
085c6aec +0x238:  movl   $0x4ec,0x8(%esp)
085c6af4 +0x240:  movl   $&_ZZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemEE19__PRETTY_FUNCTION__,0x4(%esp)
085c6afc +0x248:  lea    -0x48(%ebp),%eax
085c6aff +0x24b:  mov    %eax,(%esp)
085c6b02 +0x24e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6b07 +0x253:  mov    %edi,0x10(%esp)
085c6b0b +0x257:  mov    %esi,0xc(%esp)
085c6b0f +0x25b:  mov    %ebx,0x8(%esp)
085c6b13 +0x25f:  movl   $"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",0x4(%esp)
085c6b1b +0x267:  lea    -0x48(%ebp),%eax
085c6b1e +0x26a:  mov    %eax,(%esp)
085c6b21 +0x26d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6b26 +0x272:  mov    0x8(%ebp),%eax
085c6b29 +0x275:  add    $0x14,%eax
085c6b2c +0x278:  movl   $0x11,0x4(%esp)
085c6b34 +0x280:  mov    %eax,(%esp)
085c6b37 +0x283:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c6b3c +0x288:  mov    $0x0,%eax
085c6b41 +0x28d:  jmp    085c6d3c <+0x488>
085c6b46 +0x292:  mov    0xc(%ebp),%eax
085c6b49 +0x295:  movzwl 0x48(%eax),%eax
085c6b4d +0x299:  movswl %ax,%ebx
085c6b50 +0x29c:  mov    0x8(%ebp),%eax
085c6b53 +0x29f:  mov    0x2c(%eax),%eax
085c6b56 +0x2a2:  mov    %eax,(%esp)
085c6b59 +0x2a5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c6b5e +0x2aa:  movl   $0x1,0x14(%esp)
085c6b66 +0x2b2:  movl   $0xb,0x10(%esp)
085c6b6e +0x2ba:  movl   $0x1,0xc(%esp)
085c6b76 +0x2c2:  mov    %ebx,0x8(%esp)
085c6b7a +0x2c6:  movl   $0x0,0x4(%esp)
085c6b82 +0x2ce:  mov    %eax,(%esp)
085c6b85 +0x2d1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085c6b8a +0x2d6:  xor    $0x1,%eax
085c6b8d +0x2d9:  test   %al,%al
085c6b8f +0x2db:  je     085c6c09 <+0x355>
085c6b91 +0x2dd:  mov    0xc(%ebp),%eax
085c6b94 +0x2e0:  movzwl 0x48(%eax),%eax
085c6b98 +0x2e4:  movswl %ax,%esi
085c6b9b +0x2e7:  mov    0x8(%ebp),%eax
085c6b9e +0x2ea:  mov    0x2c(%eax),%eax
085c6ba1 +0x2ed:  mov    %eax,(%esp)
085c6ba4 +0x2f0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c6ba9 +0x2f5:  mov    %eax,%ebx
085c6bab +0x2f7:  movl   $0x5,0xc(%esp)
085c6bb3 +0x2ff:  movl   $0x4f9,0x8(%esp)
085c6bbb +0x307:  movl   $&_ZZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemEE19__PRETTY_FUNCTION__,0x4(%esp)
085c6bc3 +0x30f:  lea    -0x38(%ebp),%eax
085c6bc6 +0x312:  mov    %eax,(%esp)
085c6bc9 +0x315:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6bce +0x31a:  mov    %esi,0xc(%esp)
085c6bd2 +0x31e:  mov    %ebx,0x8(%esp)
085c6bd6 +0x322:  movl   $"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",0x4(%esp)
085c6bde +0x32a:  lea    -0x38(%ebp),%eax
085c6be1 +0x32d:  mov    %eax,(%esp)
085c6be4 +0x330:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6be9 +0x335:  mov    0x8(%ebp),%eax
085c6bec +0x338:  add    $0x14,%eax
085c6bef +0x33b:  movl   $0x11,0x4(%esp)
085c6bf7 +0x343:  mov    %eax,(%esp)
085c6bfa +0x346:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c6bff +0x34b:  mov    $0x0,%eax
085c6c04 +0x350:  jmp    085c6d3c <+0x488>
085c6c09 +0x355:  mov    0xc(%ebp),%eax
085c6c0c +0x358:  movzwl 0x48(%eax),%eax
085c6c10 +0x35c:  movswl %ax,%edx
085c6c13 +0x35f:  mov    0x8(%ebp),%eax
085c6c16 +0x362:  mov    0x2c(%eax),%eax
085c6c19 +0x365:  mov    %edx,0x4(%esp)
085c6c1d +0x369:  mov    %eax,(%esp)
085c6c20 +0x36c:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
085c6c25 +0x371:  jmp    085c6d37 <+0x483>
085c6c2a +0x376:  mov    0xc(%ebp),%eax
085c6c2d +0x379:  movzwl 0x48(%eax),%eax
085c6c31 +0x37d:  movswl %ax,%ebx
085c6c34 +0x380:  mov    0x8(%ebp),%eax
085c6c37 +0x383:  mov    0x2c(%eax),%eax
085c6c3a +0x386:  mov    %eax,(%esp)
085c6c3d +0x389:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c6c42 +0x38e:  movl   $0x1,0x14(%esp)
085c6c4a +0x396:  movl   $0x4,0x10(%esp)
085c6c52 +0x39e:  movl   $0x1,0xc(%esp)
085c6c5a +0x3a6:  mov    %ebx,0x8(%esp)
085c6c5e +0x3aa:  movl   $0x2,0x4(%esp)
085c6c66 +0x3b2:  mov    %eax,(%esp)
085c6c69 +0x3b5:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085c6c6e +0x3ba:  xor    $0x1,%eax
085c6c71 +0x3bd:  test   %al,%al
085c6c73 +0x3bf:  je     085c6cea <+0x436>
085c6c75 +0x3c1:  mov    0xc(%ebp),%eax
085c6c78 +0x3c4:  movzwl 0x48(%eax),%eax
085c6c7c +0x3c8:  movswl %ax,%esi
085c6c7f +0x3cb:  mov    0x8(%ebp),%eax
085c6c82 +0x3ce:  mov    0x2c(%eax),%eax
085c6c85 +0x3d1:  mov    %eax,(%esp)
085c6c88 +0x3d4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c6c8d +0x3d9:  mov    %eax,%ebx
085c6c8f +0x3db:  movl   $0x5,0xc(%esp)
085c6c97 +0x3e3:  movl   $0x515,0x8(%esp)
085c6c9f +0x3eb:  movl   $&_ZZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemEE19__PRETTY_FUNCTION__,0x4(%esp)
085c6ca7 +0x3f3:  lea    -0x28(%ebp),%eax
085c6caa +0x3f6:  mov    %eax,(%esp)
085c6cad +0x3f9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c6cb2 +0x3fe:  mov    %esi,0xc(%esp)
085c6cb6 +0x402:  mov    %ebx,0x8(%esp)
085c6cba +0x406:  movl   $"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",0x4(%esp)
085c6cc2 +0x40e:  lea    -0x28(%ebp),%eax
085c6cc5 +0x411:  mov    %eax,(%esp)
085c6cc8 +0x414:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c6ccd +0x419:  mov    0x8(%ebp),%eax
085c6cd0 +0x41c:  add    $0x14,%eax
085c6cd3 +0x41f:  movl   $0x11,0x4(%esp)
085c6cdb +0x427:  mov    %eax,(%esp)
085c6cde +0x42a:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c6ce3 +0x42f:  mov    $0x0,%eax
085c6ce8 +0x434:  jmp    085c6d3c <+0x488>
085c6cea +0x436:  mov    0xc(%ebp),%eax
085c6ced +0x439:  movzwl 0x48(%eax),%eax
085c6cf1 +0x43d:  cwtl
085c6cf2 +0x43e:  lea    0xa(%eax),%esi
085c6cf5 +0x441:  mov    0xc(%ebp),%eax
085c6cf8 +0x444:  mov    0x7(%eax),%ebx
085c6cfb +0x447:  mov    0x8(%ebp),%eax
085c6cfe +0x44a:  mov    0x2c(%eax),%eax
085c6d01 +0x44d:  mov    %eax,(%esp)
085c6d04 +0x450:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c6d09 +0x455:  movl   $0x0,0x14(%esp)
085c6d11 +0x45d:  mov    %esi,0x10(%esp)
085c6d15 +0x461:  movl   $0x3,0xc(%esp)
085c6d1d +0x469:  mov    %ebx,0x8(%esp)
085c6d21 +0x46d:  movl   $0x36,0x4(%esp)
085c6d29 +0x475:  mov    %eax,(%esp)
085c6d2c +0x478:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085c6d31 +0x47d:  jmp    085c6d37 <+0x483>
085c6d33 +0x47f:  nop
085c6d34 +0x480:  jmp    085c6d37 <+0x483>
085c6d36 +0x482:  nop
085c6d37 +0x483:  mov    $0x1,%eax
085c6d3c +0x488:  add    $0x9c,%esp
085c6d42 +0x48e:  pop    %ebx
085c6d43 +0x48f:  pop    %esi
085c6d44 +0x490:  pop    %edi
085c6d45 +0x491:  pop    %ebp
085c6d46 +0x492:  ret
085c6d47 +0x493:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::DeleteItem @ 0x85c68b4

/* private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&) */

undefined4 __thiscall
private_store::CPrivateStore::DeleteItem(CPrivateStore *this,PrivateStoreItem *param_1)

{
  PrivateStoreItem PVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CInventory *pCVar10;
  undefined4 uVar11;
  CCargo *pCVar12;
  undefined4 uVar13;
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  uVar13 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = Inven_Item::GetReSealCount((Inven_Item *)param_1);
  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)param_1);
  uVar11 = *(undefined4 *)(param_1 + 7);
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar8 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
  uVar9 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cMyTrace::cMyTrace(local_6c,
                     "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                     ,0x4d7,0);
  cMyTrace::operator()
            (local_6c,
             "PrivateStore del charac_name(%s)(%d), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)"
             ,uVar9,uVar8,uVar3,uVar11,uVar7 & 0xff,uVar6 & 0xff,uVar13);
  PVar1 = param_1[0x46];
  if (PVar1 == (PrivateStoreItem)0x1) {
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CInventory::delete_item(pCVar10,2,(int)sVar2,1,4,1);
    if (cVar5 != '\x01') {
      sVar2 = *(short *)(param_1 + 0x48);
      uVar13 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_2c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x515,5);
      cMyTrace::operator()
                (local_2c,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar13,
                 (int)sVar2);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
    sVar2 = *(short *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 7);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
    CInventory::SendAvatarEvent(pCVar10,0x36,iVar4,3,sVar2 + 10,0);
  }
  else if ((char)PVar1 < '\x02') {
    if (PVar1 == (PrivateStoreItem)0x0) {
      uVar13 = *(undefined4 *)(param_1 + 7);
      sVar2 = *(short *)(param_1 + 0x48);
      pCVar10 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
      cVar5 = CInventory::delete_item(pCVar10,1,(int)sVar2,uVar13,0xb,1);
      if (cVar5 != '\x01') {
        uVar13 = *(undefined4 *)(param_1 + 7);
        sVar2 = *(short *)(param_1 + 0x48);
        uVar11 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
        cMyTrace::cMyTrace(local_5c,
                           "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                           ,0x4e0,5);
        cMyTrace::operator()
                  (local_5c,"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",uVar11,
                   (int)sVar2,uVar13);
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
    }
  }
  else if (PVar1 == (PrivateStoreItem)0x2) {
    uVar13 = *(undefined4 *)(param_1 + 7);
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar12 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CCargo::delete_item(pCVar12,(int)sVar2,uVar13,0xb);
    if (cVar5 != '\x01') {
      uVar13 = *(undefined4 *)(param_1 + 7);
      sVar2 = *(short *)(param_1 + 0x48);
      uVar11 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_4c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x4ec,5);
      cMyTrace::operator()
                (local_4c,"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",uVar11,
                 (int)sVar2,uVar13);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
  }
  else if (PVar1 == (PrivateStoreItem)0x3) {
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CInventory::delete_item(pCVar10,0,(int)sVar2,1,0xb,1);
    if (cVar5 != '\x01') {
      sVar2 = *(short *)(param_1 + 0x48);
      uVar13 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_3c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x4f9,5);
      cMyTrace::operator()
                (local_3c,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar13,
                 (int)sVar2);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
    CUser::send_equip(*(CUser **)(this + 0x2c),(int)*(short *)(param_1 + 0x48));
  }
  return 1;
}
```
