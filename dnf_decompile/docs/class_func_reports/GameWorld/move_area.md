# move_area

`_ZN9GameWorld9move_areaEP5CUseriiiiibiii`

`GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c5a84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c5a84  _ZN9GameWorld9move_areaEP5CUseriiiiibiii
#           GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
# range [0x086c5a84, 0x086c679f]
086c5a84 +0x000:  push   %ebp
086c5a85 +0x001:  mov    %esp,%ebp
086c5a87 +0x003:  push   %edi
086c5a88 +0x004:  push   %esi
086c5a89 +0x005:  push   %ebx
086c5a8a +0x006:  sub    $0xbc,%esp
086c5a90 +0x00c:  mov    0x24(%ebp),%eax
086c5a93 +0x00f:  mov    %al,-0x8c(%ebp)
086c5a99 +0x015:  lea    -0x74(%ebp),%eax
086c5a9c +0x018:  mov    %eax,(%esp)
086c5a9f +0x01b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c5aa4 +0x020:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
086c5aa9 +0x025:  mov    %eax,(%esp)
086c5aac +0x028:  call   08234e1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4c6
086c5ab1 +0x02d:  xor    $0x1,%eax
086c5ab4 +0x030:  test   %al,%al
086c5ab6 +0x032:  je     086c5acb <+0x47>
086c5ab8 +0x034:  cmpl   $0xb,0x10(%ebp)
086c5abc +0x038:  jne    086c5acb <+0x47>
086c5abe +0x03a:  cmpl   $0x5,0x14(%ebp)
086c5ac2 +0x03e:  jne    086c5acb <+0x47>
086c5ac4 +0x040:  mov    $0x1,%eax
086c5ac9 +0x045:  jmp    086c5ad0 <+0x4c>
086c5acb +0x047:  mov    $0x0,%eax
086c5ad0 +0x04c:  test   %al,%al
086c5ad2 +0x04e:  je     086c5b65 <+0xe1>
086c5ad8 +0x054:  lea    -0x74(%ebp),%eax
086c5adb +0x057:  mov    %eax,(%esp)
086c5ade +0x05a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c5ae3 +0x05f:  movl   $0x26,0x8(%esp)
086c5aeb +0x067:  movl   $0x1,0x4(%esp)
086c5af3 +0x06f:  lea    -0x74(%ebp),%eax
086c5af6 +0x072:  mov    %eax,(%esp)
086c5af9 +0x075:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5afe +0x07a:  movl   $0x0,0x4(%esp)
086c5b06 +0x082:  lea    -0x74(%ebp),%eax
086c5b09 +0x085:  mov    %eax,(%esp)
086c5b0c +0x088:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5b11 +0x08d:  movl   $0x13,0x4(%esp)
086c5b19 +0x095:  lea    -0x74(%ebp),%eax
086c5b1c +0x098:  mov    %eax,(%esp)
086c5b1f +0x09b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5b24 +0x0a0:  mov    0x10(%ebp),%eax
086c5b27 +0x0a3:  mov    %eax,0x4(%esp)
086c5b2b +0x0a7:  lea    -0x74(%ebp),%eax
086c5b2e +0x0aa:  mov    %eax,(%esp)
086c5b31 +0x0ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5b36 +0x0b2:  movl   $0x1,0x4(%esp)
086c5b3e +0x0ba:  lea    -0x74(%ebp),%eax
086c5b41 +0x0bd:  mov    %eax,(%esp)
086c5b44 +0x0c0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5b49 +0x0c5:  lea    -0x74(%ebp),%eax
086c5b4c +0x0c8:  mov    %eax,0x4(%esp)
086c5b50 +0x0cc:  mov    0xc(%ebp),%eax
086c5b53 +0x0cf:  mov    %eax,(%esp)
086c5b56 +0x0d2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5b5b +0x0d7:  mov    $0x0,%ebx
086c5b60 +0x0dc:  jmp    086c6788 <+0xd04>
086c5b65 +0x0e1:  mov    0xc(%ebp),%eax
086c5b68 +0x0e4:  mov    %eax,(%esp)
086c5b6b +0x0e7:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
086c5b70 +0x0ec:  test   %al,%al
086c5b72 +0x0ee:  je     086c5c05 <+0x181>
086c5b78 +0x0f4:  lea    -0x74(%ebp),%eax
086c5b7b +0x0f7:  mov    %eax,(%esp)
086c5b7e +0x0fa:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c5b83 +0x0ff:  movl   $0x26,0x8(%esp)
086c5b8b +0x107:  movl   $0x1,0x4(%esp)
086c5b93 +0x10f:  lea    -0x74(%ebp),%eax
086c5b96 +0x112:  mov    %eax,(%esp)
086c5b99 +0x115:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5b9e +0x11a:  movl   $0x0,0x4(%esp)
086c5ba6 +0x122:  lea    -0x74(%ebp),%eax
086c5ba9 +0x125:  mov    %eax,(%esp)
086c5bac +0x128:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5bb1 +0x12d:  movl   $0xbf,0x4(%esp)
086c5bb9 +0x135:  lea    -0x74(%ebp),%eax
086c5bbc +0x138:  mov    %eax,(%esp)
086c5bbf +0x13b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5bc4 +0x140:  mov    0x10(%ebp),%eax
086c5bc7 +0x143:  mov    %eax,0x4(%esp)
086c5bcb +0x147:  lea    -0x74(%ebp),%eax
086c5bce +0x14a:  mov    %eax,(%esp)
086c5bd1 +0x14d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5bd6 +0x152:  movl   $0x1,0x4(%esp)
086c5bde +0x15a:  lea    -0x74(%ebp),%eax
086c5be1 +0x15d:  mov    %eax,(%esp)
086c5be4 +0x160:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5be9 +0x165:  lea    -0x74(%ebp),%eax
086c5bec +0x168:  mov    %eax,0x4(%esp)
086c5bf0 +0x16c:  mov    0xc(%ebp),%eax
086c5bf3 +0x16f:  mov    %eax,(%esp)
086c5bf6 +0x172:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5bfb +0x177:  mov    $0x0,%ebx
086c5c00 +0x17c:  jmp    086c6788 <+0xd04>
086c5c05 +0x181:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086c5c0a +0x186:  mov    0xc(%ebp),%edx
086c5c0d +0x189:  mov    %edx,0x4(%esp)
086c5c11 +0x18d:  mov    %eax,(%esp)
086c5c14 +0x190:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
086c5c19 +0x195:  test   %al,%al
086c5c1b +0x197:  je     086c5cae <+0x22a>
086c5c21 +0x19d:  lea    -0x74(%ebp),%eax
086c5c24 +0x1a0:  mov    %eax,(%esp)
086c5c27 +0x1a3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c5c2c +0x1a8:  movl   $0x26,0x8(%esp)
086c5c34 +0x1b0:  movl   $0x1,0x4(%esp)
086c5c3c +0x1b8:  lea    -0x74(%ebp),%eax
086c5c3f +0x1bb:  mov    %eax,(%esp)
086c5c42 +0x1be:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5c47 +0x1c3:  movl   $0x0,0x4(%esp)
086c5c4f +0x1cb:  lea    -0x74(%ebp),%eax
086c5c52 +0x1ce:  mov    %eax,(%esp)
086c5c55 +0x1d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5c5a +0x1d6:  movl   $0x3c,0x4(%esp)
086c5c62 +0x1de:  lea    -0x74(%ebp),%eax
086c5c65 +0x1e1:  mov    %eax,(%esp)
086c5c68 +0x1e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5c6d +0x1e9:  mov    0x10(%ebp),%eax
086c5c70 +0x1ec:  mov    %eax,0x4(%esp)
086c5c74 +0x1f0:  lea    -0x74(%ebp),%eax
086c5c77 +0x1f3:  mov    %eax,(%esp)
086c5c7a +0x1f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5c7f +0x1fb:  movl   $0x1,0x4(%esp)
086c5c87 +0x203:  lea    -0x74(%ebp),%eax
086c5c8a +0x206:  mov    %eax,(%esp)
086c5c8d +0x209:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5c92 +0x20e:  lea    -0x74(%ebp),%eax
086c5c95 +0x211:  mov    %eax,0x4(%esp)
086c5c99 +0x215:  mov    0xc(%ebp),%eax
086c5c9c +0x218:  mov    %eax,(%esp)
086c5c9f +0x21b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5ca4 +0x220:  mov    $0x0,%ebx
086c5ca9 +0x225:  jmp    086c6788 <+0xd04>
086c5cae +0x22a:  mov    0xc(%ebp),%eax
086c5cb1 +0x22d:  mov    %eax,(%esp)
086c5cb4 +0x230:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
086c5cb9 +0x235:  test   %al,%al
086c5cbb +0x237:  je     086c5ce7 <+0x263>
086c5cbd +0x239:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086c5cc2 +0x23e:  mov    %eax,(%esp)
086c5cc5 +0x241:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086c5cca +0x246:  xor    $0x1,%eax
086c5ccd +0x249:  test   %al,%al
086c5ccf +0x24b:  je     086c5ce7 <+0x263>
086c5cd1 +0x24d:  mov    0xc(%ebp),%eax
086c5cd4 +0x250:  mov    %eax,(%esp)
086c5cd7 +0x253:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c5cdc +0x258:  cmp    $0x7,%al
086c5cde +0x25a:  je     086c5ce7 <+0x263>
086c5ce0 +0x25c:  mov    $0x1,%eax
086c5ce5 +0x261:  jmp    086c5cec <+0x268>
086c5ce7 +0x263:  mov    $0x0,%eax
086c5cec +0x268:  test   %al,%al
086c5cee +0x26a:  je     086c5d81 <+0x2fd>
086c5cf4 +0x270:  lea    -0x74(%ebp),%eax
086c5cf7 +0x273:  mov    %eax,(%esp)
086c5cfa +0x276:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c5cff +0x27b:  movl   $0x26,0x8(%esp)
086c5d07 +0x283:  movl   $0x1,0x4(%esp)
086c5d0f +0x28b:  lea    -0x74(%ebp),%eax
086c5d12 +0x28e:  mov    %eax,(%esp)
086c5d15 +0x291:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5d1a +0x296:  movl   $0x0,0x4(%esp)
086c5d22 +0x29e:  lea    -0x74(%ebp),%eax
086c5d25 +0x2a1:  mov    %eax,(%esp)
086c5d28 +0x2a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5d2d +0x2a9:  movl   $0x13,0x4(%esp)
086c5d35 +0x2b1:  lea    -0x74(%ebp),%eax
086c5d38 +0x2b4:  mov    %eax,(%esp)
086c5d3b +0x2b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5d40 +0x2bc:  mov    0x10(%ebp),%eax
086c5d43 +0x2bf:  mov    %eax,0x4(%esp)
086c5d47 +0x2c3:  lea    -0x74(%ebp),%eax
086c5d4a +0x2c6:  mov    %eax,(%esp)
086c5d4d +0x2c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5d52 +0x2ce:  movl   $0x1,0x4(%esp)
086c5d5a +0x2d6:  lea    -0x74(%ebp),%eax
086c5d5d +0x2d9:  mov    %eax,(%esp)
086c5d60 +0x2dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5d65 +0x2e1:  lea    -0x74(%ebp),%eax
086c5d68 +0x2e4:  mov    %eax,0x4(%esp)
086c5d6c +0x2e8:  mov    0xc(%ebp),%eax
086c5d6f +0x2eb:  mov    %eax,(%esp)
086c5d72 +0x2ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5d77 +0x2f3:  mov    $0x0,%ebx
086c5d7c +0x2f8:  jmp    086c6788 <+0xd04>
086c5d81 +0x2fd:  mov    0xc(%ebp),%eax
086c5d84 +0x300:  mov    %eax,(%esp)
086c5d87 +0x303:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
086c5d8c +0x308:  xor    $0x1,%eax
086c5d8f +0x30b:  test   %al,%al
086c5d91 +0x30d:  je     086c5dc9 <+0x345>
086c5d93 +0x30f:  mov    0xc(%ebp),%eax
086c5d96 +0x312:  mov    %eax,(%esp)
086c5d99 +0x315:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
086c5d9e +0x31a:  movsbl %al,%eax
086c5da1 +0x31d:  mov    %eax,0xc(%esp)
086c5da5 +0x321:  mov    0x14(%ebp),%eax
086c5da8 +0x324:  mov    %eax,0x8(%esp)
086c5dac +0x328:  mov    0x10(%ebp),%eax
086c5daf +0x32b:  mov    %eax,0x4(%esp)
086c5db3 +0x32f:  mov    0x8(%ebp),%eax
086c5db6 +0x332:  mov    %eax,(%esp)
086c5db9 +0x335:  call   086c592c <_ZN9GameWorld18IsPowerWarSafeZoneEii20ENUM_POWER_SIDE_TYPE>  ; GameWorld::IsPowerWarSafeZone(int, int, ENUM_POWER_SIDE_TYPE)
086c5dbe +0x33a:  test   %al,%al
086c5dc0 +0x33c:  je     086c5dc9 <+0x345>
086c5dc2 +0x33e:  mov    $0x1,%eax
086c5dc7 +0x343:  jmp    086c5dce <+0x34a>
086c5dc9 +0x345:  mov    $0x0,%eax
086c5dce +0x34a:  test   %al,%al
086c5dd0 +0x34c:  je     086c5e63 <+0x3df>
086c5dd6 +0x352:  lea    -0x74(%ebp),%eax
086c5dd9 +0x355:  mov    %eax,(%esp)
086c5ddc +0x358:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c5de1 +0x35d:  movl   $0x26,0x8(%esp)
086c5de9 +0x365:  movl   $0x1,0x4(%esp)
086c5df1 +0x36d:  lea    -0x74(%ebp),%eax
086c5df4 +0x370:  mov    %eax,(%esp)
086c5df7 +0x373:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5dfc +0x378:  movl   $0x0,0x4(%esp)
086c5e04 +0x380:  lea    -0x74(%ebp),%eax
086c5e07 +0x383:  mov    %eax,(%esp)
086c5e0a +0x386:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5e0f +0x38b:  movl   $0x4,0x4(%esp)
086c5e17 +0x393:  lea    -0x74(%ebp),%eax
086c5e1a +0x396:  mov    %eax,(%esp)
086c5e1d +0x399:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5e22 +0x39e:  mov    0x10(%ebp),%eax
086c5e25 +0x3a1:  mov    %eax,0x4(%esp)
086c5e29 +0x3a5:  lea    -0x74(%ebp),%eax
086c5e2c +0x3a8:  mov    %eax,(%esp)
086c5e2f +0x3ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5e34 +0x3b0:  movl   $0x1,0x4(%esp)
086c5e3c +0x3b8:  lea    -0x74(%ebp),%eax
086c5e3f +0x3bb:  mov    %eax,(%esp)
086c5e42 +0x3be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5e47 +0x3c3:  lea    -0x74(%ebp),%eax
086c5e4a +0x3c6:  mov    %eax,0x4(%esp)
086c5e4e +0x3ca:  mov    0xc(%ebp),%eax
086c5e51 +0x3cd:  mov    %eax,(%esp)
086c5e54 +0x3d0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5e59 +0x3d5:  mov    $0x0,%ebx
086c5e5e +0x3da:  jmp    086c6788 <+0xd04>
086c5e63 +0x3df:  mov    0xc(%ebp),%eax
086c5e66 +0x3e2:  mov    %eax,(%esp)
086c5e69 +0x3e5:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c5e6e +0x3ea:  movsbl %al,%eax
086c5e71 +0x3ed:  mov    %eax,-0x58(%ebp)
086c5e74 +0x3f0:  movl   $0x0,0x4(%esp)
086c5e7c +0x3f8:  mov    0xc(%ebp),%eax
086c5e7f +0x3fb:  mov    %eax,(%esp)
086c5e82 +0x3fe:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c5e87 +0x403:  mov    %eax,-0x54(%ebp)
086c5e8a +0x406:  movb   $0x0,-0x4d(%ebp)
086c5e8e +0x40a:  mov    0xc(%ebp),%eax
086c5e91 +0x40d:  mov    %eax,(%esp)
086c5e94 +0x410:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086c5e99 +0x415:  mov    %eax,-0x4c(%ebp)
086c5e9c +0x418:  cmpl   $0x0,-0x4c(%ebp)
086c5ea0 +0x41c:  je     086c5ec2 <+0x43e>
086c5ea2 +0x41e:  mov    -0x4c(%ebp),%eax
086c5ea5 +0x421:  mov    %eax,(%esp)
086c5ea8 +0x424:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
086c5ead +0x429:  mov    %eax,(%esp)
086c5eb0 +0x42c:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
086c5eb5 +0x431:  cmp    $0x1,%al
086c5eb7 +0x433:  sete   %al
086c5eba +0x436:  test   %al,%al
086c5ebc +0x438:  je     086c5ec2 <+0x43e>
086c5ebe +0x43a:  movb   $0x1,-0x4d(%ebp)
086c5ec2 +0x43e:  cmpl   $0x2,0x28(%ebp)
086c5ec6 +0x442:  jne    086c5ecc <+0x448>
086c5ec8 +0x444:  movb   $0x1,-0x4d(%ebp)
086c5ecc +0x448:  movzbl -0x4d(%ebp),%eax
086c5ed0 +0x44c:  xor    $0x1,%eax
086c5ed3 +0x44f:  test   %al,%al
086c5ed5 +0x451:  je     086c5ef1 <+0x46d>
086c5ed7 +0x453:  mov    0x10(%ebp),%eax
086c5eda +0x456:  cmp    -0x58(%ebp),%eax
086c5edd +0x459:  jne    086c5ef1 <+0x46d>
086c5edf +0x45b:  mov    0x14(%ebp),%eax
086c5ee2 +0x45e:  cmp    -0x54(%ebp),%eax
086c5ee5 +0x461:  jne    086c5ef1 <+0x46d>
086c5ee7 +0x463:  mov    $0x0,%ebx
086c5eec +0x468:  jmp    086c6788 <+0xd04>
086c5ef1 +0x46d:  lea    -0x80(%ebp),%eax
086c5ef4 +0x470:  mov    %eax,(%esp)
086c5ef7 +0x473:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c5efc +0x478:  mov    0x14(%ebp),%eax
086c5eff +0x47b:  mov    %eax,0x8(%esp)
086c5f03 +0x47f:  mov    0x10(%ebp),%eax
086c5f06 +0x482:  mov    %eax,0x4(%esp)
086c5f0a +0x486:  mov    0x8(%ebp),%eax
086c5f0d +0x489:  mov    %eax,(%esp)
086c5f10 +0x48c:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c5f15 +0x491:  xor    $0x1,%eax
086c5f18 +0x494:  test   %al,%al
086c5f1a +0x496:  jne    086c5f3c <+0x4b8>
086c5f1c +0x498:  mov    -0x54(%ebp),%eax
086c5f1f +0x49b:  mov    %eax,0x8(%esp)
086c5f23 +0x49f:  mov    -0x58(%ebp),%eax
086c5f26 +0x4a2:  mov    %eax,0x4(%esp)
086c5f2a +0x4a6:  mov    0x8(%ebp),%eax
086c5f2d +0x4a9:  mov    %eax,(%esp)
086c5f30 +0x4ac:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c5f35 +0x4b1:  xor    $0x1,%eax
086c5f38 +0x4b4:  test   %al,%al
086c5f3a +0x4b6:  je     086c5f43 <+0x4bf>
086c5f3c +0x4b8:  mov    $0x1,%eax
086c5f41 +0x4bd:  jmp    086c5f48 <+0x4c4>
086c5f43 +0x4bf:  mov    $0x0,%eax
086c5f48 +0x4c4:  test   %al,%al
086c5f4a +0x4c6:  je     086c5fd3 <+0x54f>
086c5f50 +0x4cc:  movl   $0x26,0x8(%esp)
086c5f58 +0x4d4:  movl   $0x1,0x4(%esp)
086c5f60 +0x4dc:  lea    -0x80(%ebp),%eax
086c5f63 +0x4df:  mov    %eax,(%esp)
086c5f66 +0x4e2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5f6b +0x4e7:  movl   $0x0,0x4(%esp)
086c5f73 +0x4ef:  lea    -0x80(%ebp),%eax
086c5f76 +0x4f2:  mov    %eax,(%esp)
086c5f79 +0x4f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5f7e +0x4fa:  movl   $0x15,0x4(%esp)
086c5f86 +0x502:  lea    -0x80(%ebp),%eax
086c5f89 +0x505:  mov    %eax,(%esp)
086c5f8c +0x508:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5f91 +0x50d:  movl   $0x0,0x4(%esp)
086c5f99 +0x515:  lea    -0x80(%ebp),%eax
086c5f9c +0x518:  mov    %eax,(%esp)
086c5f9f +0x51b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c5fa4 +0x520:  movl   $0x1,0x4(%esp)
086c5fac +0x528:  lea    -0x80(%ebp),%eax
086c5faf +0x52b:  mov    %eax,(%esp)
086c5fb2 +0x52e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c5fb7 +0x533:  lea    -0x80(%ebp),%eax
086c5fba +0x536:  mov    %eax,0x4(%esp)
086c5fbe +0x53a:  mov    0xc(%ebp),%eax
086c5fc1 +0x53d:  mov    %eax,(%esp)
086c5fc4 +0x540:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c5fc9 +0x545:  mov    $0x0,%ebx
086c5fce +0x54a:  jmp    086c6760 <+0xcdc>
086c5fd3 +0x54f:  movl   $0x0,-0x48(%ebp)
086c5fda +0x556:  cmpl   $0x0,0x10(%ebp)
086c5fde +0x55a:  js     086c60ba <+0x636>
086c5fe4 +0x560:  mov    &MAX_VILLAGE_NUM,%eax
086c5fe9 +0x565:  cmp    %eax,0x10(%ebp)
086c5fec +0x568:  jge    086c60ba <+0x636>
086c5ff2 +0x56e:  mov    0x8(%ebp),%eax
086c5ff5 +0x571:  mov    0x1c(%eax),%edx
086c5ff8 +0x574:  mov    0x10(%ebp),%eax
086c5ffb +0x577:  imul   $0x34,%eax,%eax
086c5ffe +0x57a:  lea    (%edx,%eax,1),%eax
086c6001 +0x57d:  mov    %eax,-0x48(%ebp)
086c6004 +0x580:  cmpl   $0x0,-0x48(%ebp)
086c6008 +0x584:  je     086c60ba <+0x636>
086c600e +0x58a:  movl   $0x0,-0x38(%ebp)
086c6015 +0x591:  mov    0x10(%ebp),%eax
086c6018 +0x594:  mov    %eax,0x4(%esp)
086c601c +0x598:  mov    0xc(%ebp),%eax
086c601f +0x59b:  mov    %eax,(%esp)
086c6022 +0x59e:  call   08678526 <_ZN5CUser13CheckMoveTownEi>  ; CUser::CheckMoveTown(int)
086c6027 +0x5a3:  mov    %eax,-0x38(%ebp)
086c602a +0x5a6:  cmpl   $0x0,-0x38(%ebp)
086c602e +0x5aa:  setne  %al
086c6031 +0x5ad:  test   %al,%al
086c6033 +0x5af:  je     086c60ba <+0x636>
086c6039 +0x5b5:  movl   $0x26,0x8(%esp)
086c6041 +0x5bd:  movl   $0x1,0x4(%esp)
086c6049 +0x5c5:  lea    -0x80(%ebp),%eax
086c604c +0x5c8:  mov    %eax,(%esp)
086c604f +0x5cb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c6054 +0x5d0:  movl   $0x0,0x4(%esp)
086c605c +0x5d8:  lea    -0x80(%ebp),%eax
086c605f +0x5db:  mov    %eax,(%esp)
086c6062 +0x5de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6067 +0x5e3:  mov    -0x38(%ebp),%eax
086c606a +0x5e6:  mov    %eax,0x4(%esp)
086c606e +0x5ea:  lea    -0x80(%ebp),%eax
086c6071 +0x5ed:  mov    %eax,(%esp)
086c6074 +0x5f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6079 +0x5f5:  mov    0x10(%ebp),%eax
086c607c +0x5f8:  mov    %eax,0x4(%esp)
086c6080 +0x5fc:  lea    -0x80(%ebp),%eax
086c6083 +0x5ff:  mov    %eax,(%esp)
086c6086 +0x602:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c608b +0x607:  movl   $0x1,0x4(%esp)
086c6093 +0x60f:  lea    -0x80(%ebp),%eax
086c6096 +0x612:  mov    %eax,(%esp)
086c6099 +0x615:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c609e +0x61a:  lea    -0x80(%ebp),%eax
086c60a1 +0x61d:  mov    %eax,0x4(%esp)
086c60a5 +0x621:  mov    0xc(%ebp),%eax
086c60a8 +0x624:  mov    %eax,(%esp)
086c60ab +0x627:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c60b0 +0x62c:  mov    $0x0,%ebx
086c60b5 +0x631:  jmp    086c6760 <+0xcdc>
086c60ba +0x636:  movl   $0x0,-0x44(%ebp)
086c60c1 +0x63d:  cmpl   $0x0,-0x58(%ebp)
086c60c5 +0x641:  js     086c60e3 <+0x65f>
086c60c7 +0x643:  mov    &MAX_VILLAGE_NUM,%eax
086c60cc +0x648:  cmp    %eax,-0x58(%ebp)
086c60cf +0x64b:  jge    086c60e3 <+0x65f>
086c60d1 +0x64d:  mov    0x8(%ebp),%eax
086c60d4 +0x650:  mov    0x1c(%eax),%edx
086c60d7 +0x653:  mov    -0x58(%ebp),%eax
086c60da +0x656:  imul   $0x34,%eax,%eax
086c60dd +0x659:  lea    (%edx,%eax,1),%eax
086c60e0 +0x65c:  mov    %eax,-0x44(%ebp)
086c60e3 +0x65f:  mov    0xc(%ebp),%eax
086c60e6 +0x662:  mov    %eax,(%esp)
086c60e9 +0x665:  call   086961e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a35
086c60ee +0x66a:  movsbl %al,%eax
086c60f1 +0x66d:  mov    %eax,-0x40(%ebp)
086c60f4 +0x670:  mov    0xc(%ebp),%eax
086c60f7 +0x673:  mov    %eax,(%esp)
086c60fa +0x676:  call   086d20fa <_GLOBAL__I_MAX_VILLAGE_NUM+0x92b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x92b
086c60ff +0x67b:  mov    %eax,-0x3c(%ebp)
086c6102 +0x67e:  mov    0x20(%ebp),%eax
086c6105 +0x681:  movsbl %al,%ecx
086c6108 +0x684:  mov    0x1c(%ebp),%eax
086c610b +0x687:  movzwl %ax,%edx
086c610e +0x68a:  mov    0x18(%ebp),%eax
086c6111 +0x68d:  movzwl %ax,%eax
086c6114 +0x690:  mov    %ecx,0xc(%esp)
086c6118 +0x694:  mov    %edx,0x8(%esp)
086c611c +0x698:  mov    %eax,0x4(%esp)
086c6120 +0x69c:  mov    0xc(%ebp),%eax
086c6123 +0x69f:  mov    %eax,(%esp)
086c6126 +0x6a2:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
086c612b +0x6a7:  mov    0x10(%ebp),%eax
086c612e +0x6aa:  movsbl %al,%edx
086c6131 +0x6ad:  mov    0xc(%ebp),%eax
086c6134 +0x6b0:  mov    %edx,0x4(%esp)
086c6138 +0x6b4:  mov    %eax,(%esp)
086c613b +0x6b7:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
086c6140 +0x6bc:  mov    0x14(%ebp),%eax
086c6143 +0x6bf:  mov    %eax,0x4(%esp)
086c6147 +0x6c3:  mov    0xc(%ebp),%eax
086c614a +0x6c6:  mov    %eax,(%esp)
086c614d +0x6c9:  call   08647864 <_ZN5CUser8set_areaEi>  ; CUser::set_area(int)
086c6152 +0x6ce:  cmpl   $0x0,-0x44(%ebp)
086c6156 +0x6d2:  je     086c64a2 <+0xa1e>
086c615c +0x6d8:  mov    -0x54(%ebp),%eax
086c615f +0x6db:  mov    %eax,0x4(%esp)
086c6163 +0x6df:  mov    -0x44(%ebp),%eax
086c6166 +0x6e2:  mov    %eax,(%esp)
086c6169 +0x6e5:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c616e +0x6ea:  mov    %eax,-0x34(%ebp)
086c6171 +0x6ed:  cmpb   $0x0,-0x8c(%ebp)
086c6178 +0x6f4:  je     086c6193 <+0x70f>
086c617a +0x6f6:  mov    0x8(%ebp),%eax
086c617d +0x6f9:  mov    %eax,(%esp)
086c6180 +0x6fc:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
086c6185 +0x701:  xor    $0x1,%eax
086c6188 +0x704:  test   %al,%al
086c618a +0x706:  je     086c6193 <+0x70f>
086c618c +0x708:  mov    $0x1,%eax
086c6191 +0x70d:  jmp    086c6198 <+0x714>
086c6193 +0x70f:  mov    $0x0,%eax
086c6198 +0x714:  test   %al,%al
086c619a +0x716:  je     086c6490 <+0xa0c>
086c61a0 +0x71c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086c61a7 +0x723:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086c61ac +0x728:  mov    %eax,-0x30(%ebp)
086c61af +0x72b:  mov    0xc(%ebp),%eax
086c61b2 +0x72e:  mov    %eax,(%esp)
086c61b5 +0x731:  call   0868ba38 <_ZNK5CUser17getBeforeAreaTimeEv>  ; CUser::getBeforeAreaTime() const
086c61ba +0x736:  test   %eax,%eax
086c61bc +0x738:  setne  %al
086c61bf +0x73b:  test   %al,%al
086c61c1 +0x73d:  je     086c6297 <+0x813>
086c61c7 +0x743:  mov    0xc(%ebp),%eax
086c61ca +0x746:  mov    %eax,(%esp)
086c61cd +0x749:  call   0868ba38 <_ZNK5CUser17getBeforeAreaTimeEv>  ; CUser::getBeforeAreaTime() const
086c61d2 +0x74e:  mov    -0x30(%ebp),%edx
086c61d5 +0x751:  mov    %edx,%ecx
086c61d7 +0x753:  sub    %eax,%ecx
086c61d9 +0x755:  mov    %ecx,%eax
086c61db +0x757:  mov    %eax,-0x2c(%ebp)
086c61de +0x75a:  cmpl   $0x2,-0x2c(%ebp)
086c61e2 +0x75e:  jg     086c6254 <+0x7d0>
086c61e4 +0x760:  mov    0x14(%ebp),%eax
086c61e7 +0x763:  mov    %eax,0xc(%esp)
086c61eb +0x767:  mov    0x10(%ebp),%eax
086c61ee +0x76a:  mov    %eax,0x8(%esp)
086c61f2 +0x76e:  mov    -0x54(%ebp),%eax
086c61f5 +0x771:  mov    %eax,0x4(%esp)
086c61f9 +0x775:  mov    -0x58(%ebp),%eax
086c61fc +0x778:  mov    %eax,(%esp)
086c61ff +0x77b:  call   08285e2e <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii>  ; CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int)
086c6204 +0x780:  test   %al,%al
086c6206 +0x782:  je     086c6254 <+0x7d0>
086c6208 +0x784:  mov    0x14(%ebp),%eax
086c620b +0x787:  mov    %eax,0x14(%esp)
086c620f +0x78b:  mov    0x10(%ebp),%eax
086c6212 +0x78e:  mov    %eax,0x10(%esp)
086c6216 +0x792:  mov    -0x54(%ebp),%eax
086c6219 +0x795:  mov    %eax,0xc(%esp)
086c621d +0x799:  mov    -0x58(%ebp),%eax
086c6220 +0x79c:  mov    %eax,0x8(%esp)
086c6224 +0x7a0:  mov    -0x3c(%ebp),%eax
086c6227 +0x7a3:  mov    %eax,0x4(%esp)
086c622b +0x7a7:  mov    -0x40(%ebp),%eax
086c622e +0x7aa:  mov    %eax,(%esp)
086c6231 +0x7ad:  call   08285efe <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii>  ; CHackLog_InvalidAreaMove::isMovableRoute(int, int, int, int, int, int)
086c6236 +0x7b2:  xor    $0x1,%eax
086c6239 +0x7b5:  test   %al,%al
086c623b +0x7b7:  je     086c6254 <+0x7d0>
086c623d +0x7b9:  mov    -0x40(%ebp),%eax
086c6240 +0x7bc:  cmp    0x10(%ebp),%eax
086c6243 +0x7bf:  je     086c6254 <+0x7d0>
086c6245 +0x7c1:  mov    -0x3c(%ebp),%eax
086c6248 +0x7c4:  cmp    0x14(%ebp),%eax
086c624b +0x7c7:  je     086c6254 <+0x7d0>
086c624d +0x7c9:  mov    $0x1,%eax
086c6252 +0x7ce:  jmp    086c6259 <+0x7d5>
086c6254 +0x7d0:  mov    $0x0,%eax
086c6259 +0x7d5:  test   %al,%al
086c625b +0x7d7:  je     086c6297 <+0x813>
086c625d +0x7d9:  mov    0xc(%ebp),%eax
086c6260 +0x7dc:  mov    %eax,(%esp)
086c6263 +0x7df:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086c6268 +0x7e4:  movl   $0x0,0x14(%esp)
086c6270 +0x7ec:  movl   $0x0,0x10(%esp)
086c6278 +0x7f4:  movl   $0x1,0xc(%esp)
086c6280 +0x7fc:  movl   $0x1fc,0x8(%esp)
086c6288 +0x804:  mov    0xc(%ebp),%edx
086c628b +0x807:  mov    %edx,0x4(%esp)
086c628f +0x80b:  mov    %eax,(%esp)
086c6292 +0x80e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
086c6297 +0x813:  mov    -0x30(%ebp),%eax
086c629a +0x816:  mov    %eax,0x4(%esp)
086c629e +0x81a:  mov    0xc(%ebp),%eax
086c62a1 +0x81d:  mov    %eax,(%esp)
086c62a4 +0x820:  call   0868ba46 <_ZN5CUser17setBeforeAreaTimeEl>  ; CUser::setBeforeAreaTime(long)
086c62a9 +0x825:  cmpl   $0x0,0x28(%ebp)
086c62ad +0x829:  jne    086c630a <+0x886>
086c62af +0x82b:  mov    0x14(%ebp),%eax
086c62b2 +0x82e:  mov    %eax,0x8(%esp)
086c62b6 +0x832:  mov    0x10(%ebp),%eax
086c62b9 +0x835:  mov    %eax,0x4(%esp)
086c62bd +0x839:  mov    -0x34(%ebp),%eax
086c62c0 +0x83c:  mov    %eax,(%esp)
086c62c3 +0x83f:  call   086c3162 <_ZNK4Area13IsMovalbeAreaEii>  ; Area::IsMovalbeArea(int, int) const
086c62c8 +0x844:  xor    $0x1,%eax
086c62cb +0x847:  test   %al,%al
086c62cd +0x849:  je     086c630a <+0x886>
086c62cf +0x84b:  mov    0x14(%ebp),%eax
086c62d2 +0x84e:  mov    %eax,0xc(%esp)
086c62d6 +0x852:  mov    0x10(%ebp),%eax
086c62d9 +0x855:  mov    %eax,0x8(%esp)
086c62dd +0x859:  mov    -0x54(%ebp),%eax
086c62e0 +0x85c:  mov    %eax,0x4(%esp)
086c62e4 +0x860:  mov    -0x58(%ebp),%eax
086c62e7 +0x863:  mov    %eax,(%esp)
086c62ea +0x866:  call   08285e2e <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii>  ; CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int)
086c62ef +0x86b:  test   %al,%al
086c62f1 +0x86d:  je     086c630a <+0x886>
086c62f3 +0x86f:  mov    -0x58(%ebp),%eax
086c62f6 +0x872:  cmp    0x2c(%ebp),%eax
086c62f9 +0x875:  jne    086c630a <+0x886>
086c62fb +0x877:  mov    -0x54(%ebp),%eax
086c62fe +0x87a:  cmp    0x30(%ebp),%eax
086c6301 +0x87d:  jne    086c630a <+0x886>
086c6303 +0x87f:  mov    $0x1,%eax
086c6308 +0x884:  jmp    086c630f <+0x88b>
086c630a +0x886:  mov    $0x0,%eax
086c630f +0x88b:  test   %al,%al
086c6311 +0x88d:  je     086c6490 <+0xa0c>
086c6317 +0x893:  mov    0xc(%ebp),%eax
086c631a +0x896:  mov    %eax,(%esp)
086c631d +0x899:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c6322 +0x89e:  movl   $0x0,0x4(%esp)
086c632a +0x8a6:  mov    %eax,(%esp)
086c632d +0x8a9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086c6332 +0x8ae:  mov    0x14(%ebp),%edx
086c6335 +0x8b1:  mov    %edx,0x24(%esp)
086c6339 +0x8b5:  mov    0x10(%ebp),%edx
086c633c +0x8b8:  mov    %edx,0x20(%esp)
086c6340 +0x8bc:  mov    -0x54(%ebp),%edx
086c6343 +0x8bf:  mov    %edx,0x1c(%esp)
086c6347 +0x8c3:  mov    -0x58(%ebp),%edx
086c634a +0x8c6:  mov    %edx,0x18(%esp)
086c634e +0x8ca:  mov    %eax,0x14(%esp)
086c6352 +0x8ce:  movl   $"move area error. User:%s (%d,%d)->(%d,%d)",0x10(%esp)
086c635a +0x8d6:  movl   $0x832,0xc(%esp)
086c6362 +0x8de:  movl   $&_ZZN9GameWorld9move_areaEP5CUseriiiiibiiiE19__PRETTY_FUNCTION__,0x8(%esp)
086c636a +0x8e6:  movl   $"world.cpp",0x4(%esp)
086c6372 +0x8ee:  movl   $0x1,(%esp)
086c6379 +0x8f5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c637e +0x8fa:  movl   $0x0,-0x85(%ebp)
086c6388 +0x904:  movb   $0x0,-0x81(%ebp)
086c638f +0x90b:  movl   $0x0,-0x28(%ebp)
086c6396 +0x912:  movl   $0x0,-0x24(%ebp)
086c639d +0x919:  cmpl   $0x0,0x2c(%ebp)
086c63a1 +0x91d:  js     086c63ea <+0x966>
086c63a3 +0x91f:  cmpl   $0xa,0x2c(%ebp)
086c63a7 +0x923:  jg     086c63ea <+0x966>
086c63a9 +0x925:  cmpl   $0x0,0x30(%ebp)
086c63ad +0x929:  js     086c63ea <+0x966>
086c63af +0x92b:  cmpl   $0xa,0x30(%ebp)
086c63b3 +0x92f:  jg     086c63ea <+0x966>
086c63b5 +0x931:  mov    0x30(%ebp),%eax
086c63b8 +0x934:  mov    %eax,0xc(%esp)
086c63bc +0x938:  mov    0x2c(%ebp),%eax
086c63bf +0x93b:  mov    %eax,0x8(%esp)
086c63c3 +0x93f:  movl   $"%d%d",0x4(%esp)
086c63cb +0x947:  lea    -0x85(%ebp),%eax
086c63d1 +0x94d:  mov    %eax,(%esp)
086c63d4 +0x950:  call   0807e440 <_init+0xd38>
086c63d9 +0x955:  lea    -0x85(%ebp),%eax
086c63df +0x95b:  mov    %eax,(%esp)
086c63e2 +0x95e:  call   0807e6f0 <_init+0xfe8>
086c63e7 +0x963:  mov    %eax,-0x28(%ebp)
086c63ea +0x966:  movl   $0x5,0x8(%esp)
086c63f2 +0x96e:  movl   $0x0,0x4(%esp)
086c63fa +0x976:  lea    -0x85(%ebp),%eax
086c6400 +0x97c:  mov    %eax,(%esp)
086c6403 +0x97f:  call   0807dcc0 <_init+0x5b8>
086c6408 +0x984:  cmpl   $0x0,0x10(%ebp)
086c640c +0x988:  js     086c6455 <+0x9d1>
086c640e +0x98a:  cmpl   $0xa,0x10(%ebp)
086c6412 +0x98e:  jg     086c6455 <+0x9d1>
086c6414 +0x990:  cmpl   $0x0,0x14(%ebp)
086c6418 +0x994:  js     086c6455 <+0x9d1>
086c641a +0x996:  cmpl   $0xa,0x14(%ebp)
086c641e +0x99a:  jg     086c6455 <+0x9d1>
086c6420 +0x99c:  mov    0x14(%ebp),%eax
086c6423 +0x99f:  mov    %eax,0xc(%esp)
086c6427 +0x9a3:  mov    0x10(%ebp),%eax
086c642a +0x9a6:  mov    %eax,0x8(%esp)
086c642e +0x9aa:  movl   $"%d%d",0x4(%esp)
086c6436 +0x9b2:  lea    -0x85(%ebp),%eax
086c643c +0x9b8:  mov    %eax,(%esp)
086c643f +0x9bb:  call   0807e440 <_init+0xd38>
086c6444 +0x9c0:  lea    -0x85(%ebp),%eax
086c644a +0x9c6:  mov    %eax,(%esp)
086c644d +0x9c9:  call   0807e6f0 <_init+0xfe8>
086c6452 +0x9ce:  mov    %eax,-0x24(%ebp)
086c6455 +0x9d1:  mov    -0x24(%ebp),%edi
086c6458 +0x9d4:  mov    -0x28(%ebp),%esi
086c645b +0x9d7:  call   086d272c <_GLOBAL__I_MAX_VILLAGE_NUM+0xf5d>  ; global constructors keyed to MAX_VILLAGE_NUM+0xf5d
086c6460 +0x9dc:  mov    %eax,%ebx
086c6462 +0x9de:  mov    0xc(%ebp),%eax
086c6465 +0x9e1:  mov    %eax,(%esp)
086c6468 +0x9e4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086c646d +0x9e9:  mov    %edi,0x14(%esp)
086c6471 +0x9ed:  mov    %esi,0x10(%esp)
086c6475 +0x9f1:  movl   $0x1,0xc(%esp)
086c647d +0x9f9:  mov    %ebx,0x8(%esp)
086c6481 +0x9fd:  mov    0xc(%ebp),%edx
086c6484 +0xa00:  mov    %edx,0x4(%esp)
086c6488 +0xa04:  mov    %eax,(%esp)
086c648b +0xa07:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
086c6490 +0xa0c:  mov    0xc(%ebp),%eax
086c6493 +0xa0f:  mov    %eax,0x4(%esp)
086c6497 +0xa13:  mov    -0x34(%ebp),%eax
086c649a +0xa16:  mov    %eax,(%esp)
086c649d +0xa19:  call   086c2a38 <_ZN4Area11delete_userEP5CUser>  ; Area::delete_user(CUser*)
086c64a2 +0xa1e:  cmpl   $0x0,-0x48(%ebp)
086c64a6 +0xa22:  je     086c6710 <+0xc8c>
086c64ac +0xa28:  mov    0x14(%ebp),%eax
086c64af +0xa2b:  mov    %eax,-0x20(%ebp)
086c64b2 +0xa2e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c64b7 +0xa33:  mov    %eax,(%esp)
086c64ba +0xa36:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
086c64bf +0xa3b:  test   %al,%al
086c64c1 +0xa3d:  je     086c64d6 <+0xa52>
086c64c3 +0xa3f:  cmpl   $0x2,0x10(%ebp)
086c64c7 +0xa43:  jne    086c64d6 <+0xa52>
086c64c9 +0xa45:  cmpl   $0x4,0x14(%ebp)
086c64cd +0xa49:  jne    086c64d6 <+0xa52>
086c64cf +0xa4b:  mov    $0x1,%eax
086c64d4 +0xa50:  jmp    086c64db <+0xa57>
086c64d6 +0xa52:  mov    $0x0,%eax
086c64db +0xa57:  test   %al,%al
086c64dd +0xa59:  je     086c654a <+0xac6>
086c64df +0xa5b:  mov    0xc(%ebp),%eax
086c64e2 +0xa5e:  mov    %eax,(%esp)
086c64e5 +0xa61:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
086c64ea +0xa66:  mov    %eax,0x4(%esp)
086c64ee +0xa6a:  movl   $&g_schoolMgr,(%esp)
086c64f5 +0xa71:  call   086d2480 <_GLOBAL__I_MAX_VILLAGE_NUM+0xcb1>  ; global constructors keyed to MAX_VILLAGE_NUM+0xcb1
086c64fa +0xa76:  mov    %eax,-0x20(%ebp)
086c64fd +0xa79:  cmpl   $0x0,-0x20(%ebp)
086c6501 +0xa7d:  js     086c652c <+0xaa8>
086c6503 +0xa7f:  mov    -0x20(%ebp),%eax
086c6506 +0xa82:  mov    %eax,0x4(%esp)
086c650a +0xa86:  mov    0xc(%ebp),%eax
086c650d +0xa89:  mov    %eax,(%esp)
086c6510 +0xa8c:  call   08647864 <_ZN5CUser8set_areaEi>  ; CUser::set_area(int)
086c6515 +0xa91:  mov    0x14(%ebp),%eax
086c6518 +0xa94:  mov    %eax,0x4(%esp)
086c651c +0xa98:  mov    0xc(%ebp),%eax
086c651f +0xa9b:  mov    %eax,(%esp)
086c6522 +0xa9e:  call   086d20e8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x919>  ; global constructors keyed to MAX_VILLAGE_NUM+0x919
086c6527 +0xaa3:  jmp    086c66e9 <+0xc65>
086c652c +0xaa8:  mov    0x14(%ebp),%eax
086c652f +0xaab:  mov    %eax,-0x20(%ebp)
086c6532 +0xaae:  movl   $0xffffffff,0x4(%esp)
086c653a +0xab6:  mov    0xc(%ebp),%eax
086c653d +0xab9:  mov    %eax,(%esp)
086c6540 +0xabc:  call   086d20e8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x919>  ; global constructors keyed to MAX_VILLAGE_NUM+0x919
086c6545 +0xac1:  jmp    086c66e9 <+0xc65>
086c654a +0xac6:  cmpl   $0x8,0x10(%ebp)
086c654e +0xaca:  jne    086c66d6 <+0xc52>
086c6554 +0xad0:  cmpl   $0x0,0x14(%ebp)
086c6558 +0xad4:  je     086c6570 <+0xaec>
086c655a +0xad6:  cmpl   $0x1,0x14(%ebp)
086c655e +0xada:  je     086c6570 <+0xaec>
086c6560 +0xadc:  cmpl   $0x2,0x14(%ebp)
086c6564 +0xae0:  je     086c6570 <+0xaec>
086c6566 +0xae2:  cmpl   $0x3,0x14(%ebp)
086c656a +0xae6:  jne    086c66d6 <+0xc52>
086c6570 +0xaec:  cmpl   $0x0,0x14(%ebp)
086c6574 +0xaf0:  jne    086c65a1 <+0xb1d>
086c6576 +0xaf2:  mov    0xc(%ebp),%eax
086c6579 +0xaf5:  mov    %eax,(%esp)
086c657c +0xaf8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c6581 +0xafd:  movl   $0x0,0x8(%esp)
086c6589 +0xb05:  mov    %eax,0x4(%esp)
086c658d +0xb09:  movl   $&g_guildAgitMgr,(%esp)
086c6594 +0xb10:  call   086d2666 <_GLOBAL__I_MAX_VILLAGE_NUM+0xe97>  ; global constructors keyed to MAX_VILLAGE_NUM+0xe97
086c6599 +0xb15:  mov    %eax,-0x20(%ebp)
086c659c +0xb18:  jmp    086c6629 <+0xba5>
086c65a1 +0xb1d:  cmpl   $0x1,0x14(%ebp)
086c65a5 +0xb21:  jne    086c65cf <+0xb4b>
086c65a7 +0xb23:  mov    0xc(%ebp),%eax
086c65aa +0xb26:  mov    %eax,(%esp)
086c65ad +0xb29:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c65b2 +0xb2e:  movl   $0x1,0x8(%esp)
086c65ba +0xb36:  mov    %eax,0x4(%esp)
086c65be +0xb3a:  movl   $&g_guildAgitMgr,(%esp)
086c65c5 +0xb41:  call   086d2666 <_GLOBAL__I_MAX_VILLAGE_NUM+0xe97>  ; global constructors keyed to MAX_VILLAGE_NUM+0xe97
086c65ca +0xb46:  mov    %eax,-0x20(%ebp)
086c65cd +0xb49:  jmp    086c6629 <+0xba5>
086c65cf +0xb4b:  cmpl   $0x2,0x14(%ebp)
086c65d3 +0xb4f:  jne    086c65fd <+0xb79>
086c65d5 +0xb51:  mov    0xc(%ebp),%eax
086c65d8 +0xb54:  mov    %eax,(%esp)
086c65db +0xb57:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c65e0 +0xb5c:  movl   $0x2,0x8(%esp)
086c65e8 +0xb64:  mov    %eax,0x4(%esp)
086c65ec +0xb68:  movl   $&g_guildAgitMgr,(%esp)
086c65f3 +0xb6f:  call   086d2666 <_GLOBAL__I_MAX_VILLAGE_NUM+0xe97>  ; global constructors keyed to MAX_VILLAGE_NUM+0xe97
086c65f8 +0xb74:  mov    %eax,-0x20(%ebp)
086c65fb +0xb77:  jmp    086c6629 <+0xba5>
086c65fd +0xb79:  cmpl   $0x3,0x14(%ebp)
086c6601 +0xb7d:  jne    086c6629 <+0xba5>
086c6603 +0xb7f:  mov    0xc(%ebp),%eax
086c6606 +0xb82:  mov    %eax,(%esp)
086c6609 +0xb85:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c660e +0xb8a:  movl   $0x3,0x8(%esp)
086c6616 +0xb92:  mov    %eax,0x4(%esp)
086c661a +0xb96:  movl   $&g_guildAgitMgr,(%esp)
086c6621 +0xb9d:  call   086d2666 <_GLOBAL__I_MAX_VILLAGE_NUM+0xe97>  ; global constructors keyed to MAX_VILLAGE_NUM+0xe97
086c6626 +0xba2:  mov    %eax,-0x20(%ebp)
086c6629 +0xba5:  mov    0xc(%ebp),%eax
086c662c +0xba8:  mov    %eax,(%esp)
086c662f +0xbab:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c6634 +0xbb0:  mov    %eax,%esi
086c6636 +0xbb2:  mov    0xc(%ebp),%eax
086c6639 +0xbb5:  mov    %eax,(%esp)
086c663c +0xbb8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086c6641 +0xbbd:  mov    %eax,%ebx
086c6643 +0xbbf:  movl   $0x0,0xc(%esp)
086c664b +0xbc7:  movl   $0x88e,0x8(%esp)
086c6653 +0xbcf:  movl   $&_ZZN9GameWorld9move_areaEP5CUseriiiiibiiiE19__PRETTY_FUNCTION__,0x4(%esp)
086c665b +0xbd7:  lea    -0x68(%ebp),%eax
086c665e +0xbda:  mov    %eax,(%esp)
086c6661 +0xbdd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c6666 +0xbe2:  mov    -0x20(%ebp),%eax
086c6669 +0xbe5:  mov    %eax,0x14(%esp)
086c666d +0xbe9:  mov    0x14(%ebp),%eax
086c6670 +0xbec:  mov    %eax,0x10(%esp)
086c6674 +0xbf0:  mov    %esi,0xc(%esp)
086c6678 +0xbf4:  mov    %ebx,0x8(%esp)
086c667c +0xbf8:  movl   $"Move Guild Agit Area User(%d) Guild(%d) dest area(%d), virtual area(%d) ",0x4(%esp)
086c6684 +0xc00:  lea    -0x68(%ebp),%eax
086c6687 +0xc03:  mov    %eax,(%esp)
086c668a +0xc06:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c668f +0xc0b:  cmpl   $0x0,-0x20(%ebp)
086c6693 +0xc0f:  js     086c66bb <+0xc37>
086c6695 +0xc11:  mov    -0x20(%ebp),%eax
086c6698 +0xc14:  mov    %eax,0x4(%esp)
086c669c +0xc18:  mov    0xc(%ebp),%eax
086c669f +0xc1b:  mov    %eax,(%esp)
086c66a2 +0xc1e:  call   08647864 <_ZN5CUser8set_areaEi>  ; CUser::set_area(int)
086c66a7 +0xc23:  mov    0x14(%ebp),%eax
086c66aa +0xc26:  mov    %eax,0x4(%esp)
086c66ae +0xc2a:  mov    0xc(%ebp),%eax
086c66b1 +0xc2d:  mov    %eax,(%esp)
086c66b4 +0xc30:  call   086d20e8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x919>  ; global constructors keyed to MAX_VILLAGE_NUM+0x919
086c66b9 +0xc35:  jmp    086c66e9 <+0xc65>
086c66bb +0xc37:  mov    0x14(%ebp),%eax
086c66be +0xc3a:  mov    %eax,-0x20(%ebp)
086c66c1 +0xc3d:  movl   $0xffffffff,0x4(%esp)
086c66c9 +0xc45:  mov    0xc(%ebp),%eax
086c66cc +0xc48:  mov    %eax,(%esp)
086c66cf +0xc4b:  call   086d20e8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x919>  ; global constructors keyed to MAX_VILLAGE_NUM+0x919
086c66d4 +0xc50:  jmp    086c66e9 <+0xc65>
086c66d6 +0xc52:  movl   $0xffffffff,0x4(%esp)
086c66de +0xc5a:  mov    0xc(%ebp),%eax
086c66e1 +0xc5d:  mov    %eax,(%esp)
086c66e4 +0xc60:  call   086d20e8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x919>  ; global constructors keyed to MAX_VILLAGE_NUM+0x919
086c66e9 +0xc65:  mov    -0x20(%ebp),%eax
086c66ec +0xc68:  mov    %eax,0x4(%esp)
086c66f0 +0xc6c:  mov    -0x48(%ebp),%eax
086c66f3 +0xc6f:  mov    %eax,(%esp)
086c66f6 +0xc72:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c66fb +0xc77:  mov    %eax,-0x1c(%ebp)
086c66fe +0xc7a:  mov    0xc(%ebp),%eax
086c6701 +0xc7d:  mov    %eax,0x4(%esp)
086c6705 +0xc81:  mov    -0x1c(%ebp),%eax
086c6708 +0xc84:  mov    %eax,(%esp)
086c670b +0xc87:  call   086c25a6 <_ZN4Area11insert_userEP5CUser>  ; Area::insert_user(CUser*)
086c6710 +0xc8c:  mov    0xc(%ebp),%eax
086c6713 +0xc8f:  lea    0x79700(%eax),%edx
086c6719 +0xc95:  mov    0x28(%ebp),%eax
086c671c +0xc98:  mov    %eax,0x14(%esp)
086c6720 +0xc9c:  mov    0x14(%ebp),%eax
086c6723 +0xc9f:  mov    %eax,0x10(%esp)
086c6727 +0xca3:  mov    0x10(%ebp),%eax
086c672a +0xca6:  mov    %eax,0xc(%esp)
086c672e +0xcaa:  mov    -0x54(%ebp),%eax
086c6731 +0xcad:  mov    %eax,0x8(%esp)
086c6735 +0xcb1:  mov    -0x58(%ebp),%eax
086c6738 +0xcb4:  mov    %eax,0x4(%esp)
086c673c +0xcb8:  mov    %edx,(%esp)
086c673f +0xcbb:  call   08685172 <_ZN15cUserHistoryLog8MoveAreaEiiiii>  ; cUserHistoryLog::MoveArea(int, int, int, int, int)
086c6744 +0xcc0:  mov    $0x1,%ebx
086c6749 +0xcc5:  jmp    086c6760 <+0xcdc>
086c674b +0xcc7:  mov    %edx,%ebx
086c674d +0xcc9:  mov    %eax,%esi
086c674f +0xccb:  lea    -0x80(%ebp),%eax
086c6752 +0xcce:  mov    %eax,(%esp)
086c6755 +0xcd1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c675a +0xcd6:  mov    %esi,%eax
086c675c +0xcd8:  mov    %ebx,%edx
086c675e +0xcda:  jmp    086c676d <+0xce9>
086c6760 +0xcdc:  lea    -0x80(%ebp),%eax
086c6763 +0xcdf:  mov    %eax,(%esp)
086c6766 +0xce2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c676b +0xce7:  jmp    086c6788 <+0xd04>
086c676d +0xce9:  mov    %edx,%ebx
086c676f +0xceb:  mov    %eax,%esi
086c6771 +0xced:  lea    -0x74(%ebp),%eax
086c6774 +0xcf0:  mov    %eax,(%esp)
086c6777 +0xcf3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c677c +0xcf8:  mov    %esi,%eax
086c677e +0xcfa:  mov    %ebx,%edx
086c6780 +0xcfc:  mov    %eax,(%esp)
086c6783 +0xcff:  call   08ae3750 <_Unwind_Resume>
086c6788 +0xd04:  lea    -0x74(%ebp),%eax
086c678b +0xd07:  mov    %eax,(%esp)
086c678e +0xd0a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6793 +0xd0f:  mov    %ebx,%eax
086c6795 +0xd11:  add    $0xbc,%esp
086c679b +0xd17:  pop    %ebx
086c679c +0xd18:  pop    %esi
086c679d +0xd19:  pop    %edi
086c679e +0xd1a:  pop    %ebp
086c679f +0xd1b:  ret
```

