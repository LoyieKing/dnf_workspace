# processKillMonster

`_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE`

`game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&, std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084add20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084add20  _ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE
#           game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&, std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)
# range [0x084add20, 0x084ae0e1]
084add20 +0x000:  push   %ebp
084add21 +0x001:  mov    %esp,%ebp
084add23 +0x003:  push   %edi
084add24 +0x004:  push   %esi
084add25 +0x005:  push   %ebx
084add26 +0x006:  sub    $0x9c,%esp
084add2c +0x00c:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084add31 +0x011:  movl   $0x1,0x4(%esp)
084add39 +0x019:  mov    %eax,(%esp)
084add3c +0x01c:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
084add41 +0x021:  test   %al,%al
084add43 +0x023:  je     084ade36 <+0x116>
084add49 +0x029:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084add4e +0x02e:  movl   $0x1,0x4(%esp)
084add56 +0x036:  mov    %eax,(%esp)
084add59 +0x039:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
084add5e +0x03e:  fstps  -0x30(%ebp)
084add61 +0x041:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084add66 +0x046:  mov    %eax,(%esp)
084add69 +0x049:  call   0830e6d2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b7
084add6e +0x04e:  fnstcw -0x6a(%ebp)
084add71 +0x051:  movzwl -0x6a(%ebp),%eax
084add75 +0x055:  mov    $0xc,%ah
084add77 +0x057:  mov    %ax,-0x6c(%ebp)
084add7b +0x05b:  fldcw  -0x6c(%ebp)
084add7e +0x05e:  fistpll -0x68(%ebp)
084add81 +0x061:  fldcw  -0x6a(%ebp)
084add84 +0x064:  mov    -0x68(%ebp),%eax
084add87 +0x067:  mov    -0x64(%ebp),%edx
084add8a +0x06a:  mov    %eax,-0x2c(%ebp)
084add8d +0x06d:  mov    -0x2c(%ebp),%eax
084add90 +0x070:  mov    $0x0,%edx
084add95 +0x075:  mov    %eax,-0x68(%ebp)
084add98 +0x078:  mov    %edx,-0x64(%ebp)
084add9b +0x07b:  fildll -0x68(%ebp)
084add9e +0x07e:  flds   -0x30(%ebp)
084adda1 +0x081:  fucompp
084adda3 +0x083:  fnstsw %ax
084adda5 +0x085:  test   $0x45,%ah
084adda8 +0x088:  sete   %al
084addab +0x08b:  test   %al,%al
084addad +0x08d:  je     084ade36 <+0x116>
084addb3 +0x093:  mov    0x1c(%ebp),%eax
084addb6 +0x096:  mov    %eax,-0x5c(%ebp)
084addb9 +0x099:  fildl  -0x5c(%ebp)
084addbc +0x09c:  mov    -0x2c(%ebp),%eax
084addbf +0x09f:  mov    $0x0,%edx
084addc4 +0x0a4:  mov    %eax,-0x68(%ebp)
084addc7 +0x0a7:  mov    %edx,-0x64(%ebp)
084addca +0x0aa:  fildll -0x68(%ebp)
084addcd +0x0ad:  flds   -0x30(%ebp)
084addd0 +0x0b0:  fsubp  %st,%st(1)
084addd2 +0x0b2:  fmulp  %st,%st(1)
084addd4 +0x0b4:  fldcw  -0x6c(%ebp)
084addd7 +0x0b7:  fistpll -0x68(%ebp)
084addda +0x0ba:  fldcw  -0x6a(%ebp)
084adddd +0x0bd:  mov    -0x68(%ebp),%eax
084adde0 +0x0c0:  mov    -0x64(%ebp),%edx
084adde3 +0x0c3:  mov    %eax,%edx
084adde5 +0x0c5:  mov    0x1c(%ebp),%eax
084adde8 +0x0c8:  lea    (%edx,%eax,1),%eax
084addeb +0x0cb:  mov    %eax,0x1c(%ebp)
084addee +0x0ce:  mov    0x1c(%ebp),%eax
084addf1 +0x0d1:  mov    %eax,-0x5c(%ebp)
084addf4 +0x0d4:  fildl  -0x5c(%ebp)
084addf7 +0x0d7:  fmuls  -0x30(%ebp)
084addfa +0x0da:  fldcw  -0x6c(%ebp)
084addfd +0x0dd:  fistpl -0x5c(%ebp)
084ade00 +0x0e0:  fldcw  -0x6a(%ebp)
084ade03 +0x0e3:  mov    -0x5c(%ebp),%eax
084ade06 +0x0e6:  mov    %eax,-0x48(%ebp)
084ade09 +0x0e9:  lea    -0x48(%ebp),%eax
084ade0c +0x0ec:  mov    %eax,0x4(%esp)
084ade10 +0x0f0:  lea    0x1c(%ebp),%eax
084ade13 +0x0f3:  mov    %eax,(%esp)
084ade16 +0x0f6:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084ade1b +0x0fb:  movl   $0x0,-0x44(%ebp)
084ade22 +0x102:  mov    %eax,0x4(%esp)
084ade26 +0x106:  lea    -0x44(%ebp),%eax
084ade29 +0x109:  mov    %eax,(%esp)
084ade2c +0x10c:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084ade31 +0x111:  mov    (%eax),%eax
084ade33 +0x113:  mov    %eax,0x1c(%ebp)
084ade36 +0x116:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084ade3b +0x11b:  movl   $0x4,0x4(%esp)
084ade43 +0x123:  mov    %eax,(%esp)
084ade46 +0x126:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
084ade4b +0x12b:  test   %al,%al
084ade4d +0x12d:  je     084adf40 <+0x220>
084ade53 +0x133:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084ade58 +0x138:  movl   $0x4,0x4(%esp)
084ade60 +0x140:  mov    %eax,(%esp)
084ade63 +0x143:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
084ade68 +0x148:  fstps  -0x28(%ebp)
084ade6b +0x14b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ade70 +0x150:  mov    %eax,(%esp)
084ade73 +0x153:  call   0830e6d2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b7
084ade78 +0x158:  fnstcw -0x6a(%ebp)
084ade7b +0x15b:  movzwl -0x6a(%ebp),%eax
084ade7f +0x15f:  mov    $0xc,%ah
084ade81 +0x161:  mov    %ax,-0x6c(%ebp)
084ade85 +0x165:  fldcw  -0x6c(%ebp)
084ade88 +0x168:  fistpll -0x68(%ebp)
084ade8b +0x16b:  fldcw  -0x6a(%ebp)
084ade8e +0x16e:  mov    -0x68(%ebp),%eax
084ade91 +0x171:  mov    -0x64(%ebp),%edx
084ade94 +0x174:  mov    %eax,-0x24(%ebp)
084ade97 +0x177:  mov    -0x24(%ebp),%eax
084ade9a +0x17a:  mov    $0x0,%edx
084ade9f +0x17f:  mov    %eax,-0x68(%ebp)
084adea2 +0x182:  mov    %edx,-0x64(%ebp)
084adea5 +0x185:  fildll -0x68(%ebp)
084adea8 +0x188:  flds   -0x28(%ebp)
084adeab +0x18b:  fucompp
084adead +0x18d:  fnstsw %ax
084adeaf +0x18f:  test   $0x45,%ah
084adeb2 +0x192:  sete   %al
084adeb5 +0x195:  test   %al,%al
084adeb7 +0x197:  je     084adf40 <+0x220>
084adebd +0x19d:  mov    0x1c(%ebp),%eax
084adec0 +0x1a0:  mov    %eax,-0x5c(%ebp)
084adec3 +0x1a3:  fildl  -0x5c(%ebp)
084adec6 +0x1a6:  mov    -0x24(%ebp),%eax
084adec9 +0x1a9:  mov    $0x0,%edx
084adece +0x1ae:  mov    %eax,-0x68(%ebp)
084aded1 +0x1b1:  mov    %edx,-0x64(%ebp)
084aded4 +0x1b4:  fildll -0x68(%ebp)
084aded7 +0x1b7:  flds   -0x28(%ebp)
084adeda +0x1ba:  fsubp  %st,%st(1)
084adedc +0x1bc:  fmulp  %st,%st(1)
084adede +0x1be:  fldcw  -0x6c(%ebp)
084adee1 +0x1c1:  fistpll -0x68(%ebp)
084adee4 +0x1c4:  fldcw  -0x6a(%ebp)
084adee7 +0x1c7:  mov    -0x68(%ebp),%eax
084adeea +0x1ca:  mov    -0x64(%ebp),%edx
084adeed +0x1cd:  mov    %eax,%edx
084adeef +0x1cf:  mov    0x1c(%ebp),%eax
084adef2 +0x1d2:  lea    (%edx,%eax,1),%eax
084adef5 +0x1d5:  mov    %eax,0x1c(%ebp)
084adef8 +0x1d8:  mov    0x1c(%ebp),%eax
084adefb +0x1db:  mov    %eax,-0x5c(%ebp)
084adefe +0x1de:  fildl  -0x5c(%ebp)
084adf01 +0x1e1:  fmuls  -0x28(%ebp)
084adf04 +0x1e4:  fldcw  -0x6c(%ebp)
084adf07 +0x1e7:  fistpl -0x5c(%ebp)
084adf0a +0x1ea:  fldcw  -0x6a(%ebp)
084adf0d +0x1ed:  mov    -0x5c(%ebp),%eax
084adf10 +0x1f0:  mov    %eax,-0x40(%ebp)
084adf13 +0x1f3:  lea    -0x40(%ebp),%eax
084adf16 +0x1f6:  mov    %eax,0x4(%esp)
084adf1a +0x1fa:  lea    0x1c(%ebp),%eax
084adf1d +0x1fd:  mov    %eax,(%esp)
084adf20 +0x200:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084adf25 +0x205:  movl   $0x0,-0x3c(%ebp)
084adf2c +0x20c:  mov    %eax,0x4(%esp)
084adf30 +0x210:  lea    -0x3c(%ebp),%eax
084adf33 +0x213:  mov    %eax,(%esp)
084adf36 +0x216:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084adf3b +0x21b:  mov    (%eax),%eax
084adf3d +0x21d:  mov    %eax,0x1c(%ebp)
084adf40 +0x220:  movb   $0x0,-0x35(%ebp)
084adf44 +0x224:  movl   $0x0,-0x34(%ebp)
084adf4b +0x22b:  movl   $0x0,-0x20(%ebp)
084adf52 +0x232:  jmp    084adfaa <+0x28a>
084adf54 +0x234:  mov    -0x20(%ebp),%eax
084adf57 +0x237:  mov    %eax,0x4(%esp)
084adf5b +0x23b:  mov    0xc(%ebp),%eax
084adf5e +0x23e:  mov    %eax,(%esp)
084adf61 +0x241:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
084adf66 +0x246:  xor    $0x1,%eax
084adf69 +0x249:  test   %al,%al
084adf6b +0x24b:  jne    084adfa5 <+0x285>
084adf6d +0x24d:  mov    0xc(%ebp),%eax
084adf70 +0x250:  mov    %eax,(%esp)
084adf73 +0x253:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
084adf78 +0x258:  mov    %eax,%ecx
084adf7a +0x25a:  mov    -0x20(%ebp),%edx
084adf7d +0x25d:  mov    %edx,%eax
084adf7f +0x25f:  add    %eax,%eax
084adf81 +0x261:  add    %edx,%eax
084adf83 +0x263:  shl    $0x3,%eax
084adf86 +0x266:  lea    (%ecx,%eax,1),%eax
084adf89 +0x269:  mov    (%eax),%eax
084adf8b +0x26b:  movl   $0x4f,0x4(%esp)
084adf93 +0x273:  mov    %eax,(%esp)
084adf96 +0x276:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084adf9b +0x27b:  test   %al,%al
084adf9d +0x27d:  je     084adfa6 <+0x286>
084adf9f +0x27f:  addb   $0x1,-0x35(%ebp)
084adfa3 +0x283:  jmp    084adfa6 <+0x286>
084adfa5 +0x285:  nop
084adfa6 +0x286:  addl   $0x1,-0x20(%ebp)
084adfaa +0x28a:  cmpl   $0x3,-0x20(%ebp)
084adfae +0x28e:  setle  %al
084adfb1 +0x291:  test   %al,%al
084adfb3 +0x293:  jne    084adf54 <+0x234>
084adfb5 +0x295:  cmpb   $0x0,-0x35(%ebp)
084adfb9 +0x299:  je     084ae02f <+0x30f>
084adfbb +0x29b:  cmpb   $0x4,-0x35(%ebp)
084adfbf +0x29f:  ja     084ae02f <+0x30f>
084adfc1 +0x2a1:  movl   $0x0,-0x1c(%ebp)
084adfc8 +0x2a8:  jmp    084ae024 <+0x304>
084adfca +0x2aa:  mov    -0x1c(%ebp),%eax
084adfcd +0x2ad:  mov    %eax,0x4(%esp)
084adfd1 +0x2b1:  mov    0xc(%ebp),%eax
084adfd4 +0x2b4:  mov    %eax,(%esp)
084adfd7 +0x2b7:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
084adfdc +0x2bc:  xor    $0x1,%eax
084adfdf +0x2bf:  test   %al,%al
084adfe1 +0x2c1:  je     084adfe9 <+0x2c9>
084adfe3 +0x2c3:  addl   $0x1,-0x1c(%ebp)
084adfe7 +0x2c7:  jmp    084ae024 <+0x304>
084adfe9 +0x2c9:  movzbl -0x35(%ebp),%ebx
084adfed +0x2cd:  mov    0xc(%ebp),%eax
084adff0 +0x2d0:  mov    %eax,(%esp)
084adff3 +0x2d3:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
084adff8 +0x2d8:  mov    %eax,%ecx
084adffa +0x2da:  mov    -0x1c(%ebp),%edx
084adffd +0x2dd:  mov    %edx,%eax
084adfff +0x2df:  add    %eax,%eax
084ae001 +0x2e1:  add    %edx,%eax
084ae003 +0x2e3:  shl    $0x3,%eax
084ae006 +0x2e6:  lea    (%ecx,%eax,1),%eax
084ae009 +0x2e9:  mov    (%eax),%eax
084ae00b +0x2eb:  mov    %ebx,0x8(%esp)
084ae00f +0x2ef:  movl   $0x4f,0x4(%esp)
084ae017 +0x2f7:  mov    %eax,(%esp)
084ae01a +0x2fa:  call   0830edaa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x98f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x98f
084ae01f +0x2ff:  mov    %eax,-0x34(%ebp)
084ae022 +0x302:  jmp    084ae02f <+0x30f>
084ae024 +0x304:  cmpl   $0x3,-0x1c(%ebp)
084ae028 +0x308:  setle  %al
084ae02b +0x30b:  test   %al,%al
084ae02d +0x30d:  jne    084adfca <+0x2aa>
084ae02f +0x30f:  movb   $0x0,-0x49(%ebp)
084ae033 +0x313:  mov    0x14(%ebp),%eax
084ae036 +0x316:  movzwl 0x334(%eax),%eax
084ae03d +0x31d:  test   %ax,%ax
084ae040 +0x320:  je     084ae068 <+0x348>
084ae042 +0x322:  mov    0xc(%ebp),%eax
084ae045 +0x325:  lea    0xb24(%eax),%edx
084ae04b +0x32b:  lea    -0x49(%ebp),%eax
084ae04e +0x32e:  mov    %eax,0xc(%esp)
084ae052 +0x332:  mov    0x14(%ebp),%eax
084ae055 +0x335:  mov    %eax,0x8(%esp)
084ae059 +0x339:  mov    0x10(%ebp),%eax
084ae05c +0x33c:  mov    %eax,0x4(%esp)
084ae060 +0x340:  mov    %edx,(%esp)
084ae063 +0x343:  call   0830d704 <_ZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRb>  ; CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&)
084ae068 +0x348:  mov    -0x34(%ebp),%edi
084ae06b +0x34b:  movzbl -0x49(%ebp),%eax
084ae06f +0x34f:  movzbl %al,%esi
084ae072 +0x352:  mov    0x1c(%ebp),%ebx
084ae075 +0x355:  mov    0xc(%ebp),%eax
084ae078 +0x358:  mov    %eax,(%esp)
084ae07b +0x35b:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
084ae080 +0x360:  mov    0xc(%ebp),%edx
084ae083 +0x363:  lea    0xb24(%edx),%ecx
084ae089 +0x369:  mov    %edi,0x2c(%esp)
084ae08d +0x36d:  mov    $0x3f800000,%edx
084ae092 +0x372:  mov    %edx,0x28(%esp)
084ae096 +0x376:  mov    0x18(%ebp),%edx
084ae099 +0x379:  mov    %edx,0x24(%esp)
084ae09d +0x37d:  mov    %esi,0x20(%esp)
084ae0a1 +0x381:  mov    %ebx,0x1c(%esp)
084ae0a5 +0x385:  movl   $0x64,0x18(%esp)
084ae0ad +0x38d:  mov    %eax,0x14(%esp)
084ae0b1 +0x391:  movl   $0x0,0x10(%esp)
084ae0b9 +0x399:  mov    0x14(%ebp),%eax
084ae0bc +0x39c:  mov    %eax,0xc(%esp)
084ae0c0 +0x3a0:  mov    0x10(%ebp),%eax
084ae0c3 +0x3a3:  mov    %eax,0x8(%esp)
084ae0c7 +0x3a7:  mov    0x20(%ebp),%eax
084ae0ca +0x3aa:  mov    %eax,0x4(%esp)
084ae0ce +0x3ae:  mov    %ecx,(%esp)
084ae0d1 +0x3b1:  call   0830adf6 <_ZN13CBattle_Field14_MakeDropItemsERSt4listI8map_itemSaIS1_EER7MapInfoRK11map_monstertiiibRSt6vectorIbSaIbEEfi>  ; CBattle_Field::_MakeDropItems(std::list<map_item, std::allocator<map_item> >&, MapInfo&, map_monster const&, unsigned short, int, int, int, bool, std::vector<bool, std::allocator<bool> >&, float, int)
084ae0d6 +0x3b6:  add    $0x9c,%esp
084ae0dc +0x3bc:  pop    %ebx
084ae0dd +0x3bd:  pop    %esi
084ae0de +0x3be:  pop    %edi
084ae0df +0x3bf:  pop    %ebp
084ae0e0 +0x3c0:  ret
084ae0e1 +0x3c1:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::processKillMonster @ 0x84add20

/* game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&,
   std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)
    */

void __thiscall
game_master::CMonsterDropTest::processKillMonster
          (CMonsterDropTest *this,CParty *param_1,MapInfo *param_2,map_monster *param_3,
          vector *param_4,int param_5,list *param_6)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  CDataManager *pCVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longdouble lVar10;
  ulonglong local_6c;
  bool local_4d;
  int local_4c [3];
  int local_40;
  byte local_39;
  int local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  cVar5 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,1);
  if (cVar5 != '\0') {
    lVar10 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,1);
    local_34 = (float)lVar10;
    pCVar6 = (CDataManager *)G_CDataManager();
    lVar10 = (longdouble)CDataManager::getDropRate(pCVar6);
    uVar1 = (ulonglong)ROUND(lVar10);
    local_6c._0_4_ = (int)uVar1;
    local_30 = (int)local_6c;
    local_6c = uVar1 & 0xffffffff;
    if ((float)local_6c < local_34) {
      local_6c = uVar1 & 0xffffffff;
      local_6c._0_4_ = (int)(longlong)ROUND((local_34 - (float)local_6c) * (float)param_5);
      param_5 = (int)local_6c + param_5;
      local_4c[0] = (int)ROUND((float)param_5 * local_34);
      piVar7 = std::min<int>(&param_5,local_4c);
      local_4c[1] = 0;
      piVar7 = std::max<int>(local_4c + 1,piVar7);
      param_5 = *piVar7;
    }
  }
  cVar5 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,4);
  if (cVar5 != '\0') {
    lVar10 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,4);
    local_2c = (float)lVar10;
    pCVar6 = (CDataManager *)G_CDataManager();
    lVar10 = (longdouble)CDataManager::getDropRate(pCVar6);
    uVar1 = (ulonglong)ROUND(lVar10);
    local_6c._0_4_ = (int)uVar1;
    local_28 = (int)local_6c;
    local_6c = uVar1 & 0xffffffff;
    if ((float)local_6c < local_2c) {
      local_6c = uVar1 & 0xffffffff;
      local_6c._0_4_ = (int)(longlong)ROUND((local_2c - (float)local_6c) * (float)param_5);
      param_5 = (int)local_6c + param_5;
      local_4c[2] = (int)ROUND((float)param_5 * local_2c);
      piVar7 = std::min<int>(&param_5,local_4c + 2);
      local_40 = 0;
      piVar7 = std::max<int>(&local_40,piVar7);
      param_5 = *piVar7;
    }
  }
  local_39 = 0;
  local_38 = 0;
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    cVar5 = CParty::checkValidUser(param_1,local_24);
    if (cVar5 == '\x01') {
      iVar8 = CParty::GetMember(param_1);
      cVar5 = CUser::isAffectedPremium(*(CUser **)(iVar8 + local_24 * 0x18),0x4f);
      if (cVar5 != '\0') {
        local_39 = local_39 + 1;
      }
    }
  }
  if ((local_39 != 0) && (local_39 < 5)) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar5 = CParty::checkValidUser(param_1,local_20);
      bVar3 = local_39;
      if (cVar5 == '\x01') {
        iVar8 = CParty::GetMember(param_1);
        local_38 = CUser::getAddIndependentDropRateFromPremium
                             (*(CUser **)(iVar8 + local_20 * 0x18),0x4f,bVar3);
        break;
      }
    }
  }
  local_4d = false;
  if (*(short *)(param_3 + 0x334) != 0) {
    CBattle_Field::KillHellPartyGroupMonsterCnt
              ((CBattle_Field *)(param_1 + 0xb24),param_2,param_3,&local_4d);
  }
  iVar4 = local_38;
  bVar2 = local_4d;
  iVar8 = param_5;
  iVar9 = CParty::get_member_count(param_1);
  CBattle_Field::_MakeDropItems
            ((CBattle_Field *)(param_1 + 0xb24),param_6,param_2,param_3,0,iVar9,100,iVar8,bVar2,
             param_4,1.0,iVar4);
  return;
}
```
