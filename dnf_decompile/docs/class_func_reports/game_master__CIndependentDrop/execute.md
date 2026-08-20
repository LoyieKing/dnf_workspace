# execute

`_ZN11game_master16CIndependentDrop7executeEv`

`game_master::CIndependentDrop::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDrop` | `0x084b0b4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0b4e  _ZN11game_master16CIndependentDrop7executeEv
#           game_master::CIndependentDrop::execute()
# range [0x084b0b4e, 0x084b14b7]
084b0b4e +0x000:  push   %ebp
084b0b4f +0x001:  mov    %esp,%ebp
084b0b51 +0x003:  push   %edi
084b0b52 +0x004:  push   %esi
084b0b53 +0x005:  push   %ebx
084b0b54 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xd710,%esp
084b0b5a +0x00c:  mov    0x8(%ebp),%eax
084b0b5d +0x00f:  mov    %eax,(%esp)
084b0b60 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0b65 +0x017:  mov    %eax,-0x40(%ebp)
084b0b68 +0x01a:  cmpl   $0x0,-0x40(%ebp)
084b0b6c +0x01e:  je     084b14a6 <+0x958>
084b0b72 +0x024:  mov    -0x40(%ebp),%eax
084b0b75 +0x027:  mov    %eax,(%esp)
084b0b78 +0x02a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084b0b7d +0x02f:  mov    %eax,-0x3c(%ebp)
084b0b80 +0x032:  cmpl   $0x0,-0x3c(%ebp)
084b0b84 +0x036:  je     084b14a9 <+0x95b>
084b0b8a +0x03c:  mov    -0x3c(%ebp),%eax
084b0b8d +0x03f:  mov    %eax,(%esp)
084b0b90 +0x042:  call   082a5a14 <_GLOBAL__I__ZN4CLog5this_E+0x1e3b>  ; global constructors keyed to CLog::this_+0x1e3b
084b0b95 +0x047:  movzwl %ax,%ebx
084b0b98 +0x04a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0b9d +0x04f:  mov    %ebx,0x4(%esp)
084b0ba1 +0x053:  mov    %eax,(%esp)
084b0ba4 +0x056:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
084b0ba9 +0x05b:  mov    %eax,-0x38(%ebp)
084b0bac +0x05e:  cmpl   $0x0,-0x38(%ebp)
084b0bb0 +0x062:  je     084b14ac <+0x95e>
084b0bb6 +0x068:  lea    -0x508(%ebp),%ebx
084b0bbc +0x06e:  mov    $0x0,%eax
084b0bc1 +0x073:  mov    $0x100,%edx
084b0bc6 +0x078:  mov    %ebx,%edi
084b0bc8 +0x07a:  mov    %edx,%ecx
084b0bca +0x07c:  rep stos %eax,%es:(%edi)
084b0bcc +0x07e:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%eax
084b0bd2 +0x084:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084b0bd7 +0x089:  mov    %edx,0x8(%esp)
084b0bdb +0x08d:  movl   $0x0,0x4(%esp)
084b0be3 +0x095:  mov    %eax,(%esp)
084b0be6 +0x098:  call   0807dcc0 <_init+0x5b8>
084b0beb +0x09d:  lea    -0xc6(%ebp),%eax
084b0bf1 +0x0a3:  mov    $0x1e,%ebx
084b0bf6 +0x0a8:  mov    $0x0,%edx
084b0bfb +0x0ad:  mov    %eax,%ecx
084b0bfd +0x0af:  and    $0x2,%ecx
084b0c00 +0x0b2:  test   %ecx,%ecx
084b0c02 +0x0b4:  je     084b0c0d <+0xbf>
084b0c04 +0x0b6:  mov    %dx,(%eax)
084b0c07 +0x0b9:  add    $0x2,%eax
084b0c0a +0x0bc:  sub    $0x2,%ebx
084b0c0d +0x0bf:  mov    %ebx,%esi
084b0c0f +0x0c1:  and    $0xfffffffc,%esi
084b0c12 +0x0c4:  mov    $0x0,%ecx
084b0c17 +0x0c9:  mov    %edx,(%eax,%ecx,1)
084b0c1a +0x0cc:  add    $0x4,%ecx
084b0c1d +0x0cf:  cmp    %esi,%ecx
084b0c1f +0x0d1:  jb     084b0c17 <+0xc9>
084b0c21 +0x0d3:  add    %ecx,%eax
084b0c23 +0x0d5:  mov    %ebx,%ecx
084b0c25 +0x0d7:  and    $0x2,%ecx
084b0c28 +0x0da:  test   %ecx,%ecx
084b0c2a +0x0dc:  je     084b0c32 <+0xe4>
084b0c2c +0x0de:  mov    %dx,(%eax)
084b0c2f +0x0e1:  add    $0x2,%eax
084b0c32 +0x0e4:  mov    %ebx,%ecx
084b0c34 +0x0e6:  and    $0x1,%ecx
084b0c37 +0x0e9:  test   %ecx,%ecx
084b0c39 +0x0eb:  je     084b0c40 <+0xf2>
084b0c3b +0x0ed:  mov    %dl,(%eax)
084b0c3d +0x0ef:  add    $0x1,%eax
084b0c40 +0x0f2:  lea    -0x908(%ebp),%ebx
084b0c46 +0x0f8:  mov    $0x0,%eax
084b0c4b +0x0fd:  mov    $0x100,%edx
084b0c50 +0x102:  mov    %ebx,%edi
084b0c52 +0x104:  mov    %edx,%ecx
084b0c54 +0x106:  rep stos %eax,%es:(%edi)
084b0c56 +0x108:  mov    0x8(%ebp),%eax
084b0c59 +0x10b:  add    $0xc,%eax
084b0c5c +0x10e:  mov    %eax,(%esp)
084b0c5f +0x111:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
084b0c64 +0x116:  mov    0x8(%ebp),%eax
084b0c67 +0x119:  add    $0x24,%eax
084b0c6a +0x11c:  mov    %eax,(%esp)
084b0c6d +0x11f:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
084b0c72 +0x124:  mov    0x8(%ebp),%eax
084b0c75 +0x127:  movzbl 0x8(%eax),%eax
084b0c79 +0x12b:  xor    $0x1,%eax
084b0c7c +0x12e:  test   %al,%al
084b0c7e +0x130:  je     084b0db2 <+0x264>
084b0c84 +0x136:  mov    -0x3c(%ebp),%eax
084b0c87 +0x139:  add    $0xb24,%eax
084b0c8c +0x13e:  mov    %eax,(%esp)
084b0c8f +0x141:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
084b0c94 +0x146:  mov    %eax,-0x30(%ebp)
084b0c97 +0x149:  mov    -0x30(%ebp),%eax
084b0c9a +0x14c:  lea    0xc(%eax),%edx
084b0c9d +0x14f:  lea    -0xd4(%ebp),%eax
084b0ca3 +0x155:  mov    %edx,0x4(%esp)
084b0ca7 +0x159:  mov    %eax,(%esp)
084b0caa +0x15c:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
084b0caf +0x161:  sub    $0x4,%esp
084b0cb2 +0x164:  jmp    084b0d72 <+0x224>
084b0cb7 +0x169:  lea    -0xd4(%ebp),%eax
084b0cbd +0x16f:  mov    %eax,(%esp)
084b0cc0 +0x172:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084b0cc5 +0x177:  movzbl 0xc(%eax),%eax
084b0cc9 +0x17b:  cmp    $0x3,%al
084b0ccb +0x17d:  setle  %al
084b0cce +0x180:  test   %al,%al
084b0cd0 +0x182:  je     084b0d04 <+0x1b6>
084b0cd2 +0x184:  lea    -0xd4(%ebp),%eax
084b0cd8 +0x18a:  mov    %eax,(%esp)
084b0cdb +0x18d:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084b0ce0 +0x192:  lea    0x10(%eax),%ecx
084b0ce3 +0x195:  mov    0x8(%ebp),%eax
084b0ce6 +0x198:  lea    0xc(%eax),%edx
084b0ce9 +0x19b:  lea    -0xa4(%ebp),%eax
084b0cef +0x1a1:  mov    %ecx,0x8(%esp)
084b0cf3 +0x1a5:  mov    %edx,0x4(%esp)
084b0cf7 +0x1a9:  mov    %eax,(%esp)
084b0cfa +0x1ac:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
084b0cff +0x1b1:  sub    $0x4,%esp
084b0d02 +0x1b4:  jmp    084b0d4f <+0x201>
084b0d04 +0x1b6:  lea    -0xd4(%ebp),%eax
084b0d0a +0x1bc:  mov    %eax,(%esp)
084b0d0d +0x1bf:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084b0d12 +0x1c4:  movzbl 0xc(%eax),%eax
084b0d16 +0x1c8:  cmp    $0x8,%al
084b0d18 +0x1ca:  setle  %al
084b0d1b +0x1cd:  test   %al,%al
084b0d1d +0x1cf:  je     084b0d4f <+0x201>
084b0d1f +0x1d1:  lea    -0xd4(%ebp),%eax
084b0d25 +0x1d7:  mov    %eax,(%esp)
084b0d28 +0x1da:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084b0d2d +0x1df:  lea    0x10(%eax),%ecx
084b0d30 +0x1e2:  mov    0x8(%ebp),%eax
084b0d33 +0x1e5:  lea    0x24(%eax),%edx
084b0d36 +0x1e8:  lea    -0x9c(%ebp),%eax
084b0d3c +0x1ee:  mov    %ecx,0x8(%esp)
084b0d40 +0x1f2:  mov    %edx,0x4(%esp)
084b0d44 +0x1f6:  mov    %eax,(%esp)
084b0d47 +0x1f9:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
084b0d4c +0x1fe:  sub    $0x4,%esp
084b0d4f +0x201:  lea    -0x94(%ebp),%eax
084b0d55 +0x207:  movl   $0x0,0x8(%esp)
084b0d5d +0x20f:  lea    -0xd4(%ebp),%edx
084b0d63 +0x215:  mov    %edx,0x4(%esp)
084b0d67 +0x219:  mov    %eax,(%esp)
084b0d6a +0x21c:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
084b0d6f +0x221:  sub    $0x4,%esp
084b0d72 +0x224:  mov    -0x30(%ebp),%eax
084b0d75 +0x227:  lea    0xc(%eax),%edx
084b0d78 +0x22a:  lea    -0xa8(%ebp),%eax
084b0d7e +0x230:  mov    %edx,0x4(%esp)
084b0d82 +0x234:  mov    %eax,(%esp)
084b0d85 +0x237:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
084b0d8a +0x23c:  sub    $0x4,%esp
084b0d8d +0x23f:  lea    -0xa8(%ebp),%eax
084b0d93 +0x245:  mov    %eax,0x4(%esp)
084b0d97 +0x249:  lea    -0xd4(%ebp),%eax
084b0d9d +0x24f:  mov    %eax,(%esp)
084b0da0 +0x252:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
084b0da5 +0x257:  test   %al,%al
084b0da7 +0x259:  jne    084b0cb7 <+0x169>
084b0dad +0x25f:  jmp    084b1090 <+0x542>
084b0db2 +0x264:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0db7 +0x269:  mov    0x4(%eax),%eax
084b0dba +0x26c:  mov    %eax,(%esp)
084b0dbd +0x26f:  call   084b414e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x201>  ; global constructors keyed to game_master::CMacro::Reset()+0x201
084b0dc2 +0x274:  mov    %eax,-0x2c(%ebp)
084b0dc5 +0x277:  lea    -0xdc(%ebp),%eax
084b0dcb +0x27d:  mov    -0x2c(%ebp),%edx
084b0dce +0x280:  mov    %edx,0x4(%esp)
084b0dd2 +0x284:  mov    %eax,(%esp)
084b0dd5 +0x287:  call   0838a30c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dac
084b0dda +0x28c:  sub    $0x4,%esp
084b0ddd +0x28f:  jmp    084b1058 <+0x50a>
084b0de2 +0x294:  lea    -0xdc(%ebp),%eax
084b0de8 +0x29a:  mov    %eax,(%esp)
084b0deb +0x29d:  call   0838a3a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e42
084b0df0 +0x2a2:  mov    0x4(%eax),%eax
084b0df3 +0x2a5:  mov    %eax,(%esp)
084b0df6 +0x2a8:  call   08373f08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xded4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xded4
084b0dfb +0x2ad:  mov    %eax,-0x28(%ebp)
084b0dfe +0x2b0:  mov    -0x38(%ebp),%eax
084b0e01 +0x2b3:  mov    %eax,(%esp)
084b0e04 +0x2b6:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
084b0e09 +0x2bb:  mov    %eax,-0x88(%ebp)
084b0e0f +0x2c1:  lea    -0x84(%ebp),%eax
084b0e15 +0x2c7:  mov    -0x28(%ebp),%edx
084b0e18 +0x2ca:  mov    %edx,0x4(%esp)
084b0e1c +0x2ce:  mov    %eax,(%esp)
084b0e1f +0x2d1:  call   0823899a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe044>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe044
084b0e24 +0x2d6:  sub    $0x4,%esp
084b0e27 +0x2d9:  lea    -0x80(%ebp),%eax
084b0e2a +0x2dc:  mov    -0x28(%ebp),%edx
084b0e2d +0x2df:  mov    %edx,0x4(%esp)
084b0e31 +0x2e3:  mov    %eax,(%esp)
084b0e34 +0x2e6:  call   08238974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe01e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe01e
084b0e39 +0x2eb:  sub    $0x4,%esp
084b0e3c +0x2ee:  lea    -0xe0(%ebp),%eax
084b0e42 +0x2f4:  lea    -0x88(%ebp),%edx
084b0e48 +0x2fa:  mov    %edx,0xc(%esp)
084b0e4c +0x2fe:  mov    -0x84(%ebp),%edx
084b0e52 +0x304:  mov    %edx,0x8(%esp)
084b0e56 +0x308:  mov    -0x80(%ebp),%edx
084b0e59 +0x30b:  mov    %edx,0x4(%esp)
084b0e5d +0x30f:  mov    %eax,(%esp)
084b0e60 +0x312:  call   084b4b09 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xbbc>  ; global constructors keyed to game_master::CMacro::Reset()+0xbbc
084b0e65 +0x317:  sub    $0x4,%esp
084b0e68 +0x31a:  lea    -0x7c(%ebp),%eax
084b0e6b +0x31d:  mov    -0x28(%ebp),%edx
084b0e6e +0x320:  mov    %edx,0x4(%esp)
084b0e72 +0x324:  mov    %eax,(%esp)
084b0e75 +0x327:  call   0823899a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe044>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe044
084b0e7a +0x32c:  sub    $0x4,%esp
084b0e7d +0x32f:  lea    -0x7c(%ebp),%eax
084b0e80 +0x332:  mov    %eax,0x4(%esp)
084b0e84 +0x336:  lea    -0xe0(%ebp),%eax
084b0e8a +0x33c:  mov    %eax,(%esp)
084b0e8d +0x33f:  call   0823df8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x910c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x910c
084b0e92 +0x344:  test   %al,%al
084b0e94 +0x346:  je     084b1038 <+0x4ea>
084b0e9a +0x34c:  lea    -0xdc(%ebp),%eax
084b0ea0 +0x352:  mov    %eax,(%esp)
084b0ea3 +0x355:  call   0838a3a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e42
084b0ea8 +0x35a:  mov    0x4(%eax),%edx
084b0eab +0x35d:  lea    -0xe8(%ebp),%eax
084b0eb1 +0x363:  mov    %edx,0x4(%esp)
084b0eb5 +0x367:  mov    %eax,(%esp)
084b0eb8 +0x36a:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
084b0ebd +0x36f:  sub    $0x4,%esp
084b0ec0 +0x372:  lea    -0xec(%ebp),%eax
084b0ec6 +0x378:  lea    -0xe8(%ebp),%edx
084b0ecc +0x37e:  mov    %edx,0x4(%esp)
084b0ed0 +0x382:  mov    %eax,(%esp)
084b0ed3 +0x385:  call   0815281c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2151>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2151
084b0ed8 +0x38a:  sub    $0x4,%esp
084b0edb +0x38d:  jmp    084b0f29 <+0x3db>
084b0edd +0x38f:  lea    -0xec(%ebp),%eax
084b0ee3 +0x395:  mov    %eax,(%esp)
084b0ee6 +0x398:  call   08311756 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x333b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x333b
084b0eeb +0x39d:  mov    %eax,%edx
084b0eed +0x39f:  mov    0x8(%ebp),%eax
084b0ef0 +0x3a2:  lea    0xc(%eax),%ecx
084b0ef3 +0x3a5:  lea    -0x74(%ebp),%eax
084b0ef6 +0x3a8:  mov    %edx,0x8(%esp)
084b0efa +0x3ac:  mov    %ecx,0x4(%esp)
084b0efe +0x3b0:  mov    %eax,(%esp)
084b0f01 +0x3b3:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
084b0f06 +0x3b8:  sub    $0x4,%esp
084b0f09 +0x3bb:  lea    -0x6c(%ebp),%eax
084b0f0c +0x3be:  movl   $0x0,0x8(%esp)
084b0f14 +0x3c6:  lea    -0xec(%ebp),%edx
084b0f1a +0x3cc:  mov    %edx,0x4(%esp)
084b0f1e +0x3d0:  mov    %eax,(%esp)
084b0f21 +0x3d3:  call   08311764 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3349>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3349
084b0f26 +0x3d8:  sub    $0x4,%esp
084b0f29 +0x3db:  lea    -0x78(%ebp),%eax
084b0f2c +0x3de:  lea    -0xe8(%ebp),%edx
084b0f32 +0x3e4:  mov    %edx,0x4(%esp)
084b0f36 +0x3e8:  mov    %eax,(%esp)
084b0f39 +0x3eb:  call   0813ba0c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7613>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7613
084b0f3e +0x3f0:  sub    $0x4,%esp
084b0f41 +0x3f3:  lea    -0x78(%ebp),%eax
084b0f44 +0x3f6:  mov    %eax,0x4(%esp)
084b0f48 +0x3fa:  lea    -0xec(%ebp),%eax
084b0f4e +0x400:  mov    %eax,(%esp)
084b0f51 +0x403:  call   08311742 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3327>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3327
084b0f56 +0x408:  test   %al,%al
084b0f58 +0x40a:  jne    084b0edd <+0x38f>
084b0f5a +0x40c:  lea    -0xdc(%ebp),%eax
084b0f60 +0x412:  mov    %eax,(%esp)
084b0f63 +0x415:  call   0838a3a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e42
084b0f68 +0x41a:  mov    0x4(%eax),%eax
084b0f6b +0x41d:  mov    %eax,(%esp)
084b0f6e +0x420:  call   081508fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x231>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x231
084b0f73 +0x425:  mov    %eax,-0x24(%ebp)
084b0f76 +0x428:  lea    -0xf0(%ebp),%eax
084b0f7c +0x42e:  mov    -0x24(%ebp),%edx
084b0f7f +0x431:  mov    %edx,0x4(%esp)
084b0f83 +0x435:  mov    %eax,(%esp)
084b0f86 +0x438:  call   08152722 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2057>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2057
084b0f8b +0x43d:  sub    $0x4,%esp
084b0f8e +0x440:  jmp    084b0fdc <+0x48e>
084b0f90 +0x442:  lea    -0xf0(%ebp),%eax
084b0f96 +0x448:  mov    %eax,(%esp)
084b0f99 +0x44b:  call   084b4b5e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc11>  ; global constructors keyed to game_master::CMacro::Reset()+0xc11
084b0f9e +0x450:  mov    %eax,%edx
084b0fa0 +0x452:  mov    0x8(%ebp),%eax
084b0fa3 +0x455:  lea    0x24(%eax),%ecx
084b0fa6 +0x458:  lea    -0x64(%ebp),%eax
084b0fa9 +0x45b:  mov    %edx,0x8(%esp)
084b0fad +0x45f:  mov    %ecx,0x4(%esp)
084b0fb1 +0x463:  mov    %eax,(%esp)
084b0fb4 +0x466:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
084b0fb9 +0x46b:  sub    $0x4,%esp
084b0fbc +0x46e:  lea    -0x5c(%ebp),%eax
084b0fbf +0x471:  movl   $0x0,0x8(%esp)
084b0fc7 +0x479:  lea    -0xf0(%ebp),%edx
084b0fcd +0x47f:  mov    %edx,0x4(%esp)
084b0fd1 +0x483:  mov    %eax,(%esp)
084b0fd4 +0x486:  call   084b4b68 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc1b>  ; global constructors keyed to game_master::CMacro::Reset()+0xc1b
084b0fd9 +0x48b:  sub    $0x4,%esp
084b0fdc +0x48e:  lea    -0x68(%ebp),%eax
084b0fdf +0x491:  mov    -0x24(%ebp),%edx
084b0fe2 +0x494:  mov    %edx,0x4(%esp)
084b0fe6 +0x498:  mov    %eax,(%esp)
084b0fe9 +0x49b:  call   0815274e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2083>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2083
084b0fee +0x4a0:  sub    $0x4,%esp
084b0ff1 +0x4a3:  lea    -0x68(%ebp),%eax
084b0ff4 +0x4a6:  mov    %eax,0x4(%esp)
084b0ff8 +0x4aa:  lea    -0xf0(%ebp),%eax
084b0ffe +0x4b0:  mov    %eax,(%esp)
084b1001 +0x4b3:  call   0815277a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20af
084b1006 +0x4b8:  test   %al,%al
084b1008 +0x4ba:  jne    084b0f90 <+0x442>
084b100a +0x4bc:  jmp    084b102a <+0x4dc>
084b100c +0x4be:  mov    %edx,%ebx
084b100e +0x4c0:  mov    %eax,%esi
084b1010 +0x4c2:  lea    -0xe8(%ebp),%eax
084b1016 +0x4c8:  mov    %eax,(%esp)
084b1019 +0x4cb:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
084b101e +0x4d0:  mov    %esi,%eax
084b1020 +0x4d2:  mov    %ebx,%edx
084b1022 +0x4d4:  mov    %eax,(%esp)
084b1025 +0x4d7:  call   08ae3750 <_Unwind_Resume>
084b102a +0x4dc:  lea    -0xe8(%ebp),%eax
084b1030 +0x4e2:  mov    %eax,(%esp)
084b1033 +0x4e5:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
084b1038 +0x4ea:  lea    -0x58(%ebp),%eax
084b103b +0x4ed:  movl   $0x0,0x8(%esp)
084b1043 +0x4f5:  lea    -0xdc(%ebp),%edx
084b1049 +0x4fb:  mov    %edx,0x4(%esp)
084b104d +0x4ff:  mov    %eax,(%esp)
084b1050 +0x502:  call   0838a332 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dd2
084b1055 +0x507:  sub    $0x4,%esp
084b1058 +0x50a:  lea    -0x90(%ebp),%eax
084b105e +0x510:  mov    -0x2c(%ebp),%edx
084b1061 +0x513:  mov    %edx,0x4(%esp)
084b1065 +0x517:  mov    %eax,(%esp)
084b1068 +0x51a:  call   0838a368 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e08
084b106d +0x51f:  sub    $0x4,%esp
084b1070 +0x522:  lea    -0x90(%ebp),%eax
084b1076 +0x528:  mov    %eax,0x4(%esp)
084b107a +0x52c:  lea    -0xdc(%ebp),%eax
084b1080 +0x532:  mov    %eax,(%esp)
084b1083 +0x535:  call   083945aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2404a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2404a
084b1088 +0x53a:  test   %al,%al
084b108a +0x53c:  jne    084b0de2 <+0x294>
084b1090 +0x542:  movl   $0x0,-0x34(%ebp)
084b1097 +0x549:  mov    0x8(%ebp),%eax
084b109a +0x54c:  lea    0xc(%eax),%edx
084b109d +0x54f:  lea    -0xcc(%ebp),%eax
084b10a3 +0x555:  mov    %edx,0x4(%esp)
084b10a7 +0x559:  mov    %eax,(%esp)
084b10aa +0x55c:  call   080e6166 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x29c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x29c
084b10af +0x561:  sub    $0x4,%esp
084b10b2 +0x564:  jmp    084b11f8 <+0x6aa>
084b10b7 +0x569:  lea    -0xcc(%ebp),%eax
084b10bd +0x56f:  mov    %eax,(%esp)
084b10c0 +0x572:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
084b10c5 +0x577:  mov    (%eax),%ebx
084b10c7 +0x579:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b10cc +0x57e:  mov    %ebx,0x4(%esp)
084b10d0 +0x582:  mov    %eax,(%esp)
084b10d3 +0x585:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
084b10d8 +0x58a:  mov    %eax,-0x20(%ebp)
084b10db +0x58d:  cmpl   $0x0,-0x20(%ebp)
084b10df +0x591:  je     084b11f7 <+0x6a9>
084b10e5 +0x597:  mov    -0x20(%ebp),%eax
084b10e8 +0x59a:  mov    %eax,(%esp)
084b10eb +0x59d:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
084b10f0 +0x5a2:  add    $0x3ac,%eax
084b10f5 +0x5a7:  mov    %eax,0x4(%esp)
084b10f9 +0x5ab:  lea    -0xfc(%ebp),%eax
084b10ff +0x5b1:  mov    %eax,(%esp)
084b1102 +0x5b4:  call   084b454c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x5ff>  ; global constructors keyed to game_master::CMacro::Reset()+0x5ff
084b1107 +0x5b9:  lea    -0xfc(%ebp),%eax
084b110d +0x5bf:  mov    %eax,(%esp)
084b1110 +0x5c2:  call   084b4b9c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc4f>  ; global constructors keyed to game_master::CMacro::Reset()+0xc4f
084b1115 +0x5c7:  xor    $0x1,%eax
084b1118 +0x5ca:  test   %al,%al
084b111a +0x5cc:  je     084b11a9 <+0x65b>
084b1120 +0x5d2:  mov    -0x20(%ebp),%eax
084b1123 +0x5d5:  mov    %eax,(%esp)
084b1126 +0x5d8:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
084b112b +0x5dd:  add    $0x4,%eax
084b112e +0x5e0:  mov    %eax,(%esp)
084b1131 +0x5e3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b1136 +0x5e8:  mov    %eax,%ebx
084b1138 +0x5ea:  lea    -0xcc(%ebp),%eax
084b113e +0x5f0:  mov    %eax,(%esp)
084b1141 +0x5f3:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
084b1146 +0x5f8:  mov    (%eax),%eax
084b1148 +0x5fa:  mov    %ebx,0x10(%esp)
084b114c +0x5fe:  mov    %eax,0xc(%esp)
084b1150 +0x602:  movl   $0x0,0x8(%esp)
084b1158 +0x60a:  movl   $"%d\t%d\t%s\n",0x4(%esp)
084b1160 +0x612:  lea    -0x508(%ebp),%eax
084b1166 +0x618:  mov    %eax,(%esp)
084b1169 +0x61b:  call   0807e440 <_init+0xd38>
084b116e +0x620:  lea    -0x508(%ebp),%eax
084b1174 +0x626:  mov    %eax,0x4(%esp)
084b1178 +0x62a:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%eax
084b117e +0x630:  mov    %eax,(%esp)
084b1181 +0x633:  call   0807dd60 <_init+0x658>
084b1186 +0x638:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%eax
084b118c +0x63e:  mov    %eax,0x8(%esp)
084b1190 +0x642:  lea    -0xfc(%ebp),%eax
084b1196 +0x648:  mov    %eax,0x4(%esp)
084b119a +0x64c:  mov    0x8(%ebp),%eax
084b119d +0x64f:  mov    %eax,(%esp)
084b11a0 +0x652:  call   084b165c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc>  ; game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, char*)
084b11a5 +0x657:  addl   $0x1,-0x34(%ebp)
084b11a9 +0x65b:  lea    -0x4c(%ebp),%eax
084b11ac +0x65e:  movl   $0x0,0x8(%esp)
084b11b4 +0x666:  lea    -0xcc(%ebp),%edx
084b11ba +0x66c:  mov    %edx,0x4(%esp)
084b11be +0x670:  mov    %eax,(%esp)
084b11c1 +0x673:  call   084b4be0 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc93>  ; global constructors keyed to game_master::CMacro::Reset()+0xc93
084b11c6 +0x678:  sub    $0x4,%esp
084b11c9 +0x67b:  lea    -0xfc(%ebp),%eax
084b11cf +0x681:  mov    %eax,(%esp)
084b11d2 +0x684:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
084b11d7 +0x689:  jmp    084b11f8 <+0x6aa>
084b11d9 +0x68b:  mov    %edx,%ebx
084b11db +0x68d:  mov    %eax,%esi
084b11dd +0x68f:  lea    -0xfc(%ebp),%eax
084b11e3 +0x695:  mov    %eax,(%esp)
084b11e6 +0x698:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
084b11eb +0x69d:  mov    %esi,%eax
084b11ed +0x69f:  mov    %ebx,%edx
084b11ef +0x6a1:  mov    %eax,(%esp)
084b11f2 +0x6a4:  call   08ae3750 <_Unwind_Resume>
084b11f7 +0x6a9:  nop
084b11f8 +0x6aa:  mov    0x8(%ebp),%eax
084b11fb +0x6ad:  lea    0xc(%eax),%edx
084b11fe +0x6b0:  lea    -0x50(%ebp),%eax
084b1201 +0x6b3:  mov    %edx,0x4(%esp)
084b1205 +0x6b7:  mov    %eax,(%esp)
084b1208 +0x6ba:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
084b120d +0x6bf:  sub    $0x4,%esp
084b1210 +0x6c2:  lea    -0x50(%ebp),%eax
084b1213 +0x6c5:  mov    %eax,0x4(%esp)
084b1217 +0x6c9:  lea    -0xcc(%ebp),%eax
084b121d +0x6cf:  mov    %eax,(%esp)
084b1220 +0x6d2:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
084b1225 +0x6d7:  test   %al,%al
084b1227 +0x6d9:  jne    084b10b7 <+0x569>
084b122d +0x6df:  mov    0x8(%ebp),%eax
084b1230 +0x6e2:  lea    0x24(%eax),%edx
084b1233 +0x6e5:  lea    -0xd0(%ebp),%eax
084b1239 +0x6eb:  mov    %edx,0x4(%esp)
084b123d +0x6ef:  mov    %eax,(%esp)
084b1240 +0x6f2:  call   080e6166 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x29c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x29c
084b1245 +0x6f7:  sub    $0x4,%esp
084b1248 +0x6fa:  jmp    084b137d <+0x82f>
084b124d +0x6ff:  lea    -0xd0(%ebp),%eax
084b1253 +0x705:  mov    %eax,(%esp)
084b1256 +0x708:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
084b125b +0x70d:  mov    (%eax),%eax
084b125d +0x70f:  mov    %eax,%ebx
084b125f +0x711:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b1264 +0x716:  mov    0x869c(%eax),%eax
084b126a +0x71c:  mov    %ebx,0x4(%esp)
084b126e +0x720:  mov    %eax,(%esp)
084b1271 +0x723:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
084b1276 +0x728:  mov    %eax,-0x1c(%ebp)
084b1279 +0x72b:  cmpl   $0x0,-0x1c(%ebp)
084b127d +0x72f:  je     084b137c <+0x82e>
084b1283 +0x735:  lea    -0x108(%ebp),%eax
084b1289 +0x73b:  mov    -0x1c(%ebp),%edx
084b128c +0x73e:  mov    %edx,0x4(%esp)
084b1290 +0x742:  mov    %eax,(%esp)
084b1293 +0x745:  call   084b410e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x1c1>  ; global constructors keyed to game_master::CMacro::Reset()+0x1c1
084b1298 +0x74a:  sub    $0x4,%esp
084b129b +0x74d:  lea    -0x108(%ebp),%eax
084b12a1 +0x753:  mov    %eax,(%esp)
084b12a4 +0x756:  call   084b4b9c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc4f>  ; global constructors keyed to game_master::CMacro::Reset()+0xc4f
084b12a9 +0x75b:  xor    $0x1,%eax
084b12ac +0x75e:  test   %al,%al
084b12ae +0x760:  je     084b132e <+0x7e0>
084b12b0 +0x762:  mov    -0x1c(%ebp),%eax
084b12b3 +0x765:  mov    %eax,(%esp)
084b12b6 +0x768:  call   084b4138 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x1eb>  ; global constructors keyed to game_master::CMacro::Reset()+0x1eb
084b12bb +0x76d:  mov    %eax,%ebx
084b12bd +0x76f:  lea    -0xd0(%ebp),%eax
084b12c3 +0x775:  mov    %eax,(%esp)
084b12c6 +0x778:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
084b12cb +0x77d:  mov    (%eax),%eax
084b12cd +0x77f:  mov    %ebx,0x10(%esp)
084b12d1 +0x783:  mov    %eax,0xc(%esp)
084b12d5 +0x787:  movl   $0x1,0x8(%esp)
084b12dd +0x78f:  movl   $"%d\t%d\t%s\n",0x4(%esp)
084b12e5 +0x797:  lea    -0x508(%ebp),%eax
084b12eb +0x79d:  mov    %eax,(%esp)
084b12ee +0x7a0:  call   0807e440 <_init+0xd38>
084b12f3 +0x7a5:  lea    -0x508(%ebp),%eax
084b12f9 +0x7ab:  mov    %eax,0x4(%esp)
084b12fd +0x7af:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%eax
084b1303 +0x7b5:  mov    %eax,(%esp)
084b1306 +0x7b8:  call   0807dd60 <_init+0x658>
084b130b +0x7bd:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%eax
084b1311 +0x7c3:  mov    %eax,0x8(%esp)
084b1315 +0x7c7:  lea    -0x108(%ebp),%eax
084b131b +0x7cd:  mov    %eax,0x4(%esp)
084b131f +0x7d1:  mov    0x8(%ebp),%eax
084b1322 +0x7d4:  mov    %eax,(%esp)
084b1325 +0x7d7:  call   084b165c <_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc>  ; game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, char*)
084b132a +0x7dc:  addl   $0x1,-0x34(%ebp)
084b132e +0x7e0:  lea    -0x44(%ebp),%eax
084b1331 +0x7e3:  movl   $0x0,0x8(%esp)
084b1339 +0x7eb:  lea    -0xd0(%ebp),%edx
084b133f +0x7f1:  mov    %edx,0x4(%esp)
084b1343 +0x7f5:  mov    %eax,(%esp)
084b1346 +0x7f8:  call   084b4be0 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc93>  ; global constructors keyed to game_master::CMacro::Reset()+0xc93
084b134b +0x7fd:  sub    $0x4,%esp
084b134e +0x800:  lea    -0x108(%ebp),%eax
084b1354 +0x806:  mov    %eax,(%esp)
084b1357 +0x809:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
084b135c +0x80e:  jmp    084b137d <+0x82f>
084b135e +0x810:  mov    %edx,%ebx
084b1360 +0x812:  mov    %eax,%esi
084b1362 +0x814:  lea    -0x108(%ebp),%eax
084b1368 +0x81a:  mov    %eax,(%esp)
084b136b +0x81d:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
084b1370 +0x822:  mov    %esi,%eax
084b1372 +0x824:  mov    %ebx,%edx
084b1374 +0x826:  mov    %eax,(%esp)
084b1377 +0x829:  call   08ae3750 <_Unwind_Resume>
084b137c +0x82e:  nop
084b137d +0x82f:  mov    0x8(%ebp),%eax
084b1380 +0x832:  lea    0x24(%eax),%edx
084b1383 +0x835:  lea    -0x48(%ebp),%eax
084b1386 +0x838:  mov    %edx,0x4(%esp)
084b138a +0x83c:  mov    %eax,(%esp)
084b138d +0x83f:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
084b1392 +0x844:  sub    $0x4,%esp
084b1395 +0x847:  lea    -0x48(%ebp),%eax
084b1398 +0x84a:  mov    %eax,0x4(%esp)
084b139c +0x84e:  lea    -0xd0(%ebp),%eax
084b13a2 +0x854:  mov    %eax,(%esp)
084b13a5 +0x857:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
084b13aa +0x85c:  test   %al,%al
084b13ac +0x85e:  jne    084b124d <+0x6ff>
084b13b2 +0x864:  mov    0x8(%ebp),%eax
084b13b5 +0x867:  movzbl 0x8(%eax),%eax
084b13b9 +0x86b:  xor    $0x1,%eax
084b13bc +0x86e:  test   %al,%al
084b13be +0x870:  je     084b13e7 <+0x899>
084b13c0 +0x872:  mov    -0x38(%ebp),%eax
084b13c3 +0x875:  mov    %eax,(%esp)
084b13c6 +0x878:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
084b13cb +0x87d:  mov    %eax,0x8(%esp)
084b13cf +0x881:  movl   $"item_indepedent_drop_%s.txt",0x4(%esp)
084b13d7 +0x889:  lea    -0xc6(%ebp),%eax
084b13dd +0x88f:  mov    %eax,(%esp)
084b13e0 +0x892:  call   0807e440 <_init+0xd38>
084b13e5 +0x897:  jmp    084b140c <+0x8be>
084b13e7 +0x899:  mov    -0x38(%ebp),%eax
084b13ea +0x89c:  mov    %eax,(%esp)
084b13ed +0x89f:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
084b13f2 +0x8a4:  mov    %eax,0x8(%esp)
084b13f6 +0x8a8:  movl   $"item_indepedent_drop_all_%s.txt",0x4(%esp)
084b13fe +0x8b0:  lea    -0xc6(%ebp),%eax
084b1404 +0x8b6:  mov    %eax,(%esp)
084b1407 +0x8b9:  call   0807e440 <_init+0xd38>
084b140c +0x8be:  cmpl   $0x0,-0x34(%ebp)
084b1410 +0x8c2:  je     084b1462 <+0x914>
084b1412 +0x8c4:  mov    0x8(%ebp),%eax
084b1415 +0x8c7:  mov    %eax,(%esp)
084b1418 +0x8ca:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b141d +0x8cf:  lea    -&_ZL14gUnicodeBuffer+0xd6f4(%ebp),%edx
084b1423 +0x8d5:  mov    %edx,0xc(%esp)
084b1427 +0x8d9:  lea    -0xc6(%ebp),%edx
084b142d +0x8df:  mov    %edx,0x8(%esp)
084b1431 +0x8e3:  mov    %eax,0x4(%esp)
084b1435 +0x8e7:  mov    0x8(%ebp),%eax
084b1438 +0x8ea:  mov    %eax,(%esp)
084b143b +0x8ed:  call   084b14b8 <_ZN11game_master16CIndependentDrop11printClientEP5CUserPKcS4_>  ; game_master::CIndependentDrop::printClient(CUser*, char const*, char const*)
084b1440 +0x8f2:  lea    -0xc6(%ebp),%eax
084b1446 +0x8f8:  mov    %eax,0x8(%esp)
084b144a +0x8fc:  movl   $"%s파일이 생성되었습니다.\n",0x4(%esp)
084b1452 +0x904:  lea    -0x908(%ebp),%eax
084b1458 +0x90a:  mov    %eax,(%esp)
084b145b +0x90d:  call   0807e440 <_init+0xd38>
084b1460 +0x912:  jmp    084b1480 <+0x932>
084b1462 +0x914:  movl   $0x24,0x8(%esp)
084b146a +0x91c:  movl   $"출력할 지정드랍 리스트가 없습니다.\n",0x4(%esp)
084b1472 +0x924:  lea    -0x908(%ebp),%eax
084b1478 +0x92a:  mov    %eax,(%esp)
084b147b +0x92d:  call   0807d8a0 <_init+0x198>
084b1480 +0x932:  mov    0x8(%ebp),%eax
084b1483 +0x935:  mov    %eax,(%esp)
084b1486 +0x938:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b148b +0x93d:  lea    -0x908(%ebp),%edx
084b1491 +0x943:  mov    %edx,0x8(%esp)
084b1495 +0x947:  mov    %eax,0x4(%esp)
084b1499 +0x94b:  mov    0x8(%ebp),%eax
084b149c +0x94e:  mov    %eax,(%esp)
084b149f +0x951:  call   084b15c4 <_ZN11game_master16CIndependentDrop11SendChatMsgEP5CUserPc>  ; game_master::CIndependentDrop::SendChatMsg(CUser*, char*)
084b14a4 +0x956:  jmp    084b14ad <+0x95f>
084b14a6 +0x958:  nop
084b14a7 +0x959:  jmp    084b14ad <+0x95f>
084b14a9 +0x95b:  nop
084b14aa +0x95c:  jmp    084b14ad <+0x95f>
084b14ac +0x95e:  nop
084b14ad +0x95f:  lea    -0xc(%ebp),%esp
084b14b0 +0x962:  add    $0x0,%esp
084b14b3 +0x965:  pop    %ebx
084b14b4 +0x966:  pop    %esi
084b14b5 +0x967:  pop    %edi
084b14b6 +0x968:  pop    %ebp
084b14b7 +0x969:  ret
```

