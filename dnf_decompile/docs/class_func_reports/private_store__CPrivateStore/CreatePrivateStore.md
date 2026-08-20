# CreatePrivateStore

`_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst`

`private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short, short, unsigned short)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c53ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c53ea  _ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst
#           private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short, short, unsigned short)
# range [0x085c53ea, 0x085c5b5f]
085c53ea +0x000:  push   %ebp
085c53eb +0x001:  mov    %esp,%ebp
085c53ed +0x003:  push   %edi
085c53ee +0x004:  push   %esi
085c53ef +0x005:  push   %ebx
085c53f0 +0x006:  sub    $0x15c,%esp
085c53f6 +0x00c:  mov    0xc(%ebp),%esi
085c53f9 +0x00f:  mov    0x10(%ebp),%ebx
085c53fc +0x012:  mov    0x14(%ebp),%ecx
085c53ff +0x015:  mov    0x18(%ebp),%edx
085c5402 +0x018:  mov    0x1c(%ebp),%eax
085c5405 +0x01b:  mov    %eax,-0x13c(%ebp)
085c540b +0x021:  mov    %esi,%eax
085c540d +0x023:  mov    %al,-0x11c(%ebp)
085c5413 +0x029:  mov    %bl,-0x120(%ebp)
085c5419 +0x02f:  mov    %cx,-0x124(%ebp)
085c5420 +0x036:  mov    %dx,-0x128(%ebp)
085c5427 +0x03d:  movzwl -0x13c(%ebp),%edx
085c542e +0x044:  mov    %dx,-0x12c(%ebp)
085c5435 +0x04b:  mov    0x8(%ebp),%eax
085c5438 +0x04e:  mov    0x2c(%eax),%eax
085c543b +0x051:  mov    0x8(%ebp),%edx
085c543e +0x054:  add    $0x14,%edx
085c5441 +0x057:  movl   $0x58,0xc(%esp)
085c5449 +0x05f:  movl   $0x1,0x8(%esp)
085c5451 +0x067:  mov    %eax,0x4(%esp)
085c5455 +0x06b:  mov    %edx,(%esp)
085c5458 +0x06e:  call   085cb7a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x4be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x4be
085c545d +0x073:  mov    0x8(%ebp),%eax
085c5460 +0x076:  mov    0x2c(%eax),%eax
085c5463 +0x079:  test   %eax,%eax
085c5465 +0x07b:  jne    085c5471 <+0x87>
085c5467 +0x07d:  mov    $0x0,%ebx
085c546c +0x082:  jmp    085c5b53 <+0x769>
085c5471 +0x087:  mov    0x8(%ebp),%eax
085c5474 +0x08a:  mov    0x2c(%eax),%eax
085c5477 +0x08d:  mov    %eax,(%esp)
085c547a +0x090:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
085c547f +0x095:  test   %al,%al
085c5481 +0x097:  je     085c54a3 <+0xb9>
085c5483 +0x099:  mov    0x8(%ebp),%eax
085c5486 +0x09c:  add    $0x14,%eax
085c5489 +0x09f:  movl   $0x3e,0x4(%esp)
085c5491 +0x0a7:  mov    %eax,(%esp)
085c5494 +0x0aa:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c5499 +0x0af:  mov    $0x0,%ebx
085c549e +0x0b4:  jmp    085c5b53 <+0x769>
085c54a3 +0x0b9:  mov    0x8(%ebp),%eax
085c54a6 +0x0bc:  mov    0x2c(%eax),%eax
085c54a9 +0x0bf:  mov    %eax,(%esp)
085c54ac +0x0c2:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085c54b1 +0x0c7:  cmp    $0x7,%al
085c54b3 +0x0c9:  sete   %al
085c54b6 +0x0cc:  test   %al,%al
085c54b8 +0x0ce:  je     085c54da <+0xf0>
085c54ba +0x0d0:  mov    0x8(%ebp),%eax
085c54bd +0x0d3:  add    $0x14,%eax
085c54c0 +0x0d6:  movl   $0x3e,0x4(%esp)
085c54c8 +0x0de:  mov    %eax,(%esp)
085c54cb +0x0e1:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c54d0 +0x0e6:  mov    $0x0,%ebx
085c54d5 +0x0eb:  jmp    085c5b53 <+0x769>
085c54da +0x0f0:  mov    0x8(%ebp),%eax
085c54dd +0x0f3:  mov    0x20(%eax),%eax
085c54e0 +0x0f6:  test   %eax,%eax
085c54e2 +0x0f8:  jne    085c5504 <+0x11a>
085c54e4 +0x0fa:  mov    0x8(%ebp),%eax
085c54e7 +0x0fd:  add    $0x14,%eax
085c54ea +0x100:  movl   $0x3a,0x4(%esp)
085c54f2 +0x108:  mov    %eax,(%esp)
085c54f5 +0x10b:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c54fa +0x110:  mov    $0x0,%ebx
085c54ff +0x115:  jmp    085c5b53 <+0x769>
085c5504 +0x11a:  mov    0x8(%ebp),%eax
085c5507 +0x11d:  mov    0x2c(%eax),%eax
085c550a +0x120:  mov    %eax,(%esp)
085c550d +0x123:  call   0865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>  ; CUser::IsPermissionPrivateStore()
085c5512 +0x128:  xor    $0x1,%eax
085c5515 +0x12b:  test   %al,%al
085c5517 +0x12d:  je     085c5543 <+0x159>
085c5519 +0x12f:  cmpw   $0xffff,-0x12c(%ebp)
085c5521 +0x137:  jne    085c556d <+0x183>
085c5523 +0x139:  mov    0x8(%ebp),%eax
085c5526 +0x13c:  add    $0x14,%eax
085c5529 +0x13f:  movl   $0x3f,0x4(%esp)
085c5531 +0x147:  mov    %eax,(%esp)
085c5534 +0x14a:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c5539 +0x14f:  mov    $0x0,%ebx
085c553e +0x154:  jmp    085c5b53 <+0x769>
085c5543 +0x159:  cmpw   $0xffff,-0x12c(%ebp)
085c554b +0x161:  je     085c556d <+0x183>
085c554d +0x163:  mov    0x8(%ebp),%eax
085c5550 +0x166:  add    $0x14,%eax
085c5553 +0x169:  movl   $0x3f,0x4(%esp)
085c555b +0x171:  mov    %eax,(%esp)
085c555e +0x174:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c5563 +0x179:  mov    $0x0,%ebx
085c5568 +0x17e:  jmp    085c5b53 <+0x769>
085c556d +0x183:  mov    0x8(%ebp),%eax
085c5570 +0x186:  mov    0x2c(%eax),%eax
085c5573 +0x189:  mov    %eax,(%esp)
085c5576 +0x18c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085c557b +0x191:  cmp    $0x6,%eax
085c557e +0x194:  sete   %al
085c5581 +0x197:  test   %al,%al
085c5583 +0x199:  je     085c55a5 <+0x1bb>
085c5585 +0x19b:  mov    0x8(%ebp),%eax
085c5588 +0x19e:  add    $0x14,%eax
085c558b +0x1a1:  movl   $0x3e,0x4(%esp)
085c5593 +0x1a9:  mov    %eax,(%esp)
085c5596 +0x1ac:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c559b +0x1b1:  mov    $0x0,%ebx
085c55a0 +0x1b6:  jmp    085c5b53 <+0x769>
085c55a5 +0x1bb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c55aa +0x1c0:  mov    %eax,(%esp)
085c55ad +0x1c3:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085c55b2 +0x1c8:  cmp    $0x2,%eax
085c55b5 +0x1cb:  sete   %al
085c55b8 +0x1ce:  test   %al,%al
085c55ba +0x1d0:  je     085c55dc <+0x1f2>
085c55bc +0x1d2:  mov    0x8(%ebp),%eax
085c55bf +0x1d5:  add    $0x14,%eax
085c55c2 +0x1d8:  movl   $0x3e,0x4(%esp)
085c55ca +0x1e0:  mov    %eax,(%esp)
085c55cd +0x1e3:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c55d2 +0x1e8:  mov    $0x0,%ebx
085c55d7 +0x1ed:  jmp    085c5b53 <+0x769>
085c55dc +0x1f2:  mov    0x8(%ebp),%eax
085c55df +0x1f5:  movzbl 0x10(%eax),%eax
085c55e3 +0x1f9:  test   %al,%al
085c55e5 +0x1fb:  je     085c5607 <+0x21d>
085c55e7 +0x1fd:  mov    0x8(%ebp),%eax
085c55ea +0x200:  add    $0x14,%eax
085c55ed +0x203:  movl   $0x14,0x4(%esp)
085c55f5 +0x20b:  mov    %eax,(%esp)
085c55f8 +0x20e:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c55fd +0x213:  mov    $0x0,%ebx
085c5602 +0x218:  jmp    085c5b53 <+0x769>
085c5607 +0x21d:  movswl -0x128(%ebp),%eax
085c560e +0x224:  mov    %eax,-0x130(%ebp)
085c5614 +0x22a:  movswl -0x124(%ebp),%edi
085c561b +0x231:  movzbl -0x120(%ebp),%esi
085c5622 +0x238:  movzbl -0x11c(%ebp),%ebx
085c5629 +0x23f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c562e +0x244:  mov    -0x130(%ebp),%edx
085c5634 +0x24a:  mov    %edx,0x10(%esp)
085c5638 +0x24e:  mov    %edi,0xc(%esp)
085c563c +0x252:  mov    %esi,0x8(%esp)
085c5640 +0x256:  mov    %ebx,0x4(%esp)
085c5644 +0x25a:  mov    %eax,(%esp)
085c5647 +0x25d:  call   086c45aa <_ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii>  ; GameWorld::check_restrictive_commercial_transaction_zone(int, int, int, int)
085c564c +0x262:  mov    %eax,-0x24(%ebp)
085c564f +0x265:  cmpl   $0x0,-0x24(%ebp)
085c5653 +0x269:  je     085c5674 <+0x28a>
085c5655 +0x26b:  mov    -0x24(%ebp),%eax
085c5658 +0x26e:  mov    0x8(%ebp),%edx
085c565b +0x271:  add    $0x14,%edx
085c565e +0x274:  mov    %eax,0x4(%esp)
085c5662 +0x278:  mov    %edx,(%esp)
085c5665 +0x27b:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c566a +0x280:  mov    $0x0,%ebx
085c566f +0x285:  jmp    085c5b53 <+0x769>
085c5674 +0x28a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c5679 +0x28f:  mov    %eax,(%esp)
085c567c +0x292:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085c5681 +0x297:  test   %al,%al
085c5683 +0x299:  je     085c56a5 <+0x2bb>
085c5685 +0x29b:  mov    0x8(%ebp),%eax
085c5688 +0x29e:  add    $0x14,%eax
085c568b +0x2a1:  movl   $0x3e,0x4(%esp)
085c5693 +0x2a9:  mov    %eax,(%esp)
085c5696 +0x2ac:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c569b +0x2b1:  mov    $0x0,%ebx
085c56a0 +0x2b6:  jmp    085c5b53 <+0x769>
085c56a5 +0x2bb:  mov    0x8(%ebp),%eax
085c56a8 +0x2be:  mov    0x2c(%eax),%eax
085c56ab +0x2c1:  mov    %eax,0x4(%esp)
085c56af +0x2c5:  mov    0x8(%ebp),%eax
085c56b2 +0x2c8:  mov    %eax,(%esp)
085c56b5 +0x2cb:  call   085c5082 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser>  ; private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)
085c56ba +0x2d0:  xor    $0x1,%eax
085c56bd +0x2d3:  test   %al,%al
085c56bf +0x2d5:  je     085c56e1 <+0x2f7>
085c56c1 +0x2d7:  mov    0x8(%ebp),%eax
085c56c4 +0x2da:  add    $0x14,%eax
085c56c7 +0x2dd:  movl   $0x3e,0x4(%esp)
085c56cf +0x2e5:  mov    %eax,(%esp)
085c56d2 +0x2e8:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c56d7 +0x2ed:  mov    $0x0,%ebx
085c56dc +0x2f2:  jmp    085c5b53 <+0x769>
085c56e1 +0x2f7:  cmpw   $0xffff,-0x12c(%ebp)
085c56e9 +0x2ff:  je     085c5790 <+0x3a6>
085c56ef +0x305:  movzwl -0x12c(%ebp),%eax
085c56f6 +0x30c:  mov    %eax,0x4(%esp)
085c56fa +0x310:  mov    0x8(%ebp),%eax
085c56fd +0x313:  mov    %eax,(%esp)
085c5700 +0x316:  call   085c532c <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt>  ; private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short)
085c5705 +0x31b:  mov    %eax,-0x20(%ebp)
085c5708 +0x31e:  cmpl   $0x0,-0x20(%ebp)
085c570c +0x322:  setne  %al
085c570f +0x325:  test   %al,%al
085c5711 +0x327:  je     085c5732 <+0x348>
085c5713 +0x329:  mov    0x8(%ebp),%eax
085c5716 +0x32c:  lea    0x14(%eax),%edx
085c5719 +0x32f:  mov    -0x20(%ebp),%eax
085c571c +0x332:  mov    %eax,0x4(%esp)
085c5720 +0x336:  mov    %edx,(%esp)
085c5723 +0x339:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c5728 +0x33e:  mov    $0x0,%ebx
085c572d +0x343:  jmp    085c5b53 <+0x769>
085c5732 +0x348:  movl   $0x1,0x4(%esp)
085c573a +0x350:  mov    0x8(%ebp),%eax
085c573d +0x353:  mov    %eax,(%esp)
085c5740 +0x356:  call   085cb8e0 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5f6>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5f6
085c5745 +0x35b:  movzwl -0x12c(%ebp),%ebx
085c574c +0x362:  mov    0x8(%ebp),%eax
085c574f +0x365:  mov    0x2c(%eax),%eax
085c5752 +0x368:  mov    %eax,(%esp)
085c5755 +0x36b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c575a +0x370:  lea    -0x10a(%ebp),%edx
085c5760 +0x376:  mov    %ebx,0xc(%esp)
085c5764 +0x37a:  movl   $0x1,0x8(%esp)
085c576c +0x382:  mov    %eax,0x4(%esp)
085c5770 +0x386:  mov    %edx,(%esp)
085c5773 +0x389:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085c5778 +0x38e:  sub    $0x4,%esp
085c577b +0x391:  mov    -0x108(%ebp),%eax
085c5781 +0x397:  mov    %eax,0x4(%esp)
085c5785 +0x39b:  mov    0x8(%ebp),%eax
085c5788 +0x39e:  mov    %eax,(%esp)
085c578b +0x3a1:  call   085cb91c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x632>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x632
085c5790 +0x3a6:  mov    0x8(%ebp),%eax
085c5793 +0x3a9:  mov    %eax,(%esp)
085c5796 +0x3ac:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c579b +0x3b1:  xor    $0x1,%eax
085c579e +0x3b4:  test   %al,%al
085c57a0 +0x3b6:  je     085c57d4 <+0x3ea>
085c57a2 +0x3b8:  movzwl -0x128(%ebp),%eax
085c57a9 +0x3bf:  movzwl %ax,%ecx
085c57ac +0x3c2:  movzwl -0x124(%ebp),%eax
085c57b3 +0x3c9:  movzwl %ax,%edx
085c57b6 +0x3cc:  mov    0x8(%ebp),%eax
085c57b9 +0x3cf:  mov    0x2c(%eax),%eax
085c57bc +0x3d2:  movl   $0x0,0xc(%esp)
085c57c4 +0x3da:  mov    %ecx,0x8(%esp)
085c57c8 +0x3de:  mov    %edx,0x4(%esp)
085c57cc +0x3e2:  mov    %eax,(%esp)
085c57cf +0x3e5:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
085c57d4 +0x3ea:  movswl -0x128(%ebp),%edx
085c57db +0x3f1:  movswl -0x124(%ebp),%eax
085c57e2 +0x3f8:  mov    %edx,0xc(%esp)
085c57e6 +0x3fc:  mov    %eax,0x8(%esp)
085c57ea +0x400:  mov    0x8(%ebp),%eax
085c57ed +0x403:  mov    %eax,0x4(%esp)
085c57f1 +0x407:  lea    -0x54(%ebp),%eax
085c57f4 +0x40a:  mov    %eax,(%esp)
085c57f7 +0x40d:  call   085cb7fc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x512>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x512
085c57fc +0x412:  mov    0x8(%ebp),%eax
085c57ff +0x415:  lea    0x4c(%eax),%edx
085c5802 +0x418:  lea    -0x54(%ebp),%eax
085c5805 +0x41b:  mov    %eax,0x4(%esp)
085c5809 +0x41f:  mov    %edx,(%esp)
085c580c +0x422:  call   085ccae4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17fa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17fa
085c5811 +0x427:  mov    0x8(%ebp),%eax
085c5814 +0x42a:  lea    0x4c(%eax),%ebx
085c5817 +0x42d:  movzbl -0x120(%ebp),%edx
085c581e +0x434:  movzbl -0x11c(%ebp),%eax
085c5825 +0x43b:  mov    %edx,0x8(%esp)
085c5829 +0x43f:  mov    %eax,0x4(%esp)
085c582d +0x443:  lea    -0x3c(%ebp),%eax
085c5830 +0x446:  mov    %eax,(%esp)
085c5833 +0x449:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
085c5838 +0x44e:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
085c583d +0x453:  mov    %ebx,0x8(%esp)
085c5841 +0x457:  movzwl -0x3c(%ebp),%edx
085c5845 +0x45b:  mov    %dx,0x4(%esp)
085c584a +0x460:  mov    %eax,(%esp)
085c584d +0x463:  call   086b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::register_object(village_object::Zone, village_object::IObject*)
085c5852 +0x468:  xor    $0x1,%eax
085c5855 +0x46b:  test   %al,%al
085c5857 +0x46d:  je     085c5879 <+0x48f>
085c5859 +0x46f:  mov    0x8(%ebp),%eax
085c585c +0x472:  add    $0x14,%eax
085c585f +0x475:  movl   $0x38,0x4(%esp)
085c5867 +0x47d:  mov    %eax,(%esp)
085c586a +0x480:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c586f +0x485:  mov    $0x0,%ebx
085c5874 +0x48a:  jmp    085c5b53 <+0x769>
085c5879 +0x48f:  movswl -0x128(%ebp),%ebx
085c5880 +0x496:  movswl -0x124(%ebp),%ecx
085c5887 +0x49d:  movzbl -0x120(%ebp),%edx
085c588e +0x4a4:  movzbl -0x11c(%ebp),%eax
085c5895 +0x4ab:  mov    %ebx,0x10(%esp)
085c5899 +0x4af:  mov    %ecx,0xc(%esp)
085c589d +0x4b3:  mov    %edx,0x8(%esp)
085c58a1 +0x4b7:  mov    %eax,0x4(%esp)
085c58a5 +0x4bb:  lea    -0x3a(%ebp),%eax
085c58a8 +0x4be:  mov    %eax,(%esp)
085c58ab +0x4c1:  call   085cb72c <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x442>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x442
085c58b0 +0x4c6:  mov    0x8(%ebp),%eax
085c58b3 +0x4c9:  mov    -0x3a(%ebp),%edx
085c58b6 +0x4cc:  mov    %edx,0x24(%eax)
085c58b9 +0x4cf:  movzwl -0x36(%ebp),%edx
085c58bd +0x4d3:  mov    %dx,0x28(%eax)
085c58c1 +0x4d7:  mov    0x8(%ebp),%eax
085c58c4 +0x4da:  add    $0x34,%eax
085c58c7 +0x4dd:  mov    %eax,(%esp)
085c58ca +0x4e0:  call   085cd138 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e4e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e4e
085c58cf +0x4e5:  mov    0x8(%ebp),%eax
085c58d2 +0x4e8:  mov    %eax,(%esp)
085c58d5 +0x4eb:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c58da +0x4f0:  mov    0x8(%ebp),%eax
085c58dd +0x4f3:  movb   $0x1,0x10(%eax)
085c58e1 +0x4f7:  lea    -0x60(%ebp),%eax
085c58e4 +0x4fa:  mov    %eax,(%esp)
085c58e7 +0x4fd:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c58ec +0x502:  lea    -0x60(%ebp),%eax
085c58ef +0x505:  mov    %eax,(%esp)
085c58f2 +0x508:  call   085cb986 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x69c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x69c
085c58f7 +0x50d:  mov    0x8(%ebp),%eax
085c58fa +0x510:  mov    0x2c(%eax),%eax
085c58fd +0x513:  lea    -0x60(%ebp),%edx
085c5900 +0x516:  mov    %edx,0x4(%esp)
085c5904 +0x51a:  mov    %eax,(%esp)
085c5907 +0x51d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c590c +0x522:  mov    0x8(%ebp),%eax
085c590f +0x525:  mov    %eax,(%esp)
085c5912 +0x528:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c5917 +0x52d:  movzbl %al,%ebx
085c591a +0x530:  mov    0x8(%ebp),%eax
085c591d +0x533:  lea    0x24(%eax),%esi
085c5920 +0x536:  mov    0x8(%ebp),%eax
085c5923 +0x539:  mov    %eax,(%esp)
085c5926 +0x53c:  call   085cb894 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x5aa>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x5aa
085c592b +0x541:  movzwl %ax,%eax
085c592e +0x544:  mov    %ebx,0xc(%esp)
085c5932 +0x548:  mov    %esi,0x8(%esp)
085c5936 +0x54c:  mov    %eax,0x4(%esp)
085c593a +0x550:  lea    -0x60(%ebp),%eax
085c593d +0x553:  mov    %eax,(%esp)
085c5940 +0x556:  call   085cb9da <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x6f0>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x6f0
085c5945 +0x55b:  mov    0x8(%ebp),%eax
085c5948 +0x55e:  movzbl 0x25(%eax),%eax
085c594c +0x562:  movzbl %al,%edx
085c594f +0x565:  mov    0x8(%ebp),%eax
085c5952 +0x568:  movzbl 0x24(%eax),%eax
085c5956 +0x56c:  movzbl %al,%eax
085c5959 +0x56f:  lea    -0x60(%ebp),%ecx
085c595c +0x572:  mov    %ecx,0x8(%esp)
085c5960 +0x576:  mov    %edx,0x4(%esp)
085c5964 +0x57a:  mov    %eax,(%esp)
085c5967 +0x57d:  call   085cca73 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1789>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1789
085c596c +0x582:  mov    0x8(%ebp),%eax
085c596f +0x585:  mov    0x2c(%eax),%eax
085c5972 +0x588:  mov    %eax,(%esp)
085c5975 +0x58b:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085c597a +0x590:  test   %eax,%eax
085c597c +0x592:  setne  %al
085c597f +0x595:  test   %al,%al
085c5981 +0x597:  je     085c59fe <+0x614>
085c5983 +0x599:  mov    $&_ZGVZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,%eax
085c5988 +0x59e:  movzbl (%eax),%eax
085c598b +0x5a1:  test   %al,%al
085c598d +0x5a3:  jne    085c59d9 <+0x5ef>
085c598f +0x5a5:  movl   $&_ZGVZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,(%esp)
085c5996 +0x5ac:  call   08725330 <__cxa_guard_acquire>
085c599b +0x5b1:  test   %eax,%eax
085c599d +0x5b3:  setne  %al
085c59a0 +0x5b6:  test   %al,%al
085c59a2 +0x5b8:  je     085c59d9 <+0x5ef>
085c59a4 +0x5ba:  movl   $&_ZZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,(%esp)
085c59ab +0x5c1:  call   08595a18 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x9f8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x9f8
085c59b0 +0x5c6:  movl   $&_ZGVZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,(%esp)
085c59b7 +0x5cd:  call   08725250 <__cxa_guard_release>
085c59bc +0x5d2:  mov    $&_ZN21DisPatcher_LeavePartyD1Ev,%eax
085c59c1 +0x5d7:  movl   $&__dso_handle,0x8(%esp)
085c59c9 +0x5df:  movl   $&_ZZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,0x4(%esp)
085c59d1 +0x5e7:  mov    %eax,(%esp)
085c59d4 +0x5ea:  call   0807ddd0 <_init+0x6c8>
085c59d9 +0x5ef:  lea    -0x60(%ebp),%eax
085c59dc +0x5f2:  mov    %eax,(%esp)
085c59df +0x5f5:  call   0822b766 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe10
085c59e4 +0x5fa:  mov    0x8(%ebp),%edx
085c59e7 +0x5fd:  mov    0x2c(%edx),%edx
085c59ea +0x600:  mov    %eax,0x8(%esp)
085c59ee +0x604:  mov    %edx,0x4(%esp)
085c59f2 +0x608:  movl   $&_ZZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE11leave_party,(%esp)
085c59f9 +0x60f:  call   08259650 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x247ce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x247ce
085c59fe +0x614:  mov    0x8(%ebp),%eax
085c5a01 +0x617:  mov    0x2c(%eax),%eax
085c5a04 +0x61a:  mov    %eax,(%esp)
085c5a07 +0x61d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085c5a0c +0x622:  movzwl %ax,%ebx
085c5a0f +0x625:  movl   $0x0,0xc(%esp)
085c5a17 +0x62d:  movl   $0x335,0x8(%esp)
085c5a1f +0x635:  movl   $&_ZZN13private_store13CPrivateStore18CreatePrivateStoreEhhsstE19__PRETTY_FUNCTION__,0x4(%esp)
085c5a27 +0x63d:  lea    -0x34(%ebp),%eax
085c5a2a +0x640:  mov    %eax,(%esp)
085c5a2d +0x643:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c5a32 +0x648:  mov    %ebx,0x8(%esp)
085c5a36 +0x64c:  movl   $"CreatePrivateStore() uid:%d\n",0x4(%esp)
085c5a3e +0x654:  lea    -0x34(%ebp),%eax
085c5a41 +0x657:  mov    %eax,(%esp)
085c5a44 +0x65a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c5a49 +0x65f:  mov    0x8(%ebp),%eax
085c5a4c +0x662:  mov    0x2c(%eax),%eax
085c5a4f +0x665:  mov    %eax,(%esp)
085c5a52 +0x668:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c5a57 +0x66d:  movzbl -0x120(%ebp),%ecx
085c5a5e +0x674:  movzbl -0x11c(%ebp),%edx
085c5a65 +0x67b:  mov    0x8(%ebp),%ebx
085c5a68 +0x67e:  mov    0x2c(%ebx),%ebx
085c5a6b +0x681:  add    $0x79700,%ebx
085c5a71 +0x687:  mov    %eax,0xc(%esp)
085c5a75 +0x68b:  mov    %ecx,0x8(%esp)
085c5a79 +0x68f:  mov    %edx,0x4(%esp)
085c5a7d +0x693:  mov    %ebx,(%esp)
085c5a80 +0x696:  call   0868455a <_ZN15cUserHistoryLog18CreatePrivateStoreEiiPKc>  ; cUserHistoryLog::CreatePrivateStore(int, int, char const*)
085c5a85 +0x69b:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c5a8a +0x6a0:  mov    %eax,(%esp)
085c5a8d +0x6a3:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
085c5a92 +0x6a8:  test   %al,%al
085c5a94 +0x6aa:  je     085c5b26 <+0x73c>
085c5a9a +0x6b0:  lea    -0x10a(%ebp),%eax
085c5aa0 +0x6b6:  mov    %eax,(%esp)
085c5aa3 +0x6b9:  call   085cb374 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x8a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x8a
085c5aa8 +0x6be:  mov    0x8(%ebp),%eax
085c5aab +0x6c1:  mov    0x2c(%eax),%eax
085c5aae +0x6c4:  mov    %eax,(%esp)
085c5ab1 +0x6c7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c5ab6 +0x6cc:  mov    %eax,-0xf8(%ebp)
085c5abc +0x6d2:  mov    0x8(%ebp),%eax
085c5abf +0x6d5:  mov    0x2c(%eax),%eax
085c5ac2 +0x6d8:  mov    %eax,(%esp)
085c5ac5 +0x6db:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
085c5aca +0x6e0:  mov    %eax,-0xf4(%ebp)
085c5ad0 +0x6e6:  movl   $0x0,-0x1c(%ebp)
085c5ad7 +0x6ed:  jmp    085c5aff <+0x715>
085c5ad9 +0x6ef:  mov    -0x1c(%ebp),%ebx
085c5adc +0x6f2:  mov    0x8(%ebp),%eax
085c5adf +0x6f5:  mov    0x2c(%eax),%eax
085c5ae2 +0x6f8:  mov    -0x1c(%ebp),%edx
085c5ae5 +0x6fb:  mov    %edx,0x4(%esp)
085c5ae9 +0x6ff:  mov    %eax,(%esp)
085c5aec +0x702:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085c5af1 +0x707:  lea    0x4(%ebx),%edx
085c5af4 +0x70a:  mov    %eax,-0x100(%ebp,%edx,4)
085c5afb +0x711:  addl   $0x1,-0x1c(%ebp)
085c5aff +0x715:  mov    -0xf4(%ebp),%eax
085c5b05 +0x71b:  cmp    -0x1c(%ebp),%eax
085c5b08 +0x71e:  setg   %al
085c5b0b +0x721:  test   %al,%al
085c5b0d +0x723:  jne    085c5ad9 <+0x6ef>
085c5b0f +0x725:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
085c5b14 +0x72a:  lea    -0x10a(%ebp),%edx
085c5b1a +0x730:  mov    %edx,0x4(%esp)
085c5b1e +0x734:  mov    %eax,(%esp)
085c5b21 +0x737:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
085c5b26 +0x73c:  mov    $0x1,%ebx
085c5b2b +0x741:  lea    -0x60(%ebp),%eax
085c5b2e +0x744:  mov    %eax,(%esp)
085c5b31 +0x747:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c5b36 +0x74c:  jmp    085c5b53 <+0x769>
085c5b38 +0x74e:  mov    %edx,%ebx
085c5b3a +0x750:  mov    %eax,%esi
085c5b3c +0x752:  lea    -0x60(%ebp),%eax
085c5b3f +0x755:  mov    %eax,(%esp)
085c5b42 +0x758:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c5b47 +0x75d:  mov    %esi,%eax
085c5b49 +0x75f:  mov    %ebx,%edx
085c5b4b +0x761:  mov    %eax,(%esp)
085c5b4e +0x764:  call   08ae3750 <_Unwind_Resume>
085c5b53 +0x769:  mov    %ebx,%eax
085c5b55 +0x76b:  lea    -0xc(%ebp),%esp
085c5b58 +0x76e:  add    $0x0,%esp
085c5b5b +0x771:  pop    %ebx
085c5b5c +0x772:  pop    %esi
085c5b5d +0x773:  pop    %edi
085c5b5e +0x774:  pop    %ebp
085c5b5f +0x775:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::CreatePrivateStore @ 0x85c53ea

/* private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short, short,
   unsigned short) */

undefined4 __thiscall
private_store::CPrivateStore::CreatePrivateStore
          (CPrivateStore *this,uchar param_1,uchar param_2,short param_3,short param_4,
          ushort param_5)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined2 uVar9;
  PacketBuf *pPVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar10;
  PCK_AUCTION_OPEN_PRIVATE_STORE_GA local_10e [2];
  ulong local_10c;
  int aiStack_104 [40];
  CPacketBufPrivate local_64 [12];
  CPrivateStorePos local_58 [24];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x58);
  if (*(int *)(this + 0x2c) == 0) {
    uVar10 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::IsBusyDisjointStore(*(CUserCharacInfo **)(this + 0x2c));
    if (cVar1 == '\0') {
      cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x2c));
      if (cVar1 == '\a') {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
        uVar10 = 0;
      }
      else if (*(int *)(this + 0x20) == 0) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
        uVar10 = 0;
      }
      else {
        cVar1 = CUser::IsPermissionPrivateStore(*(CUser **)(this + 0x2c));
        if (cVar1 == '\x01') {
          if (param_5 != 0xffff) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3f);
            return 0;
          }
        }
        else if (param_5 == 0xffff) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3f);
          return 0;
        }
        iVar4 = CUser::get_state(*(CUser **)(this + 0x2c));
        if (iVar4 == 6) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
          uVar10 = 0;
        }
        else {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar4 = GameWorld::GetChannelType(pGVar5);
          if (iVar4 == 2) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
            uVar10 = 0;
          }
          else if (this[0x10] == (CPrivateStore)0x0) {
            pGVar5 = (GameWorld *)G_GameWorld();
            local_28 = GameWorld::check_restrictive_commercial_transaction_zone
                                 (pGVar5,(uint)param_1,(uint)param_2,(int)param_3,(int)param_4);
            if (local_28 == 0) {
              pGVar5 = (GameWorld *)G_GameWorld();
              cVar1 = GameWorld::IsPVPChannel(pGVar5);
              if (cVar1 == '\0') {
                cVar1 = IsAreaNearEntranceDungeon(this,*(CUser **)(this + 0x2c));
                if (cVar1 == '\x01') {
                  if (param_5 != 0xffff) {
                    local_24 = CheckPrivateStoreDoll((ushort)this);
                    if (local_24 != 0) {
                      CErrorHandler::Do((CErrorHandler *)(this + 0x14),local_24);
                      return 0;
                    }
                    SetDollCreated(this,true);
                    iVar4 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
                    CInventory::GetInvenSlot((int)local_10e,iVar4);
                    SetDollItemID(this,local_10c);
                  }
                  cVar1 = isDollCreated(this);
                  if (cVar1 != '\x01') {
                    CUser::set_position(*(CUser **)(this + 0x2c),param_3,param_4,'\0');
                  }
                  CPrivateStorePos::CPrivateStorePos(local_58,this,(int)param_3,(int)param_4);
                  CPrivateStorePos::operator=((CPrivateStorePos *)(this + 0x4c),local_58);
                  uVar9 = 0;
                  village_object::Zone::Zone((Zone *)&local_40,param_1,param_2);
                  cVar1 = village_object::CVillageObjectMgr::register_object
                                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar9,local_40),
                                     this + 0x4c);
                  if (cVar1 == '\x01') {
                    PrivateStorePos::PrivateStorePos
                              ((PrivateStorePos *)&local_3e,param_1,param_2,param_3,param_4);
                    *(undefined4 *)(this + 0x24) = local_3e;
                    *(undefined2 *)(this + 0x28) = local_3a;
                    std::list<CUser*,std::allocator<CUser*>>::clear
                              ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
                    ResetItems(this);
                    this[0x10] = (CPrivateStore)0x1;
                    CPacketBufPrivate::CPacketBufPrivate(local_64);
                    /* try { // try from 085c58f2 to 085c5b25 has its CatchHandler @ 085c5b38 */
                    CPacketBufPrivate::MakeCmdpacketCreatePrivateStore(local_64);
                    CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_64);
                    bVar2 = (bool)isDollCreated(this);
                    uVar3 = GetSellerIndex(this);
                    CPacketBufPrivate::MakeNotipacketCreatePrivateStore
                              (local_64,uVar3,(PrivateStorePos *)(this + 0x24),bVar2);
                    CBroadcastPrivate::Send
                              ((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_64
                              );
                    iVar4 = CUser::GetParty(*(CUser **)(this + 0x2c));
                    if (iVar4 != 0) {
                      if ((CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                           ::leave_party == '\0') &&
                         (iVar4 = __cxa_guard_acquire(&
                                                  CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                                  ::leave_party), iVar4 != 0)) {
                        DisPatcher_LeaveParty::DisPatcher_LeaveParty
                                  ((DisPatcher_LeaveParty *)
                                   &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                    ::leave_party);
                        __cxa_guard_release(&CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                             ::leave_party);
                        __cxa_atexit(DisPatcher_LeaveParty::~DisPatcher_LeaveParty,
                                     &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                      ::leave_party,&__dso_handle);
                      }
                      pPVar6 = (PacketBuf *)InterfacePacketBuf::get((InterfacePacketBuf *)local_64);
                      IPacketDispatcher<MSG_BASE,stLeavePartyParam,(ch_state)0>::dispatch_template
                                ((IPacketDispatcher<MSG_BASE,stLeavePartyParam,(ch_state)0> *)
                                 &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                  ::leave_party,*(CUser **)(this + 0x2c),pPVar6);
                    }
                    uVar7 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
                    cMyTrace::cMyTrace(local_38,
                                       "virtual bool private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short int, short int, short unsigned int)"
                                       ,0x335,0);
                    cMyTrace::operator()(local_38,"CreatePrivateStore() uid:%d\n",uVar7 & 0xffff);
                    CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
                    cUserHistoryLog::CreatePrivateStore
                              (*(int *)(this + 0x2c) + 0x79700,(uint)param_1,(char *)(uint)param_2);
                    cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
                    if (cVar1 != '\0') {
                      PCK_AUCTION_OPEN_PRIVATE_STORE_GA::PCK_AUCTION_OPEN_PRIVATE_STORE_GA
                                (local_10e);
                      aiStack_104[2] = CUser::get_acc_id(*(CUser **)(this + 0x2c));
                      aiStack_104[3] = CUser::get_charac_count(*(CUser **)(this + 0x2c));
                      for (local_20 = 0; iVar4 = local_20, local_20 < aiStack_104[3];
                          local_20 = local_20 + 1) {
                        iVar8 = CUser::get_charac_no(*(CUser **)(this + 0x2c),local_20);
                        aiStack_104[iVar4 + 4] = iVar8;
                      }
                      CAuctionServerProxy::SendPacket
                                (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_10e);
                    }
                    uVar10 = 1;
                    CPacketBufPrivate::~CPacketBufPrivate(local_64);
                  }
                  else {
                    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x38);
                    uVar10 = 0;
                  }
                }
                else {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
                  uVar10 = 0;
                }
              }
              else {
                CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
                uVar10 = 0;
              }
            }
            else {
              CErrorHandler::Do((CErrorHandler *)(this + 0x14),local_28);
              uVar10 = 0;
            }
          }
          else {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x14);
            uVar10 = 0;
          }
        }
      }
    }
    else {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
      uVar10 = 0;
    }
  }
  return uVar10;
}
```