## 反编译 C

```c
// GameWorld::move_area @ 0x86c5a84

/* GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int) */

undefined4 __thiscall
GameWorld::move_area
          (GameWorld *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,bool param_7,int param_8,int param_9,int param_10)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  CPrivateStoreMgr *this_00;
  CPartyTelePort *this_01;
  int iVar4;
  CHackAnalyzer *pCVar5;
  uint uVar6;
  GameWorld *this_02;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_89 [5];
  PacketGuard local_84 [12];
  PacketGuard local_78 [12];
  cMyTrace local_6c [16];
  int local_5c;
  int local_58;
  char local_51;
  CParty *local_50;
  Village *local_4c;
  Village *local_48;
  int local_44;
  int local_40;
  int local_3c;
  Area *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  Area *local_20;
  
  PacketGuard::PacketGuard(local_78);
  cVar3 = CTimeGate::isOpen(GlobalData::s_timeGate_);
  if (((cVar3 == '\x01') || (param_2 != 0xb)) || (param_3 != 5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
                    /* try { // try from 086c5ade to 086c5efb has its CatchHandler @ 086c676d */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
    CUser::Send(param_1,local_78);
    uVar8 = 0;
    goto LAB_086c6788;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0xbf);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
    CUser::Send(param_1,local_78);
    uVar8 = 0;
    goto LAB_086c6788;
  }
  this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
  if (cVar3 != '\0') {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0x3c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
    CUser::Send(param_1,local_78);
    uVar8 = 0;
    goto LAB_086c6788;
  }
  cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar3 == '\0') {
LAB_086c5ce7:
    bVar1 = false;
  }
  else {
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if (cVar3 == '\x01') goto LAB_086c5ce7;
    cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar3 == '\a') goto LAB_086c5ce7;
    bVar1 = true;
  }
  if (bVar1) {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
    CUser::Send(param_1,local_78);
    uVar8 = 0;
    goto LAB_086c6788;
  }
  cVar3 = CUser::isGMUser(param_1);
  if (cVar3 == '\x01') {
LAB_086c5dc9:
    bVar1 = false;
  }
  else {
    cVar3 = CUser::getPowerSide(param_1);
    cVar3 = IsPowerWarSafeZone(this,param_2,param_3,(int)cVar3);
    if (cVar3 == '\0') goto LAB_086c5dc9;
    bVar1 = true;
  }
  if (bVar1) {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
    CUser::Send(param_1,local_78);
    uVar8 = 0;
    goto LAB_086c6788;
  }
  cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  local_5c = (int)cVar3;
  local_58 = CUser::get_area(param_1,false);
  local_51 = '\0';
  local_50 = (CParty *)CUser::GetParty(param_1);
  if (local_50 != (CParty *)0x0) {
    this_01 = (CPartyTelePort *)CParty::GetPartyTelePort(local_50);
    cVar3 = CPartyTelePort::get_teleport_state(this_01);
    if (cVar3 == '\x01') {
      local_51 = '\x01';
    }
  }
  if (param_8 == 2) {
    local_51 = '\x01';
  }
  if (((local_51 != '\x01') && (param_2 == local_5c)) && (param_3 == local_58)) {
    uVar8 = 0;
    goto LAB_086c6788;
  }
  PacketGuard::PacketGuard(local_84);
                    /* try { // try from 086c5f10 to 086c6743 has its CatchHandler @ 086c674b */
  cVar3 = check_valid_area(this,param_2,param_3);
  if (cVar3 == '\x01') {
    cVar3 = check_valid_area(this,local_5c,local_58);
    if (cVar3 != '\x01') goto LAB_086c5f3c;
    bVar1 = false;
  }
  else {
LAB_086c5f3c:
    bVar1 = true;
  }
  if (bVar1) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0x15);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
    CUser::Send(param_1,local_84);
    uVar8 = 0;
  }
  else {
    local_4c = (Village *)0x0;
    if (((-1 < param_2) && (param_2 < MAX_VILLAGE_NUM)) &&
       (local_4c = (Village *)(*(int *)(this + 0x1c) + param_2 * 0x34), local_4c != (Village *)0x0))
    {
      local_3c = 0;
      local_3c = CUser::CheckMoveTown(param_1,param_2);
      if (local_3c != 0) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,1,0x26);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,local_3c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,param_2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
        CUser::Send(param_1,local_84);
        uVar8 = 0;
        goto LAB_086c6760;
      }
    }
    local_48 = (Village *)0x0;
    if ((-1 < local_5c) && (local_5c < MAX_VILLAGE_NUM)) {
      local_48 = (Village *)(*(int *)(this + 0x1c) + local_5c * 0x34);
    }
    cVar3 = CUserCharacInfo::getCurCharacVillPrev((CUserCharacInfo *)param_1);
    local_44 = (int)cVar3;
    local_40 = CUser::get_before_area(param_1);
    CUser::set_position(param_1,(ushort)param_4,(ushort)param_5,(char)param_6);
    CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,(char)param_2);
    CUser::set_area(param_1,param_3);
    if (local_48 != (Village *)0x0) {
      local_38 = (Area *)Village::getArea(local_48,local_58);
      if (param_7) {
        cVar3 = IsPVPChannel(this);
        if (cVar3 == '\x01') goto LAB_086c6193;
        bVar1 = true;
      }
      else {
LAB_086c6193:
        bVar1 = false;
      }
      if (bVar1) {
        local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar4 = CUser::getBeforeAreaTime(param_1);
        if (iVar4 != 0) {
          local_30 = CUser::getBeforeAreaTime(param_1);
          local_30 = local_34 - local_30;
          if (local_30 < 3) {
            cVar3 = CHackLog_InvalidAreaMove::IsInvalidMovableArea
                              (local_5c,local_58,param_2,param_3);
            if (cVar3 == '\0') goto LAB_086c6254;
            cVar3 = CHackLog_InvalidAreaMove::isMovableRoute
                              (local_44,local_40,local_5c,local_58,param_2,param_3);
            if (((cVar3 == '\x01') || (local_44 == param_2)) || (local_40 == param_3))
            goto LAB_086c6254;
            bVar1 = true;
          }
          else {
LAB_086c6254:
            bVar1 = false;
          }
          if (bVar1) {
            pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x1fc,1,0,0);
          }
        }
        CUser::setBeforeAreaTime(param_1,local_34);
        if (param_8 == 0) {
          cVar3 = Area::IsMovalbeArea(local_38,param_2,param_3);
          if (cVar3 == '\x01') goto LAB_086c630a;
          cVar3 = CHackLog_InvalidAreaMove::IsInvalidMovableArea(local_5c,local_58,param_2,param_3);
          if (((cVar3 == '\0') || (local_5c != param_9)) || (local_58 != param_10))
          goto LAB_086c630a;
          bVar1 = true;
        }
        else {
LAB_086c630a:
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = CUser::get_acc_id(param_1);
          uVar8 = NumberToString(uVar6,0);
          LogManager::logFormat
                    (1,"world.cpp",
                     "bool GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)"
                     ,0x832,"move area error. User:%s (%d,%d)->(%d,%d)",uVar8,local_5c,local_58,
                     param_2,param_3);
          local_89[0] = '\0';
          local_89[1] = '\0';
          local_89[2] = '\0';
          local_89[3] = '\0';
          local_89[4] = 0;
          local_2c = 0;
          local_28 = 0;
          if (((-1 < param_9) && (param_9 < 0xb)) && ((-1 < param_10 && (param_10 < 0xb)))) {
            sprintf(local_89,"%d%d",param_9,param_10);
            local_2c = atoi(local_89);
          }
          memset(local_89,0,5);
          if ((((-1 < param_2) && (param_2 < 0xb)) && (-1 < param_3)) && (param_3 < 0xb)) {
            sprintf(local_89,"%d%d",param_2,param_3);
            local_28 = atoi(local_89);
          }
          iVar2 = local_28;
          iVar4 = local_2c;
          uVar8 = CHackLog_InvalidAreaMove::GetHackType();
          pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,uVar8,1,iVar4,iVar2);
        }
      }
      Area::delete_user(local_38,param_1);
    }
    if (local_4c != (Village *)0x0) {
      local_24 = param_3;
      this_02 = (GameWorld *)G_GameWorld();
      cVar3 = IsSchoolPvPChannel(this_02);
      if (((cVar3 == '\0') || (param_2 != 2)) || (param_3 != 4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::GetSchoolNo(param_1);
        local_24 = CSchoolMgr::GetSchoolArea(0x943e080);
        if (local_24 < 0) {
          local_24 = param_3;
          CUser::set_trick_area(param_1,-1);
        }
        else {
          CUser::set_area(param_1,local_24);
          CUser::set_trick_area(param_1,param_3);
        }
      }
      else if ((param_2 == 8) &&
              (((param_3 == 0 || (param_3 == 1)) || ((param_3 == 2 || (param_3 == 3)))))) {
        if (param_3 == 0) {
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
          local_24 = CGuildAgitManager::GetGuildAgitAreaIndex
                               ((CGuildAgitManager *)g_guildAgitMgr,uVar6,0);
        }
        else if (param_3 == 1) {
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
          local_24 = CGuildAgitManager::GetGuildAgitAreaIndex
                               ((CGuildAgitManager *)g_guildAgitMgr,uVar6,1);
        }
        else if (param_3 == 2) {
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
          local_24 = CGuildAgitManager::GetGuildAgitAreaIndex
                               ((CGuildAgitManager *)g_guildAgitMgr,uVar6,2);
        }
        else if (param_3 == 3) {
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
          local_24 = CGuildAgitManager::GetGuildAgitAreaIndex
                               ((CGuildAgitManager *)g_guildAgitMgr,uVar6,3);
        }
        uVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_6c,
                           "bool GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)"
                           ,0x88e,0);
        cMyTrace::operator()
                  (local_6c,
                   "Move Guild Agit Area User(%d) Guild(%d) dest area(%d), virtual area(%d) ",uVar7,
                   uVar8,param_3,local_24);
        if (local_24 < 0) {
          local_24 = param_3;
          CUser::set_trick_area(param_1,-1);
        }
        else {
          CUser::set_area(param_1,local_24);
          CUser::set_trick_area(param_1,param_3);
        }
      }
      else {
        CUser::set_trick_area(param_1,-1);
      }
      local_20 = (Area *)Village::getArea(local_4c,local_24);
      Area::insert_user(local_20,param_1);
    }
    cUserHistoryLog::MoveArea((int)(param_1 + 0x79700),local_5c,local_58,param_2,param_3);
    uVar8 = 1;
  }
LAB_086c6760:
                    /* try { // try from 086c6766 to 086c676a has its CatchHandler @ 086c676d */
  PacketGuard::~PacketGuard(local_84);
LAB_086c6788:
  PacketGuard::~PacketGuard(local_78);
  return uVar8;
}
```
