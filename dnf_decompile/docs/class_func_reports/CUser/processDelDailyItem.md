# processDelDailyItem

`_ZN5CUser19processDelDailyItemEv`

`CUser::processDelDailyItem()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867e092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867e092  _ZN5CUser19processDelDailyItemEv
#           CUser::processDelDailyItem()
# range [0x0867e092, 0x0867e733]
0867e092 +0x000:  push   %ebp
0867e093 +0x001:  mov    %esp,%ebp
0867e095 +0x003:  push   %edi
0867e096 +0x004:  push   %esi
0867e097 +0x005:  push   %ebx
0867e098 +0x006:  sub    $0x2ec,%esp
0867e09e +0x00c:  lea    -0x88(%ebp),%eax
0867e0a4 +0x012:  mov    %eax,(%esp)
0867e0a7 +0x015:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867e0ac +0x01a:  movl   $0x8,0xc(%esp)
0867e0b4 +0x022:  movl   $0x3,0x8(%esp)
0867e0bc +0x02a:  lea    -0x88(%ebp),%eax
0867e0c2 +0x030:  mov    %eax,0x4(%esp)
0867e0c6 +0x034:  mov    0x8(%ebp),%eax
0867e0c9 +0x037:  mov    %eax,(%esp)
0867e0cc +0x03a:  call   0867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>  ; CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
0867e0d1 +0x03f:  movl   $0x68,0xc(%esp)
0867e0d9 +0x047:  movl   $0x39,0x8(%esp)
0867e0e1 +0x04f:  lea    -0x88(%ebp),%eax
0867e0e7 +0x055:  mov    %eax,0x4(%esp)
0867e0eb +0x059:  mov    0x8(%ebp),%eax
0867e0ee +0x05c:  mov    %eax,(%esp)
0867e0f1 +0x05f:  call   0867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>  ; CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
0867e0f6 +0x064:  lea    -0x88(%ebp),%eax
0867e0fc +0x06a:  mov    %eax,(%esp)
0867e0ff +0x06d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0867e104 +0x072:  test   %eax,%eax
0867e106 +0x074:  sete   %al
0867e109 +0x077:  test   %al,%al
0867e10b +0x079:  jne    0867e71b <+0x689>
0867e111 +0x07f:  movl   $0x1d,-0x34(%ebp)
0867e118 +0x086:  lea    -0x2d4(%ebp),%ebx
0867e11e +0x08c:  mov    %ebx,%edi
0867e120 +0x08e:  mov    $0x1c,%esi
0867e125 +0x093:  jmp    0867e135 <+0xa3>
0867e127 +0x095:  mov    %edi,(%esp)
0867e12a +0x098:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867e12f +0x09d:  add    $0xc,%edi
0867e132 +0x0a0:  sub    $0x1,%esi
0867e135 +0x0a3:  cmp    $0xffffffff,%esi
0867e138 +0x0a6:  setne  %al
0867e13b +0x0a9:  test   %al,%al
0867e13d +0x0ab:  jne    0867e127 <+0x95>
0867e13f +0x0ad:  jmp    0867e180 <+0xee>
0867e141 +0x0af:  mov    %edx,%edi
0867e143 +0x0b1:  mov    %eax,-0x2dc(%ebp)
0867e149 +0x0b7:  test   %ebx,%ebx
0867e14b +0x0b9:  je     0867e173 <+0xe1>
0867e14d +0x0bb:  mov    $0x1c,%eax
0867e152 +0x0c0:  sub    %esi,%eax
0867e154 +0x0c2:  mov    %eax,%edx
0867e156 +0x0c4:  mov    %edx,%eax
0867e158 +0x0c6:  add    %eax,%eax
0867e15a +0x0c8:  add    %edx,%eax
0867e15c +0x0ca:  shl    $0x2,%eax
0867e15f +0x0cd:  lea    (%ebx,%eax,1),%esi
0867e162 +0x0d0:  cmp    %ebx,%esi
0867e164 +0x0d2:  je     0867e173 <+0xe1>
0867e166 +0x0d4:  sub    $0xc,%esi
0867e169 +0x0d7:  mov    %esi,(%esp)
0867e16c +0x0da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867e171 +0x0df:  jmp    0867e162 <+0xd0>
0867e173 +0x0e1:  mov    -0x2dc(%ebp),%eax
0867e179 +0x0e7:  mov    %edi,%edx
0867e17b +0x0e9:  jmp    0867e6fd <+0x66b>
0867e180 +0x0ee:  lea    -0x104(%ebp),%ebx
0867e186 +0x0f4:  mov    $0x0,%eax
0867e18b +0x0f9:  mov    $0x1d,%edx
0867e190 +0x0fe:  mov    %ebx,%edi
0867e192 +0x100:  mov    %edx,%ecx
0867e194 +0x102:  rep stos %eax,%es:(%edi)
0867e196 +0x104:  lea    -0x178(%ebp),%ebx
0867e19c +0x10a:  mov    $0x0,%eax
0867e1a1 +0x10f:  mov    $0x1d,%edx
0867e1a6 +0x114:  mov    %ebx,%edi
0867e1a8 +0x116:  mov    %edx,%ecx
0867e1aa +0x118:  rep stos %eax,%es:(%edi)
0867e1ac +0x11a:  movl   $0x0,-0x30(%ebp)
0867e1b3 +0x121:  jmp    0867e259 <+0x1c7>
0867e1b8 +0x126:  mov    -0x30(%ebp),%edx
0867e1bb +0x129:  lea    -0x2d4(%ebp),%ecx
0867e1c1 +0x12f:  mov    %edx,%eax
0867e1c3 +0x131:  add    %eax,%eax
0867e1c5 +0x133:  add    %edx,%eax
0867e1c7 +0x135:  shl    $0x2,%eax
0867e1ca +0x138:  lea    (%ecx,%eax,1),%eax
0867e1cd +0x13b:  movl   $0xe,0x8(%esp)
0867e1d5 +0x143:  movl   $0x0,0x4(%esp)
0867e1dd +0x14b:  mov    %eax,(%esp)
0867e1e0 +0x14e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867e1e5 +0x153:  mov    -0x30(%ebp),%edx
0867e1e8 +0x156:  lea    -0x2d4(%ebp),%ecx
0867e1ee +0x15c:  mov    %edx,%eax
0867e1f0 +0x15e:  add    %eax,%eax
0867e1f2 +0x160:  add    %edx,%eax
0867e1f4 +0x162:  shl    $0x2,%eax
0867e1f7 +0x165:  lea    (%ecx,%eax,1),%edx
0867e1fa +0x168:  mov    -0x30(%ebp),%eax
0867e1fd +0x16b:  mov    %eax,0x4(%esp)
0867e201 +0x16f:  mov    %edx,(%esp)
0867e204 +0x172:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867e209 +0x177:  mov    -0x30(%ebp),%ebx
0867e20c +0x17a:  mov    -0x30(%ebp),%edx
0867e20f +0x17d:  lea    -0x2d4(%ebp),%ecx
0867e215 +0x183:  mov    %edx,%eax
0867e217 +0x185:  add    %eax,%eax
0867e219 +0x187:  add    %edx,%eax
0867e21b +0x189:  shl    $0x2,%eax
0867e21e +0x18c:  lea    (%ecx,%eax,1),%eax
0867e221 +0x18f:  mov    %eax,(%esp)
0867e224 +0x192:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0867e229 +0x197:  mov    %eax,-0x104(%ebp,%ebx,4)
0867e230 +0x19e:  mov    -0x30(%ebp),%edx
0867e233 +0x1a1:  lea    -0x2d4(%ebp),%ecx
0867e239 +0x1a7:  mov    %edx,%eax
0867e23b +0x1a9:  add    %eax,%eax
0867e23d +0x1ab:  add    %edx,%eax
0867e23f +0x1ad:  shl    $0x2,%eax
0867e242 +0x1b0:  lea    (%ecx,%eax,1),%eax
0867e245 +0x1b3:  movl   $0x0,0x4(%esp)
0867e24d +0x1bb:  mov    %eax,(%esp)
0867e250 +0x1be:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867e255 +0x1c3:  addl   $0x1,-0x30(%ebp)
0867e259 +0x1c7:  cmpl   $0x1c,-0x30(%ebp)
0867e25d +0x1cb:  setle  %al
0867e260 +0x1ce:  test   %al,%al
0867e262 +0x1d0:  jne    0867e1b8 <+0x126>
0867e268 +0x1d6:  lea    -0x7c(%ebp),%eax
0867e26b +0x1d9:  lea    -0x88(%ebp),%edx
0867e271 +0x1df:  mov    %edx,0x4(%esp)
0867e275 +0x1e3:  mov    %eax,(%esp)
0867e278 +0x1e6:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0867e27d +0x1eb:  sub    $0x4,%esp
0867e280 +0x1ee:  lea    -0x7c(%ebp),%eax
0867e283 +0x1f1:  mov    %eax,0x4(%esp)
0867e287 +0x1f5:  lea    -0x8c(%ebp),%eax
0867e28d +0x1fb:  mov    %eax,(%esp)
0867e290 +0x1fe:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0867e295 +0x203:  lea    -0x78(%ebp),%eax
0867e298 +0x206:  lea    -0x88(%ebp),%edx
0867e29e +0x20c:  mov    %edx,0x4(%esp)
0867e2a2 +0x210:  mov    %eax,(%esp)
0867e2a5 +0x213:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0867e2aa +0x218:  sub    $0x4,%esp
0867e2ad +0x21b:  lea    -0x78(%ebp),%eax
0867e2b0 +0x21e:  mov    %eax,0x4(%esp)
0867e2b4 +0x222:  lea    -0x90(%ebp),%eax
0867e2ba +0x228:  mov    %eax,(%esp)
0867e2bd +0x22b:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0867e2c2 +0x230:  jmp    0867e5d0 <+0x53e>
0867e2c7 +0x235:  lea    -0x8c(%ebp),%eax
0867e2cd +0x23b:  mov    %eax,(%esp)
0867e2d0 +0x23e:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867e2d5 +0x243:  mov    (%eax),%eax
0867e2d7 +0x245:  mov    %eax,-0x2c(%ebp)
0867e2da +0x248:  lea    -0x8c(%ebp),%eax
0867e2e0 +0x24e:  mov    %eax,(%esp)
0867e2e3 +0x251:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0867e2e8 +0x256:  mov    0x4(%eax),%eax
0867e2eb +0x259:  mov    %eax,-0x28(%ebp)
0867e2ee +0x25c:  cmpl   $0x2,-0x2c(%ebp)
0867e2f2 +0x260:  jne    0867e340 <+0x2ae>
0867e2f4 +0x262:  mov    -0x2c(%ebp),%edx
0867e2f7 +0x265:  lea    -0x2d4(%ebp),%ecx
0867e2fd +0x26b:  mov    %edx,%eax
0867e2ff +0x26d:  add    %eax,%eax
0867e301 +0x26f:  add    %edx,%eax
0867e303 +0x271:  shl    $0x2,%eax
0867e306 +0x274:  lea    (%ecx,%eax,1),%ebx
0867e309 +0x277:  mov    0x8(%ebp),%eax
0867e30c +0x27a:  mov    %eax,(%esp)
0867e30f +0x27d:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0867e314 +0x282:  mov    -0x28(%ebp),%edx
0867e317 +0x285:  mov    %edx,0x8(%esp)
0867e31b +0x289:  mov    %ebx,0x4(%esp)
0867e31f +0x28d:  mov    %eax,(%esp)
0867e322 +0x290:  call   0850c160 <_ZNK6CCargo14MakeItemPacketEP11PacketGuardi>  ; CCargo::MakeItemPacket(PacketGuard*, int) const
0867e327 +0x295:  mov    -0x2c(%ebp),%eax
0867e32a +0x298:  mov    -0x178(%ebp,%eax,4),%edx
0867e331 +0x29f:  add    $0x1,%edx
0867e334 +0x2a2:  mov    %edx,-0x178(%ebp,%eax,4)
0867e33b +0x2a9:  jmp    0867e5c2 <+0x530>
0867e340 +0x2ae:  cmpl   $0xc,-0x2c(%ebp)
0867e344 +0x2b2:  jne    0867e3ab <+0x319>
0867e346 +0x2b4:  mov    0x8(%ebp),%eax
0867e349 +0x2b7:  mov    %eax,(%esp)
0867e34c +0x2ba:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0867e351 +0x2bf:  test   %al,%al
0867e353 +0x2c1:  je     0867e5c2 <+0x530>
0867e359 +0x2c7:  mov    0x8(%ebp),%eax
0867e35c +0x2ca:  mov    %eax,(%esp)
0867e35f +0x2cd:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0867e364 +0x2d2:  mov    %eax,-0x24(%ebp)
0867e367 +0x2d5:  mov    -0x2c(%ebp),%edx
0867e36a +0x2d8:  lea    -0x2d4(%ebp),%ecx
0867e370 +0x2de:  mov    %edx,%eax
0867e372 +0x2e0:  add    %eax,%eax
0867e374 +0x2e2:  add    %edx,%eax
0867e376 +0x2e4:  shl    $0x2,%eax
0867e379 +0x2e7:  lea    (%ecx,%eax,1),%edx
0867e37c +0x2ea:  mov    -0x28(%ebp),%eax
0867e37f +0x2ed:  mov    %eax,0x8(%esp)
0867e383 +0x2f1:  mov    %edx,0x4(%esp)
0867e387 +0x2f5:  mov    -0x24(%ebp),%eax
0867e38a +0x2f8:  mov    %eax,(%esp)
0867e38d +0x2fb:  call   0828ab1c <_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi>  ; CAccountCargo::MakeItemPacket(PacketGuard*, int) const
0867e392 +0x300:  mov    -0x2c(%ebp),%eax
0867e395 +0x303:  mov    -0x178(%ebp,%eax,4),%edx
0867e39c +0x30a:  add    $0x1,%edx
0867e39f +0x30d:  mov    %edx,-0x178(%ebp,%eax,4)
0867e3a6 +0x314:  jmp    0867e5c2 <+0x530>
0867e3ab +0x319:  movl   $0x1,-0x20(%ebp)
0867e3b2 +0x320:  mov    -0x2c(%ebp),%eax
0867e3b5 +0x323:  cmp    $0x3,%eax
0867e3b8 +0x326:  je     0867e3cd <+0x33b>
0867e3ba +0x328:  cmp    $0x7,%eax
0867e3bd +0x32b:  je     0867e3d6 <+0x344>
0867e3bf +0x32d:  cmp    $0x1,%eax
0867e3c2 +0x330:  jne    0867e3dd <+0x34b>
0867e3c4 +0x332:  movl   $0x2,-0x20(%ebp)
0867e3cb +0x339:  jmp    0867e3dd <+0x34b>
0867e3cd +0x33b:  movl   $0x0,-0x20(%ebp)
0867e3d4 +0x342:  jmp    0867e3dd <+0x34b>
0867e3d6 +0x344:  movl   $0x3,-0x20(%ebp)
0867e3dd +0x34b:  mov    -0x20(%ebp),%ebx
0867e3e0 +0x34e:  mov    0x8(%ebp),%eax
0867e3e3 +0x351:  mov    %eax,(%esp)
0867e3e6 +0x354:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867e3eb +0x359:  lea    -0x71(%ebp),%edx
0867e3ee +0x35c:  mov    -0x28(%ebp),%ecx
0867e3f1 +0x35f:  mov    %ecx,0xc(%esp)
0867e3f5 +0x363:  mov    %ebx,0x8(%esp)
0867e3f9 +0x367:  mov    %eax,0x4(%esp)
0867e3fd +0x36b:  mov    %edx,(%esp)
0867e400 +0x36e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0867e405 +0x373:  sub    $0x4,%esp
0867e408 +0x376:  mov    -0x6f(%ebp),%eax
0867e40b +0x379:  test   %eax,%eax
0867e40d +0x37b:  sete   %al
0867e410 +0x37e:  test   %al,%al
0867e412 +0x380:  je     0867e5ae <+0x51c>
0867e418 +0x386:  mov    -0x2c(%ebp),%edx
0867e41b +0x389:  lea    -0x2d4(%ebp),%ecx
0867e421 +0x38f:  mov    %edx,%eax
0867e423 +0x391:  add    %eax,%eax
0867e425 +0x393:  add    %edx,%eax
0867e427 +0x395:  shl    $0x2,%eax
0867e42a +0x398:  lea    (%ecx,%eax,1),%edx
0867e42d +0x39b:  mov    -0x28(%ebp),%eax
0867e430 +0x39e:  mov    %eax,0x4(%esp)
0867e434 +0x3a2:  mov    %edx,(%esp)
0867e437 +0x3a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867e43c +0x3aa:  mov    -0x2c(%ebp),%edx
0867e43f +0x3ad:  lea    -0x2d4(%ebp),%ecx
0867e445 +0x3b3:  mov    %edx,%eax
0867e447 +0x3b5:  add    %eax,%eax
0867e449 +0x3b7:  add    %edx,%eax
0867e44b +0x3b9:  shl    $0x2,%eax
0867e44e +0x3bc:  lea    (%ecx,%eax,1),%eax
0867e451 +0x3bf:  movl   $0xffffffff,0x4(%esp)
0867e459 +0x3c7:  mov    %eax,(%esp)
0867e45c +0x3ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867e461 +0x3cf:  mov    -0x2c(%ebp),%edx
0867e464 +0x3d2:  lea    -0x2d4(%ebp),%ecx
0867e46a +0x3d8:  mov    %edx,%eax
0867e46c +0x3da:  add    %eax,%eax
0867e46e +0x3dc:  add    %edx,%eax
0867e470 +0x3de:  shl    $0x2,%eax
0867e473 +0x3e1:  lea    (%ecx,%eax,1),%eax
0867e476 +0x3e4:  movl   $0x0,0x4(%esp)
0867e47e +0x3ec:  mov    %eax,(%esp)
0867e481 +0x3ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867e486 +0x3f4:  mov    -0x2c(%ebp),%edx
0867e489 +0x3f7:  lea    -0x2d4(%ebp),%ecx
0867e48f +0x3fd:  mov    %edx,%eax
0867e491 +0x3ff:  add    %eax,%eax
0867e493 +0x401:  add    %edx,%eax
0867e495 +0x403:  shl    $0x2,%eax
0867e498 +0x406:  lea    (%ecx,%eax,1),%eax
0867e49b +0x409:  movl   $0x0,0x4(%esp)
0867e4a3 +0x411:  mov    %eax,(%esp)
0867e4a6 +0x414:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867e4ab +0x419:  mov    -0x2c(%ebp),%edx
0867e4ae +0x41c:  lea    -0x2d4(%ebp),%ecx
0867e4b4 +0x422:  mov    %edx,%eax
0867e4b6 +0x424:  add    %eax,%eax
0867e4b8 +0x426:  add    %edx,%eax
0867e4ba +0x428:  shl    $0x2,%eax
0867e4bd +0x42b:  lea    (%ecx,%eax,1),%eax
0867e4c0 +0x42e:  movl   $0x0,0x4(%esp)
0867e4c8 +0x436:  mov    %eax,(%esp)
0867e4cb +0x439:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867e4d0 +0x43e:  mov    -0x2c(%ebp),%edx
0867e4d3 +0x441:  lea    -0x2d4(%ebp),%ecx
0867e4d9 +0x447:  mov    %edx,%eax
0867e4db +0x449:  add    %eax,%eax
0867e4dd +0x44b:  add    %edx,%eax
0867e4df +0x44d:  shl    $0x2,%eax
0867e4e2 +0x450:  lea    (%ecx,%eax,1),%eax
0867e4e5 +0x453:  movl   $0x0,0x4(%esp)
0867e4ed +0x45b:  mov    %eax,(%esp)
0867e4f0 +0x45e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867e4f5 +0x463:  mov    -0x2c(%ebp),%edx
0867e4f8 +0x466:  lea    -0x2d4(%ebp),%ecx
0867e4fe +0x46c:  mov    %edx,%eax
0867e500 +0x46e:  add    %eax,%eax
0867e502 +0x470:  add    %edx,%eax
0867e504 +0x472:  shl    $0x2,%eax
0867e507 +0x475:  lea    (%ecx,%eax,1),%eax
0867e50a +0x478:  movl   $0x0,0x4(%esp)
0867e512 +0x480:  mov    %eax,(%esp)
0867e515 +0x483:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867e51a +0x488:  mov    -0x2c(%ebp),%edx
0867e51d +0x48b:  lea    -0x2d4(%ebp),%ecx
0867e523 +0x491:  mov    %edx,%eax
0867e525 +0x493:  add    %eax,%eax
0867e527 +0x495:  add    %edx,%eax
0867e529 +0x497:  shl    $0x2,%eax
0867e52c +0x49a:  lea    (%ecx,%eax,1),%eax
0867e52f +0x49d:  movl   $0x0,0x4(%esp)
0867e537 +0x4a5:  mov    %eax,(%esp)
0867e53a +0x4a8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867e53f +0x4ad:  mov    -0x2c(%ebp),%edx
0867e542 +0x4b0:  lea    -0x2d4(%ebp),%ecx
0867e548 +0x4b6:  mov    %edx,%eax
0867e54a +0x4b8:  add    %eax,%eax
0867e54c +0x4ba:  add    %edx,%eax
0867e54e +0x4bc:  shl    $0x2,%eax
0867e551 +0x4bf:  lea    (%ecx,%eax,1),%eax
0867e554 +0x4c2:  movl   $0x0,0x4(%esp)
0867e55c +0x4ca:  mov    %eax,(%esp)
0867e55f +0x4cd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867e564 +0x4d2:  mov    -0x2c(%ebp),%edx
0867e567 +0x4d5:  lea    -0x2d4(%ebp),%ecx
0867e56d +0x4db:  mov    %edx,%eax
0867e56f +0x4dd:  add    %eax,%eax
0867e571 +0x4df:  add    %edx,%eax
0867e573 +0x4e1:  shl    $0x2,%eax
0867e576 +0x4e4:  lea    (%ecx,%eax,1),%eax
0867e579 +0x4e7:  movl   $0x0,0x4(%esp)
0867e581 +0x4ef:  mov    %eax,(%esp)
0867e584 +0x4f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867e589 +0x4f7:  mov    -0x2c(%ebp),%edx
0867e58c +0x4fa:  lea    -0x2d4(%ebp),%ecx
0867e592 +0x500:  mov    %edx,%eax
0867e594 +0x502:  add    %eax,%eax
0867e596 +0x504:  add    %edx,%eax
0867e598 +0x506:  shl    $0x2,%eax
0867e59b +0x509:  lea    (%ecx,%eax,1),%eax
0867e59e +0x50c:  movl   $&g_emptySlot,0x4(%esp)
0867e5a6 +0x514:  mov    %eax,(%esp)
0867e5a9 +0x517:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0867e5ae +0x51c:  mov    -0x2c(%ebp),%eax
0867e5b1 +0x51f:  mov    -0x178(%ebp,%eax,4),%edx
0867e5b8 +0x526:  add    $0x1,%edx
0867e5bb +0x529:  mov    %edx,-0x178(%ebp,%eax,4)
0867e5c2 +0x530:  lea    -0x8c(%ebp),%eax
0867e5c8 +0x536:  mov    %eax,(%esp)
0867e5cb +0x539:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0867e5d0 +0x53e:  lea    -0x90(%ebp),%eax
0867e5d6 +0x544:  mov    %eax,0x4(%esp)
0867e5da +0x548:  lea    -0x8c(%ebp),%eax
0867e5e0 +0x54e:  mov    %eax,(%esp)
0867e5e3 +0x551:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0867e5e8 +0x556:  test   %al,%al
0867e5ea +0x558:  jne    0867e2c7 <+0x235>
0867e5f0 +0x55e:  movl   $0x0,-0x1c(%ebp)
0867e5f7 +0x565:  jmp    0867e69c <+0x60a>
0867e5fc +0x56a:  mov    -0x1c(%ebp),%eax
0867e5ff +0x56d:  mov    -0x178(%ebp,%eax,4),%eax
0867e606 +0x574:  test   %eax,%eax
0867e608 +0x576:  je     0867e697 <+0x605>
0867e60e +0x57c:  mov    -0x1c(%ebp),%eax
0867e611 +0x57f:  mov    -0x178(%ebp,%eax,4),%ecx
0867e618 +0x586:  mov    -0x1c(%ebp),%edx
0867e61b +0x589:  lea    -0x104(%ebp),%eax
0867e621 +0x58f:  shl    $0x2,%edx
0867e624 +0x592:  lea    (%eax,%edx,1),%ebx
0867e627 +0x595:  mov    -0x1c(%ebp),%edx
0867e62a +0x598:  lea    -0x2d4(%ebp),%esi
0867e630 +0x59e:  mov    %edx,%eax
0867e632 +0x5a0:  add    %eax,%eax
0867e634 +0x5a2:  add    %edx,%eax
0867e636 +0x5a4:  shl    $0x2,%eax
0867e639 +0x5a7:  lea    (%esi,%eax,1),%eax
0867e63c +0x5aa:  mov    %ecx,0x8(%esp)
0867e640 +0x5ae:  mov    %ebx,0x4(%esp)
0867e644 +0x5b2:  mov    %eax,(%esp)
0867e647 +0x5b5:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
0867e64c +0x5ba:  mov    -0x1c(%ebp),%edx
0867e64f +0x5bd:  lea    -0x2d4(%ebp),%ecx
0867e655 +0x5c3:  mov    %edx,%eax
0867e657 +0x5c5:  add    %eax,%eax
0867e659 +0x5c7:  add    %edx,%eax
0867e65b +0x5c9:  shl    $0x2,%eax
0867e65e +0x5cc:  lea    (%ecx,%eax,1),%eax
0867e661 +0x5cf:  movl   $0x1,0x4(%esp)
0867e669 +0x5d7:  mov    %eax,(%esp)
0867e66c +0x5da:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867e671 +0x5df:  mov    -0x1c(%ebp),%edx
0867e674 +0x5e2:  lea    -0x2d4(%ebp),%ecx
0867e67a +0x5e8:  mov    %edx,%eax
0867e67c +0x5ea:  add    %eax,%eax
0867e67e +0x5ec:  add    %edx,%eax
0867e680 +0x5ee:  shl    $0x2,%eax
0867e683 +0x5f1:  lea    (%ecx,%eax,1),%eax
0867e686 +0x5f4:  mov    %eax,0x4(%esp)
0867e68a +0x5f8:  mov    0x8(%ebp),%eax
0867e68d +0x5fb:  mov    %eax,(%esp)
0867e690 +0x5fe:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867e695 +0x603:  jmp    0867e698 <+0x606>
0867e697 +0x605:  nop
0867e698 +0x606:  addl   $0x1,-0x1c(%ebp)
0867e69c +0x60a:  cmpl   $0x1c,-0x1c(%ebp)
0867e6a0 +0x60e:  setle  %al
0867e6a3 +0x611:  test   %al,%al
0867e6a5 +0x613:  jne    0867e5fc <+0x56a>
0867e6ab +0x619:  jmp    0867e6da <+0x648>
0867e6ad +0x61b:  mov    %edx,%esi
0867e6af +0x61d:  mov    %eax,%edi
0867e6b1 +0x61f:  lea    -0x2d4(%ebp),%eax
0867e6b7 +0x625:  lea    0x15c(%eax),%ebx
0867e6bd +0x62b:  lea    -0x2d4(%ebp),%eax
0867e6c3 +0x631:  cmp    %eax,%ebx
0867e6c5 +0x633:  je     0867e6d4 <+0x642>
0867e6c7 +0x635:  sub    $0xc,%ebx
0867e6ca +0x638:  mov    %ebx,(%esp)
0867e6cd +0x63b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867e6d2 +0x640:  jmp    0867e6bd <+0x62b>
0867e6d4 +0x642:  mov    %edi,%eax
0867e6d6 +0x644:  mov    %esi,%edx
0867e6d8 +0x646:  jmp    0867e6fd <+0x66b>
0867e6da +0x648:  lea    -0x2d4(%ebp),%eax
0867e6e0 +0x64e:  lea    0x15c(%eax),%ebx
0867e6e6 +0x654:  lea    -0x2d4(%ebp),%eax
0867e6ec +0x65a:  cmp    %eax,%ebx
0867e6ee +0x65c:  je     0867e71b <+0x689>
0867e6f0 +0x65e:  sub    $0xc,%ebx
0867e6f3 +0x661:  mov    %ebx,(%esp)
0867e6f6 +0x664:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867e6fb +0x669:  jmp    0867e6e6 <+0x654>
0867e6fd +0x66b:  mov    %edx,%ebx
0867e6ff +0x66d:  mov    %eax,%esi
0867e701 +0x66f:  lea    -0x88(%ebp),%eax
0867e707 +0x675:  mov    %eax,(%esp)
0867e70a +0x678:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867e70f +0x67d:  mov    %esi,%eax
0867e711 +0x67f:  mov    %ebx,%edx
0867e713 +0x681:  mov    %eax,(%esp)
0867e716 +0x684:  call   08ae3750 <_Unwind_Resume>
0867e71b +0x689:  lea    -0x88(%ebp),%eax
0867e721 +0x68f:  mov    %eax,(%esp)
0867e724 +0x692:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867e729 +0x697:  lea    -0xc(%ebp),%esp
0867e72c +0x69a:  add    $0x0,%esp
0867e72f +0x69d:  pop    %ebx
0867e730 +0x69e:  pop    %esi
0867e731 +0x69f:  pop    %edi
0867e732 +0x6a0:  pop    %ebp
0867e733 +0x6a1:  ret
```

