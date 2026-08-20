# OnFinishVillageMonsterFighting

`_ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb`

`CParty::OnFinishVillageMonsterFighting(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b99ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b99ac  _ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb
#           CParty::OnFinishVillageMonsterFighting(CUser*, bool)
# range [0x085b99ac, 0x085b9e1f]
085b99ac +0x000:  push   %ebp
085b99ad +0x001:  mov    %esp,%ebp
085b99af +0x003:  push   %esi
085b99b0 +0x004:  push   %ebx
085b99b1 +0x005:  sub    $0xa0,%esp
085b99b7 +0x00b:  mov    0x10(%ebp),%eax
085b99ba +0x00e:  mov    %al,-0x7c(%ebp)
085b99bd +0x011:  movl   $0x0,-0x50(%ebp)
085b99c4 +0x018:  movl   $0x0,-0x4c(%ebp)
085b99cb +0x01f:  movl   $0x0,-0x48(%ebp)
085b99d2 +0x026:  movl   $0x0,-0x44(%ebp)
085b99d9 +0x02d:  movl   $0x0,-0x38(%ebp)
085b99e0 +0x034:  jmp    085b9a1b <+0x6f>
085b99e2 +0x036:  mov    -0x38(%ebp),%eax
085b99e5 +0x039:  mov    %eax,0x4(%esp)
085b99e9 +0x03d:  mov    0x8(%ebp),%eax
085b99ec +0x040:  mov    %eax,(%esp)
085b99ef +0x043:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b99f4 +0x048:  xor    $0x1,%eax
085b99f7 +0x04b:  test   %al,%al
085b99f9 +0x04d:  jne    085b9a16 <+0x6a>
085b99fb +0x04f:  mov    -0x38(%ebp),%ebx
085b99fe +0x052:  mov    -0x38(%ebp),%eax
085b9a01 +0x055:  mov    %eax,0x4(%esp)
085b9a05 +0x059:  mov    0x8(%ebp),%eax
085b9a08 +0x05c:  mov    %eax,(%esp)
085b9a0b +0x05f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b9a10 +0x064:  mov    %eax,-0x50(%ebp,%ebx,4)
085b9a14 +0x068:  jmp    085b9a17 <+0x6b>
085b9a16 +0x06a:  nop
085b9a17 +0x06b:  addl   $0x1,-0x38(%ebp)
085b9a1b +0x06f:  cmpl   $0x3,-0x38(%ebp)
085b9a1f +0x073:  setle  %al
085b9a22 +0x076:  test   %al,%al
085b9a24 +0x078:  jne    085b99e2 <+0x36>
085b9a26 +0x07a:  cmpl   $0x0,0xc(%ebp)
085b9a2a +0x07e:  jne    085b9a76 <+0xca>
085b9a2c +0x080:  movl   $0x0,-0x34(%ebp)
085b9a33 +0x087:  jmp    085b9a6b <+0xbf>
085b9a35 +0x089:  mov    -0x34(%ebp),%eax
085b9a38 +0x08c:  mov    %eax,0x4(%esp)
085b9a3c +0x090:  mov    0x8(%ebp),%eax
085b9a3f +0x093:  mov    %eax,(%esp)
085b9a42 +0x096:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b9a47 +0x09b:  xor    $0x1,%eax
085b9a4a +0x09e:  test   %al,%al
085b9a4c +0x0a0:  je     085b9a54 <+0xa8>
085b9a4e +0x0a2:  addl   $0x1,-0x34(%ebp)
085b9a52 +0x0a6:  jmp    085b9a6b <+0xbf>
085b9a54 +0x0a8:  mov    -0x34(%ebp),%eax
085b9a57 +0x0ab:  mov    %eax,0x4(%esp)
085b9a5b +0x0af:  mov    0x8(%ebp),%eax
085b9a5e +0x0b2:  mov    %eax,(%esp)
085b9a61 +0x0b5:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b9a66 +0x0ba:  mov    %eax,0xc(%ebp)
085b9a69 +0x0bd:  jmp    085b9a76 <+0xca>
085b9a6b +0x0bf:  cmpl   $0x3,-0x34(%ebp)
085b9a6f +0x0c3:  setle  %al
085b9a72 +0x0c6:  test   %al,%al
085b9a74 +0x0c8:  jne    085b9a35 <+0x89>
085b9a76 +0x0ca:  cmpl   $0x0,0xc(%ebp)
085b9a7a +0x0ce:  jne    085b9a86 <+0xda>
085b9a7c +0x0d0:  mov    $0x3,%ebx
085b9a81 +0x0d5:  jmp    085b9e14 <+0x468>
085b9a86 +0x0da:  movb   $0x0,-0x3e(%ebp)
085b9a8a +0x0de:  movb   $0x0,-0x3d(%ebp)
085b9a8e +0x0e2:  mov    0x8(%ebp),%eax
085b9a91 +0x0e5:  add    $0xb24,%eax
085b9a96 +0x0ea:  mov    %eax,(%esp)
085b9a99 +0x0ed:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085b9a9e +0x0f2:  test   %al,%al
085b9aa0 +0x0f4:  je     085b9aa8 <+0xfc>
085b9aa2 +0x0f6:  movb   $0x1,-0x3d(%ebp)
085b9aa6 +0x0fa:  jmp    085b9aac <+0x100>
085b9aa8 +0x0fc:  movb   $0x1,-0x3e(%ebp)
085b9aac +0x100:  movl   $0x0,-0x3c(%ebp)
085b9ab3 +0x107:  movzbl -0x3d(%ebp),%edx
085b9ab7 +0x10b:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
085b9abc +0x110:  mov    %edx,0x8(%esp)
085b9ac0 +0x114:  mov    0xc(%ebp),%edx
085b9ac3 +0x117:  mov    %edx,0x4(%esp)
085b9ac7 +0x11b:  mov    %eax,(%esp)
085b9aca +0x11e:  call   086b4866 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb>  ; village_attacked::CVillageMonsterMgr::OnKillVillageMonster(CUser*, bool)
085b9acf +0x123:  mov    %eax,-0x3c(%ebp)
085b9ad2 +0x126:  cmpl   $0x0,-0x3c(%ebp)
085b9ad6 +0x12a:  setne  %al
085b9ad9 +0x12d:  test   %al,%al
085b9adb +0x12f:  je     085b9ae5 <+0x139>
085b9add +0x131:  mov    -0x3c(%ebp),%ebx
085b9ae0 +0x134:  jmp    085b9e14 <+0x468>
085b9ae5 +0x139:  movzbl -0x7c(%ebp),%edx
085b9ae9 +0x13d:  movzbl -0x3d(%ebp),%eax
085b9aed +0x141:  mov    %edx,0x10(%esp)
085b9af1 +0x145:  mov    %eax,0xc(%esp)
085b9af5 +0x149:  movl   $0x0,0x8(%esp)
085b9afd +0x151:  mov    0xc(%ebp),%eax
085b9b00 +0x154:  mov    %eax,0x4(%esp)
085b9b04 +0x158:  mov    0x8(%ebp),%eax
085b9b07 +0x15b:  mov    %eax,(%esp)
085b9b0a +0x15e:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
085b9b0f +0x163:  mov    0x8(%ebp),%eax
085b9b12 +0x166:  movw   $0x0,0xc4c(%eax)
085b9b1b +0x16f:  lea    -0x5c(%ebp),%eax
085b9b1e +0x172:  mov    %eax,(%esp)
085b9b21 +0x175:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b9b26 +0x17a:  lea    -0x5c(%ebp),%eax
085b9b29 +0x17d:  mov    %eax,(%esp)
085b9b2c +0x180:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b9b31 +0x185:  movl   $0x10c,0x8(%esp)
085b9b39 +0x18d:  movl   $0x1,0x4(%esp)
085b9b41 +0x195:  lea    -0x5c(%ebp),%eax
085b9b44 +0x198:  mov    %eax,(%esp)
085b9b47 +0x19b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b9b4c +0x1a0:  movl   $0x1,0x4(%esp)
085b9b54 +0x1a8:  lea    -0x5c(%ebp),%eax
085b9b57 +0x1ab:  mov    %eax,(%esp)
085b9b5a +0x1ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b9b5f +0x1b3:  movl   $0x1,0x4(%esp)
085b9b67 +0x1bb:  lea    -0x5c(%ebp),%eax
085b9b6a +0x1be:  mov    %eax,(%esp)
085b9b6d +0x1c1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b9b72 +0x1c6:  lea    -0x5c(%ebp),%eax
085b9b75 +0x1c9:  mov    %eax,0x4(%esp)
085b9b79 +0x1cd:  mov    0xc(%ebp),%eax
085b9b7c +0x1d0:  mov    %eax,(%esp)
085b9b7f +0x1d3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b9b84 +0x1d8:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
085b9b89 +0x1dd:  mov    %eax,(%esp)
085b9b8c +0x1e0:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
085b9b91 +0x1e5:  xor    $0x1,%eax
085b9b94 +0x1e8:  test   %al,%al
085b9b96 +0x1ea:  je     085b9de7 <+0x43b>
085b9b9c +0x1f0:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
085b9ba1 +0x1f5:  mov    %eax,(%esp)
085b9ba4 +0x1f8:  call   084ed3f8 <_GLOBAL__I__Z7getUserj+0x43aa>  ; global constructors keyed to getUser(unsigned int)+0x43aa
085b9ba9 +0x1fd:  cmp    $0x1,%eax
085b9bac +0x200:  sete   %al
085b9baf +0x203:  test   %al,%al
085b9bb1 +0x205:  je     085b9de7 <+0x43b>
085b9bb7 +0x20b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b9bbe +0x212:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085b9bc3 +0x217:  mov    %eax,-0x30(%ebp)
085b9bc6 +0x21a:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
085b9bcb +0x21f:  mov    %eax,(%esp)
085b9bce +0x222:  call   085bff32 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1490>  ; global constructors keyed to CParty::cMember::cMember()+0x1490
085b9bd3 +0x227:  mov    %eax,-0x2c(%ebp)
085b9bd6 +0x22a:  movl   $0x0,-0x28(%ebp)
085b9bdd +0x231:  mov    -0x2c(%ebp),%eax
085b9be0 +0x234:  cmp    -0x30(%ebp),%eax
085b9be3 +0x237:  jb     085b9bf6 <+0x24a>
085b9be5 +0x239:  mov    -0x30(%ebp),%eax
085b9be8 +0x23c:  mov    -0x2c(%ebp),%edx
085b9beb +0x23f:  mov    %edx,%ecx
085b9bed +0x241:  sub    %eax,%ecx
085b9bef +0x243:  mov    %ecx,%eax
085b9bf1 +0x245:  mov    %eax,-0x28(%ebp)
085b9bf4 +0x248:  jmp    085b9bfd <+0x251>
085b9bf6 +0x24a:  movl   $0x0,-0x28(%ebp)
085b9bfd +0x251:  movl   $0x0,-0x24(%ebp)
085b9c04 +0x258:  jmp    085b9dd8 <+0x42c>
085b9c09 +0x25d:  mov    -0x24(%ebp),%eax
085b9c0c +0x260:  mov    -0x50(%ebp,%eax,4),%eax
085b9c10 +0x264:  test   %eax,%eax
085b9c12 +0x266:  je     085b9dd4 <+0x428>
085b9c18 +0x26c:  movl   $0xa,0x8(%esp)
085b9c20 +0x274:  movl   $0x0,0x4(%esp)
085b9c28 +0x27c:  lea    -0x66(%ebp),%eax
085b9c2b +0x27f:  mov    %eax,(%esp)
085b9c2e +0x282:  call   0807dcc0 <_init+0x5b8>
085b9c33 +0x287:  lea    -0x74(%ebp),%eax
085b9c36 +0x28a:  mov    %eax,(%esp)
085b9c39 +0x28d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b9c3e +0x292:  movl   $0x1ec,0x8(%esp)
085b9c46 +0x29a:  movl   $0x0,0x4(%esp)
085b9c4e +0x2a2:  lea    -0x74(%ebp),%eax
085b9c51 +0x2a5:  mov    %eax,(%esp)
085b9c54 +0x2a8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b9c59 +0x2ad:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b9c5e +0x2b2:  add    $0x500,%eax
085b9c63 +0x2b7:  mov    %eax,(%esp)
085b9c66 +0x2ba:  call   084f1672 <_GLOBAL__I__Z7getUserj+0x8624>  ; global constructors keyed to getUser(unsigned int)+0x8624
085b9c6b +0x2bf:  mov    %eax,-0x20(%ebp)
085b9c6e +0x2c2:  mov    -0x24(%ebp),%eax
085b9c71 +0x2c5:  mov    -0x50(%ebp,%eax,4),%eax
085b9c75 +0x2c9:  mov    %eax,(%esp)
085b9c78 +0x2cc:  call   084ec216 <_GLOBAL__I__Z7getUserj+0x31c8>  ; global constructors keyed to getUser(unsigned int)+0x31c8
085b9c7d +0x2d1:  movzbl %al,%eax
085b9c80 +0x2d4:  mov    %eax,-0x1c(%ebp)
085b9c83 +0x2d7:  movb   $0x0,-0x66(%ebp)
085b9c87 +0x2db:  movb   $0x0,-0x65(%ebp)
085b9c8b +0x2df:  mov    -0x28(%ebp),%eax
085b9c8e +0x2e2:  mov    %eax,-0x64(%ebp)
085b9c91 +0x2e5:  cmpl   $0x2,-0x1c(%ebp)
085b9c95 +0x2e9:  jbe    085b9c9e <+0x2f2>
085b9c97 +0x2eb:  movl   $0x1e41,-0x60(%ebp)
085b9c9e +0x2f2:  lea    -0x66(%ebp),%eax
085b9ca1 +0x2f5:  movl   $0xa,0x8(%esp)
085b9ca9 +0x2fd:  mov    %eax,0x4(%esp)
085b9cad +0x301:  lea    -0x74(%ebp),%eax
085b9cb0 +0x304:  mov    %eax,(%esp)
085b9cb3 +0x307:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
085b9cb8 +0x30c:  movl   $0x1,0x4(%esp)
085b9cc0 +0x314:  lea    -0x74(%ebp),%eax
085b9cc3 +0x317:  mov    %eax,(%esp)
085b9cc6 +0x31a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b9ccb +0x31f:  mov    -0x24(%ebp),%eax
085b9cce +0x322:  mov    -0x50(%ebp,%eax,4),%eax
085b9cd2 +0x326:  lea    -0x74(%ebp),%edx
085b9cd5 +0x329:  mov    %edx,0x4(%esp)
085b9cd9 +0x32d:  mov    %eax,(%esp)
085b9cdc +0x330:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b9ce1 +0x335:  mov    -0x24(%ebp),%eax
085b9ce4 +0x338:  mov    -0x50(%ebp,%eax,4),%eax
085b9ce8 +0x33c:  movl   $0x0,0x4(%esp)
085b9cf0 +0x344:  mov    %eax,(%esp)
085b9cf3 +0x347:  call   084ec850 <_GLOBAL__I__Z7getUserj+0x3802>  ; global constructors keyed to getUser(unsigned int)+0x3802
085b9cf8 +0x34c:  movl   $0x0,-0x18(%ebp)
085b9cff +0x353:  jmp    085b9da1 <+0x3f5>
085b9d04 +0x358:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b9d09 +0x35d:  lea    0x500(%eax),%edx
085b9d0f +0x363:  mov    -0x18(%ebp),%eax
085b9d12 +0x366:  mov    %eax,0x4(%esp)
085b9d16 +0x36a:  mov    %edx,(%esp)
085b9d19 +0x36d:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
085b9d1e +0x372:  mov    (%eax),%eax
085b9d20 +0x374:  mov    %eax,-0x14(%ebp)
085b9d23 +0x377:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b9d28 +0x37c:  lea    0x500(%eax),%edx
085b9d2e +0x382:  mov    -0x18(%ebp),%eax
085b9d31 +0x385:  mov    %eax,0x4(%esp)
085b9d35 +0x389:  mov    %edx,(%esp)
085b9d38 +0x38c:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
085b9d3d +0x391:  mov    0x4(%eax),%eax
085b9d40 +0x394:  mov    %eax,-0x10(%ebp)
085b9d43 +0x397:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b9d48 +0x39c:  lea    0x500(%eax),%edx
085b9d4e +0x3a2:  mov    -0x18(%ebp),%eax
085b9d51 +0x3a5:  mov    %eax,0x4(%esp)
085b9d55 +0x3a9:  mov    %edx,(%esp)
085b9d58 +0x3ac:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
085b9d5d +0x3b1:  mov    0x8(%eax),%eax
085b9d60 +0x3b4:  mov    %eax,-0xc(%ebp)
085b9d63 +0x3b7:  mov    -0x1c(%ebp),%eax
085b9d66 +0x3ba:  cmp    -0x14(%ebp),%eax
085b9d69 +0x3bd:  jb     085b9d9d <+0x3f1>
085b9d6b +0x3bf:  mov    -0x1c(%ebp),%eax
085b9d6e +0x3c2:  cmp    -0x10(%ebp),%eax
085b9d71 +0x3c5:  ja     085b9d9d <+0x3f1>
085b9d73 +0x3c7:  mov    -0xc(%ebp),%eax
085b9d76 +0x3ca:  movzbl %al,%edx
085b9d79 +0x3cd:  mov    -0x24(%ebp),%eax
085b9d7c +0x3d0:  mov    -0x50(%ebp,%eax,4),%eax
085b9d80 +0x3d4:  mov    %edx,0x4(%esp)
085b9d84 +0x3d8:  mov    %eax,(%esp)
085b9d87 +0x3db:  call   0822f762 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e0c
085b9d8c +0x3e0:  mov    -0x24(%ebp),%eax
085b9d8f +0x3e3:  mov    -0x50(%ebp,%eax,4),%eax
085b9d93 +0x3e7:  mov    %eax,(%esp)
085b9d96 +0x3ea:  call   084ec1de <_GLOBAL__I__Z7getUserj+0x3190>  ; global constructors keyed to getUser(unsigned int)+0x3190
085b9d9b +0x3ef:  jmp    085b9db2 <+0x406>
085b9d9d +0x3f1:  addl   $0x1,-0x18(%ebp)
085b9da1 +0x3f5:  mov    -0x18(%ebp),%eax
085b9da4 +0x3f8:  cmp    -0x20(%ebp),%eax
085b9da7 +0x3fb:  setb   %al
085b9daa +0x3fe:  test   %al,%al
085b9dac +0x400:  jne    085b9d04 <+0x358>
085b9db2 +0x406:  lea    -0x74(%ebp),%eax
085b9db5 +0x409:  mov    %eax,(%esp)
085b9db8 +0x40c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9dbd +0x411:  jmp    085b9dd4 <+0x428>
085b9dbf +0x413:  mov    %edx,%ebx
085b9dc1 +0x415:  mov    %eax,%esi
085b9dc3 +0x417:  lea    -0x74(%ebp),%eax
085b9dc6 +0x41a:  mov    %eax,(%esp)
085b9dc9 +0x41d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9dce +0x422:  mov    %esi,%eax
085b9dd0 +0x424:  mov    %ebx,%edx
085b9dd2 +0x426:  jmp    085b9df9 <+0x44d>
085b9dd4 +0x428:  addl   $0x1,-0x24(%ebp)
085b9dd8 +0x42c:  cmpl   $0x3,-0x24(%ebp)
085b9ddc +0x430:  setle  %al
085b9ddf +0x433:  test   %al,%al
085b9de1 +0x435:  jne    085b9c09 <+0x25d>
085b9de7 +0x43b:  mov    $0x0,%ebx
085b9dec +0x440:  lea    -0x5c(%ebp),%eax
085b9def +0x443:  mov    %eax,(%esp)
085b9df2 +0x446:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9df7 +0x44b:  jmp    085b9e14 <+0x468>
085b9df9 +0x44d:  mov    %edx,%ebx
085b9dfb +0x44f:  mov    %eax,%esi
085b9dfd +0x451:  lea    -0x5c(%ebp),%eax
085b9e00 +0x454:  mov    %eax,(%esp)
085b9e03 +0x457:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9e08 +0x45c:  mov    %esi,%eax
085b9e0a +0x45e:  mov    %ebx,%edx
085b9e0c +0x460:  mov    %eax,(%esp)
085b9e0f +0x463:  call   08ae3750 <_Unwind_Resume>
085b9e14 +0x468:  mov    %ebx,%eax
085b9e16 +0x46a:  add    $0xa0,%esp
085b9e1c +0x470:  pop    %ebx
085b9e1d +0x471:  pop    %esi
085b9e1e +0x472:  pop    %ebp
085b9e1f +0x473:  ret
```

