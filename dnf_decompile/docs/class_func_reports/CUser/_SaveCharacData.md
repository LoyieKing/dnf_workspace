# _SaveCharacData

`_ZN5CUser15_SaveCharacDataEv`

`CUser::_SaveCharacData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08650aa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08650aa2  _ZN5CUser15_SaveCharacDataEv
#           CUser::_SaveCharacData()
# range [0x08650aa2, 0x08651321]
08650aa2 +0x000:  push   %ebp
08650aa3 +0x001:  mov    %esp,%ebp
08650aa5 +0x003:  push   %edi
08650aa6 +0x004:  push   %esi
08650aa7 +0x005:  push   %ebx
08650aa8 +0x006:  sub    $0x2c,%esp
08650aab +0x009:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08650ab2 +0x010:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08650ab7 +0x015:  mov    %eax,0x4(%esp)
08650abb +0x019:  mov    0x8(%ebp),%eax
08650abe +0x01c:  mov    %eax,(%esp)
08650ac1 +0x01f:  call   084ec8f8 <_GLOBAL__I__Z7getUserj+0x38aa>  ; global constructors keyed to getUser(unsigned int)+0x38aa
08650ac6 +0x024:  mov    0x8(%ebp),%eax
08650ac9 +0x027:  mov    %eax,(%esp)
08650acc +0x02a:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08650ad1 +0x02f:  cmp    $0x7,%al
08650ad3 +0x031:  sete   %al
08650ad6 +0x034:  test   %al,%al
08650ad8 +0x036:  je     08650b18 <+0x76>
08650ada +0x038:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08650ae1 +0x03f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08650ae6 +0x044:  mov    0x8(%ebp),%edx
08650ae9 +0x047:  mov    %eax,0x4(%esp)
08650aed +0x04b:  mov    %edx,(%esp)
08650af0 +0x04e:  call   08481060 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0xde>  ; global constructors keyed to CPowerManager::CPowerManager()+0xde
08650af5 +0x053:  mov    0x8(%ebp),%eax
08650af8 +0x056:  movl   $0x0,0x4(%esp)
08650b00 +0x05e:  mov    %eax,(%esp)
08650b03 +0x061:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
08650b08 +0x066:  mov    0x8(%ebp),%eax
08650b0b +0x069:  add    $0x796f4,%eax
08650b10 +0x06e:  mov    %eax,(%esp)
08650b13 +0x071:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
08650b18 +0x076:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08650b1f +0x07d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08650b24 +0x082:  mov    %eax,-0x20(%ebp)
08650b27 +0x085:  mov    0x8(%ebp),%eax
08650b2a +0x088:  mov    -0x20(%ebp),%edx
08650b2d +0x08b:  mov    %edx,0x4(%esp)
08650b31 +0x08f:  mov    %eax,(%esp)
08650b34 +0x092:  call   086960f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x294b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x294b
08650b39 +0x097:  mov    0x8(%ebp),%eax
08650b3c +0x09a:  mov    %eax,(%esp)
08650b3f +0x09d:  call   0869627e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2ad3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2ad3
08650b44 +0x0a2:  xor    $0x1,%eax
08650b47 +0x0a5:  test   %al,%al
08650b49 +0x0a7:  je     08650b88 <+0xe6>
08650b4b +0x0a9:  mov    0x8(%ebp),%eax
08650b4e +0x0ac:  mov    %eax,(%esp)
08650b51 +0x0af:  call   0869628a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2adf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2adf
08650b56 +0x0b4:  xor    $0x1,%eax
08650b59 +0x0b7:  test   %al,%al
08650b5b +0x0b9:  je     08650b88 <+0xe6>
08650b5d +0x0bb:  mov    0x8(%ebp),%eax
08650b60 +0x0be:  mov    %eax,(%esp)
08650b63 +0x0c1:  call   08696296 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2aeb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2aeb
08650b68 +0x0c6:  xor    $0x1,%eax
08650b6b +0x0c9:  test   %al,%al
08650b6d +0x0cb:  je     08650b88 <+0xe6>
08650b6f +0x0cd:  mov    0x8(%ebp),%eax
08650b72 +0x0d0:  mov    %eax,(%esp)
08650b75 +0x0d3:  call   086962a2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2af7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2af7
08650b7a +0x0d8:  xor    $0x1,%eax
08650b7d +0x0db:  test   %al,%al
08650b7f +0x0dd:  je     08650b88 <+0xe6>
08650b81 +0x0df:  mov    $0x1,%eax
08650b86 +0x0e4:  jmp    08650b8d <+0xeb>
08650b88 +0x0e6:  mov    $0x0,%eax
08650b8d +0x0eb:  test   %al,%al
08650b8f +0x0ed:  jne    08651318 <+0x876>
08650b95 +0x0f3:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08650b9a +0x0f8:  movl   $0x19c3,0x8(%esp)
08650ba2 +0x100:  movl   $"user.cpp",0x4(%esp)
08650baa +0x108:  mov    %eax,(%esp)
08650bad +0x10b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08650bb2 +0x110:  movl   $0x1,0x8(%esp)
08650bba +0x118:  mov    %eax,0x4(%esp)
08650bbe +0x11c:  lea    -0x28(%ebp),%eax
08650bc1 +0x11f:  mov    %eax,(%esp)
08650bc4 +0x122:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08650bc9 +0x127:  lea    -0x28(%ebp),%eax
08650bcc +0x12a:  mov    %eax,(%esp)
08650bcf +0x12d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650bd4 +0x132:  movl   $0x22,0x4(%esp)
08650bdc +0x13a:  mov    %eax,(%esp)
08650bdf +0x13d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650be4 +0x142:  mov    0x8(%ebp),%eax
08650be7 +0x145:  mov    %eax,(%esp)
08650bea +0x148:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08650bef +0x14d:  mov    %eax,%ebx
08650bf1 +0x14f:  lea    -0x28(%ebp),%eax
08650bf4 +0x152:  mov    %eax,(%esp)
08650bf7 +0x155:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650bfc +0x15a:  mov    %ebx,0x4(%esp)
08650c00 +0x15e:  mov    %eax,(%esp)
08650c03 +0x161:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650c08 +0x166:  lea    -0x28(%ebp),%eax
08650c0b +0x169:  mov    %eax,(%esp)
08650c0e +0x16c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08650c13 +0x171:  mov    %eax,(%esp)
08650c16 +0x174:  call   0869925c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ab1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ab1
08650c1b +0x179:  mov    %eax,-0x1c(%ebp)
08650c1e +0x17c:  movl   $0x10d,0x8(%esp)
08650c26 +0x184:  movl   $0x0,0x4(%esp)
08650c2e +0x18c:  mov    -0x1c(%ebp),%eax
08650c31 +0x18f:  mov    %eax,(%esp)
08650c34 +0x192:  call   0807dcc0 <_init+0x5b8>
08650c39 +0x197:  mov    0x8(%ebp),%eax
08650c3c +0x19a:  mov    %eax,(%esp)
08650c3f +0x19d:  call   084ec86c <_GLOBAL__I__Z7getUserj+0x381e>  ; global constructors keyed to getUser(unsigned int)+0x381e
08650c44 +0x1a2:  mov    %eax,(%esp)
08650c47 +0x1a5:  call   08697044 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3899>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3899
08650c4c +0x1aa:  mov    -0x1c(%ebp),%edx
08650c4f +0x1ad:  mov    %eax,0xf2(%edx)
08650c55 +0x1b3:  mov    0x8(%ebp),%eax
08650c58 +0x1b6:  mov    %eax,(%esp)
08650c5b +0x1b9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08650c60 +0x1be:  mov    -0x1c(%ebp),%edx
08650c63 +0x1c1:  mov    %eax,0xe6(%edx)
08650c69 +0x1c7:  mov    0x8(%ebp),%eax
08650c6c +0x1ca:  mov    0x8d110(%eax),%edx
08650c72 +0x1d0:  mov    -0x1c(%ebp),%eax
08650c75 +0x1d3:  mov    %edx,0xea(%eax)
08650c7b +0x1d9:  mov    0x8(%ebp),%eax
08650c7e +0x1dc:  mov    %eax,(%esp)
08650c81 +0x1df:  call   08696656 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2eab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2eab
08650c86 +0x1e4:  mov    -0x1c(%ebp),%edx
08650c89 +0x1e7:  mov    %eax,0xee(%edx)
08650c8f +0x1ed:  mov    0x8(%ebp),%eax
08650c92 +0x1f0:  mov    %eax,(%esp)
08650c95 +0x1f3:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
08650c9a +0x1f8:  mov    -0x1c(%ebp),%eax
08650c9d +0x1fb:  fstps  0xf6(%eax)
08650ca3 +0x201:  mov    0x8(%ebp),%eax
08650ca6 +0x204:  mov    %eax,(%esp)
08650ca9 +0x207:  call   084ecad4 <_GLOBAL__I__Z7getUserj+0x3a86>  ; global constructors keyed to getUser(unsigned int)+0x3a86
08650cae +0x20c:  mov    -0x1c(%ebp),%edx
08650cb1 +0x20f:  mov    %al,0xfa(%edx)
08650cb7 +0x215:  mov    0x8(%ebp),%eax
08650cba +0x218:  mov    %eax,(%esp)
08650cbd +0x21b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08650cc2 +0x220:  mov    -0x1c(%ebp),%edx
08650cc5 +0x223:  mov    %eax,(%edx)
08650cc7 +0x225:  mov    0x8(%ebp),%eax
08650cca +0x228:  mov    %eax,(%esp)
08650ccd +0x22b:  call   0869627e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2ad3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2ad3
08650cd2 +0x230:  mov    -0x1c(%ebp),%edx
08650cd5 +0x233:  mov    %al,0x4(%edx)
08650cd8 +0x236:  mov    0x8(%ebp),%eax
08650cdb +0x239:  mov    %eax,(%esp)
08650cde +0x23c:  call   0869628a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2adf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2adf
08650ce3 +0x241:  mov    -0x1c(%ebp),%edx
08650ce6 +0x244:  mov    %al,0x5(%edx)
08650ce9 +0x247:  mov    0x8(%ebp),%eax
08650cec +0x24a:  mov    %eax,(%esp)
08650cef +0x24d:  call   08696296 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2aeb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2aeb
08650cf4 +0x252:  mov    -0x1c(%ebp),%edx
08650cf7 +0x255:  mov    %al,0x6(%edx)
08650cfa +0x258:  mov    0x8(%ebp),%eax
08650cfd +0x25b:  mov    %eax,(%esp)
08650d00 +0x25e:  call   086962a2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2af7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2af7
08650d05 +0x263:  mov    -0x1c(%ebp),%edx
08650d08 +0x266:  mov    %al,0x7(%edx)
08650d0b +0x269:  mov    0x8(%ebp),%eax
08650d0e +0x26c:  mov    %eax,(%esp)
08650d11 +0x26f:  call   08696d18 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x356d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x356d
08650d16 +0x274:  mov    -0x1c(%ebp),%edx
08650d19 +0x277:  mov    %al,0x10a(%edx)
08650d1f +0x27d:  mov    -0x1c(%ebp),%eax
08650d22 +0x280:  movzbl 0x10a(%eax),%eax
08650d29 +0x287:  test   %al,%al
08650d2b +0x289:  je     08650d52 <+0x2b0>
08650d2d +0x28b:  mov    -0x1c(%ebp),%eax
08650d30 +0x28e:  lea    0x10c(%eax),%ecx
08650d36 +0x294:  mov    -0x1c(%ebp),%eax
08650d39 +0x297:  lea    0x10b(%eax),%edx
08650d3f +0x29d:  mov    0x8(%ebp),%eax
08650d42 +0x2a0:  mov    %ecx,0x8(%esp)
08650d46 +0x2a4:  mov    %edx,0x4(%esp)
08650d4a +0x2a8:  mov    %eax,(%esp)
08650d4d +0x2ab:  call   08696cc8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x351d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x351d
08650d52 +0x2b0:  mov    -0x1c(%ebp),%eax
08650d55 +0x2b3:  movzbl 0x4(%eax),%eax
08650d59 +0x2b7:  test   %al,%al
08650d5b +0x2b9:  je     08650e1c <+0x37a>
08650d61 +0x2bf:  mov    0x8(%ebp),%eax
08650d64 +0x2c2:  mov    %eax,(%esp)
08650d67 +0x2c5:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08650d6c +0x2ca:  mov    %eax,%edx
08650d6e +0x2cc:  mov    -0x1c(%ebp),%eax
08650d71 +0x2cf:  mov    %dx,0x8(%eax)
08650d75 +0x2d3:  mov    0x8(%ebp),%eax
08650d78 +0x2d6:  mov    %eax,(%esp)
08650d7b +0x2d9:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08650d80 +0x2de:  mov    -0x1c(%ebp),%edx
08650d83 +0x2e1:  mov    %al,0xa(%edx)
08650d86 +0x2e4:  mov    0x8(%ebp),%eax
08650d89 +0x2e7:  mov    %eax,(%esp)
08650d8c +0x2ea:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08650d91 +0x2ef:  mov    %eax,%edx
08650d93 +0x2f1:  mov    -0x1c(%ebp),%eax
08650d96 +0x2f4:  add    $0xb,%eax
08650d99 +0x2f7:  add    $0x88,%edx
08650d9f +0x2fd:  mov    $0x52,%ebx
08650da4 +0x302:  mov    %eax,%ecx
08650da6 +0x304:  and    $0x1,%ecx
08650da9 +0x307:  test   %ecx,%ecx
08650dab +0x309:  je     08650dbb <+0x319>
08650dad +0x30b:  movzbl (%edx),%ecx
08650db0 +0x30e:  mov    %cl,(%eax)
08650db2 +0x310:  add    $0x1,%eax
08650db5 +0x313:  add    $0x1,%edx
08650db8 +0x316:  sub    $0x1,%ebx
08650dbb +0x319:  mov    %eax,%ecx
08650dbd +0x31b:  and    $0x2,%ecx
08650dc0 +0x31e:  test   %ecx,%ecx
08650dc2 +0x320:  je     08650dd3 <+0x331>
08650dc4 +0x322:  movzwl (%edx),%ecx
08650dc7 +0x325:  mov    %cx,(%eax)
08650dca +0x328:  add    $0x2,%eax
08650dcd +0x32b:  add    $0x2,%edx
08650dd0 +0x32e:  sub    $0x2,%ebx
08650dd3 +0x331:  mov    %ebx,%ecx
08650dd5 +0x333:  shr    $0x2,%ecx
08650dd8 +0x336:  mov    %eax,%edi
08650dda +0x338:  mov    %edx,%esi
08650ddc +0x33a:  rep movsl %ds:(%esi),%es:(%edi)
08650dde +0x33c:  mov    %esi,%edx
08650de0 +0x33e:  mov    %edi,%eax
08650de2 +0x340:  mov    $0x0,%ecx
08650de7 +0x345:  mov    %ebx,%esi
08650de9 +0x347:  and    $0x2,%esi
08650dec +0x34a:  test   %esi,%esi
08650dee +0x34c:  je     08650dfb <+0x359>
08650df0 +0x34e:  movzwl (%edx,%ecx,1),%esi
08650df4 +0x352:  mov    %si,(%eax,%ecx,1)
08650df8 +0x356:  add    $0x2,%ecx
08650dfb +0x359:  and    $0x1,%ebx
08650dfe +0x35c:  test   %ebx,%ebx
08650e00 +0x35e:  je     08650e09 <+0x367>
08650e02 +0x360:  movzbl (%edx,%ecx,1),%edx
08650e06 +0x364:  mov    %dl,(%eax,%ecx,1)
08650e09 +0x367:  mov    0x8(%ebp),%eax
08650e0c +0x36a:  mov    %eax,(%esp)
08650e0f +0x36d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08650e14 +0x372:  mov    %eax,%edx
08650e16 +0x374:  mov    -0x1c(%ebp),%eax
08650e19 +0x377:  mov    %dl,0x5d(%eax)
08650e1c +0x37a:  mov    -0x1c(%ebp),%eax
08650e1f +0x37d:  movzbl 0x5(%eax),%eax
08650e23 +0x381:  test   %al,%al
08650e25 +0x383:  je     086511c3 <+0x721>
08650e2b +0x389:  mov    0x8(%ebp),%eax
08650e2e +0x38c:  mov    %eax,(%esp)
08650e31 +0x38f:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08650e36 +0x394:  mov    %eax,%edx
08650e38 +0x396:  mov    -0x1c(%ebp),%eax
08650e3b +0x399:  mov    %edx,0x5e(%eax)
08650e3e +0x39c:  mov    0x8(%ebp),%eax
08650e41 +0x39f:  mov    %eax,(%esp)
08650e44 +0x3a2:  call   086961d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a25
08650e49 +0x3a7:  mov    -0x1c(%ebp),%edx
08650e4c +0x3aa:  mov    %al,0x62(%edx)
08650e4f +0x3ad:  mov    0x8(%ebp),%eax
08650e52 +0x3b0:  mov    %eax,(%esp)
08650e55 +0x3b3:  call   08696306 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2b5b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2b5b
08650e5a +0x3b8:  mov    %eax,%edx
08650e5c +0x3ba:  mov    -0x1c(%ebp),%eax
08650e5f +0x3bd:  mov    %dx,0x63(%eax)
08650e63 +0x3c1:  mov    0x8(%ebp),%eax
08650e66 +0x3c4:  mov    %eax,(%esp)
08650e69 +0x3c7:  call   086963b0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c05>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c05
08650e6e +0x3cc:  mov    -0x1c(%ebp),%edx
08650e71 +0x3cf:  mov    %ax,0x65(%edx)
08650e75 +0x3d3:  mov    0x8(%ebp),%eax
08650e78 +0x3d6:  mov    %eax,(%esp)
08650e7b +0x3d9:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
08650e80 +0x3de:  mov    -0x1c(%ebp),%edx
08650e83 +0x3e1:  mov    %al,0x67(%edx)
08650e86 +0x3e4:  mov    0x8(%ebp),%eax
08650e89 +0x3e7:  mov    %eax,(%esp)
08650e8c +0x3ea:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08650e91 +0x3ef:  mov    -0x1c(%ebp),%edx
08650e94 +0x3f2:  mov    %ax,0x68(%edx)
08650e98 +0x3f6:  mov    0x8(%ebp),%eax
08650e9b +0x3f9:  mov    %eax,(%esp)
08650e9e +0x3fc:  call   085bfb44 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x10a2>  ; global constructors keyed to CParty::cMember::cMember()+0x10a2
08650ea3 +0x401:  mov    -0x1c(%ebp),%edx
08650ea6 +0x404:  mov    %eax,0x6a(%edx)
08650ea9 +0x407:  mov    0x8(%ebp),%eax
08650eac +0x40a:  mov    %eax,(%esp)
08650eaf +0x40d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08650eb4 +0x412:  test   %eax,%eax
08650eb6 +0x414:  setne  %al
08650eb9 +0x417:  test   %al,%al
08650ebb +0x419:  je     08650ee2 <+0x440>
08650ebd +0x41b:  mov    0x8(%ebp),%eax
08650ec0 +0x41e:  mov    %eax,(%esp)
08650ec3 +0x421:  call   0869658c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2de1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2de1
08650ec8 +0x426:  mov    -0x1c(%ebp),%edx
08650ecb +0x429:  add    $0x6e,%edx
08650ece +0x42c:  movl   $0x10,0x8(%esp)
08650ed6 +0x434:  mov    %eax,0x4(%esp)
08650eda +0x438:  mov    %edx,(%esp)
08650edd +0x43b:  call   0807d8a0 <_init+0x198>
08650ee2 +0x440:  mov    0x8(%ebp),%eax
08650ee5 +0x443:  mov    %eax,(%esp)
08650ee8 +0x446:  call   086965ac <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2e01>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2e01
08650eed +0x44b:  mov    -0x1c(%ebp),%edx
08650ef0 +0x44e:  mov    %eax,0x7e(%edx)
08650ef3 +0x451:  mov    0x8(%ebp),%eax
08650ef6 +0x454:  mov    %eax,(%esp)
08650ef9 +0x457:  call   086965d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2e2b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2e2b
08650efe +0x45c:  mov    -0x1c(%ebp),%edx
08650f01 +0x45f:  mov    %eax,0x82(%edx)
08650f07 +0x465:  mov    0x8(%ebp),%eax
08650f0a +0x468:  mov    %eax,(%esp)
08650f0d +0x46b:  call   08696600 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2e55>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2e55
08650f12 +0x470:  mov    -0x1c(%ebp),%edx
08650f15 +0x473:  mov    %eax,0x86(%edx)
08650f1b +0x479:  mov    0x8(%ebp),%eax
08650f1e +0x47c:  mov    %eax,(%esp)
08650f21 +0x47f:  call   08696548 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d9d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d9d
08650f26 +0x484:  mov    -0x1c(%ebp),%edx
08650f29 +0x487:  mov    %eax,0x8a(%edx)
08650f2f +0x48d:  mov    0x8(%ebp),%eax
08650f32 +0x490:  mov    %eax,(%esp)
08650f35 +0x493:  call   0869656a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2dbf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2dbf
08650f3a +0x498:  mov    -0x1c(%ebp),%edx
08650f3d +0x49b:  mov    %eax,0x8e(%edx)
08650f43 +0x4a1:  mov    0x8(%ebp),%eax
08650f46 +0x4a4:  mov    %eax,(%esp)
08650f49 +0x4a7:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
08650f4e +0x4ac:  mov    -0x1c(%ebp),%edx
08650f51 +0x4af:  mov    %eax,0x92(%edx)
08650f57 +0x4b5:  mov    0x8(%ebp),%eax
08650f5a +0x4b8:  mov    %eax,(%esp)
08650f5d +0x4bb:  call   08696930 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3185>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3185
08650f62 +0x4c0:  mov    -0x1c(%ebp),%edx
08650f65 +0x4c3:  mov    %eax,0x96(%edx)
08650f6b +0x4c9:  mov    0x8(%ebp),%eax
08650f6e +0x4cc:  mov    %eax,(%esp)
08650f71 +0x4cf:  call   082f0afa <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x87e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x87e
08650f76 +0x4d4:  mov    -0x1c(%ebp),%edx
08650f79 +0x4d7:  mov    %eax,0x9a(%edx)
08650f7f +0x4dd:  mov    0x8(%ebp),%eax
08650f82 +0x4e0:  mov    %eax,(%esp)
08650f85 +0x4e3:  call   082f0b1c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x8a0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x8a0
08650f8a +0x4e8:  mov    -0x1c(%ebp),%edx
08650f8d +0x4eb:  mov    %eax,0x9e(%edx)
08650f93 +0x4f1:  mov    0x8(%ebp),%eax
08650f96 +0x4f4:  mov    %eax,(%esp)
08650f99 +0x4f7:  call   082f0b3e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x8c2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x8c2
08650f9e +0x4fc:  mov    -0x1c(%ebp),%edx
08650fa1 +0x4ff:  mov    %eax,0xa2(%edx)
08650fa7 +0x505:  mov    0x8(%ebp),%eax
08650faa +0x508:  mov    %eax,(%esp)
08650fad +0x50b:  call   082f0b88 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x90c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x90c
08650fb2 +0x510:  mov    -0x1c(%ebp),%edx
08650fb5 +0x513:  mov    %eax,0xa6(%edx)
08650fbb +0x519:  mov    0x8(%ebp),%eax
08650fbe +0x51c:  mov    %eax,(%esp)
08650fc1 +0x51f:  call   082f0ab6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x83a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x83a
08650fc6 +0x524:  mov    -0x1c(%ebp),%edx
08650fc9 +0x527:  mov    %eax,0xab(%edx)
08650fcf +0x52d:  mov    0x8(%ebp),%eax
08650fd2 +0x530:  mov    %eax,(%esp)
08650fd5 +0x533:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
08650fda +0x538:  mov    -0x1c(%ebp),%edx
08650fdd +0x53b:  mov    %eax,0xaf(%edx)
08650fe3 +0x541:  mov    0x8(%ebp),%eax
08650fe6 +0x544:  mov    %eax,(%esp)
08650fe9 +0x547:  call   0822f816 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ec0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ec0
08650fee +0x54c:  mov    -0x1c(%ebp),%edx
08650ff1 +0x54f:  mov    %al,0xaa(%edx)
08650ff7 +0x555:  mov    0x8(%ebp),%eax
08650ffa +0x558:  mov    %eax,(%esp)
08650ffd +0x55b:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
08651002 +0x560:  mov    -0x1c(%ebp),%edx
08651005 +0x563:  mov    %eax,0xb3(%edx)
0865100b +0x569:  mov    0x8(%ebp),%eax
0865100e +0x56c:  mov    %eax,(%esp)
08651011 +0x56f:  call   085bfc78 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x11d6>  ; global constructors keyed to CParty::cMember::cMember()+0x11d6
08651016 +0x574:  mov    -0x1c(%ebp),%edx
08651019 +0x577:  mov    %eax,0xb7(%edx)
0865101f +0x57d:  mov    0x8(%ebp),%eax
08651022 +0x580:  mov    %eax,(%esp)
08651025 +0x583:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0865102a +0x588:  mov    -0x1c(%ebp),%edx
0865102d +0x58b:  mov    %eax,0xbb(%edx)
08651033 +0x591:  mov    0x8(%ebp),%eax
08651036 +0x594:  mov    %eax,(%esp)
08651039 +0x597:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
0865103e +0x59c:  mov    -0x1c(%ebp),%edx
08651041 +0x59f:  mov    %ax,0xbf(%edx)
08651048 +0x5a6:  mov    0x8(%ebp),%eax
0865104b +0x5a9:  mov    %eax,(%esp)
0865104e +0x5ac:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
08651053 +0x5b1:  mov    -0x1c(%ebp),%edx
08651056 +0x5b4:  mov    %ax,0xc1(%edx)
0865105d +0x5bb:  mov    0x8(%ebp),%eax
08651060 +0x5be:  mov    %eax,(%esp)
08651063 +0x5c1:  call   086961e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a35
08651068 +0x5c6:  mov    -0x1c(%ebp),%edx
0865106b +0x5c9:  mov    %al,0xc3(%edx)
08651071 +0x5cf:  mov    0x8(%ebp),%eax
08651074 +0x5d2:  mov    %eax,(%esp)
08651077 +0x5d5:  call   084ec408 <_GLOBAL__I__Z7getUserj+0x33ba>  ; global constructors keyed to getUser(unsigned int)+0x33ba
0865107c +0x5da:  mov    -0x1c(%ebp),%edx
0865107f +0x5dd:  mov    %eax,0xc4(%edx)
08651085 +0x5e3:  mov    0x8(%ebp),%eax
08651088 +0x5e6:  mov    %eax,(%esp)
0865108b +0x5e9:  call   084ec42a <_GLOBAL__I__Z7getUserj+0x33dc>  ; global constructors keyed to getUser(unsigned int)+0x33dc
08651090 +0x5ee:  mov    -0x1c(%ebp),%edx
08651093 +0x5f1:  mov    %eax,0xc8(%edx)
08651099 +0x5f7:  mov    0x8(%ebp),%eax
0865109c +0x5fa:  mov    %eax,(%esp)
0865109f +0x5fd:  call   08481052 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0xd0>  ; global constructors keyed to CPowerManager::CPowerManager()+0xd0
086510a4 +0x602:  mov    %eax,%edx
086510a6 +0x604:  mov    -0x1c(%ebp),%eax
086510a9 +0x607:  mov    %edx,0xe2(%eax)
086510af +0x60d:  mov    0x8(%ebp),%eax
086510b2 +0x610:  mov    %eax,(%esp)
086510b5 +0x613:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
086510ba +0x618:  mov    -0x1c(%ebp),%edx
086510bd +0x61b:  mov    %ax,0xcc(%edx)
086510c4 +0x622:  mov    0x8(%ebp),%eax
086510c7 +0x625:  mov    %eax,(%esp)
086510ca +0x628:  call   08696952 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x31a7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x31a7
086510cf +0x62d:  mov    %eax,%edx
086510d1 +0x62f:  mov    -0x1c(%ebp),%eax
086510d4 +0x632:  mov    %dx,0xfb(%eax)
086510db +0x639:  mov    0x8(%ebp),%eax
086510de +0x63c:  mov    %eax,(%esp)
086510e1 +0x63f:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086510e6 +0x644:  mov    %eax,%edx
086510e8 +0x646:  mov    -0x1c(%ebp),%eax
086510eb +0x649:  mov    %dl,0xfd(%eax)
086510f1 +0x64f:  mov    0x8(%ebp),%eax
086510f4 +0x652:  mov    %eax,(%esp)
086510f7 +0x655:  call   08696afe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3353>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3353
086510fc +0x65a:  mov    %eax,%edx
086510fe +0x65c:  mov    -0x1c(%ebp),%eax
08651101 +0x65f:  mov    %dl,0xfe(%eax)
08651107 +0x665:  mov    0x8(%ebp),%eax
0865110a +0x668:  mov    %eax,(%esp)
0865110d +0x66b:  call   085bfaec <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x104a>  ; global constructors keyed to CParty::cMember::cMember()+0x104a
08651112 +0x670:  mov    -0x1c(%ebp),%edx
08651115 +0x673:  mov    %al,0xce(%edx)
0865111b +0x679:  mov    0x8(%ebp),%eax
0865111e +0x67c:  mov    %eax,(%esp)
08651121 +0x67f:  call   084ebfb2 <_GLOBAL__I__Z7getUserj+0x2f64>  ; global constructors keyed to getUser(unsigned int)+0x2f64
08651126 +0x684:  mov    -0x1c(%ebp),%edx
08651129 +0x687:  mov    %ax,0xcf(%edx)
08651130 +0x68e:  mov    0x8(%ebp),%eax
08651133 +0x691:  mov    %eax,(%esp)
08651136 +0x694:  call   084ebfc4 <_GLOBAL__I__Z7getUserj+0x2f76>  ; global constructors keyed to getUser(unsigned int)+0x2f76
0865113b +0x699:  mov    -0x1c(%ebp),%edx
0865113e +0x69c:  mov    %eax,0xd1(%edx)
08651144 +0x6a2:  mov    0x8(%ebp),%eax
08651147 +0x6a5:  mov    %eax,(%esp)
0865114a +0x6a8:  call   08696c10 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3465>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3465
0865114f +0x6ad:  mov    -0x1c(%ebp),%edx
08651152 +0x6b0:  mov    %al,0xff(%edx)
08651158 +0x6b6:  mov    0x8(%ebp),%eax
0865115b +0x6b9:  mov    %eax,(%esp)
0865115e +0x6bc:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
08651163 +0x6c1:  mov    -0x1c(%ebp),%edx
08651166 +0x6c4:  mov    %al,0x100(%edx)
0865116c +0x6ca:  mov    0x8(%ebp),%eax
0865116f +0x6cd:  mov    %eax,(%esp)
08651172 +0x6d0:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
08651177 +0x6d5:  mov    -0x1c(%ebp),%edx
0865117a +0x6d8:  mov    %al,0x101(%edx)
08651180 +0x6de:  mov    0x8(%ebp),%eax
08651183 +0x6e1:  mov    %eax,(%esp)
08651186 +0x6e4:  call   0822fb00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51aa
0865118b +0x6e9:  mov    -0x1c(%ebp),%edx
0865118e +0x6ec:  mov    %al,0xd5(%edx)
08651194 +0x6f2:  mov    0x8(%ebp),%eax
08651197 +0x6f5:  mov    %eax,(%esp)
0865119a +0x6f8:  call   0868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>  ; CUserCharacInfo::GetCurCharacChaosResponTime()
0865119f +0x6fd:  mov    -0x1c(%ebp),%edx
086511a2 +0x700:  mov    %eax,0xd6(%edx)
086511a8 +0x706:  mov    0x8(%ebp),%eax
086511ab +0x709:  mov    %eax,(%esp)
086511ae +0x70c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086511b3 +0x711:  mov    %eax,(%esp)
086511b6 +0x714:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
086511bb +0x719:  mov    %eax,(%esp)
086511be +0x71c:  call   082fa0a8 <_ZN8WongWork14CAvatarItemMgr13SaveEnduranceEv>  ; WongWork::CAvatarItemMgr::SaveEndurance()
086511c3 +0x721:  mov    -0x1c(%ebp),%eax
086511c6 +0x724:  movzbl 0x6(%eax),%eax
086511ca +0x728:  test   %al,%al
086511cc +0x72a:  je     0865120b <+0x769>
086511ce +0x72c:  mov    0x8(%ebp),%eax
086511d1 +0x72f:  mov    %eax,(%esp)
086511d4 +0x732:  call   0822f56c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c16
086511d9 +0x737:  mov    -0x1c(%ebp),%edx
086511dc +0x73a:  mov    %al,0xda(%edx)
086511e2 +0x740:  mov    0x8(%ebp),%eax
086511e5 +0x743:  mov    %eax,(%esp)
086511e8 +0x746:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
086511ed +0x74b:  mov    -0x1c(%ebp),%edx
086511f0 +0x74e:  mov    %ax,0xdb(%edx)
086511f7 +0x755:  mov    0x8(%ebp),%eax
086511fa +0x758:  mov    %eax,(%esp)
086511fd +0x75b:  call   082a66b8 <_GLOBAL__I__ZN4CLog5this_E+0x2adf>  ; global constructors keyed to CLog::this_+0x2adf
08651202 +0x760:  mov    -0x1c(%ebp),%edx
08651205 +0x763:  mov    %al,0xdd(%edx)
0865120b +0x769:  mov    -0x1c(%ebp),%eax
0865120e +0x76c:  movzbl 0x7(%eax),%eax
08651212 +0x770:  test   %al,%al
08651214 +0x772:  je     08651255 <+0x7b3>
08651216 +0x774:  mov    0x8(%ebp),%eax
08651219 +0x777:  mov    %eax,(%esp)
0865121c +0x77a:  call   08696018 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x286d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x286d
08651221 +0x77f:  mov    -0x1c(%ebp),%edx
08651224 +0x782:  mov    %al,0x103(%edx)
0865122a +0x788:  mov    0x8(%ebp),%eax
0865122d +0x78b:  mov    %eax,(%esp)
08651230 +0x78e:  call   0869603c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2891>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2891
08651235 +0x793:  mov    -0x1c(%ebp),%edx
08651238 +0x796:  mov    %eax,0x104(%edx)
0865123e +0x79c:  mov    0x8(%ebp),%eax
08651241 +0x79f:  mov    %eax,(%esp)
08651244 +0x7a2:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
08651249 +0x7a7:  mov    %eax,%edx
0865124b +0x7a9:  mov    -0x1c(%ebp),%eax
0865124e +0x7ac:  mov    %dx,0x108(%eax)
08651255 +0x7b3:  mov    0x8(%ebp),%eax
08651258 +0x7b6:  mov    %eax,(%esp)
0865125b +0x7b9:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
08651260 +0x7be:  mov    -0x1c(%ebp),%edx
08651263 +0x7c1:  mov    %eax,0xde(%edx)
08651269 +0x7c7:  mov    0x8(%ebp),%eax
0865126c +0x7ca:  mov    %eax,(%esp)
0865126f +0x7cd:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
08651274 +0x7d2:  mov    -0x1c(%ebp),%edx
08651277 +0x7d5:  mov    %al,0x102(%edx)
0865127d +0x7db:  mov    -0x1c(%ebp),%eax
08651280 +0x7de:  add    $0x102,%eax
08651285 +0x7e3:  movl   $0x0,0x8(%esp)
0865128d +0x7eb:  movl   $0x0,0x4(%esp)
08651295 +0x7f3:  mov    %eax,(%esp)
08651298 +0x7f6:  call   088921c2 <_Z11setBit_ByteRhbi>  ; setBit_Byte(unsigned char&, bool, int)
0865129d +0x7fb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086512a2 +0x800:  lea    -0x28(%ebp),%edx
086512a5 +0x803:  mov    %edx,0x8(%esp)
086512a9 +0x807:  movl   $0x2,0x4(%esp)
086512b1 +0x80f:  mov    %eax,(%esp)
086512b4 +0x812:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086512b9 +0x817:  mov    0x8(%ebp),%eax
086512bc +0x81a:  mov    %eax,(%esp)
086512bf +0x81d:  call   0869622a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a7f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a7f
086512c4 +0x822:  mov    0x8(%ebp),%eax
086512c7 +0x825:  mov    %eax,(%esp)
086512ca +0x828:  call   08696236 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a8b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a8b
086512cf +0x82d:  mov    0x8(%ebp),%eax
086512d2 +0x830:  mov    %eax,(%esp)
086512d5 +0x833:  call   08696242 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a97>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a97
086512da +0x838:  mov    0x8(%ebp),%eax
086512dd +0x83b:  mov    %eax,(%esp)
086512e0 +0x83e:  call   0869624e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2aa3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2aa3
086512e5 +0x843:  mov    0x8(%ebp),%eax
086512e8 +0x846:  mov    %eax,(%esp)
086512eb +0x849:  call   08696d3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3591>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3591
086512f0 +0x84e:  lea    -0x28(%ebp),%eax
086512f3 +0x851:  mov    %eax,(%esp)
086512f6 +0x854:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086512fb +0x859:  jmp    08651319 <+0x877>
086512fd +0x85b:  mov    %edx,%ebx
086512ff +0x85d:  mov    %eax,%esi
08651301 +0x85f:  lea    -0x28(%ebp),%eax
08651304 +0x862:  mov    %eax,(%esp)
08651307 +0x865:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0865130c +0x86a:  mov    %esi,%eax
0865130e +0x86c:  mov    %ebx,%edx
08651310 +0x86e:  mov    %eax,(%esp)
08651313 +0x871:  call   08ae3750 <_Unwind_Resume>
08651318 +0x876:  nop
08651319 +0x877:  add    $0x2c,%esp
0865131c +0x87a:  pop    %ebx
0865131d +0x87b:  pop    %esi
0865131e +0x87c:  pop    %edi
0865131f +0x87d:  pop    %ebp
08651320 +0x87e:  ret
08651321 +0x87f:  nop
```

