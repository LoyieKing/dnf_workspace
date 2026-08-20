# kill_monster

`_ZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterData`

`CBattle_Field::kill_monster(PacketGuard&, map_monster&, unsigned int&, STKillMonsterData const&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830bc78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830bc78  _ZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterData
#           CBattle_Field::kill_monster(PacketGuard&, map_monster&, unsigned int&, STKillMonsterData const&)
# range [0x0830bc78, 0x0830d58b]
0830bc78 +0x0000:  push   %ebp
0830bc79 +0x0001:  mov    %esp,%ebp
0830bc7b +0x0003:  push   %edi
0830bc7c +0x0004:  push   %esi
0830bc7d +0x0005:  push   %ebx
0830bc7e +0x0006:  sub    $0x18c,%esp
0830bc84 +0x000c:  mov    0x18(%ebp),%eax
0830bc87 +0x000f:  movzwl (%eax),%eax
0830bc8a +0x0012:  movzwl %ax,%eax
0830bc8d +0x0015:  mov    %eax,-0xe0(%ebp)
0830bc93 +0x001b:  mov    0x18(%ebp),%eax
0830bc96 +0x001e:  movzwl 0x2(%eax),%eax
0830bc9a +0x0022:  mov    %ax,-0xa2(%ebp)
0830bca1 +0x0029:  mov    0x18(%ebp),%eax
0830bca4 +0x002c:  movzbl 0x4(%eax),%eax
0830bca8 +0x0030:  movsbl %al,%eax
0830bcab +0x0033:  mov    %eax,-0xa0(%ebp)
0830bcb1 +0x0039:  mov    0x18(%ebp),%eax
0830bcb4 +0x003c:  mov    0x8(%eax),%eax
0830bcb7 +0x003f:  mov    %eax,-0x9c(%ebp)
0830bcbd +0x0045:  mov    0x18(%ebp),%eax
0830bcc0 +0x0048:  mov    0xc(%eax),%eax
0830bcc3 +0x004b:  mov    %eax,-0xe4(%ebp)
0830bcc9 +0x0051:  mov    0x18(%ebp),%eax
0830bccc +0x0054:  movzbl 0x10(%eax),%eax
0830bcd0 +0x0058:  mov    %al,-0x96(%ebp)
0830bcd6 +0x005e:  mov    0x18(%ebp),%eax
0830bcd9 +0x0061:  movzbl 0x11(%eax),%eax
0830bcdd +0x0065:  mov    %al,-0x95(%ebp)
0830bce3 +0x006b:  mov    0x8(%ebp),%eax
0830bce6 +0x006e:  mov    %eax,(%esp)
0830bce9 +0x0071:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830bcee +0x0076:  mov    %eax,-0x94(%ebp)
0830bcf4 +0x007c:  mov    -0x94(%ebp),%eax
0830bcfa +0x0082:  lea    0xc(%eax),%ecx
0830bcfd +0x0085:  lea    -0xe8(%ebp),%eax
0830bd03 +0x008b:  lea    -0xe0(%ebp),%edx
0830bd09 +0x0091:  mov    %edx,0x8(%esp)
0830bd0d +0x0095:  mov    %ecx,0x4(%esp)
0830bd11 +0x0099:  mov    %eax,(%esp)
0830bd14 +0x009c:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
0830bd19 +0x00a1:  sub    $0x4,%esp
0830bd1c +0x00a4:  mov    -0x94(%ebp),%eax
0830bd22 +0x00aa:  lea    0xc(%eax),%edx
0830bd25 +0x00ad:  lea    -0xdc(%ebp),%eax
0830bd2b +0x00b3:  mov    %edx,0x4(%esp)
0830bd2f +0x00b7:  mov    %eax,(%esp)
0830bd32 +0x00ba:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0830bd37 +0x00bf:  sub    $0x4,%esp
0830bd3a +0x00c2:  lea    -0xdc(%ebp),%eax
0830bd40 +0x00c8:  mov    %eax,0x4(%esp)
0830bd44 +0x00cc:  lea    -0xe8(%ebp),%eax
0830bd4a +0x00d2:  mov    %eax,(%esp)
0830bd4d +0x00d5:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
0830bd52 +0x00da:  test   %al,%al
0830bd54 +0x00dc:  je     0830be57 <+0x1df>
0830bd5a +0x00e2:  mov    -0x94(%ebp),%eax
0830bd60 +0x00e8:  lea    0xa8(%eax),%ecx
0830bd66 +0x00ee:  lea    -0x10c(%ebp),%eax
0830bd6c +0x00f4:  lea    -0xe0(%ebp),%edx
0830bd72 +0x00fa:  mov    %edx,0x8(%esp)
0830bd76 +0x00fe:  mov    %ecx,0x4(%esp)
0830bd7a +0x0102:  mov    %eax,(%esp)
0830bd7d +0x0105:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0830bd82 +0x010a:  sub    $0x4,%esp
0830bd85 +0x010d:  mov    -0x94(%ebp),%eax
0830bd8b +0x0113:  lea    0xa8(%eax),%edx
0830bd91 +0x0119:  lea    -0xd8(%ebp),%eax
0830bd97 +0x011f:  mov    %edx,0x4(%esp)
0830bd9b +0x0123:  mov    %eax,(%esp)
0830bd9e +0x0126:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0830bda3 +0x012b:  sub    $0x4,%esp
0830bda6 +0x012e:  lea    -0xd8(%ebp),%eax
0830bdac +0x0134:  mov    %eax,0x4(%esp)
0830bdb0 +0x0138:  lea    -0x10c(%ebp),%eax
0830bdb6 +0x013e:  mov    %eax,(%esp)
0830bdb9 +0x0141:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0830bdbe +0x0146:  test   %al,%al
0830bdc0 +0x0148:  je     0830be4d <+0x1d5>
0830bdc6 +0x014e:  mov    0x8(%ebp),%eax
0830bdc9 +0x0151:  mov    (%eax),%eax
0830bdcb +0x0153:  test   %eax,%eax
0830bdcd +0x0155:  je     0830bde8 <+0x170>
0830bdcf +0x0157:  mov    0x8(%ebp),%eax
0830bdd2 +0x015a:  mov    (%eax),%eax
0830bdd4 +0x015c:  mov    %eax,(%esp)
0830bdd7 +0x015f:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830bddc +0x0164:  mov    %eax,(%esp)
0830bddf +0x0167:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0830bde4 +0x016c:  mov    %eax,%ebx
0830bde6 +0x016e:  jmp    0830bded <+0x175>
0830bde8 +0x0170:  mov    $0x0,%ebx
0830bded +0x0175:  mov    0x8(%ebp),%eax
0830bdf0 +0x0178:  mov    %eax,(%esp)
0830bdf3 +0x017b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830bdf8 +0x0180:  mov    0x4(%eax),%esi
0830bdfb +0x0183:  mov    0x8(%ebp),%eax
0830bdfe +0x0186:  mov    0x64(%eax),%ecx
0830be01 +0x0189:  mov    0x8(%ebp),%eax
0830be04 +0x018c:  mov    0x60(%eax),%edx
0830be07 +0x018f:  mov    -0xe0(%ebp),%eax
0830be0d +0x0195:  mov    %ebx,0x24(%esp)
0830be11 +0x0199:  mov    %esi,0x20(%esp)
0830be15 +0x019d:  mov    %ecx,0x1c(%esp)
0830be19 +0x01a1:  mov    %edx,0x18(%esp)
0830be1d +0x01a5:  mov    %eax,0x14(%esp)
0830be21 +0x01a9:  movl   $"MOVE_MAP_LOG : kill_monster monster_map_trace_.find() fail ERROR monster_uid(%d), grid(%d,%d) map_index(%d) charac_no (%u)",0x10(%esp)
0830be29 +0x01b1:  movl   $0x1ba7,0xc(%esp)
0830be31 +0x01b9:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830be39 +0x01c1:  movl   $"battle_field.cpp",0x4(%esp)
0830be41 +0x01c9:  movl   $0x1,(%esp)
0830be48 +0x01d0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830be4d +0x01d5:  mov    $0x0,%ebx
0830be52 +0x01da:  jmp    0830d57e <+0x1906>
0830be57 +0x01df:  cmpb   $0x0,-0x95(%ebp)
0830be5e +0x01e6:  je     0830be75 <+0x1fd>
0830be60 +0x01e8:  lea    -0xe8(%ebp),%eax
0830be66 +0x01ee:  mov    %eax,(%esp)
0830be69 +0x01f1:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830be6e +0x01f6:  movb   $0x1,0x34f(%eax)
0830be75 +0x01fd:  lea    -0xe8(%ebp),%eax
0830be7b +0x0203:  mov    %eax,(%esp)
0830be7e +0x0206:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830be83 +0x020b:  add    $0x4,%eax
0830be86 +0x020e:  mov    %eax,-0x90(%ebp)
0830be8c +0x0214:  mov    0x8(%ebp),%eax
0830be8f +0x0217:  mov    0x188(%eax),%eax
0830be95 +0x021d:  test   %eax,%eax
0830be97 +0x021f:  je     0830beb5 <+0x23d>
0830be99 +0x0221:  mov    0x8(%ebp),%eax
0830be9c +0x0224:  mov    0x188(%eax),%eax
0830bea2 +0x022a:  mov    %eax,(%esp)
0830bea5 +0x022d:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
0830beaa +0x0232:  test   %al,%al
0830beac +0x0234:  je     0830beb5 <+0x23d>
0830beae +0x0236:  mov    $0x1,%eax
0830beb3 +0x023b:  jmp    0830beba <+0x242>
0830beb5 +0x023d:  mov    $0x0,%eax
0830beba +0x0242:  test   %al,%al
0830bebc +0x0244:  je     0830c0e9 <+0x471>
0830bec2 +0x024a:  mov    0x8(%ebp),%eax
0830bec5 +0x024d:  mov    %eax,(%esp)
0830bec8 +0x0250:  call   082fe6ae <_ZN13CBattle_Field21GetTournamentCurRoundEv>  ; CBattle_Field::GetTournamentCurRound()
0830becd +0x0255:  mov    %eax,-0x110(%ebp)
0830bed3 +0x025b:  mov    0x8(%ebp),%eax
0830bed6 +0x025e:  mov    %eax,(%esp)
0830bed9 +0x0261:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830bede +0x0266:  add    $0xd0,%eax
0830bee3 +0x026b:  mov    %eax,-0x84(%ebp)
0830bee9 +0x0271:  lea    -0x114(%ebp),%eax
0830beef +0x0277:  lea    -0x110(%ebp),%edx
0830bef5 +0x027d:  mov    %edx,0x8(%esp)
0830bef9 +0x0281:  mov    -0x84(%ebp),%edx
0830beff +0x0287:  mov    %edx,0x4(%esp)
0830bf03 +0x028b:  mov    %eax,(%esp)
0830bf06 +0x028e:  call   08311eca <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3aaf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3aaf
0830bf0b +0x0293:  sub    $0x4,%esp
0830bf0e +0x0296:  lea    -0x118(%ebp),%eax
0830bf14 +0x029c:  lea    -0x110(%ebp),%edx
0830bf1a +0x02a2:  mov    %edx,0x8(%esp)
0830bf1e +0x02a6:  mov    -0x84(%ebp),%edx
0830bf24 +0x02ac:  mov    %edx,0x4(%esp)
0830bf28 +0x02b0:  mov    %eax,(%esp)
0830bf2b +0x02b3:  call   08311ef6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3adb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3adb
0830bf30 +0x02b8:  sub    $0x4,%esp
0830bf33 +0x02bb:  mov    -0x114(%ebp),%eax
0830bf39 +0x02c1:  mov    %eax,-0x120(%ebp)
0830bf3f +0x02c7:  jmp    0830bfa1 <+0x329>
0830bf41 +0x02c9:  lea    -0x120(%ebp),%eax
0830bf47 +0x02cf:  mov    %eax,(%esp)
0830bf4a +0x02d2:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830bf4f +0x02d7:  mov    0x8(%eax),%edx
0830bf52 +0x02da:  mov    -0x90(%ebp),%eax
0830bf58 +0x02e0:  mov    0x4(%eax),%eax
0830bf5b +0x02e3:  cmp    %eax,%edx
0830bf5d +0x02e5:  sete   %al
0830bf60 +0x02e8:  test   %al,%al
0830bf62 +0x02ea:  je     0830bf7e <+0x306>
0830bf64 +0x02ec:  mov    -0x120(%ebp),%eax
0830bf6a +0x02f2:  mov    %eax,0x4(%esp)
0830bf6e +0x02f6:  mov    -0x84(%ebp),%eax
0830bf74 +0x02fc:  mov    %eax,(%esp)
0830bf77 +0x02ff:  call   08311f22 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3b07>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3b07
0830bf7c +0x0304:  jmp    0830bfbd <+0x345>
0830bf7e +0x0306:  lea    -0xd4(%ebp),%eax
0830bf84 +0x030c:  movl   $0x0,0x8(%esp)
0830bf8c +0x0314:  lea    -0x120(%ebp),%edx
0830bf92 +0x031a:  mov    %edx,0x4(%esp)
0830bf96 +0x031e:  mov    %eax,(%esp)
0830bf99 +0x0321:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
0830bf9e +0x0326:  sub    $0x4,%esp
0830bfa1 +0x0329:  lea    -0x118(%ebp),%eax
0830bfa7 +0x032f:  mov    %eax,0x4(%esp)
0830bfab +0x0333:  lea    -0x120(%ebp),%eax
0830bfb1 +0x0339:  mov    %eax,(%esp)
0830bfb4 +0x033c:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
0830bfb9 +0x0341:  test   %al,%al
0830bfbb +0x0343:  jne    0830bf41 <+0x2c9>
0830bfbd +0x0345:  lea    -0x11c(%ebp),%eax
0830bfc3 +0x034b:  lea    -0x110(%ebp),%edx
0830bfc9 +0x0351:  mov    %edx,0x8(%esp)
0830bfcd +0x0355:  mov    -0x84(%ebp),%edx
0830bfd3 +0x035b:  mov    %edx,0x4(%esp)
0830bfd7 +0x035f:  mov    %eax,(%esp)
0830bfda +0x0362:  call   08311f3c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3b21>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3b21
0830bfdf +0x0367:  sub    $0x4,%esp
0830bfe2 +0x036a:  lea    -0xd0(%ebp),%eax
0830bfe8 +0x0370:  mov    -0x84(%ebp),%edx
0830bfee +0x0376:  mov    %edx,0x4(%esp)
0830bff2 +0x037a:  mov    %eax,(%esp)
0830bff5 +0x037d:  call   08311f68 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3b4d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3b4d
0830bffa +0x0382:  sub    $0x4,%esp
0830bffd +0x0385:  lea    -0xd0(%ebp),%eax
0830c003 +0x038b:  mov    %eax,0x4(%esp)
0830c007 +0x038f:  lea    -0x11c(%ebp),%eax
0830c00d +0x0395:  mov    %eax,(%esp)
0830c010 +0x0398:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
0830c015 +0x039d:  test   %al,%al
0830c017 +0x039f:  je     0830c0e9 <+0x471>
0830c01d +0x03a5:  mov    0x8(%ebp),%eax
0830c020 +0x03a8:  mov    0x188(%eax),%eax
0830c026 +0x03ae:  mov    %eax,(%esp)
0830c029 +0x03b1:  call   08365238 <_ZNK8CDungeon25getTournamentRoundFatigueEv>  ; CDungeon::getTournamentRoundFatigue() const
0830c02e +0x03b6:  mov    %eax,-0x80(%ebp)
0830c031 +0x03b9:  mov    -0x110(%ebp),%eax
0830c037 +0x03bf:  cmp    $0x4,%eax
0830c03a +0x03c2:  je     0830c0e9 <+0x471>
0830c040 +0x03c8:  movl   $0x0,-0x7c(%ebp)
0830c047 +0x03cf:  jmp    0830c0c2 <+0x44a>
0830c049 +0x03d1:  mov    0x8(%ebp),%eax
0830c04c +0x03d4:  mov    (%eax),%eax
0830c04e +0x03d6:  mov    -0x7c(%ebp),%edx
0830c051 +0x03d9:  mov    %edx,0x4(%esp)
0830c055 +0x03dd:  mov    %eax,(%esp)
0830c058 +0x03e0:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830c05d +0x03e5:  xor    $0x1,%eax
0830c060 +0x03e8:  test   %al,%al
0830c062 +0x03ea:  jne    0830c0bd <+0x445>
0830c064 +0x03ec:  mov    -0x80(%ebp),%ebx
0830c067 +0x03ef:  mov    0x8(%ebp),%eax
0830c06a +0x03f2:  mov    (%eax),%eax
0830c06c +0x03f4:  mov    %eax,(%esp)
0830c06f +0x03f7:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
0830c074 +0x03fc:  mov    %eax,%ecx
0830c076 +0x03fe:  mov    -0x7c(%ebp),%edx
0830c079 +0x0401:  mov    %edx,%eax
0830c07b +0x0403:  add    %eax,%eax
0830c07d +0x0405:  add    %edx,%eax
0830c07f +0x0407:  shl    $0x3,%eax
0830c082 +0x040a:  lea    (%ecx,%eax,1),%eax
0830c085 +0x040d:  mov    (%eax),%eax
0830c087 +0x040f:  mov    %ebx,0x4(%esp)
0830c08b +0x0413:  mov    %eax,(%esp)
0830c08e +0x0416:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
0830c093 +0x041b:  mov    0x8(%ebp),%eax
0830c096 +0x041e:  mov    (%eax),%eax
0830c098 +0x0420:  mov    %eax,(%esp)
0830c09b +0x0423:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
0830c0a0 +0x0428:  mov    %eax,%ecx
0830c0a2 +0x042a:  mov    -0x7c(%ebp),%edx
0830c0a5 +0x042d:  mov    %edx,%eax
0830c0a7 +0x042f:  add    %eax,%eax
0830c0a9 +0x0431:  add    %edx,%eax
0830c0ab +0x0433:  shl    $0x3,%eax
0830c0ae +0x0436:  lea    (%ecx,%eax,1),%eax
0830c0b1 +0x0439:  mov    (%eax),%eax
0830c0b3 +0x043b:  mov    %eax,(%esp)
0830c0b6 +0x043e:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0830c0bb +0x0443:  jmp    0830c0be <+0x446>
0830c0bd +0x0445:  nop
0830c0be +0x0446:  addl   $0x1,-0x7c(%ebp)
0830c0c2 +0x044a:  cmpl   $0x3,-0x7c(%ebp)
0830c0c6 +0x044e:  setle  %al
0830c0c9 +0x0451:  test   %al,%al
0830c0cb +0x0453:  jne    0830c049 <+0x3d1>
0830c0d1 +0x0459:  mov    -0x110(%ebp),%eax
0830c0d7 +0x045f:  add    $0x1,%eax
0830c0da +0x0462:  mov    %eax,0x4(%esp)
0830c0de +0x0466:  mov    0x8(%ebp),%eax
0830c0e1 +0x0469:  mov    %eax,(%esp)
0830c0e4 +0x046c:  call   082fe69c <_ZN13CBattle_Field21SetTournamentCurRoundEi>  ; CBattle_Field::SetTournamentCurRound(int)
0830c0e9 +0x0471:  movb   $0x0,-0xe9(%ebp)
0830c0f0 +0x0478:  mov    -0x90(%ebp),%eax
0830c0f6 +0x047e:  movzwl 0x334(%eax),%eax
0830c0fd +0x0485:  test   %ax,%ax
0830c100 +0x0488:  je     0830c136 <+0x4be>
0830c102 +0x048a:  lea    -0xe8(%ebp),%eax
0830c108 +0x0490:  mov    %eax,(%esp)
0830c10b +0x0493:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830c110 +0x0498:  lea    0x4(%eax),%edx
0830c113 +0x049b:  lea    -0xe9(%ebp),%eax
0830c119 +0x04a1:  mov    %eax,0xc(%esp)
0830c11d +0x04a5:  mov    %edx,0x8(%esp)
0830c121 +0x04a9:  mov    -0x94(%ebp),%eax
0830c127 +0x04af:  mov    %eax,0x4(%esp)
0830c12b +0x04b3:  mov    0x8(%ebp),%eax
0830c12e +0x04b6:  mov    %eax,(%esp)
0830c131 +0x04b9:  call   0830d704 <_ZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRb>  ; CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&)
0830c136 +0x04be:  mov    -0x90(%ebp),%eax
0830c13c +0x04c4:  movzbl 0x8(%eax),%eax
0830c140 +0x04c8:  cmp    $0x3,%al
0830c142 +0x04ca:  jg     0830c236 <+0x5be>
0830c148 +0x04d0:  mov    -0x90(%ebp),%eax
0830c14e +0x04d6:  mov    0xc(%eax),%ebx
0830c151 +0x04d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830c156 +0x04de:  mov    %ebx,0x4(%esp)
0830c15a +0x04e2:  mov    %eax,(%esp)
0830c15d +0x04e5:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0830c162 +0x04ea:  mov    %eax,-0x78(%ebp)
0830c165 +0x04ed:  cmpl   $0x0,-0x78(%ebp)
0830c169 +0x04f1:  jne    0830c344 <+0x6cc>
0830c16f +0x04f7:  mov    -0x90(%ebp),%eax
0830c175 +0x04fd:  movzwl 0x334(%eax),%eax
0830c17c +0x0504:  test   %ax,%ax
0830c17f +0x0507:  je     0830c1f3 <+0x57b>
0830c181 +0x0509:  mov    -0x90(%ebp),%eax
0830c187 +0x050f:  mov    0xc(%eax),%eax
0830c18a +0x0512:  mov    %eax,%ebx
0830c18c +0x0514:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830c191 +0x0519:  mov    0x869c(%eax),%eax
0830c197 +0x051f:  mov    %ebx,0x4(%esp)
0830c19b +0x0523:  mov    %eax,(%esp)
0830c19e +0x0526:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0830c1a3 +0x052b:  mov    %eax,-0x74(%ebp)
0830c1a6 +0x052e:  cmpl   $0x0,-0x74(%ebp)
0830c1aa +0x0532:  jne    0830c344 <+0x6cc>
0830c1b0 +0x0538:  mov    -0x90(%ebp),%eax
0830c1b6 +0x053e:  mov    0xc(%eax),%eax
0830c1b9 +0x0541:  mov    %eax,0x14(%esp)
0830c1bd +0x0545:  movl   $"G_CDataManager()->find_monster(%u) fail",0x10(%esp)
0830c1c5 +0x054d:  movl   $0x1bed,0xc(%esp)
0830c1cd +0x0555:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830c1d5 +0x055d:  movl   $"battle_field.cpp",0x4(%esp)
0830c1dd +0x0565:  movl   $0x1,(%esp)
0830c1e4 +0x056c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830c1e9 +0x0571:  mov    $0x0,%ebx
0830c1ee +0x0576:  jmp    0830d57e <+0x1906>
0830c1f3 +0x057b:  mov    -0x90(%ebp),%eax
0830c1f9 +0x0581:  mov    0xc(%eax),%eax
0830c1fc +0x0584:  mov    %eax,0x14(%esp)
0830c200 +0x0588:  movl   $"G_CDataManager()->find_monster(%u) fail",0x10(%esp)
0830c208 +0x0590:  movl   $0x1bf3,0xc(%esp)
0830c210 +0x0598:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830c218 +0x05a0:  movl   $"battle_field.cpp",0x4(%esp)
0830c220 +0x05a8:  movl   $0x1,(%esp)
0830c227 +0x05af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830c22c +0x05b4:  mov    $0x0,%ebx
0830c231 +0x05b9:  jmp    0830d57e <+0x1906>
0830c236 +0x05be:  mov    -0x90(%ebp),%eax
0830c23c +0x05c4:  movzbl 0x8(%eax),%eax
0830c240 +0x05c8:  cmp    $0x8,%al
0830c242 +0x05ca:  jg     0830c2b6 <+0x63e>
0830c244 +0x05cc:  mov    -0x90(%ebp),%eax
0830c24a +0x05d2:  mov    0xc(%eax),%eax
0830c24d +0x05d5:  mov    %eax,%ebx
0830c24f +0x05d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830c254 +0x05dc:  mov    0x869c(%eax),%eax
0830c25a +0x05e2:  mov    %ebx,0x4(%esp)
0830c25e +0x05e6:  mov    %eax,(%esp)
0830c261 +0x05e9:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0830c266 +0x05ee:  mov    %eax,-0x70(%ebp)
0830c269 +0x05f1:  cmpl   $0x0,-0x70(%ebp)
0830c26d +0x05f5:  jne    0830c344 <+0x6cc>
0830c273 +0x05fb:  mov    -0x90(%ebp),%eax
0830c279 +0x0601:  mov    0xc(%eax),%eax
0830c27c +0x0604:  mov    %eax,0x14(%esp)
0830c280 +0x0608:  movl   $"G_CDataManager()->aiCharacterList_->get(%u) fail",0x10(%esp)
0830c288 +0x0610:  movl   $0x1bfd,0xc(%esp)
0830c290 +0x0618:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830c298 +0x0620:  movl   $"battle_field.cpp",0x4(%esp)
0830c2a0 +0x0628:  movl   $0x1,(%esp)
0830c2a7 +0x062f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830c2ac +0x0634:  mov    $0x0,%ebx
0830c2b1 +0x0639:  jmp    0830d57e <+0x1906>
0830c2b6 +0x063e:  mov    0x8(%ebp),%eax
0830c2b9 +0x0641:  mov    (%eax),%eax
0830c2bb +0x0643:  test   %eax,%eax
0830c2bd +0x0645:  je     0830c2d6 <+0x65e>
0830c2bf +0x0647:  mov    0x8(%ebp),%eax
0830c2c2 +0x064a:  mov    (%eax),%eax
0830c2c4 +0x064c:  mov    %eax,(%esp)
0830c2c7 +0x064f:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830c2cc +0x0654:  mov    %eax,(%esp)
0830c2cf +0x0657:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0830c2d4 +0x065c:  jmp    0830c2db <+0x663>
0830c2d6 +0x065e:  mov    $0x0,%eax
0830c2db +0x0663:  mov    0x8(%ebp),%edx
0830c2de +0x0666:  mov    0x64(%edx),%esi
0830c2e1 +0x0669:  mov    0x8(%ebp),%edx
0830c2e4 +0x066c:  mov    0x60(%edx),%ebx
0830c2e7 +0x066f:  mov    -0xe0(%ebp),%ecx
0830c2ed +0x0675:  mov    -0x90(%ebp),%edx
0830c2f3 +0x067b:  movzbl 0x8(%edx),%edx
0830c2f7 +0x067f:  movsbl %dl,%edx
0830c2fa +0x0682:  mov    %eax,0x24(%esp)
0830c2fe +0x0686:  mov    %esi,0x20(%esp)
0830c302 +0x068a:  mov    %ebx,0x1c(%esp)
0830c306 +0x068e:  mov    %ecx,0x18(%esp)
0830c30a +0x0692:  mov    %edx,0x14(%esp)
0830c30e +0x0696:  movl   $"MOVE_MAP_LOG : kill_monster role_type(%d) ERROR monster_uid(%d), grid(%d,%d) charac_no (%u)",0x10(%esp)
0830c316 +0x069e:  movl   $0x1c03,0xc(%esp)
0830c31e +0x06a6:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830c326 +0x06ae:  movl   $"battle_field.cpp",0x4(%esp)
0830c32e +0x06b6:  movl   $0x1,(%esp)
0830c335 +0x06bd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830c33a +0x06c2:  mov    $0x0,%ebx
0830c33f +0x06c7:  jmp    0830d57e <+0x1906>
0830c344 +0x06cc:  mov    -0x90(%ebp),%eax
0830c34a +0x06d2:  mov    %eax,0x4(%esp)
0830c34e +0x06d6:  mov    0x10(%ebp),%eax
0830c351 +0x06d9:  mov    %eax,(%esp)
0830c354 +0x06dc:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
0830c359 +0x06e1:  movb   $0x0,-0x8a(%ebp)
0830c360 +0x06e8:  movb   $0x0,-0x89(%ebp)
0830c367 +0x06ef:  mov    0x8(%ebp),%eax
0830c36a +0x06f2:  mov    (%eax),%eax
0830c36c +0x06f4:  mov    %eax,(%esp)
0830c36f +0x06f7:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
0830c374 +0x06fc:  test   %al,%al
0830c376 +0x06fe:  je     0830c512 <+0x89a>
0830c37c +0x0704:  mov    0x8(%ebp),%eax
0830c37f +0x0707:  mov    (%eax),%eax
0830c381 +0x0709:  mov    %eax,(%esp)
0830c384 +0x070c:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830c389 +0x0711:  mov    %eax,-0x6c(%ebp)
0830c38c +0x0714:  movl   $0xc,0x4(%esp)
0830c394 +0x071c:  mov    -0x6c(%ebp),%eax
0830c397 +0x071f:  mov    %eax,(%esp)
0830c39a +0x0722:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0830c39f +0x0727:  mov    %eax,-0x68(%ebp)
0830c3a2 +0x072a:  mov    0x10(%ebp),%eax
0830c3a5 +0x072d:  movzbl 0x8(%eax),%eax
0830c3a9 +0x0731:  cmp    $0x3,%al
0830c3ab +0x0733:  jne    0830c41a <+0x7a2>
0830c3ad +0x0735:  mov    0x8(%ebp),%eax
0830c3b0 +0x0738:  mov    %eax,(%esp)
0830c3b3 +0x073b:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c3b8 +0x0740:  movzbl %al,%edx
0830c3bb +0x0743:  mov    0x10(%ebp),%eax
0830c3be +0x0746:  mov    0xc(%eax),%eax
0830c3c1 +0x0749:  mov    %edx,0x8(%esp)
0830c3c5 +0x074d:  mov    %eax,0x4(%esp)
0830c3c9 +0x0751:  mov    -0x68(%ebp),%eax
0830c3cc +0x0754:  mov    %eax,(%esp)
0830c3cf +0x0757:  call   0854d184 <_ZN16CKillMonsterInfo13CheckBossKillEjh>  ; CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char)
0830c3d4 +0x075c:  xor    $0x1,%eax
0830c3d7 +0x075f:  test   %al,%al
0830c3d9 +0x0761:  je     0830c78b <+0xb13>
0830c3df +0x0767:  mov    0x8(%ebp),%eax
0830c3e2 +0x076a:  mov    %eax,(%esp)
0830c3e5 +0x076d:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c3ea +0x0772:  movzbl %al,%edx
0830c3ed +0x0775:  mov    0x10(%ebp),%eax
0830c3f0 +0x0778:  mov    0xc(%eax),%eax
0830c3f3 +0x077b:  mov    %edx,0x8(%esp)
0830c3f7 +0x077f:  mov    %eax,0x4(%esp)
0830c3fb +0x0783:  mov    -0x68(%ebp),%eax
0830c3fe +0x0786:  mov    %eax,(%esp)
0830c401 +0x0789:  call   0854d418 <_ZN16CKillMonsterInfo16RegisterBossKillEjh>  ; CKillMonsterInfo::RegisterBossKill(unsigned int, unsigned char)
0830c406 +0x078e:  test   %al,%al
0830c408 +0x0790:  je     0830c78b <+0xb13>
0830c40e +0x0796:  movb   $0x1,-0x8a(%ebp)
0830c415 +0x079d:  jmp    0830c78b <+0xb13>
0830c41a +0x07a2:  mov    0x10(%ebp),%eax
0830c41d +0x07a5:  movzbl 0x8(%eax),%eax
0830c421 +0x07a9:  cmp    $0x8,%al
0830c423 +0x07ab:  jne    0830c492 <+0x81a>
0830c425 +0x07ad:  mov    0x8(%ebp),%eax
0830c428 +0x07b0:  mov    %eax,(%esp)
0830c42b +0x07b3:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c430 +0x07b8:  movzbl %al,%edx
0830c433 +0x07bb:  mov    0x10(%ebp),%eax
0830c436 +0x07be:  mov    0xc(%eax),%eax
0830c439 +0x07c1:  mov    %edx,0x8(%esp)
0830c43d +0x07c5:  mov    %eax,0x4(%esp)
0830c441 +0x07c9:  mov    -0x68(%ebp),%eax
0830c444 +0x07cc:  mov    %eax,(%esp)
0830c447 +0x07cf:  call   0854d1e8 <_ZN16CKillMonsterInfo16CheckAPCBossKillEjh>  ; CKillMonsterInfo::CheckAPCBossKill(unsigned int, unsigned char)
0830c44c +0x07d4:  xor    $0x1,%eax
0830c44f +0x07d7:  test   %al,%al
0830c451 +0x07d9:  je     0830c78b <+0xb13>
0830c457 +0x07df:  mov    0x8(%ebp),%eax
0830c45a +0x07e2:  mov    %eax,(%esp)
0830c45d +0x07e5:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c462 +0x07ea:  movzbl %al,%edx
0830c465 +0x07ed:  mov    0x10(%ebp),%eax
0830c468 +0x07f0:  mov    0xc(%eax),%eax
0830c46b +0x07f3:  mov    %edx,0x8(%esp)
0830c46f +0x07f7:  mov    %eax,0x4(%esp)
0830c473 +0x07fb:  mov    -0x68(%ebp),%eax
0830c476 +0x07fe:  mov    %eax,(%esp)
0830c479 +0x0801:  call   0854d48c <_ZN16CKillMonsterInfo19RegisterAPCBossKillEjh>  ; CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char)
0830c47e +0x0806:  test   %al,%al
0830c480 +0x0808:  je     0830c78b <+0xb13>
0830c486 +0x080e:  movb   $0x1,-0x8a(%ebp)
0830c48d +0x0815:  jmp    0830c78b <+0xb13>
0830c492 +0x081a:  mov    0x10(%ebp),%eax
0830c495 +0x081d:  mov    %eax,(%esp)
0830c498 +0x0820:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
0830c49d +0x0825:  test   %al,%al
0830c49f +0x0827:  je     0830c78b <+0xb13>
0830c4a5 +0x082d:  mov    0x8(%ebp),%eax
0830c4a8 +0x0830:  mov    %eax,(%esp)
0830c4ab +0x0833:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c4b0 +0x0838:  movzbl %al,%edx
0830c4b3 +0x083b:  mov    0x10(%ebp),%eax
0830c4b6 +0x083e:  mov    0xc(%eax),%eax
0830c4b9 +0x0841:  mov    %edx,0x8(%esp)
0830c4bd +0x0845:  mov    %eax,0x4(%esp)
0830c4c1 +0x0849:  mov    -0x68(%ebp),%eax
0830c4c4 +0x084c:  mov    %eax,(%esp)
0830c4c7 +0x084f:  call   0854d1b6 <_ZN16CKillMonsterInfo14CheckNamedKillEjh>  ; CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char)
0830c4cc +0x0854:  xor    $0x1,%eax
0830c4cf +0x0857:  test   %al,%al
0830c4d1 +0x0859:  je     0830c78b <+0xb13>
0830c4d7 +0x085f:  mov    0x8(%ebp),%eax
0830c4da +0x0862:  mov    %eax,(%esp)
0830c4dd +0x0865:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c4e2 +0x086a:  movzbl %al,%edx
0830c4e5 +0x086d:  mov    0x10(%ebp),%eax
0830c4e8 +0x0870:  mov    0xc(%eax),%eax
0830c4eb +0x0873:  mov    %edx,0x8(%esp)
0830c4ef +0x0877:  mov    %eax,0x4(%esp)
0830c4f3 +0x087b:  mov    -0x68(%ebp),%eax
0830c4f6 +0x087e:  mov    %eax,(%esp)
0830c4f9 +0x0881:  call   0854d452 <_ZN16CKillMonsterInfo17RegisterNamedKillEjh>  ; CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char)
0830c4fe +0x0886:  test   %al,%al
0830c500 +0x0888:  je     0830c78b <+0xb13>
0830c506 +0x088e:  movb   $0x1,-0x89(%ebp)
0830c50d +0x0895:  jmp    0830c78b <+0xb13>
0830c512 +0x089a:  mov    0x8(%ebp),%eax
0830c515 +0x089d:  mov    (%eax),%eax
0830c517 +0x089f:  mov    %eax,(%esp)
0830c51a +0x08a2:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830c51f +0x08a7:  mov    %eax,-0x64(%ebp)
0830c522 +0x08aa:  movl   $0xc,0x4(%esp)
0830c52a +0x08b2:  mov    -0x64(%ebp),%eax
0830c52d +0x08b5:  mov    %eax,(%esp)
0830c530 +0x08b8:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0830c535 +0x08bd:  mov    %eax,-0x60(%ebp)
0830c538 +0x08c0:  mov    0x10(%ebp),%eax
0830c53b +0x08c3:  movzbl 0x8(%eax),%eax
0830c53f +0x08c7:  cmp    $0x3,%al
0830c541 +0x08c9:  jne    0830c601 <+0x989>
0830c547 +0x08cf:  mov    0x8(%ebp),%eax
0830c54a +0x08d2:  mov    %eax,(%esp)
0830c54d +0x08d5:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c552 +0x08da:  movzbl %al,%edx
0830c555 +0x08dd:  mov    0x10(%ebp),%eax
0830c558 +0x08e0:  mov    0xc(%eax),%eax
0830c55b +0x08e3:  mov    %edx,0x8(%esp)
0830c55f +0x08e7:  mov    %eax,0x4(%esp)
0830c563 +0x08eb:  mov    -0x60(%ebp),%eax
0830c566 +0x08ee:  mov    %eax,(%esp)
0830c569 +0x08f1:  call   0854d184 <_ZN16CKillMonsterInfo13CheckBossKillEjh>  ; CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char)
0830c56e +0x08f6:  xor    $0x1,%eax
0830c571 +0x08f9:  test   %al,%al
0830c573 +0x08fb:  je     0830c5d6 <+0x95e>
0830c575 +0x08fd:  mov    0x8(%ebp),%eax
0830c578 +0x0900:  mov    %eax,(%esp)
0830c57b +0x0903:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c580 +0x0908:  movzbl %al,%edx
0830c583 +0x090b:  mov    0x10(%ebp),%eax
0830c586 +0x090e:  mov    0xc(%eax),%eax
0830c589 +0x0911:  mov    %edx,0x8(%esp)
0830c58d +0x0915:  mov    %eax,0x4(%esp)
0830c591 +0x0919:  mov    -0x60(%ebp),%eax
0830c594 +0x091c:  mov    %eax,(%esp)
0830c597 +0x091f:  call   0854d418 <_ZN16CKillMonsterInfo16RegisterBossKillEjh>  ; CKillMonsterInfo::RegisterBossKill(unsigned int, unsigned char)
0830c59c +0x0924:  test   %al,%al
0830c59e +0x0926:  je     0830c78b <+0xb13>
0830c5a4 +0x092c:  movb   $0x1,-0x8a(%ebp)
0830c5ab +0x0933:  mov    0x8(%ebp),%eax
0830c5ae +0x0936:  mov    %eax,(%esp)
0830c5b1 +0x0939:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c5b6 +0x093e:  movzbl %al,%edx
0830c5b9 +0x0941:  mov    0x8(%ebp),%eax
0830c5bc +0x0944:  mov    (%eax),%eax
0830c5be +0x0946:  mov    %edx,0x8(%esp)
0830c5c2 +0x094a:  mov    0x10(%ebp),%edx
0830c5c5 +0x094d:  mov    %edx,0x4(%esp)
0830c5c9 +0x0951:  mov    %eax,(%esp)
0830c5cc +0x0954:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c5d1 +0x0959:  jmp    0830c78b <+0xb13>
0830c5d6 +0x095e:  mov    0x8(%ebp),%eax
0830c5d9 +0x0961:  mov    %eax,(%esp)
0830c5dc +0x0964:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c5e1 +0x0969:  movzbl %al,%edx
0830c5e4 +0x096c:  mov    0x8(%ebp),%eax
0830c5e7 +0x096f:  mov    (%eax),%eax
0830c5e9 +0x0971:  mov    %edx,0x8(%esp)
0830c5ed +0x0975:  mov    0x10(%ebp),%edx
0830c5f0 +0x0978:  mov    %edx,0x4(%esp)
0830c5f4 +0x097c:  mov    %eax,(%esp)
0830c5f7 +0x097f:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c5fc +0x0984:  jmp    0830c78b <+0xb13>
0830c601 +0x0989:  mov    0x10(%ebp),%eax
0830c604 +0x098c:  movzbl 0x8(%eax),%eax
0830c608 +0x0990:  cmp    $0x8,%al
0830c60a +0x0992:  jne    0830c6ca <+0xa52>
0830c610 +0x0998:  mov    0x8(%ebp),%eax
0830c613 +0x099b:  mov    %eax,(%esp)
0830c616 +0x099e:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c61b +0x09a3:  movzbl %al,%edx
0830c61e +0x09a6:  mov    0x10(%ebp),%eax
0830c621 +0x09a9:  mov    0xc(%eax),%eax
0830c624 +0x09ac:  mov    %edx,0x8(%esp)
0830c628 +0x09b0:  mov    %eax,0x4(%esp)
0830c62c +0x09b4:  mov    -0x60(%ebp),%eax
0830c62f +0x09b7:  mov    %eax,(%esp)
0830c632 +0x09ba:  call   0854d1e8 <_ZN16CKillMonsterInfo16CheckAPCBossKillEjh>  ; CKillMonsterInfo::CheckAPCBossKill(unsigned int, unsigned char)
0830c637 +0x09bf:  xor    $0x1,%eax
0830c63a +0x09c2:  test   %al,%al
0830c63c +0x09c4:  je     0830c69f <+0xa27>
0830c63e +0x09c6:  mov    0x8(%ebp),%eax
0830c641 +0x09c9:  mov    %eax,(%esp)
0830c644 +0x09cc:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c649 +0x09d1:  movzbl %al,%edx
0830c64c +0x09d4:  mov    0x10(%ebp),%eax
0830c64f +0x09d7:  mov    0xc(%eax),%eax
0830c652 +0x09da:  mov    %edx,0x8(%esp)
0830c656 +0x09de:  mov    %eax,0x4(%esp)
0830c65a +0x09e2:  mov    -0x60(%ebp),%eax
0830c65d +0x09e5:  mov    %eax,(%esp)
0830c660 +0x09e8:  call   0854d48c <_ZN16CKillMonsterInfo19RegisterAPCBossKillEjh>  ; CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char)
0830c665 +0x09ed:  test   %al,%al
0830c667 +0x09ef:  je     0830c78b <+0xb13>
0830c66d +0x09f5:  movb   $0x1,-0x8a(%ebp)
0830c674 +0x09fc:  mov    0x8(%ebp),%eax
0830c677 +0x09ff:  mov    %eax,(%esp)
0830c67a +0x0a02:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c67f +0x0a07:  movzbl %al,%edx
0830c682 +0x0a0a:  mov    0x8(%ebp),%eax
0830c685 +0x0a0d:  mov    (%eax),%eax
0830c687 +0x0a0f:  mov    %edx,0x8(%esp)
0830c68b +0x0a13:  mov    0x10(%ebp),%edx
0830c68e +0x0a16:  mov    %edx,0x4(%esp)
0830c692 +0x0a1a:  mov    %eax,(%esp)
0830c695 +0x0a1d:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c69a +0x0a22:  jmp    0830c78b <+0xb13>
0830c69f +0x0a27:  mov    0x8(%ebp),%eax
0830c6a2 +0x0a2a:  mov    %eax,(%esp)
0830c6a5 +0x0a2d:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c6aa +0x0a32:  movzbl %al,%edx
0830c6ad +0x0a35:  mov    0x8(%ebp),%eax
0830c6b0 +0x0a38:  mov    (%eax),%eax
0830c6b2 +0x0a3a:  mov    %edx,0x8(%esp)
0830c6b6 +0x0a3e:  mov    0x10(%ebp),%edx
0830c6b9 +0x0a41:  mov    %edx,0x4(%esp)
0830c6bd +0x0a45:  mov    %eax,(%esp)
0830c6c0 +0x0a48:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c6c5 +0x0a4d:  jmp    0830c78b <+0xb13>
0830c6ca +0x0a52:  mov    0x10(%ebp),%eax
0830c6cd +0x0a55:  mov    %eax,(%esp)
0830c6d0 +0x0a58:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
0830c6d5 +0x0a5d:  test   %al,%al
0830c6d7 +0x0a5f:  je     0830c78b <+0xb13>
0830c6dd +0x0a65:  mov    0x8(%ebp),%eax
0830c6e0 +0x0a68:  mov    %eax,(%esp)
0830c6e3 +0x0a6b:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c6e8 +0x0a70:  movzbl %al,%edx
0830c6eb +0x0a73:  mov    0x10(%ebp),%eax
0830c6ee +0x0a76:  mov    0xc(%eax),%eax
0830c6f1 +0x0a79:  mov    %edx,0x8(%esp)
0830c6f5 +0x0a7d:  mov    %eax,0x4(%esp)
0830c6f9 +0x0a81:  mov    -0x60(%ebp),%eax
0830c6fc +0x0a84:  mov    %eax,(%esp)
0830c6ff +0x0a87:  call   0854d1b6 <_ZN16CKillMonsterInfo14CheckNamedKillEjh>  ; CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char)
0830c704 +0x0a8c:  xor    $0x1,%eax
0830c707 +0x0a8f:  test   %al,%al
0830c709 +0x0a91:  je     0830c765 <+0xaed>
0830c70b +0x0a93:  mov    0x8(%ebp),%eax
0830c70e +0x0a96:  mov    %eax,(%esp)
0830c711 +0x0a99:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c716 +0x0a9e:  movzbl %al,%edx
0830c719 +0x0aa1:  mov    0x10(%ebp),%eax
0830c71c +0x0aa4:  mov    0xc(%eax),%eax
0830c71f +0x0aa7:  mov    %edx,0x8(%esp)
0830c723 +0x0aab:  mov    %eax,0x4(%esp)
0830c727 +0x0aaf:  mov    -0x60(%ebp),%eax
0830c72a +0x0ab2:  mov    %eax,(%esp)
0830c72d +0x0ab5:  call   0854d452 <_ZN16CKillMonsterInfo17RegisterNamedKillEjh>  ; CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char)
0830c732 +0x0aba:  test   %al,%al
0830c734 +0x0abc:  je     0830c78b <+0xb13>
0830c736 +0x0abe:  movb   $0x1,-0x89(%ebp)
0830c73d +0x0ac5:  mov    0x8(%ebp),%eax
0830c740 +0x0ac8:  mov    %eax,(%esp)
0830c743 +0x0acb:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c748 +0x0ad0:  movzbl %al,%edx
0830c74b +0x0ad3:  mov    0x8(%ebp),%eax
0830c74e +0x0ad6:  mov    (%eax),%eax
0830c750 +0x0ad8:  mov    %edx,0x8(%esp)
0830c754 +0x0adc:  mov    0x10(%ebp),%edx
0830c757 +0x0adf:  mov    %edx,0x4(%esp)
0830c75b +0x0ae3:  mov    %eax,(%esp)
0830c75e +0x0ae6:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c763 +0x0aeb:  jmp    0830c78b <+0xb13>
0830c765 +0x0aed:  mov    0x8(%ebp),%eax
0830c768 +0x0af0:  mov    %eax,(%esp)
0830c76b +0x0af3:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c770 +0x0af8:  movzbl %al,%edx
0830c773 +0x0afb:  mov    0x8(%ebp),%eax
0830c776 +0x0afe:  mov    (%eax),%eax
0830c778 +0x0b00:  mov    %edx,0x8(%esp)
0830c77c +0x0b04:  mov    0x10(%ebp),%edx
0830c77f +0x0b07:  mov    %edx,0x4(%esp)
0830c783 +0x0b0b:  mov    %eax,(%esp)
0830c786 +0x0b0e:  call   085bae6e <_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh>  ; CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
0830c78b +0x0b13:  cmpb   $0x0,-0x8a(%ebp)
0830c792 +0x0b1a:  jne    0830c7a1 <+0xb29>
0830c794 +0x0b1c:  cmpb   $0x0,-0x89(%ebp)
0830c79b +0x0b23:  je     0830c875 <+0xbfd>
0830c7a1 +0x0b29:  mov    0x8(%ebp),%eax
0830c7a4 +0x0b2c:  mov    %eax,(%esp)
0830c7a7 +0x0b2f:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830c7ac +0x0b34:  mov    %eax,-0x160(%ebp)
0830c7b2 +0x0b3a:  mov    0x8(%ebp),%eax
0830c7b5 +0x0b3d:  mov    %eax,(%esp)
0830c7b8 +0x0b40:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0830c7bd +0x0b45:  mov    %eax,%edi
0830c7bf +0x0b47:  mov    0x10(%ebp),%eax
0830c7c2 +0x0b4a:  movzbl 0x8(%eax),%eax
0830c7c6 +0x0b4e:  movsbl %al,%eax
0830c7c9 +0x0b51:  mov    %eax,-0x15c(%ebp)
0830c7cf +0x0b57:  mov    0x10(%ebp),%eax
0830c7d2 +0x0b5a:  mov    0xc(%eax),%eax
0830c7d5 +0x0b5d:  mov    %eax,-0x158(%ebp)
0830c7db +0x0b63:  mov    0x8(%ebp),%eax
0830c7de +0x0b66:  mov    (%eax),%eax
0830c7e0 +0x0b68:  mov    %eax,(%esp)
0830c7e3 +0x0b6b:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
0830c7e8 +0x0b70:  test   %al,%al
0830c7ea +0x0b72:  je     0830c7f3 <+0xb7b>
0830c7ec +0x0b74:  mov    $0x1,%ebx
0830c7f1 +0x0b79:  jmp    0830c7f8 <+0xb80>
0830c7f3 +0x0b7b:  mov    $0x0,%ebx
0830c7f8 +0x0b80:  mov    0x8(%ebp),%eax
0830c7fb +0x0b83:  mov    (%eax),%eax
0830c7fd +0x0b85:  mov    %eax,(%esp)
0830c800 +0x0b88:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830c805 +0x0b8d:  mov    %eax,(%esp)
0830c808 +0x0b90:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0830c80d +0x0b95:  mov    %eax,%esi
0830c80f +0x0b97:  movl   $0x0,0xc(%esp)
0830c817 +0x0b9f:  movl   $0x1c67,0x8(%esp)
0830c81f +0x0ba7:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x4(%esp)
0830c827 +0x0baf:  lea    -0xcc(%ebp),%eax
0830c82d +0x0bb5:  mov    %eax,(%esp)
0830c830 +0x0bb8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0830c835 +0x0bbd:  mov    -0x160(%ebp),%eax
0830c83b +0x0bc3:  mov    %eax,0x1c(%esp)
0830c83f +0x0bc7:  mov    %edi,0x18(%esp)
0830c843 +0x0bcb:  mov    -0x15c(%ebp),%edx
0830c849 +0x0bd1:  mov    %edx,0x14(%esp)
0830c84d +0x0bd5:  mov    -0x158(%ebp),%eax
0830c853 +0x0bdb:  mov    %eax,0x10(%esp)
0830c857 +0x0bdf:  mov    %ebx,0xc(%esp)
0830c85b +0x0be3:  mov    %esi,0x8(%esp)
0830c85f +0x0be7:  movl   $"First Monster KILL : charac_no(%d), single_mode(%d), mob_index(%d), mob_type(%d), dungeon_index(%d), dungeon_diff(%d)",0x4(%esp)
0830c867 +0x0bef:  lea    -0xcc(%ebp),%eax
0830c86d +0x0bf5:  mov    %eax,(%esp)
0830c870 +0x0bf8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0830c875 +0x0bfd:  lea    -0xf4(%ebp),%eax
0830c87b +0x0c03:  mov    %eax,(%esp)
0830c87e +0x0c06:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
0830c883 +0x0c0b:  lea    -0x108(%ebp),%eax
0830c889 +0x0c11:  mov    %eax,(%esp)
0830c88c +0x0c14:  call   0814ab92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x931>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x931
0830c891 +0x0c19:  movzbl -0x8a(%ebp),%eax
0830c898 +0x0c20:  mov    %eax,0x4(%esp)
0830c89c +0x0c24:  lea    -0x108(%ebp),%eax
0830c8a2 +0x0c2a:  mov    %eax,(%esp)
0830c8a5 +0x0c2d:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
0830c8aa +0x0c32:  movzbl -0x89(%ebp),%eax
0830c8b1 +0x0c39:  mov    %eax,0x4(%esp)
0830c8b5 +0x0c3d:  lea    -0x108(%ebp),%eax
0830c8bb +0x0c43:  mov    %eax,(%esp)
0830c8be +0x0c46:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
0830c8c3 +0x0c4b:  mov    -0x90(%ebp),%eax
0830c8c9 +0x0c51:  mov    0x2c(%eax),%eax
0830c8cc +0x0c54:  cmp    $0x64,%eax
0830c8cf +0x0c57:  jne    0830cd5d <+0x10e5>
0830c8d5 +0x0c5d:  movzbl -0x96(%ebp),%eax
0830c8dc +0x0c64:  xor    $0x1,%eax
0830c8df +0x0c67:  test   %al,%al
0830c8e1 +0x0c69:  je     0830cd5d <+0x10e5>
0830c8e7 +0x0c6f:  mov    0x8(%ebp),%eax
0830c8ea +0x0c72:  mov    0x1b4(%eax),%eax
0830c8f0 +0x0c78:  cmp    $0x1,%eax
0830c8f3 +0x0c7b:  je     0830cd5d <+0x10e5>
0830c8f9 +0x0c81:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0830c8fe +0x0c86:  movl   $0x1,0x4(%esp)
0830c906 +0x0c8e:  mov    %eax,(%esp)
0830c909 +0x0c91:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
0830c90e +0x0c96:  test   %al,%al
0830c910 +0x0c98:  je     0830ca72 <+0xdfa>
0830c916 +0x0c9e:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0830c91b +0x0ca3:  movl   $0x1,0x4(%esp)
0830c923 +0x0cab:  mov    %eax,(%esp)
0830c926 +0x0cae:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
0830c92b +0x0cb3:  fstps  -0x54(%ebp)
0830c92e +0x0cb6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830c933 +0x0cbb:  mov    %eax,(%esp)
0830c936 +0x0cbe:  call   0830e6d2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b7
0830c93b +0x0cc3:  fnstcw -0x14a(%ebp)
0830c941 +0x0cc9:  movzwl -0x14a(%ebp),%eax
0830c948 +0x0cd0:  mov    $0xc,%ah
0830c94a +0x0cd2:  mov    %ax,-0x14c(%ebp)
0830c951 +0x0cd9:  fldcw  -0x14c(%ebp)
0830c957 +0x0cdf:  fistpll -0x148(%ebp)
0830c95d +0x0ce5:  fldcw  -0x14a(%ebp)
0830c963 +0x0ceb:  mov    -0x148(%ebp),%eax
0830c969 +0x0cf1:  mov    -0x144(%ebp),%edx
0830c96f +0x0cf7:  mov    %eax,-0x50(%ebp)
0830c972 +0x0cfa:  mov    -0x50(%ebp),%eax
0830c975 +0x0cfd:  mov    $0x0,%edx
0830c97a +0x0d02:  mov    %eax,-0x148(%ebp)
0830c980 +0x0d08:  mov    %edx,-0x144(%ebp)
0830c986 +0x0d0e:  fildll -0x148(%ebp)
0830c98c +0x0d14:  flds   -0x54(%ebp)
0830c98f +0x0d17:  fucompp
0830c991 +0x0d19:  fnstsw %ax
0830c993 +0x0d1b:  test   $0x45,%ah
0830c996 +0x0d1e:  sete   %al
0830c999 +0x0d21:  test   %al,%al
0830c99b +0x0d23:  je     0830ca72 <+0xdfa>
0830c9a1 +0x0d29:  mov    -0xe4(%ebp),%eax
0830c9a7 +0x0d2f:  mov    %eax,-0x13c(%ebp)
0830c9ad +0x0d35:  fildl  -0x13c(%ebp)
0830c9b3 +0x0d3b:  mov    -0x50(%ebp),%eax
0830c9b6 +0x0d3e:  mov    $0x0,%edx
0830c9bb +0x0d43:  mov    %eax,-0x148(%ebp)
0830c9c1 +0x0d49:  mov    %edx,-0x144(%ebp)
0830c9c7 +0x0d4f:  fildll -0x148(%ebp)
0830c9cd +0x0d55:  flds   -0x54(%ebp)
0830c9d0 +0x0d58:  fsubp  %st,%st(1)
0830c9d2 +0x0d5a:  fmulp  %st,%st(1)
0830c9d4 +0x0d5c:  fldcw  -0x14c(%ebp)
0830c9da +0x0d62:  fistpll -0x148(%ebp)
0830c9e0 +0x0d68:  fldcw  -0x14a(%ebp)
0830c9e6 +0x0d6e:  mov    -0x148(%ebp),%eax
0830c9ec +0x0d74:  mov    -0x144(%ebp),%edx
0830c9f2 +0x0d7a:  mov    %eax,%edx
0830c9f4 +0x0d7c:  mov    -0xe4(%ebp),%eax
0830c9fa +0x0d82:  lea    (%edx,%eax,1),%eax
0830c9fd +0x0d85:  mov    %eax,-0xe4(%ebp)
0830ca03 +0x0d8b:  mov    -0xe4(%ebp),%eax
0830ca09 +0x0d91:  mov    %eax,-0x13c(%ebp)
0830ca0f +0x0d97:  fildl  -0x13c(%ebp)
0830ca15 +0x0d9d:  fmuls  -0x54(%ebp)
0830ca18 +0x0da0:  fldcw  -0x14c(%ebp)
0830ca1e +0x0da6:  fistpl -0x13c(%ebp)
0830ca24 +0x0dac:  fldcw  -0x14a(%ebp)
0830ca2a +0x0db2:  mov    -0x13c(%ebp),%eax
0830ca30 +0x0db8:  mov    %eax,-0xbc(%ebp)
0830ca36 +0x0dbe:  lea    -0xbc(%ebp),%eax
0830ca3c +0x0dc4:  mov    %eax,0x4(%esp)
0830ca40 +0x0dc8:  lea    -0xe4(%ebp),%eax
0830ca46 +0x0dce:  mov    %eax,(%esp)
0830ca49 +0x0dd1:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0830ca4e +0x0dd6:  movl   $0x0,-0xb8(%ebp)
0830ca58 +0x0de0:  mov    %eax,0x4(%esp)
0830ca5c +0x0de4:  lea    -0xb8(%ebp),%eax
0830ca62 +0x0dea:  mov    %eax,(%esp)
0830ca65 +0x0ded:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0830ca6a +0x0df2:  mov    (%eax),%eax
0830ca6c +0x0df4:  mov    %eax,-0xe4(%ebp)
0830ca72 +0x0dfa:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0830ca77 +0x0dff:  movl   $0x4,0x4(%esp)
0830ca7f +0x0e07:  mov    %eax,(%esp)
0830ca82 +0x0e0a:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
0830ca87 +0x0e0f:  test   %al,%al
0830ca89 +0x0e11:  je     0830cbeb <+0xf73>
0830ca8f +0x0e17:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0830ca94 +0x0e1c:  movl   $0x4,0x4(%esp)
0830ca9c +0x0e24:  mov    %eax,(%esp)
0830ca9f +0x0e27:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
0830caa4 +0x0e2c:  fstps  -0x4c(%ebp)
0830caa7 +0x0e2f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830caac +0x0e34:  mov    %eax,(%esp)
0830caaf +0x0e37:  call   0830e6d2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b7
0830cab4 +0x0e3c:  fnstcw -0x14a(%ebp)
0830caba +0x0e42:  movzwl -0x14a(%ebp),%eax
0830cac1 +0x0e49:  mov    $0xc,%ah
0830cac3 +0x0e4b:  mov    %ax,-0x14c(%ebp)
0830caca +0x0e52:  fldcw  -0x14c(%ebp)
0830cad0 +0x0e58:  fistpll -0x148(%ebp)
0830cad6 +0x0e5e:  fldcw  -0x14a(%ebp)
0830cadc +0x0e64:  mov    -0x148(%ebp),%eax
0830cae2 +0x0e6a:  mov    -0x144(%ebp),%edx
0830cae8 +0x0e70:  mov    %eax,-0x48(%ebp)
0830caeb +0x0e73:  mov    -0x48(%ebp),%eax
0830caee +0x0e76:  mov    $0x0,%edx
0830caf3 +0x0e7b:  mov    %eax,-0x148(%ebp)
0830caf9 +0x0e81:  mov    %edx,-0x144(%ebp)
0830caff +0x0e87:  fildll -0x148(%ebp)
0830cb05 +0x0e8d:  flds   -0x4c(%ebp)
0830cb08 +0x0e90:  fucompp
0830cb0a +0x0e92:  fnstsw %ax
0830cb0c +0x0e94:  test   $0x45,%ah
0830cb0f +0x0e97:  sete   %al
0830cb12 +0x0e9a:  test   %al,%al
0830cb14 +0x0e9c:  je     0830cbeb <+0xf73>
0830cb1a +0x0ea2:  mov    -0xe4(%ebp),%eax
0830cb20 +0x0ea8:  mov    %eax,-0x13c(%ebp)
0830cb26 +0x0eae:  fildl  -0x13c(%ebp)
0830cb2c +0x0eb4:  mov    -0x48(%ebp),%eax
0830cb2f +0x0eb7:  mov    $0x0,%edx
0830cb34 +0x0ebc:  mov    %eax,-0x148(%ebp)
0830cb3a +0x0ec2:  mov    %edx,-0x144(%ebp)
0830cb40 +0x0ec8:  fildll -0x148(%ebp)
0830cb46 +0x0ece:  flds   -0x4c(%ebp)
0830cb49 +0x0ed1:  fsubp  %st,%st(1)
0830cb4b +0x0ed3:  fmulp  %st,%st(1)
0830cb4d +0x0ed5:  fldcw  -0x14c(%ebp)
0830cb53 +0x0edb:  fistpll -0x148(%ebp)
0830cb59 +0x0ee1:  fldcw  -0x14a(%ebp)
0830cb5f +0x0ee7:  mov    -0x148(%ebp),%eax
0830cb65 +0x0eed:  mov    -0x144(%ebp),%edx
0830cb6b +0x0ef3:  mov    %eax,%edx
0830cb6d +0x0ef5:  mov    -0xe4(%ebp),%eax
0830cb73 +0x0efb:  lea    (%edx,%eax,1),%eax
0830cb76 +0x0efe:  mov    %eax,-0xe4(%ebp)
0830cb7c +0x0f04:  mov    -0xe4(%ebp),%eax
0830cb82 +0x0f0a:  mov    %eax,-0x13c(%ebp)
0830cb88 +0x0f10:  fildl  -0x13c(%ebp)
0830cb8e +0x0f16:  fmuls  -0x4c(%ebp)
0830cb91 +0x0f19:  fldcw  -0x14c(%ebp)
0830cb97 +0x0f1f:  fistpl -0x13c(%ebp)
0830cb9d +0x0f25:  fldcw  -0x14a(%ebp)
0830cba3 +0x0f2b:  mov    -0x13c(%ebp),%eax
0830cba9 +0x0f31:  mov    %eax,-0xb4(%ebp)
0830cbaf +0x0f37:  lea    -0xb4(%ebp),%eax
0830cbb5 +0x0f3d:  mov    %eax,0x4(%esp)
0830cbb9 +0x0f41:  lea    -0xe4(%ebp),%eax
0830cbbf +0x0f47:  mov    %eax,(%esp)
0830cbc2 +0x0f4a:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0830cbc7 +0x0f4f:  movl   $0x0,-0xb0(%ebp)
0830cbd1 +0x0f59:  mov    %eax,0x4(%esp)
0830cbd5 +0x0f5d:  lea    -0xb0(%ebp),%eax
0830cbdb +0x0f63:  mov    %eax,(%esp)
0830cbde +0x0f66:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0830cbe3 +0x0f6b:  mov    (%eax),%eax
0830cbe5 +0x0f6d:  mov    %eax,-0xe4(%ebp)
0830cbeb +0x0f73:  movb   $0x0,-0x59(%ebp)
0830cbef +0x0f77:  movl   $0x0,-0x58(%ebp)
0830cbf6 +0x0f7e:  movl   $0x0,-0x44(%ebp)
0830cbfd +0x0f85:  jmp    0830cc59 <+0xfe1>
0830cbff +0x0f87:  mov    0x8(%ebp),%eax
0830cc02 +0x0f8a:  mov    (%eax),%eax
0830cc04 +0x0f8c:  mov    -0x44(%ebp),%edx
0830cc07 +0x0f8f:  mov    %edx,0x4(%esp)
0830cc0b +0x0f93:  mov    %eax,(%esp)
0830cc0e +0x0f96:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830cc13 +0x0f9b:  xor    $0x1,%eax
0830cc16 +0x0f9e:  test   %al,%al
0830cc18 +0x0fa0:  jne    0830cc54 <+0xfdc>
0830cc1a +0x0fa2:  mov    0x8(%ebp),%eax
0830cc1d +0x0fa5:  mov    (%eax),%eax
0830cc1f +0x0fa7:  mov    %eax,(%esp)
0830cc22 +0x0faa:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
0830cc27 +0x0faf:  mov    %eax,%ecx
0830cc29 +0x0fb1:  mov    -0x44(%ebp),%edx
0830cc2c +0x0fb4:  mov    %edx,%eax
0830cc2e +0x0fb6:  add    %eax,%eax
0830cc30 +0x0fb8:  add    %edx,%eax
0830cc32 +0x0fba:  shl    $0x3,%eax
0830cc35 +0x0fbd:  lea    (%ecx,%eax,1),%eax
0830cc38 +0x0fc0:  mov    (%eax),%eax
0830cc3a +0x0fc2:  movl   $0x4f,0x4(%esp)
0830cc42 +0x0fca:  mov    %eax,(%esp)
0830cc45 +0x0fcd:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0830cc4a +0x0fd2:  test   %al,%al
0830cc4c +0x0fd4:  je     0830cc55 <+0xfdd>
0830cc4e +0x0fd6:  addb   $0x1,-0x59(%ebp)
0830cc52 +0x0fda:  jmp    0830cc55 <+0xfdd>
0830cc54 +0x0fdc:  nop
0830cc55 +0x0fdd:  addl   $0x1,-0x44(%ebp)
0830cc59 +0x0fe1:  cmpl   $0x3,-0x44(%ebp)
0830cc5d +0x0fe5:  setle  %al
0830cc60 +0x0fe8:  test   %al,%al
0830cc62 +0x0fea:  jne    0830cbff <+0xf87>
0830cc64 +0x0fec:  cmpb   $0x0,-0x59(%ebp)
0830cc68 +0x0ff0:  je     0830cce2 <+0x106a>
0830cc6a +0x0ff2:  cmpb   $0x4,-0x59(%ebp)
0830cc6e +0x0ff6:  ja     0830cce2 <+0x106a>
0830cc70 +0x0ff8:  movl   $0x0,-0x40(%ebp)
0830cc77 +0x0fff:  jmp    0830ccd7 <+0x105f>
0830cc79 +0x1001:  mov    0x8(%ebp),%eax
0830cc7c +0x1004:  mov    (%eax),%eax
0830cc7e +0x1006:  mov    -0x40(%ebp),%edx
0830cc81 +0x1009:  mov    %edx,0x4(%esp)
0830cc85 +0x100d:  mov    %eax,(%esp)
0830cc88 +0x1010:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830cc8d +0x1015:  xor    $0x1,%eax
0830cc90 +0x1018:  test   %al,%al
0830cc92 +0x101a:  je     0830cc9a <+0x1022>
0830cc94 +0x101c:  addl   $0x1,-0x40(%ebp)
0830cc98 +0x1020:  jmp    0830ccd7 <+0x105f>
0830cc9a +0x1022:  movzbl -0x59(%ebp),%ebx
0830cc9e +0x1026:  mov    0x8(%ebp),%eax
0830cca1 +0x1029:  mov    (%eax),%eax
0830cca3 +0x102b:  mov    %eax,(%esp)
0830cca6 +0x102e:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
0830ccab +0x1033:  mov    %eax,%ecx
0830ccad +0x1035:  mov    -0x40(%ebp),%edx
0830ccb0 +0x1038:  mov    %edx,%eax
0830ccb2 +0x103a:  add    %eax,%eax
0830ccb4 +0x103c:  add    %edx,%eax
0830ccb6 +0x103e:  shl    $0x3,%eax
0830ccb9 +0x1041:  lea    (%ecx,%eax,1),%eax
0830ccbc +0x1044:  mov    (%eax),%eax
0830ccbe +0x1046:  mov    %ebx,0x8(%esp)
0830ccc2 +0x104a:  movl   $0x4f,0x4(%esp)
0830ccca +0x1052:  mov    %eax,(%esp)
0830cccd +0x1055:  call   0830edaa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x98f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x98f
0830ccd2 +0x105a:  mov    %eax,-0x58(%ebp)
0830ccd5 +0x105d:  jmp    0830cce2 <+0x106a>
0830ccd7 +0x105f:  cmpl   $0x3,-0x40(%ebp)
0830ccdb +0x1063:  setle  %al
0830ccde +0x1066:  test   %al,%al
0830cce0 +0x1068:  jne    0830cc79 <+0x1001>
0830cce2 +0x106a:  mov    -0x58(%ebp),%esi
0830cce5 +0x106d:  mov    0x18(%ebp),%eax
0830cce8 +0x1070:  mov    0x14(%eax),%ebx
0830cceb +0x1073:  movzbl -0xe9(%ebp),%eax
0830ccf2 +0x107a:  movzbl %al,%ecx
0830ccf5 +0x107d:  mov    -0xe4(%ebp),%edx
0830ccfb +0x1083:  movzwl -0xa2(%ebp),%eax
0830cd02 +0x108a:  mov    %esi,0x2c(%esp)
0830cd06 +0x108e:  mov    %ebx,0x28(%esp)
0830cd0a +0x1092:  lea    -0x108(%ebp),%ebx
0830cd10 +0x1098:  mov    %ebx,0x24(%esp)
0830cd14 +0x109c:  mov    %ecx,0x20(%esp)
0830cd18 +0x10a0:  mov    %edx,0x1c(%esp)
0830cd1c +0x10a4:  mov    -0x9c(%ebp),%edx
0830cd22 +0x10aa:  mov    %edx,0x18(%esp)
0830cd26 +0x10ae:  mov    -0xa0(%ebp),%edx
0830cd2c +0x10b4:  mov    %edx,0x14(%esp)
0830cd30 +0x10b8:  mov    %eax,0x10(%esp)
0830cd34 +0x10bc:  mov    -0x90(%ebp),%eax
0830cd3a +0x10c2:  mov    %eax,0xc(%esp)
0830cd3e +0x10c6:  mov    -0x94(%ebp),%eax
0830cd44 +0x10cc:  mov    %eax,0x8(%esp)
0830cd48 +0x10d0:  lea    -0xf4(%ebp),%eax
0830cd4e +0x10d6:  mov    %eax,0x4(%esp)
0830cd52 +0x10da:  mov    0x8(%ebp),%eax
0830cd55 +0x10dd:  mov    %eax,(%esp)
0830cd58 +0x10e0:  call   0830adf6 <_ZN13CBattle_Field14_MakeDropItemsERSt4listI8map_itemSaIS1_EER7MapInfoRK11map_monstertiiibRSt6vectorIbSaIbEEfi>  ; CBattle_Field::_MakeDropItems(std::list<map_item, std::allocator<map_item> >&, MapInfo&, map_monster const&, unsigned short, int, int, int, bool, std::vector<bool, std::allocator<bool> >&, float, int)
0830cd5d +0x10e5:  mov    -0x90(%ebp),%eax
0830cd63 +0x10eb:  movzbl 0x8(%eax),%eax
0830cd67 +0x10ef:  movsbl %al,%eax
0830cd6a +0x10f2:  mov    %eax,0x4(%esp)
0830cd6e +0x10f6:  mov    0x8(%ebp),%eax
0830cd71 +0x10f9:  mov    %eax,(%esp)
0830cd74 +0x10fc:  call   0830a812 <_ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc>  ; CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const
0830cd79 +0x1101:  movsbl %al,%eax
0830cd7c +0x1104:  cmp    $0x1,%eax
0830cd7f +0x1107:  jne    0830cdc6 <+0x114e>
0830cd81 +0x1109:  call   0807dca0 <_init+0x598>
0830cd86 +0x110e:  mov    %eax,%ecx
0830cd88 +0x1110:  mov    $0x51eb851f,%edx
0830cd8d +0x1115:  mov    %ecx,%eax
0830cd8f +0x1117:  imul   %edx
0830cd91 +0x1119:  sar    $0x5,%edx
0830cd94 +0x111c:  mov    %ecx,%eax
0830cd96 +0x111e:  sar    $0x1f,%eax
0830cd99 +0x1121:  mov    %edx,%ebx
0830cd9b +0x1123:  sub    %eax,%ebx
0830cd9d +0x1125:  mov    %ebx,%eax
0830cd9f +0x1127:  imul   $0x64,%eax,%eax
0830cda2 +0x112a:  mov    %ecx,%edx
0830cda4 +0x112c:  sub    %eax,%edx
0830cda6 +0x112e:  mov    %edx,%eax
0830cda8 +0x1130:  test   %eax,%eax
0830cdaa +0x1132:  setg   %al
0830cdad +0x1135:  test   %al,%al
0830cdaf +0x1137:  je     0830cdc6 <+0x114e>
0830cdb1 +0x1139:  mov    0x8(%ebp),%eax
0830cdb4 +0x113c:  mov    0x1a8(%eax),%eax
0830cdba +0x1142:  lea    0x1(%eax),%edx
0830cdbd +0x1145:  mov    0x8(%ebp),%eax
0830cdc0 +0x1148:  mov    %edx,0x1a8(%eax)
0830cdc6 +0x114e:  movzwl -0xa2(%ebp),%edx
0830cdcd +0x1155:  mov    -0xe0(%ebp),%eax
0830cdd3 +0x115b:  mov    0x10(%ebp),%ecx
0830cdd6 +0x115e:  mov    %ecx,0x18(%esp)
0830cdda +0x1162:  mov    -0x90(%ebp),%ecx
0830cde0 +0x1168:  mov    %ecx,0x14(%esp)
0830cde4 +0x116c:  mov    %edx,0x10(%esp)
0830cde8 +0x1170:  mov    %eax,0xc(%esp)
0830cdec +0x1174:  lea    -0xf4(%ebp),%eax
0830cdf2 +0x117a:  mov    %eax,0x8(%esp)
0830cdf6 +0x117e:  mov    0xc(%ebp),%eax
0830cdf9 +0x1181:  mov    %eax,0x4(%esp)
0830cdfd +0x1185:  mov    0x8(%ebp),%eax
0830ce00 +0x1188:  mov    %eax,(%esp)
0830ce03 +0x118b:  call   0830b8cc <_ZN13CBattle_Field25_MakeNotiPacketDieMonsterER11PacketGuardRSt4listI8map_itemSaIS3_EEitRK11map_monsterRS7_>  ; CBattle_Field::_MakeNotiPacketDieMonster(PacketGuard&, std::list<map_item, std::allocator<map_item> >&, int, unsigned short, map_monster const&, map_monster&)
0830ce08 +0x1190:  mov    -0x90(%ebp),%eax
0830ce0e +0x1196:  movzbl 0x10(%eax),%eax
0830ce12 +0x119a:  movzbl %al,%ebx
0830ce15 +0x119d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830ce1a +0x11a2:  mov    0x14(%ebp),%edx
0830ce1d +0x11a5:  mov    %edx,0x8(%esp)
0830ce21 +0x11a9:  mov    %ebx,0x4(%esp)
0830ce25 +0x11ad:  mov    %eax,(%esp)
0830ce28 +0x11b0:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
0830ce2d +0x11b5:  mov    -0x90(%ebp),%eax
0830ce33 +0x11bb:  movzwl 0x334(%eax),%eax
0830ce3a +0x11c2:  test   %ax,%ax
0830ce3d +0x11c5:  je     0830d0a5 <+0x142d>
0830ce43 +0x11cb:  mov    0x8(%ebp),%eax
0830ce46 +0x11ce:  mov    0x188(%eax),%eax
0830ce4c +0x11d4:  test   %eax,%eax
0830ce4e +0x11d6:  je     0830ce74 <+0x11fc>
0830ce50 +0x11d8:  lea    -0xf4(%ebp),%eax
0830ce56 +0x11de:  mov    %eax,(%esp)
0830ce59 +0x11e1:  call   08311e2c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a11>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a11
0830ce5e +0x11e6:  test   %eax,%eax
0830ce60 +0x11e8:  je     0830ce74 <+0x11fc>
0830ce62 +0x11ea:  movzbl -0xe9(%ebp),%eax
0830ce69 +0x11f1:  test   %al,%al
0830ce6b +0x11f3:  je     0830ce74 <+0x11fc>
0830ce6d +0x11f5:  mov    $0x1,%eax
0830ce72 +0x11fa:  jmp    0830ce79 <+0x1201>
0830ce74 +0x11fc:  mov    $0x0,%eax
0830ce79 +0x1201:  test   %al,%al
0830ce7b +0x1203:  je     0830d070 <+0x13f8>
0830ce81 +0x1209:  lea    -0x124(%ebp),%eax
0830ce87 +0x120f:  lea    -0xf4(%ebp),%edx
0830ce8d +0x1215:  mov    %edx,0x4(%esp)
0830ce91 +0x1219:  mov    %eax,(%esp)
0830ce94 +0x121c:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
0830ce99 +0x1221:  sub    $0x4,%esp
0830ce9c +0x1224:  jmp    0830cf44 <+0x12cc>
0830cea1 +0x1229:  lea    -0x124(%ebp),%eax
0830cea7 +0x122f:  mov    %eax,(%esp)
0830ceaa +0x1232:  call   08311ebc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3aa1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3aa1
0830ceaf +0x1237:  mov    %eax,-0x3c(%ebp)
0830ceb2 +0x123a:  mov    -0x3c(%ebp),%eax
0830ceb5 +0x123d:  mov    0x12(%eax),%eax
0830ceb8 +0x1240:  mov    %eax,%ebx
0830ceba +0x1242:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830cebf +0x1247:  mov    %ebx,0x4(%esp)
0830cec3 +0x124b:  mov    %eax,(%esp)
0830cec6 +0x124e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0830cecb +0x1253:  mov    %eax,-0x38(%ebp)
0830cece +0x1256:  cmpl   $0x0,-0x38(%ebp)
0830ced2 +0x125a:  je     0830cf21 <+0x12a9>
0830ced4 +0x125c:  mov    -0x3c(%ebp),%eax
0830ced7 +0x125f:  movzbl 0x11(%eax),%eax
0830cedb +0x1263:  cmp    $0x1,%al
0830cedd +0x1265:  jne    0830cf21 <+0x12a9>
0830cedf +0x1267:  mov    -0x38(%ebp),%eax
0830cee2 +0x126a:  mov    %eax,(%esp)
0830cee5 +0x126d:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0830ceea +0x1272:  mov    %eax,-0x34(%ebp)
0830ceed +0x1275:  cmpl   $0x5,-0x34(%ebp)
0830cef1 +0x1279:  jg     0830cf1d <+0x12a5>
0830cef3 +0x127b:  cmpl   $0x0,-0x34(%ebp)
0830cef7 +0x127f:  js     0830cf20 <+0x12a8>
0830cef9 +0x1281:  mov    -0x34(%ebp),%eax
0830cefc +0x1284:  mov    0x8(%ebp),%edx
0830ceff +0x1287:  lea    0x74(%eax),%ecx
0830cf02 +0x128a:  mov    (%edx,%ecx,4),%edx
0830cf05 +0x128d:  lea    0x1(%edx),%ecx
0830cf08 +0x1290:  mov    0x8(%ebp),%edx
0830cf0b +0x1293:  add    $0x74,%eax
0830cf0e +0x1296:  mov    %ecx,(%edx,%eax,4)
0830cf11 +0x1299:  mov    0x8(%ebp),%eax
0830cf14 +0x129c:  movb   $0x1,0x1cf(%eax)
0830cf1b +0x12a3:  jmp    0830cf21 <+0x12a9>
0830cf1d +0x12a5:  nop
0830cf1e +0x12a6:  jmp    0830cf21 <+0x12a9>
0830cf20 +0x12a8:  nop
0830cf21 +0x12a9:  lea    -0xa8(%ebp),%eax
0830cf27 +0x12af:  movl   $0x0,0x8(%esp)
0830cf2f +0x12b7:  lea    -0x124(%ebp),%edx
0830cf35 +0x12bd:  mov    %edx,0x4(%esp)
0830cf39 +0x12c1:  mov    %eax,(%esp)
0830cf3c +0x12c4:  call   08311e84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a69>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a69
0830cf41 +0x12c9:  sub    $0x4,%esp
0830cf44 +0x12cc:  lea    -0xac(%ebp),%eax
0830cf4a +0x12d2:  lea    -0xf4(%ebp),%edx
0830cf50 +0x12d8:  mov    %edx,0x4(%esp)
0830cf54 +0x12dc:  mov    %eax,(%esp)
0830cf57 +0x12df:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
0830cf5c +0x12e4:  sub    $0x4,%esp
0830cf5f +0x12e7:  lea    -0xac(%ebp),%eax
0830cf65 +0x12ed:  mov    %eax,0x4(%esp)
0830cf69 +0x12f1:  lea    -0x124(%ebp),%eax
0830cf6f +0x12f7:  mov    %eax,(%esp)
0830cf72 +0x12fa:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
0830cf77 +0x12ff:  test   %al,%al
0830cf79 +0x1301:  jne    0830cea1 <+0x1229>
0830cf7f +0x1307:  mov    0x8(%ebp),%eax
0830cf82 +0x130a:  movzbl 0x1cf(%eax),%eax
0830cf89 +0x1311:  test   %al,%al
0830cf8b +0x1313:  je     0830d070 <+0x13f8>
0830cf91 +0x1319:  mov    0x8(%ebp),%eax
0830cf94 +0x131c:  movzbl 0x1ca(%eax),%eax
0830cf9b +0x1323:  test   %al,%al
0830cf9d +0x1325:  je     0830d070 <+0x13f8>
0830cfa3 +0x132b:  mov    0x8(%ebp),%eax
0830cfa6 +0x132e:  add    $0x1d0,%eax
0830cfab +0x1333:  mov    %eax,-0x154(%ebp)
0830cfb1 +0x1339:  mov    0x8(%ebp),%eax
0830cfb4 +0x133c:  movzbl 0x1cc(%eax),%eax
0830cfbb +0x1343:  movsbl %al,%eax
0830cfbe +0x1346:  mov    %eax,-0x150(%ebp)
0830cfc4 +0x134c:  mov    0x8(%ebp),%eax
0830cfc7 +0x134f:  mov    %eax,(%esp)
0830cfca +0x1352:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830cfcf +0x1357:  mov    %eax,%esi
0830cfd1 +0x1359:  mov    0x8(%ebp),%eax
0830cfd4 +0x135c:  mov    0x188(%eax),%eax
0830cfda +0x1362:  mov    %eax,(%esp)
0830cfdd +0x1365:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0830cfe2 +0x136a:  mov    %eax,%ebx
0830cfe4 +0x136c:  mov    0x8(%ebp),%eax
0830cfe7 +0x136f:  movzbl 0x1ce(%eax),%eax
0830cfee +0x1376:  movzbl %al,%edi
0830cff1 +0x1379:  call   0860fcb6 <_Z33GetInstanceHellPartyItemStatisticv>  ; GetInstanceHellPartyItemStatistic()
0830cff6 +0x137e:  mov    -0x154(%ebp),%edx
0830cffc +0x1384:  mov    %edx,0x18(%esp)
0830d000 +0x1388:  mov    -0x150(%ebp),%edx
0830d006 +0x138e:  mov    %edx,0x14(%esp)
0830d00a +0x1392:  mov    -0xa0(%ebp),%edx
0830d010 +0x1398:  mov    %edx,0x10(%esp)
0830d014 +0x139c:  mov    %esi,0xc(%esp)
0830d018 +0x13a0:  mov    %ebx,0x8(%esp)
0830d01c +0x13a4:  mov    %edi,0x4(%esp)
0830d020 +0x13a8:  mov    %eax,(%esp)
0830d023 +0x13ab:  call   0860fcc0 <_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi>  ; CHellPartyItemStatistic::SendHellPartyItemStatistic(bool, int, int, int, char, int*)
0830d028 +0x13b0:  xor    $0x1,%eax
0830d02b +0x13b3:  test   %al,%al
0830d02d +0x13b5:  je     0830d070 <+0x13f8>
0830d02f +0x13b7:  mov    0x8(%ebp),%eax
0830d032 +0x13ba:  mov    0x188(%eax),%eax
0830d038 +0x13c0:  mov    %eax,(%esp)
0830d03b +0x13c3:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0830d040 +0x13c8:  mov    %eax,0x14(%esp)
0830d044 +0x13cc:  movl   $"HELLPARTY_LOG : DUNGEON INDEX (%d) : HELLPARTY STATISTIC ERROR!!\n",0x10(%esp)
0830d04c +0x13d4:  movl   $0x1d04,0xc(%esp)
0830d054 +0x13dc:  movl   $&_ZZN13CBattle_Field12kill_monsterER11PacketGuardR11map_monsterRjRK17STKillMonsterDataE19__PRETTY_FUNCTION__,0x8(%esp)
0830d05c +0x13e4:  movl   $"battle_field.cpp",0x4(%esp)
0830d064 +0x13ec:  movl   $0x1,(%esp)
0830d06b +0x13f3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830d070 +0x13f8:  mov    0x14(%ebp),%eax
0830d073 +0x13fb:  mov    (%eax),%ebx
0830d075 +0x13fd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830d07a +0x1402:  mov    %eax,(%esp)
0830d07d +0x1405:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830d082 +0x140a:  mov    -0x90(%ebp),%edx
0830d088 +0x1410:  movzbl 0x338(%edx),%edx
0830d08f +0x1417:  movsbl %dl,%edx
0830d092 +0x141a:  add    $0x38,%edx
0830d095 +0x141d:  movzwl 0x2(%eax,%edx,2),%eax
0830d09a +0x1422:  cwtl
0830d09b +0x1423:  mov    %ebx,%edx
0830d09d +0x1425:  imul   %eax,%edx
0830d0a0 +0x1428:  mov    0x14(%ebp),%eax
0830d0a3 +0x142b:  mov    %edx,(%eax)
0830d0a5 +0x142d:  mov    0x8(%ebp),%eax
0830d0a8 +0x1430:  mov    0x188(%eax),%eax
0830d0ae +0x1436:  mov    0x90c(%eax),%eax
0830d0b4 +0x143c:  cmp    $0x1,%eax
0830d0b7 +0x143f:  jne    0830d15e <+0x14e6>
0830d0bd +0x1445:  mov    0x8(%ebp),%eax
0830d0c0 +0x1448:  lea    0x170(%eax),%edx
0830d0c6 +0x144e:  lea    -0x128(%ebp),%eax
0830d0cc +0x1454:  mov    %edx,0x4(%esp)
0830d0d0 +0x1458:  mov    %eax,(%esp)
0830d0d3 +0x145b:  call   0830fefa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1adf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1adf
0830d0d8 +0x1460:  sub    $0x4,%esp
0830d0db +0x1463:  mov    0x8(%ebp),%eax
0830d0de +0x1466:  lea    0x170(%eax),%edx
0830d0e4 +0x146c:  lea    -0x12c(%ebp),%eax
0830d0ea +0x1472:  mov    %edx,0x4(%esp)
0830d0ee +0x1476:  mov    %eax,(%esp)
0830d0f1 +0x1479:  call   0830ff38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b1d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b1d
0830d0f6 +0x147e:  sub    $0x4,%esp
0830d0f9 +0x1481:  jmp    0830d142 <+0x14ca>
0830d0fb +0x1483:  lea    -0x128(%ebp),%eax
0830d101 +0x1489:  mov    %eax,(%esp)
0830d104 +0x148c:  call   08311fd0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bb5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bb5
0830d109 +0x1491:  mov    (%eax),%edx
0830d10b +0x1493:  mov    -0x90(%ebp),%eax
0830d111 +0x1499:  mov    0xc(%eax),%eax
0830d114 +0x149c:  cmp    %eax,%edx
0830d116 +0x149e:  sete   %al
0830d119 +0x14a1:  test   %al,%al
0830d11b +0x14a3:  je     0830d134 <+0x14bc>
0830d11d +0x14a5:  lea    -0x128(%ebp),%eax
0830d123 +0x14ab:  mov    %eax,(%esp)
0830d126 +0x14ae:  call   08311fd0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bb5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bb5
0830d12b +0x14b3:  mov    0x10(%eax),%edx
0830d12e +0x14b6:  add    $0x1,%edx
0830d131 +0x14b9:  mov    %edx,0x10(%eax)
0830d134 +0x14bc:  lea    -0x128(%ebp),%eax
0830d13a +0x14c2:  mov    %eax,(%esp)
0830d13d +0x14c5:  call   08311fba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3b9f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3b9f
0830d142 +0x14ca:  lea    -0x12c(%ebp),%eax
0830d148 +0x14d0:  mov    %eax,0x4(%esp)
0830d14c +0x14d4:  lea    -0x128(%ebp),%eax
0830d152 +0x14da:  mov    %eax,(%esp)
0830d155 +0x14dd:  call   08311f8d <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3b72>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3b72
0830d15a +0x14e2:  test   %al,%al
0830d15c +0x14e4:  jne    0830d0fb <+0x1483>
0830d15e +0x14e6:  mov    -0x90(%ebp),%eax
0830d164 +0x14ec:  mov    0xc(%eax),%eax
0830d167 +0x14ef:  cmp    $0xdd8c,%eax
0830d16c +0x14f4:  jne    0830d1ae <+0x1536>
0830d16e +0x14f6:  mov    0x8(%ebp),%eax
0830d171 +0x14f9:  movzbl 0x139(%eax),%eax
0830d178 +0x1500:  cmp    $0x3,%al
0830d17a +0x1502:  jg     0830d188 <+0x1510>
0830d17c +0x1504:  mov    0x8(%ebp),%eax
0830d17f +0x1507:  movb   $0x1,0x138(%eax)
0830d186 +0x150e:  jmp    0830d192 <+0x151a>
0830d188 +0x1510:  mov    0x8(%ebp),%eax
0830d18b +0x1513:  movb   $0x2,0x138(%eax)
0830d192 +0x151a:  mov    0x8(%ebp),%eax
0830d195 +0x151d:  movzbl 0x138(%eax),%eax
0830d19c +0x1524:  movsbl %al,%eax
0830d19f +0x1527:  mov    %eax,0x4(%esp)
0830d1a3 +0x152b:  mov    0x8(%ebp),%eax
0830d1a6 +0x152e:  mov    %eax,(%esp)
0830d1a9 +0x1531:  call   0830d848 <_ZN13CBattle_Field25send_elevator_time_packetEc>  ; CBattle_Field::send_elevator_time_packet(char)
0830d1ae +0x1536:  mov    -0x94(%ebp),%eax
0830d1b4 +0x153c:  lea    0xc(%eax),%edx
0830d1b7 +0x153f:  mov    -0xe8(%ebp),%eax
0830d1bd +0x1545:  mov    %eax,0x4(%esp)
0830d1c1 +0x1549:  mov    %edx,(%esp)
0830d1c4 +0x154c:  call   08311946 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x352b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x352b
0830d1c9 +0x1551:  mov    0x8(%ebp),%eax
0830d1cc +0x1554:  mov    0x188(%eax),%eax
0830d1d2 +0x155a:  movzbl 0x89f(%eax),%eax
0830d1d9 +0x1561:  test   %al,%al
0830d1db +0x1563:  jle    0830d1fd <+0x1585>
0830d1dd +0x1565:  mov    -0x94(%ebp),%eax
0830d1e3 +0x156b:  add    $0xc,%eax
0830d1e6 +0x156e:  mov    %eax,(%esp)
0830d1e9 +0x1571:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
0830d1ee +0x1576:  mov    %eax,0x4(%esp)
0830d1f2 +0x157a:  mov    0x8(%ebp),%eax
0830d1f5 +0x157d:  mov    %eax,(%esp)
0830d1f8 +0x1580:  call   08304f8e <_ZN13CBattle_Field29checkKilledSpawnBloodMonstersEi>  ; CBattle_Field::checkKilledSpawnBloodMonsters(int)
0830d1fd +0x1585:  mov    -0x94(%ebp),%eax
0830d203 +0x158b:  add    $0x4c,%eax
0830d206 +0x158e:  mov    %eax,(%esp)
0830d209 +0x1591:  call   0830e78c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x371>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x371
0830d20e +0x1596:  test   %eax,%eax
0830d210 +0x1598:  jne    0830d234 <+0x15bc>
0830d212 +0x159a:  cmpl   $0x1,-0xa0(%ebp)
0830d219 +0x15a1:  jne    0830d234 <+0x15bc>
0830d21b +0x15a3:  mov    0x8(%ebp),%eax
0830d21e +0x15a6:  mov    %eax,(%esp)
0830d221 +0x15a9:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
0830d226 +0x15ae:  xor    $0x1,%eax
0830d229 +0x15b1:  test   %al,%al
0830d22b +0x15b3:  je     0830d234 <+0x15bc>
0830d22d +0x15b5:  mov    $0x1,%eax
0830d232 +0x15ba:  jmp    0830d239 <+0x15c1>
0830d234 +0x15bc:  mov    $0x0,%eax
0830d239 +0x15c1:  test   %al,%al
0830d23b +0x15c3:  je     0830d312 <+0x169a>
0830d241 +0x15c9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830d248 +0x15d0:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830d24d +0x15d5:  mov    -0x94(%ebp),%edx
0830d253 +0x15db:  add    $0x4c,%edx
0830d256 +0x15de:  movl   $0x3e8,0x8(%esp)
0830d25e +0x15e6:  mov    %eax,0x4(%esp)
0830d262 +0x15ea:  mov    %edx,(%esp)
0830d265 +0x15ed:  call   0830e748 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x32d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x32d
0830d26a +0x15f2:  cmp    $0x3,%eax
0830d26d +0x15f5:  sete   %al
0830d270 +0x15f8:  test   %al,%al
0830d272 +0x15fa:  je     0830d312 <+0x169a>
0830d278 +0x1600:  mov    -0x94(%ebp),%eax
0830d27e +0x1606:  add    $0x4c,%eax
0830d281 +0x1609:  mov    %eax,(%esp)
0830d284 +0x160c:  call   0830e71c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x301>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x301
0830d289 +0x1611:  movl   $0x0,-0x30(%ebp)
0830d290 +0x1618:  jmp    0830d307 <+0x168f>
0830d292 +0x161a:  mov    0x8(%ebp),%eax
0830d295 +0x161d:  mov    (%eax),%eax
0830d297 +0x161f:  mov    -0x30(%ebp),%edx
0830d29a +0x1622:  mov    %edx,0x4(%esp)
0830d29e +0x1626:  mov    %eax,(%esp)
0830d2a1 +0x1629:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830d2a6 +0x162e:  test   %al,%al
0830d2a8 +0x1630:  je     0830d303 <+0x168b>
0830d2aa +0x1632:  mov    0x8(%ebp),%eax
0830d2ad +0x1635:  mov    (%eax),%eax
0830d2af +0x1637:  mov    -0x30(%ebp),%edx
0830d2b2 +0x163a:  mov    %edx,0x4(%esp)
0830d2b6 +0x163e:  mov    %eax,(%esp)
0830d2b9 +0x1641:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0830d2be +0x1646:  mov    %eax,-0x2c(%ebp)
0830d2c1 +0x1649:  cmpl   $0x0,-0x2c(%ebp)
0830d2c5 +0x164d:  je     0830d303 <+0x168b>
0830d2c7 +0x164f:  mov    -0x2c(%ebp),%eax
0830d2ca +0x1652:  mov    %eax,(%esp)
0830d2cd +0x1655:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0830d2d2 +0x165a:  movl   $0x0,0x14(%esp)
0830d2da +0x1662:  movl   $0x0,0x10(%esp)
0830d2e2 +0x166a:  movl   $0x1,0xc(%esp)
0830d2ea +0x1672:  movl   $0xd0,0x8(%esp)
0830d2f2 +0x167a:  mov    -0x2c(%ebp),%edx
0830d2f5 +0x167d:  mov    %edx,0x4(%esp)
0830d2f9 +0x1681:  mov    %eax,(%esp)
0830d2fc +0x1684:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0830d301 +0x1689:  jmp    0830d312 <+0x169a>
0830d303 +0x168b:  addl   $0x1,-0x30(%ebp)
0830d307 +0x168f:  cmpl   $0x3,-0x30(%ebp)
0830d30b +0x1693:  setle  %al
0830d30e +0x1696:  test   %al,%al
0830d310 +0x1698:  jne    0830d292 <+0x161a>
0830d312 +0x169a:  mov    -0x94(%ebp),%eax
0830d318 +0x16a0:  add    $0x64,%eax
0830d31b +0x16a3:  mov    %eax,(%esp)
0830d31e +0x16a6:  call   0830e78c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x371>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x371
0830d323 +0x16ab:  test   %eax,%eax
0830d325 +0x16ad:  jne    0830d349 <+0x16d1>
0830d327 +0x16af:  cmpl   $0x1,-0xa0(%ebp)
0830d32e +0x16b6:  jne    0830d349 <+0x16d1>
0830d330 +0x16b8:  mov    0x8(%ebp),%eax
0830d333 +0x16bb:  mov    %eax,(%esp)
0830d336 +0x16be:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
0830d33b +0x16c3:  xor    $0x1,%eax
0830d33e +0x16c6:  test   %al,%al
0830d340 +0x16c8:  je     0830d349 <+0x16d1>
0830d342 +0x16ca:  mov    $0x1,%eax
0830d347 +0x16cf:  jmp    0830d34e <+0x16d6>
0830d349 +0x16d1:  mov    $0x0,%eax
0830d34e +0x16d6:  test   %al,%al
0830d350 +0x16d8:  je     0830d427 <+0x17af>
0830d356 +0x16de:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830d35d +0x16e5:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830d362 +0x16ea:  mov    -0x94(%ebp),%edx
0830d368 +0x16f0:  add    $0x64,%edx
0830d36b +0x16f3:  movl   $0xbb8,0x8(%esp)
0830d373 +0x16fb:  mov    %eax,0x4(%esp)
0830d377 +0x16ff:  mov    %edx,(%esp)
0830d37a +0x1702:  call   0830e748 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x32d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x32d
0830d37f +0x1707:  cmp    $0x3,%eax
0830d382 +0x170a:  sete   %al
0830d385 +0x170d:  test   %al,%al
0830d387 +0x170f:  je     0830d427 <+0x17af>
0830d38d +0x1715:  mov    -0x94(%ebp),%eax
0830d393 +0x171b:  add    $0x64,%eax
0830d396 +0x171e:  mov    %eax,(%esp)
0830d399 +0x1721:  call   0830e71c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x301>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x301
0830d39e +0x1726:  movl   $0x0,-0x28(%ebp)
0830d3a5 +0x172d:  jmp    0830d41c <+0x17a4>
0830d3a7 +0x172f:  mov    0x8(%ebp),%eax
0830d3aa +0x1732:  mov    (%eax),%eax
0830d3ac +0x1734:  mov    -0x28(%ebp),%edx
0830d3af +0x1737:  mov    %edx,0x4(%esp)
0830d3b3 +0x173b:  mov    %eax,(%esp)
0830d3b6 +0x173e:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830d3bb +0x1743:  test   %al,%al
0830d3bd +0x1745:  je     0830d418 <+0x17a0>
0830d3bf +0x1747:  mov    0x8(%ebp),%eax
0830d3c2 +0x174a:  mov    (%eax),%eax
0830d3c4 +0x174c:  mov    -0x28(%ebp),%edx
0830d3c7 +0x174f:  mov    %edx,0x4(%esp)
0830d3cb +0x1753:  mov    %eax,(%esp)
0830d3ce +0x1756:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0830d3d3 +0x175b:  mov    %eax,-0x24(%ebp)
0830d3d6 +0x175e:  cmpl   $0x0,-0x24(%ebp)
0830d3da +0x1762:  je     0830d418 <+0x17a0>
0830d3dc +0x1764:  mov    -0x24(%ebp),%eax
0830d3df +0x1767:  mov    %eax,(%esp)
0830d3e2 +0x176a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0830d3e7 +0x176f:  movl   $0x0,0x14(%esp)
0830d3ef +0x1777:  movl   $0x0,0x10(%esp)
0830d3f7 +0x177f:  movl   $0x1,0xc(%esp)
0830d3ff +0x1787:  movl   $0xd7,0x8(%esp)
0830d407 +0x178f:  mov    -0x24(%ebp),%edx
0830d40a +0x1792:  mov    %edx,0x4(%esp)
0830d40e +0x1796:  mov    %eax,(%esp)
0830d411 +0x1799:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0830d416 +0x179e:  jmp    0830d427 <+0x17af>
0830d418 +0x17a0:  addl   $0x1,-0x28(%ebp)
0830d41c +0x17a4:  cmpl   $0x3,-0x28(%ebp)
0830d420 +0x17a8:  setle  %al
0830d423 +0x17ab:  test   %al,%al
0830d425 +0x17ad:  jne    0830d3a7 <+0x172f>
0830d427 +0x17af:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830d42e +0x17b6:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830d433 +0x17bb:  mov    %eax,-0x88(%ebp)
0830d439 +0x17c1:  mov    -0x94(%ebp),%eax
0830d43f +0x17c7:  lea    0x4c(%eax),%edx
0830d442 +0x17ca:  movl   $0x2bc,0x8(%esp)
0830d44a +0x17d2:  mov    -0x88(%ebp),%eax
0830d450 +0x17d8:  mov    %eax,0x4(%esp)
0830d454 +0x17dc:  mov    %edx,(%esp)
0830d457 +0x17df:  call   0830e7a4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x389>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x389
0830d45c +0x17e4:  cmp    $0x4,%eax
0830d45f +0x17e7:  seta   %al
0830d462 +0x17ea:  test   %al,%al
0830d464 +0x17ec:  je     0830d50a <+0x1892>
0830d46a +0x17f2:  mov    -0x94(%ebp),%eax
0830d470 +0x17f8:  add    $0x4c,%eax
0830d473 +0x17fb:  movl   $0x0,0x4(%esp)
0830d47b +0x1803:  mov    %eax,(%esp)
0830d47e +0x1806:  call   0830e7dc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3c1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3c1
0830d483 +0x180b:  movl   $0x0,-0x20(%ebp)
0830d48a +0x1812:  jmp    0830d4ff <+0x1887>
0830d48c +0x1814:  mov    0x8(%ebp),%eax
0830d48f +0x1817:  mov    (%eax),%eax
0830d491 +0x1819:  mov    -0x20(%ebp),%edx
0830d494 +0x181c:  mov    %edx,0x4(%esp)
0830d498 +0x1820:  mov    %eax,(%esp)
0830d49b +0x1823:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830d4a0 +0x1828:  test   %al,%al
0830d4a2 +0x182a:  je     0830d4fb <+0x1883>
0830d4a4 +0x182c:  mov    0x8(%ebp),%eax
0830d4a7 +0x182f:  mov    (%eax),%eax
0830d4a9 +0x1831:  mov    -0x20(%ebp),%edx
0830d4ac +0x1834:  mov    %edx,0x4(%esp)
0830d4b0 +0x1838:  mov    %eax,(%esp)
0830d4b3 +0x183b:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0830d4b8 +0x1840:  mov    %eax,-0x1c(%ebp)
0830d4bb +0x1843:  cmpl   $0x0,-0x1c(%ebp)
0830d4bf +0x1847:  je     0830d4fb <+0x1883>
0830d4c1 +0x1849:  mov    -0x1c(%ebp),%eax
0830d4c4 +0x184c:  mov    %eax,(%esp)
0830d4c7 +0x184f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0830d4cc +0x1854:  movl   $0x0,0x14(%esp)
0830d4d4 +0x185c:  movl   $0x0,0x10(%esp)
0830d4dc +0x1864:  movl   $0x1,0xc(%esp)
0830d4e4 +0x186c:  movl   $0xde,0x8(%esp)
0830d4ec +0x1874:  mov    -0x1c(%ebp),%edx
0830d4ef +0x1877:  mov    %edx,0x4(%esp)
0830d4f3 +0x187b:  mov    %eax,(%esp)
0830d4f6 +0x187e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0830d4fb +0x1883:  addl   $0x1,-0x20(%ebp)
0830d4ff +0x1887:  cmpl   $0x3,-0x20(%ebp)
0830d503 +0x188b:  setle  %al
0830d506 +0x188e:  test   %al,%al
0830d508 +0x1890:  jne    0830d48c <+0x1814>
0830d50a +0x1892:  mov    -0x94(%ebp),%eax
0830d510 +0x1898:  lea    0x4c(%eax),%edx
0830d513 +0x189b:  mov    -0x88(%ebp),%eax
0830d519 +0x18a1:  mov    %eax,0x4(%esp)
0830d51d +0x18a5:  mov    %edx,(%esp)
0830d520 +0x18a8:  call   0830e796 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x37b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x37b
0830d525 +0x18ad:  mov    $0x1,%ebx
0830d52a +0x18b2:  lea    -0x108(%ebp),%eax
0830d530 +0x18b8:  mov    %eax,(%esp)
0830d533 +0x18bb:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
0830d538 +0x18c0:  jmp    0830d570 <+0x18f8>
0830d53a +0x18c2:  mov    %edx,%ebx
0830d53c +0x18c4:  mov    %eax,%esi
0830d53e +0x18c6:  lea    -0x108(%ebp),%eax
0830d544 +0x18cc:  mov    %eax,(%esp)
0830d547 +0x18cf:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
0830d54c +0x18d4:  mov    %esi,%eax
0830d54e +0x18d6:  mov    %ebx,%edx
0830d550 +0x18d8:  jmp    0830d552 <+0x18da>
0830d552 +0x18da:  mov    %edx,%ebx
0830d554 +0x18dc:  mov    %eax,%esi
0830d556 +0x18de:  lea    -0xf4(%ebp),%eax
0830d55c +0x18e4:  mov    %eax,(%esp)
0830d55f +0x18e7:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
0830d564 +0x18ec:  mov    %esi,%eax
0830d566 +0x18ee:  mov    %ebx,%edx
0830d568 +0x18f0:  mov    %eax,(%esp)
0830d56b +0x18f3:  call   08ae3750 <_Unwind_Resume>
0830d570 +0x18f8:  lea    -0xf4(%ebp),%eax
0830d576 +0x18fe:  mov    %eax,(%esp)
0830d579 +0x1901:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
0830d57e +0x1906:  mov    %ebx,%eax
0830d580 +0x1908:  lea    -0xc(%ebp),%esp
0830d583 +0x190b:  add    $0x0,%esp
0830d586 +0x190e:  pop    %ebx
0830d587 +0x190f:  pop    %esi
0830d588 +0x1910:  pop    %edi
0830d589 +0x1911:  pop    %ebp
0830d58a +0x1912:  ret
0830d58b +0x1913:  nop
```

