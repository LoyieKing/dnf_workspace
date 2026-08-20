# OnKilledMonster

`_ZN6CParty15OnKilledMonsterEP5CUseri11map_monsterRK15MSG_MONSTER_DIE`

`CParty::OnKilledMonster(CUser*, int, map_monster, MSG_MONSTER_DIE const&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b5a4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b5a4c  _ZN6CParty15OnKilledMonsterEP5CUseri11map_monsterRK15MSG_MONSTER_DIE
#           CParty::OnKilledMonster(CUser*, int, map_monster, MSG_MONSTER_DIE const&)
# range [0x085b5a4c, 0x085b5f8d]
085b5a4c +0x000:  push   %ebp
085b5a4d +0x001:  mov    %esp,%ebp
085b5a4f +0x003:  push   %ebx
085b5a50 +0x004:  sub    $0x44,%esp
085b5a53 +0x007:  call   08484a51 <_Z25IsCollectDungeonStatisticv>  ; IsCollectDungeonStatistic()
085b5a58 +0x00c:  mov    0x8(%ebp),%eax
085b5a5b +0x00f:  add    $0xb24,%eax
085b5a60 +0x014:  mov    %eax,(%esp)
085b5a63 +0x017:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
085b5a68 +0x01c:  xor    $0x1,%eax
085b5a6b +0x01f:  test   %al,%al
085b5a6d +0x021:  je     085b5a84 <+0x38>
085b5a6f +0x023:  mov    0x18(%ebp),%eax
085b5a72 +0x026:  movzbl 0xa22(%eax),%eax
085b5a79 +0x02d:  test   %al,%al
085b5a7b +0x02f:  jne    085b5a84 <+0x38>
085b5a7d +0x031:  mov    $0x1,%eax
085b5a82 +0x036:  jmp    085b5a89 <+0x3d>
085b5a84 +0x038:  mov    $0x0,%eax
085b5a89 +0x03d:  test   %al,%al
085b5a8b +0x03f:  je     085b5b13 <+0xc7>
085b5a91 +0x045:  mov    0x18(%ebp),%eax
085b5a94 +0x048:  mov    0xa1a(%eax),%eax
085b5a9a +0x04e:  mov    %eax,%ecx
085b5a9c +0x050:  mov    0x10(%ebp),%eax
085b5a9f +0x053:  movzwl %ax,%edx
085b5aa2 +0x056:  mov    0x18(%ebp),%eax
085b5aa5 +0x059:  movzwl 0xf(%eax),%eax
085b5aa9 +0x05d:  movzwl %ax,%eax
085b5aac +0x060:  mov    0x8(%ebp),%ebx
085b5aaf +0x063:  add    $0x210,%ebx
085b5ab5 +0x069:  mov    %ecx,0xc(%esp)
085b5ab9 +0x06d:  mov    %edx,0x8(%esp)
085b5abd +0x071:  mov    %eax,0x4(%esp)
085b5ac1 +0x075:  mov    %ebx,(%esp)
085b5ac4 +0x078:  call   085bf4f6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xa54>  ; global constructors keyed to CParty::cMember::cMember()+0xa54
085b5ac9 +0x07d:  cmp    $0x2,%eax
085b5acc +0x080:  setg   %al
085b5acf +0x083:  test   %al,%al
085b5ad1 +0x085:  je     085b5b13 <+0xc7>
085b5ad3 +0x087:  cmpl   $0x0,0xc(%ebp)
085b5ad7 +0x08b:  je     085b5b13 <+0xc7>
085b5ad9 +0x08d:  mov    0xc(%ebp),%eax
085b5adc +0x090:  mov    %eax,(%esp)
085b5adf +0x093:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5ae4 +0x098:  movl   $0x0,0x14(%esp)
085b5aec +0x0a0:  movl   $0x0,0x10(%esp)
085b5af4 +0x0a8:  movl   $0x1,0xc(%esp)
085b5afc +0x0b0:  movl   $0xc9,0x8(%esp)
085b5b04 +0x0b8:  mov    0xc(%ebp),%edx
085b5b07 +0x0bb:  mov    %edx,0x4(%esp)
085b5b0b +0x0bf:  mov    %eax,(%esp)
085b5b0e +0x0c2:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5b13 +0x0c7:  movb   $0x1,-0x21(%ebp)
085b5b17 +0x0cb:  mov    0x8(%ebp),%eax
085b5b1a +0x0ce:  add    $0xb24,%eax
085b5b1f +0x0d3:  mov    %eax,(%esp)
085b5b22 +0x0d6:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b5b27 +0x0db:  mov    %eax,-0x20(%ebp)
085b5b2a +0x0de:  cmpl   $0x3e,-0x20(%ebp)
085b5b2e +0x0e2:  je     085b5b3c <+0xf0>
085b5b30 +0x0e4:  cmpl   $0x3f,-0x20(%ebp)
085b5b34 +0x0e8:  je     085b5b3c <+0xf0>
085b5b36 +0x0ea:  cmpl   $0x40,-0x20(%ebp)
085b5b3a +0x0ee:  jne    085b5b40 <+0xf4>
085b5b3c +0x0f0:  movb   $0x0,-0x21(%ebp)
085b5b40 +0x0f4:  cmpb   $0x0,-0x21(%ebp)
085b5b44 +0x0f8:  je     085b5e38 <+0x3ec>
085b5b4a +0x0fe:  mov    0x18(%ebp),%eax
085b5b4d +0x101:  movzbl 0xa22(%eax),%eax
085b5b54 +0x108:  test   %al,%al
085b5b56 +0x10a:  jne    085b5e38 <+0x3ec>
085b5b5c +0x110:  mov    0x14(%ebp),%eax
085b5b5f +0x113:  movzbl 0x8(%eax),%eax
085b5b63 +0x117:  cmp    $0x3,%al
085b5b65 +0x119:  jg     085b5e38 <+0x3ec>
085b5b6b +0x11f:  mov    0x14(%ebp),%eax
085b5b6e +0x122:  add    $0x38,%eax
085b5b71 +0x125:  mov    %eax,(%esp)
085b5b74 +0x128:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085b5b79 +0x12d:  mov    %eax,%edx
085b5b7b +0x12f:  mov    0x18(%ebp),%eax
085b5b7e +0x132:  mov    0xa1a(%eax),%eax
085b5b84 +0x138:  cmp    %eax,%edx
085b5b86 +0x13a:  seta   %al
085b5b89 +0x13d:  test   %al,%al
085b5b8b +0x13f:  je     085b5e38 <+0x3ec>
085b5b91 +0x145:  cmpl   $0xa,0x10(%ebp)
085b5b95 +0x149:  je     085b5e38 <+0x3ec>
085b5b9b +0x14f:  cmpl   $0xc351,0x10(%ebp)
085b5ba2 +0x156:  je     085b5e38 <+0x3ec>
085b5ba8 +0x15c:  cmpl   $0x40a,0x10(%ebp)
085b5baf +0x163:  je     085b5e38 <+0x3ec>
085b5bb5 +0x169:  movl   $0x0,-0x1c(%ebp)
085b5bbc +0x170:  jmp    085b5e29 <+0x3dd>
085b5bc1 +0x175:  mov    -0x1c(%ebp),%eax
085b5bc4 +0x178:  mov    %eax,0x4(%esp)
085b5bc8 +0x17c:  mov    0x8(%ebp),%eax
085b5bcb +0x17f:  mov    %eax,(%esp)
085b5bce +0x182:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b5bd3 +0x187:  xor    $0x1,%eax
085b5bd6 +0x18a:  test   %al,%al
085b5bd8 +0x18c:  jne    085b5e1b <+0x3cf>
085b5bde +0x192:  mov    -0x1c(%ebp),%eax
085b5be1 +0x195:  mov    %eax,0x4(%esp)
085b5be5 +0x199:  mov    0x8(%ebp),%eax
085b5be8 +0x19c:  mov    %eax,(%esp)
085b5beb +0x19f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b5bf0 +0x1a4:  mov    %eax,-0x18(%ebp)
085b5bf3 +0x1a7:  mov    -0x18(%ebp),%eax
085b5bf6 +0x1aa:  mov    %eax,(%esp)
085b5bf9 +0x1ad:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085b5bfe +0x1b2:  mov    %eax,-0x14(%ebp)
085b5c01 +0x1b5:  mov    0xc(%ebp),%eax
085b5c04 +0x1b8:  mov    %eax,(%esp)
085b5c07 +0x1bb:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085b5c0c +0x1c0:  mov    %eax,-0x10(%ebp)
085b5c0f +0x1c3:  cmpl   $0x0,-0x14(%ebp)
085b5c13 +0x1c7:  je     085b5e1e <+0x3d2>
085b5c19 +0x1cd:  cmpl   $0x0,-0x10(%ebp)
085b5c1d +0x1d1:  je     085b5e21 <+0x3d5>
085b5c23 +0x1d7:  cmpl   $0x0,-0x18(%ebp)
085b5c27 +0x1db:  je     085b5e24 <+0x3d8>
085b5c2d +0x1e1:  mov    -0x14(%ebp),%eax
085b5c30 +0x1e4:  mov    0xcac(%eax),%eax
085b5c36 +0x1ea:  test   %eax,%eax
085b5c38 +0x1ec:  je     085b5c4b <+0x1ff>
085b5c3a +0x1ee:  mov    -0x10(%ebp),%eax
085b5c3d +0x1f1:  mov    0xcac(%eax),%eax
085b5c43 +0x1f7:  test   %eax,%eax
085b5c45 +0x1f9:  jne    085b5cd1 <+0x285>
085b5c4b +0x1ff:  mov    -0x18(%ebp),%eax
085b5c4e +0x202:  cmp    0xc(%ebp),%eax
085b5c51 +0x205:  je     085b5c92 <+0x246>
085b5c53 +0x207:  mov    -0x18(%ebp),%eax
085b5c56 +0x20a:  mov    %eax,(%esp)
085b5c59 +0x20d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5c5e +0x212:  movl   $0x0,0x14(%esp)
085b5c66 +0x21a:  movl   $0x0,0x10(%esp)
085b5c6e +0x222:  movl   $0x1,0xc(%esp)
085b5c76 +0x22a:  movl   $0x71,0x8(%esp)
085b5c7e +0x232:  mov    -0x18(%ebp),%edx
085b5c81 +0x235:  mov    %edx,0x4(%esp)
085b5c85 +0x239:  mov    %eax,(%esp)
085b5c88 +0x23c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5c8d +0x241:  jmp    085b5e25 <+0x3d9>
085b5c92 +0x246:  mov    0xc(%ebp),%eax
085b5c95 +0x249:  mov    %eax,(%esp)
085b5c98 +0x24c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5c9d +0x251:  movl   $0x0,0x14(%esp)
085b5ca5 +0x259:  movl   $0x0,0x10(%esp)
085b5cad +0x261:  movl   $0x1,0xc(%esp)
085b5cb5 +0x269:  movl   $0x70,0x8(%esp)
085b5cbd +0x271:  mov    0xc(%ebp),%edx
085b5cc0 +0x274:  mov    %edx,0x4(%esp)
085b5cc4 +0x278:  mov    %eax,(%esp)
085b5cc7 +0x27b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5ccc +0x280:  jmp    085b5e25 <+0x3d9>
085b5cd1 +0x285:  mov    -0x14(%ebp),%eax
085b5cd4 +0x288:  mov    0xcac(%eax),%eax
085b5cda +0x28e:  mov    %eax,(%esp)
085b5cdd +0x291:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b5ce2 +0x296:  cmp    $0x2afe,%eax
085b5ce7 +0x29b:  je     085b5d01 <+0x2b5>
085b5ce9 +0x29d:  mov    -0x10(%ebp),%eax
085b5cec +0x2a0:  mov    0xcac(%eax),%eax
085b5cf2 +0x2a6:  mov    %eax,(%esp)
085b5cf5 +0x2a9:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b5cfa +0x2ae:  cmp    $0x2afe,%eax
085b5cff +0x2b3:  jne    085b5d08 <+0x2bc>
085b5d01 +0x2b5:  mov    $0x1,%eax
085b5d06 +0x2ba:  jmp    085b5d0d <+0x2c1>
085b5d08 +0x2bc:  mov    $0x0,%eax
085b5d0d +0x2c1:  test   %al,%al
085b5d0f +0x2c3:  je     085b5d9b <+0x34f>
085b5d15 +0x2c9:  mov    -0x18(%ebp),%eax
085b5d18 +0x2cc:  cmp    0xc(%ebp),%eax
085b5d1b +0x2cf:  je     085b5d5c <+0x310>
085b5d1d +0x2d1:  mov    -0x18(%ebp),%eax
085b5d20 +0x2d4:  mov    %eax,(%esp)
085b5d23 +0x2d7:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5d28 +0x2dc:  movl   $0x0,0x14(%esp)
085b5d30 +0x2e4:  movl   $0x2,0x10(%esp)
085b5d38 +0x2ec:  movl   $0x1,0xc(%esp)
085b5d40 +0x2f4:  movl   $0x71,0x8(%esp)
085b5d48 +0x2fc:  mov    -0x18(%ebp),%edx
085b5d4b +0x2ff:  mov    %edx,0x4(%esp)
085b5d4f +0x303:  mov    %eax,(%esp)
085b5d52 +0x306:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5d57 +0x30b:  jmp    085b5e25 <+0x3d9>
085b5d5c +0x310:  mov    0xc(%ebp),%eax
085b5d5f +0x313:  mov    %eax,(%esp)
085b5d62 +0x316:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5d67 +0x31b:  movl   $0x0,0x14(%esp)
085b5d6f +0x323:  movl   $0x2,0x10(%esp)
085b5d77 +0x32b:  movl   $0x1,0xc(%esp)
085b5d7f +0x333:  movl   $0x70,0x8(%esp)
085b5d87 +0x33b:  mov    0xc(%ebp),%edx
085b5d8a +0x33e:  mov    %edx,0x4(%esp)
085b5d8e +0x342:  mov    %eax,(%esp)
085b5d91 +0x345:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5d96 +0x34a:  jmp    085b5e25 <+0x3d9>
085b5d9b +0x34f:  mov    -0x18(%ebp),%eax
085b5d9e +0x352:  cmp    0xc(%ebp),%eax
085b5da1 +0x355:  je     085b5ddf <+0x393>
085b5da3 +0x357:  mov    -0x18(%ebp),%eax
085b5da6 +0x35a:  mov    %eax,(%esp)
085b5da9 +0x35d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5dae +0x362:  movl   $0x0,0x14(%esp)
085b5db6 +0x36a:  movl   $0x0,0x10(%esp)
085b5dbe +0x372:  movl   $0x1,0xc(%esp)
085b5dc6 +0x37a:  movl   $0x71,0x8(%esp)
085b5dce +0x382:  mov    -0x18(%ebp),%edx
085b5dd1 +0x385:  mov    %edx,0x4(%esp)
085b5dd5 +0x389:  mov    %eax,(%esp)
085b5dd8 +0x38c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5ddd +0x391:  jmp    085b5e25 <+0x3d9>
085b5ddf +0x393:  mov    0xc(%ebp),%eax
085b5de2 +0x396:  mov    %eax,(%esp)
085b5de5 +0x399:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5dea +0x39e:  movl   $0x0,0x14(%esp)
085b5df2 +0x3a6:  movl   $0x0,0x10(%esp)
085b5dfa +0x3ae:  movl   $0x1,0xc(%esp)
085b5e02 +0x3b6:  movl   $0x70,0x8(%esp)
085b5e0a +0x3be:  mov    0xc(%ebp),%edx
085b5e0d +0x3c1:  mov    %edx,0x4(%esp)
085b5e11 +0x3c5:  mov    %eax,(%esp)
085b5e14 +0x3c8:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5e19 +0x3cd:  jmp    085b5e25 <+0x3d9>
085b5e1b +0x3cf:  nop
085b5e1c +0x3d0:  jmp    085b5e25 <+0x3d9>
085b5e1e +0x3d2:  nop
085b5e1f +0x3d3:  jmp    085b5e25 <+0x3d9>
085b5e21 +0x3d5:  nop
085b5e22 +0x3d6:  jmp    085b5e25 <+0x3d9>
085b5e24 +0x3d8:  nop
085b5e25 +0x3d9:  addl   $0x1,-0x1c(%ebp)
085b5e29 +0x3dd:  cmpl   $0x3,-0x1c(%ebp)
085b5e2d +0x3e1:  setle  %al
085b5e30 +0x3e4:  test   %al,%al
085b5e32 +0x3e6:  jne    085b5bc1 <+0x175>
085b5e38 +0x3ec:  mov    0x18(%ebp),%eax
085b5e3b +0x3ef:  movzbl 0xa22(%eax),%eax
085b5e42 +0x3f6:  test   %al,%al
085b5e44 +0x3f8:  jne    085b5e77 <+0x42b>
085b5e46 +0x3fa:  mov    0x14(%ebp),%eax
085b5e49 +0x3fd:  movzbl 0x8(%eax),%eax
085b5e4d +0x401:  cmp    $0x3,%al
085b5e4f +0x403:  jg     085b5e77 <+0x42b>
085b5e51 +0x405:  mov    0x8(%ebp),%eax
085b5e54 +0x408:  add    $0xb24,%eax
085b5e59 +0x40d:  mov    %eax,(%esp)
085b5e5c +0x410:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
085b5e61 +0x415:  add    $0x4c,%eax
085b5e64 +0x418:  mov    %eax,(%esp)
085b5e67 +0x41b:  call   0830e78c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x371>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x371
085b5e6c +0x420:  test   %eax,%eax
085b5e6e +0x422:  jne    085b5e77 <+0x42b>
085b5e70 +0x424:  mov    $0x1,%eax
085b5e75 +0x429:  jmp    085b5e7c <+0x430>
085b5e77 +0x42b:  mov    $0x0,%eax
085b5e7c +0x430:  test   %al,%al
085b5e7e +0x432:  je     085b5f56 <+0x50a>
085b5e84 +0x438:  movl   $0x0,-0xc(%ebp)
085b5e8b +0x43f:  mov    0x14(%ebp),%eax
085b5e8e +0x442:  add    $0x38,%eax
085b5e91 +0x445:  mov    %eax,(%esp)
085b5e94 +0x448:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085b5e99 +0x44d:  lea    0x0(,%eax,4),%edx
085b5ea0 +0x454:  mov    0x18(%ebp),%eax
085b5ea3 +0x457:  mov    0xa1a(%eax),%eax
085b5ea9 +0x45d:  cmp    %eax,%edx
085b5eab +0x45f:  setb   %al
085b5eae +0x462:  test   %al,%al
085b5eb0 +0x464:  je     085b5ebb <+0x46f>
085b5eb2 +0x466:  movl   $0x3,-0xc(%ebp)
085b5eb9 +0x46d:  jmp    085b5f17 <+0x4cb>
085b5ebb +0x46f:  mov    0x14(%ebp),%eax
085b5ebe +0x472:  add    $0x38,%eax
085b5ec1 +0x475:  mov    %eax,(%esp)
085b5ec4 +0x478:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085b5ec9 +0x47d:  mov    %eax,%edx
085b5ecb +0x47f:  mov    %edx,%eax
085b5ecd +0x481:  add    %eax,%eax
085b5ecf +0x483:  lea    (%eax,%edx,1),%edx
085b5ed2 +0x486:  mov    0x18(%ebp),%eax
085b5ed5 +0x489:  mov    0xa1a(%eax),%eax
085b5edb +0x48f:  cmp    %eax,%edx
085b5edd +0x491:  setb   %al
085b5ee0 +0x494:  test   %al,%al
085b5ee2 +0x496:  je     085b5eed <+0x4a1>
085b5ee4 +0x498:  movl   $0x2,-0xc(%ebp)
085b5eeb +0x49f:  jmp    085b5f17 <+0x4cb>
085b5eed +0x4a1:  mov    0x14(%ebp),%eax
085b5ef0 +0x4a4:  add    $0x38,%eax
085b5ef3 +0x4a7:  mov    %eax,(%esp)
085b5ef6 +0x4aa:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085b5efb +0x4af:  lea    (%eax,%eax,1),%edx
085b5efe +0x4b2:  mov    0x18(%ebp),%eax
085b5f01 +0x4b5:  mov    0xa1a(%eax),%eax
085b5f07 +0x4bb:  cmp    %eax,%edx
085b5f09 +0x4bd:  setb   %al
085b5f0c +0x4c0:  test   %al,%al
085b5f0e +0x4c2:  je     085b5f17 <+0x4cb>
085b5f10 +0x4c4:  movl   $0x1,-0xc(%ebp)
085b5f17 +0x4cb:  cmpl   $0x0,-0xc(%ebp)
085b5f1b +0x4cf:  jle    085b5f56 <+0x50a>
085b5f1d +0x4d1:  mov    -0xc(%ebp),%ebx
085b5f20 +0x4d4:  mov    0xc(%ebp),%eax
085b5f23 +0x4d7:  mov    %eax,(%esp)
085b5f26 +0x4da:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b5f2b +0x4df:  movl   $0x0,0x14(%esp)
085b5f33 +0x4e7:  movl   $0x0,0x10(%esp)
085b5f3b +0x4ef:  mov    %ebx,0xc(%esp)
085b5f3f +0x4f3:  movl   $0x86,0x8(%esp)
085b5f47 +0x4fb:  mov    0xc(%ebp),%edx
085b5f4a +0x4fe:  mov    %edx,0x4(%esp)
085b5f4e +0x502:  mov    %eax,(%esp)
085b5f51 +0x505:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b5f56 +0x50a:  mov    0x8(%ebp),%eax
085b5f59 +0x50d:  add    $0xb24,%eax
085b5f5e +0x512:  mov    %eax,(%esp)
085b5f61 +0x515:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085b5f66 +0x51a:  test   %al,%al
085b5f68 +0x51c:  je     085b5f82 <+0x536>
085b5f6a +0x51e:  mov    0x8(%ebp),%eax
085b5f6d +0x521:  add    $0xb24,%eax
085b5f72 +0x526:  movl   $0x1,0x4(%esp)
085b5f7a +0x52e:  mov    %eax,(%esp)
085b5f7d +0x531:  call   0830dd2c <_ZN13CBattle_Field10onClearMapEb>  ; CBattle_Field::onClearMap(bool)
085b5f82 +0x536:  mov    $0x1,%eax
085b5f87 +0x53b:  add    $0x44,%esp
085b5f8a +0x53e:  pop    %ebx
085b5f8b +0x53f:  pop    %ebp
085b5f8c +0x540:  ret
085b5f8d +0x541:  nop
```