## 反编译 C

```c
// CUser::_SaveCharacData @ 0x8650aa2

/* CUser::_SaveCharacData() */

void __thiscall CUser::_SaveCharacData(CUser *this)

{
  char cVar1;
  SIG_SAVE_CHARAC SVar2;
  undefined2 uVar3;
  long lVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  int iVar7;
  CDungeonGainedGold *this_00;
  undefined4 uVar8;
  SIG_SAVE_CHARAC *pSVar9;
  void *__src;
  CInventory *this_01;
  CAvatarItemMgr *this_02;
  uint uVar10;
  SIG_SAVE_CHARAC *pSVar11;
  uint uVar12;
  bool bVar13;
  byte bVar14;
  longdouble lVar15;
  CStreamGuard local_2c [8];
  long local_24;
  SIG_SAVE_CHARAC *local_20;
  
  bVar14 = 0;
  lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  SetAccountLastPlayTime(this,lVar4);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this);
  if (cVar1 == '\a') {
    lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::setCurCharacLastPlayTickPowerWar((CUserCharacInfo *)this,lVar4);
    CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)this,0);
    CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  }
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::setCurCharacLastPlayTick((CUserCharacInfo *)this,local_24);
  cVar1 = CUserCharacInfo::isSaveCharacInfo((CUserCharacInfo *)this);
  if (cVar1 != '\x01') {
    cVar1 = CUserCharacInfo::IsSaveCharacStat((CUserCharacInfo *)this);
    if (cVar1 != '\x01') {
      cVar1 = CUserCharacInfo::isSaveCharacEtc((CUserCharacInfo *)this);
      if (cVar1 != '\x01') {
        cVar1 = CUserCharacInfo::IsSaveCharacManageInfo((CUserCharacInfo *)this);
        if (cVar1 != '\x01') {
          bVar13 = true;
          goto LAB_08650b8d;
        }
      }
    }
  }
  bVar13 = false;
LAB_08650b8d:
  if (!bVar13) {
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x19c3);
    CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08650bdf to 086512b8 has its CatchHandler @ 086512fd */
    CStreamGuard::operator<<(pCVar6,0x22);
    iVar7 = GetUID(this);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
    CStreamGuard::operator<<(pCVar6,iVar7);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_CHARAC>(pCVar6);
    memset(local_20,0,0x10d);
    this_00 = (CDungeonGainedGold *)getDungeonGainedGold(this);
    uVar8 = CDungeonGainedGold::getGainedGold(this_00);
    *(undefined4 *)(local_20 + 0xf2) = uVar8;
    uVar8 = get_acc_id(this);
    *(undefined4 *)(local_20 + 0xe6) = uVar8;
    *(undefined4 *)(local_20 + 0xea) = *(undefined4 *)(this + 0x8d110);
    uVar8 = CUserCharacInfo::GetOverTradeGoldCount((CUserCharacInfo *)this);
    *(undefined4 *)(local_20 + 0xee) = uVar8;
    lVar15 = (longdouble)GetRating(this);
    *(float *)(local_20 + 0xf6) = (float)lVar15;
    SVar2 = (SIG_SAVE_CHARAC)GetTutorialSkipable(this);
    local_20[0xfa] = SVar2;
    uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    *(undefined4 *)local_20 = uVar8;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::isSaveCharacInfo((CUserCharacInfo *)this);
    local_20[4] = SVar2;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::IsSaveCharacStat((CUserCharacInfo *)this);
    local_20[5] = SVar2;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::isSaveCharacEtc((CUserCharacInfo *)this);
    local_20[6] = SVar2;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::IsSaveCharacManageInfo((CUserCharacInfo *)this);
    local_20[7] = SVar2;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::isSavedPremiumCubeInfo((CUserCharacInfo *)this);
    local_20[0x10a] = SVar2;
    if (local_20[0x10a] != (SIG_SAVE_CHARAC)0x0) {
      CUserCharacInfo::getContractOfCubePremiumInfo
                ((CUserCharacInfo *)this,(uchar *)(local_20 + 0x10b),(uchar *)(local_20 + 0x10c));
    }
    if (local_20[4] != (SIG_SAVE_CHARAC)0x0) {
      uVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 8) = uVar3;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      local_20[10] = SVar2;
      iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      pSVar9 = local_20 + 0xb;
      pSVar11 = (SIG_SAVE_CHARAC *)(iVar7 + 0x88);
      uVar12 = 0x52;
      bVar13 = ((uint)pSVar9 & 1) != 0;
      if (bVar13) {
        *pSVar9 = *pSVar11;
        pSVar9 = local_20 + 0xc;
        pSVar11 = (SIG_SAVE_CHARAC *)(iVar7 + 0x89);
        uVar12 = 0x51;
      }
      if (((uint)pSVar9 & 2) != 0) {
        *(undefined2 *)pSVar9 = *(undefined2 *)pSVar11;
        pSVar9 = pSVar9 + 2;
        pSVar11 = pSVar11 + 2;
        uVar12 = uVar12 - 2;
      }
      for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pSVar9 = *(undefined4 *)pSVar11;
        pSVar11 = pSVar11 + (uint)bVar14 * -8 + 4;
        pSVar9 = pSVar9 + (uint)bVar14 * -8 + 4;
      }
      iVar7 = 0;
      if ((uVar12 & 2) != 0) {
        *(undefined2 *)pSVar9 = *(undefined2 *)pSVar11;
        iVar7 = 2;
      }
      if (bVar13) {
        pSVar9[iVar7] = pSVar11[iVar7];
      }
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
      local_20[0x5d] = SVar2;
    }
    if (local_20[5] != (SIG_SAVE_CHARAC)0x0) {
      uVar8 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x5e) = uVar8;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurCharacVill4Save((CUserCharacInfo *)this);
      local_20[0x62] = SVar2;
      uVar3 = CUserCharacInfo::GetFatigue((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 99) = uVar3;
      uVar3 = CUserCharacInfo::getCurCharacPremiumFatigue((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0x65) = uVar3;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)this);
      local_20[0x67] = SVar2;
      uVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0x68) = uVar3;
      uVar8 = CUserCharacInfo::getCurCharacTutorialFlag((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x6a) = uVar8;
      iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (iVar7 != 0) {
        __src = (void *)CUserCharacInfo::getCurCharacEscaladeTutorialFlag((CUserCharacInfo *)this);
        memcpy(local_20 + 0x6e,__src,0x10);
      }
      uVar8 = CUserCharacInfo::getCurCharacTradeGoldTotal((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x7e) = uVar8;
      uVar8 = CUserCharacInfo::getCurCharacTradeGoldTotalBillion((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x82) = uVar8;
      uVar8 = CUserCharacInfo::getCurCharacTradeGoldDaily((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x86) = uVar8;
      uVar8 = CUserCharacInfo::getCurCharacDungeonHelpAbuseRatio((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x8a) = uVar8;
      uVar8 = CUserCharacInfo::getCurCharacDungeonHelpAbuseExp((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x8e) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x92) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosExp((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x96) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosModeCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x9a) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosKillCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x9e) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosDieCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xa2) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xa6) = uVar8;
      uVar8 = CUserCharacInfo::GetAssaultCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xab) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xaf) = uVar8;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::GetOpencoin((CUserCharacInfo *)this);
      local_20[0xaa] = SVar2;
      uVar8 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xb3) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacDungeonPlayCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xb7) = uVar8;
      uVar8 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xbb) = uVar8;
      uVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xbf) = uVar3;
      uVar3 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xc1) = uVar3;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurCharacVillPrev((CUserCharacInfo *)this);
      local_20[0xc3] = SVar2;
      uVar8 = CUserCharacInfo::GetPowerWarAssaultCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xc4) = uVar8;
      uVar8 = CUserCharacInfo::GetPowerWarAssaultVictoryCount((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 200) = uVar8;
      uVar8 = CUserCharacInfo::getCurCharacLastPlayTickPowerWar((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xe2) = uVar8;
      uVar3 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xcc) = uVar3;
      uVar3 = CUserCharacInfo::GetCurCharacEmotion((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xfb) = uVar3;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      local_20[0xfd] = SVar2;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::GetCurExEquipSlotStat((CUserCharacInfo *)this);
      local_20[0xfe] = SVar2;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getMemberDungeonFlag((CUserCharacInfo *)this);
      local_20[0xce] = SVar2;
      uVar3 = CUserCharacInfo::getCurCharacMemberBonusFatigue((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xcf) = uVar3;
      uVar8 = CUserCharacInfo::getCurCharacLastPlayDungeonIndex((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xd1) = uVar8;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurEquipslotFlag((CUserCharacInfo *)this);
      local_20[0xff] = SVar2;
      SVar2 = (SIG_SAVE_CHARAC)
              CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
      local_20[0x100] = SVar2;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)this)
      ;
      local_20[0x101] = SVar2;
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::get_growth_power_reward((CUserCharacInfo *)this);
      local_20[0xd5] = SVar2;
      uVar8 = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0xd6) = uVar8;
      this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      this_02 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(this_01);
      WongWork::CAvatarItemMgr::SaveEndurance(this_02);
    }
    if (local_20[6] != (SIG_SAVE_CHARAC)0x0) {
      SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::get_guild_create_right((CUserCharacInfo *)this);
      local_20[0xda] = SVar2;
      uVar3 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0xdb) = uVar3;
      SVar2 = (SIG_SAVE_CHARAC)
              CUserCharacInfo::getCurCharacEventCharacterGrowtype((CUserCharacInfo *)this);
      local_20[0xdd] = SVar2;
    }
    if (local_20[7] != (SIG_SAVE_CHARAC)0x0) {
      SVar2 = (SIG_SAVE_CHARAC)
              CUserCharacInfo::getCurCharacStrikerSkillIndex((CUserCharacInfo *)this);
      local_20[0x103] = SVar2;
      uVar8 = CUserCharacInfo::getCurCharacTagCharacNo((CUserCharacInfo *)this);
      *(undefined4 *)(local_20 + 0x104) = uVar8;
      uVar3 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)this);
      *(undefined2 *)(local_20 + 0x108) = uVar3;
    }
    uVar8 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)this);
    *(undefined4 *)(local_20 + 0xde) = uVar8;
    SVar2 = (SIG_SAVE_CHARAC)CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)this);
    local_20[0x102] = SVar2;
    setBit_Byte((uchar *)(local_20 + 0x102),false,0);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    CUserCharacInfo::disableSaveCharacInfo((CUserCharacInfo *)this);
    CUserCharacInfo::disableSaveCharacStat((CUserCharacInfo *)this);
    CUserCharacInfo::disableSaveCharacEtc((CUserCharacInfo *)this);
    CUserCharacInfo::disableSaveCharacManageInfo((CUserCharacInfo *)this);
    CUserCharacInfo::disableSavedPremiumCubeInfo((CUserCharacInfo *)this);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}
```