## 反编译 C

```c
// game_master::CIndependentDrop::execute @ 0x84b0b4e

/* WARNING: Removing unreachable block (ram,0x084b0c3b) */
/* game_master::CIndependentDrop::execute() */

void __thiscall game_master::CIndependentDrop::execute(CIndependentDrop *this)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  int aiStack_17c54 [2];
  int aiStack_17c40 [7];
  undefined1 auStack_17c24 [95000];
  undefined4 local_90c [256];
  undefined4 local_50c [256];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [8];
  undefined1 local_e4 [4];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_e0 [8];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [6];
  undefined2 local_ca;
  undefined2 local_c8 [14];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_ac [4];
  int local_a8 [2];
  int local_a0 [2];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_98 [4];
  undefined1 local_94 [8];
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  CUser *local_44;
  CParty *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  piVar9 = (int *)&stack0xfffe83b4;
  local_44 = (CUser *)CCommand::GetUser((CCommand *)this);
  if ((local_44 != (CUser *)0x0) &&
     (local_40 = (CParty *)CUser::GetParty(local_44), local_40 != (CParty *)0x0)) {
    CParty::getDungIndex(local_40);
    iVar2 = G_CDataManager();
    local_3c = CDataManager::find_dungeon(iVar2);
    if (local_3c != 0) {
      puVar10 = local_50c;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      memset(auStack_17c24,0,95000);
      puVar3 = &local_ca;
      uVar8 = 0x1e;
      bVar11 = ((uint)puVar3 & 2) != 0;
      if (bVar11) {
        local_ca = 0;
        puVar3 = local_c8;
        uVar8 = 0x1c;
      }
      uVar7 = 0;
      do {
        *(undefined4 *)((int)puVar3 + uVar7) = 0;
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar8 & 0xfffffffc));
      if (!bVar11) {
        *(undefined2 *)((int)puVar3 + uVar7) = 0;
      }
      puVar10 = local_90c;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      std::set<int,std::less<int>,std::allocator<int>>::clear
                ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xc));
      std::set<int,std::less<int>,std::allocator<int>>::clear
                ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x24));
      if (this[8] == (CIndependentDrop)0x1) {
        iVar2 = G_CDataManager();
        local_30 = CMapList::GetMapList(*(CMapList **)(iVar2 + 4));
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::begin(local_e0);
        piVar9 = (int *)&stack0xfffe83b4;
        while( true ) {
          piVar9[1] = local_30;
          *piVar9 = (int)local_94;
          piVar9[-1] = 0x84b106d;
          __gnu_cxx::
          hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
                    ((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)*piVar9);
          piVar9[1] = (int)local_94;
          *piVar9 = (int)local_e0;
          piVar9[-1] = 0x84b1088;
          cVar1 = __gnu_cxx::
                  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                *)*piVar9,(_Hashtable_const_iterator *)piVar9[1]);
          if (cVar1 == '\0') break;
          *piVar9 = (int)local_e0;
          piVar9[-1] = 0x84b0df0;
          iVar2 = __gnu_cxx::
                  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                *)*piVar9);
          *piVar9 = *(undefined4 *)(iVar2 + 4);
          piVar9[-1] = 0x84b0dfb;
          local_2c = CMap::getDungeonLists((CMap *)*piVar9);
          *piVar9 = local_3c;
          piVar9[-1] = 0x84b0e09;
          local_8c = CDungeon::get_index((CDungeon *)*piVar9);
          piVar9[1] = local_2c;
          *piVar9 = (int)&local_88;
          piVar9[-1] = 0x84b0e24;
          std::list<int,std::allocator<int>>::end();
          piVar9[1] = local_2c;
          *piVar9 = (int)&local_84;
          piVar9[-1] = 0x84b0e39;
          std::list<int,std::allocator<int>>::begin();
          piVar9[3] = (int)&local_8c;
          piVar9[2] = local_88;
          piVar9[1] = local_84;
          *piVar9 = (int)local_e4;
          piVar9[-1] = 0x84b0e65;
          std::find<std::_List_const_iterator<int>,int>();
          *piVar9 = local_2c;
          piVar9[-1] = (int)local_80;
          piVar9[-2] = 0x84b0e7a;
          std::list<int,std::allocator<int>>::end();
          *piVar9 = (int)local_80;
          piVar9[-1] = (int)local_e4;
          piVar9[-2] = 0x84b0e92;
          cVar1 = std::_List_const_iterator<int>::operator!=
                            ((_List_const_iterator<int> *)piVar9[-1],(_List_const_iterator *)*piVar9
                            );
          if (cVar1 != '\0') {
            piVar9[-1] = (int)local_e0;
            piVar9[-2] = 0x84b0ea8;
            iVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                  *)piVar9[-1]);
            *piVar9 = *(undefined4 *)(iVar2 + 4);
            piVar9[-1] = (int)local_ec;
            piVar9[-2] = 0x84b0ebd;
            CMap::get_monster_list();
            *piVar9 = (int)local_ec;
            piVar9[-1] = (int)local_f0;
                    /* try { // try from 084b0ed3 to 084b1005 has its CatchHandler @ 084b100c */
            piVar9[-2] = 0x84b0ed8;
            std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
            while( true ) {
              *piVar9 = (int)local_ec;
              piVar9[-1] = (int)local_7c;
              piVar9[-2] = 0x84b0f3e;
              std::list<_mapMonster,std::allocator<_mapMonster>>::end();
              *piVar9 = (int)local_7c;
              piVar9[-1] = (int)local_f0;
              piVar9[-2] = 0x84b0f56;
              cVar1 = std::_List_iterator<_mapMonster>::operator!=
                                ((_List_iterator<_mapMonster> *)piVar9[-1],(_List_iterator *)*piVar9
                                );
              if (cVar1 == '\0') break;
              piVar9[-1] = (int)local_f0;
              piVar9[-2] = 0x84b0eeb;
              iVar2 = std::_List_iterator<_mapMonster>::operator->
                                ((_List_iterator<_mapMonster> *)piVar9[-1]);
              piVar9[1] = iVar2;
              *piVar9 = (int)(this + 0xc);
              piVar9[-1] = (int)local_78;
              piVar9[-2] = 0x84b0f06;
              std::set<int,std::less<int>,std::allocator<int>>::insert((int *)piVar9[-1]);
              piVar9[1] = 0;
              *piVar9 = (int)local_f0;
              piVar9[-1] = (int)local_70;
              piVar9[-2] = 0x84b0f26;
              std::_List_iterator<_mapMonster>::operator++
                        ((_List_iterator<_mapMonster> *)piVar9[-1],*piVar9);
            }
            piVar9[-1] = (int)local_e0;
            piVar9[-2] = 0x84b0f68;
            iVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                                  *)piVar9[-1]);
            piVar9[-1] = *(undefined4 *)(iVar2 + 4);
            piVar9[-2] = 0x84b0f73;
            local_28 = CMap::getAICharacters((CMap *)piVar9[-1]);
            *piVar9 = local_28;
            piVar9[-1] = (int)local_f4;
            piVar9[-2] = 0x84b0f8b;
            std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
            begin();
            while( true ) {
              *piVar9 = local_28;
              piVar9[-1] = (int)local_6c;
              piVar9[-2] = 0x84b0fee;
              std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
              end();
              *piVar9 = (int)local_6c;
              piVar9[-1] = (int)local_f4;
              piVar9[-2] = 0x84b1006;
              bVar11 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)piVar9[-1],(__normal_iterator *)*piVar9);
              if (!bVar11) break;
              piVar9[-1] = (int)local_f4;
              piVar9[-2] = 0x84b0f9e;
              iVar2 = __gnu_cxx::
                      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                      ::operator->((__normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                                    *)piVar9[-1]);
              piVar9[1] = iVar2;
              *piVar9 = (int)(this + 0x24);
              piVar9[-1] = (int)local_68;
              piVar9[-2] = 0x84b0fb9;
              std::set<int,std::less<int>,std::allocator<int>>::insert((int *)piVar9[-1]);
              piVar9[1] = 0;
              *piVar9 = (int)local_f4;
              piVar9[-1] = (int)local_60;
              piVar9[-2] = 0x84b0fd9;
              __gnu_cxx::
              __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
              ::operator++((__normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                            *)piVar9[-1],*piVar9);
            }
            piVar9[-1] = (int)local_ec;
            piVar9[-2] = 0x84b1038;
            std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                      ((list<_mapMonster,std::allocator<_mapMonster>> *)piVar9[-1]);
          }
          piVar9[1] = 0;
          *piVar9 = (int)local_e0;
          piVar9[-1] = (int)local_5c;
          piVar9[-2] = 0x84b1055;
          __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
          ::operator++((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                        *)piVar9[-1],*piVar9);
          piVar9 = piVar9 + -1;
        }
      }
      else {
        local_34 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_40 + 0xb24));
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        begin(local_d8);
        while( true ) {
          std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::end(local_ac);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8,
                             (_Rb_tree_iterator *)local_ac);
          if (cVar1 == '\0') break;
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
          if (*(char *)(iVar2 + 0xc) < '\x04') {
            std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
            std::set<int,std::less<int>,std::allocator<int>>::insert(local_a8);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
            if (*(char *)(iVar2 + 0xc) < '\t') {
              std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_d8);
              std::set<int,std::less<int>,std::allocator<int>>::insert(local_a0);
            }
          }
          std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                    (local_98,(int)local_d8);
        }
      }
      local_38 = 0;
      piVar9[1] = (int)(this + 0xc);
      *piVar9 = (int)local_d0;
      piVar9[-1] = 0x84b10af;
      std::set<int,std::less<int>,std::allocator<int>>::begin
                ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
      while( true ) {
        piVar9[1] = (int)(this + 0xc);
        *piVar9 = (int)local_54;
        piVar9[-1] = 0x84b120d;
        std::set<int,std::less<int>,std::allocator<int>>::end
                  ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
        piVar9[1] = (int)local_54;
        *piVar9 = (int)local_d0;
        piVar9[-1] = 0x84b1225;
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          ((_Rb_tree_const_iterator<int> *)*piVar9,
                           (_Rb_tree_const_iterator *)piVar9[1]);
        if (cVar1 == '\0') break;
        *piVar9 = (int)local_d0;
        piVar9[-1] = 0x84b10c5;
        piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                  ((_Rb_tree_const_iterator<int> *)*piVar9);
        iVar2 = *piVar5;
        piVar9[-1] = 0x84b10cc;
        uVar4 = G_CDataManager();
        piVar9[1] = iVar2;
        *piVar9 = uVar4;
        piVar9[-1] = 0x84b10d8;
        local_24 = CDataManager::find_monster(*piVar9);
        if (local_24 != 0) {
          *piVar9 = local_24;
          piVar9[-1] = 0x84b10f0;
          iVar2 = CMonster::getMonsterScript((CMonster *)*piVar9);
          piVar9[1] = iVar2 + 0x3ac;
          *piVar9 = (int)local_100;
          piVar9[-1] = 0x84b1107;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::vector
                    ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                      *)*piVar9,(vector *)piVar9[1]);
          *piVar9 = (int)local_100;
                    /* try { // try from 084b1110 to 084b11c5 has its CatchHandler @ 084b11d9 */
          piVar9[-1] = 0x84b1115;
          cVar1 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                  ::empty();
          if (cVar1 != '\x01') {
            *piVar9 = local_24;
            piVar9[-1] = 0x84b112b;
            iVar2 = CMonster::getMonsterScript((CMonster *)*piVar9);
            *piVar9 = iVar2 + 4;
            piVar9[-1] = 0x84b1136;
            iVar6 = std::string::c_str((string *)*piVar9);
            *piVar9 = (int)local_d0;
            piVar9[-1] = 0x84b1146;
            piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                      ((_Rb_tree_const_iterator<int> *)*piVar9);
            iVar2 = *piVar5;
            piVar9[4] = iVar6;
            piVar9[3] = iVar2;
            piVar9[2] = 0;
            piVar9[1] = (int)"%d\t%d\t%s\n";
            *piVar9 = (int)local_50c;
            piVar9[-1] = 0x84b116e;
            sprintf((char *)*piVar9,(char *)piVar9[1]);
            piVar9[1] = (int)local_50c;
            *piVar9 = (int)auStack_17c24;
            piVar9[-1] = 0x84b1186;
            strcat((char *)*piVar9,(char *)piVar9[1]);
            piVar9[2] = (int)auStack_17c24;
            piVar9[1] = (int)local_100;
            *piVar9 = (int)this;
            piVar9[-1] = 0x84b11a5;
            ResultToStr((CIndependentDrop *)*piVar9,(vector *)piVar9[1],(char *)piVar9[2]);
            local_38 = local_38 + 1;
          }
          piVar9[2] = 0;
          piVar9[1] = (int)local_d0;
          *piVar9 = (int)local_50;
          piVar9[-1] = 0x84b11c6;
          std::_Rb_tree_const_iterator<int>::operator++
                    ((_Rb_tree_const_iterator<int> *)*piVar9,piVar9[1]);
          *piVar9 = (int)local_100;
          piVar9[-1] = 0x84b11d7;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          ~vector((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
                  *piVar9);
        }
      }
      piVar9[1] = (int)(this + 0x24);
      *piVar9 = (int)local_d4;
      piVar9[-1] = 0x84b1245;
      std::set<int,std::less<int>,std::allocator<int>>::begin
                ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
      while( true ) {
        piVar9[1] = (int)(this + 0x24);
        *piVar9 = (int)local_4c;
        piVar9[-1] = 0x84b1392;
        std::set<int,std::less<int>,std::allocator<int>>::end
                  ((set<int,std::less<int>,std::allocator<int>> *)*piVar9);
        piVar9[1] = (int)local_4c;
        *piVar9 = (int)local_d4;
        piVar9[-1] = 0x84b13aa;
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          ((_Rb_tree_const_iterator<int> *)*piVar9,
                           (_Rb_tree_const_iterator *)piVar9[1]);
        if (cVar1 == '\0') break;
        *piVar9 = (int)local_d4;
        piVar9[-1] = 0x84b125b;
        piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                  ((_Rb_tree_const_iterator<int> *)*piVar9);
        iVar2 = *piVar5;
        piVar9[-1] = 0x84b1264;
        iVar6 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar6 + 0x869c);
        piVar9[1] = iVar2;
        *piVar9 = uVar4;
        piVar9[-1] = 0x84b1276;
        local_20 = CAICharacterList::get((CAICharacterList *)*piVar9,piVar9[1]);
        if (local_20 != 0) {
          piVar9[1] = local_20;
          *piVar9 = (int)local_10c;
          piVar9[-1] = 0x84b1298;
          CAICharacter::getIndepentDropItem();
          *piVar9 = (int)local_10c;
                    /* try { // try from 084b12a4 to 084b134a has its CatchHandler @ 084b135e */
          piVar9[-1] = 0x84b12a9;
          cVar1 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>
                  ::empty();
          if (cVar1 != '\x01') {
            *piVar9 = local_20;
            piVar9[-1] = 0x84b12bb;
            iVar6 = CAICharacter::GetName((CAICharacter *)*piVar9);
            *piVar9 = (int)local_d4;
            piVar9[-1] = 0x84b12cb;
            piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                      ((_Rb_tree_const_iterator<int> *)*piVar9);
            iVar2 = *piVar5;
            piVar9[4] = iVar6;
            piVar9[3] = iVar2;
            piVar9[2] = 1;
            piVar9[1] = (int)"%d\t%d\t%s\n";
            *piVar9 = (int)local_50c;
            piVar9[-1] = 0x84b12f3;
            sprintf((char *)*piVar9,(char *)piVar9[1]);
            piVar9[1] = (int)local_50c;
            *piVar9 = (int)auStack_17c24;
            piVar9[-1] = 0x84b130b;
            strcat((char *)*piVar9,(char *)piVar9[1]);
            piVar9[2] = (int)auStack_17c24;
            piVar9[1] = (int)local_10c;
            *piVar9 = (int)this;
            piVar9[-1] = 0x84b132a;
            ResultToStr((CIndependentDrop *)*piVar9,(vector *)piVar9[1],(char *)piVar9[2]);
            local_38 = local_38 + 1;
          }
          piVar9[2] = 0;
          piVar9[1] = (int)local_d4;
          *piVar9 = (int)local_48;
          piVar9[-1] = 0x84b134b;
          std::_Rb_tree_const_iterator<int>::operator++
                    ((_Rb_tree_const_iterator<int> *)*piVar9,piVar9[1]);
          *piVar9 = (int)local_10c;
          piVar9[-1] = 0x84b135c;
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          ~vector((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
                  *piVar9);
        }
      }
      if (this[8] == (CIndependentDrop)0x1) {
        *piVar9 = local_3c;
        piVar9[-1] = 0x84b13f2;
        iVar2 = CDungeon::GetDungeonName((CDungeon *)*piVar9);
        piVar9[2] = iVar2;
        piVar9[1] = (int)"item_indepedent_drop_all_%s.txt";
        *piVar9 = (int)&local_ca;
        piVar9[-1] = 0x84b140c;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      else {
        *piVar9 = local_3c;
        piVar9[-1] = 0x84b13cb;
        iVar2 = CDungeon::GetDungeonName((CDungeon *)*piVar9);
        piVar9[2] = iVar2;
        piVar9[1] = (int)"item_indepedent_drop_%s.txt";
        *piVar9 = (int)&local_ca;
        piVar9[-1] = 0x84b13e5;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      if (local_38 == 0) {
        piVar9[2] = 0x24;
        piVar9[1] = (int)&DAT_08c802b4;
        *piVar9 = (int)local_90c;
        piVar9[-1] = 0x84b1480;
        memcpy((void *)*piVar9,(void *)piVar9[1],piVar9[2]);
      }
      else {
        *piVar9 = (int)this;
        piVar9[-1] = 0x84b141d;
        iVar2 = CCommand::GetUser((CCommand *)*piVar9);
        piVar9[3] = (int)auStack_17c24;
        piVar9[2] = (int)&local_ca;
        piVar9[1] = iVar2;
        *piVar9 = (int)this;
        piVar9[-1] = 0x84b1440;
        printClient((CIndependentDrop *)*piVar9,(CUser *)piVar9[1],(char *)piVar9[2],
                    (char *)piVar9[3]);
        piVar9[2] = (int)&local_ca;
        piVar9[1] = (int)&DAT_08c80298;
        *piVar9 = (int)local_90c;
        piVar9[-1] = 0x84b1460;
        sprintf((char *)*piVar9,(char *)piVar9[1]);
      }
      *piVar9 = (int)this;
      piVar9[-1] = 0x84b148b;
      iVar2 = CCommand::GetUser((CCommand *)*piVar9);
      piVar9[2] = (int)local_90c;
      piVar9[1] = iVar2;
      *piVar9 = (int)this;
      piVar9[-1] = 0x84b14a4;
      SendChatMsg((CIndependentDrop *)*piVar9,(CUser *)piVar9[1],(char *)piVar9[2]);
    }
  }
  return;
}
```