## 反编译 C

```c
// CBattle_Field::kill_monster @ 0x830bc78

/* CBattle_Field::kill_monster(PacketGuard&, map_monster&, unsigned int&, STKillMonsterData const&)
    */

undefined4 __thiscall
CBattle_Field::kill_monster
          (CBattle_Field *this,PacketGuard *param_1,map_monster *param_2,uint *param_3,
          STKillMonsterData *param_4)

{
  ulonglong uVar1;
  map_monster mVar2;
  CBattle_Field CVar3;
  CBattle_Field CVar4;
  byte bVar5;
  char cVar6;
  uchar uVar7;
  bool bVar8;
  CUserCharacInfo *pCVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  CDataManager *pCVar15;
  int *piVar16;
  int iVar17;
  CHellPartyItemStatistic *this_00;
  uint uVar18;
  CHackAnalyzer *pCVar19;
  longdouble lVar20;
  ulonglong local_14c;
  __normal_iterator local_130 [4];
  __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
  local_12c [4];
  _List_iterator<map_item> local_128 [4];
  undefined4 local_124;
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_120 [4];
  multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
  local_11c [4];
  undefined4 local_118;
  int local_114;
  _Rb_tree_iterator<std::pair<int_const,int>> local_110 [4];
  vector<bool,std::allocator<bool>> local_10c [20];
  list<map_item,std::allocator<map_item>> local_f8 [11];
  bool local_ed;
  int local_ec;
  int local_e8;
  uint local_e4;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_e0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_dc [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_d8 [4];
  multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
  local_d4 [4];
  cMyTrace local_d0 [16];
  int local_c0 [3];
  int local_b4;
  _List_iterator local_b0 [4];
  _List_iterator<map_item> local_ac [6];
  ushort local_a6;
  int local_a4;
  int local_a0;
  STKillMonsterData local_9a;
  STKillMonsterData local_99;
  MapInfo *local_98;
  map_monster *local_94;
  bool local_8e;
  bool local_8d;
  uint local_8c;
  multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
  *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  CUser *local_70;
  CKillMonsterInfo *local_6c;
  CUser *local_68;
  CKillMonsterInfo *local_64;
  byte local_5d;
  int local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  CItem *local_3c;
  int local_38;
  int local_34;
  CUser *local_30;
  int local_2c;
  CUser *local_28;
  int local_24;
  CUser *local_20;
  
  local_e4 = (uint)*(ushort *)param_4;
  local_a6 = *(ushort *)(param_4 + 2);
  local_a4 = (int)(char)param_4[4];
  local_a0 = *(int *)(param_4 + 8);
  local_e8 = *(int *)(param_4 + 0xc);
  local_9a = param_4[0x10];
  local_99 = param_4[0x11];
  local_98 = (MapInfo *)GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (&local_ec);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_e0);
  cVar6 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_ec,
                     (_Rb_tree_iterator *)local_e0);
  if (cVar6 != '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
              ((int *)local_110);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_dc);
    cVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_110,(_Rb_tree_iterator *)local_dc);
    if (cVar6 != '\0') {
      if (*(int *)this == 0) {
        uVar10 = 0;
      }
      else {
        pCVar9 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
        uVar10 = CUserCharacInfo::getCurCharacNo(pCVar9);
      }
      iVar11 = GetCurrentMapInfo(this);
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                 ,0x1ba7,
                 "MOVE_MAP_LOG : kill_monster monster_map_trace_.find() fail ERROR monster_uid(%d), grid(%d,%d) map_index(%d) charac_no (%u)"
                 ,local_e4,*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                 *(undefined4 *)(iVar11 + 4),uVar10);
    }
    return 0;
  }
  if (local_99 != (STKillMonsterData)0x0) {
    iVar11 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_ec);
    *(undefined1 *)(iVar11 + 0x34f) = 1;
  }
  iVar11 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                     ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_ec);
  local_94 = (map_monster *)(iVar11 + 4);
  if ((*(int *)(this + 0x188) == 0) ||
     (cVar6 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0x188)), cVar6 == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    local_114 = GetTournamentCurRound(this);
    iVar11 = GetCurrentMapInfo(this);
    local_88 = (multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                *)(iVar11 + 0xd0);
    std::multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
    lower_bound((multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                 *)&local_118,(int *)local_88);
    piVar16 = &local_114;
    std::multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
    upper_bound(local_11c,(int *)local_88);
    local_124 = local_118;
    while (cVar6 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_124,
                              (_Rb_tree_iterator *)local_11c), cVar6 != '\0') {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_124);
      if (*(int *)(iVar11 + 8) == *(int *)(local_94 + 4)) {
        std::
        multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        erase(local_88,local_124,piVar16);
        break;
      }
      piVar16 = (int *)0x0;
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_d8,(int)&local_124)
      ;
    }
    std::multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
    find((int *)local_120);
    std::multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
    end(local_d4);
    cVar6 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                      (local_120,(_Rb_tree_iterator *)local_d4);
    if ((cVar6 != '\0') &&
       (local_84 = CDungeon::getTournamentRoundFatigue(*(CDungeon **)(this + 0x188)), local_114 != 4
       )) {
      for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
        cVar6 = CParty::checkValidUser(*(CParty **)this,local_80);
        iVar11 = local_84;
        if (cVar6 == '\x01') {
          iVar17 = CParty::GetMember(*(CParty **)this);
          CUser::FatigueUp(*(CUser **)(iVar17 + local_80 * 0x18),iVar11);
          iVar11 = CParty::GetMember(*(CParty **)this);
          CUser::SendFatigue(*(CUser **)(iVar11 + local_80 * 0x18));
        }
      }
      SetTournamentCurRound(this,local_114 + 1);
    }
  }
  local_ed = false;
  if (*(short *)(local_94 + 0x334) != 0) {
    iVar11 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_ec);
    KillHellPartyGroupMonsterCnt(this,local_98,(map_monster *)(iVar11 + 4),&local_ed);
  }
  if ((char)local_94[8] < '\x04') {
    iVar11 = G_CDataManager();
    local_7c = CDataManager::find_monster(iVar11);
    if (local_7c == 0) {
      if (*(short *)(local_94 + 0x334) == 0) {
        LogManager::logFormat
                  (1,"battle_field.cpp",
                   "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                   ,0x1bf3,"G_CDataManager()->find_monster(%u) fail",*(undefined4 *)(local_94 + 0xc)
                  );
        return 0;
      }
      uVar18 = *(uint *)(local_94 + 0xc);
      iVar11 = G_CDataManager();
      local_78 = CAICharacterList::get(*(CAICharacterList **)(iVar11 + 0x869c),uVar18);
      if (local_78 == 0) {
        LogManager::logFormat
                  (1,"battle_field.cpp",
                   "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                   ,0x1bed,"G_CDataManager()->find_monster(%u) fail",*(undefined4 *)(local_94 + 0xc)
                  );
        return 0;
      }
    }
  }
  else {
    if ('\b' < (char)local_94[8]) {
      if (*(int *)this == 0) {
        uVar10 = 0;
      }
      else {
        pCVar9 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
        uVar10 = CUserCharacInfo::getCurCharacNo(pCVar9);
      }
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                 ,0x1c03,
                 "MOVE_MAP_LOG : kill_monster role_type(%d) ERROR monster_uid(%d), grid(%d,%d) charac_no (%u)"
                 ,(int)(char)local_94[8],local_e4,*(undefined4 *)(this + 0x60),
                 *(undefined4 *)(this + 100),uVar10);
      return 0;
    }
    uVar18 = *(uint *)(local_94 + 0xc);
    iVar11 = G_CDataManager();
    local_74 = CAICharacterList::get(*(CAICharacterList **)(iVar11 + 0x869c),uVar18);
    if (local_74 == 0) {
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                 ,0x1bfd,"G_CDataManager()->aiCharacterList_->get(%u) fail",
                 *(undefined4 *)(local_94 + 0xc));
      return 0;
    }
  }
  map_monster::operator=(param_2,local_94);
  local_8e = false;
  local_8d = false;
  cVar6 = CParty::IsSinglePlay(*(CParty **)this);
  if (cVar6 == '\0') {
    local_68 = (CUser *)CParty::getManager(*(CParty **)this);
    local_64 = (CKillMonsterInfo *)CUser::GetCharacExpandData(local_68,0xc);
    if (param_2[8] == (map_monster)0x3) {
      uVar7 = get_dungeon_diff(this);
      cVar6 = CKillMonsterInfo::CheckBossKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
      if (cVar6 == '\x01') {
        uVar7 = get_dungeon_diff(this);
        CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
      }
      else {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::RegisterBossKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 != '\0') {
          local_8e = true;
          uVar7 = get_dungeon_diff(this);
          CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
        }
      }
    }
    else if (param_2[8] == (map_monster)0x8) {
      uVar7 = get_dungeon_diff(this);
      cVar6 = CKillMonsterInfo::CheckAPCBossKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
      if (cVar6 == '\x01') {
        uVar7 = get_dungeon_diff(this);
        CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
      }
      else {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::RegisterAPCBossKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 != '\0') {
          local_8e = true;
          uVar7 = get_dungeon_diff(this);
          CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
        }
      }
    }
    else {
      cVar6 = map_monster::isNamedMonster(param_2);
      if (cVar6 != '\0') {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::CheckNamedKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 == '\x01') {
          uVar7 = get_dungeon_diff(this);
          CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
        }
        else {
          uVar7 = get_dungeon_diff(this);
          cVar6 = CKillMonsterInfo::RegisterNamedKill(local_64,*(uint *)(param_2 + 0xc),uVar7);
          if (cVar6 != '\0') {
            local_8d = true;
            uVar7 = get_dungeon_diff(this);
            CParty::MemberRegisterKillMonster(*(CParty **)this,param_2,uVar7);
          }
        }
      }
    }
  }
  else {
    local_70 = (CUser *)CParty::getManager(*(CParty **)this);
    local_6c = (CKillMonsterInfo *)CUser::GetCharacExpandData(local_70,0xc);
    if (param_2[8] == (map_monster)0x3) {
      uVar7 = get_dungeon_diff(this);
      cVar6 = CKillMonsterInfo::CheckBossKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
      if (cVar6 != '\x01') {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::RegisterBossKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 != '\0') {
          local_8e = true;
        }
      }
    }
    else if (param_2[8] == (map_monster)0x8) {
      uVar7 = get_dungeon_diff(this);
      cVar6 = CKillMonsterInfo::CheckAPCBossKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
      if (cVar6 != '\x01') {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::RegisterAPCBossKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 != '\0') {
          local_8e = true;
        }
      }
    }
    else {
      cVar6 = map_monster::isNamedMonster(param_2);
      if (cVar6 != '\0') {
        uVar7 = get_dungeon_diff(this);
        cVar6 = CKillMonsterInfo::CheckNamedKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
        if (cVar6 != '\x01') {
          uVar7 = get_dungeon_diff(this);
          cVar6 = CKillMonsterInfo::RegisterNamedKill(local_6c,*(uint *)(param_2 + 0xc),uVar7);
          if (cVar6 != '\0') {
            local_8d = true;
          }
        }
      }
    }
  }
  if ((local_8e != false) || (local_8d != false)) {
    uVar12 = get_dungeon_diff(this);
    uVar13 = get_dungeon_index(this);
    mVar2 = param_2[8];
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    cVar6 = CParty::IsSinglePlay(*(CParty **)this);
    pCVar9 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
    uVar14 = CUserCharacInfo::getCurCharacNo(pCVar9);
    cMyTrace::cMyTrace(local_d0,
                       "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                       ,0x1c67,0);
    cMyTrace::operator()
              (local_d0,
               "First Monster KILL : charac_no(%d), single_mode(%d), mob_index(%d), mob_type(%d), dungeon_index(%d), dungeon_diff(%d)"
               ,uVar14,(uint)(cVar6 != '\0'),uVar10,(int)(char)mVar2,uVar13,uVar12);
  }
  std::list<map_item,std::allocator<map_item>>::list(local_f8);
                    /* try { // try from 0830c88c to 0830c890 has its CatchHandler @ 0830d552 */
  std::vector<bool,std::allocator<bool>>::vector(local_10c);
                    /* try { // try from 0830c8a5 to 0830d4fa has its CatchHandler @ 0830d53a */
  std::vector<bool,std::allocator<bool>>::push_back(local_10c,local_8e);
  std::vector<bool,std::allocator<bool>>::push_back(local_10c,local_8d);
  if (((*(int *)(local_94 + 0x2c) == 100) && (local_9a != (STKillMonsterData)0x1)) &&
     (*(int *)(this + 0x1b4) != 1)) {
    cVar6 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,1);
    if (cVar6 != '\0') {
      lVar20 = (longdouble)
               CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,1);
      local_58 = (float)lVar20;
      pCVar15 = (CDataManager *)G_CDataManager();
      lVar20 = (longdouble)CDataManager::getDropRate(pCVar15);
      uVar1 = (ulonglong)ROUND(lVar20);
      local_14c._0_4_ = (int)uVar1;
      local_54 = (int)local_14c;
      local_14c = uVar1 & 0xffffffff;
      if ((float)local_14c < local_58) {
        local_14c = uVar1 & 0xffffffff;
        local_14c._0_4_ = (int)(longlong)ROUND((local_58 - (float)local_14c) * (float)local_e8);
        local_e8 = (int)local_14c + local_e8;
        local_c0[0] = (int)ROUND((float)local_e8 * local_58);
        piVar16 = std::min<int>(&local_e8,local_c0);
        local_c0[1] = 0;
        piVar16 = std::max<int>(local_c0 + 1,piVar16);
        local_e8 = *piVar16;
      }
    }
    cVar6 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,4);
    if (cVar6 != '\0') {
      lVar20 = (longdouble)
               CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,4);
      local_50 = (float)lVar20;
      pCVar15 = (CDataManager *)G_CDataManager();
      lVar20 = (longdouble)CDataManager::getDropRate(pCVar15);
      uVar1 = (ulonglong)ROUND(lVar20);
      local_14c._0_4_ = (int)uVar1;
      local_4c = (int)local_14c;
      local_14c = uVar1 & 0xffffffff;
      if ((float)local_14c < local_50) {
        local_14c = uVar1 & 0xffffffff;
        local_14c._0_4_ = (int)(longlong)ROUND((local_50 - (float)local_14c) * (float)local_e8);
        local_e8 = (int)local_14c + local_e8;
        local_c0[2] = (int)ROUND((float)local_e8 * local_50);
        piVar16 = std::min<int>(&local_e8,local_c0 + 2);
        local_b4 = 0;
        piVar16 = std::max<int>(&local_b4,piVar16);
        local_e8 = *piVar16;
      }
    }
    local_5d = 0;
    local_5c = 0;
    for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
      cVar6 = CParty::checkValidUser(*(CParty **)this,local_48);
      if (cVar6 == '\x01') {
        iVar11 = CParty::GetMember(*(CParty **)this);
        cVar6 = CUser::isAffectedPremium(*(CUser **)(iVar11 + local_48 * 0x18),0x4f);
        if (cVar6 != '\0') {
          local_5d = local_5d + 1;
        }
      }
    }
    if ((local_5d != 0) && (local_5d < 5)) {
      for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
        cVar6 = CParty::checkValidUser(*(CParty **)this,local_44);
        bVar5 = local_5d;
        if (cVar6 == '\x01') {
          iVar11 = CParty::GetMember(*(CParty **)this);
          local_5c = CUser::getAddIndependentDropRateFromPremium
                               (*(CUser **)(iVar11 + local_44 * 0x18),0x4f,bVar5);
          break;
        }
      }
    }
    _MakeDropItems(this,(list *)local_f8,local_98,local_94,local_a6,local_a4,local_a0,local_e8,
                   local_ed,(vector *)local_10c,*(float *)(param_4 + 0x14),local_5c);
  }
  cVar6 = convertAPCRoleType2MonsterRoleType(this,(char)local_94[8]);
  if ((cVar6 == '\x01') && (iVar11 = rand(), iVar11 != (iVar11 / 100) * 100 && -1 < iVar11 % 100)) {
    *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + 1;
  }
  _MakeNotiPacketDieMonster(this,param_1,(list *)local_f8,local_e4,local_a6,local_94,param_2);
  mVar2 = local_94[0x10];
  pCVar15 = (CDataManager *)G_CDataManager();
  CDataManager::get_mob_reward(pCVar15,(uint)(byte)mVar2,param_3);
  if (*(short *)(local_94 + 0x334) != 0) {
    if (((*(int *)(this + 0x188) == 0) ||
        (iVar11 = std::list<map_item,std::allocator<map_item>>::size(), iVar11 == 0)) ||
       (local_ed == false)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      std::list<map_item,std::allocator<map_item>>::begin();
      while( true ) {
        std::list<map_item,std::allocator<map_item>>::end();
        cVar6 = std::_List_iterator<map_item>::operator!=(local_128,local_b0);
        if (cVar6 == '\0') break;
        local_40 = std::_List_iterator<map_item>::operator*(local_128);
        iVar11 = *(int *)(local_40 + 0x12);
        pCVar15 = (CDataManager *)G_CDataManager();
        local_3c = (CItem *)CDataManager::find_item(pCVar15,iVar11);
        if (((local_3c != (CItem *)0x0) && (*(char *)(local_40 + 0x11) == '\x01')) &&
           ((local_38 = CItem::get_rarity(local_3c), local_38 < 6 && (-1 < local_38)))) {
          *(int *)(this + (local_38 + 0x74) * 4) = *(int *)(this + (local_38 + 0x74) * 4) + 1;
          this[0x1cf] = (CBattle_Field)0x1;
        }
        std::_List_iterator<map_item>::operator++(local_ac,(int)local_128);
      }
      if ((this[0x1cf] != (CBattle_Field)0x0) && (this[0x1ca] != (CBattle_Field)0x0)) {
        CVar3 = this[0x1cc];
        iVar11 = get_dungeon_diff(this);
        iVar17 = CDungeon::get_index(*(CDungeon **)(this + 0x188));
        CVar4 = this[0x1ce];
        this_00 = (CHellPartyItemStatistic *)GetInstanceHellPartyItemStatistic();
        cVar6 = CHellPartyItemStatistic::SendHellPartyItemStatistic
                          (this_00,(bool)CVar4,iVar17,iVar11,local_a4,(char)CVar3,
                           (int *)(this + 0x1d0));
        if (cVar6 != '\x01') {
          uVar10 = CDungeon::get_index(*(CDungeon **)(this + 0x188));
          LogManager::logFormat
                    (1,"battle_field.cpp",
                     "bool CBattle_Field::kill_monster(PacketGuard&, map_monster&, uint&, const STKillMonsterData&)"
                     ,0x1d04,"HELLPARTY_LOG : DUNGEON INDEX (%d) : HELLPARTY STATISTIC ERROR!!\n",
                     uVar10);
        }
      }
    }
    uVar18 = *param_3;
    G_CDataManager();
    iVar11 = CDataManager::get_hellparty_script_values();
    *param_3 = uVar18 * (int)*(short *)(iVar11 + 2 + ((char)local_94[0x338] + 0x38) * 2);
  }
  if (*(int *)(*(int *)(this + 0x188) + 0x90c) == 1) {
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::begin();
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::end();
    while (bVar8 = __gnu_cxx::operator!=(local_12c,local_130), bVar8) {
      piVar16 = (int *)__gnu_cxx::
                       __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                       ::operator->(local_12c);
      if (*piVar16 == *(int *)(local_94 + 0xc)) {
        iVar11 = __gnu_cxx::
                 __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                 ::operator->(local_12c);
        *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      }
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
      ::operator++(local_12c);
    }
  }
  if (*(int *)(local_94 + 0xc) == 0xdd8c) {
    if ((char)this[0x139] < '\x04') {
      this[0x138] = (CBattle_Field)0x1;
    }
    else {
      this[0x138] = (CBattle_Field)0x2;
    }
    send_elevator_time_packet(this,(char)this[0x138]);
  }
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::erase
            ((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> *
             )(local_98 + 0xc),local_ec);
  if ('\0' < *(char *)(*(int *)(this + 0x188) + 0x89f)) {
    iVar11 = std::
             map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
             size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(local_98 + 0xc));
    checkKilledSpawnBloodMonsters(this,iVar11);
  }
  iVar11 = stMapMonsterKillChecker_t::getUseSkillMaterialTime
                     ((stMapMonsterKillChecker_t *)(local_98 + 0x4c));
  if (((iVar11 == 0) && (local_a4 == 1)) && (cVar6 = IsClearDungeon(this), cVar6 != '\x01')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar18 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    iVar11 = stMapMonsterKillChecker_t::dieMonster
                       ((stMapMonsterKillChecker_t *)(local_98 + 0x4c),uVar18,1000);
    if (iVar11 == 3) {
      stMapMonsterKillChecker_t::initMonsterInfo((stMapMonsterKillChecker_t *)(local_98 + 0x4c));
      for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
        cVar6 = CParty::checkValidUser(*(CParty **)this,local_34);
        if ((cVar6 != '\0') &&
           (local_30 = (CUser *)CParty::get_user(*(CParty **)this,local_34),
           local_30 != (CUser *)0x0)) {
          pCVar19 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_30);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar19,local_30,0xd0,1,0,0);
          break;
        }
      }
    }
  }
  iVar11 = stMapMonsterKillChecker_t::getUseSkillMaterialTime
                     ((stMapMonsterKillChecker_t *)(local_98 + 100));
  if (((iVar11 == 0) && (local_a4 == 1)) && (cVar6 = IsClearDungeon(this), cVar6 != '\x01')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar18 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    iVar11 = stMapMonsterKillChecker_t::dieMonster
                       ((stMapMonsterKillChecker_t *)(local_98 + 100),uVar18,3000);
    if (iVar11 == 3) {
      stMapMonsterKillChecker_t::initMonsterInfo((stMapMonsterKillChecker_t *)(local_98 + 100));
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        cVar6 = CParty::checkValidUser(*(CParty **)this,local_2c);
        if ((cVar6 != '\0') &&
           (local_28 = (CUser *)CParty::get_user(*(CParty **)this,local_2c),
           local_28 != (CUser *)0x0)) {
          pCVar19 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_28);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar19,local_28,0xd7,1,0,0);
          break;
        }
      }
    }
  }
  local_8c = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  uVar18 = stMapMonsterKillChecker_t::checkLongTermMobDie
                     ((stMapMonsterKillChecker_t *)(local_98 + 0x4c),local_8c,700);
  if (4 < uVar18) {
    stMapMonsterKillChecker_t::setUncontinuallyMobDieCnt
              ((stMapMonsterKillChecker_t *)(local_98 + 0x4c),0);
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      cVar6 = CParty::checkValidUser(*(CParty **)this,local_24);
      if ((cVar6 != '\0') &&
         (local_20 = (CUser *)CParty::get_user(*(CParty **)this,local_24), local_20 != (CUser *)0x0)
         ) {
        pCVar19 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_20);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar19,local_20,0xde,1,0,0);
      }
    }
  }
  stMapMonsterKillChecker_t::setLastMobDieTime
            ((stMapMonsterKillChecker_t *)(local_98 + 0x4c),local_8c);
                    /* try { // try from 0830d533 to 0830d537 has its CatchHandler @ 0830d552 */
  std::vector<bool,std::allocator<bool>>::~vector(local_10c);
  std::list<map_item,std::allocator<map_item>>::~list(local_f8);
  return 1;
}
```
