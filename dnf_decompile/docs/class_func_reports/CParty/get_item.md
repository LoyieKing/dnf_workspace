# get_item

`_ZN6CParty8get_itemEP5CUseribcRiRhRb`

`CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a3b98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a3b98  _ZN6CParty8get_itemEP5CUseribcRiRhRb
#           CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)
# range [0x085a3b98, 0x085a63f3]
085a3b98 +0x0000:  push   %ebp
085a3b99 +0x0001:  mov    %esp,%ebp
085a3b9b +0x0003:  push   %edi
085a3b9c +0x0004:  push   %esi
085a3b9d +0x0005:  push   %ebx
085a3b9e +0x0006:  sub    $0x32c,%esp
085a3ba4 +0x000c:  mov    0x14(%ebp),%edx
085a3ba7 +0x000f:  mov    0x18(%ebp),%eax
085a3baa +0x0012:  mov    %dl,-0x2cc(%ebp)
085a3bb0 +0x0018:  mov    %al,-0x2d0(%ebp)
085a3bb6 +0x001e:  movb   $0x1,-0xe9(%ebp)
085a3bbd +0x0025:  movl   $0x0,-0xe8(%ebp)
085a3bc7 +0x002f:  movl   $0x0,-0x234(%ebp)
085a3bd1 +0x0039:  movl   $0x0,-0x230(%ebp)
085a3bdb +0x0043:  movl   $0x0,-0x22c(%ebp)
085a3be5 +0x004d:  movl   $0x0,-0x228(%ebp)
085a3bef +0x0057:  lea    -0x240(%ebp),%eax
085a3bf5 +0x005d:  mov    %eax,(%esp)
085a3bf8 +0x0060:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a3bfd +0x0065:  movl   $0x0,-0xe4(%ebp)
085a3c07 +0x006f:  mov    0xc(%ebp),%eax
085a3c0a +0x0072:  mov    %eax,0x4(%esp)
085a3c0e +0x0076:  mov    0x8(%ebp),%eax
085a3c11 +0x0079:  mov    %eax,(%esp)
085a3c14 +0x007c:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085a3c19 +0x0081:  mov    %eax,-0xe0(%ebp)
085a3c1f +0x0087:  cmpl   $0xffffffff,-0xe0(%ebp)
085a3c26 +0x008e:  je     085a3ca1 <+0x109>
085a3c28 +0x0090:  mov    -0xe0(%ebp),%eax
085a3c2e +0x0096:  mov    0x8(%ebp),%edx
085a3c31 +0x0099:  movzbl 0x380(%edx,%eax,1),%eax
085a3c39 +0x00a1:  xor    $0x1,%eax
085a3c3c +0x00a4:  test   %al,%al
085a3c3e +0x00a6:  je     085a3ca1 <+0x109>
085a3c40 +0x00a8:  mov    0xc(%ebp),%eax
085a3c43 +0x00ab:  mov    %eax,(%esp)
085a3c46 +0x00ae:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a3c4b +0x00b3:  mov    %eax,(%esp)
085a3c4e +0x00b6:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085a3c53 +0x00bb:  mov    %eax,(%esp)
085a3c56 +0x00be:  call   0833a638 <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv>  ; user_creature::CCreatureMgr::GetCreatureItemId() const
085a3c5b +0x00c3:  cmp    $0xf631,%eax
085a3c60 +0x00c8:  setne  %al
085a3c63 +0x00cb:  test   %al,%al
085a3c65 +0x00cd:  je     085a3ca1 <+0x109>
085a3c67 +0x00cf:  mov    0xc(%ebp),%eax
085a3c6a +0x00d2:  mov    %eax,(%esp)
085a3c6d +0x00d5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a3c72 +0x00da:  movl   $0x0,0x14(%esp)
085a3c7a +0x00e2:  movl   $0x0,0x10(%esp)
085a3c82 +0x00ea:  movl   $0x1,0xc(%esp)
085a3c8a +0x00f2:  movl   $0x132,0x8(%esp)
085a3c92 +0x00fa:  mov    0xc(%ebp),%edx
085a3c95 +0x00fd:  mov    %edx,0x4(%esp)
085a3c99 +0x0101:  mov    %eax,(%esp)
085a3c9c +0x0104:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a3ca1 +0x0109:  mov    0x8(%ebp),%eax
085a3ca4 +0x010c:  mov    0xcac(%eax),%eax
085a3caa +0x0112:  test   %eax,%eax
085a3cac +0x0114:  je     085a3cca <+0x132>
085a3cae +0x0116:  mov    0x8(%ebp),%eax
085a3cb1 +0x0119:  mov    0xcac(%eax),%eax
085a3cb7 +0x011f:  mov    %eax,(%esp)
085a3cba +0x0122:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085a3cbf +0x0127:  test   %al,%al
085a3cc1 +0x0129:  je     085a3cca <+0x132>
085a3cc3 +0x012b:  mov    $0x1,%eax
085a3cc8 +0x0130:  jmp    085a3ccf <+0x137>
085a3cca +0x0132:  mov    $0x0,%eax
085a3ccf +0x0137:  test   %al,%al
085a3cd1 +0x0139:  je     085a3cee <+0x156>
085a3cd3 +0x013b:  mov    0x8(%ebp),%eax
085a3cd6 +0x013e:  lea    0xb24(%eax),%edx
085a3cdc +0x0144:  mov    -0xe0(%ebp),%eax
085a3ce2 +0x014a:  mov    %eax,0x4(%esp)
085a3ce6 +0x014e:  mov    %edx,(%esp)
085a3ce9 +0x0151:  call   082a43cc <_GLOBAL__I__ZN4CLog5this_E+0x7f3>  ; global constructors keyed to CLog::this_+0x7f3
085a3cee +0x0156:  lea    -0x2bc(%ebp),%eax
085a3cf4 +0x015c:  mov    %eax,(%esp)
085a3cf7 +0x015f:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
085a3cfc +0x0164:  mov    0x8(%ebp),%eax
085a3cff +0x0167:  lea    0xb24(%eax),%edx
085a3d05 +0x016d:  lea    -0x2bc(%ebp),%eax
085a3d0b +0x0173:  mov    %eax,0x8(%esp)
085a3d0f +0x0177:  mov    0x10(%ebp),%eax
085a3d12 +0x017a:  mov    %eax,0x4(%esp)
085a3d16 +0x017e:  mov    %edx,(%esp)
085a3d19 +0x0181:  call   0830d9c0 <_ZN13CBattle_Field14get_field_itemEiR8map_item>  ; CBattle_Field::get_field_item(int, map_item&)
085a3d1e +0x0186:  mov    %al,-0xd9(%ebp)
085a3d24 +0x018c:  movzbl -0xd9(%ebp),%eax
085a3d2b +0x0193:  xor    $0x1,%eax
085a3d2e +0x0196:  test   %al,%al
085a3d30 +0x0198:  je     085a3ec9 <+0x331>
085a3d36 +0x019e:  movl   $0x2e,0x8(%esp)
085a3d3e +0x01a6:  movl   $0x1,0x4(%esp)
085a3d46 +0x01ae:  lea    -0x240(%ebp),%eax
085a3d4c +0x01b4:  mov    %eax,(%esp)
085a3d4f +0x01b7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a3d54 +0x01bc:  movl   $0x0,0x4(%esp)
085a3d5c +0x01c4:  lea    -0x240(%ebp),%eax
085a3d62 +0x01ca:  mov    %eax,(%esp)
085a3d65 +0x01cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3d6a +0x01d2:  cmpb   $0x3,-0x2d0(%ebp)
085a3d71 +0x01d9:  jle    085a3d8b <+0x1f3>
085a3d73 +0x01db:  movl   $0x51,0x4(%esp)
085a3d7b +0x01e3:  lea    -0x240(%ebp),%eax
085a3d81 +0x01e9:  mov    %eax,(%esp)
085a3d84 +0x01ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3d89 +0x01f1:  jmp    085a3da1 <+0x209>
085a3d8b +0x01f3:  movl   $0x15,0x4(%esp)
085a3d93 +0x01fb:  lea    -0x240(%ebp),%eax
085a3d99 +0x0201:  mov    %eax,(%esp)
085a3d9c +0x0204:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3da1 +0x0209:  movl   $0x1,0x4(%esp)
085a3da9 +0x0211:  lea    -0x240(%ebp),%eax
085a3daf +0x0217:  mov    %eax,(%esp)
085a3db2 +0x021a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a3db7 +0x021f:  lea    -0x240(%ebp),%eax
085a3dbd +0x0225:  mov    %eax,0x4(%esp)
085a3dc1 +0x0229:  mov    0xc(%ebp),%eax
085a3dc4 +0x022c:  mov    %eax,(%esp)
085a3dc7 +0x022f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a3dcc +0x0234:  mov    0x8(%ebp),%eax
085a3dcf +0x0237:  mov    %eax,(%esp)
085a3dd2 +0x023a:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
085a3dd7 +0x023f:  test   %al,%al
085a3dd9 +0x0241:  jne    085a3deb <+0x253>
085a3ddb +0x0243:  mov    0x8(%ebp),%eax
085a3dde +0x0246:  mov    %eax,(%esp)
085a3de1 +0x0249:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a3de6 +0x024e:  cmp    $0x1,%eax
085a3de9 +0x0251:  jne    085a3df2 <+0x25a>
085a3deb +0x0253:  mov    $0x1,%eax
085a3df0 +0x0258:  jmp    085a3df7 <+0x25f>
085a3df2 +0x025a:  mov    $0x0,%eax
085a3df7 +0x025f:  test   %al,%al
085a3df9 +0x0261:  je     085a3ebf <+0x327>
085a3dff +0x0267:  movb   $0x0,-0xc9(%ebp)
085a3e06 +0x026e:  mov    0x8(%ebp),%eax
085a3e09 +0x0271:  add    $0xb24,%eax
085a3e0e +0x0276:  mov    %eax,(%esp)
085a3e11 +0x0279:  call   0822cf50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25fa
085a3e16 +0x027e:  xor    $0x1,%eax
085a3e19 +0x0281:  test   %al,%al
085a3e1b +0x0283:  jne    085a3e31 <+0x299>
085a3e1d +0x0285:  mov    0x8(%ebp),%eax
085a3e20 +0x0288:  add    $0xb24,%eax
085a3e25 +0x028d:  mov    %eax,(%esp)
085a3e28 +0x0290:  call   085bf2e8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x846>  ; global constructors keyed to CParty::cMember::cMember()+0x846
085a3e2d +0x0295:  test   %al,%al
085a3e2f +0x0297:  je     085a3e38 <+0x2a0>
085a3e31 +0x0299:  mov    $0x1,%eax
085a3e36 +0x029e:  jmp    085a3e3d <+0x2a5>
085a3e38 +0x02a0:  mov    $0x0,%eax
085a3e3d +0x02a5:  test   %al,%al
085a3e3f +0x02a7:  je     085a3e48 <+0x2b0>
085a3e41 +0x02a9:  movb   $0x1,-0xc9(%ebp)
085a3e48 +0x02b0:  movzbl -0xc9(%ebp),%eax
085a3e4f +0x02b7:  xor    $0x1,%eax
085a3e52 +0x02ba:  test   %al,%al
085a3e54 +0x02bc:  jne    085a3e75 <+0x2dd>
085a3e56 +0x02be:  mov    0x8(%ebp),%eax
085a3e59 +0x02c1:  lea    0xb24(%eax),%edx
085a3e5f +0x02c7:  mov    0x10(%ebp),%eax
085a3e62 +0x02ca:  mov    %eax,0x4(%esp)
085a3e66 +0x02ce:  mov    %edx,(%esp)
085a3e69 +0x02d1:  call   0830da6c <_ZN13CBattle_Field18is_last_field_itemEi>  ; CBattle_Field::is_last_field_item(int)
085a3e6e +0x02d6:  xor    $0x1,%eax
085a3e71 +0x02d9:  test   %al,%al
085a3e73 +0x02db:  je     085a3e7c <+0x2e4>
085a3e75 +0x02dd:  mov    $0x1,%eax
085a3e7a +0x02e2:  jmp    085a3e81 <+0x2e9>
085a3e7c +0x02e4:  mov    $0x0,%eax
085a3e81 +0x02e9:  test   %al,%al
085a3e83 +0x02eb:  je     085a3ebf <+0x327>
085a3e85 +0x02ed:  mov    0xc(%ebp),%eax
085a3e88 +0x02f0:  mov    %eax,(%esp)
085a3e8b +0x02f3:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a3e90 +0x02f8:  movl   $0x0,0x14(%esp)
085a3e98 +0x0300:  movl   $0x0,0x10(%esp)
085a3ea0 +0x0308:  movl   $0x1,0xc(%esp)
085a3ea8 +0x0310:  movl   $0x12d,0x8(%esp)
085a3eb0 +0x0318:  mov    0xc(%ebp),%edx
085a3eb3 +0x031b:  mov    %edx,0x4(%esp)
085a3eb7 +0x031f:  mov    %eax,(%esp)
085a3eba +0x0322:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a3ebf +0x0327:  mov    $0x0,%ebx
085a3ec4 +0x032c:  jmp    085a63d9 <+0x2841>
085a3ec9 +0x0331:  movl   $0x0,-0x244(%ebp)
085a3ed3 +0x033b:  mov    0x8(%ebp),%eax
085a3ed6 +0x033e:  mov    %eax,(%esp)
085a3ed9 +0x0341:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a3ede +0x0346:  mov    %eax,-0xd8(%ebp)
085a3ee4 +0x034c:  cmpl   $0x0,-0xd8(%ebp)
085a3eeb +0x0353:  jg     085a3f6c <+0x3d4>
085a3eed +0x0355:  movl   $0x2e,0x8(%esp)
085a3ef5 +0x035d:  movl   $0x1,0x4(%esp)
085a3efd +0x0365:  lea    -0x240(%ebp),%eax
085a3f03 +0x036b:  mov    %eax,(%esp)
085a3f06 +0x036e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a3f0b +0x0373:  movl   $0x0,0x4(%esp)
085a3f13 +0x037b:  lea    -0x240(%ebp),%eax
085a3f19 +0x0381:  mov    %eax,(%esp)
085a3f1c +0x0384:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3f21 +0x0389:  movl   $0x15,0x4(%esp)
085a3f29 +0x0391:  lea    -0x240(%ebp),%eax
085a3f2f +0x0397:  mov    %eax,(%esp)
085a3f32 +0x039a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3f37 +0x039f:  movl   $0x1,0x4(%esp)
085a3f3f +0x03a7:  lea    -0x240(%ebp),%eax
085a3f45 +0x03ad:  mov    %eax,(%esp)
085a3f48 +0x03b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a3f4d +0x03b5:  lea    -0x240(%ebp),%eax
085a3f53 +0x03bb:  mov    %eax,0x4(%esp)
085a3f57 +0x03bf:  mov    0xc(%ebp),%eax
085a3f5a +0x03c2:  mov    %eax,(%esp)
085a3f5d +0x03c5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a3f62 +0x03ca:  mov    $0x0,%ebx
085a3f67 +0x03cf:  jmp    085a63d9 <+0x2841>
085a3f6c +0x03d4:  mov    -0x2aa(%ebp),%eax
085a3f72 +0x03da:  test   %eax,%eax
085a3f74 +0x03dc:  jne    085a4bf2 <+0x105a>
085a3f7a +0x03e2:  mov    0x8(%ebp),%eax
085a3f7d +0x03e5:  mov    %eax,(%esp)
085a3f80 +0x03e8:  call   0859a918 <_ZN6CParty24get_live_count_enter_mapEv>  ; CParty::get_live_count_enter_map()
085a3f85 +0x03ed:  mov    %eax,-0xc8(%ebp)
085a3f8b +0x03f3:  cmpl   $0x0,-0xc8(%ebp)
085a3f92 +0x03fa:  jg     085a4013 <+0x47b>
085a3f94 +0x03fc:  movl   $0x2e,0x8(%esp)
085a3f9c +0x0404:  movl   $0x1,0x4(%esp)
085a3fa4 +0x040c:  lea    -0x240(%ebp),%eax
085a3faa +0x0412:  mov    %eax,(%esp)
085a3fad +0x0415:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a3fb2 +0x041a:  movl   $0x0,0x4(%esp)
085a3fba +0x0422:  lea    -0x240(%ebp),%eax
085a3fc0 +0x0428:  mov    %eax,(%esp)
085a3fc3 +0x042b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3fc8 +0x0430:  movl   $0x15,0x4(%esp)
085a3fd0 +0x0438:  lea    -0x240(%ebp),%eax
085a3fd6 +0x043e:  mov    %eax,(%esp)
085a3fd9 +0x0441:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a3fde +0x0446:  movl   $0x1,0x4(%esp)
085a3fe6 +0x044e:  lea    -0x240(%ebp),%eax
085a3fec +0x0454:  mov    %eax,(%esp)
085a3fef +0x0457:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a3ff4 +0x045c:  lea    -0x240(%ebp),%eax
085a3ffa +0x0462:  mov    %eax,0x4(%esp)
085a3ffe +0x0466:  mov    0xc(%ebp),%eax
085a4001 +0x0469:  mov    %eax,(%esp)
085a4004 +0x046c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a4009 +0x0471:  mov    $0x0,%ebx
085a400e +0x0476:  jmp    085a63d9 <+0x2841>
085a4013 +0x047b:  lea    -0x2bc(%ebp),%eax
085a4019 +0x0481:  add    $0x10,%eax
085a401c +0x0484:  mov    %eax,(%esp)
085a401f +0x0487:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a4024 +0x048c:  mov    %eax,-0xc4(%ebp)
085a402a +0x0492:  cmpl   $0x7a11f,-0xc4(%ebp)
085a4034 +0x049c:  jle    085a40b0 <+0x518>
085a4036 +0x049e:  mov    0x8(%ebp),%eax
085a4039 +0x04a1:  add    $0xb24,%eax
085a403e +0x04a6:  mov    %eax,(%esp)
085a4041 +0x04a9:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a4046 +0x04ae:  mov    %eax,%esi
085a4048 +0x04b0:  mov    0x8(%ebp),%eax
085a404b +0x04b3:  mov    %eax,(%esp)
085a404e +0x04b6:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a4053 +0x04bb:  mov    %eax,%ebx
085a4055 +0x04bd:  mov    0x8(%ebp),%eax
085a4058 +0x04c0:  mov    0xcb8(%eax),%edi
085a405e +0x04c6:  movl   $0x4,0xc(%esp)
085a4066 +0x04ce:  movl   $0x165c,0x8(%esp)
085a406e +0x04d6:  movl   $&_ZZN6CParty8get_itemEP5CUseribcRiRhRbE19__PRETTY_FUNCTION__,0x4(%esp)
085a4076 +0x04de:  lea    -0x224(%ebp),%eax
085a407c +0x04e4:  mov    %eax,(%esp)
085a407f +0x04e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a4084 +0x04ec:  mov    %esi,0x14(%esp)
085a4088 +0x04f0:  mov    %ebx,0x10(%esp)
085a408c +0x04f4:  mov    -0xc4(%ebp),%eax
085a4092 +0x04fa:  mov    %eax,0xc(%esp)
085a4096 +0x04fe:  mov    %edi,0x8(%esp)
085a409a +0x0502:  movl   $"Dungeon(%d) drop money(%d) on %d' party member with difficulty %d",0x4(%esp)
085a40a2 +0x050a:  lea    -0x224(%ebp),%eax
085a40a8 +0x0510:  mov    %eax,(%esp)
085a40ab +0x0513:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a40b0 +0x0518:  lea    -0x2bc(%ebp),%eax
085a40b6 +0x051e:  add    $0x10,%eax
085a40b9 +0x0521:  mov    %eax,(%esp)
085a40bc +0x0524:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a40c1 +0x0529:  mov    %eax,%edx
085a40c3 +0x052b:  sar    $0x1f,%edx
085a40c6 +0x052e:  idivl  -0xc8(%ebp)
085a40cc +0x0534:  mov    %eax,-0xc0(%ebp)
085a40d2 +0x053a:  lea    -0x2bc(%ebp),%eax
085a40d8 +0x0540:  add    $0x10,%eax
085a40db +0x0543:  mov    %eax,(%esp)
085a40de +0x0546:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a40e3 +0x054b:  mov    %eax,%edx
085a40e5 +0x054d:  sar    $0x1f,%edx
085a40e8 +0x0550:  idivl  -0xc8(%ebp)
085a40ee +0x0556:  mov    %edx,-0xbc(%ebp)
085a40f4 +0x055c:  mov    -0xbc(%ebp),%eax
085a40fa +0x0562:  mov    -0xc0(%ebp),%edx
085a4100 +0x0568:  lea    (%edx,%eax,1),%eax
085a4103 +0x056b:  mov    %eax,-0xb8(%ebp)
085a4109 +0x0571:  mov    -0xc0(%ebp),%eax
085a410f +0x0577:  mov    %eax,-0xb4(%ebp)
085a4115 +0x057d:  movl   $0x27,0x8(%esp)
085a411d +0x0585:  movl   $0x0,0x4(%esp)
085a4125 +0x058d:  lea    -0x240(%ebp),%eax
085a412b +0x0593:  mov    %eax,(%esp)
085a412e +0x0596:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a4133 +0x059b:  mov    0x10(%ebp),%eax
085a4136 +0x059e:  mov    %eax,0x4(%esp)
085a413a +0x05a2:  lea    -0x240(%ebp),%eax
085a4140 +0x05a8:  mov    %eax,(%esp)
085a4143 +0x05ab:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a4148 +0x05b0:  mov    0xc(%ebp),%eax
085a414b +0x05b3:  mov    %eax,(%esp)
085a414e +0x05b6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a4153 +0x05bb:  movzwl %ax,%eax
085a4156 +0x05be:  mov    %eax,0x4(%esp)
085a415a +0x05c2:  lea    -0x240(%ebp),%eax
085a4160 +0x05c8:  mov    %eax,(%esp)
085a4163 +0x05cb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a4168 +0x05d0:  movl   $0x0,-0xac(%ebp)
085a4172 +0x05da:  jmp    085a4ab1 <+0xf19>
085a4177 +0x05df:  mov    -0xac(%ebp),%eax
085a417d +0x05e5:  mov    %eax,0x4(%esp)
085a4181 +0x05e9:  mov    0x8(%ebp),%eax
085a4184 +0x05ec:  mov    %eax,(%esp)
085a4187 +0x05ef:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a418c +0x05f4:  test   %al,%al
085a418e +0x05f6:  je     085a4a7e <+0xee6>
085a4194 +0x05fc:  movl   $0x1,0x4(%esp)
085a419c +0x0604:  lea    -0x240(%ebp),%eax
085a41a2 +0x060a:  mov    %eax,(%esp)
085a41a5 +0x060d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a41aa +0x0612:  mov    -0xac(%ebp),%edx
085a41b0 +0x0618:  mov    0x8(%ebp),%ecx
085a41b3 +0x061b:  mov    %edx,%eax
085a41b5 +0x061d:  add    %eax,%eax
085a41b7 +0x061f:  add    %edx,%eax
085a41b9 +0x0621:  shl    $0x3,%eax
085a41bc +0x0624:  lea    (%ecx,%eax,1),%eax
085a41bf +0x0627:  add    $0x78,%eax
085a41c2 +0x062a:  mov    (%eax),%eax
085a41c4 +0x062c:  cmp    0xc(%ebp),%eax
085a41c7 +0x062f:  jne    085a41d1 <+0x639>
085a41c9 +0x0631:  mov    -0xb8(%ebp),%eax
085a41cf +0x0637:  jmp    085a41d7 <+0x63f>
085a41d1 +0x0639:  mov    -0xb4(%ebp),%eax
085a41d7 +0x063f:  mov    %eax,-0xa8(%ebp)
085a41dd +0x0645:  cmpl   $0x7a11f,-0xb8(%ebp)
085a41e7 +0x064f:  jle    085a42c3 <+0x72b>
085a41ed +0x0655:  mov    -0xac(%ebp),%edx
085a41f3 +0x065b:  mov    0x8(%ebp),%ecx
085a41f6 +0x065e:  mov    %edx,%eax
085a41f8 +0x0660:  add    %eax,%eax
085a41fa +0x0662:  add    %edx,%eax
085a41fc +0x0664:  shl    $0x3,%eax
085a41ff +0x0667:  lea    (%ecx,%eax,1),%eax
085a4202 +0x066a:  add    $0x78,%eax
085a4205 +0x066d:  mov    (%eax),%eax
085a4207 +0x066f:  mov    %eax,(%esp)
085a420a +0x0672:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a420f +0x0677:  mov    %eax,(%esp)
085a4212 +0x067a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085a4217 +0x067f:  mov    %eax,%edi
085a4219 +0x0681:  mov    -0xac(%ebp),%edx
085a421f +0x0687:  mov    0x8(%ebp),%ecx
085a4222 +0x068a:  mov    %edx,%eax
085a4224 +0x068c:  add    %eax,%eax
085a4226 +0x068e:  add    %edx,%eax
085a4228 +0x0690:  shl    $0x3,%eax
085a422b +0x0693:  lea    (%ecx,%eax,1),%eax
085a422e +0x0696:  add    $0x78,%eax
085a4231 +0x0699:  mov    (%eax),%eax
085a4233 +0x069b:  mov    %eax,(%esp)
085a4236 +0x069e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085a423b +0x06a3:  mov    %eax,%esi
085a423d +0x06a5:  mov    -0xac(%ebp),%edx
085a4243 +0x06ab:  mov    0x8(%ebp),%ecx
085a4246 +0x06ae:  mov    %edx,%eax
085a4248 +0x06b0:  add    %eax,%eax
085a424a +0x06b2:  add    %edx,%eax
085a424c +0x06b4:  shl    $0x3,%eax
085a424f +0x06b7:  lea    (%ecx,%eax,1),%eax
085a4252 +0x06ba:  add    $0x78,%eax
085a4255 +0x06bd:  mov    (%eax),%eax
085a4257 +0x06bf:  mov    %eax,(%esp)
085a425a +0x06c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085a425f +0x06c7:  movl   $0x0,0x4(%esp)
085a4267 +0x06cf:  mov    %eax,(%esp)
085a426a +0x06d2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085a426f +0x06d7:  mov    %eax,%ebx
085a4271 +0x06d9:  movl   $0x4,0xc(%esp)
085a4279 +0x06e1:  movl   $0x1688,0x8(%esp)
085a4281 +0x06e9:  movl   $&_ZZN6CParty8get_itemEP5CUseribcRiRhRbE19__PRETTY_FUNCTION__,0x4(%esp)
085a4289 +0x06f1:  lea    -0x214(%ebp),%eax
085a428f +0x06f7:  mov    %eax,(%esp)
085a4292 +0x06fa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a4297 +0x06ff:  mov    %edi,0x14(%esp)
085a429b +0x0703:  mov    -0xb8(%ebp),%eax
085a42a1 +0x0709:  mov    %eax,0x10(%esp)
085a42a5 +0x070d:  mov    %esi,0xc(%esp)
085a42a9 +0x0711:  mov    %ebx,0x8(%esp)
085a42ad +0x0715:  movl   $"User(%s) Charac(%s) gain money(%d), old money is %d.",0x4(%esp)
085a42b5 +0x071d:  lea    -0x214(%ebp),%eax
085a42bb +0x0723:  mov    %eax,(%esp)
085a42be +0x0726:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a42c3 +0x072b:  mov    -0xac(%ebp),%eax
085a42c9 +0x0731:  mov    0x8(%ebp),%edx
085a42cc +0x0734:  movzbl 0x384(%edx,%eax,1),%eax
085a42d4 +0x073c:  xor    $0x1,%eax
085a42d7 +0x073f:  test   %al,%al
085a42d9 +0x0741:  je     085a42e5 <+0x74d>
085a42db +0x0743:  movl   $0x0,-0xa8(%ebp)
085a42e5 +0x074d:  mov    -0xa8(%ebp),%eax
085a42eb +0x0753:  mov    %eax,-0xa4(%ebp)
085a42f1 +0x0759:  movl   $0x0,-0xa0(%ebp)
085a42fb +0x0763:  movzbl -0x2bc(%ebp),%eax
085a4302 +0x076a:  test   %al,%al
085a4304 +0x076c:  je     085a4354 <+0x7bc>
085a4306 +0x076e:  mov    -0xac(%ebp),%edx
085a430c +0x0774:  mov    0x8(%ebp),%ecx
085a430f +0x0777:  mov    %edx,%eax
085a4311 +0x0779:  add    %eax,%eax
085a4313 +0x077b:  add    %edx,%eax
085a4315 +0x077d:  shl    $0x3,%eax
085a4318 +0x0780:  lea    (%ecx,%eax,1),%eax
085a431b +0x0783:  add    $0x78,%eax
085a431e +0x0786:  mov    (%eax),%eax
085a4320 +0x0788:  mov    %eax,(%esp)
085a4323 +0x078b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4328 +0x0790:  mov    %eax,(%esp)
085a432b +0x0793:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085a4330 +0x0798:  mov    -0xa4(%ebp),%edx
085a4336 +0x079e:  mov    %edx,0x4(%esp)
085a433a +0x07a2:  mov    %eax,(%esp)
085a433d +0x07a5:  call   0833c31a <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi>  ; user_creature::CCreatureMgr::GetExtraGold(int) const
085a4342 +0x07aa:  mov    %eax,-0xa0(%ebp)
085a4348 +0x07b0:  mov    -0xa0(%ebp),%eax
085a434e +0x07b6:  add    %eax,-0xa8(%ebp)
085a4354 +0x07bc:  movzbl -0x2bc(%ebp),%eax
085a435b +0x07c3:  test   %al,%al
085a435d +0x07c5:  je     085a43b9 <+0x821>
085a435f +0x07c7:  mov    -0xac(%ebp),%edx
085a4365 +0x07cd:  mov    0x8(%ebp),%ecx
085a4368 +0x07d0:  mov    %edx,%eax
085a436a +0x07d2:  add    %eax,%eax
085a436c +0x07d4:  add    %edx,%eax
085a436e +0x07d6:  shl    $0x3,%eax
085a4371 +0x07d9:  lea    (%ecx,%eax,1),%eax
085a4374 +0x07dc:  add    $0x78,%eax
085a4377 +0x07df:  mov    (%eax),%eax
085a4379 +0x07e1:  mov    %eax,(%esp)
085a437c +0x07e4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4381 +0x07e9:  mov    %eax,(%esp)
085a4384 +0x07ec:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085a4389 +0x07f1:  mov    -0xa4(%ebp),%edx
085a438f +0x07f7:  mov    %edx,0x4(%esp)
085a4393 +0x07fb:  mov    %eax,(%esp)
085a4396 +0x07fe:  call   0833c6f6 <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi>  ; user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const
085a439b +0x0803:  mov    %eax,-0x90(%ebp)
085a43a1 +0x0809:  mov    -0x90(%ebp),%eax
085a43a7 +0x080f:  add    %eax,-0xa0(%ebp)
085a43ad +0x0815:  mov    -0x90(%ebp),%eax
085a43b3 +0x081b:  add    %eax,-0xa8(%ebp)
085a43b9 +0x0821:  movzbl -0x2bc(%ebp),%eax
085a43c0 +0x0828:  test   %al,%al
085a43c2 +0x082a:  je     085a4537 <+0x99f>
085a43c8 +0x0830:  cmpl   $0x0,-0xa4(%ebp)
085a43cf +0x0837:  jle    085a4537 <+0x99f>
085a43d5 +0x083d:  movl   $0x0,-0x8c(%ebp)
085a43df +0x0847:  mov    -0xac(%ebp),%edx
085a43e5 +0x084d:  mov    0x8(%ebp),%ecx
085a43e8 +0x0850:  mov    %edx,%eax
085a43ea +0x0852:  add    %eax,%eax
085a43ec +0x0854:  add    %edx,%eax
085a43ee +0x0856:  shl    $0x3,%eax
085a43f1 +0x0859:  lea    (%ecx,%eax,1),%eax
085a43f4 +0x085c:  add    $0x78,%eax
085a43f7 +0x085f:  mov    (%eax),%eax
085a43f9 +0x0861:  mov    %eax,(%esp)
085a43fc +0x0864:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4401 +0x0869:  lea    -0x202(%ebp),%edx
085a4407 +0x086f:  movl   $0xb,0xc(%esp)
085a440f +0x0877:  movl   $0x0,0x8(%esp)
085a4417 +0x087f:  mov    %eax,0x4(%esp)
085a441b +0x0883:  mov    %edx,(%esp)
085a441e +0x0886:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a4423 +0x088b:  sub    $0x4,%esp
085a4426 +0x088e:  mov    -0x200(%ebp),%eax
085a442c +0x0894:  mov    %eax,-0x88(%ebp)
085a4432 +0x089a:  mov    -0x88(%ebp),%eax
085a4438 +0x08a0:  cmp    $0x6802,%eax
085a443d +0x08a5:  je     085a44b9 <+0x921>
085a443f +0x08a7:  cmp    $0x6802,%eax
085a4444 +0x08ac:  jg     085a4473 <+0x8db>
085a4446 +0x08ae:  cmp    $0x6622,%eax
085a444b +0x08b3:  je     085a44ad <+0x915>
085a444d +0x08b5:  cmp    $0x6622,%eax
085a4452 +0x08ba:  jg     085a4460 <+0x8c8>
085a4454 +0x08bc:  cmp    $0x6603,%eax
085a4459 +0x08c1:  je     085a44a1 <+0x909>
085a445b +0x08c3:  jmp    085a44f3 <+0x95b>
085a4460 +0x08c8:  cmp    $0x66e5,%eax
085a4465 +0x08cd:  je     085a44b9 <+0x921>
085a4467 +0x08cf:  cmp    $0x66e6,%eax
085a446c +0x08d4:  je     085a44c5 <+0x92d>
085a446e +0x08d6:  jmp    085a44f3 <+0x95b>
085a4473 +0x08db:  cmp    $0x28e4a3,%eax
085a4478 +0x08e0:  je     085a44dd <+0x945>
085a447a +0x08e2:  cmp    $0x28e4a3,%eax
085a447f +0x08e7:  jg     085a4491 <+0x8f9>
085a4481 +0x08e9:  cmp    $0x6803,%eax
085a4486 +0x08ee:  je     085a44c5 <+0x92d>
085a4488 +0x08f0:  cmp    $0x68a2,%eax
085a448d +0x08f5:  je     085a44d1 <+0x939>
085a448f +0x08f7:  jmp    085a44f3 <+0x95b>
085a4491 +0x08f9:  cmp    $0x28e4a6,%eax
085a4496 +0x08fe:  je     085a44dd <+0x945>
085a4498 +0x0900:  cmp    $0x28e4a8,%eax
085a449d +0x0905:  je     085a44e9 <+0x951>
085a449f +0x0907:  jmp    085a44f3 <+0x95b>
085a44a1 +0x0909:  movl   $0x3,-0x8c(%ebp)
085a44ab +0x0913:  jmp    085a44f3 <+0x95b>
085a44ad +0x0915:  movl   $0x4,-0x8c(%ebp)
085a44b7 +0x091f:  jmp    085a44f3 <+0x95b>
085a44b9 +0x0921:  movl   $0x3,-0x8c(%ebp)
085a44c3 +0x092b:  jmp    085a44f3 <+0x95b>
085a44c5 +0x092d:  movl   $0x4,-0x8c(%ebp)
085a44cf +0x0937:  jmp    085a44f3 <+0x95b>
085a44d1 +0x0939:  movl   $0x4,-0x8c(%ebp)
085a44db +0x0943:  jmp    085a44f3 <+0x95b>
085a44dd +0x0945:  movl   $0x3,-0x8c(%ebp)
085a44e7 +0x094f:  jmp    085a44f3 <+0x95b>
085a44e9 +0x0951:  movl   $0x5,-0x8c(%ebp)
085a44f3 +0x095b:  mov    -0xa4(%ebp),%eax
085a44f9 +0x0961:  mov    %eax,%ecx
085a44fb +0x0963:  imul   -0x8c(%ebp),%ecx
085a4502 +0x096a:  mov    $0x51eb851f,%edx
085a4507 +0x096f:  mov    %ecx,%eax
085a4509 +0x0971:  imul   %edx
085a450b +0x0973:  sar    $0x5,%edx
085a450e +0x0976:  mov    %ecx,%eax
085a4510 +0x0978:  sar    $0x1f,%eax
085a4513 +0x097b:  mov    %edx,%ecx
085a4515 +0x097d:  sub    %eax,%ecx
085a4517 +0x097f:  mov    %ecx,%eax
085a4519 +0x0981:  mov    %eax,-0x84(%ebp)
085a451f +0x0987:  mov    -0x84(%ebp),%eax
085a4525 +0x098d:  add    %eax,-0xa0(%ebp)
085a452b +0x0993:  mov    -0x84(%ebp),%eax
085a4531 +0x0999:  add    %eax,-0xa8(%ebp)
085a4537 +0x099f:  movzbl -0x2bc(%ebp),%eax
085a453e +0x09a6:  test   %al,%al
085a4540 +0x09a8:  je     085a45f1 <+0xa59>
085a4546 +0x09ae:  cmpl   $0x0,-0xa4(%ebp)
085a454d +0x09b5:  jle    085a45f1 <+0xa59>
085a4553 +0x09bb:  mov    -0xac(%ebp),%edx
085a4559 +0x09c1:  mov    0x8(%ebp),%ecx
085a455c +0x09c4:  mov    %edx,%eax
085a455e +0x09c6:  add    %eax,%eax
085a4560 +0x09c8:  add    %edx,%eax
085a4562 +0x09ca:  shl    $0x3,%eax
085a4565 +0x09cd:  lea    (%ecx,%eax,1),%eax
085a4568 +0x09d0:  add    $0x78,%eax
085a456b +0x09d3:  mov    (%eax),%eax
085a456d +0x09d5:  mov    %eax,(%esp)
085a4570 +0x09d8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4575 +0x09dd:  lea    -0x1c5(%ebp),%edx
085a457b +0x09e3:  movl   $0x13,0xc(%esp)
085a4583 +0x09eb:  movl   $0x0,0x8(%esp)
085a458b +0x09f3:  mov    %eax,0x4(%esp)
085a458f +0x09f7:  mov    %edx,(%esp)
085a4592 +0x09fa:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a4597 +0x09ff:  sub    $0x4,%esp
085a459a +0x0a02:  mov    -0x1c3(%ebp),%eax
085a45a0 +0x0a08:  cmp    $0x5e7f,%eax
085a45a5 +0x0a0d:  sete   %al
085a45a8 +0x0a10:  test   %al,%al
085a45aa +0x0a12:  je     085a45f1 <+0xa59>
085a45ac +0x0a14:  fildl  -0xa4(%ebp)
085a45b2 +0x0a1a:  fldl   &data#5cc8d029(.rodata)
085a45b8 +0x0a20:  fmulp  %st,%st(1)
085a45ba +0x0a22:  fnstcw -0x2d2(%ebp)
085a45c0 +0x0a28:  movzwl -0x2d2(%ebp),%eax
085a45c7 +0x0a2f:  mov    $0xc,%ah
085a45c9 +0x0a31:  mov    %ax,-0x2d4(%ebp)
085a45d0 +0x0a38:  fldcw  -0x2d4(%ebp)
085a45d6 +0x0a3e:  fistpl -0x80(%ebp)
085a45d9 +0x0a41:  fldcw  -0x2d2(%ebp)
085a45df +0x0a47:  mov    -0x80(%ebp),%eax
085a45e2 +0x0a4a:  add    %eax,-0xa0(%ebp)
085a45e8 +0x0a50:  mov    -0x80(%ebp),%eax
085a45eb +0x0a53:  add    %eax,-0xa8(%ebp)
085a45f1 +0x0a59:  movl   $0x0,-0x9c(%ebp)
085a45fb +0x0a63:  movzbl -0x2bc(%ebp),%eax
085a4602 +0x0a6a:  test   %al,%al
085a4604 +0x0a6c:  je     085a46c2 <+0xb2a>
085a460a +0x0a72:  mov    -0xa8(%ebp),%ecx
085a4610 +0x0a78:  mov    -0xac(%ebp),%edx
085a4616 +0x0a7e:  mov    0x8(%ebp),%ebx
085a4619 +0x0a81:  mov    %edx,%eax
085a461b +0x0a83:  add    %eax,%eax
085a461d +0x0a85:  add    %edx,%eax
085a461f +0x0a87:  shl    $0x3,%eax
085a4622 +0x0a8a:  lea    (%ebx,%eax,1),%eax
085a4625 +0x0a8d:  add    $0x78,%eax
085a4628 +0x0a90:  mov    (%eax),%eax
085a462a +0x0a92:  mov    %ecx,0xc(%esp)
085a462e +0x0a96:  mov    %eax,0x8(%esp)
085a4632 +0x0a9a:  movl   $0x1,0x4(%esp)
085a463a +0x0aa2:  mov    0x8(%ebp),%eax
085a463d +0x0aa5:  mov    %eax,(%esp)
085a4640 +0x0aa8:  call   085ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>  ; CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
085a4645 +0x0aad:  fnstcw -0x2d2(%ebp)
085a464b +0x0ab3:  movzwl -0x2d2(%ebp),%eax
085a4652 +0x0aba:  mov    $0xc,%ah
085a4654 +0x0abc:  mov    %ax,-0x2d4(%ebp)
085a465b +0x0ac3:  fldcw  -0x2d4(%ebp)
085a4661 +0x0ac9:  fistpl -0x9c(%ebp)
085a4667 +0x0acf:  fldcw  -0x2d2(%ebp)
085a466d +0x0ad5:  mov    -0x9c(%ebp),%eax
085a4673 +0x0adb:  add    %eax,-0xa0(%ebp)
085a4679 +0x0ae1:  mov    -0x9c(%ebp),%eax
085a467f +0x0ae7:  add    %eax,-0xa8(%ebp)
085a4685 +0x0aed:  mov    -0x9c(%ebp),%esi
085a468b +0x0af3:  mov    -0xac(%ebp),%edx
085a4691 +0x0af9:  mov    0x8(%ebp),%ecx
085a4694 +0x0afc:  mov    %edx,%eax
085a4696 +0x0afe:  add    %eax,%eax
085a4698 +0x0b00:  add    %edx,%eax
085a469a +0x0b02:  shl    $0x3,%eax
085a469d +0x0b05:  lea    (%ecx,%eax,1),%eax
085a46a0 +0x0b08:  add    $0x78,%eax
085a46a3 +0x0b0b:  mov    (%eax),%ebx
085a46a5 +0x0b0d:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085a46aa +0x0b12:  mov    %esi,0xc(%esp)
085a46ae +0x0b16:  mov    %ebx,0x8(%esp)
085a46b2 +0x0b1a:  movl   $0x11,0x4(%esp)
085a46ba +0x0b22:  mov    %eax,(%esp)
085a46bd +0x0b25:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085a46c2 +0x0b2a:  movl   $0x0,-0x98(%ebp)
085a46cc +0x0b34:  movzbl -0x2bc(%ebp),%eax
085a46d3 +0x0b3b:  test   %al,%al
085a46d5 +0x0b3d:  je     085a4704 <+0xb6c>
085a46d7 +0x0b3f:  mov    -0xac(%ebp),%edx
085a46dd +0x0b45:  mov    0x8(%ebp),%ecx
085a46e0 +0x0b48:  mov    %edx,%eax
085a46e2 +0x0b4a:  add    %eax,%eax
085a46e4 +0x0b4c:  add    %edx,%eax
085a46e6 +0x0b4e:  shl    $0x3,%eax
085a46e9 +0x0b51:  lea    (%ecx,%eax,1),%eax
085a46ec +0x0b54:  add    $0x78,%eax
085a46ef +0x0b57:  mov    (%eax),%eax
085a46f1 +0x0b59:  mov    %eax,(%esp)
085a46f4 +0x0b5c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085a46f9 +0x0b61:  test   %eax,%eax
085a46fb +0x0b63:  je     085a4704 <+0xb6c>
085a46fd +0x0b65:  mov    $0x1,%eax
085a4702 +0x0b6a:  jmp    085a4709 <+0xb71>
085a4704 +0x0b6c:  mov    $0x0,%eax
085a4709 +0x0b71:  test   %al,%al
085a470b +0x0b73:  je     085a48f7 <+0xd5f>
085a4711 +0x0b79:  mov    -0xac(%ebp),%edx
085a4717 +0x0b7f:  mov    0x8(%ebp),%ecx
085a471a +0x0b82:  mov    %edx,%eax
085a471c +0x0b84:  add    %eax,%eax
085a471e +0x0b86:  add    %edx,%eax
085a4720 +0x0b88:  shl    $0x3,%eax
085a4723 +0x0b8b:  lea    (%ecx,%eax,1),%eax
085a4726 +0x0b8e:  add    $0x78,%eax
085a4729 +0x0b91:  mov    (%eax),%eax
085a472b +0x0b93:  mov    %eax,(%esp)
085a472e +0x0b96:  call   0866c1ca <_ZN5CUser19IsCompleteGuildFundEv>  ; CUser::IsCompleteGuildFund()
085a4733 +0x0b9b:  xor    $0x1,%eax
085a4736 +0x0b9e:  test   %al,%al
085a4738 +0x0ba0:  je     085a48f7 <+0xd5f>
085a473e +0x0ba6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a4743 +0x0bab:  mov    0xa610(%eax),%eax
085a4749 +0x0bb1:  cmp    -0xa4(%ebp),%eax
085a474f +0x0bb7:  jg     085a476b <+0xbd3>
085a4751 +0x0bb9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a4756 +0x0bbe:  mov    0xa614(%eax),%eax
085a475c +0x0bc4:  cmp    -0xa8(%ebp),%eax
085a4762 +0x0bca:  jl     085a476b <+0xbd3>
085a4764 +0x0bcc:  mov    $0x1,%eax
085a4769 +0x0bd1:  jmp    085a4770 <+0xbd8>
085a476b +0x0bd3:  mov    $0x0,%eax
085a4770 +0x0bd8:  test   %al,%al
085a4772 +0x0bda:  je     085a4787 <+0xbef>
085a4774 +0x0bdc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a4779 +0x0be1:  mov    0xa618(%eax),%eax
085a477f +0x0be7:  mov    %eax,-0x98(%ebp)
085a4785 +0x0bed:  jmp    085a47e4 <+0xc4c>
085a4787 +0x0bef:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a478c +0x0bf4:  mov    0xa614(%eax),%eax
085a4792 +0x0bfa:  cmp    -0xa4(%ebp),%eax
085a4798 +0x0c00:  setl   %al
085a479b +0x0c03:  test   %al,%al
085a479d +0x0c05:  je     085a47e4 <+0xc4c>
085a479f +0x0c07:  fildl  -0xa4(%ebp)
085a47a5 +0x0c0d:  fstpl  -0x2e8(%ebp)
085a47ab +0x0c13:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a47b0 +0x0c18:  fldl   0xa61c(%eax)
085a47b6 +0x0c1e:  fmull  -0x2e8(%ebp)
085a47bc +0x0c24:  fnstcw -0x2d2(%ebp)
085a47c2 +0x0c2a:  movzwl -0x2d2(%ebp),%eax
085a47c9 +0x0c31:  mov    $0xc,%ah
085a47cb +0x0c33:  mov    %ax,-0x2d4(%ebp)
085a47d2 +0x0c3a:  fldcw  -0x2d4(%ebp)
085a47d8 +0x0c40:  fistpl -0x98(%ebp)
085a47de +0x0c46:  fldcw  -0x2d2(%ebp)
085a47e4 +0x0c4c:  mov    -0xa8(%ebp),%eax
085a47ea +0x0c52:  cmp    -0x98(%ebp),%eax
085a47f0 +0x0c58:  jl     085a4844 <+0xcac>
085a47f2 +0x0c5a:  cmpl   $0x0,-0x98(%ebp)
085a47f9 +0x0c61:  jle    085a4844 <+0xcac>
085a47fb +0x0c63:  mov    -0x98(%ebp),%eax
085a4801 +0x0c69:  sub    %eax,-0xa8(%ebp)
085a4807 +0x0c6f:  mov    -0x98(%ebp),%esi
085a480d +0x0c75:  mov    -0xac(%ebp),%edx
085a4813 +0x0c7b:  mov    0x8(%ebp),%ecx
085a4816 +0x0c7e:  mov    %edx,%eax
085a4818 +0x0c80:  add    %eax,%eax
085a481a +0x0c82:  add    %edx,%eax
085a481c +0x0c84:  shl    $0x3,%eax
085a481f +0x0c87:  lea    (%ecx,%eax,1),%eax
085a4822 +0x0c8a:  add    $0x78,%eax
085a4825 +0x0c8d:  mov    (%eax),%ebx
085a4827 +0x0c8f:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085a482c +0x0c94:  mov    %esi,0xc(%esp)
085a4830 +0x0c98:  mov    %ebx,0x8(%esp)
085a4834 +0x0c9c:  movl   $0x2a,0x4(%esp)
085a483c +0x0ca4:  mov    %eax,(%esp)
085a483f +0x0ca7:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085a4844 +0x0cac:  cmpl   $0x0,-0x98(%ebp)
085a484b +0x0cb3:  jle    085a48f7 <+0xd5f>
085a4851 +0x0cb9:  mov    -0xac(%ebp),%edx
085a4857 +0x0cbf:  mov    0x8(%ebp),%ecx
085a485a +0x0cc2:  mov    %edx,%eax
085a485c +0x0cc4:  add    %eax,%eax
085a485e +0x0cc6:  add    %edx,%eax
085a4860 +0x0cc8:  shl    $0x3,%eax
085a4863 +0x0ccb:  lea    (%ecx,%eax,1),%eax
085a4866 +0x0cce:  add    $0x78,%eax
085a4869 +0x0cd1:  mov    (%eax),%eax
085a486b +0x0cd3:  mov    %eax,(%esp)
085a486e +0x0cd6:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085a4873 +0x0cdb:  mov    %eax,%ebx
085a4875 +0x0cdd:  mov    -0xac(%ebp),%edx
085a487b +0x0ce3:  mov    0x8(%ebp),%ecx
085a487e +0x0ce6:  mov    %edx,%eax
085a4880 +0x0ce8:  add    %eax,%eax
085a4882 +0x0cea:  add    %edx,%eax
085a4884 +0x0cec:  shl    $0x3,%eax
085a4887 +0x0cef:  lea    (%ecx,%eax,1),%eax
085a488a +0x0cf2:  add    $0x78,%eax
085a488d +0x0cf5:  mov    (%eax),%eax
085a488f +0x0cf7:  movl   $0xffffffff,0x4(%esp)
085a4897 +0x0cff:  mov    %eax,(%esp)
085a489a +0x0d02:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085a489f +0x0d07:  mov    %eax,%esi
085a48a1 +0x0d09:  mov    -0xac(%ebp),%edx
085a48a7 +0x0d0f:  mov    0x8(%ebp),%ecx
085a48aa +0x0d12:  mov    %edx,%eax
085a48ac +0x0d14:  add    %eax,%eax
085a48ae +0x0d16:  add    %edx,%eax
085a48b0 +0x0d18:  shl    $0x3,%eax
085a48b3 +0x0d1b:  lea    (%ecx,%eax,1),%eax
085a48b6 +0x0d1e:  add    $0x78,%eax
085a48b9 +0x0d21:  mov    (%eax),%eax
085a48bb +0x0d23:  mov    %eax,(%esp)
085a48be +0x0d26:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085a48c3 +0x0d2b:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
085a48c9 +0x0d31:  mov    %eax,0x4(%esp)
085a48cd +0x0d35:  mov    %edx,(%esp)
085a48d0 +0x0d38:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
085a48d5 +0x0d3d:  movl   $0x0,0x10(%esp)
085a48dd +0x0d45:  mov    -0x98(%ebp),%edx
085a48e3 +0x0d4b:  mov    %edx,0xc(%esp)
085a48e7 +0x0d4f:  mov    %ebx,0x8(%esp)
085a48eb +0x0d53:  mov    %esi,0x4(%esp)
085a48ef +0x0d57:  mov    %eax,(%esp)
085a48f2 +0x0d5a:  call   0846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>  ; CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)
085a48f7 +0x0d5f:  mov    -0xac(%ebp),%edx
085a48fd +0x0d65:  mov    0x8(%ebp),%ecx
085a4900 +0x0d68:  mov    %edx,%eax
085a4902 +0x0d6a:  add    %eax,%eax
085a4904 +0x0d6c:  add    %edx,%eax
085a4906 +0x0d6e:  shl    $0x3,%eax
085a4909 +0x0d71:  lea    (%ecx,%eax,1),%eax
085a490c +0x0d74:  add    $0x78,%eax
085a490f +0x0d77:  mov    (%eax),%eax
085a4911 +0x0d79:  mov    %eax,(%esp)
085a4914 +0x0d7c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a4919 +0x0d81:  mov    -0x9c(%ebp),%edx
085a491f +0x0d87:  mov    %edx,0x10(%esp)
085a4923 +0x0d8b:  movl   $0x1,0xc(%esp)
085a492b +0x0d93:  movl   $0x4,0x8(%esp)
085a4933 +0x0d9b:  mov    -0xa8(%ebp),%edx
085a4939 +0x0da1:  mov    %edx,0x4(%esp)
085a493d +0x0da5:  mov    %eax,(%esp)
085a4940 +0x0da8:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085a4945 +0x0dad:  mov    %eax,-0x94(%ebp)
085a494b +0x0db3:  movzbl -0x2bc(%ebp),%eax
085a4952 +0x0dba:  test   %al,%al
085a4954 +0x0dbc:  je     085a4982 <+0xdea>
085a4956 +0x0dbe:  mov    -0xac(%ebp),%edx
085a495c +0x0dc4:  mov    0x8(%ebp),%ecx
085a495f +0x0dc7:  mov    %edx,%eax
085a4961 +0x0dc9:  add    %eax,%eax
085a4963 +0x0dcb:  add    %edx,%eax
085a4965 +0x0dcd:  shl    $0x3,%eax
085a4968 +0x0dd0:  lea    (%ecx,%eax,1),%eax
085a496b +0x0dd3:  add    $0x78,%eax
085a496e +0x0dd6:  mov    (%eax),%eax
085a4970 +0x0dd8:  mov    -0xa8(%ebp),%edx
085a4976 +0x0dde:  mov    %edx,0x4(%esp)
085a497a +0x0de2:  mov    %eax,(%esp)
085a497d +0x0de5:  call   0864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>  ; CUser::saveTaxMoneyForUpperMember(int)
085a4982 +0x0dea:  mov    -0x94(%ebp),%eax
085a4988 +0x0df0:  cmp    -0xa8(%ebp),%eax
085a498e +0x0df6:  jge    085a49e1 <+0xe49>
085a4990 +0x0df8:  cmpl   $0x0,-0x94(%ebp)
085a4997 +0x0dff:  jns    085a49a3 <+0xe0b>
085a4999 +0x0e01:  movl   $0x0,-0x94(%ebp)
085a49a3 +0x0e0b:  mov    -0x94(%ebp),%ebx
085a49a9 +0x0e11:  mov    -0xa8(%ebp),%ecx
085a49af +0x0e17:  mov    -0xac(%ebp),%edx
085a49b5 +0x0e1d:  mov    0x8(%ebp),%esi
085a49b8 +0x0e20:  mov    %edx,%eax
085a49ba +0x0e22:  add    %eax,%eax
085a49bc +0x0e24:  add    %edx,%eax
085a49be +0x0e26:  shl    $0x3,%eax
085a49c1 +0x0e29:  lea    (%esi,%eax,1),%eax
085a49c4 +0x0e2c:  add    $0x78,%eax
085a49c7 +0x0e2f:  mov    (%eax),%eax
085a49c9 +0x0e31:  mov    %ebx,0xc(%esp)
085a49cd +0x0e35:  mov    %ecx,0x8(%esp)
085a49d1 +0x0e39:  movl   $0x0,0x4(%esp)
085a49d9 +0x0e41:  mov    %eax,(%esp)
085a49dc +0x0e44:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
085a49e1 +0x0e49:  mov    -0x94(%ebp),%esi
085a49e7 +0x0e4f:  mov    -0xac(%ebp),%edx
085a49ed +0x0e55:  mov    0x8(%ebp),%ecx
085a49f0 +0x0e58:  mov    %edx,%eax
085a49f2 +0x0e5a:  add    %eax,%eax
085a49f4 +0x0e5c:  add    %edx,%eax
085a49f6 +0x0e5e:  shl    $0x3,%eax
085a49f9 +0x0e61:  lea    (%ecx,%eax,1),%eax
085a49fc +0x0e64:  add    $0x78,%eax
085a49ff +0x0e67:  mov    (%eax),%ebx
085a4a01 +0x0e69:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a4a06 +0x0e6e:  mov    %esi,0xc(%esp)
085a4a0a +0x0e72:  mov    %ebx,0x8(%esp)
085a4a0e +0x0e76:  movl   $0x1,0x4(%esp)
085a4a16 +0x0e7e:  mov    %eax,(%esp)
085a4a19 +0x0e81:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a4a1e +0x0e86:  mov    -0x94(%ebp),%eax
085a4a24 +0x0e8c:  mov    %eax,0x4(%esp)
085a4a28 +0x0e90:  lea    -0x240(%ebp),%eax
085a4a2e +0x0e96:  mov    %eax,(%esp)
085a4a31 +0x0e99:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a4a36 +0x0e9e:  movl   $0x1,0x4(%esp)
085a4a3e +0x0ea6:  lea    -0x240(%ebp),%eax
085a4a44 +0x0eac:  mov    %eax,(%esp)
085a4a47 +0x0eaf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a4a4c +0x0eb4:  mov    -0xa0(%ebp),%eax
085a4a52 +0x0eba:  mov    %eax,0x4(%esp)
085a4a56 +0x0ebe:  lea    -0x240(%ebp),%eax
085a4a5c +0x0ec4:  mov    %eax,(%esp)
085a4a5f +0x0ec7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a4a64 +0x0ecc:  mov    -0x98(%ebp),%eax
085a4a6a +0x0ed2:  mov    %eax,0x4(%esp)
085a4a6e +0x0ed6:  lea    -0x240(%ebp),%eax
085a4a74 +0x0edc:  mov    %eax,(%esp)
085a4a77 +0x0edf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a4a7c +0x0ee4:  jmp    085a4aaa <+0xf12>
085a4a7e +0x0ee6:  movl   $0x0,0x4(%esp)
085a4a86 +0x0eee:  lea    -0x240(%ebp),%eax
085a4a8c +0x0ef4:  mov    %eax,(%esp)
085a4a8f +0x0ef7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a4a94 +0x0efc:  movl   $0x0,0x4(%esp)
085a4a9c +0x0f04:  lea    -0x240(%ebp),%eax
085a4aa2 +0x0f0a:  mov    %eax,(%esp)
085a4aa5 +0x0f0d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a4aaa +0x0f12:  addl   $0x1,-0xac(%ebp)
085a4ab1 +0x0f19:  cmpl   $0x3,-0xac(%ebp)
085a4ab8 +0x0f20:  setle  %al
085a4abb +0x0f23:  test   %al,%al
085a4abd +0x0f25:  jne    085a4177 <+0x5df>
085a4ac3 +0x0f2b:  movl   $0x1,0x4(%esp)
085a4acb +0x0f33:  lea    -0x240(%ebp),%eax
085a4ad1 +0x0f39:  mov    %eax,(%esp)
085a4ad4 +0x0f3c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a4ad9 +0x0f41:  lea    -0x240(%ebp),%eax
085a4adf +0x0f47:  mov    %eax,0x4(%esp)
085a4ae3 +0x0f4b:  mov    0x8(%ebp),%eax
085a4ae6 +0x0f4e:  mov    %eax,(%esp)
085a4ae9 +0x0f51:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a4aee +0x0f56:  movl   $0x0,-0xb0(%ebp)
085a4af8 +0x0f60:  mov    0x8(%ebp),%eax
085a4afb +0x0f63:  lea    0xb24(%eax),%edx
085a4b01 +0x0f69:  mov    0x10(%ebp),%eax
085a4b04 +0x0f6c:  mov    %eax,0x4(%esp)
085a4b08 +0x0f70:  mov    %edx,(%esp)
085a4b0b +0x0f73:  call   0830daee <_ZN13CBattle_Field11pickup_itemEi>  ; CBattle_Field::pickup_item(int)
085a4b10 +0x0f78:  mov    %eax,-0xb0(%ebp)
085a4b16 +0x0f7e:  cmpl   $0x0,-0xb0(%ebp)
085a4b1d +0x0f85:  jle    085a4bb9 <+0x1021>
085a4b23 +0x0f8b:  movl   $0x2e,0x8(%esp)
085a4b2b +0x0f93:  movl   $0x1,0x4(%esp)
085a4b33 +0x0f9b:  lea    -0x240(%ebp),%eax
085a4b39 +0x0fa1:  mov    %eax,(%esp)
085a4b3c +0x0fa4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a4b41 +0x0fa9:  movl   $0x0,0x4(%esp)
085a4b49 +0x0fb1:  lea    -0x240(%ebp),%eax
085a4b4f +0x0fb7:  mov    %eax,(%esp)
085a4b52 +0x0fba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a4b57 +0x0fbf:  mov    -0xb0(%ebp),%eax
085a4b5d +0x0fc5:  mov    %eax,0x4(%esp)
085a4b61 +0x0fc9:  lea    -0x240(%ebp),%eax
085a4b67 +0x0fcf:  mov    %eax,(%esp)
085a4b6a +0x0fd2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a4b6f +0x0fd7:  movl   $0x1,0x4(%esp)
085a4b77 +0x0fdf:  lea    -0x240(%ebp),%eax
085a4b7d +0x0fe5:  mov    %eax,(%esp)
085a4b80 +0x0fe8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a4b85 +0x0fed:  lea    -0x240(%ebp),%eax
085a4b8b +0x0ff3:  mov    %eax,0x4(%esp)
085a4b8f +0x0ff7:  mov    0x8(%ebp),%eax
085a4b92 +0x0ffa:  mov    %eax,(%esp)
085a4b95 +0x0ffd:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a4b9a +0x1002:  lea    -0x240(%ebp),%eax
085a4ba0 +0x1008:  mov    %eax,0x4(%esp)
085a4ba4 +0x100c:  mov    0xc(%ebp),%eax
085a4ba7 +0x100f:  mov    %eax,(%esp)
085a4baa +0x1012:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a4baf +0x1017:  mov    $0x0,%ebx
085a4bb4 +0x101c:  jmp    085a63d9 <+0x2841>
085a4bb9 +0x1021:  movzbl -0x2bc(%ebp),%eax
085a4bc0 +0x1028:  test   %al,%al
085a4bc2 +0x102a:  je     085a4bd9 <+0x1041>
085a4bc4 +0x102c:  mov    -0x2aa(%ebp),%eax
085a4bca +0x1032:  mov    %eax,%edx
085a4bcc +0x1034:  mov    0x1c(%ebp),%eax
085a4bcf +0x1037:  mov    %edx,(%eax)
085a4bd1 +0x1039:  mov    0x20(%ebp),%eax
085a4bd4 +0x103c:  movb   $0x0,(%eax)
085a4bd7 +0x103f:  jmp    085a4be8 <+0x1050>
085a4bd9 +0x1041:  mov    0x1c(%ebp),%eax
085a4bdc +0x1044:  movl   $0xffffffff,(%eax)
085a4be2 +0x104a:  mov    0x20(%ebp),%eax
085a4be5 +0x104d:  movb   $0x0,(%eax)
085a4be8 +0x1050:  mov    $0x1,%ebx
085a4bed +0x1055:  jmp    085a63d9 <+0x2841>
085a4bf2 +0x105a:  mov    -0x2aa(%ebp),%eax
085a4bf8 +0x1060:  cmp    $0x4af,%eax
085a4bfd +0x1065:  jne    085a55e2 <+0x1a4a>
085a4c03 +0x106b:  movl   $0x27,0x8(%esp)
085a4c0b +0x1073:  movl   $0x0,0x4(%esp)
085a4c13 +0x107b:  lea    -0x240(%ebp),%eax
085a4c19 +0x1081:  mov    %eax,(%esp)
085a4c1c +0x1084:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a4c21 +0x1089:  mov    0x10(%ebp),%eax
085a4c24 +0x108c:  mov    %eax,0x4(%esp)
085a4c28 +0x1090:  lea    -0x240(%ebp),%eax
085a4c2e +0x1096:  mov    %eax,(%esp)
085a4c31 +0x1099:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a4c36 +0x109e:  mov    0xc(%ebp),%eax
085a4c39 +0x10a1:  mov    %eax,(%esp)
085a4c3c +0x10a4:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a4c41 +0x10a9:  movzwl %ax,%eax
085a4c44 +0x10ac:  mov    %eax,0x4(%esp)
085a4c48 +0x10b0:  lea    -0x240(%ebp),%eax
085a4c4e +0x10b6:  mov    %eax,(%esp)
085a4c51 +0x10b9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a4c56 +0x10be:  movl   $0x0,-0x78(%ebp)
085a4c5d +0x10c5:  jmp    085a54b0 <+0x1918>
085a4c62 +0x10ca:  movl   $0x0,-0x74(%ebp)
085a4c69 +0x10d1:  mov    -0x78(%ebp),%eax
085a4c6c +0x10d4:  mov    %eax,0x4(%esp)
085a4c70 +0x10d8:  mov    0x8(%ebp),%eax
085a4c73 +0x10db:  mov    %eax,(%esp)
085a4c76 +0x10de:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a4c7b +0x10e3:  test   %al,%al
085a4c7d +0x10e5:  je     085a5480 <+0x18e8>
085a4c83 +0x10eb:  movl   $0x1,0x4(%esp)
085a4c8b +0x10f3:  lea    -0x240(%ebp),%eax
085a4c91 +0x10f9:  mov    %eax,(%esp)
085a4c94 +0x10fc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a4c99 +0x1101:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a4c9e +0x1106:  mov    %eax,(%esp)
085a4ca1 +0x1109:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085a4ca6 +0x110e:  movl   $0x2,0x4(%esp)
085a4cae +0x1116:  mov    %eax,(%esp)
085a4cb1 +0x1119:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
085a4cb6 +0x111e:  mov    %eax,-0x70(%ebp)
085a4cb9 +0x1121:  mov    -0x78(%ebp),%edx
085a4cbc +0x1124:  mov    0x8(%ebp),%ecx
085a4cbf +0x1127:  mov    %edx,%eax
085a4cc1 +0x1129:  add    %eax,%eax
085a4cc3 +0x112b:  add    %edx,%eax
085a4cc5 +0x112d:  shl    $0x3,%eax
085a4cc8 +0x1130:  lea    (%ecx,%eax,1),%eax
085a4ccb +0x1133:  add    $0x78,%eax
085a4cce +0x1136:  mov    (%eax),%eax
085a4cd0 +0x1138:  mov    %eax,(%esp)
085a4cd3 +0x113b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a4cd8 +0x1140:  movzbl %al,%ebx
085a4cdb +0x1143:  mov    -0x70(%ebp),%eax
085a4cde +0x1146:  mov    %eax,(%esp)
085a4ce1 +0x1149:  call   085beff4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x552>  ; global constructors keyed to CParty::cMember::cMember()+0x552
085a4ce6 +0x114e:  mov    %ebx,0x4(%esp)
085a4cea +0x1152:  mov    %eax,(%esp)
085a4ced +0x1155:  call   08533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>  ; WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)
085a4cf2 +0x115a:  mov    %eax,-0x6c(%ebp)
085a4cf5 +0x115d:  mov    -0x6c(%ebp),%eax
085a4cf8 +0x1160:  mov    (%eax),%ebx
085a4cfa +0x1162:  mov    -0x6c(%ebp),%eax
085a4cfd +0x1165:  mov    (%eax),%esi
085a4cff +0x1167:  mov    -0x6c(%ebp),%eax
085a4d02 +0x116a:  mov    0x4(%eax),%eax
085a4d05 +0x116d:  mov    -0x6c(%ebp),%edx
085a4d08 +0x1170:  mov    0x4(%edx),%edx
085a4d0b +0x1173:  neg    %edx
085a4d0d +0x1175:  mov    %eax,0x4(%esp)
085a4d11 +0x1179:  mov    %edx,(%esp)
085a4d14 +0x117c:  call   08539d90 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1c
085a4d19 +0x1181:  mov    %esi,%ecx
085a4d1b +0x1183:  imul   %eax,%ecx
085a4d1e +0x1186:  mov    $0x51eb851f,%edx
085a4d23 +0x118b:  mov    %ecx,%eax
085a4d25 +0x118d:  imul   %edx
085a4d27 +0x118f:  sar    $0x5,%edx
085a4d2a +0x1192:  mov    %ecx,%eax
085a4d2c +0x1194:  sar    $0x1f,%eax
085a4d2f +0x1197:  mov    %edx,%ecx
085a4d31 +0x1199:  sub    %eax,%ecx
085a4d33 +0x119b:  mov    %ecx,%eax
085a4d35 +0x119d:  lea    (%ebx,%eax,1),%eax
085a4d38 +0x11a0:  mov    %eax,-0x74(%ebp)
085a4d3b +0x11a3:  cmpl   $0x7a11f,-0x74(%ebp)
085a4d42 +0x11aa:  jle    085a4e12 <+0x127a>
085a4d48 +0x11b0:  mov    -0x78(%ebp),%edx
085a4d4b +0x11b3:  mov    0x8(%ebp),%ecx
085a4d4e +0x11b6:  mov    %edx,%eax
085a4d50 +0x11b8:  add    %eax,%eax
085a4d52 +0x11ba:  add    %edx,%eax
085a4d54 +0x11bc:  shl    $0x3,%eax
085a4d57 +0x11bf:  lea    (%ecx,%eax,1),%eax
085a4d5a +0x11c2:  add    $0x78,%eax
085a4d5d +0x11c5:  mov    (%eax),%eax
085a4d5f +0x11c7:  mov    %eax,(%esp)
085a4d62 +0x11ca:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4d67 +0x11cf:  mov    %eax,(%esp)
085a4d6a +0x11d2:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085a4d6f +0x11d7:  mov    %eax,%edi
085a4d71 +0x11d9:  mov    -0x78(%ebp),%edx
085a4d74 +0x11dc:  mov    0x8(%ebp),%ecx
085a4d77 +0x11df:  mov    %edx,%eax
085a4d79 +0x11e1:  add    %eax,%eax
085a4d7b +0x11e3:  add    %edx,%eax
085a4d7d +0x11e5:  shl    $0x3,%eax
085a4d80 +0x11e8:  lea    (%ecx,%eax,1),%eax
085a4d83 +0x11eb:  add    $0x78,%eax
085a4d86 +0x11ee:  mov    (%eax),%eax
085a4d88 +0x11f0:  mov    %eax,(%esp)
085a4d8b +0x11f3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085a4d90 +0x11f8:  mov    %eax,%esi
085a4d92 +0x11fa:  mov    -0x78(%ebp),%edx
085a4d95 +0x11fd:  mov    0x8(%ebp),%ecx
085a4d98 +0x1200:  mov    %edx,%eax
085a4d9a +0x1202:  add    %eax,%eax
085a4d9c +0x1204:  add    %edx,%eax
085a4d9e +0x1206:  shl    $0x3,%eax
085a4da1 +0x1209:  lea    (%ecx,%eax,1),%eax
085a4da4 +0x120c:  add    $0x78,%eax
085a4da7 +0x120f:  mov    (%eax),%eax
085a4da9 +0x1211:  mov    %eax,(%esp)
085a4dac +0x1214:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085a4db1 +0x1219:  movl   $0x0,0x4(%esp)
085a4db9 +0x1221:  mov    %eax,(%esp)
085a4dbc +0x1224:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085a4dc1 +0x1229:  mov    %eax,%ebx
085a4dc3 +0x122b:  movl   $0x4,0xc(%esp)
085a4dcb +0x1233:  movl   $0x1789,0x8(%esp)
085a4dd3 +0x123b:  movl   $&_ZZN6CParty8get_itemEP5CUseribcRiRhRbE19__PRETTY_FUNCTION__,0x4(%esp)
085a4ddb +0x1243:  lea    -0x188(%ebp),%eax
085a4de1 +0x1249:  mov    %eax,(%esp)
085a4de4 +0x124c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a4de9 +0x1251:  mov    %edi,0x14(%esp)
085a4ded +0x1255:  mov    -0x74(%ebp),%eax
085a4df0 +0x1258:  mov    %eax,0x10(%esp)
085a4df4 +0x125c:  mov    %esi,0xc(%esp)
085a4df8 +0x1260:  mov    %ebx,0x8(%esp)
085a4dfc +0x1264:  movl   $"User(%s) Charac(%s) gain money(%d), old money is %d.",0x4(%esp)
085a4e04 +0x126c:  lea    -0x188(%ebp),%eax
085a4e0a +0x1272:  mov    %eax,(%esp)
085a4e0d +0x1275:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a4e12 +0x127a:  mov    -0x78(%ebp),%eax
085a4e15 +0x127d:  mov    0x8(%ebp),%edx
085a4e18 +0x1280:  movzbl 0x384(%edx,%eax,1),%eax
085a4e20 +0x1288:  xor    $0x1,%eax
085a4e23 +0x128b:  test   %al,%al
085a4e25 +0x128d:  je     085a4e2e <+0x1296>
085a4e27 +0x128f:  movl   $0x0,-0x74(%ebp)
085a4e2e +0x1296:  mov    -0x74(%ebp),%eax
085a4e31 +0x1299:  mov    %eax,-0x68(%ebp)
085a4e34 +0x129c:  movl   $0x0,-0x64(%ebp)
085a4e3b +0x12a3:  movzbl -0x2bc(%ebp),%eax
085a4e42 +0x12aa:  test   %al,%al
085a4e44 +0x12ac:  je     085a4e85 <+0x12ed>
085a4e46 +0x12ae:  mov    -0x78(%ebp),%edx
085a4e49 +0x12b1:  mov    0x8(%ebp),%ecx
085a4e4c +0x12b4:  mov    %edx,%eax
085a4e4e +0x12b6:  add    %eax,%eax
085a4e50 +0x12b8:  add    %edx,%eax
085a4e52 +0x12ba:  shl    $0x3,%eax
085a4e55 +0x12bd:  lea    (%ecx,%eax,1),%eax
085a4e58 +0x12c0:  add    $0x78,%eax
085a4e5b +0x12c3:  mov    (%eax),%eax
085a4e5d +0x12c5:  mov    %eax,(%esp)
085a4e60 +0x12c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4e65 +0x12cd:  mov    %eax,(%esp)
085a4e68 +0x12d0:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085a4e6d +0x12d5:  mov    -0x68(%ebp),%edx
085a4e70 +0x12d8:  mov    %edx,0x4(%esp)
085a4e74 +0x12dc:  mov    %eax,(%esp)
085a4e77 +0x12df:  call   0833c31a <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi>  ; user_creature::CCreatureMgr::GetExtraGold(int) const
085a4e7c +0x12e4:  mov    %eax,-0x64(%ebp)
085a4e7f +0x12e7:  mov    -0x64(%ebp),%eax
085a4e82 +0x12ea:  add    %eax,-0x74(%ebp)
085a4e85 +0x12ed:  movzbl -0x2bc(%ebp),%eax
085a4e8c +0x12f4:  test   %al,%al
085a4e8e +0x12f6:  je     085a4ed5 <+0x133d>
085a4e90 +0x12f8:  mov    -0x78(%ebp),%edx
085a4e93 +0x12fb:  mov    0x8(%ebp),%ecx
085a4e96 +0x12fe:  mov    %edx,%eax
085a4e98 +0x1300:  add    %eax,%eax
085a4e9a +0x1302:  add    %edx,%eax
085a4e9c +0x1304:  shl    $0x3,%eax
085a4e9f +0x1307:  lea    (%ecx,%eax,1),%eax
085a4ea2 +0x130a:  add    $0x78,%eax
085a4ea5 +0x130d:  mov    (%eax),%eax
085a4ea7 +0x130f:  mov    %eax,(%esp)
085a4eaa +0x1312:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4eaf +0x1317:  mov    %eax,(%esp)
085a4eb2 +0x131a:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085a4eb7 +0x131f:  mov    -0x68(%ebp),%edx
085a4eba +0x1322:  mov    %edx,0x4(%esp)
085a4ebe +0x1326:  mov    %eax,(%esp)
085a4ec1 +0x1329:  call   0833c6f6 <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi>  ; user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const
085a4ec6 +0x132e:  mov    %eax,-0x54(%ebp)
085a4ec9 +0x1331:  mov    -0x54(%ebp),%eax
085a4ecc +0x1334:  add    %eax,-0x64(%ebp)
085a4ecf +0x1337:  mov    -0x54(%ebp),%eax
085a4ed2 +0x133a:  add    %eax,-0x74(%ebp)
085a4ed5 +0x133d:  movzbl -0x2bc(%ebp),%eax
085a4edc +0x1344:  test   %al,%al
085a4ede +0x1346:  je     085a4fdb <+0x1443>
085a4ee4 +0x134c:  cmpl   $0x0,-0x68(%ebp)
085a4ee8 +0x1350:  jle    085a4fdb <+0x1443>
085a4eee +0x1356:  movl   $0x0,-0x50(%ebp)
085a4ef5 +0x135d:  mov    -0x78(%ebp),%edx
085a4ef8 +0x1360:  mov    0x8(%ebp),%ecx
085a4efb +0x1363:  mov    %edx,%eax
085a4efd +0x1365:  add    %eax,%eax
085a4eff +0x1367:  add    %edx,%eax
085a4f01 +0x1369:  shl    $0x3,%eax
085a4f04 +0x136c:  lea    (%ecx,%eax,1),%eax
085a4f07 +0x136f:  add    $0x78,%eax
085a4f0a +0x1372:  mov    (%eax),%eax
085a4f0c +0x1374:  mov    %eax,(%esp)
085a4f0f +0x1377:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a4f14 +0x137c:  lea    -0x176(%ebp),%edx
085a4f1a +0x1382:  movl   $0xb,0xc(%esp)
085a4f22 +0x138a:  movl   $0x0,0x8(%esp)
085a4f2a +0x1392:  mov    %eax,0x4(%esp)
085a4f2e +0x1396:  mov    %edx,(%esp)
085a4f31 +0x1399:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a4f36 +0x139e:  sub    $0x4,%esp
085a4f39 +0x13a1:  mov    -0x174(%ebp),%eax
085a4f3f +0x13a7:  mov    %eax,-0x4c(%ebp)
085a4f42 +0x13aa:  mov    -0x4c(%ebp),%eax
085a4f45 +0x13ad:  cmp    $0x66e6,%eax
085a4f4a +0x13b2:  je     085a4f9c <+0x1404>
085a4f4c +0x13b4:  cmp    $0x66e6,%eax
085a4f51 +0x13b9:  jg     085a4f6a <+0x13d2>
085a4f53 +0x13bb:  cmp    $0x6622,%eax
085a4f58 +0x13c0:  je     085a4f8a <+0x13f2>
085a4f5a +0x13c2:  cmp    $0x66e5,%eax
085a4f5f +0x13c7:  je     085a4f93 <+0x13fb>
085a4f61 +0x13c9:  cmp    $0x6603,%eax
085a4f66 +0x13ce:  je     085a4f81 <+0x13e9>
085a4f68 +0x13d0:  jmp    085a4fac <+0x1414>
085a4f6a +0x13d2:  cmp    $0x6803,%eax
085a4f6f +0x13d7:  je     085a4f9c <+0x1404>
085a4f71 +0x13d9:  cmp    $0x68a2,%eax
085a4f76 +0x13de:  je     085a4fa5 <+0x140d>
085a4f78 +0x13e0:  cmp    $0x6802,%eax
085a4f7d +0x13e5:  je     085a4f93 <+0x13fb>
085a4f7f +0x13e7:  jmp    085a4fac <+0x1414>
085a4f81 +0x13e9:  movl   $0x3,-0x50(%ebp)
085a4f88 +0x13f0:  jmp    085a4fac <+0x1414>
085a4f8a +0x13f2:  movl   $0x4,-0x50(%ebp)
085a4f91 +0x13f9:  jmp    085a4fac <+0x1414>
085a4f93 +0x13fb:  movl   $0x3,-0x50(%ebp)
085a4f9a +0x1402:  jmp    085a4fac <+0x1414>
085a4f9c +0x1404:  movl   $0x4,-0x50(%ebp)
085a4fa3 +0x140b:  jmp    085a4fac <+0x1414>
085a4fa5 +0x140d:  movl   $0x4,-0x50(%ebp)
085a4fac +0x1414:  mov    -0x68(%ebp),%eax
085a4faf +0x1417:  mov    %eax,%ecx
085a4fb1 +0x1419:  imul   -0x50(%ebp),%ecx
085a4fb5 +0x141d:  mov    $0x51eb851f,%edx
085a4fba +0x1422:  mov    %ecx,%eax
085a4fbc +0x1424:  imul   %edx
085a4fbe +0x1426:  sar    $0x5,%edx
085a4fc1 +0x1429:  mov    %ecx,%eax
085a4fc3 +0x142b:  sar    $0x1f,%eax
085a4fc6 +0x142e:  mov    %edx,%ecx
085a4fc8 +0x1430:  sub    %eax,%ecx
085a4fca +0x1432:  mov    %ecx,%eax
085a4fcc +0x1434:  mov    %eax,-0x48(%ebp)
085a4fcf +0x1437:  mov    -0x48(%ebp),%eax
085a4fd2 +0x143a:  add    %eax,-0x64(%ebp)
085a4fd5 +0x143d:  mov    -0x48(%ebp),%eax
085a4fd8 +0x1440:  add    %eax,-0x74(%ebp)
085a4fdb +0x1443:  movzbl -0x2bc(%ebp),%eax
085a4fe2 +0x144a:  test   %al,%al
085a4fe4 +0x144c:  je     085a5086 <+0x14ee>
085a4fea +0x1452:  cmpl   $0x0,-0x68(%ebp)
085a4fee +0x1456:  jle    085a5086 <+0x14ee>
085a4ff4 +0x145c:  mov    -0x78(%ebp),%edx
085a4ff7 +0x145f:  mov    0x8(%ebp),%ecx
085a4ffa +0x1462:  mov    %edx,%eax
085a4ffc +0x1464:  add    %eax,%eax
085a4ffe +0x1466:  add    %edx,%eax
085a5000 +0x1468:  shl    $0x3,%eax
085a5003 +0x146b:  lea    (%ecx,%eax,1),%eax
085a5006 +0x146e:  add    $0x78,%eax
085a5009 +0x1471:  mov    (%eax),%eax
085a500b +0x1473:  mov    %eax,(%esp)
085a500e +0x1476:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a5013 +0x147b:  lea    -0x139(%ebp),%edx
085a5019 +0x1481:  movl   $0x13,0xc(%esp)
085a5021 +0x1489:  movl   $0x0,0x8(%esp)
085a5029 +0x1491:  mov    %eax,0x4(%esp)
085a502d +0x1495:  mov    %edx,(%esp)
085a5030 +0x1498:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a5035 +0x149d:  sub    $0x4,%esp
085a5038 +0x14a0:  mov    -0x137(%ebp),%eax
085a503e +0x14a6:  cmp    $0x5e7f,%eax
085a5043 +0x14ab:  sete   %al
085a5046 +0x14ae:  test   %al,%al
085a5048 +0x14b0:  je     085a5086 <+0x14ee>
085a504a +0x14b2:  fildl  -0x68(%ebp)
085a504d +0x14b5:  fldl   &data#5cc8d029(.rodata)
085a5053 +0x14bb:  fmulp  %st,%st(1)
085a5055 +0x14bd:  fnstcw -0x2d2(%ebp)
085a505b +0x14c3:  movzwl -0x2d2(%ebp),%eax
085a5062 +0x14ca:  mov    $0xc,%ah
085a5064 +0x14cc:  mov    %ax,-0x2d4(%ebp)
085a506b +0x14d3:  fldcw  -0x2d4(%ebp)
085a5071 +0x14d9:  fistpl -0x44(%ebp)
085a5074 +0x14dc:  fldcw  -0x2d2(%ebp)
085a507a +0x14e2:  mov    -0x44(%ebp),%eax
085a507d +0x14e5:  add    %eax,-0x64(%ebp)
085a5080 +0x14e8:  mov    -0x44(%ebp),%eax
085a5083 +0x14eb:  add    %eax,-0x74(%ebp)
085a5086 +0x14ee:  movl   $0x0,-0x60(%ebp)
085a508d +0x14f5:  movzbl -0x2bc(%ebp),%eax
085a5094 +0x14fc:  test   %al,%al
085a5096 +0x14fe:  je     085a5139 <+0x15a1>
085a509c +0x1504:  mov    -0x74(%ebp),%ecx
085a509f +0x1507:  mov    -0x78(%ebp),%edx
085a50a2 +0x150a:  mov    0x8(%ebp),%ebx
085a50a5 +0x150d:  mov    %edx,%eax
085a50a7 +0x150f:  add    %eax,%eax
085a50a9 +0x1511:  add    %edx,%eax
085a50ab +0x1513:  shl    $0x3,%eax
085a50ae +0x1516:  lea    (%ebx,%eax,1),%eax
085a50b1 +0x1519:  add    $0x78,%eax
085a50b4 +0x151c:  mov    (%eax),%eax
085a50b6 +0x151e:  mov    %ecx,0xc(%esp)
085a50ba +0x1522:  mov    %eax,0x8(%esp)
085a50be +0x1526:  movl   $0x1,0x4(%esp)
085a50c6 +0x152e:  mov    0x8(%ebp),%eax
085a50c9 +0x1531:  mov    %eax,(%esp)
085a50cc +0x1534:  call   085ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>  ; CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
085a50d1 +0x1539:  fnstcw -0x2d2(%ebp)
085a50d7 +0x153f:  movzwl -0x2d2(%ebp),%eax
085a50de +0x1546:  mov    $0xc,%ah
085a50e0 +0x1548:  mov    %ax,-0x2d4(%ebp)
085a50e7 +0x154f:  fldcw  -0x2d4(%ebp)
085a50ed +0x1555:  fistpl -0x60(%ebp)
085a50f0 +0x1558:  fldcw  -0x2d2(%ebp)
085a50f6 +0x155e:  mov    -0x60(%ebp),%eax
085a50f9 +0x1561:  add    %eax,-0x64(%ebp)
085a50fc +0x1564:  mov    -0x60(%ebp),%eax
085a50ff +0x1567:  add    %eax,-0x74(%ebp)
085a5102 +0x156a:  mov    -0x60(%ebp),%esi
085a5105 +0x156d:  mov    -0x78(%ebp),%edx
085a5108 +0x1570:  mov    0x8(%ebp),%ecx
085a510b +0x1573:  mov    %edx,%eax
085a510d +0x1575:  add    %eax,%eax
085a510f +0x1577:  add    %edx,%eax
085a5111 +0x1579:  shl    $0x3,%eax
085a5114 +0x157c:  lea    (%ecx,%eax,1),%eax
085a5117 +0x157f:  add    $0x78,%eax
085a511a +0x1582:  mov    (%eax),%ebx
085a511c +0x1584:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085a5121 +0x1589:  mov    %esi,0xc(%esp)
085a5125 +0x158d:  mov    %ebx,0x8(%esp)
085a5129 +0x1591:  movl   $0x11,0x4(%esp)
085a5131 +0x1599:  mov    %eax,(%esp)
085a5134 +0x159c:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085a5139 +0x15a1:  movl   $0x0,-0x5c(%ebp)
085a5140 +0x15a8:  movzbl -0x2bc(%ebp),%eax
085a5147 +0x15af:  test   %al,%al
085a5149 +0x15b1:  je     085a5175 <+0x15dd>
085a514b +0x15b3:  mov    -0x78(%ebp),%edx
085a514e +0x15b6:  mov    0x8(%ebp),%ecx
085a5151 +0x15b9:  mov    %edx,%eax
085a5153 +0x15bb:  add    %eax,%eax
085a5155 +0x15bd:  add    %edx,%eax
085a5157 +0x15bf:  shl    $0x3,%eax
085a515a +0x15c2:  lea    (%ecx,%eax,1),%eax
085a515d +0x15c5:  add    $0x78,%eax
085a5160 +0x15c8:  mov    (%eax),%eax
085a5162 +0x15ca:  mov    %eax,(%esp)
085a5165 +0x15cd:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085a516a +0x15d2:  test   %eax,%eax
085a516c +0x15d4:  je     085a5175 <+0x15dd>
085a516e +0x15d6:  mov    $0x1,%eax
085a5173 +0x15db:  jmp    085a517a <+0x15e2>
085a5175 +0x15dd:  mov    $0x0,%eax
085a517a +0x15e2:  test   %al,%al
085a517c +0x15e4:  je     085a532f <+0x1797>
085a5182 +0x15ea:  mov    -0x78(%ebp),%edx
085a5185 +0x15ed:  mov    0x8(%ebp),%ecx
085a5188 +0x15f0:  mov    %edx,%eax
085a518a +0x15f2:  add    %eax,%eax
085a518c +0x15f4:  add    %edx,%eax
085a518e +0x15f6:  shl    $0x3,%eax
085a5191 +0x15f9:  lea    (%ecx,%eax,1),%eax
085a5194 +0x15fc:  add    $0x78,%eax
085a5197 +0x15ff:  mov    (%eax),%eax
085a5199 +0x1601:  mov    %eax,(%esp)
085a519c +0x1604:  call   0866c1ca <_ZN5CUser19IsCompleteGuildFundEv>  ; CUser::IsCompleteGuildFund()
085a51a1 +0x1609:  xor    $0x1,%eax
085a51a4 +0x160c:  test   %al,%al
085a51a6 +0x160e:  je     085a532f <+0x1797>
085a51ac +0x1614:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a51b1 +0x1619:  mov    0xa610(%eax),%eax
085a51b7 +0x161f:  cmp    -0x68(%ebp),%eax
085a51ba +0x1622:  jg     085a51d3 <+0x163b>
085a51bc +0x1624:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a51c1 +0x1629:  mov    0xa614(%eax),%eax
085a51c7 +0x162f:  cmp    -0x68(%ebp),%eax
085a51ca +0x1632:  jl     085a51d3 <+0x163b>
085a51cc +0x1634:  mov    $0x1,%eax
085a51d1 +0x1639:  jmp    085a51d8 <+0x1640>
085a51d3 +0x163b:  mov    $0x0,%eax
085a51d8 +0x1640:  test   %al,%al
085a51da +0x1642:  je     085a51ec <+0x1654>
085a51dc +0x1644:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a51e1 +0x1649:  mov    0xa618(%eax),%eax
085a51e7 +0x164f:  mov    %eax,-0x5c(%ebp)
085a51ea +0x1652:  jmp    085a5240 <+0x16a8>
085a51ec +0x1654:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a51f1 +0x1659:  mov    0xa614(%eax),%eax
085a51f7 +0x165f:  cmp    -0x68(%ebp),%eax
085a51fa +0x1662:  setl   %al
085a51fd +0x1665:  test   %al,%al
085a51ff +0x1667:  je     085a5240 <+0x16a8>
085a5201 +0x1669:  fildl  -0x68(%ebp)
085a5204 +0x166c:  fstpl  -0x2e0(%ebp)
085a520a +0x1672:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a520f +0x1677:  fldl   0xa61c(%eax)
085a5215 +0x167d:  fmull  -0x2e0(%ebp)
085a521b +0x1683:  fnstcw -0x2d2(%ebp)
085a5221 +0x1689:  movzwl -0x2d2(%ebp),%eax
085a5228 +0x1690:  mov    $0xc,%ah
085a522a +0x1692:  mov    %ax,-0x2d4(%ebp)
085a5231 +0x1699:  fldcw  -0x2d4(%ebp)
085a5237 +0x169f:  fistpl -0x5c(%ebp)
085a523a +0x16a2:  fldcw  -0x2d2(%ebp)
085a5240 +0x16a8:  mov    -0x74(%ebp),%eax
085a5243 +0x16ab:  cmp    -0x5c(%ebp),%eax
085a5246 +0x16ae:  jl     085a528b <+0x16f3>
085a5248 +0x16b0:  cmpl   $0x0,-0x5c(%ebp)
085a524c +0x16b4:  jle    085a528b <+0x16f3>
085a524e +0x16b6:  mov    -0x5c(%ebp),%eax
085a5251 +0x16b9:  sub    %eax,-0x74(%ebp)
085a5254 +0x16bc:  mov    -0x5c(%ebp),%esi
085a5257 +0x16bf:  mov    -0x78(%ebp),%edx
085a525a +0x16c2:  mov    0x8(%ebp),%ecx
085a525d +0x16c5:  mov    %edx,%eax
085a525f +0x16c7:  add    %eax,%eax
085a5261 +0x16c9:  add    %edx,%eax
085a5263 +0x16cb:  shl    $0x3,%eax
085a5266 +0x16ce:  lea    (%ecx,%eax,1),%eax
085a5269 +0x16d1:  add    $0x78,%eax
085a526c +0x16d4:  mov    (%eax),%ebx
085a526e +0x16d6:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085a5273 +0x16db:  mov    %esi,0xc(%esp)
085a5277 +0x16df:  mov    %ebx,0x8(%esp)
085a527b +0x16e3:  movl   $0x2a,0x4(%esp)
085a5283 +0x16eb:  mov    %eax,(%esp)
085a5286 +0x16ee:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085a528b +0x16f3:  cmpl   $0x0,-0x5c(%ebp)
085a528f +0x16f7:  jle    085a532f <+0x1797>
085a5295 +0x16fd:  mov    -0x78(%ebp),%edx
085a5298 +0x1700:  mov    0x8(%ebp),%ecx
085a529b +0x1703:  mov    %edx,%eax
085a529d +0x1705:  add    %eax,%eax
085a529f +0x1707:  add    %edx,%eax
085a52a1 +0x1709:  shl    $0x3,%eax
085a52a4 +0x170c:  lea    (%ecx,%eax,1),%eax
085a52a7 +0x170f:  add    $0x78,%eax
085a52aa +0x1712:  mov    (%eax),%eax
085a52ac +0x1714:  mov    %eax,(%esp)
085a52af +0x1717:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085a52b4 +0x171c:  mov    %eax,%ebx
085a52b6 +0x171e:  mov    -0x78(%ebp),%edx
085a52b9 +0x1721:  mov    0x8(%ebp),%ecx
085a52bc +0x1724:  mov    %edx,%eax
085a52be +0x1726:  add    %eax,%eax
085a52c0 +0x1728:  add    %edx,%eax
085a52c2 +0x172a:  shl    $0x3,%eax
085a52c5 +0x172d:  lea    (%ecx,%eax,1),%eax
085a52c8 +0x1730:  add    $0x78,%eax
085a52cb +0x1733:  mov    (%eax),%eax
085a52cd +0x1735:  movl   $0xffffffff,0x4(%esp)
085a52d5 +0x173d:  mov    %eax,(%esp)
085a52d8 +0x1740:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085a52dd +0x1745:  mov    %eax,%esi
085a52df +0x1747:  mov    -0x78(%ebp),%edx
085a52e2 +0x174a:  mov    0x8(%ebp),%ecx
085a52e5 +0x174d:  mov    %edx,%eax
085a52e7 +0x174f:  add    %eax,%eax
085a52e9 +0x1751:  add    %edx,%eax
085a52eb +0x1753:  shl    $0x3,%eax
085a52ee +0x1756:  lea    (%ecx,%eax,1),%eax
085a52f1 +0x1759:  add    $0x78,%eax
085a52f4 +0x175c:  mov    (%eax),%eax
085a52f6 +0x175e:  mov    %eax,(%esp)
085a52f9 +0x1761:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085a52fe +0x1766:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
085a5304 +0x176c:  mov    %eax,0x4(%esp)
085a5308 +0x1770:  mov    %edx,(%esp)
085a530b +0x1773:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
085a5310 +0x1778:  movl   $0x0,0x10(%esp)
085a5318 +0x1780:  mov    -0x5c(%ebp),%edx
085a531b +0x1783:  mov    %edx,0xc(%esp)
085a531f +0x1787:  mov    %ebx,0x8(%esp)
085a5323 +0x178b:  mov    %esi,0x4(%esp)
085a5327 +0x178f:  mov    %eax,(%esp)
085a532a +0x1792:  call   0846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>  ; CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)
085a532f +0x1797:  mov    -0x78(%ebp),%edx
085a5332 +0x179a:  mov    0x8(%ebp),%ecx
085a5335 +0x179d:  mov    %edx,%eax
085a5337 +0x179f:  add    %eax,%eax
085a5339 +0x17a1:  add    %edx,%eax
085a533b +0x17a3:  shl    $0x3,%eax
085a533e +0x17a6:  lea    (%ecx,%eax,1),%eax
085a5341 +0x17a9:  add    $0x78,%eax
085a5344 +0x17ac:  mov    (%eax),%eax
085a5346 +0x17ae:  mov    %eax,(%esp)
085a5349 +0x17b1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a534e +0x17b6:  mov    -0x60(%ebp),%edx
085a5351 +0x17b9:  mov    %edx,0x10(%esp)
085a5355 +0x17bd:  movl   $0x1,0xc(%esp)
085a535d +0x17c5:  movl   $0x1a,0x8(%esp)
085a5365 +0x17cd:  mov    -0x74(%ebp),%edx
085a5368 +0x17d0:  mov    %edx,0x4(%esp)
085a536c +0x17d4:  mov    %eax,(%esp)
085a536f +0x17d7:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085a5374 +0x17dc:  mov    %eax,-0x58(%ebp)
085a5377 +0x17df:  movzbl -0x2bc(%ebp),%eax
085a537e +0x17e6:  test   %al,%al
085a5380 +0x17e8:  je     085a53a8 <+0x1810>
085a5382 +0x17ea:  mov    -0x78(%ebp),%edx
085a5385 +0x17ed:  mov    0x8(%ebp),%ecx
085a5388 +0x17f0:  mov    %edx,%eax
085a538a +0x17f2:  add    %eax,%eax
085a538c +0x17f4:  add    %edx,%eax
085a538e +0x17f6:  shl    $0x3,%eax
085a5391 +0x17f9:  lea    (%ecx,%eax,1),%eax
085a5394 +0x17fc:  add    $0x78,%eax
085a5397 +0x17ff:  mov    (%eax),%eax
085a5399 +0x1801:  mov    -0x74(%ebp),%edx
085a539c +0x1804:  mov    %edx,0x4(%esp)
085a53a0 +0x1808:  mov    %eax,(%esp)
085a53a3 +0x180b:  call   0864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>  ; CUser::saveTaxMoneyForUpperMember(int)
085a53a8 +0x1810:  mov    -0x58(%ebp),%eax
085a53ab +0x1813:  cmp    -0x74(%ebp),%eax
085a53ae +0x1816:  jge    085a53f2 <+0x185a>
085a53b0 +0x1818:  cmpl   $0x0,-0x58(%ebp)
085a53b4 +0x181c:  jns    085a53bd <+0x1825>
085a53b6 +0x181e:  movl   $0x0,-0x58(%ebp)
085a53bd +0x1825:  mov    -0x58(%ebp),%ebx
085a53c0 +0x1828:  mov    -0x74(%ebp),%ecx
085a53c3 +0x182b:  mov    -0x78(%ebp),%edx
085a53c6 +0x182e:  mov    0x8(%ebp),%esi
085a53c9 +0x1831:  mov    %edx,%eax
085a53cb +0x1833:  add    %eax,%eax
085a53cd +0x1835:  add    %edx,%eax
085a53cf +0x1837:  shl    $0x3,%eax
085a53d2 +0x183a:  lea    (%esi,%eax,1),%eax
085a53d5 +0x183d:  add    $0x78,%eax
085a53d8 +0x1840:  mov    (%eax),%eax
085a53da +0x1842:  mov    %ebx,0xc(%esp)
085a53de +0x1846:  mov    %ecx,0x8(%esp)
085a53e2 +0x184a:  movl   $0x0,0x4(%esp)
085a53ea +0x1852:  mov    %eax,(%esp)
085a53ed +0x1855:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
085a53f2 +0x185a:  mov    -0x74(%ebp),%esi
085a53f5 +0x185d:  mov    -0x78(%ebp),%edx
085a53f8 +0x1860:  mov    0x8(%ebp),%ecx
085a53fb +0x1863:  mov    %edx,%eax
085a53fd +0x1865:  add    %eax,%eax
085a53ff +0x1867:  add    %edx,%eax
085a5401 +0x1869:  shl    $0x3,%eax
085a5404 +0x186c:  lea    (%ecx,%eax,1),%eax
085a5407 +0x186f:  add    $0x78,%eax
085a540a +0x1872:  mov    (%eax),%ebx
085a540c +0x1874:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a5411 +0x1879:  mov    %esi,0xc(%esp)
085a5415 +0x187d:  mov    %ebx,0x8(%esp)
085a5419 +0x1881:  movl   $0x1,0x4(%esp)
085a5421 +0x1889:  mov    %eax,(%esp)
085a5424 +0x188c:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a5429 +0x1891:  mov    -0x74(%ebp),%eax
085a542c +0x1894:  mov    %eax,0x4(%esp)
085a5430 +0x1898:  lea    -0x240(%ebp),%eax
085a5436 +0x189e:  mov    %eax,(%esp)
085a5439 +0x18a1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a543e +0x18a6:  movl   $0x1,0x4(%esp)
085a5446 +0x18ae:  lea    -0x240(%ebp),%eax
085a544c +0x18b4:  mov    %eax,(%esp)
085a544f +0x18b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5454 +0x18bc:  mov    -0x64(%ebp),%eax
085a5457 +0x18bf:  mov    %eax,0x4(%esp)
085a545b +0x18c3:  lea    -0x240(%ebp),%eax
085a5461 +0x18c9:  mov    %eax,(%esp)
085a5464 +0x18cc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a5469 +0x18d1:  mov    -0x5c(%ebp),%eax
085a546c +0x18d4:  mov    %eax,0x4(%esp)
085a5470 +0x18d8:  lea    -0x240(%ebp),%eax
085a5476 +0x18de:  mov    %eax,(%esp)
085a5479 +0x18e1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a547e +0x18e6:  jmp    085a54ac <+0x1914>
085a5480 +0x18e8:  movl   $0x0,0x4(%esp)
085a5488 +0x18f0:  lea    -0x240(%ebp),%eax
085a548e +0x18f6:  mov    %eax,(%esp)
085a5491 +0x18f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5496 +0x18fe:  movl   $0x0,0x4(%esp)
085a549e +0x1906:  lea    -0x240(%ebp),%eax
085a54a4 +0x190c:  mov    %eax,(%esp)
085a54a7 +0x190f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a54ac +0x1914:  addl   $0x1,-0x78(%ebp)
085a54b0 +0x1918:  cmpl   $0x3,-0x78(%ebp)
085a54b4 +0x191c:  setle  %al
085a54b7 +0x191f:  test   %al,%al
085a54b9 +0x1921:  jne    085a4c62 <+0x10ca>
085a54bf +0x1927:  movl   $0x1,0x4(%esp)
085a54c7 +0x192f:  lea    -0x240(%ebp),%eax
085a54cd +0x1935:  mov    %eax,(%esp)
085a54d0 +0x1938:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a54d5 +0x193d:  lea    -0x240(%ebp),%eax
085a54db +0x1943:  mov    %eax,0x4(%esp)
085a54df +0x1947:  mov    0x8(%ebp),%eax
085a54e2 +0x194a:  mov    %eax,(%esp)
085a54e5 +0x194d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a54ea +0x1952:  movl   $0x0,-0x7c(%ebp)
085a54f1 +0x1959:  mov    0x8(%ebp),%eax
085a54f4 +0x195c:  lea    0xb24(%eax),%edx
085a54fa +0x1962:  mov    0x10(%ebp),%eax
085a54fd +0x1965:  mov    %eax,0x4(%esp)
085a5501 +0x1969:  mov    %edx,(%esp)
085a5504 +0x196c:  call   0830daee <_ZN13CBattle_Field11pickup_itemEi>  ; CBattle_Field::pickup_item(int)
085a5509 +0x1971:  mov    %eax,-0x7c(%ebp)
085a550c +0x1974:  cmpl   $0x0,-0x7c(%ebp)
085a5510 +0x1978:  jle    085a55a9 <+0x1a11>
085a5516 +0x197e:  movl   $0x2e,0x8(%esp)
085a551e +0x1986:  movl   $0x1,0x4(%esp)
085a5526 +0x198e:  lea    -0x240(%ebp),%eax
085a552c +0x1994:  mov    %eax,(%esp)
085a552f +0x1997:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a5534 +0x199c:  movl   $0x0,0x4(%esp)
085a553c +0x19a4:  lea    -0x240(%ebp),%eax
085a5542 +0x19aa:  mov    %eax,(%esp)
085a5545 +0x19ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a554a +0x19b2:  mov    -0x7c(%ebp),%eax
085a554d +0x19b5:  mov    %eax,0x4(%esp)
085a5551 +0x19b9:  lea    -0x240(%ebp),%eax
085a5557 +0x19bf:  mov    %eax,(%esp)
085a555a +0x19c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a555f +0x19c7:  movl   $0x1,0x4(%esp)
085a5567 +0x19cf:  lea    -0x240(%ebp),%eax
085a556d +0x19d5:  mov    %eax,(%esp)
085a5570 +0x19d8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a5575 +0x19dd:  lea    -0x240(%ebp),%eax
085a557b +0x19e3:  mov    %eax,0x4(%esp)
085a557f +0x19e7:  mov    0x8(%ebp),%eax
085a5582 +0x19ea:  mov    %eax,(%esp)
085a5585 +0x19ed:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a558a +0x19f2:  lea    -0x240(%ebp),%eax
085a5590 +0x19f8:  mov    %eax,0x4(%esp)
085a5594 +0x19fc:  mov    0xc(%ebp),%eax
085a5597 +0x19ff:  mov    %eax,(%esp)
085a559a +0x1a02:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a559f +0x1a07:  mov    $0x0,%ebx
085a55a4 +0x1a0c:  jmp    085a63d9 <+0x2841>
085a55a9 +0x1a11:  movzbl -0x2bc(%ebp),%eax
085a55b0 +0x1a18:  test   %al,%al
085a55b2 +0x1a1a:  je     085a55c9 <+0x1a31>
085a55b4 +0x1a1c:  mov    -0x2aa(%ebp),%eax
085a55ba +0x1a22:  mov    %eax,%edx
085a55bc +0x1a24:  mov    0x1c(%ebp),%eax
085a55bf +0x1a27:  mov    %edx,(%eax)
085a55c1 +0x1a29:  mov    0x20(%ebp),%eax
085a55c4 +0x1a2c:  movb   $0x0,(%eax)
085a55c7 +0x1a2f:  jmp    085a55d8 <+0x1a40>
085a55c9 +0x1a31:  mov    0x1c(%ebp),%eax
085a55cc +0x1a34:  movl   $0xffffffff,(%eax)
085a55d2 +0x1a3a:  mov    0x20(%ebp),%eax
085a55d5 +0x1a3d:  movb   $0x0,(%eax)
085a55d8 +0x1a40:  mov    $0x1,%ebx
085a55dd +0x1a45:  jmp    085a63d9 <+0x2841>
085a55e2 +0x1a4a:  mov    -0x2aa(%ebp),%eax
085a55e8 +0x1a50:  mov    %eax,%ebx
085a55ea +0x1a52:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a55ef +0x1a57:  mov    %ebx,0x4(%esp)
085a55f3 +0x1a5b:  mov    %eax,(%esp)
085a55f6 +0x1a5e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085a55fb +0x1a63:  mov    %eax,-0x40(%ebp)
085a55fe +0x1a66:  cmpl   $0x0,-0x40(%ebp)
085a5602 +0x1a6a:  jne    085a5644 <+0x1aac>
085a5604 +0x1a6c:  mov    -0x2aa(%ebp),%eax
085a560a +0x1a72:  mov    %eax,0x14(%esp)
085a560e +0x1a76:  movl   $"G_CDataManager()->find_item(%d) fail",0x10(%esp)
085a5616 +0x1a7e:  movl   $0x1878,0xc(%esp)
085a561e +0x1a86:  movl   $&_ZZN6CParty8get_itemEP5CUseribcRiRhRbE19__PRETTY_FUNCTION__,0x8(%esp)
085a5626 +0x1a8e:  movl   $"party.cpp",0x4(%esp)
085a562e +0x1a96:  movl   $0x1,(%esp)
085a5635 +0x1a9d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085a563a +0x1aa2:  mov    $0x0,%ebx
085a563f +0x1aa7:  jmp    085a63d9 <+0x2841>
085a5644 +0x1aac:  mov    -0x40(%ebp),%eax
085a5647 +0x1aaf:  mov    %eax,(%esp)
085a564a +0x1ab2:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085a564f +0x1ab7:  test   %al,%al
085a5651 +0x1ab9:  je     085a5681 <+0x1ae9>
085a5653 +0x1abb:  mov    0x24(%ebp),%eax
085a5656 +0x1abe:  movb   $0x1,(%eax)
085a5659 +0x1ac1:  mov    -0x40(%ebp),%eax
085a565c +0x1ac4:  mov    (%eax),%eax
085a565e +0x1ac6:  add    $0xc,%eax
085a5661 +0x1ac9:  mov    (%eax),%edx
085a5663 +0x1acb:  mov    -0x40(%ebp),%eax
085a5666 +0x1ace:  mov    %eax,(%esp)
085a5669 +0x1ad1:  call   *%edx
085a566b +0x1ad3:  cmp    $0x9,%eax
085a566e +0x1ad6:  sete   %al
085a5671 +0x1ad9:  test   %al,%al
085a5673 +0x1adb:  je     085a56c3 <+0x1b2b>
085a5675 +0x1add:  movl   $0x7,-0xe4(%ebp)
085a567f +0x1ae7:  jmp    085a56c3 <+0x1b2b>
085a5681 +0x1ae9:  mov    -0x40(%ebp),%eax
085a5684 +0x1aec:  mov    (%eax),%eax
085a5686 +0x1aee:  add    $0x14,%eax
085a5689 +0x1af1:  mov    (%eax),%edx
085a568b +0x1af3:  mov    -0x40(%ebp),%eax
085a568e +0x1af6:  mov    %eax,(%esp)
085a5691 +0x1af9:  call   *%edx
085a5693 +0x1afb:  test   %al,%al
085a5695 +0x1afd:  je     085a56a3 <+0x1b0b>
085a5697 +0x1aff:  movl   $0x7,-0xe4(%ebp)
085a56a1 +0x1b09:  jmp    085a56c3 <+0x1b2b>
085a56a3 +0x1b0b:  mov    -0x40(%ebp),%eax
085a56a6 +0x1b0e:  mov    (%eax),%eax
085a56a8 +0x1b10:  add    $0x10,%eax
085a56ab +0x1b13:  mov    (%eax),%edx
085a56ad +0x1b15:  mov    -0x40(%ebp),%eax
085a56b0 +0x1b18:  mov    %eax,(%esp)
085a56b3 +0x1b1b:  call   *%edx
085a56b5 +0x1b1d:  test   %al,%al
085a56b7 +0x1b1f:  je     085a56c3 <+0x1b2b>
085a56b9 +0x1b21:  movl   $0x1,-0xe4(%ebp)
085a56c3 +0x1b2b:  mov    -0x40(%ebp),%eax
085a56c6 +0x1b2e:  mov    %eax,(%esp)
085a56c9 +0x1b31:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085a56ce +0x1b36:  cmp    $0x4,%eax
085a56d1 +0x1b39:  jmp    085a56e9 <+0x1b51>
085a56d3 +0x1b3b:  mov    -0x40(%ebp),%eax
085a56d6 +0x1b3e:  mov    %eax,(%esp)
085a56d9 +0x1b41:  call   08150f18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x84d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x84d
085a56de +0x1b46:  test   %al,%al
085a56e0 +0x1b48:  je     085a56e9 <+0x1b51>
085a56e2 +0x1b4a:  mov    $0x1,%eax
085a56e7 +0x1b4f:  jmp    085a56ee <+0x1b56>
085a56e9 +0x1b51:  mov    $0x0,%eax
085a56ee +0x1b56:  test   %al,%al
085a56f0 +0x1b58:  je     085a57c9 <+0x1c31>
085a56f6 +0x1b5e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085a56fb +0x1b63:  mov    %eax,(%esp)
085a56fe +0x1b66:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
085a5703 +0x1b6b:  mov    %eax,-0x3c(%ebp)
085a5706 +0x1b6e:  movl   $0x0,-0x38(%ebp)
085a570d +0x1b75:  mov    0x10(%ebp),%eax
085a5710 +0x1b78:  mov    %eax,0xc(%esp)
085a5714 +0x1b7c:  lea    -0x2bc(%ebp),%eax
085a571a +0x1b82:  add    $0x10,%eax
085a571d +0x1b85:  mov    %eax,0x8(%esp)
085a5721 +0x1b89:  mov    0xc(%ebp),%eax
085a5724 +0x1b8c:  mov    %eax,0x4(%esp)
085a5728 +0x1b90:  mov    -0x3c(%ebp),%eax
085a572b +0x1b93:  mov    %eax,(%esp)
085a572e +0x1b96:  call   0860a9d4 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj>  ; CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int)
085a5733 +0x1b9b:  mov    %eax,-0x38(%ebp)
085a5736 +0x1b9e:  cmpl   $0x0,-0x38(%ebp)
085a573a +0x1ba2:  setne  %al
085a573d +0x1ba5:  test   %al,%al
085a573f +0x1ba7:  je     085a57bf <+0x1c27>
085a5741 +0x1ba9:  movl   $0x2e,0x8(%esp)
085a5749 +0x1bb1:  movl   $0x1,0x4(%esp)
085a5751 +0x1bb9:  lea    -0x240(%ebp),%eax
085a5757 +0x1bbf:  mov    %eax,(%esp)
085a575a +0x1bc2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a575f +0x1bc7:  movl   $0x0,0x4(%esp)
085a5767 +0x1bcf:  lea    -0x240(%ebp),%eax
085a576d +0x1bd5:  mov    %eax,(%esp)
085a5770 +0x1bd8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5775 +0x1bdd:  mov    -0x38(%ebp),%eax
085a5778 +0x1be0:  mov    %eax,0x4(%esp)
085a577c +0x1be4:  lea    -0x240(%ebp),%eax
085a5782 +0x1bea:  mov    %eax,(%esp)
085a5785 +0x1bed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a578a +0x1bf2:  movl   $0x1,0x4(%esp)
085a5792 +0x1bfa:  lea    -0x240(%ebp),%eax
085a5798 +0x1c00:  mov    %eax,(%esp)
085a579b +0x1c03:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a57a0 +0x1c08:  lea    -0x240(%ebp),%eax
085a57a6 +0x1c0e:  mov    %eax,0x4(%esp)
085a57aa +0x1c12:  mov    0xc(%ebp),%eax
085a57ad +0x1c15:  mov    %eax,(%esp)
085a57b0 +0x1c18:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a57b5 +0x1c1d:  mov    $0x0,%ebx
085a57ba +0x1c22:  jmp    085a63d9 <+0x2841>
085a57bf +0x1c27:  mov    $0x1,%ebx
085a57c4 +0x1c2c:  jmp    085a63d9 <+0x2841>
085a57c9 +0x1c31:  mov    0x8(%ebp),%eax
085a57cc +0x1c34:  mov    %eax,(%esp)
085a57cf +0x1c37:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a57d4 +0x1c3c:  cmp    $0x1,%eax
085a57d7 +0x1c3f:  setg   %al
085a57da +0x1c42:  test   %al,%al
085a57dc +0x1c44:  je     085a5c59 <+0x20c1>
085a57e2 +0x1c4a:  movzbl -0x2bc(%ebp),%eax
085a57e9 +0x1c51:  xor    $0x1,%eax
085a57ec +0x1c54:  test   %al,%al
085a57ee +0x1c56:  je     085a57f7 <+0x1c5f>
085a57f0 +0x1c58:  movb   $0x0,-0xe9(%ebp)
085a57f7 +0x1c5f:  mov    -0x40(%ebp),%eax
085a57fa +0x1c62:  mov    %eax,(%esp)
085a57fd +0x1c65:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085a5802 +0x1c6a:  cmp    $0x3,%eax
085a5805 +0x1c6d:  setg   %al
085a5808 +0x1c70:  test   %al,%al
085a580a +0x1c72:  je     085a5819 <+0x1c81>
085a580c +0x1c74:  movzbl -0x2cc(%ebp),%eax
085a5813 +0x1c7b:  mov    %al,-0xe9(%ebp)
085a5819 +0x1c81:  movzbl -0x2bc(%ebp),%eax
085a5820 +0x1c88:  test   %al,%al
085a5822 +0x1c8a:  je     085a583a <+0x1ca2>
085a5824 +0x1c8c:  mov    -0x40(%ebp),%eax
085a5827 +0x1c8f:  mov    %eax,(%esp)
085a582a +0x1c92:  call   0846996a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4d
085a582f +0x1c97:  test   %al,%al
085a5831 +0x1c99:  je     085a583a <+0x1ca2>
085a5833 +0x1c9b:  mov    $0x1,%eax
085a5838 +0x1ca0:  jmp    085a583f <+0x1ca7>
085a583a +0x1ca2:  mov    $0x0,%eax
085a583f +0x1ca7:  test   %al,%al
085a5841 +0x1ca9:  je     085a5850 <+0x1cb8>
085a5843 +0x1cab:  movzbl -0x2cc(%ebp),%eax
085a584a +0x1cb2:  mov    %al,-0xe9(%ebp)
085a5850 +0x1cb8:  cmpb   $0x0,-0xe9(%ebp)
085a5857 +0x1cbf:  je     085a5c4e <+0x20b6>
085a585d +0x1cc5:  mov    -0x40(%ebp),%eax
085a5860 +0x1cc8:  mov    %eax,(%esp)
085a5863 +0x1ccb:  call   0850d756 <_ZNK5CItem18check_item_routingEv>  ; CItem::check_item_routing() const
085a5868 +0x1cd0:  test   %al,%al
085a586a +0x1cd2:  jne    085a5882 <+0x1cea>
085a586c +0x1cd4:  mov    -0x40(%ebp),%eax
085a586f +0x1cd7:  mov    (%eax),%eax
085a5871 +0x1cd9:  add    $0x10,%eax
085a5874 +0x1cdc:  mov    (%eax),%edx
085a5876 +0x1cde:  mov    -0x40(%ebp),%eax
085a5879 +0x1ce1:  mov    %eax,(%esp)
085a587c +0x1ce4:  call   *%edx
085a587e +0x1ce6:  test   %al,%al
085a5880 +0x1ce8:  je     085a5889 <+0x1cf1>
085a5882 +0x1cea:  mov    $0x1,%eax
085a5887 +0x1cef:  jmp    085a588e <+0x1cf6>
085a5889 +0x1cf1:  mov    $0x0,%eax
085a588e +0x1cf6:  test   %al,%al
085a5890 +0x1cf8:  je     085a5c43 <+0x20ab>
085a5896 +0x1cfe:  mov    0x8(%ebp),%eax
085a5899 +0x1d01:  mov    0x144(%eax),%eax
085a589f +0x1d07:  add    $0x1,%eax
085a58a2 +0x1d0a:  mov    %eax,-0x34(%ebp)
085a58a5 +0x1d0d:  mov    0x8(%ebp),%eax
085a58a8 +0x1d10:  mov    %eax,(%esp)
085a58ab +0x1d13:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a58b0 +0x1d18:  cmp    -0x34(%ebp),%eax
085a58b3 +0x1d1b:  setle  %al
085a58b6 +0x1d1e:  test   %al,%al
085a58b8 +0x1d20:  je     085a58c1 <+0x1d29>
085a58ba +0x1d22:  movl   $0x0,-0x34(%ebp)
085a58c1 +0x1d29:  movl   $0x0,-0x30(%ebp)
085a58c8 +0x1d30:  movl   $0x0,-0x2c(%ebp)
085a58cf +0x1d37:  mov    -0x26c(%ebp),%eax
085a58d5 +0x1d3d:  test   %eax,%eax
085a58d7 +0x1d3f:  je     085a58eb <+0x1d53>
085a58d9 +0x1d41:  movl   $0xb,(%esp)
085a58e0 +0x1d48:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085a58e5 +0x1d4d:  add    $0x59,%eax
085a58e8 +0x1d50:  mov    %eax,-0x2c(%ebp)
085a58eb +0x1d53:  movl   $0x0,-0x24(%ebp)
085a58f2 +0x1d5a:  jmp    085a5b68 <+0x1fd0>
085a58f7 +0x1d5f:  mov    -0x24(%ebp),%eax
085a58fa +0x1d62:  mov    %eax,0x4(%esp)
085a58fe +0x1d66:  mov    0x8(%ebp),%eax
085a5901 +0x1d69:  mov    %eax,(%esp)
085a5904 +0x1d6c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a5909 +0x1d71:  xor    $0x1,%eax
085a590c +0x1d74:  test   %al,%al
085a590e +0x1d76:  jne    085a5b5d <+0x1fc5>
085a5914 +0x1d7c:  mov    -0x24(%ebp),%eax
085a5917 +0x1d7f:  mov    0x8(%ebp),%edx
085a591a +0x1d82:  movzbl 0x380(%edx,%eax,1),%eax
085a5922 +0x1d8a:  xor    $0x1,%eax
085a5925 +0x1d8d:  test   %al,%al
085a5927 +0x1d8f:  jne    085a5b60 <+0x1fc8>
085a592d +0x1d95:  mov    -0x24(%ebp),%edx
085a5930 +0x1d98:  mov    0x8(%ebp),%ecx
085a5933 +0x1d9b:  mov    %edx,%eax
085a5935 +0x1d9d:  add    %eax,%eax
085a5937 +0x1d9f:  add    %edx,%eax
085a5939 +0x1da1:  shl    $0x3,%eax
085a593c +0x1da4:  lea    (%ecx,%eax,1),%eax
085a593f +0x1da7:  add    $0x78,%eax
085a5942 +0x1daa:  mov    (%eax),%eax
085a5944 +0x1dac:  mov    %eax,(%esp)
085a5947 +0x1daf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a594c +0x1db4:  mov    -0x2ac(%ebp),%edx
085a5952 +0x1dba:  mov    %edx,0x4(%esp)
085a5956 +0x1dbe:  mov    -0x2a8(%ebp),%edx
085a595c +0x1dc4:  mov    %edx,0x8(%esp)
085a5960 +0x1dc8:  mov    -0x2a4(%ebp),%edx
085a5966 +0x1dce:  mov    %edx,0xc(%esp)
085a596a +0x1dd2:  mov    -0x2a0(%ebp),%edx
085a5970 +0x1dd8:  mov    %edx,0x10(%esp)
085a5974 +0x1ddc:  mov    -0x29c(%ebp),%edx
085a597a +0x1de2:  mov    %edx,0x14(%esp)
085a597e +0x1de6:  mov    -0x298(%ebp),%edx
085a5984 +0x1dec:  mov    %edx,0x18(%esp)
085a5988 +0x1df0:  mov    -0x294(%ebp),%edx
085a598e +0x1df6:  mov    %edx,0x1c(%esp)
085a5992 +0x1dfa:  mov    -0x290(%ebp),%edx
085a5998 +0x1e00:  mov    %edx,0x20(%esp)
085a599c +0x1e04:  mov    -0x28c(%ebp),%edx
085a59a2 +0x1e0a:  mov    %edx,0x24(%esp)
085a59a6 +0x1e0e:  mov    -0x288(%ebp),%edx
085a59ac +0x1e14:  mov    %edx,0x28(%esp)
085a59b0 +0x1e18:  mov    -0x284(%ebp),%edx
085a59b6 +0x1e1e:  mov    %edx,0x2c(%esp)
085a59ba +0x1e22:  mov    -0x280(%ebp),%edx
085a59c0 +0x1e28:  mov    %edx,0x30(%esp)
085a59c4 +0x1e2c:  mov    -0x27c(%ebp),%edx
085a59ca +0x1e32:  mov    %edx,0x34(%esp)
085a59ce +0x1e36:  mov    -0x278(%ebp),%edx
085a59d4 +0x1e3c:  mov    %edx,0x38(%esp)
085a59d8 +0x1e40:  mov    -0x274(%ebp),%edx
085a59de +0x1e46:  mov    %edx,0x3c(%esp)
085a59e2 +0x1e4a:  movzbl -0x270(%ebp),%edx
085a59e9 +0x1e51:  mov    %dl,0x40(%esp)
085a59ed +0x1e55:  mov    %eax,(%esp)
085a59f0 +0x1e58:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
085a59f5 +0x1e5d:  cmp    $0xffffffff,%eax
085a59f8 +0x1e60:  sete   %al
085a59fb +0x1e63:  test   %al,%al
085a59fd +0x1e65:  jne    085a5b63 <+0x1fcb>
085a5a03 +0x1e6b:  mov    -0x24(%ebp),%eax
085a5a06 +0x1e6e:  mov    -0x24(%ebp),%edx
085a5a09 +0x1e71:  mov    -0x234(%ebp,%edx,4),%edx
085a5a10 +0x1e78:  add    $0x1,%edx
085a5a13 +0x1e7b:  mov    %edx,-0x234(%ebp,%eax,4)
085a5a1a +0x1e82:  mov    -0x30(%ebp),%eax
085a5a1d +0x1e85:  cmp    -0x34(%ebp),%eax
085a5a20 +0x1e88:  jne    085a5a45 <+0x1ead>
085a5a22 +0x1e8a:  mov    -0x24(%ebp),%eax
085a5a25 +0x1e8d:  mov    -0x24(%ebp),%edx
085a5a28 +0x1e90:  mov    -0x234(%ebp,%edx,4),%edx
085a5a2f +0x1e97:  add    $0x28,%edx
085a5a32 +0x1e9a:  mov    %edx,-0x234(%ebp,%eax,4)
085a5a39 +0x1ea1:  mov    0x8(%ebp),%eax
085a5a3c +0x1ea4:  mov    -0x30(%ebp),%edx
085a5a3f +0x1ea7:  mov    %edx,0x144(%eax)
085a5a45 +0x1ead:  mov    -0x40(%ebp),%eax
085a5a48 +0x1eb0:  mov    %eax,(%esp)
085a5a4b +0x1eb3:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085a5a50 +0x1eb8:  xor    $0x1,%eax
085a5a53 +0x1ebb:  test   %al,%al
085a5a55 +0x1ebd:  je     085a5aaa <+0x1f12>
085a5a57 +0x1ebf:  mov    -0x40(%ebp),%eax
085a5a5a +0x1ec2:  mov    (%eax),%eax
085a5a5c +0x1ec4:  add    $0xc,%eax
085a5a5f +0x1ec7:  mov    (%eax),%edx
085a5a61 +0x1ec9:  mov    -0x40(%ebp),%eax
085a5a64 +0x1ecc:  mov    %eax,(%esp)
085a5a67 +0x1ecf:  call   *%edx
085a5a69 +0x1ed1:  cmp    $0xa,%eax
085a5a6c +0x1ed4:  jne    085a5aaa <+0x1f12>
085a5a6e +0x1ed6:  mov    -0x24(%ebp),%edx
085a5a71 +0x1ed9:  mov    0x8(%ebp),%ecx
085a5a74 +0x1edc:  mov    %edx,%eax
085a5a76 +0x1ede:  add    %eax,%eax
085a5a78 +0x1ee0:  add    %edx,%eax
085a5a7a +0x1ee2:  shl    $0x3,%eax
085a5a7d +0x1ee5:  lea    (%ecx,%eax,1),%eax
085a5a80 +0x1ee8:  add    $0x78,%eax
085a5a83 +0x1eeb:  mov    (%eax),%eax
085a5a85 +0x1eed:  mov    %eax,(%esp)
085a5a88 +0x1ef0:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085a5a8d +0x1ef5:  movsbl %al,%eax
085a5a90 +0x1ef8:  mov    %eax,0x4(%esp)
085a5a94 +0x1efc:  mov    -0x40(%ebp),%eax
085a5a97 +0x1eff:  mov    %eax,(%esp)
085a5a9a +0x1f02:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
085a5a9f +0x1f07:  test   %al,%al
085a5aa1 +0x1f09:  je     085a5aaa <+0x1f12>
085a5aa3 +0x1f0b:  mov    $0x1,%eax
085a5aa8 +0x1f10:  jmp    085a5aaf <+0x1f17>
085a5aaa +0x1f12:  mov    $0x0,%eax
085a5aaf +0x1f17:  test   %al,%al
085a5ab1 +0x1f19:  je     085a5aca <+0x1f32>
085a5ab3 +0x1f1b:  mov    -0x24(%ebp),%eax
085a5ab6 +0x1f1e:  mov    -0x24(%ebp),%edx
085a5ab9 +0x1f21:  mov    -0x234(%ebp,%edx,4),%edx
085a5ac0 +0x1f28:  add    $0x1e,%edx
085a5ac3 +0x1f2b:  mov    %edx,-0x234(%ebp,%eax,4)
085a5aca +0x1f32:  mov    -0x24(%ebp),%ebx
085a5acd +0x1f35:  mov    -0x24(%ebp),%eax
085a5ad0 +0x1f38:  mov    -0x234(%ebp,%eax,4),%esi
085a5ad7 +0x1f3f:  mov    -0x24(%ebp),%eax
085a5ada +0x1f42:  mov    -0x234(%ebp,%eax,4),%eax
085a5ae1 +0x1f49:  mov    $0x64,%edx
085a5ae6 +0x1f4e:  mov    %edx,%ecx
085a5ae8 +0x1f50:  sub    %eax,%ecx
085a5aea +0x1f52:  mov    %ecx,%eax
085a5aec +0x1f54:  mov    %eax,(%esp)
085a5aef +0x1f57:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085a5af4 +0x1f5c:  lea    (%esi,%eax,1),%eax
085a5af7 +0x1f5f:  mov    %eax,-0x234(%ebp,%ebx,4)
085a5afe +0x1f66:  mov    -0x26c(%ebp),%eax
085a5b04 +0x1f6c:  test   %eax,%eax
085a5b06 +0x1f6e:  je     085a5b57 <+0x1fbf>
085a5b08 +0x1f70:  mov    -0x24(%ebp),%edx
085a5b0b +0x1f73:  mov    0x8(%ebp),%ecx
085a5b0e +0x1f76:  mov    %edx,%eax
085a5b10 +0x1f78:  add    %eax,%eax
085a5b12 +0x1f7a:  add    %edx,%eax
085a5b14 +0x1f7c:  shl    $0x3,%eax
085a5b17 +0x1f7f:  lea    (%ecx,%eax,1),%eax
085a5b1a +0x1f82:  add    $0x78,%eax
085a5b1d +0x1f85:  mov    (%eax),%edx
085a5b1f +0x1f87:  mov    -0x26c(%ebp),%eax
085a5b25 +0x1f8d:  cmp    %eax,%edx
085a5b27 +0x1f8f:  jne    085a5b38 <+0x1fa0>
085a5b29 +0x1f91:  mov    -0x24(%ebp),%eax
085a5b2c +0x1f94:  mov    -0x2c(%ebp),%edx
085a5b2f +0x1f97:  mov    %edx,-0x234(%ebp,%eax,4)
085a5b36 +0x1f9e:  jmp    085a5b57 <+0x1fbf>
085a5b38 +0x1fa0:  mov    -0x24(%ebp),%eax
085a5b3b +0x1fa3:  mov    -0x234(%ebp,%eax,4),%eax
085a5b42 +0x1faa:  cmp    -0x2c(%ebp),%eax
085a5b45 +0x1fad:  jl     085a5b57 <+0x1fbf>
085a5b47 +0x1faf:  mov    -0x24(%ebp),%eax
085a5b4a +0x1fb2:  mov    -0x2c(%ebp),%edx
085a5b4d +0x1fb5:  sub    $0x1,%edx
085a5b50 +0x1fb8:  mov    %edx,-0x234(%ebp,%eax,4)
085a5b57 +0x1fbf:  addl   $0x1,-0x30(%ebp)
085a5b5b +0x1fc3:  jmp    085a5b64 <+0x1fcc>
085a5b5d +0x1fc5:  nop
085a5b5e +0x1fc6:  jmp    085a5b64 <+0x1fcc>
085a5b60 +0x1fc8:  nop
085a5b61 +0x1fc9:  jmp    085a5b64 <+0x1fcc>
085a5b63 +0x1fcb:  nop
085a5b64 +0x1fcc:  addl   $0x1,-0x24(%ebp)
085a5b68 +0x1fd0:  cmpl   $0x3,-0x24(%ebp)
085a5b6c +0x1fd4:  setle  %al
085a5b6f +0x1fd7:  test   %al,%al
085a5b71 +0x1fd9:  jne    085a58f7 <+0x1d5f>
085a5b77 +0x1fdf:  movl   $0x0,-0x28(%ebp)
085a5b7e +0x1fe6:  movl   $0x0,-0x20(%ebp)
085a5b85 +0x1fed:  jmp    085a5c32 <+0x209a>
085a5b8a +0x1ff2:  mov    -0x20(%ebp),%eax
085a5b8d +0x1ff5:  mov    %eax,0x4(%esp)
085a5b91 +0x1ff9:  mov    0x8(%ebp),%eax
085a5b94 +0x1ffc:  mov    %eax,(%esp)
085a5b97 +0x1fff:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a5b9c +0x2004:  xor    $0x1,%eax
085a5b9f +0x2007:  test   %al,%al
085a5ba1 +0x2009:  jne    085a5c2a <+0x2092>
085a5ba7 +0x200f:  mov    -0x20(%ebp),%eax
085a5baa +0x2012:  mov    0x8(%ebp),%edx
085a5bad +0x2015:  movzbl 0x380(%edx,%eax,1),%eax
085a5bb5 +0x201d:  xor    $0x1,%eax
085a5bb8 +0x2020:  test   %al,%al
085a5bba +0x2022:  jne    085a5c2d <+0x2095>
085a5bbc +0x2024:  mov    -0x20(%ebp),%eax
085a5bbf +0x2027:  mov    -0x234(%ebp,%eax,4),%eax
085a5bc6 +0x202e:  cmp    -0x28(%ebp),%eax
085a5bc9 +0x2031:  jle    085a5bf7 <+0x205f>
085a5bcb +0x2033:  mov    -0x20(%ebp),%eax
085a5bce +0x2036:  mov    -0x234(%ebp,%eax,4),%eax
085a5bd5 +0x203d:  mov    %eax,-0x28(%ebp)
085a5bd8 +0x2040:  mov    -0x20(%ebp),%edx
085a5bdb +0x2043:  mov    0x8(%ebp),%ecx
085a5bde +0x2046:  mov    %edx,%eax
085a5be0 +0x2048:  add    %eax,%eax
085a5be2 +0x204a:  add    %edx,%eax
085a5be4 +0x204c:  shl    $0x3,%eax
085a5be7 +0x204f:  lea    (%ecx,%eax,1),%eax
085a5bea +0x2052:  add    $0x78,%eax
085a5bed +0x2055:  mov    (%eax),%eax
085a5bef +0x2057:  mov    %eax,-0xe8(%ebp)
085a5bf5 +0x205d:  jmp    085a5c2e <+0x2096>
085a5bf7 +0x205f:  mov    -0x20(%ebp),%eax
085a5bfa +0x2062:  mov    -0x234(%ebp,%eax,4),%eax
085a5c01 +0x2069:  cmp    -0x28(%ebp),%eax
085a5c04 +0x206c:  jne    085a5c2e <+0x2096>
085a5c06 +0x206e:  mov    -0x20(%ebp),%eax
085a5c09 +0x2071:  mov    -0x234(%ebp,%eax,4),%eax
085a5c10 +0x2078:  test   %eax,%eax
085a5c12 +0x207a:  jle    085a5c2e <+0x2096>
085a5c14 +0x207c:  mov    -0x20(%ebp),%eax
085a5c17 +0x207f:  mov    -0x234(%ebp,%eax,4),%edx
085a5c1e +0x2086:  sub    $0x1,%edx
085a5c21 +0x2089:  mov    %edx,-0x234(%ebp,%eax,4)
085a5c28 +0x2090:  jmp    085a5c2e <+0x2096>
085a5c2a +0x2092:  nop
085a5c2b +0x2093:  jmp    085a5c2e <+0x2096>
085a5c2d +0x2095:  nop
085a5c2e +0x2096:  addl   $0x1,-0x20(%ebp)
085a5c32 +0x209a:  cmpl   $0x3,-0x20(%ebp)
085a5c36 +0x209e:  setle  %al
085a5c39 +0x20a1:  test   %al,%al
085a5c3b +0x20a3:  jne    085a5b8a <+0x1ff2>
085a5c41 +0x20a9:  jmp    085a5c62 <+0x20ca>
085a5c43 +0x20ab:  mov    0xc(%ebp),%eax
085a5c46 +0x20ae:  mov    %eax,-0xe8(%ebp)
085a5c4c +0x20b4:  jmp    085a5c62 <+0x20ca>
085a5c4e +0x20b6:  mov    0xc(%ebp),%eax
085a5c51 +0x20b9:  mov    %eax,-0xe8(%ebp)
085a5c57 +0x20bf:  jmp    085a5c62 <+0x20ca>
085a5c59 +0x20c1:  mov    0xc(%ebp),%eax
085a5c5c +0x20c4:  mov    %eax,-0xe8(%ebp)
085a5c62 +0x20ca:  cmpl   $0x0,-0xe8(%ebp)
085a5c69 +0x20d1:  jne    085a5cea <+0x2152>
085a5c6b +0x20d3:  movl   $0x2e,0x8(%esp)
085a5c73 +0x20db:  movl   $0x1,0x4(%esp)
085a5c7b +0x20e3:  lea    -0x240(%ebp),%eax
085a5c81 +0x20e9:  mov    %eax,(%esp)
085a5c84 +0x20ec:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a5c89 +0x20f1:  movl   $0x0,0x4(%esp)
085a5c91 +0x20f9:  lea    -0x240(%ebp),%eax
085a5c97 +0x20ff:  mov    %eax,(%esp)
085a5c9a +0x2102:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5c9f +0x2107:  movl   $0x16,0x4(%esp)
085a5ca7 +0x210f:  lea    -0x240(%ebp),%eax
085a5cad +0x2115:  mov    %eax,(%esp)
085a5cb0 +0x2118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5cb5 +0x211d:  movl   $0x1,0x4(%esp)
085a5cbd +0x2125:  lea    -0x240(%ebp),%eax
085a5cc3 +0x212b:  mov    %eax,(%esp)
085a5cc6 +0x212e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a5ccb +0x2133:  lea    -0x240(%ebp),%eax
085a5cd1 +0x2139:  mov    %eax,0x4(%esp)
085a5cd5 +0x213d:  mov    0x8(%ebp),%eax
085a5cd8 +0x2140:  mov    %eax,(%esp)
085a5cdb +0x2143:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a5ce0 +0x2148:  mov    $0x0,%ebx
085a5ce5 +0x214d:  jmp    085a63d9 <+0x2841>
085a5cea +0x2152:  mov    -0x2a5(%ebp),%eax
085a5cf0 +0x2158:  movswl %ax,%ebx
085a5cf3 +0x215b:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085a5cf8 +0x2160:  lea    -0x244(%ebp),%edx
085a5cfe +0x2166:  mov    %edx,0x14(%esp)
085a5d02 +0x216a:  movl   $0x0,0x10(%esp)
085a5d0a +0x2172:  mov    %ebx,0xc(%esp)
085a5d0e +0x2176:  mov    -0x40(%ebp),%edx
085a5d11 +0x2179:  mov    %edx,0x8(%esp)
085a5d15 +0x217d:  lea    -0x2bc(%ebp),%edx
085a5d1b +0x2183:  add    $0x10,%edx
085a5d1e +0x2186:  mov    %edx,0x4(%esp)
085a5d22 +0x218a:  mov    %eax,(%esp)
085a5d25 +0x218d:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085a5d2a +0x2192:  mov    -0x40(%ebp),%eax
085a5d2d +0x2195:  mov    (%eax),%eax
085a5d2f +0x2197:  add    $0x4c,%eax
085a5d32 +0x219a:  mov    (%eax),%edx
085a5d34 +0x219c:  mov    -0x40(%ebp),%eax
085a5d37 +0x219f:  mov    %eax,(%esp)
085a5d3a +0x21a2:  call   *%edx
085a5d3c +0x21a4:  test   %al,%al
085a5d3e +0x21a6:  je     085a5d5c <+0x21c4>
085a5d40 +0x21a8:  mov    -0xe8(%ebp),%eax
085a5d46 +0x21ae:  mov    %eax,(%esp)
085a5d49 +0x21b1:  call   085bfe0a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1368>  ; global constructors keyed to CParty::cMember::cMember()+0x1368
085a5d4e +0x21b6:  xor    $0x1,%eax
085a5d51 +0x21b9:  test   %al,%al
085a5d53 +0x21bb:  je     085a5d5c <+0x21c4>
085a5d55 +0x21bd:  mov    $0x1,%eax
085a5d5a +0x21c2:  jmp    085a5d61 <+0x21c9>
085a5d5c +0x21c4:  mov    $0x0,%eax
085a5d61 +0x21c9:  test   %al,%al
085a5d63 +0x21cb:  je     085a5e7d <+0x22e5>
085a5d69 +0x21d1:  movl   $0x1,0x4(%esp)
085a5d71 +0x21d9:  mov    -0xe8(%ebp),%eax
085a5d77 +0x21df:  mov    %eax,(%esp)
085a5d7a +0x21e2:  call   084ed032 <_GLOBAL__I__Z7getUserj+0x3fe4>  ; global constructors keyed to getUser(unsigned int)+0x3fe4
085a5d7f +0x21e7:  mov    -0xe8(%ebp),%eax
085a5d85 +0x21ed:  mov    %eax,(%esp)
085a5d88 +0x21f0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085a5d8d +0x21f5:  mov    %eax,%ebx
085a5d8f +0x21f7:  mov    -0xe8(%ebp),%eax
085a5d95 +0x21fd:  mov    %eax,(%esp)
085a5d98 +0x2200:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085a5d9d +0x2205:  movl   $0x1,0x8(%esp)
085a5da5 +0x220d:  mov    %ebx,0x4(%esp)
085a5da9 +0x2211:  mov    %eax,(%esp)
085a5dac +0x2214:  call   08442d70 <_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh>  ; DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char)
085a5db1 +0x2219:  lea    -0x250(%ebp),%eax
085a5db7 +0x221f:  mov    %eax,(%esp)
085a5dba +0x2222:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a5dbf +0x2227:  lea    -0x250(%ebp),%eax
085a5dc5 +0x222d:  mov    %eax,(%esp)
085a5dc8 +0x2230:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a5dcd +0x2235:  movl   $0x171,0x8(%esp)
085a5dd5 +0x223d:  movl   $0x0,0x4(%esp)
085a5ddd +0x2245:  lea    -0x250(%ebp),%eax
085a5de3 +0x224b:  mov    %eax,(%esp)
085a5de6 +0x224e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a5deb +0x2253:  mov    -0xe8(%ebp),%eax
085a5df1 +0x2259:  mov    %eax,(%esp)
085a5df4 +0x225c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a5df9 +0x2261:  movzwl %ax,%eax
085a5dfc +0x2264:  mov    %eax,0x4(%esp)
085a5e00 +0x2268:  lea    -0x250(%ebp),%eax
085a5e06 +0x226e:  mov    %eax,(%esp)
085a5e09 +0x2271:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a5e0e +0x2276:  movl   $0x1,0x4(%esp)
085a5e16 +0x227e:  lea    -0x250(%ebp),%eax
085a5e1c +0x2284:  mov    %eax,(%esp)
085a5e1f +0x2287:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a5e24 +0x228c:  movl   $0x1,0x4(%esp)
085a5e2c +0x2294:  lea    -0x250(%ebp),%eax
085a5e32 +0x229a:  mov    %eax,(%esp)
085a5e35 +0x229d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a5e3a +0x22a2:  lea    -0x250(%ebp),%eax
085a5e40 +0x22a8:  mov    %eax,0x4(%esp)
085a5e44 +0x22ac:  mov    -0xe8(%ebp),%eax
085a5e4a +0x22b2:  mov    %eax,(%esp)
085a5e4d +0x22b5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a5e52 +0x22ba:  jmp    085a5e6f <+0x22d7>
085a5e54 +0x22bc:  mov    %edx,%ebx
085a5e56 +0x22be:  mov    %eax,%esi
085a5e58 +0x22c0:  lea    -0x250(%ebp),%eax
085a5e5e +0x22c6:  mov    %eax,(%esp)
085a5e61 +0x22c9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a5e66 +0x22ce:  mov    %esi,%eax
085a5e68 +0x22d0:  mov    %ebx,%edx
085a5e6a +0x22d2:  jmp    085a63bb <+0x2823>
085a5e6f +0x22d7:  lea    -0x250(%ebp),%eax
085a5e75 +0x22dd:  mov    %eax,(%esp)
085a5e78 +0x22e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a5e7d +0x22e5:  mov    -0x40(%ebp),%eax
085a5e80 +0x22e8:  mov    (%eax),%eax
085a5e82 +0x22ea:  add    $0x4c,%eax
085a5e85 +0x22ed:  mov    (%eax),%edx
085a5e87 +0x22ef:  mov    -0x40(%ebp),%eax
085a5e8a +0x22f2:  mov    %eax,(%esp)
085a5e8d +0x22f5:  call   *%edx
085a5e8f +0x22f7:  test   %al,%al
085a5e91 +0x22f9:  je     085a5ee5 <+0x234d>
085a5e93 +0x22fb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a5e9a +0x2302:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
085a5e9f +0x2307:  mov    %eax,%ebx
085a5ea1 +0x2309:  mov    -0xe8(%ebp),%eax
085a5ea7 +0x230f:  mov    %eax,(%esp)
085a5eaa +0x2312:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
085a5eaf +0x2317:  mov    %ebx,0x18(%esp)
085a5eb3 +0x231b:  mov    %eax,0x14(%esp)
085a5eb7 +0x231f:  movl   $"%d,'%s'",0x10(%esp)
085a5ebf +0x2327:  movl   $0x1,0xc(%esp)
085a5ec7 +0x232f:  movl   $"pick_cnt",0x8(%esp)
085a5ecf +0x2337:  movl   $"log_random_option",0x4(%esp)
085a5ed7 +0x233f:  mov    -0xe8(%ebp),%eax
085a5edd +0x2345:  mov    %eax,(%esp)
085a5ee0 +0x2348:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
085a5ee5 +0x234d:  movl   $0x0,-0xd4(%ebp)
085a5eef +0x2357:  lea    -0x2bc(%ebp),%eax
085a5ef5 +0x235d:  add    $0x10,%eax
085a5ef8 +0x2360:  mov    %eax,(%esp)
085a5efb +0x2363:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
085a5f00 +0x2368:  test   %al,%al
085a5f02 +0x236a:  je     085a5f77 <+0x23df>
085a5f04 +0x236c:  mov    -0xe8(%ebp),%eax
085a5f0a +0x2372:  mov    %eax,(%esp)
085a5f0d +0x2375:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a5f12 +0x237a:  lea    -0x268(%ebp),%edx
085a5f18 +0x2380:  mov    %edx,0x8(%esp)
085a5f1c +0x2384:  mov    %eax,0x4(%esp)
085a5f20 +0x2388:  movl   $0x5,(%esp)
085a5f27 +0x238f:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
085a5f2c +0x2394:  movzwl -0x2a1(%ebp),%eax
085a5f33 +0x239b:  movsbl %al,%edx
085a5f36 +0x239e:  mov    -0x2aa(%ebp),%eax
085a5f3c +0x23a4:  movl   $0xf,0x14(%esp)
085a5f44 +0x23ac:  lea    -0x268(%ebp),%ecx
085a5f4a +0x23b2:  mov    %ecx,0x10(%esp)
085a5f4e +0x23b6:  mov    %edx,0xc(%esp)
085a5f52 +0x23ba:  movl   $0x0,0x8(%esp)
085a5f5a +0x23c2:  mov    %eax,0x4(%esp)
085a5f5e +0x23c6:  mov    -0xe8(%ebp),%eax
085a5f64 +0x23cc:  mov    %eax,(%esp)
085a5f67 +0x23cf:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
085a5f6c +0x23d4:  mov    %eax,-0xd4(%ebp)
085a5f72 +0x23da:  jmp    085a604c <+0x24b4>
085a5f77 +0x23df:  mov    -0xe8(%ebp),%eax
085a5f7d +0x23e5:  mov    %eax,(%esp)
085a5f80 +0x23e8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a5f85 +0x23ed:  movl   $0x1,0x4c(%esp)
085a5f8d +0x23f5:  movl   $0x1,0x48(%esp)
085a5f95 +0x23fd:  movl   $0x4,0x44(%esp)
085a5f9d +0x2405:  mov    -0x2ac(%ebp),%edx
085a5fa3 +0x240b:  mov    %edx,0x4(%esp)
085a5fa7 +0x240f:  mov    -0x2a8(%ebp),%edx
085a5fad +0x2415:  mov    %edx,0x8(%esp)
085a5fb1 +0x2419:  mov    -0x2a4(%ebp),%edx
085a5fb7 +0x241f:  mov    %edx,0xc(%esp)
085a5fbb +0x2423:  mov    -0x2a0(%ebp),%edx
085a5fc1 +0x2429:  mov    %edx,0x10(%esp)
085a5fc5 +0x242d:  mov    -0x29c(%ebp),%edx
085a5fcb +0x2433:  mov    %edx,0x14(%esp)
085a5fcf +0x2437:  mov    -0x298(%ebp),%edx
085a5fd5 +0x243d:  mov    %edx,0x18(%esp)
085a5fd9 +0x2441:  mov    -0x294(%ebp),%edx
085a5fdf +0x2447:  mov    %edx,0x1c(%esp)
085a5fe3 +0x244b:  mov    -0x290(%ebp),%edx
085a5fe9 +0x2451:  mov    %edx,0x20(%esp)
085a5fed +0x2455:  mov    -0x28c(%ebp),%edx
085a5ff3 +0x245b:  mov    %edx,0x24(%esp)
085a5ff7 +0x245f:  mov    -0x288(%ebp),%edx
085a5ffd +0x2465:  mov    %edx,0x28(%esp)
085a6001 +0x2469:  mov    -0x284(%ebp),%edx
085a6007 +0x246f:  mov    %edx,0x2c(%esp)
085a600b +0x2473:  mov    -0x280(%ebp),%edx
085a6011 +0x2479:  mov    %edx,0x30(%esp)
085a6015 +0x247d:  mov    -0x27c(%ebp),%edx
085a601b +0x2483:  mov    %edx,0x34(%esp)
085a601f +0x2487:  mov    -0x278(%ebp),%edx
085a6025 +0x248d:  mov    %edx,0x38(%esp)
085a6029 +0x2491:  mov    -0x274(%ebp),%edx
085a602f +0x2497:  mov    %edx,0x3c(%esp)
085a6033 +0x249b:  movzbl -0x270(%ebp),%edx
085a603a +0x24a2:  mov    %dl,0x40(%esp)
085a603e +0x24a6:  mov    %eax,(%esp)
085a6041 +0x24a9:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085a6046 +0x24ae:  mov    %eax,-0xd4(%ebp)
085a604c +0x24b4:  cmpl   $0xffffffff,-0xd4(%ebp)
085a6053 +0x24bb:  jne    085a60d4 <+0x253c>
085a6055 +0x24bd:  movl   $0x2e,0x8(%esp)
085a605d +0x24c5:  movl   $0x1,0x4(%esp)
085a6065 +0x24cd:  lea    -0x240(%ebp),%eax
085a606b +0x24d3:  mov    %eax,(%esp)
085a606e +0x24d6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a6073 +0x24db:  movl   $0x0,0x4(%esp)
085a607b +0x24e3:  lea    -0x240(%ebp),%eax
085a6081 +0x24e9:  mov    %eax,(%esp)
085a6084 +0x24ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a6089 +0x24f1:  movl   $0x4,0x4(%esp)
085a6091 +0x24f9:  lea    -0x240(%ebp),%eax
085a6097 +0x24ff:  mov    %eax,(%esp)
085a609a +0x2502:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a609f +0x2507:  movl   $0x1,0x4(%esp)
085a60a7 +0x250f:  lea    -0x240(%ebp),%eax
085a60ad +0x2515:  mov    %eax,(%esp)
085a60b0 +0x2518:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a60b5 +0x251d:  lea    -0x240(%ebp),%eax
085a60bb +0x2523:  mov    %eax,0x4(%esp)
085a60bf +0x2527:  mov    0xc(%ebp),%eax
085a60c2 +0x252a:  mov    %eax,(%esp)
085a60c5 +0x252d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a60ca +0x2532:  mov    $0x0,%ebx
085a60cf +0x2537:  jmp    085a63d9 <+0x2841>
085a60d4 +0x253c:  mov    -0x244(%ebp),%eax
085a60da +0x2542:  mov    %eax,%ebx
085a60dc +0x2544:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a60e1 +0x2549:  mov    %ebx,0xc(%esp)
085a60e5 +0x254d:  mov    -0xe8(%ebp),%edx
085a60eb +0x2553:  mov    %edx,0x8(%esp)
085a60ef +0x2557:  movl   $0x2,0x4(%esp)
085a60f7 +0x255f:  mov    %eax,(%esp)
085a60fa +0x2562:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a60ff +0x2567:  movl   $0x0,-0xd0(%ebp)
085a6109 +0x2571:  mov    0x8(%ebp),%eax
085a610c +0x2574:  lea    0xb24(%eax),%edx
085a6112 +0x257a:  mov    0x10(%ebp),%eax
085a6115 +0x257d:  mov    %eax,0x4(%esp)
085a6119 +0x2581:  mov    %edx,(%esp)
085a611c +0x2584:  call   0830daee <_ZN13CBattle_Field11pickup_itemEi>  ; CBattle_Field::pickup_item(int)
085a6121 +0x2589:  mov    %eax,-0xd0(%ebp)
085a6127 +0x258f:  cmpl   $0x0,-0xd0(%ebp)
085a612e +0x2596:  jle    085a6202 <+0x266a>
085a6134 +0x259c:  mov    -0x2aa(%ebp),%ebx
085a613a +0x25a2:  movl   $0x5,0xc(%esp)
085a6142 +0x25aa:  movl   $0x19bb,0x8(%esp)
085a614a +0x25b2:  movl   $&_ZZN6CParty8get_itemEP5CUseribcRiRhRbE19__PRETTY_FUNCTION__,0x4(%esp)
085a6152 +0x25ba:  lea    -0xfc(%ebp),%eax
085a6158 +0x25c0:  mov    %eax,(%esp)
085a615b +0x25c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6160 +0x25c8:  mov    %ebx,0xc(%esp)
085a6164 +0x25cc:  mov    0x10(%ebp),%eax
085a6167 +0x25cf:  mov    %eax,0x8(%esp)
085a616b +0x25d3:  movl   $"m_field_data.pickup_item( %d/%d ) ",0x4(%esp)
085a6173 +0x25db:  lea    -0xfc(%ebp),%eax
085a6179 +0x25e1:  mov    %eax,(%esp)
085a617c +0x25e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6181 +0x25e9:  movl   $0x2e,0x8(%esp)
085a6189 +0x25f1:  movl   $0x1,0x4(%esp)
085a6191 +0x25f9:  lea    -0x240(%ebp),%eax
085a6197 +0x25ff:  mov    %eax,(%esp)
085a619a +0x2602:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a619f +0x2607:  movl   $0x0,0x4(%esp)
085a61a7 +0x260f:  lea    -0x240(%ebp),%eax
085a61ad +0x2615:  mov    %eax,(%esp)
085a61b0 +0x2618:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a61b5 +0x261d:  mov    -0xd0(%ebp),%eax
085a61bb +0x2623:  mov    %eax,0x4(%esp)
085a61bf +0x2627:  lea    -0x240(%ebp),%eax
085a61c5 +0x262d:  mov    %eax,(%esp)
085a61c8 +0x2630:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a61cd +0x2635:  movl   $0x1,0x4(%esp)
085a61d5 +0x263d:  lea    -0x240(%ebp),%eax
085a61db +0x2643:  mov    %eax,(%esp)
085a61de +0x2646:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a61e3 +0x264b:  lea    -0x240(%ebp),%eax
085a61e9 +0x2651:  mov    %eax,0x4(%esp)
085a61ed +0x2655:  mov    0xc(%ebp),%eax
085a61f0 +0x2658:  mov    %eax,(%esp)
085a61f3 +0x265b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a61f8 +0x2660:  mov    $0x0,%ebx
085a61fd +0x2665:  jmp    085a63d9 <+0x2841>
085a6202 +0x266a:  mov    -0x2a5(%ebp),%eax
085a6208 +0x2670:  mov    %eax,%edx
085a620a +0x2672:  mov    -0x2aa(%ebp),%eax
085a6210 +0x2678:  mov    %edx,0xc(%esp)
085a6214 +0x267c:  mov    %eax,0x8(%esp)
085a6218 +0x2680:  mov    -0xe8(%ebp),%eax
085a621e +0x2686:  mov    %eax,0x4(%esp)
085a6222 +0x268a:  mov    0x8(%ebp),%eax
085a6225 +0x268d:  mov    %eax,(%esp)
085a6228 +0x2690:  call   085b949c <_ZN6CParty10_onGetItemEP5CUserjj>  ; CParty::_onGetItem(CUser*, unsigned int, unsigned int)
085a622d +0x2695:  movl   $0x27,0x8(%esp)
085a6235 +0x269d:  movl   $0x0,0x4(%esp)
085a623d +0x26a5:  lea    -0x240(%ebp),%eax
085a6243 +0x26ab:  mov    %eax,(%esp)
085a6246 +0x26ae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a624b +0x26b3:  mov    0x10(%ebp),%eax
085a624e +0x26b6:  mov    %eax,0x4(%esp)
085a6252 +0x26ba:  lea    -0x240(%ebp),%eax
085a6258 +0x26c0:  mov    %eax,(%esp)
085a625b +0x26c3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a6260 +0x26c8:  mov    0xc(%ebp),%eax
085a6263 +0x26cb:  mov    %eax,(%esp)
085a6266 +0x26ce:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a626b +0x26d3:  movzwl %ax,%eax
085a626e +0x26d6:  mov    %eax,0x4(%esp)
085a6272 +0x26da:  lea    -0x240(%ebp),%eax
085a6278 +0x26e0:  mov    %eax,(%esp)
085a627b +0x26e3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a6280 +0x26e8:  movl   $0x0,-0x1c(%ebp)
085a6287 +0x26ef:  jmp    085a62a9 <+0x2711>
085a6289 +0x26f1:  mov    -0x1c(%ebp),%eax
085a628c +0x26f4:  mov    -0x234(%ebp,%eax,4),%eax
085a6293 +0x26fb:  mov    %eax,0x4(%esp)
085a6297 +0x26ff:  lea    -0x240(%ebp),%eax
085a629d +0x2705:  mov    %eax,(%esp)
085a62a0 +0x2708:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a62a5 +0x270d:  addl   $0x1,-0x1c(%ebp)
085a62a9 +0x2711:  cmpl   $0x3,-0x1c(%ebp)
085a62ad +0x2715:  setle  %al
085a62b0 +0x2718:  test   %al,%al
085a62b2 +0x271a:  jne    085a6289 <+0x26f1>
085a62b4 +0x271c:  mov    -0xe8(%ebp),%eax
085a62ba +0x2722:  mov    %eax,(%esp)
085a62bd +0x2725:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a62c2 +0x272a:  movzwl %ax,%eax
085a62c5 +0x272d:  mov    %eax,0x4(%esp)
085a62c9 +0x2731:  lea    -0x240(%ebp),%eax
085a62cf +0x2737:  mov    %eax,(%esp)
085a62d2 +0x273a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a62d7 +0x273f:  mov    -0xd4(%ebp),%eax
085a62dd +0x2745:  mov    %eax,0x4(%esp)
085a62e1 +0x2749:  lea    -0x240(%ebp),%eax
085a62e7 +0x274f:  mov    %eax,(%esp)
085a62ea +0x2752:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a62ef +0x2757:  mov    -0xe4(%ebp),%eax
085a62f5 +0x275d:  mov    %eax,0x4(%esp)
085a62f9 +0x2761:  lea    -0x240(%ebp),%eax
085a62ff +0x2767:  mov    %eax,(%esp)
085a6302 +0x276a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a6307 +0x276f:  movl   $0x1,0x4(%esp)
085a630f +0x2777:  lea    -0x240(%ebp),%eax
085a6315 +0x277d:  mov    %eax,(%esp)
085a6318 +0x2780:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a631d +0x2785:  lea    -0x240(%ebp),%eax
085a6323 +0x278b:  mov    %eax,0x4(%esp)
085a6327 +0x278f:  mov    0x8(%ebp),%eax
085a632a +0x2792:  mov    %eax,(%esp)
085a632d +0x2795:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a6332 +0x279a:  movzbl -0x2bc(%ebp),%eax
085a6339 +0x27a1:  test   %al,%al
085a633b +0x27a3:  je     085a6362 <+0x27ca>
085a633d +0x27a5:  mov    -0x2aa(%ebp),%eax
085a6343 +0x27ab:  mov    %eax,%edx
085a6345 +0x27ad:  mov    0x1c(%ebp),%eax
085a6348 +0x27b0:  mov    %edx,(%eax)
085a634a +0x27b2:  lea    -0x2bc(%ebp),%eax
085a6350 +0x27b8:  add    $0x10,%eax
085a6353 +0x27bb:  mov    %eax,(%esp)
085a6356 +0x27be:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085a635b +0x27c3:  mov    0x20(%ebp),%edx
085a635e +0x27c6:  mov    %al,(%edx)
085a6360 +0x27c8:  jmp    085a6371 <+0x27d9>
085a6362 +0x27ca:  mov    0x1c(%ebp),%eax
085a6365 +0x27cd:  movl   $0xffffffff,(%eax)
085a636b +0x27d3:  mov    0x20(%ebp),%eax
085a636e +0x27d6:  movb   $0x0,(%eax)
085a6371 +0x27d9:  movzbl -0x2bc(%ebp),%eax
085a6378 +0x27e0:  test   %al,%al
085a637a +0x27e2:  je     085a63b4 <+0x281c>
085a637c +0x27e4:  movzbl -0x2ab(%ebp),%eax
085a6383 +0x27eb:  cmp    $0x2,%al
085a6385 +0x27ed:  jne    085a63b4 <+0x281c>
085a6387 +0x27ef:  lea    -0x2bc(%ebp),%eax
085a638d +0x27f5:  add    $0x10,%eax
085a6390 +0x27f8:  mov    %eax,(%esp)
085a6393 +0x27fb:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a6398 +0x2800:  mov    -0x2aa(%ebp),%edx
085a639e +0x2806:  mov    %eax,0x8(%esp)
085a63a2 +0x280a:  mov    %edx,0x4(%esp)
085a63a6 +0x280e:  mov    -0xe8(%ebp),%eax
085a63ac +0x2814:  mov    %eax,(%esp)
085a63af +0x2817:  call   08692b84 <_ZN5CUser20SendAradEventItemLogEmi>  ; CUser::SendAradEventItemLog(unsigned long, int)
085a63b4 +0x281c:  mov    $0x1,%ebx
085a63b9 +0x2821:  jmp    085a63d9 <+0x2841>
085a63bb +0x2823:  mov    %edx,%ebx
085a63bd +0x2825:  mov    %eax,%esi
085a63bf +0x2827:  lea    -0x240(%ebp),%eax
085a63c5 +0x282d:  mov    %eax,(%esp)
085a63c8 +0x2830:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a63cd +0x2835:  mov    %esi,%eax
085a63cf +0x2837:  mov    %ebx,%edx
085a63d1 +0x2839:  mov    %eax,(%esp)
085a63d4 +0x283c:  call   08ae3750 <_Unwind_Resume>
085a63d9 +0x2841:  lea    -0x240(%ebp),%eax
085a63df +0x2847:  mov    %eax,(%esp)
085a63e2 +0x284a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a63e7 +0x284f:  mov    %ebx,%eax
085a63e9 +0x2851:  lea    -0xc(%ebp),%esp
085a63ec +0x2854:  add    $0x0,%esp
085a63ef +0x2857:  pop    %ebx
085a63f0 +0x2858:  pop    %esi
085a63f1 +0x2859:  pop    %edi
085a63f2 +0x285a:  pop    %ebp
085a63f3 +0x285b:  ret
```

