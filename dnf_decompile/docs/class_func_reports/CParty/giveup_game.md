# giveup_game

`_ZN6CParty11giveup_gameEP5CUserbbb`

`CParty::giveup_game(CUser*, bool, bool, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2baa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2baa  _ZN6CParty11giveup_gameEP5CUserbbb
#           CParty::giveup_game(CUser*, bool, bool, bool)
# range [0x085b2baa, 0x085b351f]
085b2baa +0x000:  push   %ebp
085b2bab +0x001:  mov    %esp,%ebp
085b2bad +0x003:  push   %edi
085b2bae +0x004:  push   %esi
085b2baf +0x005:  push   %ebx
085b2bb0 +0x006:  sub    $0x17c,%esp
085b2bb6 +0x00c:  mov    0x10(%ebp),%ecx
085b2bb9 +0x00f:  mov    0x14(%ebp),%edx
085b2bbc +0x012:  mov    0x18(%ebp),%eax
085b2bbf +0x015:  mov    %cl,-0x15c(%ebp)
085b2bc5 +0x01b:  mov    %dl,-0x160(%ebp)
085b2bcb +0x021:  mov    %al,-0x164(%ebp)
085b2bd1 +0x027:  movb   $0x0,-0x3d(%ebp)
085b2bd5 +0x02b:  mov    0x8(%ebp),%eax
085b2bd8 +0x02e:  mov    0xcac(%eax),%eax
085b2bde +0x034:  mov    %eax,-0x3c(%ebp)
085b2be1 +0x037:  cmpl   $0x0,-0x3c(%ebp)
085b2be5 +0x03b:  je     085b2c0c <+0x62>
085b2be7 +0x03d:  mov    -0x3c(%ebp),%eax
085b2bea +0x040:  movzbl 0x89f(%eax),%eax
085b2bf1 +0x047:  test   %al,%al
085b2bf3 +0x049:  jle    085b2bf9 <+0x4f>
085b2bf5 +0x04b:  movb   $0x1,-0x3d(%ebp)
085b2bf9 +0x04f:  mov    -0x3c(%ebp),%eax
085b2bfc +0x052:  mov    %eax,(%esp)
085b2bff +0x055:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085b2c04 +0x05a:  test   %al,%al
085b2c06 +0x05c:  je     085b2c0c <+0x62>
085b2c08 +0x05e:  movb   $0x1,-0x3d(%ebp)
085b2c0c +0x062:  cmpl   $0x0,-0x3c(%ebp)
085b2c10 +0x066:  je     085b2c55 <+0xab>
085b2c12 +0x068:  mov    -0x3c(%ebp),%eax
085b2c15 +0x06b:  mov    %eax,(%esp)
085b2c18 +0x06e:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085b2c1d +0x073:  test   %al,%al
085b2c1f +0x075:  jg     085b2c3e <+0x94>
085b2c21 +0x077:  mov    -0x3c(%ebp),%eax
085b2c24 +0x07a:  movzbl 0x89c(%eax),%eax
085b2c2b +0x081:  test   %al,%al
085b2c2d +0x083:  jne    085b2c3e <+0x94>
085b2c2f +0x085:  mov    -0x3c(%ebp),%eax
085b2c32 +0x088:  mov    %eax,(%esp)
085b2c35 +0x08b:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085b2c3a +0x090:  test   %al,%al
085b2c3c +0x092:  je     085b2c45 <+0x9b>
085b2c3e +0x094:  mov    $0x1,%eax
085b2c43 +0x099:  jmp    085b2c4a <+0xa0>
085b2c45 +0x09b:  mov    $0x0,%eax
085b2c4a +0x0a0:  test   %al,%al
085b2c4c +0x0a2:  je     085b2c55 <+0xab>
085b2c4e +0x0a4:  movb   $0x0,-0x15c(%ebp)
085b2c55 +0x0ab:  cmpl   $0x0,-0x3c(%ebp)
085b2c59 +0x0af:  je     085b2c70 <+0xc6>
085b2c5b +0x0b1:  mov    -0x3c(%ebp),%eax
085b2c5e +0x0b4:  movzbl 0x85c(%eax),%eax
085b2c65 +0x0bb:  test   %al,%al
085b2c67 +0x0bd:  je     085b2c70 <+0xc6>
085b2c69 +0x0bf:  movb   $0x0,-0x15c(%ebp)
085b2c70 +0x0c6:  cmpl   $0x0,-0x3c(%ebp)
085b2c74 +0x0ca:  je     085b2c8b <+0xe1>
085b2c76 +0x0cc:  mov    -0x3c(%ebp),%eax
085b2c79 +0x0cf:  movzbl 0x87a(%eax),%eax
085b2c80 +0x0d6:  test   %al,%al
085b2c82 +0x0d8:  je     085b2c8b <+0xe1>
085b2c84 +0x0da:  movb   $0x0,-0x15c(%ebp)
085b2c8b +0x0e1:  movb   $0x0,-0x35(%ebp)
085b2c8f +0x0e5:  mov    0x8(%ebp),%eax
085b2c92 +0x0e8:  mov    0xcd8(%eax),%eax
085b2c98 +0x0ee:  cmp    $0x1,%eax
085b2c9b +0x0f1:  jne    085b2ca1 <+0xf7>
085b2c9d +0x0f3:  movb   $0x1,-0x35(%ebp)
085b2ca1 +0x0f7:  mov    0xc(%ebp),%eax
085b2ca4 +0x0fa:  mov    %eax,(%esp)
085b2ca7 +0x0fd:  call   08645d96 <_ZN15CUserCharacInfo26reset_level_before_dungeonEv>  ; CUserCharacInfo::reset_level_before_dungeon()
085b2cac +0x102:  mov    0x8(%ebp),%eax
085b2caf +0x105:  add    $0xc7c,%eax
085b2cb4 +0x10a:  movl   $&_ZZN6CParty11giveup_gameEP5CUserbbbE19__PRETTY_FUNCTION__,0x4(%esp)
085b2cbc +0x112:  mov    %eax,(%esp)
085b2cbf +0x115:  call   082fed32 <_ZN19CDungeonClearTracer5TraceEPKc>  ; CDungeonClearTracer::Trace(char const*)
085b2cc4 +0x11a:  mov    0x8(%ebp),%eax
085b2cc7 +0x11d:  mov    %eax,(%esp)
085b2cca +0x120:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
085b2ccf +0x125:  mov    0x8(%ebp),%eax
085b2cd2 +0x128:  mov    %eax,(%esp)
085b2cd5 +0x12b:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b2cda +0x130:  mov    %eax,-0x34(%ebp)
085b2cdd +0x133:  cmpl   $0x0,0xc(%ebp)
085b2ce1 +0x137:  je     085b2d04 <+0x15a>
085b2ce3 +0x139:  mov    0xc(%ebp),%eax
085b2ce6 +0x13c:  mov    %eax,(%esp)
085b2ce9 +0x13f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b2cee +0x144:  test   %eax,%eax
085b2cf0 +0x146:  je     085b2d04 <+0x15a>
085b2cf2 +0x148:  movzbl -0x35(%ebp),%eax
085b2cf6 +0x14c:  xor    $0x1,%eax
085b2cf9 +0x14f:  test   %al,%al
085b2cfb +0x151:  je     085b2d04 <+0x15a>
085b2cfd +0x153:  mov    $0x1,%eax
085b2d02 +0x158:  jmp    085b2d09 <+0x15f>
085b2d04 +0x15a:  mov    $0x0,%eax
085b2d09 +0x15f:  test   %al,%al
085b2d0b +0x161:  je     085b2d25 <+0x17b>
085b2d0d +0x163:  mov    0xc(%ebp),%eax
085b2d10 +0x166:  mov    %eax,(%esp)
085b2d13 +0x169:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b2d18 +0x16e:  movzwl 0x27(%eax),%eax
085b2d1c +0x172:  cwtl
085b2d1d +0x173:  mov    %eax,(%esp)
085b2d20 +0x176:  call   0860b8b4 <_ZN10Statistics11DungeonFailEi>  ; Statistics::DungeonFail(int)
085b2d25 +0x17b:  movl   $0x0,-0x24(%ebp)
085b2d2c +0x182:  jmp    085b2d84 <+0x1da>
085b2d2e +0x184:  mov    -0x24(%ebp),%eax
085b2d31 +0x187:  mov    %eax,0x4(%esp)
085b2d35 +0x18b:  mov    0x8(%ebp),%eax
085b2d38 +0x18e:  mov    %eax,(%esp)
085b2d3b +0x191:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b2d40 +0x196:  xor    $0x1,%eax
085b2d43 +0x199:  test   %al,%al
085b2d45 +0x19b:  jne    085b2d7f <+0x1d5>
085b2d47 +0x19d:  mov    0xc(%ebp),%eax
085b2d4a +0x1a0:  mov    %eax,(%esp)
085b2d4d +0x1a3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b2d52 +0x1a8:  mov    %eax,%ecx
085b2d54 +0x1aa:  mov    -0x24(%ebp),%edx
085b2d57 +0x1ad:  mov    0x8(%ebp),%ebx
085b2d5a +0x1b0:  mov    %edx,%eax
085b2d5c +0x1b2:  add    %eax,%eax
085b2d5e +0x1b4:  add    %edx,%eax
085b2d60 +0x1b6:  shl    $0x3,%eax
085b2d63 +0x1b9:  lea    (%ebx,%eax,1),%eax
085b2d66 +0x1bc:  add    $0x78,%eax
085b2d69 +0x1bf:  mov    (%eax),%eax
085b2d6b +0x1c1:  mov    0x796f8(%eax),%eax
085b2d71 +0x1c7:  mov    %ecx,0x4(%esp)
085b2d75 +0x1cb:  mov    %eax,(%esp)
085b2d78 +0x1ce:  call   084ba070 <_ZN10HistoryLog11WriteGiveUpEP8_IO_FILEPKc>  ; HistoryLog::WriteGiveUp(_IO_FILE*, char const*)
085b2d7d +0x1d3:  jmp    085b2d80 <+0x1d6>
085b2d7f +0x1d5:  nop
085b2d80 +0x1d6:  addl   $0x1,-0x24(%ebp)
085b2d84 +0x1da:  cmpl   $0x3,-0x24(%ebp)
085b2d88 +0x1de:  setle  %al
085b2d8b +0x1e1:  test   %al,%al
085b2d8d +0x1e3:  jne    085b2d2e <+0x184>
085b2d8f +0x1e5:  mov    0x8(%ebp),%eax
085b2d92 +0x1e8:  movzwl 0xc4c(%eax),%eax
085b2d99 +0x1ef:  test   %ax,%ax
085b2d9c +0x1f2:  jne    085b2db6 <+0x20c>
085b2d9e +0x1f4:  cmpl   $0x0,-0x3c(%ebp)
085b2da2 +0x1f8:  je     085b2dbd <+0x213>
085b2da4 +0x1fa:  mov    -0x3c(%ebp),%eax
085b2da7 +0x1fd:  mov    %eax,(%esp)
085b2daa +0x200:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b2daf +0x205:  cmp    $0x2710,%eax
085b2db4 +0x20a:  jne    085b2dbd <+0x213>
085b2db6 +0x20c:  mov    $0x1,%eax
085b2dbb +0x211:  jmp    085b2dc2 <+0x218>
085b2dbd +0x213:  mov    $0x0,%eax
085b2dc2 +0x218:  test   %al,%al
085b2dc4 +0x21a:  je     085b2dcd <+0x223>
085b2dc6 +0x21c:  movb   $0x0,-0x15c(%ebp)
085b2dcd +0x223:  cmpb   $0x0,-0x160(%ebp)
085b2dd4 +0x22a:  je     085b2dea <+0x240>
085b2dd6 +0x22c:  mov    0xc(%ebp),%eax
085b2dd9 +0x22f:  mov    %eax,0x4(%esp)
085b2ddd +0x233:  mov    0x8(%ebp),%eax
085b2de0 +0x236:  mov    %eax,(%esp)
085b2de3 +0x239:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085b2de8 +0x23e:  jmp    085b2e2c <+0x282>
085b2dea +0x240:  mov    0x8(%ebp),%eax
085b2ded +0x243:  mov    %eax,(%esp)
085b2df0 +0x246:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b2df5 +0x24b:  cmp    $0x1,%eax
085b2df8 +0x24e:  sete   %al
085b2dfb +0x251:  test   %al,%al
085b2dfd +0x253:  je     085b2e1a <+0x270>
085b2dff +0x255:  mov    0x8(%ebp),%eax
085b2e02 +0x258:  mov    %eax,(%esp)
085b2e05 +0x25b:  call   085bb0ac <_ZN6CParty24CheckHackAverageHitCountEv>  ; CParty::CheckHackAverageHitCount()
085b2e0a +0x260:  mov    0x8(%ebp),%eax
085b2e0d +0x263:  add    $0x1abc,%eax
085b2e12 +0x268:  mov    %eax,(%esp)
085b2e15 +0x26b:  call   0827aaca <_ZN24Secu_HackLogCheckByParty11dungeonFailEv>  ; Secu_HackLogCheckByParty::dungeonFail()
085b2e1a +0x270:  mov    0xc(%ebp),%eax
085b2e1d +0x273:  mov    %eax,0x4(%esp)
085b2e21 +0x277:  mov    0x8(%ebp),%eax
085b2e24 +0x27a:  mov    %eax,(%esp)
085b2e27 +0x27d:  call   085bf7da <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd38>  ; global constructors keyed to CParty::cMember::cMember()+0xd38
085b2e2c +0x282:  cmpl   $0x0,0xc(%ebp)
085b2e30 +0x286:  je     085b2e4d <+0x2a3>
085b2e32 +0x288:  mov    0x8(%ebp),%eax
085b2e35 +0x28b:  add    $0xb24,%eax
085b2e3a +0x290:  mov    %eax,(%esp)
085b2e3d +0x293:  call   0822cf50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25fa
085b2e42 +0x298:  test   %al,%al
085b2e44 +0x29a:  je     085b2e4d <+0x2a3>
085b2e46 +0x29c:  mov    $0x1,%eax
085b2e4b +0x2a1:  jmp    085b2e52 <+0x2a8>
085b2e4d +0x2a3:  mov    $0x0,%eax
085b2e52 +0x2a8:  test   %al,%al
085b2e54 +0x2aa:  je     085b2e90 <+0x2e6>
085b2e56 +0x2ac:  mov    0xc(%ebp),%eax
085b2e59 +0x2af:  mov    %eax,(%esp)
085b2e5c +0x2b2:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b2e61 +0x2b7:  movl   $0x0,0x14(%esp)
085b2e69 +0x2bf:  movl   $0x0,0x10(%esp)
085b2e71 +0x2c7:  movl   $0x1,0xc(%esp)
085b2e79 +0x2cf:  movl   $0x325,0x8(%esp)
085b2e81 +0x2d7:  mov    0xc(%ebp),%edx
085b2e84 +0x2da:  mov    %edx,0x4(%esp)
085b2e88 +0x2de:  mov    %eax,(%esp)
085b2e8b +0x2e1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085b2e90 +0x2e6:  movl   $0x3,0x4(%esp)
085b2e98 +0x2ee:  mov    0x8(%ebp),%eax
085b2e9b +0x2f1:  mov    %eax,(%esp)
085b2e9e +0x2f4:  call   085b3520 <_ZN6CParty8SaveCoinE14eCoinSubReason>  ; CParty::SaveCoin(eCoinSubReason)
085b2ea3 +0x2f9:  mov    0x8(%ebp),%eax
085b2ea6 +0x2fc:  mov    %eax,(%esp)
085b2ea9 +0x2ff:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
085b2eae +0x304:  mov    %al,-0x2d(%ebp)
085b2eb1 +0x307:  cmpb   $0x1,-0x2d(%ebp)
085b2eb5 +0x30b:  jne    085b2efa <+0x350>
085b2eb7 +0x30d:  mov    0x8(%ebp),%eax
085b2eba +0x310:  mov    %eax,(%esp)
085b2ebd +0x313:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085b2ec2 +0x318:  mov    %eax,(%esp)
085b2ec5 +0x31b:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b2eca +0x320:  cmp    $0x1,%eax
085b2ecd +0x323:  setne  %al
085b2ed0 +0x326:  test   %al,%al
085b2ed2 +0x328:  je     085b2efa <+0x350>
085b2ed4 +0x32a:  mov    -0x3c(%ebp),%eax
085b2ed7 +0x32d:  mov    %eax,(%esp)
085b2eda +0x330:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b2edf +0x335:  mov    %eax,%ebx
085b2ee1 +0x337:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
085b2ee6 +0x33c:  movl   $0x0,0x8(%esp)
085b2eee +0x344:  mov    %ebx,0x4(%esp)
085b2ef2 +0x348:  mov    %eax,(%esp)
085b2ef5 +0x34b:  call   0860e324 <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib>  ; CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)
085b2efa +0x350:  lea    -0x4c(%ebp),%eax
085b2efd +0x353:  mov    %eax,(%esp)
085b2f00 +0x356:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b2f05 +0x35b:  mov    0x8(%ebp),%eax
085b2f08 +0x35e:  movzbl 0x13c(%eax),%eax
085b2f0f +0x365:  test   %al,%al
085b2f11 +0x367:  je     085b3042 <+0x498>
085b2f17 +0x36d:  movl   $0x2,0x8(%esp)
085b2f1f +0x375:  mov    0xc(%ebp),%eax
085b2f22 +0x378:  mov    %eax,0x4(%esp)
085b2f26 +0x37c:  mov    0x8(%ebp),%eax
085b2f29 +0x37f:  mov    %eax,(%esp)
085b2f2c +0x382:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
085b2f31 +0x387:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b2f36 +0x38c:  mov    0xc(%ebp),%edx
085b2f39 +0x38f:  mov    %edx,0x4(%esp)
085b2f3d +0x393:  mov    %eax,(%esp)
085b2f40 +0x396:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085b2f45 +0x39b:  movzbl -0x35(%ebp),%eax
085b2f49 +0x39f:  xor    $0x1,%eax
085b2f4c +0x3a2:  test   %al,%al
085b2f4e +0x3a4:  je     085b2f75 <+0x3cb>
085b2f50 +0x3a6:  movzbl -0x3d(%ebp),%eax
085b2f54 +0x3aa:  xor    $0x1,%eax
085b2f57 +0x3ad:  test   %al,%al
085b2f59 +0x3af:  je     085b2f75 <+0x3cb>
085b2f5b +0x3b1:  cmpb   $0x1,-0x2d(%ebp)
085b2f5f +0x3b5:  jne    085b2f75 <+0x3cb>
085b2f61 +0x3b7:  cmpb   $0x0,-0x15c(%ebp)
085b2f68 +0x3be:  je     085b2f75 <+0x3cb>
085b2f6a +0x3c0:  mov    0xc(%ebp),%eax
085b2f6d +0x3c3:  mov    %eax,(%esp)
085b2f70 +0x3c6:  call   086786be <_ZN5CUser14giveup_panaltyEv>  ; CUser::giveup_panalty()
085b2f75 +0x3cb:  lea    -0x4c(%ebp),%eax
085b2f78 +0x3ce:  mov    %eax,(%esp)
085b2f7b +0x3d1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b2f80 +0x3d6:  movl   $0x2,0x8(%esp)
085b2f88 +0x3de:  movl   $0x0,0x4(%esp)
085b2f90 +0x3e6:  lea    -0x4c(%ebp),%eax
085b2f93 +0x3e9:  mov    %eax,(%esp)
085b2f96 +0x3ec:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b2f9b +0x3f1:  movl   $0x0,0x4(%esp)
085b2fa3 +0x3f9:  lea    -0x4c(%ebp),%eax
085b2fa6 +0x3fc:  mov    %eax,(%esp)
085b2fa9 +0x3ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b2fae +0x404:  movl   $0x1,0x4(%esp)
085b2fb6 +0x40c:  lea    -0x4c(%ebp),%eax
085b2fb9 +0x40f:  mov    %eax,(%esp)
085b2fbc +0x412:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b2fc1 +0x417:  lea    -0x4c(%ebp),%eax
085b2fc4 +0x41a:  movl   $0x0,0x8(%esp)
085b2fcc +0x422:  mov    %eax,0x4(%esp)
085b2fd0 +0x426:  mov    0xc(%ebp),%eax
085b2fd3 +0x429:  mov    %eax,(%esp)
085b2fd6 +0x42c:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085b2fdb +0x431:  movl   $0x1,0x4(%esp)
085b2fe3 +0x439:  lea    -0x4c(%ebp),%eax
085b2fe6 +0x43c:  mov    %eax,(%esp)
085b2fe9 +0x43f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b2fee +0x444:  mov    0x8(%ebp),%eax
085b2ff1 +0x447:  mov    %eax,(%esp)
085b2ff4 +0x44a:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085b2ff9 +0x44f:  mov    %eax,(%esp)
085b2ffc +0x452:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085b3001 +0x457:  cmp    $0x1,%eax
085b3004 +0x45a:  setne  %al
085b3007 +0x45d:  test   %al,%al
085b3009 +0x45f:  je     085b302b <+0x481>
085b300b +0x461:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3010 +0x466:  mov    0xc(%ebp),%edx
085b3013 +0x469:  mov    %edx,0x8(%esp)
085b3017 +0x46d:  lea    -0x4c(%ebp),%edx
085b301a +0x470:  mov    %edx,0x4(%esp)
085b301e +0x474:  mov    %eax,(%esp)
085b3021 +0x477:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
085b3026 +0x47c:  jmp    085b350a <+0x960>
085b302b +0x481:  lea    -0x4c(%ebp),%eax
085b302e +0x484:  mov    %eax,0x4(%esp)
085b3032 +0x488:  mov    0x8(%ebp),%eax
085b3035 +0x48b:  mov    %eax,(%esp)
085b3038 +0x48e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b303d +0x493:  jmp    085b350a <+0x960>
085b3042 +0x498:  movzbl -0x160(%ebp),%eax
085b3049 +0x49f:  xor    $0x1,%eax
085b304c +0x4a2:  test   %al,%al
085b304e +0x4a4:  je     085b306a <+0x4c0>
085b3050 +0x4a6:  movl   $0x0,0x8(%esp)
085b3058 +0x4ae:  mov    0xc(%ebp),%eax
085b305b +0x4b1:  mov    %eax,0x4(%esp)
085b305f +0x4b5:  mov    0x8(%ebp),%eax
085b3062 +0x4b8:  mov    %eax,(%esp)
085b3065 +0x4bb:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
085b306a +0x4c0:  lea    -0x14c(%ebp),%ebx
085b3070 +0x4c6:  mov    $0x0,%eax
085b3075 +0x4cb:  mov    $0x40,%edx
085b307a +0x4d0:  mov    %ebx,%edi
085b307c +0x4d2:  mov    %edx,%ecx
085b307e +0x4d4:  rep stos %eax,%es:(%edi)
085b3080 +0x4d6:  lea    -0x14c(%ebp),%eax
085b3086 +0x4dc:  mov    %eax,0x4(%esp)
085b308a +0x4e0:  mov    0x8(%ebp),%eax
085b308d +0x4e3:  mov    %eax,(%esp)
085b3090 +0x4e6:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085b3095 +0x4eb:  mov    0x8(%ebp),%eax
085b3098 +0x4ee:  mov    %eax,(%esp)
085b309b +0x4f1:  call   084699da <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xbd>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xbd
085b30a0 +0x4f6:  cmp    $0x3,%al
085b30a2 +0x4f8:  je     085b30b3 <+0x509>
085b30a4 +0x4fa:  mov    0x8(%ebp),%eax
085b30a7 +0x4fd:  mov    %eax,(%esp)
085b30aa +0x500:  call   085b2b52 <_ZN6CParty19check_allmember_dieEv>  ; CParty::check_allmember_die()
085b30af +0x505:  test   %al,%al
085b30b1 +0x507:  jne    085b30c5 <+0x51b>
085b30b3 +0x509:  cmpb   $0x0,-0x160(%ebp)
085b30ba +0x510:  jne    085b30c5 <+0x51b>
085b30bc +0x512:  cmpb   $0x0,-0x164(%ebp)
085b30c3 +0x519:  je     085b30cc <+0x522>
085b30c5 +0x51b:  mov    $0x1,%eax
085b30ca +0x520:  jmp    085b30d1 <+0x527>
085b30cc +0x522:  mov    $0x0,%eax
085b30d1 +0x527:  test   %al,%al
085b30d3 +0x529:  je     085b33ac <+0x802>
085b30d9 +0x52f:  movl   $0x0,-0x20(%ebp)
085b30e0 +0x536:  jmp    085b327b <+0x6d1>
085b30e5 +0x53b:  mov    -0x20(%ebp),%eax
085b30e8 +0x53e:  mov    %eax,0x4(%esp)
085b30ec +0x542:  mov    0x8(%ebp),%eax
085b30ef +0x545:  mov    %eax,(%esp)
085b30f2 +0x548:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b30f7 +0x54d:  xor    $0x1,%eax
085b30fa +0x550:  test   %al,%al
085b30fc +0x552:  jne    085b3276 <+0x6cc>
085b3102 +0x558:  cmpl   $0x0,-0x3c(%ebp)
085b3106 +0x55c:  je     085b3186 <+0x5dc>
085b3108 +0x55e:  mov    0x8(%ebp),%eax
085b310b +0x561:  mov    0xcd8(%eax),%eax
085b3111 +0x567:  mov    %eax,%edi
085b3113 +0x569:  lea    -0x14c(%ebp),%eax
085b3119 +0x56f:  mov    %eax,0x4(%esp)
085b311d +0x573:  mov    0x8(%ebp),%eax
085b3120 +0x576:  mov    %eax,(%esp)
085b3123 +0x579:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085b3128 +0x57e:  mov    %eax,%esi
085b312a +0x580:  mov    0x8(%ebp),%eax
085b312d +0x583:  add    $0xb24,%eax
085b3132 +0x588:  mov    %eax,(%esp)
085b3135 +0x58b:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b313a +0x590:  mov    %eax,%ebx
085b313c +0x592:  mov    -0x3c(%ebp),%eax
085b313f +0x595:  mov    %eax,(%esp)
085b3142 +0x598:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085b3147 +0x59d:  mov    %eax,%ecx
085b3149 +0x59f:  mov    -0x20(%ebp),%edx
085b314c +0x5a2:  mov    0x8(%ebp),%eax
085b314f +0x5a5:  mov    %eax,-0x168(%ebp)
085b3155 +0x5ab:  mov    %edx,%eax
085b3157 +0x5ad:  add    %eax,%eax
085b3159 +0x5af:  add    %edx,%eax
085b315b +0x5b1:  shl    $0x3,%eax
085b315e +0x5b4:  add    -0x168(%ebp),%eax
085b3164 +0x5ba:  add    $0x78,%eax
085b3167 +0x5bd:  mov    (%eax),%eax
085b3169 +0x5bf:  add    $0x79700,%eax
085b316e +0x5c4:  mov    %edi,0x10(%esp)
085b3172 +0x5c8:  mov    %esi,0xc(%esp)
085b3176 +0x5cc:  mov    %ebx,0x8(%esp)
085b317a +0x5d0:  mov    %ecx,0x4(%esp)
085b317e +0x5d4:  mov    %eax,(%esp)
085b3181 +0x5d7:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
085b3186 +0x5dc:  mov    0x8(%ebp),%eax
085b3189 +0x5df:  movzwl 0xc4c(%eax),%eax
085b3190 +0x5e6:  test   %ax,%ax
085b3193 +0x5e9:  je     085b3208 <+0x65e>
085b3195 +0x5eb:  mov    -0x20(%ebp),%edx
085b3198 +0x5ee:  mov    0x8(%ebp),%ecx
085b319b +0x5f1:  mov    %edx,%eax
085b319d +0x5f3:  add    %eax,%eax
085b319f +0x5f5:  add    %edx,%eax
085b31a1 +0x5f7:  shl    $0x3,%eax
085b31a4 +0x5fa:  lea    (%ecx,%eax,1),%eax
085b31a7 +0x5fd:  add    $0x78,%eax
085b31aa +0x600:  mov    (%eax),%eax
085b31ac +0x602:  cmp    0xc(%ebp),%eax
085b31af +0x605:  je     085b3208 <+0x65e>
085b31b1 +0x607:  cmpb   $0x0,-0x160(%ebp)
085b31b8 +0x60e:  je     085b31e2 <+0x638>
085b31ba +0x610:  mov    -0x20(%ebp),%edx
085b31bd +0x613:  mov    0x8(%ebp),%ecx
085b31c0 +0x616:  mov    %edx,%eax
085b31c2 +0x618:  add    %eax,%eax
085b31c4 +0x61a:  add    %edx,%eax
085b31c6 +0x61c:  shl    $0x3,%eax
085b31c9 +0x61f:  lea    (%ecx,%eax,1),%eax
085b31cc +0x622:  add    $0x78,%eax
085b31cf +0x625:  mov    (%eax),%eax
085b31d1 +0x627:  mov    %eax,0x4(%esp)
085b31d5 +0x62b:  mov    0x8(%ebp),%eax
085b31d8 +0x62e:  mov    %eax,(%esp)
085b31db +0x631:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085b31e0 +0x636:  jmp    085b3208 <+0x65e>
085b31e2 +0x638:  mov    -0x20(%ebp),%edx
085b31e5 +0x63b:  mov    0x8(%ebp),%ecx
085b31e8 +0x63e:  mov    %edx,%eax
085b31ea +0x640:  add    %eax,%eax
085b31ec +0x642:  add    %edx,%eax
085b31ee +0x644:  shl    $0x3,%eax
085b31f1 +0x647:  lea    (%ecx,%eax,1),%eax
085b31f4 +0x64a:  add    $0x78,%eax
085b31f7 +0x64d:  mov    (%eax),%eax
085b31f9 +0x64f:  mov    %eax,0x4(%esp)
085b31fd +0x653:  mov    0x8(%ebp),%eax
085b3200 +0x656:  mov    %eax,(%esp)
085b3203 +0x659:  call   085bf7da <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd38>  ; global constructors keyed to CParty::cMember::cMember()+0xd38
085b3208 +0x65e:  mov    -0x20(%ebp),%edx
085b320b +0x661:  mov    0x8(%ebp),%ecx
085b320e +0x664:  mov    %edx,%eax
085b3210 +0x666:  add    %eax,%eax
085b3212 +0x668:  add    %edx,%eax
085b3214 +0x66a:  shl    $0x3,%eax
085b3217 +0x66d:  lea    (%ecx,%eax,1),%eax
085b321a +0x670:  add    $0x78,%eax
085b321d +0x673:  mov    (%eax),%ebx
085b321f +0x675:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3224 +0x67a:  mov    %ebx,0x4(%esp)
085b3228 +0x67e:  mov    %eax,(%esp)
085b322b +0x681:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085b3230 +0x686:  movzbl -0x35(%ebp),%eax
085b3234 +0x68a:  xor    $0x1,%eax
085b3237 +0x68d:  test   %al,%al
085b3239 +0x68f:  je     085b3277 <+0x6cd>
085b323b +0x691:  movzbl -0x3d(%ebp),%eax
085b323f +0x695:  xor    $0x1,%eax
085b3242 +0x698:  test   %al,%al
085b3244 +0x69a:  je     085b3277 <+0x6cd>
085b3246 +0x69c:  cmpb   $0x1,-0x2d(%ebp)
085b324a +0x6a0:  jne    085b3277 <+0x6cd>
085b324c +0x6a2:  cmpb   $0x0,-0x15c(%ebp)
085b3253 +0x6a9:  je     085b3277 <+0x6cd>
085b3255 +0x6ab:  mov    -0x20(%ebp),%edx
085b3258 +0x6ae:  mov    0x8(%ebp),%ecx
085b325b +0x6b1:  mov    %edx,%eax
085b325d +0x6b3:  add    %eax,%eax
085b325f +0x6b5:  add    %edx,%eax
085b3261 +0x6b7:  shl    $0x3,%eax
085b3264 +0x6ba:  lea    (%ecx,%eax,1),%eax
085b3267 +0x6bd:  add    $0x78,%eax
085b326a +0x6c0:  mov    (%eax),%eax
085b326c +0x6c2:  mov    %eax,(%esp)
085b326f +0x6c5:  call   086786be <_ZN5CUser14giveup_panaltyEv>  ; CUser::giveup_panalty()
085b3274 +0x6ca:  jmp    085b3277 <+0x6cd>
085b3276 +0x6cc:  nop
085b3277 +0x6cd:  addl   $0x1,-0x20(%ebp)
085b327b +0x6d1:  cmpl   $0x3,-0x20(%ebp)
085b327f +0x6d5:  setle  %al
085b3282 +0x6d8:  test   %al,%al
085b3284 +0x6da:  jne    085b30e5 <+0x53b>
085b328a +0x6e0:  lea    -0x4c(%ebp),%eax
085b328d +0x6e3:  mov    %eax,(%esp)
085b3290 +0x6e6:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b3295 +0x6eb:  movl   $0x2,0x8(%esp)
085b329d +0x6f3:  movl   $0x0,0x4(%esp)
085b32a5 +0x6fb:  lea    -0x4c(%ebp),%eax
085b32a8 +0x6fe:  mov    %eax,(%esp)
085b32ab +0x701:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b32b0 +0x706:  movl   $0x0,0x4(%esp)
085b32b8 +0x70e:  lea    -0x4c(%ebp),%eax
085b32bb +0x711:  mov    %eax,(%esp)
085b32be +0x714:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b32c3 +0x719:  mov    0x8(%ebp),%eax
085b32c6 +0x71c:  mov    %eax,(%esp)
085b32c9 +0x71f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b32ce +0x724:  mov    %eax,0x4(%esp)
085b32d2 +0x728:  lea    -0x4c(%ebp),%eax
085b32d5 +0x72b:  mov    %eax,(%esp)
085b32d8 +0x72e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b32dd +0x733:  movl   $0x0,-0x1c(%ebp)
085b32e4 +0x73a:  jmp    085b3334 <+0x78a>
085b32e6 +0x73c:  mov    -0x1c(%ebp),%eax
085b32e9 +0x73f:  mov    %eax,0x4(%esp)
085b32ed +0x743:  mov    0x8(%ebp),%eax
085b32f0 +0x746:  mov    %eax,(%esp)
085b32f3 +0x749:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b32f8 +0x74e:  xor    $0x1,%eax
085b32fb +0x751:  test   %al,%al
085b32fd +0x753:  jne    085b332f <+0x785>
085b32ff +0x755:  lea    -0x4c(%ebp),%ecx
085b3302 +0x758:  mov    -0x1c(%ebp),%edx
085b3305 +0x75b:  mov    0x8(%ebp),%ebx
085b3308 +0x75e:  mov    %edx,%eax
085b330a +0x760:  add    %eax,%eax
085b330c +0x762:  add    %edx,%eax
085b330e +0x764:  shl    $0x3,%eax
085b3311 +0x767:  lea    (%ebx,%eax,1),%eax
085b3314 +0x76a:  add    $0x78,%eax
085b3317 +0x76d:  mov    (%eax),%eax
085b3319 +0x76f:  movl   $0x0,0x8(%esp)
085b3321 +0x777:  mov    %ecx,0x4(%esp)
085b3325 +0x77b:  mov    %eax,(%esp)
085b3328 +0x77e:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085b332d +0x783:  jmp    085b3330 <+0x786>
085b332f +0x785:  nop
085b3330 +0x786:  addl   $0x1,-0x1c(%ebp)
085b3334 +0x78a:  cmpl   $0x3,-0x1c(%ebp)
085b3338 +0x78e:  setle  %al
085b333b +0x791:  test   %al,%al
085b333d +0x793:  jne    085b32e6 <+0x73c>
085b333f +0x795:  movl   $0x1,0x4(%esp)
085b3347 +0x79d:  lea    -0x4c(%ebp),%eax
085b334a +0x7a0:  mov    %eax,(%esp)
085b334d +0x7a3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b3352 +0x7a8:  mov    0x8(%ebp),%eax
085b3355 +0x7ab:  mov    %eax,(%esp)
085b3358 +0x7ae:  call   085b6410 <_ZN6CParty16IsExistInvisibleEv>  ; CParty::IsExistInvisible()
085b335d +0x7b3:  test   %al,%al
085b335f +0x7b5:  je     085b3375 <+0x7cb>
085b3361 +0x7b7:  lea    -0x4c(%ebp),%eax
085b3364 +0x7ba:  mov    %eax,0x4(%esp)
085b3368 +0x7be:  mov    0x8(%ebp),%eax
085b336b +0x7c1:  mov    %eax,(%esp)
085b336e +0x7c4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b3373 +0x7c9:  jmp    085b3389 <+0x7df>
085b3375 +0x7cb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b337a +0x7d0:  lea    -0x4c(%ebp),%edx
085b337d +0x7d3:  mov    %edx,0x4(%esp)
085b3381 +0x7d7:  mov    %eax,(%esp)
085b3384 +0x7da:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085b3389 +0x7df:  movl   $0x1,0x4(%esp)
085b3391 +0x7e7:  mov    0x8(%ebp),%eax
085b3394 +0x7ea:  mov    %eax,(%esp)
085b3397 +0x7ed:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085b339c +0x7f2:  mov    0x8(%ebp),%eax
085b339f +0x7f5:  mov    %eax,(%esp)
085b33a2 +0x7f8:  call   0859aec2 <_ZN6CParty17battle_data_resetEv>  ; CParty::battle_data_reset()
085b33a7 +0x7fd:  jmp    085b34c5 <+0x91b>
085b33ac +0x802:  movl   $0x2,0x8(%esp)
085b33b4 +0x80a:  mov    0xc(%ebp),%eax
085b33b7 +0x80d:  mov    %eax,0x4(%esp)
085b33bb +0x811:  mov    0x8(%ebp),%eax
085b33be +0x814:  mov    %eax,(%esp)
085b33c1 +0x817:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
085b33c6 +0x81c:  mov    %eax,-0x2c(%ebp)
085b33c9 +0x81f:  cmpl   $0x1,-0x2c(%ebp)
085b33cd +0x823:  je     085b34ab <+0x901>
085b33d3 +0x829:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b33d8 +0x82e:  mov    0xc(%ebp),%edx
085b33db +0x831:  mov    %edx,0x4(%esp)
085b33df +0x835:  mov    %eax,(%esp)
085b33e2 +0x838:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085b33e7 +0x83d:  movzbl -0x35(%ebp),%eax
085b33eb +0x841:  xor    $0x1,%eax
085b33ee +0x844:  test   %al,%al
085b33f0 +0x846:  je     085b3417 <+0x86d>
085b33f2 +0x848:  movzbl -0x3d(%ebp),%eax
085b33f6 +0x84c:  xor    $0x1,%eax
085b33f9 +0x84f:  test   %al,%al
085b33fb +0x851:  je     085b3417 <+0x86d>
085b33fd +0x853:  cmpb   $0x1,-0x2d(%ebp)
085b3401 +0x857:  jne    085b3417 <+0x86d>
085b3403 +0x859:  cmpb   $0x0,-0x15c(%ebp)
085b340a +0x860:  je     085b3417 <+0x86d>
085b340c +0x862:  mov    0xc(%ebp),%eax
085b340f +0x865:  mov    %eax,(%esp)
085b3412 +0x868:  call   086786be <_ZN5CUser14giveup_panaltyEv>  ; CUser::giveup_panalty()
085b3417 +0x86d:  lea    -0x4c(%ebp),%eax
085b341a +0x870:  mov    %eax,(%esp)
085b341d +0x873:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b3422 +0x878:  movl   $0x2,0x8(%esp)
085b342a +0x880:  movl   $0x0,0x4(%esp)
085b3432 +0x888:  lea    -0x4c(%ebp),%eax
085b3435 +0x88b:  mov    %eax,(%esp)
085b3438 +0x88e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b343d +0x893:  movl   $0x0,0x4(%esp)
085b3445 +0x89b:  lea    -0x4c(%ebp),%eax
085b3448 +0x89e:  mov    %eax,(%esp)
085b344b +0x8a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b3450 +0x8a6:  movl   $0x1,0x4(%esp)
085b3458 +0x8ae:  lea    -0x4c(%ebp),%eax
085b345b +0x8b1:  mov    %eax,(%esp)
085b345e +0x8b4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b3463 +0x8b9:  lea    -0x4c(%ebp),%eax
085b3466 +0x8bc:  movl   $0x0,0x8(%esp)
085b346e +0x8c4:  mov    %eax,0x4(%esp)
085b3472 +0x8c8:  mov    0xc(%ebp),%eax
085b3475 +0x8cb:  mov    %eax,(%esp)
085b3478 +0x8ce:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085b347d +0x8d3:  movl   $0x1,0x4(%esp)
085b3485 +0x8db:  lea    -0x4c(%ebp),%eax
085b3488 +0x8de:  mov    %eax,(%esp)
085b348b +0x8e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b3490 +0x8e6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3495 +0x8eb:  mov    0xc(%ebp),%edx
085b3498 +0x8ee:  mov    %edx,0x8(%esp)
085b349c +0x8f2:  lea    -0x4c(%ebp),%edx
085b349f +0x8f5:  mov    %edx,0x4(%esp)
085b34a3 +0x8f9:  mov    %eax,(%esp)
085b34a6 +0x8fc:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
085b34ab +0x901:  mov    0x8(%ebp),%eax
085b34ae +0x904:  mov    %eax,(%esp)
085b34b1 +0x907:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
085b34b6 +0x90c:  mov    %eax,0x4(%esp)
085b34ba +0x910:  mov    0x8(%ebp),%eax
085b34bd +0x913:  mov    %eax,(%esp)
085b34c0 +0x916:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
085b34c5 +0x91b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085b34ca +0x920:  mov    %eax,(%esp)
085b34cd +0x923:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
085b34d2 +0x928:  mov    %eax,-0x28(%ebp)
085b34d5 +0x92b:  cmpl   $0x0,-0x28(%ebp)
085b34d9 +0x92f:  je     085b350a <+0x960>
085b34db +0x931:  mov    0x8(%ebp),%eax
085b34de +0x934:  mov    %eax,0x4(%esp)
085b34e2 +0x938:  mov    -0x28(%ebp),%eax
085b34e5 +0x93b:  mov    %eax,(%esp)
085b34e8 +0x93e:  call   0860b2c2 <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty>  ; CSpecialItemRoutingManager::ProcessGiveUp(CParty*)
085b34ed +0x943:  jmp    085b350a <+0x960>
085b34ef +0x945:  mov    %edx,%ebx
085b34f1 +0x947:  mov    %eax,%esi
085b34f3 +0x949:  lea    -0x4c(%ebp),%eax
085b34f6 +0x94c:  mov    %eax,(%esp)
085b34f9 +0x94f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b34fe +0x954:  mov    %esi,%eax
085b3500 +0x956:  mov    %ebx,%edx
085b3502 +0x958:  mov    %eax,(%esp)
085b3505 +0x95b:  call   08ae3750 <_Unwind_Resume>
085b350a +0x960:  lea    -0x4c(%ebp),%eax
085b350d +0x963:  mov    %eax,(%esp)
085b3510 +0x966:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b3515 +0x96b:  add    $0x17c,%esp
085b351b +0x971:  pop    %ebx
085b351c +0x972:  pop    %esi
085b351d +0x973:  pop    %edi
085b351e +0x974:  pop    %ebp
085b351f +0x975:  ret
```