## 反编译 C

```c
// CParty::OnKilledMonster @ 0x85b5a4c

/* CParty::OnKilledMonster(CUser*, int, map_monster, MSG_MONSTER_DIE const&) */

undefined4 __thiscall
CParty::OnKilledMonster(CParty *this,CUser *param_1,int param_2,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  uint uVar5;
  CUser *this_00;
  int iVar6;
  int local_20;
  int local_10;
  
  IsCollectDungeonStatistic();
  cVar2 = CBattle_Field::IsClearDungeon((CBattle_Field *)(this + 0xb24));
  if ((cVar2 == '\x01') || (*(char *)(param_5 + 0xa22) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar1) &&
      (iVar3 = CTraceMobDieHack::addMonsterDamage
                         ((CTraceMobDieHack *)(this + 0x210),(uint)*(ushort *)(param_5 + 0xf),
                          (ushort)param_2,*(int *)(param_5 + 0xa1a)), 2 < iVar3)) &&
     (param_1 != (CUser *)0x0)) {
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0xc9,1,0,0);
  }
  bVar1 = true;
  iVar3 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  if (((iVar3 == 0x3e) || (iVar3 == 0x3f)) || (iVar3 == 0x40)) {
    bVar1 = false;
  }
  if (((bVar1) && (*(char *)(param_5 + 0xa22) == '\0')) &&
     ((*(char *)(param_4 + 8) < '\x04' &&
      ((((uVar5 = ActiveStaticInfo::getHpMax((ActiveStaticInfo *)(param_4 + 0x38)),
         *(uint *)(param_5 + 0xa1a) < uVar5 && (param_2 != 10)) && (param_2 != 0xc351)) &&
       (param_2 != 0x40a)))))) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar2 = checkValidUser(this,local_20);
      if (cVar2 == '\x01') {
        this_00 = (CUser *)get_user(this,local_20);
        iVar3 = CUser::GetParty(this_00);
        iVar6 = CUser::GetParty(param_1);
        if (((iVar3 != 0) && (iVar6 != 0)) && (this_00 != (CUser *)0x0)) {
          if ((*(int *)(iVar3 + 0xcac) == 0) || (*(int *)(iVar6 + 0xcac) == 0)) {
            if (this_00 == param_1) {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x70,1,0,0);
            }
            else {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,this_00,0x71,1,0,0);
            }
          }
          else {
            iVar3 = CDungeon::get_index(*(CDungeon **)(iVar3 + 0xcac));
            if ((iVar3 == 0x2afe) ||
               (iVar3 = CDungeon::get_index(*(CDungeon **)(iVar6 + 0xcac)), iVar3 == 0x2afe)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              if (this_00 == param_1) {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x70,1,2,0);
              }
              else {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,this_00,0x71,1,2,0);
              }
            }
            else if (this_00 == param_1) {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x70,1,0,0);
            }
            else {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,this_00,0x71,1,0,0);
            }
          }
        }
      }
    }
  }
  if ((*(char *)(param_5 + 0xa22) == '\0') && (*(char *)(param_4 + 8) < '\x04')) {
    iVar3 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(this + 0xb24));
    iVar3 = stMapMonsterKillChecker_t::getUseSkillMaterialTime
                      ((stMapMonsterKillChecker_t *)(iVar3 + 0x4c));
    if (iVar3 == 0) {
      bVar1 = true;
      goto LAB_085b5e7c;
    }
  }
  bVar1 = false;
LAB_085b5e7c:
  if (bVar1) {
    local_10 = 0;
    iVar3 = ActiveStaticInfo::getHpMax((ActiveStaticInfo *)(param_4 + 0x38));
    if ((uint)(iVar3 * 4) < *(uint *)(param_5 + 0xa1a)) {
      local_10 = 3;
    }
    else {
      iVar3 = ActiveStaticInfo::getHpMax((ActiveStaticInfo *)(param_4 + 0x38));
      if ((uint)(iVar3 * 3) < *(uint *)(param_5 + 0xa1a)) {
        local_10 = 2;
      }
      else {
        iVar3 = ActiveStaticInfo::getHpMax((ActiveStaticInfo *)(param_4 + 0x38));
        if ((uint)(iVar3 * 2) < *(uint *)(param_5 + 0xa1a)) {
          local_10 = 1;
        }
      }
    }
    if (local_10 != 0) {
      pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x86,local_10,0,0);
    }
  }
  cVar2 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
  if (cVar2 != '\0') {
    CBattle_Field::onClearMap((CBattle_Field *)(this + 0xb24),true);
  }
  return 1;
}
```