## 反编译 C

```c
// CParty::get_item @ 0x85a3b98

/* WARNING: Removing unreachable block (ram,0x085a56f6) */
/* WARNING: Removing unreachable block (ram,0x085a57bf) */
/* WARNING: Removing unreachable block (ram,0x085a5741) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&) */

undefined4 __thiscall
CParty::get_item(CParty *this,CUser *param_1,int param_2,bool param_3,char param_4,int *param_5,
                uchar *param_6,bool *param_7)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  uchar uVar5;
  short sVar6;
  CInventory *pCVar7;
  CCreatureMgr *pCVar8;
  int iVar9;
  CHackAnalyzer *pCVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  CCirculationStatistic *pCVar14;
  CGuildServerProxy *pCVar15;
  CValueStatistic *pCVar16;
  CDataManager *pCVar17;
  CItemGeneratorMgr *pCVar18;
  CGeneratorCommonData *this_00;
  int iVar19;
  Store *this_01;
  undefined4 uVar20;
  longdouble lVar21;
  map_item local_2c0 [16];
  Inven_Item local_2b0;
  char cStack_2af;
  undefined2 uStack_2ae;
  undefined2 uStack_2ac;
  undefined1 uStack_2aa;
  uint uStack_2a9;
  char local_2a5;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 local_274;
  int local_270;
  undefined1 local_26c [24];
  PacketGuard local_254 [12];
  int local_248;
  PacketGuard local_244 [12];
  int local_238 [4];
  cMyTrace local_228 [16];
  cMyTrace local_218 [18];
  undefined1 local_206 [2];
  int local_204;
  undefined1 local_1c9 [2];
  int local_1c7;
  cMyTrace local_18c [18];
  undefined1 local_17a [2];
  int local_178;
  undefined1 local_13d [2];
  int local_13b;
  cMyTrace local_100 [19];
  char local_ed;
  CUser *local_ec;
  int local_e8;
  int local_e4;
  char local_dd;
  int local_dc;
  int local_d8;
  int local_d4;
  char local_cd;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  CItemGenerator *local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CItem *local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_ed = '\x01';
  local_ec = (CUser *)0x0;
  local_238[0] = 0;
  local_238[1] = 0;
  local_238[2] = 0;
  local_238[3] = 0;
  PacketGuard::PacketGuard(local_244);
  local_e8 = 0;
  local_e4 = GetMemberSlotNo(this,param_1);
  if ((local_e4 != -1) && (this[local_e4 + 0x380] != (CParty)0x1)) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar8 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar7);
                    /* try { // try from 085a3c56 to 085a5dbe has its CatchHandler @ 085a63bb */
    iVar9 = user_creature::CCreatureMgr::GetCreatureItemId(pCVar8);
    if (iVar9 != 0xf631) {
      pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x132,1,0,0);
    }
  }
  if ((*(int *)(this + 0xcac) == 0) ||
     (cVar4 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0xcac)), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CBattle_Field::SetCurSeatNo((CBattle_Field *)(this + 0xb24),local_e4);
  }
  map_item::map_item(local_2c0);
  local_dd = CBattle_Field::get_field_item((CBattle_Field *)(this + 0xb24),param_2,local_2c0);
  if (local_dd == '\x01') {
    local_248 = 0;
    local_dc = get_member_count(this);
    if (local_dc < 1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0x15);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
      CUser::Send(param_1,local_244);
      uVar20 = 0;
    }
    else if (CONCAT22(uStack_2ac,uStack_2ae) == 0) {
      local_cc = get_live_count_enter_map(this);
      if (local_cc < 1) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0x15);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
        CUser::Send(param_1,local_244);
        uVar20 = 0;
      }
      else {
        local_c8 = Inven_Item::get_add_info(&local_2b0);
        if (499999 < local_c8) {
          uVar11 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
          uVar12 = get_member_count(this);
          uVar20 = *(undefined4 *)(this + 0xcb8);
          cMyTrace::cMyTrace(local_228,
                             "bool CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)"
                             ,0x165c,4);
          cMyTrace::operator()
                    (local_228,"Dungeon(%d) drop money(%d) on %d\' party member with difficulty %d",
                     uVar20,local_c8,uVar12,uVar11);
        }
        local_c4 = Inven_Item::get_add_info(&local_2b0);
        local_c4 = local_c4 / local_cc;
        local_c0 = Inven_Item::get_add_info(&local_2b0);
        local_c0 = local_c0 % local_cc;
        local_bc = local_c4 + local_c0;
        local_b8 = local_c4;
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,0,0x27);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,param_2);
        uVar13 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,uVar13 & 0xffff);
        for (local_b0 = 0; local_b0 < 4; local_b0 = local_b0 + 1) {
          cVar4 = _checkValidUser(this,local_b0);
          if (cVar4 == '\0') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,1);
            local_ac = local_b8;
            if (*(CUser **)(this + local_b0 * 0x18 + 0x78) == param_1) {
              local_ac = local_bc;
            }
            if (499999 < local_bc) {
              pCVar7 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              uVar20 = CInventory::get_money(pCVar7);
              uVar11 = CUserCharacInfo::getCurCharacName
                                 (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              uVar13 = CUser::get_acc_id(*(CUser **)(this + local_b0 * 0x18 + 0x78));
              uVar12 = NumberToString(uVar13,0);
              cMyTrace::cMyTrace(local_218,
                                 "bool CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)"
                                 ,0x1688,4);
              cMyTrace::operator()
                        (local_218,"User(%s) Charac(%s) gain money(%d), old money is %d.",uVar12,
                         uVar11,local_bc,uVar20);
            }
            if (this[local_b0 + 900] != (CParty)0x1) {
              local_ac = 0;
            }
            local_a8 = local_ac;
            local_a4 = 0;
            if (local_2c0[0] != (map_item)0x0) {
              pCVar7 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              pCVar8 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar7);
              local_a4 = user_creature::CCreatureMgr::GetExtraGold(pCVar8,local_a8);
              local_ac = local_ac + local_a4;
            }
            if (local_2c0[0] != (map_item)0x0) {
              pCVar7 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              pCVar8 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar7);
              local_94 = user_creature::CCreatureMgr::GetOverSkillExtraGold(pCVar8,local_a8);
              local_a4 = local_a4 + local_94;
              local_ac = local_ac + local_94;
            }
            if ((local_2c0[0] != (map_item)0x0) && (0 < local_a8)) {
              local_90 = 0;
              iVar9 = CUserCharacInfo::getCurCharacInvenR
                                (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              CInventory::GetInvenSlot((int)local_206,iVar9);
              local_8c = local_204;
              if (local_204 == 0x6802) {
LAB_085a44b9:
                local_90 = 3;
              }
              else if (local_204 < 0x6803) {
                if (local_204 == 0x6622) {
                  local_90 = 4;
                }
                else if (local_204 < 0x6623) {
                  if (local_204 == 0x6603) {
                    local_90 = 3;
                  }
                }
                else {
                  if (local_204 == 0x66e5) goto LAB_085a44b9;
                  if (local_204 == 0x66e6) goto LAB_085a44c5;
                }
              }
              else if (local_204 == 0x28e4a3) {
LAB_085a44dd:
                local_90 = 3;
              }
              else if (local_204 < 0x28e4a4) {
                if (local_204 == 0x6803) {
LAB_085a44c5:
                  local_90 = 4;
                }
                else if (local_204 == 0x68a2) {
                  local_90 = 4;
                }
              }
              else {
                if (local_204 == 0x28e4a6) goto LAB_085a44dd;
                if (local_204 == 0x28e4a8) {
                  local_90 = 5;
                }
              }
              local_88 = (local_a8 * local_90) / 100;
              local_a4 = local_a4 + local_88;
              local_ac = local_ac + local_88;
            }
            if ((local_2c0[0] != (map_item)0x0) && (0 < local_a8)) {
              iVar9 = CUserCharacInfo::getCurCharacInvenR
                                (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
              CInventory::GetInvenSlot((int)local_1c9,iVar9);
              if (local_1c7 == 0x5e7f) {
                local_84 = (int)ROUND(_DAT_08cbbbe0 * (double)local_a8);
                local_a4 = local_a4 + local_84;
                local_ac = local_ac + local_84;
              }
            }
            local_a0 = 0;
            if (local_2c0[0] != (map_item)0x0) {
              lVar21 = (longdouble)
                       CalcurateManageBonus
                                 (this,1,*(undefined4 *)(this + local_b0 * 0x18 + 0x78),local_ac);
              iVar9 = (int)ROUND(lVar21);
              local_a4 = local_a4 + iVar9;
              local_ac = local_ac + iVar9;
              uVar20 = *(undefined4 *)(this + local_b0 * 0x18 + 0x78);
              local_a0 = iVar9;
              pCVar14 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
              CCirculationStatistic::AddCirculationStatistic(pCVar14,0x11,uVar20,iVar9);
            }
            local_9c = 0;
            if ((local_2c0[0] == (map_item)0x0) ||
               (iVar9 = CUserCharacInfo::get_charac_guildkey
                                  (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78)), iVar9 == 0
               )) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) &&
               (cVar4 = CUser::IsCompleteGuildFund(*(CUser **)(this + local_b0 * 0x18 + 0x78)),
               cVar4 != '\x01')) {
              iVar9 = G_CDataManager();
              if ((local_a8 < *(int *)(iVar9 + 0xa610)) ||
                 (iVar9 = G_CDataManager(), *(int *)(iVar9 + 0xa614) < local_ac)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                iVar9 = G_CDataManager();
                local_9c = *(int *)(iVar9 + 0xa618);
              }
              else {
                iVar9 = G_CDataManager();
                if (*(int *)(iVar9 + 0xa614) < local_a8) {
                  dVar3 = (double)local_a8;
                  iVar9 = G_CDataManager();
                  local_9c = (int)ROUND(*(double *)(iVar9 + 0xa61c) * dVar3);
                }
              }
              iVar9 = local_9c;
              if ((local_9c <= local_ac) && (0 < local_9c)) {
                local_ac = local_ac - local_9c;
                uVar20 = *(undefined4 *)(this + local_b0 * 0x18 + 0x78);
                pCVar14 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                CCirculationStatistic::AddCirculationStatistic(pCVar14,0x2a,uVar20,iVar9);
              }
              if (0 < local_9c) {
                uVar20 = CUserCharacInfo::get_charac_guildkey
                                   (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
                uVar11 = CUser::get_charac_no(*(CUser **)(this + local_b0 * 0x18 + 0x78),-1);
                uVar12 = CUser::GetServerGroup(*(CUser **)(this + local_b0 * 0x18 + 0x78));
                pCVar15 = (CGuildServerProxy *)
                          CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                    (GlobalData::s_guild_proxy_mgr,uVar12);
                CGuildServerProxy::SendAddGuildFund(pCVar15,uVar11,uVar20,local_9c,0);
              }
            }
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + local_b0 * 0x18 + 0x78));
            local_98 = CInventory::gain_money(pCVar7,local_ac,4,1,local_a0);
            if (local_2c0[0] != (map_item)0x0) {
              CUser::saveTaxMoneyForUpperMember(*(CUser **)(this + local_b0 * 0x18 + 0x78),local_ac)
              ;
            }
            if (local_98 < local_ac) {
              if (local_98 < 0) {
                local_98 = 0;
              }
              CUser::SendMoneyFullReason
                        (*(CUser **)(this + local_b0 * 0x18 + 0x78),0,local_ac,local_98);
            }
            iVar9 = local_98;
            uVar20 = *(undefined4 *)(this + local_b0 * 0x18 + 0x78);
            pCVar16 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar16,1,uVar20,iVar9);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_98);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_a4);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_9c);
          }
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
        send_to_party(this,local_244);
        local_b4 = 0;
        local_b4 = CBattle_Field::pickup_item((int)(this + 0xb24));
        if (local_b4 < 1) {
          if (local_2c0[0] == (map_item)0x0) {
            *param_5 = -1;
            *param_6 = '\0';
          }
          else {
            *param_5 = CONCAT22(uStack_2ac,uStack_2ae);
            *param_6 = '\0';
          }
          uVar20 = 1;
        }
        else {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,local_b4);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
          send_to_party(this,local_244);
          CUser::Send(param_1,local_244);
          uVar20 = 0;
        }
      }
    }
    else if (CONCAT22(uStack_2ac,uStack_2ae) == 0x4af) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,0,0x27);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,param_2);
      uVar13 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,uVar13 & 0xffff);
      for (local_7c = 0; local_7c < 4; local_7c = local_7c + 1) {
        local_78 = 0;
        cVar4 = _checkValidUser(this,local_7c);
        if (cVar4 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,1);
          pCVar17 = (CDataManager *)G_CDataManager();
          pCVar18 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar17);
          local_74 = (CItemGenerator *)WongWork::CItemGeneratorMgr::getGenerator(pCVar18,2);
          uVar5 = CUserCharacInfo::get_charac_level
                            (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
          this_00 = (CGeneratorCommonData *)
                    WongWork::CItemGenerator::getGeneratorCommonData(local_74);
          local_70 = (int *)WongWork::CGeneratorCommonData::getGoldGenTable(this_00,uVar5);
          iVar9 = *local_70;
          iVar1 = *local_70;
          iVar19 = GetRandomRange(-local_70[1],local_70[1]);
          local_78 = iVar9 + (iVar1 * iVar19) / 100;
          if (499999 < local_78) {
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR
                               (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            uVar20 = CInventory::get_money(pCVar7);
            uVar11 = CUserCharacInfo::getCurCharacName
                               (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            uVar13 = CUser::get_acc_id(*(CUser **)(this + local_7c * 0x18 + 0x78));
            uVar12 = NumberToString(uVar13,0);
            cMyTrace::cMyTrace(local_18c,
                               "bool CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)"
                               ,0x1789,4);
            cMyTrace::operator()
                      (local_18c,"User(%s) Charac(%s) gain money(%d), old money is %d.",uVar12,
                       uVar11,local_78,uVar20);
          }
          if (this[local_7c + 900] != (CParty)0x1) {
            local_78 = 0;
          }
          local_6c = local_78;
          local_68 = 0;
          if (local_2c0[0] != (map_item)0x0) {
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR
                               (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            pCVar8 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar7);
            local_68 = user_creature::CCreatureMgr::GetExtraGold(pCVar8,local_6c);
            local_78 = local_78 + local_68;
          }
          if (local_2c0[0] != (map_item)0x0) {
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR
                               (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            pCVar8 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar7);
            local_58 = user_creature::CCreatureMgr::GetOverSkillExtraGold(pCVar8,local_6c);
            local_68 = local_68 + local_58;
            local_78 = local_78 + local_58;
          }
          if ((local_2c0[0] != (map_item)0x0) && (0 < local_6c)) {
            local_54 = 0;
            iVar9 = CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            CInventory::GetInvenSlot((int)local_17a,iVar9);
            local_50 = local_178;
            if (local_178 == 0x66e6) {
LAB_085a4f9c:
              local_54 = 4;
            }
            else if (local_178 < 0x66e7) {
              if (local_178 == 0x6622) {
                local_54 = 4;
              }
              else if (local_178 == 0x66e5) {
LAB_085a4f93:
                local_54 = 3;
              }
              else if (local_178 == 0x6603) {
                local_54 = 3;
              }
            }
            else {
              if (local_178 == 0x6803) goto LAB_085a4f9c;
              if (local_178 == 0x68a2) {
                local_54 = 4;
              }
              else if (local_178 == 0x6802) goto LAB_085a4f93;
            }
            local_4c = (local_6c * local_54) / 100;
            local_68 = local_68 + local_4c;
            local_78 = local_78 + local_4c;
          }
          if ((local_2c0[0] != (map_item)0x0) && (0 < local_6c)) {
            iVar9 = CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
            CInventory::GetInvenSlot((int)local_13d,iVar9);
            if (local_13b == 0x5e7f) {
              local_48 = (int)ROUND(_DAT_08cbbbe0 * (double)local_6c);
              local_68 = local_68 + local_48;
              local_78 = local_78 + local_48;
            }
          }
          local_64 = 0;
          if (local_2c0[0] != (map_item)0x0) {
            lVar21 = (longdouble)
                     CalcurateManageBonus
                               (this,1,*(undefined4 *)(this + local_7c * 0x18 + 0x78),local_78);
            iVar9 = (int)ROUND(lVar21);
            local_68 = local_68 + iVar9;
            local_78 = local_78 + iVar9;
            uVar20 = *(undefined4 *)(this + local_7c * 0x18 + 0x78);
            local_64 = iVar9;
            pCVar14 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
            CCirculationStatistic::AddCirculationStatistic(pCVar14,0x11,uVar20,iVar9);
          }
          local_60 = 0;
          if ((local_2c0[0] == (map_item)0x0) ||
             (iVar9 = CUserCharacInfo::get_charac_guildkey
                                (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78)), iVar9 == 0))
          {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (cVar4 = CUser::IsCompleteGuildFund(*(CUser **)(this + local_7c * 0x18 + 0x78)),
             cVar4 != '\x01')) {
            iVar9 = G_CDataManager();
            if ((local_6c < *(int *)(iVar9 + 0xa610)) ||
               (iVar9 = G_CDataManager(), *(int *)(iVar9 + 0xa614) < local_6c)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar9 = G_CDataManager();
              local_60 = *(int *)(iVar9 + 0xa618);
            }
            else {
              iVar9 = G_CDataManager();
              if (*(int *)(iVar9 + 0xa614) < local_6c) {
                dVar3 = (double)local_6c;
                iVar9 = G_CDataManager();
                local_60 = (int)ROUND(*(double *)(iVar9 + 0xa61c) * dVar3);
              }
            }
            iVar9 = local_60;
            if ((local_60 <= local_78) && (0 < local_60)) {
              local_78 = local_78 - local_60;
              uVar20 = *(undefined4 *)(this + local_7c * 0x18 + 0x78);
              pCVar14 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
              CCirculationStatistic::AddCirculationStatistic(pCVar14,0x2a,uVar20,iVar9);
            }
            if (0 < local_60) {
              uVar20 = CUserCharacInfo::get_charac_guildkey
                                 (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
              uVar11 = CUser::get_charac_no(*(CUser **)(this + local_7c * 0x18 + 0x78),-1);
              uVar12 = CUser::GetServerGroup(*(CUser **)(this + local_7c * 0x18 + 0x78));
              pCVar15 = (CGuildServerProxy *)
                        CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                  (GlobalData::s_guild_proxy_mgr,uVar12);
              CGuildServerProxy::SendAddGuildFund(pCVar15,uVar11,uVar20,local_60,0);
            }
          }
          pCVar7 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenW
                             (*(CUserCharacInfo **)(this + local_7c * 0x18 + 0x78));
          local_5c = CInventory::gain_money(pCVar7,local_78,0x1a,1,local_64);
          if (local_2c0[0] != (map_item)0x0) {
            CUser::saveTaxMoneyForUpperMember(*(CUser **)(this + local_7c * 0x18 + 0x78),local_78);
          }
          if (local_5c < local_78) {
            if (local_5c < 0) {
              local_5c = 0;
            }
            CUser::SendMoneyFullReason
                      (*(CUser **)(this + local_7c * 0x18 + 0x78),0,local_78,local_5c);
          }
          iVar9 = local_78;
          uVar20 = *(undefined4 *)(this + local_7c * 0x18 + 0x78);
          pCVar16 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar16,1,uVar20,iVar9);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_78);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_68);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_244,local_60);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
      send_to_party(this,local_244);
      local_80 = 0;
      local_80 = CBattle_Field::pickup_item((int)(this + 0xb24));
      if (local_80 < 1) {
        if (local_2c0[0] == (map_item)0x0) {
          *param_5 = -1;
          *param_6 = '\0';
        }
        else {
          *param_5 = CONCAT22(uStack_2ac,uStack_2ae);
          *param_6 = '\0';
        }
        uVar20 = 1;
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,local_80);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
        send_to_party(this,local_244);
        CUser::Send(param_1,local_244);
        uVar20 = 0;
      }
    }
    else {
      iVar9 = CONCAT22(uStack_2ac,uStack_2ae);
      pCVar17 = (CDataManager *)G_CDataManager();
      local_44 = (CItem *)CDataManager::find_item(pCVar17,iVar9);
      if (local_44 == (CItem *)0x0) {
        LogManager::logFormat
                  (1,"party.cpp",
                   "bool CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)",
                   0x1878,"G_CDataManager()->find_item(%d) fail",CONCAT22(uStack_2ac,uStack_2ae));
        uVar20 = 0;
      }
      else {
        cVar4 = CItem::is_stackable(local_44);
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*(int *)local_44 + 0x14))(local_44);
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(*(int *)local_44 + 0x10))(local_44);
            if (cVar4 != '\0') {
              local_e8 = 1;
            }
          }
          else {
            local_e8 = 7;
          }
        }
        else {
          *param_7 = true;
          iVar9 = (**(code **)(*(int *)local_44 + 0xc))(local_44);
          if (iVar9 == 9) {
            local_e8 = 7;
          }
        }
        CItem::get_rarity(local_44);
        iVar9 = get_member_count(this);
        if (iVar9 < 2) {
          local_ec = param_1;
        }
        else {
          if (local_2c0[0] != (map_item)0x1) {
            local_ed = '\0';
          }
          iVar9 = CItem::get_rarity(local_44);
          if (3 < iVar9) {
            local_ed = param_3;
          }
          if ((local_2c0[0] == (map_item)0x0) ||
             (cVar4 = CItem::isEpicRoutingItem(local_44), cVar4 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_ed = param_3;
          }
          if (local_ed == '\0') {
            local_ec = param_1;
          }
          else {
            cVar4 = CItem::check_item_routing(local_44);
            if ((cVar4 == '\0') &&
               (cVar4 = (**(code **)(*(int *)local_44 + 0x10))(local_44), cVar4 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_38 = *(int *)(this + 0x144) + 1;
              iVar9 = get_member_count(this);
              if (iVar9 <= local_38) {
                local_38 = 0;
              }
              local_34 = 0;
              local_30 = 0;
              if (local_270 != 0) {
                local_30 = get_rand_int(0xb);
                local_30 = local_30 + 0x59;
              }
              for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                cVar4 = _checkValidUser(this,local_28);
                if ((cVar4 == '\x01') && (this[local_28 + 0x380] == (CParty)0x1)) {
                  uVar20 = CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + local_28 * 0x18 + 0x78));
                  iVar9 = CInventory::tryInsertItemIntoInventory
                                    (uVar20,CONCAT22(uStack_2ae,CONCAT11(cStack_2af,local_2b0)),
                                     CONCAT13((undefined1)uStack_2a9,CONCAT12(uStack_2aa,uStack_2ac)
                                             ),CONCAT13(local_2a5,uStack_2a9._1_3_),uStack_2a4,
                                     local_2a0,local_29c,local_298,local_294,local_290,local_28c,
                                     local_288,local_284,local_280,local_27c,local_278,local_274);
                  if (iVar9 != -1) {
                    local_238[local_28] = local_238[local_28] + 1;
                    if (local_34 == local_38) {
                      local_238[local_28] = local_238[local_28] + 0x28;
                      *(int *)(this + 0x144) = local_34;
                    }
                    cVar4 = CItem::is_stackable(local_44);
                    if ((cVar4 == '\x01') ||
                       (iVar9 = (**(code **)(*(int *)local_44 + 0xc))(local_44), iVar9 != 10)) {
LAB_085a5aaa:
                      bVar2 = false;
                    }
                    else {
                      cVar4 = CUserCharacInfo::get_charac_job
                                        (*(CUserCharacInfo **)(this + local_28 * 0x18 + 0x78));
                      cVar4 = CItem::check_job_type(local_44,cVar4);
                      if (cVar4 == '\0') goto LAB_085a5aaa;
                      bVar2 = true;
                    }
                    if (bVar2) {
                      local_238[local_28] = local_238[local_28] + 0x1e;
                    }
                    iVar1 = local_28;
                    iVar9 = local_238[local_28];
                    iVar19 = get_rand_int(100 - local_238[local_28]);
                    local_238[iVar1] = iVar9 + iVar19;
                    if (local_270 != 0) {
                      if (*(int *)(this + local_28 * 0x18 + 0x78) == local_270) {
                        local_238[local_28] = local_30;
                      }
                      else if (local_30 <= local_238[local_28]) {
                        local_238[local_28] = local_30 + -1;
                      }
                    }
                    local_34 = local_34 + 1;
                  }
                }
              }
              local_2c = 0;
              for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                cVar4 = _checkValidUser(this,local_24);
                if ((cVar4 == '\x01') && (this[local_24 + 0x380] == (CParty)0x1)) {
                  if (local_2c < local_238[local_24]) {
                    local_2c = local_238[local_24];
                    local_ec = *(CUser **)(this + local_24 * 0x18 + 0x78);
                  }
                  else if ((local_238[local_24] == local_2c) && (0 < local_238[local_24])) {
                    local_238[local_24] = local_238[local_24] + -1;
                  }
                }
              }
            }
            else {
              local_ec = param_1;
            }
          }
        }
        if (local_ec == (CUser *)0x0) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0x16);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
          send_to_party(this,local_244);
          uVar20 = 0;
        }
        else {
          sVar6 = (short)uStack_2a9;
          this_01 = (Store *)G_Store();
          Store::GetSellItemPrice(this_01,&local_2b0,local_44,sVar6,false,&local_248);
          cVar4 = (**(code **)(*(int *)local_44 + 0x4c))(local_44);
          if ((cVar4 == '\0') ||
             (cVar4 = CUser::getCheckPickUpRandomOptionItem(local_ec), cVar4 == '\x01')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            CUser::setCheckPickUpRandomOptionItem(local_ec,true);
            uVar13 = CUser::get_acc_id(local_ec);
            iVar9 = CUser::GetUID(local_ec);
            DB_InsertRandomOptionItemInform::makeRequest(iVar9,uVar13,'\x01');
            PacketGuard::PacketGuard(local_254);
                    /* try { // try from 085a5dc8 to 085a5e51 has its CatchHandler @ 085a5e54 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_254);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_254,0,0x171);
            uVar13 = CUser::get_unique_id(local_ec);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_254,uVar13 & 0xffff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_254,1);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_254,true);
            CUser::Send(local_ec,local_254);
                    /* try { // try from 085a5e78 to 085a63b3 has its CatchHandler @ 085a63bb */
            PacketGuard::~PacketGuard(local_254);
          }
          cVar4 = (**(code **)(*(int *)local_44 + 0x4c))(local_44);
          if (cVar4 != '\0') {
            uVar20 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
            uVar11 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)local_ec);
            statistc_proxy::add(local_ec,"log_random_option","pick_cnt",1,"%d,\'%s\'",uVar11,uVar20)
            ;
          }
          local_d8 = 0;
          cVar4 = Inven_Item::isAvatarItemType(&local_2b0);
          if (cVar4 == '\0') {
            uVar20 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)local_ec);
            local_d8 = CInventory::insertItemIntoInventory
                                 (uVar20,CONCAT22(uStack_2ae,CONCAT11(cStack_2af,local_2b0)),
                                  CONCAT13((undefined1)uStack_2a9,CONCAT12(uStack_2aa,uStack_2ac)),
                                  CONCAT13(local_2a5,uStack_2a9._1_3_),uStack_2a4,local_2a0,
                                  local_29c,local_298,local_294,local_290,local_28c,local_288,
                                  local_284,local_280,local_27c,local_278,local_274,4,1,1);
          }
          else {
            uVar20 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_ec);
            WongWork::CGenUniqueNo::genIPGNo(5,uVar20,local_26c);
            local_d8 = CUser::addAvatarItem
                                 (local_ec,CONCAT22(uStack_2ac,uStack_2ae),0,(int)local_2a5,
                                  local_26c,0xf);
          }
          iVar9 = local_248;
          if (local_d8 == -1) {
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,4);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
            CUser::Send(param_1,local_244);
            uVar20 = 0;
          }
          else {
            pCVar16 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar16,2,local_ec,iVar9);
            local_d4 = 0;
            local_d4 = CBattle_Field::pickup_item((int)(this + 0xb24));
            if (local_d4 < 1) {
              _onGetItem(this,local_ec,CONCAT22(uStack_2ac,uStack_2ae),uStack_2a9);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,0,0x27);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,param_2);
              uVar13 = CUser::get_unique_id(param_1);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,uVar13 & 0xffff);
              for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,local_238[local_20]);
              }
              uVar13 = CUser::get_unique_id(local_ec);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,uVar13 & 0xffff);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_244,local_d8);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,local_e8);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
              send_to_party(this,local_244);
              if (local_2c0[0] == (map_item)0x0) {
                *param_5 = -1;
                *param_6 = '\0';
              }
              else {
                *param_5 = CONCAT22(uStack_2ac,uStack_2ae);
                uVar5 = Inven_Item::GetUpgrade(&local_2b0);
                *param_6 = uVar5;
              }
              if ((local_2c0[0] != (map_item)0x0) && (cStack_2af == '\x02')) {
                iVar9 = Inven_Item::get_add_info(&local_2b0);
                CUser::SendAradEventItemLog(local_ec,CONCAT22(uStack_2ac,uStack_2ae),iVar9);
              }
              uVar20 = 1;
            }
            else {
              cMyTrace::cMyTrace(local_100,
                                 "bool CParty::get_item(CUser*, int, bool, char, int&, unsigned char&, bool&)"
                                 ,0x19bb,5);
              cMyTrace::operator()
                        (local_100,"m_field_data.pickup_item( %d/%d ) ",param_2,
                         CONCAT22(uStack_2ac,uStack_2ae));
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,local_d4);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
              CUser::Send(param_1,local_244);
              uVar20 = 0;
            }
          }
        }
      }
    }
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_244,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0);
    if (param_4 < '\x04') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0x15);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_244,0x51);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_244,true);
    CUser::Send(param_1,local_244);
    cVar4 = IsAutoCreated(this);
    if ((cVar4 == '\0') && (iVar9 = get_member_count(this), iVar9 != 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_cd = '\0';
      cVar4 = CBattle_Field::check_start_point((CBattle_Field *)(this + 0xb24));
      if ((cVar4 == '\x01') &&
         (cVar4 = CBattle_Field::IsVisitedCurrentMap((CBattle_Field *)(this + 0xb24)), cVar4 == '\0'
         )) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_cd = '\x01';
      }
      if ((local_cd == '\x01') &&
         (cVar4 = CBattle_Field::is_last_field_item((int)(this + 0xb24)), cVar4 == '\x01')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,param_1,0x12d,1,0,0);
      }
    }
    uVar20 = 0;
  }
  PacketGuard::~PacketGuard(local_244);
  return uVar20;
}
```
