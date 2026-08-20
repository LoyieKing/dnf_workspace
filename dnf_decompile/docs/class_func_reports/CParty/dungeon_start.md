# dungeon_start

`_ZN6CParty13dungeon_startEic17ENUM_DUNGEON_TYPE`

`CParty::dungeon_start(int, char, ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a0954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a0954  _ZN6CParty13dungeon_startEic17ENUM_DUNGEON_TYPE
#           CParty::dungeon_start(int, char, ENUM_DUNGEON_TYPE)
# range [0x085a0954, 0x085a213f]
085a0954 +0x0000:  push   %ebp
085a0955 +0x0001:  mov    %esp,%ebp
085a0957 +0x0003:  push   %edi
085a0958 +0x0004:  push   %esi
085a0959 +0x0005:  push   %ebx
085a095a +0x0006:  sub    $0x20c,%esp
085a0960 +0x000c:  mov    0x10(%ebp),%eax
085a0963 +0x000f:  mov    %al,-0x1dc(%ebp)
085a0969 +0x0015:  mov    0x8(%ebp),%eax
085a096c +0x0018:  mov    %eax,(%esp)
085a096f +0x001b:  call   085bdcec <_ZN6CParty18resetMemberUseCoinEv>  ; CParty::resetMemberUseCoin()
085a0974 +0x0020:  mov    0x8(%ebp),%eax
085a0977 +0x0023:  movb   $0x0,0x324(%eax)
085a097e +0x002a:  mov    0x8(%ebp),%eax
085a0981 +0x002d:  mov    %eax,(%esp)
085a0984 +0x0030:  call   085bf850 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xdae>  ; global constructors keyed to CParty::cMember::cMember()+0xdae
085a0989 +0x0035:  mov    0x8(%ebp),%eax
085a098c +0x0038:  add    $0x1abc,%eax
085a0991 +0x003d:  mov    %eax,(%esp)
085a0994 +0x0040:  call   0827a92c <_ZN24Secu_HackLogCheckByParty12startDungeonEv>  ; Secu_HackLogCheckByParty::startDungeon()
085a0999 +0x0045:  movl   $0xffffffff,-0x78(%ebp)
085a09a0 +0x004c:  movl   $0x0,-0x74(%ebp)
085a09a7 +0x0053:  lea    -0x78(%ebp),%eax
085a09aa +0x0056:  mov    %eax,0x8(%esp)
085a09ae +0x005a:  lea    0xc(%ebp),%eax
085a09b1 +0x005d:  mov    %eax,0x4(%esp)
085a09b5 +0x0061:  mov    0x8(%ebp),%eax
085a09b8 +0x0064:  mov    %eax,(%esp)
085a09bb +0x0067:  call   085bacc0 <_ZN6CParty21GetDungeonIndex_isTODERiS0_>  ; CParty::GetDungeonIndex_isTOD(int&, int&)
085a09c0 +0x006c:  mov    %eax,-0x74(%ebp)
085a09c3 +0x006f:  cmpl   $0x0,-0x74(%ebp)
085a09c7 +0x0073:  je     085a09d1 <+0x7d>
085a09c9 +0x0075:  mov    -0x74(%ebp),%ebx
085a09cc +0x0078:  jmp    085a2132 <+0x17de>
085a09d1 +0x007d:  mov    0xc(%ebp),%ebx
085a09d4 +0x0080:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a09d9 +0x0085:  mov    %ebx,0x4(%esp)
085a09dd +0x0089:  mov    %eax,(%esp)
085a09e0 +0x008c:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085a09e5 +0x0091:  mov    %eax,-0x70(%ebp)
085a09e8 +0x0094:  cmpl   $0x0,-0x70(%ebp)
085a09ec +0x0098:  jne    085a09f8 <+0xa4>
085a09ee +0x009a:  mov    $0x15,%ebx
085a09f3 +0x009f:  jmp    085a2132 <+0x17de>
085a09f8 +0x00a4:  lea    -0x84(%ebp),%eax
085a09fe +0x00aa:  mov    %eax,(%esp)
085a0a01 +0x00ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a0a06 +0x00b2:  mov    0x8(%ebp),%eax
085a0a09 +0x00b5:  mov    0xcd8(%eax),%eax
085a0a0f +0x00bb:  mov    %eax,-0x6c(%ebp)
085a0a12 +0x00be:  mov    -0x70(%ebp),%eax
085a0a15 +0x00c1:  mov    %eax,(%esp)
085a0a18 +0x00c4:  call   0836526a <_ZNK8CDungeon23GetPartyMemberCoinLimitEv>  ; CDungeon::GetPartyMemberCoinLimit() const
085a0a1d +0x00c9:  mov    %eax,%ebx
085a0a1f +0x00cb:  mov    0x8(%ebp),%eax
085a0a22 +0x00ce:  mov    %eax,(%esp)
085a0a25 +0x00d1:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a0a2a +0x00d6:  imul   %ebx,%eax
085a0a2d +0x00d9:  mov    %eax,0x4(%esp)
085a0a31 +0x00dd:  mov    0x8(%ebp),%eax
085a0a34 +0x00e0:  mov    %eax,(%esp)
085a0a37 +0x00e3:  call   085be55a <_ZN6CParty23SetPartyMemberCoinLimitEi>  ; CParty::SetPartyMemberCoinLimit(int)
085a0a3c +0x00e8:  movsbl -0x1dc(%ebp),%eax
085a0a43 +0x00ef:  mov    0x8(%ebp),%edx
085a0a46 +0x00f2:  add    $0x210,%edx
085a0a4c +0x00f8:  mov    %eax,0x4(%esp)
085a0a50 +0x00fc:  mov    %edx,(%esp)
085a0a53 +0x00ff:  call   085bf646 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xba4>  ; global constructors keyed to CParty::cMember::cMember()+0xba4
085a0a58 +0x0104:  mov    0x8(%ebp),%eax
085a0a5b +0x0107:  mov    %eax,(%esp)
085a0a5e +0x010a:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
085a0a63 +0x010f:  test   %al,%al
085a0a65 +0x0111:  setne  %al
085a0a68 +0x0114:  test   %al,%al
085a0a6a +0x0116:  je     085a0b17 <+0x1c3>
085a0a70 +0x011c:  movl   $0x0,-0x54(%ebp)
085a0a77 +0x0123:  jmp    085a0afe <+0x1aa>
085a0a7c +0x0128:  mov    -0x54(%ebp),%eax
085a0a7f +0x012b:  mov    %eax,0x4(%esp)
085a0a83 +0x012f:  mov    0x8(%ebp),%eax
085a0a86 +0x0132:  mov    %eax,(%esp)
085a0a89 +0x0135:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a0a8e +0x013a:  xor    $0x1,%eax
085a0a91 +0x013d:  test   %al,%al
085a0a93 +0x013f:  jne    085a0af9 <+0x1a5>
085a0a95 +0x0141:  mov    -0x54(%ebp),%edx
085a0a98 +0x0144:  mov    0x8(%ebp),%ecx
085a0a9b +0x0147:  mov    %edx,%eax
085a0a9d +0x0149:  add    %eax,%eax
085a0a9f +0x014b:  add    %edx,%eax
085a0aa1 +0x014d:  shl    $0x3,%eax
085a0aa4 +0x0150:  lea    (%ecx,%eax,1),%eax
085a0aa7 +0x0153:  add    $0x78,%eax
085a0aaa +0x0156:  mov    (%eax),%ebx
085a0aac +0x0158:  mov    -0x54(%ebp),%edx
085a0aaf +0x015b:  mov    0x8(%ebp),%ecx
085a0ab2 +0x015e:  mov    %edx,%eax
085a0ab4 +0x0160:  add    %eax,%eax
085a0ab6 +0x0162:  add    %edx,%eax
085a0ab8 +0x0164:  shl    $0x3,%eax
085a0abb +0x0167:  lea    (%ecx,%eax,1),%eax
085a0abe +0x016a:  add    $0x78,%eax
085a0ac1 +0x016d:  mov    (%eax),%eax
085a0ac3 +0x016f:  mov    %eax,(%esp)
085a0ac6 +0x0172:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a0acb +0x0177:  movl   $0x0,0x14(%esp)
085a0ad3 +0x017f:  movl   $0x0,0x10(%esp)
085a0adb +0x0187:  movl   $0x1,0xc(%esp)
085a0ae3 +0x018f:  movl   $0x195,0x8(%esp)
085a0aeb +0x0197:  mov    %ebx,0x4(%esp)
085a0aef +0x019b:  mov    %eax,(%esp)
085a0af2 +0x019e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a0af7 +0x01a3:  jmp    085a0afa <+0x1a6>
085a0af9 +0x01a5:  nop
085a0afa +0x01a6:  addl   $0x1,-0x54(%ebp)
085a0afe +0x01aa:  cmpl   $0x3,-0x54(%ebp)
085a0b02 +0x01ae:  setle  %al
085a0b05 +0x01b1:  test   %al,%al
085a0b07 +0x01b3:  jne    085a0a7c <+0x128>
085a0b0d +0x01b9:  mov    $0x8,%ebx
085a0b12 +0x01be:  jmp    085a2124 <+0x17d0>
085a0b17 +0x01c3:  call   0822ad44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ee
085a0b1c +0x01c8:  test   %al,%al
085a0b1e +0x01ca:  je     085a0b37 <+0x1e3>
085a0b20 +0x01cc:  mov    -0x70(%ebp),%eax
085a0b23 +0x01cf:  mov    %eax,(%esp)
085a0b26 +0x01d2:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a0b2b +0x01d7:  cmp    $0x1,%eax
085a0b2e +0x01da:  jle    085a0b37 <+0x1e3>
085a0b30 +0x01dc:  mov    $0x1,%eax
085a0b35 +0x01e1:  jmp    085a0b3c <+0x1e8>
085a0b37 +0x01e3:  mov    $0x0,%eax
085a0b3c +0x01e8:  test   %al,%al
085a0b3e +0x01ea:  je     085a0b50 <+0x1fc>
085a0b40 +0x01ec:  mov    -0x70(%ebp),%eax
085a0b43 +0x01ef:  mov    %eax,(%esp)
085a0b46 +0x01f2:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a0b4b +0x01f7:  mov    %eax,-0x68(%ebp)
085a0b4e +0x01fa:  jmp    085a0b5e <+0x20a>
085a0b50 +0x01fc:  mov    -0x70(%ebp),%eax
085a0b53 +0x01ff:  mov    %eax,(%esp)
085a0b56 +0x0202:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a0b5b +0x0207:  mov    %eax,-0x68(%ebp)
085a0b5e +0x020a:  mov    0x8(%ebp),%eax
085a0b61 +0x020d:  mov    0x74(%eax),%eax
085a0b64 +0x0210:  mov    %eax,(%esp)
085a0b67 +0x0213:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
085a0b6c +0x0218:  xor    $0x1,%eax
085a0b6f +0x021b:  test   %al,%al
085a0b71 +0x021d:  je     085a0b8d <+0x239>
085a0b73 +0x021f:  mov    0x8(%ebp),%eax
085a0b76 +0x0222:  mov    0x74(%eax),%eax
085a0b79 +0x0225:  mov    %eax,(%esp)
085a0b7c +0x0228:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a0b81 +0x022d:  cmp    -0x68(%ebp),%eax
085a0b84 +0x0230:  jge    085a0b8d <+0x239>
085a0b86 +0x0232:  mov    $0x1,%eax
085a0b8b +0x0237:  jmp    085a0b92 <+0x23e>
085a0b8d +0x0239:  mov    $0x0,%eax
085a0b92 +0x023e:  test   %al,%al
085a0b94 +0x0240:  je     085a0ba0 <+0x24c>
085a0b96 +0x0242:  mov    $0xe,%ebx
085a0b9b +0x0247:  jmp    085a2124 <+0x17d0>
085a0ba0 +0x024c:  movsbl -0x1dc(%ebp),%eax
085a0ba7 +0x0253:  mov    -0x70(%ebp),%edx
085a0baa +0x0256:  mov    %edx,0x8(%esp)
085a0bae +0x025a:  mov    %eax,0x4(%esp)
085a0bb2 +0x025e:  mov    0x8(%ebp),%eax
085a0bb5 +0x0261:  mov    %eax,(%esp)
085a0bb8 +0x0264:  call   085be932 <_ZN6CParty22checkDungeonDifficultyEcPK8CDungeon>  ; CParty::checkDungeonDifficulty(char, CDungeon const*)
085a0bbd +0x0269:  test   %al,%al
085a0bbf +0x026b:  je     085a0c1c <+0x2c8>
085a0bc1 +0x026d:  movb   $0x0,-0x4d(%ebp)
085a0bc5 +0x0271:  mov    0xc(%ebp),%eax
085a0bc8 +0x0274:  movswl %ax,%ebx
085a0bcb +0x0277:  mov    0x8(%ebp),%eax
085a0bce +0x027a:  mov    0x74(%eax),%eax
085a0bd1 +0x027d:  mov    %eax,(%esp)
085a0bd4 +0x0280:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
085a0bd9 +0x0285:  mov    %ebx,0x4(%esp)
085a0bdd +0x0289:  mov    %eax,(%esp)
085a0be0 +0x028c:  call   085bf96c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xeca>  ; global constructors keyed to CParty::cMember::cMember()+0xeca
085a0be5 +0x0291:  mov    %al,-0x4d(%ebp)
085a0be8 +0x0294:  cmpb   $0x0,-0x4d(%ebp)
085a0bec +0x0298:  sete   %al
085a0bef +0x029b:  test   %al,%al
085a0bf1 +0x029d:  je     085a0bfd <+0x2a9>
085a0bf3 +0x029f:  mov    $0x13,%ebx
085a0bf8 +0x02a4:  jmp    085a2124 <+0x17d0>
085a0bfd +0x02a9:  movzbl -0x4d(%ebp),%eax
085a0c01 +0x02ad:  cmp    -0x1dc(%ebp),%al
085a0c07 +0x02b3:  jge    085a0c1c <+0x2c8>
085a0c09 +0x02b5:  cmpb   $0x4,-0x1dc(%ebp)
085a0c10 +0x02bc:  je     085a0c1c <+0x2c8>
085a0c12 +0x02be:  mov    $0x13,%ebx
085a0c17 +0x02c3:  jmp    085a2124 <+0x17d0>
085a0c1c +0x02c8:  movl   $0x0,-0x64(%ebp)
085a0c23 +0x02cf:  movl   $0x0,-0x4c(%ebp)
085a0c2a +0x02d6:  jmp    085a0c8e <+0x33a>
085a0c2c +0x02d8:  mov    -0x4c(%ebp),%eax
085a0c2f +0x02db:  mov    %eax,0x4(%esp)
085a0c33 +0x02df:  mov    0x8(%ebp),%eax
085a0c36 +0x02e2:  mov    %eax,(%esp)
085a0c39 +0x02e5:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a0c3e +0x02ea:  xor    $0x1,%eax
085a0c41 +0x02ed:  test   %al,%al
085a0c43 +0x02ef:  jne    085a0c86 <+0x332>
085a0c45 +0x02f1:  cmpl   $0x1,-0x6c(%ebp)
085a0c49 +0x02f5:  je     085a0c89 <+0x335>
085a0c4b +0x02f7:  mov    -0x70(%ebp),%eax
085a0c4e +0x02fa:  mov    %eax,(%esp)
085a0c51 +0x02fd:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085a0c56 +0x0302:  mov    %eax,%ecx
085a0c58 +0x0304:  mov    -0x4c(%ebp),%edx
085a0c5b +0x0307:  mov    0x8(%ebp),%ebx
085a0c5e +0x030a:  mov    %edx,%eax
085a0c60 +0x030c:  add    %eax,%eax
085a0c62 +0x030e:  add    %edx,%eax
085a0c64 +0x0310:  shl    $0x3,%eax
085a0c67 +0x0313:  lea    (%ebx,%eax,1),%eax
085a0c6a +0x0316:  add    $0x78,%eax
085a0c6d +0x0319:  mov    (%eax),%eax
085a0c6f +0x031b:  mov    %ecx,0x4(%esp)
085a0c73 +0x031f:  mov    %eax,(%esp)
085a0c76 +0x0322:  call   0866cac6 <_ZN5CUser13CheckQuestMapEi>  ; CUser::CheckQuestMap(int)
085a0c7b +0x0327:  mov    %eax,-0x64(%ebp)
085a0c7e +0x032a:  cmpl   $0x0,-0x64(%ebp)
085a0c82 +0x032e:  jg     085a0c9b <+0x347>
085a0c84 +0x0330:  jmp    085a0c8a <+0x336>
085a0c86 +0x0332:  nop
085a0c87 +0x0333:  jmp    085a0c8a <+0x336>
085a0c89 +0x0335:  nop
085a0c8a +0x0336:  addl   $0x1,-0x4c(%ebp)
085a0c8e +0x033a:  cmpl   $0x3,-0x4c(%ebp)
085a0c92 +0x033e:  setle  %al
085a0c95 +0x0341:  test   %al,%al
085a0c97 +0x0343:  jne    085a0c2c <+0x2d8>
085a0c99 +0x0345:  jmp    085a0c9c <+0x348>
085a0c9b +0x0347:  nop
085a0c9c +0x0348:  movl   $0x0,0x4(%esp)
085a0ca4 +0x0350:  mov    0x8(%ebp),%eax
085a0ca7 +0x0353:  mov    %eax,(%esp)
085a0caa +0x0356:  call   085bf83e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd9c>  ; global constructors keyed to CParty::cMember::cMember()+0xd9c
085a0caf +0x035b:  mov    0x14(%ebp),%eax
085a0cb2 +0x035e:  mov    %eax,0x8(%esp)
085a0cb6 +0x0362:  mov    -0x70(%ebp),%eax
085a0cb9 +0x0365:  mov    %eax,0x4(%esp)
085a0cbd +0x0369:  mov    0x8(%ebp),%eax
085a0cc0 +0x036c:  mov    %eax,(%esp)
085a0cc3 +0x036f:  call   085a7b8a <_ZN6CParty26CheckHaveHellPartyPassItemEPK8CDungeon17ENUM_DUNGEON_TYPE>  ; CParty::CheckHaveHellPartyPassItem(CDungeon const*, ENUM_DUNGEON_TYPE)
085a0cc8 +0x0374:  xor    $0x1,%eax
085a0ccb +0x0377:  test   %al,%al
085a0ccd +0x0379:  je     085a0cd9 <+0x385>
085a0ccf +0x037b:  mov    $0x0,%ebx
085a0cd4 +0x0380:  jmp    085a2124 <+0x17d0>
085a0cd9 +0x0385:  movb   $0x0,-0x85(%ebp)
085a0ce0 +0x038c:  movl   $0x10,0xc(%esp)
085a0ce8 +0x0394:  mov    -0x6c(%ebp),%eax
085a0ceb +0x0397:  mov    %eax,0x8(%esp)
085a0cef +0x039b:  mov    -0x70(%ebp),%eax
085a0cf2 +0x039e:  mov    %eax,0x4(%esp)
085a0cf6 +0x03a2:  mov    0x8(%ebp),%eax
085a0cf9 +0x03a5:  mov    %eax,(%esp)
085a0cfc +0x03a8:  call   085abc80 <_ZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKET>  ; CParty::checkInoutConditionDungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET)
085a0d01 +0x03ad:  mov    %eax,-0x60(%ebp)
085a0d04 +0x03b0:  cmpl   $0x0,-0x60(%ebp)
085a0d08 +0x03b4:  je     085a0d14 <+0x3c0>
085a0d0a +0x03b6:  mov    $0x0,%ebx
085a0d0f +0x03bb:  jmp    085a2124 <+0x17d0>
085a0d14 +0x03c0:  mov    0x8(%ebp),%eax
085a0d17 +0x03c3:  lea    0xb24(%eax),%edx
085a0d1d +0x03c9:  lea    -0x85(%ebp),%eax
085a0d23 +0x03cf:  mov    %eax,0x10(%esp)
085a0d27 +0x03d3:  mov    0x14(%ebp),%eax
085a0d2a +0x03d6:  mov    %eax,0xc(%esp)
085a0d2e +0x03da:  mov    -0x6c(%ebp),%eax
085a0d31 +0x03dd:  mov    %eax,0x8(%esp)
085a0d35 +0x03e1:  mov    -0x70(%ebp),%eax
085a0d38 +0x03e4:  mov    %eax,0x4(%esp)
085a0d3c +0x03e8:  mov    %edx,(%esp)
085a0d3f +0x03eb:  call   0830a862 <_ZN13CBattle_Field32check_random_appear_hell_dungeonEPK8CDungeon17ENUM_DUNGEON_MODE17ENUM_DUNGEON_TYPERb>  ; CBattle_Field::check_random_appear_hell_dungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_DUNGEON_TYPE, bool&)
085a0d44 +0x03f0:  movzbl -0x85(%ebp),%eax
085a0d4b +0x03f7:  movzbl %al,%edi
085a0d4e +0x03fa:  mov    0x8(%ebp),%eax
085a0d51 +0x03fd:  mov    0x1868(%eax),%esi
085a0d57 +0x0403:  mov    0x8(%ebp),%eax
085a0d5a +0x0406:  mov    %eax,(%esp)
085a0d5d +0x0409:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a0d62 +0x040e:  mov    %eax,%edx
085a0d64 +0x0410:  movsbl -0x1dc(%ebp),%ebx
085a0d6b +0x0417:  mov    0xc(%ebp),%ecx
085a0d6e +0x041a:  mov    0x8(%ebp),%eax
085a0d71 +0x041d:  add    $0xb24,%eax
085a0d76 +0x0422:  mov    %eax,-0x1e0(%ebp)
085a0d7c +0x0428:  mov    -0x64(%ebp),%eax
085a0d7f +0x042b:  mov    %eax,0x20(%esp)
085a0d83 +0x042f:  mov    %edi,0x1c(%esp)
085a0d87 +0x0433:  mov    %esi,0x18(%esp)
085a0d8b +0x0437:  mov    %edx,0x14(%esp)
085a0d8f +0x043b:  mov    0x14(%ebp),%eax
085a0d92 +0x043e:  mov    %eax,0x10(%esp)
085a0d96 +0x0442:  mov    %ebx,0xc(%esp)
085a0d9a +0x0446:  mov    -0x70(%ebp),%eax
085a0d9d +0x0449:  mov    %eax,0x8(%esp)
085a0da1 +0x044d:  mov    %ecx,0x4(%esp)
085a0da5 +0x0451:  mov    -0x1e0(%ebp),%eax
085a0dab +0x0457:  mov    %eax,(%esp)
085a0dae +0x045a:  call   082ff486 <_ZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbi>  ; CBattle_Field::SelectDungeon(int, CDungeon const*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)
085a0db3 +0x045f:  xor    $0x1,%eax
085a0db6 +0x0462:  test   %al,%al
085a0db8 +0x0464:  je     085a0dc4 <+0x470>
085a0dba +0x0466:  mov    $0x1,%ebx
085a0dbf +0x046b:  jmp    085a2124 <+0x17d0>
085a0dc4 +0x0470:  mov    0x8(%ebp),%eax
085a0dc7 +0x0473:  add    $0xb24,%eax
085a0dcc +0x0478:  movl   $0x0,0x4(%esp)
085a0dd4 +0x0480:  mov    %eax,(%esp)
085a0dd7 +0x0483:  call   0830aaa4 <_ZN13CBattle_Field24getRandomBuffDungeonTypeEi>  ; CBattle_Field::getRandomBuffDungeonType(int)
085a0ddc +0x0488:  mov    %eax,0x4(%esp)
085a0de0 +0x048c:  mov    0x8(%ebp),%eax
085a0de3 +0x048f:  mov    %eax,(%esp)
085a0de6 +0x0492:  call   0859b814 <_ZN6CParty18choose_random_buffEN10QuickParty17RandomBuffDungeonE>  ; CParty::choose_random_buff(QuickParty::RandomBuffDungeon)
085a0deb +0x0497:  lea    -0x1cc(%ebp),%ebx
085a0df1 +0x049d:  mov    $0x0,%eax
085a0df6 +0x04a2:  mov    $0x40,%edx
085a0dfb +0x04a7:  mov    %ebx,%edi
085a0dfd +0x04a9:  mov    %edx,%ecx
085a0dff +0x04ab:  rep stos %eax,%es:(%edi)
085a0e01 +0x04ad:  lea    -0x1cc(%ebp),%eax
085a0e07 +0x04b3:  mov    %eax,0x4(%esp)
085a0e0b +0x04b7:  mov    0x8(%ebp),%eax
085a0e0e +0x04ba:  mov    %eax,(%esp)
085a0e11 +0x04bd:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085a0e16 +0x04c2:  movl   $0x0,-0x48(%ebp)
085a0e1d +0x04c9:  jmp    085a1414 <+0xac0>
085a0e22 +0x04ce:  mov    -0x48(%ebp),%eax
085a0e25 +0x04d1:  mov    %eax,0x4(%esp)
085a0e29 +0x04d5:  mov    0x8(%ebp),%eax
085a0e2c +0x04d8:  mov    %eax,(%esp)
085a0e2f +0x04db:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a0e34 +0x04e0:  xor    $0x1,%eax
085a0e37 +0x04e3:  test   %al,%al
085a0e39 +0x04e5:  jne    085a140f <+0xabb>
085a0e3f +0x04eb:  mov    -0x48(%ebp),%edx
085a0e42 +0x04ee:  mov    0x8(%ebp),%ecx
085a0e45 +0x04f1:  mov    %edx,%eax
085a0e47 +0x04f3:  add    %eax,%eax
085a0e49 +0x04f5:  add    %edx,%eax
085a0e4b +0x04f7:  shl    $0x3,%eax
085a0e4e +0x04fa:  lea    (%ecx,%eax,1),%eax
085a0e51 +0x04fd:  add    $0x78,%eax
085a0e54 +0x0500:  mov    (%eax),%eax
085a0e56 +0x0502:  movl   $0x12,0x4(%esp)
085a0e5e +0x050a:  mov    %eax,(%esp)
085a0e61 +0x050d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a0e66 +0x0512:  movl   $0x0,0x4(%esp)
085a0e6e +0x051a:  mov    %eax,(%esp)
085a0e71 +0x051d:  call   080c8b44 <_ZN13BestClearTime12setNewRecordEb>  ; BestClearTime::setNewRecord(bool)
085a0e76 +0x0522:  mov    -0x6c(%ebp),%edi
085a0e79 +0x0525:  lea    -0x1cc(%ebp),%eax
085a0e7f +0x052b:  mov    %eax,0x4(%esp)
085a0e83 +0x052f:  mov    0x8(%ebp),%eax
085a0e86 +0x0532:  mov    %eax,(%esp)
085a0e89 +0x0535:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085a0e8e +0x053a:  mov    %eax,%ebx
085a0e90 +0x053c:  movsbl -0x1dc(%ebp),%esi
085a0e97 +0x0543:  mov    -0x70(%ebp),%eax
085a0e9a +0x0546:  mov    %eax,(%esp)
085a0e9d +0x0549:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085a0ea2 +0x054e:  mov    %eax,%ecx
085a0ea4 +0x0550:  mov    -0x48(%ebp),%edx
085a0ea7 +0x0553:  mov    0x8(%ebp),%eax
085a0eaa +0x0556:  mov    %eax,-0x1e4(%ebp)
085a0eb0 +0x055c:  mov    %edx,%eax
085a0eb2 +0x055e:  add    %eax,%eax
085a0eb4 +0x0560:  add    %edx,%eax
085a0eb6 +0x0562:  shl    $0x3,%eax
085a0eb9 +0x0565:  add    -0x1e4(%ebp),%eax
085a0ebf +0x056b:  add    $0x78,%eax
085a0ec2 +0x056e:  mov    (%eax),%eax
085a0ec4 +0x0570:  add    $0x79700,%eax
085a0ec9 +0x0575:  mov    %edi,0x10(%esp)
085a0ecd +0x0579:  mov    %ebx,0xc(%esp)
085a0ed1 +0x057d:  mov    %esi,0x8(%esp)
085a0ed5 +0x0581:  mov    %ecx,0x4(%esp)
085a0ed9 +0x0585:  mov    %eax,(%esp)
085a0edc +0x0588:  call   086849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>  ; cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)
085a0ee1 +0x058d:  mov    -0x48(%ebp),%edx
085a0ee4 +0x0590:  mov    0x8(%ebp),%ecx
085a0ee7 +0x0593:  mov    %edx,%eax
085a0ee9 +0x0595:  add    %eax,%eax
085a0eeb +0x0597:  add    %edx,%eax
085a0eed +0x0599:  shl    $0x3,%eax
085a0ef0 +0x059c:  lea    (%ecx,%eax,1),%eax
085a0ef3 +0x059f:  add    $0x78,%eax
085a0ef6 +0x05a2:  mov    (%eax),%eax
085a0ef8 +0x05a4:  mov    %eax,(%esp)
085a0efb +0x05a7:  call   085bfdda <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1338>  ; global constructors keyed to CParty::cMember::cMember()+0x1338
085a0f00 +0x05ac:  mov    -0x48(%ebp),%edx
085a0f03 +0x05af:  mov    0x8(%ebp),%ecx
085a0f06 +0x05b2:  mov    %edx,%eax
085a0f08 +0x05b4:  add    %eax,%eax
085a0f0a +0x05b6:  add    %edx,%eax
085a0f0c +0x05b8:  shl    $0x3,%eax
085a0f0f +0x05bb:  lea    (%ecx,%eax,1),%eax
085a0f12 +0x05be:  add    $0x78,%eax
085a0f15 +0x05c1:  mov    (%eax),%eax
085a0f17 +0x05c3:  mov    %eax,(%esp)
085a0f1a +0x05c6:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085a0f1f +0x05cb:  test   %eax,%eax
085a0f21 +0x05cd:  sete   %al
085a0f24 +0x05d0:  test   %al,%al
085a0f26 +0x05d2:  je     085a1410 <+0xabc>
085a0f2c +0x05d8:  movl   $0x0,-0xb4(%ebp)
085a0f36 +0x05e2:  mov    -0x48(%ebp),%edx
085a0f39 +0x05e5:  mov    0x8(%ebp),%ecx
085a0f3c +0x05e8:  mov    %edx,%eax
085a0f3e +0x05ea:  add    %eax,%eax
085a0f40 +0x05ec:  add    %edx,%eax
085a0f42 +0x05ee:  shl    $0x3,%eax
085a0f45 +0x05f1:  lea    (%ecx,%eax,1),%eax
085a0f48 +0x05f4:  add    $0x78,%eax
085a0f4b +0x05f7:  mov    (%eax),%eax
085a0f4d +0x05f9:  mov    %eax,(%esp)
085a0f50 +0x05fc:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085a0f55 +0x0601:  lea    -0xb4(%ebp),%edx
085a0f5b +0x0607:  mov    %edx,0x4(%esp)
085a0f5f +0x060b:  mov    %eax,(%esp)
085a0f62 +0x060e:  call   086088e0 <_ZN9SkillSlot24checkskillSlotEmptyCountERi>  ; SkillSlot::checkskillSlotEmptyCount(int&)
085a0f67 +0x0613:  mov    %eax,-0x44(%ebp)
085a0f6a +0x0616:  movl   $0x0,-0x40(%ebp)
085a0f71 +0x061d:  jmp    085a100b <+0x6b7>
085a0f76 +0x0622:  mov    -0xb4(%ebp),%ecx
085a0f7c +0x0628:  mov    -0x48(%ebp),%edx
085a0f7f +0x062b:  mov    0x8(%ebp),%ebx
085a0f82 +0x062e:  mov    %edx,%eax
085a0f84 +0x0630:  add    %eax,%eax
085a0f86 +0x0632:  add    %edx,%eax
085a0f88 +0x0634:  shl    $0x3,%eax
085a0f8b +0x0637:  lea    (%ebx,%eax,1),%eax
085a0f8e +0x063a:  add    $0x78,%eax
085a0f91 +0x063d:  mov    (%eax),%eax
085a0f93 +0x063f:  mov    %ecx,0x8(%esp)
085a0f97 +0x0643:  movl   $0x1a6,0x4(%esp)
085a0f9f +0x064b:  mov    %eax,(%esp)
085a0fa2 +0x064e:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085a0fa7 +0x0653:  mov    %eax,%esi
085a0fa9 +0x0655:  mov    -0x48(%ebp),%edx
085a0fac +0x0658:  mov    0x8(%ebp),%ecx
085a0faf +0x065b:  mov    %edx,%eax
085a0fb1 +0x065d:  add    %eax,%eax
085a0fb3 +0x065f:  add    %edx,%eax
085a0fb5 +0x0661:  shl    $0x3,%eax
085a0fb8 +0x0664:  lea    (%ecx,%eax,1),%eax
085a0fbb +0x0667:  add    $0x78,%eax
085a0fbe +0x066a:  mov    (%eax),%ebx
085a0fc0 +0x066c:  mov    -0x48(%ebp),%edx
085a0fc3 +0x066f:  mov    0x8(%ebp),%ecx
085a0fc6 +0x0672:  mov    %edx,%eax
085a0fc8 +0x0674:  add    %eax,%eax
085a0fca +0x0676:  add    %edx,%eax
085a0fcc +0x0678:  shl    $0x3,%eax
085a0fcf +0x067b:  lea    (%ecx,%eax,1),%eax
085a0fd2 +0x067e:  add    $0x78,%eax
085a0fd5 +0x0681:  mov    (%eax),%eax
085a0fd7 +0x0683:  mov    %eax,(%esp)
085a0fda +0x0686:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a0fdf +0x068b:  movl   $0x0,0x14(%esp)
085a0fe7 +0x0693:  mov    %esi,0x10(%esp)
085a0feb +0x0697:  movl   $0x1,0xc(%esp)
085a0ff3 +0x069f:  movl   $0x1a6,0x8(%esp)
085a0ffb +0x06a7:  mov    %ebx,0x4(%esp)
085a0fff +0x06ab:  mov    %eax,(%esp)
085a1002 +0x06ae:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a1007 +0x06b3:  addl   $0x1,-0x40(%ebp)
085a100b +0x06b7:  mov    -0x40(%ebp),%eax
085a100e +0x06ba:  cmp    -0x44(%ebp),%eax
085a1011 +0x06bd:  setl   %al
085a1014 +0x06c0:  test   %al,%al
085a1016 +0x06c2:  jne    085a0f76 <+0x622>
085a101c +0x06c8:  movl   $0x0,-0xb8(%ebp)
085a1026 +0x06d2:  movl   $0x0,-0xbc(%ebp)
085a1030 +0x06dc:  movl   $0x0,-0xc0(%ebp)
085a103a +0x06e6:  movl   $0x0,-0xc4(%ebp)
085a1044 +0x06f0:  movl   $0x0,-0xc8(%ebp)
085a104e +0x06fa:  movl   $0x0,-0xcc(%ebp)
085a1058 +0x0704:  mov    -0x48(%ebp),%edx
085a105b +0x0707:  mov    0x8(%ebp),%ecx
085a105e +0x070a:  mov    %edx,%eax
085a1060 +0x070c:  add    %eax,%eax
085a1062 +0x070e:  add    %edx,%eax
085a1064 +0x0710:  shl    $0x3,%eax
085a1067 +0x0713:  lea    (%ecx,%eax,1),%eax
085a106a +0x0716:  add    $0x78,%eax
085a106d +0x0719:  mov    (%eax),%eax
085a106f +0x071b:  mov    %eax,(%esp)
085a1072 +0x071e:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085a1077 +0x0723:  movsbl %al,%esi
085a107a +0x0726:  mov    -0x48(%ebp),%edx
085a107d +0x0729:  mov    0x8(%ebp),%ecx
085a1080 +0x072c:  mov    %edx,%eax
085a1082 +0x072e:  add    %eax,%eax
085a1084 +0x0730:  add    %edx,%eax
085a1086 +0x0732:  shl    $0x3,%eax
085a1089 +0x0735:  lea    (%ecx,%eax,1),%eax
085a108c +0x0738:  add    $0x78,%eax
085a108f +0x073b:  mov    (%eax),%eax
085a1091 +0x073d:  mov    %eax,(%esp)
085a1094 +0x0740:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085a1099 +0x0745:  mov    %eax,%ebx
085a109b +0x0747:  mov    -0x48(%ebp),%edx
085a109e +0x074a:  mov    0x8(%ebp),%ecx
085a10a1 +0x074d:  mov    %edx,%eax
085a10a3 +0x074f:  add    %eax,%eax
085a10a5 +0x0751:  add    %edx,%eax
085a10a7 +0x0753:  shl    $0x3,%eax
085a10aa +0x0756:  lea    (%ecx,%eax,1),%eax
085a10ad +0x0759:  add    $0x78,%eax
085a10b0 +0x075c:  mov    (%eax),%eax
085a10b2 +0x075e:  mov    %eax,(%esp)
085a10b5 +0x0761:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a10ba +0x0766:  lea    -0xcc(%ebp),%edx
085a10c0 +0x076c:  mov    %edx,0x20(%esp)
085a10c4 +0x0770:  lea    -0xc8(%ebp),%edx
085a10ca +0x0776:  mov    %edx,0x1c(%esp)
085a10ce +0x077a:  lea    -0xc4(%ebp),%edx
085a10d4 +0x0780:  mov    %edx,0x18(%esp)
085a10d8 +0x0784:  lea    -0xc0(%ebp),%edx
085a10de +0x078a:  mov    %edx,0x14(%esp)
085a10e2 +0x078e:  lea    -0xbc(%ebp),%edx
085a10e8 +0x0794:  mov    %edx,0x10(%esp)
085a10ec +0x0798:  lea    -0xb8(%ebp),%edx
085a10f2 +0x079e:  mov    %edx,0xc(%esp)
085a10f6 +0x07a2:  mov    %esi,0x8(%esp)
085a10fa +0x07a6:  mov    %ebx,0x4(%esp)
085a10fe +0x07aa:  mov    %eax,(%esp)
085a1101 +0x07ad:  call   0850ce40 <_ZN10CInventory19checkEquipmentStateEiiRiS0_S0_S0_S0_S0_>  ; CInventory::checkEquipmentState(int, int, int&, int&, int&, int&, int&, int&)
085a1106 +0x07b2:  mov    -0x48(%ebp),%edx
085a1109 +0x07b5:  mov    0x8(%ebp),%ecx
085a110c +0x07b8:  mov    %edx,%eax
085a110e +0x07ba:  add    %eax,%eax
085a1110 +0x07bc:  add    %edx,%eax
085a1112 +0x07be:  shl    $0x3,%eax
085a1115 +0x07c1:  lea    (%ecx,%eax,1),%eax
085a1118 +0x07c4:  add    $0x78,%eax
085a111b +0x07c7:  mov    (%eax),%eax
085a111d +0x07c9:  mov    %eax,(%esp)
085a1120 +0x07cc:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a1125 +0x07d1:  cmp    $0xf,%eax
085a1128 +0x07d4:  setg   %al
085a112b +0x07d7:  test   %al,%al
085a112d +0x07d9:  je     085a11ae <+0x85a>
085a112f +0x07db:  movl   $0x0,-0x3c(%ebp)
085a1136 +0x07e2:  jmp    085a119e <+0x84a>
085a1138 +0x07e4:  mov    -0x48(%ebp),%edx
085a113b +0x07e7:  mov    0x8(%ebp),%ecx
085a113e +0x07ea:  mov    %edx,%eax
085a1140 +0x07ec:  add    %eax,%eax
085a1142 +0x07ee:  add    %edx,%eax
085a1144 +0x07f0:  shl    $0x3,%eax
085a1147 +0x07f3:  lea    (%ecx,%eax,1),%eax
085a114a +0x07f6:  add    $0x78,%eax
085a114d +0x07f9:  mov    (%eax),%ebx
085a114f +0x07fb:  mov    -0x48(%ebp),%edx
085a1152 +0x07fe:  mov    0x8(%ebp),%ecx
085a1155 +0x0801:  mov    %edx,%eax
085a1157 +0x0803:  add    %eax,%eax
085a1159 +0x0805:  add    %edx,%eax
085a115b +0x0807:  shl    $0x3,%eax
085a115e +0x080a:  lea    (%ecx,%eax,1),%eax
085a1161 +0x080d:  add    $0x78,%eax
085a1164 +0x0810:  mov    (%eax),%eax
085a1166 +0x0812:  mov    %eax,(%esp)
085a1169 +0x0815:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a116e +0x081a:  movl   $0x0,0x14(%esp)
085a1176 +0x0822:  movl   $0x0,0x10(%esp)
085a117e +0x082a:  movl   $0x1,0xc(%esp)
085a1186 +0x0832:  movl   $0x1a4,0x8(%esp)
085a118e +0x083a:  mov    %ebx,0x4(%esp)
085a1192 +0x083e:  mov    %eax,(%esp)
085a1195 +0x0841:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a119a +0x0846:  addl   $0x1,-0x3c(%ebp)
085a119e +0x084a:  mov    -0xb8(%ebp),%eax
085a11a4 +0x0850:  cmp    %eax,-0x3c(%ebp)
085a11a7 +0x0853:  setl   %al
085a11aa +0x0856:  test   %al,%al
085a11ac +0x0858:  jne    085a1138 <+0x7e4>
085a11ae +0x085a:  mov    -0x48(%ebp),%edx
085a11b1 +0x085d:  mov    0x8(%ebp),%ecx
085a11b4 +0x0860:  mov    %edx,%eax
085a11b6 +0x0862:  add    %eax,%eax
085a11b8 +0x0864:  add    %edx,%eax
085a11ba +0x0866:  shl    $0x3,%eax
085a11bd +0x0869:  lea    (%ecx,%eax,1),%eax
085a11c0 +0x086c:  add    $0x78,%eax
085a11c3 +0x086f:  mov    (%eax),%eax
085a11c5 +0x0871:  mov    %eax,(%esp)
085a11c8 +0x0874:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a11cd +0x0879:  cmp    $0x17,%eax
085a11d0 +0x087c:  setg   %al
085a11d3 +0x087f:  test   %al,%al
085a11d5 +0x0881:  je     085a1290 <+0x93c>
085a11db +0x0887:  movl   $0x0,-0x38(%ebp)
085a11e2 +0x088e:  jmp    085a127c <+0x928>
085a11e7 +0x0893:  mov    -0xc0(%ebp),%ecx
085a11ed +0x0899:  mov    -0x48(%ebp),%edx
085a11f0 +0x089c:  mov    0x8(%ebp),%ebx
085a11f3 +0x089f:  mov    %edx,%eax
085a11f5 +0x08a1:  add    %eax,%eax
085a11f7 +0x08a3:  add    %edx,%eax
085a11f9 +0x08a5:  shl    $0x3,%eax
085a11fc +0x08a8:  lea    (%ebx,%eax,1),%eax
085a11ff +0x08ab:  add    $0x78,%eax
085a1202 +0x08ae:  mov    (%eax),%eax
085a1204 +0x08b0:  mov    %ecx,0x8(%esp)
085a1208 +0x08b4:  movl   $0x1a5,0x4(%esp)
085a1210 +0x08bc:  mov    %eax,(%esp)
085a1213 +0x08bf:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085a1218 +0x08c4:  mov    %eax,%esi
085a121a +0x08c6:  mov    -0x48(%ebp),%edx
085a121d +0x08c9:  mov    0x8(%ebp),%ecx
085a1220 +0x08cc:  mov    %edx,%eax
085a1222 +0x08ce:  add    %eax,%eax
085a1224 +0x08d0:  add    %edx,%eax
085a1226 +0x08d2:  shl    $0x3,%eax
085a1229 +0x08d5:  lea    (%ecx,%eax,1),%eax
085a122c +0x08d8:  add    $0x78,%eax
085a122f +0x08db:  mov    (%eax),%ebx
085a1231 +0x08dd:  mov    -0x48(%ebp),%edx
085a1234 +0x08e0:  mov    0x8(%ebp),%ecx
085a1237 +0x08e3:  mov    %edx,%eax
085a1239 +0x08e5:  add    %eax,%eax
085a123b +0x08e7:  add    %edx,%eax
085a123d +0x08e9:  shl    $0x3,%eax
085a1240 +0x08ec:  lea    (%ecx,%eax,1),%eax
085a1243 +0x08ef:  add    $0x78,%eax
085a1246 +0x08f2:  mov    (%eax),%eax
085a1248 +0x08f4:  mov    %eax,(%esp)
085a124b +0x08f7:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a1250 +0x08fc:  movl   $0x0,0x14(%esp)
085a1258 +0x0904:  mov    %esi,0x10(%esp)
085a125c +0x0908:  movl   $0x1,0xc(%esp)
085a1264 +0x0910:  movl   $0x1a5,0x8(%esp)
085a126c +0x0918:  mov    %ebx,0x4(%esp)
085a1270 +0x091c:  mov    %eax,(%esp)
085a1273 +0x091f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a1278 +0x0924:  addl   $0x1,-0x38(%ebp)
085a127c +0x0928:  mov    -0xbc(%ebp),%eax
085a1282 +0x092e:  cmp    %eax,-0x38(%ebp)
085a1285 +0x0931:  setl   %al
085a1288 +0x0934:  test   %al,%al
085a128a +0x0936:  jne    085a11e7 <+0x893>
085a1290 +0x093c:  movl   $0x0,-0x34(%ebp)
085a1297 +0x0943:  jmp    085a12ff <+0x9ab>
085a1299 +0x0945:  mov    -0x48(%ebp),%edx
085a129c +0x0948:  mov    0x8(%ebp),%ecx
085a129f +0x094b:  mov    %edx,%eax
085a12a1 +0x094d:  add    %eax,%eax
085a12a3 +0x094f:  add    %edx,%eax
085a12a5 +0x0951:  shl    $0x3,%eax
085a12a8 +0x0954:  lea    (%ecx,%eax,1),%eax
085a12ab +0x0957:  add    $0x78,%eax
085a12ae +0x095a:  mov    (%eax),%ebx
085a12b0 +0x095c:  mov    -0x48(%ebp),%edx
085a12b3 +0x095f:  mov    0x8(%ebp),%ecx
085a12b6 +0x0962:  mov    %edx,%eax
085a12b8 +0x0964:  add    %eax,%eax
085a12ba +0x0966:  add    %edx,%eax
085a12bc +0x0968:  shl    $0x3,%eax
085a12bf +0x096b:  lea    (%ecx,%eax,1),%eax
085a12c2 +0x096e:  add    $0x78,%eax
085a12c5 +0x0971:  mov    (%eax),%eax
085a12c7 +0x0973:  mov    %eax,(%esp)
085a12ca +0x0976:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a12cf +0x097b:  movl   $0x0,0x14(%esp)
085a12d7 +0x0983:  movl   $0x0,0x10(%esp)
085a12df +0x098b:  movl   $0x1,0xc(%esp)
085a12e7 +0x0993:  movl   $0x1a7,0x8(%esp)
085a12ef +0x099b:  mov    %ebx,0x4(%esp)
085a12f3 +0x099f:  mov    %eax,(%esp)
085a12f6 +0x09a2:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a12fb +0x09a7:  addl   $0x1,-0x34(%ebp)
085a12ff +0x09ab:  mov    -0xc4(%ebp),%eax
085a1305 +0x09b1:  cmp    %eax,-0x34(%ebp)
085a1308 +0x09b4:  setl   %al
085a130b +0x09b7:  test   %al,%al
085a130d +0x09b9:  jne    085a1299 <+0x945>
085a130f +0x09bb:  movl   $0x0,-0x30(%ebp)
085a1316 +0x09c2:  jmp    085a137e <+0xa2a>
085a1318 +0x09c4:  mov    -0x48(%ebp),%edx
085a131b +0x09c7:  mov    0x8(%ebp),%ecx
085a131e +0x09ca:  mov    %edx,%eax
085a1320 +0x09cc:  add    %eax,%eax
085a1322 +0x09ce:  add    %edx,%eax
085a1324 +0x09d0:  shl    $0x3,%eax
085a1327 +0x09d3:  lea    (%ecx,%eax,1),%eax
085a132a +0x09d6:  add    $0x78,%eax
085a132d +0x09d9:  mov    (%eax),%ebx
085a132f +0x09db:  mov    -0x48(%ebp),%edx
085a1332 +0x09de:  mov    0x8(%ebp),%ecx
085a1335 +0x09e1:  mov    %edx,%eax
085a1337 +0x09e3:  add    %eax,%eax
085a1339 +0x09e5:  add    %edx,%eax
085a133b +0x09e7:  shl    $0x3,%eax
085a133e +0x09ea:  lea    (%ecx,%eax,1),%eax
085a1341 +0x09ed:  add    $0x78,%eax
085a1344 +0x09f0:  mov    (%eax),%eax
085a1346 +0x09f2:  mov    %eax,(%esp)
085a1349 +0x09f5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a134e +0x09fa:  movl   $0x0,0x14(%esp)
085a1356 +0x0a02:  movl   $0x0,0x10(%esp)
085a135e +0x0a0a:  movl   $0x1,0xc(%esp)
085a1366 +0x0a12:  movl   $0x1a8,0x8(%esp)
085a136e +0x0a1a:  mov    %ebx,0x4(%esp)
085a1372 +0x0a1e:  mov    %eax,(%esp)
085a1375 +0x0a21:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a137a +0x0a26:  addl   $0x1,-0x30(%ebp)
085a137e +0x0a2a:  mov    -0xc8(%ebp),%eax
085a1384 +0x0a30:  cmp    %eax,-0x30(%ebp)
085a1387 +0x0a33:  setl   %al
085a138a +0x0a36:  test   %al,%al
085a138c +0x0a38:  jne    085a1318 <+0x9c4>
085a138e +0x0a3a:  movl   $0x0,-0x2c(%ebp)
085a1395 +0x0a41:  jmp    085a13fd <+0xaa9>
085a1397 +0x0a43:  mov    -0x48(%ebp),%edx
085a139a +0x0a46:  mov    0x8(%ebp),%ecx
085a139d +0x0a49:  mov    %edx,%eax
085a139f +0x0a4b:  add    %eax,%eax
085a13a1 +0x0a4d:  add    %edx,%eax
085a13a3 +0x0a4f:  shl    $0x3,%eax
085a13a6 +0x0a52:  lea    (%ecx,%eax,1),%eax
085a13a9 +0x0a55:  add    $0x78,%eax
085a13ac +0x0a58:  mov    (%eax),%ebx
085a13ae +0x0a5a:  mov    -0x48(%ebp),%edx
085a13b1 +0x0a5d:  mov    0x8(%ebp),%ecx
085a13b4 +0x0a60:  mov    %edx,%eax
085a13b6 +0x0a62:  add    %eax,%eax
085a13b8 +0x0a64:  add    %edx,%eax
085a13ba +0x0a66:  shl    $0x3,%eax
085a13bd +0x0a69:  lea    (%ecx,%eax,1),%eax
085a13c0 +0x0a6c:  add    $0x78,%eax
085a13c3 +0x0a6f:  mov    (%eax),%eax
085a13c5 +0x0a71:  mov    %eax,(%esp)
085a13c8 +0x0a74:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a13cd +0x0a79:  movl   $0x0,0x14(%esp)
085a13d5 +0x0a81:  movl   $0x0,0x10(%esp)
085a13dd +0x0a89:  movl   $0x1,0xc(%esp)
085a13e5 +0x0a91:  movl   $0x1a9,0x8(%esp)
085a13ed +0x0a99:  mov    %ebx,0x4(%esp)
085a13f1 +0x0a9d:  mov    %eax,(%esp)
085a13f4 +0x0aa0:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a13f9 +0x0aa5:  addl   $0x1,-0x2c(%ebp)
085a13fd +0x0aa9:  mov    -0xcc(%ebp),%eax
085a1403 +0x0aaf:  cmp    %eax,-0x2c(%ebp)
085a1406 +0x0ab2:  setl   %al
085a1409 +0x0ab5:  test   %al,%al
085a140b +0x0ab7:  jne    085a1397 <+0xa43>
085a140d +0x0ab9:  jmp    085a1410 <+0xabc>
085a140f +0x0abb:  nop
085a1410 +0x0abc:  addl   $0x1,-0x48(%ebp)
085a1414 +0x0ac0:  cmpl   $0x3,-0x48(%ebp)
085a1418 +0x0ac4:  setle  %al
085a141b +0x0ac7:  test   %al,%al
085a141d +0x0ac9:  jne    085a0e22 <+0x4ce>
085a1423 +0x0acf:  mov    0x8(%ebp),%eax
085a1426 +0x0ad2:  mov    0x1868(%eax),%eax
085a142c +0x0ad8:  test   %eax,%eax
085a142e +0x0ada:  je     085a1482 <+0xb2e>
085a1430 +0x0adc:  mov    0x8(%ebp),%eax
085a1433 +0x0adf:  mov    0x1868(%eax),%eax
085a1439 +0x0ae5:  mov    %eax,(%esp)
085a143c +0x0ae8:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
085a1441 +0x0aed:  test   %al,%al
085a1443 +0x0aef:  je     085a1482 <+0xb2e>
085a1445 +0x0af1:  cmpl   $0x1,0x14(%ebp)
085a1449 +0x0af5:  jne    085a1482 <+0xb2e>
085a144b +0x0af7:  mov    0x8(%ebp),%eax
085a144e +0x0afa:  movzbl 0x1865(%eax),%eax
085a1455 +0x0b01:  test   %al,%al
085a1457 +0x0b03:  je     085a1482 <+0xb2e>
085a1459 +0x0b05:  mov    0x8(%ebp),%eax
085a145c +0x0b08:  mov    0x1868(%eax),%eax
085a1462 +0x0b0e:  add    $0x34,%eax
085a1465 +0x0b11:  mov    %eax,0x4(%esp)
085a1469 +0x0b15:  mov    0x8(%ebp),%eax
085a146c +0x0b18:  mov    %eax,(%esp)
085a146f +0x0b1b:  call   085a8038 <_ZN6CParty16UseSealDoorItemsERSt6vectorIiSaIiEE>  ; CParty::UseSealDoorItems(std::vector<int, std::allocator<int> >&)
085a1474 +0x0b20:  test   %al,%al
085a1476 +0x0b22:  jne    085a1482 <+0xb2e>
085a1478 +0x0b24:  mov    $0x1,%ebx
085a147d +0x0b29:  jmp    085a2124 <+0x17d0>
085a1482 +0x0b2e:  mov    -0x70(%ebp),%eax
085a1485 +0x0b31:  movzbl 0x89f(%eax),%eax
085a148c +0x0b38:  test   %al,%al
085a148e +0x0b3a:  jle    085a1599 <+0xc45>
085a1494 +0x0b40:  lea    -0x84(%ebp),%eax
085a149a +0x0b46:  mov    %eax,(%esp)
085a149d +0x0b49:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a14a2 +0x0b4e:  movl   $0xd4,0x8(%esp)
085a14aa +0x0b56:  movl   $0x0,0x4(%esp)
085a14b2 +0x0b5e:  lea    -0x84(%ebp),%eax
085a14b8 +0x0b64:  mov    %eax,(%esp)
085a14bb +0x0b67:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a14c0 +0x0b6c:  mov    0xc(%ebp),%eax
085a14c3 +0x0b6f:  mov    %eax,0x4(%esp)
085a14c7 +0x0b73:  lea    -0x84(%ebp),%eax
085a14cd +0x0b79:  mov    %eax,(%esp)
085a14d0 +0x0b7c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a14d5 +0x0b81:  movsbl -0x1dc(%ebp),%eax
085a14dc +0x0b88:  mov    %eax,0x4(%esp)
085a14e0 +0x0b8c:  lea    -0x84(%ebp),%eax
085a14e6 +0x0b92:  mov    %eax,(%esp)
085a14e9 +0x0b95:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a14ee +0x0b9a:  mov    0x8(%ebp),%eax
085a14f1 +0x0b9d:  lea    0xb24(%eax),%edx
085a14f7 +0x0ba3:  lea    -0x84(%ebp),%eax
085a14fd +0x0ba9:  mov    %eax,0x8(%esp)
085a1501 +0x0bad:  movl   $0xd4,0x4(%esp)
085a1509 +0x0bb5:  mov    %edx,(%esp)
085a150c +0x0bb8:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a1511 +0x0bbd:  lea    -0x84(%ebp),%eax
085a1517 +0x0bc3:  mov    %eax,0x4(%esp)
085a151b +0x0bc7:  mov    0x8(%ebp),%eax
085a151e +0x0bca:  mov    %eax,(%esp)
085a1521 +0x0bcd:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a1526 +0x0bd2:  lea    -0x84(%ebp),%eax
085a152c +0x0bd8:  mov    %eax,(%esp)
085a152f +0x0bdb:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a1534 +0x0be0:  mov    0x8(%ebp),%eax
085a1537 +0x0be3:  lea    0xb24(%eax),%edx
085a153d +0x0be9:  lea    -0x84(%ebp),%eax
085a1543 +0x0bef:  mov    %eax,0x8(%esp)
085a1547 +0x0bf3:  movl   $0xd3,0x4(%esp)
085a154f +0x0bfb:  mov    %edx,(%esp)
085a1552 +0x0bfe:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a1557 +0x0c03:  lea    -0x84(%ebp),%eax
085a155d +0x0c09:  mov    %eax,0x4(%esp)
085a1561 +0x0c0d:  mov    0x8(%ebp),%eax
085a1564 +0x0c10:  mov    %eax,(%esp)
085a1567 +0x0c13:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a156c +0x0c18:  mov    0x8(%ebp),%eax
085a156f +0x0c1b:  add    $0xb24,%eax
085a1574 +0x0c20:  movl   $0x2,0x4(%esp)
085a157c +0x0c28:  mov    %eax,(%esp)
085a157f +0x0c2b:  call   085bf0b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x616>  ; global constructors keyed to CParty::cMember::cMember()+0x616
085a1584 +0x0c30:  xor    $0x1,%eax
085a1587 +0x0c33:  test   %al,%al
085a1589 +0x0c35:  je     085a1773 <+0xe1f>
085a158f +0x0c3b:  mov    $0x1,%ebx
085a1594 +0x0c40:  jmp    085a2124 <+0x17d0>
085a1599 +0x0c45:  mov    -0x70(%ebp),%eax
085a159c +0x0c48:  mov    %eax,(%esp)
085a159f +0x0c4b:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085a15a4 +0x0c50:  test   %al,%al
085a15a6 +0x0c52:  je     085a1689 <+0xd35>
085a15ac +0x0c58:  lea    -0x84(%ebp),%eax
085a15b2 +0x0c5e:  mov    %eax,(%esp)
085a15b5 +0x0c61:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a15ba +0x0c66:  movl   $0x182,0x8(%esp)
085a15c2 +0x0c6e:  movl   $0x0,0x4(%esp)
085a15ca +0x0c76:  lea    -0x84(%ebp),%eax
085a15d0 +0x0c7c:  mov    %eax,(%esp)
085a15d3 +0x0c7f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a15d8 +0x0c84:  mov    0xc(%ebp),%eax
085a15db +0x0c87:  mov    %eax,0x4(%esp)
085a15df +0x0c8b:  lea    -0x84(%ebp),%eax
085a15e5 +0x0c91:  mov    %eax,(%esp)
085a15e8 +0x0c94:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a15ed +0x0c99:  movsbl -0x1dc(%ebp),%eax
085a15f4 +0x0ca0:  mov    %eax,0x4(%esp)
085a15f8 +0x0ca4:  lea    -0x84(%ebp),%eax
085a15fe +0x0caa:  mov    %eax,(%esp)
085a1601 +0x0cad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a1606 +0x0cb2:  mov    0x8(%ebp),%eax
085a1609 +0x0cb5:  lea    0xb24(%eax),%edx
085a160f +0x0cbb:  lea    -0x84(%ebp),%eax
085a1615 +0x0cc1:  mov    %eax,0x8(%esp)
085a1619 +0x0cc5:  movl   $0x182,0x4(%esp)
085a1621 +0x0ccd:  mov    %edx,(%esp)
085a1624 +0x0cd0:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a1629 +0x0cd5:  lea    -0x84(%ebp),%eax
085a162f +0x0cdb:  mov    %eax,0x4(%esp)
085a1633 +0x0cdf:  mov    0x8(%ebp),%eax
085a1636 +0x0ce2:  mov    %eax,(%esp)
085a1639 +0x0ce5:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a163e +0x0cea:  lea    -0x84(%ebp),%eax
085a1644 +0x0cf0:  mov    %eax,(%esp)
085a1647 +0x0cf3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a164c +0x0cf8:  mov    0x8(%ebp),%eax
085a164f +0x0cfb:  lea    0xb24(%eax),%edx
085a1655 +0x0d01:  lea    -0x84(%ebp),%eax
085a165b +0x0d07:  mov    %eax,0x8(%esp)
085a165f +0x0d0b:  movl   $0x183,0x4(%esp)
085a1667 +0x0d13:  mov    %edx,(%esp)
085a166a +0x0d16:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a166f +0x0d1b:  lea    -0x84(%ebp),%eax
085a1675 +0x0d21:  mov    %eax,0x4(%esp)
085a1679 +0x0d25:  mov    0x8(%ebp),%eax
085a167c +0x0d28:  mov    %eax,(%esp)
085a167f +0x0d2b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a1684 +0x0d30:  jmp    085a1773 <+0xe1f>
085a1689 +0x0d35:  lea    -0x84(%ebp),%eax
085a168f +0x0d3b:  mov    %eax,(%esp)
085a1692 +0x0d3e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a1697 +0x0d43:  movl   $0x1c,0x8(%esp)
085a169f +0x0d4b:  movl   $0x0,0x4(%esp)
085a16a7 +0x0d53:  lea    -0x84(%ebp),%eax
085a16ad +0x0d59:  mov    %eax,(%esp)
085a16b0 +0x0d5c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a16b5 +0x0d61:  mov    0xc(%ebp),%eax
085a16b8 +0x0d64:  mov    %eax,0x4(%esp)
085a16bc +0x0d68:  lea    -0x84(%ebp),%eax
085a16c2 +0x0d6e:  mov    %eax,(%esp)
085a16c5 +0x0d71:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a16ca +0x0d76:  movsbl -0x1dc(%ebp),%eax
085a16d1 +0x0d7d:  mov    %eax,0x4(%esp)
085a16d5 +0x0d81:  lea    -0x84(%ebp),%eax
085a16db +0x0d87:  mov    %eax,(%esp)
085a16de +0x0d8a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a16e3 +0x0d8f:  mov    0x8(%ebp),%eax
085a16e6 +0x0d92:  lea    0xb24(%eax),%edx
085a16ec +0x0d98:  lea    -0x84(%ebp),%eax
085a16f2 +0x0d9e:  mov    %eax,0x8(%esp)
085a16f6 +0x0da2:  movl   $0x1c,0x4(%esp)
085a16fe +0x0daa:  mov    %edx,(%esp)
085a1701 +0x0dad:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a1706 +0x0db2:  lea    -0x84(%ebp),%eax
085a170c +0x0db8:  mov    %eax,0x4(%esp)
085a1710 +0x0dbc:  mov    0x8(%ebp),%eax
085a1713 +0x0dbf:  mov    %eax,(%esp)
085a1716 +0x0dc2:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a171b +0x0dc7:  lea    -0x84(%ebp),%eax
085a1721 +0x0dcd:  mov    %eax,(%esp)
085a1724 +0x0dd0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a1729 +0x0dd5:  mov    0x8(%ebp),%eax
085a172c +0x0dd8:  lea    0xb24(%eax),%edx
085a1732 +0x0dde:  lea    -0x84(%ebp),%eax
085a1738 +0x0de4:  mov    %eax,0x8(%esp)
085a173c +0x0de8:  movl   $0x1d,0x4(%esp)
085a1744 +0x0df0:  mov    %edx,(%esp)
085a1747 +0x0df3:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a174c +0x0df8:  lea    -0x84(%ebp),%eax
085a1752 +0x0dfe:  mov    %eax,0x4(%esp)
085a1756 +0x0e02:  mov    0x8(%ebp),%eax
085a1759 +0x0e05:  mov    %eax,(%esp)
085a175c +0x0e08:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a1761 +0x0e0d:  mov    -0x78(%ebp),%eax
085a1764 +0x0e10:  mov    %eax,0x4(%esp)
085a1768 +0x0e14:  mov    0x8(%ebp),%eax
085a176b +0x0e17:  mov    %eax,(%esp)
085a176e +0x0e1a:  call   085bac26 <_ZN6CParty17_Send_TOD_APCInfoEi>  ; CParty::_Send_TOD_APCInfo(int)
085a1773 +0x0e1f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a177a +0x0e26:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085a177f +0x0e2b:  mov    $0x0,%edx
085a1784 +0x0e30:  mov    0x8(%ebp),%ecx
085a1787 +0x0e33:  mov    %eax,0x34c(%ecx)
085a178d +0x0e39:  mov    %edx,0x350(%ecx)
085a1793 +0x0e3f:  mov    0x8(%ebp),%eax
085a1796 +0x0e42:  movl   $0x0,0x33c(%eax)
085a17a0 +0x0e4c:  movl   $0x0,0x340(%eax)
085a17aa +0x0e56:  mov    0x8(%ebp),%eax
085a17ad +0x0e59:  movl   $0x0,0x344(%eax)
085a17b7 +0x0e63:  movl   $0x0,0x348(%eax)
085a17c1 +0x0e6d:  mov    0x8(%ebp),%eax
085a17c4 +0x0e70:  movl   $0x0,0x358(%eax)
085a17ce +0x0e7a:  movl   $0x0,0x35c(%eax)
085a17d8 +0x0e84:  mov    0x8(%ebp),%eax
085a17db +0x0e87:  mov    0x350(%eax),%edx
085a17e1 +0x0e8d:  mov    0x34c(%eax),%eax
085a17e7 +0x0e93:  mov    0x8(%ebp),%ecx
085a17ea +0x0e96:  mov    %eax,0x360(%ecx)
085a17f0 +0x0e9c:  mov    %edx,0x364(%ecx)
085a17f6 +0x0ea2:  movl   $0x2,0x4(%esp)
085a17fe +0x0eaa:  mov    0x8(%ebp),%eax
085a1801 +0x0ead:  mov    %eax,(%esp)
085a1804 +0x0eb0:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085a1809 +0x0eb5:  movl   $0x1,0x4(%esp)
085a1811 +0x0ebd:  mov    0x8(%ebp),%eax
085a1814 +0x0ec0:  mov    %eax,(%esp)
085a1817 +0x0ec3:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085a181c +0x0ec8:  movl   $0x2d,0x4(%esp)
085a1824 +0x0ed0:  mov    0x8(%ebp),%eax
085a1827 +0x0ed3:  mov    %eax,(%esp)
085a182a +0x0ed6:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085a182f +0x0edb:  movl   $0xffffffff,0x4(%esp)
085a1837 +0x0ee3:  mov    0x8(%ebp),%eax
085a183a +0x0ee6:  mov    %eax,(%esp)
085a183d +0x0ee9:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
085a1842 +0x0eee:  mov    0x8(%ebp),%eax
085a1845 +0x0ef1:  mov    %eax,(%esp)
085a1848 +0x0ef4:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a184d +0x0ef9:  mov    %eax,-0x5c(%ebp)
085a1850 +0x0efc:  mov    -0x5c(%ebp),%eax
085a1853 +0x0eff:  mov    %eax,0x4(%esp)
085a1857 +0x0f03:  mov    0x8(%ebp),%eax
085a185a +0x0f06:  mov    %eax,(%esp)
085a185d +0x0f09:  call   085bf75a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xcb8>  ; global constructors keyed to CParty::cMember::cMember()+0xcb8
085a1862 +0x0f0e:  mov    -0x70(%ebp),%eax
085a1865 +0x0f11:  movzbl 0x89f(%eax),%eax
085a186c +0x0f18:  test   %al,%al
085a186e +0x0f1a:  jg     085a18a1 <+0xf4d>
085a1870 +0x0f1c:  mov    0x8(%ebp),%eax
085a1873 +0x0f1f:  mov    0x74(%eax),%eax
085a1876 +0x0f22:  mov    %eax,(%esp)
085a1879 +0x0f25:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085a187e +0x0f2a:  cmp    $0xa,%eax
085a1881 +0x0f2d:  je     085a18a1 <+0xf4d>
085a1883 +0x0f2f:  mov    -0x70(%ebp),%eax
085a1886 +0x0f32:  mov    %eax,(%esp)
085a1889 +0x0f35:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085a188e +0x0f3a:  test   %al,%al
085a1890 +0x0f3c:  jne    085a18a1 <+0xf4d>
085a1892 +0x0f3e:  mov    -0x70(%ebp),%eax
085a1895 +0x0f41:  mov    %eax,(%esp)
085a1898 +0x0f44:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085a189d +0x0f49:  test   %al,%al
085a189f +0x0f4b:  je     085a18a8 <+0xf54>
085a18a1 +0x0f4d:  mov    $0x1,%eax
085a18a6 +0x0f52:  jmp    085a18ad <+0xf59>
085a18a8 +0x0f54:  mov    $0x0,%eax
085a18ad +0x0f59:  test   %al,%al
085a18af +0x0f5b:  je     085a18c0 <+0xf6c>
085a18b1 +0x0f5d:  mov    0x8(%ebp),%eax
085a18b4 +0x0f60:  movl   $0x3e8,0x2a4(%eax)
085a18be +0x0f6a:  jmp    085a1914 <+0xfc0>
085a18c0 +0x0f6c:  mov    0x8(%ebp),%eax
085a18c3 +0x0f6f:  mov    %eax,(%esp)
085a18c6 +0x0f72:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a18cb +0x0f77:  mov    %eax,%esi
085a18cd +0x0f79:  mov    0x8(%ebp),%eax
085a18d0 +0x0f7c:  mov    0xcac(%eax),%eax
085a18d6 +0x0f82:  mov    %eax,(%esp)
085a18d9 +0x0f85:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085a18de +0x0f8a:  mov    %eax,%ebx
085a18e0 +0x0f8c:  mov    0x8(%ebp),%eax
085a18e3 +0x0f8f:  mov    0xcac(%eax),%eax
085a18e9 +0x0f95:  mov    %eax,(%esp)
085a18ec +0x0f98:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085a18f1 +0x0f9d:  mov    &_ZN10GlobalData13s_secret_shopE,%edx
085a18f7 +0x0fa3:  mov    %esi,0xc(%esp)
085a18fb +0x0fa7:  mov    %ebx,0x8(%esp)
085a18ff +0x0fab:  mov    %eax,0x4(%esp)
085a1903 +0x0faf:  mov    %edx,(%esp)
085a1906 +0x0fb2:  call   085fabac <_ZN10secretshop11CSecretShop10LotteryNpcEiii>  ; secretshop::CSecretShop::LotteryNpc(int, int, int)
085a190b +0x0fb7:  mov    0x8(%ebp),%edx
085a190e +0x0fba:  mov    %eax,0x2a4(%edx)
085a1914 +0x0fc0:  movb   $0x0,-0x55(%ebp)
085a1918 +0x0fc4:  movl   $0x0,-0x8c(%ebp)
085a1922 +0x0fce:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085a1927 +0x0fd3:  movl   $0x41,0x4(%esp)
085a192f +0x0fdb:  mov    %eax,(%esp)
085a1932 +0x0fde:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085a1937 +0x0fe3:  mov    (%eax),%edx
085a1939 +0x0fe5:  add    $0x34,%edx
085a193c +0x0fe8:  mov    (%edx),%edx
085a193e +0x0fea:  movl   $0x0,0x4(%esp)
085a1946 +0x0ff2:  mov    %eax,(%esp)
085a1949 +0x0ff5:  call   *%edx
085a194b +0x0ff7:  test   %al,%al
085a194d +0x0ff9:  je     085a19a9 <+0x1055>
085a194f +0x0ffb:  mov    0x8(%ebp),%eax
085a1952 +0x0ffe:  mov    %eax,(%esp)
085a1955 +0x1001:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
085a195a +0x1006:  test   %al,%al
085a195c +0x1008:  je     085a19a9 <+0x1055>
085a195e +0x100a:  mov    0x8(%ebp),%eax
085a1961 +0x100d:  mov    0xcac(%eax),%eax
085a1967 +0x1013:  lea    -0x8c(%ebp),%edx
085a196d +0x1019:  mov    %edx,0x8(%esp)
085a1971 +0x101d:  mov    %eax,0x4(%esp)
085a1975 +0x1021:  mov    0x8(%ebp),%eax
085a1978 +0x1024:  mov    %eax,(%esp)
085a197b +0x1027:  call   085b11ee <_ZN6CParty23isPremiumGoldCardRewardEPK8CDungeonRj>  ; CParty::isPremiumGoldCardReward(CDungeon const*, unsigned int&)
085a1980 +0x102c:  mov    %al,-0x55(%ebp)
085a1983 +0x102f:  cmpb   $0x0,-0x55(%ebp)
085a1987 +0x1033:  je     085a19a9 <+0x1055>
085a1989 +0x1035:  mov    0x8(%ebp),%eax
085a198c +0x1038:  mov    %eax,(%esp)
085a198f +0x103b:  call   085bf708 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc66>  ; global constructors keyed to CParty::cMember::cMember()+0xc66
085a1994 +0x1040:  mov    -0x8c(%ebp),%eax
085a199a +0x1046:  mov    %eax,0x4(%esp)
085a199e +0x104a:  mov    0x8(%ebp),%eax
085a19a1 +0x104d:  mov    %eax,(%esp)
085a19a4 +0x1050:  call   085bf736 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc94>  ; global constructors keyed to CParty::cMember::cMember()+0xc94
085a19a9 +0x1055:  mov    0x8(%ebp),%eax
085a19ac +0x1058:  add    $0x1dc,%eax
085a19b1 +0x105d:  mov    %eax,(%esp)
085a19b4 +0x1060:  call   082a4cc6 <_GLOBAL__I__ZN4CLog5this_E+0x10ed>  ; global constructors keyed to CLog::this_+0x10ed
085a19b9 +0x1065:  movl   $0x0,-0x28(%ebp)
085a19c0 +0x106c:  jmp    085a1fd1 <+0x167d>
085a19c5 +0x1071:  movl   $0x0,-0x24(%ebp)
085a19cc +0x1078:  jmp    085a19ec <+0x1098>
085a19ce +0x107a:  mov    -0x24(%ebp),%ecx
085a19d1 +0x107d:  mov    -0x28(%ebp),%eax
085a19d4 +0x1080:  mov    0x8(%ebp),%edx
085a19d7 +0x1083:  shl    $0x2,%ecx
085a19da +0x1086:  add    %ecx,%edx
085a19dc +0x1088:  lea    (%edx,%eax,1),%eax
085a19df +0x108b:  add    $0x200,%eax
085a19e4 +0x1090:  movb   $0xff,0x4(%eax)
085a19e8 +0x1094:  addl   $0x1,-0x24(%ebp)
085a19ec +0x1098:  cmpl   $0x1,-0x24(%ebp)
085a19f0 +0x109c:  setle  %al
085a19f3 +0x109f:  test   %al,%al
085a19f5 +0x10a1:  jne    085a19ce <+0x107a>
085a19f7 +0x10a3:  mov    0x8(%ebp),%eax
085a19fa +0x10a6:  movb   $0x0,0x1e0(%eax)
085a1a01 +0x10ad:  mov    -0x28(%ebp),%eax
085a1a04 +0x10b0:  mov    %eax,0x4(%esp)
085a1a08 +0x10b4:  mov    0x8(%ebp),%eax
085a1a0b +0x10b7:  mov    %eax,(%esp)
085a1a0e +0x10ba:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a1a13 +0x10bf:  xor    $0x1,%eax
085a1a16 +0x10c2:  test   %al,%al
085a1a18 +0x10c4:  jne    085a1fcc <+0x1678>
085a1a1e +0x10ca:  mov    0x8(%ebp),%eax
085a1a21 +0x10cd:  mov    0x2a4(%eax),%ecx
085a1a27 +0x10d3:  mov    -0x28(%ebp),%edx
085a1a2a +0x10d6:  mov    0x8(%ebp),%ebx
085a1a2d +0x10d9:  mov    %edx,%eax
085a1a2f +0x10db:  add    %eax,%eax
085a1a31 +0x10dd:  add    %edx,%eax
085a1a33 +0x10df:  shl    $0x3,%eax
085a1a36 +0x10e2:  lea    (%ebx,%eax,1),%eax
085a1a39 +0x10e5:  add    $0x78,%eax
085a1a3c +0x10e8:  mov    (%eax),%edx
085a1a3e +0x10ea:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
085a1a43 +0x10ef:  mov    %ecx,0x8(%esp)
085a1a47 +0x10f3:  mov    %edx,0x4(%esp)
085a1a4b +0x10f7:  mov    %eax,(%esp)
085a1a4e +0x10fa:  call   085fb2e0 <_ZN10secretshop11CSecretShop17SendSecretShopNpcEP5CUseri>  ; secretshop::CSecretShop::SendSecretShopNpc(CUser*, int)
085a1a53 +0x10ff:  movsbl -0x1dc(%ebp),%esi
085a1a5a +0x1106:  mov    0xc(%ebp),%ebx
085a1a5d +0x1109:  mov    -0x28(%ebp),%edx
085a1a60 +0x110c:  mov    0x8(%ebp),%ecx
085a1a63 +0x110f:  mov    %edx,%eax
085a1a65 +0x1111:  add    %eax,%eax
085a1a67 +0x1113:  add    %edx,%eax
085a1a69 +0x1115:  shl    $0x3,%eax
085a1a6c +0x1118:  lea    (%ecx,%eax,1),%eax
085a1a6f +0x111b:  add    $0x78,%eax
085a1a72 +0x111e:  mov    (%eax),%eax
085a1a74 +0x1120:  mov    %eax,(%esp)
085a1a77 +0x1123:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
085a1a7c +0x1128:  mov    %esi,0xc(%esp)
085a1a80 +0x112c:  mov    %ebx,0x8(%esp)
085a1a84 +0x1130:  movl   $0x0,0x4(%esp)
085a1a8c +0x1138:  mov    %eax,(%esp)
085a1a8f +0x113b:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
085a1a94 +0x1140:  cmpl   $0x0,-0x70(%ebp)
085a1a98 +0x1144:  je     085a1ac0 <+0x116c>
085a1a9a +0x1146:  mov    -0x28(%ebp),%edx
085a1a9d +0x1149:  mov    0x8(%ebp),%ecx
085a1aa0 +0x114c:  mov    %edx,%eax
085a1aa2 +0x114e:  add    %eax,%eax
085a1aa4 +0x1150:  add    %edx,%eax
085a1aa6 +0x1152:  shl    $0x3,%eax
085a1aa9 +0x1155:  lea    (%ecx,%eax,1),%eax
085a1aac +0x1158:  add    $0x78,%eax
085a1aaf +0x115b:  mov    (%eax),%eax
085a1ab1 +0x115d:  mov    %eax,0x4(%esp)
085a1ab5 +0x1161:  mov    0x8(%ebp),%eax
085a1ab8 +0x1164:  mov    %eax,(%esp)
085a1abb +0x1167:  call   085bb746 <_ZN6CParty21SetProperLevelDungeonEP5CUser>  ; CParty::SetProperLevelDungeon(CUser*)
085a1ac0 +0x116c:  cmpl   $0x1,-0x6c(%ebp)
085a1ac4 +0x1170:  je     085a1ba0 <+0x124c>
085a1aca +0x1176:  mov    -0x70(%ebp),%eax
085a1acd +0x1179:  movzbl 0x87a(%eax),%eax
085a1ad4 +0x1180:  xor    $0x1,%eax
085a1ad7 +0x1183:  test   %al,%al
085a1ad9 +0x1185:  je     085a1b0c <+0x11b8>
085a1adb +0x1187:  mov    -0x70(%ebp),%eax
085a1ade +0x118a:  movzbl 0x89f(%eax),%eax
085a1ae5 +0x1191:  test   %al,%al
085a1ae7 +0x1193:  jne    085a1b0c <+0x11b8>
085a1ae9 +0x1195:  mov    0xc(%ebp),%eax
085a1aec +0x1198:  cmp    $0x2710,%eax
085a1af1 +0x119d:  je     085a1b0c <+0x11b8>
085a1af3 +0x119f:  mov    -0x70(%ebp),%eax
085a1af6 +0x11a2:  mov    %eax,(%esp)
085a1af9 +0x11a5:  call   0822b4de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb88
085a1afe +0x11aa:  xor    $0x1,%eax
085a1b01 +0x11ad:  test   %al,%al
085a1b03 +0x11af:  je     085a1b0c <+0x11b8>
085a1b05 +0x11b1:  mov    $0x1,%eax
085a1b0a +0x11b6:  jmp    085a1b11 <+0x11bd>
085a1b0c +0x11b8:  mov    $0x0,%eax
085a1b11 +0x11bd:  test   %al,%al
085a1b13 +0x11bf:  je     085a1ba0 <+0x124c>
085a1b19 +0x11c5:  mov    -0x70(%ebp),%eax
085a1b1c +0x11c8:  mov    %eax,(%esp)
085a1b1f +0x11cb:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085a1b24 +0x11d0:  test   %al,%al
085a1b26 +0x11d2:  je     085a1b79 <+0x1225>
085a1b28 +0x11d4:  mov    -0x70(%ebp),%eax
085a1b2b +0x11d7:  mov    %eax,(%esp)
085a1b2e +0x11da:  call   08365238 <_ZNK8CDungeon25getTournamentRoundFatigueEv>  ; CDungeon::getTournamentRoundFatigue() const
085a1b33 +0x11df:  mov    %eax,%ecx
085a1b35 +0x11e1:  mov    -0x28(%ebp),%edx
085a1b38 +0x11e4:  mov    0x8(%ebp),%ebx
085a1b3b +0x11e7:  mov    %edx,%eax
085a1b3d +0x11e9:  add    %eax,%eax
085a1b3f +0x11eb:  add    %edx,%eax
085a1b41 +0x11ed:  shl    $0x3,%eax
085a1b44 +0x11f0:  lea    (%ebx,%eax,1),%eax
085a1b47 +0x11f3:  add    $0x78,%eax
085a1b4a +0x11f6:  mov    (%eax),%eax
085a1b4c +0x11f8:  mov    %ecx,0x4(%esp)
085a1b50 +0x11fc:  mov    %eax,(%esp)
085a1b53 +0x11ff:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
085a1b58 +0x1204:  mov    -0x28(%ebp),%edx
085a1b5b +0x1207:  mov    0x8(%ebp),%ecx
085a1b5e +0x120a:  mov    %edx,%eax
085a1b60 +0x120c:  add    %eax,%eax
085a1b62 +0x120e:  add    %edx,%eax
085a1b64 +0x1210:  shl    $0x3,%eax
085a1b67 +0x1213:  lea    (%ecx,%eax,1),%eax
085a1b6a +0x1216:  add    $0x78,%eax
085a1b6d +0x1219:  mov    (%eax),%eax
085a1b6f +0x121b:  mov    %eax,(%esp)
085a1b72 +0x121e:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
085a1b77 +0x1223:  jmp    085a1ba0 <+0x124c>
085a1b79 +0x1225:  mov    -0x28(%ebp),%edx
085a1b7c +0x1228:  mov    0x8(%ebp),%ecx
085a1b7f +0x122b:  mov    %edx,%eax
085a1b81 +0x122d:  add    %eax,%eax
085a1b83 +0x122f:  add    %edx,%eax
085a1b85 +0x1231:  shl    $0x3,%eax
085a1b88 +0x1234:  lea    (%ecx,%eax,1),%eax
085a1b8b +0x1237:  add    $0x78,%eax
085a1b8e +0x123a:  mov    (%eax),%eax
085a1b90 +0x123c:  movl   $0x0,0x4(%esp)
085a1b98 +0x1244:  mov    %eax,(%esp)
085a1b9b +0x1247:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
085a1ba0 +0x124c:  mov    0xc(%ebp),%ecx
085a1ba3 +0x124f:  mov    -0x28(%ebp),%edx
085a1ba6 +0x1252:  mov    0x8(%ebp),%ebx
085a1ba9 +0x1255:  mov    %edx,%eax
085a1bab +0x1257:  add    %eax,%eax
085a1bad +0x1259:  add    %edx,%eax
085a1baf +0x125b:  shl    $0x3,%eax
085a1bb2 +0x125e:  lea    (%ebx,%eax,1),%eax
085a1bb5 +0x1261:  add    $0x78,%eax
085a1bb8 +0x1264:  mov    (%eax),%eax
085a1bba +0x1266:  mov    %ecx,0x4(%esp)
085a1bbe +0x126a:  mov    %eax,(%esp)
085a1bc1 +0x126d:  call   0867cb70 <_ZN5CUser22setPlayingDungeonIndexEi>  ; CUser::setPlayingDungeonIndex(int)
085a1bc6 +0x1272:  mov    -0x28(%ebp),%edx
085a1bc9 +0x1275:  mov    0x8(%ebp),%ecx
085a1bcc +0x1278:  mov    %edx,%eax
085a1bce +0x127a:  add    %eax,%eax
085a1bd0 +0x127c:  add    %edx,%eax
085a1bd2 +0x127e:  shl    $0x3,%eax
085a1bd5 +0x1281:  lea    (%ecx,%eax,1),%eax
085a1bd8 +0x1284:  add    $0x78,%eax
085a1bdb +0x1287:  mov    (%eax),%eax
085a1bdd +0x1289:  add    $0x8e034,%eax
085a1be2 +0x128e:  mov    %eax,(%esp)
085a1be5 +0x1291:  call   08486640 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x7a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x7a
085a1bea +0x1296:  mov    -0x28(%ebp),%edx
085a1bed +0x1299:  mov    0x8(%ebp),%ecx
085a1bf0 +0x129c:  mov    %edx,%eax
085a1bf2 +0x129e:  add    %eax,%eax
085a1bf4 +0x12a0:  add    %edx,%eax
085a1bf6 +0x12a2:  shl    $0x3,%eax
085a1bf9 +0x12a5:  lea    (%ecx,%eax,1),%eax
085a1bfc +0x12a8:  add    $0x78,%eax
085a1bff +0x12ab:  mov    (%eax),%eax
085a1c01 +0x12ad:  mov    -0x5c(%ebp),%edx
085a1c04 +0x12b0:  mov    %edx,0x8e054(%eax)
085a1c0a +0x12b6:  mov    -0x28(%ebp),%edx
085a1c0d +0x12b9:  mov    0x8(%ebp),%ecx
085a1c10 +0x12bc:  mov    %edx,%eax
085a1c12 +0x12be:  add    %eax,%eax
085a1c14 +0x12c0:  add    %edx,%eax
085a1c16 +0x12c2:  shl    $0x3,%eax
085a1c19 +0x12c5:  lea    (%ecx,%eax,1),%eax
085a1c1c +0x12c8:  add    $0x78,%eax
085a1c1f +0x12cb:  mov    (%eax),%eax
085a1c21 +0x12cd:  movb   $0x0,0x8e074(%eax)
085a1c28 +0x12d4:  mov    0x8(%ebp),%eax
085a1c2b +0x12d7:  mov    0xcac(%eax),%eax
085a1c31 +0x12dd:  mov    %eax,(%esp)
085a1c34 +0x12e0:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085a1c39 +0x12e5:  lea    -0x5(%eax),%ebx
085a1c3c +0x12e8:  mov    -0x28(%ebp),%edx
085a1c3f +0x12eb:  mov    0x8(%ebp),%ecx
085a1c42 +0x12ee:  mov    %edx,%eax
085a1c44 +0x12f0:  add    %eax,%eax
085a1c46 +0x12f2:  add    %edx,%eax
085a1c48 +0x12f4:  shl    $0x3,%eax
085a1c4b +0x12f7:  lea    (%ecx,%eax,1),%eax
085a1c4e +0x12fa:  add    $0x78,%eax
085a1c51 +0x12fd:  mov    (%eax),%eax
085a1c53 +0x12ff:  mov    %eax,(%esp)
085a1c56 +0x1302:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a1c5b +0x1307:  cmp    %eax,%ebx
085a1c5d +0x1309:  jg     085a1c9d <+0x1349>
085a1c5f +0x130b:  mov    0x8(%ebp),%eax
085a1c62 +0x130e:  mov    0xcac(%eax),%eax
085a1c68 +0x1314:  mov    %eax,(%esp)
085a1c6b +0x1317:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085a1c70 +0x131c:  lea    0x3(%eax),%ebx
085a1c73 +0x131f:  mov    -0x28(%ebp),%edx
085a1c76 +0x1322:  mov    0x8(%ebp),%ecx
085a1c79 +0x1325:  mov    %edx,%eax
085a1c7b +0x1327:  add    %eax,%eax
085a1c7d +0x1329:  add    %edx,%eax
085a1c7f +0x132b:  shl    $0x3,%eax
085a1c82 +0x132e:  lea    (%ecx,%eax,1),%eax
085a1c85 +0x1331:  add    $0x78,%eax
085a1c88 +0x1334:  mov    (%eax),%eax
085a1c8a +0x1336:  mov    %eax,(%esp)
085a1c8d +0x1339:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a1c92 +0x133e:  cmp    %eax,%ebx
085a1c94 +0x1340:  jl     085a1c9d <+0x1349>
085a1c96 +0x1342:  mov    $0x1,%eax
085a1c9b +0x1347:  jmp    085a1ca2 <+0x134e>
085a1c9d +0x1349:  mov    $0x0,%eax
085a1ca2 +0x134e:  test   %al,%al
085a1ca4 +0x1350:  je     085a1cba <+0x1366>
085a1ca6 +0x1352:  mov    0x8(%ebp),%eax
085a1ca9 +0x1355:  movb   $0x1,0x354(%eax)
085a1cb0 +0x135c:  mov    0x8(%ebp),%eax
085a1cb3 +0x135f:  movb   $0x1,0x355(%eax)
085a1cba +0x1366:  mov    0x8(%ebp),%eax
085a1cbd +0x1369:  mov    %eax,(%esp)
085a1cc0 +0x136c:  call   085b613e <_ZN6CParty30getMemberMaxLevelBeforeDungeonEv>  ; CParty::getMemberMaxLevelBeforeDungeon()
085a1cc5 +0x1371:  mov    %eax,%ebx
085a1cc7 +0x1373:  mov    -0x28(%ebp),%edx
085a1cca +0x1376:  mov    0x8(%ebp),%ecx
085a1ccd +0x1379:  mov    %edx,%eax
085a1ccf +0x137b:  add    %eax,%eax
085a1cd1 +0x137d:  add    %edx,%eax
085a1cd3 +0x137f:  shl    $0x3,%eax
085a1cd6 +0x1382:  lea    (%ecx,%eax,1),%eax
085a1cd9 +0x1385:  add    $0x78,%eax
085a1cdc +0x1388:  mov    (%eax),%eax
085a1cde +0x138a:  mov    %eax,(%esp)
085a1ce1 +0x138d:  call   08645d52 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv>  ; CUserCharacInfo::get_charac_level_before_dungeon() const
085a1ce6 +0x1392:  mov    %ebx,%edx
085a1ce8 +0x1394:  sub    %eax,%edx
085a1cea +0x1396:  mov    %edx,%eax
085a1cec +0x1398:  cmp    $0x6,%eax
085a1cef +0x139b:  jle    085a1cfe <+0x13aa>
085a1cf1 +0x139d:  cmpl   $0x1,-0x5c(%ebp)
085a1cf5 +0x13a1:  je     085a1cfe <+0x13aa>
085a1cf7 +0x13a3:  mov    $0x1,%eax
085a1cfc +0x13a8:  jmp    085a1d03 <+0x13af>
085a1cfe +0x13aa:  mov    $0x0,%eax
085a1d03 +0x13af:  test   %al,%al
085a1d05 +0x13b1:  je     085a1d7a <+0x1426>
085a1d07 +0x13b3:  mov    0x8(%ebp),%eax
085a1d0a +0x13b6:  movb   $0x1,0x356(%eax)
085a1d11 +0x13bd:  mov    0x8(%ebp),%eax
085a1d14 +0x13c0:  mov    %eax,(%esp)
085a1d17 +0x13c3:  call   085b49d0 <_ZN6CParty12isGuildPartyEv>  ; CParty::isGuildParty()
085a1d1c +0x13c8:  test   %al,%al
085a1d1e +0x13ca:  jne    085a1d52 <+0x13fe>
085a1d20 +0x13cc:  mov    -0x28(%ebp),%edx
085a1d23 +0x13cf:  mov    0x8(%ebp),%ecx
085a1d26 +0x13d2:  mov    %edx,%eax
085a1d28 +0x13d4:  add    %eax,%eax
085a1d2a +0x13d6:  add    %edx,%eax
085a1d2c +0x13d8:  shl    $0x3,%eax
085a1d2f +0x13db:  lea    (%ecx,%eax,1),%eax
085a1d32 +0x13de:  add    $0x78,%eax
085a1d35 +0x13e1:  mov    (%eax),%eax
085a1d37 +0x13e3:  mov    %eax,(%esp)
085a1d3a +0x13e6:  call   085bfbb4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1112>  ; global constructors keyed to CParty::cMember::cMember()+0x1112
085a1d3f +0x13eb:  mov    %eax,0x4(%esp)
085a1d43 +0x13ef:  mov    0x8(%ebp),%eax
085a1d46 +0x13f2:  mov    %eax,(%esp)
085a1d49 +0x13f5:  call   085a2140 <_ZN6CParty16FindUserByCharIdEj>  ; CParty::FindUserByCharId(unsigned int)
085a1d4e +0x13fa:  test   %eax,%eax
085a1d50 +0x13fc:  je     085a1d59 <+0x1405>
085a1d52 +0x13fe:  mov    $0x1,%eax
085a1d57 +0x1403:  jmp    085a1d5e <+0x140a>
085a1d59 +0x1405:  mov    $0x0,%eax
085a1d5e +0x140a:  test   %al,%al
085a1d60 +0x140c:  je     085a1d6e <+0x141a>
085a1d62 +0x140e:  mov    0x8(%ebp),%eax
085a1d65 +0x1411:  movb   $0x0,0x357(%eax)
085a1d6c +0x1418:  jmp    085a1d8e <+0x143a>
085a1d6e +0x141a:  mov    0x8(%ebp),%eax
085a1d71 +0x141d:  movb   $0x1,0x357(%eax)
085a1d78 +0x1424:  jmp    085a1d8e <+0x143a>
085a1d7a +0x1426:  mov    0x8(%ebp),%eax
085a1d7d +0x1429:  movb   $0x0,0x356(%eax)
085a1d84 +0x1430:  mov    0x8(%ebp),%eax
085a1d87 +0x1433:  movb   $0x0,0x357(%eax)
085a1d8e +0x143a:  mov    0x8(%ebp),%eax
085a1d91 +0x143d:  mov    0xcac(%eax),%eax
085a1d97 +0x1443:  mov    %eax,(%esp)
085a1d9a +0x1446:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085a1d9f +0x144b:  test   %al,%al
085a1da1 +0x144d:  setg   %al
085a1da4 +0x1450:  test   %al,%al
085a1da6 +0x1452:  je     085a1dbc <+0x1468>
085a1da8 +0x1454:  mov    0x8(%ebp),%eax
085a1dab +0x1457:  movb   $0x1,0x354(%eax)
085a1db2 +0x145e:  mov    0x8(%ebp),%eax
085a1db5 +0x1461:  movb   $0x1,0x355(%eax)
085a1dbc +0x1468:  mov    -0x28(%ebp),%edx
085a1dbf +0x146b:  mov    0x8(%ebp),%ecx
085a1dc2 +0x146e:  mov    %edx,%eax
085a1dc4 +0x1470:  add    %eax,%eax
085a1dc6 +0x1472:  add    %edx,%eax
085a1dc8 +0x1474:  shl    $0x3,%eax
085a1dcb +0x1477:  lea    (%ecx,%eax,1),%eax
085a1dce +0x147a:  add    $0x78,%eax
085a1dd1 +0x147d:  mov    (%eax),%eax
085a1dd3 +0x147f:  mov    %eax,(%esp)
085a1dd6 +0x1482:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
085a1ddb +0x1487:  movsbl %al,%esi
085a1dde +0x148a:  mov    -0x28(%ebp),%edx
085a1de1 +0x148d:  mov    0x8(%ebp),%ecx
085a1de4 +0x1490:  mov    %edx,%eax
085a1de6 +0x1492:  add    %eax,%eax
085a1de8 +0x1494:  add    %edx,%eax
085a1dea +0x1496:  shl    $0x3,%eax
085a1ded +0x1499:  lea    (%ecx,%eax,1),%eax
085a1df0 +0x149c:  add    $0x78,%eax
085a1df3 +0x149f:  mov    (%eax),%eax
085a1df5 +0x14a1:  mov    %eax,(%esp)
085a1df8 +0x14a4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a1dfd +0x14a9:  mov    %eax,%ebx
085a1dff +0x14ab:  mov    -0x28(%ebp),%edx
085a1e02 +0x14ae:  mov    0x8(%ebp),%ecx
085a1e05 +0x14b1:  mov    %edx,%eax
085a1e07 +0x14b3:  add    %eax,%eax
085a1e09 +0x14b5:  add    %edx,%eax
085a1e0b +0x14b7:  shl    $0x3,%eax
085a1e0e +0x14ba:  lea    (%ecx,%eax,1),%eax
085a1e11 +0x14bd:  add    $0x78,%eax
085a1e14 +0x14c0:  mov    (%eax),%eax
085a1e16 +0x14c2:  mov    %eax,(%esp)
085a1e19 +0x14c5:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085a1e1e +0x14ca:  mov    %eax,%ecx
085a1e20 +0x14cc:  mov    -0x28(%ebp),%edx
085a1e23 +0x14cf:  mov    0x8(%ebp),%edi
085a1e26 +0x14d2:  mov    %edx,%eax
085a1e28 +0x14d4:  add    %eax,%eax
085a1e2a +0x14d6:  add    %edx,%eax
085a1e2c +0x14d8:  shl    $0x3,%eax
085a1e2f +0x14db:  lea    (%edi,%eax,1),%eax
085a1e32 +0x14de:  add    $0x78,%eax
085a1e35 +0x14e1:  mov    (%eax),%eax
085a1e37 +0x14e3:  mov    0x796f8(%eax),%eax
085a1e3d +0x14e9:  mov    %esi,0xc(%esp)
085a1e41 +0x14ed:  mov    %ebx,0x8(%esp)
085a1e45 +0x14f1:  mov    %ecx,0x4(%esp)
085a1e49 +0x14f5:  mov    %eax,(%esp)
085a1e4c +0x14f8:  call   084b9f6a <_ZN10HistoryLog13WriteDunStartEP8_IO_FILEiii>  ; HistoryLog::WriteDunStart(_IO_FILE*, int, int, int)
085a1e51 +0x14fd:  mov    0x8(%ebp),%eax
085a1e54 +0x1500:  mov    %eax,(%esp)
085a1e57 +0x1503:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085a1e5c +0x1508:  mov    %eax,(%esp)
085a1e5f +0x150b:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085a1e64 +0x1510:  cmp    $0x1,%eax
085a1e67 +0x1513:  setne  %al
085a1e6a +0x1516:  test   %al,%al
085a1e6c +0x1518:  je     085a1eae <+0x155a>
085a1e6e +0x151a:  cmpl   $0x1,-0x6c(%ebp)
085a1e72 +0x151e:  je     085a1e92 <+0x153e>
085a1e74 +0x1520:  mov    0xc(%ebp),%ebx
085a1e77 +0x1523:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
085a1e7c +0x1528:  movl   $0x0,0x8(%esp)
085a1e84 +0x1530:  mov    %ebx,0x4(%esp)
085a1e88 +0x1534:  mov    %eax,(%esp)
085a1e8b +0x1537:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
085a1e90 +0x153c:  jmp    085a1eae <+0x155a>
085a1e92 +0x153e:  mov    0xc(%ebp),%ebx
085a1e95 +0x1541:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
085a1e9a +0x1546:  movl   $0x1,0x8(%esp)
085a1ea2 +0x154e:  mov    %ebx,0x4(%esp)
085a1ea6 +0x1552:  mov    %eax,(%esp)
085a1ea9 +0x1555:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
085a1eae +0x155a:  cmpl   $0x1,-0x6c(%ebp)
085a1eb2 +0x155e:  je     085a1ed3 <+0x157f>
085a1eb4 +0x1560:  mov    -0x28(%ebp),%edx
085a1eb7 +0x1563:  mov    0x8(%ebp),%ecx
085a1eba +0x1566:  mov    %edx,%eax
085a1ebc +0x1568:  add    %eax,%eax
085a1ebe +0x156a:  add    %edx,%eax
085a1ec0 +0x156c:  shl    $0x3,%eax
085a1ec3 +0x156f:  lea    (%ecx,%eax,1),%eax
085a1ec6 +0x1572:  add    $0x78,%eax
085a1ec9 +0x1575:  mov    (%eax),%eax
085a1ecb +0x1577:  mov    %eax,(%esp)
085a1ece +0x157a:  call   085bfc9a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x11f8>  ; global constructors keyed to CParty::cMember::cMember()+0x11f8
085a1ed3 +0x157f:  cmpl   $0x1,-0x6c(%ebp)
085a1ed7 +0x1583:  jne    085a1f10 <+0x15bc>
085a1ed9 +0x1585:  mov    -0x28(%ebp),%edx
085a1edc +0x1588:  mov    0x8(%ebp),%ecx
085a1edf +0x158b:  mov    %edx,%eax
085a1ee1 +0x158d:  add    %eax,%eax
085a1ee3 +0x158f:  add    %edx,%eax
085a1ee5 +0x1591:  shl    $0x3,%eax
085a1ee8 +0x1594:  lea    (%ecx,%eax,1),%eax
085a1eeb +0x1597:  add    $0x78,%eax
085a1eee +0x159a:  mov    (%eax),%eax
085a1ef0 +0x159c:  mov    %eax,(%esp)
085a1ef3 +0x159f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a1ef8 +0x15a4:  mov    %eax,(%esp)
085a1efb +0x15a7:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
085a1f00 +0x15ac:  movl   $0x0,0x4(%esp)
085a1f08 +0x15b4:  mov    %eax,(%esp)
085a1f0b +0x15b7:  call   0833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>  ; user_creature::CCreatureMgr::TurnStomach(bool)
085a1f10 +0x15bc:  mov    -0x28(%ebp),%edx
085a1f13 +0x15bf:  mov    0x8(%ebp),%ecx
085a1f16 +0x15c2:  mov    %edx,%eax
085a1f18 +0x15c4:  add    %eax,%eax
085a1f1a +0x15c6:  add    %edx,%eax
085a1f1c +0x15c8:  shl    $0x3,%eax
085a1f1f +0x15cb:  lea    (%ecx,%eax,1),%eax
085a1f22 +0x15ce:  add    $0x78,%eax
085a1f25 +0x15d1:  mov    (%eax),%eax
085a1f27 +0x15d3:  mov    %eax,(%esp)
085a1f2a +0x15d6:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a1f2f +0x15db:  movswl %ax,%ecx
085a1f32 +0x15de:  mov    -0x28(%ebp),%edx
085a1f35 +0x15e1:  mov    0x8(%ebp),%ebx
085a1f38 +0x15e4:  mov    %edx,%eax
085a1f3a +0x15e6:  add    %eax,%eax
085a1f3c +0x15e8:  add    %edx,%eax
085a1f3e +0x15ea:  shl    $0x3,%eax
085a1f41 +0x15ed:  lea    (%ebx,%eax,1),%eax
085a1f44 +0x15f0:  add    $0x78,%eax
085a1f47 +0x15f3:  mov    (%eax),%eax
085a1f49 +0x15f5:  mov    %ecx,0x4(%esp)
085a1f4d +0x15f9:  mov    %eax,(%esp)
085a1f50 +0x15fc:  call   085bfb64 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x10c2>  ; global constructors keyed to CParty::cMember::cMember()+0x10c2
085a1f55 +0x1601:  cmpl   $0x0,-0x70(%ebp)
085a1f59 +0x1605:  je     085a1f88 <+0x1634>
085a1f5b +0x1607:  mov    0xc(%ebp),%ecx
085a1f5e +0x160a:  mov    -0x28(%ebp),%edx
085a1f61 +0x160d:  mov    0x8(%ebp),%ebx
085a1f64 +0x1610:  mov    %edx,%eax
085a1f66 +0x1612:  add    %eax,%eax
085a1f68 +0x1614:  add    %edx,%eax
085a1f6a +0x1616:  shl    $0x3,%eax
085a1f6d +0x1619:  lea    (%ebx,%eax,1),%eax
085a1f70 +0x161c:  add    $0x78,%eax
085a1f73 +0x161f:  mov    (%eax),%eax
085a1f75 +0x1621:  mov    %ecx,0x8(%esp)
085a1f79 +0x1625:  mov    %eax,0x4(%esp)
085a1f7d +0x1629:  mov    0x8(%ebp),%eax
085a1f80 +0x162c:  mov    %eax,(%esp)
085a1f83 +0x162f:  call   085bb62a <_ZN6CParty21SetProperDungeonEventEP5CUseri>  ; CParty::SetProperDungeonEvent(CUser*, int)
085a1f88 +0x1634:  mov    0x8(%ebp),%eax
085a1f8b +0x1637:  mov    %eax,(%esp)
085a1f8e +0x163a:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
085a1f93 +0x163f:  mov    -0x28(%ebp),%edx
085a1f96 +0x1642:  mov    0x8(%ebp),%ecx
085a1f99 +0x1645:  mov    %edx,%eax
085a1f9b +0x1647:  add    %eax,%eax
085a1f9d +0x1649:  add    %edx,%eax
085a1f9f +0x164b:  shl    $0x3,%eax
085a1fa2 +0x164e:  lea    (%ecx,%eax,1),%eax
085a1fa5 +0x1651:  add    $0x78,%eax
085a1fa8 +0x1654:  mov    (%eax),%eax
085a1faa +0x1656:  mov    %eax,(%esp)
085a1fad +0x1659:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
085a1fb2 +0x165e:  movl   $0x0,0x8(%esp)
085a1fba +0x1666:  movl   $0x2,0x4(%esp)
085a1fc2 +0x166e:  mov    %eax,(%esp)
085a1fc5 +0x1671:  call   084b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>  ; XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)
085a1fca +0x1676:  jmp    085a1fcd <+0x1679>
085a1fcc +0x1678:  nop
085a1fcd +0x1679:  addl   $0x1,-0x28(%ebp)
085a1fd1 +0x167d:  cmpl   $0x3,-0x28(%ebp)
085a1fd5 +0x1681:  setle  %al
085a1fd8 +0x1684:  test   %al,%al
085a1fda +0x1686:  jne    085a19c5 <+0x1071>
085a1fe0 +0x168c:  movl   $0x0,-0x20(%ebp)
085a1fe7 +0x1693:  jmp    085a201f <+0x16cb>
085a1fe9 +0x1695:  movl   $0x0,-0x1c(%ebp)
085a1ff0 +0x169c:  jmp    085a2010 <+0x16bc>
085a1ff2 +0x169e:  mov    -0x20(%ebp),%ecx
085a1ff5 +0x16a1:  mov    -0x1c(%ebp),%edx
085a1ff8 +0x16a4:  mov    0x8(%ebp),%eax
085a1ffb +0x16a7:  shl    $0x2,%ecx
085a1ffe +0x16aa:  lea    (%ecx,%edx,1),%edx
085a2001 +0x16ad:  add    $0x78,%edx
085a2004 +0x16b0:  movl   $0x0,0x4(%eax,%edx,4)
085a200c +0x16b8:  addl   $0x1,-0x1c(%ebp)
085a2010 +0x16bc:  cmpl   $0x3,-0x1c(%ebp)
085a2014 +0x16c0:  setle  %al
085a2017 +0x16c3:  test   %al,%al
085a2019 +0x16c5:  jne    085a1ff2 <+0x169e>
085a201b +0x16c7:  addl   $0x1,-0x20(%ebp)
085a201f +0x16cb:  cmpl   $0x1,-0x20(%ebp)
085a2023 +0x16cf:  setle  %al
085a2026 +0x16d2:  test   %al,%al
085a2028 +0x16d4:  jne    085a1fe9 <+0x1695>
085a202a +0x16d6:  mov    0x8(%ebp),%eax
085a202d +0x16d9:  mov    %eax,(%esp)
085a2030 +0x16dc:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
085a2035 +0x16e1:  mov    0x8(%ebp),%eax
085a2038 +0x16e4:  mov    %eax,(%esp)
085a203b +0x16e7:  call   085a932a <_ZN6CParty19check_passive_skillEv>  ; CParty::check_passive_skill()
085a2040 +0x16ec:  mov    0x8(%ebp),%eax
085a2043 +0x16ef:  mov    %eax,(%esp)
085a2046 +0x16f2:  call   085b1fe0 <_ZN6CParty21send_loadingcheck_msgEv>  ; CParty::send_loadingcheck_msg()
085a204b +0x16f7:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085a2050 +0x16fc:  movl   $0x57,0x4(%esp)
085a2058 +0x1704:  mov    %eax,(%esp)
085a205b +0x1707:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085a2060 +0x170c:  mov    (%eax),%edx
085a2062 +0x170e:  add    $0x34,%edx
085a2065 +0x1711:  mov    (%edx),%edx
085a2067 +0x1713:  movl   $0x0,0x4(%esp)
085a206f +0x171b:  mov    %eax,(%esp)
085a2072 +0x171e:  call   *%edx
085a2074 +0x1720:  test   %al,%al
085a2076 +0x1722:  je     085a208d <+0x1739>
085a2078 +0x1724:  movl   $0x1,0x4(%esp)
085a2080 +0x172c:  mov    0x8(%ebp),%eax
085a2083 +0x172f:  mov    %eax,(%esp)
085a2086 +0x1732:  call   085bca8a <_ZN6CParty15SetWeekendEventEb>  ; CParty::SetWeekendEvent(bool)
085a208b +0x1737:  jmp    085a20a0 <+0x174c>
085a208d +0x1739:  movl   $0x0,0x4(%esp)
085a2095 +0x1741:  mov    0x8(%ebp),%eax
085a2098 +0x1744:  mov    %eax,(%esp)
085a209b +0x1747:  call   085bca8a <_ZN6CParty15SetWeekendEventEb>  ; CParty::SetWeekendEvent(bool)
085a20a0 +0x174c:  mov    0x8(%ebp),%eax
085a20a3 +0x174f:  mov    %eax,0x4(%esp)
085a20a7 +0x1753:  lea    -0x94(%ebp),%eax
085a20ad +0x1759:  mov    %eax,(%esp)
085a20b0 +0x175c:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085a20b5 +0x1761:  lea    -0xb0(%ebp),%eax
085a20bb +0x1767:  mov    %eax,(%esp)
085a20be +0x176a:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085a20c3 +0x176f:  lea    -0xb0(%ebp),%eax
085a20c9 +0x1775:  mov    %eax,0x10(%esp)
085a20cd +0x1779:  mov    -0x94(%ebp),%eax
085a20d3 +0x177f:  mov    -0x90(%ebp),%edx
085a20d9 +0x1785:  mov    %eax,0x8(%esp)
085a20dd +0x1789:  mov    %edx,0xc(%esp)
085a20e1 +0x178d:  movl   $0x9,0x4(%esp)
085a20e9 +0x1795:  mov    0x8(%ebp),%eax
085a20ec +0x1798:  mov    %eax,(%esp)
085a20ef +0x179b:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085a20f4 +0x17a0:  mov    0x8(%ebp),%eax
085a20f7 +0x17a3:  mov    %eax,(%esp)
085a20fa +0x17a6:  call   085be05a <_ZN6CParty27SendPartyMemberTagChracInfoEv>  ; CParty::SendPartyMemberTagChracInfo()
085a20ff +0x17ab:  mov    $0x0,%ebx
085a2104 +0x17b0:  jmp    085a2124 <+0x17d0>
085a2106 +0x17b2:  mov    %edx,%ebx
085a2108 +0x17b4:  mov    %eax,%esi
085a210a +0x17b6:  lea    -0x84(%ebp),%eax
085a2110 +0x17bc:  mov    %eax,(%esp)
085a2113 +0x17bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a2118 +0x17c4:  mov    %esi,%eax
085a211a +0x17c6:  mov    %ebx,%edx
085a211c +0x17c8:  mov    %eax,(%esp)
085a211f +0x17cb:  call   08ae3750 <_Unwind_Resume>
085a2124 +0x17d0:  lea    -0x84(%ebp),%eax
085a212a +0x17d6:  mov    %eax,(%esp)
085a212d +0x17d9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a2132 +0x17de:  mov    %ebx,%eax
085a2134 +0x17e0:  add    $0x20c,%esp
085a213a +0x17e6:  pop    %ebx
085a213b +0x17e7:  pop    %esi
085a213c +0x17e8:  pop    %edi
085a213d +0x17e9:  pop    %ebp
085a213e +0x17ea:  ret
085a213f +0x17eb:  nop
```

