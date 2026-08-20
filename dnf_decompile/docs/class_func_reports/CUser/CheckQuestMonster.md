# CheckQuestMonster

`_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE`

`CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866cb04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866cb04  _ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE
#           CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
# range [0x0866cb04, 0x0866d933]
0866cb04 +0x000:  push   %ebp
0866cb05 +0x001:  mov    %esp,%ebp
0866cb07 +0x003:  push   %esi
0866cb08 +0x004:  push   %ebx
0866cb09 +0x005:  sub    $0x1d0,%esp
0866cb0f +0x00b:  mov    0x8(%ebp),%eax
0866cb12 +0x00e:  mov    %eax,(%esp)
0866cb15 +0x011:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
0866cb1a +0x016:  mov    %eax,-0x64(%ebp)
0866cb1d +0x019:  movl   $0x0,-0x60(%ebp)
0866cb24 +0x020:  jmp    0866d91a <+0xe16>
0866cb29 +0x025:  mov    -0x60(%ebp),%edx
0866cb2c +0x028:  mov    -0x64(%ebp),%eax
0866cb2f +0x02b:  add    $0x1d4c,%edx
0866cb35 +0x031:  mov    0x8(%eax,%edx,4),%eax
0866cb39 +0x035:  test   %eax,%eax
0866cb3b +0x037:  jle    0866d912 <+0xe0e>
0866cb41 +0x03d:  mov    -0x60(%ebp),%edx
0866cb44 +0x040:  mov    -0x64(%ebp),%eax
0866cb47 +0x043:  add    $0x1d4c,%edx
0866cb4d +0x049:  mov    0x8(%eax,%edx,4),%ebx
0866cb51 +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866cb56 +0x052:  mov    %ebx,0x4(%esp)
0866cb5a +0x056:  mov    %eax,(%esp)
0866cb5d +0x059:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866cb62 +0x05e:  mov    %eax,-0x5c(%ebp)
0866cb65 +0x061:  cmpl   $0x0,-0x5c(%ebp)
0866cb69 +0x065:  jne    0866cbb0 <+0xac>
0866cb6b +0x067:  mov    -0x60(%ebp),%edx
0866cb6e +0x06a:  mov    -0x64(%ebp),%eax
0866cb71 +0x06d:  add    $0x1d4c,%edx
0866cb77 +0x073:  mov    0x8(%eax,%edx,4),%eax
0866cb7b +0x077:  mov    %eax,0x14(%esp)
0866cb7f +0x07b:  movl   $"G_CDataManager()->find_quest(%d) fail",0x10(%esp)
0866cb87 +0x083:  movl   $0x54f7,0xc(%esp)
0866cb8f +0x08b:  movl   $&_ZZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
0866cb97 +0x093:  movl   $"user.cpp",0x4(%esp)
0866cb9f +0x09b:  movl   $0x1,(%esp)
0866cba6 +0x0a2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0866cbab +0x0a7:  jmp    0866d916 <+0xe12>
0866cbb0 +0x0ac:  mov    -0x5c(%ebp),%eax
0866cbb3 +0x0af:  mov    0x8(%eax),%eax
0866cbb6 +0x0b2:  cmp    $0x4,%eax
0866cbb9 +0x0b5:  je     0866cbde <+0xda>
0866cbbb +0x0b7:  mov    -0x5c(%ebp),%eax
0866cbbe +0x0ba:  mov    0x8(%eax),%eax
0866cbc1 +0x0bd:  cmp    $0x3,%eax
0866cbc4 +0x0c0:  je     0866cbde <+0xda>
0866cbc6 +0x0c2:  mov    -0x60(%ebp),%edx
0866cbc9 +0x0c5:  mov    -0x64(%ebp),%eax
0866cbcc +0x0c8:  add    $0x1d60,%edx
0866cbd2 +0x0ce:  mov    0x8(%eax,%edx,4),%eax
0866cbd6 +0x0d2:  test   %eax,%eax
0866cbd8 +0x0d4:  je     0866d915 <+0xe11>
0866cbde +0x0da:  lea    -0x84(%ebp),%eax
0866cbe4 +0x0e0:  mov    %eax,(%esp)
0866cbe7 +0x0e3:  call   08383696 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13136>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13136
0866cbec +0x0e8:  mov    -0x64(%ebp),%eax
0866cbef +0x0eb:  movzwl 0x75da(%eax),%eax
0866cbf6 +0x0f2:  cwtl
0866cbf7 +0x0f3:  lea    -0x84(%ebp),%edx
0866cbfd +0x0f9:  mov    %edx,0x14(%esp)
0866cc01 +0x0fd:  mov    0x14(%ebp),%edx
0866cc04 +0x100:  mov    %edx,0x10(%esp)
0866cc08 +0x104:  mov    0x10(%ebp),%edx
0866cc0b +0x107:  mov    %edx,0xc(%esp)
0866cc0f +0x10b:  mov    %eax,0x8(%esp)
0866cc13 +0x10f:  mov    0xc(%ebp),%eax
0866cc16 +0x112:  mov    %eax,0x4(%esp)
0866cc1a +0x116:  mov    -0x5c(%ebp),%eax
0866cc1d +0x119:  mov    %eax,(%esp)
0866cc20 +0x11c:  call   083535d6 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE>  ; Quest::CheckKillMonster(int, int, int, ENUM_QUEST_ENEMY_TYPE, std::vector<MonsterKillItem, std::allocator<MonsterKillItem> >&) const
0866cc25 +0x121:  xor    $0x1,%eax
0866cc28 +0x124:  test   %al,%al
0866cc2a +0x126:  jne    0866d902 <+0xdfe>
0866cc30 +0x12c:  lea    -0x84(%ebp),%eax
0866cc36 +0x132:  mov    %eax,(%esp)
0866cc39 +0x135:  call   08390ebc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2095c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2095c
0866cc3e +0x13a:  test   %al,%al
0866cc40 +0x13c:  jne    0866d8fb <+0xdf7>
0866cc46 +0x142:  lea    -0xc0(%ebp),%eax
0866cc4c +0x148:  mov    %eax,(%esp)
0866cc4f +0x14b:  call   0869388e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xe3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xe3
0866cc54 +0x150:  movl   $0x0,-0x58(%ebp)
0866cc5b +0x157:  movl   $0x0,-0x54(%ebp)
0866cc62 +0x15e:  movl   $0x0,-0x50(%ebp)
0866cc69 +0x165:  movl   $0x0,-0x4c(%ebp)
0866cc70 +0x16c:  lea    -0x84(%ebp),%eax
0866cc76 +0x172:  mov    %eax,(%esp)
0866cc79 +0x175:  call   08390f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209a0
0866cc7e +0x17a:  mov    %eax,(%esp)
0866cc81 +0x17d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0866cc86 +0x182:  mov    %eax,-0x48(%ebp)
0866cc89 +0x185:  cmpl   $0x0,-0x48(%ebp)
0866cc8d +0x189:  js     0866cca9 <+0x1a5>
0866cc8f +0x18b:  lea    -0x84(%ebp),%eax
0866cc95 +0x191:  mov    %eax,(%esp)
0866cc98 +0x194:  call   08390f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209a0
0866cc9d +0x199:  cmp    -0x48(%ebp),%eax
0866cca0 +0x19c:  jle    0866cca9 <+0x1a5>
0866cca2 +0x19e:  mov    $0x1,%eax
0866cca7 +0x1a3:  jmp    0866ccae <+0x1aa>
0866cca9 +0x1a5:  mov    $0x0,%eax
0866ccae +0x1aa:  test   %al,%al
0866ccb0 +0x1ac:  je     0866d8fe <+0xdfa>
0866ccb6 +0x1b2:  mov    -0x48(%ebp),%eax
0866ccb9 +0x1b5:  mov    %eax,0x4(%esp)
0866ccbd +0x1b9:  lea    -0x84(%ebp),%eax
0866ccc3 +0x1bf:  mov    %eax,(%esp)
0866ccc6 +0x1c2:  call   0869b126 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x797b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x797b
0866cccb +0x1c7:  mov    (%eax),%edx
0866cccd +0x1c9:  mov    %edx,-0xc0(%ebp)
0866ccd3 +0x1cf:  mov    0x4(%eax),%edx
0866ccd6 +0x1d2:  mov    %edx,-0xbc(%ebp)
0866ccdc +0x1d8:  mov    0x8(%eax),%edx
0866ccdf +0x1db:  mov    %edx,-0xb8(%ebp)
0866cce5 +0x1e1:  mov    0xc(%eax),%edx
0866cce8 +0x1e4:  mov    %edx,-0xb4(%ebp)
0866ccee +0x1ea:  mov    0x10(%eax),%edx
0866ccf1 +0x1ed:  mov    %edx,-0xb0(%ebp)
0866ccf7 +0x1f3:  mov    0x14(%eax),%edx
0866ccfa +0x1f6:  mov    %edx,-0xac(%ebp)
0866cd00 +0x1fc:  mov    0x18(%eax),%edx
0866cd03 +0x1ff:  mov    %edx,-0xa8(%ebp)
0866cd09 +0x205:  mov    0x1c(%eax),%eax
0866cd0c +0x208:  mov    %eax,-0xa4(%ebp)
0866cd12 +0x20e:  mov    -0xb0(%ebp),%eax
0866cd18 +0x214:  mov    %eax,-0x58(%ebp)
0866cd1b +0x217:  mov    -0xa4(%ebp),%eax
0866cd21 +0x21d:  mov    %eax,-0x54(%ebp)
0866cd24 +0x220:  movl   $0x0,-0x44(%ebp)
0866cd2b +0x227:  movl   $0x0,-0x34(%ebp)
0866cd32 +0x22e:  jmp    0866cdac <+0x2a8>
0866cd34 +0x230:  mov    0x8(%ebp),%eax
0866cd37 +0x233:  mov    %eax,(%esp)
0866cd3a +0x236:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866cd3f +0x23b:  mov    -0x34(%ebp),%edx
0866cd42 +0x23e:  mov    %edx,0x8(%esp)
0866cd46 +0x242:  movl   $0x0,0x4(%esp)
0866cd4e +0x24a:  mov    %eax,(%esp)
0866cd51 +0x24d:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0866cd56 +0x252:  mov    %eax,-0x30(%ebp)
0866cd59 +0x255:  cmpl   $0x0,-0x30(%ebp)
0866cd5d +0x259:  je     0866cda8 <+0x2a4>
0866cd5f +0x25b:  mov    -0x30(%ebp),%eax
0866cd62 +0x25e:  mov    0x2(%eax),%eax
0866cd65 +0x261:  test   %eax,%eax
0866cd67 +0x263:  je     0866cda8 <+0x2a4>
0866cd69 +0x265:  mov    -0xa8(%ebp),%ebx
0866cd6f +0x26b:  mov    -0x30(%ebp),%eax
0866cd72 +0x26e:  lea    0x2(%eax),%esi
0866cd75 +0x271:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866cd7a +0x276:  mov    0xc(%eax),%eax
0866cd7d +0x279:  mov    %esi,0x4(%esp)
0866cd81 +0x27d:  mov    %eax,(%esp)
0866cd84 +0x280:  call   0869476e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xfc3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xfc3
0866cd89 +0x285:  mov    %ebx,%ecx
0866cd8b +0x287:  imul   %eax,%ecx
0866cd8e +0x28a:  mov    $0x51eb851f,%edx
0866cd93 +0x28f:  mov    %ecx,%eax
0866cd95 +0x291:  imul   %edx
0866cd97 +0x293:  sar    $0x5,%edx
0866cd9a +0x296:  mov    %ecx,%eax
0866cd9c +0x298:  sar    $0x1f,%eax
0866cd9f +0x29b:  mov    %edx,%ecx
0866cda1 +0x29d:  sub    %eax,%ecx
0866cda3 +0x29f:  mov    %ecx,%eax
0866cda5 +0x2a1:  add    %eax,-0x44(%ebp)
0866cda8 +0x2a4:  addl   $0x1,-0x34(%ebp)
0866cdac +0x2a8:  cmpl   $0x19,-0x34(%ebp)
0866cdb0 +0x2ac:  setle  %al
0866cdb3 +0x2af:  test   %al,%al
0866cdb5 +0x2b1:  jne    0866cd34 <+0x230>
0866cdbb +0x2b7:  mov    -0xa8(%ebp),%eax
0866cdc1 +0x2bd:  mov    %eax,0x4(%esp)
0866cdc5 +0x2c1:  mov    0x8(%ebp),%eax
0866cdc8 +0x2c4:  mov    %eax,(%esp)
0866cdcb +0x2c7:  call   085d12ee <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri>  ; expert_job::CAlchemist::GetQuestItemDropRate(CUser*, int)
0866cdd0 +0x2cc:  mov    %eax,-0x4c(%ebp)
0866cdd3 +0x2cf:  mov    -0x44(%ebp),%eax
0866cdd6 +0x2d2:  add    %eax,-0x4c(%ebp)
0866cdd9 +0x2d5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0866cdde +0x2da:  mov    0x1a8(%eax),%eax
0866cde4 +0x2e0:  cmp    $0x2,%eax
0866cde7 +0x2e3:  sete   %al
0866cdea +0x2e6:  test   %al,%al
0866cdec +0x2e8:  je     0866ce60 <+0x35c>
0866cdee +0x2ea:  mov    0x8(%ebp),%eax
0866cdf1 +0x2ed:  mov    %eax,(%esp)
0866cdf4 +0x2f0:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0866cdf9 +0x2f5:  mov    %eax,-0x2c(%ebp)
0866cdfc +0x2f8:  cmpl   $0x0,-0x2c(%ebp)
0866ce00 +0x2fc:  je     0866ce60 <+0x35c>
0866ce02 +0x2fe:  mov    -0x2c(%ebp),%eax
0866ce05 +0x301:  mov    %eax,(%esp)
0866ce08 +0x304:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0866ce0d +0x309:  mov    %eax,-0x28(%ebp)
0866ce10 +0x30c:  cmpl   $0x0,-0x28(%ebp)
0866ce14 +0x310:  jle    0866ce2d <+0x329>
0866ce16 +0x312:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866ce1b +0x317:  mov    -0x28(%ebp),%edx
0866ce1e +0x31a:  sub    $0x1,%edx
0866ce21 +0x31d:  add    $0xf8,%edx
0866ce27 +0x323:  mov    0x10(%eax,%edx,4),%eax
0866ce2b +0x327:  jmp    0866ce32 <+0x32e>
0866ce2d +0x329:  mov    $0x3f800000,%eax
0866ce32 +0x32e:  mov    %eax,-0x24(%ebp)
0866ce35 +0x331:  fildl  -0x4c(%ebp)
0866ce38 +0x334:  fmuls  -0x24(%ebp)
0866ce3b +0x337:  fnstcw -0x16a(%ebp)
0866ce41 +0x33d:  movzwl -0x16a(%ebp),%eax
0866ce48 +0x344:  mov    $0xc,%ah
0866ce4a +0x346:  mov    %ax,-0x16c(%ebp)
0866ce51 +0x34d:  fldcw  -0x16c(%ebp)
0866ce57 +0x353:  fistpl -0x4c(%ebp)
0866ce5a +0x356:  fldcw  -0x16a(%ebp)
0866ce60 +0x35c:  movl   $0x4f,0x4(%esp)
0866ce68 +0x364:  mov    0x8(%ebp),%eax
0866ce6b +0x367:  mov    %eax,(%esp)
0866ce6e +0x36a:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0866ce73 +0x36f:  test   %al,%al
0866ce75 +0x371:  je     0866ceb8 <+0x3b4>
0866ce77 +0x373:  mov    -0xa8(%ebp),%eax
0866ce7d +0x379:  mov    %eax,%ebx
0866ce7f +0x37b:  movl   $0x4f,0x4(%esp)
0866ce87 +0x383:  mov    0x8(%ebp),%eax
0866ce8a +0x386:  mov    %eax,(%esp)
0866ce8d +0x389:  call   0869733e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3b93>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3b93
0866ce92 +0x38e:  mov    %eax,-0x17c(%ebp)
0866ce98 +0x394:  mov    $0x51eb851f,%edx
0866ce9d +0x399:  mov    -0x17c(%ebp),%eax
0866cea3 +0x39f:  mul    %edx
0866cea5 +0x3a1:  mov    %edx,%eax
0866cea7 +0x3a3:  shr    $0x5,%eax
0866ceaa +0x3a6:  mov    %ebx,%edx
0866ceac +0x3a8:  imul   %eax,%edx
0866ceaf +0x3ab:  mov    -0x4c(%ebp),%eax
0866ceb2 +0x3ae:  lea    (%edx,%eax,1),%eax
0866ceb5 +0x3b1:  mov    %eax,-0x4c(%ebp)
0866ceb8 +0x3b4:  mov    -0xac(%ebp),%eax
0866cebe +0x3ba:  mov    %eax,-0x50(%ebp)
0866cec1 +0x3bd:  movl   $0x0,-0x40(%ebp)
0866cec8 +0x3c4:  movl   $0x0,-0x20(%ebp)
0866cecf +0x3cb:  jmp    0866ceef <+0x3eb>
0866ced1 +0x3cd:  movl   $0x64,(%esp)
0866ced8 +0x3d4:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0866cedd +0x3d9:  cmp    -0x4c(%ebp),%eax
0866cee0 +0x3dc:  setl   %al
0866cee3 +0x3df:  test   %al,%al
0866cee5 +0x3e1:  je     0866ceeb <+0x3e7>
0866cee7 +0x3e3:  addl   $0x1,-0x40(%ebp)
0866ceeb +0x3e7:  addl   $0x1,-0x20(%ebp)
0866ceef +0x3eb:  mov    -0x20(%ebp),%eax
0866cef2 +0x3ee:  cmp    -0x50(%ebp),%eax
0866cef5 +0x3f1:  setl   %al
0866cef8 +0x3f4:  test   %al,%al
0866cefa +0x3f6:  jne    0866ced1 <+0x3cd>
0866cefc +0x3f8:  cmpl   $0x0,-0x40(%ebp)
0866cf00 +0x3fc:  je     0866d901 <+0xdfd>
0866cf06 +0x402:  lea    -0x11d(%ebp),%eax
0866cf0c +0x408:  mov    %eax,(%esp)
0866cf0f +0x40b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866cf14 +0x410:  lea    -0x15a(%ebp),%eax
0866cf1a +0x416:  mov    %eax,(%esp)
0866cf1d +0x419:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866cf22 +0x41e:  mov    -0x58(%ebp),%eax
0866cf25 +0x421:  mov    %eax,-0x11b(%ebp)
0866cf2b +0x427:  mov    -0x11b(%ebp),%eax
0866cf31 +0x42d:  mov    %eax,%ebx
0866cf33 +0x42f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866cf38 +0x434:  mov    %ebx,0x4(%esp)
0866cf3c +0x438:  mov    %eax,(%esp)
0866cf3f +0x43b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0866cf44 +0x440:  mov    %eax,-0x38(%ebp)
0866cf47 +0x443:  mov    -0x38(%ebp),%eax
0866cf4a +0x446:  mov    (%eax),%eax
0866cf4c +0x448:  add    $0x8,%eax
0866cf4f +0x44b:  mov    (%eax),%edx
0866cf51 +0x44d:  lea    -0x11d(%ebp),%eax
0866cf57 +0x453:  mov    %eax,0x4(%esp)
0866cf5b +0x457:  mov    -0x38(%ebp),%eax
0866cf5e +0x45a:  mov    %eax,(%esp)
0866cf61 +0x45d:  call   *%edx
0866cf63 +0x45f:  mov    -0x40(%ebp),%eax
0866cf66 +0x462:  mov    %eax,0x4(%esp)
0866cf6a +0x466:  lea    -0x11d(%ebp),%eax
0866cf70 +0x46c:  mov    %eax,(%esp)
0866cf73 +0x46f:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0866cf78 +0x474:  cmpl   $0x3e7,-0x40(%ebp)
0866cf7f +0x47b:  jle    0866cfe3 <+0x4df>
0866cf81 +0x47d:  mov    -0x60(%ebp),%edx
0866cf84 +0x480:  mov    -0x64(%ebp),%eax
0866cf87 +0x483:  add    $0x1d4c,%edx
0866cf8d +0x489:  mov    0x8(%eax,%edx,4),%esi
0866cf91 +0x48d:  mov    -0x11b(%ebp),%ebx
0866cf97 +0x493:  movl   $0x5,0xc(%esp)
0866cf9f +0x49b:  movl   $0x5579,0x8(%esp)
0866cfa7 +0x4a3:  movl   $&_ZZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
0866cfaf +0x4ab:  lea    -0x78(%ebp),%eax
0866cfb2 +0x4ae:  mov    %eax,(%esp)
0866cfb5 +0x4b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0866cfba +0x4b6:  mov    %esi,0x10(%esp)
0866cfbe +0x4ba:  mov    -0x40(%ebp),%eax
0866cfc1 +0x4bd:  mov    %eax,0xc(%esp)
0866cfc5 +0x4c1:  mov    %ebx,0x8(%esp)
0866cfc9 +0x4c5:  movl   $"CUser::CheckQuestMonster, mon_item.item.set_add_info , ITEM #%d, %d , QUEST#%d",0x4(%esp)
0866cfd1 +0x4cd:  lea    -0x78(%ebp),%eax
0866cfd4 +0x4d0:  mov    %eax,(%esp)
0866cfd7 +0x4d3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866cfdc +0x4d8:  movl   $0x3e8,-0x40(%ebp)
0866cfe3 +0x4df:  lea    -0x90(%ebp),%eax
0866cfe9 +0x4e5:  mov    %eax,(%esp)
0866cfec +0x4e8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866cff1 +0x4ed:  movl   $0xe,0x8(%esp)
0866cff9 +0x4f5:  movl   $0x0,0x4(%esp)
0866d001 +0x4fd:  lea    -0x90(%ebp),%eax
0866d007 +0x503:  mov    %eax,(%esp)
0866d00a +0x506:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866d00f +0x50b:  movl   $0x0,0x4(%esp)
0866d017 +0x513:  lea    -0x90(%ebp),%eax
0866d01d +0x519:  mov    %eax,(%esp)
0866d020 +0x51c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d025 +0x521:  movl   $0x1,0x4(%esp)
0866d02d +0x529:  lea    -0x90(%ebp),%eax
0866d033 +0x52f:  mov    %eax,(%esp)
0866d036 +0x532:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d03b +0x537:  mov    0x8(%ebp),%eax
0866d03e +0x53a:  mov    %eax,(%esp)
0866d041 +0x53d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866d046 +0x542:  lea    -0x15a(%ebp),%edx
0866d04c +0x548:  mov    %edx,0x8(%esp)
0866d050 +0x54c:  mov    -0x58(%ebp),%edx
0866d053 +0x54f:  mov    %edx,0x4(%esp)
0866d057 +0x553:  mov    %eax,(%esp)
0866d05a +0x556:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
0866d05f +0x55b:  mov    %eax,-0x3c(%ebp)
0866d062 +0x55e:  cmpl   $0x0,-0x3c(%ebp)
0866d066 +0x562:  jns    0866d3b9 <+0x8b5>
0866d06c +0x568:  mov    0x8(%ebp),%eax
0866d06f +0x56b:  mov    %eax,(%esp)
0866d072 +0x56e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866d077 +0x573:  movl   $0x1,0x4c(%esp)
0866d07f +0x57b:  movl   $0x1,0x48(%esp)
0866d087 +0x583:  movl   $0x8,0x44(%esp)
0866d08f +0x58b:  mov    -0x11d(%ebp),%edx
0866d095 +0x591:  mov    %edx,0x4(%esp)
0866d099 +0x595:  mov    -0x119(%ebp),%edx
0866d09f +0x59b:  mov    %edx,0x8(%esp)
0866d0a3 +0x59f:  mov    -0x115(%ebp),%edx
0866d0a9 +0x5a5:  mov    %edx,0xc(%esp)
0866d0ad +0x5a9:  mov    -0x111(%ebp),%edx
0866d0b3 +0x5af:  mov    %edx,0x10(%esp)
0866d0b7 +0x5b3:  mov    -0x10d(%ebp),%edx
0866d0bd +0x5b9:  mov    %edx,0x14(%esp)
0866d0c1 +0x5bd:  mov    -0x109(%ebp),%edx
0866d0c7 +0x5c3:  mov    %edx,0x18(%esp)
0866d0cb +0x5c7:  mov    -0x105(%ebp),%edx
0866d0d1 +0x5cd:  mov    %edx,0x1c(%esp)
0866d0d5 +0x5d1:  mov    -0x101(%ebp),%edx
0866d0db +0x5d7:  mov    %edx,0x20(%esp)
0866d0df +0x5db:  mov    -0xfd(%ebp),%edx
0866d0e5 +0x5e1:  mov    %edx,0x24(%esp)
0866d0e9 +0x5e5:  mov    -0xf9(%ebp),%edx
0866d0ef +0x5eb:  mov    %edx,0x28(%esp)
0866d0f3 +0x5ef:  mov    -0xf5(%ebp),%edx
0866d0f9 +0x5f5:  mov    %edx,0x2c(%esp)
0866d0fd +0x5f9:  mov    -0xf1(%ebp),%edx
0866d103 +0x5ff:  mov    %edx,0x30(%esp)
0866d107 +0x603:  mov    -0xed(%ebp),%edx
0866d10d +0x609:  mov    %edx,0x34(%esp)
0866d111 +0x60d:  mov    -0xe9(%ebp),%edx
0866d117 +0x613:  mov    %edx,0x38(%esp)
0866d11b +0x617:  mov    -0xe5(%ebp),%edx
0866d121 +0x61d:  mov    %edx,0x3c(%esp)
0866d125 +0x621:  movzbl -0xe1(%ebp),%edx
0866d12c +0x628:  mov    %dl,0x40(%esp)
0866d130 +0x62c:  mov    %eax,(%esp)
0866d133 +0x62f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0866d138 +0x634:  mov    %eax,-0x1c(%ebp)
0866d13b +0x637:  cmpl   $0x0,-0x1c(%ebp)
0866d13f +0x63b:  jle    0866d3af <+0x8ab>
0866d145 +0x641:  mov    -0x1c(%ebp),%eax
0866d148 +0x644:  mov    %eax,0x4(%esp)
0866d14c +0x648:  lea    -0x90(%ebp),%eax
0866d152 +0x64e:  mov    %eax,(%esp)
0866d155 +0x651:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d15a +0x656:  mov    -0x58(%ebp),%eax
0866d15d +0x659:  mov    %eax,0x4(%esp)
0866d161 +0x65d:  lea    -0x90(%ebp),%eax
0866d167 +0x663:  mov    %eax,(%esp)
0866d16a +0x666:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d16f +0x66b:  lea    -0x11d(%ebp),%eax
0866d175 +0x671:  mov    %eax,(%esp)
0866d178 +0x674:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d17d +0x679:  mov    %eax,0x4(%esp)
0866d181 +0x67d:  lea    -0x90(%ebp),%eax
0866d187 +0x683:  mov    %eax,(%esp)
0866d18a +0x686:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d18f +0x68b:  lea    -0x11d(%ebp),%eax
0866d195 +0x691:  mov    %eax,(%esp)
0866d198 +0x694:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0866d19d +0x699:  movzbl %al,%eax
0866d1a0 +0x69c:  mov    %eax,0x4(%esp)
0866d1a4 +0x6a0:  lea    -0x90(%ebp),%eax
0866d1aa +0x6a6:  mov    %eax,(%esp)
0866d1ad +0x6a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d1b2 +0x6ae:  movzwl -0x112(%ebp),%eax
0866d1b9 +0x6b5:  movzwl %ax,%eax
0866d1bc +0x6b8:  mov    %eax,0x4(%esp)
0866d1c0 +0x6bc:  lea    -0x90(%ebp),%eax
0866d1c6 +0x6c2:  mov    %eax,(%esp)
0866d1c9 +0x6c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d1ce +0x6ca:  movl   $0x0,0x4(%esp)
0866d1d6 +0x6d2:  lea    -0x90(%ebp),%eax
0866d1dc +0x6d8:  mov    %eax,(%esp)
0866d1df +0x6db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d1e4 +0x6e0:  mov    -0x110(%ebp),%eax
0866d1ea +0x6e6:  mov    %eax,0x4(%esp)
0866d1ee +0x6ea:  lea    -0x90(%ebp),%eax
0866d1f4 +0x6f0:  mov    %eax,(%esp)
0866d1f7 +0x6f3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d1fc +0x6f8:  lea    -0x11d(%ebp),%eax
0866d202 +0x6fe:  add    $0x11,%eax
0866d205 +0x701:  mov    %eax,(%esp)
0866d208 +0x704:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0866d20d +0x709:  movzbl %al,%eax
0866d210 +0x70c:  mov    %eax,0x4(%esp)
0866d214 +0x710:  lea    -0x90(%ebp),%eax
0866d21a +0x716:  mov    %eax,(%esp)
0866d21d +0x719:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d222 +0x71e:  lea    -0x11d(%ebp),%eax
0866d228 +0x724:  add    $0x11,%eax
0866d22b +0x727:  mov    %eax,(%esp)
0866d22e +0x72a:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0866d233 +0x72f:  movzwl %ax,%eax
0866d236 +0x732:  mov    %eax,0x4(%esp)
0866d23a +0x736:  lea    -0x90(%ebp),%eax
0866d240 +0x73c:  mov    %eax,(%esp)
0866d243 +0x73f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d248 +0x744:  lea    -0x11d(%ebp),%eax
0866d24e +0x74a:  mov    %eax,(%esp)
0866d251 +0x74d:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0866d256 +0x752:  test   %al,%al
0866d258 +0x754:  je     0866d358 <+0x854>
0866d25e +0x75a:  movl   $0x1e,0x4(%esp)
0866d266 +0x762:  lea    -0x90(%ebp),%eax
0866d26c +0x768:  mov    %eax,(%esp)
0866d26f +0x76b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d274 +0x770:  lea    -0x11d(%ebp),%eax
0866d27a +0x776:  mov    %eax,(%esp)
0866d27d +0x779:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d282 +0x77e:  mov    %eax,%ebx
0866d284 +0x780:  mov    0x8(%ebp),%eax
0866d287 +0x783:  mov    %eax,(%esp)
0866d28a +0x786:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866d28f +0x78b:  mov    %eax,(%esp)
0866d292 +0x78e:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0866d297 +0x793:  mov    %ebx,0x4(%esp)
0866d29b +0x797:  mov    %eax,(%esp)
0866d29e +0x79a:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0866d2a3 +0x79f:  movl   $0x1e,0x8(%esp)
0866d2ab +0x7a7:  mov    %eax,0x4(%esp)
0866d2af +0x7ab:  lea    -0x90(%ebp),%eax
0866d2b5 +0x7b1:  mov    %eax,(%esp)
0866d2b8 +0x7b4:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d2bd +0x7b9:  lea    -0x11d(%ebp),%eax
0866d2c3 +0x7bf:  mov    %eax,(%esp)
0866d2c6 +0x7c2:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d2cb +0x7c7:  mov    %eax,%ebx
0866d2cd +0x7c9:  mov    0x8(%ebp),%eax
0866d2d0 +0x7cc:  mov    %eax,(%esp)
0866d2d3 +0x7cf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866d2d8 +0x7d4:  mov    %eax,(%esp)
0866d2db +0x7d7:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0866d2e0 +0x7dc:  mov    %ebx,0x4(%esp)
0866d2e4 +0x7e0:  mov    %eax,(%esp)
0866d2e7 +0x7e3:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
0866d2ec +0x7e8:  mov    %eax,-0x18(%ebp)
0866d2ef +0x7eb:  movl   $0x4,0x4(%esp)
0866d2f7 +0x7f3:  lea    -0x90(%ebp),%eax
0866d2fd +0x7f9:  mov    %eax,(%esp)
0866d300 +0x7fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d305 +0x801:  cmpl   $0x0,-0x18(%ebp)
0866d309 +0x805:  je     0866d32a <+0x826>
0866d30b +0x807:  mov    -0x18(%ebp),%eax
0866d30e +0x80a:  movl   $0x4,0x8(%esp)
0866d316 +0x812:  mov    %eax,0x4(%esp)
0866d31a +0x816:  lea    -0x90(%ebp),%eax
0866d320 +0x81c:  mov    %eax,(%esp)
0866d323 +0x81f:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d328 +0x824:  jmp    0866d358 <+0x854>
0866d32a +0x826:  lea    -0x94(%ebp),%eax
0866d330 +0x82c:  mov    %eax,(%esp)
0866d333 +0x82f:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0866d338 +0x834:  lea    -0x94(%ebp),%eax
0866d33e +0x83a:  movl   $0x4,0x8(%esp)
0866d346 +0x842:  mov    %eax,0x4(%esp)
0866d34a +0x846:  lea    -0x90(%ebp),%eax
0866d350 +0x84c:  mov    %eax,(%esp)
0866d353 +0x84f:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d358 +0x854:  movl   $0x0,0x4(%esp)
0866d360 +0x85c:  lea    -0x90(%ebp),%eax
0866d366 +0x862:  mov    %eax,(%esp)
0866d369 +0x865:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d36e +0x86a:  movl   $&g_emptySlot,0x4(%esp)
0866d376 +0x872:  lea    -0x90(%ebp),%eax
0866d37c +0x878:  mov    %eax,(%esp)
0866d37f +0x87b:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0866d384 +0x880:  movl   $0x1,0x4(%esp)
0866d38c +0x888:  lea    -0x90(%ebp),%eax
0866d392 +0x88e:  mov    %eax,(%esp)
0866d395 +0x891:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866d39a +0x896:  lea    -0x90(%ebp),%eax
0866d3a0 +0x89c:  mov    %eax,0x4(%esp)
0866d3a4 +0x8a0:  mov    0x8(%ebp),%eax
0866d3a7 +0x8a3:  mov    %eax,(%esp)
0866d3aa +0x8a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866d3af +0x8ab:  mov    $0x0,%ebx
0866d3b4 +0x8b0:  jmp    0866d8c6 <+0xdc2>
0866d3b9 +0x8b5:  cmpl   $0xffffffff,-0x54(%ebp)
0866d3bd +0x8b9:  je     0866d55e <+0xa5a>
0866d3c3 +0x8bf:  lea    -0x15a(%ebp),%eax
0866d3c9 +0x8c5:  mov    %eax,(%esp)
0866d3cc +0x8c8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d3d1 +0x8cd:  cmp    -0x54(%ebp),%eax
0866d3d4 +0x8d0:  setge  %al
0866d3d7 +0x8d3:  test   %al,%al
0866d3d9 +0x8d5:  je     0866d4ef <+0x9eb>
0866d3df +0x8db:  lea    -0x98(%ebp),%eax
0866d3e5 +0x8e1:  lea    -0x84(%ebp),%edx
0866d3eb +0x8e7:  mov    %edx,0x4(%esp)
0866d3ef +0x8eb:  mov    %eax,(%esp)
0866d3f2 +0x8ee:  call   083912d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d74>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d74
0866d3f7 +0x8f3:  sub    $0x4,%esp
0866d3fa +0x8f6:  lea    -0x9c(%ebp),%eax
0866d400 +0x8fc:  lea    -0x84(%ebp),%edx
0866d406 +0x902:  mov    %edx,0x4(%esp)
0866d40a +0x906:  mov    %eax,(%esp)
0866d40d +0x909:  call   083912f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d98
0866d412 +0x90e:  sub    $0x4,%esp
0866d415 +0x911:  jmp    0866d4c5 <+0x9c1>
0866d41a +0x916:  lea    -0x98(%ebp),%eax
0866d420 +0x91c:  mov    %eax,(%esp)
0866d423 +0x91f:  call   0839137e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20e1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20e1e
0866d428 +0x924:  mov    (%eax),%edx
0866d42a +0x926:  mov    %edx,-0xe0(%ebp)
0866d430 +0x92c:  mov    0x4(%eax),%edx
0866d433 +0x92f:  mov    %edx,-0xdc(%ebp)
0866d439 +0x935:  mov    0x8(%eax),%edx
0866d43c +0x938:  mov    %edx,-0xd8(%ebp)
0866d442 +0x93e:  mov    0xc(%eax),%edx
0866d445 +0x941:  mov    %edx,-0xd4(%ebp)
0866d44b +0x947:  mov    0x10(%eax),%edx
0866d44e +0x94a:  mov    %edx,-0xd0(%ebp)
0866d454 +0x950:  mov    0x14(%eax),%edx
0866d457 +0x953:  mov    %edx,-0xcc(%ebp)
0866d45d +0x959:  mov    0x18(%eax),%edx
0866d460 +0x95c:  mov    %edx,-0xc8(%ebp)
0866d466 +0x962:  mov    0x1c(%eax),%eax
0866d469 +0x965:  mov    %eax,-0xc4(%ebp)
0866d46f +0x96b:  movl   $0x20,0x8(%esp)
0866d477 +0x973:  lea    -0xe0(%ebp),%eax
0866d47d +0x979:  mov    %eax,0x4(%esp)
0866d481 +0x97d:  lea    -0xc0(%ebp),%eax
0866d487 +0x983:  mov    %eax,(%esp)
0866d48a +0x986:  call   0807dc90 <_init+0x588>
0866d48f +0x98b:  test   %eax,%eax
0866d491 +0x98d:  jne    0866d4b7 <+0x9b3>
0866d493 +0x98f:  lea    -0x68(%ebp),%eax
0866d496 +0x992:  mov    -0x98(%ebp),%edx
0866d49c +0x998:  mov    %edx,0x8(%esp)
0866d4a0 +0x99c:  lea    -0x84(%ebp),%edx
0866d4a6 +0x9a2:  mov    %edx,0x4(%esp)
0866d4aa +0x9a6:  mov    %eax,(%esp)
0866d4ad +0x9a9:  call   0869b14e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x79a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x79a3
0866d4b2 +0x9ae:  sub    $0x4,%esp
0866d4b5 +0x9b1:  jmp    0866d4e5 <+0x9e1>
0866d4b7 +0x9b3:  lea    -0x98(%ebp),%eax
0866d4bd +0x9b9:  mov    %eax,(%esp)
0866d4c0 +0x9bc:  call   0869b138 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x798d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x798d
0866d4c5 +0x9c1:  lea    -0x9c(%ebp),%eax
0866d4cb +0x9c7:  mov    %eax,0x4(%esp)
0866d4cf +0x9cb:  lea    -0x98(%ebp),%eax
0866d4d5 +0x9d1:  mov    %eax,(%esp)
0866d4d8 +0x9d4:  call   0839131e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20dbe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20dbe
0866d4dd +0x9d9:  test   %al,%al
0866d4df +0x9db:  jne    0866d41a <+0x916>
0866d4e5 +0x9e1:  mov    $0x1,%ebx
0866d4ea +0x9e6:  jmp    0866d8c6 <+0xdc2>
0866d4ef +0x9eb:  lea    -0x15a(%ebp),%eax
0866d4f5 +0x9f1:  mov    %eax,(%esp)
0866d4f8 +0x9f4:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d4fd +0x9f9:  mov    %eax,%ebx
0866d4ff +0x9fb:  lea    -0x11d(%ebp),%eax
0866d505 +0xa01:  mov    %eax,(%esp)
0866d508 +0xa04:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d50d +0xa09:  lea    (%ebx,%eax,1),%eax
0866d510 +0xa0c:  cmp    -0x54(%ebp),%eax
0866d513 +0xa0f:  setge  %al
0866d516 +0xa12:  test   %al,%al
0866d518 +0xa14:  je     0866d525 <+0xa21>
0866d51a +0xa16:  mov    -0x54(%ebp),%eax
0866d51d +0xa19:  mov    %eax,-0x153(%ebp)
0866d523 +0xa1f:  jmp    0866d58d <+0xa89>
0866d525 +0xa21:  lea    -0x15a(%ebp),%eax
0866d52b +0xa27:  mov    %eax,(%esp)
0866d52e +0xa2a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d533 +0xa2f:  mov    %eax,-0x14(%ebp)
0866d536 +0xa32:  lea    -0x11d(%ebp),%eax
0866d53c +0xa38:  mov    %eax,(%esp)
0866d53f +0xa3b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d544 +0xa40:  add    %eax,-0x14(%ebp)
0866d547 +0xa43:  mov    -0x14(%ebp),%eax
0866d54a +0xa46:  mov    %eax,0x4(%esp)
0866d54e +0xa4a:  lea    -0x15a(%ebp),%eax
0866d554 +0xa50:  mov    %eax,(%esp)
0866d557 +0xa53:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0866d55c +0xa58:  jmp    0866d58d <+0xa89>
0866d55e +0xa5a:  mov    -0x153(%ebp),%eax
0866d564 +0xa60:  mov    %eax,-0x10(%ebp)
0866d567 +0xa63:  lea    -0x11d(%ebp),%eax
0866d56d +0xa69:  mov    %eax,(%esp)
0866d570 +0xa6c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d575 +0xa71:  add    %eax,-0x10(%ebp)
0866d578 +0xa74:  mov    -0x10(%ebp),%eax
0866d57b +0xa77:  mov    %eax,0x4(%esp)
0866d57f +0xa7b:  lea    -0x15a(%ebp),%eax
0866d585 +0xa81:  mov    %eax,(%esp)
0866d588 +0xa84:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0866d58d +0xa89:  mov    0x8(%ebp),%eax
0866d590 +0xa8c:  mov    %eax,(%esp)
0866d593 +0xa8f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866d598 +0xa94:  mov    -0x15a(%ebp),%edx
0866d59e +0xa9a:  mov    %edx,0xc(%esp)
0866d5a2 +0xa9e:  mov    -0x156(%ebp),%edx
0866d5a8 +0xaa4:  mov    %edx,0x10(%esp)
0866d5ac +0xaa8:  mov    -0x152(%ebp),%edx
0866d5b2 +0xaae:  mov    %edx,0x14(%esp)
0866d5b6 +0xab2:  mov    -0x14e(%ebp),%edx
0866d5bc +0xab8:  mov    %edx,0x18(%esp)
0866d5c0 +0xabc:  mov    -0x14a(%ebp),%edx
0866d5c6 +0xac2:  mov    %edx,0x1c(%esp)
0866d5ca +0xac6:  mov    -0x146(%ebp),%edx
0866d5d0 +0xacc:  mov    %edx,0x20(%esp)
0866d5d4 +0xad0:  mov    -0x142(%ebp),%edx
0866d5da +0xad6:  mov    %edx,0x24(%esp)
0866d5de +0xada:  mov    -0x13e(%ebp),%edx
0866d5e4 +0xae0:  mov    %edx,0x28(%esp)
0866d5e8 +0xae4:  mov    -0x13a(%ebp),%edx
0866d5ee +0xaea:  mov    %edx,0x2c(%esp)
0866d5f2 +0xaee:  mov    -0x136(%ebp),%edx
0866d5f8 +0xaf4:  mov    %edx,0x30(%esp)
0866d5fc +0xaf8:  mov    -0x132(%ebp),%edx
0866d602 +0xafe:  mov    %edx,0x34(%esp)
0866d606 +0xb02:  mov    -0x12e(%ebp),%edx
0866d60c +0xb08:  mov    %edx,0x38(%esp)
0866d610 +0xb0c:  mov    -0x12a(%ebp),%edx
0866d616 +0xb12:  mov    %edx,0x3c(%esp)
0866d61a +0xb16:  mov    -0x126(%ebp),%edx
0866d620 +0xb1c:  mov    %edx,0x40(%esp)
0866d624 +0xb20:  mov    -0x122(%ebp),%edx
0866d62a +0xb26:  mov    %edx,0x44(%esp)
0866d62e +0xb2a:  movzbl -0x11e(%ebp),%edx
0866d635 +0xb31:  mov    %dl,0x48(%esp)
0866d639 +0xb35:  mov    -0x3c(%ebp),%edx
0866d63c +0xb38:  mov    %edx,0x8(%esp)
0866d640 +0xb3c:  movl   $0x1,0x4(%esp)
0866d648 +0xb44:  mov    %eax,(%esp)
0866d64b +0xb47:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0866d650 +0xb4c:  mov    -0x3c(%ebp),%eax
0866d653 +0xb4f:  mov    %eax,0x4(%esp)
0866d657 +0xb53:  lea    -0x90(%ebp),%eax
0866d65d +0xb59:  mov    %eax,(%esp)
0866d660 +0xb5c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d665 +0xb61:  mov    -0x58(%ebp),%eax
0866d668 +0xb64:  mov    %eax,0x4(%esp)
0866d66c +0xb68:  lea    -0x90(%ebp),%eax
0866d672 +0xb6e:  mov    %eax,(%esp)
0866d675 +0xb71:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d67a +0xb76:  lea    -0x15a(%ebp),%eax
0866d680 +0xb7c:  mov    %eax,(%esp)
0866d683 +0xb7f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d688 +0xb84:  mov    %eax,0x4(%esp)
0866d68c +0xb88:  lea    -0x90(%ebp),%eax
0866d692 +0xb8e:  mov    %eax,(%esp)
0866d695 +0xb91:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d69a +0xb96:  movl   $0x0,0x4(%esp)
0866d6a2 +0xb9e:  lea    -0x90(%ebp),%eax
0866d6a8 +0xba4:  mov    %eax,(%esp)
0866d6ab +0xba7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d6b0 +0xbac:  movl   $0x0,0x4(%esp)
0866d6b8 +0xbb4:  lea    -0x90(%ebp),%eax
0866d6be +0xbba:  mov    %eax,(%esp)
0866d6c1 +0xbbd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d6c6 +0xbc2:  movl   $0x0,0x4(%esp)
0866d6ce +0xbca:  lea    -0x90(%ebp),%eax
0866d6d4 +0xbd0:  mov    %eax,(%esp)
0866d6d7 +0xbd3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d6dc +0xbd8:  movl   $0x0,0x4(%esp)
0866d6e4 +0xbe0:  lea    -0x90(%ebp),%eax
0866d6ea +0xbe6:  mov    %eax,(%esp)
0866d6ed +0xbe9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d6f2 +0xbee:  lea    -0x15a(%ebp),%eax
0866d6f8 +0xbf4:  add    $0x11,%eax
0866d6fb +0xbf7:  mov    %eax,(%esp)
0866d6fe +0xbfa:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0866d703 +0xbff:  movzbl %al,%eax
0866d706 +0xc02:  mov    %eax,0x4(%esp)
0866d70a +0xc06:  lea    -0x90(%ebp),%eax
0866d710 +0xc0c:  mov    %eax,(%esp)
0866d713 +0xc0f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d718 +0xc14:  lea    -0x15a(%ebp),%eax
0866d71e +0xc1a:  add    $0x11,%eax
0866d721 +0xc1d:  mov    %eax,(%esp)
0866d724 +0xc20:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0866d729 +0xc25:  movzwl %ax,%eax
0866d72c +0xc28:  mov    %eax,0x4(%esp)
0866d730 +0xc2c:  lea    -0x90(%ebp),%eax
0866d736 +0xc32:  mov    %eax,(%esp)
0866d739 +0xc35:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866d73e +0xc3a:  lea    -0x11d(%ebp),%eax
0866d744 +0xc40:  mov    %eax,(%esp)
0866d747 +0xc43:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0866d74c +0xc48:  test   %al,%al
0866d74e +0xc4a:  je     0866d84e <+0xd4a>
0866d754 +0xc50:  movl   $0x1e,0x4(%esp)
0866d75c +0xc58:  lea    -0x90(%ebp),%eax
0866d762 +0xc5e:  mov    %eax,(%esp)
0866d765 +0xc61:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d76a +0xc66:  lea    -0x15a(%ebp),%eax
0866d770 +0xc6c:  mov    %eax,(%esp)
0866d773 +0xc6f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d778 +0xc74:  mov    %eax,%ebx
0866d77a +0xc76:  mov    0x8(%ebp),%eax
0866d77d +0xc79:  mov    %eax,(%esp)
0866d780 +0xc7c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866d785 +0xc81:  mov    %eax,(%esp)
0866d788 +0xc84:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0866d78d +0xc89:  mov    %ebx,0x4(%esp)
0866d791 +0xc8d:  mov    %eax,(%esp)
0866d794 +0xc90:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0866d799 +0xc95:  movl   $0x1e,0x8(%esp)
0866d7a1 +0xc9d:  mov    %eax,0x4(%esp)
0866d7a5 +0xca1:  lea    -0x90(%ebp),%eax
0866d7ab +0xca7:  mov    %eax,(%esp)
0866d7ae +0xcaa:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d7b3 +0xcaf:  lea    -0x15a(%ebp),%eax
0866d7b9 +0xcb5:  mov    %eax,(%esp)
0866d7bc +0xcb8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866d7c1 +0xcbd:  mov    %eax,%ebx
0866d7c3 +0xcbf:  mov    0x8(%ebp),%eax
0866d7c6 +0xcc2:  mov    %eax,(%esp)
0866d7c9 +0xcc5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866d7ce +0xcca:  mov    %eax,(%esp)
0866d7d1 +0xccd:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0866d7d6 +0xcd2:  mov    %ebx,0x4(%esp)
0866d7da +0xcd6:  mov    %eax,(%esp)
0866d7dd +0xcd9:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
0866d7e2 +0xcde:  mov    %eax,-0xc(%ebp)
0866d7e5 +0xce1:  movl   $0x4,0x4(%esp)
0866d7ed +0xce9:  lea    -0x90(%ebp),%eax
0866d7f3 +0xcef:  mov    %eax,(%esp)
0866d7f6 +0xcf2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866d7fb +0xcf7:  cmpl   $0x0,-0xc(%ebp)
0866d7ff +0xcfb:  je     0866d820 <+0xd1c>
0866d801 +0xcfd:  mov    -0xc(%ebp),%eax
0866d804 +0xd00:  movl   $0x4,0x8(%esp)
0866d80c +0xd08:  mov    %eax,0x4(%esp)
0866d810 +0xd0c:  lea    -0x90(%ebp),%eax
0866d816 +0xd12:  mov    %eax,(%esp)
0866d819 +0xd15:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d81e +0xd1a:  jmp    0866d84e <+0xd4a>
0866d820 +0xd1c:  lea    -0xa0(%ebp),%eax
0866d826 +0xd22:  mov    %eax,(%esp)
0866d829 +0xd25:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0866d82e +0xd2a:  lea    -0xa0(%ebp),%eax
0866d834 +0xd30:  movl   $0x4,0x8(%esp)
0866d83c +0xd38:  mov    %eax,0x4(%esp)
0866d840 +0xd3c:  lea    -0x90(%ebp),%eax
0866d846 +0xd42:  mov    %eax,(%esp)
0866d849 +0xd45:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0866d84e +0xd4a:  movl   $0x0,0x4(%esp)
0866d856 +0xd52:  lea    -0x90(%ebp),%eax
0866d85c +0xd58:  mov    %eax,(%esp)
0866d85f +0xd5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866d864 +0xd60:  lea    -0x15a(%ebp),%eax
0866d86a +0xd66:  mov    %eax,0x4(%esp)
0866d86e +0xd6a:  lea    -0x90(%ebp),%eax
0866d874 +0xd70:  mov    %eax,(%esp)
0866d877 +0xd73:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0866d87c +0xd78:  movl   $0x1,0x4(%esp)
0866d884 +0xd80:  lea    -0x90(%ebp),%eax
0866d88a +0xd86:  mov    %eax,(%esp)
0866d88d +0xd89:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866d892 +0xd8e:  lea    -0x90(%ebp),%eax
0866d898 +0xd94:  mov    %eax,0x4(%esp)
0866d89c +0xd98:  mov    0x8(%ebp),%eax
0866d89f +0xd9b:  mov    %eax,(%esp)
0866d8a2 +0xd9e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866d8a7 +0xda3:  mov    $0x0,%ebx
0866d8ac +0xda8:  jmp    0866d8c6 <+0xdc2>
0866d8ae +0xdaa:  mov    %edx,%ebx
0866d8b0 +0xdac:  mov    %eax,%esi
0866d8b2 +0xdae:  lea    -0x90(%ebp),%eax
0866d8b8 +0xdb4:  mov    %eax,(%esp)
0866d8bb +0xdb7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866d8c0 +0xdbc:  mov    %esi,%eax
0866d8c2 +0xdbe:  mov    %ebx,%edx
0866d8c4 +0xdc0:  jmp    0866d8dd <+0xdd9>
0866d8c6 +0xdc2:  lea    -0x90(%ebp),%eax
0866d8cc +0xdc8:  mov    %eax,(%esp)
0866d8cf +0xdcb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866d8d4 +0xdd0:  test   %ebx,%ebx
0866d8d6 +0xdd2:  je     0866d902 <+0xdfe>
0866d8d8 +0xdd4:  jmp    0866cc30 <+0x12c>
0866d8dd +0xdd9:  mov    %edx,%ebx
0866d8df +0xddb:  mov    %eax,%esi
0866d8e1 +0xddd:  lea    -0x84(%ebp),%eax
0866d8e7 +0xde3:  mov    %eax,(%esp)
0866d8ea +0xde6:  call   083836aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1314a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1314a
0866d8ef +0xdeb:  mov    %esi,%eax
0866d8f1 +0xded:  mov    %ebx,%edx
0866d8f3 +0xdef:  mov    %eax,(%esp)
0866d8f6 +0xdf2:  call   08ae3750 <_Unwind_Resume>
0866d8fb +0xdf7:  nop
0866d8fc +0xdf8:  jmp    0866d902 <+0xdfe>
0866d8fe +0xdfa:  nop
0866d8ff +0xdfb:  jmp    0866d902 <+0xdfe>
0866d901 +0xdfd:  nop
0866d902 +0xdfe:  lea    -0x84(%ebp),%eax
0866d908 +0xe04:  mov    %eax,(%esp)
0866d90b +0xe07:  call   083836aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1314a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1314a
0866d910 +0xe0c:  jmp    0866d916 <+0xe12>
0866d912 +0xe0e:  nop
0866d913 +0xe0f:  jmp    0866d916 <+0xe12>
0866d915 +0xe11:  nop
0866d916 +0xe12:  addl   $0x1,-0x60(%ebp)
0866d91a +0xe16:  cmpl   $0x13,-0x60(%ebp)
0866d91e +0xe1a:  setle  %al
0866d921 +0xe1d:  test   %al,%al
0866d923 +0xe1f:  jne    0866cb29 <+0x25>
0866d929 +0xe25:  lea    -0x8(%ebp),%esp
0866d92c +0xe28:  add    $0x0,%esp
0866d92f +0xe2b:  pop    %ebx
0866d930 +0xe2c:  pop    %esi
0866d931 +0xe2d:  pop    %ebp
0866d932 +0xe2e:  ret
0866d933 +0xe2f:  nop
```