## 反编译 C

```c
// CParty::OnFinishVillageMonsterFighting @ 0x85b99ac

/* CParty::OnFinishVillageMonsterFighting(CUser*, bool) */

int __thiscall CParty::OnFinishVillageMonsterFighting(CParty *this,CUser *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  PacketGuard local_78 [14];
  char local_6a [2];
  int local_68;
  undefined4 local_64;
  PacketGuard local_60 [12];
  int local_54 [4];
  undefined1 local_42;
  bool local_41;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
    cVar1 = checkValidUser(this,local_3c);
    iVar4 = local_3c;
    if (cVar1 == '\x01') {
      iVar2 = get_user(this,local_3c);
      local_54[iVar4] = iVar2;
    }
  }
  if (param_1 == (CUser *)0x0) {
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      cVar1 = checkValidUser(this,local_38);
      if (cVar1 == '\x01') {
        param_1 = (CUser *)get_user(this,local_38);
        break;
      }
    }
  }
  if (param_1 == (CUser *)0x0) {
    iVar4 = 3;
  }
  else {
    local_42 = 0;
    local_41 = false;
    cVar1 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
    if (cVar1 == '\0') {
      local_42 = 1;
    }
    else {
      local_41 = true;
    }
    local_40 = 0;
    iVar4 = village_attacked::CVillageMonsterMgr::OnKillVillageMonster
                      (GlobalData::s_villageMonsterMgr,param_1,local_41);
    if (iVar4 == 0) {
      local_40 = iVar4;
      giveup_game(this,param_1,false,local_41,param_2);
      *(undefined2 *)(this + 0xc4c) = 0;
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 085b9b2c to 085b9c3d has its CatchHandler @ 085b9df9 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x10c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      CUser::Send(param_1,local_60);
      cVar1 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
      if ((cVar1 != '\x01') &&
         (iVar4 = village_attacked::CVillageMonsterMgr::GetRewardType
                            (GlobalData::s_villageMonsterMgr), iVar4 == 1)) {
        local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_30 = village_attacked::CRevengeDungeon::GetCloseTime(GlobalData::s_revengeDungeonMgr);
        if (local_30 < local_34) {
          local_2c = 0;
        }
        else {
          local_2c = local_30 - local_34;
        }
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          if (local_54[local_28] != 0) {
            memset(local_6a,0,10);
            PacketGuard::PacketGuard(local_78);
                    /* try { // try from 085b9c54 to 085b9d47 has its CatchHandler @ 085b9dbf */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0x1ec);
            iVar4 = G_CDataManager();
            local_24 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                       size((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>> *)
                            (iVar4 + 0x500));
            local_20 = CUserCharacInfo::GetCurVillageAttackCount
                                 ((CUserCharacInfo *)local_54[local_28]);
            local_20 = local_20 & 0xff;
            local_6a[0] = '\0';
            local_6a[1] = 0;
            local_68 = local_2c;
            if (2 < local_20) {
              local_64 = 0x1e41;
            }
            InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_78,local_6a,10);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
            CUser::Send((CUser *)local_54[local_28],local_78);
            CUser::SetVillageAttackedReward((CUser *)local_54[local_28],false);
            for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
              iVar4 = G_CDataManager();
              puVar3 = (uint *)std::
                               vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                               operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                           *)(iVar4 + 0x500),local_1c);
              local_18 = *puVar3;
              iVar4 = G_CDataManager();
              iVar4 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar4 + 0x500),local_1c);
              local_14 = *(uint *)(iVar4 + 4);
              iVar4 = G_CDataManager();
              iVar4 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar4 + 0x500),local_1c);
              local_10 = *(undefined4 *)(iVar4 + 8);
              if ((local_18 <= local_20) && (local_20 <= local_14)) {
                CUserCharacInfo::SetCurRevengeDungeonCount
                          ((CUserCharacInfo *)local_54[local_28],(uchar)*(undefined4 *)(iVar4 + 8));
                CUserCharacInfo::VillageAttack_DBUpdate((CUserCharacInfo *)local_54[local_28]);
                break;
              }
            }
                    /* try { // try from 085b9db8 to 085b9dbc has its CatchHandler @ 085b9df9 */
            PacketGuard::~PacketGuard(local_78);
          }
        }
      }
      iVar4 = 0;
      PacketGuard::~PacketGuard(local_60);
    }
  }
  return iVar4;
}
```