## 反编译 C

```c
// CParty::dungeon_start @ 0x85a0954

/* CParty::dungeon_start(int, char, ENUM_DUNGEON_TYPE) */

int __thiscall CParty::dungeon_start(CParty *this,int param_1,undefined4 param_2,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  CHackAnalyzer *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  BestClearTime *this_00;
  char *pcVar11;
  char *pcVar12;
  SkillSlot *this_01;
  int iVar13;
  int *piVar14;
  UserQuest *pUVar15;
  uint uVar16;
  CUser *this_02;
  CDungeonEntranceLog *pCVar17;
  CInventory *pCVar18;
  CCreatureMgr *this_03;
  CHades *this_04;
  byte bVar19;
  char local_1d0 [256];
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  RewardData_Result local_b4 [28];
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined1 local_89;
  PacketGuard local_88 [12];
  int local_7c;
  int local_78;
  CDungeon *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  char local_59;
  int local_58;
  char local_51;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar19 = 0;
  cVar4 = (char)param_2;
  resetMemberUseCoin(this);
  this[0x324] = (CParty)0x0;
  ClearMapHitCount(this);
  Secu_HackLogCheckByParty::startDungeon((Secu_HackLogCheckByParty *)(this + 0x1abc));
  local_7c = -1;
  local_78 = 0;
  local_78 = GetDungeonIndex_isTOD(this,&param_1,&local_7c);
  if (local_78 != 0) {
    return local_78;
  }
  iVar6 = G_CDataManager();
  local_74 = (CDungeon *)CDataManager::find_dungeon(iVar6);
  if (local_74 == (CDungeon *)0x0) {
    return 0x15;
  }
  PacketGuard::PacketGuard(local_88);
  local_70 = *(int *)(this + 0xcd8);
                    /* try { // try from 085a0a18 to 085a20fe has its CatchHandler @ 085a2106 */
  iVar6 = CDungeon::GetPartyMemberCoinLimit(local_74);
  iVar7 = get_member_count(this);
  SetPartyMemberCoinLimit(this,iVar7 * iVar6);
  CTraceMobDieHack::setDungeonDiff((CTraceMobDieHack *)(this + 0x210),(int)cVar4);
  cVar3 = GetEPLPState(this);
  if (cVar3 == '\0') {
    cVar3 = IsLightServer();
    if ((cVar3 == '\0') || (iVar6 = CDungeon::get_min_level(local_74), iVar6 < 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_6c = CDungeon::get_min_level(local_74);
    }
    else {
      local_6c = CDungeon::get_min_level(local_74);
    }
    cVar3 = CUser::IsGameMasterMode(*(CUser **)(this + 0x74));
    if ((cVar3 == '\x01') ||
       (iVar6 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(this + 0x74)),
       local_6c <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar6 = 0xe;
    }
    else {
      cVar3 = checkDungeonDifficulty(this,cVar4,local_74);
      if (cVar3 != '\0') {
        local_51 = 0;
        sVar5 = CUserCharacInfo::getDungeonClearRefR(*(CUserCharacInfo **)(this + 0x74));
        local_51 = WongWork::CDungeonClear::getClearedDungeonDiff(sVar5);
        if (local_51 == '\0') {
          iVar6 = 0x13;
          goto LAB_085a2124;
        }
        if ((local_51 < cVar4) && (cVar4 != '\x04')) {
          iVar6 = 0x13;
          goto LAB_085a2124;
        }
      }
      local_68 = 0;
      for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
        cVar3 = _checkValidUser(this,local_50);
        if ((cVar3 == '\x01') && (local_70 != 1)) {
          iVar6 = CDungeon::get_index(local_74);
          local_68 = CUser::CheckQuestMap(*(CUser **)(this + local_50 * 0x18 + 0x78),iVar6);
          if (0 < local_68) break;
        }
      }
      SetUsedCoinCount(this,0);
      cVar3 = CheckHaveHellPartyPassItem(this,local_74,param_4);
      if (cVar3 == '\x01') {
        local_89 = 0;
        local_64 = checkInoutConditionDungeon(this,local_74,local_70,0x10);
        if (local_64 == 0) {
          CBattle_Field::check_random_appear_hell_dungeon
                    ((CBattle_Field *)(this + 0xb24),local_74,local_70,param_4,&local_89);
          uVar2 = local_89;
          uVar10 = *(undefined4 *)(this + 0x1868);
          uVar9 = get_member_count(this);
          cVar3 = CBattle_Field::SelectDungeon
                            ((CBattle_Field *)(this + 0xb24),param_1,local_74,(int)cVar4,param_4,
                             uVar9,uVar10,uVar2,local_68);
          if (cVar3 == '\x01') {
            uVar10 = CBattle_Field::getRandomBuffDungeonType((CBattle_Field *)(this + 0xb24),0);
            choose_random_buff(this,uVar10);
            pcVar11 = local_1d0;
            for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
              pcVar11[0] = '\0';
              pcVar11[1] = '\0';
              pcVar11[2] = '\0';
              pcVar11[3] = '\0';
              pcVar11 = pcVar11 + ((uint)bVar19 * -2 + 1) * 4;
            }
            _getMemberNames(this,local_1d0);
            for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
              cVar3 = _checkValidUser(this,local_4c);
              if (cVar3 == '\x01') {
                this_00 = (BestClearTime *)
                          CUser::GetCharacExpandData
                                    (*(CUser **)(this + local_4c * 0x18 + 0x78),0x12);
                BestClearTime::setNewRecord(this_00,false);
                iVar6 = local_70;
                pcVar11 = (char *)_getMemberNames(this,local_1d0);
                pcVar12 = (char *)CDungeon::GetDungeonName(local_74);
                cUserHistoryLog::EnterDungeon
                          ((cUserHistoryLog *)(*(int *)(this + local_4c * 0x18 + 0x78) + 0x79700),
                           pcVar12,(int)cVar4,pcVar11,iVar6);
                CUser::resetDungeonClearHackCheck(*(CUser **)(this + local_4c * 0x18 + 0x78));
                iVar6 = CUser::getMoveSpace(*(CUser **)(this + local_4c * 0x18 + 0x78));
                if (iVar6 == 0) {
                  local_b8 = 0;
                  this_01 = (SkillSlot *)
                            CUserCharacInfo::getCurCharacSkillW
                                      (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  local_48 = SkillSlot::checkskillSlotEmptyCount(this_01,&local_b8);
                  for (local_44 = 0; local_44 < local_48; local_44 = local_44 + 1) {
                    uVar9 = CUser::SetETC(*(CUser **)(this + local_4c * 0x18 + 0x78),0x1a6,local_b8)
                    ;
                    uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                    pCVar8 = (CHackAnalyzer *)
                             CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a6,1,uVar9,0);
                  }
                  local_bc = 0;
                  local_c0 = 0;
                  local_c4 = 0;
                  local_c8 = 0;
                  local_cc = 0;
                  local_d0 = 0;
                  cVar3 = CUserCharacInfo::getCurCharFirstGrowType
                                    (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  iVar6 = CUserCharacInfo::get_charac_job
                                    (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  pCVar18 = (CInventory *)
                            CUserCharacInfo::getCurCharacInvenW
                                      (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  CInventory::checkEquipmentState
                            (pCVar18,iVar6,(int)cVar3,&local_bc,&local_c0,&local_c4,&local_c8,
                             &local_cc,&local_d0);
                  iVar6 = CUserCharacInfo::get_charac_level
                                    (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  if (0xf < iVar6) {
                    for (local_40 = 0; local_40 < local_bc; local_40 = local_40 + 1) {
                      uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                      pCVar8 = (CHackAnalyzer *)
                               CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                      WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a4,1,0,0);
                    }
                  }
                  iVar6 = CUserCharacInfo::get_charac_level
                                    (*(CUserCharacInfo **)(this + local_4c * 0x18 + 0x78));
                  if (0x17 < iVar6) {
                    for (local_3c = 0; local_3c < local_c0; local_3c = local_3c + 1) {
                      uVar9 = CUser::SetETC(*(CUser **)(this + local_4c * 0x18 + 0x78),0x1a5,
                                            local_c4);
                      uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                      pCVar8 = (CHackAnalyzer *)
                               CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                      WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a5,1,uVar9,0);
                    }
                  }
                  for (local_38 = 0; local_38 < local_c8; local_38 = local_38 + 1) {
                    uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                    pCVar8 = (CHackAnalyzer *)
                             CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a7,1,0,0);
                  }
                  for (local_34 = 0; local_34 < local_cc; local_34 = local_34 + 1) {
                    uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                    pCVar8 = (CHackAnalyzer *)
                             CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a8,1,0,0);
                  }
                  for (local_30 = 0; local_30 < local_d0; local_30 = local_30 + 1) {
                    uVar10 = *(undefined4 *)(this + local_4c * 0x18 + 0x78);
                    pCVar8 = (CHackAnalyzer *)
                             CUser::getHackAnalyzer(*(CUser **)(this + local_4c * 0x18 + 0x78));
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x1a9,1,0,0);
                  }
                }
              }
            }
            if ((((*(int *)(this + 0x1868) == 0) ||
                 (cVar3 = CWorldMap::IsInHellDungeon(*(CWorldMap **)(this + 0x1868)), cVar3 == '\0')
                 ) || (param_4 != 1)) ||
               ((this[0x1865] == (CParty)0x0 ||
                (cVar3 = UseSealDoorItems((vector *)this), cVar3 != '\0')))) {
              if ((char)local_74[0x89f] < '\x01') {
                cVar3 = CDungeon::isTournamentDungeon(local_74);
                if (cVar3 == '\0') {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,0,0x1c);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,param_1);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(int)cVar4);
                  CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x1c,local_88);
                  send_to_party(this,local_88);
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                  CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x1d,local_88);
                  send_to_party(this,local_88);
                  _Send_TOD_APCInfo(this,local_7c);
                }
                else {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,0,0x182);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,param_1);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(int)cVar4);
                  CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x182,local_88);
                  send_to_party(this,local_88);
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                  CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x183,local_88);
                  send_to_party(this,local_88);
                }
              }
              else {
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,0,0xd4);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,param_1);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(int)cVar4);
                CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0xd4,local_88);
                send_to_party(this,local_88);
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_88);
                CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0xd3,local_88);
                send_to_party(this,local_88);
                cVar3 = CBattle_Field::setBloodState((CBattle_Field *)(this + 0xb24),2);
                if (cVar3 != '\x01') {
                  iVar6 = 1;
                  goto LAB_085a2124;
                }
              }
              uVar10 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
              *(undefined4 *)(this + 0x34c) = uVar10;
              *(undefined4 *)(this + 0x350) = 0;
              *(undefined4 *)(this + 0x33c) = 0;
              *(undefined4 *)(this + 0x340) = 0;
              *(undefined4 *)(this + 0x344) = 0;
              *(undefined4 *)(this + 0x348) = 0;
              *(undefined4 *)(this + 0x358) = 0;
              *(undefined4 *)(this + 0x35c) = 0;
              *(undefined4 *)(this + 0x360) = *(undefined4 *)(this + 0x34c);
              *(undefined4 *)(this + 0x364) = *(undefined4 *)(this + 0x350);
              set_state(this,'\x02');
              SetEPLPState(this,'\x01');
              gen_timer_key(this,0x2d);
              SetSelectedEPLPCmd(this,-1);
              local_60 = get_member_count(this);
              setStartGamePartyCount(this,local_60);
              if ((((char)local_74[0x89f] < '\x01') &&
                  (iVar6 = CUser::get_state(*(CUser **)(this + 0x74)), iVar6 != 10)) &&
                 ((cVar3 = CDungeon::isTowerOfDespairDungeon(local_74), cVar3 == '\0' &&
                  (cVar3 = CDungeon::isTournamentDungeon(local_74), cVar3 == '\0')))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                *(undefined4 *)(this + 0x2a4) = 1000;
              }
              else {
                iVar6 = get_member_count(this);
                iVar7 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
                iVar13 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
                uVar10 = secretshop::CSecretShop::LotteryNpc
                                   (GlobalData::s_secret_shop,iVar13,iVar7,iVar6);
                *(undefined4 *)(this + 0x2a4) = uVar10;
              }
              local_59 = '\0';
              local_90 = 0;
              piVar14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x41);
              cVar3 = (**(code **)(*piVar14 + 0x34))(piVar14,0);
              if (((cVar3 != '\0') && (cVar3 = IsReturnUserParty(this), cVar3 != '\0')) &&
                 (local_59 = isPremiumGoldCardReward(this,*(CDungeon **)(this + 0xcac),&local_90),
                 local_59 != '\0')) {
                SetPremiumGoldCardParty(this);
                SetPremiumGoldCardDefaultItem(this,local_90);
              }
              CPartyResultRecvFlag::Clear((CPartyResultRecvFlag *)(this + 0x1dc));
              for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
                for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
                  this[local_2c + local_28 * 4 + 0x204] = (CParty)0xff;
                }
                this[0x1e0] = (CParty)0x0;
                cVar3 = _checkValidUser(this,local_2c);
                if (cVar3 == '\x01') {
                  secretshop::CSecretShop::SendSecretShopNpc
                            (GlobalData::s_secret_shop,*(CUser **)(this + local_2c * 0x18 + 0x78),
                             *(int *)(this + 0x2a4));
                  iVar6 = param_1;
                  pUVar15 = (UserQuest *)
                            CUser::getCurCharacQuestW(*(CUser **)(this + local_2c * 0x18 + 0x78));
                  UserQuest::set_authen_data(pUVar15,0,iVar6,(int)cVar4);
                  if (local_74 != (CDungeon *)0x0) {
                    SetProperLevelDungeon(this,*(CUser **)(this + local_2c * 0x18 + 0x78));
                  }
                  if (local_70 != 1) {
                    if (((local_74[0x87a] == (CDungeon)0x1) || (local_74[0x89f] != (CDungeon)0x0))
                       || ((param_1 == 10000 ||
                           (cVar3 = CDungeon::isNoFatigueDungeon(local_74), cVar3 == '\x01')))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      cVar3 = CDungeon::isTournamentDungeon(local_74);
                      if (cVar3 == '\0') {
                        CUser::FatigueUp(*(CUser **)(this + local_2c * 0x18 + 0x78),0);
                      }
                      else {
                        iVar6 = CDungeon::getTournamentRoundFatigue(local_74);
                        CUser::FatigueUp(*(CUser **)(this + local_2c * 0x18 + 0x78),iVar6);
                        CUser::SendFatigue(*(CUser **)(this + local_2c * 0x18 + 0x78));
                      }
                    }
                  }
                  CUser::setPlayingDungeonIndex(*(CUser **)(this + local_2c * 0x18 + 0x78),param_1);
                  PlayInfo::Reset((PlayInfo *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8e034));
                  *(int *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8e054) = local_60;
                  *(undefined1 *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8e074) = 0;
                  iVar6 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
                  iVar7 = CUserCharacInfo::get_charac_level
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  if (iVar7 < iVar6 + -5) {
LAB_085a1c9d:
                    bVar1 = false;
                  }
                  else {
                    iVar6 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
                    iVar7 = CUserCharacInfo::get_charac_level
                                      (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                    if (iVar6 + 3 < iVar7) goto LAB_085a1c9d;
                    bVar1 = true;
                  }
                  if (bVar1) {
                    this[0x354] = (CParty)0x1;
                    this[0x355] = (CParty)0x1;
                  }
                  iVar6 = getMemberMaxLevelBeforeDungeon(this);
                  iVar7 = CUserCharacInfo::get_charac_level_before_dungeon
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  if ((iVar6 - iVar7 < 7) || (local_60 == 1)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    this[0x356] = (CParty)0x1;
                    cVar3 = isGuildParty(this);
                    if (cVar3 == '\0') {
                      uVar16 = CUserCharacInfo::get_connect_upper_member
                                         (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                      iVar6 = FindUserByCharId(this,uVar16);
                      if (iVar6 != 0) goto LAB_085a1d52;
                      bVar1 = false;
                    }
                    else {
LAB_085a1d52:
                      bVar1 = true;
                    }
                    if (bVar1) {
                      this[0x357] = (CParty)0x0;
                    }
                    else {
                      this[0x357] = (CParty)0x1;
                    }
                  }
                  else {
                    this[0x356] = (CParty)0x0;
                    this[0x357] = (CParty)0x0;
                  }
                  cVar3 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac));
                  if ('\0' < cVar3) {
                    this[0x354] = (CParty)0x1;
                    this[0x355] = (CParty)0x1;
                  }
                  cVar3 = CUserCharacInfo::getCurCharacGrowType
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  iVar6 = CUserCharacInfo::get_charac_level
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  iVar7 = CUserCharacInfo::get_charac_job
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  HistoryLog::WriteDunStart
                            (*(_IO_FILE **)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x796f8),iVar7
                             ,iVar6,(int)cVar3);
                  this_02 = (CUser *)getManager(this);
                  iVar7 = CUser::getMoveSpace(this_02);
                  iVar6 = param_1;
                  if (iVar7 != 1) {
                    if (local_70 == 1) {
                      pCVar17 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                      CDungeonEntranceLog::IncrementDungeonEntrance(pCVar17,iVar6,true);
                    }
                    else {
                      pCVar17 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                      CDungeonEntranceLog::IncrementDungeonEntrance(pCVar17,iVar6,false);
                    }
                  }
                  if (local_70 != 1) {
                    CUserCharacInfo::IncCurCharacDungeonPlayCount
                              (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  }
                  if (local_70 == 1) {
                    pCVar18 = (CInventory *)
                              CUserCharacInfo::getCurCharacInvenR
                                        (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                    this_03 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar18);
                    user_creature::CCreatureMgr::TurnStomach(this_03,false);
                  }
                  sVar5 = CUserCharacInfo::get_charac_level
                                    (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
                  CUserCharacInfo::set_level_before_dungeon
                            (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78),sVar5);
                  if (local_74 != (CDungeon *)0x0) {
                    SetProperDungeonEvent((CUser *)this,*(int *)(this + local_2c * 0x18 + 0x78));
                  }
                  SetEndRouting(this);
                  this_04 = (CHades *)CUser::getHades(*(CUser **)(this + local_2c * 0x18 + 0x78));
                  XNuclear::CHades::StdCateUpdate(this_04,2,0);
                }
              }
              for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
                for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
                  *(undefined4 *)(this + (local_24 * 4 + local_20 + 0x78) * 4 + 4) = 0;
                }
              }
              Reset_party_overlapped_drop_ratio(this);
              check_passive_skill();
              send_loadingcheck_msg(this);
              piVar14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
              cVar4 = (**(code **)(*piVar14 + 0x34))(piVar14,0);
              if (cVar4 == '\0') {
                SetWeekendEvent(this,false);
              }
              else {
                SetWeekendEvent(this,true);
              }
              QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_98,this);
              QuickParty::RewardData_Result::RewardData_Result(local_b4);
              set_random_reward(this,9,local_98,local_94,local_b4);
              SendPartyMemberTagChracInfo(this);
              iVar6 = 0;
            }
            else {
              iVar6 = 1;
            }
          }
          else {
            iVar6 = 1;
          }
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 0;
      }
    }
  }
  else {
    for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
      cVar4 = _checkValidUser(this,local_58);
      if (cVar4 == '\x01') {
        uVar10 = *(undefined4 *)(this + local_58 * 0x18 + 0x78);
        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + local_58 * 0x18 + 0x78))
        ;
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar10,0x195,1,0,0);
      }
    }
    iVar6 = 8;
  }
LAB_085a2124:
  PacketGuard::~PacketGuard(local_88);
  return iVar6;
}
```