## 反编译 C

```c
// CUser::CheckQuestMonster @ 0x866cb04

/* CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE) */

void __thiscall
CUser::CheckQuestMonster(CUser *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  CDataManager *this_00;
  CInventory *pCVar7;
  undefined4 uVar8;
  CAvatarItemMgr *pCVar9;
  char *pcVar10;
  int iVar11;
  undefined4 local_15e;
  undefined4 uStack_15a;
  undefined4 uStack_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined4 local_126;
  undefined1 local_122;
  undefined2 local_121;
  undefined2 uStack_11f;
  undefined2 uStack_11d;
  undefined2 uStack_11b;
  undefined4 local_119;
  undefined4 uStack_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  undefined4 local_105;
  undefined4 local_101;
  undefined4 local_fd;
  undefined4 local_f9;
  undefined4 local_f5;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  stAvatarExpansionInfo_t local_a4 [4];
  __normal_iterator local_a0 [4];
  undefined4 local_9c;
  stAvatarExpansionInfo_t local_98 [4];
  PacketGuard local_94 [12];
  vector<MonsterKillItem,std::allocator<MonsterKillItem>> local_88 [12];
  cMyTrace local_7c [16];
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  Quest *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  CParty *local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  
  local_68 = getCurCharacQuestRefR(this);
  local_64 = 0;
  do {
    if (0x13 < local_64) {
      return;
    }
    if (0 < *(int *)(local_68 + 8 + (local_64 + 0x1d4c) * 4)) {
      iVar4 = G_CDataManager();
      local_60 = (Quest *)CDataManager::find_quest(iVar4);
      if (local_60 == (Quest *)0x0) {
        LogManager::logFormat
                  (1,"user.cpp","void CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)",
                   0x54f7,"G_CDataManager()->find_quest(%d) fail",
                   *(undefined4 *)(local_68 + 8 + (local_64 + 0x1d4c) * 4));
      }
      else if (((*(int *)(local_60 + 8) == 4) || (*(int *)(local_60 + 8) == 3)) ||
              (*(int *)(local_68 + 8 + (local_64 + 0x1d60) * 4) != 0)) {
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::vector(local_88);
                    /* try { // try from 0866cc20 to 0866cff0 has its CatchHandler @ 0866d8dd */
        cVar2 = Quest::CheckKillMonster
                          (local_60,param_1,(int)*(short *)(local_68 + 0x75da),param_2,param_4,
                           local_88);
        if (cVar2 == '\x01') {
          do {
            cVar2 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::empty();
            if (cVar2 != '\0') break;
            MonsterKillItem::MonsterKillItem((MonsterKillItem *)&local_c4);
            local_5c = 0;
            local_58 = 0;
            local_54 = 0;
            local_50 = 0;
            iVar4 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size(local_88);
            local_4c = get_rand_int(iVar4);
            if (((int)local_4c < 0) ||
               (iVar4 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size(local_88)
               , iVar4 <= (int)local_4c)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) break;
            puVar5 = (undefined4 *)
                     std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::operator[]
                               (local_88,local_4c);
            local_c4 = *puVar5;
            local_c0 = puVar5[1];
            local_bc = puVar5[2];
            local_b8 = puVar5[3];
            local_b4 = puVar5[4];
            local_b0 = puVar5[5];
            local_ac = puVar5[6];
            local_a8 = puVar5[7];
            local_48 = 0;
            local_5c = local_b4;
            local_58 = local_a8;
            for (local_38 = 0; local_38 < 0x1a; local_38 = local_38 + 1) {
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
              local_34 = CInventory::GetInvenRef(pCVar7,0,local_38);
              iVar4 = local_ac;
              if ((local_34 != 0) && (*(int *)(local_34 + 2) != 0)) {
                iVar11 = G_CDataManager();
                iVar11 = CItemList::GetQuestItemDropBouns(*(ulong **)(iVar11 + 0xc));
                local_48 = local_48 + (iVar4 * iVar11) / 100;
              }
            }
            local_50 = expert_job::CAlchemist::GetQuestItemDropRate(this,local_ac);
            local_50 = local_50 + local_48;
            iVar4 = G_CEnvironment();
            if ((*(int *)(iVar4 + 0x1a8) == 2) &&
               (local_30 = (CParty *)GetParty(this), local_30 != (CParty *)0x0)) {
              local_2c = CParty::get_member_count(local_30);
              if (local_2c < 1) {
                local_28 = 1.0;
              }
              else {
                iVar4 = G_CDataManager();
                local_28 = *(float *)(iVar4 + 0x10 + (local_2c + 0xf7) * 4);
              }
              local_50 = (int)ROUND((float)local_50 * local_28);
            }
            cVar2 = isAffectedPremium(this,0x4f);
            iVar4 = local_ac;
            if (cVar2 != '\0') {
              uVar6 = getAddQuestItemDropRateFromPremium(this,0x4f);
              local_50 = iVar4 * (uVar6 / 100) + local_50;
            }
            local_54 = local_b0;
            local_44 = 0;
            for (local_24 = 0; local_24 < local_54; local_24 = local_24 + 1) {
              iVar4 = get_rand_int(100);
              if (iVar4 < local_50) {
                local_44 = local_44 + 1;
              }
            }
            if (local_44 == 0) break;
            Inven_Item::Inven_Item((Inven_Item *)&local_121);
            Inven_Item::Inven_Item((Inven_Item *)&local_15e);
            iVar4 = local_5c;
            uStack_11f = (undefined2)local_5c;
            uStack_11d = (undefined2)((uint)local_5c >> 0x10);
            this_00 = (CDataManager *)G_CDataManager();
            local_3c = (int *)CDataManager::find_item(this_00,iVar4);
            (**(code **)(*local_3c + 8))(local_3c,&local_121);
            Inven_Item::set_add_info((Inven_Item *)&local_121,local_44);
            if (999 < local_44) {
              uVar8 = *(undefined4 *)(local_68 + 8 + (local_64 + 0x1d4c) * 4);
              uVar1 = CONCAT22(uStack_11d,uStack_11f);
              cMyTrace::cMyTrace(local_7c,
                                 "void CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)",
                                 0x5579,5);
              cMyTrace::operator()
                        (local_7c,
                         "CUser::CheckQuestMonster, mon_item.item.set_add_info , ITEM #%d, %d , QUEST#%d"
                         ,uVar1,local_44,uVar8);
              local_44 = 1000;
            }
            PacketGuard::PacketGuard(local_94);
                    /* try { // try from 0866d00a to 0866d8a6 has its CatchHandler @ 0866d8ae */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,1);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
            local_40 = CInventory::GetInvenData(pCVar7,local_5c,(Inven_Item *)&local_15e);
            if (local_40 < 0) {
              uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
              local_20 = CInventory::insertItemIntoInventory
                                   (uVar8,CONCAT22(uStack_11f,local_121),
                                    CONCAT22(uStack_11b,uStack_11d),local_119,uStack_115,local_111,
                                    local_10d,local_109,local_105,local_101,local_fd,local_f9,
                                    local_f5,local_f1,local_ed,local_e9,local_e5,8,1,1);
              if (0 < local_20) {
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_20);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_5c);
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar4);
                uVar6 = Inven_Item::GetItemAttr((Inven_Item *)&local_121);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,uVar6 & 0xff);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)local_94,
                           (uint)CONCAT11((undefined1)uStack_115,local_119._3_1_));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_94,
                           CONCAT13((undefined1)local_111,uStack_115._1_3_));
                uVar6 = stAmplifyOption_t::getAbilityType
                                  ((stAmplifyOption_t *)((int)&local_111 + 1));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,uVar6 & 0xff);
                uVar6 = stAmplifyOption_t::getAbilityValue
                                  ((stAmplifyOption_t *)((int)&local_111 + 1));
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar6 & 0xffff);
                cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)&local_121);
                if (cVar2 != '\0') {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0x1e);
                  iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                  pCVar7 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
                  pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
                  pcVar10 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar9,iVar4);
                  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_94,pcVar10,0x1e);
                  iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                  pCVar7 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
                  pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
                  local_1c = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar9,iVar4);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,4);
                  if (local_1c == (char *)0x0) {
                    stAvatarExpansionInfo_t::init(local_98);
                    InterfacePacketBuf::put_binary
                              ((InterfacePacketBuf *)local_94,(char *)local_98,4);
                  }
                  else {
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_94,local_1c,4);
                  }
                }
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
                InterfacePacketBuf::put_packet
                          ((InterfacePacketBuf *)local_94,(Inven_Item *)g_emptySlot);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
                Send(this,local_94);
              }
              bVar3 = false;
            }
            else {
              if (local_58 == -1) {
                local_14 = CONCAT31((undefined3)uStack_156,uStack_15a._3_1_);
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                local_14 = local_14 + iVar4;
                Inven_Item::set_add_info((Inven_Item *)&local_15e,local_14);
              }
              else {
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
                if (local_58 <= iVar4) {
                  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::begin();
                  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::end();
                  while (bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_9c,local_a0),
                        bVar3) {
                    puVar5 = (undefined4 *)
                             __gnu_cxx::
                             __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                             ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                          *)&local_9c);
                    local_e4 = *puVar5;
                    local_e0 = puVar5[1];
                    local_dc = puVar5[2];
                    local_d8 = puVar5[3];
                    local_d4 = puVar5[4];
                    local_d0 = puVar5[5];
                    local_cc = puVar5[6];
                    local_c8 = puVar5[7];
                    iVar4 = memcmp(&local_c4,&local_e4,0x20);
                    if (iVar4 == 0) {
                      std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::erase
                                (local_6c,local_88,local_9c);
                      break;
                    }
                    __gnu_cxx::
                    __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                    ::operator++((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                  *)&local_9c);
                  }
                  bVar3 = true;
                  goto LAB_0866d8c6;
                }
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
                iVar11 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                if (iVar4 + iVar11 < local_58) {
                  local_18 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
                  iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_121);
                  local_18 = local_18 + iVar4;
                  Inven_Item::set_add_info((Inven_Item *)&local_15e,local_18);
                }
                else {
                  uStack_15a._3_1_ = (undefined1)local_58;
                  uStack_156._0_3_ = (undefined3)((uint)local_58 >> 8);
                }
              }
              uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
              CInventory::update_item
                        (uVar8,1,local_40,local_15e,uStack_15a,uStack_156,local_152,local_14e,
                         local_14a,local_146,local_142,local_13e,local_13a,local_136,local_132,
                         local_12e,local_12a,local_126,local_122);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_40);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_5c);
              iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar4);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
              uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_14e + 1));
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,uVar6 & 0xff);
              uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_14e + 1))
              ;
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar6 & 0xffff);
              cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)&local_121);
              if (cVar2 != '\0') {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0x1e);
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
                pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
                pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
                pcVar10 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar9,iVar4);
                InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_94,pcVar10,0x1e);
                iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_15e);
                pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
                pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar7);
                local_10 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar9,iVar4);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,4);
                if (local_10 == (char *)0x0) {
                  stAvatarExpansionInfo_t::init(local_a4);
                  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_94,(char *)local_a4,4);
                }
                else {
                  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_94,local_10,4);
                }
              }
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
              InterfacePacketBuf::put_packet
                        ((InterfacePacketBuf *)local_94,(Inven_Item *)&local_15e);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
              Send(this,local_94);
              bVar3 = false;
            }
LAB_0866d8c6:
                    /* try { // try from 0866d8cf to 0866d8d3 has its CatchHandler @ 0866d8dd */
            PacketGuard::~PacketGuard(local_94);
          } while (bVar3);
        }
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::~vector(local_88);
      }
    }
    local_64 = local_64 + 1;
  } while( true );
}
```