## 反编译 C

```c
// CUser::processDelDailyItem @ 0x867e092

/* CUser::processDelDailyItem() */

void __thiscall CUser::processDelDailyItem(CUser *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  CCargo *this_00;
  PacketGuard *pPVar6;
  byte bVar7;
  PacketGuard local_2d8 [24];
  PacketGuard aPStack_2c0 [324];
  PacketGuard local_17c [116];
  int local_108 [29];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_94 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_90 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  __normal_iterator local_80 [4];
  __normal_iterator local_7c [7];
  undefined1 local_75 [2];
  int local_73;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  CAccountCargo *local_28;
  undefined4 local_24;
  int local_20;
  
  bVar7 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_8c);
                    /* try { // try from 0867e0cc to 0867e0f5 has its CatchHandler @ 0867e6fd */
  deleteDailyStackableItem(this,(vector *)local_8c,3,8);
  deleteDailyStackableItem(this,(vector *)local_8c,0x39,0x68);
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_8c);
  if (iVar3 != 0) {
    local_38 = 0x1d;
    pPVar6 = local_2d8;
    for (iVar3 = 0x1c; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 0867e12a to 0867e12e has its CatchHandler @ 0867e141 */
      PacketGuard::PacketGuard(pPVar6);
      pPVar6 = pPVar6 + 0xc;
    }
    piVar5 = local_108;
    for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    }
    pPVar6 = local_17c;
    for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pPVar6 = 0;
      pPVar6 = pPVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    for (local_34 = 0; local_34 < 0x1d; local_34 = local_34 + 1) {
                    /* try { // try from 0867e1e0 to 0867e694 has its CatchHandler @ 0867e6ad */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)(local_2d8 + local_34 * 0xc),0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_2d8 + local_34 * 0xc),local_34);
      iVar3 = local_34;
      iVar4 = InterfacePacketBuf::get_index((InterfacePacketBuf *)(local_2d8 + local_34 * 0xc));
      local_108[iVar3] = iVar4;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_2d8 + local_34 * 0xc),0);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_90,local_80);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_94,local_7c);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_90,local_94);
      if (!bVar2) break;
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_90);
      local_30 = *piVar5;
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_90);
      local_2c = *(int *)(iVar3 + 4);
      if (local_30 == 2) {
        this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        CCargo::MakeItemPacket(this_00,aPStack_2c0,local_2c);
        *(int *)(local_17c + local_30 * 4) = *(int *)(local_17c + local_30 * 4) + 1;
      }
      else if (local_30 == 0xc) {
        cVar1 = IsExistAccountCargo(this);
        if (cVar1 != '\0') {
          local_28 = (CAccountCargo *)GetAccountCargo(this);
          CAccountCargo::MakeItemPacket(local_28,local_2d8 + local_30 * 0xc,local_2c);
          *(int *)(local_17c + local_30 * 4) = *(int *)(local_17c + local_30 * 4) + 1;
        }
      }
      else {
        local_24 = 1;
        if (local_30 == 3) {
          local_24 = 0;
        }
        else if (local_30 == 7) {
          local_24 = 3;
        }
        else if (local_30 == 1) {
          local_24 = 2;
        }
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        CInventory::GetInvenSlot((int)local_75,iVar3);
        if (local_73 == 0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),local_2c)
          ;
          InterfacePacketBuf::put_int((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),-1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),0);
          InterfacePacketBuf::put_packet
                    ((InterfacePacketBuf *)(local_2d8 + local_30 * 0xc),(Inven_Item *)g_emptySlot);
        }
        *(int *)(local_17c + local_30 * 4) = *(int *)(local_17c + local_30 * 4) + 1;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_90);
    }
    for (local_20 = 0; local_20 < 0x1d; local_20 = local_20 + 1) {
      if (*(int *)(local_17c + local_20 * 4) != 0) {
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)(local_2d8 + local_20 * 0xc),local_108 + local_20,
                   *(int *)(local_17c + local_20 * 4));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)(local_2d8 + local_20 * 0xc),true);
        Send(this,local_2d8 + local_20 * 0xc);
      }
    }
    pPVar6 = local_17c;
    while (pPVar6 != local_2d8) {
      pPVar6 = pPVar6 + -0xc;
                    /* try { // try from 0867e6f6 to 0867e6fa has its CatchHandler @ 0867e6fd */
      PacketGuard::~PacketGuard(pPVar6);
    }
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
  return;
}
```