## 反编译 C

```c
// CParty::giveup_game @ 0x85b2baa

/* CParty::giveup_game(CUser*, bool, bool, bool) */

void __thiscall
CParty::giveup_game(CParty *this,CUser *param_1,bool param_2,bool param_3,bool param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  CUser *pCVar5;
  GameWorld *pGVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  CGameManager *this_00;
  byte bVar11;
  char local_160;
  char local_150 [256];
  PacketGuard local_50 [15];
  char local_41;
  CDungeon *local_40;
  char local_39;
  undefined4 local_38;
  char local_31;
  int local_30;
  CSpecialItemRoutingManager *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  local_160 = param_2;
  local_41 = '\0';
  local_40 = *(CDungeon **)(this + 0xcac);
  if (local_40 != (CDungeon *)0x0) {
    local_41 = '\0' < (char)local_40[0x89f];
    cVar1 = CDungeon::isTowerOfDespairDungeon(local_40);
    if (cVar1 != '\0') {
      local_41 = '\x01';
    }
  }
  if (local_40 != (CDungeon *)0x0) {
    cVar1 = CDungeon::get_dimension_possible(local_40);
    if (((cVar1 < '\x01') && (local_40[0x89c] == (CDungeon)0x0)) &&
       (cVar1 = CDungeon::isTournamentDungeon(local_40), cVar1 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_160 = '\0';
    }
  }
  if ((local_40 != (CDungeon *)0x0) && (local_40[0x85c] != (CDungeon)0x0)) {
    local_160 = '\0';
  }
  if ((local_40 != (CDungeon *)0x0) && (local_40[0x87a] != (CDungeon)0x0)) {
    local_160 = '\0';
  }
  local_39 = *(int *)(this + 0xcd8) == 1;
  CUserCharacInfo::reset_level_before_dungeon((CUserCharacInfo *)param_1);
  CDungeonClearTracer::Trace
            ((CDungeonClearTracer *)(this + 0xc7c),
             "void CParty::giveup_game(CUser*, bool, bool, bool)");
  Reset_party_overlapped_drop_ratio(this);
  local_38 = get_member_count(this);
  if (((param_1 == (CUser *)0x0) ||
      (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) ||
     (local_39 == '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    Statistics::DungeonFail((int)*(short *)(iVar3 + 0x27));
  }
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    cVar1 = _checkValidUser(this,local_28);
    if (cVar1 == '\x01') {
      pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      HistoryLog::WriteGiveUp
                (*(_IO_FILE **)(*(int *)(this + local_28 * 0x18 + 0x78) + 0x796f8),pcVar7);
    }
  }
  if ((*(short *)(this + 0xc4c) == 0) &&
     ((local_40 == (CDungeon *)0x0 || (iVar3 = CDungeon::get_index(local_40), iVar3 != 10000)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_160 = '\0';
  }
  if (param_3) {
    OnSuccessedDungeonClear(this,param_1);
  }
  else {
    iVar3 = get_member_count(this);
    if (iVar3 == 1) {
      CheckHackAverageHitCount(this);
      Secu_HackLogCheckByParty::dungeonFail((Secu_HackLogCheckByParty *)(this + 0x1abc));
    }
    OnFailedDungeonClear(this,param_1);
  }
  if ((param_1 == (CUser *)0x0) ||
     (cVar1 = CBattle_Field::check_start_point((CBattle_Field *)(this + 0xb24)), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x325,1,0,0);
  }
  SaveCoin(this,3);
  local_31 = GetEPLPState(this);
  if (local_31 == '\x01') {
    pCVar5 = (CUser *)getManager(this);
    iVar3 = CUser::getMoveSpace(pCVar5);
    if (iVar3 != 1) {
      bVar2 = (bool)CDungeon::get_index(local_40);
      iVar3 = GetInstanceDungeonEntranceLog();
      CDungeonEntranceLog::DecrementDungeonEntrance(iVar3,bVar2);
    }
  }
  PacketGuard::PacketGuard(local_50);
  if (this[0x13c] == (CParty)0x0) {
    if (!param_3) {
      set_charac_live(this,param_1,0);
    }
    pcVar7 = local_150;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
    }
    _getMemberNames(this,local_150);
    cVar1 = GetSelectedEPLPCmd(this);
    if (((cVar1 != '\x03') && (cVar1 = check_allmember_die(this), cVar1 != '\0')) ||
       ((param_3 || (param_4)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        cVar1 = _checkValidUser(this,local_24);
        if (cVar1 == '\x01') {
          if (local_40 != (CDungeon *)0x0) {
            iVar3 = *(int *)(this + 0xcd8);
            pcVar7 = (char *)_getMemberNames(this,local_150);
            iVar8 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
            pcVar9 = (char *)CDungeon::GetDungeonName(local_40);
            cUserHistoryLog::LeaveDungeon
                      ((cUserHistoryLog *)(*(int *)(this + local_24 * 0x18 + 0x78) + 0x79700),pcVar9
                       ,iVar8,pcVar7,iVar3);
          }
          if ((*(short *)(this + 0xc4c) != 0) &&
             (*(CUser **)(this + local_24 * 0x18 + 0x78) != param_1)) {
            if (param_3) {
              OnSuccessedDungeonClear(this,*(CUser **)(this + local_24 * 0x18 + 0x78));
            }
            else {
              OnFailedDungeonClear(this,*(CUser **)(this + local_24 * 0x18 + 0x78));
            }
          }
          pCVar5 = *(CUser **)(this + local_24 * 0x18 + 0x78);
          pGVar6 = (GameWorld *)G_GameWorld();
          GameWorld::out_from_dungeon(pGVar6,pCVar5);
          if ((((local_39 != '\x01') && (local_41 != '\x01')) && (local_31 == '\x01')) &&
             (local_160 != '\0')) {
            CUser::giveup_panalty(*(CUser **)(this + local_24 * 0x18 + 0x78));
          }
        }
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      iVar3 = get_member_count(this);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar3);
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        cVar1 = _checkValidUser(this,local_20);
        if (cVar1 == '\x01') {
          CUser::make_basic_info(*(CUser **)(this + local_20 * 0x18 + 0x78),(char *)local_50,'\0');
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      cVar1 = IsExistInvisible(this);
      if (cVar1 == '\0') {
        pGVar6 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar6,local_50);
      }
      else {
        send_to_party(this,local_50);
      }
      set_state(this,'\x01');
      battle_data_reset(this);
    }
    else {
      local_30 = leave_user(this,param_1,2);
      if (local_30 != 1) {
        pGVar6 = (GameWorld *)G_GameWorld();
        GameWorld::out_from_dungeon(pGVar6,param_1);
        if (((local_39 != '\x01') && (local_41 != '\x01')) &&
           ((local_31 == '\x01' && (local_160 != '\0')))) {
          CUser::giveup_panalty(param_1);
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
        CUser::make_basic_info(param_1,(char *)local_50,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        pGVar6 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar6,local_50,param_1);
      }
      uVar10 = checkInoutConditionDungeon(this);
      sendInoutConditionDungeon(this,uVar10);
    }
    this_00 = (CGameManager *)G_CGameManager();
    local_2c = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this_00);
    if (local_2c != (CSpecialItemRoutingManager *)0x0) {
      CSpecialItemRoutingManager::ProcessGiveUp(local_2c,this);
    }
  }
  else {
                    /* try { // try from 085b2f2c to 085b34ec has its CatchHandler @ 085b34ef */
    leave_user(this,param_1,2);
    pGVar6 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_dungeon(pGVar6,param_1);
    if ((((local_39 != '\x01') && (local_41 != '\x01')) && (local_31 == '\x01')) &&
       (local_160 != '\0')) {
      CUser::giveup_panalty(param_1);
    }
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
    CUser::make_basic_info(param_1,(char *)local_50,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    pCVar5 = (CUser *)getManager(this);
    iVar3 = CUser::getMoveSpace(pCVar5);
    if (iVar3 == 1) {
      send_to_party(this,local_50);
    }
    else {
      pGVar6 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar6,local_50,param_1);
    }
  }
  PacketGuard::~PacketGuard(local_50);
  return;
}
```
