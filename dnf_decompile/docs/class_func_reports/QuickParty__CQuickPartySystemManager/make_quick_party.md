# make_quick_party

`_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE`

`QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826b222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826b222  _ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE
#           QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*)
# range [0x0826b222, 0x0826b589]
0826b222 +0x000:  push   %ebp
0826b223 +0x001:  mov    %esp,%ebp
0826b225 +0x003:  push   %esi
0826b226 +0x004:  push   %ebx
0826b227 +0x005:  sub    $0x60,%esp
0826b22a +0x008:  cmpl   $0x0,0xc(%ebp)
0826b22e +0x00c:  jne    0826b23a <+0x18>
0826b230 +0x00e:  mov    $0x0,%ebx
0826b235 +0x013:  jmp    0826b57e <+0x35c>
0826b23a +0x018:  lea    -0x38(%ebp),%eax
0826b23d +0x01b:  mov    %eax,(%esp)
0826b240 +0x01e:  call   0826be18 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x6e6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x6e6
0826b245 +0x023:  movl   $0x0,-0x2c(%ebp)
0826b24c +0x02a:  movl   $0x0,-0x28(%ebp)
0826b253 +0x031:  jmp    0826b2bf <+0x9d>
0826b255 +0x033:  mov    -0x28(%ebp),%eax
0826b258 +0x036:  mov    %eax,0x4(%esp)
0826b25c +0x03a:  mov    0xc(%ebp),%eax
0826b25f +0x03d:  mov    %eax,(%esp)
0826b262 +0x040:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
0826b267 +0x045:  mov    %eax,-0x24(%ebp)
0826b26a +0x048:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826b26f +0x04d:  mov    -0x24(%ebp),%edx
0826b272 +0x050:  mov    %edx,0x4(%esp)
0826b276 +0x054:  mov    %eax,(%esp)
0826b279 +0x057:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0826b27e +0x05c:  mov    %eax,-0x30(%ebp)
0826b281 +0x05f:  cmpl   $0x0,-0x30(%ebp)
0826b285 +0x063:  je     0826b2ba <+0x98>
0826b287 +0x065:  mov    -0x30(%ebp),%eax
0826b28a +0x068:  mov    %eax,(%esp)
0826b28d +0x06b:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
0826b292 +0x070:  cmp    $0x1,%al
0826b294 +0x072:  setg   %al
0826b297 +0x075:  test   %al,%al
0826b299 +0x077:  je     0826b2a3 <+0x81>
0826b29b +0x079:  mov    -0x30(%ebp),%eax
0826b29e +0x07c:  mov    %eax,-0x2c(%ebp)
0826b2a1 +0x07f:  jmp    0826b2ca <+0xa8>
0826b2a3 +0x081:  mov    -0x30(%ebp),%eax
0826b2a6 +0x084:  mov    %eax,(%esp)
0826b2a9 +0x087:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0826b2ae +0x08c:  test   %al,%al
0826b2b0 +0x08e:  je     0826b2bb <+0x99>
0826b2b2 +0x090:  mov    -0x30(%ebp),%eax
0826b2b5 +0x093:  mov    %eax,-0x2c(%ebp)
0826b2b8 +0x096:  jmp    0826b2bb <+0x99>
0826b2ba +0x098:  nop
0826b2bb +0x099:  addl   $0x1,-0x28(%ebp)
0826b2bf +0x09d:  cmpl   $0x3,-0x28(%ebp)
0826b2c3 +0x0a1:  setle  %al
0826b2c6 +0x0a4:  test   %al,%al
0826b2c8 +0x0a6:  jne    0826b255 <+0x33>
0826b2ca +0x0a8:  cmpl   $0x0,-0x2c(%ebp)
0826b2ce +0x0ac:  jne    0826b368 <+0x146>
0826b2d4 +0x0b2:  movl   $0x0,-0x20(%ebp)
0826b2db +0x0b9:  jmp    0826b313 <+0xf1>
0826b2dd +0x0bb:  mov    -0x20(%ebp),%eax
0826b2e0 +0x0be:  mov    %eax,0x4(%esp)
0826b2e4 +0x0c2:  mov    0xc(%ebp),%eax
0826b2e7 +0x0c5:  mov    %eax,(%esp)
0826b2ea +0x0c8:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
0826b2ef +0x0cd:  mov    %eax,-0x1c(%ebp)
0826b2f2 +0x0d0:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826b2f7 +0x0d5:  mov    -0x1c(%ebp),%edx
0826b2fa +0x0d8:  mov    %edx,0x4(%esp)
0826b2fe +0x0dc:  mov    %eax,(%esp)
0826b301 +0x0df:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0826b306 +0x0e4:  mov    %eax,-0x2c(%ebp)
0826b309 +0x0e7:  cmpl   $0x0,-0x2c(%ebp)
0826b30d +0x0eb:  jne    0826b320 <+0xfe>
0826b30f +0x0ed:  addl   $0x1,-0x20(%ebp)
0826b313 +0x0f1:  cmpl   $0x3,-0x20(%ebp)
0826b317 +0x0f5:  setle  %al
0826b31a +0x0f8:  test   %al,%al
0826b31c +0x0fa:  jne    0826b2dd <+0xbb>
0826b31e +0x0fc:  jmp    0826b321 <+0xff>
0826b320 +0x0fe:  nop
0826b321 +0x0ff:  cmpl   $0x0,-0x2c(%ebp)
0826b325 +0x103:  jne    0826b368 <+0x146>
0826b327 +0x105:  mov    0xc(%ebp),%eax
0826b32a +0x108:  mov    %eax,(%esp)
0826b32d +0x10b:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826b332 +0x110:  movl   $"QUICK_PARTY_LOG : PARTY IS NULL!!",0x10(%esp)
0826b33a +0x118:  movl   $0x3d0,0xc(%esp)
0826b342 +0x120:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyEE19__PRETTY_FUNCTION__,0x8(%esp)
0826b34a +0x128:  movl   $"QuickParty.cpp",0x4(%esp)
0826b352 +0x130:  movl   $0x1,(%esp)
0826b359 +0x137:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826b35e +0x13c:  mov    $0x0,%ebx
0826b363 +0x141:  jmp    0826b573 <+0x351>
0826b368 +0x146:  movl   $0x1,0x4(%esp)
0826b370 +0x14e:  mov    -0x2c(%ebp),%eax
0826b373 +0x151:  mov    %eax,(%esp)
0826b376 +0x154:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
0826b37b +0x159:  movl   $0x1,0x4(%esp)
0826b383 +0x161:  mov    -0x2c(%ebp),%eax
0826b386 +0x164:  mov    %eax,(%esp)
0826b389 +0x167:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
0826b38e +0x16c:  movl   $0x1,0x4(%esp)
0826b396 +0x174:  mov    -0x2c(%ebp),%eax
0826b399 +0x177:  mov    %eax,(%esp)
0826b39c +0x17a:  call   0822d852 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2efc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2efc
0826b3a1 +0x17f:  movl   $0x0,0x4(%esp)
0826b3a9 +0x187:  mov    -0x2c(%ebp),%eax
0826b3ac +0x18a:  mov    %eax,(%esp)
0826b3af +0x18d:  call   0822d870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f1a
0826b3b4 +0x192:  mov    -0x2c(%ebp),%eax
0826b3b7 +0x195:  mov    %eax,(%esp)
0826b3ba +0x198:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
0826b3bf +0x19d:  test   %al,%al
0826b3c1 +0x19f:  je     0826b405 <+0x1e3>
0826b3c3 +0x1a1:  movl   $0x0,0x4(%esp)
0826b3cb +0x1a9:  mov    -0x2c(%ebp),%eax
0826b3ce +0x1ac:  mov    %eax,(%esp)
0826b3d1 +0x1af:  call   0826b960 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x22e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x22e
0826b3d6 +0x1b4:  movl   $0x0,0x4(%esp)
0826b3de +0x1bc:  mov    -0x2c(%ebp),%eax
0826b3e1 +0x1bf:  mov    %eax,(%esp)
0826b3e4 +0x1c2:  call   0826b990 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x25e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x25e
0826b3e9 +0x1c7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0826b3ee +0x1cc:  movl   $0x0,0x8(%esp)
0826b3f6 +0x1d4:  mov    -0x2c(%ebp),%edx
0826b3f9 +0x1d7:  mov    %edx,0x4(%esp)
0826b3fd +0x1db:  mov    %eax,(%esp)
0826b400 +0x1de:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0826b405 +0x1e3:  movl   $0x0,-0x18(%ebp)
0826b40c +0x1ea:  jmp    0826b4c5 <+0x2a3>
0826b411 +0x1ef:  mov    -0x18(%ebp),%eax
0826b414 +0x1f2:  mov    %eax,0x4(%esp)
0826b418 +0x1f6:  mov    0xc(%ebp),%eax
0826b41b +0x1f9:  mov    %eax,(%esp)
0826b41e +0x1fc:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
0826b423 +0x201:  mov    %eax,-0x14(%ebp)
0826b426 +0x204:  cmpl   $0xffffffff,-0x14(%ebp)
0826b42a +0x208:  je     0826b4ba <+0x298>
0826b430 +0x20e:  movl   $0x0,-0x10(%ebp)
0826b437 +0x215:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826b43c +0x21a:  mov    -0x14(%ebp),%edx
0826b43f +0x21d:  mov    %edx,0x4(%esp)
0826b443 +0x221:  mov    %eax,(%esp)
0826b446 +0x224:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0826b44b +0x229:  mov    %eax,-0x10(%ebp)
0826b44e +0x22c:  cmpl   $0x0,-0x10(%ebp)
0826b452 +0x230:  je     0826b4bd <+0x29b>
0826b454 +0x232:  mov    -0x10(%ebp),%eax
0826b457 +0x235:  cmp    -0x2c(%ebp),%eax
0826b45a +0x238:  je     0826b4c0 <+0x29e>
0826b45c +0x23a:  movl   $0x0,-0xc(%ebp)
0826b463 +0x241:  jmp    0826b4ad <+0x28b>
0826b465 +0x243:  mov    -0xc(%ebp),%eax
0826b468 +0x246:  mov    %eax,0x4(%esp)
0826b46c +0x24a:  mov    -0x10(%ebp),%eax
0826b46f +0x24d:  mov    %eax,(%esp)
0826b472 +0x250:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0826b477 +0x255:  xor    $0x1,%eax
0826b47a +0x258:  test   %al,%al
0826b47c +0x25a:  jne    0826b4a8 <+0x286>
0826b47e +0x25c:  mov    -0xc(%ebp),%eax
0826b481 +0x25f:  mov    %eax,0x4(%esp)
0826b485 +0x263:  mov    -0x10(%ebp),%eax
0826b488 +0x266:  mov    %eax,(%esp)
0826b48b +0x269:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0826b490 +0x26e:  lea    -0x38(%ebp),%edx
0826b493 +0x271:  mov    %edx,0x8(%esp)
0826b497 +0x275:  mov    %eax,0x4(%esp)
0826b49b +0x279:  mov    -0x10(%ebp),%eax
0826b49e +0x27c:  mov    %eax,(%esp)
0826b4a1 +0x27f:  call   0859b52c <_ZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EE>  ; CParty::delete_party_for_quick_party(CUser*, std::list<CUser*, std::allocator<CUser*> >&)
0826b4a6 +0x284:  jmp    0826b4a9 <+0x287>
0826b4a8 +0x286:  nop
0826b4a9 +0x287:  addl   $0x1,-0xc(%ebp)
0826b4ad +0x28b:  cmpl   $0x3,-0xc(%ebp)
0826b4b1 +0x28f:  setle  %al
0826b4b4 +0x292:  test   %al,%al
0826b4b6 +0x294:  jne    0826b465 <+0x243>
0826b4b8 +0x296:  jmp    0826b4c1 <+0x29f>
0826b4ba +0x298:  nop
0826b4bb +0x299:  jmp    0826b4c1 <+0x29f>
0826b4bd +0x29b:  nop
0826b4be +0x29c:  jmp    0826b4c1 <+0x29f>
0826b4c0 +0x29e:  nop
0826b4c1 +0x29f:  addl   $0x1,-0x18(%ebp)
0826b4c5 +0x2a3:  cmpl   $0x3,-0x18(%ebp)
0826b4c9 +0x2a7:  setle  %al
0826b4cc +0x2aa:  test   %al,%al
0826b4ce +0x2ac:  jne    0826b411 <+0x1ef>
0826b4d4 +0x2b2:  lea    -0x3c(%ebp),%eax
0826b4d7 +0x2b5:  lea    -0x38(%ebp),%edx
0826b4da +0x2b8:  mov    %edx,0x4(%esp)
0826b4de +0x2bc:  mov    %eax,(%esp)
0826b4e1 +0x2bf:  call   0826be82 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x750>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x750
0826b4e6 +0x2c4:  sub    $0x4,%esp
0826b4e9 +0x2c7:  lea    -0x40(%ebp),%eax
0826b4ec +0x2ca:  lea    -0x38(%ebp),%edx
0826b4ef +0x2cd:  mov    %edx,0x4(%esp)
0826b4f3 +0x2d1:  mov    %eax,(%esp)
0826b4f6 +0x2d4:  call   0826bea8 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x776>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x776
0826b4fb +0x2d9:  sub    $0x4,%esp
0826b4fe +0x2dc:  jmp    0826b527 <+0x305>
0826b500 +0x2de:  lea    -0x3c(%ebp),%eax
0826b503 +0x2e1:  mov    %eax,(%esp)
0826b506 +0x2e4:  call   0826bef4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x7c2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x7c2
0826b50b +0x2e9:  mov    (%eax),%eax
0826b50d +0x2eb:  mov    %eax,0x4(%esp)
0826b511 +0x2ef:  mov    -0x2c(%ebp),%eax
0826b514 +0x2f2:  mov    %eax,(%esp)
0826b517 +0x2f5:  call   0859b2b6 <_ZN6CParty9join_userEP5CUser>  ; CParty::join_user(CUser*)
0826b51c +0x2fa:  lea    -0x3c(%ebp),%eax
0826b51f +0x2fd:  mov    %eax,(%esp)
0826b522 +0x300:  call   0826bee0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x7ae>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x7ae
0826b527 +0x305:  lea    -0x40(%ebp),%eax
0826b52a +0x308:  mov    %eax,0x4(%esp)
0826b52e +0x30c:  lea    -0x3c(%ebp),%eax
0826b531 +0x30f:  mov    %eax,(%esp)
0826b534 +0x312:  call   0826becc <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x79a>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x79a
0826b539 +0x317:  test   %al,%al
0826b53b +0x319:  jne    0826b500 <+0x2de>
0826b53d +0x31b:  mov    0xc(%ebp),%eax
0826b540 +0x31e:  mov    %eax,(%esp)
0826b543 +0x321:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826b548 +0x326:  mov    -0x2c(%ebp),%eax
0826b54b +0x329:  mov    %eax,(%esp)
0826b54e +0x32c:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0826b553 +0x331:  mov    -0x2c(%ebp),%ebx
0826b556 +0x334:  jmp    0826b573 <+0x351>
0826b558 +0x336:  mov    %edx,%ebx
0826b55a +0x338:  mov    %eax,%esi
0826b55c +0x33a:  lea    -0x38(%ebp),%eax
0826b55f +0x33d:  mov    %eax,(%esp)
0826b562 +0x340:  call   0826ba2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2fa
0826b567 +0x345:  mov    %esi,%eax
0826b569 +0x347:  mov    %ebx,%edx
0826b56b +0x349:  mov    %eax,(%esp)
0826b56e +0x34c:  call   08ae3750 <_Unwind_Resume>
0826b573 +0x351:  lea    -0x38(%ebp),%eax
0826b576 +0x354:  mov    %eax,(%esp)
0826b579 +0x357:  call   0826ba2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2fa
0826b57e +0x35c:  mov    %ebx,%eax
0826b580 +0x35e:  lea    -0x8(%ebp),%esp
0826b583 +0x361:  add    $0x0,%esp
0826b586 +0x364:  pop    %ebx
0826b587 +0x365:  pop    %esi
0826b588 +0x366:  pop    %ebp
0826b589 +0x367:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::make_quick_party @ 0x826b222

/* QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*) */

CParty * __thiscall
QuickParty::CQuickPartySystemManager::make_quick_party
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  CUser *pCVar3;
  undefined4 *puVar4;
  CParty *pCVar5;
  _List_iterator local_44 [4];
  _List_iterator<CUser*> local_40 [4];
  list<CUser*,std::allocator<CUser*>> local_3c [8];
  CParty *local_34;
  CParty *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  CParty *local_14;
  int local_10;
  
  if (param_1 == (CQuickParty *)0x0) {
    return (CParty *)0x0;
  }
  std::list<CUser*,std::allocator<CUser*>>::list(local_3c);
  local_30 = (CParty *)0x0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    local_28 = CQuickParty::get_party_index(param_1,local_2c);
                    /* try { // try from 0826b26a to 0826b552 has its CatchHandler @ 0826b558 */
    iVar2 = G_CGameManager();
    local_34 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_34 != (CParty *)0x0) {
      cVar1 = CParty::GetEPLPState(local_34);
      if ('\x01' < cVar1) {
        local_30 = local_34;
        break;
      }
      cVar1 = CParty::is_quick_party(local_34);
      if (cVar1 != '\0') {
        local_30 = local_34;
      }
    }
  }
  if (local_30 == (CParty *)0x0) {
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      local_20 = CQuickParty::get_party_index(param_1,local_24);
      iVar2 = G_CGameManager();
      local_30 = (CParty *)CGameManager::GetParty(iVar2);
      if (local_30 != (CParty *)0x0) break;
    }
    if (local_30 == (CParty *)0x0) {
      CQuickParty::destroy(param_1);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "CParty* QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*)"
                 ,0x3d0,"QUICK_PARTY_LOG : PARTY IS NULL!!");
      pCVar5 = (CParty *)0x0;
      goto LAB_0826b573;
    }
  }
  CParty::set_state(local_30,'\x01');
  CParty::set_quick_party(local_30,true);
  CParty::setDungIndex(local_30,1);
  CParty::setDungDiffi(local_30,'\0');
  cVar1 = CParty::IsAutoCreated(local_30);
  if (cVar1 != '\0') {
    CParty::SetSinglePlay(local_30,false);
    CParty::SetAutoCreated(local_30,false);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_party_info_to_all(this_00,local_30,0);
  }
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_18 = CQuickParty::get_party_index(param_1,local_1c);
    if (local_18 != -1) {
      local_14 = (CParty *)0x0;
      iVar2 = G_CGameManager();
      local_14 = (CParty *)CGameManager::GetParty(iVar2);
      if ((local_14 != (CParty *)0x0) && (local_14 != local_30)) {
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          cVar1 = CParty::checkValidUser(local_14,local_10);
          if (cVar1 == '\x01') {
            pCVar3 = (CUser *)CParty::get_user(local_14,local_10);
            CParty::delete_party_for_quick_party(local_14,pCVar3,(list *)local_3c);
          }
        }
      }
    }
  }
  std::list<CUser*,std::allocator<CUser*>>::begin();
  std::list<CUser*,std::allocator<CUser*>>::end();
  while (cVar1 = std::_List_iterator<CUser*>::operator!=(local_40,local_44), cVar1 != '\0') {
    puVar4 = (undefined4 *)std::_List_iterator<CUser*>::operator*(local_40);
    CParty::join_user(local_30,(CUser *)*puVar4);
    std::_List_iterator<CUser*>::operator++(local_40);
  }
  CQuickParty::destroy(param_1);
  CParty::init_quick_party_data(local_30);
  pCVar5 = local_30;
LAB_0826b573:
  std::list<CUser*,std::allocator<CUser*>>::~list(local_3c);
  return pCVar5;
}
```
